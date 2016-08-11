class CfgFunctions
{
	class ADDON
	{
    class SYS
    {
      class init {
				description = "initialize modul";
				file = "\y\grad\addons\groups\functions\init.sqf";        
      };
    };
    
		class MakeFire
		{
			class initMakeFire {
				description = "initialize make fire";
				file = "\y\grad\addons\groups\functions\makeFire\fnc_init.sqf";
			};
			class createSmokeColumn {
				description = "initialize make fire";
				file = "\y\grad\addons\groups\functions\makeFire\fnc_createSmokeColumn.sqf";
			};
		};
	};
};
