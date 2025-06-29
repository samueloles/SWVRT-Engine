package states.debug;

import flixel.FlxState;
import flixel.FlxG;
import flixel.text.FlxText;
import flixel.util.FlxColor;
import flixel.FlxSprite;
import flixel.ui.FlxButton;
import flixel.group.FlxGroup;

import states.menu.MenuDebugState;
import states.debug.PlaySongDebug;
import sys.FileSystem;
import sys.io.File;
import haxe.Json;
import StringTools;

class ChartMenuState extends FlxState {
    // Grid y notas
    var gridBG:FlxSprite;
    var strumLine:FlxSprite;
    var notes:FlxGroup;
    var events:FlxGroup;
    var currentBeat:Float = 0;
    var songPosition:Float = 0;
    var bpm:Float = 120;

    // UI
    var infoText:FlxText;
    var beatText:FlxText;
    var sectionText:FlxText;
    var eventsPanel:FlxSprite;

    // Controles
    var currentSection:Int = 0;
    var gridSize:Int = 40;
    var isPlaying:Bool = false;
    var scrollY:Float = 0;
    var modoEvento:Bool = false;

    // Notas del chart
    var chartNotes:Array<ChartNote> = [];
    var chartEvents:Array<ChartEvent> = [];
    var notaSeleccionada:FlxSprite = null;
    
    // Personajes
    var playerCharacter:String = "BOYFRIEND";
    var opponentCharacter:String = "DAD";
    var gfCharacter:String = "GF";
    var availableCharacters:Array<String> = [];
    
    // Posiciones
    var playerPos:Array<Float> = [770, 450];
    var opponentPos:Array<Float> = [100, 100];
    var gfPos:Array<Float> = [400, 130];
    
    // Nombres custom
    var chartName:String = "MiChart";
    var nameInput:FlxText;
    var confirmDialog:FlxSprite;
    var showingDialog:Bool = false;



    override public function create():Void {
        super.create();

        // Fondo oscuro
        var bg = new FlxSprite();
        bg.makeGraphic(FlxG.width, FlxG.height, 0xFF1A1A1A);
        add(bg);



        // Crear grid
        crearGrid();

        // Crear UI
        crearUI();

        // Grupo de notas
        notes = new FlxGroup();
        add(notes);

        // Grupo de eventos
        events = new FlxGroup();
        add(events);

        // Panel de eventos
        crearPanelEventos();

        // Línea de tiempo
        strumLine = new FlxSprite(0, FlxG.height / 2);
        strumLine.makeGraphic(FlxG.width, 4, FlxColor.RED);
        add(strumLine);

        // Detectar personajes
        detectarPersonajes();
        
        trace("🎼 Chart Editor iniciado - Modo Simple");
    }

    function crearGrid():Void {
        gridBG = new FlxSprite(FlxG.width / 2 - 160, 0);
        gridBG.makeGraphic(320, FlxG.height * 3, 0x44FFFFFF); // Más alto para scroll
        add(gridBG);

        for (i in 0...9) {
            var line = new FlxSprite(gridBG.x + (i * 40), 0);
            line.makeGraphic(2, FlxG.height * 3, i == 4 ? FlxColor.YELLOW : FlxColor.WHITE);
            add(line);
        }

        for (i in 0...200) { // Más líneas para scroll
            var line = new FlxSprite(gridBG.x, i * 40);
            line.makeGraphic(320, 2, i % 4 == 0 ? FlxColor.CYAN : 0x44FFFFFF);
            add(line);
        }
    }

