package states.debug;

import flixel.FlxState;
import flixel.FlxG;
import flixel.text.FlxText;
import flixel.util.FlxColor;
import flixel.FlxSprite;
import flixel.ui.FlxButton;
import flixel.graphics.frames.FlxAtlasFrames;
import states.menu.MenuDebugState;
import sys.FileSystem;
import sys.io.File;
import haxe.Json;

class CharacterEditorState extends FlxState {
    // Character data
    var characterSprite:FlxSprite;
    var characterName:String = "MiPersonaje";
    var animations:Array<AnimationData> = [];
    var currentAnimation:Int = 0;
    
    // Dialog system
    var confirmDialog:FlxSprite;
    var showingDialog:Bool = false;
    
    // UI
    var infoText:FlxText;
    var nameInput:FlxText;
    var animationsList:FlxText;
    var previewArea:FlxSprite;
    
    // Animation editing
    var animName:String = "idle";
    var animPrefix:String = "BFidledance";
    var animFPS:Int = 24;
    var animLooped:Bool = true;
    
    // Input fields
    var nameField:FlxText;
    var prefixField:FlxText;
    var fpsField:FlxText;
    var editingField:String = "none";
    
    override public function create():Void {
        super.create();
        
        // Background
        var bg = new FlxSprite();
        bg.makeGraphic(FlxG.width, FlxG.height, 0xFF2A2A2A);
        add(bg);
        
        // Title
        var titulo = new FlxText(10, 10, 0, "👤 CHARACTER EDITOR");
        titulo.setFormat(null, 24, FlxColor.WHITE);
        add(titulo);
        
        // Character name input
        var nameLabel = new FlxText(10, 50, 0, "Nombre:");
        nameLabel.setFormat(null, 16, FlxColor.WHITE);
        add(nameLabel);
        
        nameInput = new FlxText(80, 50, 200, characterName);
        nameInput.setFormat(null, 16, FlxColor.YELLOW);
        add(nameInput);
        
        // Preview area
        previewArea = new FlxSprite(300, 100);
        previewArea.makeGraphic(400, 400, 0xFF404040);
        add(previewArea);
        
        var previewLabel = new FlxText(300, 80, 0, "👁️ PREVIEW");
        previewLabel.setFormat(null, 16, FlxColor.WHITE);
        add(previewLabel);
        
        // Character sprite
        characterSprite = new FlxSprite(450, 250);
        characterSprite.makeGraphic(100, 100, FlxColor.CYAN);
        add(characterSprite);
        
        // Info panel
        infoText = new FlxText(10, 100, 280, "");
        infoText.setFormat(null, 12, FlxColor.WHITE);
        add(infoText);
        
        // Animations list
        animationsList = new FlxText(10, 300, 280, "");
        animationsList.setFormat(null, 12, FlxColor.CYAN);
        add(animationsList);
        
        // Custom animation inputs
        createAnimationInputs();
        
        // Buttons
        createButtons();
        
        // Load character if exists
        loadCharacterAssets();
        
        // Auto-load BOYFRIEND.json if exists
        loadCharacterJSON();
        
        updateInfo();
    }
    
    function createButtons():Void {
        var y = FlxG.height - 120;
        
        var btnLoad = new FlxButton(10, y, "📁 Cargar PNG/XML", loadAssets);
        add(btnLoad);
        
        var btnLoadJSON = new FlxButton(10, y + 30, "📄 Cargar JSON", loadCharacterJSON);
        add(btnLoadJSON);
        
        var btnAddAnim = new FlxButton(150, y, "➕ Agregar Custom", addAnimation);
        add(btnAddAnim);
        
        var btnToggleLoop = new FlxButton(270, y, animLooped ? "🔁 Loop: Sí" : "🔁 Loop: No", toggleLoop);
        add(btnToggleLoop);
        
        var btnPlayAnim = new FlxButton(270, y, "▶️ Reproducir", playAnimation);
        add(btnPlayAnim);
        
        var btnSave = new FlxButton(FlxG.width - 200, y, "💾 Guardar", saveCharacter);
        add(btnSave);
        
        var btnBack = new FlxButton(FlxG.width - 100, 10, "← Volver", function() {
            FlxG.switchState(MenuDebugState.new);
        });
        add(btnBack);
    }
    
