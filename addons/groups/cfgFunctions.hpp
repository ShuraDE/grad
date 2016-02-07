class CfgFunctions
{
	class ADDON
	{
		class orbat
		{
			class createNewGroup {
				description = "Create a new Group in ORBAT";
				postInit = 1;
				file = "\y\grad\addons\groups\functions\fnc_createGroup.sqf";
			};
			class getGroupData {
				description = "Get ORBAT config from group";
				file = "\y\grad\addons\groups\functions\fnc_getGroupData.sqf";
			};
			class setGroupData {
				description = "Get ORBAT config from group";
				file = "\y\grad\addons\groups\functions\fnc_setGroupData.sqf";
			};

		};
	};
};