    function crearUI():Void {
        infoText = new FlxText(10, 10, 300, "");
        infoText.setFormat(null, 14, FlxColor.WHITE);
        infoText.scrollFactor.set(0, 0);
        add(infoText);
        
        // Campo de nombre
        var nameLabel = new FlxText(10, 200, 0, "Nombre:");
        nameLabel.setFormat(null, 16, FlxColor.WHITE);
        nameLabel.scrollFactor.set(0, 0);
        add(nameLabel);
        
        nameInput = new FlxText(80, 200, 200, chartName);
        nameInput.setFormat(null, 16, FlxColor.YELLOW);
        nameInput.setBorderStyle(FlxTextBorderStyle.OUTLINE, FlxColor.BLACK, 1);
        nameInput.scrollFactor.set(0, 0);
        add(nameInput);

        beatText = new FlxText(10, FlxG.height - 100, 200, "Beat: 0");
        beatText.setFormat(null, 16, FlxColor.CYAN);
        beatText.scrollFactor.set(0, 0);
        add(beatText);

        sectionText = new FlxText(10, FlxG.height - 80, 200, "Section: 0");
        sectionText.setFormat(null, 16, FlxColor.YELLOW);
        sectionText.scrollFactor.set(0, 0);
        add(sectionText);

        var btnPlay = new FlxButton(FlxG.width - 200, 10, isPlaying ? "⏸️ Pause" : "▶️ Play", togglePlay);
        btnPlay.scrollFactor.set(0, 0);
        add(btnPlay);

        var btnSave = new FlxButton(FlxG.width - 200, 50, "💾 Save", saveChart);
        btnSave.scrollFactor.set(0, 0);
        add(btnSave);

        var btnLoad = new FlxButton(FlxG.width - 200, 90, "📁 Load", loadChart);
        btnLoad.scrollFactor.set(0, 0);
        add(btnLoad);

        var btnEventos = new FlxButton(FlxG.width - 200, 130, modoEvento ? "🎵 Notas" : "⚡ Eventos", toggleModoEvento);
        btnEventos.scrollFactor.set(0, 0);
        add(btnEventos);
        
        var btnSongSelect = new FlxButton(FlxG.width - 200, 170, "🎵 Seleccionar Canción", seleccionarCancion);
        btnSongSelect.scrollFactor.set(0, 0);
        add(btnSongSelect);
        
        var btnPlayer = new FlxButton(FlxG.width - 200, 210, "👤 Player: " + playerCharacter, cambiarPlayer);
        btnPlayer.scrollFactor.set(0, 0);
        add(btnPlayer);
        
        var btnOpponent = new FlxButton(FlxG.width - 200, 250, "👿 Opponent: " + opponentCharacter, cambiarOpponent);
        btnOpponent.scrollFactor.set(0, 0);
        add(btnOpponent);
        
        var btnGF = new FlxButton(FlxG.width - 200, 290, "💃 GF: " + gfCharacter, cambiarGF);
        btnGF.scrollFactor.set(0, 0);
        add(btnGF);
        
        var btnPositions = new FlxButton(FlxG.width - 200, 330, "📍 Posiciones", editarPosiciones);
        btnPositions.scrollFactor.set(0, 0);
        add(btnPositions);

        var btnVolver = new FlxButton(FlxG.width - 120, FlxG.height - 40, "← Back", function() {
            FlxG.switchState(MenuDebugState.new);
        });
        btnVolver.scrollFactor.set(0, 0);
        add(btnVolver);

        actualizarInfo();
    }

    function togglePlay():Void {
        if (!isPlaying) {
            // Guardar chart antes de reproducir
            saveChart();
            
            // Ir a PlaySongDebug con el chart
            FlxG.switchState(new PlaySongDebug());
        } else {
            isPlaying = false;
            trace("⏸️ Pausado");
        }
    }

    function saveChart():Void {
        // Actualizar nombre desde el input
        chartName = nameInput.text;
        
        var chartData = {
            song: "Test Song",
            bpm: bpm,
            notes: chartNotes,
            events: chartEvents,
            player1: playerCharacter,
            player2: opponentCharacter,
            gfVersion: gfCharacter,
            stage: "stage",
            playerPos: playerPos,
            opponentPos: opponentPos,
            gfPos: gfPos
        };
        
        try {
            var chartsPath = "assets/charts";
            if (!FileSystem.exists(chartsPath)) {
                FileSystem.createDirectory(chartsPath);
            }
            
            var jsonString = Json.stringify(chartData, null, "  ");
            var fileName = chartsPath + "/" + chartName + ".json";
            
            // Verificar si existe
            if (FileSystem.exists(fileName)) {
                mostrarDialogoReemplazo(fileName, chartData);
                return;
            }
            File.saveContent(fileName, jsonString);
            
            trace("💾 Chart guardado: " + fileName);
            FlxG.camera.flash(0x4400FF00, 0.3);
        } catch (e:Dynamic) {
            trace("Error guardando chart: " + e);
            FlxG.camera.flash(0x44FF0000, 0.3);
        }
    }