    function loadAssets():Void {
        try {
            var assetsPath = "assets/imagen/charater";
            if (FileSystem.exists(assetsPath)) {
                var files = FileSystem.readDirectory(assetsPath);
                var pngFiles = files.filter(function(f) return f.indexOf(".png") != -1);
                var xmlFiles = files.filter(function(f) return f.indexOf(".xml") != -1);
                
                if (pngFiles.length > 0 && xmlFiles.length > 0) {
                    var pngFile = pngFiles[0];
                    var xmlFile = xmlFiles[0];
                    
                    // Load atlas
                    try {
                        characterSprite.frames = FlxAtlasFrames.fromSparrow(
                            assetsPath + "/" + pngFile,
                            assetsPath + "/" + xmlFile
                        );
                        
                        trace("✅ Assets cargados: " + pngFile + ", " + xmlFile);
                        FlxG.camera.flash(0x4400FF00, 0.3);
                        
                        // Manual animation creation like Psych Engine
                        trace("📝 Usa los campos para crear animaciones manualmente");
                        
                    } catch (e:Dynamic) {
                        trace("❌ Error cargando atlas: " + e);
                        FlxG.camera.flash(0x44FF0000, 0.3);
                    }
                } else {
                    trace("⚠️ Necesitas PNG y XML en " + assetsPath);
                    FlxG.camera.flash(0x44FFFF00, 0.3);
                }
            }
        } catch (e:Dynamic) {
            trace("Error: " + e);
        }
        
        updateInfo();
    }
    
    // Manual animation creation like Psych Engine - no auto-detection
    
    function addAnimation():Void {
        if (characterSprite.frames != null) {
            try {
                characterSprite.animation.addByPrefix(animName, animPrefix, animFPS, animLooped);
                animations.push({
                    name: animName,
                    prefix: animPrefix,
                    fps: animFPS,
                    looped: animLooped
                });
                
                trace("➕ Animación agregada: " + animName);
                updateAnimationsList();
                FlxG.camera.flash(0x4400FF00, 0.3);
                
            } catch (e:Dynamic) {
                trace("❌ Error agregando animación: " + e);
                FlxG.camera.flash(0x44FF0000, 0.3);
            }
        }
    }
    
    function playAnimation():Void {
        if (animations.length > 0 && characterSprite.animation != null) {
            var anim = animations[currentAnimation];
            characterSprite.animation.play(anim.name);
            trace("▶️ Reproduciendo: " + anim.name);
        }
    }
    
    function saveCharacter():Void {
        // Actualizar nombre desde el input
        characterName = nameInput.text;
        
        try {
            var exportPath = "exports/windows/bin/assets/charater";
            if (!FileSystem.exists(exportPath)) {
                FileSystem.createDirectory(exportPath);
            }
            
            var characterData = {
                name: characterName,
                animations: animations,
                scale: [characterSprite.scale.x, characterSprite.scale.y],
                position: [characterSprite.x, characterSprite.y]
            };
            
            var jsonString = Json.stringify(characterData, null, "  ");
            var fileName = exportPath + "/" + characterName + ".json";
            
            if (FileSystem.exists(fileName)) {
                mostrarDialogoReemplazo(fileName, characterData);
                return;
            }
            File.saveContent(fileName, jsonString);
            
            trace("💾 Personaje guardado: " + fileName);
            FlxG.camera.flash(0x4400FF00, 0.3);
            
        } catch (e:Dynamic) {
            trace("❌ Error guardando: " + e);
            FlxG.camera.flash(0x44FF0000, 0.3);
        }
    }
    
    function loadCharacterAssets():Void {
        // Try to load existing character data
        try {
            var exportPath = "exports/windows/bin/assets/charater";
            if (FileSystem.exists(exportPath)) {
                var files = FileSystem.readDirectory(exportPath);
                var jsonFiles = files.filter(function(f) return f.indexOf(".json") != -1);
                
                if (jsonFiles.length > 0) {
                    var latestFile = jsonFiles[jsonFiles.length - 1];
                    var content = File.getContent(exportPath + "/" + latestFile);
                    var data = Json.parse(content);
                    
                    characterName = data.name;
                    animations = data.animations;
                    
                    trace("📁 Personaje cargado: " + latestFile);
                }
            }
        } catch (e:Dynamic) {
            // No existing character, use defaults
        }
    }
    
    function updateInfo():Void {
        infoText.text = "👤 INFORMACIÓN\n" +
                       "Nombre: " + characterName + "\n" +
                       "Animaciones: " + animations.length + "\n" +
                       "\n📝 CONTROLES:\n" +
                       "1,2,3,4 - Cambiar anim\n" +
                       "SPACE - Reproducir\n" +
                       "↑↓ - Cambiar FPS\n" +
                       "←→ - Cambiar escala\n" +
                       "\n⚙️ NUEVA ANIMACIÓN:\n" +
                       "Nombre: " + animName + "\n" +
                       "Prefix: " + animPrefix + "\n" +
                       "FPS: " + animFPS + "\n" +
                       "Loop: " + (animLooped ? "Sí" : "No");
    }
    
