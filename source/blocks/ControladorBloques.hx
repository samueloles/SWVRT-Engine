package blocks;

import flixel.group.FlxGroup;
import flixel.text.FlxText;
import flixel.FlxSprite;

class ControladorBloques {
    public static function generarCategoria(nombre:String, estado:FlxGroup) {
        var xInicio = 160;
        var yInicio = 60;

        // Título de la categoría
        var titulo = new FlxText(xInicio, yInicio, 200, nombre);
        titulo.setFormat(null, 16, 0xFFFFFFFF, "left");
        titulo.setFormat(null, 16, 0xFFFFFFFF, "left");
        titulo.setBorderStyle(flixel.text.FlxTextBorderStyle.OUTLINE, 0xFF000000);
        estado.add(titulo);
        // Bloque de ejemplo posicionado debajo del título
        var bloque = new FlxSprite(xInicio, yInicio + 30);
        bloque.makeGraphic(120, 20, 0xFF0088FF);
        estado.add(bloque);
    }
}