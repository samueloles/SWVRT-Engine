package ui;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.group.FlxGroup;
import flixel.ui.FlxButton;
import flixel.util.FlxColor;

class MobileControls extends FlxGroup {
    // Botones de dirección
    var btnLeft:FlxButton;
    var btnDown:FlxButton;
    var btnUp:FlxButton;
    var btnRight:FlxButton;
    
    // Botones de acción
    var btnAccept:FlxButton;
    var btnBack:FlxButton;
    
    // Variables de estado
    public var leftPressed:Bool = false;
    public var downPressed:Bool = false;
    public var upPressed:Bool = false;
    public var rightPressed:Bool = false;
    public var acceptJustPressed:Bool = false;
    public var backJustPressed:Bool = false;
    
    public function new() {
        super();
        
        #if mobile
        crearControles();
        #end
    }
    
    function crearControles():Void {
        var buttonSize = 80;
        var margin = 20;
        
        // Botones de dirección (izquierda)
        btnLeft = new FlxButton(margin, FlxG.height - buttonSize * 2 - margin, "←");
        btnLeft.setGraphicSize(buttonSize, buttonSize);
        btnLeft.color = FlxColor.PURPLE;
        btnLeft.alpha = 0.7;
        add(btnLeft);
        
        btnDown = new FlxButton(margin + buttonSize, FlxG.height - buttonSize - margin, "↓");
        btnDown.setGraphicSize(buttonSize, buttonSize);
        btnDown.color = FlxColor.BLUE;
        btnDown.alpha = 0.7;
        add(btnDown);
        
        btnUp = new FlxButton(margin + buttonSize, FlxG.height - buttonSize * 2 - margin, "↑");
        btnUp.setGraphicSize(buttonSize, buttonSize);
        btnUp.color = FlxColor.GREEN;
        btnUp.alpha = 0.7;
        add(btnUp);
        
        btnRight = new FlxButton(margin + buttonSize * 2, FlxG.height - buttonSize * 2 - margin, "→");
        btnRight.setGraphicSize(buttonSize, buttonSize);
        btnRight.color = FlxColor.RED;
        btnRight.alpha = 0.7;
        add(btnRight);
        
        // Botones de acción (derecha)
        btnAccept = new FlxButton(FlxG.width - buttonSize * 2 - margin, FlxG.height - buttonSize - margin, "✓", function() {
            acceptJustPressed = true;
        });
        btnAccept.setGraphicSize(buttonSize, buttonSize);
        btnAccept.color = FlxColor.LIME;
        btnAccept.alpha = 0.7;
        add(btnAccept);
        
        btnBack = new FlxButton(FlxG.width - buttonSize - margin, FlxG.height - buttonSize - margin, "✕", function() {
            backJustPressed = true;
        });
        btnBack.setGraphicSize(buttonSize, buttonSize);
        btnBack.color = FlxColor.ORANGE;
        btnBack.alpha = 0.7;
        add(btnBack);
    }
    
    override public function update(elapsed:Float):Void {
        super.update(elapsed);
        
        #if mobile
        // Actualizar estados de botones direccionales
        leftPressed = btnLeft != null && btnLeft.pressed;
        downPressed = btnDown != null && btnDown.pressed;
        upPressed = btnUp != null && btnUp.pressed;
        rightPressed = btnRight != null && btnRight.pressed;
        
        // Reset de botones de acción después de un frame
        if (acceptJustPressed) acceptJustPressed = false;
        if (backJustPressed) backJustPressed = false;
        #end
    }
    
    // Funciones para verificar controles (móvil + PC)
    public function checkLeft():Bool {
        #if mobile
        return leftPressed;
        #else
        return FlxG.keys.pressed.LEFT || FlxG.keys.pressed.A;
        #end
    }
    
    public function checkDown():Bool {
        #if mobile
        return downPressed;
        #else
        return FlxG.keys.pressed.DOWN || FlxG.keys.pressed.S;
        #end
    }
    
    public function checkUp():Bool {
        #if mobile
        return upPressed;
        #else
        return FlxG.keys.pressed.UP || FlxG.keys.pressed.W;
        #end
    }
    
    public function checkRight():Bool {
        #if mobile
        return rightPressed;
        #else
        return FlxG.keys.pressed.RIGHT || FlxG.keys.pressed.D;
        #end
    }
    
    public function checkAccept():Bool {
        #if mobile
        return acceptJustPressed;
        #else
        return FlxG.keys.justPressed.ENTER || FlxG.keys.justPressed.SPACE;
        #end
    }
    
    public function checkBack():Bool {
        #if mobile
        return backJustPressed;
        #else
        return FlxG.keys.justPressed.ESCAPE;
        #end
    }
}