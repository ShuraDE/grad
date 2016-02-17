class CfgFunctions
{
	class ADDON
	{
		class sys
		{
			class init {
				description = "Initialize group addon";
				file = "\y\grad\addons\groups\functions\fnc_init.sqf";
			};
		};
		class orbat
		{
			class createNewGroup {
				description = "Create a new Group in ORBAT";
				file = "\y\grad\addons\groups\functions\fnc_createGroup.sqf";
			};
			//new
			class groupCreate {
				description = "Create a new Group in ORBAT";
				file = "\y\grad\addons\groups\functions\fnc_groupCreate.sqf";
			};
			class groupEdit {
				description = "Change group config";
				file = "\y\grad\addons\groups\functions\fnc_groupEdit.sqf";
			};
			class groupJoin {
				description = "Join ORBAT Group";
				file = "\y\grad\addons\groups\functions\fnc_groupJoin.sqf";
			};
			class groupLeave {
				description = "Leave ORBAT Group";
				file = "\y\grad\addons\groups\functions\fnc_groupLeave.sqf";
			};
			class setFrequency {
				description = "Define new Frequency (JIP)";
				file = "\y\grad\addons\groups\functions\fnc_setFrequency.sqf";
			};
			class setInsignia {
				description = "Define Insignia (JIP)";
				file = "\y\grad\addons\groups\functions\fnc_setInsignia.sqf";
			};
			class groupRebuild {
				description = "Define Insignia";
				file = "\y\grad\addons\groups\functions\fnc_groupRebuild.sqf";
			};
		};
	};
};
