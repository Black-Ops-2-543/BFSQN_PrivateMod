class Extended_PreInit_EventHandlers {
    class nia_core {
        init = call compile preprocessFileLineNumbers '\hlc_core\XEH_preInit.sqf';
    };
};

class Extended_Reloaded_EventHandlers {
    class CAManBase {
        class nia_core {
            clientReloaded = "_this call Niarms_fnc_magSwitch;[(call Niarms_fnc_findPlayer)] call Niarms_fnc_gripInit";
        };

    };
};

class Extended_Take_EventHandlers {
    class CAManBase {
        class nia_core {
            clientInit = "_this call Niarms_fnc_magInit;[(call Niarms_fnc_findPlayer)] call Niarms_fnc_gripInit";
        };
    };
};
class Extended_InventoryClosed_EventHandlers {
    class CAManBase {
        class nia_core {
            inventoryClosed  = "[(call Niarms_fnc_findPlayer)] call Niarms_fnc_gripInit";
        };
    };
};
class Extended_InitPost_EventHandlers {
    class CAManBase {
        class nia_core {
            clientInit = "_this call Niarms_fnc_magInit; [(call Niarms_fnc_findPlayer)] call Niarms_fnc_gripInit";
        };
    };
};
