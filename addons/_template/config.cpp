/*
Was gemacht werden muss:
File                  Anpassung
$PBOPREFIX$           Anpassung des ADDON namen in der Datei, ACHTUNG kein Leerzeichen, kein Zeilenumbruch !
script_component.hpp  Anpassung des COMPONENT namen in der Datei
Inhalte von ADDON und COMPONENT sind identisch
*/

#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"grad_main"};
        version = VERSION;
        author[] = {"Fry","Shura"};
        authorUrl = "https://gruppe-adler.de";
    };
};
