package states.debug;

import flixel.FlxState;
import flixel.FlxG;
import flixel.FlxSprite;

import flixel.text.FlxText;
import flixel.ui.FlxButton;
import flixel.util.FlxColor;
import sys.FileSystem;
import sys.io.File;
import StringTools;

import objetos.ImagenMenu;
import states.debug.CodeEditorMenu;
import states.debug.PreviewMenu;
import states.debug.ImageSelectorState;

enum EditorMode {
    EDITAR;
    MENU;
    PROGRAMAR;
}

class MenuEditorState extends FlxState {
    var elementos:Array<Dynamic> = [];
    var botonesUI:Array<FlxButton> = [];
    var btnVolver:FlxButton;
    var editandoTexto:Bool = false;
    var textoTemporal:String = "";
    public static var elementosCompartidos:Array<Dynamic> = [];
    var info:FlxText;
    var fuenteActiva:String = null;

    var seleccionado:FlxSprite = null;
    var seleccionRect:FlxSprite;
    var velocidad:Int = 2;

    var modoActual:EditorMode = EDITAR;
    var nombreMenu:String = "MiMenu";
    var inputNombre:FlxText;
    var confirmDialog:FlxSprite;
    var showingDialog:Bool = false;

    override public function create():Void {
        super.create();

        info = new FlxText(10, 10, 800, "🖱️ Modo: EDICIÓN");
        info.setFormat(null, 16, FlxColor.WHITE);
        add(info);
        
        // Campo de nombre
        var labelNombre = new FlxText(10, 35, 0, "Nombre:");
        labelNombre.setFormat(null, 14, FlxColor.WHITE);
        add(labelNombre);
        
        inputNombre = new FlxText(80, 35, 200, nombreMenu);
        inputNombre.setFormat(null, 14, FlxColor.YELLOW);
        add(inputNombre);
        
        // Restaurar elementos guardados
        if (elementosCompartidos.length > 0) {
            elementos = elementosCompartidos.copy();
            for (elemento in elementos) {
                add(elemento);
            }
        }
        
        // Verificar si hay imagen seleccionada
        if (ImageSelectorState.imagenSeleccionada != null) {
            var imagen = new ImagenMenu(300, 200, ImageSelectorState.imagenSeleccionada);
            add(imagen);
            elementos.push(imagen);
            elementosCompartidos = elementos.copy();
            info.text = "🖼️ Imagen agregada";
            ImageSelectorState.imagenSeleccionada = null;
        }

        var btnTexto = new FlxButton(10, 40, "Agregar texto", function() {
            var txt = new FlxText(300, 150, 300, "Nuevo texto");
            txt.setFormat(fuenteActiva, 18, FlxColor.WHITE, "left");
            add(txt);
            elementos.push(txt);
            elementosCompartidos = elementos.copy();
        });
        add(btnTexto);
        botonesUI.push(btnTexto);

        var btnBoton = new FlxButton(150, 40, "Nuevo botón", function() {
            var btn = new FlxButton(400, 200, "Botón nuevo", null);
            add(btn);
            elementos.push(btn);
            elementosCompartidos = elementos.copy();
        });
        add(btnBoton);
        botonesUI.push(btnBoton);

        var btnFuentes = new FlxButton(290, 40, "Mostrar fuentes", mostrarFuentes);
        add(btnFuentes);
        botonesUI.push(btnFuentes);

        var btnImagen = new FlxButton(430, 40, "Selector imagen", function() {
            FlxG.switchState(ImageSelectorState.new);
        });
        add(btnImagen);
        botonesUI.push(btnImagen);

        seleccionRect = new FlxSprite();
        seleccionRect.makeGraphic(1, 1, 0x88FFFFFF);
        seleccionRect.visible = false;
        seleccionRect.scrollFactor.set();
        add(seleccionRect);
        
        // Botón para volver del preview
        btnVolver = new FlxButton(FlxG.width - 120, 10, "← Editar", function() {
            modoActual = EDITAR;
            info.text = "🖱️ Modo: EDICIÓN";
            for (btn in botonesUI) btn.visible = true;
            info.visible = true;
            btnVolver.visible = false;
        });
        btnVolver.visible = false;
        add(btnVolver);
        
        var btnGuardar = new FlxButton(FlxG.width - 240, 10, "💾 Guardar", guardarMenu);
        add(btnGuardar);
        
        var btnEstablecer = new FlxButton(FlxG.width - 360, 10, "⚙️ Establecer como", mostrarOpcionesEstablecer);
        add(btnEstablecer);
    }

