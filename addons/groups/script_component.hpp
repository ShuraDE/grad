#define COMPONENT groups
#include "\y\grad\addons\main\script_mod.hpp"

//add component relevant defines here
#define ALLOW_RECOMPILE 1
#define DISABLE_COMPILE_CACHE
#define DEBUG_MODE_FULL

#define XEH_DISABLED class EventHandlers {}; SLX_XEH_DISABLED = 1
#define XEH_ENABLED class EventHandlers { EXTENDED_EVENTHANDLERS }; delete SLX_XEH_DISABLED

#include "\y\grad\addons\main\script_macros.hpp"
