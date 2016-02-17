#include "script_component.hpp"
private ["_ret"];

LOG_INFO("test -1");



LOG_DEBUG("RE direct");
_ret = _this remoteExecCall [QUOTE(SMIFUNC(test2)),2];
LOG_DEBUG(formatText ["RE %1", _ret]);

LOG_DEBUG("bis_fnc_mp");
["",QUOTE(SMIFUNC(test2))] call BIS_fnc_MP;


LOG_DEBUG("RE Makro");
_ret = RE_SRV_TST(_this,SMIFUNC(test2));
LOG_INFO(formatText ["RE %1", _ret]);
