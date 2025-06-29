package states.debug;

import flixel.FlxState;
import flixel.FlxG;
import flixel.FlxSprite;
import flixel.text.FlxText;
import flixel.math.FlxPoint;
import flixel.ui.FlxButton;
import flixel.util.FlxColor;
import blocks.Blocks;
import blocks.EventBlocks;
import StringTools;
import states.menu.MenuDebugState;
import sys.FileSystem;
import sys.io.File;

class EventsEditorState extends FlxState {
    // --- Variables principales ---
    var sidebar:FlxSprite;
    var scriptArea:FlxSprite;
    var listaBloques:FlxSprite;
    var categorias:Array<String>;
    var categoriaSeleccionada:String;
    var categoriasTxt:Array<{txt:FlxText, cat:String}> = [];
    
    var bloquesEnScript:Array<FlxSprite> = [];
    var bloqueArrastrado:FlxSprite = null;
    var bloquesDisponibles:Array<FlxSprite> = [];
    var offsetArrastre:FlxPoint = new FlxPoint();
    var bloqueOriginal:FlxSprite = null;
    var editandoParametro:Bool = false;
    var bloqueEditando:FlxSprite = null;
    var textosBloque:Array<FlxText> = [];
    var bloquesInfo:Array<BloqueInfo> = [];
    var nombreEvento:String = "MiEvento";
    var inputNombre:FlxText;
    var confirmDialog:FlxSprite;
    var showingDialog:Bool = false;
    
    // Devuelve el color para cada categoría
    function getCategoriaColor(cat:String, seleccionado:Bool):Int {
        return switch (cat) {
            case "event": seleccionado ? 0xFFFFD600 : 0xFFBCA800;
            case "effect": seleccionado ? 0xFF80D8FF : 0xFF0091EA;
            default: seleccionado ? 0xFF8000FF : 0xFF333333;
        }
    }

    override public function create():Void {
        super.create();

        // --- Sidebar ---
        sidebar = new FlxSprite(0, 0);
        sidebar.makeGraphic(120, 900, 0x86F8F8F8);
        add(sidebar);

        // --- Área de scripts ---
        scriptArea = new FlxSprite(450, 20);
        scriptArea.makeGraphic(500, FlxG.height - 40, 0xFF2D2D2D);
        add(scriptArea);
        
        var titulo = new FlxText(460, 30, 0, "🎵 Eventos del Chart");
        titulo.setFormat(null, 18, FlxColor.WHITE);
        add(titulo);
        
        // Campo de nombre
        var labelNombre = new FlxText(460, 60, 0, "Nombre:");
        labelNombre.setFormat(null, 14, FlxColor.WHITE);
        add(labelNombre);
        
        inputNombre = new FlxText(520, 60, 200, nombreEvento);
        inputNombre.setFormat(null, 14, FlxColor.YELLOW);
        add(inputNombre);

        // --- Categorías ---
        categorias = EventBlocks.getCategorias();
        categoriaSeleccionada = categorias.length > 0 ? categorias[0] : "";

        // --- Mostrar categorías en sidebar ---
        var y = 30;
        for (cat in categorias) {
            var txt = new FlxText(10, y, 100, cat);
            txt.size = 16;
            txt.color = getCategoriaColor(cat, cat == categoriaSeleccionada);
            txt.borderStyle = flixel.text.FlxTextBorderStyle.OUTLINE;
            txt.borderColor = 0xFF000000;
            txt.scrollFactor.set(0, 0);
            txt.ID = y;
            txt.active = true;
            txt.moves = false;
            txt.immovable = true;
            add(txt);
            categoriasTxt.push({txt: txt, cat: cat});
            y += 32;
        }

        // --- Lista de bloques de la categoría seleccionada ---
        refrescarListaBloques();
        
        // --- Botón para volver ---
        var btnGuardar = new FlxButton(FlxG.width - 240, 10, "💾 Guardar", guardarEventos);
        add(btnGuardar);
        
        var btnVolver = new FlxButton(FlxG.width - 120, 10, "← Volver", function() {
            FlxG.switchState(MenuDebugState.new);
        });
        add(btnVolver);
    }
    
