#include "script_component.hpp"

class CfgPatches
{
	class APR_GLSMOKE_Deflection
	{
		name="APR GLSMOKE Deflection";
		author="Apricot_ale";
		requiredVersion=2.1800001;
		requiredAddons[]=
		{
			"A3_Weapons_F"
		};
		units[]={};
		weapons[]={};
	};
};
class CfgAmmo
{
	class SmokeShell;
	class G_40mm_Smoke: SmokeShell
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