    function loadChart():Void {
        try {
            var chartsPath = "assets/charts";
            if (FileSystem.exists(chartsPath)) {
                var files = FileSystem.readDirectory(chartsPath);
                var jsonFiles = files.filter(function(f) return f.indexOf(".json") != -1);
                
                if (jsonFiles.length > 0) {
                    var latestFile = jsonFiles[jsonFiles.length - 1];
                    var content = File.getContent(chartsPath + "/" + latestFile);
                    var chartData = Json.parse(content);
                    
                    // Cargar datos
                    bpm = chartData.bpm;
                    chartNotes = chartData.notes;
                    chartEvents = chartData.events != null ? chartData.events : [];
                    
                    // Cargar personajes
                    if (chartData.player1 != null) playerCharacter = chartData.player1;
                    if (chartData.player2 != null) opponentCharacter = chartData.player2;
                    if (chartData.gfVersion != null) gfCharacter = chartData.gfVersion;
                    if (chartData.playerPos != null) playerPos = chartData.playerPos;
                    if (chartData.opponentPos != null) opponentPos = chartData.opponentPos;
                    if (chartData.gfPos != null) gfPos = chartData.gfPos;
                    
                    // Recrear notas visuales
                    notes.clear();
                    events.clear();
                    
                    for (note in chartNotes) {
                        var nota = new FlxSprite(gridBG.x + (note.lane * gridSize) + 5, (note.time / (60 / bpm)) * gridSize + 5);
                        switch (note.lane % 4) {
                            case 0: crearFlechaIzquierda(nota, FlxColor.PURPLE);
                            case 1: crearFlechaAbajo(nota, FlxColor.BLUE);
                            case 2: crearFlechaArriba(nota, FlxColor.GREEN);
                            case 3: crearFlechaDerecha(nota, FlxColor.RED);
                        }
                        notes.add(nota);
                    }
                    
                    for (event in chartEvents) {
                        var evento = new FlxSprite(gridBG.x - 40, (event.time / (60 / bpm)) * gridSize + 5);
                        evento.makeGraphic(30, 30, FlxColor.ORANGE);
                        events.add(evento);
                    }
                    
                    actualizarInfo();
                    trace("📁 Chart cargado: " + latestFile);
                    FlxG.camera.flash(0x440000FF, 0.3);
                }
            }
        } catch (e:Dynamic) {
            trace("Error cargando chart: " + e);
            FlxG.camera.flash(0x44FF0000, 0.3);
        }
    }

    function actualizarInfo():Void {
        infoText.text = "🎼 CHART EDITOR\n" +
                        "BPM: " + bpm + "\n" +
                        "Notas: " + chartNotes.length + "\n" +
                        "\nControles:\n" +
                        "WASD/Flechas - Navegar\n" +
                        "SPACE - Play/Pause\n" +
                        "Click - Colocar/Seleccionar " + (modoEvento ? "evento" : "nota") + "\n" +
                        "E - Alargar nota (+1)\n" +
                        "Q - Acortar nota (-1)\n" +
                        "R - Borrar\n" +
                        "Mouse Wheel - Scroll\n" +
                        "ESC - Salir";
    }

