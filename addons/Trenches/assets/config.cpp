class CfgPatches
{
	class grad_trenches_assets
	{
		name="grad_trenches_assets";
		units[]=
		{
			"ACE_envelope_small",
			"ACE_envelope_big"
		};
		weapons[]={};
		requiredVersion=2.02;
		requiredAddons[]=
		{
			"grad_trenches_main",
			"ace_trenches"
		};
		authors[]=
		{
			"Salbei",
			"chris579"
		};
		version=0;
		versionStr="0";
		versionAr[]={0};
	};
};
class CBA_Extended_EventHandlers;
class CfgVehicles
{
	class BagFence_base_F;
	class GRAD_envelope_short: BagFence_base_F
	{
		model="\x\grad_trenches\addons\assets\data\trench_short.p3d";
		hiddenSelections[]=
		{
			"velka"
		};
		editorPreview="\x\grad_trenches\addons\assets\data\trench_short.paa";
		class AnimationSources
		{
			class rise
			{
				source="user";
				animPeriod=1;
				initPhase=0;
			};
		};
	};
	class ACE_envelope_small: BagFence_base_F
	{
		model="\x\grad_trenches\addons\assets\data\trench_small.p3d";
		hiddenSelections[]=
		{
			"velka"
		};
		editorPreview="\x\grad_trenches\addons\assets\data\trench_small.paa";
		class AnimationSources
		{
			class rise
			{
				source="user";
				animPeriod=1;
				initPhase=0;
			};
		};
	};
	class ACE_envelope_big: BagFence_base_F
	{
		model="\x\grad_trenches\addons\assets\data\trench_big.p3d";
		hiddenSelections[]=
		{
			"velka"
		};
		editorPreview="\x\grad_trenches\addons\assets\data\trench_big.paa";
		class AnimationSources
		{
			class rise
			{
				source="user";
				animPeriod=1;
				initPhase=0;
			};
		};
	};
	class GRAD_envelope_giant: BagFence_base_F
	{
		model="\x\grad_trenches\addons\assets\data\trench_giant.p3d";
		hiddenSelections[]=
		{
			"velka"
		};
		editorPreview="\x\grad_trenches\addons\assets\data\trench_giant.paa";
		class AnimationSources
		{
			class rise
			{
				source="user";
				animPeriod=1;
				initPhase=0;
			};
		};
	};
	class GRAD_envelope_vehicle: BagFence_base_F
	{
		model="\x\grad_trenches\addons\assets\data\trench_vehicle.p3d";
		hiddenSelections[]=
		{
			"velka"
		};
		editorPreview="\x\grad_trenches\addons\assets\data\trench_vehicle.paa";
		class AnimationSources
		{
			class rise
			{
				source="user";
				animPeriod=1;
				initPhase=0;
			};
		};
	};
	class GRAD_envelope_long: BagFence_base_F
	{
		model="\x\grad_trenches\addons\assets\data\trench_long.p3d";
		hiddenSelections[]=
		{
			"velka"
		};
		editorPreview="\x\grad_trenches\addons\assets\data\trench_long.paa";
		class AnimationSources
		{
			class rise
			{
				source="user";
				animPeriod=1;
				initPhase=0;
			};
		};
	};
};
