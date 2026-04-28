class CfgPatches
{
	class ctab_rangefinder
	{
		name="rangefinder";
		units[]={};
		weapons[]={};
		requiredVersion=2.02;
		requiredAddons[]=
		{
			"ctab_main",
			"ctab_core"
		};
		author="GrueArbre";
		version=2.8;
		versionStr="2.8";
		versionAr[]={2,8,0,6};
	};
};
class Extended_PreStart_EventHandlers
{
	class ctab_rangefinder
	{
		init="call compile preprocessFileLineNumbers '\z\ctab\addons\rangefinder\XEH_preStart.sqf'";
	};
};
class Extended_PreInit_EventHandlers
{
	class ctab_rangefinder
	{
		init="call compile preprocessFileLineNumbers '\z\ctab\addons\rangefinder\XEH_preInit.sqf'";
	};
};
class Extended_PostInit_EventHandlers
{
	class ctab_rangefinder
	{
		clientInit="call compile preprocessFileLineNumbers '\z\ctab\addons\rangefinder\XEH_postInitClient.sqf'";
	};
};
