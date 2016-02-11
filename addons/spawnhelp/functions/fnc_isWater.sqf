#include "script_component.hpp"

//[position] call grad_spawnhelp_fnc_isWater;
// BOOL

private ["_x_k","_y_k","_is_water"];
params ["_pos"];

_x_k = _pos select 0;
_y_k = _pos select 1;


_is_water = surfaceIsWater [_x_k,_y_k];
_is_water
