package blocks;

import flixel.FlxG;
import openfl.Lib;

typedef BloqueInfo = {
    var categoria:String;
    var nombre:String;
    var descripcion:String;
    var codigo:String;
    var color:Int;
    var logica:Void->Void; // Función de ejecución
}

class Blocks {
    public static var bloques:Array<BloqueInfo> = [
        {
            categoria: "event",
            nombre: "al empezar la canción",
            descripcion: "Ejecuta el código cuando empieza la canción
            ",
            codigo: "def on_song_start(
                
            ):\n    pass\n",
            color: 0xFFD700,
            logica: function() {
                trace("🎵 Canción iniciada!");
            }
        },
        {
            categoria: "effect",
            nombre: "tembrar ventana intensity: (5.0) duration: (1.0)",
            descripcion: "Hace que la ventana del juego tiemble
            ",
            codigo: "def shake_window(
                intensity: float = 5.0,
                duration: float = 1.0
            ):\n    # Temblar ventana\n    pass\n",
            color: 0xFF6B47,
            logica: function() {
                // Temblar la ventana real
                var window = Lib.application.window;
                var originalX = window.x;
                var originalY = window.y;
                
                for (i in 0...10) {
                    haxe.Timer.delay(function() {
                        window.x = originalX + Std.int(Math.random() * 20 - 10);
                        window.y = originalY + Std.int(Math.random() * 20 - 10);
                        
                        if (i == 9) {
                            window.x = originalX;
                            window.y = originalY;
                        }
                    }, i * 100);
                }
            }
        },
        // ...puedes agregar más bloques aquí...
    ];

    public static function getBloquesPorCategoria(cat:String):Array<BloqueInfo> {
        return bloques.filter(function(b) return b.categoria == cat);
    }

    public static function getCategorias():Array<String> {
        var cats = [];
        for (b in bloques) if (!cats.contains(b.categoria)) cats.push(b.categoria);
        return cats;
    }
}