    function updateAnimationsList():Void {
        animationsList.text = "🎭 ANIMACIONES:\n";
        for (i in 0...animations.length) {
            var anim = animations[i];
            var marker = (i == currentAnimation) ? "► " : "  ";
            animationsList.text += marker + anim.name + " (" + anim.fps + " fps)\n";
        }
    }
    
    override public function update(elapsed:Float):Void {
        super.update(elapsed);
        
        // Animation selection
        if (FlxG.keys.justPressed.ONE && animations.length > 0) {
            currentAnimation = 0;
            playAnimation();
        }
        if (FlxG.keys.justPressed.TWO && animations.length > 1) {
            currentAnimation = 1;
            playAnimation();
        }
        if (FlxG.keys.justPressed.THREE && animations.length > 2) {
            currentAnimation = 2;
            playAnimation();
        }
        if (FlxG.keys.justPressed.FOUR && animations.length > 3) {
            currentAnimation = 3;
            playAnimation();
        }
        
        // Play current animation
        if (FlxG.keys.justPressed.SPACE) {
            playAnimation();
        }
        
        // Adjust FPS
        if (FlxG.keys.justPressed.UP) {
            animFPS += 6;
            if (animFPS > 60) animFPS = 60;
            updateInfo();
        }
        if (FlxG.keys.justPressed.DOWN) {
            animFPS -= 6;
            if (animFPS < 6) animFPS = 6;
            updateInfo();
        }
        
        // Scale character
        if (FlxG.keys.justPressed.LEFT) {
            characterSprite.scale.x -= 0.1;
            characterSprite.scale.y -= 0.1;
            if (characterSprite.scale.x < 0.1) {
                characterSprite.scale.x = 0.1;
                characterSprite.scale.y = 0.1;
            }
        }
        if (FlxG.keys.justPressed.RIGHT) {
            characterSprite.scale.x += 0.1;
            characterSprite.scale.y += 0.1;
            if (characterSprite.scale.x > 3.0) {
                characterSprite.scale.x = 3.0;
                characterSprite.scale.y = 3.0;
            }
        }
        
        // Update lists
        updateAnimationsList();
        
        // Click to edit fields
        if (FlxG.mouse.justPressed) {
            if (nameField.overlapsPoint(FlxG.mouse.getPosition())) {
                editingField = "name";
                trace("✏️ Editando nombre de animación");
            } else if (prefixField.overlapsPoint(FlxG.mouse.getPosition())) {
                editingField = "prefix";
                trace("✏️ Editando prefix de animación");
            } else if (fpsField.overlapsPoint(FlxG.mouse.getPosition())) {
                editingField = "fps";
                trace("✏️ Editando FPS");
            }
        }
        
        // Quick edit keys
        if (FlxG.keys.justPressed.N) {
            editingField = "name";
            trace("✏️ Editando nombre de animación");
        }
        if (FlxG.keys.justPressed.P) {
            editingField = "prefix";
            trace("✏️ Editando prefix de animación");
        }
        
        // Text input handling
        handleTextInput();
        
        if (FlxG.keys.justPressed.ESCAPE) {
            if (editingField != "none") {
                editingField = "none";
                trace("❌ Edición cancelada");
            } else {
                if (showingDialog) {
                    cerrarDialog();
                } else {
                    FlxG.switchState(MenuDebugState.new);
                }
            }
        }
    }
    
    function mostrarDialogoReemplazo(fileName:String, data:Dynamic):Void {
        showingDialog = true;
        
        confirmDialog = new FlxSprite(FlxG.width/2 - 200, FlxG.height/2 - 100);
        confirmDialog.makeGraphic(400, 200, 0xDD000000);
        add(confirmDialog);
        
        var dialogText = new FlxText(confirmDialog.x + 20, confirmDialog.y + 20, 360, 
            "El personaje '" + characterName + ".json' ya existe.\n\n¿Quieres reemplazarlo?");
        dialogText.setFormat(null, 16, FlxColor.WHITE, "center");
        add(dialogText);
        
        var btnSi = new FlxButton(confirmDialog.x + 50, confirmDialog.y + 120, "SÍ", function() {
            guardarArchivo(fileName, data);
            cerrarDialog();
        });
        add(btnSi);
        
        var btnNo = new FlxButton(confirmDialog.x + 250, confirmDialog.y + 120, "NO", cerrarDialog);
        add(btnNo);
    }
    
