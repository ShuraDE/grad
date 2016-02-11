#define COMPONENT groups
#include "\y\grad\addons\main\script_mod.hpp"

//add component relevant defines here
#define ALLOW_RECOMPILE 1
#define DISABLE_COMPILE_CACHE

#define XEH_DISABLED class EventHandlers {}; SLX_XEH_DISABLED = 1
#define XEH_ENABLED class EventHandlers { EXTENDED_EVENTHANDLERS }; delete SLX_XEH_DISABLED
//test before in main_component
#define GET_FILE2(folder, fileName) QUOTE(\MAINPREFIX\PREFIX\ADDONS\COMPONENT\folder\fileName.sqf)
#define GET_FILE3(fileName) QUOTE(\MAINPREFIX\PREFIX\ADDONS\COMPONENT\fileName.sqf)
#define GET_FILE(fileName) QUOTE(fileName.sqf)

#include "\y\grad\addons\main\script_macros.hpp"
