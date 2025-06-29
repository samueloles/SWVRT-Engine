package states.debug;

import flixel.FlxState;
import flixel.FlxG;
import flixel.FlxSprite;
import flixel.group.FlxGroup;
import flixel.text.FlxText;
import flixel.ui.FlxButton;
import sys.FileSystem;
import StringTools;
import states.debug.MenuEditorState;

class ImageSelectorState extends FlxState {
    public static var imagenSeleccionada:String = null;

    static final CARPETA = "assets/imagen/menu/custom/";
    static final EXTENSIONES = [".png", ".jpg", ".jpeg"];

    override public function create():Void {
        super.create();

        add(new FlxText(10, 10, 0, "🖼️ Selecciona imagen"));

        var imagenes = obtenerImagenes();
        if (imagenes.length == 0) {
            add(new FlxText(10, 60, 0, "❌ Sin imágenes en: " + CARPETA));
            return;
        }

        crearMiniaturas(imagenes);
    }

    function obtenerImagenes():Array<String> {
        return FileSystem.readDirectory(CARPETA).filter(n -> {
            var lower = n.toLowerCase();
            for (ext in EXTENSIONES) {
                if (StringTools.endsWith(lower, ext)) return true;
            }
            return false;
        });
    }

    function crearMiniaturas(imagenes:Array<String>):Void {
        var miniaturas = new FlxGroup();
        add(miniaturas);

        for (i in 0...imagenes.length) {
            var x = 10 + (i % 6) * 110;
            var y = 50 + Std.int(i / 6) * 110;
            var ruta = CARPETA + imagenes[i];

            var mini = new FlxButton(x, y, "", (function(rutaCapturada:String) {
                return function() {
                    imagenSeleccionada = rutaCapturada;
                    FlxG.switchState(MenuEditorState.new);
                };
            })(ruta));

            mini.loadGraphic(ruta, true, 100, 100);
            mini.label.visible = false;
            miniaturas.add(mini);
        }
    }
}