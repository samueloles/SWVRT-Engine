package utils;

import flixel.FlxG;
import flixel.sound.FlxSound;

class AudioSync {
  public var song:FlxSound;
  public var startTime:Float;

  public function new(path:String) {
    song = FlxG.sound.load(path, 1.0, false);
  }

  public function play():Void {
    song.play();
    startTime = 0;
  }

  public function getCurrentTime():Float {
    return song.time;
  }

  public function isPlaying():Bool {
    return song.playing;
  }
}