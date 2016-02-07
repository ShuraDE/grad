class CfgFunctions
{
	class PREFIX
	{
		class orbat
		{
			class createNewGroup {
				description = "Create a new Group in ORBAT";
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
		class admin
		{
			class group_recompile {
				description = "Get ORBAT config from group";
				file = "\y\grad\addons\groups\functions\fnc_admin_recompile.sqf";
			};
		};
	};
};
