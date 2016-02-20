#include "script_component.hpp"
/* -----------------------------------------------------------------------------------------------
Function: GRAD_spawnhelp_fnc_getStreets

Description: Find Streets in a spezific Range.

Parameters: [position,radius,(Optional: true/false)]

           - Optional: List with Streetnames (Array)

Returns: Array / Number

Examples:
          _streets_arr  = [_position,_radius,true] call GRAD_spawnhelp_fnc_getStreets;

Author: Fry

-------------------------------------------------------------------------------------------------- */
//checks for Streets in a spezific Range
//_street = [position Trigger, Radius,(Optional true/false)] call grad_spawnhelp_fnc_getStreets;
//for List(Array with streets): _street = [position Trigger, Radius,true] call grad_spawnhelp_fnc_getStreets;
//Output = Array/Number

private ["_streets_arr", "_streets_counter"];
params ["_detect_street_point","_detect_street_dist","_list_streets"];


if(isNil "_list_streets") then {_list_streets = false};
_streets_arr = [];
_streets_counter = 0;

_streets_arr = _detect_street_point nearRoads _detect_street_dist;
if(_list_streets) then {if(count _streets_arr > 0)then{_streets_counter = _streets_arr;}else{_streets_counter = [];};}else{_streets_counter = count _streets_arr;};
_streets_counter
