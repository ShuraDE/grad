class CfgVehicles {
    class All {
        class EventHandlers { EXTENDED_EVENTHANDLERS };
    };
  
    // Custom object that can be used to force XEH initialization even if no XEH compatible object is on the Map.
    class Logic;
    class SLX_XEH_Logic: Logic {
        displayName = "XEH (backup) Initialization Logic";
        vehicleClass = "Modules";
        class EventHandlers { EXTENDED_EVENTHANDLERS };
    };
};