    function crearPanelEventos():Void {
        eventsPanel = new FlxSprite(FlxG.width - 350, 200);
        eventsPanel.makeGraphic(330, 300, 0x88000000);
        eventsPanel.scrollFactor.set(0, 0);
        add(eventsPanel);

        var titulo = new FlxText(eventsPanel.x + 10, eventsPanel.y + 10, 0, "⚡ EVENTOS");
        titulo.setFormat(null, 16, FlxColor.YELLOW);
        titulo.scrollFactor.set(0, 0);
        add(titulo);

        var info = new FlxText(eventsPanel.x + 10, eventsPanel.y + 40, 300,
            "Eventos disponibles:\n" +
            "- Flash Screen\n" +
            "- Zoom Camera\n" +
            "- Shake Window\n" +
            "- Change BPM\n" +
            "\nClick en el grid para\ncolocar eventos");
        info.setFormat(null, 12, FlxColor.WHITE);
        info.scrollFactor.set(0, 0);
        add(info);
    }

    function toggleModoEvento():Void {
        modoEvento = !modoEvento;
        actualizarInfo();
        trace(modoEvento ? "⚡ Modo Eventos" : "🎵 Modo Notas");
    }

    function colocarNota(x:Float, y:Float):Void {
        var gridX = Math.floor((x - gridBG.x) / gridSize);
        var gridY = Math.floor((y + FlxG.camera.scroll.y) / gridSize);

        if (gridX >= 0 && gridX < 8 && gridY >= 0) {
            if (modoEvento) {
                var evento = new FlxSprite(gridBG.x - 40, gridY * gridSize + 5);
                crearFlechaEvento(evento, FlxColor.ORANGE);
                events.add(evento);

                chartEvents.push({
                    time: gridY * (60 / bpm),
                    name: "Flash Screen",
                    value1: "1.0",
                    value2: "white"
                });

                guardarEventos();
            } else {
                var nota = new FlxSprite(gridBG.x + gridX * gridSize + 5, gridY * gridSize + 5);
                
                // Crear flecha según dirección
                switch (gridX % 4) {
                    case 0: // Izquierda
                        crearFlechaIzquierda(nota, FlxColor.PURPLE);
                    case 1: // Abajo
                        crearFlechaAbajo(nota, FlxColor.BLUE);
                    case 2: // Arriba
                        crearFlechaArriba(nota, FlxColor.GREEN);
                    case 3: // Derecha
                        crearFlechaDerecha(nota, FlxColor.RED);
                }
                
                notes.add(nota);

                chartNotes.push({
                    time: gridY * (60 / bpm),
                    lane: gridX,
                    type: 0,
                    length: 0
                });
            }

            actualizarInfo();
        }
    }

    function guardarEventos():Void {
        var eventsPath = "assets/events";

        try {
            if (!FileSystem.exists(eventsPath)) {
                FileSystem.createDirectory(eventsPath);
            }

            var eventData = "";
            for (event in chartEvents) {
                eventData += event.time + "," + event.name + "," + event.value1 + "," + event.value2 + "\n";
            }

            File.saveContent(eventsPath + "/chart_events.txt", eventData);
            trace("💾 Eventos guardados: " + chartEvents.length);
        } catch (e:Dynamic) {
            trace("Error guardando eventos: " + e);
        }
    }
    
    function crearFlechaIzquierda(sprite:FlxSprite, color:Int):Void {
        sprite.makeGraphic(30, 30, 0x00000000, true);
        var pixels = sprite.pixels;
        
        // Dibujar flecha izquierda
        for (y in 0...30) {
            for (x in 0...30) {
                if ((x >= 5 && x <= 10 && y >= 12 && y <= 17) || // Cuerpo
                    (x >= 0 && x <= 15 && y >= 14 && y <= 15) || // Línea horizontal
                    (x >= 2 && x <= 12 && Math.abs(y - 14) <= (12 - x))) { // Punta
                    pixels.setPixel32(x, y, color | 0xFF000000);
                }
            }
        }
    }
    
