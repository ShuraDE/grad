class CfgFunctions
{
	class GRAD
	{
		class DEBUG
		{
			class DEBUG_SRV {
				file = "debug_server.sqf";
				preInit  = 1;
				recompile = 1;
				headerType = -1;
			};
			class DEBUG {
				file = "debug_local.sqf";
				preInit  = 1;
				recompile = 1;
				headerType = -1;
		  };
		};
	};
};
