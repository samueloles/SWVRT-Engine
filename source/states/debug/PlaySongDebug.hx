package states.debug;

import flixel.FlxState;
import flixel.FlxG;
import flixel.text.FlxText;
import flixel.util.FlxColor;
import flixel.FlxSprite;
import flixel.ui.FlxButton;
import flixel.group.FlxGroup;
import states.menu.MenuDebugState;
import sys.FileSystem;
import sys.io.File;
import haxe.Json;

class PlaySongDebug extends FlxState {
    var songName:String = "Debug Song";
    var availableSongs:Array<String> = [];
    var debugInfo:FlxText;
    var eventsList:FlxText;
    var currentBeat:Int = 0;
    var isPlaying:Bool = false;
    
    // Sistema de notas FNF
    var notes:FlxGroup;
    var strumLine:FlxSprite;
    var chartNotes:Array<Dynamic> = [];
    var songPosition:Float = 0;
    var bpm:Float = 120;
    
    override public function create():Void {
        super.create();
        
        // Fondo debug
        var bg = new FlxSprite();
        bg.makeGraphic(FlxG.width, FlxG.height, 0xFF0D1B2A);
        add(bg);
        
        // Título
        var titulo = new FlxText(10, 10, 0, "🎵 DEBUG - " + songName);
        titulo.setFormat(null, 24, FlxColor.YELLOW);
        add(titulo);
        
        // Info de debug
        debugInfo = new FlxText(10, 60, FlxG.width - 20, "");
        debugInfo.setFormat(null, 14, FlxColor.WHITE);
        add(debugInfo);
        
        // Lista de eventos
        eventsList = new FlxText(10, 200, FlxG.width - 20, "Eventos del Chart:\n- Beat 4: Flash\n- Beat 8: Zoom\n- Beat 12: Shake");
        eventsList.setFormat(null, 12, FlxColor.CYAN);
        add(eventsList);
        
        // Detectar canciones
        detectarCanciones();
        
        // Cargar chart
        cargarChart();
        
        // Crear sistema de notas
        crearSistemaNotas();
        
        // Controles debug
        crearControlesDebug();
        
        actualizarDebugInfo();
    }
    
    function detectarCanciones():Void {
        var chartsPath = "assets/charts";
        
        try {
            if (FileSystem.exists(chartsPath) && FileSystem.isDirectory(chartsPath)) {
                var files = FileSystem.readDirectory(chartsPath);
                
                for (file in files) {
                    if (FileSystem.isDirectory(chartsPath + "/" + file)) {
                        availableSongs.push(file);
                    }
                }
                
                if (availableSongs.length > 0) {
                    songName = availableSongs[0]; // Usar la primera canción encontrada
                }
            }
        } catch (e:Dynamic) {
            trace("Error detectando canciones: " + e);
        }
        
        trace("🎵 Canciones disponibles: " + availableSongs.join(", "));
    }
    
    function cargarChart():Void {
        try {
            var chartsPath = "assets/charts";
            if (FileSystem.exists(chartsPath)) {
                var files = FileSystem.readDirectory(chartsPath);
                var jsonFiles = files.filter(function(f) return f.indexOf(".json") != -1);
                
                if (jsonFiles.length > 0) {
                    var latestFile = jsonFiles[jsonFiles.length - 1];
                    var content = File.getContent(chartsPath + "/" + latestFile);
                    var chartData = Json.parse(content);
                    
                    chartNotes = chartData.notes;
                    bpm = chartData.bpm;
                    songName = chartData.song;
                    
                    trace("🎼 Chart cargado: " + chartNotes.length + " notas");
                }
            }
        } catch (e:Dynamic) {
            trace("Error cargando chart: " + e);
        }
    }
    
    function crearSistemaNotas():Void {
        // Grupo de notas
        notes = new FlxGroup();
        add(notes);
        
        // Strumline (línea donde llegan las notas)
        strumLine = new FlxSprite(0, FlxG.height - 150);
        strumLine.makeGraphic(FlxG.width, 4, FlxColor.WHITE);
        add(strumLine);
        
        // Receptores de notas (donde el jugador presiona)
        for (i in 0...4) {
            var receptor = new FlxSprite(FlxG.width / 2 - 160 + (i * 80), strumLine.y - 40);
            switch (i) {
                case 0: crearFlechaIzquierda(receptor, FlxColor.PURPLE);
                case 1: crearFlechaAbajo(receptor, FlxColor.BLUE);
                case 2: crearFlechaArriba(receptor, FlxColor.GREEN);
                case 3: crearFlechaDerecha(receptor, FlxColor.RED);
            }
            receptor.alpha = 0.6;
            add(receptor);
        }
        
        // Generar notas del chart
        generarNotas();
    }
    
    function generarNotas():Void {
        for (noteData in chartNotes) {
            var nota = new FlxSprite();
            nota.x = FlxG.width / 2 - 160 + (noteData.lane % 4) * 80;
            nota.y = -100; // Empezar arriba de la pantalla
            
            // Crear flecha según dirección
            switch (noteData.lane % 4) {
                case 0: crearFlechaIzquierda(nota, FlxColor.PURPLE);
                case 1: crearFlechaAbajo(nota, FlxColor.BLUE);
                case 2: crearFlechaArriba(nota, FlxColor.GREEN);
                case 3: crearFlechaDerecha(nota, FlxColor.RED);
            }
            
            // Guardar tiempo de la nota
            nota.ID = Std.int(noteData.time * 1000); // Convertir a milisegundos
            notes.add(nota);
        }
    }
    
