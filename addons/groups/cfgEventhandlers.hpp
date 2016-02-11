
class Extended_PostInit_EventHandlers  {
    class ADDON {
        init = call compile preprocessFileLineNumbers "XEH_postInit.sqf";
    };
};
class Extended_Engine_EventHandlers
{
    class Car
    {
        class TAG_MyAddon_CarEngine
        {
            // Like the normal engine handler above, this one runs on all machines
            engine = "diag_log 'test'";
        };
    };
};
