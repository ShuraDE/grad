class CfgFunctions
{
	class GRAD
	{
		class DEBUG
		{
			class DEBUG_SRV {
				description = "Logeintrag eines Clients auf dem Server";
				file = "\y\grad\addons\degug\debug_server.sqf";
				preInit  = 1;
				recompile = 1;
				headerType = -1;
			};
			class DEBUG {
				description = "Lokaler Logeintrag";
				file = "\y\grad\addons\degug\debug_local.sqf";
				preInit  = 1;
				recompile = 1;
				headerType = -1;
		  };
		};
	};
};