    function crearFlechaDerecha(sprite:FlxSprite, color:Int):Void {
        sprite.makeGraphic(30, 30, 0x00000000, true);
        var pixels = sprite.pixels;
        
        // Dibujar flecha derecha
        for (y in 0...30) {
            for (x in 0...30) {
                if ((x >= 19 && x <= 24 && y >= 12 && y <= 17) || // Cuerpo
                    (x >= 14 && x <= 29 && y >= 14 && y <= 15) || // Línea horizontal
                    (x >= 17 && x <= 27 && Math.abs(y - 14) <= (x - 17))) { // Punta
                    pixels.setPixel32(x, y, color | 0xFF000000);
                }
            }
        }
    }
    
    function crearFlechaArriba(sprite:FlxSprite, color:Int):Void {
        sprite.makeGraphic(30, 30, 0x00000000, true);
        var pixels = sprite.pixels;
        
        // Dibujar flecha arriba
        for (y in 0...30) {
            for (x in 0...30) {
                if ((x >= 12 && x <= 17 && y >= 5 && y <= 10) || // Cuerpo
                    (x >= 14 && x <= 15 && y >= 0 && y <= 15) || // Línea vertical
                    (y >= 2 && y <= 12 && Math.abs(x - 14) <= (12 - y))) { // Punta
                    pixels.setPixel32(x, y, color | 0xFF000000);
                }
            }
        }
    }
    
    function crearFlechaAbajo(sprite:FlxSprite, color:Int):Void {
        sprite.makeGraphic(30, 30, 0x00000000, true);
        var pixels = sprite.pixels;
        
        // Dibujar flecha abajo
        for (y in 0...30) {
            for (x in 0...30) {
                if ((x >= 12 && x <= 17 && y >= 19 && y <= 24) || // Cuerpo
                    (x >= 14 && x <= 15 && y >= 14 && y <= 29) || // Línea vertical
                    (y >= 17 && y <= 27 && Math.abs(x - 14) <= (y - 17))) { // Punta
                    pixels.setPixel32(x, y, color | 0xFF000000);
                }
            }
        }
    }

    override public function update(elapsed:Float):Void {
        super.update(elapsed);

        if (isPlaying) {
            songPosition += elapsed * 1000;
            currentBeat = (songPosition / 1000) * (bpm / 60);
        }

        beatText.text = "Beat: " + Math.floor(currentBeat);
        sectionText.text = "Section: " + currentSection;

        if (FlxG.keys.justPressed.SPACE) {
            togglePlay();
        }

        if (FlxG.mouse.justPressed) {
            // Seleccionar nota existente o colocar nueva
            var notaClicada = false;
            for (nota in notes.members) {
                if (nota != null) {
                    var sprite:FlxSprite = cast nota;
                    if (sprite.overlapsPoint(FlxG.mouse.getPosition())) {
                        notaSeleccionada = sprite;
                        notaClicada = true;
                        trace("🎵 Nota seleccionada");
                        break;
                    }
                }
            }
            
            if (!notaClicada) {
                colocarNota(FlxG.mouse.x, FlxG.mouse.y);
                notaSeleccionada = null;
            }
        }
        
        // Alargar/acortar nota con E/Q
        if (notaSeleccionada != null) {
            if (FlxG.keys.justPressed.E) {
                var indiceNota = notes.members.indexOf(notaSeleccionada);
                if (indiceNota != -1 && indiceNota < chartNotes.length) {
                    chartNotes[indiceNota].length += 1;
                    actualizarNotaLarga(cast notaSeleccionada, chartNotes[indiceNota]);
                    trace("⬆️ Nota alargada: " + chartNotes[indiceNota].length);
                }
            }
            
            if (FlxG.keys.justPressed.Q) {
                var indiceNota = notes.members.indexOf(notaSeleccionada);
                if (indiceNota != -1 && indiceNota < chartNotes.length) {
                    if (chartNotes[indiceNota].length > 0) {
                        chartNotes[indiceNota].length -= 1;
                        actualizarNotaLarga(cast notaSeleccionada, chartNotes[indiceNota]);
                        trace("⬇️ Nota acortada: " + chartNotes[indiceNota].length);
                    }
                }
            }
        }

        // Scroll con cámara
        if (FlxG.keys.pressed.UP || FlxG.mouse.wheel > 0) {
            FlxG.camera.scroll.y -= 300 * elapsed;
            if (FlxG.camera.scroll.y < 0) FlxG.camera.scroll.y = 0;
        }
        if (FlxG.keys.pressed.DOWN || FlxG.mouse.wheel < 0) {
            FlxG.camera.scroll.y += 300 * elapsed;
        }

        // Editar nombre
        if (FlxG.mouse.justPressed && nameInput.overlapsPoint(FlxG.mouse.getPosition()) && !showingDialog) {
            editarNombre();
        }
        
        if (FlxG.keys.justPressed.ESCAPE) {
            if (showingDialog) {
                cerrarDialog();
            } else {
                FlxG.switchState(MenuDebugState.new);
            }
        }
    }
    
