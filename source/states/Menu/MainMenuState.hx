package states.menu;

import flixel.FlxState;
import flixel.FlxG;
import flixel.text.FlxText;
import flixel.FlxSprite;
import flixel.util.FlxColor;
import states.menu.MenuDebugState;
// import states.menu.StoryMenuState;
// import states.menu.FreeplayMenuState;
// import states.menu.OptionsMenuState;

class MainMenuState extends FlxState {
  var options:Array<String> = ["STORY MODE", "FREEPLAY", "OPTIONS"];
  var optionTexts:Array<FlxText> = [];
  var selected:Int = 0;
  var cursor:FlxSprite;

  override public function create():Void {
    super.create();

    var bg = new FlxSprite(0, 0);
    bg.loadGraphic("assets/imagen/menu/mainBG.png");
    bg.setGraphicSize(1280, 720);
    bg.updateHitbox();
    add(bg);

    for (i in 0...options.length) {
      var text = new FlxText(0, 300 + i * 60, 1280, options[i], 32);
      text.setFormat(null, 32, FlxColor.WHITE, "center");
      optionTexts.push(text);
      add(text);
    }

    cursor = new FlxSprite(400, optionTexts[0].y + 8);
    cursor.makeGraphic(32, 32, FlxColor.RED); // Puedes reemplazarlo con loadGraphic más adelante
    add(cursor);

    if (FlxG.sound.music == null || !FlxG.sound.music.playing)
      FlxG.sound.playMusic("assets/music/menuMusic.ogg", 1.0, true);

    updateSelection();
  }

  override public function update(elapsed:Float):Void {
    super.update(elapsed);

    #if !mobile
    if (FlxG.keys.justPressed.DOWN) {
      selected = (selected + 1) % options.length;
      updateSelection();
    } else if (FlxG.keys.justPressed.UP) {
      selected = (selected - 1 + options.length) % options.length;
      updateSelection();
    }

    if (FlxG.keys.justPressed.ENTER) {
      FlxG.sound.play("assets/sounds/confirm.ogg");
      FlxG.sound.music.stop();

      switch (selected) {
        case 0: trace("StoryMenuState not found.");
        case 1: trace("FreeplayMenuState not found.");
        case 2: trace("OptionsMenuState not found.");
      }
    }

    if (FlxG.keys.justPressed.SEVEN) {
      FlxG.sound.play("assets/sounds/confirm.ogg");
      FlxG.sound.music.stop();
      FlxG.switchState(MenuDebugState.new);
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