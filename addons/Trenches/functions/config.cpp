class CfgPatches
{
	class grad_trenches_functions
	{
		name="grad_trenches_functions";
		units[]=
		{
			"GRAD_envelope_giant",
			"GRAD_envelope_vehicle",
			"GRAD_envelope_short",
			"GRAD_envelope_long"
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
class Cfg3DEN
{
	class EventHandlers
	{
		class grad_trenches_functions
		{
			onMissionPreviewEnd="with uiNamespace do {call grad_trenches_functions_fnc_initTrench3DEN}";
			onMissionLoad="with uiNamespace do {call grad_trenches_functions_fnc_initTrench3DEN}";
		};
	};
};
class Extended_PreStart_EventHandlers
{
	class grad_trenches_functions
	{
		init="call compile preprocessFileLineNumbers '\x\grad_trenches\addons\functions\XEH_preStart.sqf'";
	};
};
class Extended_PreInit_EventHandlers
{
	class grad_trenches_functions
	{
		init="call compile preprocessFileLineNumbers '\x\grad_trenches\addons\functions\XEH_preInit.sqf'";
	};
};
class Extended_PostInit_EventHandlers
{
	class grad_trenches_functions
	{
		init="call compile preprocessFileLineNumbers '\x\grad_trenches\addons\functions\XEH_postInit.sqf'";
	};
};
class Extended_Deleted_EventHandlers
{
	class ACE_envelope_small
	{
		class grad_trenches_functions_camouflageDelete
		{
			deleted="if (isServer) then {_this call grad_trenches_functions_fnc_deleteCamouflage}";
		};
	};
	class ACE_envelope_big
	{
		class grad_trenches_functions_camouflageDelete
		{
			deleted="if (isServer) then {_this call grad_trenches_functions_fnc_deleteCamouflage}";
		};
	};
	class GRAD_envelope_giant
	{
		class grad_trenches_functions_camouflageDelete
		{
			deleted="if (isServer) then {_this call grad_trenches_functions_fnc_deleteCamouflage}";
		};
	};
	class GRAD_envelope_vehicle
	{
		class grad_trenches_functions_camouflageDelete
		{
			deleted="if (isServer) then {_this call grad_trenches_functions_fnc_deleteCamouflage}";
		};
	};
	class GRAD_envelope_long
	{
		class grad_trenches_functions_camouflageDelete
		{
			deleted="if (isServer) then {_this call grad_trenches_functions_fnc_deleteCamouflage}";
		};
	};
	class GRAD_envelope_short
	{
		class grad_trenches_functions_camouflageDelete
		{
			deleted="if (isServer) then {_this call grad_trenches_functions_fnc_deleteCamouflage}";
		};
	};
};
class Extended_Init_EventHandlers
{
	class ACE_envelope_small
	{
		class grad_trenches_functions_trenchInit
		{
			init="_this call grad_trenches_functions_fnc_initTrench";
		};
	};
	class ACE_envelope_big
	{
		class grad_trenches_functions_trenchInit
		{
			init="_this call grad_trenches_functions_fnc_initTrench";
		};
	};
	class GRAD_envelope_giant
	{
		class grad_trenches_functions_trenchInit
		{
			init="_this call grad_trenches_functions_fnc_initTrench";
		};
	};
	class GRAD_envelope_vehicle
	{
		class grad_trenches_functions_trenchInit
		{
			init="_this call grad_trenches_functions_fnc_initTrench";
		};
	};
	class GRAD_envelope_long
	{
		class grad_trenches_functions_trenchInit
		{
			init="_this call grad_trenches_functions_fnc_initTrench";
		};
	};
	class GRAD_envelope_short
	{
		class grad_trenches_functions_trenchInit
		{
			init="_this call grad_trenches_functions_fnc_initTrench";
		};
	};
};
class Extended_InitPost_EventHandlers
{
	class ModuleCurator_F
	{
		class grad_trenches_functions
		{
			init="_this call grad_trenches_functions_fnc_initCurator";
		};
	};
};
class CfgVehicles
{
	class Man;
	class CAManBase: Man
	{
		class ACE_SelfActions
		{
			class ACE_Equipment
			{
				delete ace_trenches_digEnvelopeSmall;
				delete ace_trenches_digEnvelopeBig;
				class ace_trenches
				{
					displayName="$STR_ACE_Trenches_EntrenchingToolName";
					condition="_player call grad_trenches_functions_fnc_canDigTrench && grad_trenches_functions_allowDigging";
					statement="";
					showDisabled=0;
					priority=3;
					exceptions[]=
					{
						"notOnMap",
						"isNotInside",
						"isNotSitting"
					};
					class ace_trenches_digEnvelopeSmall
					{
						displayName="$STR_grad_trenches_functions_DigEnvelopeSmall";
						exceptions[]={};
						showDisabled=0;
						priority=4;
						statement="[{_this call grad_trenches_functions_fnc_placeTrench}, [_this select 0, 'ACE_envelope_small']] call CBA_fnc_execNextFrame";
						condition="grad_trenches_functions_allowDigging && ([_target, _player] call grad_trenches_functions_fnc_canContinueDiggingTrench) && grad_trenches_functions_allowSmallEnvelope";
					};
					class ace_trenches_digEnvelopeBig: ace_trenches_digEnvelopeSmall
					{
						displayName="$STR_grad_trenches_functions_DigEnvelopeBig";
						statement="[{_this call grad_trenches_functions_fnc_placeTrench}, [_this select 0, 'ACE_envelope_big']] call CBA_fnc_execNextFrame";
						condition="grad_trenches_functions_allowDigging && ([_target, _player] call grad_trenches_functions_fnc_canContinueDiggingTrench) && grad_trenches_functions_allowBigEnvelope";
					};
					class grad_trenches_digEnvelopeShort: ace_trenches_digEnvelopeBig
					{
						displayName="$STR_grad_trenches_functions_DigEnvelopeShort";
						statement="[{_this call grad_trenches_functions_fnc_placeTrench}, [_this select 0, 'GRAD_envelope_short']] call CBA_fnc_execNextFrame";
						condition="grad_trenches_functions_allowDigging && ([_target, _player] call grad_trenches_functions_fnc_canContinueDiggingTrench) && grad_trenches_functions_allowShortEnvelope";
					};
					class grad_trenches_digEnvelopeGiant: ace_trenches_digEnvelopeBig
					{
						displayName="$STR_grad_trenches_functions_DigEnvelopeGiant";
						statement="[{_this call grad_trenches_functions_fnc_placeTrench}, [_this select 0, 'GRAD_envelope_giant']] call CBA_fnc_execNextFrame";
						condition="grad_trenches_functions_allowDigging && ([_target, _player] call grad_trenches_functions_fnc_canContinueDiggingTrench) && grad_trenches_functions_allowGiantEnvelope";
					};
					class grad_trenches_digEnvelopeVehicle: ace_trenches_digEnvelopeBig
					{
						displayName="$STR_grad_trenches_functions_DigEnvelopeVehicle";
						statement="[{_this call grad_trenches_functions_fnc_placeTrench}, [_this select 0, 'GRAD_envelope_vehicle']] call CBA_fnc_execNextFrame";
						condition="grad_trenches_functions_allowDigging && ([_target, _player] call grad_trenches_functions_fnc_canContinueDiggingTrench) && grad_trenches_functions_allowVehicleEnvelope";
					};
					class grad_trenches_digEnvelopeLongNameEmplacment: ace_trenches_digEnvelopeBig
					{
						displayName="$STR_grad_trenches_functions_DigEnvelopeLong";
						statement="[{_this call grad_trenches_functions_fnc_placeTrench}, [_this select 0, 'GRAD_envelope_long']] call CBA_fnc_execNextFrame";
						condition="grad_trenches_functions_allowDigging && ([_target, _player] call grad_trenches_functions_fnc_canContinueDiggingTrench) && grad_trenches_functions_allowLongEnvelope";
					};
				};
			};
		};
	};
	class BagFence_base_F;
	class ACE_envelope_small: BagFence_base_F
	{
		author="Gruppe Adler";
		displayName="$STR_grad_trenches_functions_EnvelopeSmallName";
		descriptionShort="$STR_grad_trenches_functions_EnvelopeSmallDescription";
		grad_trenches_functions_offset=1.03;
		ace_trenches_placementData[]={8,1.1,0};
		editorCategory="EdCat_Things";
		editorSubcategory="EdSubcat_Military";
		grad_trenches_functions_isTrench=1;
		ace_trenches_diggingDuration="grad_trenches_functions_smallEnvelopeDigTime";
		ace_trenches_removalDuration="grad_trenches_functions_smallEnvelopeRemovalTime";
		scopecurator=2;
		scope=2;
		grad_trenches_functions_damageMultiplier="grad_trenches_functions_smallEnvelopeDamageMultiplier";
		class CamouflagePositions1
		{
		};
		class ACE_Actions
		{
			class ACE_MainActions
			{
				distance=10;
				position="[0,0,3.3]";
				class ACE_ContinueDiggingTrench
				{
					statement="[_target, _player, true] call grad_trenches_functions_fnc_continueDiggingTrench;";
					distance=10;
				};
				class ACE_RemoveTrench
				{
					statement="[_target, _player, true] call grad_trenches_functions_fnc_removeTrench;";
					distance=10;
				};
				class grad_trenches_functions_helpDigging
				{
					displayName="$STR_grad_trenches_functions_HelpDigging";
					condition="[_target, _player] call grad_trenches_functions_fnc_canHelpDiggingTrench";
					statement="[_target, _player] call grad_trenches_functions_fnc_addDigger";
					priority=-1;
					distance=10;
				};
				class grad_trenches_functions_placeCamouflage
				{
					displayName="$STR_grad_trenches_functions_placeCamouflage";
					condition="[_target, _player] call grad_trenches_functions_fnc_canPlaceCamouflage";
					statement="[_target, _player] call grad_trenches_functions_fnc_placeCamouflage";
					priority=-1;
					distance=10;
				};
				class grad_trenches_functions_removeCamouflage
				{
					displayName="$STR_grad_trenches_functions_removeCamouflage";
					condition="[_target] call grad_trenches_functions_fnc_canRemoveCamouflage";
					statement="[_target, _player] call grad_trenches_functions_fnc_removeCamouflage";
					priority=-1;
					distance=10;
				};
			};
		};
		class Attributes
		{
		};
	};
	class ACE_envelope_big: ACE_envelope_small
	{
		displayName="$STR_grad_trenches_functions_EnvelopeBigName";
		descriptionShort="$STR_grad_trenches_functions_EnvelopeBigDescription";
		ace_trenches_diggingDuration="grad_trenches_functions_bigEnvelopeDigTime";
		ace_trenches_removalDuration="grad_trenches_functions_bigEnvelopeRemovalTime";
		grad_trenches_functions_offset=1.53;
		grad_trenches_functions_damageMultiplier="grad_trenches_functions_bigEnvelopeDamageMultiplier";
		class CamouflagePositions1
		{
			a[]={0,0.89999998,3.4000001};
			b[]={3,-1,3.3};
			c[]={-3,-1,3.0999999};
		};
		class CamouflagePositions2
		{
			a[]={1.5,-0.5,4};
			b[]={-1.5,-0.5,4};
		};
		class ACE_Actions
		{
			class ACE_MainActions
			{
				distance=10;
				position="[0,0,3.3]";
				class ACE_ContinueDiggingTrench
				{
					statement="[_target, _player, true] call grad_trenches_functions_fnc_continueDiggingTrench;";
					distance=10;
				};
				class ACE_RemoveTrench
				{
					statement="[_target, _player, true] call grad_trenches_functions_fnc_removeTrench;";
					distance=10;
				};
				class grad_trenches_functions_helpDigging
				{
					displayName="$STR_grad_trenches_functions_HelpDigging";
					condition="[_target, _player] call grad_trenches_functions_fnc_canHelpDiggingTrench";
					statement="[_target, _player] call grad_trenches_functions_fnc_addDigger";
					priority=-1;
					distance=10;
				};
				class grad_trenches_functions_placeCamouflage
				{
					displayName="$STR_grad_trenches_functions_placeCamouflage";
					condition="[_target, _player] call grad_trenches_functions_fnc_canPlaceCamouflage";
					statement="[_target, _player] call grad_trenches_functions_fnc_placeCamouflage";
					priority=-1;
					distance=10;
				};
				class grad_trenches_functions_removeCamouflage
				{
					displayName="$STR_grad_trenches_functions_removeCamouflage";
					condition="[_target] call grad_trenches_functions_fnc_canRemoveCamouflage";
					statement="[_target, _player] call grad_trenches_functions_fnc_removeCamouflage";
					priority=-1;
					distance=10;
				};
			};
		};
		class Attributes
		{
			class grad_trenches_functions_camouflageAttribute
			{
				control="CheckboxNumber";
				defaultValue="0";
				displayName="$STR_grad_trenches_functions_CamouflageAttribute";
				tooltip="$STR_grad_trenches_functions_CamouflageAttributeTooltip";
				expression="[_this, _value] call grad_trenches_functions_fnc_applyCamouflageAttribute";
				property="grad_trenches_camouflageTrench";
			};
		};
	};
	class GRAD_envelope_giant: ACE_envelope_big
	{
		displayName="$STR_grad_trenches_functions_EnvelopeGiantName";
		descriptionShort="$STR_grad_trenches_functions_EnvelopeGiantDescription";
		ace_trenches_diggingDuration="grad_trenches_functions_giantEnvelopeDigTime";
		ace_trenches_removalDuration="grad_trenches_functions_giantEnvelopeRemovalTime";
		grad_trenches_functions_offset=1.8200001;
		ace_trenches_placementData[]={8,1.1,0.2};
		ace_trenches_grassCuttingPoints[]=
		{
			{-1.5,-1,0},
			{1.5,-1,0}
		};
		grad_trenches_functions_damageMultiplier="grad_trenches_functions_giantEnvelopeDamageMultiplier";
		class CamouflagePositions1
		{
			a[]={4.4000001,0,3};
			b[]={1.5,0.5,3.9000001};
			c[]={-2.0999999,0.89999998,3.4000001};
			d[]={-4.5999999,0,3};
		};
		class CamouflagePositions2
		{
		};
		class ACE_MainActions
		{
			position="[0,0,3.1]";
		};
	};
	class GRAD_envelope_vehicle: ACE_envelope_big
	{
		displayName="$STR_grad_trenches_functions_EnvelopeVehicleName";
		descriptionShort="$STR_grad_trenches_functions_EnvelopeVehicleDescription";
		ace_trenches_diggingDuration="grad_trenches_functions_vehicleEnvelopeDigTime";
		ace_trenches_removalDuration="grad_trenches_functions_vehicleEnvelopeRemovalTime";
		grad_trenches_functions_offset=2;
		ace_trenches_placementData[]={10,1.1,0.2};
		ace_trenches_grassCuttingPoints[]=
		{
			{-1.5,-1,0},
			{1.5,-1,0}
		};
		grad_trenches_functions_damageMultiplier="grad_trenches_functions_vehicleEnvelopeDamageMultiplier";
		class CamouflagePositions1
		{
			a[]={3.9000001,2.5,3.5};
			b[]={3.9000001,-2.5,4.3000002};
			c[]={-3.5,-2.5,4.3000002};
			d[]={-3,2.5,3.5};
		};
		class CamouflagePositions2
		{
		};
		class ACE_MainActions
		{
			position="[0,0,3.1]";
		};
	};
	class GRAD_envelope_short: ACE_envelope_big
	{
		displayName="$STR_grad_trenches_functions_EnvelopeShortName";
		descriptionShort="$STR_grad_trenches_functions_EnvelopeShortDescription";
		ace_trenches_diggingDuration="grad_trenches_functions_shortEnvelopeDigTime";
		ace_trenches_removalDuration="grad_trenches_functions_shortEnvelopeRemovalTime";
		grad_trenches_functions_offset=1.2;
		ace_trenches_placementData[]={10,1.1,0.2};
		ace_trenches_grassCuttingPoints[]=
		{
			{-1.5,-1,0},
			{1.5,-1,0}
		};
		grad_trenches_functions_damageMultiplier="grad_trenches_functions_shortEnvelopeDamageMultiplier";
		class CamouflagePositions1
		{
			a[]={1.7,0.69999999,3.0999999};
			b[]={-1.4,0.80000001,3.2};
		};
		class CamouflagePositions2
		{
		};
		class ACE_MainActions
		{
			position="[0,0,3.5]";
		};
	};
	class GRAD_envelope_long: ACE_envelope_big
	{
		displayName="$STR_grad_trenches_functions_EnvelopeLongName";
		descriptionShort="$STR_grad_trenches_functions_EnvelopeLongDescription";
		ace_trenches_diggingDuration="grad_trenches_functions_longEnvelopeDigTime";
		ace_trenches_removalDuration="grad_trenches_functions_longEnvelopeRemovalTime";
		grad_trenches_functions_offset=1.72;
		ace_trenches_placementData[]={10,2,0.2};
		ace_trenches_grassCuttingPoints[]=
		{
			{-1.5,-1,0},
			{1.5,-1,0}
		};
		class CamouflagePositions1
		{
			a[]={6.6999998,0,3.2};
			b[]={3,0.5,3.0999999};
			c[]={-2.2,-0.89999998,4};
			d[]={-3,0.5,3.0999999};
			e[]={-6.9000001,-0.1,3.0999999};
		};
		class CamouflagePositions2
		{
		};
		class ACE_MainActions
		{
			position="[0,-2,3.5]";
		};
	};
};
class CfgWorldsTextures
{
	class Altis
	{
		camouflageObjects[]=
		{
			"A3\plants_f\Clutter\c_Thistle_Thorn_Brown.p3d"
		};
	};
	class tem_anizay
	{
		camouflageObjects[]={};
	};
	class Baranow
	{
		camouflageObjects[]={};
	};
	class BaranowWinter
	{
		camouflageObjects[]={};
	};
	class SWU_Dunkirk_Bray_Dunes_1940: Baranow
	{
		camouflageObjects[]={};
	};
	class Bootcamp_ACR
	{
		camouflageObjects[]={};
	};
	class Woodland_ACR
	{
		camouflageObjects[]=
		{
			"ca\plants2\clutter\c_weed3.p3d"
		};
	};
	class tem_cham
	{
		camouflageObjects[]={};
	};
	class Chernarus
	{
		camouflageObjects[]=
		{
			"ca\plants2\clutter\c_weed3.p3d"
		};
	};
	class cup_chernarus_A3
	{
		camouflageObjects[]=
		{
			"ca\plants2\clutter\c_weed3.p3d"
		};
	};
	class mbg_celle2: Chernarus
	{
		camouflageObjects[]={};
	};
	class Chernarus_Summer
	{
		camouflageObjects[]=
		{
			"ca\plants2\clutter\c_weed3.p3d"
		};
	};
	class Chernarus_Winter
	{
		camouflageObjects[]={};
	};
	class Colleville: Baranow
	{
		camouflageObjects[]={};
	};
	class CollevilleWinter
	{
		camouflageObjects[]={};
	};
	class Desert_E
	{
		camouflageObjects[]=
		{
			"ca\plants_E\Clutter\c_Brush_Hard_EP1.p3d"
		};
	};
	class Enoch
	{
		camouflageObjects[]={};
	};
	class pja310
	{
		camouflageObjects[]=
		{
			"A3\plants_f\Clutter\c_Thistle_Thorn_Green.p3d"
		};
	};
	class pja314
	{
		camouflageObjects[]=
		{
			"A3\plants_f\Clutter\c_Thistle_Thorn_Green.p3d"
		};
	};
	class hellanmaa
	{
		camouflageObjects[]={};
	};
	class hellanmaaw
	{
		camouflageObjects[]={};
	};
	class Ivachev
	{
		camouflageObjects[]={};
	};
	class IvachevWinter
	{
		camouflageObjects[]={};
	};
	class PanovoWinter
	{
		camouflageObjects[]={};
	};
	class StaszowWinter
	{
		camouflageObjects[]={};
	};
	class kerama
	{
		camouflageObjects[]=
		{
			"A3\plants_f\Clutter\c_Thistle_Thorn_Green.p3d"
		};
	};
	class Kunduz
	{
		camouflageObjects[]={};
	};
	class lythium
	{
		camouflageObjects[]=
		{
			"A3\plants_f\Clutter\c_Thistle_Thorn_Brown.p3d"
		};
	};
	class tem_kujari
	{
		camouflageObjects[]={};
	};
	class Malden
	{
		camouflageObjects[]=
		{
			"A3\plants_f\Clutter\c_Thistle_Thorn_Brown.p3d"
		};
	};
	class namalsk
	{
		camouflageObjects[]={};
	};
	class Napf
	{
		camouflageObjects[]=
		{
			"A3\plants_f\Clutter\c_Thistle_Thorn_Green.p3d"
		};
	};
	class SWU_Ardennes_1940: Baranow
	{
		camouflageObjects[]={};
	};
	class SWU_Ardennes_1944_Winter
	{
		camouflageObjects[]={};
	};
	class SWU_Greece_Pella_Region
	{
		camouflageObjects[]={};
	};
	class SWU_Russia_Volkhov_Forest
	{
		camouflageObjects[]={};
	};
	class Intro
	{
		camouflageObjects[]=
		{
			"ca\plants\clutter_grass_flowers.p3d"
		};
	};
	class ruha
	{
		camouflageObjects[]={};
	};
	class Panovo
	{
		camouflageObjects[]={};
	};
	class Porto
	{
		camouflageObjects[]={};
	};
	class prei_khmaoch_luong
	{
		camouflageObjects[]=
		{
			"a3\vegetation_f_exp\clutter\grass\c_Grass_Tropic.p3d"
		};
	};
	class rhspkl
	{
		camouflageObjects[]=
		{
			"a3\vegetation_f_exp\clutter\grass\c_Grass_Tropic.p3d"
		};
	};
	class ProvingGrounds_PMC
	{
		camouflageObjects[]={};
	};
	class pulau
	{
		camouflageObjects[]={};
	};
	class Sara
	{
		camouflageObjects[]=
		{
			"A3\plants_f\Clutter\c_Thistle_Thorn_Brown.p3d"
		};
	};
	class Hyde_Sark: Baranow
	{
		camouflageObjects[]={};
	};
	class Shapur_Baf
	{
		camouflageObjects[]=
		{
			"ca\plants_E\Clutter\c_Brush_Hard_EP1.p3d"
		};
	};
	class SaraLite
	{
		camouflageObjects[]=
		{
			"A3\plants_f\Clutter\c_Thistle_Thorn_Brown.p3d"
		};
	};
	class Staszow: Baranow
	{
		camouflageObjects[]={};
	};
	class Stratis
	{
		camouflageObjects[]=
		{
			"A3\plants_f\Clutter\c_Thistle_Thorn_Brown.p3d"
		};
	};
	class tem_suursaariv
	{
		camouflageObjects[]={};
	};
	class tem_summa
	{
		camouflageObjects[]={};
	};
	class tem_summawcup
	{
		camouflageObjects[]={};
	};
	class Takistan
	{
		camouflageObjects[]={};
	};
	class Mountains_ACR
	{
		camouflageObjects[]={};
	};
	class Tanoa
	{
		camouflageObjects[]=
		{
			"A3\Vegetation_F_Exp\Clutter\Grass\c_GrassBunch_HI.p3d"
		};
	};
	class Sara_dbe1
	{
		camouflageObjects[]=
		{
			"A3\plants_f\Clutter\c_Thistle_Thorn_Brown.p3d"
		};
	};
	class utes
	{
		camouflageObjects[]=
		{
			"CUP\Terrains\cup_terrains_worlds\Clutter\c_GrassCrookedForest.p3d"
		};
	};
	class Zargabad
	{
		camouflageObjects[]=
		{
			"ca\plants_E\Clutter\c_Brush_Soft_EP1.p3d"
		};
	};
	class tem_ihantala
	{
		camouflageObjects[]={};
	};
	class tem_ihantalaw
	{
		camouflageObjects[]={};
	};
	class WL_Rosche
	{
		camouflageObjects[]={};
	};
	class abramia
	{
		camouflageObjects[]={};
	};
	class isladuala3
	{
		camouflageObjects[]={};
	};
	class tembelan
	{
		camouflageObjects[]={};
	};
	class NapfWinter
	{
		camouflageObjects[]={};
	};
	class chernarusredux
	{
		camouflageObjects[]={};
	};
	class gm_weferlingen_summer
	{
		camouflageObjects[]={};
	};
	class gm_weferlingen_winter
	{
		camouflageObjects[]={};
	};
	class vinjesvigen
	{
		camouflageObjects[]={};
	};
	class tem_vinjesvingenc
	{
		camouflageObjects[]={};
	};
	class vt7
	{
		camouflageObjects[]={};
	};
	class sfp_roso
	{
		camouflageObjects[]={};
	};
	class sfp_sturko
	{
		camouflageObjects[]={};
	};
	class sfp_wamako
	{
		camouflageObjects[]={};
	};
	class reshmaan
	{
		camouflageObjects[]={};
	};
};
class CfgDigVehicles
{
	class B_APC_Tracked_01_CRV_F
	{
		type="animate";
		animation="moveplow";
		selection="plow";
		plowRaised=0;
		plowLowered=0.89999998;
		distanceToTrench=3;
	};
	class B_T_APC_Tracked_01_CRV_F
	{
		type="animate";
		animation="moveplow";
		selection="plow";
		plowRaised=0;
		plowLowered=0.89999998;
		distanceToTrench=3;
	};
	class gm_ge_army_bpz2a0
	{
		type="source";
		animation="dozer_blade_elev_source";
		selection="dozer_blade_elev";
		plowRaised=0;
		plowLowered=0.69999999;
		distanceToTrench=3;
	};
	class gm_ge_army_bpz2a0_base: gm_ge_army_bpz2a0
	{
	};
	class gm_ge_army_bpz2a0_des: gm_ge_army_bpz2a0
	{
	};
	class gm_ge_army_bpz2a0_oli: gm_ge_army_bpz2a0
	{
	};
	class gm_ge_army_bpz2a0_ols: gm_ge_army_bpz2a0
	{
	};
	class gm_ge_army_bpz2a0_olw: gm_ge_army_bpz2a0
	{
	};
	class gm_ge_army_bpz2a0_trp: gm_ge_army_bpz2a0
	{
	};
	class gm_ge_army_bpz2a0_un: gm_ge_army_bpz2a0
	{
	};
	class gm_ge_army_bpz2a0_wdl: gm_ge_army_bpz2a0
	{
	};
	class gm_ge_army_bpz2a0_wds: gm_ge_army_bpz2a0
	{
	};
	class gm_ge_army_bpz2a0_win: gm_ge_army_bpz2a0
	{
	};
	class gm_ge_army_bpz2a0_wiw: gm_ge_army_bpz2a0
	{
	};
	class gm_dk_army_bpz2a0
	{
		type="source";
		animation="dozer_blade_elev_source";
		selection="dozer_blade_elev";
		plowRaised=0;
		plowLowered=0.69999999;
		distanceToTrench=3;
	};
	class gm_dk_army_bpz2a0_base: gm_dk_army_bpz2a0
	{
	};
	class gm_dk_army_bpz2a0_des: gm_dk_army_bpz2a0
	{
	};
	class gm_dk_army_bpz2a0_tan: gm_dk_army_bpz2a0
	{
	};
	class gm_dk_army_bpz2a0_un: gm_dk_army_bpz2a0
	{
	};
	class gm_dk_army_bpz2a0_wdl: gm_dk_army_bpz2a0
	{
	};
	class gm_dk_army_bpz2a0_win: gm_dk_army_bpz2a0
	{
	};
	class PRACS_M88
	{
		type="animate";
		animation="Blade";
		selection="Blade";
		plowRaised=0;
		plowLowered=0.93000001;
		distanceToTrench=3;
	};
};