    override public function update(elapsed:Float):Void {
        super.update(elapsed);

        // --- Detectar clic en categorías ---
        if (FlxG.mouse.justPressed) {
            for (item in categoriasTxt) {
                if (item.txt.overlapsPoint(FlxG.mouse.getPosition())) {
                    if (categoriaSeleccionada != item.cat) {
                        categoriaSeleccionada = item.cat;
                        refrescarListaBloques();
                        for (c in categoriasTxt) {
                            c.txt.color = getCategoriaColor(c.cat, c.cat == categoriaSeleccionada);
                        }
                    }
                    return;
                }
            }
            
            // --- Detectar clic en bloques de la paleta ---
            for (i in 0...bloquesDisponibles.length) {
                var bloque = bloquesDisponibles[i];
                if (bloque.overlapsPoint(FlxG.mouse.getPosition())) {
                    // Crear clon del bloque con decoración
                    bloqueOriginal = bloque;
                    var bloqueInfo = EventBlocks.getBloquesPorCategoria(categoriaSeleccionada)[i];
                    var clon = crearBloqueVisual(bloqueInfo, bloque.x, bloque.y);
                    add(clon);
                    
                    // Crear texto para el clon
                    var texto = new FlxText(bloque.x + 15, bloque.y + 15, 210, bloqueInfo.nombre);
                    texto.setFormat(null, 12, FlxColor.WHITE, "left");
                    texto.setBorderStyle(FlxTextBorderStyle.OUTLINE, FlxColor.BLACK, 1);
                    add(texto);
                    textosBloque.push(texto);
                    
                    bloqueArrastrado = clon;
                    offsetArrastre.set(FlxG.mouse.x - bloque.x, FlxG.mouse.y - bloque.y);
                    return;
                }
            }
            
            // --- Detectar clic en bloques del área de scripts ---
            for (i in 0...bloquesEnScript.length) {
                var bloque = bloquesEnScript[i];
                if (bloque.overlapsPoint(FlxG.mouse.getPosition())) {
                    bloqueArrastrado = bloque;
                    offsetArrastre.set(FlxG.mouse.x - bloque.x, FlxG.mouse.y - bloque.y);
                    return;
                }
            }
        }
        
        // --- Arrastrar ---
        if (bloqueArrastrado != null) {
            if (FlxG.mouse.pressed) {
                var nuevaX = FlxG.mouse.x - offsetArrastre.x;
                var nuevaY = FlxG.mouse.y - offsetArrastre.y;
                bloqueArrastrado.x = nuevaX;
                bloqueArrastrado.y = nuevaY;
                
                // Mover el texto junto con el bloque
                var indice = bloquesEnScript.indexOf(bloqueArrastrado);
                if (indice == -1) {
                    // Es un bloque siendo arrastrado desde la paleta
                    var ultimoTexto = textosBloque[textosBloque.length - 1];
                    if (ultimoTexto != null) {
                        ultimoTexto.x = nuevaX + 15;
                        ultimoTexto.y = nuevaY + 15;
                    }
                } else {
                    // Es un bloque del área de scripts - encontrar su texto
                    for (i in 0...textosBloque.length) {
                        var texto = textosBloque[i];
                        if (texto != null) {
                            var distanciaX = Math.abs(texto.x - (bloqueArrastrado.x + 15));
                            var distanciaY = Math.abs(texto.y - (bloqueArrastrado.y + 15));
                            if (distanciaX < 20 && distanciaY < 20) {
                                texto.x = nuevaX + 15;
                                texto.y = nuevaY + 15;
                                break;
                            }
                        }
                    }
                }
            } else {
                // Soltar
                if (scriptArea.overlapsPoint(FlxG.mouse.getPosition())) {
                    var indiceExistente = bloquesEnScript.indexOf(bloqueArrastrado);
                    if (indiceExistente == -1) {
                        bloquesEnScript.push(bloqueArrastrado);
                    }
                    ordenarBloques();
                    dibujarConectores();
                } else {
                    remove(bloqueArrastrado);
                    var ultimoTexto = textosBloque[textosBloque.length - 1];
                    if (ultimoTexto != null) {
                        remove(ultimoTexto);
                        textosBloque.remove(ultimoTexto);
                    }
                }
                bloqueArrastrado = null;
                bloqueOriginal = null;
            }
        }

        // --- Ejecutar bloques con clic ---
        if (FlxG.mouse.justReleased && bloqueArrastrado == null) {
            for (i in 0...bloquesEnScript.length) {
                var bloque = bloquesEnScript[i];
                if (bloque.overlapsPoint(FlxG.mouse.getPosition())) {
                    var texto = obtenerTextoBloque(i);
                    if (texto != null) {
                        // Ejecutar bloque
                        ejecutarBloque(texto.text);
                        break;
                    }
                }
            }
        }
        
        // --- Edición de parámetros con tecla E ---
        if (FlxG.keys.justPressed.E && !editandoParametro) {
            for (i in 0...bloquesEnScript.length) {
                var bloque = bloquesEnScript[i];
                if (bloque.overlapsPoint(FlxG.mouse.getPosition())) {
                    var texto = obtenerTextoBloque(i);
                    if (texto != null && (texto.text.indexOf("(") != -1 || texto.text.indexOf("[") != -1)) {
                        bloqueEditando = bloque;
                        editandoParametro = true;
                        break;
                    }
                }
            }
        } else if (editandoParametro) {
            // Editar parámetros con teclado
            if (FlxG.keys.justPressed.ENTER) {
                editandoParametro = false;
                bloqueEditando = null;
            } else if (bloqueEditando != null) {
                // Números con () - usar flechas
                if (FlxG.keys.justPressed.UP) {
                    modificarParametroNumerico(bloqueEditando, 1);
                } else if (FlxG.keys.justPressed.DOWN) {
                    modificarParametroNumerico(bloqueEditando, -1);
                }
                // Letras con [] - usar teclas
                else {
                    modificarParametroTexto(bloqueEditando);
                }
            }
        }
        
        // --- Tecla ESC para volver ---
        if (FlxG.keys.justPressed.ESCAPE && !editandoParametro) {
            FlxG.switchState(MenuDebugState.new);
        }
    }
    
