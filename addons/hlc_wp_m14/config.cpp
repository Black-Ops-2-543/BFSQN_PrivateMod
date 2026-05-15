class CfgSoundShaders
{
	class M14_Closure_SoundShader
	{
		samples[]=
		{
			
			{
				"hlc_wp_m14\snd\soundshaders\m14_first",
				1
			},
			
			{
				"hlc_wp_m14\snd\soundshaders\m14_first",
				1
			}
		};
		range=6;
		volume=0.5;
		rangeCurve[]=
		{
			{0,1},
			{6,0}
		};
	};
	class M14_closeShot_SoundShader
	{
		samples[]=
		{
			
			{
				"hlc_core\sound\weapon\M14\Close_1",
				1
			},
			
			{
				"hlc_core\sound\weapon\M14\Close_2",
				1
			},
			
			{
				"hlc_core\sound\weapon\M14\Close_3",
				1
			},
			
			{
				"hlc_core\sound\weapon\M14\Close_4",
				1
			}
		};
		volume=1.4;
		range=100;
		rangeCurve="closeShotCurve";
	};
	class M14_midShot_SoundShader
	{
		samples[]=
		{
			
			{
				"hlc_wp_m14\snd\soundshaders\m14_mid",
				1
			}
		};
		volume=1.1;
		range=2500;
		rangeCurve[]=
		{
			{0,0.5},
			{50,1},
			{300,0},
			{2500,0}
		};
	};
	class M14_distShot_SoundShader
	{
		samples[]=
		{
			
			{
				"hlc_wp_m14\snd\soundshaders\m14_dist",
				1
			}
		};
		volume=1;
		range=2500;
		rangeCurve[]=
		{
			{0,0},
			{50,0},
			{300,1},
			{2500,1}
		};
	};
	class M14_tailDistant_SoundShader
	{
		samples[]=
		{
			
			{
				"\A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\DMR06_taildistant",
				1
			}
		};
		volume=1;
		range=2000;
		rangeCurve[]=
		{
			{0,0},
			{250,0.2},
			{600,0.69999999},
			{2000,1}
		};
		limitation=1;
	};
	class M14_tailForest_SoundShader
	{
		samples[]=
		{
			
			{
				"hlc_wp_m14\snd\soundshaders\m14_forest",
				1
			}
		};
		volume="1*((1-interior/1.4)*Forest/3)";
		range=250;
		rangeCurve[]=
		{
			{0,1},
			{250,0}
		};
		limitation=1;
	};
	class M14_tailForest_mid_SoundShader
	{
		samples[]=
		{
			
			{
				"hlc_wp_m14\snd\soundshaders\m14_forest_mid",
				1
			}
		};
		volume=" 1*((1-interior/1.4)*Forest/3)";
		rangeCurve[]=
		{
			{0,0},
			{250,1},
			{1800,1}
		};
		range=1800;
		limitation=1;
	};
	class M14_tailHouses_SoundShader
	{
		samples[]=
		{
			
			{
				"hlc_wp_m14\snd\soundshaders\m14_urban",
				1
			}
		};
		volume="1*((1-interior/1.4)*houses/3)";
		range=250;
		rangeCurve[]=
		{
			{0,1},
			{250,0}
		};
		limitation=1;
	};
	class M14_tailHouses_mid_SoundShader
	{
		samples[]=
		{
			
			{
				"hlc_wp_m14\snd\soundshaders\m14_urban_mid",
				1
			}
		};
		volume="1*((1-interior/1.4)*houses/3)";
		rangeCurve[]=
		{
			{0,0},
			{250,1},
			{2000,1}
		};
		range=2000;
		limitation=1;
	};
	class M14_tailInterior_SoundShader
	{
		samples[]=
		{
			
			{
				"hlc_wp_m14\snd\soundshaders\m14_indoor",
				1
			}
		};
		volume="1*((interior)*0.65)";
		range=250;
		rangeCurve[]=
		{
			{0,1},
			{250,0}
		};
		limitation=1;
	};
	class m14_tailInterior_mid_SoundShader
	{
		samples[]=
		{
			
			{
				"hlc_wp_m14\snd\soundshaders\m14_indoor_mid",
				1
			}
		};
		volume=" 1*((interior)*0.65)";
		rangeCurve[]=
		{
			{0,0},
			{250,0.40000001},
			{320,0}
		};
		range=500;
		limitation=1;
	};
	class M14_tailMeadows_SoundShader
	{
		samples[]=
		{
			
			{
				"hlc_wp_m14\snd\soundshaders\m14_meadows",
				1
			}
		};
		volume="1*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
		range=250;
		rangeCurve[]=
		{
			{0,1},
			{250,0}
		};
		limitation=1;
	};
	class M14_tailMeadows_mid_SoundShader
	{
		samples[]=
		{
			
			{
				"hlc_wp_m14\snd\soundshaders\m14_meadows_mid",
				1
			}
		};
		volume=" 1*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
		rangeCurve[]=
		{
			{0,0},
			{250,1},
			{2000,1}
		};
		range=2000;
		limitation=1;
	};
	class M14_tailTrees_SoundShader
	{
		samples[]=
		{
			
			{
				"hlc_wp_m14\snd\soundshaders\m14_trees",
				1
			}
		};
		volume="1*((1-interior/1.4)*trees/3)";
		range=250;
		rangeCurve[]=
		{
			{0,1},
			{250,0}
		};
		limitation=1;
	};
	class M14_tailTrees_mid_SoundShader
	{
		samples[]=
		{
			
			{
				"hlc_wp_m14\snd\soundshaders\m14_trees_mid",
				1
			}
		};
		volume=" 1*((1-interior/1.4)*trees/3)";
		rangeCurve[]=
		{
			{0,0},
			{250,1},
			{2000,1}
		};
		range=2000;
		limitation=0;
	};
	class M14_silencerShot_SoundShader
	{
		samples[]=
		{
			
			{
				"hlc_wp_m14\snd\soundshaders\generic\m14_suppressed_close",
				1
			}
		};
		volume=1;
		range=350;
		rangeCurve="closeShotCurve";
	};
	class M14_silencerTailForest_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\DMR06_silencerTailForest",
				1
			}
		};
		volume="(1-interior/1.4)*forest/3";
		range=150;
		rangeCurve[]=
		{
			{0,1},
			{150,0.30000001}
		};
		limitation=1;
	};
	class M14_silencerTailHouses_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\DMR06_silencerTailHouses",
				1
			}
		};
		volume="(1-interior/1.4)*houses/3";
		range=150;
		rangeCurve[]=
		{
			{0,1},
			{150,0}
		};
		limitation=1;
	};
	class M14_silencerTailInterior_SoundShader
	{
		samples[]=
		{
			
			{
				"hlc_wp_m14\snd\soundshaders\generic\m14_suppressed_indoor",
				1
			}
		};
		volume="interior";
		range=150;
		rangeCurve[]=
		{
			{0,1},
			{50,0.30000001},
			{150,0}
		};
		limitation=1;
	};
	class M14_silencerTailMeadows_SoundShader
	{
		samples[]=
		{
			
			{
				"hlc_wp_m14\snd\soundshaders\generic\m14_suppressed_meadows",
				1
			}
		};
		volume="(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range=150;
		rangeCurve[]=
		{
			{0,1},
			{150,0.30000001}
		};
		limitation=1;
	};
	class M14_silencerTailTrees_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\DMR06_silencerTailTrees",
				1
			}
		};
		volume="(1-interior/1.4)*trees/3";
		range=150;
		rangeCurve[]=
		{
			{0,1},
			{150,0.30000001}
		};
		limitation=1;
	};
	class m14tactical_Closure_SoundShader
	{
		samples[]=
		{
			
			{
				"hlc_wp_m14\snd\soundshaders\m14_first",
				1
			},
			
			{
				"hlc_wp_m14\snd\soundshaders\m14_first",
				1
			}
		};
		range=5;
		volume=0.5;
	};
	class m14tactical_closeShot_SoundShader
	{
		samples[]=
		{
			
			{
				"hlc_core\sound\weapon\M14\Close_1",
				1
			},
			
			{
				"hlc_core\sound\weapon\M14\Close_2",
				1
			},
			
			{
				"hlc_core\sound\weapon\M14\Close_3",
				1
			},
			
			{
				"hlc_core\sound\weapon\M14\Close_4",
				1
			}
		};
		volume=1.4;
		range=100;
		rangeCurve="closeShotCurve";
	};
	class m14tactical_midShot_SoundShader
	{
		samples[]=
		{
			
			{
				"hlc_wp_m14\snd\soundshaders\m14tac_mid",
				1
			}
		};
		volume=1.1;
		range=2500;
		rangeCurve[]=
		{
			{0,0.2},
			{50,1},
			{300,0},
			{2500,0}
		};
	};
	class m14tactical_distShot_SoundShader
	{
		samples[]=
		{
			
			{
				"hlc_wp_m14\snd\soundshaders\m14_dist",
				1
			}
		};
		volume=1;
		range=2500;
		rangeCurve[]=
		{
			{0,0},
			{50,0},
			{300,1},
			{2500,1}
		};
	};
	class M14tactical_tailDistant_SoundShader
	{
		samples[]=
		{
			
			{
				"\A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\DMR06_taildistant",
				1
			}
		};
		volume=1;
		range=2000;
		rangeCurve[]=
		{
			{0,0},
			{250,0.2},
			{600,0.69999999},
			{2000,1}
		};
		limitation=1;
	};
	class m14tactical_tailForest_SoundShader
	{
		samples[]=
		{
			
			{
				"hlc_wp_m14\snd\soundshaders\m14_forest",
				1
			}
		};
		volume="1*((1-interior/1.4)*Forest/3)";
		range=250;
		rangeCurve[]=
		{
			{0,1},
			{250,0}
		};
		limitation=1;
	};
	class m14tactical_tailForest_mid_SoundShader
	{
		samples[]=
		{
			
			{
				"hlc_wp_m14\snd\soundshaders\m14_forest_mid",
				1
			}
		};
		volume=" 1*((1-interior/1.4)*Forest/3)";
		rangeCurve[]=
		{
			{0,0},
			{250,1},
			{1800,1}
		};
		range=1800;
		limitation=1;
	};
	class m14tactical_tailHouses_SoundShader
	{
		samples[]=
		{
			
			{
				"hlc_wp_m14\snd\soundshaders\m14_urban",
				1
			}
		};
		volume="1*((1-interior/1.4)*houses/3)";
		range=250;
		rangeCurve[]=
		{
			{0,1},
			{250,0}
		};
		limitation=1;
	};
	class m14tactical_tailHouses_mid_SoundShader
	{
		samples[]=
		{
			
			{
				"hlc_wp_m14\snd\soundshaders\m14_urban_mid",
				1
			}
		};
		volume="1*((1-interior/1.4)*houses/3)";
		rangeCurve[]=
		{
			{0,0},
			{250,1},
			{2000,1}
		};
		range=2000;
		limitation=1;
	};
	class m14tactical_tailInterior_SoundShader
	{
		samples[]=
		{
			
			{
				"hlc_wp_m14\snd\soundshaders\m14_indoor",
				1
			}
		};
		volume="1*((interior)*0.65)";
		range=250;
		rangeCurve[]=
		{
			{0,1},
			{250,0}
		};
		limitation=1;
	};
	class m14tactical_tailInterior_mid_SoundShader
	{
		samples[]=
		{
			
			{
				"hlc_wp_m14\snd\soundshaders\m14_indoor_mid",
				1
			}
		};
		volume=" 1*((interior)*0.65)";
		rangeCurve[]=
		{
			{0,0},
			{250,0.40000001},
			{320,0}
		};
		range=500;
		limitation=1;
	};
	class m14tactical_tailMeadows_SoundShader
	{
		samples[]=
		{
			
			{
				"hlc_wp_m14\snd\soundshaders\m14_meadows",
				1
			}
		};
		volume="1*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
		range=250;
		rangeCurve[]=
		{
			{0,1},
			{250,0}
		};
		limitation=1;
	};
	class m14tactical_tailMeadows_mid_SoundShader
	{
		samples[]=
		{
			
			{
				"hlc_wp_m14\snd\soundshaders\m14_meadows_mid",
				1
			}
		};
		volume=" 1*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
		rangeCurve[]=
		{
			{0,0},
			{250,1},
			{2000,1}
		};
		range=2000;
		limitation=1;
	};
	class m14tactical_tailTrees_SoundShader
	{
		samples[]=
		{
			
			{
				"hlc_wp_m14\snd\soundshaders\m14_trees",
				1
			}
		};
		volume="1*((1-interior/1.4)*trees/3)";
		range=250;
		rangeCurve[]=
		{
			{0,1},
			{250,0}
		};
		limitation=1;
	};
	class m14tactical_tailTrees_mid_SoundShader
	{
		samples[]=
		{
			
			{
				"hlc_wp_m14\snd\soundshaders\m14_trees_mid",
				1
			}
		};
		volume=" 1*((1-interior/1.4)*trees/3)";
		rangeCurve[]=
		{
			{0,0},
			{250,1},
			{2000,1}
		};
		range=2000;
		limitation=0;
	};
};
class CfgSoundSets
{
	class m14_Shot_SoundSet
	{
		soundShaders[]=
		{
			"m14_closeShot_SoundShader",
			"m14_midShot_SoundShader",
			"m14_distShot_SoundShader",
			"m14_Closure_SoundShader"
		};
		volumeFactor=1.24;
		volumeCurve="InverseSquare3Curve";
		sound3DProcessingType="WeaponMediumShot3DProcessingType";
		distanceFilter="HLC_defaultDistanceFilter";
		frequencyRandomizer=0.5;
		frequencyRandomizerMin=0.1;
		occlusionFactor=0.5;
		obstructionFactor=0.30000001;
		spatial=1;
		doppler=0;
		loop=0;
	};
	class m14_tail_SoundSet
	{
		soundShaders[]=
		{
			"m14_tailDistant_SoundShader",
			"m14_tailForest_SoundShader",
			"m14_tailHouses_SoundShader",
			"m14_tailInterior_SoundShader",
			"m14_tailMeadows_SoundShader",
			"m14_tailTrees_SoundShader",
			"m14_tailForest_mid_SoundShader",
			"m14_tailHouses_mid_SoundShader",
			"m14_tailInterior_mid_SoundShader",
			"m14_tailMeadows_mid_SoundShader",
			"m14_tailTrees_mid_SoundShader"
		};
		volumeFactor=1.1;
		volumeCurve="InverseSquare2Curve";
		sound3DProcessingType="WeaponMediumShotTail3DProcessingType";
		distanceFilter="HLC_rifleTailDistanceFilter";
		frequencyRandomizer=2;
		frequencyRandomizerMin=0.2;
		occlusionFactor=0.30000001;
		obstructionFactor=0;
		spatial=1;
		doppler=0;
		loop=0;
		soundShadersLimit=2;
	};
	class m14_silencerShot_SoundSet
	{
		soundShaders[]=
		{
			"m14_silencerShot_SoundShader",
			"m14_Closure_SoundShader"
		};
		volumeFactor=1;
		volumeCurve="InverseSquare3Curve";
		frequencyRandomizer=0.5;
		frequencyRandomizerMin=0.1;
		occlusionFactor=0.30000001;
		obstructionFactor=0;
		spatial=1;
		doppler=0;
		loop=0;
		sound3DProcessingType="WeaponMediumShot3DProcessingType";
	};
	class m14_silencerTail_SoundSet
	{
		soundShaders[]=
		{
			"m14_silencerTailTrees_SoundShader",
			"m14_silencerTailForest_SoundShader",
			"m14_silencerTailMeadows_SoundShader",
			"m14_silencerTailHouses_SoundShader",
			"m14_silencerTailInterior_SoundShader"
		};
		volumeFactor=1;
		volumeCurve="InverseSquare2Curve";
		frequencyRandomizer=2;
		frequencyRandomizerMin=0.2;
		spatial=1;
		doppler=0;
		loop=0;
		soundShadersLimit=3;
		sound3DProcessingType="WeaponMediumShotTail3DProcessingType";
	};
	class m14tactical_Shot_SoundSet
	{
		soundShaders[]=
		{
			"m14tactical_closeShot_SoundShader",
			"m14tactical_midShot_SoundShader",
			"m14tactical_distShot_SoundShader",
			"m14tactical_Closure_SoundShader"
		};
		volumeFactor=1.4;
		sound3DProcessingType="WeaponMediumShot3DProcessingType";
		distanceFilter="HLC_defaultDistanceFilter";
		frequencyRandomizer=0.5;
		frequencyRandomizerMin=0.1;
		occlusionFactor=0.5;
		obstructionFactor=0.30000001;
		spatial=1;
		doppler=0;
		loop=0;
	};
	class m14tactical_tail_SoundSet
	{
		soundShaders[]=
		{
			"m14tactical_tailDistant_SoundShader",
			"m14tactical_tailForest_SoundShader",
			"m14tactical_tailHouses_SoundShader",
			"m14tactical_tailInterior_SoundShader",
			"m14tactical_tailMeadows_SoundShader",
			"m14tactical_tailTrees_SoundShader",
			"m14tactical_tailForest_mid_SoundShader",
			"m14tactical_tailHouses_mid_SoundShader",
			"m14tactical_tailInterior_mid_SoundShader",
			"m14tactical_tailMeadows_mid_SoundShader",
			"m14tactical_tailTrees_mid_SoundShader"
		};
		volumeFactor=1.3;
		volumeCurve="InverseSquare2Curve";
		sound3DProcessingType="WeaponMediumShotTail3DProcessingType";
		distanceFilter="HLC_rifleTailDistanceFilter";
		frequencyRandomizer=2;
		frequencyRandomizerMin=0.2;
		occlusionFactor=0.30000001;
		obstructionFactor=0;
		spatial=1;
		doppler=0;
		loop=0;
		soundShadersLimit=2;
	};
};
class CfgMovesBasic
{
	class DefaultDie;
	class ManActions
	{
		HLC_GestureReload_M14="HLC_GestureReload_M14";
		HLC_GestureReload_M14_X14="HLC_GestureReload_M14_X14";
		HLC_GestureReload_M14_Tactical="HLC_GestureReload_M14_Tactical";
		HLC_GestureReload_M14_X14_Tactical="HLC_GestureReload_M14_X14_Tactical";
	};
	class Actions
	{
		class NoActions: ManActions
		{
			HLC_GestureReload_M14[]=
			{
				"HLC_GestureReload_M14",
				"Gesture"
			};
			HLC_GestureReload_M14_X14[]=
			{
				"HLC_GestureReload_M14_X14",
				"Gesture"
			};
			HLC_GestureReload_M14_Tactical[]=
			{
				"HLC_GestureReload_M14_Tactical",
				"Gesture"
			};
			HLC_GestureReload_M14_X14_Tactical[]=
			{
				"HLC_GestureReload_M14_X14_Tactical",
				"Gesture"
			};
		};
		class RifleBaseStandActions;
		class RifleProneActions: RifleBaseStandActions
		{
			HLC_GestureReload_M14[]=
			{
				"HLC_GestureReload_M14_Prone",
				"Gesture"
			};
			HLC_GestureReload_M14_X14[]=
			{
				"HLC_GestureReload_M14_X14_Prone",
				"Gesture"
			};
			HLC_GestureReload_M14_Tactical[]=
			{
				"HLC_GestureReload_M14_Tactical_Prone",
				"Gesture"
			};
			HLC_GestureReload_M14_X14_Tactical[]=
			{
				"HLC_GestureReload_M14_X14_Tactical_Prone",
				"Gesture"
			};
		};
		class DeployedProneActions: RifleProneActions
		{
			HLC_GestureReload_M14[]=
			{
				"HLC_GestureReload_M14_Deployed",
				"Gesture"
			};
			HLC_GestureReload_M14_X14[]=
			{
				"HLC_GestureReload_M14_X14_Prone_Deployed",
				"Gesture"
			};
			HLC_GestureReload_M14_Tactical[]=
			{
				"HLC_GestureReload_M14_Tactical_Prone_Deployed",
				"Gesture"
			};
			HLC_GestureReload_M14_X14_Tactical[]=
			{
				"HLC_GestureReload_M14_X14_Tactical_Prone_Deployed",
				"Gesture"
			};
		};
		class RifleAdjustProneBaseActions;
		class RifleAdjustRProneActions: RifleAdjustProneBaseActions
		{
			HLC_GestureReload_M14[]=
			{
				"HLC_GestureReload_M14_Context",
				"Gesture"
			};
			HLC_GestureReload_M14_X14[]=
			{
				"HLC_GestureReload_M14_X14_Context",
				"Gesture"
			};
			HLC_GestureReload_M14_Tactical[]=
			{
				"HLC_GestureReload_M14_Tactical_Context",
				"Gesture"
			};
			HLC_GestureReload_M14_X14_Tactical[]=
			{
				"HLC_GestureReload_M14_X14_Tactical_Context",
				"Gesture"
			};
		};
		class RifleAdjustLProneActions: RifleAdjustProneBaseActions
		{
			HLC_GestureReload_M14[]=
			{
				"HLC_GestureReload_M14_Context",
				"Gesture"
			};
			HLC_GestureReload_M14_X14[]=
			{
				"HLC_GestureReload_M14_X14_Context",
				"Gesture"
			};
			HLC_GestureReload_M14_Tactical[]=
			{
				"HLC_GestureReload_M14_Tactical_Context",
				"Gesture"
			};
			HLC_GestureReload_M14_X14_Tactical[]=
			{
				"HLC_GestureReload_M14_X14_Tactical_Context",
				"Gesture"
			};
		};
		class RifleAdjustFProneActions: RifleAdjustProneBaseActions
		{
			HLC_GestureReload_M14[]=
			{
				"HLC_GestureReload_M14",
				"Gesture"
			};
			HLC_GestureReload_M14_X14[]=
			{
				"HLC_GestureReload_M14_X14",
				"Gesture"
			};
			HLC_GestureReload_M14_Tactical[]=
			{
				"HLC_GestureReload_M14_Tactical",
				"Gesture"
			};
			HLC_GestureReload_M14_X14_Tactical[]=
			{
				"HLC_GestureReload_M14_X14_Tactical",
				"Gesture"
			};
		};
	};
};
class CfgGesturesMale
{
	class Default;
	class GestureReloadBase;
	class States
	{
		class HLC_GestureReload_M14: Default
		{
			file="hlc_wp_m14\gesture\newgesture\NIA_M14_reloadmagazine.rtm";
			speed="-(125 / 30)";
			looped=0;
			mask="handsWeapon";
			canPullTrigger=0;
			headBobStrength=0.40000001;
			headBobMode=2;
			rightHandIKCurve[]=
			{
				"(76 / 125)",
				1,
				"(79 / 125)",
				0,
				"(111 / 125)",
				0,
				"(116 / 125)",
				1
			};
			leftHandIKBeg=1;
			leftHandIKEnd=1;
			leftHandIKCurve[]=
			{
				"(7 / 125)",
				1,
				"(11 / 125)",
				0,
				"(74 / 125)",
				0,
				"(78 / 125)",
				1
			};
		};
		class HLC_GestureReload_M14_Prone: Default
		{
			file="hlc_wp_m14\gesture\newgesture\NIA_M14_reloadmagazine_prone.rtm";
			speed="-(125 / 30)";
			looped=0;
			mask="handsWeapon";
			headBobStrength=0.2;
			canPullTrigger=0;
			headBobMode=2;
			rightHandIKCurve[]=
			{
				"(5 / 125)",
				1,
				"(8 / 125)",
				0,
				"(111 / 125)",
				0,
				"(115 / 125)",
				1
			};
			leftHandIKBeg=1;
			leftHandIKEnd=1;
			leftHandIKCurve[]=
			{
				"(1 / 125)",
				1,
				"(125/125)",
				1
			};
			rightHandIKEnd=1;
		};
		class HLC_GestureReload_M14_Context: HLC_GestureReload_M14
		{
			mask="NIA_handsWeapon_context_Toadie";
		};
		class HLC_GestureReload_M14_Deployed: HLC_GestureReload_M14_Prone
		{
			file="hlc_wp_m14\gesture\newgesture\NIA_M14_reloadmagazine_deployed.rtm";
			rightHandIKCurve[]=
			{
				"(76 / 125)",
				1,
				"(79 / 125)",
				0,
				"(111 / 125)",
				0,
				"(116 / 125)",
				1
			};
			leftHandIKBeg=1;
			leftHandIKEnd=1;
			leftHandIKCurve[]=
			{
				"(7 / 125)",
				1,
				"(11 / 125)",
				0,
				"(74 / 125)",
				0,
				"(78 / 125)",
				1
			};
		};
		class HLC_GestureReload_M14_X14: HLC_GestureReload_M14
		{
			file="hlc_wp_m14\gesture\newgesture\NIA_M14_X14_reloadmagazine.rtm";
			speed="-(125 / 30)";
			rightHandIKCurve[]=
			{
				"(76 / 125)",
				1,
				"(79 / 125)",
				0,
				"(111 / 125)",
				0,
				"(116 / 125)",
				1
			};
			leftHandIKBeg=1;
			leftHandIKEnd=1;
			leftHandIKCurve[]=
			{
				"(7 / 125)",
				1,
				"(11 / 125)",
				0,
				"(74 / 125)",
				0,
				"(78 / 125)",
				1
			};
		};
		class HLC_GestureReload_M14_X14_Prone: HLC_GestureReload_M14_Prone
		{
			file="hlc_wp_m14\gesture\newgesture\NIA_M14_X14_reloadmagazine_prone.rtm";
			speed="-(125 / 30)";
			rightHandIKCurve[]=
			{
				"(5 / 125)",
				1,
				"(8 / 125)",
				0,
				"(111 / 125)",
				0,
				"(115 / 125)",
				1
			};
			leftHandIKBeg=1;
			leftHandIKEnd=1;
			leftHandIKCurve[]=
			{
				"(1 / 125)",
				1,
				"(125 / 125)",
				1
			};
		};
		class HLC_GestureReload_M14_X14_context: HLC_GestureReload_M14_X14
		{
			mask="NIA_handsWeapon_context_Toadie";
		};
		class HLC_GestureReload_M14_X14_Prone_Deployed: HLC_GestureReload_M14_X14_Prone
		{
			file="hlc_wp_m14\gesture\newgesture\NIA_M14_X14_reloadmagazine_deployed.rtm";
			rightHandIKCurve[]=
			{
				"(76 / 125)",
				1,
				"(79 / 125)",
				0,
				"(111 / 125)",
				0,
				"(116 / 125)",
				1
			};
			leftHandIKBeg=1;
			leftHandIKEnd=1;
			leftHandIKCurve[]=
			{
				"(7 / 125)",
				1,
				"(11 / 125)",
				0,
				"(74 / 125)",
				0,
				"(78 / 125)",
				1
			};
		};
		class HLC_GestureReload_M14_Tactical: HLC_GestureReload_M14
		{
			speed="-(92 / 30)";
			file="hlc_wp_m14\gesture\newgesture\NIA_M14_reloadmagazine_Tactical.rtm";
			rightHandIKCurve[]=
			{
				"(1 / 92)",
				1,
				"(92 / 92)",
				1
			};
			leftHandIKBeg=1;
			leftHandIKEnd=1;
			leftHandIKCurve[]=
			{
				"(7 / 92)",
				1,
				"(11 / 92)",
				0,
				"(74 / 92)",
				0,
				"(84 / 92)",
				1
			};
		};
		class HLC_GestureReload_M14_Tactical_Prone: HLC_GestureReload_M14_Prone
		{
			speed="-(92 / 30)";
			file="hlc_wp_m14\gesture\newgesture\NIA_M14_reloadmagazine_Tactical_prone.rtm";
			rightHandIKCurve[]=
			{
				"(5 / 92)",
				1,
				"(8 / 92)",
				0,
				"(76 / 92)",
				0,
				"(82 / 92)",
				1
			};
			leftHandIKBeg=1;
			leftHandIKEnd=1;
			leftHandIKCurve[]=
			{
				"(1 / 125)",
				1,
				"(125 / 125)",
				1
			};
		};
		class HLC_GestureReload_M14_Tactical_context: HLC_GestureReload_M14_Tactical
		{
			mask="NIA_handsWeapon_context_Toadie";
		};
		class HLC_GestureReload_M14_Tactical_Prone_Deployed: HLC_GestureReload_M14_Tactical_Prone
		{
			file="hlc_wp_m14\gesture\newgesture\NIA_M14_reloadmagazine_Tactical_deployed.rtm";
			rightHandIKCurve[]=
			{
				"(1 / 92)",
				1,
				"(92 / 92)",
				1
			};
			leftHandIKBeg=1;
			leftHandIKEnd=1;
			leftHandIKCurve[]=
			{
				"(7 / 92)",
				1,
				"(11 / 92)",
				0,
				"(74 / 92)",
				0,
				"(84 / 92)",
				1
			};
		};
		class HLC_GestureReload_M14_X14_Tactical: HLC_GestureReload_M14
		{
			file="hlc_wp_m14\gesture\newgesture\NIA_M14_X14_reloadmagazine_Tactical.rtm";
			speed="-(92 / 30)";
			rightHandIKCurve[]=
			{
				"(1 / 92)",
				1,
				"(92 / 92)",
				1
			};
			leftHandIKBeg=1;
			leftHandIKEnd=1;
			leftHandIKCurve[]=
			{
				"(7 / 92)",
				1,
				"(11 / 92)",
				0,
				"(74 / 92)",
				0,
				"(84 / 92)",
				1
			};
		};
		class HLC_GestureReload_M14_X14_Tactical_Prone: HLC_GestureReload_M14_Prone
		{
			file="hlc_wp_m14\gesture\newgesture\NIA_M14_X14_reloadmagazine_Tactical_prone.rtm";
			speed="-(92 / 30)";
			rightHandIKCurve[]=
			{
				"(5 / 92)",
				1,
				"(8 / 92)",
				0,
				"(76 / 92)",
				0,
				"(82 / 92)",
				1
			};
			leftHandIKBeg=1;
			leftHandIKEnd=1;
			leftHandIKCurve[]=
			{
				"(1 / 125)",
				1,
				"(125 / 125)",
				1
			};
		};
		class HLC_GestureReload_M14_X14_Tactical_context: HLC_GestureReload_M14_X14_Tactical
		{
			mask="NIA_handsWeapon_context_Toadie";
		};
		class HLC_GestureReload_M14_X14_Tactical_Prone_Deployed: HLC_GestureReload_M14_X14_Tactical_Prone
		{
			file="hlc_wp_m14\gesture\newgesture\NIA_M14_X14_reloadmagazine_Tactical_deployed.rtm";
			rightHandIKCurve[]=
			{
				"(1 / 92)",
				1,
				"(92 / 92)",
				1
			};
			leftHandIKBeg=1;
			leftHandIKEnd=1;
			leftHandIKCurve[]=
			{
				"(7 / 92)",
				1,
				"(11 / 92)",
				0,
				"(74 / 92)",
				0,
				"(84 / 92)",
				1
			};
		};
	};
	class BlendAnims
	{
	};
};
class CfgPatches
{
	class hlcweapons_m14
	{
		requiredaddons[]=
		{
			"A3_Data_F",
			"A3_UI_F",
			"A3_Anims_F",
			"A3_Anims_F_Config_Sdr",
			"A3_Weapons_F",
			"cba_jr",
			"hlcweapons_core"
		};
		units[]=
		{
			"HLC_M14_ammobox",
			"Weapon_hlc_rifle_M14",
			"Weapon_hlc_rifle_M14_Bipod",
			"Weapon_hlc_rifle_M14_Rail",
			"Weapon_hlc_rifle_M14_Bipod_Rail",
			"Weapon_hlc_rifle_M21",
			"Weapon_hlc_rifle_M21_Rail",
			"Weapon_hlc_rifle_m14dmr",
			"Weapon_hlc_rifle_M14dmr_Rail",
			"Weapon_hlc_rifle_m14sopmod"
		};
		weapons[]=
		{
			"hlc_rifle_M14",
			"hlc_rifle_M14_TacReload",
			"hlc_rifle_M14_XMAG",
			"hlc_rifle_M14_XMAG_TacReload",
			"hlc_rifle_M14_Bipod",
			"hlc_rifle_M14_Bipod_TacReload",
			"hlc_rifle_M14_Bipod_XMAG",
			"hlc_rifle_M14_Bipod_XMAG_TacReload",
			"hlc_rifle_M14_Rail",
			"hlc_rifle_M14_Rail_TacReload",
			"hlc_rifle_M14_Rail_XMAG",
			"hlc_rifle_M14_Rail_XMAG_TacReload",
			"hlc_rifle_M14_Bipod_Rail",
			"hlc_rifle_M14_Bipod_Rail_TacReload",
			"hlc_rifle_M14_Bipod_Rail_XMAG",
			"hlc_rifle_M14_Bipod_Rail_XMAG_TacReload",
			"hlc_rifle_M21",
			"hlc_rifle_M21_TacReload",
			"hlc_rifle_M21_XMAG",
			"hlc_rifle_M21_XMAG_TacReload",
			"hlc_rifle_M21_Rail",
			"hlc_rifle_M21_Rail_TacReload",
			"hlc_rifle_M21_Rail_XMAG",
			"hlc_rifle_M21_Rail_XMAG_TacReload",
			"hlc_rifle_m14dmr",
			"hlc_rifle_m14dmr_TacReload",
			"hlc_rifle_m14dmr_XMAG",
			"hlc_rifle_m14dmr_XMAG_TacReload",
			"hlc_rifle_M14dmr_Rail",
			"hlc_rifle_M14dmr_Rail_TacReload",
			"hlc_rifle_M14dmr_Rail_XMAG",
			"hlc_rifle_M14dmr_Rail_XMAG_TacReload",
			"hlc_rifle_m14sopmod",
			"hlc_rifle_m14sopmod_TacReload",
			"hlc_rifle_m14sopmod_grip",
			"hlc_rifle_m14sopmod_grip2",
			"hlc_rifle_m14sopmod_grip3",
			"hlc_rifle_m14sopmod_XMAG",
			"hlc_rifle_m14sopmod_XMAG_TacReload",
			"hlc_rifle_m14sopmod_XMAG_grip",
			"hlc_rifle_m14sopmod_XMAG_grip2",
			"hlc_rifle_m14sopmod_XMAG_grip3"
		};
		magazines[]=
		{
			"hlc_20Rnd_762x51_B_M14",
			"hlc_20Rnd_762x51_mk316_M14",
			"hlc_20Rnd_762x51_barrier_M14",
			"hlc_20Rnd_762x51_T_M14",
			"hlc_20Rnd_762x51_Tdim_M14",
			"hlc_20Rnd_762x51_Mdim_M14",
			"hlc_50Rnd_762x51_B_M14",
			"hlc_50Rnd_762x51_T_M14",
			"hlc_50Rnd_762x51_M_M14",
			"hlc_50Rnd_762x51_TDIM_M14",
			"hlc_50Rnd_762x51_MDIM_M14",
			"hlc_20Rnd_762x51_S_M14"
		};
		version="v2.32";
		author="toadie";
	};
};
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class asdg_MuzzleSlot;
class asdg_MuzzleSlot_762: asdg_MuzzleSlot
{
	class compatibleItems;
};
class asdg_OpticRail;
class niarms_m14_OpticRail: asdg_OpticRail
{
	class compatibleItems
	{
		hlc_optic_artel_m14=1;
		hlc_optic_LRT_m14=1;
		hlc_optic_PVS4M14=1;
	};
};
class asdg_SlotInfo;
class asdg_OpticRail1913;
class asdg_OpticRail1913_short;
class asdg_FrontSideRail: asdg_SlotInfo
{
	class compatibleItems;
};
class asdg_UnderSlot;
class nia_rifle_bipodsgrips_slot;
class nia_rifle_grips_slot;
class nia_charms_slot;
class nia_Barrelmount_Slot;
class cfgMods
{
	class Mod_Base;
	class Niarms_M14: Mod_Base
	{
		name="NIArsenal: M14 Rifles";
		picture="hlc_wp_m14\tex\ui\NIArms1_ca.paa";
		dir="@NIArsenal";
		hideName=1;
		hidePicture=0;
		action="http://credmo.updatedtuesdays.com/tier1";
		author="Toadie";
		logo="hlc_wp_m14\tex\ui\NIArms1_ca.paa";
		logoOver="hlc_wp_m14\tex\ui\NIArms1_ca.paa";
		logoSmall="hlc_wp_m14\tex\ui\NIArms1_ca.paa";
	};
};
class CfgVehicles
{
	class B_supplyCrate_F;
	class Weapon_Base_F;
	class HLC_M14_ammobox: B_supplyCrate_F
	{
		dlc="Niarms_M14";
		scope=2;
		scopeCurator=2;
		vehicleClass="Ammo";
		displayName="HLC M14 Supply Box";
		model="\A3\weapons_F\AmmoBoxes\Supplydrop";
		hiddenSelectionsTextures[]=
		{
			"hlc_core\tex\supplydrop\NIA_supplydrop_M14_co.paa"
		};
		icon="iconCrateWpns";
		transportMaxWeapons=25;
		transportMaxMagazines=250;
		class TransportMagazines
		{
			class _xx_hlc_50Rnd_762x51_B_M14
			{
				magazine="hlc_50Rnd_762x51_B_M14";
				count=30;
			};
			class _xx_hlc_20Rnd_762x51_T_M14
			{
				magazine="hlc_20Rnd_762x51_T_M14";
				count=30;
			};
			class _xx_hlc_20Rnd_762x51_B_M14
			{
				magazine="hlc_20Rnd_762x51_B_M14";
				count=30;
			};
			class _xx_hlc_20Rnd_762x51_barrier_M14
			{
				magazine="hlc_20Rnd_762x51_barrier_M14";
				count=30;
			};
			class _xx_hlc_20Rnd_762x51_mk316_M14
			{
				magazine="hlc_20Rnd_762x51_mk316_M14";
				count=30;
			};
		};
		class TransportWeapons
		{
			class _xx_hlc_rifle_M14
			{
				weapon="hlc_rifle_M14";
				count=10;
			};
			class _xx_hlc_rifle_M14_Bipod
			{
				weapon="hlc_rifle_M14_Bipod";
				count=10;
			};
			class _xx_hlc_rifle_M14_Rail
			{
				weapon="hlc_rifle_M14_Rail";
				count=10;
			};
			class _xx_hlc_rifle_M14_Bipod_Rail
			{
				weapon="hlc_rifle_M14_Bipod_Rail";
				count=10;
			};
			class _xx_hlc_rifle_M21
			{
				weapon="hlc_rifle_M21";
				count=10;
			};
			class _xx_hlc_rifle_M21_Rail
			{
				weapon="hlc_rifle_M21_Rail";
				count=10;
			};
			class _xx_hlc_rifle_m14dmr
			{
				weapon="hlc_rifle_m14dmr";
				count=10;
			};
			class _xx_hlc_rifle_M14dmr_Rail
			{
				weapon="hlc_rifle_M14dmr_Rail";
				count=10;
			};
			class _xx_hlc_rifle_m14sopmod
			{
				weapon="hlc_rifle_m14sopmod";
				count=10;
			};
		};
		class TransportItems
		{
			class _xx_hlc_optic_artel_m14
			{
				name="hlc_optic_artel_m14";
				count=10;
			};
			class _xx_hlc_optic_LRT_m14
			{
				name="hlc_optic_LRT_m14";
				count=10;
			};
			class _xx_hlc_optic_PVS4M14
			{
				name="hlc_optic_PVS4M14";
				count=10;
			};
			class _xx_optic_Holosight
			{
				name="optic_Holosight";
				count=10;
			};
			class _xx_optic_hamr
			{
				name="optic_hamr";
				count=10;
			};
			class _xx_optic_rco
			{
				name="optic_rco";
				count=10;
			};
			class _xx_optic_ACO_grn
			{
				name="optic_ACO_grn";
				count=10;
			};
		};
	};
	class Weapon_hlc_rifle_M14: Weapon_Base_F
	{
		dlc="Niarms_M14";
		scope=2;
		scopeCurator=2;
		displayName="M14";
		author="Toadie";
		editorCategory="EdCat_Weapons";
		editorSubcategory="EdSubcat_AssaultRifles";
		vehicleClass="WeaponsPrimary";
		class TransportWeapons
		{
			class hlc_rifle_M14
			{
				weapon="hlc_rifle_M14";
				count=1;
			};
		};
		class TransportMagazines
		{
			class hlc_20Rnd_762x51_B_M14
			{
				magazine="hlc_20Rnd_762x51_B_M14";
				count=1;
			};
		};
	};
	class Weapon_hlc_rifle_M14_Bipod: Weapon_Base_F
	{
		dlc="Niarms_M14";
		scope=2;
		scopeCurator=2;
		displayName="M14(Bipod)";
		author="Toadie";
		editorCategory="EdCat_Weapons";
		editorSubcategory="EdSubcat_AssaultRifles";
		vehicleClass="WeaponsPrimary";
		class TransportWeapons
		{
			class hlc_rifle_M14_Bipod
			{
				weapon="hlc_rifle_M14_Bipod";
				count=1;
			};
		};
		class TransportMagazines
		{
			class hlc_20Rnd_762x51_B_M14
			{
				magazine="hlc_20Rnd_762x51_B_M14";
				count=1;
			};
		};
	};
	class Weapon_hlc_rifle_M14_Rail: Weapon_Base_F
	{
		dlc="Niarms_M14";
		scope=2;
		scopeCurator=2;
		displayName="M14(RIS)";
		author="Toadie";
		editorCategory="EdCat_Weapons";
		editorSubcategory="EdSubcat_AssaultRifles";
		vehicleClass="WeaponsPrimary";
		class TransportWeapons
		{
			class hlc_rifle_M14_Rail
			{
				weapon="hlc_rifle_M14_Rail";
				count=1;
			};
		};
		class TransportMagazines
		{
			class hlc_20Rnd_762x51_B_M14
			{
				magazine="hlc_20Rnd_762x51_B_M14";
				count=1;
			};
		};
	};
	class Weapon_hlc_rifle_M14_Bipod_Rail: Weapon_Base_F
	{
		dlc="Niarms_M14";
		scope=2;
		scopeCurator=2;
		displayName="M14(Bipod / RIS)";
		author="Toadie";
		editorCategory="EdCat_Weapons";
		editorSubcategory="EdSubcat_AssaultRifles";
		vehicleClass="WeaponsPrimary";
		class TransportWeapons
		{
			class hlc_rifle_M14_Bipod_Rail
			{
				weapon="hlc_rifle_M14_Bipod_Rail";
				count=1;
			};
		};
		class TransportMagazines
		{
			class hlc_20Rnd_762x51_B_M14
			{
				magazine="hlc_20Rnd_762x51_B_M14";
				count=1;
			};
		};
	};
	class Weapon_hlc_rifle_M21: Weapon_Base_F
	{
		dlc="Niarms_M14";
		scope=2;
		scopeCurator=2;
		displayName="M21";
		author="Toadie";
		editorCategory="EdCat_Weapons";
		editorSubcategory="EdSubcat_SniperRifles";
		vehicleClass="WeaponsPrimary";
		class TransportWeapons
		{
			class hlc_rifle_M21
			{
				weapon="hlc_rifle_M21";
				count=1;
			};
		};
		class TransportMagazines
		{
			class hlc_20Rnd_762x51_mk316_M14
			{
				magazine="hlc_20Rnd_762x51_mk316_M14";
				count=1;
			};
		};
	};
	class Weapon_hlc_rifle_M21_Rail: Weapon_Base_F
	{
		dlc="Niarms_M14";
		scope=2;
		scopeCurator=2;
		displayName="M21(RIS)";
		author="Toadie";
		editorCategory="EdCat_Weapons";
		editorSubcategory="EdSubcat_SniperRifles";
		vehicleClass="WeaponsPrimary";
		class TransportWeapons
		{
			class hlc_rifle_M21_Rail
			{
				weapon="hlc_rifle_M21_Rail";
				count=1;
			};
		};
		class TransportMagazines
		{
			class hlc_20Rnd_762x51_mk316_M14
			{
				magazine="hlc_20Rnd_762x51_mk316_M14";
				count=1;
			};
		};
	};
	class Weapon_hlc_rifle_m14dmr: Weapon_Base_F
	{
		dlc="Niarms_M14";
		scope=2;
		scopeCurator=2;
		displayName="M14DMR";
		author="Toadie";
		editorCategory="EdCat_Weapons";
		editorSubcategory="EdSubcat_SniperRifles";
		vehicleClass="WeaponsPrimary";
		class TransportWeapons
		{
			class hlc_rifle_m14dmr
			{
				weapon="hlc_rifle_m14dmr";
				count=1;
			};
		};
		class TransportMagazines
		{
			class hlc_20Rnd_762x51_mk316_M14
			{
				magazine="hlc_20Rnd_762x51_mk316_M14";
				count=1;
			};
		};
	};
	class Weapon_hlc_rifle_M14dmr_Rail: Weapon_Base_F
	{
		dlc="Niarms_M14";
		scope=2;
		scopeCurator=2;
		displayName="M14DMR(RIS)";
		author="Toadie";
		editorCategory="EdCat_Weapons";
		editorSubcategory="EdSubcat_SniperRifles";
		vehicleClass="WeaponsPrimary";
		class TransportWeapons
		{
			class hlc_rifle_M14dmr_Rail
			{
				weapon="hlc_rifle_M14dmr_Rail";
				count=1;
			};
		};
		class TransportMagazines
		{
			class hlc_20Rnd_762x51_mk316_M14
			{
				magazine="hlc_20Rnd_762x51_mk316_M14";
				count=1;
			};
		};
	};
	class Weapon_hlc_rifle_m14sopmod: Weapon_Base_F
	{
		dlc="Niarms_M14";
		scope=2;
		scopeCurator=2;
		displayName="Troy M14 SOPMOD";
		author="Toadie";
		editorCategory="EdCat_Weapons";
		editorSubcategory="EdSubcat_AssaultRifles";
		vehicleClass="WeaponsPrimary";
		class TransportWeapons
		{
			class hlc_rifle_m14sopmod
			{
				weapon="hlc_rifle_m14sopmod";
				count=1;
			};
		};
		class TransportMagazines
		{
			class hlc_20Rnd_762x51_B_M14
			{
				magazine="hlc_20Rnd_762x51_B_M14";
				count=1;
			};
		};
	};
};
class CfgMagazines
{
	class 30Rnd_556x45_Stanag;
	class hlc_20Rnd_762x51_B_M14: 30Rnd_556x45_Stanag
	{
		dlc="Niarms_M14";
		author="Toadie";
		ammo="HLC_762x51_ball";
		count=20;
		descriptionshort="$STR_NIA_DESC_20Rnd_762x51_B_fal";
		displayname="$STR_NIA_20rnd_762x51_b_M14";
		model="hlc_wp_m14\mesh\magazine\magazine.p3d";
		modelSpecial="hlc_wp_m14\mesh\magazine\proxy\20rnd_762NATO_M14";
		modelSpecialIsProxy=1;
		initspeed=908.40002;
		lastroundstracer=1;
		picture="\hlc_wp_m14\tex\ui\m_m14_b_ca.paa";
		scope=2;
		tracersevery=0;
		mass=16.0012;
		displaynameshort="$STR_NIA_762NATO_EPR";
	};
	class hlc_20Rnd_762x51_mk316_M14: hlc_20Rnd_762x51_B_M14
	{
		dlc="Niarms_M14";
		author="Toadie";
		ammo="HLC_762x51_MK316_20in";
		descriptionshort="$STR_NIA_DESC_20Rnd_762x51_sblr_fal";
		displayname="$STR_NIA_20rnd_762x51_Mk316_M14";
		initspeed=731;
		lastroundstracer=1;
		picture="\hlc_wp_m14\tex\ui\m_m14_spr_ca.paa";
		tracersevery=0;
		mass=16.0012;
		displaynameshort="$STR_NIA_762NATO_SBLR";
	};
	class hlc_20Rnd_762x51_barrier_M14: hlc_20Rnd_762x51_B_M14
	{
		dlc="Niarms_M14";
		author="Toadie";
		ammo="HLC_762x51_MK316_20in";
		descriptionshort="$STR_NIA_DESC_20Rnd_762x51_sost_fal";
		displayname="$STR_NIA_20rnd_762x51_SOST_M14";
		initspeed=890.40002;
		lastroundstracer=1;
		picture="\hlc_wp_m14\tex\ui\m_m14_sost_ca.paa";
		tracersevery=0;
		mass=14.74552;
		displaynameshort="$STR_NIA_762NATO_SOST";
	};
	class hlc_20Rnd_762x51_T_M14: hlc_20Rnd_762x51_B_M14
	{
		dlc="Niarms_M14";
		author="Toadie";
		ammo="HLC_762x51_tracer";
		descriptionshort="$STR_NIA_DESC_20Rnd_762x51_T_fal";
		displayname="$STR_NIA_20rnd_762x51_Tracer_M14";
		initspeed=908.40002;
		lastroundstracer=1;
		picture="\hlc_wp_m14\tex\ui\m_m14_t_ca.paa";
		tracersevery=1;
		mass=15.328381;
		displaynameshort="$STR_NIA_762NATO_Tracer";
	};
	class hlc_20Rnd_762x51_Tdim_M14: hlc_20Rnd_762x51_B_M14
	{
		dlc="Niarms_M14";
		author="Toadie";
		ammo="HLC_B_762x51_Tracer_Dim";
		descriptionshort="$STR_NIA_DESC_20Rnd_762x51_Tdim_fal";
		displayname="$STR_NIA_20rnd_762x51_IRDIM_M14";
		initspeed=908.40002;
		lastroundstracer=1;
		picture="\hlc_wp_m14\tex\ui\m_m14_t_ca.paa";
		tracersevery=1;
		mass=15.328381;
		displaynameshort="$STR_NIA_762NATO_IRDIM";
	};
	class hlc_20Rnd_762x51_Mdim_M14: hlc_20Rnd_762x51_B_M14
	{
		dlc="Niarms_M14";
		author="Toadie";
		ammo="HLC_B_762x51_Tracer_Dim";
		descriptionshort="$STR_NIA_DESC_20Rnd_762x51_Mdim_fal";
		displayname="$STR_NIA_20rnd_762x51_MDim_M14";
		initspeed=908.40002;
		lastroundstracer=3;
		picture="\hlc_wp_m14\tex\ui\m_m14_m_ca.paa";
		tracersevery=4;
		mass=15.664607;
		displaynameshort="$STR_NIA_762NATO_MDim";
	};
	class hlc_50Rnd_762x51_B_M14: hlc_20Rnd_762x51_B_M14
	{
		dlc="Niarms_M14";
		author="Toadie";
		ammo="HLC_762x51_ball";
		count=50;
		descriptionshort="$STR_NIA_DESC_50Rnd_762x51_B_FAL";
		displayname="$STR_NIA_50Rnd_762x51_B_M14";
		model="hlc_wp_m14\mesh\magazine\magazine.p3d";
		modelSpecial="hlc_wp_m14\mesh\magazine\proxy\50rnd_762NATO_X14";
		modelSpecialIsProxy=1;
		initspeed=908.40002;
		lastroundstracer=3;
		picture="\hlc_core\tex\ui\ammo\m_x14_mixed_ca.paa";
		scope=2;
		tracersevery=0;
		mass=42.945999;
		displaynameshort="$STR_NIA_762NATO_EPR";
	};
	class hlc_50Rnd_762x51_T_M14: hlc_20Rnd_762x51_B_M14
	{
		dlc="Niarms_M14";
		author="Toadie";
		ammo="HLC_762x51_ball";
		count=50;
		descriptionshort="$STR_NIA_DESC_50Rnd_762x51_T_FAL";
		displayname="$STR_NIA_50rnd_762x51_T_M14";
		model="hlc_wp_m14\mesh\magazine\magazine.p3d";
		modelSpecial="hlc_wp_m14\mesh\magazine\proxy\50rnd_762NATO_X14";
		modelSpecialIsProxy=1;
		initspeed=908.40002;
		lastroundstracer=1;
		picture="\hlc_core\tex\ui\ammo\m_x14_mixed_ca.paa";
		scope=2;
		tracersevery=4;
		mass=41.26395;
		displaynameshort="$STR_NIA_762NATO_Tracer";
	};
	class hlc_50Rnd_762x51_M_M14: hlc_20Rnd_762x51_B_M14
	{
		dlc="Niarms_M14";
		author="Toadie";
		ammo="HLC_762x51_ball";
		count=50;
		descriptionshort="$STR_NIA_DESC_50Rnd_762x51_M_FAL";
		displayname="$STR_NIA_50rnd_762x51_M_M14";
		model="hlc_wp_m14\mesh\magazine\magazine.p3d";
		modelSpecial="hlc_wp_m14\mesh\magazine\proxy\50rnd_762NATO_X14";
		modelSpecialIsProxy=1;
		initspeed=908.40002;
		lastroundstracer=3;
		picture="\hlc_core\tex\ui\ammo\m_x14_mixed_ca.paa";
		scope=2;
		tracersevery=4;
		mass=42.104519;
		displaynameshort="$STR_NIA_762NATO_M";
	};
	class hlc_50Rnd_762x51_TDIM_M14: hlc_20Rnd_762x51_B_M14
	{
		dlc="Niarms_M14";
		author="Toadie";
		ammo="HLC_B_762x51_Tracer_Dim";
		count=50;
		descriptionshort="$STR_NIA_DESC_50Rnd_762x51_Tdim_FAL";
		displayname="$STR_NIA_50Rnd_762x51_Tdim_M14";
		model="hlc_wp_m14\mesh\magazine\magazine.p3d";
		modelSpecial="hlc_wp_m14\mesh\magazine\proxy\50rnd_762NATO_X14";
		modelSpecialIsProxy=1;
		initspeed=908.40002;
		lastroundstracer=3;
		picture="\hlc_core\tex\ui\ammo\m_x14_mixed_ca.paa";
		scope=2;
		tracersevery=1;
		mass=41.26395;
		displaynameshort="$STR_NIA_762NATO_IRDIM";
	};
	class hlc_50Rnd_762x51_MDIM_M14: hlc_20Rnd_762x51_B_M14
	{
		dlc="Niarms_M14";
		author="Toadie";
		ammo="HLC_B_762x51_Tracer_Dim";
		count=50;
		descriptionshort="$STR_NIA_DESC_50Rnd_762x51_Mdim_FAL";
		displayname="$STR_NIA_50rnd_762x51_MDIM_M14";
		model="hlc_wp_m14\mesh\magazine\magazine.p3d";
		modelSpecial="hlc_wp_m14\mesh\magazine\proxy\50rnd_762NATO_X14";
		modelSpecialIsProxy=1;
		initspeed=908.40002;
		lastroundstracer=3;
		picture="\hlc_core\tex\ui\ammo\m_x14_mixed_ca.paa";
		scope=2;
		tracersevery=4;
		mass=42.104519;
		displaynameshort="$STR_NIA_762NATO_MDim";
	};
	class hlc_20Rnd_762x51_S_M14: hlc_20Rnd_762x51_B_M14
	{
		dlc="Niarms_M14";
		author="Toadie";
		ammo="HLC_762x51_BTSub";
		descriptionshort="$STR_NIA_DESC_20Rnd_762x51_s_fal";
		displayname="$STR_NIA_20rnd_762x51_Subsonic_M14";
		initspeed=325;
		lastroundstracer=0;
		picture="\hlc_wp_m14\tex\ui\m_m14_s_ca.paa";
		tracersevery=0;
		mass=17.267605;
		displaynameshort="$STR_NIA_762NATO_Subsonic";
	};
};
class CfgMagazineWells
{
	class CBA_762x51_M14
	{
		NIA_mags[]=
		{
			"hlc_20Rnd_762x51_B_M14",
			"hlc_20Rnd_762x51_Barrier_M14",
			"hlc_20Rnd_762x51_mk316_M14",
			"hlc_20Rnd_762x51_T_M14",
			"hlc_20Rnd_762x51_Mdim_M14",
			"hlc_20Rnd_762x51_Tdim_M14",
			"hlc_20Rnd_762x51_S_M14",
			"hlc_50Rnd_762x51_B_M14",
			"hlc_50Rnd_762x51_MDIM_M14",
			"hlc_50Rnd_762x51_TDIM_M14",
			"hlc_50Rnd_762x51_M_M14",
			"hlc_50Rnd_762x51_T_M14"
		};
	};
};
class CfgWeapons
{
	class ItemCore;
	class InventoryOpticsItem_Base_F;
	class optic_dms;
	class optic_arco;
	class hlc_optic_artel_m14: optic_dms
	{
		ACE_scopeHeightAboveRail=4.5;
		author="Millenia, Toadie";
		dlc="Niarms_M14";
		descriptionshort="$STR_NIA_ARTEL_DESC";
		weaponInfoType="RscWeaponZeroing";
		model="\hlc_wp_M14\mesh\ar-tel\scope.p3d";
		picture="\hlc_wp_M14\tex\ui\gear_artel_x_ca";
		displayname="$STR_NIA_optic_ARTEL";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			opticType=2;
			mass=12.099;
			modelOptics="\hlc_wp_M14\mesh\ar-tel\artel_reticle.p3d";
			class OpticsModes
			{
				class Snip
				{
					opticsID=1;
					useModelOptics=1;
					opticsPPEffects[]=
					{
						"OpticsCHAbera2",
						"OpticsBlur3"
					};
					opticsZoomMax=0.082999997;
					opticsZoomMin=0.082999997;
					opticsZoomInit=0.082999997;
					discreteDistance[]={300};
					discreteDistanceInitIndex=0;
					distanceZoomMin=300;
					distanceZoomMax=900;
					memoryPointCamera="eye";
					modelOptics[]=
					{
						"\hlc_wp_M14\mesh\ar-tel\artel_reticle.p3d"
					};
					visionMode[]=
					{
						"Normal"
					};
					opticsFlare=1;
					opticsDisablePeripherialVision=1;
					cameraDir="";
				};
				class Snip2: Snip
				{
					opticsID=2;
					opticsZoomMax=0.062249999;
					opticsZoomMin=0.062249999;
					opticsZoomInit=0.062249999;
					discreteDistance[]={400};
					discreteDistanceInitIndex=0;
					modelOptics[]=
					{
						"\hlc_wp_M14\mesh\ar-tel\artel_reticle_4x.p3d"
					};
				};
				class Snip3: Snip
				{
					opticsID=3;
					opticsZoomMax=0.049800001;
					opticsZoomMin=0.049800001;
					opticsZoomInit=0.049800001;
					discreteDistance[]={500};
					discreteDistanceInitIndex=0;
					modelOptics[]=
					{
						"\hlc_wp_M14\mesh\ar-tel\artel_reticle_5x.p3d"
					};
				};
				class Snip4: Snip
				{
					opticsID=4;
					opticsZoomMax=0.041499998;
					opticsZoomMin=0.041499998;
					opticsZoomInit=0.041499998;
					discreteDistance[]={600};
					discreteDistanceInitIndex=0;
					modelOptics[]=
					{
						"\hlc_wp_M14\mesh\ar-tel\artel_reticle_6x.p3d"
					};
				};
				class Snip45: Snip
				{
					opticsID=5;
					opticsZoomMax=0.035500001;
					opticsZoomMin=0.035500001;
					opticsZoomInit=0.035500001;
					discreteDistance[]={700};
					discreteDistanceInitIndex=0;
					modelOptics[]=
					{
						"\hlc_wp_M14\mesh\ar-tel\artel_reticle_7x.p3d"
					};
				};
				class Snip6: Snip
				{
					opticsID=6;
					opticsZoomMax=0.031125;
					opticsZoomMin=0.031125;
					opticsZoomInit=0.031125;
					discreteDistance[]={800};
					discreteDistanceInitIndex=0;
					modelOptics[]=
					{
						"\hlc_wp_M14\mesh\ar-tel\artel_reticle_8x.p3d"
					};
				};
				class Snip7: Snip
				{
					opticsID=7;
					opticsZoomMax=0.027775999;
					opticsZoomMin=0.027775999;
					opticsZoomInit=0.027775999;
					discreteDistance[]={900};
					discreteDistanceInitIndex=0;
					modelOptics[]=
					{
						"\hlc_wp_M14\mesh\ar-tel\artel_reticle_9x.p3d"
					};
				};
			};
		};
		inertia=0.039999999;
	};
	class hlc_optic_PVS4base: optic_arco
	{
		class ItemInfo;
	};
	class hlc_optic_PVS4M14: hlc_optic_PVS4base
	{
		ACE_scopeHeightAboveRail=8.5;
		author="Bohemia Interactive, Toadie";
		displayname="$STR_NIA_optic_ANPVS4M14";
		picture="\hlc_wp_M14\tex\ui\gear_PVS4_x_ca";
		model="\hlc_wp_M14\mesh\PVS4\scope.p3d";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			opticType=1;
			mass=49.599998;
			modelOptics="hlc_core\mesh\accessories\sights\reticles\NV_anpvs4_optic";
			class OpticsModes
			{
				class Snip
				{
					useModelOptics=1;
					opticsPPEffects[]={};
					opticsZoomMin=0.0625;
					opticsZoomMax=0.0625;
					opticsZoomInit=0.0625;
					discreteDistance[]={200,300,400,500,600};
					discreteDistanceInitIndex=1;
					distanceZoomMin=300;
					distanceZoomMax=600;
					memoryPointCamera="eye";
					modelOptics[]=
					{
						"hlc_core\mesh\accessories\sights\reticles\NV_anpvs4_optic"
					};
					visionMode[]=
					{
						"NVG"
					};
					opticsFlare=1;
					opticsid=1;
					opticsDisablePeripherialVision=1;
					cameraDir="";
				};
				class Snip2: Snip
				{
					modelOptics[]=
					{
						"hlc_core\mesh\accessories\sights\reticles\NV_pvs4-daysight"
					};
					opticsid=2;
				};
				class Kolimator
				{
					cameradir="";
					distancezoommax=100;
					distancezoommin=100;
					memorypointcamera="AOTT";
					opticsdisableperipherialvision=0;
					opticsflare=0;
					opticsid=3;
					opticsppeffects[]={};
					opticsZoomMin=0.25;
					opticsZoomMax=1.25;
					opticsZoomInit=0.75;
					usemodeloptics=0;
					visionmode[]={};
					discreteDistance[]={100};
					discreteDistanceInitIndex=0;
				};
			};
		};
		inertia=0.22;
	};
	class optic_LRPS: ItemCore
	{
		class ItemInfo;
	};
	class hlc_optic_LeupoldM3A: optic_LRPS
	{
		class ItemInfo;
	};
	class hlc_optic_LRT_m14: hlc_optic_LeupoldM3A
	{
		dlc="Niarms_M14";
		author="Toadie";
		descriptionshort="$STR_NIA_LuepoldM3A_DESC";
		model="\hlc_wp_M14\mesh\leupold lrt\scope.p3d";
		picture="\hlc_wp_M14\tex\ui\gear_lrt_x_ca";
		displayname="$STR_NIA_optic_M3a_M14";
		class ItemInfo: ItemInfo
		{
			mass=17.287399;
		};
		ACE_scopeHeightAboveRail=5.5;
	};
	class muzzle_snds_H;
	class hlc_muzzle_snds_M14: muzzle_snds_H
	{
		scope=1;
		author="Toadie";
		displayName="M14 Suppressor";
		picture="\A3\weapons_F\Data\UI\gear_acca_snds_h_CA.paa";
		model="hlc_wp_m14\mesh\SUP_308M14\hk308";
	};
	class Rifle;
	class Rifle_Base_F: Rifle
	{
		class WeaponSlotsInfo;
		class GunParticles;
	};
	class hlc_M14_base: Rifle_Base_F
	{
		dlc="Niarms_M14";
		deployedpivot="deploypivot";
		hasBipod=0;
		recoil="recoil_ebr";
		scope=1;
		AB_barrelTwist=12;
		AB_barrelLength=22;
		ACE_barrelTwist=304.79999;
		ACE_barrelLength=558.79999;
		ACE_railHeightAboveBore=0;
		aiDispersionCoefX=6;
		aiDispersionCoefY=8;
		magazines[]=
		{
			"hlc_20Rnd_762x51_B_M14",
			"hlc_20Rnd_762x51_Barrier_M14",
			"hlc_20Rnd_762x51_mk316_M14",
			"hlc_20Rnd_762x51_T_M14",
			"hlc_20Rnd_762x51_Mdim_M14",
			"hlc_20Rnd_762x51_Tdim_M14",
			"hlc_20Rnd_762x51_S_M14",
			"hlc_50Rnd_762x51_B_M14",
			"hlc_50Rnd_762x51_MDIM_M14",
			"hlc_50Rnd_762x51_TDIM_M14",
			"hlc_50Rnd_762x51_M_M14",
			"hlc_50Rnd_762x51_T_M14",
			"20Rnd_762x51_Mag"
		};
		magazineWell[]=
		{
			"CBA_762x51_M14"
		};
		maxRecoilSway=0.0125;
		swayDecaySpeed=1.25;
		initspeed=-1.05;
		class GunParticles: GunParticles
		{
			class SecondEffect
			{
				positionName="Nabojnicestart";
				directionName="Nabojniceend";
				effectName="CaselessAmmoCloud";
			};
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: asdg_MuzzleSlot_762
			{
				iconPosition[]={0,0};
				iconScale=1;
				iconPicture="\A3\Weapons_F\Data\clear_empty.paa";
				iconPinPoint="Left";
				class compatibleItems: compatibleItems
				{
					hlc_muzzle_snds_M14=1;
				};
			};
			class CowsSlot: niarms_m14_OpticRail
			{
				iconPosition[]={0,0};
				iconScale=1;
				iconPicture="\A3\Weapons_F\Data\clear_empty.paa";
				iconPinPoint="Left";
			};
			class PointerSlot
			{
				iconPosition[]={0,0};
				iconScale=1;
				iconPicture="\A3\Weapons_F\Data\clear_empty.paa";
				iconPinPoint="Left";
			};
		};
		descriptionShort="Assault rifle<br/>Caliber: 5.45mm";
		dexterity=1.8;
		bullet1[]=
		{
			"A3\sounds_f\weapons\shells\7_62\metal_762_01",
			0.39810699,
			1,
			15
		};
		bullet10[]=
		{
			"A3\sounds_f\weapons\shells\7_62\grass_762_02",
			0.281838,
			1,
			15
		};
		bullet11[]=
		{
			"A3\sounds_f\weapons\shells\7_62\grass_762_03",
			0.281838,
			1,
			15
		};
		bullet12[]=
		{
			"A3\sounds_f\weapons\shells\7_62\grass_762_04",
			0.281838,
			1,
			15
		};
		bullet2[]=
		{
			"A3\sounds_f\weapons\shells\7_62\metal_762_02",
			0.39810699,
			1,
			15
		};
		bullet3[]=
		{
			"A3\sounds_f\weapons\shells\7_62\metal_762_03",
			0.39810699,
			1,
			15
		};
		bullet4[]=
		{
			"A3\sounds_f\weapons\shells\7_62\metal_762_04",
			0.39810699,
			1,
			15
		};
		bullet5[]=
		{
			"A3\sounds_f\weapons\shells\7_62\dirt_762_01",
			0.281838,
			1,
			15
		};
		bullet6[]=
		{
			"A3\sounds_f\weapons\shells\7_62\dirt_762_02",
			0.281838,
			1,
			15
		};
		bullet7[]=
		{
			"A3\sounds_f\weapons\shells\7_62\dirt_762_03",
			0.281838,
			1,
			15
		};
		bullet8[]=
		{
			"A3\sounds_f\weapons\shells\7_62\dirt_762_04",
			0.281838,
			1,
			15
		};
		bullet9[]=
		{
			"A3\sounds_f\weapons\shells\7_62\grass_762_01",
			0.281838,
			1,
			15
		};
		soundBullet[]=
		{
			"bullet1",
			0.082999997,
			"bullet2",
			0.082999997,
			"bullet3",
			0.082999997,
			"bullet4",
			0.082999997,
			"bullet5",
			0.082999997,
			"bullet6",
			0.082999997,
			"bullet7",
			0.082999997,
			"bullet8",
			0.082999997,
			"bullet9",
			0.082999997,
			"bullet10",
			0.082999997,
			"bullet11",
			0.082999997,
			"bullet12",
			0.082999997
		};
		modes[]=
		{
			"Single",
			"FullAuto",
			"AI_Single",
			"AI_FullAuto",
			"AI_Burst_close",
			"AI_Single_optics1",
			"AI_Single_optics2",
			"AI_SemiAuto"
		};
		class Single: Mode_SemiAuto
		{
			sounds[]=
			{
				"StandardSound",
				"SilencedSound"
			};
			class BaseSoundModeType
			{
				weaponSoundEffect="DefaultRifle";
				closure1[]=
				{
					"\hlc_wp_m14\snd\m14_first",
					1,
					1,
					10
				};
				closure2[]=
				{
					"\hlc_wp_m14\snd\m14_first",
					1,
					1,
					10
				};
				soundClosure[]=
				{
					"closure1",
					0.5,
					"closure2",
					0.5
				};
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"NIA_M14_NEW_Shot_SoundSet",
					"M14_tail_SoundSet"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"M14_silencerShot_SoundSet",
					"M14_silencerTail_SoundSet"
				};
			};
			reloadTime=0.079999998;
			dispersion=0.00069999998;
			aiRateOfFire=2;
			aiRateOfFireDistance=300;
			aiRateOfFireDispersion=2;
			minRange=0;
			minRangeProbab=0.89999998;
			midRange=150;
			midRangeProbab=0.5;
			maxRange=500;
			maxRangeProbab=0.1;
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[]=
			{
				"StandardSound",
				"SilencedSound"
			};
			class BaseSoundModeType
			{
				weaponSoundEffect="DefaultRifle";
				closure1[]=
				{
					"\hlc_wp_m14\snd\m14_first",
					1,
					1,
					10
				};
				closure2[]=
				{
					"\hlc_wp_m14\snd\m14_first",
					1,
					1,
					10
				};
				soundClosure[]=
				{
					"closure1",
					0.5,
					"closure2",
					0.5
				};
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"NIA_M14_NEW_Shot_SoundSet",
					"M14_tail_SoundSet"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"M14_silencerShot_SoundSet",
					"M14_silencerTail_SoundSet"
				};
			};
			reloadTime=0.081;
			dispersion=0.00089999998;
			aiRateOfFire=0.1;
			aiRateOfFireDistance=50;
			minRange=0;
			minRangeProbab=0.89999998;
			midRange=1;
			midRangeProbab=0.80000001;
			maxRange=5;
			maxRangeProbab=0.1;
		};
		class AI_Single: Single
		{
			showToPlayer=0;
			aiRateOfFire=2;
			aiRateOfFireDistance=350;
			aiRateOfFireDispersion=2;
			minRange=15;
			minRangeProbab=0.80000001;
			midRange=150;
			midRangeProbab=0.5;
			maxRange=500;
			maxRangeProbab=0.1;
		};
		class AI_FullAuto: FullAuto
		{
			showToPlayer=0;
			aiRateOfFire=0.1;
			aiRateOfFireDistance=50;
			minRange=0;
			minRangeProbab=0.89999998;
			midRange=1;
			midRangeProbab=0.80000001;
			maxRange=5;
			maxRangeProbab=0.1;
		};
		class AI_Burst_close: FullAuto
		{
			showToPlayer=0;
			aiBurstTerminable=1;
			burst=4;
			aiRateOfFire=1;
			aiRateOfFireDistance=100;
			aiRateOfFireDispersion=0.5;
			minRange=5;
			minRangeProbab=0.80000001;
			midRange=10;
			midRangeProbab=0.69999999;
			maxRange=15;
			maxRangeProbab=0.2;
		};
		class AI_Single_optics1: Single
		{
			showToPlayer=0;
			requiredOpticType=1;
			aiRateOfFire=3;
			aiRateOfFireDistance=550;
			aiRateOfFireDispersion=3;
			minRange=150;
			minRangeProbab=0.89999998;
			midRange=300;
			midRangeProbab=0.80000001;
			maxRange=800;
			maxRangeProbab=0.1;
		};
		class AI_Single_optics2: AI_Single_optics1
		{
			requiredOpticType=2;
			aiRateOfFire=6;
			aiRateOfFireDistance=1200;
			aiRateOfFireDispersion=4;
			minRange=150;
			minRangeProbab=0.69999999;
			midRange=500;
			midRangeProbab=0.80000001;
			maxRange=1200;
			maxRangeProbab=0.050000001;
		};
		class AI_SemiAuto: Single
		{
			showToPlayer=0;
			aiRateOfFire=2;
			aiRateOfFireDistance=300;
			aiRateOfFireDispersion=2;
			minRange=0;
			minRangeProbab=0.89999998;
			midRange=150;
			midRangeProbab=0.5;
			maxRange=500;
			maxRangeProbab=0.1;
		};
		drysound[]=
		{
			"hlc_wp_m14\snd\soundshaders\m14_dry",
			1,
			1,
			10
		};
		reloadmagazinesound[]=
		{
			"hlc_wp_M14\snd\soundshaders\m14_reload.ogg",
			0.69999999,
			1,
			18
		};
		reloadaction="HLC_GestureReload_M14";
		UiPicture="\A3\weapons_f\data\UI\icon_regular_CA.paa";
	};
	class hlc_rifle_M14: hlc_M14_base
	{
		author="An Aggressive Napkin, Millenia, Toadie";
		scope=2;
		recoil="recoil_dmr_06";
		model="\hlc_wp_M14\mesh\m14\M14.p3d";
		hiddenSelections[]=
		{
			"Main",
			"rail"
		};
		hiddenSelectionsTextures[]=
		{
			"hlc_wp_m14\tex\m14\a1_m14_co.paa",
			"hlc_wp_m14\tex\bis_dmr\us_dmr_co.paa"
		};
		descriptionShort="$STR_NIA_M14_DESC";
		picture="\hlc_wp_M14\tex\ui\gear_m14_x_ca";
		displayName="$STR_NIA_rifle_M14";
		dexterity=1.3144112;
		aimTransitionSpeed=0.92008781;
		inertia=0.41;
		magazineReloadSwitchPhase="(40 / 125)";
		cameradir="aim_point";
		discretedistance[]={100,200,300,400,500,600};
		discretedistanceinitindex=0;
		discreteDistanceCameraPoint[]=
		{
			"eye",
			"eye2",
			"eye3",
			"eye4",
			"eye5",
			"eye6"
		};
		bg_bipod=0;
		handanim[]=
		{
			"OFP2_ManSkeleton",
			"\hlc_wp_m14\gesture\newgesture\gesture_m14.rtm"
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=89.379997;
			class CharmSlot_nia_charms_slot
			{
				iconPosition[]={0,0};
				iconScale=1;
				iconPicture="\A3\Weapons_F\Data\clear_empty.paa";
				iconPinPoint="Left";
			};
			class PointerSlot: nia_Barrelmount_Slot
			{
				iconPosition[]={0,0};
				iconScale=1;
				iconPicture="\A3\Weapons_F\Data\clear_empty.paa";
				iconPinPoint="Left";
			};
		};
		class Single: Single
		{
			dispersion=0.00046544001;
		};
		class FullAuto: FullAuto
		{
			dispersion=0.00053816504;
		};
		class ItemInfo
		{
			priority=1;
			RMBhint="XMC";
			onHoverText="TODO XMC DSS";
		};
		class Library
		{
			libTextDesc="Springfield Armory M14";
		};
		class nia_magSwitch
		{
			hlc_50Rnd_762x51_B_M14="hlc_rifle_M14_XMAG";
			hlc_50Rnd_762x51_T_M14="hlc_rifle_M14_XMAG";
			hlc_50Rnd_762x51_M_M14="hlc_rifle_M14_XMAG";
			hlc_50Rnd_762x51_TDIM_M14="hlc_rifle_M14_XMAG";
			hlc_50rnd_762x51_MDIM_M14="hlc_rifle_M14_XMAG";
			default="hlc_rifle_M14";
		};
		baseWeapon="hlc_rifle_M14";
		class Eventhandlers
		{
			class NIArms_Alt_Reloads
			{
				reload="_this call NIArms_altReloads_fnc_onReload";
				Reloaded="_this call NIArms_altReloads_fnc_afterReload";
			};
		};
		class NIArms_Alt_Reloads
		{
			class hlc_rifle_M14
			{
				condition="(%1 == 0 )";
			};
			class hlc_rifle_M14_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_rifle_M14_TacReload: hlc_rifle_M14
	{
		magazineReloadSwitchPhase="(40 / 92)";
		scopeArsenal=0;
		reloadmagazinesound[]=
		{
			"hlc_wp_M14\snd\soundshaders\m14_reload_tactical.ogg",
			0.69999999,
			1,
			18
		};
		reloadAction="HLC_GestureReload_M14_Tactical";
		model="\hlc_wp_M14\mesh\m14\M14_TacReload.p3d";
	};
	class hlc_rifle_M14_XMAG: hlc_rifle_M14
	{
		magazineReloadSwitchPhase="(40 / 125)";
		scopeArsenal=0;
		dexterity=0.90261364;
		aimTransitionSpeed=0.63182956;
		inertia=0.72000003;
		reloadmagazinesound[]=
		{
			"hlc_wp_M14\snd\soundshaders\m14_reload_X14.ogg",
			0.69999999,
			1,
			18
		};
		reloadaction="HLC_GestureReload_M14_X14";
		model="\hlc_wp_M14\mesh\m14\M14_X14.p3d";
		class Eventhandlers
		{
			class NIArms_Alt_Reloads
			{
				reload="_this call NIArms_altReloads_fnc_onReload";
				Reloaded="_this call NIArms_altReloads_fnc_afterReload";
			};
		};
		class NIArms_Alt_Reloads
		{
			class hlc_rifle_M14_XMAG
			{
				condition="(%1 == 0 )";
			};
			class hlc_rifle_M14_XMAG_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_rifle_M14_XMAG_TacReload: hlc_rifle_M14_XMAG
	{
		magazineReloadSwitchPhase="(40 / 92)";
		scopeArsenal=0;
		reloadmagazinesound[]=
		{
			"hlc_wp_M14\snd\soundshaders\m14_reload_X14_tactical.ogg",
			0.69999999,
			1,
			18
		};
		reloadAction="HLC_GestureReload_M14_X14_Tactical";
		model="\hlc_wp_M14\mesh\m14\M14_X14_TacReload.p3d";
	};
	class hlc_rifle_M14_Bipod: hlc_rifle_M14
	{
		model="\hlc_wp_M14\mesh\m14\M14_bip.p3d";
		displayName="$STR_NIA_rifle_M14Bipod";
		dexterity=1.2501475;
		aimTransitionSpeed=0.87510324;
		inertia=0.43000001;
		author="An Aggressive Napkin, Millenia, Toadie";
		maxZeroing=1600;
		hasBipod=1;
		soundBipodDown[]=
		{
			"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_AAF_down",
			"db - 3",
			1,
			20
		};
		soundBipodUp[]=
		{
			"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_AAF_up",
			"db - 3",
			1,
			20
		};
		scope=2;
		agm_bipod=1;
		cse_bipod=1;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=95.985397;
		};
		class nia_magSwitch
		{
			hlc_50Rnd_762x51_B_M14="hlc_rifle_M14_Bipod_XMAG";
			hlc_50Rnd_762x51_T_M14="hlc_rifle_M14_Bipod_XMAG";
			hlc_50Rnd_762x51_M_M14="hlc_rifle_M14_Bipod_XMAG";
			hlc_50Rnd_762x51_TDIM_M14="hlc_rifle_M14_Bipod_XMAG";
			hlc_50rnd_762x51_MDIM_M14="hlc_rifle_M14_Bipod_XMAG";
			default="hlc_rifle_M14_Bipod";
		};
		baseWeapon="hlc_rifle_M14_Bipod";
		class Eventhandlers
		{
			class NIArms_Alt_Reloads
			{
				reload="_this call NIArms_altReloads_fnc_onReload";
				Reloaded="_this call NIArms_altReloads_fnc_afterReload";
			};
		};
		class NIArms_Alt_Reloads
		{
			class hlc_rifle_M14_Bipod
			{
				condition="(%1 == 0 )";
			};
			class hlc_rifle_M14_Bipod_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_rifle_M14_Bipod_TacReload: hlc_rifle_M14_Bipod
	{
		magazineReloadSwitchPhase="(40 / 92)";
		scopeArsenal=0;
		reloadmagazinesound[]=
		{
			"hlc_wp_M14\snd\soundshaders\m14_reload_tactical.ogg",
			0.69999999,
			1,
			18
		};
		reloadAction="HLC_GestureReload_M14_Tactical";
		model="\hlc_wp_M14\mesh\m14\M14_Bip_TacReload.p3d";
	};
	class hlc_rifle_M14_Bipod_XMAG: hlc_rifle_M14_Bipod
	{
		magazineReloadSwitchPhase="(40 / 125)";
		scopeArsenal=0;
		dexterity=0.90261364;
		aimTransitionSpeed=0.63182956;
		inertia=0.72000003;
		reloadmagazinesound[]=
		{
			"hlc_wp_M14\snd\soundshaders\m14_reload_X14.ogg",
			0.69999999,
			1,
			18
		};
		reloadaction="HLC_GestureReload_M14_X14";
		model="\hlc_wp_M14\mesh\m14\M14_bip_X14.p3d";
		class Eventhandlers
		{
			class NIArms_Alt_Reloads
			{
				reload="_this call NIArms_altReloads_fnc_onReload";
				Reloaded="_this call NIArms_altReloads_fnc_afterReload";
			};
		};
		class NIArms_Alt_Reloads
		{
			class hlc_rifle_M14_Bipod_XMAG
			{
				condition="(%1 == 0 )";
			};
			class hlc_rifle_M14_Bipod_XMAG_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_rifle_M14_Bipod_XMAG_TacReload: hlc_rifle_M14_Bipod_XMAG
	{
		magazineReloadSwitchPhase="(40 / 92)";
		scopeArsenal=0;
		reloadmagazinesound[]=
		{
			"hlc_wp_M14\snd\soundshaders\m14_reload_X14_tactical.ogg",
			0.69999999,
			1,
			18
		};
		reloadAction="HLC_GestureReload_M14_X14_Tactical";
		model="\hlc_wp_M14\mesh\m14\M14_bip_TacReload.p3d";
	};
	class hlc_rifle_M14_Rail: hlc_rifle_M14
	{
		ACE_railHeightAboveBore=2.4000001;
		model="\hlc_wp_M14\mesh\m14\M14_railed.p3d";
		displayName="$STR_NIA_rifle_M14Rail";
		dexterity=1.2520791;
		aimTransitionSpeed=0.87645537;
		inertia=0.43000001;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=92.889801;
			class CowsSlot: asdg_OpticRail1913_short
			{
				iconPosition[]={0,0};
				iconScale=1;
				iconPicture="\A3\Weapons_F\Data\clear_empty.paa";
				iconPinPoint="Left";
			};
		};
		class nia_magSwitch
		{
			hlc_50Rnd_762x51_B_M14="hlc_rifle_M14_Rail_XMAG";
			hlc_50Rnd_762x51_T_M14="hlc_rifle_M14_Rail_XMAG";
			hlc_50Rnd_762x51_M_M14="hlc_rifle_M14_Rail_XMAG";
			hlc_50Rnd_762x51_TDIM_M14="hlc_rifle_M14_Rail_XMAG";
			hlc_50rnd_762x51_MDIM_M14="hlc_rifle_M14_Rail_XMAG";
			default="hlc_rifle_M14_Rail";
		};
		baseWeapon="hlc_rifle_M14_Rail";
		class Eventhandlers
		{
			class NIArms_Alt_Reloads
			{
				reload="_this call NIArms_altReloads_fnc_onReload";
				Reloaded="_this call NIArms_altReloads_fnc_afterReload";
			};
		};
		class NIArms_Alt_Reloads
		{
			class hlc_rifle_M14_Rail
			{
				condition="(%1 == 0 )";
			};
			class hlc_rifle_M14_Rail_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_rifle_M14_Rail_TacReload: hlc_rifle_M14_Rail
	{
		magazineReloadSwitchPhase="(40 / 92)";
		scopeArsenal=0;
		reloadmagazinesound[]=
		{
			"hlc_wp_M14\snd\soundshaders\m14_reload_tactical.ogg",
			0.69999999,
			1,
			18
		};
		reloadAction="HLC_GestureReload_M14_Tactical";
		model="\hlc_wp_M14\mesh\m14\M14_railed_TacReload.p3d";
	};
	class hlc_rifle_M14_Rail_XMAG: hlc_rifle_M14_Rail
	{
		magazineReloadSwitchPhase="(40 / 125)";
		scopeArsenal=0;
		dexterity=0.90261364;
		aimTransitionSpeed=0.63182956;
		inertia=0.72000003;
		reloadmagazinesound[]=
		{
			"hlc_wp_M14\snd\soundshaders\m14_reload_X14.ogg",
			0.69999999,
			1,
			18
		};
		reloadaction="HLC_GestureReload_M14_X14";
		model="\hlc_wp_M14\mesh\m14\M14_railed_X14.p3d";
		class Eventhandlers
		{
			class NIArms_Alt_Reloads
			{
				reload="_this call NIArms_altReloads_fnc_onReload";
				Reloaded="_this call NIArms_altReloads_fnc_afterReload";
			};
		};
		class NIArms_Alt_Reloads
		{
			class hlc_rifle_M14_Rail_XMAG
			{
				condition="(%1 == 0 )";
			};
			class hlc_rifle_M14_Rail_XMAG_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_rifle_M14_Rail_XMAG_TacReload: hlc_rifle_M14_Rail_XMAG
	{
		magazineReloadSwitchPhase="(40 / 92)";
		scopeArsenal=0;
		reloadmagazinesound[]=
		{
			"hlc_wp_M14\snd\soundshaders\m14_reload_X14_tactical.ogg",
			0.69999999,
			1,
			18
		};
		reloadAction="HLC_GestureReload_M14_X14_Tactical";
		model="\hlc_wp_M14\mesh\m14\M14_railed_X14_TacReload.p3d";
	};
	class hlc_rifle_M14_Bipod_Rail: hlc_rifle_M14
	{
		ACE_railHeightAboveBore=2.4000001;
		model="\hlc_wp_M14\mesh\m14\M14_biprail.p3d";
		displayName="$STR_NIA_rifle_M14BipodRail";
		dexterity=1.2214677;
		aimTransitionSpeed=0.85502738;
		inertia=0.45640001;
		author="An Aggressive Napkin, Millenia, Toadie";
		maxZeroing=1600;
		hasBipod=1;
		soundBipodDown[]=
		{
			"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_AAF_down",
			"db - 3",
			1,
			20
		};
		soundBipodUp[]=
		{
			"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_AAF_up",
			"db - 3",
			1,
			20
		};
		scope=2;
		agm_bipod=1;
		cse_bipod=1;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=99.495201;
			class CowsSlot: asdg_OpticRail1913_short
			{
			};
		};
		hiddenSelections[]=
		{
			"Main",
			"Bipod",
			"rail"
		};
		hiddenSelectionsTextures[]=
		{
			"hlc_wp_m14\tex\m14\a1_m14_co.paa",
			"hlc_core\tex\acc\bipod\harris\harris1a2_co.paa",
			"hlc_wp_m14\tex\bis_dmr\us_dmr_co.paa"
		};
		class nia_magSwitch
		{
			hlc_50Rnd_762x51_B_M14="hlc_rifle_M14_Bipod_Rail_XMAG";
			hlc_50Rnd_762x51_T_M14="hlc_rifle_M14_Bipod_Rail_XMAG";
			hlc_50Rnd_762x51_M_M14="hlc_rifle_M14_Bipod_Rail_XMAG";
			hlc_50Rnd_762x51_TDIM_M14="hlc_rifle_M14_Bipod_Rail_XMAG";
			hlc_50rnd_762x51_MDIM_M14="hlc_rifle_M14_Bipod_Rail_XMAG";
			default="hlc_rifle_M14_Bipod_Rail";
		};
		baseWeapon="hlc_rifle_M14_Bipod_Rail";
		class Eventhandlers
		{
			class NIArms_Alt_Reloads
			{
				reload="_this call NIArms_altReloads_fnc_onReload";
				Reloaded="_this call NIArms_altReloads_fnc_afterReload";
			};
		};
		class NIArms_Alt_Reloads
		{
			class hlc_rifle_M14_Bipod_Rail
			{
				condition="(%1 == 0 )";
			};
			class hlc_rifle_M14_Bipod_Rail_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_rifle_M14_Bipod_Rail_TacReload: hlc_rifle_M14_Bipod_Rail
	{
		magazineReloadSwitchPhase="(40 / 92)";
		scopeArsenal=0;
		reloadmagazinesound[]=
		{
			"hlc_wp_M14\snd\soundshaders\m14_reload_tactical.ogg",
			0.69999999,
			1,
			18
		};
		reloadAction="HLC_GestureReload_M14_Tactical";
		model="\hlc_wp_M14\mesh\m14\M14_Biprail_TacReload.p3d";
	};
	class hlc_rifle_M14_Bipod_Rail_XMAG: hlc_rifle_M14_Bipod_Rail
	{
		magazineReloadSwitchPhase="(40 / 125)";
		scopeArsenal=0;
		dexterity=0.90261364;
		aimTransitionSpeed=0.63182956;
		inertia=0.72000003;
		reloadmagazinesound[]=
		{
			"hlc_wp_M14\snd\soundshaders\m14_reload_X14.ogg",
			0.69999999,
			1,
			18
		};
		reloadaction="HLC_GestureReload_M14_X14";
		model="\hlc_wp_M14\mesh\m14\M14_biprail_X14.p3d";
		class Eventhandlers
		{
			class NIArms_Alt_Reloads
			{
				reload="_this call NIArms_altReloads_fnc_onReload";
				Reloaded="_this call NIArms_altReloads_fnc_afterReload";
			};
		};
		class NIArms_Alt_Reloads
		{
			class hlc_rifle_M14_Bipod_Rail_XMAG
			{
				condition="(%1 == 0 )";
			};
			class hlc_rifle_M14_Bipod_Rail_XMAG_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_rifle_M14_Bipod_Rail_XMAG_TacReload: hlc_rifle_M14_Bipod_Rail_XMAG
	{
		magazineReloadSwitchPhase="(40 / 92)";
		scopeArsenal=0;
		reloadmagazinesound[]=
		{
			"hlc_wp_M14\snd\soundshaders\m14_reload_X14_tactical.ogg",
			0.69999999,
			1,
			18
		};
		reloadAction="HLC_GestureReload_M14_X14_Tactical";
		model="\hlc_wp_M14\mesh\m14\M14_biprail_X14_TacReload.p3d";
	};
	class hlc_rifle_M21: hlc_M14_base
	{
		author="An Aggressive Napkin, Millenia, Toadie";
		hasBipod=1;
		maxZeroing=1600;
		soundBipodDown[]=
		{
			"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_AAF_down",
			"db - 3",
			1,
			20
		};
		soundBipodUp[]=
		{
			"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_AAF_up",
			"db - 3",
			1,
			20
		};
		scope=2;
		recoil="recoil_dmr_06";
		agm_bipod=1;
		cse_bipod=1;
		model="\hlc_wp_M14\mesh\m14\M21.p3d";
		hiddenSelections[]=
		{
			"Main",
			"Bipod",
			"rail"
		};
		hiddenSelectionsTextures[]=
		{
			"hlc_wp_m14\tex\m21\b1_m14_co.paa",
			"hlc_core\tex\acc\bipod\harris\harris1a2_co.paa",
			"hlc_wp_m14\tex\bis_dmr\us_dmr_co.paa"
		};
		dexterity=1.2348174;
		aimTransitionSpeed=0.86437213;
		inertia=0.44999999;
		magazineReloadSwitchPhase="(40 / 125)";
		descriptionShort="$STR_NIA_M21_DESC";
		picture="\hlc_wp_M14\tex\ui\gear_m21_x_ca";
		displayName="$STR_NIA_rifle_M21";
		discretedistance[]={100,200,300,400,500,600};
		discreteDistanceCameraPoint[]=
		{
			"eye",
			"eye2",
			"eye3",
			"eye4",
			"eye5",
			"eye6"
		};
		cameradir="aim_point";
		discretedistanceinitindex=2;
		bg_bipod=1;
		handanim[]=
		{
			"OFP2_ManSkeleton",
			"\hlc_wp_m14\gesture\newgesture\gesture_m14.rtm"
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=97.903801;
			class PointerSlot: nia_Barrelmount_Slot
			{
				iconPosition[]={0,0};
				iconScale=1;
				iconPicture="\A3\Weapons_F\Data\clear_empty.paa";
				iconPinPoint="Left";
			};
		};
		modes[]=
		{
			"Single",
			"AI_Single",
			"AI_Single_optics1",
			"AI_Single_optics2",
			"AI_SemiAuto"
		};
		class Single: Single
		{
			dispersion=0.00023272001;
			aiRateOfFire=7;
			aiRateOfFireDistance=1000;
			aiRateOfFireDispersion=3;
			minRange=0;
			minRangeProbab=0.40000001;
			midRange=500;
			midRangeProbab=0.80000001;
			maxRange=1600;
			maxRangeProbab=0.0099999998;
		};
		class AI_Single: Single
		{
			showToPlayer=0;
			aiRateOfFire=2;
			aiRateOfFireDistance=350;
			aiRateOfFireDispersion=2;
			minRange=15;
			minRangeProbab=0.80000001;
			midRange=150;
			midRangeProbab=0.5;
			maxRange=500;
			maxRangeProbab=0.1;
		};
		class AI_FullAuto: FullAuto
		{
			showToPlayer=0;
			aiRateOfFire=0.1;
			aiRateOfFireDistance=50;
			minRange=0;
			minRangeProbab=0.89999998;
			midRange=1;
			midRangeProbab=0.80000001;
			maxRange=5;
			maxRangeProbab=0.1;
		};
		class AI_Burst_close: FullAuto
		{
			showToPlayer=0;
			aiBurstTerminable=1;
			burst=4;
			aiRateOfFire=1;
			aiRateOfFireDistance=100;
			aiRateOfFireDispersion=0.5;
			minRange=5;
			minRangeProbab=0.80000001;
			midRange=10;
			midRangeProbab=0.69999999;
			maxRange=15;
			maxRangeProbab=0.2;
		};
		class AI_Single_optics1: Single
		{
			showToPlayer=0;
			requiredOpticType=1;
			aiRateOfFire=3;
			aiRateOfFireDistance=550;
			aiRateOfFireDispersion=3;
			minRange=150;
			minRangeProbab=0.89999998;
			midRange=300;
			midRangeProbab=0.80000001;
			maxRange=800;
			maxRangeProbab=0.1;
		};
		class AI_Single_optics2: AI_Single_optics1
		{
			requiredOpticType=2;
			aiRateOfFire=6;
			aiRateOfFireDistance=1200;
			aiRateOfFireDispersion=4;
			minRange=150;
			minRangeProbab=0.69999999;
			midRange=500;
			midRangeProbab=0.80000001;
			maxRange=1200;
			maxRangeProbab=0.050000001;
		};
		class AI_SemiAuto: Single
		{
			showToPlayer=0;
			aiRateOfFire=2;
			aiRateOfFireDistance=300;
			aiRateOfFireDispersion=2;
			minRange=0;
			minRangeProbab=0.89999998;
			midRange=150;
			midRangeProbab=0.5;
			maxRange=500;
			maxRangeProbab=0.1;
		};
		class Library
		{
			libTextDesc="Springfield Armory M21";
		};
		class nia_magSwitch
		{
			hlc_50Rnd_762x51_B_M14="hlc_rifle_M21_XMAG";
			hlc_50Rnd_762x51_T_M14="hlc_rifle_M21_XMAG";
			hlc_50Rnd_762x51_M_M14="hlc_rifle_M21_XMAG";
			hlc_50Rnd_762x51_TDIM_M14="hlc_rifle_M21_XMAG";
			hlc_50rnd_762x51_MDIM_M14="hlc_rifle_M21_XMAG";
			default="hlc_rifle_M21";
		};
		baseWeapon="hlc_rifle_M21";
		class Eventhandlers
		{
			class NIArms_Alt_Reloads
			{
				reload="_this call NIArms_altReloads_fnc_onReload";
				Reloaded="_this call NIArms_altReloads_fnc_afterReload";
			};
		};
		class NIArms_Alt_Reloads
		{
			class hlc_rifle_M21
			{
				condition="(%1 == 0 )";
			};
			class hlc_rifle_M21_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_rifle_M21_TacReload: hlc_rifle_M21
	{
		magazineReloadSwitchPhase="(40 / 92)";
		scopeArsenal=0;
		reloadmagazinesound[]=
		{
			"hlc_wp_M14\snd\soundshaders\m14_reload_tactical.ogg",
			0.69999999,
			1,
			18
		};
		reloadAction="HLC_GestureReload_M14_Tactical";
		model="\hlc_wp_M14\mesh\m14\M21_TacReload.p3d";
	};
	class hlc_rifle_M21_XMAG: hlc_rifle_M21
	{
		magazineReloadSwitchPhase="(40 / 125)";
		scopeArsenal=0;
		dexterity=0.90261364;
		aimTransitionSpeed=0.63182956;
		inertia=0.72000003;
		reloadmagazinesound[]=
		{
			"hlc_wp_M14\snd\soundshaders\m14_reload_X14.ogg",
			0.69999999,
			1,
			18
		};
		reloadaction="HLC_GestureReload_M14_X14";
		model="\hlc_wp_M14\mesh\m14\M21_X14.p3d";
		class Eventhandlers
		{
			class NIArms_Alt_Reloads
			{
				reload="_this call NIArms_altReloads_fnc_onReload";
				Reloaded="_this call NIArms_altReloads_fnc_afterReload";
			};
		};
		class NIArms_Alt_Reloads
		{
			class hlc_rifle_M21_XMAG
			{
				condition="(%1 == 0 )";
			};
			class hlc_rifle_M21_XMAG_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_rifle_M21_XMAG_TacReload: hlc_rifle_M21_XMAG
	{
		magazineReloadSwitchPhase="(40 / 92)";
		scopeArsenal=0;
		reloadmagazinesound[]=
		{
			"hlc_wp_M14\snd\soundshaders\m14_reload_X14_tactical.ogg",
			0.69999999,
			1,
			18
		};
		reloadAction="HLC_GestureReload_M14_X14_Tactical";
		model="\hlc_wp_M14\mesh\m14\M21_X14_TacReload.p3d";
	};
	class hlc_rifle_M21_Rail: hlc_rifle_M21
	{
		ACE_railHeightAboveBore=2.4000001;
		dexterity=1.1827176;
		aimTransitionSpeed=0.82790226;
		inertia=0.47999999;
		author="An Aggressive Napkin, Millenia, Toadie";
		displayName="$STR_NIA_rifle_M21Rail";
		model="\hlc_wp_M14\mesh\m14\M21_rail.p3d";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=101.4136;
			class CowsSlot: asdg_OpticRail1913_short
			{
				iconPosition[]={0,0};
				iconScale=1;
				iconPicture="\A3\Weapons_F\Data\clear_empty.paa";
				iconPinPoint="Left";
			};
		};
		class nia_magSwitch
		{
			hlc_50Rnd_762x51_B_M14="hlc_rifle_M21_Rail_XMAG";
			hlc_50Rnd_762x51_T_M14="hlc_rifle_M21_Rail_XMAG";
			hlc_50Rnd_762x51_M_M14="hlc_rifle_M21_Rail_XMAG";
			hlc_50Rnd_762x51_TDIM_M14="hlc_rifle_M21_Rail_XMAG";
			hlc_50rnd_762x51_MDIM_M14="hlc_rifle_M21_Rail_XMAG";
			default="hlc_rifle_M21_Rail";
		};
		baseWeapon="hlc_rifle_M21_Rail";
		class Eventhandlers
		{
			class NIArms_Alt_Reloads
			{
				reload="_this call NIArms_altReloads_fnc_onReload";
				Reloaded="_this call NIArms_altReloads_fnc_afterReload";
			};
		};
		class NIArms_Alt_Reloads
		{
			class hlc_rifle_M21_Rail
			{
				condition="(%1 == 0 )";
			};
			class hlc_rifle_M21_Rail_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_rifle_M21_Rail_TacReload: hlc_rifle_M21_Rail
	{
		magazineReloadSwitchPhase="(40 / 92)";
		scopeArsenal=0;
		reloadmagazinesound[]=
		{
			"hlc_wp_M14\snd\soundshaders\m14_reload_tactical.ogg",
			0.69999999,
			1,
			18
		};
		reloadAction="HLC_GestureReload_M14_Tactical";
		model="\hlc_wp_M14\mesh\m14\M21_rail_TacReload.p3d";
	};
	class hlc_rifle_M21_Rail_XMAG: hlc_rifle_M21_Rail
	{
		scopeArsenal=0;
		reloadmagazinesound[]=
		{
			"hlc_wp_M14\snd\soundshaders\m14_reload_X14.ogg",
			0.69999999,
			1,
			18
		};
		reloadaction="HLC_GestureReload_M14_X14";
		model="\hlc_wp_M14\mesh\m14\M21_rail_X14.p3d";
		class Eventhandlers
		{
			class NIArms_Alt_Reloads
			{
				reload="_this call NIArms_altReloads_fnc_onReload";
				Reloaded="_this call NIArms_altReloads_fnc_afterReload";
			};
		};
		class NIArms_Alt_Reloads
		{
			class hlc_rifle_M21_Rail_XMAG
			{
				condition="(%1 == 0 )";
			};
			class hlc_rifle_M21_Rail_XMAG_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_rifle_M21_Rail_XMAG_TacReload: hlc_rifle_M21_Rail_XMAG
	{
		magazineReloadSwitchPhase="(40 / 92)";
		scopeArsenal=0;
		reloadmagazinesound[]=
		{
			"hlc_wp_M14\snd\soundshaders\m14_reload_X14_tactical.ogg",
			0.69999999,
			1,
			18
		};
		reloadAction="HLC_GestureReload_M14_X14_Tactical";
		model="\hlc_wp_M14\mesh\m14\M21_rail_X14_TacReload.p3d";
	};
	class hlc_rifle_m14dmr: hlc_rifle_M21
	{
		author="Bohemia Interactive,Toadie";
		model="\hlc_wp_M14\mesh\m14\M14_DMR.p3d";
		hiddenSelections[]=
		{
			"Main",
			"Bipod"
		};
		hiddenSelectionsTextures[]=
		{
			"hlc_wp_m14\tex\bis_dmr\us_dmr_co.paa",
			"hlc_core\tex\acc\bipod\harris\harris1a2_co.paa"
		};
		dexterity=1.0719227;
		aimTransitionSpeed=0.75034583;
		inertia=0.57999998;
		agm_bipod=1;
		hasbipod=1;
		deployedpivot="deploypivot";
		cse_bipod=1;
		maxZeroing=1600;
		descriptionShort="$STR_NIA_M21_DESC";
		picture="\hlc_wp_M14\tex\ui\gear_dmr_x_ca";
		displayName="$STR_NIA_rifle_M14DMR";
		discretedistance[]={100,200,300,400,500,600};
		discreteDistanceCameraPoint[]=
		{
			"eye",
			"eye2",
			"eye3",
			"eye4",
			"eye5",
			"eye6",
			"eye7",
			"eye8",
			"eye9"
		};
		cameradir="aim_point";
		discretedistanceinitindex=2;
		bg_bipod=1;
		handanim[]=
		{
			"OFP2_ManSkeleton",
			"\hlc_wp_m14\gesture\newgesture\gesture_m14DMR.rtm"
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=98.099998;
		};
		class Single: Single
		{
			dispersion=0.00031999001;
		};
		class nia_magSwitch
		{
			hlc_50Rnd_762x51_B_M14="hlc_rifle_m14dmr_XMAG";
			hlc_50Rnd_762x51_T_M14="hlc_rifle_m14dmr_XMAG";
			hlc_50Rnd_762x51_M_M14="hlc_rifle_m14dmr_XMAG";
			hlc_50Rnd_762x51_TDIM_M14="hlc_rifle_m14dmr_XMAG";
			hlc_50rnd_762x51_MDIM_M14="hlc_rifle_m14dmr_XMAG";
			default="hlc_rifle_m14dmr";
		};
		baseWeapon="hlc_rifle_m14dmr";
		class Eventhandlers
		{
			class NIArms_Alt_Reloads
			{
				reload="_this call NIArms_altReloads_fnc_onReload";
				Reloaded="_this call NIArms_altReloads_fnc_afterReload";
			};
		};
		class NIArms_Alt_Reloads
		{
			class hlc_rifle_m14dmr
			{
				condition="(%1 == 0 )";
			};
			class hlc_rifle_m14dmr_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_rifle_m14dmr_TacReload: hlc_rifle_m14dmr
	{
		magazineReloadSwitchPhase="(40 / 92)";
		scopeArsenal=0;
		reloadmagazinesound[]=
		{
			"hlc_wp_M14\snd\soundshaders\m14_reload_tactical.ogg",
			0.69999999,
			1,
			18
		};
		reloadAction="HLC_GestureReload_M14_Tactical";
		model="\hlc_wp_M14\mesh\m14\M14_DMR_TacReload.p3d";
	};
	class hlc_rifle_m14dmr_XMAG: hlc_rifle_m14dmr
	{
		scopeArsenal=0;
		magazineReloadSwitchPhase="(40 / 125)";
		reloadmagazinesound[]=
		{
			"hlc_wp_M14\snd\soundshaders\m14_reload_X14.ogg",
			0.69999999,
			1,
			18
		};
		reloadaction="HLC_GestureReload_M14_X14";
		model="\hlc_wp_M14\mesh\m14\M14_DMR_X14.p3d";
		class Eventhandlers
		{
			class NIArms_Alt_Reloads
			{
				reload="_this call NIArms_altReloads_fnc_onReload";
				Reloaded="_this call NIArms_altReloads_fnc_afterReload";
			};
		};
		class NIArms_Alt_Reloads
		{
			class hlc_rifle_m14dmr_XMAG
			{
				condition="(%1 == 0 )";
			};
			class hlc_rifle_m14dmr_XMAG_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_rifle_m14dmr_XMAG_TacReload: hlc_rifle_m14dmr_XMAG
	{
		magazineReloadSwitchPhase="(40 / 92)";
		scopeArsenal=0;
		reloadmagazinesound[]=
		{
			"hlc_wp_M14\snd\soundshaders\m14_reload_X14_tactical.ogg",
			0.69999999,
			1,
			18
		};
		reloadAction="HLC_GestureReload_M14_X14_Tactical";
		model="\hlc_wp_M14\mesh\m14\M14_DMR_X14_TacReload.p3d";
	};
	class hlc_rifle_M14dmr_Rail: hlc_rifle_m14dmr
	{
		ACE_railHeightAboveBore=2.4000001;
		author="Bohemia Interactive,Toadie";
		displayName="$STR_NIA_rifle_M14DMRRail";
		model="hlc_wp_M14\mesh\m14\M14_DMR_Weaver.p3d";
		dexterity=1.1810873;
		aimTransitionSpeed=0.82676107;
		inertia=0.47999999;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=98.099998;
			class CowsSlot: asdg_OpticRail1913_short
			{
			};
		};
		class nia_magSwitch
		{
			hlc_50Rnd_762x51_B_M14="hlc_rifle_M14dmr_Rail_XMAG";
			hlc_50Rnd_762x51_T_M14="hlc_rifle_M14dmr_Rail_XMAG";
			hlc_50Rnd_762x51_M_M14="hlc_rifle_M14dmr_Rail_XMAG";
			hlc_50Rnd_762x51_TDIM_M14="hlc_rifle_M14dmr_Rail_XMAG";
			hlc_50rnd_762x51_MDIM_M14="hlc_rifle_M14dmr_Rail_XMAG";
			default="hlc_rifle_M14dmr_Rail";
		};
		baseWeapon="hlc_rifle_M14dmr_Rail";
		class Eventhandlers
		{
			class NIArms_Alt_Reloads
			{
				reload="_this call NIArms_altReloads_fnc_onReload";
				Reloaded="_this call NIArms_altReloads_fnc_afterReload";
			};
		};
		class NIArms_Alt_Reloads
		{
			class hlc_rifle_M14dmr_Rail
			{
				condition="(%1 == 0 )";
			};
			class hlc_rifle_M14dmr_Rail_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_rifle_M14dmr_Rail_TacReload: hlc_rifle_M14dmr_Rail
	{
		magazineReloadSwitchPhase="(40 / 92)";
		scopeArsenal=0;
		reloadmagazinesound[]=
		{
			"hlc_wp_M14\snd\soundshaders\m14_reload_tactical.ogg",
			0.69999999,
			1,
			18
		};
		reloadAction="HLC_GestureReload_M14_Tactical";
		model="\hlc_wp_M14\mesh\m14\M14_DMR_Weaver_TacReload.p3d";
	};
	class hlc_rifle_M14dmr_Rail_XMAG: hlc_rifle_M14dmr_Rail
	{
		scopeArsenal=0;
		magazineReloadSwitchPhase="(40 / 125)";
		reloadmagazinesound[]=
		{
			"hlc_wp_M14\snd\soundshaders\m14_reload_X14.ogg",
			0.69999999,
			1,
			18
		};
		reloadaction="HLC_GestureReload_M14_X14";
		model="\hlc_wp_M14\mesh\m14\M14_DMR_Weaver_X14.p3d";
		class Eventhandlers
		{
			class NIArms_Alt_Reloads
			{
				reload="_this call NIArms_altReloads_fnc_onReload";
				Reloaded="_this call NIArms_altReloads_fnc_afterReload";
			};
		};
		class NIArms_Alt_Reloads
		{
			class hlc_rifle_M14dmr_Rail_XMAG
			{
				condition="(%1 == 0 )";
			};
			class hlc_rifle_M14dmr_Rail_XMAG_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_rifle_M14dmr_Rail_XMAG_TacReload: hlc_rifle_M14dmr_Rail_XMAG
	{
		magazineReloadSwitchPhase="(40 / 92)";
		scopeArsenal=0;
		reloadmagazinesound[]=
		{
			"hlc_wp_M14\snd\soundshaders\m14_reload_X14_tactical.ogg",
			0.69999999,
			1,
			18
		};
		reloadAction="HLC_GestureReload_M14_X14_Tactical";
		model="\hlc_wp_M14\mesh\m14\M14_DMR_Weaver_X14_TacReload.p3d";
	};
	class hlc_rifle_m14sopmod: hlc_M14_base
	{
		scope=2;
		author="Twinke Masta, Pete, Thanez, General Tso, Jihad, Toadie";
		AB_barrelTwist=12;
		AB_barrelLength=18;
		ACE_barrelTwist=304.79999;
		ACE_barrelLength=457.20001;
		ACE_railHeightAboveBore=2.9000001;
		agm_bipod=1;
		hasbipod=1;
		cse_bipod=1;
		maxZeroing=1600;
		model="\hlc_wp_M14\mesh\m14\M14SOPMOD.p3d";
		hiddenSelections[]=
		{
			"Reciever",
			"Furniture"
		};
		hiddenSelectionsTextures[]=
		{
			"hlc_wp_m14\tex\brightside\rec_co.paa",
			"hlc_wp_m14\tex\brightside\upper_co.paa"
		};
		descriptionShort="$STR_NIA_M14_Compact_DESC";
		picture="\hlc_wp_M14\tex\ui\gear_sopmod_x_ca";
		displayName="$STR_NIA_rifle_M14TAC";
		discretedistance[]={100,200,300,400,500,600};
		discreteDistanceCameraPoint[]=
		{
			"eye",
			"eye2",
			"eye3",
			"eye4",
			"eye5",
			"eye6"
		};
		cameradir="aim_point";
		recoil="recoil_ebr";
		magazineReloadSwitchPhase="(40 / 125)";
		discretedistanceinitindex=2;
		bg_bipod=1;
		initspeed=-0.96600002;
		handanim[]=
		{
			"OFP2_ManSkeleton",
			"\hlc_wp_m14\gesture\newgesture\gesture_m14SOPMOD_STD.rtm"
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=96.901001;
			class CowsSlot: asdg_OpticRail1913
			{
				iconPosition[]={0,0};
				iconScale=1;
				iconPicture="\A3\Weapons_F\Data\clear_empty.paa";
				iconPinPoint="Left";
			};
			class PointerSlot: asdg_FrontSideRail
			{
				iconPosition[]={0,0};
				iconScale=1;
				iconPicture="\A3\Weapons_F\Data\clear_empty.paa";
				iconPinPoint="Left";
			};
			class UnderBarrelSlot: asdg_UnderSlot
			{
				iconPosition[]={0,0};
				iconScale=1;
				iconPicture="\A3\Weapons_F\Data\clear_empty.paa";
				iconPinPoint="Left";
			};
			class GripodSlot: nia_rifle_grips_slot
			{
				iconPosition[]={0,0};
				iconScale=1;
				iconPicture="\A3\Weapons_F\Data\clear_empty.paa";
				iconPinPoint="Left";
			};
		};
		inertia=0.4445;
		dexterity=1.2434548;
		aimTransitionSpeed=0.87041837;
		class Single: Single
		{
			class StandardSound: StandardSound
			{
				soundSetShot[]=
				{
					"NIA_M14sopmod_NEW_Shot_SoundSet",
					"M14_tail_SoundSet"
				};
			};
			class SilencedSound: SilencedSound
			{
				soundSetShot[]=
				{
					"M14_silencerShot_SoundSet",
					"M14_silencerTail_SoundSet"
				};
			};
			dispersion=0.00046544001;
		};
		class FullAuto: FullAuto
		{
			class StandardSound: StandardSound
			{
				soundSetShot[]=
				{
					"NIA_M14sopmod_NEW_Shot_SoundSet",
					"M14_tail_SoundSet"
				};
			};
			class SilencedSound: SilencedSound
			{
				soundSetShot[]=
				{
					"M14_silencerShot_SoundSet",
					"M14_silencerTail_SoundSet"
				};
			};
			dispersion=0.00052361999;
		};
		class AI_Single: Single
		{
			showToPlayer=0;
			aiRateOfFire=2;
			aiRateOfFireDistance=350;
			aiRateOfFireDispersion=2;
			minRange=15;
			minRangeProbab=0.80000001;
			midRange=150;
			midRangeProbab=0.5;
			maxRange=500;
			maxRangeProbab=0.1;
		};
		class AI_FullAuto: FullAuto
		{
			showToPlayer=0;
			aiRateOfFire=0.1;
			aiRateOfFireDistance=50;
			minRange=0;
			minRangeProbab=0.89999998;
			midRange=1;
			midRangeProbab=0.80000001;
			maxRange=5;
			maxRangeProbab=0.1;
		};
		class AI_Burst_close: FullAuto
		{
			showToPlayer=0;
			aiBurstTerminable=1;
			burst=4;
			aiRateOfFire=1;
			aiRateOfFireDistance=100;
			aiRateOfFireDispersion=0.5;
			minRange=5;
			minRangeProbab=0.80000001;
			midRange=10;
			midRangeProbab=0.69999999;
			maxRange=15;
			maxRangeProbab=0.2;
		};
		class AI_Single_optics1: Single
		{
			showToPlayer=0;
			requiredOpticType=1;
			aiRateOfFire=3;
			aiRateOfFireDistance=550;
			aiRateOfFireDispersion=3;
			minRange=150;
			minRangeProbab=0.89999998;
			midRange=300;
			midRangeProbab=0.80000001;
			maxRange=800;
			maxRangeProbab=0.1;
		};
		class AI_Single_optics2: AI_Single_optics1
		{
			requiredOpticType=2;
			aiRateOfFire=6;
			aiRateOfFireDistance=1200;
			aiRateOfFireDispersion=4;
			minRange=150;
			minRangeProbab=0.69999999;
			midRange=500;
			midRangeProbab=0.80000001;
			maxRange=1200;
			maxRangeProbab=0.050000001;
		};
		class AI_SemiAuto: Single
		{
			showToPlayer=0;
			aiRateOfFire=2;
			aiRateOfFireDistance=300;
			aiRateOfFireDispersion=2;
			minRange=0;
			minRangeProbab=0.89999998;
			midRange=150;
			midRangeProbab=0.5;
			maxRange=500;
			maxRangeProbab=0.1;
		};
		class nia_magSwitch
		{
			hlc_50Rnd_762x51_B_M14="hlc_rifle_m14sopmod_XMAG";
			hlc_50Rnd_762x51_T_M14="hlc_rifle_m14sopmod_XMAG";
			hlc_50Rnd_762x51_M_M14="hlc_rifle_m14sopmod_XMAG";
			hlc_50Rnd_762x51_TDIM_M14="hlc_rifle_m14sopmod_XMAG";
			hlc_50rnd_762x51_MDIM_M14="hlc_rifle_m14sopmod_XMAG";
			default="hlc_rifle_m14sopmod";
		};
		rhs_grip1_change="hlc_rifle_m14sopmod_grip";
		rhs_grip2_change="hlc_rifle_m14sopmod_grip2";
		rhs_grip3_change="hlc_rifle_m14sopmod_grip3";
		baseWeapon="hlc_rifle_m14sopmod";
		class nia_gripSwitch
		{
			VFG="hlc_rifle_m14sopmod_grip";
			AFG="hlc_rifle_m14sopmod_grip2";
			VFG2="hlc_rifle_m14sopmod_grip3";
			default="hlc_rifle_m14sopmod";
		};
		class Eventhandlers
		{
			class NIArms_Alt_Reloads
			{
				reload="_this call NIArms_altReloads_fnc_onReload";
				Reloaded="_this call NIArms_altReloads_fnc_afterReload";
			};
		};
		class NIArms_Alt_Reloads
		{
			class hlc_rifle_m14sopmod
			{
				condition="(%1 == 0 )";
			};
			class hlc_rifle_m14sopmod_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_rifle_m14sopmod_TacReload: hlc_rifle_m14sopmod
	{
		magazineReloadSwitchPhase="(40 / 92)";
		scopeArsenal=0;
		reloadmagazinesound[]=
		{
			"hlc_wp_M14\snd\soundshaders\m14_reload_tactical.ogg",
			0.69999999,
			1,
			18
		};
		reloadAction="HLC_GestureReload_M14_Tactical";
		model="\hlc_wp_M14\mesh\m14\M14SOPMOD_TacReload.p3d";
	};
	class hlc_rifle_m14sopmod_grip: hlc_rifle_m14sopmod
	{
		scopeArsenal=0;
		handanim[]=
		{
			"OFP2_ManSkeleton",
			"\hlc_wp_m14\gesture\newgesture\gesture_m14SOPMOD_VFG.rtm"
		};
		inertia=0.4445;
		dexterity=1.3434548;
		aimTransitionSpeed=0.94041836;
		class nia_magSwitch
		{
			hlc_50Rnd_762x51_B_M14="hlc_rifle_m14sopmod_XMAG_grip";
			hlc_50Rnd_762x51_T_M14="hlc_rifle_m14sopmod_XMAG_grip";
			hlc_50Rnd_762x51_M_M14="hlc_rifle_m14sopmod_XMAG_grip";
			hlc_50Rnd_762x51_TDIM_M14="hlc_rifle_m14sopmod_XMAG_grip";
			hlc_50rnd_762x51_MDIM_M14="hlc_rifle_m14sopmod_XMAG_grip";
			default="hlc_rifle_m14sopmod_grip";
		};
		class Eventhandlers
		{
			class NIArms_Alt_Reloads
			{
				reload="_this call NIArms_altReloads_fnc_onReload";
				Reloaded="_this call NIArms_altReloads_fnc_afterReload";
			};
		};
		class NIArms_Alt_Reloads
		{
			class hlc_rifle_m14sopmod_grip
			{
				condition="(%1 == 0 )";
			};
			class hlc_rifle_m14sopmod_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_rifle_m14sopmod_grip2: hlc_rifle_m14sopmod
	{
		scopeArsenal=0;
		handanim[]=
		{
			"OFP2_ManSkeleton",
			"\hlc_wp_m14\gesture\newgesture\gesture_m14SOPMOD_AFG.rtm"
		};
		inertia=0.4445;
		dexterity=1.3434548;
		aimTransitionSpeed=0.94041836;
		class nia_magSwitch
		{
			hlc_50Rnd_762x51_B_M14="hlc_rifle_m14sopmod_XMAG_grip2";
			hlc_50Rnd_762x51_T_M14="hlc_rifle_m14sopmod_XMAG_grip2";
			hlc_50Rnd_762x51_M_M14="hlc_rifle_m14sopmod_XMAG_grip2";
			hlc_50Rnd_762x51_TDIM_M14="hlc_rifle_m14sopmod_XMAG_grip2";
			hlc_50rnd_762x51_MDIM_M14="hlc_rifle_m14sopmod_XMAG_grip2";
			default="hlc_rifle_m14sopmod_grip2";
		};
		class Eventhandlers
		{
			class NIArms_Alt_Reloads
			{
				reload="_this call NIArms_altReloads_fnc_onReload";
				Reloaded="_this call NIArms_altReloads_fnc_afterReload";
			};
		};
		class NIArms_Alt_Reloads
		{
			class hlc_rifle_m14sopmod_grip2
			{
				condition="(%1 == 0 )";
			};
			class hlc_rifle_m14sopmod_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_rifle_m14sopmod_grip3: hlc_rifle_m14sopmod
	{
		scopeArsenal=0;
		handanim[]=
		{
			"OFP2_ManSkeleton",
			"\hlc_wp_m14\gesture\newgesture\gesture_m14SOPMOD_VFG.rtm"
		};
		inertia=0.4445;
		dexterity=1.3434548;
		aimTransitionSpeed=0.94041836;
		class nia_magSwitch
		{
			hlc_50Rnd_762x51_B_M14="hlc_rifle_m14sopmod_XMAG_grip3";
			hlc_50Rnd_762x51_T_M14="hlc_rifle_m14sopmod_XMAG_grip3";
			hlc_50Rnd_762x51_M_M14="hlc_rifle_m14sopmod_XMAG_grip3";
			hlc_50Rnd_762x51_TDIM_M14="hlc_rifle_m14sopmod_XMAG_grip3";
			hlc_50rnd_762x51_MDIM_M14="hlc_rifle_m14sopmod_XMAG_grip3";
			default="hlc_rifle_m14sopmod_grip3";
		};
		class Eventhandlers
		{
			class NIArms_Alt_Reloads
			{
				reload="_this call NIArms_altReloads_fnc_onReload";
				Reloaded="_this call NIArms_altReloads_fnc_afterReload";
			};
		};
		class NIArms_Alt_Reloads
		{
			class hlc_rifle_m14sopmod_grip3
			{
				condition="(%1 == 0 )";
			};
			class hlc_rifle_m14sopmod_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_rifle_m14sopmod_XMAG: hlc_rifle_m14sopmod
	{
		scopeArsenal=0;
		rhs_grip1_change="hlc_rifle_m14sopmod_XMAG_grip";
		rhs_grip2_change="hlc_rifle_m14sopmod_XMAG_grip2";
		rhs_grip3_change="hlc_rifle_m14sopmod_XMAG_grip3";
		baseWeapon="hlc_rifle_m14sopmod_XMAG";
		inertia=0.60500002;
		dexterity=1.1197323;
		aimTransitionSpeed=0.78381258;
		class nia_gripSwitch
		{
			VFG="hlc_rifle_m14sopmod_XMAG_grip";
			AFG="hlc_rifle_m14sopmod_XMAG_grip2";
			VFG2="hlc_rifle_m14sopmod_XMAG_grip3";
			default="hlc_rifle_m14sopmod_XMAG";
		};
		reloadmagazinesound[]=
		{
			"hlc_wp_M14\snd\soundshaders\m14_reload_X14.ogg",
			0.69999999,
			1,
			18
		};
		reloadaction="HLC_GestureReload_M14_X14";
		model="\hlc_wp_M14\mesh\m14\M14SOPMOD_X14.p3d";
		class Eventhandlers
		{
			class NIArms_Alt_Reloads
			{
				reload="_this call NIArms_altReloads_fnc_onReload";
				Reloaded="_this call NIArms_altReloads_fnc_afterReload";
			};
		};
		class NIArms_Alt_Reloads
		{
			class hlc_rifle_m14sopmod_XMAG
			{
				condition="(%1 == 0 )";
			};
			class hlc_rifle_m14sopmod_XMAG_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_rifle_m14sopmod_XMAG_TacReload: hlc_rifle_m14sopmod_XMAG
	{
		magazineReloadSwitchPhase="(40 / 92)";
		scopeArsenal=0;
		reloadmagazinesound[]=
		{
			"hlc_wp_M14\snd\soundshaders\m14_reload_X14_tactical.ogg",
			0.69999999,
			1,
			18
		};
		reloadAction="HLC_GestureReload_M14_X14_Tactical";
		model="\hlc_wp_M14\mesh\m14\M14SOPMOD_X14_TacReload.p3d";
	};
	class hlc_rifle_m14sopmod_XMAG_grip: hlc_rifle_m14sopmod_XMAG
	{
		scopeArsenal=0;
		handanim[]=
		{
			"OFP2_ManSkeleton",
			"\hlc_wp_m14\gesture\newgesture\gesture_m14SOPMOD_VFG.rtm"
		};
		dexterity=1.0844764;
		aimTransitionSpeed=0.75913346;
		class Eventhandlers
		{
			class NIArms_Alt_Reloads
			{
				reload="_this call NIArms_altReloads_fnc_onReload";
				Reloaded="_this call NIArms_altReloads_fnc_afterReload";
			};
		};
		class NIArms_Alt_Reloads
		{
			class hlc_rifle_m14sopmod_XMAG_grip
			{
				condition="(%1 == 0 )";
			};
			class hlc_rifle_m14sopmod_XMAG_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_rifle_m14sopmod_XMAG_grip2: hlc_rifle_m14sopmod_XMAG
	{
		scopeArsenal=0;
		handanim[]=
		{
			"OFP2_ManSkeleton",
			"\hlc_wp_m14\gesture\newgesture\gesture_m14SOPMOD_AFG.rtm"
		};
		dexterity=1.0844764;
		aimTransitionSpeed=0.75913346;
		class Eventhandlers
		{
			class NIArms_Alt_Reloads
			{
				reload="_this call NIArms_altReloads_fnc_onReload";
				Reloaded="_this call NIArms_altReloads_fnc_afterReload";
			};
		};
		class NIArms_Alt_Reloads
		{
			class hlc_rifle_m14sopmod_XMAG_grip2
			{
				condition="(%1 == 0 )";
			};
			class hlc_rifle_m14sopmod_XMAG_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_rifle_m14sopmod_XMAG_grip3: hlc_rifle_m14sopmod_XMAG
	{
		scopeArsenal=0;
		handanim[]=
		{
			"OFP2_ManSkeleton",
			"\hlc_wp_m14\gesture\newgesture\gesture_m14SOPMOD_VFG.rtm"
		};
		dexterity=1.0844764;
		aimTransitionSpeed=0.75913346;
		class Eventhandlers
		{
			class NIArms_Alt_Reloads
			{
				reload="_this call NIArms_altReloads_fnc_onReload";
				Reloaded="_this call NIArms_altReloads_fnc_afterReload";
			};
		};
		class NIArms_Alt_Reloads
		{
			class hlc_rifle_m14sopmod_XMAG_grip3
			{
				condition="(%1 == 0 )";
			};
			class hlc_rifle_m14sopmod_XMAG_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
};
