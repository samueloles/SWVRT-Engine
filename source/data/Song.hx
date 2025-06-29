package data;

import openfl.Assets;

typedef NoteData = {
  time:Float,
  column:Int
}

typedef SongData = {
  name:String,
  bpm:Int,
  notes:Array<NoteData>
}

class Song {
  public static function load(name:String):SongData {
    var path = 'assets/charts/$name.json';
    var raw:String = Assets.getText(path);
    return cast(haxe.Json.parse(raw), SongData);
  }
}