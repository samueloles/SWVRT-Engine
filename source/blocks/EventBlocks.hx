package blocks;

import flixel.FlxG;
import openfl.Lib;

typedef EventBloqueInfo = {
    var categoria:String;
    var nombre:String;
    var descripcion:String;
    var codigo:String;
    var color:Int;
    var logica:Void->Void;
}

class EventBlocks {
    public static var cooldowns:Map<String, Float> = new Map();
    
    public static function puedeEjecutar(nombreBloque:String):Bool {
        var ahora = haxe.Timer.stamp();
        var ultimaEjecucion = cooldowns.get(nombreBloque);
        return ultimaEjecucion == null || (ahora - ultimaEjecucion) > 2.0; // 2 segundos de cooldown
    }
    
    public static function marcarEjecutado(nombreBloque:String):Void {
        cooldowns.set(nombreBloque, haxe.Timer.stamp());
    }
    
    public static var bloques:Array<EventBloqueInfo> = [
        // CONECTOR DE EVENTOS FNF
        {
            categoria: "event",
            nombre: "cuando evento del chart",
            descripcion: "Se ejecuta cuando se activa un evento en el chart de FNF",
            codigo: "def on_chart_event(event_name, value1, value2):\n    pass\n",
            color: 0xFFFFD700,
            logica: function() {
                trace("🎵 Evento del chart detectado!");
            }
        },
        
        // EVENTOS DE CHART
        {
            categoria: "chart",
            nombre: "en el beat (4)",
            descripcion: "Se ejecuta cuando llega a un beat específico",
            codigo: "def on_beat(beat_number):\n    pass\n",
            color: 0xFF4CAF50,
            logica: function() {
                if (!puedeEjecutar("beat")) return;
                marcarEjecutado("beat");
                trace("🎵 Beat alcanzado!");
                FlxG.camera.flash(0x44FFFFFF, 0.2);
            }
        },
        {
            categoria: "chart",
            nombre: "cambiar scroll speed (1.0)",
            descripcion: "Cambia la velocidad de la canción",
            codigo: "def change_speed(speed):\n    pass\n",
            color: 0xFF2196F3,
            logica: function() {
                trace("⚡ Velocidad cambiada!");
                FlxG.timeScale = 1.5;
                haxe.Timer.delay(function() {
                    FlxG.timeScale = 1.0;
                }, 2000);
            }
        },
        {
            categoria: "chart",
            nombre: "flash pantalla [blanco] (0.5)",
            descripcion: "Hace un flash en la pantalla",
            codigo: "def flash_screen(color):\n    pass\n",
            color: 0xFFFF9800,
            logica: function() {
                FlxG.camera.flash(0x88FFFFFF, 0.5);
            }
        },
        
        // EFECTOS VISUALES
        {
            categoria: "visual",
            nombre: "zoom HUD (1.2) por (1.0)s",
            descripcion: "Hace zoom a la cámara",
            codigo: "def zoom_camera(zoom_level):\n    pass\n",
            color: 0xFF9C27B0,
            logica: function() {
                FlxG.camera.zoom = 1.2;
                haxe.Timer.delay(function() {
                    FlxG.camera.zoom = 1.0;
                }, 1000);
            }
        },
        {
            categoria: "visual",
            nombre: "rotar game (15) grados",
            descripcion: "Rota la cámara",
            codigo: "def rotate_camera(degrees):\n    pass\n",
            color: 0xFFE91E63,
            logica: function() {
                FlxG.camera.angle = 15;
                haxe.Timer.delay(function() {
                    FlxG.camera.angle = 0;
                }, 1000);
            }
        },
        
        // EFECTOS DE SONIDO
        {
            categoria: "audio",
            nombre: "reproducir sonido [hit.wav]",
            descripcion: "Reproduce un efecto de sonido",
            codigo: "def play_sound(sound_file):\n    pass\n",
            color: 0xFFFF5722,
            logica: function() {
                trace("🔊 Sonido reproducido!");
                // FlxG.sound.play("assets/sounds/hit.wav");
            }
        },
        
        // MECÁNICAS DE JUEGO
        {
            categoria: "gameplay",
            nombre: "aumentar score (100)",
            descripcion: "Aumenta el puntaje del jugador",
            codigo: "def increase_score(points):\n    pass\n",
            color: 0xFFFFC107,
            logica: function() {
                trace("⭐ +100 puntos!");
                FlxG.camera.flash(0x44FFFF00, 0.3);
            }
        },
        {
            categoria: "gameplay",
            nombre: "cambiar health a (50)",
            descripcion: "Cambia la vida del jugador",
            codigo: "def change_health(amount):\n    pass\n",
            color: 0xFFF44336,
            logica: function() {
                trace("❤️ Vida cambiada!");
                FlxG.camera.flash(0x44FF0000, 0.3);
            }
        },
        {
            categoria: "visual",
            nombre: "temblar ventana intensity: (5.0) duration: (1.0)",
            descripcion: "Hace que la ventana del juego tiemble",
            codigo: "def shake_window(intensity, duration):\n    pass\n",
            color: 0xFF6B47,
            logica: function() {
                if (!puedeEjecutar("shake_window")) return;
                marcarEjecutado("shake_window");
                
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
        }
    ];

    public static function getBloquesPorCategoria(cat:String):Array<EventBloqueInfo> {
        return bloques.filter(function(b) return b.categoria == cat);
    }

    public static function getCategorias():Array<String> {
        var cats = [];
        for (b in bloques) if (!cats.contains(b.categoria)) cats.push(b.categoria);
        return cats;
    }
}