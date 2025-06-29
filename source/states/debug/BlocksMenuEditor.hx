package states.debug;

import flixel.FlxState;
import flixel.FlxG;
import flixel.FlxSprite;
import flixel.text.FlxText;
import flixel.util.FlxColor;
import flixel.ui.FlxButton;
import states.menu.MenuDebugState;

class BlocksMenuEditor extends FlxState {
    override public function create():Void {
        super.create();
        
        // Fondo
        var bg = new FlxSprite();
        bg.makeGraphic(FlxG.width, FlxG.height, 0xFF2A2A2A);
        add(bg);
        
        // Título
        var titulo = new FlxText(0, 50, FlxG.width, "🧩 BLOCKS MENU EDITOR");
        titulo.setFormat(null, 32, FlxColor.WHITE, "center");
        add(titulo);
        
        // Mensaje temporal
        var mensaje = new FlxText(0, 200, FlxG.width, "Editor de bloques para menús\n\n(En desarrollo)");
        mensaje.setFormat(null, 18, FlxColor.GRAY, "center");
        add(mensaje);
        
        // Botón volver
        var btnVolver = new FlxButton(FlxG.width - 120, 10, "← Volver", function() {
            FlxG.switchState(MenuDebugState.new);
        });
        add(btnVolver);
    }
}