    function mostrarFuentes():Void {
        var carpeta = "assets/fonts/";
        var fuentes = FileSystem.readDirectory(carpeta).filter(f ->
            StringTools.endsWith(f.toLowerCase(), ".ttf")
        );

        var x = 10;
        var y = FlxG.height - 40;

        // Limpiar botones de fuentes anteriores
        var fontButtonsToRemove = [];
        for (member in members) {
            if (member != null && Std.isOfType(member, FlxButton)) {
                var button = cast(member, FlxButton);
                if (button.y == y) {
                    fontButtonsToRemove.push(button);
                }
            }
        }
        
        for (btn in fontButtonsToRemove) {
            remove(btn);
        }
        
        // Crear nuevos botones de fuentes
        for (nombre in fuentes) {
            var btn = new FlxButton(x, y, nombre, function() {
                fuenteActiva = "assets/fonts/" + nombre;
                info.text = "✏️ Fuente seleccionada: " + nombre;
            });
            btn.setGraphicSize(140, 20);
            btn.label.setFormat(null, 8, FlxColor.BLACK, "center");
            add(btn);
            x += 150;
        }

        if (fuentes.length == 0) {
            info.text = "❌ No hay fuentes .ttf en " + carpeta;
        }
    }

    override public function update(elapsed:Float):Void {
        super.update(elapsed);

        if (FlxG.keys.pressed.SHIFT) {
            if (FlxG.keys.justPressed.P) {
                modoActual = PROGRAMAR;
                info.text = "📜 Modo: PROGRAMAR";
                FlxG.switchState(CodeEditorMenu.new);
            }
            if (FlxG.keys.justPressed.W) {
                modoActual = MENU;
                info.text = "👁️ Modo: PREVIEW";
                elementosCompartidos = elementos.copy();
                // Ocultar botones de UI y mostrar botón volver
                for (btn in botonesUI) btn.visible = false;
                info.visible = false;
                seleccionRect.visible = false;
                btnVolver.visible = true;
            }
            if (FlxG.keys.justPressed.E) {
                modoActual = EDITAR;
                info.text = "🖱️ Modo: EDICIÓN";
                // Mostrar botones de UI
                for (btn in botonesUI) btn.visible = true;
                info.visible = true;
                btnVolver.visible = false;
            }
        }

        if (FlxG.keys.pressed.CONTROL && FlxG.keys.justPressed.S) {
            exportarEscena("MiMenuGenerado");
        }

        if (modoActual == EDITAR && FlxG.mouse.justPressed) {
            var candidatos:Array<FlxSprite> = [];
            
            // Encontrar todos los elementos bajo el cursor
            for (e in elementos) {
                if (Std.isOfType(e, FlxSprite)) {
                    var sprite:FlxSprite = cast e;
                    if (sprite.overlapsPoint(FlxG.mouse.getPosition())) {
                        candidatos.push(sprite);
                    }
                }
            }
            
            // Seleccionar el más pequeño (más específico)
            if (candidatos.length > 0) {
                candidatos.sort(function(a, b) {
                    var areaA = a.width * a.height;
                    var areaB = b.width * b.height;
                    return Std.int(areaA - areaB);
                });
                
                seleccionado = candidatos[0];
                seleccionRect.setPosition(seleccionado.x - 2, seleccionado.y - 2);
                seleccionRect.makeGraphic(Std.int(seleccionado.width + 4), Std.int(seleccionado.height + 4), 0x88FFFFFF);
                seleccionRect.visible = true;
            } else {
                // Deseleccionar si no hay elementos bajo el cursor
                seleccionado = null;
                seleccionRect.visible = false;
                info.text = "🖱️ Modo: EDICIÓN";
            }
        }

        if (modoActual == EDITAR && seleccionado != null && !editandoTexto) {
            // Movimiento
            if (FlxG.keys.pressed.LEFT) seleccionado.x -= velocidad;
            if (FlxG.keys.pressed.RIGHT) seleccionado.x += velocidad;
            if (FlxG.keys.pressed.UP) seleccionado.y -= velocidad;
            if (FlxG.keys.pressed.DOWN) seleccionado.y += velocidad;
            
            var actualizarRect = false;
            
            // Escalar (agrandar/achicar)
            if (FlxG.keys.justPressed.Z) {
                seleccionado.scale.x *= 1.1;
                seleccionado.scale.y *= 1.1;
                info.text = "🔍 Elemento agrandado";
                actualizarRect = true;
            }
            if (FlxG.keys.justPressed.C) {
                seleccionado.scale.x *= 0.9;
                seleccionado.scale.y *= 0.9;
                info.text = "🔍 Elemento achicado";
                actualizarRect = true;
            }
            
            // Estirar horizontalmente
            if (FlxG.keys.justPressed.I && !FlxG.keys.pressed.SHIFT) {
                seleccionado.scale.x *= 1.1;
                info.text = "↔️ Estirado horizontalmente";
                actualizarRect = true;
            }
            if (FlxG.keys.justPressed.O && !FlxG.keys.pressed.SHIFT) {
                seleccionado.scale.x *= 0.9;
                info.text = "↔️ Comprimido horizontalmente";
                actualizarRect = true;
            }
            
            // Estirar verticalmente
            if (FlxG.keys.justPressed.I && FlxG.keys.pressed.SHIFT) {
                seleccionado.scale.y *= 1.1;
                info.text = "↕️ Estirado verticalmente";
                actualizarRect = true;
            }
            if (FlxG.keys.justPressed.O && FlxG.keys.pressed.SHIFT) {
                seleccionado.scale.y *= 0.9;
                info.text = "↕️ Comprimido verticalmente";
                actualizarRect = true;
            }
            
            // Centrar elemento
            if (FlxG.keys.justPressed.SPACE) {
                seleccionado.x = (FlxG.width - seleccionado.width * seleccionado.scale.x) / 2;
                seleccionado.y = (FlxG.height - seleccionado.height * seleccionado.scale.y) / 2;
                info.text = "⚔️ Elemento centrado";
                actualizarRect = true;
            }
            
            // Iniciar edición de texto
            if (FlxG.keys.justPressed.T) {
                if (Std.isOfType(seleccionado, FlxText) || Std.isOfType(seleccionado, FlxButton)) {
                    editandoTexto = true;
                    textoTemporal = "";
                    info.text = "✏️ Escribiendo... (ENTER para confirmar, ESC para cancelar)";
                }
            }
            
            // Aplicar fuente con R
            if (FlxG.keys.justPressed.R && fuenteActiva != null) {
                if (Std.isOfType(seleccionado, FlxText)) {
                    var txt:FlxText = cast seleccionado;
                    txt.setFormat(fuenteActiva, txt.size, txt.color);
                    info.text = "🅰️ Fuente aplicada";
                } else if (Std.isOfType(seleccionado, FlxButton)) {
                    var btn:FlxButton = cast seleccionado;
                    btn.label.setFormat(fuenteActiva, btn.label.size, btn.label.color);
                    info.text = "🅰️ Fuente aplicada al botón";
                }
            }

            // Actualizar posición del rectángulo siempre
            if (FlxG.keys.anyPressed([LEFT, RIGHT, UP, DOWN]) || actualizarRect) {
                var anchoReal = seleccionado.width * seleccionado.scale.x;
                var altoReal = seleccionado.height * seleccionado.scale.y;
                seleccionRect.setPosition(seleccionado.x - 2, seleccionado.y - 2);
                seleccionRect.makeGraphic(Std.int(anchoReal + 4), Std.int(altoReal + 4), 0x88FFFFFF);
            }
        }

        // Manejo de entrada de texto
        if (editandoTexto) {
            // Confirmar texto
            if (FlxG.keys.justPressed.ENTER) {
                if (textoTemporal.length > 0) {
                    if (Std.isOfType(seleccionado, FlxText)) {
                        var txt:FlxText = cast seleccionado;
                        txt.text = textoTemporal;
                    } else if (Std.isOfType(seleccionado, FlxButton)) {
                        var btn:FlxButton = cast seleccionado;
                        btn.text = textoTemporal;
                    }
                    elementosCompartidos = elementos.copy();
                }
                editandoTexto = false;
                info.text = "✓ Texto actualizado";
            }
            // Cancelar edición
            else if (FlxG.keys.justPressed.ESCAPE) {
                editandoTexto = false;
                info.text = "❌ Edición cancelada";
            }
            // Borrar caracter
            else if (FlxG.keys.justPressed.BACKSPACE && textoTemporal.length > 0) {
                textoTemporal = textoTemporal.substr(0, textoTemporal.length - 1);
                info.text = "✏️ Escribiendo: " + textoTemporal + "_";
            }
            // Agregar caracteres (solo letras y números básicos)
            else {
                if (FlxG.keys.justPressed.A) textoTemporal += FlxG.keys.pressed.SHIFT ? "A" : "a";
                else if (FlxG.keys.justPressed.B) textoTemporal += FlxG.keys.pressed.SHIFT ? "B" : "b";
                else if (FlxG.keys.justPressed.C) textoTemporal += FlxG.keys.pressed.SHIFT ? "C" : "c";
                else if (FlxG.keys.justPressed.D) textoTemporal += FlxG.keys.pressed.SHIFT ? "D" : "d";
                else if (FlxG.keys.justPressed.E) textoTemporal += FlxG.keys.pressed.SHIFT ? "E" : "e";
                else if (FlxG.keys.justPressed.F) textoTemporal += FlxG.keys.pressed.SHIFT ? "F" : "f";
                else if (FlxG.keys.justPressed.G) textoTemporal += FlxG.keys.pressed.SHIFT ? "G" : "g";
                else if (FlxG.keys.justPressed.H) textoTemporal += FlxG.keys.pressed.SHIFT ? "H" : "h";
                else if (FlxG.keys.justPressed.I) textoTemporal += FlxG.keys.pressed.SHIFT ? "I" : "i";
                else if (FlxG.keys.justPressed.J) textoTemporal += FlxG.keys.pressed.SHIFT ? "J" : "j";
                else if (FlxG.keys.justPressed.K) textoTemporal += FlxG.keys.pressed.SHIFT ? "K" : "k";
                else if (FlxG.keys.justPressed.L) textoTemporal += FlxG.keys.pressed.SHIFT ? "L" : "l";
                else if (FlxG.keys.justPressed.M) textoTemporal += FlxG.keys.pressed.SHIFT ? "M" : "m";
                else if (FlxG.keys.justPressed.N) textoTemporal += FlxG.keys.pressed.SHIFT ? "N" : "n";
                else if (FlxG.keys.justPressed.O) textoTemporal += FlxG.keys.pressed.SHIFT ? "O" : "o";
                else if (FlxG.keys.justPressed.P) textoTemporal += FlxG.keys.pressed.SHIFT ? "P" : "p";
                else if (FlxG.keys.justPressed.Q) textoTemporal += FlxG.keys.pressed.SHIFT ? "Q" : "q";
                else if (FlxG.keys.justPressed.R) textoTemporal += FlxG.keys.pressed.SHIFT ? "R" : "r";
                else if (FlxG.keys.justPressed.S) textoTemporal += FlxG.keys.pressed.SHIFT ? "S" : "s";
                else if (FlxG.keys.justPressed.T) textoTemporal += FlxG.keys.pressed.SHIFT ? "T" : "t";
                else if (FlxG.keys.justPressed.U) textoTemporal += FlxG.keys.pressed.SHIFT ? "U" : "u";
                else if (FlxG.keys.justPressed.V) textoTemporal += FlxG.keys.pressed.SHIFT ? "V" : "v";
                else if (FlxG.keys.justPressed.W) textoTemporal += FlxG.keys.pressed.SHIFT ? "W" : "w";
                else if (FlxG.keys.justPressed.X) textoTemporal += FlxG.keys.pressed.SHIFT ? "X" : "x";
                else if (FlxG.keys.justPressed.Y) textoTemporal += FlxG.keys.pressed.SHIFT ? "Y" : "y";
                else if (FlxG.keys.justPressed.Z) textoTemporal += FlxG.keys.pressed.SHIFT ? "Z" : "z";
                else if (FlxG.keys.justPressed.SPACE) textoTemporal += " ";
                else if (FlxG.keys.justPressed.ONE) textoTemporal += "1";
                else if (FlxG.keys.justPressed.TWO) textoTemporal += "2";
                else if (FlxG.keys.justPressed.THREE) textoTemporal += "3";
                else if (FlxG.keys.justPressed.FOUR) textoTemporal += "4";
                else if (FlxG.keys.justPressed.FIVE) textoTemporal += "5";
                else if (FlxG.keys.justPressed.SIX) textoTemporal += "6";
                else if (FlxG.keys.justPressed.SEVEN) textoTemporal += "7";
                else if (FlxG.keys.justPressed.EIGHT) textoTemporal += "8";
                else if (FlxG.keys.justPressed.NINE) textoTemporal += "9";
                else if (FlxG.keys.justPressed.ZERO) textoTemporal += "0";
                
                if (textoTemporal.length > 0) {
                    info.text = "✏️ Escribiendo: " + textoTemporal + "_";
                }
            }
            return; // No procesar otros controles mientras se edita
        }
        
        if (FlxG.keys.justPressed.DELETE && seleccionado != null) {
            remove(seleccionado);
            elementos.remove(seleccionado);
            elementosCompartidos = elementos.copy();
            seleccionado = null;
            seleccionRect.visible = false;
            info.text = "🗑️ Elemento eliminado";
        }
    }