    // --- Crear bloque visual estilo Scratch ---
    function crearBloqueVisual(bloque:BloqueInfo, x:Float, y:Float):FlxSprite {
        var bloqueSprite = new FlxSprite(x, y);
        
        var ancho = 240;
        var alto = 50;
        bloqueSprite.makeGraphic(ancho, alto, 0x00000000, true);
        
        var pixels = bloqueSprite.pixels;
        var colorPrincipal = bloque.color;
        var colorOscuro = colorPrincipal - 0x404040;
        var colorClaro = colorPrincipal + 0x202020;
        
        // Dibujar forma de bloque Scratch
        for (py in 0...alto) {
            for (px in 0...ancho) {
                var dibujar = false;
                
                if (py >= 8 && py < alto-8 && px >= 8 && px < ancho-8) {
                    dibujar = true;
                }
                else if (py >= 0 && py < 8 && px >= 20 && px < 60) {
                    dibujar = true;
                }
                else if (py >= alto-8 && py < alto && px >= 20 && px < 60) {
                    dibujar = true;
                }
                else if ((px >= 4 && px < ancho-4) || (py >= 4 && py < alto-4)) {
                    if (py >= 8 && py < alto-8 && (px >= 4 && px < 8 || px >= ancho-8 && px < ancho-4)) {
                        dibujar = true;
                    }
                }
                
                if (dibujar) {
                    var color = colorPrincipal;
                    if (px >= ancho-12 || py >= alto-12) {
                        color = colorOscuro;
                    }
                    else if (px <= 12 || py <= 12) {
                        color = colorClaro;
                    }
                    
                    pixels.setPixel32(px, py, color | 0xFF000000);
                }
            }
        }
        
        bloqueSprite.solid = true;
        
        return bloqueSprite;
    }
    