    function cerrarDialog():Void {
        showingDialog = false;
        if (confirmDialog != null) {
            remove(confirmDialog);
            confirmDialog = null;
        }
    }
    
    function guardarArchivo(fileName:String, data:Dynamic):Void {
        try {
            var jsonString = Json.stringify(data, null, "  ");
            File.saveContent(fileName, jsonString);
            
            trace("💾 Personaje guardado: " + fileName);
            FlxG.camera.flash(0x4400FF00, 0.3);
        } catch (e:Dynamic) {
            trace("❌ Error guardando: " + e);
            FlxG.camera.flash(0x44FF0000, 0.3);
        }
    }
    
    function createAnimationInputs():Void {
        var startY = 450;
        
        // Name field
        var nameLabel = new FlxText(10, startY, 0, "Nombre:");
        nameLabel.setFormat(null, 14, FlxColor.WHITE);
        add(nameLabel);
        
        nameField = new FlxText(80, startY, 200, animName);
        nameField.setFormat(null, 14, FlxColor.YELLOW);
        nameField.setBorderStyle(FlxTextBorderStyle.OUTLINE, FlxColor.BLACK, 1);
        add(nameField);
        
        // Prefix field
        var prefixLabel = new FlxText(10, startY + 25, 0, "Prefix:");
        prefixLabel.setFormat(null, 14, FlxColor.WHITE);
        add(prefixLabel);
        
        prefixField = new FlxText(80, startY + 25, 200, animPrefix);
        prefixField.setFormat(null, 14, FlxColor.YELLOW);
        prefixField.setBorderStyle(FlxTextBorderStyle.OUTLINE, FlxColor.BLACK, 1);
        add(prefixField);
        
        // FPS field
        var fpsLabel = new FlxText(10, startY + 50, 0, "FPS:");
        fpsLabel.setFormat(null, 14, FlxColor.WHITE);
        add(fpsLabel);
        
        fpsField = new FlxText(80, startY + 50, 200, Std.string(animFPS));
        fpsField.setFormat(null, 14, FlxColor.YELLOW);
        fpsField.setBorderStyle(FlxTextBorderStyle.OUTLINE, FlxColor.BLACK, 1);
        add(fpsField);
        
        // Instrucciones
        var instrucciones = new FlxText(10, startY + 80, 280, "Ejemplos de prefix:\n- BFidledance\n- BFNOTELEFT\n- BFNOTERIGHT\n\nClick en campos para editar");
        instrucciones.setFormat(null, 10, FlxColor.GRAY);
        add(instrucciones);
    }
    
    function toggleLoop():Void {
        animLooped = !animLooped;
        trace("🔁 Loop: " + (animLooped ? "Activado" : "Desactivado"));
    }
    
