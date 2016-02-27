#include "script_component.hpp"
/* --------------------------------------------------------------------------------------------------------------
Function: GRAD_geometry_fnc_getNumPosLine

Description: Finds X positions on a line around a position with given vector.


Parameters: [Position,Distance,Number,Degrees]

            - Important: Distances under 5 metres are not allowed!

Returns:  ARRAY with Positions  (Array select 0 is in Function given Position)
Examples:
          _pos_arr = [(position HELIPAD),10,5,(round(getDir Helipad) - 90)] call GRAD_geometry_fnc_getNumPosLine;

Author: Fry

------------------------------------------------------------------------------------------------------------- */
private ["_output","_holder_arr","_allowed","_add_dist","_point","_slope","_statics"];
params ["_position","_dist","_num","_dir","_spec"];
If(isNil "_spec")then{_spec = false;};
If(!_spec && _dist < 5)then{_dist = 5;};
_holder_arr = [];
_output = [];
_allowed = true;
_add_dist = 0;
switch(true)do
{
  case (_dir < 0):{_dir = _dir + 360;};
  case (_dir > 360):{_dir = _dir - 360;};
};

for "_i" from 1 to _num do
{
  If(_allowed)then
  {
   _add_dist = _add_dist + _dist;
   _point = [_position,_add_dist,_dir] call FNC_BIS(relPos);
   If(count _point > 0)then
   {
     _slope = [_point] call FNC_SMC(spawnhelp,getSlope);
     _statics = [_point,["Static","House","Tank","Car","StaticWeapon"],4] call FNC_SMC(spawnhelp,checkObjects);
     If(!(surfaceIsWater _point) && _slope && _statics < 1)then
     {
      If(count _holder_arr == 0)then{_holder_arr pushBack _position;};
      _holder_arr pushBack _point;
     }else{_allowed = false;};
   };
  };
  sleep 0.02;
};
If(_allowed)then{_output = _holder_arr;};
_output