    // --- Ordenar y conectar bloques ---
    function ordenarBloques():Void {
        // Buscar bloques que se pueden conectar
        for (i in 0...bloquesEnScript.length) {
            var bloque1 = bloquesEnScript[i];
            var texto1 = obtenerTextoBloque(i);
            
            // Si es un bloque "al empezar la canción", buscar bloques para conectar debajo
            if (texto1 != null && texto1.text.indexOf("al empezar") != -1) {
                for (j in 0...bloquesEnScript.length) {
                    if (i != j) {
                        var bloque2 = bloquesEnScript[j];
                        var texto2 = obtenerTextoBloque(j);
                        
                        // Si está cerca horizontalmente y es un bloque de acción
                        if (Math.abs(bloque1.x - bloque2.x) < 60 && 
                            Math.abs(bloque1.y - bloque2.y) < 80 &&
                            texto2 != null && texto2.text.indexOf("temblar") != -1) {
                            
                            // Conectar bloque2 debajo de bloque1
                            bloque2.x = bloque1.x + 20; // Indentar un poco
                            bloque2.y = bloque1.y + 55;
                            
                            // Actualizar texto
                            texto2.x = bloque2.x + 15;
                            texto2.y = bloque2.y + 15;
                        }
                    }
                }
            }
        }
        
        // Separar bloques superpuestos
        for (i in 0...bloquesEnScript.length) {
            for (j in i+1...bloquesEnScript.length) {
                var bloque1 = bloquesEnScript[i];
                var bloque2 = bloquesEnScript[j];
                
                if (Math.abs(bloque1.x - bloque2.x) < 10 && Math.abs(bloque1.y - bloque2.y) < 10) {
                    bloque2.y = bloque1.y + 55;
                    actualizarTextoBloque(j);
                }
            }
        }
    }
    
    // --- Obtener texto de un bloque ---
    function obtenerTextoBloque(indice:Int):FlxText {
        var textoIndice = bloquesDisponibles.length + indice;
        if (textoIndice < textosBloque.length) {
            return textosBloque[textoIndice];
        }
        return null;
    }
    
    // --- Dibujar conectores entre bloques ---
    function dibujarConectores():Void {
        for (i in 0...bloquesEnScript.length) {
            var bloque1 = bloquesEnScript[i];
            var texto1 = obtenerTextoBloque(i);
            
            if (texto1 != null && texto1.text.indexOf("al empezar") != -1) {
                // Buscar bloques conectados debajo
                for (j in 0...bloquesEnScript.length) {
                    if (i != j) {
                        var bloque2 = bloquesEnScript[j];
                        var texto2 = obtenerTextoBloque(j);
                        
                        // Si está conectado (indentado y debajo)
                        if (bloque2.x > bloque1.x + 15 && bloque2.x < bloque1.x + 25 &&
                            bloque2.y > bloque1.y + 50 && bloque2.y < bloque1.y + 60) {
                            
                            // Dibujar línea conectora
                            var conector = new FlxSprite(bloque1.x + 10, bloque1.y + 50);
                            conector.makeGraphic(30, 5, 0xFF888888);
                            add(conector);
                            
                            var conectorV = new FlxSprite(bloque1.x + 10, bloque1.y + 50);
                            conectorV.makeGraphic(3, 10, 0xFF888888);
                            add(conectorV);
                        }
                    }
                }
            }
        }
    }
    
    function actualizarTextoBloque(indice:Int):Void {
        if (indice < bloquesEnScript.length) {
            var bloque = bloquesEnScript[indice];
            var textoIndice = bloquesDisponibles.length + indice;
            if (textoIndice < textosBloque.length) {
                var texto = textosBloque[textoIndice];
                if (texto != null) {
                    texto.x = bloque.x + 10;
                    texto.y = bloque.y + 12;
                }
            }
        }
    }
    
