#include "script_component.hpp"
private ["_ret"];

LOG_INFO("test -1");


//RE TESTS
LOG_DEBUG("RE direct");
_ret = _this remoteExecCall [REM_SMI(test2),2];
//_ret = _this remoteExecCall ["grad_test_fnc_test2",2];
LOG_DEBUG(formatText ["RE %1", _ret]);
//_this remoteExecCall ["grad_test_fnc_test2",2];

LOG_DEBUG("bis_fnc_mp");
//["","QUOTE(SMIFUNC(test2))"] call BIS_fnc_MP;
//["","grad_test_fnc_test2"] call BIS_fnc_MP;
LOG_DEBUG(QUOTE(FNC_SMI(test2)));

LOG_DEBUG("RE Makro");
_ret = RE_SMI_SRV(_this,test2);

//_ret = RE_SRV_TST(_this,"grad_test_fnc_test2");
LOG_INFO(formatText ["RE %1", _ret]);

LOG_DEBUG("call fnc test2");
call FNC_SMI(test2);
