Group Management

Aktuell wird in GA BFT in Verbindung mit Dynamic Groups verwendet.

Schächen der einzelnen Systeme
BFT:
* fixe Markergrößen/-typen
* Sync delay
Dynamic Groups
* ist aktuell nur zufällige insignia
ORBAT
* benötigt config, einzeln eingeschränkt dynamisch

Ziel:
Erweiterung von DynamicGroups in Verbindung mit ORBAT als Anzeige der Gruppen.





grob planung "groups"
ohne teste, erster entwurf

_cient callable functions
createGroup (name)
selectInsignia (group, insignia)
inviteToGroup (player, group)
becomeLeader (player)
leaveGroup (player)
joinGroup (player, group)
modifyGroup (size[=icon], color, name,

_server functions
newMemberInGroup (size überprüfung, insignia broadcast)
newLeader
....
