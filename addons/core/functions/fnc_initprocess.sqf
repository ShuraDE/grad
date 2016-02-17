#include "script_component.hpp"

private ["_center","_group"];
LOG_DEBUG("core/initprocess");

if (isNil (format["%1",CPORT])) then
{
	LOG_INFO("Create Communication Logic!");
	_center = createCenter sideLogic;
	_group = createGroup _center;
	CPORT = _group createUnit ["LOGIC", [0, 0, 0], [], 0, "NONE"];
	publicVariable (format["%1",CPORT]);
  LOG_INFO("Communication Logic available!")
};
