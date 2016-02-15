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
switch (SETTING(GROUPTYPE)) do 
{
	case 0: //off
	{
		LOG_INFO("GROUPS OFF");
	};
	case 1: //dynamic groups (BIS)
	{
		if (isServer) then {
			["Initialize", [true]] call BIS_fnc_dynamicGroups;
		};
		//SP is Server and Player
		if (!(isNull player)) then {
			["InitializePlayer", [player, true]] call BIS_fnc_dynamicGroups;
		};
	};
	// TODO 2 => DynORBAT (GRAD)
	default 
	{ 
		LOG_DEBUG(FORMAT["UNKNOWN GROUPTYPE %1",SETTING(GROUPTYPE)]);
	};
};