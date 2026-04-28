class CfgPatches
{
	class ctab_intel
	{
		name="intel";
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
	class ctab_intel
	{
		init="call compile preprocessFileLineNumbers '\z\ctab\addons\intel\XEH_preStart.sqf'";
	};
};
class Extended_PreInit_EventHandlers
{
	class ctab_intel
	{
		init="call compile preprocessFileLineNumbers '\z\ctab\addons\intel\XEH_preInit.sqf'";
	};
};
class Extended_PostInit_EventHandlers
{
	class ctab_intel
	{
		init="call compile preprocessFileLineNumbers '\z\ctab\addons\intel\XEH_postInit.sqf'";
	};
};
class ctab_intel_intelTextureDisplay
{
	onLoad="call ctab_intel_fnc_initTextureDisplay";
	idd=-1;
	class Controls
	{
	};
};
class CfgCommands
{
	allowedHTMLLoadURIs[]+=
	{
		"https://ctab.plan-ops.fr/*"
	};
};