    function exportarEscena(nombre:String):Void {
        var ruta = "assets/escenas/" + nombre + ".hx";
        var salida = "// Escena generada por SWVRT Engine\n\n";
        salida += "var elementos = [];\n\n";

        for (e in elementos) {
            if (Std.isOfType(e, FlxText)) {
                var t:FlxText = cast e;
                salida += 'var t = new flixel.text.FlxText(${Std.int(t.x)}, ${Std.int(t.y)}, ${Std.int(t.fieldWidth)}, "${t.text}");\n';
                salida += 't.setFormat("${fuenteActiva}", ${t.size}, 0xFFFFFFFF, "left");\n';
                salida += 'elementos.push(t);\n\n';
            } else if (Std.isOfType(e, ImagenMenu)) {
                var i:ImagenMenu = cast e;
                salida += 'var s = new objetos.ImagenMenu(${Std.int(i.x)}, ${Std.int(i.y)}, "${i.ruta}");\n';
                salida += 'elementos.push(s);\n\n';
            }
        }

        salida += "return elementos;\n";
        File.saveContent(ruta, salida);
        info.text = "💾 Escena exportada como " + ruta;
    }
    
    function guardarMenu():Void {
        // Actualizar nombre desde el input
        nombreMenu = inputNombre.text;
        
        var scriptsPath = "assets/scripts";
        
        try {
            if (!FileSystem.exists(scriptsPath)) {
                FileSystem.createDirectory(scriptsPath);
            }
            
            var menuContent = "// Menú personalizado generado\n";
            menuContent += "class CustomMenu extends FlxState {\n";
            menuContent += "    override public function create():Void {\n";
            menuContent += "        super.create();\n";
            menuContent += "        // Menú personalizado\n";
            menuContent += "    }\n";
            menuContent += "}";
            
            var fileName = nombreMenu + ".hx";
            
            if (FileSystem.exists(scriptsPath + "/" + fileName)) {
                mostrarDialogoReemplazo(scriptsPath + "/" + fileName, menuContent);
                return;
            }
            File.saveContent(scriptsPath + "/" + fileName, menuContent);
            
            trace("💾 Menú guardado: " + fileName);
            FlxG.camera.flash(0x4400FF00, 0.3);
            
        } catch (e:Dynamic) {
            trace("Error guardando menú: " + e);
            FlxG.camera.flash(0x44FF0000, 0.3);
        }
    }
    
