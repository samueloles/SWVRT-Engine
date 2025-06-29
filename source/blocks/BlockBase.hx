package blocks;

import flixel.FlxSprite;
import flixel.text.FlxText;
import flixel.addons.ui.FlxInputText;

class BlockBase {
    // Devuelve los elementos visuales de un bloque "mover [n] pasos"
    public static function crearBloqueMover(x:Float, y:Float):Array<Dynamic> {
        var arr = [];
        // Fondo con color azul de Movimiento
        var fondo = new FlxSprite(x, y);
        fondo.makeGraphic(180, 40, 0xFF4C97FF);
        fondo.setGraphicSize(180, 40);
        fondo.updateHitbox();
        arr.push(fondo);

        // Texto inicial: "mover"
        var txtMover = new FlxText(x + 10, y + 10, 50, "mover");
        txtMover.setFormat(null, 14, 0xFFFFFFFF, "left");
        arr.push(txtMover);

        // Caja de texto: número editable
        var inputPasos = new FlxInputText(x + 60, y + 10, 40, "10", 8);
        inputPasos.backgroundColor = 0xFFFFFFFF;
        inputPasos.color = 0xFF000000;
        arr.push(inputPasos);

        // Texto final: "pasos"
        var txtPasos = new FlxText(x + 110, y + 10, 50, "pasos");
        txtPasos.setFormat(null, 14, 0xFFFFFFFF, "left");
        arr.push(txtPasos);

        return arr;
    }
}