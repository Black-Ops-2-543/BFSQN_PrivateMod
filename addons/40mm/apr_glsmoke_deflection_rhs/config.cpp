class CfgPatches
{
	class APR_GLSMOKE_Deflection_RHS
	{
		name="APR GLSMOKE Deflection RHS";
		author="Apricot_ale";
		requiredVersion=2.1800001;
		skipWhenMissingDependencies=1;
		requiredAddons[]=
		{
			"APR_GLSMOKE_Deflection",
			"rhs_c_weapons"
		};
		units[]={};
		weapons[]={};
	};
};
class CfgAmmo
{
	class rhs_g_vog25;
	class rhs_g_vg40md_white: rhs_g_vog25
	{
		simulation="shotSmoke";
		deflecting=3;
		deflectionSlowDown=0.28;
	};
	class rhs_g_vg40md_green: rhs_g_vg40md_white
	{
		simulation="shotSmoke";
		deflecting=3;
		deflectionSlowDown=0.28;
	};
	class rhs_g_vg40md_red: rhs_g_vg40md_white
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
