package states.menu;

import flixel.FlxState;
import flixel.FlxG;
import flixel.text.FlxText;
import flixel.FlxSprite;
import flixel.util.FlxColor;
import flixel.tweens.FlxTween;
import states.menu.MainMenuState;

class TitleState extends FlxState {
  var bg:FlxSprite;
  var titleText:FlxText;
  var pressEnter:FlxText;
  var fading:Bool = false;
  var blinkTween:FlxTween; // agrégalo arriba, como variable de la clase

  override public function create():Void {
    super.create();

    // Forzar 60 FPS
    FlxG.updateFramerate = 60;
    FlxG.drawFramerate = 60;

    // Fondo del título
    bg = new FlxSprite(0, 0, "assets/imagen/menu/titleBG.png");
    bg.setGraphicSize(1280, 720);
    bg.updateHitbox();
    add(bg);

    // Texto del título
    titleText = new FlxText(0, 140, 1280, "SWVRT ENGINE", 64);
    titleText.setFormat(null, 64, FlxColor.RED, "center");
    add(titleText);

    // Texto "Presiona ENTER"
    pressEnter = new FlxText(0, 600, 1280, "Presiona ENTER", 32);
    pressEnter.setFormat(null, 32, FlxColor.WHITE, "center");
    add(pressEnter);

    // Música de menú (solo si aún no suena)
    if (FlxG.sound.music == null || !FlxG.sound.music.playing)
      FlxG.sound.playMusic("assets/music/menuMusic.ogg", 1.0, true);
  }

  override public function update(elapsed:Float):Void {
    super.update(elapsed);

    #if !mobile
    if (!fading && FlxG.keys.justPressed.ENTER) {
    #else
    if (!fading && FlxG.touches.justStarted().length > 0) {
    #end
      fading = true;
      FlxG.sound.play("assets/sounds/confirm.ogg");

      FlxG.camera.fade(FlxColor.BLACK, 1, false, () -> {
        FlxG.sound.music.stop();
        FlxG.switchState(MainMenuState.new);
      });
    }
  }
  override public function destroy():Void {
    if (blinkTween != null) blinkTween.cancel();
    super.destroy();
  }
}