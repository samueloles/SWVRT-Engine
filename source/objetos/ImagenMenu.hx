package objetos;

import flixel.FlxSprite;

class ImagenMenu extends FlxSprite {
    public var ruta:String;

    public function new(x:Float = 0, y:Float = 0, ruta:String) {
        this.ruta = ruta;
        super(x, y);
        if (ruta != null && ruta != "") {
            try {
                loadGraphic(ruta);
            } catch (e:Dynamic) {
                trace("Error cargando imagen: " + ruta + " - " + e);
                makeGraphic(100, 100, 0xFFFF0000); // Rectángulo rojo como fallback
            }
        }
    }
}