    function mostrarDialogoReemplazo(fileName:String, data:String):Void {
        showingDialog = true;
        
        confirmDialog = new FlxSprite(FlxG.width/2 - 200, FlxG.height/2 - 100);
        confirmDialog.makeGraphic(400, 200, 0xDD000000);
        add(confirmDialog);
        
        var dialogText = new FlxText(confirmDialog.x + 20, confirmDialog.y + 20, 360, 
            "El menú '" + nombreMenu + ".hx' ya existe.\n\n¿Quieres reemplazarlo?");
        dialogText.setFormat(null, 16, FlxColor.WHITE, "center");
        add(dialogText);
        
        var btnSi = new FlxButton(confirmDialog.x + 50, confirmDialog.y + 120, "SÍ", function() {
            File.saveContent(fileName, data);
            trace("💾 Menú guardado: " + fileName);
            FlxG.camera.flash(0x4400FF00, 0.3);
            cerrarDialog();
        });
        add(btnSi);
        
        var btnNo = new FlxButton(confirmDialog.x + 250, confirmDialog.y + 120, "NO", cerrarDialog);
        add(btnNo);
    }
    
    function cerrarDialog():Void {
        showingDialog = false;
        
        // Remover todos los elementos del diálogo
        var elementsToRemove = [];
        for (member in members) {
            if (member != null) {
                var sprite = cast(member, FlxSprite);
                if (sprite != null && sprite.x >= FlxG.width/2 - 200 && sprite.x <= FlxG.width/2 + 200 &&
                    sprite.y >= FlxG.height/2 - 100 && sprite.y <= FlxG.height/2 + 100) {
                    elementsToRemove.push(member);
                }
            }
        }
        
        for (element in elementsToRemove) {
            remove(element);
        }
        
        confirmDialog = null;
    }
    