    function refrescarListaBloques():Void {
        if (listaBloques != null) remove(listaBloques, true);
        
        listaBloques = new FlxSprite(130, 20);
        listaBloques.makeGraphic(300, FlxG.height - 40, 0xFF404040);
        add(listaBloques);
        
        var tituloBloques = new FlxText(140, 30, 0, "🎵 Eventos: " + categoriaSeleccionada);
        tituloBloques.setFormat(null, 14, FlxColor.WHITE);
        add(tituloBloques);
        
        var bloques = EventBlocks.getBloquesPorCategoria(categoriaSeleccionada);
        var y = 60;
        
        bloquesDisponibles = [];
        for (bloque in bloques) {
            var bloqueVisual = crearBloqueVisual(bloque, 140, y);
            add(bloqueVisual);
            
            var texto = new FlxText(155, y + 15, 210, bloque.nombre);
            texto.setFormat(null, 12, FlxColor.WHITE, "left");
            texto.setBorderStyle(FlxTextBorderStyle.OUTLINE, FlxColor.BLACK, 1);
            add(texto);
            textosBloque.push(texto);
            
            bloquesDisponibles.push(bloqueVisual);
            y += 60;
        }
    }
    
    function guardarEventos():Void {
        // Actualizar nombre desde el input
        nombreEvento = inputNombre.text;
        
        var eventsPath = "assets/events";
        
        try {
            if (!FileSystem.exists(eventsPath)) {
                FileSystem.createDirectory(eventsPath);
            }
            
            var eventData = "// Eventos generados desde EventsEditorState\n";
            eventData += "// Formato: tiempo,nombre_evento,valor1,valor2\n\n";
            
            var eventCount = 0;
            for (i in 0...bloquesEnScript.length) {
                var bloque = bloquesEnScript[i];
                var texto = obtenerTextoBloque(i);
                
                if (texto != null) {
                    var tiempo = eventCount * 2.0; // 2 segundos entre eventos
                    var nombreEvento = texto.text;
                    
                    // Extraer parámetros si los hay
                    var valor1 = "1.0";
                    var valor2 = "default";
                    
                    if (nombreEvento.indexOf("(") != -1) {
                        var regex = ~/\(([^\)]*)\)/g;
                        if (regex.match(nombreEvento)) {
                            valor1 = regex.matched(1);
                        }
                    }
                    
                    if (nombreEvento.indexOf("[") != -1) {
                        var regex = ~/\[([^\]]*)\]/g;
                        if (regex.match(nombreEvento)) {
                            valor2 = regex.matched(1);
                        }
                    }
                    
                    eventData += tiempo + "," + nombreEvento + "," + valor1 + "," + valor2 + "\n";
                    eventCount++;
                }
            }
            
            var fileName = nombreEvento + "_events.txt";
            
            if (FileSystem.exists(eventsPath + "/" + fileName)) {
                mostrarDialogoReemplazo(eventsPath + "/" + fileName, eventData);
                return;
            }
            File.saveContent(eventsPath + "/" + fileName, eventData);
            
            trace("💾 Eventos guardados: " + eventCount + " en " + fileName);
            FlxG.camera.flash(0x4400FF00, 0.3);
            
