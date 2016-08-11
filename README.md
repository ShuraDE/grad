# GRAD_Lib
=======
workers Fry & Shura

Ordnernamen in AddonsOrdner festlegen !


Die Lib ist noch im frühen Entwicklungstaus
Bei Erreichung eines Meilensteins für eine produktive Version, 
wird es in das Repository "https://github.com/gruppe-adler" verschoben.


Setup (simple one):
* Mount P:
* create "y" folder in P: und im ArmA InstDir
* console als admin starten
** mklink /D /J "C:\Games\Steam\steamapps\common\Arma 3\y\grad" "C:\Users\[USR]\Documents\Arma 3\missions\GRAD_Lib"
** mklink /D /J "P:\y\grad" "C:\Users\[USR]\Documents\Arma 3\missions\GRAD_Lib"
* cbo mod folder klonen und in @cba_a3_noChache umbenennen
* alle optionals reinschieben
* arma starten mit "-mod=@cba_a3_noChache;y\grad -showScriptErrors -filePatching"

Falls künftig dependencies (z.B. cba) hinzukommen sollten, entsprechend verfahren und code auf p:\x\cba kopieren
update system 