#include "script_component.hpp"
/* -----------------------------------------------------------------------------------------------
Function: GRAD_spawnhelp_fnc_checkTerrainObj

Description: Returns a list of nearest terrain objects of the given types to the given position or object, within the specified distance.

Parameters: [position/object,Array of Strings,Radius,(optional: true - List Objects)]

           Array of Strings(TYPENAME-ARRAY) - ["House","Tree","Bush"]

Returns: Array with Objects / Number

Examples:
          _arrow = [_position,["Static","house","Tank","Car","StaticWeapon"],200] call GRAD_spawnhelp_fnc_checkTerrainObj;

Author: Fry

-------------------------------------------------------------------------------------------------- */
private ["_xp","_yp","_output","_arr"];
params ["_center","_types","_radius","_list"];

If(([_types] call SMIFUNC(dataType)) != "ARRAY") exitWith {LOG_ERR("GRAD_spawnhelp_fnc_checkTerrainObj: NO TYPENAME-ARRAY DETECTED")};
If(isNil "_list")then{_list = false;};
_output = [];
_arr = [];
_xp = 0;
_yp = 0;
switch(typeName _center)do
{
  case "OBJECT":{_arr = nearestTerrainObjects [_center, _types, _radius];};
  case "ARRAY":{If(count _center > 2 && (typeName (_center select 0) == "SCALAR") && (typeName (_center select 1) == "SCALAR"))then
                { _xp = (_center select 0); _yp = (_center select 1); _arr = nearestTerrainObjects [[_xp,_yp], _types, _radius];};
               };
  default{};
};
If(count _arr > 0)then
{
  If(_list)then{_output = _arr;}else{_output = count _arr;};
};
_output
