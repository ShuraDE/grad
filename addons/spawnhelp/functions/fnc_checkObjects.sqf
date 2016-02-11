#include "script_component.hpp"

/* -----------------------------------------------------------------------------------------------
Function: GRAD_spawnhelp_fnc_checkObjects

Description: Find Objects with given radius.

Parameters: [position,typeName/Array of Strings,Radius,(optional: true - List Objects)]

           typeName/Array of Strings: "Man" / ["Man","Truck"]

Returns: Array with Objects / Number

Examples:
          _arrow = [_position,["Static","house","Tank","Car","StaticWeapon"],200] call GRAD_spawnhelp_fnc_checkObjects;

Author: Fry

-------------------------------------------------------------------------------------------------- */

private ["_output","_found"];
params ["_pos","_types","_radius","_list"];

If(isNil "_list")then{_list = false;};
_output = [];
_found = nearestObjects [_pos,_types,_radius];
If(count _found > 0)then
{
  If(_list)then{_output = _found}else{_output = (count _found);}
};
_output
