package states.menu;

import flixel.FlxState;
import flixel.text.FlxText;
import flixel.FlxG;
import flixel.util.FlxColor;
import flixel.FlxSprite;
import flixel.ui.FlxButton;
import states.debug.ScratchEditorState;
import states.debug.MenuEditorState;
import states.debug.EventsEditorState;
import states.debug.ChartMenuState;
import states.debug.CharacterEditorState;

class MenuDebugState extends FlxState {
    var options:Array<String> = ["Editor de Menú", "Editor Scratch", "Editor de Eventos", "Chart Menu", "Character Editor"];
    var optionTexts:Array<FlxText> = [];
    var selected:Int = 0;
    var cursor:FlxSprite;
    
    override public function create():Void {
        super.create();
        
        #if MOBILE_BUILD
        // En móvil, ir directo al menú principal
        FlxG.switchState(new states.menu.MainMenuState());
        return;
        #end
        
        crearFondo();
        crearTextos();
        crearBotones();
    }
    
    function crearFondo():Void {
        var fondo = new FlxSprite();
        fondo.makeGraphic(FlxG.width, FlxG.height, FlxColor.fromRGB(30, 30, 70));
        add(fondo);
    }
    
    function crearTextos():Void {
        var textos = [
            {y: 60, texto: "menu debug", size: 36, color: FlxColor.YELLOW},
            {y: 120, texto: "Menú de creación interactiva", size: 24, color: FlxColor.WHITE}
        ];
        
        for (t in textos) {
            var txt = new FlxText(0, t.y, FlxG.width, t.texto, t.size);
            txt.setFormat(null, t.size, t.color, "center");
            add(txt);
        }
    }
    
    function crearBotones():Void {
        // Crear opciones de menú
        for (i in 0...options.length) {
            var text = new FlxText(0, 300 + i * 60, FlxG.width, options[i], 24);
            text.setFormat(null, 24, FlxColor.WHITE, "center");
            optionTexts.push(text);
            add(text);
        }
        
        // Cursor
        cursor = new FlxSprite(FlxG.width/2 - 150, optionTexts[0].y + 8);
        cursor.makeGraphic(32, 32, FlxColor.RED);
        add(cursor);
        
        updateSelection();
    }

    override public function update(elapsed:Float):Void {
        super.update(elapsed);
        
        #if !MOBILE_BUILD
        // Navegación
        if (FlxG.keys.justPressed.DOWN) {
            selected = (selected + 1) % options.length;
            updateSelection();
        } else if (FlxG.keys.justPressed.UP) {
            selected = (selected - 1 + options.length) % options.length;
            updateSelection();
        }
        
        // Selección
        if (FlxG.keys.justPressed.ENTER) {
            switch (selected) {
                case 0: FlxG.switchState(MenuEditorState.new);
                case 1: FlxG.switchState(ScratchEditorState.new);
                case 2: FlxG.switchState(EventsEditorState.new);
                case 3: FlxG.switchState(ChartMenuState.new);
                case 4: FlxG.switchState(CharacterEditorState.new);
            }
        }
        
        #end
    }
    
    function updateSelection():Void {
        for (i in 0...optionTexts.length) {
            optionTexts[i].color = (i == selected) ? FlxColor.YELLOW : FlxColor.WHITE;
        }
        cursor.y = optionTexts[selected].y + 8;
    }
}