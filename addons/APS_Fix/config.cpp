class CfgPatches
{
	class Neko_RHS_Armata_APS_Remover
	{
		units[]=
		{
			"rhs_t14_tv",
			"rhs_t15_tv"
		};
		requiredAddons[]=
		{
			"rhs_main",
			"rhs_c_heavyweapons",
			"rhs_decals",
			"rhs_optics",
			"rhs_c_troops",
			"rhs_aps",
			"rhs_c_t14",
			"rhs_c_t15"
		};
		name="RHS Armata WIP APS Script Remover";
		author="Discord: neko.en";
		url="https://github.com/lukegotjellyfish";
		version=1;
		skipWhenMissingDependencies = 1;
	};
};
class CfgFunctions
{
	class RHS
	{
		class functions
		{
			class t14_init
			{
				file="\Neko_RHS_Armata_APS_Remover\scripts\rhs_fnc_t14_init.sqf";
			};
			class t15_init
			{
				file="\Neko_RHS_Armata_APS_Remover\scripts\rhs_fnc_t15_init.sqf";
			};
		};
	};
};
class CfgVehicles
{
	class LandVehicle;
	class Tank: LandVehicle
	{
		class NewTurret;
		class Sounds;
		class HitPoints;
	};
	class Tank_F: Tank
	{
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class Turrets
				{
					class CommanderOptics;
				};
			};
		};
		class AnimationSources;
		class ViewPilot;
		class ViewOptics;
		class ViewCargo;
		class HeadLimits;
		class HitPoints: HitPoints
		{
			class HitHull;
			class HitEngine;
			class HitLTrack;
			class HitRTrack;
		};
		class Sounds: Sounds
		{
			class Engine;
			class Movement;
		};
		class EventHandlers;
		class Components;
	};
	class rhs_t14_base: Tank_F
	{
		class EventHandlers: EventHandlers
		{
			class RHS_EventHandlers
			{
				deleted="";
				killed="";
			};
		};
	};
	class rhs_t15_base: Tank_F
	{
		class EventHandlers: EventHandlers
		{
			class RHS_EventHandlers
			{
				deleted="";
				killed="";
			};
		};
	};
};
class cfgMods
{
	author="Garrussian";
	timepacked="1721818537";
};
