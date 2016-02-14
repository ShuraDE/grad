#include "script_component.hpp"

private ["_center","_group"];
LOG_INFO("initprocess");

if (isNil "CPORT") then
{

	_center = createCenter sideLogic;
	_group = createGroup _center;
	CPORT = _group createUnit ["LOGIC", [0, 0, 0], [], 0, "NONE"];
	publicVariable "CPORT";
  LOG_INFO("Communication Logic available!")
};
