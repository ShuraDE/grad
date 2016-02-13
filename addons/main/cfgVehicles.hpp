class CfgVehicles
{
  class All;
	class Air;
	class Man;
	class AllVehicles: All
	{
		class EventHandlers { EXTENDED_EVENTHANDLERS };
	};
	class CAManBase: Man
	{
		class EventHandlers { EXTENDED_EVENTHANDLERS };
	};
	class Helicopter: Air
	{
		class EventHandlers { EXTENDED_EVENTHANDLERS };
	};
	class Plane: Air
	{
		class EventHandlers { EXTENDED_EVENTHANDLERS };
	};
	class ParachuteBase: Helicopter
	{
		class EventHandlers { EXTENDED_EVENTHANDLERS };
	};
};