    function actualizarNotaLarga(sprite:FlxSprite, nota:ChartNote):Void {
        if (nota.length > 0) {
            // Crear línea de hold debajo de la flecha
            var lineaHold = new FlxSprite(sprite.x + 12, sprite.y + 30);
            lineaHold.makeGraphic(6, Std.int(nota.length * 20), FlxColor.YELLOW);
            
            // Buscar y remover línea anterior si existe
            for (member in notes.members) {
                if (member != null && member != sprite) {
                    var memberSprite:FlxSprite = cast member;
                    if (Math.abs(memberSprite.x - lineaHold.x) < 10 && 
                        Math.abs(memberSprite.y - lineaHold.y) < 10) {
                        notes.remove(member);
                        break;
                    }
                }
            }
            
            notes.add(lineaHold);
        }
    }
    
    function seleccionarCancion():Void {
        try {
            var chartsPath = "assets/charts";
            if (FileSystem.exists(chartsPath)) {
                var files = FileSystem.readDirectory(chartsPath);
                var songFolders = files.filter(function(f) return FileSystem.isDirectory(chartsPath + "/" + f));
                
                if (songFolders.length > 0) {
                    var selectedSong = songFolders[0];
                    trace("🎵 Canción seleccionada: " + selectedSong);
                    
                    var scriptPath = "assets/scripts/1.hx";
                    if (FileSystem.exists(scriptPath)) {
                        trace("📜 Script de eventos cargado");
                    }
                    
                    FlxG.camera.flash(0x4400FF00, 0.3);
                } else {
                    trace("⚠️ No hay canciones disponibles");
                    FlxG.camera.flash(0x44FFFF00, 0.3);
                }
            }
        } catch (e:Dynamic) {
            trace("Error seleccionando canción: " + e);
            FlxG.camera.flash(0x44FF0000, 0.3);
        }
    }
    
    function crearFlechaEvento(sprite:FlxSprite, color:Int):Void {
        sprite.makeGraphic(30, 30, 0x00000000, true);
        var pixels = sprite.pixels;
        
        for (y in 0...30) {
            for (x in 0...30) {
                if (x >= 5 && x <= 25 && y >= 10 && y <= 20) {
                    if (x <= 15 || (x - 15) <= (20 - Math.abs(y - 15))) {
                        pixels.setPixel32(x, y, color | 0xFF000000);
                    }
                }
            }
        }
    }
    
    function detectarPersonajes():Void {
        try {
            var charactersPath = "assets/charater";
            if (FileSystem.exists(charactersPath)) {
                var files = FileSystem.readDirectory(charactersPath);
                var jsonFiles = files.filter(function(f) return f.indexOf(".json") != -1);
                
                for (file in jsonFiles) {
                    var charName = StringTools.replace(file, ".json", "");
                    availableCharacters.push(charName);
                }
                
                if (availableCharacters.length == 0) {
                    availableCharacters = ["BOYFRIEND", "DAD"];
                }
                
                trace("👤 Personajes detectados: " + availableCharacters.join(", "));
            }
        } catch (e:Dynamic) {
            availableCharacters = ["BOYFRIEND", "DAD"];
            trace("Error detectando personajes: " + e);
        }
    }
    
