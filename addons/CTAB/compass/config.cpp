class CfgPatches
{
	class ctab_compass
	{
		name="compass";
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
	class ctab_compass
	{
		init="call compile preprocessFileLineNumbers '\z\ctab\addons\compass\XEH_preStart.sqf'";
	};
};
class Extended_PreInit_EventHandlers
{
	class ctab_compass
	{
		init="call compile preprocessFileLineNumbers '\z\ctab\addons\compass\XEH_preInit.sqf'";
	};
};
class Extended_PostInit_EventHandlers
{
	class ctab_compass
	{
		clientInit="call compile preprocessFileLineNumbers '\z\ctab\addons\compass\XEH_postInitClient.sqf'";
	};
};
class RscControlsGroupNoScrollbars;
class RscMapControlEmpty;
class RscPicture;
class ctab_HorizontalCompass: RscControlsGroupNoScrollbars
{
	onLoad="_this call ctab_compass_fnc_initCompass";
	onUnload="_this call ctab_compass_fnc_disposeCompass";
	w="safezoneW";
	h="(0.055 * safezoneH)";
	x="safezoneX";
	y="0.845 * safezoneH + safezoneY";
	class Controls
	{
		class Map: RscMapControlEmpty
		{
			idc=-1;
			w=0;
			h=0;
			onDraw="[ctrlparentcontrolsgroup (_this # 0)] call ctab_compass_fnc_updateCompass";
			scaleMax=0.001;
			scaleMin=0.001;
		};
		class Compass: RscControlsGroupNoScrollbars
		{
			idc=9000;
			w="safezoneW";
			h="(0.055 * safezoneH)";
			class Controls
			{
				class Bar1: RscControlsGroupNoScrollbars
				{
					idc=9001;
					w="safezoneW*2";
					h="(0.055 * safezoneH)";
					class Controls
					{
						class Indicator: RscPicture
						{
							idc=9101;
							w="safezoneW*2";
							h="(0.055 * safezoneH)";
							text="\z\ctab\addons\compass\data\ns_ca.paa";
						};
					};
				};
				class Bar2: Bar1
				{
					idc=9002;
					x="safezoneW*2";
					class Controls: Controls
					{
						class Indicator: Indicator
						{
							text="\z\ctab\addons\compass\data\sn_ca.paa";
						};
					};
				};
				class Center: RscPicture
				{
					idc=-1;
					x="(safezoneW-(0.055 * safezoneH))/2";
					w="(0.055 * safezoneH)";
					h="(0.055 * safezoneH)";
					text="\z\ctab\addons\compass\data\center2_ca.paa";
				};
			};
		};
	};
};
class RscInGameUI
{
	class RscUnitInfo;
	class RscOptics_MBT_01_commander: RscUnitInfo
	{
		controls[]+=
		{
			"ctab_compass"
		};
		class ctab_compass: ctab_HorizontalCompass
		{
		};
	};
	class RscOptics_MBT_01_gunner: RscUnitInfo
	{
		controls[]+=
		{
			"ctab_compass"
		};
		class ctab_compass: ctab_HorizontalCompass
		{
		};
	};
	class RscOptics_APC_Wheeled_01_gunner: RscUnitInfo
	{
		controls[]+=
		{
			"ctab_compass"
		};
		class ctab_compass: ctab_HorizontalCompass
		{
		};
	};
	class RscOptics_APC_Wheeled_03_commander: RscUnitInfo
	{
		controls[]+=
		{
			"ctab_compass"
		};
		class ctab_compass: ctab_HorizontalCompass
		{
		};
	};
	class RscOptics_APC_Wheeled_03_gunner: RscUnitInfo
	{
		controls[]+=
		{
			"ctab_compass"
		};
		class ctab_compass: ctab_HorizontalCompass
		{
		};
	};
};
