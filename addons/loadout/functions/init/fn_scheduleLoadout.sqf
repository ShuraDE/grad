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

[
	{
		LOG("triggering loadout.");
		[_this select 0] call FNC_SMI(applyLoadout);
	},
	[_this select 0],
	_delay
] call FNC_CBA(waitAndExecute);