            // También guardar como script .hx
            guardarComoScript(eventCount);
            
        } catch (e:Dynamic) {
            trace("Error guardando eventos: " + e);
            FlxG.camera.flash(0x44FF0000, 0.3);
        }
    }
    
    function guardarComoScript(eventCount:Int):Void {
        // Actualizar nombre desde el input
        nombreEvento = inputNombre.text;
        
        var scriptsPath = "assets/scripts";
        
        try {
            var scriptContent = "// Script de eventos generado\n";
            scriptContent += "function onChartEvent(eventName:String, value1:String, value2:String) {\n";
            
            for (i in 0...bloquesEnScript.length) {
                var texto = obtenerTextoBloque(i);
                if (texto != null) {
                    scriptContent += "    // " + texto.text + "\n";
                    if (texto.text.indexOf("al empezar") != -1) {
                        scriptContent += "    if (eventName == \"songStart\") {\n";
                        scriptContent += "        trace(\"🎵 Canción iniciada!\");\n";
                        scriptContent += "    }\n";
                    }
                }
            }
            
            scriptContent += "    return true;\n}";
            
            var fileName = nombreEvento + "_" + Date.now().getTime() + ".hx";
            File.saveContent(scriptsPath + "/" + fileName, scriptContent);
            
            trace("💾 Script guardado: " + fileName);
            
        } catch (e:Dynamic) {
            trace("Error guardando script: " + e);
        }
    }
    
    function mostrarDialogoReemplazo(fileName:String, data:String):Void {
        showingDialog = true;
        
        confirmDialog = new FlxSprite(FlxG.width/2 - 200, FlxG.height/2 - 100);
        confirmDialog.makeGraphic(400, 200, 0xDD000000);
        add(confirmDialog);
        
        var dialogText = new FlxText(confirmDialog.x + 20, confirmDialog.y + 20, 360, 
            "El evento '" + nombreEvento + "' ya existe.\n\n¿Quieres reemplazarlo?");
        dialogText.setFormat(null, 16, FlxColor.WHITE, "center");
        add(dialogText);
        
        var btnSi = new FlxButton(confirmDialog.x + 50, confirmDialog.y + 120, "SÍ", function() {
            File.saveContent(fileName, data);
            trace("💾 Eventos guardados: " + fileName);
            FlxG.camera.flash(0x4400FF00, 0.3);
            cerrarDialog();
        });
        add(btnSi);
        
        var btnNo = new FlxButton(confirmDialog.x + 250, confirmDialog.y + 120, "NO", cerrarDialog);
        add(btnNo);
    }
    
    function cerrarDialog():Void {
        showingDialog = false;
        if (confirmDialog != null) {
            remove(confirmDialog);
            confirmDialog = null;
        }
    }
    
    // --- Ejecutar lógica del bloque ---
    function ejecutarBloque(nombreBloque:String):Void {
        var bloques = EventBlocks.getBloquesPorCategoria(categoriaSeleccionada);
        for (bloque in bloques) {
            if (bloque.nombre == nombreBloque) {
                if (bloque.logica != null) {
                    bloque.logica();
                }
                break;
            }
        }
    }
    
    // --- Modificar parámetros numéricos () ---
    function modificarParametroNumerico(bloque:FlxSprite, cambio:Int):Void {
        var indice = bloquesEnScript.indexOf(bloque);
        if (indice != -1) {
            var texto = obtenerTextoBloque(indice);
            if (texto != null) {
                var textoStr = texto.text;
                var regex = ~/\(([0-9]+\.?[0-9]*)\)/g;
                
                if (regex.match(textoStr)) {
                    var numeroStr = regex.matched(1);
                    var numero = Std.parseFloat(numeroStr);
                    var nuevoNumero = numero + cambio;
                    if (nuevoNumero < 0) nuevoNumero = 0;
                    
                    var nuevoTexto = StringTools.replace(textoStr, "(" + numeroStr + ")", "(" + nuevoNumero + ")");
                    texto.text = nuevoTexto;
                }
            }
        }
    }
    
    // --- Modificar parámetros de texto [] ---
    function modificarParametroTexto(bloque:FlxSprite):Void {
        var indice = bloquesEnScript.indexOf(bloque);
        if (indice != -1) {
            var texto = obtenerTextoBloque(indice);
            if (texto != null) {
                var textoStr = texto.text;
                var regex = ~/\[([^\]]*)\]/g;
                
                if (regex.match(textoStr)) {
                    var textoActual = regex.matched(1);
                    var opciones = ["texto", "nombre", "mensaje", "valor", "entrada"];
                    var indiceActual = opciones.indexOf(textoActual);
                    var nuevoIndice = (indiceActual + 1) % opciones.length;
                    var nuevoTexto = StringTools.replace(textoStr, "[" + textoActual + "]", "[" + opciones[nuevoIndice] + "]");
                    texto.text = nuevoTexto;
                }
            }
        }
    }
}