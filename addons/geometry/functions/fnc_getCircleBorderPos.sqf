#include "script_component.hpp"
/* ---------------------------------------------------------------------------------------------------------
Function: GRAD_geometry_fnc_getCircleBorderPos

Description: Find a random Position on Circle Border with Water,House,Walls,Vehicle and Area check
             (Test a new "Random" Option)

Parameters: [Position,Radius,(Optional:Radius for big Objects)]

            Optional: Radius to find Places for big Objects without Houses,Walls,Vehicles and StaticWeapons

Returns:  Position
Examples:
          _borderpos = [(getMarkerPos "Town"),200] call GRAD_geometry_fnc_getCircleBorderPos;

Author: Fry

------------------------------------------------------------------------------------------------------------- */
