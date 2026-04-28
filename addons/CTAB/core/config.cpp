class CfgPatches
{
	class ctab_core
	{
		name="core";
		units[]={};
		weapons[]={};
		requiredVersion=2.02;
		requiredAddons[]=
		{
			"ctab_main"
		};
		author="AUTHOR";
		version=2.8;
		versionStr="2.8";
		versionAr[]={2,8,0,6};
	};
};
class Extended_PreStart_EventHandlers
{
	class ctab_core
	{
		init="call compile preprocessFileLineNumbers '\z\ctab\addons\core\XEH_preStart.sqf'";
	};
};
class Extended_PreInit_EventHandlers
{
	class ctab_core
	{
		init="call compile preprocessFileLineNumbers '\z\ctab\addons\core\XEH_preInit.sqf'";
	};
};
class Extended_PostInit_EventHandlers
{
	class ctab_core
	{
		init="call compile preprocessFileLineNumbers '\z\ctab\addons\core\XEH_postInit.sqf'";
		clientInit="call compile preprocessFileLineNumbers '\z\ctab\addons\core\XEH_postInitClient.sqf'";
		serverInit="call compile preprocessFileLineNumbers '\z\ctab\addons\core\XEH_postInitServer.sqf'";
	};
};
class CfgVehicles
{
	class Man;
	class CAManBase: Man
	{
		class ACE_SelfActions
		{
			class cTab_Interact
			{
				displayName="$STR_ctab_core_aceMenu";
				condition="true";
				exceptions[]=
				{
					"isNotInside",
					"isNotSitting"
				};
				statement="";
				insertChildren="_this call ctab_core_fnc_aceSelfActions";
				priority=0.1;
			};
		};
	};
};
class CfgWeapons
{
	class H_HelmetB;
	class H_HelmetB_light: H_HelmetB
	{
		ctab_camera=1;
	};
	class H_HelmetO_ocamo: H_HelmetB
	{
		ctab_camera=1;
	};
	class H_Helmet_Kerry: H_HelmetB
	{
		ctab_camera=1;
	};
	class H_HelmetB_plain_mcamo;
	class H_HelmetSpecB: H_HelmetB_plain_mcamo
	{
		ctab_camera=1;
	};
};
class RscText;
class IGUIBack;
class RscEdit;
class RscCombo;
class RscCheckbox;
class RscButton;
class cTab_TechnicalData_dlg
{
	idd=1775148;
	onLoad="_this call ctab_core_fnc_onTechnicalDataOpen;";
	onUnload="_this call ctab_core_fnc_onTechnicalDataClose;";
	objects[]={};
	class controlsBackground
	{
		class Frame: IGUIBack
		{
			idc=9935;
			x=0.0625;
			y=0.30000001;
			w=0.875;
			h=0.40000001;
			colorBackground[]={0,0,0,0.5};
		};
	};
	class controls
	{
		class Title: RscText
		{
			idc=8734;
			text="$STR_ctab_core_techData";
			x=0.087499999;
			y=0.34;
			w=0.82499999;
			h=0.039999999;
		};
		class CallsignLabel: RscText
		{
			idc=8735;
			text="$STR_ctab_core_callSign";
			x=0.087499999;
			y=0.41999999;
			w=0.27500001;
			h=0.039999999;
		};
		class Callsign: RscEdit
		{
			idc=9135;
			text="";
			x=0.38749999;
			y=0.41999999;
			w=0.52499998;
			h=0.039999999;
		};
		class OkButton: RscButton
		{
			idc=1;
			text="$STR_DISP_OK";
			x=0.71249998;
			y=0.63999999;
			w=0.2;
			h=0.039999999;
		};
		class CancelButton: RscButton
		{
			idc=2;
			text="$STR_DISP_CANCEL";
			x=0.087499999;
			y=0.63999999;
			w=0.2;
			h=0.039999999;
		};
	};
};
