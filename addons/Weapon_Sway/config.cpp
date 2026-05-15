class CfgPatches
{
	class StaminaOverhaul
	{
		units[]={};
		weapons[]={};
		requiredVersion=1;
		requiredAddons[]=
		{
			"A3_Characters_F"
		};
	};
	class RemoveStamina_ACE
	{
		name="Remove Stamina - ACE 3";
		units[]={};
		weapons[]={};
		requiredVersion=1;
		requiredAddons[]=
		{
			"ace_advanced_fatigue"
		};
	};
};
class CfgInventoryGlobalVariable
{
	maxSoldierLoad=8000;
};
class CfgMovesFatigue
{
	staminaDuration=60;
	staminaCooldown=1;
	staminaRestoration=20;
	aimPrecisionSpeedCoef=2;
	terrainDrainSprint=-1;
	terrainDrainRun=-1;
	terrainSpeedCoef=1;
};
class CfgImprecision
{
	class Primary
	{
		verticalRadius=0.2;
		horizontalRadius=0.2;
	};
	class Secondary
	{
		verticalRadius=0.2;
		horizontalRadius=0.2;
	};
};
class Extended_PreStart_EventHandlers
{
	class ace_advanced_fatigue
	{
		init="";
	};
};
class Extended_PreInit_EventHandlers
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
class CfgMovesBasic;
class CfgMovesMaleSdr: CfgMovesBasic
{
	class States
	{
		class AswmPercMstpSnonWnonDnon;
		class AsswPercMstpSnonWnonDnon;
		class AbswPercMstpSnonWnonDnon;
		class AdvePercMstpSnonWrflDnon;
		class AsdvPercMstpSnonWrflDnon;
		class AbdvPercMstpSnonWrflDnon;
		class AswmPercMrunSnonWnonDf: AswmPercMstpSnonWnonDnon
		{
			speed=0.77999997;
		};
		class AsswPercMrunSnonWnonDf: AsswPercMstpSnonWnonDnon
		{
			speed=0.77999997;
		};
		class AbswPercMrunSnonWnonDf: AbswPercMstpSnonWnonDnon
		{
			speed=0.75;
		};
		class AdvePercMrunSnonWrflDf: AdvePercMstpSnonWrflDnon
		{
			speed=0.60000002;
		};
		class AsdvPercMrunSnonWrflDf: AsdvPercMstpSnonWrflDnon
		{
			speed=0.60000002;
		};
		class AbdvPercMrunSnonWrflDf: AbdvPercMstpSnonWrflDnon
		{
			speed=0.60000002;
		};
	};
};