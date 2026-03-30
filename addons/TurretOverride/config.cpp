class CfgPatches
{
	class CTO_main
	{
		name="main";
		units[]={};
		weapons[]={};
		requiredVersion=1.88;
		requiredAddons[]=
		{
			"cba_main",
			"A3_Data_F"
		};
		author="Seb";
		version="2.0.0.0";
		versionStr="2.0.0.0";
		versionAr[]={2,0,0,0};
	};
};
class Extended_PreStart_EventHandlers
{
	class CTO_main
	{
		init="call compile preprocessFileLineNumbers '\z\CTO\addons\main\XEH_preStart.sqf'";
	};
};
class Extended_PreInit_EventHandlers
{
	class CTO_main
	{
		init="call compile preprocessFileLineNumbers '\z\CTO\addons\main\XEH_preInit.sqf'";
	};
};
class Extended_PostInit_EventHandlers
{
	class CTO_main
	{
		init="call compile preprocessFileLineNumbers '\z\CTO\addons\main\XEH_postInit.sqf'";
	};
};
class CfgVehicles
{
	class Land;
	class LandVehicle: Land
	{
		hasCommanderTurretOverride=1;
	};
};
