#include "script_component.hpp"

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
			"BFSQN_TPNVG"
		};
    };
};

class BettIR_Config
{
	class CompatibleNightvisionGoggles
	{
		class __base_NVG;
		class JAS_GPNVG18_Tan: __base_NVG{};
		class JAS_GPNVG18_blk: __base_NVG{};
		class JAS_GPNVG18_Tan_TI: __base_NVG{};
		class JAS_GPNVG18_blk_TI: __base_NVG{};
		class JAS_GPNVG18_Full_Tan_TI: __base_NVG{};
		class JAS_GPNVG18_Full_blk_TI: __base_NVG{};
	};
};