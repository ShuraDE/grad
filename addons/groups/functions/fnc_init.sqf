#include "script_component.hpp"
/* ----------------------------------------------------------------------------
Function: TAG_fnc_name

Description:

Parameters:

Returns:

Examples:
    (begin example)

    (end)

Author:

---------------------------------------------------------------------------- */
params ["_unit"];
LOG_DEBUG("INIT GROUPS ADDON");
//nailed (testing)
GVAR(GROUPTYPE) = 1;
GVAR(GROUPKI) = 1;
LOG_DEBUG(str _unit);
LOG_DEBUG(str (_unit isKindOf "CAManBase"));
LOG_DEBUG(str (isPlayer _unit));
LOG_DEBUG(str name _unit);
LOG_DEBUG((isPlayer _unit || GVAR(GROUPKI)==1));

switch (GVAR(GROUPTYPE)) do {
  case 0: { };
  case 1: //dyn groups
    {
      if (isServer && !INIT_GROUP_SERVER_DONE) then {
        LOG_DEBUG("INIT DYN GROUP SERVER");
        ["Initialize", [true]] call BIS_fnc_dynamicGroups;
        INIT_GROUP_SERVER_DONE = true;
      };
      if (_unit isKindOf "CAManBase" && (isPlayer _unit || GVAR(GROUPKI)==1)) then {
        LOG_DEBUG(FORMAT["INIT DYN GROUP PLAYER %1", _unit]);
        ["InitializePlayer", [_unit, true]] call BIS_fnc_dynamicGroups;
      };
    }; //dyn groups
  case 2: { }; //dyn orbat

};
