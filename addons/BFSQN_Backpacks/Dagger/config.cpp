#include "script_component.hpp"
#include "../maxload.hpp"

class CfgPatches
{
    class ADDON
    {
        name = SPOKE;
        author = AUTHOR;
        requiredVersion = REQUIRED_VERSION;
        units[] = {};
        weapons[] = {};
        requiredAddons[] = {
            "BFSQN_private_core",
            "a3_dgr_equipment"
        };
        skipWhenMissingDependencies=1
    };
};

class CfgVehicles {
// Forward declarations needed:
    class B_AssaultPack_Base;
    class B_AssaultPack_Kerry;

// Backpack modifications:
    class dgr_vest_belt: B_AssaultPack_Base { maximumLoad = MAXLOAD; };
    class dgr_pack: B_AssaultPack_Kerry { maximumLoad = MAXLOAD; };
    class dgr_pack7: dgr_pack { maximumLoad = MAXLOAD; };
    class dgr_pack12: dgr_pack { maximumLoad = MAXLOAD; };
    class dgr_pack2: dgr_pack { maximumLoad = MAXLOAD; };
    class dgr_pack3: dgr_pack { maximumLoad = MAXLOAD; };
    class dgr_pack4: dgr_pack { maximumLoad = MAXLOAD; };
    class dgr_pack5: dgr_pack { maximumLoad = MAXLOAD; };
    class dgr_pack6: dgr_pack { maximumLoad = MAXLOAD; };
    class dgr_pack8: dgr_pack { maximumLoad = MAXLOAD; };
    class dgr_pack9: dgr_pack { maximumLoad = MAXLOAD; };
    class dgr_pack10: dgr_pack { maximumLoad = MAXLOAD; };
    class dgr_pack11: dgr_pack { maximumLoad = MAXLOAD; };
    class dgr_pack13: dgr_pack { maximumLoad = MAXLOAD; };
    class dgr_pack14: dgr_pack { maximumLoad = MAXLOAD; };
    class dgr_pack15: dgr_pack { maximumLoad = MAXLOAD; };
    class dgr_pack16: dgr_pack { maximumLoad = MAXLOAD; };
    class dgr_pack18: dgr_pack { maximumLoad = MAXLOAD; };
    class dgr_pack19: dgr_pack { maximumLoad = MAXLOAD; };
    class dgr_pack20: dgr_pack { maximumLoad = MAXLOAD; };
    class dgr_pack23: dgr_pack { maximumLoad = MAXLOAD; };
    class dgr_pack24: dgr_pack { maximumLoad = MAXLOAD; };
    class dgr_pack25: dgr_pack { maximumLoad = MAXLOAD; };
    class dgr_pack27: dgr_pack { maximumLoad = MAXLOAD; };
    class dgr_pack28: dgr_pack { maximumLoad = MAXLOAD; };
    class dgr_pack29: dgr_pack { maximumLoad = MAXLOAD; };
    class dgr_pack30: dgr_pack { maximumLoad = MAXLOAD; };
    class dgr_pack32: dgr_pack { maximumLoad = MAXLOAD; };
    class dgr_pack33: dgr_pack { maximumLoad = MAXLOAD; };
    class dgr_pack34: dgr_pack { maximumLoad = MAXLOAD; };
    class dgr_pack35: dgr_pack { maximumLoad = MAXLOAD; };
    class dgr_pack37: dgr_pack { maximumLoad = MAXLOAD; };
    class dgr_pack38: dgr_pack { maximumLoad = MAXLOAD; };
    class dgr_pack39: dgr_pack { maximumLoad = MAXLOAD; };
    class dgr_pack40: dgr_pack { maximumLoad = MAXLOAD; };
    class dgr_pack_coyote: dgr_pack { maximumLoad = MAXLOAD; };
    class dgr_pack36: dgr_pack { maximumLoad = MAXLOAD; };
    class dgr_pack31: dgr_pack { maximumLoad = MAXLOAD; };
    class dgr_pack26: dgr_pack { maximumLoad = MAXLOAD; };
    class dgr_pack21: dgr_pack { maximumLoad = MAXLOAD; };
    class dgr_pack17: dgr_pack { maximumLoad = MAXLOAD; };
    class dgr_pack22: dgr_pack { maximumLoad = MAXLOAD; };
};