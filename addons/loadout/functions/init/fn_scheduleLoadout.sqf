#include "\y\grad\addons\loadout\script_component.hpp"
private ["_delay", "_getDelay"];

_getDelay = {
    _baseDelay = [(missionConfigFile >> "CfgLoadouts"), "baseDelay", 10] call FNC_BIS(returnConfigEntry);
    _perPlayerDelay = [(missionConfigFile >> "CfgLoadouts"), "perPlayerDelay", 1] call FNC_BIS(returnConfigEntry);

    _baseDelay + floor(_perPlayerDelay * random (count allPlayers));
};

_delay = [] call _getDelay;

_msg = format ["waiting %1 s for loadout.", _delay];
LOG(_msg);

LOG_DEBUG(QUOTE(FNC_SMI(applyLoadout)));
call FNC_SMI(applyLoadout);
/*
[
	{
		LOG("triggering loadout.");
		[_unit] call FNC_SMI(applyLoadout);
	},
	[_unit],
	_delay
] call FNC_CBA(waitAndExecute);
*/
