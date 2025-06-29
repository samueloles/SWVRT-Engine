package states.debug;

import flixel.FlxState;
import flixel.FlxG;
import flixel.FlxSprite;
import flixel.text.FlxText;
import flixel.ui.FlxButton;
import flixel.util.FlxColor;
import states.debug.MenuEditorState;

class CodeEditorMenu extends FlxState {
    override public function create():Void {
        super.create();
        
        add(new FlxSprite().makeGraphic(FlxG.width, FlxG.height, FlxColor.fromRGB(30, 30, 30)));
        
        var titulo = new FlxText(20, 20, 0, "📜 MODO PROGRAMAR");
        titulo.setFormat(null, 20, FlxColor.WHITE);
        add(titulo);
        
        add(new FlxButton(FlxG.width - 160, 20, "← Volver", () -> FlxG.switchState(MenuEditorState.new)));
        
        var placeholder = new FlxText(0, 0, FlxG.width, "Bloques de programación 😄");
        placeholder.setFormat(null, 18, FlxColor.LIME, "center");
        placeholder.screenCenter();
        add(placeholder);
    }
    
    override public function update(elapsed:Float):Void {
        super.update(elapsed);
        if (FlxG.keys.justPressed.ESCAPE) FlxG.switchState(MenuEditorState.new);
    }
}