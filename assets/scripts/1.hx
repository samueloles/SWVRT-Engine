// Evento inicial - Al empezar la canción
function onSongStart(songName:String) {
    trace("🎵 Canción iniciada: " + songName);
    
    // Aquí puedes agregar efectos personalizados
    // Ejemplo: flash de pantalla
    // FlxG.camera.flash(0x44FFFFFF, 0.5);
    
    // Ejemplo: cambiar zoom
    // FlxG.camera.zoom = 1.1;
    
    return true;
}