    function mostrarOpcionesEstablecer():Void {
        showingDialog = true;
        
        confirmDialog = new FlxSprite(FlxG.width/2 - 200, FlxG.height/2 - 100);
        confirmDialog.makeGraphic(400, 200, 0xDD000000);
        add(confirmDialog);
        
        var dialogText = new FlxText(confirmDialog.x + 20, confirmDialog.y + 20, 360, 
            "Establecer este menú como:");
        dialogText.setFormat(null, 16, FlxColor.WHITE, "center");
        add(dialogText);
        
        var btnPause = new FlxButton(confirmDialog.x + 50, confirmDialog.y + 80, "⏸️ PAUSE", function() {
            establecerComoPause();
            cerrarDialog();
        });
        add(btnPause);
        
        var btnOtro = new FlxButton(confirmDialog.x + 200, confirmDialog.y + 80, "📝 OTRO", function() {
            establecerComoOtro();
            cerrarDialog();
        });
        add(btnOtro);
        
        var btnCancelar = new FlxButton(confirmDialog.x + 125, confirmDialog.y + 140, "CANCELAR", cerrarDialog);
        add(btnCancelar);
    }
    
    function establecerComoPause():Void {
        try {
            var pauseContent = "// Menú de pausa generado\n";
            pauseContent += "class PauseMenu extends FlxState {\n";
            pauseContent += "    // Menú de pausa personalizado\n";
            pauseContent += "}";
            
            File.saveContent("assets/scripts/PauseMenu.hx", pauseContent);
            trace("⏸️ Establecido como menú de pausa");
            FlxG.camera.flash(0x4400FF00, 0.3);
        } catch (e:Dynamic) {
            trace("Error: " + e);
        }
    }
    
    function establecerComoOtro():Void {
        try {
            var otroContent = "// Menú personalizado\n";
            otroContent += "class CustomMenu extends FlxState {\n";
            otroContent += "    // Menú personalizado\n";
            otroContent += "}";
            
            File.saveContent("assets/scripts/CustomMenu.hx", otroContent);
            trace("📝 Establecido como menú personalizado");
            FlxG.camera.flash(0x4400FFFF, 0.3);
        } catch (e:Dynamic) {
            trace("Error: " + e);
        }
    }
}