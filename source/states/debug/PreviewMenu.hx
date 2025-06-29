package states.debug;

import flixel.FlxState;
import flixel.FlxG;
import flixel.FlxSprite;
import flixel.text.FlxText;
import flixel.ui.FlxButton;
import flixel.util.FlxColor;
import states.debug.MenuEditorState;
import objetos.ImagenMenu;

class PreviewMenu extends FlxState {
    override public function create():Void {
        super.create();
        
        add(new FlxSprite().makeGraphic(FlxG.width, FlxG.height, FlxColor.BLACK));
        
        var titulo = new FlxText(20, 20, 0, "👁️ Vista previa");
        titulo.setFormat(null, 18, FlxColor.WHITE);
        add(titulo);
        
        add(new FlxButton(FlxG.width - 160, 20, "← Volver", () -> FlxG.switchState(MenuEditorState.new)));
        
        // Mostrar elementos del editor
        if (MenuEditorState.elementosCompartidos.length > 0) {
            for (elemento in MenuEditorState.elementosCompartidos) {
                if (Std.isOfType(elemento, FlxText)) {
                    var txt:FlxText = cast elemento;
                    var copia = new FlxText(txt.x, txt.y, txt.fieldWidth, txt.text);
                    copia.setFormat(txt.font, txt.size, txt.color, txt.alignment);
                    add(copia);
                } else if (Std.isOfType(elemento, ImagenMenu)) {
                    var img:ImagenMenu = cast elemento;
                    var copia = new ImagenMenu(img.x, img.y, img.ruta);
                    add(copia);
                } else if (Std.isOfType(elemento, FlxButton)) {
                    var btn:FlxButton = cast elemento;
                    var copia = new FlxButton(btn.x, btn.y, btn.text);
                    add(copia);
                }
            }
        } else {
            var aviso = new FlxText(0, 0, FlxG.width, "🧪 Sin elementos\nCrea algo en el editor primero");
            aviso.setFormat(null, 16, FlxColor.GRAY, "center");
            aviso.screenCenter();
            add(aviso);
        }
    }
    
    override public function update(elapsed:Float):Void {
        super.update(elapsed);
        if (FlxG.keys.justPressed.ESCAPE) FlxG.switchState(MenuEditorState.new);
    }
}