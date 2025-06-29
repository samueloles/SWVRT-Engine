package states;

import flixel.FlxState;
import flixel.FlxG;
import flixel.text.FlxText;
import flixel.util.FlxColor;
import flixel.FlxSprite;
import sys.FileSystem;

class PlaySong extends FlxState {
    var songName:String = "Test";
    var difficulty:String = "normal";
    var availableSongs:Array<String> = [];
    var scoreText:FlxText;
    var healthBar:FlxSprite;
    var currentScore:Int = 0;
    var health:Float = 50.0;
    
    public function new(song:String = "Test", diff:String = "normal") {
        super();
        songName = song;
        difficulty = diff;
    }
    
    override public function create():Void {
        super.create();
        
        // Fondo
        var bg = new FlxSprite();
        bg.makeGraphic(FlxG.width, FlxG.height, 0xFF1A1A2E);
        add(bg);
        
        // Detectar canciones
        detectarCanciones();
        
        // UI del juego
        crearUI();
        
        // Iniciar canción
        trace("🎵 Reproduciendo: " + songName + " [" + difficulty + "]");
    }
    
    function crearUI():Void {
        // Score
        scoreText = new FlxText(10, 10, 0, "Score: " + currentScore);
        scoreText.setFormat(null, 20, FlxColor.WHITE);
        add(scoreText);
        
        // Barra de vida
        var healthBG = new FlxSprite(FlxG.width - 120, 50);
        healthBG.makeGraphic(20, 200, FlxColor.BLACK);
        add(healthBG);
        
        healthBar = new FlxSprite(FlxG.width - 118, 52);
        healthBar.makeGraphic(16, Std.int(health * 2), FlxColor.GREEN);
        add(healthBar);
        
        // Info de canción
        var songInfo = new FlxText(0, FlxG.height - 60, FlxG.width, songName + " - " + difficulty);
        songInfo.setFormat(null, 16, FlxColor.CYAN, "center");
        add(songInfo);
    }
    
    override public function update(elapsed:Float):Void {
        super.update(elapsed);
        
        // Controles básicos
        if (FlxG.keys.justPressed.ESCAPE) {
            FlxG.switchState(new MainMenuState());
        }
        
        // Simular gameplay
        if (FlxG.keys.justPressed.SPACE) {
            currentScore += 100;
            scoreText.text = "Score: " + currentScore;
        }
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
                
                if (availableSongs.length > 0 && songName == "Test") {
                    songName = availableSongs[0]; // Usar la primera canción si es la por defecto
                }
            }
        } catch (e:Dynamic) {
            trace("Error detectando canciones: " + e);
        }
        
        trace("🎵 Canciones disponibles: " + availableSongs.join(", "));
    }
}