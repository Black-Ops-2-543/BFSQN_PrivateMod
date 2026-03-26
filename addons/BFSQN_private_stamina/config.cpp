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
            "BFSQN_core",
            "cba_main",
            "Extended_EventHandlers",
            "ace_advanced_fatigue"
        };
    };
};

class Extended_PreInit_EventHandlers
{
	RS_Init="RS_Init_Var = [] execVM ""\RemoveStamina\init.sqf""";

    class ace_advanced_fatigue
	{
		init="";
	};
};

class Extended_PreStart_EventHandlers
{
	class ace_advanced_fatigue
	{
		init="";
	};
};
class Extended_PostInit_EventHandlers
{
	class ace_advanced_fatigue
	{
		init="";
	};
};
class Extended_DisplayLoad_EventHandlers
{
	class RscDisplayMission
	{
		ace_advanced_fatigue="";
	};
};