    function cambiarPlayer():Void {
        var currentIndex = availableCharacters.indexOf(playerCharacter);
        var nextIndex = (currentIndex + 1) % availableCharacters.length;
        playerCharacter = availableCharacters[nextIndex];
        
        trace("👤 Player cambiado a: " + playerCharacter);
        FlxG.camera.flash(0x4400FF00, 0.2);
    }
    
    function cambiarOpponent():Void {
        var currentIndex = availableCharacters.indexOf(opponentCharacter);
        var nextIndex = (currentIndex + 1) % availableCharacters.length;
        opponentCharacter = availableCharacters[nextIndex];
        
        trace("👿 Opponent cambiado a: " + opponentCharacter);
        FlxG.camera.flash(0x44FF0000, 0.2);
    }
    
    function cambiarGF():Void {
        var currentIndex = availableCharacters.indexOf(gfCharacter);
        var nextIndex = (currentIndex + 1) % availableCharacters.length;
        gfCharacter = availableCharacters[nextIndex];
        
        trace("💃 GF cambiada a: " + gfCharacter);
        FlxG.camera.flash(0x44FFFF00, 0.2);
    }
    
    function editarPosiciones():Void {
        // Cambiar posiciones con valores predefinidos
        playerPos = [playerPos[0] + 50, playerPos[1]];
        opponentPos = [opponentPos[0] + 50, opponentPos[1]];
        gfPos = [gfPos[0] + 50, gfPos[1]];
        
        trace("📍 Posiciones actualizadas");
        FlxG.camera.flash(0x4400FFFF, 0.2);
    }
    
    function editarNombre():Void {
        // Permitir edición manual del campo
        trace("✏️ Editando nombre del chart");
    }
    
    function mostrarDialogoReemplazo(fileName:String, chartData:Dynamic):Void {
        showingDialog = true;
        
        confirmDialog = new FlxSprite(FlxG.width/2 - 200, FlxG.height/2 - 100);
        confirmDialog.makeGraphic(400, 200, 0xDD000000);
        confirmDialog.scrollFactor.set(0, 0);
        add(confirmDialog);
        
        var dialogText = new FlxText(confirmDialog.x + 20, confirmDialog.y + 20, 360, 
            "El archivo '" + chartName + ".json' ya existe.\n\n¿Quieres reemplazarlo?");
        dialogText.setFormat(null, 16, FlxColor.WHITE, "center");
        dialogText.scrollFactor.set(0, 0);
        add(dialogText);
        
        var btnSi = new FlxButton(confirmDialog.x + 50, confirmDialog.y + 120, "SÍ", function() {
            guardarArchivo(fileName, chartData);
            cerrarDialog();
        });
        btnSi.scrollFactor.set(0, 0);
        add(btnSi);
        
        var btnNo = new FlxButton(confirmDialog.x + 250, confirmDialog.y + 120, "NO", function() {
            cerrarDialog();
        });
        btnNo.scrollFactor.set(0, 0);
        add(btnNo);
    }
    
    function cerrarDialog():Void {
        showingDialog = false;
        if (confirmDialog != null) {
            remove(confirmDialog);
            confirmDialog = null;
        }
    }
    
    function guardarArchivo(fileName:String, chartData:Dynamic):Void {
        try {
            var jsonString = Json.stringify(chartData, null, "  ");
            File.saveContent(fileName, jsonString);
            
            trace("💾 Chart guardado: " + fileName);
            FlxG.camera.flash(0x4400FF00, 0.3);
        } catch (e:Dynamic) {
            trace("Error guardando: " + e);
            FlxG.camera.flash(0x44FF0000, 0.3);
        }
    }
}

typedef ChartEvent = {
    var time:Float;
    var name:String;
    var value1:String;
    var value2:String;
}

typedef ChartNote = {
    var time:Float;
    var lane:Int;
    var type:Int;
    var length:Float;
}