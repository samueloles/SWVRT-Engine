package;

import openfl.display.Sprite;
import flixel.FlxGame;
import flixel.FlxG;
import states.menu.TitleState;

class Main extends Sprite {
  public function new() {
    super();

    // Crea el juego con la resolución deseada y el estado inicial desde TitleState
    var game = new FlxGame(1280, 720, TitleState);
    addChild(game);

    // Framerate y debugger se configuran en TitleState.create()
  }
}