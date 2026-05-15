
class CfgSoundSets
{
	class NIA_SCARH_Shot_SoundSet
	{
		soundShaders[] = { "NIA_SCARH_closeShot_SoundShader", "NIA_SCARH_midShot_SoundShader", "NIA_SCARH_distShot_SoundShader", "NIA_SCARH_Closure_SoundShader" };
		volumeFactor = 1.25;
        volumeCurve = "InverseSquare2Curve";
        sound3DProcessingType = "WeaponMediumShot3DProcessingType";
        distanceFilter = "HLC_defaultDistanceFilter";
        frequencyRandomizer = 0.5; 
		frequencyRandomizerMin = 0.1; 
        occlusionFactor = 0.5;
        obstructionFactor = 0.3;
        spatial = 1;
        doppler = 0;
        loop = 0;
	};
	class NIA_SCARH_tail_SoundSet
	{
		soundShaders[] = {"NIA_SCARH_tailDistant_SoundShader", "NIA_SCARH_tailForest_SoundShader", "NIA_SCARH_tailHouses_SoundShader", "NIA_SCARH_tailInterior_SoundShader", "NIA_SCARH_tailMeadows_SoundShader", "NIA_SCARH_tailTrees_SoundShader", "NIA_SCARH_tailForest_mid_SoundShader", "NIA_SCARH_tailHouses_mid_SoundShader", "NIA_SCARH_tailInterior_mid_SoundShader", "NIA_SCARH_tailMeadows_mid_SoundShader", "NIA_SCARH_tailTrees_mid_SoundShader" };
		volumeFactor = 1.0;
        sound3DProcessingType = "WeaponMediumShotTail3DProcessingType";
        distanceFilter = "HLC_rifleTailDistanceFilter";
        frequencyRandomizer = 2;
        frequencyRandomizerMin = 0.2;
        occlusionFactor = 0.3;
        obstructionFactor = 0;
        spatial = 1;
        doppler = 0;
        loop = 0;
        soundShadersLimit = 2;

	};
	class NIA_SCARH_silencerShot_SoundSet
	{
		soundShaders[] = { "NIA_SCARH_closeShot_SoundShader","NIA_SCARH_silencerShot_SoundShader", "NIA_SCARH_Closure_SoundShader","NIA_SCARH_silencerShot_mid_SoundShader" };
		volumeFactor = 1;
        volumeCurve = "InverseSquare2Curve";
        sound3DProcessingType = "WeaponMediumShot3DProcessingType";
        distanceFilter = "HLC_defaultDistanceFilter";
        frequencyRandomizer = 0.5; 
		frequencyRandomizerMin = 0.1; 
        occlusionFactor = 0.5;
        obstructionFactor = 0.3;
        spatial = 1;
        doppler = 0;
        loop = 0;
	};
	class NIA_SCARH_silencerTail_SoundSet
	{
		soundShaders[] = { "NIA_SCARH_silencerTailTrees_SoundShader", "NIA_SCARH_silencerTailForest_SoundShader", "NIA_SCARH_silencerTailMeadows_SoundShader", "NIA_SCARH_silencerTailHouses_SoundShader", "NIA_SCARH_silencerTailInterior_SoundShader" };
		volumeFactor = 0.7;
        volumeCurve = "InverseSquare2Curve";
        frequencyRandomizer = 2;
        frequencyRandomizerMin = 0.2;
        occlusionFactor = 0.3;
        obstructionFactor = 0;
        spatial = 1;
        doppler = 0;
        loop = 0;
        soundShadersLimit = 2;
        sound3DProcessingType = "WeaponMediumShotTail3DProcessingType";
	};
	class NIA_SCARH_CQB_Shot_SoundSet
	{
		soundShaders[] = { "NIA_SCARH_CQB_closeShot_SoundShader", "NIA_SCARH_CQB_midShot_SoundShader", "NIA_SCARH_CQB_distShot_SoundShader", "NIA_SCARH_Closure_SoundShader" };
		volumeFactor = 1.25;
        volumeCurve = "InverseSquare2Curve";
        sound3DProcessingType = "WeaponMediumShot3DProcessingType";
        distanceFilter = "HLC_defaultDistanceFilter";
        frequencyRandomizer = 0.5; 
		frequencyRandomizerMin = 0.1; 
        occlusionFactor = 0.5;
        obstructionFactor = 0.3;
        spatial = 1;
        doppler = 0;
        loop = 0;
	};
	class NIA_SCARH_CQB_tail_SoundSet
	{
        soundShaders[] = { "NIA_SCARH_tailDistant_SoundShader", "NIA_SCARH_CQB_tailForest_SoundShader", "NIA_SCARH_CQB_tailHouses_SoundShader", "NIA_SCARH_CQB_tailInterior_SoundShader", "NIA_SCARH_CQB_tailMeadows_SoundShader", "NIA_SCARH_CQB_tailTrees_SoundShader", "NIA_SCARH_CQB_tailForest_mid_SoundShader", "NIA_SCARH_CQB_tailHouses_mid_SoundShader", "NIA_SCARH_CQB_tailInterior_mid_SoundShader", "NIA_SCARH_CQB_tailMeadows_mid_SoundShader", "NIA_SCARH_CQB_tailTrees_mid_SoundShader" };
		volumeFactor = 1.1;
        volumeCurve = "InverseSquare2Curve";
        sound3DProcessingType = "WeaponMediumShotTail3DProcessingType";
        distanceFilter = "HLC_rifleTailDistanceFilter";
        frequencyRandomizer = 2;
        frequencyRandomizerMin = 0.2;
        occlusionFactor = 0.3;
        obstructionFactor = 0;
        spatial = 1;
        doppler = 0;
        loop = 0;
        soundShadersLimit = 2;
	};
	class NIA_SCAR_300AAC_NEW_Shot_SoundSet
	{
		soundShaders[] = { "NIA_SCARH_Closure_SoundShader","NIA_AR15300_NEW_Close_Shot_SoundShader", "NIA_AR15300_NEW_CloseDistance_Shot_SoundShader", "NIA_AR15300_NEW_MediumDistance_Shot_SoundShader", "NIA_AR15300_NEW_FarDistance_Shot_SoundShader", "NIA_AR15300_NEW_Interior_Shot_SoundShader", "NIA_AR15300_NEW_InteriorDistance_Shot_SoundShader" };
		volumeFactor = 1.33;
		volumeCurve = "InverseSquare2Curve";
		occlusionFactor = 0.25;
		obstructionFactor = 0.3;
		spatial = 1;
		doppler = 0;
		loop = 0;
		frequencyrandomizer = 0.5;
		sound3DProcessingType = "WeaponMediumShot3DProcessingType";
		distanceFilter = "HLC_defaultDistanceFilter";
	};
	class NIA_SCARL_Shot_SoundSet
	{
		soundShaders[] = { "NIA_SCARL_closeShot_SoundShader", "NIA_SCARL_midShot_SoundShader", "NIA_SCARL_distShot_SoundShader", "NIA_SCARL_Closure_SoundShader" };
		volumeFactor = 1.25;
		volumeCurve = "InverseSquare2Curve";
		sound3DProcessingType = "WeaponMediumShot3DProcessingType";
		distanceFilter = "HLC_defaultDistanceFilter";
		frequencyRandomizer = 0.5;
		frequencyRandomizerMin = 0.1;
		occlusionFactor = 0.5;
		obstructionFactor = 0.3;
		spatial = 1;
		doppler = 0;
		loop = 0;
	};
	class NIA_SCARL_tail_SoundSet
	{
		soundShaders[] = { "NIA_SCARL_tailDistant_SoundShader", "NIA_SCARL_tailForest_SoundShader", "NIA_SCARL_tailHouses_SoundShader", "NIA_SCARL_tailInterior_SoundShader", "NIA_SCARL_tailMeadows_SoundShader", "NIA_SCARL_tailTrees_SoundShader", "NIA_SCARL_tailForest_mid_SoundShader", "NIA_SCARL_tailHouses_mid_SoundShader", "NIA_SCARL_tailInterior_mid_SoundShader", "NIA_SCARL_tailMeadows_mid_SoundShader", "NIA_SCARL_tailTrees_mid_SoundShader" };
		volumeFactor = 1.0;
		sound3DProcessingType = "WeaponMediumShotTail3DProcessingType";
		distanceFilter = "HLC_rifleTailDistanceFilter";
		frequencyRandomizer = 2;
		frequencyRandomizerMin = 0.2;
		occlusionFactor = 0.3;
		obstructionFactor = 0;
		spatial = 1;
		doppler = 0;
		loop = 0;
		soundShadersLimit = 2;

	};
	class NIA_SCARL_silencerShot_SoundSet
	{
		soundShaders[] = { "NIA_SCARH_closeShot_SoundShader","NIA_SCARL_silencerShot_SoundShader", "NIA_SCARL_Closure_SoundShader","NIA_SCARL_silencerShot_mid_SoundShader" };
		volumeFactor = 1;
		volumeCurve = "InverseSquare2Curve";
		sound3DProcessingType = "WeaponMediumShot3DProcessingType";
		distanceFilter = "HLC_defaultDistanceFilter";
		frequencyRandomizer = 0.5;
		frequencyRandomizerMin = 0.1;
		occlusionFactor = 0.5;
		obstructionFactor = 0.3;
		spatial = 1;
		doppler = 0;
		loop = 0;
	};
	class NIA_SCARL_silencerTail_SoundSet
	{
		soundShaders[] = { "NIA_SCARL_silencerTailTrees_SoundShader", "NIA_SCARL_silencerTailForest_SoundShader", "NIA_SCARL_silencerTailMeadows_SoundShader", "NIA_SCARL_silencerTailHouses_SoundShader", "NIA_SCARL_silencerTailInterior_SoundShader" };
		volumeFactor = 0.7;
		volumeCurve = "InverseSquare2Curve";
		frequencyRandomizer = 2;
		frequencyRandomizerMin = 0.2;
		occlusionFactor = 0.3;
		obstructionFactor = 0;
		spatial = 1;
		doppler = 0;
		loop = 0;
		soundShadersLimit = 2;
		sound3DProcessingType = "WeaponMediumShotTail3DProcessingType";
	};
};
