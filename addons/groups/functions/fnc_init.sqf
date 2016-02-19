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

// TODO add to settings, atm nailed (testing)
GVAR(GROUPTYPE) = 1;
GVAR(GROUPKI) = 1;


switch (GVAR(GROUPTYPE)) do {
  case 0: { };
  case 1: //dyn groups
    {
      if (isServer && !INIT_GROUP_SERVER_DONE) then {
        LOG_DEBUG("INIT DYN GROUP SERVER");
        ["Initialize", [true]] call BISFUNC(dynamicGroups);
        INIT_GROUP_SERVER_DONE = true;
      };
      //KI unsupported ?!?
      if (_unit isKindOf "CAManBase" && (isPlayer _unit || GVAR(GROUPKI)==1)) then {
      //if (isPlayer _unit && local _unit) then {
        LOG_DEBUG(FORMAT["INIT DYN GROUP PLAYER %1", _unit]);
        ["InitializePlayer", [_unit, true]] call BISFUNC(dynamicGroups);
      };
    }; //dyn groups
  case 2: { }; //dyn orbat

};
