package blocks;

import flixel.group.FlxGroup;
import flixel.text.FlxText;
import flixel.FlxG;
import blocks.Blocks;
import flixel.math.FlxPoint;

class ListaDeBloquesMovimiento extends FlxGroup {
    public var onBloqueClick:String->Void; // callback para agregar código
    var bloquesTxt:Array<{txt:FlxText, codigo:String}> = [];

    public function new(categoria:String, onBloqueClick:String->Void) {
        super();
        this.onBloqueClick = onBloqueClick;

        var bloques = Blocks.getBloquesPorCategoria(categoria);
        var y = 60;
        for (bloque in bloques) {
            var txt = new FlxText(130, y, 300, bloque.nombre);
            txt.size = 16;
            txt.color = 0xFFFFFFFF;
            txt.borderStyle = flixel.text.FlxTextBorderStyle.OUTLINE;
            txt.borderColor = 0xFF000000;
            txt.ID = y; // para identificar el bloque
            txt.scrollFactor.set(0, 0);
            txt.active = true;
            txt.moves = false;
            txt.immovable = true;
            this.add(txt);
            bloquesTxt.push({txt: txt, codigo: bloque.codigo});
            y += 40;
        }
    }

    override public function update(elapsed:Float):Void {
        super.update(elapsed);
        if (FlxG.mouse.justPressed) {
            var mx = FlxG.mouse.x;
            var my = FlxG.mouse.y;
            for (item in bloquesTxt) {
                if (item.txt.overlapsPoint(new FlxPoint(mx, my))) {
                    if (this.onBloqueClick != null) this.onBloqueClick(item.codigo);
                }
            }
        }
    }
}