    function handleTextInput():Void {
        if (editingField == "none") return;
        
        // Confirm with ENTER
        if (FlxG.keys.justPressed.ENTER) {
            switch (editingField) {
                case "name":
                    animName = nameField.text;
                    trace("✓ Nombre actualizado: " + animName);
                case "prefix":
                    animPrefix = prefixField.text;
                    trace("✓ Prefix actualizado: " + animPrefix);
            }
            editingField = "none";
            return;
        }
        
        // Handle backspace
        if (FlxG.keys.justPressed.BACKSPACE) {
            switch (editingField) {
                case "name":
                    if (nameField.text.length > 0) {
                        nameField.text = nameField.text.substr(0, nameField.text.length - 1);
                    }
                case "prefix":
                    if (prefixField.text.length > 0) {
                        prefixField.text = prefixField.text.substr(0, prefixField.text.length - 1);
                    }
            }
        }
        
        // Handle character input (A-Z, 0-9, space)
        var input = "";
        if (FlxG.keys.justPressed.A) input = FlxG.keys.pressed.SHIFT ? "A" : "a";
        else if (FlxG.keys.justPressed.B) input = FlxG.keys.pressed.SHIFT ? "B" : "b";
        else if (FlxG.keys.justPressed.C) input = FlxG.keys.pressed.SHIFT ? "C" : "c";
        else if (FlxG.keys.justPressed.D) input = FlxG.keys.pressed.SHIFT ? "D" : "d";
        else if (FlxG.keys.justPressed.E) input = FlxG.keys.pressed.SHIFT ? "E" : "e";
        else if (FlxG.keys.justPressed.F) input = FlxG.keys.pressed.SHIFT ? "F" : "f";
        else if (FlxG.keys.justPressed.G) input = FlxG.keys.pressed.SHIFT ? "G" : "g";
        else if (FlxG.keys.justPressed.H) input = FlxG.keys.pressed.SHIFT ? "H" : "h";
        else if (FlxG.keys.justPressed.I) input = FlxG.keys.pressed.SHIFT ? "I" : "i";
        else if (FlxG.keys.justPressed.J) input = FlxG.keys.pressed.SHIFT ? "J" : "j";
        else if (FlxG.keys.justPressed.K) input = FlxG.keys.pressed.SHIFT ? "K" : "k";
        else if (FlxG.keys.justPressed.L) input = FlxG.keys.pressed.SHIFT ? "L" : "l";
        else if (FlxG.keys.justPressed.M) input = FlxG.keys.pressed.SHIFT ? "M" : "m";
        else if (FlxG.keys.justPressed.N) input = FlxG.keys.pressed.SHIFT ? "N" : "n";
        else if (FlxG.keys.justPressed.O) input = FlxG.keys.pressed.SHIFT ? "O" : "o";
        else if (FlxG.keys.justPressed.P) input = FlxG.keys.pressed.SHIFT ? "P" : "p";
        else if (FlxG.keys.justPressed.Q) input = FlxG.keys.pressed.SHIFT ? "Q" : "q";
        else if (FlxG.keys.justPressed.R) input = FlxG.keys.pressed.SHIFT ? "R" : "r";
        else if (FlxG.keys.justPressed.S) input = FlxG.keys.pressed.SHIFT ? "S" : "s";
        else if (FlxG.keys.justPressed.T) input = FlxG.keys.pressed.SHIFT ? "T" : "t";
        else if (FlxG.keys.justPressed.U) input = FlxG.keys.pressed.SHIFT ? "U" : "u";
        else if (FlxG.keys.justPressed.V) input = FlxG.keys.pressed.SHIFT ? "V" : "v";
        else if (FlxG.keys.justPressed.W) input = FlxG.keys.pressed.SHIFT ? "W" : "w";
        else if (FlxG.keys.justPressed.X) input = FlxG.keys.pressed.SHIFT ? "X" : "x";
        else if (FlxG.keys.justPressed.Y) input = FlxG.keys.pressed.SHIFT ? "Y" : "y";
        else if (FlxG.keys.justPressed.Z) input = FlxG.keys.pressed.SHIFT ? "Z" : "z";
        else if (FlxG.keys.justPressed.SPACE) input = " ";
        else if (FlxG.keys.justPressed.ONE) input = "1";
        else if (FlxG.keys.justPressed.TWO) input = "2";
        else if (FlxG.keys.justPressed.THREE) input = "3";
        else if (FlxG.keys.justPressed.FOUR) input = "4";
        else if (FlxG.keys.justPressed.FIVE) input = "5";
        else if (FlxG.keys.justPressed.SIX) input = "6";
        else if (FlxG.keys.justPressed.SEVEN) input = "7";
        else if (FlxG.keys.justPressed.EIGHT) input = "8";
        else if (FlxG.keys.justPressed.NINE) input = "9";
        else if (FlxG.keys.justPressed.ZERO) input = "0";
        
        if (input != "") {
            switch (editingField) {
                case "name":
                    nameField.text += input;
                case "prefix":
                    prefixField.text += input;
            }
        }
    }
    
    function loadCharacterJSON():Void {
        try {
            var jsonPath = "assets/charater/BOYFRIEND.json";
            if (FileSystem.exists(jsonPath)) {
                var content = File.getContent(jsonPath);
                var data = Json.parse(content);
                
                characterName = data.name;
                animations = [];
                
                // Load animations from JSON
                for (animData in cast(data.animations, Array<Dynamic>)) {
                    animations.push({
                        name: animData.name,
                        prefix: animData.prefix,
                        fps: animData.fps,
                        looped: animData.looped
                    });
                    
                    // Create animation if sprite has frames
                    if (characterSprite.frames != null) {
                        try {
                            characterSprite.animation.addByPrefix(animData.name, animData.prefix, animData.fps, animData.looped);
                        } catch (e:Dynamic) {
                            trace("⚠️ No se pudo crear: " + animData.name);
                        }
                    }
                }
                
                // Update name field
                if (nameInput != null) {
                    nameInput.text = characterName;
                    characterName = nameInput.text;
                }
                
                trace("📄 JSON cargado: " + animations.length + " animaciones");
                updateAnimationsList();
                FlxG.camera.flash(0x4400FF00, 0.3);
            }
        } catch (e:Dynamic) {
            trace("Error cargando JSON: " + e);
        }
    }
}

typedef AnimationData = {
    var name:String;
    var prefix:String;
    var fps:Int;
    var looped:Bool;
}