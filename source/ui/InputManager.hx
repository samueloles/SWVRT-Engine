package ui;

import flixel.FlxG;
import flixel.input.FlxInput;

class InputManager {
    public static function justPressed(key:String):Bool {
        #if mobile
        return false; // Usar controles táctiles
        #else
        return switch(key) {
            case "ENTER": FlxG.keys.justPressed.ENTER;
            case "SPACE": FlxG.keys.justPressed.SPACE;
            case "ESCAPE": FlxG.keys.justPressed.ESCAPE;
            case "UP": FlxG.keys.justPressed.UP;
            case "DOWN": FlxG.keys.justPressed.DOWN;
            case "LEFT": FlxG.keys.justPressed.LEFT;
            case "RIGHT": FlxG.keys.justPressed.RIGHT;
            case "E": FlxG.keys.justPressed.E;
            case "Q": FlxG.keys.justPressed.Q;
            case "R": FlxG.keys.justPressed.R;
            default: false;
        }
        #end
    }
    
    public static function pressed(key:String):Bool {
        #if mobile
        return false; // Usar controles táctiles
        #else
        return switch(key) {
            case "UP": FlxG.keys.pressed.UP;
            case "DOWN": FlxG.keys.pressed.DOWN;
            case "LEFT": FlxG.keys.pressed.LEFT;
            case "RIGHT": FlxG.keys.pressed.RIGHT;
            default: false;
        }
        #end
    }
    
    public static function mouseJustPressed():Bool {
        #if mobile
        return FlxG.touches.justStarted().length > 0;
        #else
        return FlxG.mouse.justPressed;
        #end
    }
    
    public static function mousePressed():Bool {
        #if mobile
        return FlxG.touches.list.length > 0;
        #else
        return FlxG.mouse.pressed;
        #end
    }
    
    public static function mouseJustReleased():Bool {
        #if mobile
        return FlxG.touches.justReleased().length > 0;
        #else
        return FlxG.mouse.justReleased;
        #end
    }
    
    public static function getMousePosition() {
        #if mobile
        var touch = FlxG.touches.getFirst();
        return touch != null ? touch.getPosition() : new flixel.math.FlxPoint(0, 0);
        #else
        return FlxG.mouse.getPosition();
        #end
    }
}