    // Funciones para crear flechas (copiadas del ChartMenuState)
    function crearFlechaIzquierda(sprite:FlxSprite, color:Int):Void {
        sprite.makeGraphic(60, 60, 0x00000000, true);
        var pixels = sprite.pixels;
        
        for (y in 0...60) {
            for (x in 0...60) {
                if ((x >= 10 && x <= 20 && y >= 24 && y <= 35) ||
                    (x >= 0 && x <= 30 && y >= 28 && y <= 31) ||
                    (x >= 4 && x <= 24 && Math.abs(y - 29) <= (24 - x))) {
                    pixels.setPixel32(x, y, color | 0xFF000000);
                }
            }
        }
    }
    
    function crearFlechaDerecha(sprite:FlxSprite, color:Int):Void {
        sprite.makeGraphic(60, 60, 0x00000000, true);
        var pixels = sprite.pixels;
        
        for (y in 0...60) {
            for (x in 0...60) {
                if ((x >= 38 && x <= 48 && y >= 24 && y <= 35) ||
                    (x >= 28 && x <= 58 && y >= 28 && y <= 31) ||
                    (x >= 34 && x <= 54 && Math.abs(y - 29) <= (x - 34))) {
                    pixels.setPixel32(x, y, color | 0xFF000000);
                }
            }
        }
    }
    
    function crearFlechaArriba(sprite:FlxSprite, color:Int):Void {
        sprite.makeGraphic(60, 60, 0x00000000, true);
        var pixels = sprite.pixels;
        
        for (y in 0...60) {
            for (x in 0...60) {
                if ((x >= 24 && x <= 35 && y >= 10 && y <= 20) ||
                    (x >= 28 && x <= 31 && y >= 0 && y <= 30) ||
                    (y >= 4 && y <= 24 && Math.abs(x - 29) <= (24 - y))) {
                    pixels.setPixel32(x, y, color | 0xFF000000);
                }
            }
        }
    }
    
    function crearFlechaAbajo(sprite:FlxSprite, color:Int):Void {
        sprite.makeGraphic(60, 60, 0x00000000, true);
        var pixels = sprite.pixels;
        
        for (y in 0...60) {
            for (x in 0...60) {
                if ((x >= 24 && x <= 35 && y >= 38 && y <= 48) ||
                    (x >= 28 && x <= 31 && y >= 28 && y <= 58) ||
                    (y >= 34 && y <= 54 && Math.abs(x - 29) <= (y - 34))) {
                    pixels.setPixel32(x, y, color | 0xFF000000);
                }
            }
        }
    }
    
    function crearControlesDebug():Void {
        var y = FlxG.height - 120;
        
        var btnPlay = new FlxButton(10, y, isPlaying ? "⏸️ Pausar" : "▶️ Play", togglePlay);
        add(btnPlay);
        
        var btnStop = new FlxButton(120, y, "⏹️ Stop", stopSong);
        add(btnStop);
        
        var btnRestart = new FlxButton(230, y, "🔄 Restart", restartSong);
        add(btnRestart);
        
        var btnVolver = new FlxButton(FlxG.width - 120, 10, "← Volver", function() {
            FlxG.switchState(MenuDebugState.new);
        });
        add(btnVolver);
    }
    
    function togglePlay():Void {
        isPlaying = !isPlaying;
        trace(isPlaying ? "▶️ Reproduciendo" : "⏸️ Pausado");
    }
    
    function stopSong():Void {
        isPlaying = false;
        currentBeat = 0;
        trace("⏹️ Detenido");
    }
    
    function restartSong():Void {
        currentBeat = 0;
        isPlaying = true;
        trace("🔄 Reiniciado");
    }
    
    function actualizarDebugInfo():Void {
        debugInfo.text = "Estado: " + (isPlaying ? "REPRODUCIENDO" : "PAUSADO") + 
                        "\nBeat actual: " + currentBeat +
                        "\nTiempo: " + Math.round(songPosition / 1000) + "s" +
                        "\nNotas activas: " + notes.length +
                        "\nFPS: " + FlxG.drawFramerate +
                        "\n\nControles:" +
                        "\nESPACIO - Simular evento" +
                        "\n1,2,3,4 - Simular notas" +
                        "\nESC - Salir";
    }
    
    override public function update(elapsed:Float):Void {
        super.update(elapsed);
        
        // Actualizar posición de la canción
        if (isPlaying) {
            songPosition += elapsed * 1000; // Milisegundos
            currentBeat = Std.int((songPosition / 1000) * (bpm / 60));
            
            // Mover notas hacia abajo
            for (nota in notes.members) {
                if (nota != null) {
                    var noteSprite:FlxSprite = cast nota;
                    var tiempoNota = noteSprite.ID;
                    var posicionY = strumLine.y - 40 - ((tiempoNota - songPosition) * 0.5);
                    noteSprite.y = posicionY;
                    
                    // Eliminar notas que pasaron
                    if (noteSprite.y > FlxG.height + 100) {
                        notes.remove(noteSprite);
                    }
                }
            }
            
            actualizarDebugInfo();
        }
        
        // Controles debug
        if (FlxG.keys.justPressed.SPACE) {
            trace("🎯 Evento simulado en beat " + currentBeat);
            FlxG.camera.flash(0x44FFFFFF, 0.2);
        }
        
        if (FlxG.keys.justPressed.ONE) trace("🎵 Nota 1");
        if (FlxG.keys.justPressed.TWO) trace("🎵 Nota 2");
        if (FlxG.keys.justPressed.THREE) trace("🎵 Nota 3");
        if (FlxG.keys.justPressed.FOUR) trace("🎵 Nota 4");
        
        if (FlxG.keys.justPressed.ESCAPE) {
            FlxG.switchState(MenuDebugState.new);
        }
    }
}