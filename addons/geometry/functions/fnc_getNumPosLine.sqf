#include "script_component.hpp"
/* ---------------------------------------------------------------------------------------------------------
Function: GRAD_geometry_fnc_getNumPosLine

Description: Finds X positions on a line around a position with given vector.


Parameters: [Position,Distance,Number,Degrees]

            - Important: Distances under 5 metres are not allowed!

Returns:  ARRAY with Positions  (Array select 0 is in Function given Position)
Examples:
          _pos_arr = [(position HELIPAD),10,5,(round(getDir Helipad) - 90)] call GRAD_geometry_fnc_getCirclePos;

Author: Fry

------------------------------------------------------------------------------------------------------------- */
private [];
params ["_position","_dist","_num","_dir"];
_output = [];
switch(true)do
{
  case (_dir < 0):{_dir = _dir + 360;};
  case (_dir > 360):{_dir = _dir - 360;};
};
