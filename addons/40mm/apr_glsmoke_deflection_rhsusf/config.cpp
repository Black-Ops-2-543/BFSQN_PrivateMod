class CfgPatches
{
	class APR_GLSMOKE_Deflection_RHSUSF
	{
		name="APR GLSMOKE Deflection RHSUSF";
		author="Apricot_ale";
		requiredVersion=2.1800001;
		skipWhenMissingDependencies=1;
		requiredAddons[]=
		{
			"APR_GLSMOKE_Deflection",
			"rhsusf_c_weapons"
		};
		units[]={};
		weapons[]={};
	};
};
class CfgAmmo
{
	class SmokeShell;
	class SmokeShellRed: SmokeShell
	{
	};
	class SmokeShellGreen: SmokeShell
	{
	};
	class SmokeShellYellow: SmokeShell
	{
	};
	class rhs_40mm_smoke_white: SmokeShell
	{
		simulation="shotSmoke";
		deflecting=3;
		deflectionSlowDown=0.28;
	};
	class rhs_40mm_smoke_red: SmokeShellRed
	{
		simulation="shotSmoke";
		deflecting=3;
		deflectionSlowDown=0.28;
	};
	class rhs_40mm_smoke_green: SmokeShellGreen
	{
		simulation="shotSmoke";
		deflecting=3;
		deflectionSlowDown=0.28;
	};
	class rhs_40mm_smoke_yellow: SmokeShellYellow
	{
		simulation="shotSmoke";
		deflecting=3;
		deflectionSlowDown=0.28;
	};
	class rhs_40mm_m714_white: SmokeShell
	{
		simulation="shotSmoke";
		deflecting=3;
		deflectionSlowDown=0.28;
	};
	class rhs_40mm_m713_red: SmokeShellRed
	{
		simulation="shotSmoke";
		deflecting=3;
		deflectionSlowDown=0.28;
	};
	class rhs_40mm_m715_green: SmokeShellGreen
	{
		simulation="shotSmoke";
		deflecting=3;
		deflectionSlowDown=0.28;
	};
	class rhs_40mm_m716_yellow: SmokeShellYellow
	{
		simulation="shotSmoke";
		deflecting=3;
		deflectionSlowDown=0.28;
	};
};
class cfgMods
{
	author="Apricot_ale";
	timepacked="1729530106";
};
