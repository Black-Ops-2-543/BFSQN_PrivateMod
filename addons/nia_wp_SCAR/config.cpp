class CfgSoundShaders
{
	class NIA_SCARH_Closure_SoundShader
	{
		samples[]=
		{
			
			{
				"nia_wp_SCAR\snd\SCAR2_first",
				1
			}
		};
		range=10;
		volume=1;
		rangeCurve[]=
		{
			{0,1},
			{10,0}
		};
	};
	class NIA_SCARH_closeShot_SoundShader
	{
		samples[]=
		{
			
			{
				"hlc_core\sound\weapon\FNFAL\Close_1",
				1
			},
			
			{
				"hlc_core\sound\weapon\FNFAL\Close_2",
				1
			},
			
			{
				"hlc_core\sound\weapon\FNFAL\Close_3",
				1
			},
			
			{
				"hlc_core\sound\weapon\FNFAL\Close_4",
				1
			}
		};
		volume=1.6;
		range=100;
		rangeCurve="closeShotCurve";
	};
	class NIA_SCARH_midShot_SoundShader
	{
		samples[]=
		{
			
			{
				"nia_wp_SCAR\snd\Mk17\Mk17_mid",
				1
			}
		};
		volume=1;
		range=2500;
		rangeCurve[]=
		{
			{0,0.5},
			{100,1},
			{300,0},
			{2500,0}
		};
	};
	class NIA_SCARH_distShot_SoundShader
	{
		samples[]=
		{
			
			{
				"nia_wp_SCAR\snd\Mk17\Mk17_dist",
				1
			}
		};
		volume=1;
		range=2500;
		rangeCurve[]=
		{
			{0,0},
			{100,0},
			{300,1},
			{2500,1}
		};
	};
	class NIA_SCARH_tailDistant_SoundShader
	{
		samples[]=
		{
			
			{
				"\A3\Sounds_F\arsenal\weapons\LongRangeRifles\mk18\mk18_taildistant",
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
	class NIA_SCARH_tailForest_SoundShader
	{
		samples[]=
		{
			
			{
				"nia_wp_SCAR\snd\Mk17\Mk17_forest",
				1
			}
		};
		volume=" 1.3*((1-interior/1.4)*Forest/3)";
		range=250;
		rangeCurve[]=
		{
			{0,1},
			{250,0}
		};
		limitation=1;
	};
	class NIA_SCARH_tailForest_mid_SoundShader
	{
		samples[]=
		{
			
			{
				"nia_wp_SCAR\snd\Mk17\Mk17_forest_mid",
				1
			}
		};
		volume=" 1.3*((1-interior/1.4)*Forest/3)";
		rangeCurve[]=
		{
			{0,0},
			{250,1},
			{1800,1}
		};
		range=1800;
		limitation=1;
	};
	class NIA_SCARH_tailHouses_SoundShader
	{
		samples[]=
		{
			
			{
				"nia_wp_SCAR\snd\Mk17\Mk17_urban",
				1
			}
		};
		volume="1.3*((1-interior/1.4)*houses/3)";
		range=250;
		rangeCurve[]=
		{
			{0,1},
			{250,0}
		};
		limitation=1;
	};
	class NIA_SCARH_tailHouses_mid_SoundShader
	{
		samples[]=
		{
			
			{
				"nia_wp_SCAR\snd\Mk17\Mk17_urban_mid",
				1
			}
		};
		volume="1.3*((1-interior/1.4)*houses/3)";
		rangeCurve[]=
		{
			{0,0},
			{250,1},
			{2000,1}
		};
		range=2000;
		limitation=1;
	};
	class NIA_SCARH_tailInterior_SoundShader
	{
		samples[]=
		{
			
			{
				"nia_wp_SCAR\snd\Mk17\Mk17_indoor",
				1
			}
		};
		volume=" 1.3*((interior)*0.65)";
		range=250;
		rangeCurve[]=
		{
			{0,0.69999999},
			{250,0}
		};
		limitation=1;
	};
	class NIA_SCARH_tailInterior_mid_SoundShader
	{
		samples[]=
		{
			
			{
				"nia_wp_SCAR\snd\Mk17\Mk17_indoor_mid",
				1
			}
		};
		volume=" 1.3*((interior)*0.65)";
		rangeCurve[]=
		{
			{0,0},
			{250,0.40000001},
			{320,0}
		};
		range=500;
		limitation=1;
	};
	class NIA_SCARH_tailMeadows_SoundShader
	{
		samples[]=
		{
			
			{
				"nia_wp_SCAR\snd\Mk17\Mk17_meadows",
				1
			}
		};
		volume=" 1.3*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
		range=250;
		rangeCurve[]=
		{
			{0,1},
			{250,0}
		};
		limitation=1;
	};
	class NIA_SCARH_tailMeadows_mid_SoundShader
	{
		samples[]=
		{
			
			{
				"nia_wp_SCAR\snd\Mk17\Mk17_meadows_mid",
				1
			}
		};
		volume=" 1.3*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
		rangeCurve[]=
		{
			{0,0},
			{250,1},
			{2000,1}
		};
		range=2000;
		limitation=1;
	};
	class NIA_SCARH_tailTrees_SoundShader
	{
		samples[]=
		{
			
			{
				"nia_wp_SCAR\snd\Mk17\Mk17_trees",
				1
			}
		};
		volume=" 1.3*((1-interior/1.4)*trees/3)";
		range=250;
		rangeCurve[]=
		{
			{0,1},
			{250,0}
		};
		limitation=1;
	};
	class NIA_SCARH_tailTrees_mid_SoundShader
	{
		samples[]=
		{
			
			{
				"nia_wp_SCAR\snd\Mk17\Mk17_trees_mid",
				1
			}
		};
		volume=" 1.3*((1-interior/1.4)*trees/3)";
		rangeCurve[]=
		{
			{0,0},
			{250,1},
			{2000,1}
		};
		range=2000;
		limitation=1;
	};
	class NIA_SCARH_silencerShot_SoundShader
	{
		samples[]=
		{
			
			{
				"nia_wp_SCAR\snd\Mk17\Mk17_sil_close",
				1
			}
		};
		volume=1;
		range=50;
		rangeCurve="closeShotCurve";
	};
	class NIA_SCARH_silencerShot_mid_SoundShader
	{
		samples[]=
		{
			
			{
				"nia_wp_SCAR\snd\Mk17\Mk17_sil_mid",
				1
			}
		};
		volume=1;
		range=350;
		rangeCurve[]=
		{
			{0,0.2},
			{50,1},
			{350,0}
		};
	};
	class NIA_SCARH_silencerTailForest_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\DMR01_silencerTailForest",
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
	class NIA_SCARH_silencerTailHouses_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\DMR01_silencerTailHouses",
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
	class NIA_SCARH_silencerTailInterior_SoundShader
	{
		samples[]=
		{
			
			{
				"nia_wp_SCAR\snd\Mk17\Mk17_sil_close_tail_indoor",
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
	class NIA_SCARH_silencerTailMeadows_SoundShader
	{
		samples[]=
		{
			
			{
				"nia_wp_SCAR\snd\Mk17\Mk17_sil_close_tail",
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
	class NIA_SCARH_silencerTailTrees_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\DMR01_silencerTailTrees",
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
	class NIA_SCARH_CQB_closeShot_SoundShader
	{
		samples[]=
		{
			
			{
				"nia_wp_SCAR\snd\Mk17\Mk17_close",
				1
			}
		};
		volume=0.69999999;
		range=100;
		rangeCurve="closeShotCurve";
	};
	class NIA_SCARH_CQB_midShot_SoundShader
	{
		samples[]=
		{
			
			{
				"nia_wp_SCAR\snd\Mk17\Mk17_mid",
				1
			}
		};
		volume=1;
		range=2500;
		rangeCurve[]=
		{
			{0,0.5},
			{100,1},
			{300,0},
			{2500,0}
		};
	};
	class NIA_SCARH_CQB_distShot_SoundShader
	{
		samples[]=
		{
			
			{
				"nia_wp_SCAR\snd\Mk17\Mk17_dist",
				1
			}
		};
		volume=1;
		range=2500;
		rangeCurve[]=
		{
			{0,0},
			{100,0},
			{300,1},
			{2500,1}
		};
	};
	class NIA_SCARH_CQB_tailDistant_SoundShader
	{
		samples[]=
		{
			
			{
				"\A3\Sounds_F\arsenal\weapons\LongRangeRifles\mk18\mk18_taildistant",
				1
			}
		};
		volume=1;
		range=2000;
		rangeCurve[]=
		{
			{0,0},
			{150,0.2},
			{600,0.69999999},
			{2000,1}
		};
		limitation=1;
	};
	class NIA_SCARH_CQB_tailForest_SoundShader
	{
		samples[]=
		{
			
			{
				"nia_wp_SCAR\snd\Mk17\Mk17_forest",
				1
			}
		};
		volume=" 1.3*((1-interior/1.4)*Forest/3)";
		range=250;
		rangeCurve[]=
		{
			{0,1},
			{250,0}
		};
		limitation=1;
	};
	class NIA_SCARH_CQB_tailForest_mid_SoundShader
	{
		samples[]=
		{
			
			{
				"nia_wp_SCAR\snd\Mk17\Mk17_forest_mid",
				1
			}
		};
		volume=" 1.3*((1-interior/1.4)*Forest/3)";
		rangeCurve[]=
		{
			{0,0},
			{250,1},
			{1800,1}
		};
		range=1800;
		limitation=1;
	};
	class NIA_SCARH_CQB_tailHouses_SoundShader
	{
		samples[]=
		{
			
			{
				"nia_wp_SCAR\snd\Mk17\Mk17_urban",
				1
			}
		};
		volume="1.3*((1-interior/1.4)*houses/3)";
		range=250;
		rangeCurve[]=
		{
			{0,1},
			{250,0}
		};
		limitation=1;
	};
	class NIA_SCARH_CQB_tailHouses_mid_SoundShader
	{
		samples[]=
		{
			
			{
				"nia_wp_SCAR\snd\Mk17\Mk17_urban_mid",
				1
			}
		};
		volume="1.3*((1-interior/1.4)*houses/3)";
		rangeCurve[]=
		{
			{0,0},
			{250,1},
			{2000,1}
		};
		range=2000;
		limitation=1;
	};
	class NIA_SCARH_CQB_tailInterior_SoundShader
	{
		samples[]=
		{
			
			{
				"nia_wp_SCAR\snd\Mk17\Mk17_indoor",
				1
			}
		};
		volume=" 1.3*((interior)*0.65)";
		range=250;
		rangeCurve[]=
		{
			{0,0.69999999},
			{250,0}
		};
		limitation=1;
	};
	class NIA_SCARH_CQB_tailInterior_mid_SoundShader
	{
		samples[]=
		{
			
			{
				"nia_wp_SCAR\snd\Mk17\Mk17_indoor_mid",
				1
			}
		};
		volume=" 1.2*((interior)*0.65)";
		rangeCurve[]=
		{
			{0,0},
			{250,0.40000001},
			{320,0}
		};
		range=500;
		limitation=1;
	};
	class NIA_SCARH_CQB_tailMeadows_SoundShader
	{
		samples[]=
		{
			
			{
				"nia_wp_SCAR\snd\Mk17\Mk17_meadows",
				1
			}
		};
		volume=" 1.3*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
		range=250;
		rangeCurve[]=
		{
			{0,1},
			{250,0}
		};
		limitation=1;
	};
	class NIA_SCARH_CQB_tailMeadows_mid_SoundShader
	{
		samples[]=
		{
			
			{
				"nia_wp_SCAR\snd\Mk17\Mk17_meadows_mid",
				1
			}
		};
		volume=" 1.3*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
		rangeCurve[]=
		{
			{0,0},
			{250,1},
			{2000,1}
		};
		range=2000;
		limitation=1;
	};
	class NIA_SCARH_CQB_tailTrees_SoundShader
	{
		samples[]=
		{
			
			{
				"nia_wp_SCAR\snd\Mk17\Mk17_trees",
				1
			}
		};
		volume=" 1.3*((1-interior/1.4)*trees/3)";
		range=250;
		rangeCurve[]=
		{
			{0,1},
			{250,0}
		};
		limitation=1;
	};
	class NIA_SCARH_CQB_tailTrees_mid_SoundShader
	{
		samples[]=
		{
			
			{
				"nia_wp_SCAR\snd\Mk17\Mk17_trees_mid",
				1
			}
		};
		volume=" 1.3*((1-interior/1.4)*trees/3)";
		rangeCurve[]=
		{
			{0,0},
			{250,1},
			{2000,1}
		};
		range=2000;
		limitation=1;
	};
	class NIA_SCARL_Closure_SoundShader
	{
		samples[]=
		{
			
			{
				"nia_wp_SCAR\snd\SCAR2_first",
				1
			}
		};
		range=25;
		volume=0.2;
		rangeCurve[]=
		{
			{0,1},
			{25,0}
		};
	};
	class NIA_SCARL_closeShot_SoundShader
	{
		samples[]=
		{
			
			{
				"hlc_core\sound\weapon\M4\Close_1",
				1
			},
			
			{
				"hlc_core\sound\weapon\M4\Close_2",
				1
			},
			
			{
				"hlc_core\sound\weapon\M4\Close_3",
				1
			},
			
			{
				"hlc_core\sound\weapon\M4\Close_4",
				1
			}
		};
		volume=1.6;
		range=50;
		rangeCurve="closeShotCurve";
	};
	class NIA_SCARL_midShot_SoundShader
	{
		samples[]=
		{
			
			{
				"\A3\Sounds_F\arsenal\weapons\Rifles\mk20\Mk20_midShot_01",
				1
			}
		};
		volume=1;
		range=2000;
		rangeCurve[]=
		{
			{0,0.2},
			{50,1},
			{300,0},
			{2000,0}
		};
	};
	class NIA_SCARL_distShot_SoundShader
	{
		samples[]=
		{
			
			{
				"\A3\Sounds_F\arsenal\weapons\Rifles\mk20\mk20_distShot_01",
				1
			},
			
			{
				"\A3\Sounds_F\arsenal\weapons\Rifles\mk20\mk20_distShot_02",
				1
			},
			
			{
				"\A3\Sounds_F\arsenal\weapons\Rifles\mk20\mk20_distShot_03",
				1
			}
		};
		volume=1;
		range=2000;
		rangeCurve[]=
		{
			{0,0},
			{50,0},
			{300,1},
			{2000,1}
		};
	};
	class NIA_SCARL_tailDistant_SoundShader
	{
		samples[]=
		{
			
			{
				"\A3\Sounds_F\arsenal\weapons\Rifles\mk20\mk20_taildistant",
				1
			}
		};
		volume=1;
		range=2000;
		rangeCurve[]=
		{
			{0,0},
			{600,0.69999999},
			{2000,1}
		};
		limitation=1;
	};
	class NIA_SCARL_tailForest_SoundShader
	{
		samples[]=
		{
			
			{
				"nia_WP_scar\snd\Mk16\Mk16_forest",
				1
			}
		};
		volume=" 2*((1-interior/1.4)*Forest/3)";
		range=250;
		rangeCurve[]=
		{
			{0,1},
			{250,0}
		};
		limitation=1;
	};
	class NIA_SCARL_tailForest_mid_SoundShader
	{
		samples[]=
		{
			
			{
				"nia_WP_scar\snd\Mk16\Mk16_forest_mid",
				1
			}
		};
		volume=" 2*((1-interior/1.4)*Forest/3)";
		rangeCurve[]=
		{
			{0,0},
			{250,1},
			{1800,1}
		};
		range=1800;
		limitation=1;
	};
	class NIA_SCARL_tailHouses_SoundShader
	{
		samples[]=
		{
			
			{
				"nia_WP_scar\snd\Mk16\Mk16_urban",
				1
			}
		};
		volume=" 2*((1-interior/1.4)*houses/3)";
		range=250;
		rangeCurve[]=
		{
			{0,1},
			{250,0}
		};
		limitation=1;
	};
	class NIA_SCARL_tailHouses_mid_SoundShader
	{
		samples[]=
		{
			
			{
				"nia_WP_scar\snd\Mk16\Mk16_urban_mid",
				1
			}
		};
		volume="2*((1-interior/1.4)*houses/3)";
		rangeCurve[]=
		{
			{0,0},
			{250,1},
			{2000,1}
		};
		range=2000;
		limitation=1;
	};
	class NIA_SCARL_tailInterior_SoundShader
	{
		samples[]=
		{
			
			{
				"nia_WP_scar\snd\Mk16\Mk16_indoor",
				1
			}
		};
		volume=" 2*((interior)*0.65)";
		range=250;
		rangeCurve[]=
		{
			{0,0.69999999},
			{250,0}
		};
		limitation=1;
	};
	class NIA_SCARL_tailInterior_mid_SoundShader
	{
		samples[]=
		{
			
			{
				"nia_WP_scar\snd\Mk16\Mk16_indoor_mid",
				1
			}
		};
		volume=" 2*((interior)*0.65)";
		rangeCurve[]=
		{
			{0,0},
			{250,0.40000001},
			{320,0}
		};
		range=500;
		limitation=1;
	};
	class NIA_SCARL_tailMeadows_SoundShader
	{
		samples[]=
		{
			
			{
				"nia_WP_scar\snd\Mk16\Mk16_meadow",
				1
			}
		};
		volume=" 2*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
		range=250;
		rangeCurve[]=
		{
			{0,1},
			{250,0}
		};
		limitation=1;
	};
	class NIA_SCARL_tailMeadows_mid_SoundShader
	{
		samples[]=
		{
			
			{
				"nia_WP_scar\snd\Mk16\Mk16_meadow_mid",
				1
			}
		};
		volume=" 2*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
		rangeCurve[]=
		{
			{0,0},
			{250,1},
			{2000,1}
		};
		range=2000;
		limitation=1;
	};
	class NIA_SCARL_tailTrees_SoundShader
	{
		samples[]=
		{
			
			{
				"nia_WP_scar\snd\Mk16\Mk16_trees",
				1
			}
		};
		volume=" 2*((1-interior/1.4)*trees/3)";
		range=250;
		rangeCurve[]=
		{
			{0,1},
			{250,0}
		};
		limitation=1;
	};
	class NIA_SCARL_tailTrees_mid_SoundShader
	{
		samples[]=
		{
			
			{
				"nia_WP_scar\snd\Mk16\Mk16_trees_mid",
				1
			}
		};
		volume=" 2*((1-interior/1.4)*trees/3)";
		rangeCurve[]=
		{
			{0,0},
			{250,1},
			{2000,1}
		};
		range=2000;
		limitation=1;
	};
	class NIA_SCARL_silencerShot_SoundShader
	{
		samples[]=
		{
			
			{
				"nia_WP_scar\snd\Generic\carbine_suppressed_close",
				1
			}
		};
		volume=0.69999999;
		range=50;
		rangeCurve[]=
		{
			{0,1},
			{50,0}
		};
	};
	class NIA_SCARL_silencerShot_mid_SoundShader
	{
		samples[]=
		{
			
			{
				"nia_WP_scar\snd\Generic\carbine_suppressed_mid",
				1
			}
		};
		volume=1;
		range=250;
		rangeCurve[]=
		{
			{0,0.2},
			{50,1},
			{250,0}
		};
	};
	class NIA_SCARL_silencerTailForest_SoundShader
	{
		samples[]=
		{
			
			{
				"nia_WP_scar\snd\Generic\carbine_suppressed_forest",
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
	class NIA_SCARL_silencerTailHouses_SoundShader
	{
		samples[]=
		{
			
			{
				"nia_WP_scar\snd\Generic\carbine_suppressed_urban",
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
	class NIA_SCARL_silencerTailInterior_SoundShader
	{
		samples[]=
		{
			
			{
				"nia_WP_scar\snd\Generic\carbine_suppressed_indoor",
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
	class NIA_SCARL_silencerTailMeadows_SoundShader
	{
		samples[]=
		{
			
			{
				"nia_WP_scar\snd\Generic\carbine_suppressed_meadow",
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
	class NIA_SCARL_silencerTailTrees_SoundShader
	{
		samples[]=
		{
			
			{
				"nia_WP_scar\snd\Generic\carbine_suppressed_trees",
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
};
class CfgSoundSets
{
	class NIA_SCARH_Shot_SoundSet
	{
		soundShaders[]=
		{
			"NIA_SCARH_closeShot_SoundShader",
			"NIA_SCARH_midShot_SoundShader",
			"NIA_SCARH_distShot_SoundShader",
			"NIA_SCARH_Closure_SoundShader"
		};
		volumeFactor=1.25;
		volumeCurve="InverseSquare2Curve";
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
	class NIA_SCARH_tail_SoundSet
	{
		soundShaders[]=
		{
			"NIA_SCARH_tailDistant_SoundShader",
			"NIA_SCARH_tailForest_SoundShader",
			"NIA_SCARH_tailHouses_SoundShader",
			"NIA_SCARH_tailInterior_SoundShader",
			"NIA_SCARH_tailMeadows_SoundShader",
			"NIA_SCARH_tailTrees_SoundShader",
			"NIA_SCARH_tailForest_mid_SoundShader",
			"NIA_SCARH_tailHouses_mid_SoundShader",
			"NIA_SCARH_tailInterior_mid_SoundShader",
			"NIA_SCARH_tailMeadows_mid_SoundShader",
			"NIA_SCARH_tailTrees_mid_SoundShader"
		};
		volumeFactor=1;
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
	class NIA_SCARH_silencerShot_SoundSet
	{
		soundShaders[]=
		{
			"NIA_SCARH_closeShot_SoundShader",
			"NIA_SCARH_silencerShot_SoundShader",
			"NIA_SCARH_Closure_SoundShader",
			"NIA_SCARH_silencerShot_mid_SoundShader"
		};
		volumeFactor=1;
		volumeCurve="InverseSquare2Curve";
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
	class NIA_SCARH_silencerTail_SoundSet
	{
		soundShaders[]=
		{
			"NIA_SCARH_silencerTailTrees_SoundShader",
			"NIA_SCARH_silencerTailForest_SoundShader",
			"NIA_SCARH_silencerTailMeadows_SoundShader",
			"NIA_SCARH_silencerTailHouses_SoundShader",
			"NIA_SCARH_silencerTailInterior_SoundShader"
		};
		volumeFactor=0.69999999;
		volumeCurve="InverseSquare2Curve";
		frequencyRandomizer=2;
		frequencyRandomizerMin=0.2;
		occlusionFactor=0.30000001;
		obstructionFactor=0;
		spatial=1;
		doppler=0;
		loop=0;
		soundShadersLimit=2;
		sound3DProcessingType="WeaponMediumShotTail3DProcessingType";
	};
	class NIA_SCARH_CQB_Shot_SoundSet
	{
		soundShaders[]=
		{
			"NIA_SCARH_CQB_closeShot_SoundShader",
			"NIA_SCARH_CQB_midShot_SoundShader",
			"NIA_SCARH_CQB_distShot_SoundShader",
			"NIA_SCARH_Closure_SoundShader"
		};
		volumeFactor=1.25;
		volumeCurve="InverseSquare2Curve";
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
	class NIA_SCARH_CQB_tail_SoundSet
	{
		soundShaders[]=
		{
			"NIA_SCARH_tailDistant_SoundShader",
			"NIA_SCARH_CQB_tailForest_SoundShader",
			"NIA_SCARH_CQB_tailHouses_SoundShader",
			"NIA_SCARH_CQB_tailInterior_SoundShader",
			"NIA_SCARH_CQB_tailMeadows_SoundShader",
			"NIA_SCARH_CQB_tailTrees_SoundShader",
			"NIA_SCARH_CQB_tailForest_mid_SoundShader",
			"NIA_SCARH_CQB_tailHouses_mid_SoundShader",
			"NIA_SCARH_CQB_tailInterior_mid_SoundShader",
			"NIA_SCARH_CQB_tailMeadows_mid_SoundShader",
			"NIA_SCARH_CQB_tailTrees_mid_SoundShader"
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
	class NIA_SCAR_300AAC_NEW_Shot_SoundSet
	{
		soundShaders[]=
		{
			"NIA_SCARH_Closure_SoundShader",
			"NIA_AR15300_NEW_Close_Shot_SoundShader",
			"NIA_AR15300_NEW_CloseDistance_Shot_SoundShader",
			"NIA_AR15300_NEW_MediumDistance_Shot_SoundShader",
			"NIA_AR15300_NEW_FarDistance_Shot_SoundShader",
			"NIA_AR15300_NEW_Interior_Shot_SoundShader",
			"NIA_AR15300_NEW_InteriorDistance_Shot_SoundShader"
		};
		volumeFactor=1.33;
		volumeCurve="InverseSquare2Curve";
		occlusionFactor=0.25;
		obstructionFactor=0.30000001;
		spatial=1;
		doppler=0;
		loop=0;
		frequencyrandomizer=0.5;
		sound3DProcessingType="WeaponMediumShot3DProcessingType";
		distanceFilter="HLC_defaultDistanceFilter";
	};
	class NIA_SCARL_Shot_SoundSet
	{
		soundShaders[]=
		{
			"NIA_SCARL_closeShot_SoundShader",
			"NIA_SCARL_midShot_SoundShader",
			"NIA_SCARL_distShot_SoundShader",
			"NIA_SCARL_Closure_SoundShader"
		};
		volumeFactor=1.25;
		volumeCurve="InverseSquare2Curve";
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
	class NIA_SCARL_tail_SoundSet
	{
		soundShaders[]=
		{
			"NIA_SCARL_tailDistant_SoundShader",
			"NIA_SCARL_tailForest_SoundShader",
			"NIA_SCARL_tailHouses_SoundShader",
			"NIA_SCARL_tailInterior_SoundShader",
			"NIA_SCARL_tailMeadows_SoundShader",
			"NIA_SCARL_tailTrees_SoundShader",
			"NIA_SCARL_tailForest_mid_SoundShader",
			"NIA_SCARL_tailHouses_mid_SoundShader",
			"NIA_SCARL_tailInterior_mid_SoundShader",
			"NIA_SCARL_tailMeadows_mid_SoundShader",
			"NIA_SCARL_tailTrees_mid_SoundShader"
		};
		volumeFactor=1;
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
	class NIA_SCARL_silencerShot_SoundSet
	{
		soundShaders[]=
		{
			"NIA_SCARH_closeShot_SoundShader",
			"NIA_SCARL_silencerShot_SoundShader",
			"NIA_SCARL_Closure_SoundShader",
			"NIA_SCARL_silencerShot_mid_SoundShader"
		};
		volumeFactor=1;
		volumeCurve="InverseSquare2Curve";
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
	class NIA_SCARL_silencerTail_SoundSet
	{
		soundShaders[]=
		{
			"NIA_SCARL_silencerTailTrees_SoundShader",
			"NIA_SCARL_silencerTailForest_SoundShader",
			"NIA_SCARL_silencerTailMeadows_SoundShader",
			"NIA_SCARL_silencerTailHouses_SoundShader",
			"NIA_SCARL_silencerTailInterior_SoundShader"
		};
		volumeFactor=0.69999999;
		volumeCurve="InverseSquare2Curve";
		frequencyRandomizer=2;
		frequencyRandomizerMin=0.2;
		occlusionFactor=0.30000001;
		obstructionFactor=0;
		spatial=1;
		doppler=0;
		loop=0;
		soundShadersLimit=2;
		sound3DProcessingType="WeaponMediumShotTail3DProcessingType";
	};
};
class CfgPatches
{
	class hlcweapons_SCAR
	{
		requiredaddons[]=
		{
			"hlcweapons_core",
			"cba_main"
		};
		units[]=
		{
			"HLC_SCAR_ammobox",
			"Weapon_hlc_wp_SCARH_STD",
			"Weapon_hlc_wp_SCARH_STD_Blk",
			"Weapon_hlc_wp_SCARH_STD_camo",
			"Weapon_hlc_wp_SCARH_STD_EGLM",
			"Weapon_hlc_wp_SCARH_STD_EGLM_Blk",
			"Weapon_hlc_wp_SCARH_STD_EGLM_camo",
			"Weapon_hlc_wp_SCARH_STD_SRX",
			"Weapon_hlc_wp_SCARH_STD_SRX_camo",
			"Weapon_hlc_wp_SCARH_STD_SRX_Blk",
			"Weapon_hlc_WP_SCARH_CQC",
			"Weapon_hlc_wp_SCARH_CQC_Blk",
			"Weapon_hlc_wp_SCARH_CQC_camo",
			"Weapon_hlc_wp_SCARH_CQC_EGLM",
			"Weapon_hlc_wp_SCARH_CQC_EGLM_Blk",
			"Weapon_hlc_wp_SCARH_CQC_EGLM_camo",
			"Weapon_hlc_wp_SCARH_CQC_SRX",
			"Weapon_hlc_wp_SCARH_CQC_SRX_camo",
			"Weapon_hlc_wp_SCARH_CQC_SRX_tranoflage",
			"Weapon_hlc_wp_SCARH_CQC_SRX_Blk",
			"Weapon_hlc_WP_SCARH_DMR",
			"Weapon_hlc_wp_SCARH_DMR_Blk",
			"Weapon_hlc_wp_SCARH_DMR_camo",
			"Weapon_hlc_wp_MK17",
			"Weapon_hlc_wp_Mk17_camo",
			"Weapon_hlc_wp_MK17_AGC",
			"Weapon_hlc_wp_MK17_AGC_camo",
			"Weapon_hlc_wp_Mk17_CQC",
			"Weapon_hlc_wp_Mk17_CQC_camo",
			"Weapon_hlc_wp_MK17_CQC_AGC",
			"Weapon_hlc_wp_MK17_CQC_AGC_camo",
			"Weapon_hlc_WP_Mk17IUR",
			"Weapon_hlc_wp_MK17IUR_camo",
			"Weapon_hlc_wp_MK17IUR_AGC",
			"Weapon_hlc_wp_MK17IUR_AGC_camo",
			"Weapon_hlc_wp_MK17IUR_556",
			"Weapon_hlc_wp_MK17IUR_556_camo",
			"Weapon_hlc_wp_MK17IUR_556_AGC",
			"Weapon_hlc_wp_MK17IUR_556_AGC_camo",
			"Weapon_hlc_wp_MK17IUR_300",
			"Weapon_hlc_wp_MK17IUR_300_camo",
			"Weapon_hlc_wp_MK17IUR_300_AGC",
			"Weapon_hlc_wp_MK17IUR_300_AGC_camo",
			"Weapon_hlc_wp_MK17IUR_762R",
			"Weapon_hlc_wp_MK17IUR_762R_camo",
			"Weapon_hlc_WP_SSR",
			"Weapon_hlc_wp_SSR_Blk",
			"Weapon_hlc_wp_SSR_camo",
			"Weapon_hlc_wp_SCARL_STD",
			"Weapon_hlc_wp_SCARL_STD_Blk",
			"Weapon_hlc_wp_SCARL_STD_camo",
			"Weapon_hlc_wp_SCARL_STD_SRX",
			"Weapon_hlc_wp_SCARL_STD_SRX_camo",
			"Weapon_hlc_wp_SCARL_STD_SRX_Blk",
			"Weapon_hlc_wp_SCARL_STD_EGLM",
			"Weapon_hlc_wp_SCARL_STD_EGLM_Blk",
			"Weapon_hlc_wp_SCARL_STD_EGLM_camo",
			"Weapon_hlc_WP_SCARL_CQC",
			"Weapon_hlc_wp_SCARL_CQC_Blk",
			"Weapon_hlc_wp_SCARL_CQC_camo",
			"Weapon_hlc_wp_SCARL_CQC_EGLM",
			"Weapon_hlc_wp_SCARL_CQC_EGLM_Blk",
			"Weapon_hlc_wp_SCARL_CQC_EGLM_camo",
			"Weapon_hlc_WP_SCARL_DMR",
			"Weapon_hlc_wp_SCARL_DMR_Blk",
			"Weapon_hlc_wp_SCARL_DMR_camo",
			"Weapon_hlc_wp_SCAR_PDW",
			"Weapon_hlc_wp_SCAR_PDW_Blk",
			"Weapon_hlc_wp_SCAR_PDW_camo",
			"Weapon_hlc_wp_SCARL_STD_300AAC",
			"Weapon_hlc_wp_SCARL_STD_300AAC_Blk",
			"Weapon_hlc_wp_SCARL_STD_300AAC_camo",
			"Weapon_hlc_wp_SCARL_STD_300AAC_SRX",
			"Weapon_hlc_wp_SCARL_STD_300AAC_SRX_camo",
			"Weapon_hlc_wp_SCARL_STD_300AAC_SRX_muddy",
			"Weapon_hlc_wp_SCARL_STD_300AAC_SRX_Blk",
			"Weapon_hlc_WP_SCARL_CQC_300AAC",
			"Weapon_hlc_wp_SCARL_CQC_300AAC_Blk",
			"Weapon_hlc_wp_SCARL_CQC_300AAC_camo"
		};
		weapons[]=
		{
			"HLC_Panel_Side_SCAR_FN5cm_Desert",
			"HLC_Panel_Side_SCAR_FN10cm_Desert",
			"HLC_Panel_Side_SCAR_FN15cm_Desert",
			"HLC_Panel_Side_SCAR_2xFN5cm_Desert",
			"HLC_Panel_Side_SCAR_Ladder_S_Desert",
			"HLC_Panel_Side_SCAR_Ladder_M_Desert",
			"HLC_Panel_Side_SCAR_Ladder_L_Desert",
			"HLC_Panel_Side_SCAR_MagpulXT_Desert",
			"HLC_Panel_Side_SCAR_XTME_Desert",
			"HLC_Panel_Side_SCAR_2xXTME_Desert",
			"HLC_Panel_Side_SCAR_4xXTME_Desert",
			"HLC_Panel_Side_SCAR_FN5cm_Black",
			"HLC_Panel_Side_SCAR_FN10cm_Black",
			"HLC_Panel_Side_SCAR_FN15cm_Black",
			"HLC_Panel_Side_SCAR_2xFN5cm_Black",
			"HLC_Panel_Side_SCAR_Ladder_S_Black",
			"HLC_Panel_Side_SCAR_Ladder_M_Black",
			"HLC_Panel_Side_SCAR_Ladder_L_Black",
			"HLC_Panel_Side_SCAR_MagpulXT_Black",
			"HLC_Panel_Side_SCAR_XTME_Black",
			"HLC_Panel_Side_SCAR_2xXTME_Black",
			"HLC_Panel_Side_SCAR_4xXTME_Black",
			"HLC_Panel_Side_SCAR_FN5cm_OD",
			"HLC_Panel_Side_SCAR_FN10cm_OD",
			"HLC_Panel_Side_SCAR_FN15cm_OD",
			"HLC_Panel_Side_SCAR_2xFN5cm_OD",
			"HLC_Panel_Side_SCAR_Ladder_S_OD",
			"HLC_Panel_Side_SCAR_Ladder_M_OD",
			"HLC_Panel_Side_SCAR_Ladder_L_OD",
			"HLC_Panel_Side_SCAR_MagpulXT_OD",
			"HLC_Panel_Side_SCAR_XTME_OD",
			"HLC_Panel_Side_SCAR_2xXTME_OD",
			"HLC_Panel_Side_SCAR_4xXTME_OD",
			"HLC_Panel_Side_SCAR_FN5cm_RG",
			"HLC_Panel_Side_SCAR_FN10cm_RG",
			"HLC_Panel_Side_SCAR_FN15cm_RG",
			"HLC_Panel_Side_SCAR_2xFN5cm_RG",
			"HLC_Panel_Side_SCAR_Ladder_S_RG",
			"HLC_Panel_Side_SCAR_Ladder_M_RG",
			"HLC_Panel_Side_SCAR_Ladder_L_RG",
			"HLC_Panel_Side_SCAR_MagpulXT_RG",
			"HLC_Panel_Side_SCAR_XTME_RG",
			"HLC_Panel_Side_SCAR_2xXTME_RG",
			"HLC_Panel_Side_SCAR_4xXTME_RG",
			"HLC_Panel_Side_SCAR_Ladder_S_Pride",
			"HLC_Panel_Side_SCAR_Ladder_M_Pride",
			"HLC_Panel_Side_SCAR_Ladder_L_Pride",
			"HLC_Panel_Side_SCAR_MagpulXT_Pride",
			"HLC_Panel_Side_SCAR_Long_FN5cm_Desert",
			"HLC_Panel_Side_SCAR_Long_FN10cm_Desert",
			"HLC_Panel_Side_SCAR_Long_FN15cm_Desert",
			"HLC_Panel_Side_SCAR_Long_2xFN5cm_Desert",
			"HLC_Panel_Side_SCAR_Long_Ladder_S_Desert",
			"HLC_Panel_Side_SCAR_Long_Ladder_M_Desert",
			"HLC_Panel_Side_SCAR_Long_Ladder_L_Desert",
			"HLC_Panel_Side_SCAR_Long_MagpulXT_Desert",
			"HLC_Panel_Side_SCAR_Long_XTME_Desert",
			"HLC_Panel_Side_SCAR_Long_2xXTME_Desert",
			"HLC_Panel_Side_SCAR_Long_4xXTME_Desert",
			"HLC_Panel_Side_SCAR_Long_FN5cm_Black",
			"HLC_Panel_Side_SCAR_Long_FN10cm_Black",
			"HLC_Panel_Side_SCAR_Long_FN15cm_Black",
			"HLC_Panel_Side_SCAR_Long_2xFN5cm_Black",
			"HLC_Panel_Side_SCAR_Long_Ladder_S_Black",
			"HLC_Panel_Side_SCAR_Long_Ladder_M_Black",
			"HLC_Panel_Side_SCAR_Long_Ladder_L_Black",
			"HLC_Panel_Side_SCAR_Long_MagpulXT_Black",
			"HLC_Panel_Side_SCAR_Long_XTME_Black",
			"HLC_Panel_Side_SCAR_Long_2xXTME_Black",
			"HLC_Panel_Side_SCAR_Long_4xXTME_Black",
			"HLC_Panel_Side_SCAR_Long_FN5cm_OD",
			"HLC_Panel_Side_SCAR_Long_FN10cm_OD",
			"HLC_Panel_Side_SCAR_Long_FN15cm_OD",
			"HLC_Panel_Side_SCAR_Long_2xFN5cm_OD",
			"HLC_Panel_Side_SCAR_Long_Ladder_S_OD",
			"HLC_Panel_Side_SCAR_Long_Ladder_M_OD",
			"HLC_Panel_Side_SCAR_Long_Ladder_L_OD",
			"HLC_Panel_Side_SCAR_Long_MagpulXT_OD",
			"HLC_Panel_Side_SCAR_Long_XTME_OD",
			"HLC_Panel_Side_SCAR_Long_2xXTME_OD",
			"HLC_Panel_Side_SCAR_Long_4xXTME_OD",
			"HLC_Panel_Side_SCAR_Long_FN5cm_RG",
			"HLC_Panel_Side_SCAR_Long_FN10cm_RG",
			"HLC_Panel_Side_SCAR_Long_FN15cm_RG",
			"HLC_Panel_Side_SCAR_Long_2xFN5cm_RG",
			"HLC_Panel_Side_SCAR_Long_Ladder_S_RG",
			"HLC_Panel_Side_SCAR_Long_Ladder_M_RG",
			"HLC_Panel_Side_SCAR_Long_Ladder_L_RG",
			"HLC_Panel_Side_SCAR_Long_MagpulXT_RG",
			"HLC_Panel_Side_SCAR_Long_XTME_RG",
			"HLC_Panel_Side_SCAR_Long_2xXTME_RG",
			"HLC_Panel_Side_SCAR_Long_4xXTME_RG",
			"HLC_Panel_Side_SCAR_Long_Ladder_S_Pride",
			"HLC_Panel_Side_SCAR_Long_Ladder_M_Pride",
			"HLC_Panel_Side_SCAR_Long_Ladder_L_Pride",
			"HLC_Panel_Side_SCAR_Long_MagpulXT_Pride",
			"hlc_wp_SCARH_STD",
			"hlc_wp_SCARH_STD_TacReload",
			"hlc_wp_SCARH_STD_grip",
			"hlc_wp_SCARH_STD_grip2",
			"hlc_wp_SCARH_STD_grip3",
			"hlc_wp_SCARH_STD_10rnd",
			"hlc_wp_SCARH_STD_10rnd_TacReload",
			"hlc_wp_SCARH_STD_10rnd_grip",
			"hlc_wp_SCARH_STD_10rnd_grip2",
			"hlc_wp_SCARH_STD_10rnd_grip3",
			"hlc_wp_SCARH_STD_Blk",
			"hlc_wp_SCARH_STD_Blk_TacReload",
			"hlc_wp_SCARH_STD_Blk_grip",
			"hlc_wp_SCARH_STD_Blk_grip2",
			"hlc_wp_SCARH_STD_Blk_grip3",
			"hlc_wp_SCARH_STD_10rnd_Blk",
			"hlc_wp_SCARH_STD_10rnd_Blk_TacReload",
			"hlc_wp_SCARH_STD_10rnd_Blk_grip",
			"hlc_wp_SCARH_STD_10rnd_Blk_grip2",
			"hlc_wp_SCARH_STD_10rnd_Blk_grip3",
			"hlc_wp_SCARH_STD_camo",
			"hlc_wp_SCARH_STD_camo_TacReload",
			"hlc_wp_SCARH_STD_camo_grip",
			"hlc_wp_SCARH_STD_camo_grip2",
			"hlc_wp_SCARH_STD_camo_grip3",
			"hlc_wp_SCARH_STD_10rnd_camo",
			"hlc_wp_SCARH_STD_10rnd_camo_TacReload",
			"hlc_wp_SCARH_STD_10rnd_camo_grip",
			"hlc_wp_SCARH_STD_10rnd_camo_grip2",
			"hlc_wp_SCARH_STD_10rnd_camo_grip3",
			"hlc_wp_SCARH_STD_EGLM",
			"hlc_wp_SCARH_STD_EGLM_TacReload",
			"hlc_wp_SCARH_STD_EGLM_Blk",
			"hlc_wp_SCARH_STD_EGLM_Blk_TacReload",
			"hlc_wp_SCARH_STD_EGLM_camo",
			"hlc_wp_SCARH_STD_EGLM_camo_TacReload",
			"hlc_wp_SCARH_STD_SRX",
			"hlc_wp_SCARH_STD_SRX_TacReload",
			"hlc_wp_SCARH_STD_SRX_grip",
			"hlc_wp_SCARH_STD_SRX_grip2",
			"hlc_wp_SCARH_STD_SRX_grip3",
			"hlc_wp_SCARH_STD_SRX_10rnd",
			"hlc_wp_SCARH_STD_SRX_10rnd_TacReload",
			"hlc_wp_SCARH_STD_SRX_10rnd_grip",
			"hlc_wp_SCARH_STD_SRX_10rnd_grip2",
			"hlc_wp_SCARH_STD_SRX_10rnd_grip3",
			"hlc_wp_SCARH_STD_SRX_camo",
			"hlc_wp_SCARH_STD_SRX_camo_TacReload",
			"hlc_wp_SCARH_STD_SRX_camo_grip",
			"hlc_wp_SCARH_STD_SRX_camo_grip2",
			"hlc_wp_SCARH_STD_SRX_camo_grip3",
			"hlc_wp_SCARH_STD_SRX_10rnd_camo",
			"hlc_wp_SCARH_STD_SRX_camo_10rnd_TacReload",
			"hlc_wp_SCARH_STD_SRX_10rnd_camo_grip",
			"hlc_wp_SCARH_STD_SRX_10rnd_camo_grip2",
			"hlc_wp_SCARH_STD_SRX_10rnd_camo_grip3",
			"hlc_wp_SCARH_STD_SRX_Blk",
			"hlc_wp_SCARH_STD_SRX_Blk_TacReload",
			"hlc_wp_SCARH_STD_SRX_Blk_grip",
			"hlc_wp_SCARH_STD_SRX_Blk_grip2",
			"hlc_wp_SCARH_STD_SRX_Blk_grip3",
			"hlc_wp_SCARH_STD_SRX_10rnd_Blk",
			"hlc_wp_SCARH_STD_SRX_Blk_10rnd_TacReload",
			"hlc_wp_SCARH_STD_SRX_10rnd_Blk_grip",
			"hlc_wp_SCARH_STD_SRX_10rnd_Blk_grip2",
			"hlc_wp_SCARH_STD_SRX_10rnd_Blk_grip3",
			"hlc_WP_SCARH_CQC",
			"hlc_wp_SCARH_CQC_TacReload",
			"hlc_wp_SCARH_CQC_grip",
			"hlc_wp_SCARH_CQC_grip2",
			"hlc_wp_SCARH_CQC_grip3",
			"hlc_wp_SCARH_CQC_10rnd",
			"hlc_wp_SCARH_CQC_10rnd_TacReload",
			"hlc_wp_SCARH_CQC_10rnd_grip",
			"hlc_wp_SCARH_CQC_10rnd_grip2",
			"hlc_wp_SCARH_CQC_10rnd_grip3",
			"hlc_wp_SCARH_CQC_Blk",
			"hlc_wp_SCARH_CQC_Blk_TacReload",
			"hlc_wp_SCARH_CQC_Blk_grip",
			"hlc_wp_SCARH_CQC_Blk_grip2",
			"hlc_wp_SCARH_CQC_Blk_grip3",
			"hlc_wp_SCARH_CQC_10rnd_Blk",
			"hlc_wp_SCARH_CQC_10rnd_Blk_TacReload",
			"hlc_wp_SCARH_CQC_10rnd_Blk_grip",
			"hlc_wp_SCARH_CQC_10rnd_Blk_grip2",
			"hlc_wp_SCARH_CQC_10rnd_Blk_grip3",
			"hlc_wp_SCARH_CQC_camo",
			"hlc_wp_SCARH_CQC_camo_TacReload",
			"hlc_wp_SCARH_CQC_camo_grip",
			"hlc_wp_SCARH_CQC_camo_grip2",
			"hlc_wp_SCARH_CQC_camo_grip3",
			"hlc_wp_SCARH_CQC_10rnd_camo",
			"hlc_wp_SCARH_CQC_10rnd_camo_TacReload",
			"hlc_wp_SCARH_CQC_10rnd_camo_grip",
			"hlc_wp_SCARH_CQC_10rnd_camo_grip2",
			"hlc_wp_SCARH_CQC_10rnd_camo_grip3",
			"hlc_wp_SCARH_cqc_EGLM",
			"hlc_wp_SCARH_cqc_EGLM_TacReload",
			"hlc_wp_SCARH_CQC_EGLM_Blk",
			"hlc_wp_SCARH_cqc_EGLM_Blk_TacReload",
			"hlc_wp_SCARH_CQC_EGLM_camo",
			"hlc_wp_SCARH_cqc_EGLM_camo_TacReload",
			"hlc_wp_SCARH_CQC_SRX",
			"hlc_wp_SCARH_CQC_SRX_TacReload",
			"hlc_wp_SCARH_CQC_SRX_grip",
			"hlc_wp_SCARH_CQC_SRX_grip2",
			"hlc_wp_SCARH_CQC_SRX_grip3",
			"hlc_wp_SCARH_CQC_SRX_10rnd",
			"hlc_wp_SCARH_CQC_SRX_10rnd_TacReload",
			"hlc_wp_SCARH_CQC_SRX_10rnd_grip",
			"hlc_wp_SCARH_CQC_SRX_10rnd_grip2",
			"hlc_wp_SCARH_CQC_SRX_10rnd_grip3",
			"hlc_wp_SCARH_CQC_SRX_camo",
			"hlc_wp_SCARH_CQC_SRX_Camo_TacReload",
			"hlc_wp_SCARH_CQC_SRX_Camo_grip",
			"hlc_wp_SCARH_CQC_SRX_Camo_grip2",
			"hlc_wp_SCARH_CQC_SRX_Camo_grip3",
			"hlc_wp_SCARH_CQC_SRX_Camo_10rnd",
			"hlc_wp_SCARH_CQC_SRX_Camo_10rnd_TacReload",
			"hlc_wp_SCARH_CQC_SRX_Camo_10rnd_grip",
			"hlc_wp_SCARH_CQC_SRX_Camo_10rnd_grip2",
			"hlc_wp_SCARH_CQC_SRX_Camo_10rnd_grip3",
			"hlc_wp_SCARH_CQC_SRX_tranoflage",
			"hlc_wp_SCARH_CQC_SRX_Tranoflage_TacReload",
			"hlc_wp_SCARH_CQC_SRX_Tranoflage_grip",
			"hlc_wp_SCARH_CQC_SRX_Tranoflage_grip2",
			"hlc_wp_SCARH_CQC_SRX_Tranoflage_grip3",
			"hlc_wp_SCARH_CQC_SRX_Tranoflage_10rnd",
			"hlc_wp_SCARH_CQC_SRX_Tranoflage_10rnd_TacReload",
			"hlc_wp_SCARH_CQC_SRX_Tranoflage_10rnd_grip",
			"hlc_wp_SCARH_CQC_SRX_Tranoflage_10rnd_grip2",
			"hlc_wp_SCARH_CQC_SRX_Tranoflage_10rnd_grip3",
			"hlc_wp_SCARH_CQC_SRX_Blk",
			"hlc_wp_SCARH_CQC_SRX_Blk_TacReload",
			"hlc_wp_SCARH_CQC_SRX_Blk_grip",
			"hlc_wp_SCARH_CQC_SRX_Blk_grip2",
			"hlc_wp_SCARH_CQC_SRX_Blk_grip3",
			"hlc_wp_SCARH_CQC_SRX_Blk_10rnd",
			"hlc_wp_SCARH_CQC_SRX_Blk_10rnd_TacReload",
			"hlc_wp_SCARH_CQC_SRX_Blk_10rnd_grip",
			"hlc_wp_SCARH_CQC_SRX_Blk_10rnd_grip2",
			"hlc_wp_SCARH_CQC_SRX_Blk_10rnd_grip3",
			"hlc_WP_SCARH_DMR",
			"hlc_wp_SCARH_DMR_TacReload",
			"hlc_wp_SCARH_DMR_grip",
			"hlc_wp_SCARH_DMR_grip2",
			"hlc_wp_SCARH_DMR_grip3",
			"hlc_wp_SCARH_DMR_10rnd",
			"hlc_wp_SCARH_DMR_10rnd_TacReload",
			"hlc_wp_SCARH_DMR_10rnd_grip",
			"hlc_wp_SCARH_DMR_10rnd_grip2",
			"hlc_wp_SCARH_DMR_10rnd_grip3",
			"hlc_wp_SCARH_DMR_Blk",
			"hlc_wp_SCARH_DMR_Blk_TacReload",
			"hlc_wp_SCARH_DMR_Blk_grip",
			"hlc_wp_SCARH_DMR_Blk_grip2",
			"hlc_wp_SCARH_DMR_Blk_grip3",
			"hlc_wp_SCARH_DMR_10rnd_Blk",
			"hlc_wp_SCARH_DMR_10Rnd_Blk_TacReload",
			"hlc_wp_SCARH_DMR_10rnd_Blk_grip",
			"hlc_wp_SCARH_DMR_10rnd_Blk_grip2",
			"hlc_wp_SCARH_DMR_10rnd_Blk_grip3",
			"hlc_wp_SCARH_DMR_camo",
			"hlc_wp_SCARH_DMR_Camo_TacReload",
			"hlc_wp_SCARH_DMR_Camo_grip",
			"hlc_wp_SCARH_DMR_Camo_grip2",
			"hlc_wp_SCARH_DMR_Camo_grip3",
			"hlc_wp_SCARH_DMR_10rnd_Camo",
			"hlc_wp_SCARH_DMR_10Rnd_Camo_TacReload",
			"hlc_wp_SCARH_DMR_10rnd_Camo_grip",
			"hlc_wp_SCARH_DMR_10rnd_Camo_grip2",
			"hlc_wp_SCARH_DMR_10rnd_Camo_grip3",
			"hlc_wp_MK17",
			"hlc_wp_Mk17_TacReload",
			"hlc_wp_Mk17_grip",
			"hlc_wp_Mk17_grip2",
			"hlc_wp_Mk17_grip3",
			"hlc_wp_Mk17_10rnd",
			"hlc_wp_Mk17_10rnd_TacReload",
			"hlc_wp_Mk17_10rnd_grip",
			"hlc_wp_Mk17_10rnd_grip2",
			"hlc_wp_Mk17_10rnd_grip3",
			"hlc_wp_Mk17_camo",
			"hlc_wp_Mk17_Camo_TacReload",
			"hlc_wp_Mk17_camo_grip",
			"hlc_wp_Mk17_camo_grip2",
			"hlc_wp_Mk17_camo_grip3",
			"hlc_wp_MK17_10rnd_Camo",
			"hlc_wp_Mk17_10rnd_Camo_TacReload",
			"hlc_wp_MK17_10rnd_Camo_grip",
			"hlc_wp_MK17_10rnd_Camo_grip2",
			"hlc_wp_MK17_10rnd_Camo_grip3",
			"hlc_wp_MK17_AGC",
			"hlc_wp_Mk17_AGC_TacReload",
			"hlc_wp_Mk17_10rnd_AGC",
			"hlc_wp_Mk17_10rnd_AGC_TacReload",
			"hlc_wp_MK17_AGC_camo",
			"hlc_wp_Mk17_AGC_camo_TacReload",
			"hlc_wp_Mk17_10rnd_AGC_camo",
			"hlc_wp_Mk17_10rnd_AGC_camo_TacReload",
			"hlc_wp_Mk17_CQC",
			"hlc_wp_Mk17_CQC_TacReload",
			"hlc_wp_Mk17_CQC_grip",
			"hlc_wp_Mk17_CQC_grip2",
			"hlc_wp_Mk17_CQC_grip3",
			"hlc_wp_Mk17_CQC_10rnd",
			"hlc_wp_Mk17_CQC_10rnd_TacReload",
			"hlc_wp_Mk17_CQC_10rnd_grip",
			"hlc_wp_Mk17_CQC_10rnd_grip2",
			"hlc_wp_Mk17_CQC_10rnd_grip3",
			"hlc_wp_Mk17_CQC_camo",
			"hlc_wp_Mk17_CQC_Camo_TacReload",
			"hlc_wp_Mk17_CQC_camo_grip",
			"hlc_wp_Mk17_CQC_camo_grip2",
			"hlc_wp_Mk17_CQC_camo_grip3",
			"hlc_wp_Mk17_CQC_10rnd_Camo",
			"hlc_wp_Mk17_CQC_10rnd_Camo_TacReload",
			"hlc_wp_Mk17_CQC_10rnd_Camo_grip",
			"hlc_wp_Mk17_CQC_10rnd_Camo_grip2",
			"hlc_wp_Mk17_CQC_10rnd_Camo_grip3",
			"hlc_wp_MK17_CQC_AGC",
			"hlc_wp_Mk17_CQC_AGC_TacReload",
			"hlc_wp_Mk17_CQC_10rnd_AGC",
			"hlc_wp_Mk17_CQC_10rnd_AGC_TacReload",
			"hlc_wp_MK17_CQC_AGC_camo",
			"hlc_wp_Mk17_CQC_AGC_camo_TacReload",
			"hlc_wp_Mk17_CQC_10rnd_AGC_camo",
			"hlc_wp_Mk17_CQC_10rnd_AGC_camo_TacReload",
			"hlc_WP_Mk17IUR",
			"hlc_wp_Mk17IUR_TacReload",
			"hlc_wp_MK17IUR_grip",
			"hlc_wp_MK17IUR_grip2",
			"hlc_wp_MK17IUR_grip3",
			"hlc_wp_Mk17IUR_10rnd",
			"hlc_wp_Mk17IUR_10rnd_TacReload",
			"hlc_wp_Mk17IUR_10rnd_grip",
			"hlc_wp_Mk17IUR_10rnd_grip2",
			"hlc_wp_Mk17IUR_10rnd_grip3",
			"hlc_wp_MK17IUR_camo",
			"hlc_wp_Mk17IUR_camo_TacReload",
			"hlc_wp_MK17IUR_camo_grip",
			"hlc_wp_MK17IUR_camo_grip2",
			"hlc_wp_MK17IUR_camo_grip3",
			"hlc_wp_Mk17IUR_10rnd_Camo",
			"hlc_wp_Mk17IUR_10rnd_Camo_TacReload",
			"hlc_wp_Mk17IUR_10rnd_Camo_grip",
			"hlc_wp_Mk17IUR_10rnd_Camo_grip2",
			"hlc_wp_Mk17IUR_10rnd_Camo_grip3",
			"hlc_wp_MK17IUR_AGC",
			"hlc_wp_MK17IUR_AGC_TacReload",
			"hlc_wp_Mk17IUR_10rnd_AGC",
			"hlc_wp_Mk17IUR_10rnd_AGC_TacReload",
			"hlc_wp_MK17IUR_AGC_camo",
			"hlc_wp_MK17IUR_AGC_camo_TacReload",
			"hlc_wp_Mk17IUR_10rnd_AGC_camo",
			"hlc_wp_Mk17IUR_10rnd_AGC_camo_TacReload",
			"hlc_wp_MK17IUR_556",
			"hlc_wp_Mk17IUR_556_TacReload",
			"hlc_wp_MK17IUR_556_grip",
			"hlc_wp_MK17IUR_556_grip2",
			"hlc_wp_MK17IUR_556_grip3",
			"hlc_wp_MK17IUR_556_x15",
			"hlc_wp_Mk17IUR_556_x15_TacReload",
			"hlc_wp_MK17IUR_556_x15_grip",
			"hlc_wp_MK17IUR_556_x15_grip2",
			"hlc_wp_MK17IUR_556_x15_grip3",
			"hlc_wp_MK17IUR_556_camo",
			"hlc_wp_Mk17IUR_556_camo_TacReload",
			"hlc_wp_MK17IUR_556_camo_grip",
			"hlc_wp_MK17IUR_556_camo_grip2",
			"hlc_wp_MK17IUR_556_camo_grip3",
			"hlc_wp_MK17IUR_556_x15_camo",
			"hlc_wp_Mk17IUR_556_x15_camo_TacReload",
			"hlc_wp_MK17IUR_556_x15_camo_grip",
			"hlc_wp_MK17IUR_556_x15_camo_grip2",
			"hlc_wp_MK17IUR_556_x15_camo_grip3",
			"hlc_wp_MK17IUR_556_AGC",
			"hlc_wp_Mk17IUR_556_AGC_TacReload",
			"hlc_wp_MK17IUR_556_AGC_x15",
			"hlc_wp_MK17IUR_556_AGC_x15_TacReload",
			"hlc_wp_MK17IUR_556_AGC_camo",
			"hlc_wp_Mk17IUR_556_AGC_TacReload_camo",
			"hlc_wp_MK17IUR_556_AGC_x15_camo",
			"hlc_wp_MK17IUR_556_AGC_x15_camo_TacReload",
			"hlc_wp_MK17IUR_300",
			"hlc_wp_Mk17IUR_300_TacReload",
			"hlc_wp_MK17IUR_300_grip",
			"hlc_wp_MK17IUR_300_grip2",
			"hlc_wp_MK17IUR_300_grip3",
			"hlc_wp_MK17IUR_300_x15",
			"hlc_wp_Mk17IUR_300_x15_TacReload",
			"hlc_wp_MK17IUR_300_x15_grip",
			"hlc_wp_MK17IUR_300_x15_grip2",
			"hlc_wp_MK17IUR_300_x15_grip3",
			"hlc_wp_MK17IUR_300_camo",
			"hlc_wp_Mk17IUR_300_camo_TacReload",
			"hlc_wp_MK17IUR_300_camo_grip",
			"hlc_wp_MK17IUR_300_camo_grip2",
			"hlc_wp_MK17IUR_300_camo_grip3",
			"hlc_wp_MK17IUR_300_x15_camo",
			"hlc_wp_Mk17IUR_300_x15_camo_TacReload",
			"hlc_wp_MK17IUR_300_x15_camo_grip",
			"hlc_wp_MK17IUR_300_x15_camo_grip2",
			"hlc_wp_MK17IUR_300_x15_camo_grip3",
			"hlc_wp_MK17IUR_300_AGC",
			"hlc_wp_Mk17IUR_300_AGC_TacReload",
			"hlc_wp_MK17IUR_300_AGC_x15",
			"hlc_wp_Mk17IUR_300_AGC_x15_TacReload",
			"hlc_wp_MK17IUR_300_AGC_camo",
			"hlc_wp_Mk17IUR_300_AGC_camo_TacReload",
			"hlc_wp_MK17IUR_300_AGC_x15_camo",
			"hlc_wp_Mk17IUR_300_AGC_x15_camo_TacReload",
			"hlc_wp_MK17IUR_762R",
			"hlc_wp_Mk17IUR_762R_TacReload",
			"hlc_wp_MK17IUR_762R_grip",
			"hlc_wp_MK17IUR_762R_grip2",
			"hlc_wp_MK17IUR_762R_grip3",
			"hlc_wp_MK17IUR_762R_camo",
			"hlc_wp_Mk17IUR_762R_camo_TacReload",
			"hlc_wp_MK17IUR_762R_camo_grip",
			"hlc_wp_MK17IUR_762R_camo_grip2",
			"hlc_wp_MK17IUR_762R_camo_grip3",
			"hlc_WP_SSR",
			"hlc_wp_SSR_TacReload",
			"hlc_wp_SSR_grip",
			"hlc_wp_SSR_grip2",
			"hlc_wp_SSR_grip3",
			"hlc_wp_SSR_10rnd",
			"hlc_wp_SSR_10rnd_TacReload",
			"hlc_wp_SSR_10rnd_grip",
			"hlc_wp_SSR_10rnd_grip2",
			"hlc_wp_SSR_10rnd_grip3",
			"hlc_wp_SSR_Blk",
			"hlc_wp_SSR_Blk_TacReload",
			"hlc_wp_SSR_Blk_grip",
			"hlc_wp_SSR_Blk_grip2",
			"hlc_wp_SSR_Blk_grip3",
			"hlc_wp_SSR_blk_10rnd",
			"hlc_wp_SSR_Blk_10rnd_TacReload",
			"hlc_wp_SSR_Blk_10rnd_grip",
			"hlc_wp_SSR_Blk_10rnd_grip2",
			"hlc_wp_SSR_Blk_10rnd_grip3",
			"hlc_wp_SSR_camo",
			"hlc_wp_SSR_Camo_TacReload",
			"hlc_wp_SSR_camo_grip",
			"hlc_wp_SSR_camo_grip2",
			"hlc_wp_SSR_camo_grip3",
			"hlc_wp_SSR_camo_10rnd",
			"hlc_wp_SSR_Camo_10rnd_TacReload",
			"hlc_wp_SSR_camo_10rnd_grip",
			"hlc_wp_SSR_camo_10rnd_grip2",
			"hlc_wp_SSR_camo_10rnd_grip3",
			"hlc_wp_SCARL_STD",
			"hlc_wp_SCARL_STD_TacReload",
			"hlc_wp_SCARL_STD_grip",
			"hlc_wp_SCARL_STD_grip2",
			"hlc_wp_SCARL_STD_grip3",
			"hlc_wp_SCARL_STD_x15",
			"hlc_wp_SCARL_STD_x15_TacReload",
			"hlc_wp_SCARL_STD_x15_grip",
			"hlc_wp_SCARL_STD_x15_grip2",
			"hlc_wp_SCARL_STD_x15_grip3",
			"hlc_wp_SCARL_STD_blk",
			"hlc_wp_SCARL_STD_Blk_TacReload",
			"hlc_wp_SCARL_STD_Blk_grip",
			"hlc_wp_SCARL_STD_Blk_grip2",
			"hlc_wp_SCARL_STD_Blk_grip3",
			"hlc_wp_SCARL_STD_Blk_x15",
			"hlc_wp_SCARL_STD_Blk_x15_TacReload",
			"hlc_wp_SCARL_STD_Blk_x15_grip",
			"hlc_wp_SCARL_STD_Blk_x15_grip2",
			"hlc_wp_SCARL_STD_Blk_x15_grip3",
			"hlc_wp_SCARL_STD_camo",
			"hlc_wp_SCARL_STD_Camo_TacReload",
			"hlc_wp_SCARL_STD_camo_grip",
			"hlc_wp_SCARL_STD_camo_grip2",
			"hlc_wp_SCARL_STD_camo_grip3",
			"hlc_wp_SCARL_STD_Camo_x15",
			"hlc_wp_SCARL_STD_Camo_x15_TacReload",
			"hlc_wp_SCARL_STD_Camo_x15_grip",
			"hlc_wp_SCARL_STD_Camo_x15_grip2",
			"hlc_wp_SCARL_STD_Camo_x15_grip3",
			"hlc_wp_SCARL_STD_SRX",
			"hlc_wp_SCARL_STD_SRX_TacReload",
			"hlc_wp_SCARL_STD_SRX_grip",
			"hlc_wp_SCARL_STD_SRX_grip2",
			"hlc_wp_SCARL_STD_SRX_grip3",
			"hlc_wp_SCARL_STD_SRX_X15",
			"hlc_wp_SCARL_STD_SRX_x15_TacReload",
			"hlc_wp_SCARL_STD_SRX_X15_grip",
			"hlc_wp_SCARL_STD_SRX_X15_grip2",
			"hlc_wp_SCARL_STD_SRX_X15_grip3",
			"hlc_wp_SCARL_STD_SRX_camo",
			"hlc_wp_SCARL_STD_SRX_camo_TacReload",
			"hlc_wp_SCARL_STD_SRX_camo_grip",
			"hlc_wp_SCARL_STD_SRX_camo_grip2",
			"hlc_wp_SCARL_STD_SRX_camo_grip3",
			"hlc_wp_SCARL_STD_SRX_X15_camo",
			"hlc_wp_SCARL_STD_SRX_x15_camo_TacReload",
			"hlc_wp_SCARL_STD_SRX_X15_camo_grip",
			"hlc_wp_SCARL_STD_SRX_X15_camo_grip2",
			"hlc_wp_SCARL_STD_SRX_X15_camo_grip3",
			"hlc_wp_SCARL_STD_SRX_Blk",
			"hlc_wp_SCARL_STD_SRX_blk_TacReload",
			"hlc_wp_SCARL_STD_SRX_Blk_grip",
			"hlc_wp_SCARL_STD_SRX_Blk_grip2",
			"hlc_wp_SCARL_STD_SRX_Blk_grip3",
			"hlc_wp_SCARL_STD_SRX_X15_Blk",
			"hlc_wp_SCARL_STD_SRX_x15_blk_TacReload",
			"hlc_wp_SCARL_STD_SRX_X15_Blk_grip",
			"hlc_wp_SCARL_STD_SRX_X15_Blk_grip2",
			"hlc_wp_SCARL_STD_SRX_X15_Blk_grip3",
			"hlc_wp_SCARL_STD_EGLM",
			"hlc_wp_SCARL_STD_EGLM_TacReload",
			"hlc_wp_SCARL_STD_EGLM_Blk",
			"hlc_wp_SCARL_STD_EGLM_Blk_TacReload",
			"hlc_wp_SCARL_STD_EGLM_camo",
			"hlc_wp_SCARL_STD_EGLM_camo_TacReload",
			"hlc_WP_SCARL_CQC",
			"hlc_wp_SCARL_CQC_TacReload",
			"hlc_wp_SCARL_CQC_grip",
			"hlc_wp_SCARL_CQC_grip2",
			"hlc_wp_SCARL_CQC_grip3",
			"hlc_wp_SCARL_CQC_x15",
			"hlc_wp_SCARL_CQC_x15_TacReload",
			"hlc_wp_SCARL_CQC_x15_grip",
			"hlc_wp_SCARL_CQC_x15_grip2",
			"hlc_wp_SCARL_CQC_x15_grip3",
			"hlc_wp_SCARL_CQC_Blk",
			"hlc_wp_SCARL_CQC_Blk_TacReload",
			"hlc_wp_SCARL_CQC_Blk_grip",
			"hlc_wp_SCARL_CQC_Blk_grip2",
			"hlc_wp_SCARL_CQC_Blk_grip3",
			"hlc_wp_SCARL_CQC_Blk_x15",
			"hlc_wp_SCARL_CQC_Blk_x15_TacReload",
			"hlc_wp_SCARL_CQC_Blk_x15_grip",
			"hlc_wp_SCARL_CQC_Blk_x15_grip2",
			"hlc_wp_SCARL_CQC_Blk_x15_grip3",
			"hlc_wp_SCARL_CQC_camo",
			"hlc_wp_SCARL_CQC_Camo_TacReload",
			"hlc_wp_SCARL_CQC_camo_grip",
			"hlc_wp_SCARL_CQC_camo_grip2",
			"hlc_wp_SCARL_CQC_camo_grip3",
			"hlc_wp_SCARL_CQC_Camo_x15",
			"hlc_wp_SCARL_CQC_Camo_x15_TacReload",
			"hlc_wp_SCARL_CQC_Camo_x15_grip",
			"hlc_wp_SCARL_CQC_Camo_x15_grip2",
			"hlc_wp_SCARL_CQC_Camo_x15_grip3",
			"hlc_wp_SCARL_CQC_EGLM",
			"hlc_wp_SCARL_CQC_EGLM_TacReload",
			"hlc_wp_SCARL_CQC_EGLM_Blk",
			"hlc_wp_SCARL_CQC_EGLM_Blk_TacReload",
			"hlc_wp_SCARL_CQC_EGLM_camo",
			"hlc_wp_SCARL_CQC_EGLM_camo_TacReload",
			"hlc_WP_SCARL_DMR",
			"hlc_wp_SCARL_DMR_TacReload",
			"hlc_wp_SCARL_DMR_grip",
			"hlc_wp_SCARL_DMR_grip2",
			"hlc_wp_SCARL_DMR_grip3",
			"hlc_wp_SCARL_DMR_x15",
			"hlc_wp_SCARL_DMR_x15_TacReload",
			"hlc_wp_SCARL_DMR_x15_grip",
			"hlc_wp_SCARL_DMR_x15_grip2",
			"hlc_wp_SCARL_DMR_x15_grip3",
			"hlc_wp_SCARL_DMR_Blk",
			"hlc_wp_SCARL_DMR_blk_TacReload",
			"hlc_wp_SCARL_DMR_Blk_grip",
			"hlc_wp_SCARL_DMR_Blk_grip2",
			"hlc_wp_SCARL_DMR_Blk_grip3",
			"hlc_wp_SCARL_DMR_Blk_x15",
			"hlc_wp_SCARL_DMR_blk_x15_TacReload",
			"hlc_wp_SCARL_DMR_Blk_x15_grip",
			"hlc_wp_SCARL_DMR_Blk_x15_grip2",
			"hlc_wp_SCARL_DMR_Blk_x15_grip3",
			"hlc_wp_SCARL_DMR_camo",
			"hlc_wp_SCARL_DMR_camo_TacReload",
			"hlc_wp_SCARL_DMR_camo_grip",
			"hlc_wp_SCARL_DMR_camo_grip2",
			"hlc_wp_SCARL_DMR_camo_grip3",
			"hlc_wp_SCARL_DMR_Camo_x15",
			"hlc_wp_SCARL_DMR_camo_x15_TacReload",
			"hlc_wp_SCARL_DMR_Camo_x15_grip",
			"hlc_wp_SCARL_DMR_Camo_x15_grip2",
			"hlc_wp_SCARL_DMR_Camo_x15_grip3",
			"hlc_wp_SCAR_PDW",
			"hlc_wp_SCAR_PDW_TacReload",
			"hlc_wp_SCAR_PDW_grip",
			"hlc_wp_SCAR_PDW_grip2",
			"hlc_wp_SCAR_PDW_grip3",
			"hlc_wp_SCAR_PDW_x15",
			"hlc_wp_SCAR_PDW_x15_TacReload",
			"hlc_wp_SCAR_PDW_x15_grip",
			"hlc_wp_SCAR_PDW_x15_grip2",
			"hlc_wp_SCAR_PDW_x15_grip3",
			"hlc_wp_SCAR_PDW_Blk",
			"hlc_wp_SCAR_PDW_Blk_TacReload",
			"hlc_wp_SCAR_PDW_Blk_grip",
			"hlc_wp_SCAR_PDW_Blk_grip2",
			"hlc_wp_SCAR_PDW_Blk_grip3",
			"hlc_wp_SCAR_PDW_Blk_x15",
			"hlc_wp_SCAR_PDW_Blk_x15_TacReload",
			"hlc_wp_SCAR_PDW_Blk_x15_grip",
			"hlc_wp_SCAR_PDW_Blk_x15_grip2",
			"hlc_wp_SCAR_PDW_Blk_x15_grip3",
			"hlc_wp_SCAR_PDW_camo",
			"hlc_wp_SCAR_PDW_Camo_TacReload",
			"hlc_wp_SCAR_PDW_camo_grip",
			"hlc_wp_SCAR_PDW_camo_grip2",
			"hlc_wp_SCAR_PDW_camo_grip3",
			"hlc_wp_SCAR_PDW_Camo_x15",
			"hlc_wp_SCAR_PDW_Camo_x15_TacReload",
			"hlc_wp_SCAR_PDW_Camo_x15_grip",
			"hlc_wp_SCAR_PDW_Camo_x15_grip2",
			"hlc_wp_SCAR_PDW_Camo_x15_grip3",
			"hlc_wp_SCARL_STD_300AAC",
			"hlc_WP_SCARL_STD_300AAC_TacReload",
			"hlc_wp_SCARL_STD_300AAC_grip",
			"hlc_wp_SCARL_STD_300AAC_grip2",
			"hlc_wp_SCARL_STD_300AAC_grip3",
			"hlc_wp_SCARL_STD_300AAC_x15",
			"hlc_WP_SCARL_STD_300AAC_x15_TacReload",
			"hlc_wp_SCARL_STD_300AAC_x15_grip",
			"hlc_wp_SCARL_STD_300AAC_x15_grip2",
			"hlc_wp_SCARL_STD_300AAC_x15_grip3",
			"hlc_wp_SCARL_STD_300AAC_Blk",
			"hlc_WP_SCARL_STD_300AAC_Blk_TacReload",
			"hlc_wp_SCARL_STD_300AAC_Blk_grip",
			"hlc_wp_SCARL_STD_300AAC_Blk_grip2",
			"hlc_wp_SCARL_STD_300AAC_Blk_grip3",
			"hlc_wp_SCARL_STD_300AAC_Blk_x15",
			"hlc_WP_SCARL_STD_300AAC_Blk_x15_TacReload",
			"hlc_wp_SCARL_STD_300AAC_Blk_x15_grip",
			"hlc_wp_SCARL_STD_300AAC_Blk_x15_grip2",
			"hlc_wp_SCARL_STD_300AAC_Blk_x15_grip3",
			"hlc_wp_SCARL_STD_300AAC_camo",
			"hlc_WP_SCARL_STD_300AAC_Camo_TacReload",
			"hlc_wp_SCARL_STD_300AAC_camo_grip",
			"hlc_wp_SCARL_STD_300AAC_camo_grip2",
			"hlc_wp_SCARL_STD_300AAC_camo_grip3",
			"hlc_wp_SCARL_STD_300AAC_Camo_x15",
			"hlc_WP_SCARL_STD_300AAC_Camo_x15_TacReload",
			"hlc_wp_SCARL_STD_300AAC_Camo_x15_grip",
			"hlc_wp_SCARL_STD_300AAC_Camo_x15_grip2",
			"hlc_wp_SCARL_STD_300AAC_Camo_x15_grip3",
			"hlc_WP_SCARL_CQC_300AAC",
			"hlc_WP_SCARL_CQC_300AAC_TacReload",
			"hlc_wp_SCARL_CQC_300AAC_grip",
			"hlc_wp_SCARL_CQC_300AAC_grip2",
			"hlc_wp_SCARL_CQC_300AAC_grip3",
			"hlc_wp_SCARL_CQC_300AAC_x15",
			"hlc_WP_SCARL_CQC_300AAC_x15_TacReload",
			"hlc_wp_SCARL_CQC_300AAC_x15_grip",
			"hlc_wp_SCARL_CQC_300AAC_x15_grip2",
			"hlc_wp_SCARL_CQC_300AAC_x15_grip3",
			"hlc_wp_SCARL_CQC_300AAC_Blk",
			"hlc_WP_SCARL_CQC_300AAC_Blk_TacReload",
			"hlc_wp_SCARL_CQC_300AAC_Blk_grip",
			"hlc_wp_SCARL_CQC_300AAC_Blk_grip2",
			"hlc_wp_SCARL_CQC_300AAC_Blk_grip3",
			"hlc_wp_SCARL_CQC_300AAC_Blk_x15",
			"hlc_WP_SCARL_CQC_300AAC_Blk_x15_TacReload",
			"hlc_wp_SCARL_CQC_300AAC_Blk_x15_grip",
			"hlc_wp_SCARL_CQC_300AAC_Blk_x15_grip2",
			"hlc_wp_SCARL_CQC_300AAC_Blk_x15_grip3",
			"hlc_wp_SCARL_CQC_300AAC_camo",
			"hlc_WP_SCARL_CQC_300AAC_Camo_TacReload",
			"hlc_wp_SCARL_CQC_300AAC_camo_grip",
			"hlc_wp_SCARL_CQC_300AAC_camo_grip2",
			"hlc_wp_SCARL_CQC_300AAC_camo_grip3",
			"hlc_wp_SCARL_CQC_300AAC_Camo_x15",
			"hlc_WP_SCARL_CQC_300AAC_Camo_x15_TacReload",
			"hlc_wp_SCARL_CQC_300AAC_Camo_x15_grip",
			"hlc_wp_SCARL_CQC_300AAC_Camo_x15_grip2",
			"hlc_wp_SCARL_CQC_300AAC_Camo_x15_grip3",
			"hlc_wp_SCARL_STD_300AAC_SRX",
			"hlc_WP_SCARL_STD_300AAC_SRX_TacReload",
			"hlc_wp_SCARL_STD_300AAC_SRX_grip",
			"hlc_wp_SCARL_STD_300AAC_SRX_grip2",
			"hlc_wp_SCARL_STD_300AAC_SRX_grip3",
			"hlc_wp_SCARL_STD_300AAC_SRX_X15",
			"hlc_WP_SCARL_STD_300AAC_SRX_x15_TacReload",
			"hlc_wp_SCARL_STD_300AAC_SRX_X15_grip",
			"hlc_wp_SCARL_STD_300AAC_SRX_X15_grip2",
			"hlc_wp_SCARL_STD_300AAC_SRX_X15_grip3",
			"hlc_wp_SCARL_STD_300AAC_SRX_camo",
			"hlc_WP_SCARL_STD_300AAC_SRX_camo_TacReload",
			"hlc_wp_SCARL_STD_300AAC_SRX_camo_grip",
			"hlc_wp_SCARL_STD_300AAC_SRX_camo_grip2",
			"hlc_wp_SCARL_STD_300AAC_SRX_camo_grip3",
			"hlc_wp_SCARL_STD_300AAC_SRX_X15_camo",
			"hlc_WP_SCARL_STD_300AAC_SRX_x15_camo_TacReload",
			"hlc_wp_SCARL_STD_300AAC_SRX_X15_camo_grip",
			"hlc_wp_SCARL_STD_300AAC_SRX_X15_camo_grip2",
			"hlc_wp_SCARL_STD_300AAC_SRX_X15_camo_grip3",
			"hlc_wp_SCARL_STD_300AAC_SRX_muddy",
			"hlc_WP_SCARL_STD_300AAC_SRX_Muddy_TacReload",
			"hlc_wp_SCARL_STD_300AAC_SRX_muddy_grip",
			"hlc_wp_SCARL_STD_300AAC_SRX_muddy_grip2",
			"hlc_wp_SCARL_STD_300AAC_SRX_muddy_grip3",
			"hlc_wp_SCARL_STD_300AAC_SRX_X15_muddy",
			"hlc_WP_SCARL_STD_300AAC_SRX_x15_Muddy_TacReload",
			"hlc_wp_SCARL_STD_300AAC_SRX_X15_muddy_grip",
			"hlc_wp_SCARL_STD_300AAC_SRX_X15_muddy_grip2",
			"hlc_wp_SCARL_STD_300AAC_SRX_X15_muddy_grip3",
			"hlc_wp_SCARL_STD_300AAC_SRX_Blk",
			"hlc_WP_SCARL_STD_300AAC_SRX_blk_TacReload",
			"hlc_wp_SCARL_STD_300AAC_SRX_Blk_grip",
			"hlc_wp_SCARL_STD_300AAC_SRX_Blk_grip2",
			"hlc_wp_SCARL_STD_300AAC_SRX_Blk_grip3",
			"hlc_wp_SCARL_STD_300AAC_SRX_X15_Blk",
			"hlc_WP_SCARL_STD_300AAC_SRX_x15_blk_TacReload",
			"hlc_wp_SCARL_STD_300AAC_SRX_X15_Blk_grip",
			"hlc_wp_SCARL_STD_300AAC_SRX_X15_Blk_grip2",
			"hlc_wp_SCARL_STD_300AAC_SRX_X15_Blk_grip3",
			"hlc_wp_SCARL_CQC_300AAC_EGLM",
			"hlc_WP_SCARL_CQC_300AAC_EGLM_TacReload",
			"hlc_wp_SCARL_CQC_300AAC_EGLM_Blk",
			"hlc_WP_SCARL_CQC_300AAC_EGLM_Blk_TacReload",
			"hlc_wp_SCARL_CQC_300AAC_EGLM_camo",
			"hlc_WP_SCARL_CQC_300AAC_EGLM_camo_TacReload",
			"hlc_wp_SCARL_STD_300AAC_EGLM",
			"hlc_WP_SCARL_STD_300AAC_EGLM_TacReload",
			"hlc_wp_SCARL_STD_300AAC_EGLM_Blk",
			"hlc_WP_SCARL_STD_300AAC_EGLM_Blk_TacReload",
			"hlc_wp_SCARL_STD_300AAC_EGLM_camo",
			"hlc_WP_SCARL_STD_300AAC_EGLM_camo_TacReload"
		};
		magazines[]=
		{
			"hlc_20Rnd_762x51_B_SCARH",
			"hlc_20Rnd_762x51_mk316_SCARH",
			"hlc_20Rnd_762x51_barrier_SCARH",
			"hlc_20Rnd_762x51_T_SCARH",
			"hlc_20Rnd_762x51_TDim_SCARH",
			"hlc_20rnd_762x51_M_SCARH",
			"hlc_20rnd_762x51_MDIM_SCARH",
			"hlc_20Rnd_762x51_S_SCARH",
			"hlc_20Rnd_762x51_B_SCARH_Tan",
			"hlc_20Rnd_762x51_mk316_SCARH_tan",
			"hlc_20Rnd_762x51_barrier_SCARH_tan",
			"hlc_20Rnd_762x51_TDim_SCARH_tan",
			"hlc_20Rnd_762x51_T_SCARH_tan",
			"hlc_20Rnd_762x51_M_SCARH_tan",
			"hlc_20Rnd_762x51_MDIM_SCARH_tan",
			"hlc_20Rnd_762x51_S_SCARH_tan",
			"hlc_20Rnd_762x51_B_SCARH_camo",
			"hlc_20Rnd_762x51_mk316_SCARH_camo",
			"hlc_20Rnd_762x51_barrier_SCARH_camo",
			"hlc_20Rnd_762x51_TDim_SCARH_camo",
			"hlc_20Rnd_762x51_T_SCARH_camo",
			"hlc_20Rnd_762x51_M_SCARH_camo",
			"hlc_20Rnd_762x51_MDIM_SCARH_camo",
			"hlc_20Rnd_762x51_S_SCARH_camo",
			"hlc_20Rnd_762x51_B_SCARH_MW2",
			"hlc_20Rnd_762x51_barrier_SCARH_MW2",
			"hlc_20Rnd_762x51_mk316_SCARH_MW2",
			"hlc_20Rnd_762x51_TDIM_SCARH_MW2",
			"hlc_20Rnd_762x51_T_SCARH_MW2",
			"hlc_20Rnd_762x51_M_SCARH_MW2",
			"hlc_20Rnd_762x51_MDIM_SCARH_MW2",
			"hlc_20Rnd_762x51_S_SCARH_MW2",
			"hlc_10Rnd_762x51_B_SCARH",
			"hlc_10Rnd_762x51_mk316_SCARH",
			"hlc_10Rnd_762x51_barrier_SCARH",
			"hlc_10Rnd_762x51_T_SCARH",
			"hlc_10Rnd_762x51_TDim_SCARH",
			"hlc_10Rnd_762x51_S_SCARH",
			"hlc_10Rnd_762x51_B_SCARH_Tan",
			"hlc_10Rnd_762x51_mk316_SCARH_tan",
			"hlc_10Rnd_762x51_barrier_SCARH_tan",
			"hlc_10Rnd_762x51_TDim_SCARH_tan",
			"hlc_10Rnd_762x51_T_SCARH_tan",
			"hlc_10Rnd_762x51_S_SCARH_tan",
			"hlc_10Rnd_762x51_B_SCARH_camo",
			"hlc_10Rnd_762x51_mk316_SCARH_camo",
			"hlc_10Rnd_762x51_barrier_SCARH_camo",
			"hlc_10Rnd_762x51_TDim_SCARH_camo",
			"hlc_10Rnd_762x51_T_SCARH_camo",
			"hlc_10Rnd_762x51_S_SCARH_camo",
			"hlc_30rnd_556x45_EPR_SCAR",
			"hlc_30rnd_556x45_SOST_SCAR",
			"hlc_30rnd_556x45_SPR_SCAR",
			"hlc_30rnd_556x45_S_SCAR",
			"hlc_30rnd_556x45_M_SCAR",
			"hlc_30rnd_556x45_t_SCAR",
			"hlc_30rnd_556x45_MDim_SCAR",
			"hlc_30rnd_556x45_TDim_SCAR"
		};
		version="v1.06";
		author="toadie";
	};
};
class cfgMods
{
	class Niarms_SCAR
	{
		name="NIArsenal: SCAR Rifles";
		picture="nia_wp_SCAR\tex\ui\NIArms1_ca.paa";
		dir="@NIArsenal";
		hideName=1;
		hidePicture=0;
		action="http://credmo.updatedtuesdays.com/tier1";
		author="Toadie";
		logo="nia_wp_SCAR\tex\ui\NIArms1_ca.paa";
		logoOver="nia_wp_SCAR\tex\ui\NIArms1_ca.paa";
		logoSmall="nia_wp_SCAR\tex\ui\NIArms1_ca.paa";
	};
};
class asdg_SlotInfo;
class asdg_FrontSideRail: asdg_SlotInfo
{
	class compatibleItems;
};
class asdg_OpticRail1913;
class asdg_OpticRail1913_short;
class asdg_OpticRail1913_long;
class asdg_UnderSlot;
class nia_rifle_bipodsgrips_slot;
class nia_rifle_gripod_slot;
class nia_charms_slot;
class asdg_MuzzleSlot_556;
class asdg_MuzzleSlot_762;
class nia_rifle_grips_slot: nia_rifle_gripod_slot
{
	linkProxy="\hlc_core\mesh\nia_grip_proxy";
	class compatibleItems
	{
	};
};
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class UnderBarrelSlot;
class CfgMagazineWells
{
	class CBA_762x51_SCAR
	{
		NIA_mags[]=
		{
			"hlc_10Rnd_762x51_B_SCARH_tan",
			"hlc_10Rnd_762x51_mk316_SCARH_tan",
			"hlc_10Rnd_762x51_Barrier_SCARH_tan",
			"hlc_10Rnd_762x51_t_SCARH_tan",
			"hlc_10Rnd_762x51_TDim_SCARH_tan",
			"hlc_10Rnd_762x51_S_SCARH_tan",
			"hlc_10Rnd_762x51_B_SCARH",
			"hlc_10Rnd_762x51_mk316_SCARH",
			"hlc_10Rnd_762x51_Barrier_SCARH",
			"hlc_10Rnd_762x51_t_SCARH",
			"hlc_10Rnd_762x51_TDim_SCARH",
			"hlc_10Rnd_762x51_S_SCARH",
			"hlc_10Rnd_762x51_B_SCARH_camo",
			"hlc_10Rnd_762x51_mk316_SCARH_camo",
			"hlc_10Rnd_762x51_Barrier_SCARH_camo",
			"hlc_10Rnd_762x51_t_SCARH_camo",
			"hlc_10Rnd_762x51_TDim_SCARH_camo",
			"hlc_10Rnd_762x51_S_SCARH_camo"
		};
	};
	class CBA_762x51_SCAR_EGLM
	{
		NIA_mags_EGLM[]=
		{
			"hlc_20Rnd_762x51_B_SCARH_tan",
			"hlc_20Rnd_762x51_mk316_SCARH_tan",
			"hlc_20Rnd_762x51_Barrier_SCARH_tan",
			"hlc_20Rnd_762x51_t_SCARH_tan",
			"hlc_20Rnd_762x51_TDim_SCARH_tan",
			"hlc_20rnd_762x51_M_SCARH_tan",
			"hlc_20rnd_762x51_MDIM_SCARH_tan",
			"hlc_20Rnd_762x51_S_SCARH_tan",
			"hlc_20Rnd_762x51_S_SCARH_tan",
			"hlc_20Rnd_762x51_B_SCARH",
			"hlc_20Rnd_762x51_mk316_SCARH",
			"hlc_20Rnd_762x51_Barrier_SCARH",
			"hlc_20Rnd_762x51_t_SCARH",
			"hlc_20Rnd_762x51_TDim_SCARH",
			"hlc_20rnd_762x51_M_SCARH",
			"hlc_20rnd_762x51_MDIM_SCARH",
			"hlc_20Rnd_762x51_S_SCARH",
			"hlc_20Rnd_762x51_B_SCARH_camo",
			"hlc_20Rnd_762x51_mk316_SCARH_camo",
			"hlc_20Rnd_762x51_Barrier_SCARH_camo",
			"hlc_20Rnd_762x51_t_SCARH_camo",
			"hlc_20Rnd_762x51_TDim_SCARH_camo",
			"hlc_20rnd_762x51_M_SCARH_camo",
			"hlc_20rnd_762x51_MDIM_SCARH_camo",
			"hlc_20Rnd_762x51_S_SCARH_camo",
			"hlc_20Rnd_762x51_B_SCARH_MW2",
			"hlc_20Rnd_762x51_barrier_SCARH_MW2",
			"hlc_20Rnd_762x51_mk316_SCARH_MW2",
			"hlc_20Rnd_762x51_TDIM_SCARH_MW2",
			"hlc_20Rnd_762x51_T_SCARH_MW2",
			"hlc_20Rnd_762x51_M_SCARH_MW2",
			"hlc_20Rnd_762x51_MDIM_SCARH_MW2",
			"hlc_20Rnd_762x51_S_SCARH_MW2"
		};
	};
	class CBA_556x45_STANAG
	{
		NIA_mags_SCARL[]=
		{
			"hlc_30rnd_556x45_EPR_SCAR",
			"hlc_30rnd_556x45_SOST_SCAR",
			"hlc_30rnd_556x45_SPR_SCAR",
			"hlc_30rnd_556x45_S_SCAR",
			"hlc_30rnd_556x45_M_SCAR",
			"hlc_30rnd_556x45_t_SCAR",
			"hlc_30rnd_556x45_MDim_SCAR",
			"hlc_30rnd_556x45_TDim_SCAR"
		};
	};
	class CBA_300BLK_STANAG
	{
		NIA_mags_SCARL[]=
		{
			"hlc_30rnd_300BLK_SCAR",
			"hlc_30rnd_300BLK_SCAR_T",
			"hlc_30rnd_300BLK_SCAR_S"
		};
	};
};
class CfgMagazines
{
	class 30Rnd_556x45_Stanag;
	class hlc_20Rnd_762x51_B_SCARH: 30Rnd_556x45_Stanag
	{
		dlc="Niarms_SCAR";
		author="Toadie, Spartan0536";
		ammo="HLC_762x51_ball";
		count=20;
		descriptionshort="$STR_NIA_DESC_20Rnd_762x51_B_fal";
		displayname="$STR_NIA_20rnd_762x51_b_scarh";
		initspeed=908.40002;
		mass=16.8514;
		lastroundstracer=1;
		picture="\nia_wp_SCAR\tex\ui\ammo\m_SCARH-Black_EPR_ca.paa";
		model="\nia_wp_SCAR\mesh\Mag\20rnd_762NATO_MK17.p3d";
		modelSpecial="\nia_wp_SCAR\mesh\Mag\Proxy\20rnd_762NATO_Mk17_OEM";
		hiddenSelections[]=
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"nia_wp_SCAR\tex\Toadie_SCAR\Magazine_SCARH_OEM_co.paa",
			"nia_wp_scar\tex\toadie_scar\acc_30cal_magpul_green_co.paa"
		};
		HiddenSelectionsMaterials[]=
		{
			"nia_wp_SCAR\mat\Magazine_SCARH_OEM.rvmat"
		};
		modelSpecialIsProxy=1;
		scope=2;
		tracersevery=0;
		displaynameshort="$STR_NIA_762NATO_EPR";
	};
	class hlc_20Rnd_762x51_mk316_SCARH: hlc_20Rnd_762x51_B_SCARH
	{
		author="Toadie, Spartan0536";
		ammo="HLC_762x51_MK316_20in";
		count=20;
		descriptionshort="$STR_NIA_DESC_20Rnd_762x51_sblr_fal";
		displayname="$STR_NIA_20rnd_762x51_Mk316_scarh";
		initspeed=731;
		mass=16.8514;
		lastroundstracer=1;
		picture="\nia_wp_SCAR\tex\ui\ammo\m_SCARH-Black_SPR_ca.paa";
		model="\nia_wp_SCAR\mesh\Mag\20rnd_762NATO_MK17.p3d";
		scope=2;
		tracersevery=0;
		displaynameshort="$STR_NIA_762NATO_SBLR";
	};
	class hlc_20Rnd_762x51_barrier_SCARH: hlc_20Rnd_762x51_B_SCARH
	{
		author="Toadie, Spartan0536";
		ammo="HLC_762x51_Barrier";
		count=20;
		descriptionshort="$STR_NIA_DESC_20Rnd_762x51_sost_fal";
		displayname="$STR_NIA_20rnd_762x51_SOST_scarh";
		model="\nia_wp_SCAR\mesh\Mag\20rnd_762NATO_MK17.p3d";
		initspeed=890.40002;
		mass=15.59572;
		lastroundstracer=1;
		picture="\nia_wp_SCAR\tex\ui\ammo\m_SCARH-Black_SOST_ca.paa";
		scope=2;
		tracersevery=0;
		displaynameshort="$STR_NIA_762NATO_SOST";
	};
	class hlc_20Rnd_762x51_T_SCARH: hlc_20Rnd_762x51_B_SCARH
	{
		author="Toadie, Spartan0536";
		ammo="HLC_762x51_tracer";
		descriptionshort="$STR_NIA_DESC_20Rnd_762x51_T_fal";
		displayname="$STR_NIA_20rnd_762x51_Tracer_scarh";
		model="\nia_wp_SCAR\mesh\Mag\20rnd_762NATO_MK17.p3d";
		lastroundstracer=0;
		scope=2;
		mass=16.178579;
		tracersevery=1;
		picture="\nia_wp_SCAR\tex\ui\ammo\m_SCARH-Black_T_ca.paa";
		displaynameshort="$STR_NIA_762NATO_Tracer";
	};
	class hlc_20Rnd_762x51_TDim_SCARH: hlc_20Rnd_762x51_B_SCARH
	{
		author="Toadie, Spartan0536";
		ammo="HLC_B_762x51_Tracer_Dim";
		descriptionshort="$STR_NIA_DESC_20Rnd_762x51_Tdim_fal";
		displayname="$STR_NIA_20rnd_762x51_IRDIM_scarh";
		model="\nia_wp_SCAR\mesh\Mag\20rnd_762NATO_MK17.p3d";
		lastroundstracer=0;
		scope=2;
		mass=16.178579;
		tracersevery=1;
		picture="\nia_wp_SCAR\tex\ui\ammo\m_SCARH-Black_T_ca.paa";
		displaynameshort="$STR_NIA_762NATO_IRDIM";
	};
	class hlc_20rnd_762x51_M_SCARH: hlc_20Rnd_762x51_B_SCARH
	{
		author="Toadie, Spartan0536";
		count=20;
		mass=16.514809;
		descriptionshort="$STR_NIA_DESC_20Rnd_762x51_M_fal";
		displayname="$STR_NIA_20rnd_762x51_M_FAL";
		model="\nia_wp_SCAR\mesh\Mag\20rnd_762NATO_MK17.p3d";
		initspeed=908.40002;
		lastroundstracer=3;
		picture="\nia_wp_SCAR\tex\ui\ammo\m_SCARH-Black_m_ca.paa";
		scope=2;
		tracersevery=4;
		displaynameshort="$STR_NIA_762NATO_M";
	};
	class hlc_20rnd_762x51_MDIM_SCARH: hlc_20Rnd_762x51_B_SCARH
	{
		ammo="HLC_B_762x51_Tracer_Dim";
		author="Toadie, Spartan0536";
		count=20;
		descriptionshort="$STR_NIA_DESC_20Rnd_762x51_Mdim_fal";
		displayname="$STR_NIA_20rnd_762x51_MDim_scarh";
		model="\nia_wp_SCAR\mesh\Mag\20rnd_762NATO_MK17.p3d";
		initspeed=908.40002;
		mass=16.514809;
		lastroundstracer=3;
		picture="\nia_wp_SCAR\tex\ui\ammo\m_SCARH-Black_m_ca.paa";
		scope=2;
		tracersevery=4;
		displaynameshort="$STR_NIA_762NATO_MDim";
	};
	class hlc_20Rnd_762x51_S_SCARH: hlc_20Rnd_762x51_B_SCARH
	{
		author="Toadie, Spartan0536";
		ammo="HLC_762x51_BTSub";
		descriptionshort="$STR_NIA_DESC_20Rnd_762x51_s_fal";
		displayname="$STR_NIA_20rnd_762x51_Subsonic_scarh";
		model="\nia_wp_SCAR\mesh\Mag\20rnd_762NATO_MK17.p3d";
		lastroundstracer=0;
		scope=2;
		mass=17.594606;
		tracersevery=0;
		initspeed=325;
		displaynameshort="$STR_NIA_762NATO_Subsonic";
		picture="\nia_wp_SCAR\tex\ui\ammo\m_SCARH-Black_s_ca.paa";
	};
	class hlc_20Rnd_762x51_B_SCARH_Tan: hlc_20Rnd_762x51_B_SCARH
	{
		dlc="Niarms_SCAR";
		author="Toadie, Spartan0536";
		displayname="$STR_NIA_20rnd_762x51_b_scarh_Tan";
		hiddenSelectionsTextures[]=
		{
			"nia_wp_SCAR\tex\Toadie_SCAR\Magazine_SCARH_OEM_tan_co.paa"
		};
		picture="\nia_wp_SCAR\tex\ui\ammo\m_SCARH-TAN_EPR_ca.paa";
	};
	class hlc_20Rnd_762x51_mk316_SCARH_tan: hlc_20Rnd_762x51_mk316_SCARH
	{
		dlc="Niarms_SCAR";
		author="Toadie, Spartan0536";
		displayname="$STR_NIA_20rnd_762x51_Mk316_scarh_Tan";
		hiddenSelectionsTextures[]=
		{
			"nia_wp_SCAR\tex\Toadie_SCAR\Magazine_SCARH_OEM_tan_co.paa"
		};
		picture="\nia_wp_SCAR\tex\ui\ammo\m_SCARH-TAN_SPR_ca.paa";
	};
	class hlc_20Rnd_762x51_barrier_SCARH_tan: hlc_20Rnd_762x51_barrier_SCARH
	{
		dlc="Niarms_SCAR";
		author="Toadie, Spartan0536";
		displayname="$STR_NIA_20rnd_762x51_SOST_scarh_Tan";
		hiddenSelectionsTextures[]=
		{
			"nia_wp_SCAR\tex\Toadie_SCAR\Magazine_SCARH_OEM_tan_co.paa"
		};
		picture="\nia_wp_SCAR\tex\ui\ammo\m_SCARH-TAN_SOST_ca.paa";
	};
	class hlc_20Rnd_762x51_TDim_SCARH_tan: hlc_20Rnd_762x51_TDim_SCARH
	{
		dlc="Niarms_SCAR";
		author="Toadie, Spartan0536";
		displayname="$STR_NIA_20rnd_762x51_IRDIM_scarh_Tan";
		hiddenSelectionsTextures[]=
		{
			"nia_wp_SCAR\tex\Toadie_SCAR\Magazine_SCARH_OEM_tan_co.paa"
		};
		picture="\nia_wp_SCAR\tex\ui\ammo\m_SCARH-TAN_T_ca.paa";
	};
	class hlc_20Rnd_762x51_T_SCARH_tan: hlc_20Rnd_762x51_T_SCARH
	{
		dlc="Niarms_SCAR";
		author="Toadie, Spartan0536";
		displayname="$STR_NIA_20rnd_762x51_Tracer_scarh_Tan";
		hiddenSelectionsTextures[]=
		{
			"nia_wp_SCAR\tex\Toadie_SCAR\Magazine_SCARH_OEM_tan_co.paa"
		};
		picture="\nia_wp_SCAR\tex\ui\ammo\m_SCARH-TAN_T_ca.paa";
	};
	class hlc_20Rnd_762x51_M_SCARH_tan: hlc_20rnd_762x51_M_SCARH
	{
		dlc="Niarms_SCAR";
		author="Toadie, Spartan0536";
		displayname="$STR_NIA_20rnd_762x51_m_scarh_Tan";
		hiddenSelectionsTextures[]=
		{
			"nia_wp_SCAR\tex\Toadie_SCAR\Magazine_SCARH_OEM_tan_co.paa"
		};
		picture="\nia_wp_SCAR\tex\ui\ammo\m_SCARH-TAN_M_ca.paa";
	};
	class hlc_20Rnd_762x51_MDIM_SCARH_tan: hlc_20rnd_762x51_MDIM_SCARH
	{
		dlc="Niarms_SCAR";
		author="Toadie, Spartan0536";
		displayname="$STR_NIA_20rnd_762x51_MDIM_scarh_Tan";
		hiddenSelectionsTextures[]=
		{
			"nia_wp_SCAR\tex\Toadie_SCAR\Magazine_SCARH_OEM_tan_co.paa"
		};
		picture="\nia_wp_SCAR\tex\ui\ammo\m_SCARH-TAN_M_ca.paa";
	};
	class hlc_20Rnd_762x51_S_SCARH_tan: hlc_20Rnd_762x51_S_SCARH
	{
		dlc="Niarms_SCAR";
		author="Toadie, Spartan0536";
		displayname="$STR_NIA_20rnd_762x51_Subsonic_scarh_Tan";
		hiddenSelectionsTextures[]=
		{
			"nia_wp_SCAR\tex\Toadie_SCAR\Magazine_SCARH_OEM_tan_co.paa"
		};
		picture="\nia_wp_SCAR\tex\ui\ammo\m_SCARH-TAN_S_ca.paa";
	};
	class hlc_20Rnd_762x51_B_SCARH_camo: hlc_20Rnd_762x51_B_SCARH
	{
		dlc="Niarms_SCAR";
		author="Toadie, Spartan0536";
		displayname="$STR_NIA_20rnd_762x51_b_scarh_camo";
		hiddenSelectionsTextures[]=
		{
			"nia_wp_SCAR\tex\Toadie_SCAR\Magazine_SCARH_OEM_camo_co.paa"
		};
		HiddenSelectionsMaterials[]=
		{
			"nia_wp_SCAR\mat\Magazine_SCARH_OEM_Camo.rvmat"
		};
		picture="\nia_wp_SCAR\tex\ui\ammo\m_SCARH-camo_EPR_ca.paa";
	};
	class hlc_20Rnd_762x51_mk316_SCARH_camo: hlc_20Rnd_762x51_mk316_SCARH
	{
		dlc="Niarms_SCAR";
		author="Toadie, Spartan0536";
		displayname="$STR_NIA_20rnd_762x51_Mk316_scarh_camo";
		hiddenSelectionsTextures[]=
		{
			"nia_wp_SCAR\tex\Toadie_SCAR\Magazine_SCARH_OEM_camo_co.paa"
		};
		HiddenSelectionsMaterials[]=
		{
			"nia_wp_SCAR\mat\Magazine_SCARH_OEM_Camo.rvmat"
		};
		picture="\nia_wp_SCAR\tex\ui\ammo\m_SCARH-camo_SPR_ca.paa";
	};
	class hlc_20Rnd_762x51_barrier_SCARH_camo: hlc_20Rnd_762x51_barrier_SCARH
	{
		dlc="Niarms_SCAR";
		author="Toadie, Spartan0536";
		displayname="$STR_NIA_20rnd_762x51_SOST_scarh_camo";
		hiddenSelectionsTextures[]=
		{
			"nia_wp_SCAR\tex\Toadie_SCAR\Magazine_SCARH_OEM_camo_co.paa"
		};
		HiddenSelectionsMaterials[]=
		{
			"nia_wp_SCAR\mat\Magazine_SCARH_OEM_Camo.rvmat"
		};
		picture="\nia_wp_SCAR\tex\ui\ammo\m_SCARH-camo_SOST_ca.paa";
	};
	class hlc_20Rnd_762x51_TDim_SCARH_camo: hlc_20Rnd_762x51_TDim_SCARH
	{
		dlc="Niarms_SCAR";
		author="Toadie, Spartan0536";
		displayname="$STR_NIA_20rnd_762x51_IRDIM_scarh_camo";
		hiddenSelectionsTextures[]=
		{
			"nia_wp_SCAR\tex\Toadie_SCAR\Magazine_SCARH_OEM_camo_co.paa"
		};
		HiddenSelectionsMaterials[]=
		{
			"nia_wp_SCAR\mat\Magazine_SCARH_OEM_Camo.rvmat"
		};
		picture="\nia_wp_SCAR\tex\ui\ammo\m_SCARH-camo_t_ca.paa";
	};
	class hlc_20Rnd_762x51_T_SCARH_camo: hlc_20Rnd_762x51_T_SCARH
	{
		dlc="Niarms_SCAR";
		author="Toadie, Spartan0536";
		displayname="$STR_NIA_20rnd_762x51_Tracer_scarh_camo";
		hiddenSelectionsTextures[]=
		{
			"nia_wp_SCAR\tex\Toadie_SCAR\Magazine_SCARH_OEM_camo_co.paa"
		};
		HiddenSelectionsMaterials[]=
		{
			"nia_wp_SCAR\mat\Magazine_SCARH_OEM_Camo.rvmat"
		};
		picture="\nia_wp_SCAR\tex\ui\ammo\m_SCARH-camo_t_ca.paa";
	};
	class hlc_20Rnd_762x51_M_SCARH_camo: hlc_20rnd_762x51_M_SCARH
	{
		dlc="Niarms_SCAR";
		author="Toadie, Spartan0536";
		displayname="$STR_NIA_20rnd_762x51_m_scarh_camo";
		hiddenSelectionsTextures[]=
		{
			"nia_wp_SCAR\tex\Toadie_SCAR\Magazine_SCARH_OEM_camo_co.paa"
		};
		HiddenSelectionsMaterials[]=
		{
			"nia_wp_SCAR\mat\Magazine_SCARH_OEM_Camo.rvmat"
		};
		picture="\nia_wp_SCAR\tex\ui\ammo\m_SCARH-camo_m_ca.paa";
	};
	class hlc_20Rnd_762x51_MDIM_SCARH_camo: hlc_20rnd_762x51_MDIM_SCARH
	{
		dlc="Niarms_SCAR";
		author="Toadie, Spartan0536";
		displayname="$STR_NIA_20rnd_762x51_MDIM_scarh_camo";
		hiddenSelectionsTextures[]=
		{
			"nia_wp_SCAR\tex\Toadie_SCAR\Magazine_SCARH_OEM_camo_co.paa"
		};
		HiddenSelectionsMaterials[]=
		{
			"nia_wp_SCAR\mat\Magazine_SCARH_OEM_Camo.rvmat"
		};
		picture="\nia_wp_SCAR\tex\ui\ammo\m_SCARH-camo_m_ca.paa";
	};
	class hlc_20Rnd_762x51_S_SCARH_camo: hlc_20Rnd_762x51_S_SCARH
	{
		dlc="Niarms_SCAR";
		author="Toadie, Spartan0536";
		displayname="$STR_NIA_20rnd_762x51_Subsonic_scarh_camo";
		hiddenSelectionsTextures[]=
		{
			"nia_wp_SCAR\tex\Toadie_SCAR\Magazine_SCARH_OEM_camo_co.paa"
		};
		HiddenSelectionsMaterials[]=
		{
			"nia_wp_SCAR\mat\Magazine_SCARH_OEM_Camo.rvmat"
		};
		picture="\nia_wp_SCAR\tex\ui\ammo\m_SCARH-camo_s_ca.paa";
	};
	class hlc_20Rnd_762x51_B_SCARH_MW2: hlc_20Rnd_762x51_B_SCARH
	{
		dlc="Niarms_SCAR";
		author="Toadie, Spartan0536";
		model="\nia_wp_SCAR\mesh\Mag\20rnd_762NATO_MK17_Magpul.p3d";
		modelSpecial="\nia_wp_SCAR\mesh\Mag\Proxy\20rnd_762NATO_Mk17_OEM_Magpul";
		displayname="$STR_NIA_20rnd_762x51_b_scarh_MW2";
		picture="\nia_wp_SCAR\tex\ui\ammo\m_SCARH-MW2_EPR_ca.paa";
	};
	class hlc_20Rnd_762x51_barrier_SCARH_MW2: hlc_20Rnd_762x51_barrier_SCARH
	{
		dlc="Niarms_SCAR";
		author="Toadie, Spartan0536";
		model="\nia_wp_SCAR\mesh\Mag\20rnd_762NATO_MK17_Magpul.p3d";
		modelSpecial="\nia_wp_SCAR\mesh\Mag\Proxy\20rnd_762NATO_Mk17_OEM_Magpul";
		picture="\nia_wp_SCAR\tex\ui\ammo\m_SCARH-MW2_spr_ca.paa";
		displayname="$STR_NIA_20rnd_762x51_SOST_scarh_MW2";
	};
	class hlc_20Rnd_762x51_mk316_SCARH_MW2: hlc_20Rnd_762x51_mk316_SCARH
	{
		dlc="Niarms_SCAR";
		author="Toadie, Spartan0536";
		model="\nia_wp_SCAR\mesh\Mag\20rnd_762NATO_MK17_Magpul.p3d";
		modelSpecial="\nia_wp_SCAR\mesh\Mag\Proxy\20rnd_762NATO_Mk17_OEM_Magpul";
		picture="\nia_wp_SCAR\tex\ui\ammo\m_SCARH-MW2_sost_ca.paa";
		displayname="$STR_NIA_20rnd_762x51_mk316_scarh_MW2";
	};
	class hlc_20Rnd_762x51_TDIM_SCARH_MW2: hlc_20Rnd_762x51_TDim_SCARH
	{
		dlc="Niarms_SCAR";
		author="Toadie, Spartan0536";
		model="\nia_wp_SCAR\mesh\Mag\20rnd_762NATO_MK17_Magpul.p3d";
		modelSpecial="\nia_wp_SCAR\mesh\Mag\Proxy\20rnd_762NATO_Mk17_OEM_Magpul";
		picture="\nia_wp_SCAR\tex\ui\ammo\m_SCARH-MW2_t_ca.paa";
		displayname="$STR_NIA_20rnd_762x51_IRDIM_scarh_MW2";
	};
	class hlc_20Rnd_762x51_T_SCARH_MW2: hlc_20Rnd_762x51_T_SCARH
	{
		dlc="Niarms_SCAR";
		author="Toadie, Spartan0536";
		model="\nia_wp_SCAR\mesh\Mag\20rnd_762NATO_MK17_Magpul.p3d";
		modelSpecial="\nia_wp_SCAR\mesh\Mag\Proxy\20rnd_762NATO_Mk17_OEM_Magpul";
		picture="\nia_wp_SCAR\tex\ui\ammo\m_SCARH-MW2_t_ca.paa";
		displayname="$STR_NIA_20rnd_762x51_Tracer_scarh_MW2";
	};
	class hlc_20Rnd_762x51_M_SCARH_MW2: hlc_20rnd_762x51_M_SCARH
	{
		dlc="Niarms_SCAR";
		author="Toadie, Spartan0536";
		model="\nia_wp_SCAR\mesh\Mag\20rnd_762NATO_MK17_Magpul.p3d";
		modelSpecial="\nia_wp_SCAR\mesh\Mag\Proxy\20rnd_762NATO_Mk17_OEM_Magpul";
		displayname="$STR_NIA_20rnd_762x51_M_scarh_MW2";
		picture="\nia_wp_SCAR\tex\ui\ammo\m_SCARH-MW2_m_ca.paa";
	};
	class hlc_20Rnd_762x51_MDIM_SCARH_MW2: hlc_20rnd_762x51_MDIM_SCARH
	{
		dlc="Niarms_SCAR";
		author="Toadie, Spartan0536";
		model="\nia_wp_SCAR\mesh\Mag\20rnd_762NATO_MK17_Magpul.p3d";
		modelSpecial="\nia_wp_SCAR\mesh\Mag\Proxy\20rnd_762NATO_Mk17_OEM_Magpul";
		picture="\nia_wp_SCAR\tex\ui\ammo\m_SCARH-MW2_m_ca.paa";
		displayname="$STR_NIA_20rnd_762x51_Mdim_scarh_MW2";
	};
	class hlc_20Rnd_762x51_S_SCARH_MW2: hlc_20Rnd_762x51_S_SCARH
	{
		dlc="Niarms_SCAR";
		author="Toadie, Spartan0536";
		model="\nia_wp_SCAR\mesh\Mag\20rnd_762NATO_MK17_Magpul.p3d";
		modelSpecial="\nia_wp_SCAR\mesh\Mag\Proxy\20rnd_762NATO_Mk17_OEM_Magpul";
		picture="\nia_wp_SCAR\tex\ui\ammo\m_SCARH-MW2_s_ca.paa";
		displayname="$STR_NIA_20rnd_762x51_subsonic_scarh_MW2";
	};
	class hlc_10Rnd_762x51_B_SCARH: 30Rnd_556x45_Stanag
	{
		author="Toadie";
		ammo="HLC_762x51_ball";
		count=10;
		descriptionshort="$STR_NIA_DESC_10Rnd_762x51_B_fal";
		displayname="$STR_NIA_10Rnd_762x51_B_scarh";
		initspeed=870;
		mass=8.701252;
		lastroundstracer=0;
		picture="\nia_wp_SCAR\tex\ui\ammo\M_SCARH_10Rrnd-Black_EPR_ca.paa";
		model="\nia_wp_SCAR\mesh\Mag\10rnd_762NATO_MK17.p3d";
		modelSpecial="\nia_wp_SCAR\mesh\Mag\proxy\10rnd_762NATO_Mk17_OEM";
		modelSpecialIsProxy=1;
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"nia_wp_SCAR\tex\Toadie_SCAR\Magazine_SCARH_OEM_co.paa"
		};
		HiddenSelectionsMaterials[]=
		{
			"nia_wp_SCAR\mat\Magazine_SCARH_OEM.rvmat"
		};
		scope=2;
		tracersevery=0;
		displaynameshort="$STR_NIA_762NATO_EPR";
	};
	class hlc_10Rnd_762x51_mk316_SCARH: hlc_10Rnd_762x51_B_SCARH
	{
		author="Toadie";
		ammo="HLC_762x51_MK316_20in";
		count=10;
		descriptionshort="$STR_NIA_DESC_10Rnd_762x51_sblr_fal";
		displayname="$STR_NIA_10Rnd_762x51_Mk316_scarh";
		initspeed=890;
		mass=8.701252;
		lastroundstracer=0;
		picture="\nia_wp_SCAR\tex\ui\ammo\M_SCARH_10Rrnd-Black_SPR_ca.paa";
		scope=2;
		tracersevery=0;
		displaynameshort="$STR_NIA_762NATO_SBLR";
	};
	class hlc_10Rnd_762x51_barrier_SCARH: hlc_10Rnd_762x51_B_SCARH
	{
		author="Toadie";
		ammo="HLC_762x51_Barrier";
		count=10;
		descriptionshort="$STR_NIA_DESC_10Rnd_762x51_sost_fal";
		displayname="$STR_NIA_10Rnd_762x51_SOST_scarh";
		initspeed=850;
		mass=8.0734119;
		lastroundstracer=0;
		picture="\nia_wp_SCAR\tex\ui\ammo\M_SCARH_10Rrnd-Black_SOST_ca.paa";
		scope=2;
		tracersevery=0;
		displaynameshort="$STR_NIA_762NATO_SOST";
	};
	class hlc_10Rnd_762x51_T_SCARH: hlc_10Rnd_762x51_B_SCARH
	{
		author="Toadie";
		ammo="HLC_762x51_tracer";
		descriptionshort="$STR_NIA_DESC_10Rnd_762x51_T_fal";
		displayname="$STR_NIA_10Rnd_762x51_Tracer_scarh";
		lastroundstracer=0;
		scope=2;
		mass=8.3648424;
		tracersevery=1;
		picture="\nia_wp_SCAR\tex\ui\ammo\M_SCARH_10Rrnd-Black_T_ca.paa";
		displaynameshort="$STR_NIA_762NATO_Tracer";
	};
	class hlc_10Rnd_762x51_TDim_SCARH: hlc_10Rnd_762x51_B_SCARH
	{
		author="Toadie";
		ammo="HLC_B_762x51_Tracer_Dim";
		descriptionshort="$STR_NIA_DESC_10Rnd_762x51_Tdim_fal";
		displayname="$STR_NIA_10Rnd_762x51_IRDIM_scarh";
		lastroundstracer=0;
		scope=2;
		mass=8.3648424;
		tracersevery=1;
		picture="\nia_wp_SCAR\tex\ui\ammo\M_SCARH_10Rrnd-Black_T_ca.paa";
		displaynameshort="$STR_NIA_762NATO_IRDIM";
	};
	class hlc_10Rnd_762x51_S_SCARH: hlc_10Rnd_762x51_B_SCARH
	{
		author="Toadie";
		ammo="HLC_762x51_BTSub";
		descriptionshort="$STR_NIA_DESC_10Rnd_762x51_s_fal";
		displayname="$STR_NIA_10Rnd_762x51_Subsonic_scarh";
		lastroundstracer=0;
		scope=2;
		mass=9.072855;
		tracersevery=0;
		initspeed=325;
		displaynameshort="$STR_NIA_762NATO_Subsonic";
		picture="\nia_wp_SCAR\tex\ui\ammo\M_SCARH_10Rrnd-Black_T_ca.paa";
	};
	class hlc_10Rnd_762x51_B_SCARH_Tan: hlc_10Rnd_762x51_B_SCARH
	{
		dlc="Niarms_SCAR";
		author="Toadie, Spartan0536";
		displayname="$STR_NIA_10Rnd_762x51_b_scarh_Tan";
		hiddenSelectionsTextures[]=
		{
			"nia_wp_SCAR\tex\Toadie_SCAR\Magazine_SCARH_OEM_tan_co.paa"
		};
		picture="\nia_wp_SCAR\tex\ui\ammo\M_SCARH_10Rrnd-tan_EPR_ca.paa";
	};
	class hlc_10Rnd_762x51_mk316_SCARH_tan: hlc_10Rnd_762x51_mk316_SCARH
	{
		dlc="Niarms_SCAR";
		author="Toadie, Spartan0536";
		displayname="$STR_NIA_10Rnd_762x51_Mk316_scarh_Tan";
		hiddenSelectionsTextures[]=
		{
			"nia_wp_SCAR\tex\Toadie_SCAR\Magazine_SCARH_OEM_tan_co.paa"
		};
		picture="\nia_wp_SCAR\tex\ui\ammo\M_SCARH_10Rrnd-tan_spr_ca.paa";
	};
	class hlc_10Rnd_762x51_barrier_SCARH_tan: hlc_10Rnd_762x51_barrier_SCARH
	{
		dlc="Niarms_SCAR";
		author="Toadie, Spartan0536";
		displayname="$STR_NIA_10Rnd_762x51_SOST_scarh_Tan";
		hiddenSelectionsTextures[]=
		{
			"nia_wp_SCAR\tex\Toadie_SCAR\Magazine_SCARH_OEM_tan_co.paa"
		};
		picture="\nia_wp_SCAR\tex\ui\ammo\M_SCARH_10Rrnd-tan_sost_ca.paa";
	};
	class hlc_10Rnd_762x51_TDim_SCARH_tan: hlc_10Rnd_762x51_TDim_SCARH
	{
		dlc="Niarms_SCAR";
		author="Toadie, Spartan0536";
		displayname="$STR_NIA_10Rnd_762x51_IRDIM_scarh_Tan";
		hiddenSelectionsTextures[]=
		{
			"nia_wp_SCAR\tex\Toadie_SCAR\Magazine_SCARH_OEM_tan_co.paa"
		};
		picture="\nia_wp_SCAR\tex\ui\ammo\M_SCARH_10Rrnd-tan_t_ca.paa";
	};
	class hlc_10Rnd_762x51_T_SCARH_tan: hlc_10Rnd_762x51_T_SCARH
	{
		dlc="Niarms_SCAR";
		author="Toadie, Spartan0536";
		displayname="$STR_NIA_10Rnd_762x51_Tracer_scarh_Tan";
		hiddenSelectionsTextures[]=
		{
			"nia_wp_SCAR\tex\Toadie_SCAR\Magazine_SCARH_OEM_tan_co.paa"
		};
		picture="\nia_wp_SCAR\tex\ui\ammo\M_SCARH_10Rrnd-tan_t_ca.paa";
	};
	class hlc_10Rnd_762x51_S_SCARH_tan: hlc_10Rnd_762x51_S_SCARH
	{
		dlc="Niarms_SCAR";
		author="Toadie, Spartan0536";
		displayname="$STR_NIA_10Rnd_762x51_Subsonic_scarh_Tan";
		hiddenSelectionsTextures[]=
		{
			"nia_wp_SCAR\tex\Toadie_SCAR\Magazine_SCARH_OEM_tan_co.paa"
		};
		picture="\nia_wp_SCAR\tex\ui\ammo\M_SCARH_10Rrnd-tan_S_ca.paa";
	};
	class hlc_10Rnd_762x51_B_SCARH_camo: hlc_10Rnd_762x51_B_SCARH
	{
		dlc="Niarms_SCAR";
		author="Toadie, Spartan0536";
		displayname="$STR_NIA_10Rnd_762x51_b_scarh_camo";
		hiddenSelectionsTextures[]=
		{
			"nia_wp_SCAR\tex\Toadie_SCAR\Magazine_SCARH_OEM_camo_co.paa"
		};
		HiddenSelectionsMaterials[]=
		{
			"nia_wp_SCAR\mat\Magazine_SCARH_OEM_Camo.rvmat"
		};
		picture="\nia_wp_SCAR\tex\ui\ammo\M_SCARH_10Rrnd-camo_EPR_ca.paa";
	};
	class hlc_10Rnd_762x51_mk316_SCARH_camo: hlc_10Rnd_762x51_mk316_SCARH
	{
		dlc="Niarms_SCAR";
		author="Toadie, Spartan0536";
		displayname="$STR_NIA_10Rnd_762x51_Mk316_scarh_camo";
		hiddenSelectionsTextures[]=
		{
			"nia_wp_SCAR\tex\Toadie_SCAR\Magazine_SCARH_OEM_camo_co.paa"
		};
		HiddenSelectionsMaterials[]=
		{
			"nia_wp_SCAR\mat\Magazine_SCARH_OEM_Camo.rvmat"
		};
		picture="\nia_wp_SCAR\tex\ui\ammo\M_SCARH_10Rrnd-camo_spr_ca.paa";
	};
	class hlc_10Rnd_762x51_barrier_SCARH_camo: hlc_10Rnd_762x51_barrier_SCARH
	{
		dlc="Niarms_SCAR";
		author="Toadie, Spartan0536";
		displayname="$STR_NIA_10Rnd_762x51_SOST_scarh_camo";
		hiddenSelectionsTextures[]=
		{
			"nia_wp_SCAR\tex\Toadie_SCAR\Magazine_SCARH_OEM_camo_co.paa"
		};
		HiddenSelectionsMaterials[]=
		{
			"nia_wp_SCAR\mat\Magazine_SCARH_OEM_Camo.rvmat"
		};
		picture="\nia_wp_SCAR\tex\ui\ammo\M_SCARH_10Rrnd-camo_sost_ca.paa";
	};
	class hlc_10Rnd_762x51_TDim_SCARH_camo: hlc_10Rnd_762x51_TDim_SCARH
	{
		dlc="Niarms_SCAR";
		author="Toadie, Spartan0536";
		displayname="$STR_NIA_10Rnd_762x51_IRDIM_scarh_camo";
		hiddenSelectionsTextures[]=
		{
			"nia_wp_SCAR\tex\Toadie_SCAR\Magazine_SCARH_OEM_camo_co.paa"
		};
		HiddenSelectionsMaterials[]=
		{
			"nia_wp_SCAR\mat\Magazine_SCARH_OEM_Camo.rvmat"
		};
		picture="\nia_wp_SCAR\tex\ui\ammo\M_SCARH_10Rrnd-camo_t_ca.paa";
	};
	class hlc_10Rnd_762x51_T_SCARH_camo: hlc_10Rnd_762x51_T_SCARH
	{
		dlc="Niarms_SCAR";
		author="Toadie, Spartan0536";
		displayname="$STR_NIA_10Rnd_762x51_Tracer_scarh_camo";
		hiddenSelectionsTextures[]=
		{
			"nia_wp_SCAR\tex\Toadie_SCAR\Magazine_SCARH_OEM_camo_co.paa"
		};
		HiddenSelectionsMaterials[]=
		{
			"nia_wp_SCAR\mat\Magazine_SCARH_OEM_Camo.rvmat"
		};
		picture="\nia_wp_SCAR\tex\ui\ammo\M_SCARH_10Rrnd-camo_t_ca.paa";
	};
	class hlc_10Rnd_762x51_S_SCARH_camo: hlc_10Rnd_762x51_S_SCARH
	{
		dlc="Niarms_SCAR";
		author="Toadie, Spartan0536";
		displayname="$STR_NIA_10Rnd_762x51_Subsonic_scarh_camo";
		hiddenSelectionsTextures[]=
		{
			"nia_wp_SCAR\tex\Toadie_SCAR\Magazine_SCARH_OEM_camo_co.paa"
		};
		HiddenSelectionsMaterials[]=
		{
			"nia_wp_SCAR\mat\Magazine_SCARH_OEM_Camo.rvmat"
		};
		picture="\nia_wp_SCAR\tex\ui\ammo\M_SCARH_10Rrnd-camo_s_ca.paa";
	};
	class hlc_30rnd_556x45_EPR;
	class hlc_30rnd_556x45_EPR_SCAR: hlc_30rnd_556x45_EPR
	{
		author="Toadie,Spartan0536";
		ammo="HLC_556NATO_EPR";
		count=30;
		descriptionshort="$STR_NIA_DESC_30Rnd_556x45_B";
		displayname="$STR_NIA_30rnd_556x45_EPR_SCAR";
		initspeed=974.79999;
		mass=10.490377;
		lastroundstracer=0;
		scope=2;
		tracersevery=0;
		displaynameshort="$STR_NIA_556_EPR";
		picture="nia_wp_SCAR\tex\ui\ammo\m_SCAR_EPR_ca.paa";
		modelSpecial="\nia_wp_SCAR\mesh\mag\proxy\30rnd_556NATO_STANAG_FN";
		model="\nia_wp_SCAR\mesh\mag\30rnd_556NATO_STANAG_FN.p3d";
		hiddenSelections[]=
		{
			"roundtype1",
			"roundtype2"
		};
		hiddenSelectionsTextures[]=
		{
			"hlc_core\tex\magazines\308_greentip_co.paa",
			"hlc_core\tex\magazines\308_redtip_co.paa"
		};
		modelSpecialIsProxy=1;
	};
	class hlc_30rnd_556x45_SOST_SCAR: hlc_30rnd_556x45_EPR_SCAR
	{
		author="Toadie,Spartan0536";
		ammo="HLC_556NATO_SOST";
		count=30;
		descriptionshort="$STR_NIA_DESC_30Rnd_556x45_SOST";
		displayname="$STR_NIA_30rnd_556x45_SOST_SCAR";
		initspeed=954.40002;
		mass=10.490377;
		lastroundstracer=0;
		scope=2;
		tracersevery=0;
		displaynameshort="$STR_NIA_556_SOST";
		picture="nia_wp_SCAR\tex\ui\ammo\m_SCAR_sost_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"hlc_core\tex\magazines\308_co.paa",
			"hlc_core\tex\magazines\308_co.paa"
		};
	};
	class hlc_30rnd_556x45_SPR_SCAR: hlc_30rnd_556x45_EPR_SCAR
	{
		author="Toadie,Spartan0536";
		ammo="HLC_556NATO_SPR";
		count=30;
		descriptionshort="$STR_NIA_DESC_30Rnd_556x45_SPR";
		displayname="$STR_NIA_30rnd_556x45_SPR_SCAR";
		initspeed=868.70001;
		mass=11.12018;
		lastroundstracer=0;
		scope=2;
		tracersevery=0;
		displaynameshort="$STR_NIA_556_SPR";
		picture="nia_wp_SCAR\tex\ui\ammo\m_SCAR_spr_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"hlc_core\tex\magazines\308_co.paa",
			"hlc_core\tex\magazines\308_co.paa"
		};
	};
	class hlc_30rnd_556x45_S_SCAR: hlc_30rnd_556x45_EPR_SCAR
	{
		author="Toadie,Spartan0536";
		initspeed=340;
		displaynameshort="$STR_NIA_556_Sub";
		descriptionshort="Caliber: 5.56x45mm NATO Cold-load M855A1<br />Type: Reverse Drawn Full Metal Jacket Exposed Penetrator (Enhanced Performance Round)<br />Rounds: 30";
		displayname="$STR_NIA_30rnd_556x45_S_SCAR";
		picture="nia_wp_SCAR\tex\ui\ammo\m_SCAR_s_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"hlc_core\tex\magazines\308_co.paa",
			"hlc_core\tex\magazines\308_co.paa"
		};
	};
	class hlc_30rnd_556x45_M_SCAR: hlc_30rnd_556x45_EPR_SCAR
	{
		ammo="HLC_556NATO_EPR_Tracer";
		author="Toadie,Spartan0536";
		count=30;
		descriptionshort="$STR_NIA_DESC_30Rnd_556x45_M";
		displayname="$STR_NIA_30Rnd_556x45_M_SCAR";
		initspeed=974.79999;
		mass=9.3801279;
		lastroundstracer=3;
		scope=2;
		tracersevery=4;
		displaynameshort="$STR_NIA_556_M";
		picture="nia_wp_SCAR\tex\ui\ammo\m_SCAR_m_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"hlc_core\tex\magazines\308_greentip_co.paa",
			"hlc_core\tex\magazines\308_redtip_co.paa"
		};
	};
	class hlc_30rnd_556x45_t_SCAR: hlc_30rnd_556x45_EPR_SCAR
	{
		author="Toadie,Spartan0536";
		ammo="HLC_556NATO_EPR_Tracer";
		count=30;
		descriptionshort="$STR_NIA_DESC_30Rnd_556x45_T";
		displayname="$STR_NIA_30Rnd_556x45_T_SCAR";
		initspeed=974.79999;
		mass=10.2242;
		lastroundstracer=1;
		scope=2;
		tracersevery=1;
		displaynameshort="$STR_NIA_556_Tracer";
		picture="nia_wp_SCAR\tex\ui\ammo\m_SCAR_t_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"hlc_core\tex\magazines\308_redtip_co.paa",
			"hlc_core\tex\magazines\308_redtip_co.paa"
		};
	};
	class hlc_30rnd_556x45_MDim_SCAR: hlc_30rnd_556x45_EPR_SCAR
	{
		author="Toadie,Spartan0536";
		ammo="HLC_B_556x45_Ball_Tracer_Dim";
		initspeed=950.36639;
		descriptionshort="$STR_NIA_DESC_30Rnd_556x45_Mdim";
		displayname="$STR_NIA_30rnd_556x45_MDim_SCAR";
		mass=9.3801279;
		tracersevery=4;
		displaynameshort="$STR_NIA_556_MDim";
		picture="nia_wp_SCAR\tex\ui\ammo\m_SCAR_m_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"hlc_core\tex\magazines\308_greentip_co.paa",
			"hlc_core\tex\magazines\308_redtip_co.paa"
		};
	};
	class hlc_30rnd_556x45_TDim_SCAR: hlc_30rnd_556x45_EPR_SCAR
	{
		author="Toadie,Spartan0536";
		ammo="HLC_B_556x45_Ball_Tracer_Dim";
		initspeed=950.36639;
		descriptionshort="$STR_NIA_DESC_30Rnd_556x45_irdim";
		displayname="$STR_NIA_30rnd_556x45_TDim_SCAR";
		mass=10.2242;
		tracersevery=1;
		displaynameshort="$STR_NIA_556_IRDIM";
		picture="nia_wp_SCAR\tex\ui\ammo\m_SCAR_t_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"hlc_core\tex\magazines\308_redtip_co.paa",
			"hlc_core\tex\magazines\308_redtip_co.paa"
		};
	};
	class hlc_29rnd_300BLK_STANAG;
	class hlc_29rnd_300BLK_STANAG_T;
	class hlc_29rnd_300BLK_STANAG_S;
	class hlc_30rnd_300BLK_SCAR: hlc_29rnd_300BLK_STANAG
	{
		modelSpecial="\nia_wp_SCAR\mesh\mag\proxy\30rnd_556NATO_STANAG_FN";
		model="\nia_wp_SCAR\mesh\mag\30rnd_556NATO_STANAG_FN.p3d";
		hiddenSelections[]=
		{
			"roundtype1",
			"roundtype2"
		};
		hiddenSelectionsTextures[]=
		{
			"hlc_core\tex\magazines\308_co.paa",
			"hlc_core\tex\magazines\308_co.paa"
		};
		picture="nia_wp_SCAR\tex\ui\ammo\m_SCAR_EPR_ca.paa";
		displayname="$STR_NIA_30rnd_300BLK_SCAR";
		mass=12.441259;
	};
	class hlc_30rnd_300BLK_SCAR_T: hlc_29rnd_300BLK_STANAG_T
	{
		modelSpecial="\nia_wp_SCAR\mesh\mag\proxy\30rnd_556NATO_STANAG_FN";
		model="\nia_wp_SCAR\mesh\mag\30rnd_556NATO_STANAG_FN.p3d";
		hiddenSelections[]=
		{
			"roundtype1",
			"roundtype2"
		};
		hiddenSelectionsTextures[]=
		{
			"hlc_core\tex\magazines\308_co.paa",
			"hlc_core\tex\magazines\308_co.paa"
		};
		displayname="$STR_NIA_30Rnd_300BLK_T_SCAR";
		mass=15.707931;
		picture="nia_wp_SCAR\tex\ui\ammo\m_SCAR_t_ca.paa";
	};
	class hlc_30rnd_300BLK_SCAR_S: hlc_29rnd_300BLK_STANAG_S
	{
		modelSpecial="\nia_wp_SCAR\mesh\mag\proxy\30rnd_556NATO_STANAG_FN";
		model="\nia_wp_SCAR\mesh\mag\30rnd_556NATO_STANAG_FN.p3d";
		hiddenSelections[]=
		{
			"roundtype1",
			"roundtype2"
		};
		hiddenSelectionsTextures[]=
		{
			"hlc_core\tex\magazines\308_co.paa",
			"hlc_core\tex\magazines\308_co.paa"
		};
		displayname="$STR_NIA_30rnd_300BLK_IRDIM_SCAR";
		mass=11.97692;
		picture="nia_wp_SCAR\tex\ui\ammo\m_SCAR_s_ca.paa";
	};
};
class CfgVehicles
{
	class B_supplyCrate_F;
	class HLC_SCAR_ammobox: B_supplyCrate_F
	{
		scope=2;
		dlc="Niarms_SCAR";
		vehicleClass="Ammo";
		displayName="HLC SCAR Supply Box";
		model="\A3\weapons_F\AmmoBoxes\Supplydrop";
		hiddenSelectionsTextures[]=
		{
			"hlc_core\tex\supplydrop\NIA_supplydrop_SCAR_co.paa"
		};
		icon="iconCrateWpns";
		transportMaxWeapons=25;
		transportMaxMagazines=250;
		class TransportMagazines
		{
			class _xx_hlc_20Rnd_762x51_B_SCARH_Tan
			{
				magazine="hlc_20Rnd_762x51_B_SCARH_Tan";
				count=60;
			};
			class _xx_hlc_20Rnd_762x51_mk316_SCARH_Tan
			{
				magazine="hlc_20Rnd_762x51_mk316_SCARH_Tan";
				count=60;
			};
			class _xx_hlc_20Rnd_762x51_barrier_SCARH_Tan
			{
				magazine="hlc_20Rnd_762x51_barrier_SCARH_Tan";
				count=60;
			};
			class _xx_hlc_20Rnd_762x51_TDim_SCARH_Tan
			{
				magazine="hlc_20Rnd_762x51_TDim_SCARH_Tan";
				count=60;
			};
			class _xx_hlc_20rnd_762x51_M_SCARH_Tan
			{
				magazine="hlc_20rnd_762x51_M_SCARH_Tan";
				count=60;
			};
			class _xx_hlc_20rnd_762x51_MDIM_SCARH_Tan
			{
				magazine="hlc_20rnd_762x51_MDIM_SCARH_Tan";
				count=60;
			};
			class _xx_hlc_20Rnd_762x51_S_SCARH_Tan
			{
				magazine="hlc_20Rnd_762x51_S_SCARH_Tan";
				count=60;
			};
			class _xx_hlc_20Rnd_762x51_B_SCARH
			{
				magazine="hlc_20Rnd_762x51_B_SCARH";
				count=60;
			};
			class _xx_hlc_20Rnd_762x51_mk316_SCARH
			{
				magazine="hlc_20Rnd_762x51_mk316_SCARH";
				count=60;
			};
			class _xx_hlc_20Rnd_762x51_barrier_SCARH
			{
				magazine="hlc_20Rnd_762x51_barrier_SCARH";
				count=60;
			};
			class _xx_hlc_20Rnd_762x51_TDim_SCARH
			{
				magazine="hlc_20Rnd_762x51_TDim_SCARH";
				count=60;
			};
			class _xx_hlc_20rnd_762x51_M_SCARH
			{
				magazine="hlc_20rnd_762x51_M_SCARH";
				count=60;
			};
			class _xx_hlc_20rnd_762x51_MDIM_SCARH
			{
				magazine="hlc_20rnd_762x51_MDIM_SCARH";
				count=60;
			};
			class _xx_hlc_20Rnd_762x51_S_SCARH
			{
				magazine="hlc_20Rnd_762x51_S_SCARH";
				count=60;
			};
			class _xx_hlc_20Rnd_762x51_B_SCARH_camo
			{
				magazine="hlc_20Rnd_762x51_B_SCARH_camo";
				count=60;
			};
			class _xx_hlc_20Rnd_762x51_mk316_SCARH_camo
			{
				magazine="hlc_20Rnd_762x51_mk316_SCARH_camo";
				count=60;
			};
			class _xx_hlc_20Rnd_762x51_barrier_SCARH_camo
			{
				magazine="hlc_20Rnd_762x51_barrier_SCARH_camo";
				count=60;
			};
			class _xx_hlc_20Rnd_762x51_TDim_SCARH_camo
			{
				magazine="hlc_20Rnd_762x51_TDim_SCARH_camo";
				count=60;
			};
			class _xx_hlc_20rnd_762x51_M_SCARH_camo
			{
				magazine="hlc_20rnd_762x51_M_SCARH_camo";
				count=60;
			};
			class _xx_hlc_20rnd_762x51_MDIM_SCARH_camo
			{
				magazine="hlc_20rnd_762x51_MDIM_SCARH_camo";
				count=60;
			};
			class _xx_hlc_20Rnd_762x51_S_SCARH_camo
			{
				magazine="hlc_20Rnd_762x51_S_SCARH_camo";
				count=60;
			};
			class _xx_hlc_20Rnd_762x51_B_SCARH_MW2
			{
				magazine="hlc_20Rnd_762x51_B_SCARH_MW2";
				count=60;
			};
			class _xx_hlc_20Rnd_762x51_mk316_SCARH_MW2
			{
				magazine="hlc_20Rnd_762x51_mk316_SCARH_MW2";
				count=60;
			};
			class _xx_hlc_20Rnd_762x51_barrier_SCARH_MW2
			{
				magazine="hlc_20Rnd_762x51_barrier_SCARH_MW2";
				count=60;
			};
			class _xx_hlc_20Rnd_762x51_TDim_SCARH_MW2
			{
				magazine="hlc_20Rnd_762x51_TDim_SCARH_MW2";
				count=60;
			};
			class _xx_hlc_20rnd_762x51_M_SCARH_MW2
			{
				magazine="hlc_20rnd_762x51_M_SCARH_MW2";
				count=60;
			};
			class _xx_hlc_20rnd_762x51_MDIM_SCARH_MW2
			{
				magazine="hlc_20rnd_762x51_MDIM_SCARH_MW2";
				count=60;
			};
			class _xx_hlc_20Rnd_762x51_S_SCARH_MW2
			{
				magazine="hlc_20Rnd_762x51_S_SCARH_MW2";
				count=60;
			};
			class _xx_hlc_10Rnd_762x51_B_SCARH_Tan
			{
				magazine="hlc_10Rnd_762x51_B_SCARH_Tan";
				count=60;
			};
			class _xx_hlc_10Rnd_762x51_mk316_SCARH_Tan
			{
				magazine="hlc_10Rnd_762x51_mk316_SCARH_Tan";
				count=60;
			};
			class _xx_hlc_10Rnd_762x51_barrier_SCARH_Tan
			{
				magazine="hlc_10Rnd_762x51_barrier_SCARH_Tan";
				count=60;
			};
			class _xx_hlc_10Rnd_762x51_TDim_SCARH_Tan
			{
				magazine="hlc_10Rnd_762x51_TDim_SCARH_Tan";
				count=60;
			};
			class _xx_hlc_10Rnd_762x51_T_SCARH_tan
			{
				magazine="hlc_10Rnd_762x51_T_SCARH_tan";
				count=60;
			};
			class _xx_hlc_10rnd_762x51_S_SCARH_Tan
			{
				magazine="hlc_10rnd_762x51_S_SCARH_Tan";
				count=60;
			};
			class _xx_hlc_10Rnd_762x51_B_SCARH
			{
				magazine="hlc_10Rnd_762x51_B_SCARH";
				count=60;
			};
			class _xx_hlc_10Rnd_762x51_mk316_SCARH_
			{
				magazine="hlc_10Rnd_762x51_mk316_SCARH_";
				count=60;
			};
			class _xx_hlc_10Rnd_762x51_barrier_SCARH
			{
				magazine="hlc_10Rnd_762x51_barrier_SCARH";
				count=60;
			};
			class _xx_hlc_10Rnd_762x51_TDim_SCARH
			{
				magazine="hlc_10Rnd_762x51_TDim_SCARH";
				count=60;
			};
			class _xx_hlc_10Rnd_762x51_T_SCARH
			{
				magazine="hlc_10Rnd_762x51_T_SCARH";
				count=60;
			};
			class _xx_hlc_10rnd_762x51_S_SCARH
			{
				magazine="hlc_10rnd_762x51_S_SCARH";
				count=60;
			};
			class _xx_hlc_10Rnd_762x51_B_SCARH_camo
			{
				magazine="hlc_10Rnd_762x51_B_SCARH_camo";
				count=60;
			};
			class _xx_hlc_10Rnd_762x51_mk316_SCARH_camo
			{
				magazine="hlc_10Rnd_762x51_mk316_SCARH_camo";
				count=60;
			};
			class _xx_hlc_10Rnd_762x51_barrier_SCARH_camo
			{
				magazine="hlc_10Rnd_762x51_barrier_SCARH_camo";
				count=60;
			};
			class _xx_hlc_10Rnd_762x51_TDim_SCARH_camo
			{
				magazine="hlc_10Rnd_762x51_TDim_SCARH_camo";
				count=60;
			};
			class _xx_hlc_10Rnd_762x51_T_SCARH_camo
			{
				magazine="hlc_10Rnd_762x51_T_SCARH_camo";
				count=60;
			};
			class _xx_hlc_10rnd_762x51_S_SCARH_camo
			{
				magazine="hlc_10rnd_762x51_S_SCARH_camo";
				count=60;
			};
			class _xx_hlc_30rnd_556x45_EPR_SCAR
			{
				magazine="hlc_30rnd_556x45_EPR_SCAR";
				count=60;
			};
			class _xx_hlc_30rnd_556x45_SOST_SCAR
			{
				magazine="hlc_30rnd_556x45_SOST_SCAR";
				count=60;
			};
			class _xx_hlc_30rnd_556x45_SPR_SCAR
			{
				magazine="hlc_30rnd_556x45_SPR_SCAR";
				count=60;
			};
			class _xx_hlc_30rnd_556x45_S_SCAR
			{
				magazine="hlc_30rnd_556x45_S_SCAR";
				count=60;
			};
			class _xx_hlc_30rnd_556x45_M_SCAR
			{
				magazine="hlc_30rnd_556x45_M_SCAR";
				count=60;
			};
			class _xx_hlc_30rnd_556x45_t_SCAR
			{
				magazine="hlc_30rnd_556x45_t_SCAR";
				count=60;
			};
			class _xx_hlc_30rnd_556x45_MDim_SCAR
			{
				magazine="hlc_30rnd_556x45_MDim_SCAR";
				count=60;
			};
			class _xx_hlc_30rnd_556x45_TDim_SCAR
			{
				magazine="hlc_30rnd_556x45_TDim_SCAR";
				count=60;
			};
			class _xx_hlc_30rnd_300BLK_SCAR
			{
				magazine="hlc_30rnd_300BLK_SCAR";
				count=60;
			};
			class _xx_hlc_30rnd_300BLK_SCAR_T
			{
				magazine="hlc_30rnd_300BLK_SCAR_T";
				count=60;
			};
			class _xx_hlc_30rnd_300BLK_SCAR_S
			{
				magazine="hlc_30rnd_300BLK_SCAR_S";
				count=60;
			};
			class _xx_1Rnd_HE_Grenade_shell
			{
				magazine="1Rnd_HE_Grenade_shell";
				count=60;
			};
			class _xx_UGL_FlareWhite_F
			{
				magazine="UGL_FlareWhite_F";
				count=60;
			};
			class _xx_UGL_FlareGreen_F
			{
				magazine="UGL_FlareGreen_F";
				count=60;
			};
			class _xx_UGL_FlareRed_F
			{
				magazine="UGL_FlareRed_F";
				count=60;
			};
			class _xx_UGL_FlareYellow_F
			{
				magazine="UGL_FlareYellow_F";
				count=60;
			};
			class _xx_UGL_FlareCIR_F
			{
				magazine="UGL_FlareCIR_F";
				count=60;
			};
			class _xx_1Rnd_Smoke_Grenade_shell
			{
				magazine="1Rnd_Smoke_Grenade_shell";
				count=60;
			};
			class _xx_1Rnd_SmokeRed_Grenade_shell
			{
				magazine="1Rnd_SmokeRed_Grenade_shell";
				count=60;
			};
			class _xx_1Rnd_SmokeGreen_Grenade_shell
			{
				magazine="1Rnd_SmokeGreen_Grenade_shell";
				count=60;
			};
			class _xx_1Rnd_SmokeYellow_Grenade_shell
			{
				magazine="1Rnd_SmokeYellow_Grenade_shell";
				count=60;
			};
			class _xx_1Rnd_SmokePurple_Grenade_shell
			{
				magazine="1Rnd_SmokePurple_Grenade_shell";
				count=60;
			};
			class _xx_1Rnd_SmokeBlue_Grenade_shell
			{
				magazine="1Rnd_SmokeBlue_Grenade_shell";
				count=60;
			};
		};
		class TransportWeapons
		{
			class _xx_hlc_wp_SCARH_STD
			{
				weapon="hlc_wp_SCARH_STD";
				count=10;
			};
			class _xx_hlc_wp_SCARH_STD_Blk
			{
				weapon="hlc_wp_SCARH_STD_Blk";
				count=10;
			};
			class _xx_hlc_wp_SCARH_STD_camo
			{
				weapon="hlc_wp_SCARH_STD_camo";
				count=10;
			};
			class _xx_hlc_wp_SCARH_STD_SRX
			{
				weapon="hlc_wp_SCARH_STD_SRX";
				count=10;
			};
			class _xx_hlc_wp_SCARH_STD_SRX_Blk
			{
				weapon="hlc_wp_SCARH_STD_SRX_Blk";
				count=10;
			};
			class _xx_hlc_wp_SCARH_STD_SRX_camo
			{
				weapon="hlc_wp_SCARH_STD_SRX_camo";
				count=10;
			};
			class _xx_hlc_wp_SCARH_STD_EGLM
			{
				weapon="hlc_wp_SCARH_STD_EGLM";
				count=10;
			};
			class _xx_hlc_wp_SCARH_STD_EGLM_Blk
			{
				weapon="hlc_wp_SCARH_STD_EGLM_Blk";
				count=10;
			};
			class _xx_hlc_wp_SCARH_STD_EGLM_camo
			{
				weapon="hlc_wp_SCARH_STD_EGLM_camo";
				count=10;
			};
			class _xx_hlc_WP_SCARH_CQC
			{
				weapon="hlc_WP_SCARH_CQC";
				count=10;
			};
			class _xx_hlc_wp_SCARH_CQC_Blk
			{
				weapon="hlc_wp_SCARH_CQC_Blk";
				count=10;
			};
			class _xx_hlc_wp_SCARH_CQC_camo
			{
				weapon="hlc_wp_SCARH_CQC_camo";
				count=10;
			};
			class _xx_hlc_wp_SCARH_CQC_SRX
			{
				weapon="hlc_wp_SCARH_CQC_SRX";
				count=10;
			};
			class _xx_hlc_wp_SCARH_CQC_SRX_camo
			{
				weapon="hlc_wp_SCARH_CQC_SRX_camo";
				count=10;
			};
			class _xx_hlc_wp_SCARH_CQC_SRX_tranoflage
			{
				weapon="hlc_wp_SCARH_CQC_SRX_tranoflage";
				count=10;
			};
			class _xx_hlc_wp_SCARH_CQC_SRX_Blk
			{
				weapon="hlc_wp_SCARH_CQC_SRX_Blk";
				count=10;
			};
			class _xx_hlc_wp_SCARH_CQC_EGLM
			{
				weapon="hlc_wp_SCARH_CQC_EGLM";
				count=10;
			};
			class _xx_hlc_wp_SCARH_CQC_EGLM_Blk
			{
				weapon="hlc_wp_SCARH_CQC_EGLM_Blk";
				count=10;
			};
			class _xx_hlc_wp_SCARH_CQC_EGLM_camo
			{
				weapon="hlc_wp_SCARH_CQC_EGLM_camo";
				count=10;
			};
			class _xx_hlc_WP_SCARH_DMR
			{
				weapon="hlc_WP_SCARH_DMR";
				count=10;
			};
			class _xx_hlc_wp_SCARH_DMR_Blk
			{
				weapon="hlc_wp_SCARH_DMR_Blk";
				count=10;
			};
			class _xx_hlc_wp_SCARH_DMR_camo
			{
				weapon="hlc_wp_SCARH_DMR_camo";
				count=10;
			};
			class _xx_hlc_wp_MK17
			{
				weapon="hlc_wp_MK17";
				count=10;
			};
			class _xx_hlc_wp_Mk17_camo
			{
				weapon="hlc_wp_Mk17_camo";
				count=10;
			};
			class _xx_hlc_wp_MK17_AGC
			{
				weapon="hlc_wp_MK17_AGC";
				count=10;
			};
			class _xx_hlc_wp_MK17_AGC_camo
			{
				weapon="hlc_wp_MK17_AGC_camo";
				count=10;
			};
			class _xx_hlc_wp_Mk17_CQC
			{
				weapon="hlc_wp_Mk17_CQC";
				count=10;
			};
			class _xx_hlc_wp_Mk17_CQC_camo
			{
				weapon="hlc_wp_Mk17_CQC_camo";
				count=10;
			};
			class _xx_hlc_wp_MK17_CQC_AGC
			{
				weapon="hlc_wp_MK17_CQC_AGC";
				count=10;
			};
			class _xx_hlc_wp_MK17_CQC_AGC_camo
			{
				weapon="hlc_wp_MK17_CQC_AGC_camo";
				count=10;
			};
			class _xx_hlc_WP_Mk17IUR
			{
				weapon="hlc_WP_Mk17IUR";
				count=10;
			};
			class _xx_hlc_wp_MK17IUR_camo
			{
				weapon="hlc_wp_MK17IUR_camo";
				count=10;
			};
			class _xx_hlc_wp_MK17IUR_AGC
			{
				weapon="hlc_wp_MK17IUR_AGC";
				count=10;
			};
			class _xx_hlc_wp_MK17IUR_AGC_camo
			{
				weapon="hlc_wp_MK17IUR_AGC_camo";
				count=10;
			};
			class _xx_hlc_wp_MK17IUR_556
			{
				weapon="hlc_wp_MK17IUR_556";
				count=10;
			};
			class _xx_hlc_wp_MK17IUR_556_camo
			{
				weapon="hlc_wp_MK17IUR_556_camo";
				count=10;
			};
			class _xx_hlc_wp_MK17IUR_556_AGC
			{
				weapon="hlc_wp_MK17IUR_556_AGC";
				count=10;
			};
			class _xx_hlc_wp_MK17IUR_556_AGC_camo
			{
				weapon="hlc_wp_MK17IUR_556_AGC_camo";
				count=10;
			};
			class _xx_hlc_wp_MK17IUR_300
			{
				weapon="hlc_wp_MK17IUR_300";
				count=10;
			};
			class _xx_hlc_wp_MK17IUR_300_camo
			{
				weapon="hlc_wp_MK17IUR_300_camo";
				count=10;
			};
			class _xx_hlc_wp_MK17IUR_300_AGC
			{
				weapon="hlc_wp_MK17IUR_300_AGC";
				count=10;
			};
			class _xx_hlc_wp_MK17IUR_300_AGC_camo
			{
				weapon="hlc_wp_MK17IUR_300_AGC_camo";
				count=10;
			};
			class _xx_hlc_wp_MK17IUR_762R
			{
				weapon="hlc_wp_MK17IUR_762R";
				count=10;
			};
			class _xx_hlc_wp_MK17IUR_762R_camo
			{
				weapon="hlc_wp_MK17IUR_762R_camo";
				count=10;
			};
			class _xx_hlc_WP_SSR
			{
				weapon="hlc_WP_SSR";
				count=10;
			};
			class _xx_hlc_wp_SSR_Blk
			{
				weapon="hlc_wp_SSR_Blk";
				count=10;
			};
			class _xx_hlc_wp_SCARL_STD
			{
				weapon="hlc_wp_SCARL_STD";
				count=10;
			};
			class _xx_hlc_wp_SCARL_STD_Blk
			{
				weapon="hlc_wp_SCARL_STD_Blk";
				count=10;
			};
			class _xx_hlc_wp_SCARL_STD_camo
			{
				weapon="hlc_wp_SCARL_STD_camo";
				count=10;
			};
			class _xx_hlc_wp_SCARL_STD_SRX
			{
				weapon="hlc_wp_SCARL_STD_SRX";
				count=10;
			};
			class _xx_hlc_wp_SCARL_STD_SRX_camo
			{
				weapon="hlc_wp_SCARL_STD_SRX_camo";
				count=10;
			};
			class _xx_hlc_wp_SCARL_STD_SRX_Blk
			{
				weapon="hlc_wp_SCARL_STD_SRX_Blk";
				count=10;
			};
			class _xx_hlc_wp_SCARL_STD_EGLM
			{
				weapon="hlc_wp_SCARL_STD_EGLM";
				count=10;
			};
			class _xx_hlc_wp_SCARL_STD_EGLM_Blk
			{
				weapon="hlc_wp_SCARL_STD_EGLM_Blk";
				count=10;
			};
			class _xx_hlc_wp_SCARL_STD_EGLM_camo
			{
				weapon="hlc_wp_SCARL_STD_EGLM_camo";
				count=10;
			};
			class _xx_hlc_WP_SCARL_CQC
			{
				weapon="hlc_WP_SCARL_CQC";
				count=10;
			};
			class _xx_hlc_wp_SCARL_CQC_Blk
			{
				weapon="hlc_wp_SCARL_CQC_Blk";
				count=10;
			};
			class _xx_hlc_wp_SCARL_CQC_camo
			{
				weapon="hlc_wp_SCARL_CQC_camo";
				count=10;
			};
			class _xx_hlc_wp_SCARL_CQC_EGLM
			{
				weapon="hlc_wp_SCARL_CQC_EGLM";
				count=10;
			};
			class _xx_hlc_wp_SCARL_CQC_EGLM_Blk
			{
				weapon="hlc_wp_SCARL_CQC_EGLM_Blk";
				count=10;
			};
			class _xx_hlc_wp_SCARL_CQC_EGLM_camo
			{
				weapon="hlc_wp_SCARL_CQC_EGLM_camo";
				count=10;
			};
			class _xx_hlc_WP_SCARL_DMR
			{
				weapon="hlc_WP_SCARL_DMR";
				count=10;
			};
			class _xx_hlc_wp_SCARL_DMR_Blk
			{
				weapon="hlc_wp_SCARL_DMR_Blk";
				count=10;
			};
			class _xx_hlc_wp_SCARL_DMR_camo
			{
				weapon="hlc_wp_SCARL_DMR_camo";
				count=10;
			};
			class _xx_hlc_wp_SCAR_PDW
			{
				weapon="hlc_wp_SCAR_PDW";
				count=10;
			};
			class _xx_hlc_wp_SCAR_PDW_Blk
			{
				weapon="hlc_wp_SCAR_PDW_Blk";
				count=10;
			};
			class _xx_hlc_wp_SCAR_PDW_camo
			{
				weapon="hlc_wp_SCAR_PDW_camo";
				count=10;
			};
			class _xx_hlc_wp_SCARL_STD_300AAC
			{
				weapon="hlc_wp_SCARL_STD_300AAC";
				count=10;
			};
			class _xx_hlc_wp_SCARL_STD_300AAC_Blk
			{
				weapon="hlc_wp_SCARL_STD_300AAC_Blk";
				count=10;
			};
			class _xx_hlc_wp_SCARL_STD_300AAC_camo
			{
				weapon="hlc_wp_SCARL_STD_300AAC_camo";
				count=10;
			};
			class _xx_hlc_wp_SCARL_STD_300AAC_SRX
			{
				weapon="hlc_wp_SCARL_STD_300AAC_SRX";
				count=10;
			};
			class _xx_hlc_wp_SCARL_STD_300AAC_SRX_Blk
			{
				weapon="hlc_wp_SCARL_STD_300AAC_SRX_Blk";
				count=10;
			};
			class _xx_hlc_wp_SCARL_STD_300AAC_SRX_camo
			{
				weapon="hlc_wp_SCARL_STD_300AAC_SRX_camo";
				count=10;
			};
			class _xx_hlc_wp_SCARL_STD_300AAC_SRX_muddy
			{
				weapon="hlc_wp_SCARL_STD_300AAC_SRX_muddy";
				count=10;
			};
			class _xx_hlc_WP_SCARL_CQC_300AAC
			{
				weapon="hlc_WP_SCARL_CQC_300AAC";
				count=10;
			};
			class _xx_hlc_wp_SCARL_CQC_300AAC_Blk
			{
				weapon="hlc_wp_SCARL_CQC_300AAC_Blk";
				count=10;
			};
			class _xx_hlc_wp_SCARL_CQC_300AAC_camo
			{
				weapon="hlc_wp_SCARL_CQC_300AAC_camo";
				count=10;
			};
		};
	};
	class Weapon_Base_F;
	class Weapon_hlc_wp_SCARH_STD: Weapon_Base_F
	{
		dlc="Niarms_SCAR";
		scope=2;
		scopeCurator=2;
		displayName="SCAR-H STD";
		author="Toadie";
		editorCategory="EdCat_Weapons";
		editorSubcategory="EdSubcat_AssaultRifles";
		vehicleClass="WeaponsPrimary";
		class TransportWeapons
		{
			class hlc_wp_SCARH_STD
			{
				weapon="hlc_wp_SCARH_STD";
				count=1;
			};
		};
		class TransportMagazines
		{
			class hlc_20Rnd_762x51_B_SCARH_tan
			{
				magazine="hlc_20Rnd_762x51_B_SCARH_tan";
				count=1;
			};
		};
	};
	class Weapon_hlc_wp_SCARH_STD_Blk: Weapon_Base_F
	{
		dlc="Niarms_SCAR";
		scope=2;
		scopeCurator=2;
		displayName="SCAR-H STD(Black)";
		author="Toadie";
		editorCategory="EdCat_Weapons";
		editorSubcategory="EdSubcat_AssaultRifles";
		vehicleClass="WeaponsPrimary";
		class TransportWeapons
		{
			class hlc_wp_SCARH_STD_Blk
			{
				weapon="hlc_wp_SCARH_STD_Blk";
				count=1;
			};
		};
		class TransportMagazines
		{
			class hlc_20Rnd_762x51_B_SCARH
			{
				magazine="hlc_20Rnd_762x51_B_SCARH";
				count=1;
			};
		};
	};
	class Weapon_hlc_wp_SCARH_STD_camo: Weapon_Base_F
	{
		dlc="Niarms_SCAR";
		scope=2;
		scopeCurator=2;
		displayName="SCAR-H STD(Camo)";
		author="Toadie";
		editorCategory="EdCat_Weapons";
		editorSubcategory="EdSubcat_AssaultRifles";
		vehicleClass="WeaponsPrimary";
		class TransportWeapons
		{
			class hlc_wp_SCARH_STD_camo
			{
				weapon="hlc_wp_SCARH_STD_camo";
				count=1;
			};
		};
		class TransportMagazines
		{
			class hlc_20Rnd_762x51_B_SCARH_camo
			{
				magazine="hlc_20Rnd_762x51_B_SCARH_camo";
				count=1;
			};
		};
	};
	class Weapon_hlc_wp_SCARH_STD_EGLM: Weapon_Base_F
	{
		dlc="Niarms_SCAR";
		scope=2;
		scopeCurator=2;
		displayName="SCAR-H STD (GL)";
		author="Toadie";
		editorCategory="EdCat_Weapons";
		editorSubcategory="EdSubcat_AssaultRifles";
		vehicleClass="WeaponsPrimary";
		class TransportWeapons
		{
			class hlc_wp_SCARH_STD_EGLM
			{
				weapon="hlc_wp_SCARH_STD_EGLM";
				count=1;
			};
		};
		class TransportMagazines
		{
			class hlc_20Rnd_762x51_B_SCARH_tan
			{
				magazine="hlc_20Rnd_762x51_B_SCARH_tan";
				count=1;
			};
		};
	};
	class Weapon_hlc_wp_SCARH_STD_EGLM_Blk: Weapon_Base_F
	{
		dlc="Niarms_SCAR";
		scope=2;
		scopeCurator=2;
		displayName="SCAR-H STD (GL/Black)";
		author="Toadie";
		editorCategory="EdCat_Weapons";
		editorSubcategory="EdSubcat_AssaultRifles";
		vehicleClass="WeaponsPrimary";
		class TransportWeapons
		{
			class hlc_wp_SCARH_STD_EGLM_Blk
			{
				weapon="hlc_wp_SCARH_STD_EGLM_Blk";
				count=1;
			};
		};
		class TransportMagazines
		{
			class hlc_20Rnd_762x51_B_SCARH
			{
				magazine="hlc_20Rnd_762x51_B_SCARH";
				count=1;
			};
		};
	};
	class Weapon_hlc_wp_SCARH_STD_EGLM_camo: Weapon_Base_F
	{
		dlc="Niarms_SCAR";
		scope=2;
		scopeCurator=2;
		displayName="SCAR-H STD (GL/Camo)";
		author="Toadie";
		editorCategory="EdCat_Weapons";
		editorSubcategory="EdSubcat_AssaultRifles";
		vehicleClass="WeaponsPrimary";
		class TransportWeapons
		{
			class hlc_wp_SCARH_STD_EGLM_camo
			{
				weapon="hlc_wp_SCARH_STD_EGLM_camo";
				count=1;
			};
		};
		class TransportMagazines
		{
			class hlc_20Rnd_762x51_B_SCARH_camo
			{
				magazine="hlc_20Rnd_762x51_B_SCARH_camo";
				count=1;
			};
		};
	};
	class Weapon_hlc_wp_SCARH_STD_SRX: Weapon_Base_F
	{
		dlc="Niarms_SCAR";
		scope=2;
		scopeCurator=2;
		displayName="SCAR-H STD(SRX)";
		author="Toadie";
		editorCategory="EdCat_Weapons";
		editorSubcategory="EdSubcat_AssaultRifles";
		vehicleClass="WeaponsPrimary";
		class TransportWeapons
		{
			class hlc_wp_SCARH_STD_SRX
			{
				weapon="hlc_wp_SCARH_STD_SRX";
				count=1;
			};
		};
		class TransportMagazines
		{
			class hlc_20Rnd_762x51_B_SCARH_tan
			{
				magazine="hlc_20Rnd_762x51_B_SCARH_tan";
				count=1;
			};
		};
	};
	class Weapon_hlc_wp_SCARH_STD_SRX_camo: Weapon_Base_F
	{
		dlc="Niarms_SCAR";
		scope=2;
		scopeCurator=2;
		displayName="SCAR-H STD(SRX/Camo)";
		author="Toadie";
		editorCategory="EdCat_Weapons";
		editorSubcategory="EdSubcat_AssaultRifles";
		vehicleClass="WeaponsPrimary";
		class TransportWeapons
		{
			class hlc_wp_SCARH_STD_SRX_camo
			{
				weapon="hlc_wp_SCARH_STD_SRX_camo";
				count=1;
			};
		};
		class TransportMagazines
		{
			class hlc_20Rnd_762x51_B_SCARH_camo
			{
				magazine="hlc_20Rnd_762x51_B_SCARH_camo";
				count=1;
			};
		};
	};
	class Weapon_hlc_wp_SCARH_STD_SRX_Blk: Weapon_Base_F
	{
		dlc="Niarms_SCAR";
		scope=2;
		scopeCurator=2;
		displayName="SCAR-H STD(SRX/Black)";
		author="Toadie";
		editorCategory="EdCat_Weapons";
		editorSubcategory="EdSubcat_AssaultRifles";
		vehicleClass="WeaponsPrimary";
		class TransportWeapons
		{
			class hlc_wp_SCARH_STD_SRX_Blk
			{
				weapon="hlc_wp_SCARH_STD_SRX_Blk";
				count=1;
			};
		};
		class TransportMagazines
		{
			class hlc_20Rnd_762x51_B_SCARH_tan
			{
				magazine="hlc_20Rnd_762x51_B_SCARH_tan";
				count=1;
			};
		};
	};
	class Weapon_hlc_WP_SCARH_CQC: Weapon_Base_F
	{
		dlc="Niarms_SCAR";
		scope=2;
		scopeCurator=2;
		displayName="SCAR-H CQC";
		author="Toadie";
		editorCategory="EdCat_Weapons";
		editorSubcategory="EdSubcat_AssaultRifles";
		vehicleClass="WeaponsPrimary";
		class TransportWeapons
		{
			class hlc_WP_SCARH_CQC
			{
				weapon="hlc_WP_SCARH_CQC";
				count=1;
			};
		};
		class TransportMagazines
		{
			class hlc_20Rnd_762x51_B_SCARH_tan
			{
				magazine="hlc_20Rnd_762x51_B_SCARH_tan";
				count=1;
			};
		};
	};
	class Weapon_hlc_wp_SCARH_CQC_Blk: Weapon_Base_F
	{
		dlc="Niarms_SCAR";
		scope=2;
		scopeCurator=2;
		displayName="SCAR-H CQC(Black)";
		author="Toadie";
		editorCategory="EdCat_Weapons";
		editorSubcategory="EdSubcat_AssaultRifles";
		vehicleClass="WeaponsPrimary";
		class TransportWeapons
		{
			class hlc_wp_SCARH_CQC_Blk
			{
				weapon="hlc_wp_SCARH_CQC_Blk";
				count=1;
			};
		};
		class TransportMagazines
		{
			class hlc_20Rnd_762x51_B_SCARH
			{
				magazine="hlc_20Rnd_762x51_B_SCARH";
				count=1;
			};
		};
	};
	class Weapon_hlc_wp_SCARH_CQC_camo: Weapon_Base_F
	{
		dlc="Niarms_SCAR";
		scope=2;
		scopeCurator=2;
		displayName="SCAR-H CQC(Camo)";
		author="Toadie";
		editorCategory="EdCat_Weapons";
		editorSubcategory="EdSubcat_AssaultRifles";
		vehicleClass="WeaponsPrimary";
		class TransportWeapons
		{
			class hlc_wp_SCARH_CQC_camo
			{
				weapon="hlc_wp_SCARH_CQC_camo";
				count=1;
			};
		};
		class TransportMagazines
		{
			class hlc_20Rnd_762x51_B_SCARH_camo
			{
				magazine="hlc_20Rnd_762x51_B_SCARH_camo";
				count=1;
			};
		};
	};
	class Weapon_hlc_wp_SCARH_CQC_EGLM: Weapon_Base_F
	{
		dlc="Niarms_SCAR";
		scope=2;
		scopeCurator=2;
		displayName="SCAR-H CQC (GL)";
		author="Toadie";
		editorCategory="EdCat_Weapons";
		editorSubcategory="EdSubcat_AssaultRifles";
		vehicleClass="WeaponsPrimary";
		class TransportWeapons
		{
			class hlc_wp_SCARH_CQC_EGLM
			{
				weapon="hlc_wp_SCARH_CQC_EGLM";
				count=1;
			};
		};
		class TransportMagazines
		{
			class hlc_20Rnd_762x51_B_SCARH_tan
			{
				magazine="hlc_20Rnd_762x51_B_SCARH_tan";
				count=1;
			};
		};
	};
	class Weapon_hlc_wp_SCARH_CQC_EGLM_Blk: Weapon_Base_F
	{
		dlc="Niarms_SCAR";
		scope=2;
		scopeCurator=2;
		displayName="SCAR-H CQC (GL/Black)";
		author="Toadie";
		editorCategory="EdCat_Weapons";
		editorSubcategory="EdSubcat_AssaultRifles";
		vehicleClass="WeaponsPrimary";
		class TransportWeapons
		{
			class hlc_wp_SCARH_CQC_EGLM_Blk
			{
				weapon="hlc_wp_SCARH_CQC_EGLM_Blk";
				count=1;
			};
		};
		class TransportMagazines
		{
			class hlc_20Rnd_762x51_B_SCARH
			{
				magazine="hlc_20Rnd_762x51_B_SCARH";
				count=1;
			};
		};
	};
	class Weapon_hlc_wp_SCARH_CQC_EGLM_camo: Weapon_Base_F
	{
		dlc="Niarms_SCAR";
		scope=2;
		scopeCurator=2;
		displayName="SCAR-H CQC (GL/Camo)";
		author="Toadie";
		editorCategory="EdCat_Weapons";
		editorSubcategory="EdSubcat_AssaultRifles";
		vehicleClass="WeaponsPrimary";
		class TransportWeapons
		{
			class hlc_wp_SCARH_CQC_EGLM_camo
			{
				weapon="hlc_wp_SCARH_CQC_EGLM_camo";
				count=1;
			};
		};
		class TransportMagazines
		{
			class hlc_20Rnd_762x51_B_SCARH_camo
			{
				magazine="hlc_20Rnd_762x51_B_SCARH_camo";
				count=1;
			};
		};
	};
	class Weapon_hlc_wp_SCARH_CQC_SRX: Weapon_Base_F
	{
		dlc="Niarms_SCAR";
		scope=2;
		scopeCurator=2;
		displayName="SCAR-H CQC(SRX)";
		author="Toadie";
		editorCategory="EdCat_Weapons";
		editorSubcategory="EdSubcat_AssaultRifles";
		vehicleClass="WeaponsPrimary";
		class TransportWeapons
		{
			class hlc_wp_SCARH_CQC_SRX
			{
				weapon="hlc_wp_SCARH_CQC_SRX";
				count=1;
			};
		};
		class TransportMagazines
		{
			class hlc_20Rnd_762x51_B_SCARH_tan
			{
				magazine="hlc_20Rnd_762x51_B_SCARH_tan";
				count=1;
			};
		};
	};
	class Weapon_hlc_wp_SCARH_CQC_SRX_camo: Weapon_Base_F
	{
		dlc="Niarms_SCAR";
		scope=2;
		scopeCurator=2;
		displayName="SCAR-H CQC(SRX/Camo)";
		author="Toadie";
		editorCategory="EdCat_Weapons";
		editorSubcategory="EdSubcat_AssaultRifles";
		vehicleClass="WeaponsPrimary";
		class TransportWeapons
		{
			class hlc_wp_SCARH_CQC_SRX_camo
			{
				weapon="hlc_wp_SCARH_CQC_SRX_camo";
				count=1;
			};
		};
		class TransportMagazines
		{
			class hlc_20Rnd_762x51_B_SCARH_camo
			{
				magazine="hlc_20Rnd_762x51_B_SCARH_camo";
				count=1;
			};
		};
	};
	class Weapon_hlc_wp_SCARH_CQC_SRX_tranoflage: Weapon_Base_F
	{
		dlc="Niarms_SCAR";
		scope=2;
		scopeCurator=2;
		displayName="SCAR-H CQC(SRX/Gender Mtn)";
		author="Toadie";
		editorCategory="EdCat_Weapons";
		editorSubcategory="EdSubcat_AssaultRifles";
		vehicleClass="WeaponsPrimary";
		class TransportWeapons
		{
			class hlc_wp_SCARH_CQC_SRX_tranoflage
			{
				weapon="hlc_wp_SCARH_CQC_SRX_tranoflage";
				count=1;
			};
		};
		class TransportMagazines
		{
			class hlc_20Rnd_762x51_B_SCARH_tan
			{
				magazine="hlc_20Rnd_762x51_B_SCARH_tan";
				count=1;
			};
		};
	};
	class Weapon_hlc_wp_SCARH_CQC_SRX_Blk: Weapon_Base_F
	{
		dlc="Niarms_SCAR";
		scope=2;
		scopeCurator=2;
		displayName="SCAR-H CQC(SRX/Black)";
		author="Toadie";
		editorCategory="EdCat_Weapons";
		editorSubcategory="EdSubcat_AssaultRifles";
		vehicleClass="WeaponsPrimary";
		class TransportWeapons
		{
			class hlc_wp_SCARH_CQC_SRX_Blk
			{
				weapon="hlc_wp_SCARH_CQC_SRX_Blk";
				count=1;
			};
		};
		class TransportMagazines
		{
			class hlc_20Rnd_762x51_B_SCARH
			{
				magazine="hlc_20Rnd_762x51_B_SCARH";
				count=1;
			};
		};
	};
	class Weapon_hlc_WP_SCARH_DMR: Weapon_Base_F
	{
		dlc="Niarms_SCAR";
		scope=2;
		scopeCurator=2;
		displayName="SCAR-H LB";
		author="Toadie";
		editorCategory="EdCat_Weapons";
		editorSubcategory="EdSubcat_AssaultRifles";
		vehicleClass="WeaponsPrimary";
		class TransportWeapons
		{
			class hlc_WP_SCARH_DMR
			{
				weapon="hlc_WP_SCARH_DMR";
				count=1;
			};
		};
		class TransportMagazines
		{
			class hlc_20Rnd_762x51_B_SCARH_tan
			{
				magazine="hlc_20Rnd_762x51_B_SCARH_tan";
				count=1;
			};
		};
	};
	class Weapon_hlc_wp_SCARH_DMR_Blk: Weapon_Base_F
	{
		dlc="Niarms_SCAR";
		scope=2;
		scopeCurator=2;
		displayName="SCAR-H LB(Black)";
		author="Toadie";
		editorCategory="EdCat_Weapons";
		editorSubcategory="EdSubcat_AssaultRifles";
		vehicleClass="WeaponsPrimary";
		class TransportWeapons
		{
			class hlc_wp_SCARH_DMR_Blk
			{
				weapon="hlc_wp_SCARH_DMR_Blk";
				count=1;
			};
		};
		class TransportMagazines
		{
			class hlc_20Rnd_762x51_B_SCARH
			{
				magazine="hlc_20Rnd_762x51_B_SCARH";
				count=1;
			};
		};
	};
	class Weapon_hlc_wp_SCARH_DMR_camo: Weapon_Base_F
	{
		dlc="Niarms_SCAR";
		scope=2;
		scopeCurator=2;
		displayName="SCAR-H LB(Camo)";
		author="Toadie";
		editorCategory="EdCat_Weapons";
		editorSubcategory="EdSubcat_AssaultRifles";
		vehicleClass="WeaponsPrimary";
		class TransportWeapons
		{
			class hlc_wp_SCARH_DMR_camo
			{
				weapon="hlc_wp_SCARH_DMR_camo";
				count=1;
			};
		};
		class TransportMagazines
		{
			class hlc_20Rnd_762x51_B_SCARH_tan
			{
				magazine="hlc_20Rnd_762x51_B_SCARH_tan";
				count=1;
			};
		};
	};
	class Weapon_hlc_wp_MK17: Weapon_Base_F
	{
		dlc="Niarms_SCAR";
		scope=2;
		scopeCurator=2;
		displayName="Mk 17 Mod 0";
		author="Toadie";
		editorCategory="EdCat_Weapons";
		editorSubcategory="EdSubcat_AssaultRifles";
		vehicleClass="WeaponsPrimary";
		class TransportWeapons
		{
			class hlc_wp_MK17
			{
				weapon="hlc_wp_MK17";
				count=1;
			};
		};
		class TransportMagazines
		{
			class hlc_20Rnd_762x51_B_SCARH_tan
			{
				magazine="hlc_20Rnd_762x51_B_SCARH_tan";
				count=1;
			};
		};
	};
	class Weapon_hlc_wp_Mk17_camo: Weapon_Base_F
	{
		dlc="Niarms_SCAR";
		scope=2;
		scopeCurator=2;
		displayName="Mk 17 Mod 0(Camo)";
		author="Toadie";
		editorCategory="EdCat_Weapons";
		editorSubcategory="EdSubcat_AssaultRifles";
		vehicleClass="WeaponsPrimary";
		class TransportWeapons
		{
			class hlc_wp_Mk17_camo
			{
				weapon="hlc_wp_Mk17_camo";
				count=1;
			};
		};
		class TransportMagazines
		{
			class hlc_20Rnd_762x51_B_SCARH_camo
			{
				magazine="hlc_20Rnd_762x51_B_SCARH_camo";
				count=1;
			};
		};
	};
	class Weapon_hlc_wp_MK17_AGC: Weapon_Base_F
	{
		dlc="Niarms_SCAR";
		scope=2;
		scopeCurator=2;
		displayName="Mk 17 Mod 0 (GL)";
		author="Toadie";
		editorCategory="EdCat_Weapons";
		editorSubcategory="EdSubcat_AssaultRifles";
		vehicleClass="WeaponsPrimary";
		class TransportWeapons
		{
			class hlc_wp_MK17_AGC
			{
				weapon="hlc_wp_MK17_AGC";
				count=1;
			};
		};
		class TransportMagazines
		{
			class hlc_20Rnd_762x51_B_SCARH_tan
			{
				magazine="hlc_20Rnd_762x51_B_SCARH_tan";
				count=1;
			};
		};
	};
	class Weapon_hlc_wp_MK17_AGC_camo: Weapon_Base_F
	{
		dlc="Niarms_SCAR";
		scope=2;
		scopeCurator=2;
		displayName="Mk 17 Mod 0 (GL/Camo)";
		author="Toadie";
		editorCategory="EdCat_Weapons";
		editorSubcategory="EdSubcat_AssaultRifles";
		vehicleClass="WeaponsPrimary";
		class TransportWeapons
		{
			class hlc_wp_MK17_AGC_camo
			{
				weapon="hlc_wp_MK17_AGC_camo";
				count=1;
			};
		};
		class TransportMagazines
		{
			class hlc_20Rnd_762x51_B_SCARH_camo
			{
				magazine="hlc_20Rnd_762x51_B_SCARH_camo";
				count=1;
			};
		};
	};
	class Weapon_hlc_wp_Mk17_CQC: Weapon_Base_F
	{
		dlc="Niarms_SCAR";
		scope=2;
		scopeCurator=2;
		displayName="Mk 17 Mod 0 CQC";
		author="Toadie";
		editorCategory="EdCat_Weapons";
		editorSubcategory="EdSubcat_AssaultRifles";
		vehicleClass="WeaponsPrimary";
		class TransportWeapons
		{
			class hlc_wp_Mk17_CQC
			{
				weapon="hlc_wp_Mk17_CQC";
				count=1;
			};
		};
		class TransportMagazines
		{
			class hlc_20Rnd_762x51_B_SCARH_tan
			{
				magazine="hlc_20Rnd_762x51_B_SCARH_tan";
				count=1;
			};
		};
	};
	class Weapon_hlc_wp_Mk17_CQC_camo: Weapon_Base_F
	{
		dlc="Niarms_SCAR";
		scope=2;
		scopeCurator=2;
		displayName="Mk 17 Mod 0 CQC(Camo)";
		author="Toadie";
		editorCategory="EdCat_Weapons";
		editorSubcategory="EdSubcat_AssaultRifles";
		vehicleClass="WeaponsPrimary";
		class TransportWeapons
		{
			class hlc_wp_Mk17_CQC_camo
			{
				weapon="hlc_wp_Mk17_CQC_camo";
				count=1;
			};
		};
		class TransportMagazines
		{
			class hlc_20Rnd_762x51_B_SCARH_camo
			{
				magazine="hlc_20Rnd_762x51_B_SCARH_camo";
				count=1;
			};
		};
	};
	class Weapon_hlc_wp_MK17_CQC_AGC: Weapon_Base_F
	{
		dlc="Niarms_SCAR";
		scope=2;
		scopeCurator=2;
		displayName="Mk 17 Mod 0 CQC (GL)";
		author="Toadie";
		editorCategory="EdCat_Weapons";
		editorSubcategory="EdSubcat_AssaultRifles";
		vehicleClass="WeaponsPrimary";
		class TransportWeapons
		{
			class hlc_wp_MK17_CQC_AGC
			{
				weapon="hlc_wp_MK17_CQC_AGC";
				count=1;
			};
		};
		class TransportMagazines
		{
			class hlc_20Rnd_762x51_B_SCARH_tan
			{
				magazine="hlc_20Rnd_762x51_B_SCARH_tan";
				count=1;
			};
		};
	};
	class Weapon_hlc_wp_MK17_CQC_AGC_camo: Weapon_Base_F
	{
		dlc="Niarms_SCAR";
		scope=2;
		scopeCurator=2;
		displayName="Mk 17 Mod 0 CQC (GL/Camo)";
		author="Toadie";
		editorCategory="EdCat_Weapons";
		editorSubcategory="EdSubcat_AssaultRifles";
		vehicleClass="WeaponsPrimary";
		class TransportWeapons
		{
			class hlc_wp_MK17_CQC_AGC_camo
			{
				weapon="hlc_wp_MK17_CQC_AGC_camo";
				count=1;
			};
		};
		class TransportMagazines
		{
			class hlc_20Rnd_762x51_B_SCARH_camo
			{
				magazine="hlc_20Rnd_762x51_B_SCARH_camo";
				count=1;
			};
		};
	};
	class Weapon_hlc_WP_Mk17IUR: Weapon_Base_F
	{
		dlc="Niarms_SCAR";
		scope=2;
		scopeCurator=2;
		displayName="Mk 17 Mod (IUR)";
		author="Toadie";
		editorCategory="EdCat_Weapons";
		editorSubcategory="EdSubcat_AssaultRifles";
		vehicleClass="WeaponsPrimary";
		class TransportWeapons
		{
			class hlc_WP_Mk17IUR
			{
				weapon="hlc_WP_Mk17IUR";
				count=1;
			};
		};
		class TransportMagazines
		{
			class hlc_20Rnd_762x51_B_SCARH_tan
			{
				magazine="hlc_20Rnd_762x51_B_SCARH_tan";
				count=1;
			};
		};
	};
	class Weapon_hlc_wp_MK17IUR_camo: Weapon_Base_F
	{
		dlc="Niarms_SCAR";
		scope=2;
		scopeCurator=2;
		displayName="Mk 17 Mod (IUR/Camo)";
		author="Toadie";
		editorCategory="EdCat_Weapons";
		editorSubcategory="EdSubcat_AssaultRifles";
		vehicleClass="WeaponsPrimary";
		class TransportWeapons
		{
			class hlc_wp_MK17IUR_camo
			{
				weapon="hlc_wp_MK17IUR_camo";
				count=1;
			};
		};
		class TransportMagazines
		{
			class hlc_20Rnd_762x51_B_SCARH_camo
			{
				magazine="hlc_20Rnd_762x51_B_SCARH_camo";
				count=1;
			};
		};
	};
	class Weapon_hlc_wp_MK17IUR_AGC: Weapon_Base_F
	{
		dlc="Niarms_SCAR";
		scope=2;
		scopeCurator=2;
		displayName="Mk 17 Mod (IUR/GL)";
		author="Toadie";
		editorCategory="EdCat_Weapons";
		editorSubcategory="EdSubcat_AssaultRifles";
		vehicleClass="WeaponsPrimary";
		class TransportWeapons
		{
			class hlc_wp_MK17IUR_AGC
			{
				weapon="hlc_wp_MK17IUR_AGC";
				count=1;
			};
		};
		class TransportMagazines
		{
			class hlc_20Rnd_762x51_B_SCARH_tan
			{
				magazine="hlc_20Rnd_762x51_B_SCARH_tan";
				count=1;
			};
		};
	};
	class Weapon_hlc_wp_MK17IUR_AGC_camo: Weapon_Base_F
	{
		dlc="Niarms_SCAR";
		scope=2;
		scopeCurator=2;
		displayName="Mk 17 Mod (IUR/GL/Camo)";
		author="Toadie";
		editorCategory="EdCat_Weapons";
		editorSubcategory="EdSubcat_AssaultRifles";
		vehicleClass="WeaponsPrimary";
		class TransportWeapons
		{
			class hlc_wp_MK17IUR_AGC_camo
			{
				weapon="hlc_wp_MK17IUR_AGC_camo";
				count=1;
			};
		};
		class TransportMagazines
		{
			class hlc_20Rnd_762x51_B_SCARH_camo
			{
				magazine="hlc_20Rnd_762x51_B_SCARH_camo";
				count=1;
			};
		};
	};
	class Weapon_hlc_wp_MK17IUR_556: Weapon_Base_F
	{
		dlc="Niarms_SCAR";
		scope=2;
		scopeCurator=2;
		displayName="Mk 17 Mod (IUR 5.56)";
		author="Toadie";
		editorCategory="EdCat_Weapons";
		editorSubcategory="EdSubcat_AssaultRifles";
		vehicleClass="WeaponsPrimary";
		class TransportWeapons
		{
			class hlc_wp_MK17IUR_556
			{
				weapon="hlc_wp_MK17IUR_556";
				count=1;
			};
		};
		class TransportMagazines
		{
			class hlc_30rnd_556x45_EPR_SCAR
			{
				magazine="hlc_30rnd_556x45_EPR_SCAR";
				count=1;
			};
		};
	};
	class Weapon_hlc_wp_MK17IUR_556_camo: Weapon_Base_F
	{
		dlc="Niarms_SCAR";
		scope=2;
		scopeCurator=2;
		displayName="Mk 17 Mod (IUR 5.56/Camo)";
		author="Toadie";
		editorCategory="EdCat_Weapons";
		editorSubcategory="EdSubcat_AssaultRifles";
		vehicleClass="WeaponsPrimary";
		class TransportWeapons
		{
			class hlc_wp_MK17IUR_556_camo
			{
				weapon="hlc_wp_MK17IUR_556_camo";
				count=1;
			};
		};
		class TransportMagazines
		{
			class hlc_30rnd_556x45_EPR_SCAR
			{
				magazine="hlc_30rnd_556x45_EPR_SCAR";
				count=1;
			};
		};
	};
	class Weapon_hlc_wp_MK17IUR_556_AGC: Weapon_Base_F
	{
		dlc="Niarms_SCAR";
		scope=2;
		scopeCurator=2;
		displayName="Mk 17 Mod (IUR 5.56/GL)";
		author="Toadie";
		editorCategory="EdCat_Weapons";
		editorSubcategory="EdSubcat_AssaultRifles";
		vehicleClass="WeaponsPrimary";
		class TransportWeapons
		{
			class hlc_wp_MK17IUR_556_AGC
			{
				weapon="hlc_wp_MK17IUR_556_AGC";
				count=1;
			};
		};
		class TransportMagazines
		{
			class hlc_30rnd_556x45_EPR_SCAR
			{
				magazine="hlc_30rnd_556x45_EPR_SCAR";
				count=1;
			};
		};
	};
	class Weapon_hlc_wp_MK17IUR_556_AGC_camo: Weapon_Base_F
	{
		dlc="Niarms_SCAR";
		scope=2;
		scopeCurator=2;
		displayName="Mk 17 Mod (IUR 5.56/GL/Camo)";
		author="Toadie";
		editorCategory="EdCat_Weapons";
		editorSubcategory="EdSubcat_AssaultRifles";
		vehicleClass="WeaponsPrimary";
		class TransportWeapons
		{
			class hlc_wp_MK17IUR_556_AGC_camo
			{
				weapon="hlc_wp_MK17IUR_556_AGC_camo";
				count=1;
			};
		};
		class TransportMagazines
		{
			class hlc_30rnd_556x45_EPR_SCAR
			{
				magazine="hlc_30rnd_556x45_EPR_SCAR";
				count=1;
			};
		};
	};
	class Weapon_hlc_wp_MK17IUR_300: Weapon_Base_F
	{
		dlc="Niarms_SCAR";
		scope=2;
		scopeCurator=2;
		displayName="Mk 17 Mod (IUR .300 Blackout)";
		author="Toadie";
		editorCategory="EdCat_Weapons";
		editorSubcategory="EdSubcat_AssaultRifles";
		vehicleClass="WeaponsPrimary";
		class TransportWeapons
		{
			class hlc_wp_MK17IUR_300
			{
				weapon="hlc_wp_MK17IUR_300";
				count=1;
			};
		};
		class TransportMagazines
		{
			class hlc_30rnd_300BLK_SCAR
			{
				magazine="hlc_30rnd_300BLK_SCAR";
				count=1;
			};
		};
	};
	class Weapon_hlc_wp_MK17IUR_300_camo: Weapon_Base_F
	{
		dlc="Niarms_SCAR";
		scope=2;
		scopeCurator=2;
		displayName="Mk 17 Mod (IUR .300 Blackout/Camo)";
		author="Toadie";
		editorCategory="EdCat_Weapons";
		editorSubcategory="EdSubcat_AssaultRifles";
		vehicleClass="WeaponsPrimary";
		class TransportWeapons
		{
			class hlc_wp_MK17IUR_300_camo
			{
				weapon="hlc_wp_MK17IUR_300_camo";
				count=1;
			};
		};
		class TransportMagazines
		{
			class hlc_30rnd_300BLK_SCAR
			{
				magazine="hlc_30rnd_300BLK_SCAR";
				count=1;
			};
		};
	};
	class Weapon_hlc_wp_MK17IUR_300_AGC: Weapon_Base_F
	{
		dlc="Niarms_SCAR";
		scope=2;
		scopeCurator=2;
		displayName="Mk 17 Mod (IUR .300 Blackout/GL)";
		author="Toadie";
		editorCategory="EdCat_Weapons";
		editorSubcategory="EdSubcat_AssaultRifles";
		vehicleClass="WeaponsPrimary";
		class TransportWeapons
		{
			class hlc_wp_MK17IUR_300_AGC
			{
				weapon="hlc_wp_MK17IUR_300_AGC";
				count=1;
			};
		};
		class TransportMagazines
		{
			class hlc_30rnd_300BLK_SCAR
			{
				magazine="hlc_30rnd_300BLK_SCAR";
				count=1;
			};
		};
	};
	class Weapon_hlc_wp_MK17IUR_300_AGC_camo: Weapon_Base_F
	{
		dlc="Niarms_SCAR";
		scope=2;
		scopeCurator=2;
		displayName="Mk 17 Mod (IUR .300 Blackout/GL/Camo)";
		author="Toadie";
		editorCategory="EdCat_Weapons";
		editorSubcategory="EdSubcat_AssaultRifles";
		vehicleClass="WeaponsPrimary";
		class TransportWeapons
		{
			class hlc_wp_MK17IUR_300_AGC_camo
			{
				weapon="hlc_wp_MK17IUR_300_AGC_camo";
				count=1;
			};
		};
		class TransportMagazines
		{
			class hlc_30rnd_300BLK_SCAR
			{
				magazine="hlc_30rnd_300BLK_SCAR";
				count=1;
			};
		};
	};
	class Weapon_hlc_wp_MK17IUR_762R: Weapon_Base_F
	{
		dlc="Niarms_SCAR";
		scope=2;
		scopeCurator=2;
		displayName="Mk 17 Mod (IUR 7.62 AK)";
		author="Toadie";
		editorCategory="EdCat_Weapons";
		editorSubcategory="EdSubcat_AssaultRifles";
		vehicleClass="WeaponsPrimary";
		class TransportWeapons
		{
			class hlc_wp_MK17IUR_762R
			{
				weapon="hlc_wp_MK17IUR_762R";
				count=1;
			};
		};
		class TransportMagazines
		{
			class hlc_30Rnd_762x39_b_ak
			{
				magazine="hlc_30Rnd_762x39_b_ak";
				count=1;
			};
		};
	};
	class Weapon_hlc_wp_MK17IUR_762R_camo: Weapon_Base_F
	{
		dlc="Niarms_SCAR";
		scope=2;
		scopeCurator=2;
		displayName="Mk 17 Mod (IUR 7.62 AK/Camo)";
		author="Toadie";
		editorCategory="EdCat_Weapons";
		editorSubcategory="EdSubcat_AssaultRifles";
		vehicleClass="WeaponsPrimary";
		class TransportWeapons
		{
			class hlc_wp_MK17IUR_762R_camo
			{
				weapon="hlc_wp_MK17IUR_762R_camo";
				count=1;
			};
		};
		class TransportMagazines
		{
			class hlc_30Rnd_762x39_b_ak
			{
				magazine="hlc_30Rnd_762x39_b_ak";
				count=1;
			};
		};
	};
	class Weapon_hlc_WP_SSR: Weapon_Base_F
	{
		dlc="Niarms_SCAR";
		scope=2;
		scopeCurator=2;
		displayName="TPR";
		author="Toadie";
		editorCategory="EdCat_Weapons";
		editorSubcategory="EdSubcat_AssaultRifles";
		vehicleClass="WeaponsPrimary";
		class TransportWeapons
		{
			class hlc_WP_SSR
			{
				weapon="hlc_WP_SSR";
				count=1;
			};
		};
		class TransportMagazines
		{
			class hlc_20Rnd_762x51_Mk316_SCARH_tan
			{
				magazine="hlc_20Rnd_762x51_Mk316_SCARH_tan";
				count=1;
			};
		};
	};
	class Weapon_hlc_wp_SSR_Blk: Weapon_Base_F
	{
		dlc="Niarms_SCAR";
		scope=2;
		scopeCurator=2;
		displayName="TPR(Black)";
		author="Toadie";
		editorCategory="EdCat_Weapons";
		editorSubcategory="EdSubcat_AssaultRifles";
		vehicleClass="WeaponsPrimary";
		class TransportWeapons
		{
			class hlc_wp_SSR_Blk
			{
				weapon="hlc_wp_SSR_Blk";
				count=1;
			};
		};
		class TransportMagazines
		{
			class hlc_20Rnd_762x51_Mk316_SCARH
			{
				magazine="hlc_20Rnd_762x51_Mk316_SCARH";
				count=1;
			};
		};
	};
	class Weapon_hlc_wp_SSR_camo: Weapon_Base_F
	{
		dlc="Niarms_SCAR";
		scope=2;
		scopeCurator=2;
		displayName="TPR(Camo)";
		author="Toadie";
		editorCategory="EdCat_Weapons";
		editorSubcategory="EdSubcat_AssaultRifles";
		vehicleClass="WeaponsPrimary";
		class TransportWeapons
		{
			class hlc_wp_SSR_camo
			{
				weapon="hlc_wp_SSR_camo";
				count=1;
			};
		};
		class TransportMagazines
		{
			class hlc_20Rnd_762x51_Mk316_SCARH_camo
			{
				magazine="hlc_20Rnd_762x51_Mk316_SCARH_camo";
				count=1;
			};
		};
	};
	class Weapon_hlc_wp_SCARL_STD: Weapon_Base_F
	{
		dlc="Niarms_SCAR";
		scope=2;
		scopeCurator=2;
		displayName="SCAR-L STD";
		author="Toadie";
		editorCategory="EdCat_Weapons";
		editorSubcategory="EdSubcat_AssaultRifles";
		vehicleClass="WeaponsPrimary";
		class TransportWeapons
		{
			class hlc_wp_SCARL_STD
			{
				weapon="hlc_wp_SCARL_STD";
				count=1;
			};
		};
		class TransportMagazines
		{
			class hlc_30rnd_556x45_EPR_SCAR
			{
				magazine="hlc_30rnd_556x45_EPR_SCAR";
				count=1;
			};
		};
	};
	class Weapon_hlc_wp_SCARL_STD_Blk: Weapon_Base_F
	{
		dlc="Niarms_SCAR";
		scope=2;
		scopeCurator=2;
		displayName="SCAR-L STD(Black)";
		author="Toadie";
		editorCategory="EdCat_Weapons";
		editorSubcategory="EdSubcat_AssaultRifles";
		vehicleClass="WeaponsPrimary";
		class TransportWeapons
		{
			class hlc_wp_SCARL_STD_Blk
			{
				weapon="hlc_wp_SCARL_STD_Blk";
				count=1;
			};
		};
		class TransportMagazines
		{
			class hlc_30rnd_556x45_EPR_SCAR
			{
				magazine="hlc_30rnd_556x45_EPR_SCAR";
				count=1;
			};
		};
	};
	class Weapon_hlc_wp_SCARL_STD_camo: Weapon_Base_F
	{
		dlc="Niarms_SCAR";
		scope=2;
		scopeCurator=2;
		displayName="SCAR-L STD(Camo)";
		author="Toadie";
		editorCategory="EdCat_Weapons";
		editorSubcategory="EdSubcat_AssaultRifles";
		vehicleClass="WeaponsPrimary";
		class TransportWeapons
		{
			class hlc_wp_SCARL_STD_camo
			{
				weapon="hlc_wp_SCARL_STD_camo";
				count=1;
			};
		};
		class TransportMagazines
		{
			class hlc_30rnd_556x45_EPR_SCAR
			{
				magazine="hlc_30rnd_556x45_EPR_SCAR";
				count=1;
			};
		};
	};
	class Weapon_hlc_wp_SCARL_STD_SRX: Weapon_Base_F
	{
		dlc="Niarms_SCAR";
		scope=2;
		scopeCurator=2;
		displayName="SCAR-L STD(SRX)";
		author="Toadie";
		editorCategory="EdCat_Weapons";
		editorSubcategory="EdSubcat_AssaultRifles";
		vehicleClass="WeaponsPrimary";
		class TransportWeapons
		{
			class hlc_wp_SCARL_STD_SRX
			{
				weapon="hlc_wp_SCARL_STD_SRX";
				count=1;
			};
		};
		class TransportMagazines
		{
			class hlc_30rnd_556x45_EPR_SCAR
			{
				magazine="hlc_30rnd_556x45_EPR_SCAR";
				count=1;
			};
		};
	};
	class Weapon_hlc_wp_SCARL_STD_SRX_camo: Weapon_Base_F
	{
		dlc="Niarms_SCAR";
		scope=2;
		scopeCurator=2;
		displayName="SCAR-L STD(SRX/Camo)";
		author="Toadie";
		editorCategory="EdCat_Weapons";
		editorSubcategory="EdSubcat_AssaultRifles";
		vehicleClass="WeaponsPrimary";
		class TransportWeapons
		{
			class hlc_wp_SCARL_STD_SRX_camo
			{
				weapon="hlc_wp_SCARL_STD_SRX_camo";
				count=1;
			};
		};
		class TransportMagazines
		{
			class hlc_30rnd_556x45_EPR_SCAR
			{
				magazine="hlc_30rnd_556x45_EPR_SCAR";
				count=1;
			};
		};
	};
	class Weapon_hlc_wp_SCARL_STD_SRX_Blk: Weapon_Base_F
	{
		dlc="Niarms_SCAR";
		scope=2;
		scopeCurator=2;
		displayName="SCAR-L STD(SRX/Black)";
		author="Toadie";
		editorCategory="EdCat_Weapons";
		editorSubcategory="EdSubcat_AssaultRifles";
		vehicleClass="WeaponsPrimary";
		class TransportWeapons
		{
			class hlc_wp_SCARL_STD_SRX_Blk
			{
				weapon="hlc_wp_SCARL_STD_SRX_Blk";
				count=1;
			};
		};
		class TransportMagazines
		{
			class hlc_30rnd_556x45_EPR_SCAR
			{
				magazine="hlc_30rnd_556x45_EPR_SCAR";
				count=1;
			};
		};
	};
	class Weapon_hlc_wp_SCARL_STD_EGLM: Weapon_Base_F
	{
		dlc="Niarms_SCAR";
		scope=2;
		scopeCurator=2;
		displayName="SCAR-L STD (GL)";
		author="Toadie";
		editorCategory="EdCat_Weapons";
		editorSubcategory="EdSubcat_AssaultRifles";
		vehicleClass="WeaponsPrimary";
		class TransportWeapons
		{
			class hlc_wp_SCARL_STD_EGLM
			{
				weapon="hlc_wp_SCARL_STD_EGLM";
				count=1;
			};
		};
		class TransportMagazines
		{
			class hlc_30rnd_556x45_EPR_SCAR
			{
				magazine="hlc_30rnd_556x45_EPR_SCAR";
				count=1;
			};
		};
	};
	class Weapon_hlc_wp_SCARL_STD_EGLM_Blk: Weapon_Base_F
	{
		dlc="Niarms_SCAR";
		scope=2;
		scopeCurator=2;
		displayName="SCAR-L STD (GL/Black)";
		author="Toadie";
		editorCategory="EdCat_Weapons";
		editorSubcategory="EdSubcat_AssaultRifles";
		vehicleClass="WeaponsPrimary";
		class TransportWeapons
		{
			class hlc_wp_SCARL_STD_EGLM_Blk
			{
				weapon="hlc_wp_SCARL_STD_EGLM_Blk";
				count=1;
			};
		};
		class TransportMagazines
		{
			class hlc_30rnd_556x45_EPR_SCAR
			{
				magazine="hlc_30rnd_556x45_EPR_SCAR";
				count=1;
			};
		};
	};
	class Weapon_hlc_wp_SCARL_STD_EGLM_camo: Weapon_Base_F
	{
		dlc="Niarms_SCAR";
		scope=2;
		scopeCurator=2;
		displayName="SCAR-L STD (GL/Camo)";
		author="Toadie";
		editorCategory="EdCat_Weapons";
		editorSubcategory="EdSubcat_AssaultRifles";
		vehicleClass="WeaponsPrimary";
		class TransportWeapons
		{
			class hlc_wp_SCARL_STD_EGLM_camo
			{
				weapon="hlc_wp_SCARL_STD_EGLM_camo";
				count=1;
			};
		};
		class TransportMagazines
		{
			class hlc_30rnd_556x45_EPR_SCAR
			{
				magazine="hlc_30rnd_556x45_EPR_SCAR";
				count=1;
			};
		};
	};
	class Weapon_hlc_WP_SCARL_CQC: Weapon_Base_F
	{
		dlc="Niarms_SCAR";
		scope=2;
		scopeCurator=2;
		displayName="SCAR-L CQC";
		author="Toadie";
		editorCategory="EdCat_Weapons";
		editorSubcategory="EdSubcat_AssaultRifles";
		vehicleClass="WeaponsPrimary";
		class TransportWeapons
		{
			class hlc_WP_SCARL_CQC
			{
				weapon="hlc_WP_SCARL_CQC";
				count=1;
			};
		};
		class TransportMagazines
		{
			class hlc_30rnd_556x45_EPR_SCAR
			{
				magazine="hlc_30rnd_556x45_EPR_SCAR";
				count=1;
			};
		};
	};
	class Weapon_hlc_wp_SCARL_CQC_Blk: Weapon_Base_F
	{
		dlc="Niarms_SCAR";
		scope=2;
		scopeCurator=2;
		displayName="SCAR-L CQC(Black)";
		author="Toadie";
		editorCategory="EdCat_Weapons";
		editorSubcategory="EdSubcat_AssaultRifles";
		vehicleClass="WeaponsPrimary";
		class TransportWeapons
		{
			class hlc_wp_SCARL_CQC_Blk
			{
				weapon="hlc_wp_SCARL_CQC_Blk";
				count=1;
			};
		};
		class TransportMagazines
		{
			class hlc_30rnd_556x45_EPR_SCAR
			{
				magazine="hlc_30rnd_556x45_EPR_SCAR";
				count=1;
			};
		};
	};
	class Weapon_hlc_wp_SCARL_CQC_camo: Weapon_Base_F
	{
		dlc="Niarms_SCAR";
		scope=2;
		scopeCurator=2;
		displayName="SCAR-L CQC(Camo)";
		author="Toadie";
		editorCategory="EdCat_Weapons";
		editorSubcategory="EdSubcat_AssaultRifles";
		vehicleClass="WeaponsPrimary";
		class TransportWeapons
		{
			class hlc_wp_SCARL_CQC_camo
			{
				weapon="hlc_wp_SCARL_CQC_camo";
				count=1;
			};
		};
		class TransportMagazines
		{
			class hlc_30rnd_556x45_EPR_SCAR
			{
				magazine="hlc_30rnd_556x45_EPR_SCAR";
				count=1;
			};
		};
	};
	class Weapon_hlc_wp_SCARL_CQC_EGLM: Weapon_Base_F
	{
		dlc="Niarms_SCAR";
		scope=2;
		scopeCurator=2;
		displayName="SCAR-L CQC (GL)";
		author="Toadie";
		editorCategory="EdCat_Weapons";
		editorSubcategory="EdSubcat_AssaultRifles";
		vehicleClass="WeaponsPrimary";
		class TransportWeapons
		{
			class hlc_wp_SCARL_CQC_EGLM
			{
				weapon="hlc_wp_SCARL_CQC_EGLM";
				count=1;
			};
		};
		class TransportMagazines
		{
			class hlc_30rnd_556x45_EPR_SCAR
			{
				magazine="hlc_30rnd_556x45_EPR_SCAR";
				count=1;
			};
		};
	};
	class Weapon_hlc_wp_SCARL_CQC_EGLM_Blk: Weapon_Base_F
	{
		dlc="Niarms_SCAR";
		scope=2;
		scopeCurator=2;
		displayName="SCAR-L CQC (GL/Black)";
		author="Toadie";
		editorCategory="EdCat_Weapons";
		editorSubcategory="EdSubcat_AssaultRifles";
		vehicleClass="WeaponsPrimary";
		class TransportWeapons
		{
			class hlc_wp_SCARL_CQC_EGLM_Blk
			{
				weapon="hlc_wp_SCARL_CQC_EGLM_Blk";
				count=1;
			};
		};
		class TransportMagazines
		{
			class hlc_30rnd_556x45_EPR_SCAR
			{
				magazine="hlc_30rnd_556x45_EPR_SCAR";
				count=1;
			};
		};
	};
	class Weapon_hlc_wp_SCARL_CQC_EGLM_camo: Weapon_Base_F
	{
		dlc="Niarms_SCAR";
		scope=2;
		scopeCurator=2;
		displayName="SCAR-L CQC (GL/Camo)";
		author="Toadie";
		editorCategory="EdCat_Weapons";
		editorSubcategory="EdSubcat_AssaultRifles";
		vehicleClass="WeaponsPrimary";
		class TransportWeapons
		{
			class hlc_wp_SCARL_CQC_EGLM_camo
			{
				weapon="hlc_wp_SCARL_CQC_EGLM_camo";
				count=1;
			};
		};
		class TransportMagazines
		{
			class hlc_30rnd_556x45_EPR_SCAR
			{
				magazine="hlc_30rnd_556x45_EPR_SCAR";
				count=1;
			};
		};
	};
	class Weapon_hlc_WP_SCARL_DMR: Weapon_Base_F
	{
		dlc="Niarms_SCAR";
		scope=2;
		scopeCurator=2;
		displayName="SCAR-L LB";
		author="Toadie";
		editorCategory="EdCat_Weapons";
		editorSubcategory="EdSubcat_AssaultRifles";
		vehicleClass="WeaponsPrimary";
		class TransportWeapons
		{
			class hlc_WP_SCARL_DMR
			{
				weapon="hlc_WP_SCARL_DMR";
				count=1;
			};
		};
		class TransportMagazines
		{
			class hlc_30rnd_556x45_EPR_SCAR
			{
				magazine="hlc_30rnd_556x45_EPR_SCAR";
				count=1;
			};
		};
	};
	class Weapon_hlc_wp_SCARL_DMR_Blk: Weapon_Base_F
	{
		dlc="Niarms_SCAR";
		scope=2;
		scopeCurator=2;
		displayName="SCAR-L LB";
		author="Toadie";
		editorCategory="EdCat_Weapons";
		editorSubcategory="EdSubcat_AssaultRifles";
		vehicleClass="WeaponsPrimary";
		class TransportWeapons
		{
			class hlc_wp_SCARL_DMR_Blk
			{
				weapon="hlc_wp_SCARL_DMR_Blk";
				count=1;
			};
		};
		class TransportMagazines
		{
			class hlc_30rnd_556x45_EPR_SCAR
			{
				magazine="hlc_30rnd_556x45_EPR_SCAR";
				count=1;
			};
		};
	};
	class Weapon_hlc_wp_SCARL_DMR_camo: Weapon_Base_F
	{
		dlc="Niarms_SCAR";
		scope=2;
		scopeCurator=2;
		displayName="SCAR-L LB";
		author="Toadie";
		editorCategory="EdCat_Weapons";
		editorSubcategory="EdSubcat_AssaultRifles";
		vehicleClass="WeaponsPrimary";
		class TransportWeapons
		{
			class hlc_wp_SCARL_DMR_camo
			{
				weapon="hlc_wp_SCARL_DMR_camo";
				count=1;
			};
		};
		class TransportMagazines
		{
			class hlc_30rnd_556x45_EPR_SCAR
			{
				magazine="hlc_30rnd_556x45_EPR_SCAR";
				count=1;
			};
		};
	};
	class Weapon_hlc_wp_SCAR_PDW: Weapon_Base_F
	{
		dlc="Niarms_SCAR";
		scope=2;
		scopeCurator=2;
		displayName="SCAR-SC(Tan)";
		author="Toadie";
		editorCategory="EdCat_Weapons";
		editorSubcategory="EdSubcat_AssaultRifles";
		vehicleClass="WeaponsPrimary";
		class TransportWeapons
		{
			class hlc_wp_SCAR_PDW
			{
				weapon="hlc_wp_SCAR_PDW";
				count=1;
			};
		};
		class TransportMagazines
		{
			class hlc_30rnd_556x45_EPR_SCAR
			{
				magazine="hlc_30rnd_556x45_EPR_SCAR";
				count=1;
			};
		};
	};
	class Weapon_hlc_wp_SCAR_PDW_Blk: Weapon_Base_F
	{
		dlc="Niarms_SCAR";
		scope=2;
		scopeCurator=2;
		displayName="SCAR-SC";
		author="Toadie";
		editorCategory="EdCat_Weapons";
		editorSubcategory="EdSubcat_AssaultRifles";
		vehicleClass="WeaponsPrimary";
		class TransportWeapons
		{
			class hlc_wp_SCAR_PDW_Blk
			{
				weapon="hlc_wp_SCAR_PDW_Blk";
				count=1;
			};
		};
		class TransportMagazines
		{
			class hlc_30rnd_556x45_EPR_SCAR
			{
				magazine="hlc_30rnd_556x45_EPR_SCAR";
				count=1;
			};
		};
	};
	class Weapon_hlc_wp_SCAR_PDW_camo: Weapon_Base_F
	{
		dlc="Niarms_SCAR";
		scope=2;
		scopeCurator=2;
		displayName="SCAR-SC(Camo)";
		author="Toadie";
		editorCategory="EdCat_Weapons";
		editorSubcategory="EdSubcat_AssaultRifles";
		vehicleClass="WeaponsPrimary";
		class TransportWeapons
		{
			class hlc_wp_SCAR_PDW_camo
			{
				weapon="hlc_wp_SCAR_PDW_camo";
				count=1;
			};
		};
		class TransportMagazines
		{
			class hlc_30rnd_556x45_EPR_SCAR
			{
				magazine="hlc_30rnd_556x45_EPR_SCAR";
				count=1;
			};
		};
	};
	class Weapon_hlc_wp_SCARL_STD_300AAC: Weapon_Base_F
	{
		dlc="Niarms_SCAR";
		scope=2;
		scopeCurator=2;
		displayName="SCAR-L STD (.300 AAC)";
		author="Toadie";
		editorCategory="EdCat_Weapons";
		editorSubcategory="EdSubcat_AssaultRifles";
		vehicleClass="WeaponsPrimary";
		class TransportWeapons
		{
			class hlc_wp_SCARL_STD_300AAC
			{
				weapon="hlc_wp_SCARL_STD_300AAC";
				count=1;
			};
		};
		class TransportMagazines
		{
			class hlc_30rnd_300BLK_SCAR
			{
				magazine="hlc_30rnd_300BLK_SCAR";
				count=1;
			};
		};
	};
	class Weapon_hlc_wp_SCARL_STD_300AAC_Blk: Weapon_Base_F
	{
		dlc="Niarms_SCAR";
		scope=2;
		scopeCurator=2;
		displayName="SCAR-L STD (.300 AAC/Black)";
		author="Toadie";
		editorCategory="EdCat_Weapons";
		editorSubcategory="EdSubcat_AssaultRifles";
		vehicleClass="WeaponsPrimary";
		class TransportWeapons
		{
			class hlc_wp_SCARL_STD_300AAC_Blk
			{
				weapon="hlc_wp_SCARL_STD_300AAC_Blk";
				count=1;
			};
		};
		class TransportMagazines
		{
			class hlc_30rnd_300BLK_SCAR
			{
				magazine="hlc_30rnd_300BLK_SCAR";
				count=1;
			};
		};
	};
	class Weapon_hlc_wp_SCARL_STD_300AAC_camo: Weapon_Base_F
	{
		dlc="Niarms_SCAR";
		scope=2;
		scopeCurator=2;
		displayName="SCAR-L STD (.300 AAC/Camo)";
		author="Toadie";
		editorCategory="EdCat_Weapons";
		editorSubcategory="EdSubcat_AssaultRifles";
		vehicleClass="WeaponsPrimary";
		class TransportWeapons
		{
			class hlc_wp_SCARL_STD_300AAC_camo
			{
				weapon="hlc_wp_SCARL_STD_300AAC_camo";
				count=1;
			};
		};
		class TransportMagazines
		{
			class hlc_30rnd_300BLK_SCAR
			{
				magazine="hlc_30rnd_300BLK_SCAR";
				count=1;
			};
		};
	};
	class Weapon_hlc_wp_SCARL_STD_300AAC_SRX: Weapon_Base_F
	{
		dlc="Niarms_SCAR";
		scope=2;
		scopeCurator=2;
		displayName="";
		author="Toadie";
		editorCategory="EdCat_Weapons";
		editorSubcategory="EdSubcat_AssaultRifles";
		vehicleClass="WeaponsPrimary";
		class TransportWeapons
		{
			class hlc_wp_SCARL_STD_300AAC_SRX
			{
				weapon="hlc_wp_SCARL_STD_300AAC_SRX";
				count=1;
			};
		};
		class TransportMagazines
		{
			class hlc_30rnd_300BLK_SCAR
			{
				magazine="hlc_30rnd_300BLK_SCAR";
				count=1;
			};
		};
	};
	class Weapon_hlc_wp_SCARL_STD_300AAC_SRX_camo: Weapon_Base_F
	{
		dlc="Niarms_SCAR";
		scope=2;
		scopeCurator=2;
		displayName="";
		author="Toadie";
		editorCategory="EdCat_Weapons";
		editorSubcategory="EdSubcat_AssaultRifles";
		vehicleClass="WeaponsPrimary";
		class TransportWeapons
		{
			class hlc_wp_SCARL_STD_300AAC_SRX_camo
			{
				weapon="hlc_wp_SCARL_STD_300AAC_SRX_camo";
				count=1;
			};
		};
		class TransportMagazines
		{
			class hlc_30rnd_300BLK_SCAR
			{
				magazine="hlc_30rnd_300BLK_SCAR";
				count=1;
			};
		};
	};
	class Weapon_hlc_wp_SCARL_STD_300AAC_SRX_muddy: Weapon_Base_F
	{
		dlc="Niarms_SCAR";
		scope=2;
		scopeCurator=2;
		displayName="";
		author="Toadie";
		editorCategory="EdCat_Weapons";
		editorSubcategory="EdSubcat_AssaultRifles";
		vehicleClass="WeaponsPrimary";
		class TransportWeapons
		{
			class hlc_wp_SCARL_STD_300AAC_SRX_muddy
			{
				weapon="hlc_wp_SCARL_STD_300AAC_SRX_muddy";
				count=1;
			};
		};
		class TransportMagazines
		{
			class hlc_30rnd_300BLK_SCAR
			{
				magazine="hlc_30rnd_300BLK_SCAR";
				count=1;
			};
		};
	};
	class Weapon_hlc_wp_SCARL_STD_300AAC_SRX_Blk: Weapon_Base_F
	{
		dlc="Niarms_SCAR";
		scope=2;
		scopeCurator=2;
		displayName="";
		author="Toadie";
		editorCategory="EdCat_Weapons";
		editorSubcategory="EdSubcat_AssaultRifles";
		vehicleClass="WeaponsPrimary";
		class TransportWeapons
		{
			class hlc_wp_SCARL_STD_300AAC_SRX_Blk
			{
				weapon="hlc_wp_SCARL_STD_300AAC_SRX_Blk";
				count=1;
			};
		};
		class TransportMagazines
		{
			class hlc_30rnd_300BLK_SCAR
			{
				magazine="hlc_30rnd_300BLK_SCAR";
				count=1;
			};
		};
	};
	class Weapon_hlc_WP_SCARL_CQC_300AAC: Weapon_Base_F
	{
		dlc="Niarms_SCAR";
		scope=2;
		scopeCurator=2;
		displayName="SCAR-L CQC (.300 AAC)";
		author="Toadie";
		editorCategory="EdCat_Weapons";
		editorSubcategory="EdSubcat_AssaultRifles";
		vehicleClass="WeaponsPrimary";
		class TransportWeapons
		{
			class hlc_WP_SCARL_CQC_300AAC
			{
				weapon="hlc_WP_SCARL_CQC_300AAC";
				count=1;
			};
		};
		class TransportMagazines
		{
			class hlc_30rnd_300BLK_SCAR
			{
				magazine="hlc_30rnd_300BLK_SCAR";
				count=1;
			};
		};
	};
	class Weapon_hlc_wp_SCARL_CQC_300AAC_Blk: Weapon_Base_F
	{
		dlc="Niarms_SCAR";
		scope=2;
		scopeCurator=2;
		displayName="SCAR-L CQC (.300 AAC/Black)";
		author="Toadie";
		editorCategory="EdCat_Weapons";
		editorSubcategory="EdSubcat_AssaultRifles";
		vehicleClass="WeaponsPrimary";
		class TransportWeapons
		{
			class hlc_wp_SCARL_CQC_300AAC_Blk
			{
				weapon="hlc_wp_SCARL_CQC_300AAC_Blk";
				count=1;
			};
		};
		class TransportMagazines
		{
			class hlc_30rnd_300BLK_SCAR
			{
				magazine="hlc_30rnd_300BLK_SCAR";
				count=1;
			};
		};
	};
	class Weapon_hlc_wp_SCARL_CQC_300AAC_camo: Weapon_Base_F
	{
		dlc="Niarms_SCAR";
		scope=2;
		scopeCurator=2;
		displayName="SCAR-L CQC (.300 AAC/Camo)";
		author="Toadie";
		editorCategory="EdCat_Weapons";
		editorSubcategory="EdSubcat_AssaultRifles";
		vehicleClass="WeaponsPrimary";
		class TransportWeapons
		{
			class hlc_wp_SCARL_CQC_300AAC_camo
			{
				weapon="hlc_wp_SCARL_CQC_300AAC_camo";
				count=1;
			};
		};
		class TransportMagazines
		{
			class hlc_30rnd_300BLK_SCAR
			{
				magazine="hlc_30rnd_300BLK_SCAR";
				count=1;
			};
		};
	};
};
class CfgWeapons
{
	class UGL_F;
	class Rifle;
	class Rifle_Base_F: Rifle
	{
		class WeaponSlotsInfo;
		class GunParticles;
	};
	class ItemCore;
	class HLC_Panel_base;
	class HLC_Panel_Side_FN5cm_Desert;
	class HLC_Panel_Side_FN10cm_Desert: HLC_Panel_base
	{
	};
	class HLC_Panel_Side_FN15cm_Desert: HLC_Panel_base
	{
	};
	class HLC_Panel_Side_2xFN5cm_Desert: HLC_Panel_base
	{
	};
	class HLC_Panel_Side_Ladder_S_Desert: HLC_Panel_base
	{
	};
	class HLC_Panel_Side_Ladder_M_Desert: HLC_Panel_base
	{
	};
	class HLC_Panel_Side_Ladder_L_Desert: HLC_Panel_base
	{
	};
	class HLC_Panel_Side_MagpulXT_Desert: HLC_Panel_base
	{
	};
	class HLC_Panel_Side_XTME_Desert: HLC_Panel_base
	{
	};
	class HLC_Panel_Side_2xXTME_Desert: HLC_Panel_base
	{
	};
	class HLC_Panel_Side_4xXTME_Desert: HLC_Panel_base
	{
	};
	class HLC_Panel_Side_6xXTME_Desert: HLC_Panel_base
	{
	};
	class HLC_Panel_Side_FN5cm_Black;
	class HLC_Panel_Side_FN10cm_Black: HLC_Panel_base
	{
	};
	class HLC_Panel_Side_FN15cm_Black: HLC_Panel_base
	{
	};
	class HLC_Panel_Side_2xFN5cm_Black: HLC_Panel_base
	{
	};
	class HLC_Panel_Side_Ladder_S_Black: HLC_Panel_base
	{
	};
	class HLC_Panel_Side_Ladder_M_Black: HLC_Panel_base
	{
	};
	class HLC_Panel_Side_Ladder_L_Black: HLC_Panel_base
	{
	};
	class HLC_Panel_Side_MagpulXT_Black: HLC_Panel_base
	{
	};
	class HLC_Panel_Side_XTME_Black: HLC_Panel_base
	{
	};
	class HLC_Panel_Side_2xXTME_Black: HLC_Panel_base
	{
	};
	class HLC_Panel_Side_4xXTME_Black: HLC_Panel_base
	{
	};
	class HLC_Panel_Side_6xXTME_Black: HLC_Panel_base
	{
	};
	class HLC_Panel_Side_FN5cm_OD;
	class HLC_Panel_Side_FN10cm_OD: HLC_Panel_base
	{
	};
	class HLC_Panel_Side_FN15cm_OD: HLC_Panel_base
	{
	};
	class HLC_Panel_Side_2xFN5cm_OD: HLC_Panel_base
	{
	};
	class HLC_Panel_Side_Ladder_S_OD: HLC_Panel_base
	{
	};
	class HLC_Panel_Side_Ladder_M_OD: HLC_Panel_base
	{
	};
	class HLC_Panel_Side_Ladder_L_OD: HLC_Panel_base
	{
	};
	class HLC_Panel_Side_MagpulXT_OD: HLC_Panel_base
	{
	};
	class HLC_Panel_Side_XTME_OD: HLC_Panel_base
	{
	};
	class HLC_Panel_Side_2xXTME_OD: HLC_Panel_base
	{
	};
	class HLC_Panel_Side_4xXTME_OD: HLC_Panel_base
	{
	};
	class HLC_Panel_Side_6xXTME_OD: HLC_Panel_base
	{
	};
	class HLC_Panel_Side_FN5cm_RG;
	class HLC_Panel_Side_FN10cm_RG: HLC_Panel_base
	{
	};
	class HLC_Panel_Side_FN15cm_RG: HLC_Panel_base
	{
	};
	class HLC_Panel_Side_2xFN5cm_RG: HLC_Panel_base
	{
	};
	class HLC_Panel_Side_Ladder_S_RG: HLC_Panel_base
	{
	};
	class HLC_Panel_Side_Ladder_M_RG: HLC_Panel_base
	{
	};
	class HLC_Panel_Side_Ladder_L_RG: HLC_Panel_base
	{
	};
	class HLC_Panel_Side_MagpulXT_RG: HLC_Panel_base
	{
	};
	class HLC_Panel_Side_XTME_RG: HLC_Panel_base
	{
	};
	class HLC_Panel_Side_2xXTME_RG: HLC_Panel_base
	{
	};
	class HLC_Panel_Side_4xXTME_RG: HLC_Panel_base
	{
	};
	class HLC_Panel_Side_6xXTME_RG: HLC_Panel_base
	{
	};
	class HLC_Panel_Side_FN5cm_pride2;
	class HLC_Panel_Side_FN10cm_pride2: HLC_Panel_base
	{
	};
	class HLC_Panel_Side_FN15cm_pride2: HLC_Panel_base
	{
	};
	class HLC_Panel_Side_2xFN5cm_pride2: HLC_Panel_base
	{
	};
	class HLC_Panel_Side_Ladder_S_pride2: HLC_Panel_base
	{
	};
	class HLC_Panel_Side_Ladder_M_pride2: HLC_Panel_base
	{
	};
	class HLC_Panel_Side_Ladder_L_pride2: HLC_Panel_base
	{
	};
	class HLC_Panel_Side_MagpulXT_pride2: HLC_Panel_base
	{
	};
	class HLC_Panel_Side_XTME_pride2: HLC_Panel_base
	{
	};
	class HLC_Panel_Side_2xXTME_pride2: HLC_Panel_base
	{
	};
	class HLC_Panel_Side_4xXTME_pride2: HLC_Panel_base
	{
	};
	class HLC_Panel_Side_6xXTME_pride2: HLC_Panel_base
	{
	};
	class HLC_Panel_Side_SCAR_FN5cm_Desert: HLC_Panel_Side_FN5cm_Desert
	{
		dlc="Niarms_SCAR";
		scope=2;
		scopeCurator=2;
		author="Toadie";
		model="\nia_wp_SCAR\mesh\Acc\railpanels\SCAR\FN_5cm_D";
	};
	class HLC_Panel_Side_SCAR_FN10cm_Desert: HLC_Panel_Side_FN10cm_Desert
	{
		dlc="Niarms_SCAR";
		scope=2;
		scopeCurator=2;
		author="Toadie";
		model="\nia_wp_SCAR\mesh\Acc\railpanels\SCAR\FN_10cm_D";
	};
	class HLC_Panel_Side_SCAR_FN15cm_Desert: HLC_Panel_Side_FN15cm_Desert
	{
		dlc="Niarms_SCAR";
		scope=2;
		scopeCurator=2;
		author="Toadie";
		model="\nia_wp_SCAR\mesh\Acc\railpanels\SCAR\FN_15cm_D";
	};
	class HLC_Panel_Side_SCAR_2xFN5cm_Desert: HLC_Panel_Side_2xFN5cm_Desert
	{
		dlc="Niarms_SCAR";
		scope=2;
		scopeCurator=2;
		author="Toadie";
		model="\nia_wp_SCAR\mesh\Acc\railpanels\SCAR\FN_5cm_2length_D";
	};
	class HLC_Panel_Side_SCAR_Ladder_S_Desert: HLC_Panel_Side_Ladder_S_Desert
	{
		dlc="Niarms_SCAR";
		scope=2;
		scopeCurator=2;
		author="Toadie";
		model="\nia_wp_SCAR\mesh\Acc\railpanels\SCAR\Ladder_Short_D";
	};
	class HLC_Panel_Side_SCAR_Ladder_M_Desert: HLC_Panel_Side_Ladder_M_Desert
	{
		dlc="Niarms_SCAR";
		scope=2;
		scopeCurator=2;
		author="Toadie";
		model="\nia_wp_SCAR\mesh\Acc\railpanels\SCAR\Ladder_Med_D";
	};
	class HLC_Panel_Side_SCAR_Ladder_L_Desert: HLC_Panel_Side_Ladder_L_Desert
	{
		dlc="Niarms_SCAR";
		scope=2;
		scopeCurator=2;
		author="Toadie";
		model="\nia_wp_SCAR\mesh\Acc\railpanels\SCAR\Ladder_Long_D";
	};
	class HLC_Panel_Side_SCAR_MagpulXT_Desert: HLC_Panel_Side_MagpulXT_Desert
	{
		dlc="Niarms_SCAR";
		scope=2;
		scopeCurator=2;
		author="Toadie";
		model="\nia_wp_SCAR\mesh\Acc\railpanels\SCAR\Magpul_XT_D";
	};
	class HLC_Panel_Side_SCAR_XTME_Desert: HLC_Panel_Side_XTME_Desert
	{
		dlc="Niarms_SCAR";
		scope=2;
		scopeCurator=2;
		author="Toadie";
		model="\nia_wp_SCAR\mesh\Acc\railpanels\SCAR\Magpul_XTME_D";
	};
	class HLC_Panel_Side_SCAR_2xXTME_Desert: HLC_Panel_Side_2xXTME_Desert
	{
		dlc="Niarms_SCAR";
		scope=2;
		scopeCurator=2;
		author="Toadie";
		model="\nia_wp_SCAR\mesh\Acc\railpanels\SCAR\Magpul_XTME_2length_D";
	};
	class HLC_Panel_Side_SCAR_4xXTME_Desert: HLC_Panel_Side_4xXTME_Desert
	{
		dlc="Niarms_SCAR";
		scope=2;
		scopeCurator=2;
		author="Toadie";
		model="\nia_wp_SCAR\mesh\Acc\railpanels\SCAR\Magpul_XTME_4length_D";
	};
	class HLC_Panel_Side_SCAR_FN5cm_Black: HLC_Panel_Side_FN5cm_Black
	{
		dlc="Niarms_SCAR";
		scope=2;
		scopeCurator=2;
		author="Toadie";
		model="\nia_wp_SCAR\mesh\Acc\railpanels\SCAR\FN_5cm";
	};
	class HLC_Panel_Side_SCAR_FN10cm_Black: HLC_Panel_Side_FN10cm_Black
	{
		dlc="Niarms_SCAR";
		scope=2;
		scopeCurator=2;
		author="Toadie";
		model="\nia_wp_SCAR\mesh\Acc\railpanels\SCAR\FN_10cm";
	};
	class HLC_Panel_Side_SCAR_FN15cm_Black: HLC_Panel_Side_FN15cm_Black
	{
		dlc="Niarms_SCAR";
		scope=2;
		scopeCurator=2;
		author="Toadie";
		model="\nia_wp_SCAR\mesh\Acc\railpanels\SCAR\FN_15cm";
	};
	class HLC_Panel_Side_SCAR_2xFN5cm_Black: HLC_Panel_Side_2xFN5cm_Black
	{
		dlc="Niarms_SCAR";
		scope=2;
		scopeCurator=2;
		author="Toadie";
		model="\nia_wp_SCAR\mesh\Acc\railpanels\SCAR\FN_5cm_2length";
	};
	class HLC_Panel_Side_SCAR_Ladder_S_Black: HLC_Panel_Side_Ladder_S_Black
	{
		dlc="Niarms_SCAR";
		scope=2;
		scopeCurator=2;
		author="Toadie";
		model="\nia_wp_SCAR\mesh\Acc\railpanels\SCAR\Ladder_Short";
	};
	class HLC_Panel_Side_SCAR_Ladder_M_Black: HLC_Panel_Side_Ladder_M_Black
	{
		dlc="Niarms_SCAR";
		scope=2;
		scopeCurator=2;
		author="Toadie";
		model="\nia_wp_SCAR\mesh\Acc\railpanels\SCAR\Ladder_Med";
	};
	class HLC_Panel_Side_SCAR_Ladder_L_Black: HLC_Panel_Side_Ladder_L_Black
	{
		dlc="Niarms_SCAR";
		scope=2;
		scopeCurator=2;
		author="Toadie";
		model="\nia_wp_SCAR\mesh\Acc\railpanels\SCAR\Ladder_Long";
	};
	class HLC_Panel_Side_SCAR_MagpulXT_Black: HLC_Panel_Side_MagpulXT_Black
	{
		dlc="Niarms_SCAR";
		scope=2;
		scopeCurator=2;
		author="Toadie";
		model="\nia_wp_SCAR\mesh\Acc\railpanels\SCAR\Magpul_XT";
	};
	class HLC_Panel_Side_SCAR_XTME_Black: HLC_Panel_Side_XTME_Black
	{
		dlc="Niarms_SCAR";
		scope=2;
		scopeCurator=2;
		author="Toadie";
		model="\nia_wp_SCAR\mesh\Acc\railpanels\SCAR\Magpul_XTME";
	};
	class HLC_Panel_Side_SCAR_2xXTME_Black: HLC_Panel_Side_2xXTME_Black
	{
		dlc="Niarms_SCAR";
		scope=2;
		scopeCurator=2;
		author="Toadie";
		model="\nia_wp_SCAR\mesh\Acc\railpanels\SCAR\Magpul_XTME_2length";
	};
	class HLC_Panel_Side_SCAR_4xXTME_Black: HLC_Panel_Side_4xXTME_Black
	{
		dlc="Niarms_SCAR";
		scope=2;
		scopeCurator=2;
		author="Toadie";
		model="\nia_wp_SCAR\mesh\Acc\railpanels\SCAR\Magpul_XTME_4length";
	};
	class HLC_Panel_Side_SCAR_FN5cm_OD: HLC_Panel_Side_FN5cm_OD
	{
		dlc="Niarms_SCAR";
		scope=2;
		scopeCurator=2;
		author="Toadie";
		model="\nia_wp_SCAR\mesh\Acc\railpanels\SCAR\FN_5cm_OD";
	};
	class HLC_Panel_Side_SCAR_FN10cm_OD: HLC_Panel_Side_FN10cm_OD
	{
		dlc="Niarms_SCAR";
		scope=2;
		scopeCurator=2;
		author="Toadie";
		model="\nia_wp_SCAR\mesh\Acc\railpanels\SCAR\FN_10cm_OD";
	};
	class HLC_Panel_Side_SCAR_FN15cm_OD: HLC_Panel_Side_FN15cm_OD
	{
		dlc="Niarms_SCAR";
		scope=2;
		scopeCurator=2;
		author="Toadie";
		model="\nia_wp_SCAR\mesh\Acc\railpanels\SCAR\FN_15cm_OD";
	};
	class HLC_Panel_Side_SCAR_2xFN5cm_OD: HLC_Panel_Side_2xFN5cm_OD
	{
		dlc="Niarms_SCAR";
		scope=2;
		scopeCurator=2;
		author="Toadie";
		model="\nia_wp_SCAR\mesh\Acc\railpanels\SCAR\FN_5cm_2length_OD";
	};
	class HLC_Panel_Side_SCAR_Ladder_S_OD: HLC_Panel_Side_Ladder_S_OD
	{
		dlc="Niarms_SCAR";
		scope=2;
		scopeCurator=2;
		author="Toadie";
		model="\nia_wp_SCAR\mesh\Acc\railpanels\SCAR\Ladder_Short_OD";
	};
	class HLC_Panel_Side_SCAR_Ladder_M_OD: HLC_Panel_Side_Ladder_M_OD
	{
		dlc="Niarms_SCAR";
		scope=2;
		scopeCurator=2;
		author="Toadie";
		model="\nia_wp_SCAR\mesh\Acc\railpanels\SCAR\Ladder_Med_OD";
	};
	class HLC_Panel_Side_SCAR_Ladder_L_OD: HLC_Panel_Side_Ladder_L_OD
	{
		dlc="Niarms_SCAR";
		scope=2;
		scopeCurator=2;
		author="Toadie";
		model="\nia_wp_SCAR\mesh\Acc\railpanels\SCAR\Ladder_Long_OD";
	};
	class HLC_Panel_Side_SCAR_MagpulXT_OD: HLC_Panel_Side_MagpulXT_OD
	{
		dlc="Niarms_SCAR";
		scope=2;
		scopeCurator=2;
		author="Toadie";
		model="\nia_wp_SCAR\mesh\Acc\railpanels\SCAR\Magpul_XT_OD";
	};
	class HLC_Panel_Side_SCAR_XTME_OD: HLC_Panel_Side_XTME_OD
	{
		dlc="Niarms_SCAR";
		scope=2;
		scopeCurator=2;
		author="Toadie";
		model="\nia_wp_SCAR\mesh\Acc\railpanels\SCAR\Magpul_XTME_OD";
	};
	class HLC_Panel_Side_SCAR_2xXTME_OD: HLC_Panel_Side_2xXTME_OD
	{
		dlc="Niarms_SCAR";
		scope=2;
		scopeCurator=2;
		author="Toadie";
		model="\nia_wp_SCAR\mesh\Acc\railpanels\SCAR\Magpul_XTME_2length_OD";
	};
	class HLC_Panel_Side_SCAR_4xXTME_OD: HLC_Panel_Side_4xXTME_OD
	{
		dlc="Niarms_SCAR";
		scope=2;
		scopeCurator=2;
		author="Toadie";
		model="\nia_wp_SCAR\mesh\Acc\railpanels\SCAR\Magpul_XTME_4length_OD";
	};
	class HLC_Panel_Side_SCAR_FN5cm_RG: HLC_Panel_Side_FN5cm_RG
	{
		dlc="Niarms_SCAR";
		scope=2;
		scopeCurator=2;
		author="Toadie";
		model="\nia_wp_SCAR\mesh\Acc\railpanels\SCAR\FN_5cm_RG";
	};
	class HLC_Panel_Side_SCAR_FN10cm_RG: HLC_Panel_Side_FN10cm_RG
	{
		dlc="Niarms_SCAR";
		scope=2;
		scopeCurator=2;
		author="Toadie";
		model="\nia_wp_SCAR\mesh\Acc\railpanels\SCAR\FN_10cm_RG";
	};
	class HLC_Panel_Side_SCAR_FN15cm_RG: HLC_Panel_Side_FN15cm_RG
	{
		dlc="Niarms_SCAR";
		scope=2;
		scopeCurator=2;
		author="Toadie";
		model="\nia_wp_SCAR\mesh\Acc\railpanels\SCAR\FN_15cm_RG";
	};
	class HLC_Panel_Side_SCAR_2xFN5cm_RG: HLC_Panel_Side_2xFN5cm_RG
	{
		dlc="Niarms_SCAR";
		scope=2;
		scopeCurator=2;
		author="Toadie";
		model="\nia_wp_SCAR\mesh\Acc\railpanels\SCAR\FN_5cm_2length_RG";
	};
	class HLC_Panel_Side_SCAR_Ladder_S_RG: HLC_Panel_Side_Ladder_S_RG
	{
		dlc="Niarms_SCAR";
		scope=2;
		scopeCurator=2;
		author="Toadie";
		model="\nia_wp_SCAR\mesh\Acc\railpanels\SCAR\Ladder_Short_RG";
	};
	class HLC_Panel_Side_SCAR_Ladder_M_RG: HLC_Panel_Side_Ladder_M_RG
	{
		dlc="Niarms_SCAR";
		scope=2;
		scopeCurator=2;
		author="Toadie";
		model="\nia_wp_SCAR\mesh\Acc\railpanels\SCAR\Ladder_Med_RG";
	};
	class HLC_Panel_Side_SCAR_Ladder_L_RG: HLC_Panel_Side_Ladder_L_RG
	{
		dlc="Niarms_SCAR";
		scope=2;
		scopeCurator=2;
		author="Toadie";
		model="\nia_wp_SCAR\mesh\Acc\railpanels\SCAR\Ladder_Long_RG";
	};
	class HLC_Panel_Side_SCAR_MagpulXT_RG: HLC_Panel_Side_MagpulXT_RG
	{
		dlc="Niarms_SCAR";
		scope=2;
		scopeCurator=2;
		author="Toadie";
		model="\nia_wp_SCAR\mesh\Acc\railpanels\SCAR\Magpul_XT_RG";
	};
	class HLC_Panel_Side_SCAR_XTME_RG: HLC_Panel_Side_XTME_RG
	{
		dlc="Niarms_SCAR";
		scope=2;
		scopeCurator=2;
		author="Toadie";
		model="\nia_wp_SCAR\mesh\Acc\railpanels\SCAR\Magpul_XTME_RG";
	};
	class HLC_Panel_Side_SCAR_2xXTME_RG: HLC_Panel_Side_2xXTME_RG
	{
		dlc="Niarms_SCAR";
		scope=2;
		scopeCurator=2;
		author="Toadie";
		model="\nia_wp_SCAR\mesh\Acc\railpanels\SCAR\Magpul_XTME_2length_RG";
	};
	class HLC_Panel_Side_SCAR_4xXTME_RG: HLC_Panel_Side_4xXTME_RG
	{
		dlc="Niarms_SCAR";
		scope=2;
		scopeCurator=2;
		author="Toadie";
		model="\nia_wp_SCAR\mesh\Acc\railpanels\SCAR\Magpul_XTME_4length_RG";
	};
	class HLC_Panel_Side_SCAR_Ladder_S_Pride: HLC_Panel_Side_Ladder_S_pride2
	{
		dlc="Niarms_SCAR";
		scope=2;
		scopeCurator=2;
		author="Toadie";
		model="\nia_wp_SCAR\mesh\Acc\railpanels\SCAR\Ladder_Short_Pride";
	};
	class HLC_Panel_Side_SCAR_Ladder_M_Pride: HLC_Panel_Side_Ladder_M_pride2
	{
		dlc="Niarms_SCAR";
		scope=2;
		scopeCurator=2;
		author="Toadie";
		model="\nia_wp_SCAR\mesh\Acc\railpanels\SCAR\Ladder_Med_Pride";
	};
	class HLC_Panel_Side_SCAR_Ladder_L_Pride: HLC_Panel_Side_Ladder_L_pride2
	{
		dlc="Niarms_SCAR";
		scope=2;
		scopeCurator=2;
		author="Toadie";
		model="\nia_wp_SCAR\mesh\Acc\railpanels\SCAR\Ladder_Long_Pride";
	};
	class HLC_Panel_Side_SCAR_MagpulXT_Pride: HLC_Panel_Side_MagpulXT_pride2
	{
		dlc="Niarms_SCAR";
		scope=2;
		scopeCurator=2;
		author="Toadie";
		model="\nia_wp_SCAR\mesh\Acc\railpanels\SCAR\Magpul_XT_Pride";
	};
	class HLC_Panel_Side_SCAR_Long_FN5cm_Desert: HLC_Panel_Side_FN5cm_Desert
	{
		dlc="Niarms_SCAR";
		scope=2;
		scopeCurator=2;
		author="Toadie";
		model="\nia_wp_SCAR\mesh\Acc\railpanels\SCAR_Long\FN_5cm_D";
	};
	class HLC_Panel_Side_SCAR_Long_FN10cm_Desert: HLC_Panel_Side_FN10cm_Desert
	{
		dlc="Niarms_SCAR";
		scope=2;
		scopeCurator=2;
		author="Toadie";
		model="\nia_wp_SCAR\mesh\Acc\railpanels\SCAR_Long\FN_10cm_D";
	};
	class HLC_Panel_Side_SCAR_Long_FN15cm_Desert: HLC_Panel_Side_FN15cm_Desert
	{
		dlc="Niarms_SCAR";
		scope=2;
		scopeCurator=2;
		author="Toadie";
		model="\nia_wp_SCAR\mesh\Acc\railpanels\SCAR_Long\FN_15cm_D";
	};
	class HLC_Panel_Side_SCAR_Long_2xFN5cm_Desert: HLC_Panel_Side_2xFN5cm_Desert
	{
		dlc="Niarms_SCAR";
		scope=2;
		scopeCurator=2;
		author="Toadie";
		model="\nia_wp_SCAR\mesh\Acc\railpanels\SCAR_Long\FN_5cm_2length_D";
	};
	class HLC_Panel_Side_SCAR_Long_Ladder_S_Desert: HLC_Panel_Side_Ladder_S_Desert
	{
		dlc="Niarms_SCAR";
		scope=2;
		scopeCurator=2;
		author="Toadie";
		model="\nia_wp_SCAR\mesh\Acc\railpanels\SCAR_Long\Ladder_Short_D";
	};
	class HLC_Panel_Side_SCAR_Long_Ladder_M_Desert: HLC_Panel_Side_Ladder_M_Desert
	{
		dlc="Niarms_SCAR";
		scope=2;
		scopeCurator=2;
		author="Toadie";
		model="\nia_wp_SCAR\mesh\Acc\railpanels\SCAR_Long\Ladder_Med_D";
	};
	class HLC_Panel_Side_SCAR_Long_Ladder_L_Desert: HLC_Panel_Side_Ladder_L_Desert
	{
		dlc="Niarms_SCAR";
		scope=2;
		scopeCurator=2;
		author="Toadie";
		model="\nia_wp_SCAR\mesh\Acc\railpanels\SCAR_Long\Ladder_Long_D";
	};
	class HLC_Panel_Side_SCAR_Long_MagpulXT_Desert: HLC_Panel_Side_MagpulXT_Desert
	{
		dlc="Niarms_SCAR";
		scope=2;
		scopeCurator=2;
		author="Toadie";
		model="\nia_wp_SCAR\mesh\Acc\railpanels\SCAR_Long\Magpul_XT_D";
	};
	class HLC_Panel_Side_SCAR_Long_XTME_Desert: HLC_Panel_Side_XTME_Desert
	{
		dlc="Niarms_SCAR";
		scope=2;
		scopeCurator=2;
		author="Toadie";
		model="\nia_wp_SCAR\mesh\Acc\railpanels\SCAR_Long\Magpul_XTME_D";
	};
	class HLC_Panel_Side_SCAR_Long_2xXTME_Desert: HLC_Panel_Side_2xXTME_Desert
	{
		dlc="Niarms_SCAR";
		scope=2;
		scopeCurator=2;
		author="Toadie";
		model="\nia_wp_SCAR\mesh\Acc\railpanels\SCAR_Long\Magpul_XTME_2length_D";
	};
	class HLC_Panel_Side_SCAR_Long_4xXTME_Desert: HLC_Panel_Side_4xXTME_Desert
	{
		dlc="Niarms_SCAR";
		scope=2;
		scopeCurator=2;
		author="Toadie";
		model="\nia_wp_SCAR\mesh\Acc\railpanels\SCAR_Long\Magpul_XTME_4length_D";
	};
	class HLC_Panel_Side_SCAR_Long_FN5cm_Black: HLC_Panel_Side_FN5cm_Black
	{
		dlc="Niarms_SCAR";
		scope=2;
		scopeCurator=2;
		author="Toadie";
		model="\nia_wp_SCAR\mesh\Acc\railpanels\SCAR_Long\FN_5cm";
	};
	class HLC_Panel_Side_SCAR_Long_FN10cm_Black: HLC_Panel_Side_FN10cm_Black
	{
		dlc="Niarms_SCAR";
		scope=2;
		scopeCurator=2;
		author="Toadie";
		model="\nia_wp_SCAR\mesh\Acc\railpanels\SCAR_Long\FN_10cm";
	};
	class HLC_Panel_Side_SCAR_Long_FN15cm_Black: HLC_Panel_Side_FN15cm_Black
	{
		dlc="Niarms_SCAR";
		scope=2;
		scopeCurator=2;
		author="Toadie";
		model="\nia_wp_SCAR\mesh\Acc\railpanels\SCAR_Long\FN_15cm";
	};
	class HLC_Panel_Side_SCAR_Long_2xFN5cm_Black: HLC_Panel_Side_2xFN5cm_Black
	{
		dlc="Niarms_SCAR";
		scope=2;
		scopeCurator=2;
		author="Toadie";
		model="\nia_wp_SCAR\mesh\Acc\railpanels\SCAR_Long\FN_5cm_2length";
	};
	class HLC_Panel_Side_SCAR_Long_Ladder_S_Black: HLC_Panel_Side_Ladder_S_Black
	{
		dlc="Niarms_SCAR";
		scope=2;
		scopeCurator=2;
		author="Toadie";
		model="\nia_wp_SCAR\mesh\Acc\railpanels\SCAR_Long\Ladder_Short";
	};
	class HLC_Panel_Side_SCAR_Long_Ladder_M_Black: HLC_Panel_Side_Ladder_M_Black
	{
		dlc="Niarms_SCAR";
		scope=2;
		scopeCurator=2;
		author="Toadie";
		model="\nia_wp_SCAR\mesh\Acc\railpanels\SCAR_Long\Ladder_Med";
	};
	class HLC_Panel_Side_SCAR_Long_Ladder_L_Black: HLC_Panel_Side_Ladder_L_Black
	{
		dlc="Niarms_SCAR";
		scope=2;
		scopeCurator=2;
		author="Toadie";
		model="\nia_wp_SCAR\mesh\Acc\railpanels\SCAR_Long\Ladder_Long";
	};
	class HLC_Panel_Side_SCAR_Long_MagpulXT_Black: HLC_Panel_Side_MagpulXT_Black
	{
		dlc="Niarms_SCAR";
		scope=2;
		scopeCurator=2;
		author="Toadie";
		model="\nia_wp_SCAR\mesh\Acc\railpanels\SCAR_Long\Magpul_XT";
	};
	class HLC_Panel_Side_SCAR_Long_XTME_Black: HLC_Panel_Side_XTME_Black
	{
		dlc="Niarms_SCAR";
		scope=2;
		scopeCurator=2;
		author="Toadie";
		model="\nia_wp_SCAR\mesh\Acc\railpanels\SCAR_Long\Magpul_XTME";
	};
	class HLC_Panel_Side_SCAR_Long_2xXTME_Black: HLC_Panel_Side_2xXTME_Black
	{
		dlc="Niarms_SCAR";
		scope=2;
		scopeCurator=2;
		author="Toadie";
		model="\nia_wp_SCAR\mesh\Acc\railpanels\SCAR_Long\Magpul_XTME_2length";
	};
	class HLC_Panel_Side_SCAR_Long_4xXTME_Black: HLC_Panel_Side_4xXTME_Black
	{
		dlc="Niarms_SCAR";
		scope=2;
		scopeCurator=2;
		author="Toadie";
		model="\nia_wp_SCAR\mesh\Acc\railpanels\SCAR_Long\Magpul_XTME_4length";
	};
	class HLC_Panel_Side_SCAR_Long_FN5cm_OD: HLC_Panel_Side_FN5cm_OD
	{
		dlc="Niarms_SCAR";
		scope=2;
		scopeCurator=2;
		author="Toadie";
		model="\nia_wp_SCAR\mesh\Acc\railpanels\SCAR_Long\FN_5cm_OD";
	};
	class HLC_Panel_Side_SCAR_Long_FN10cm_OD: HLC_Panel_Side_FN10cm_OD
	{
		dlc="Niarms_SCAR";
		scope=2;
		scopeCurator=2;
		author="Toadie";
		model="\nia_wp_SCAR\mesh\Acc\railpanels\SCAR_Long\FN_10cm_OD";
	};
	class HLC_Panel_Side_SCAR_Long_FN15cm_OD: HLC_Panel_Side_FN15cm_OD
	{
		dlc="Niarms_SCAR";
		scope=2;
		scopeCurator=2;
		author="Toadie";
		model="\nia_wp_SCAR\mesh\Acc\railpanels\SCAR_Long\FN_15cm_OD";
	};
	class HLC_Panel_Side_SCAR_Long_2xFN5cm_OD: HLC_Panel_Side_2xFN5cm_OD
	{
		dlc="Niarms_SCAR";
		scope=2;
		scopeCurator=2;
		author="Toadie";
		model="\nia_wp_SCAR\mesh\Acc\railpanels\SCAR_Long\FN_5cm_2length_OD";
	};
	class HLC_Panel_Side_SCAR_Long_Ladder_S_OD: HLC_Panel_Side_Ladder_S_OD
	{
		dlc="Niarms_SCAR";
		scope=2;
		scopeCurator=2;
		author="Toadie";
		model="\nia_wp_SCAR\mesh\Acc\railpanels\SCAR_Long\Ladder_Short_OD";
	};
	class HLC_Panel_Side_SCAR_Long_Ladder_M_OD: HLC_Panel_Side_Ladder_M_OD
	{
		dlc="Niarms_SCAR";
		scope=2;
		scopeCurator=2;
		author="Toadie";
		model="\nia_wp_SCAR\mesh\Acc\railpanels\SCAR_Long\Ladder_Med_OD";
	};
	class HLC_Panel_Side_SCAR_Long_Ladder_L_OD: HLC_Panel_Side_Ladder_L_OD
	{
		dlc="Niarms_SCAR";
		scope=2;
		scopeCurator=2;
		author="Toadie";
		model="\nia_wp_SCAR\mesh\Acc\railpanels\SCAR_Long\Ladder_Long_OD";
	};
	class HLC_Panel_Side_SCAR_Long_MagpulXT_OD: HLC_Panel_Side_MagpulXT_OD
	{
		dlc="Niarms_SCAR";
		scope=2;
		scopeCurator=2;
		author="Toadie";
		model="\nia_wp_SCAR\mesh\Acc\railpanels\SCAR_Long\Magpul_XT_OD";
	};
	class HLC_Panel_Side_SCAR_Long_XTME_OD: HLC_Panel_Side_XTME_OD
	{
		dlc="Niarms_SCAR";
		scope=2;
		scopeCurator=2;
		author="Toadie";
		model="\nia_wp_SCAR\mesh\Acc\railpanels\SCAR_Long\Magpul_XTME_OD";
	};
	class HLC_Panel_Side_SCAR_Long_2xXTME_OD: HLC_Panel_Side_2xXTME_OD
	{
		dlc="Niarms_SCAR";
		scope=2;
		scopeCurator=2;
		author="Toadie";
		model="\nia_wp_SCAR\mesh\Acc\railpanels\SCAR_Long\Magpul_XTME_2length_OD";
	};
	class HLC_Panel_Side_SCAR_Long_4xXTME_OD: HLC_Panel_Side_4xXTME_OD
	{
		dlc="Niarms_SCAR";
		scope=2;
		scopeCurator=2;
		author="Toadie";
		model="\nia_wp_SCAR\mesh\Acc\railpanels\SCAR_Long\Magpul_XTME_4length_OD";
	};
	class HLC_Panel_Side_SCAR_Long_FN5cm_RG: HLC_Panel_Side_FN5cm_RG
	{
		dlc="Niarms_SCAR";
		scope=2;
		scopeCurator=2;
		author="Toadie";
		model="\nia_wp_SCAR\mesh\Acc\railpanels\SCAR_Long\FN_5cm_RG";
	};
	class HLC_Panel_Side_SCAR_Long_FN10cm_RG: HLC_Panel_Side_FN10cm_RG
	{
		dlc="Niarms_SCAR";
		scope=2;
		scopeCurator=2;
		author="Toadie";
		model="\nia_wp_SCAR\mesh\Acc\railpanels\SCAR_Long\FN_10cm_RG";
	};
	class HLC_Panel_Side_SCAR_Long_FN15cm_RG: HLC_Panel_Side_FN15cm_RG
	{
		dlc="Niarms_SCAR";
		scope=2;
		scopeCurator=2;
		author="Toadie";
		model="\nia_wp_SCAR\mesh\Acc\railpanels\SCAR_Long\FN_15cm_RG";
	};
	class HLC_Panel_Side_SCAR_Long_2xFN5cm_RG: HLC_Panel_Side_2xFN5cm_RG
	{
		dlc="Niarms_SCAR";
		scope=2;
		scopeCurator=2;
		author="Toadie";
		model="\nia_wp_SCAR\mesh\Acc\railpanels\SCAR_Long\FN_5cm_2length_RG";
	};
	class HLC_Panel_Side_SCAR_Long_Ladder_S_RG: HLC_Panel_Side_Ladder_S_RG
	{
		dlc="Niarms_SCAR";
		scope=2;
		scopeCurator=2;
		author="Toadie";
		model="\nia_wp_SCAR\mesh\Acc\railpanels\SCAR_Long\Ladder_Short_RG";
	};
	class HLC_Panel_Side_SCAR_Long_Ladder_M_RG: HLC_Panel_Side_Ladder_M_RG
	{
		dlc="Niarms_SCAR";
		scope=2;
		scopeCurator=2;
		author="Toadie";
		model="\nia_wp_SCAR\mesh\Acc\railpanels\SCAR_Long\Ladder_Med_RG";
	};
	class HLC_Panel_Side_SCAR_Long_Ladder_L_RG: HLC_Panel_Side_Ladder_L_RG
	{
		dlc="Niarms_SCAR";
		scope=2;
		scopeCurator=2;
		author="Toadie";
		model="\nia_wp_SCAR\mesh\Acc\railpanels\SCAR_Long\Ladder_Long_RG";
	};
	class HLC_Panel_Side_SCAR_Long_MagpulXT_RG: HLC_Panel_Side_MagpulXT_RG
	{
		dlc="Niarms_SCAR";
		scope=2;
		scopeCurator=2;
		author="Toadie";
		model="\nia_wp_SCAR\mesh\Acc\railpanels\SCAR_Long\Magpul_XT_RG";
	};
	class HLC_Panel_Side_SCAR_Long_XTME_RG: HLC_Panel_Side_XTME_RG
	{
		dlc="Niarms_SCAR";
		scope=2;
		scopeCurator=2;
		author="Toadie";
		model="\nia_wp_SCAR\mesh\Acc\railpanels\SCAR_Long\Magpul_XTME_RG";
	};
	class HLC_Panel_Side_SCAR_Long_2xXTME_RG: HLC_Panel_Side_2xXTME_RG
	{
		dlc="Niarms_SCAR";
		scope=2;
		scopeCurator=2;
		author="Toadie";
		model="\nia_wp_SCAR\mesh\Acc\railpanels\SCAR_Long\Magpul_XTME_2length_RG";
	};
	class HLC_Panel_Side_SCAR_Long_4xXTME_RG: HLC_Panel_Side_4xXTME_RG
	{
		dlc="Niarms_SCAR";
		scope=2;
		scopeCurator=2;
		author="Toadie";
		model="\nia_wp_SCAR\mesh\Acc\railpanels\SCAR_Long\Magpul_XTME_4length_RG";
	};
	class HLC_Panel_Side_SCAR_Long_Ladder_S_Pride: HLC_Panel_Side_Ladder_S_pride2
	{
		dlc="Niarms_SCAR";
		scope=2;
		scopeCurator=2;
		author="Toadie";
		model="\nia_wp_SCAR\mesh\Acc\railpanels\SCAR_Long\Ladder_Short_Pride";
	};
	class HLC_Panel_Side_SCAR_Long_Ladder_M_Pride: HLC_Panel_Side_Ladder_M_pride2
	{
		dlc="Niarms_SCAR";
		scope=2;
		scopeCurator=2;
		author="Toadie";
		model="\nia_wp_SCAR\mesh\Acc\railpanels\SCAR_Long\Ladder_Med_Pride";
	};
	class HLC_Panel_Side_SCAR_Long_Ladder_L_Pride: HLC_Panel_Side_Ladder_L_pride2
	{
		dlc="Niarms_SCAR";
		scope=2;
		scopeCurator=2;
		author="Toadie";
		model="\nia_wp_SCAR\mesh\Acc\railpanels\SCAR_Long\Ladder_Long_Pride";
	};
	class HLC_Panel_Side_SCAR_Long_MagpulXT_Pride: HLC_Panel_Side_MagpulXT_pride2
	{
		dlc="Niarms_SCAR";
		scope=2;
		scopeCurator=2;
		author="Toadie";
		model="\nia_wp_SCAR\mesh\Acc\railpanels\SCAR_Long\Magpul_XT_Pride";
	};
	class hlc_SCARH_Base: Rifle_Base_F
	{
		scope=1;
		recoil="recoil_spar_dmr";
		maxZeroing=1600;
		deployedpivot="deploypivot";
		hasBipod=0;
		magazineReloadSwitchPhase=0.5;
		ace_railHeightAboveBore=3.8;
		magazines[]=
		{
			"hlc_20Rnd_762x51_B_SCARH_tan",
			"hlc_20Rnd_762x51_mk316_SCARH_tan",
			"hlc_20Rnd_762x51_Barrier_SCARH_tan",
			"hlc_20Rnd_762x51_t_SCARH_tan",
			"hlc_20Rnd_762x51_TDim_SCARH_tan",
			"hlc_20rnd_762x51_M_SCARH_tan",
			"hlc_20rnd_762x51_MDIM_SCARH_tan",
			"hlc_20Rnd_762x51_S_SCARH_tan",
			"hlc_20Rnd_762x51_S_SCARH_tan",
			"hlc_20Rnd_762x51_B_SCARH",
			"hlc_20Rnd_762x51_mk316_SCARH",
			"hlc_20Rnd_762x51_Barrier_SCARH",
			"hlc_20Rnd_762x51_t_SCARH",
			"hlc_20Rnd_762x51_TDim_SCARH",
			"hlc_20rnd_762x51_M_SCARH",
			"hlc_20rnd_762x51_MDIM_SCARH",
			"hlc_20Rnd_762x51_S_SCARH",
			"hlc_20Rnd_762x51_B_SCARH_camo",
			"hlc_20Rnd_762x51_mk316_SCARH_camo",
			"hlc_20Rnd_762x51_Barrier_SCARH_camo",
			"hlc_20Rnd_762x51_t_SCARH_camo",
			"hlc_20Rnd_762x51_TDim_SCARH_camo",
			"hlc_20rnd_762x51_M_SCARH_camo",
			"hlc_20rnd_762x51_MDIM_SCARH_camo",
			"hlc_20Rnd_762x51_S_SCARH_camo",
			"hlc_20Rnd_762x51_B_SCARH_MW2",
			"hlc_20Rnd_762x51_barrier_SCARH_MW2",
			"hlc_20Rnd_762x51_mk316_SCARH_MW2",
			"hlc_20Rnd_762x51_TDIM_SCARH_MW2",
			"hlc_20Rnd_762x51_T_SCARH_MW2",
			"hlc_20Rnd_762x51_M_SCARH_MW2",
			"hlc_20Rnd_762x51_MDIM_SCARH_MW2",
			"hlc_20Rnd_762x51_S_SCARH_MW2"
		};
		magazineWell[]=
		{
			"CBA_762x51_SCAR"
		};
		class Library
		{
			libTextDesc="FN SCAR-H";
		};
		reloadAction="NIA_GestureReload_Mk17";
		reloadmagazinesound[]=
		{
			"nia_wp_SCAR\snd\mk17_reload_short_var2.wss",
			0.89999998,
			1,
			35
		};
		aiDispersionCoefX=6;
		aiDispersionCoefY=8;
		cameraDir="";
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
		drysound[]=
		{
			"hlc_core\sound\empty_battlerifles",
			1.01,
			1,
			10
		};
		changeFiremodeSound[]=
		{
			"\nia_wp_SCAR\snd\ar15_selector",
			1,
			1,
			8
		};
		UiPicture="\A3\weapons_f\data\UI\icon_regular_CA.paa";
		class GunParticles: GunParticles
		{
			class SecondEffect
			{
				positionName="Nabojnicestart";
				directionName="Nabojniceend";
				effectName="CaselessAmmoCloud";
			};
		};
		class hlc_GL_SCAR_AGC: UGL_F
		{
			magazineReloadSwitchPhase=0.5;
			cameradir="gl_look";
			discreteDistance[]={50,100,150,200,250,300,350};
			discreteDistanceCameraPoint[]=
			{
				"gl_eye_50m",
				"gl_eye_100m",
				"gl_eye_150m",
				"gl_eye_200m",
				"gl_eye_250m",
				"gl_eye_300m",
				"gl_eye_350m"
			};
			discreteDistanceInitIndex=1;
			displayname="M320";
			useModelOptics=0;
			useExternalOptic=0;
			optics=1;
			cursoraim="gl";
			magazinereloadtime=0;
			reloadtime=0.1;
			reloadAction="NIA_GestureReload_M320_Mk17";
			reloadMagazineSound[]=
			{
				"hlc_core\sound\GL\agc_reload",
				1,
				1,
				10
			};
			drySound[]=
			{
				"hlc_core\sound\GL\GL_drystrike",
				1,
				1,
				10
			};
			modes[]=
			{
				"Single"
			};
			class Single: Mode_SemiAuto
			{
				sounds[]=
				{
					"StandardSound"
				};
				class StandardSound
				{
					weaponSoundEffect="DefaultRifle";
					closure1[]=
					{
						"hlc_core\sound\GL\GL_striker",
						1,
						1,
						10
					};
					closure2[]=
					{
						"hlc_core\sound\GL\GL_striker",
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
					soundSetShot[]=
					{
						"NIA_GL_Shot_SoundSet",
						"NIA_GL_Tail_SoundSet"
					};
				};
				recoil="M240Recoil";
				recoilProne="M240Recoil";
				aiRateOfFire=4;
				aiRateOfFireDistance=50;
				aiRateOfFireDispersion=4;
				minRange=60;
				minRangeProbab=0.44999999;
				midRange=200;
				midRangeProbab=0.64999998;
				maxRange=400;
				maxRangeProbab=0.0099999998;
			};
		};
		class hlc_GL_SCAR_EGLM: hlc_GL_SCAR_AGC
		{
			magazineReloadSwitchPhase=0.44;
			displayname="GL40";
			reloadAction="NIA_GestureReload_EGLM_Mk17";
			reloadMagazineSound[]=
			{
				"hlc_core\sound\GL\FN40GL_Reload.ogg",
				0.80000001,
				1,
				10
			};
		};
		soundbullet[]=
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
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class PointerSlot
			{
			};
			class MuzzleSlot: asdg_MuzzleSlot_762
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
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"NIA_SCARH_NEW_Shot_SoundSet",
					"NIA_SCARH_tail_SoundSet"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"NIA_SCARH_silencerShot_SoundSet",
					"NIA_SCARH_silencerTail_SoundSet"
				};
			};
			dispersion=0.00037235199;
			reloadtime="(60/60)";
			aiRateOfFire=1;
			aiRateOfFireDistance=350;
			aiRateOfFireDispersion=2;
			minRange=20;
			minRangeProbab=0.69999999;
			midRange=150;
			midRangeProbab=0.5;
			maxRange=500;
			maxRangeProbab=0.1;
		};
		class Burst: Mode_Burst
		{
			sounds[]=
			{
				"StandardSound",
				"SilencedSound"
			};
			class BaseSoundModeType
			{
				weaponSoundEffect="DefaultRifle";
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"NIA_SCARH_NEW_Shot_SoundSet",
					"NIA_SCARH_tail_SoundSet"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"NIA_SCARH_silencerShot_SoundSet",
					"NIA_SCARH_silencerTail_SoundSet"
				};
			};
			dispersion=0.00037235199;
			reloadtime="(60/600)";
			aiRateOfFire=1;
			aiRateOfFireDistance=100;
			aiRateOfFireDispersion=1;
			minRange=0;
			minRangeProbab=0.2;
			midRange=20;
			midRangeProbab=0.80000001;
			maxRange=40;
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
					"\hlc_wp_g36\snd\g36_first",
					1,
					1,
					10
				};
				closure2[]=
				{
					"\hlc_wp_g36\snd\g36_first",
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
					"NIA_SCARH_NEW_Shot_SoundSet",
					"NIA_SCARH_tail_SoundSet"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"NIA_SCARH_silencerShot_SoundSet",
					"NIA_SCARH_silencerTail_SoundSet"
				};
			};
			dispersion=0.00037235199;
			reloadtime="(60/600)";
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
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3",
			"Camo4",
			"Camo5",
			"Camo6",
			"Camo7"
		};
	};
	class hlc_SCARL_Base: Rifle_Base_F
	{
		scope=1;
		recoil="recoil_spar";
		maxZeroing=1600;
		deployedpivot="deploypivot";
		hasBipod=0;
		magazineReloadSwitchPhase=0.5;
		ace_railHeightAboveBore=3.8;
		magazineWell[]=
		{
			"STANAG_556x45",
			"CBA_556x45_STANAG",
			"CBA_556x45_STANAG_L",
			"CBA_556x45_STANAG_XL",
			"CBA_556x45_STANAG_2D",
			"CBA_556x45_STANAG_2D_XL"
		};
		magazines[]=
		{
			"hlc_30rnd_556x45_EPR",
			"hlc_30rnd_556x45_SOST",
			"hlc_30rnd_556x45_SPR",
			"hlc_30rnd_556x45_S",
			"hlc_30rnd_556x45_M",
			"hlc_30rnd_556x45_t",
			"hlc_30rnd_556x45_MDim",
			"hlc_30rnd_556x45_TDim",
			"hlc_50rnd_556x45_EPR",
			"hlc_50rnd_556x45_SOST",
			"hlc_50rnd_556x45_SPR",
			"hlc_50rnd_556x45_M",
			"hlc_50rnd_556x45_MDim",
			"hlc_30rnd_556x45_EPR_PMAG",
			"hlc_30rnd_556x45_SOST_PMAG",
			"hlc_30rnd_556x45_SPR_PMAG",
			"hlc_30rnd_556x45_S_PMAG",
			"hlc_30rnd_556x45_M_PMAG",
			"hlc_30rnd_556x45_t_PMAG",
			"hlc_30rnd_556x45_MDim_PMAG",
			"hlc_30rnd_556x45_TDim_PMAG",
			"hlc_30rnd_556x45_EPR_STANAGHD",
			"hlc_30rnd_556x45_SOST_STANAGHD",
			"hlc_30rnd_556x45_SPR_STANAGHD",
			"hlc_30rnd_556x45_S_STANAGHD",
			"hlc_30rnd_556x45_M_STANAGHD",
			"hlc_30rnd_556x45_t_STANAGHD",
			"hlc_30rnd_556x45_MDim_STANAGHD",
			"hlc_30rnd_556x45_TDim_STANAGHD",
			"hlc_30rnd_556x45_EPR_L5",
			"hlc_30rnd_556x45_SOST_L5",
			"hlc_30rnd_556x45_SPR_L5",
			"hlc_30rnd_556x45_S_L5",
			"hlc_30rnd_556x45_M_L5",
			"hlc_30rnd_556x45_t_L5",
			"hlc_30rnd_556x45_MDim_L5",
			"hlc_30rnd_556x45_TDim_L5",
			"hlc_30rnd_556x45_EPR_EMAG",
			"hlc_30rnd_556x45_SOST_EMAG",
			"hlc_30rnd_556x45_SPR_EMAG",
			"hlc_30rnd_556x45_S_EMAG",
			"hlc_30rnd_556x45_M_EMAG",
			"hlc_30rnd_556x45_t_EMAG",
			"hlc_30rnd_556x45_MDim_EMAG",
			"hlc_30rnd_556x45_TDim_EMAG",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Green",
			"30Rnd_556x45_Stanag_Tracer_Yellow",
			"30Rnd_556x45_Stanag_green",
			"30Rnd_556x45_Stanag_red",
			"150Rnd_556x45_Drum_Mag_F",
			"150Rnd_556x45_Drum_Mag_Tracer_F"
		};
		class Library
		{
			libTextDesc="FN SCAR-H";
		};
		reloadAction="NIA_GestureReload_Mk16";
		reloadmagazinesound[]=
		{
			"nia_wp_SCAR\snd\mk16_reload_short.ogg",
			0.89999998,
			1,
			35
		};
		aiDispersionCoefX=6;
		aiDispersionCoefY=8;
		cameraDir="";
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
		drysound[]=
		{
			"hlc_core\sound\empty_battlerifles",
			1.01,
			1,
			10
		};
		changeFiremodeSound[]=
		{
			"\nia_wp_SCAR\snd\ar15_selector",
			1,
			1,
			8
		};
		UiPicture="\A3\weapons_f\data\UI\icon_regular_CA.paa";
		class GunParticles: GunParticles
		{
			class SecondEffect
			{
				positionName="Nabojnicestart";
				directionName="Nabojniceend";
				effectName="CaselessAmmoCloud";
			};
		};
		class hlc_GL_SCARL_AGC: UGL_F
		{
			magazineReloadSwitchPhase=0.5;
			cameradir="gl_look";
			discreteDistance[]={50,100,150,200,250,300,350};
			discreteDistanceCameraPoint[]=
			{
				"gl_eye_50m",
				"gl_eye_100m",
				"gl_eye_150m",
				"gl_eye_200m",
				"gl_eye_250m",
				"gl_eye_300m",
				"gl_eye_350m"
			};
			discreteDistanceInitIndex=1;
			displayname="M320";
			useModelOptics=0;
			useExternalOptic=0;
			optics=1;
			cursoraim="gl";
			magazinereloadtime=0;
			reloadtime=0.1;
			reloadAction="NIA_GestureReload_M320_Mk17";
			reloadMagazineSound[]=
			{
				"hlc_core\sound\GL\agc_reload",
				1,
				1,
				10
			};
			drySound[]=
			{
				"hlc_core\sound\GL\GL_drystrike",
				1,
				1,
				10
			};
			modes[]=
			{
				"Single"
			};
			class Single: Mode_SemiAuto
			{
				sounds[]=
				{
					"StandardSound"
				};
				class StandardSound
				{
					weaponSoundEffect="DefaultRifle";
					closure1[]=
					{
						"hlc_core\sound\GL\GL_striker",
						1,
						1,
						10
					};
					closure2[]=
					{
						"hlc_core\sound\GL\GL_striker",
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
					soundSetShot[]=
					{
						"NIA_GL_Shot_SoundSet",
						"NIA_GL_Tail_SoundSet"
					};
				};
				recoil="M240Recoil";
				recoilProne="M240Recoil";
				aiRateOfFire=4;
				aiRateOfFireDistance=50;
				aiRateOfFireDispersion=4;
				minRange=60;
				minRangeProbab=0.44999999;
				midRange=200;
				midRangeProbab=0.64999998;
				maxRange=400;
				maxRangeProbab=0.0099999998;
			};
		};
		class hlc_GL_SCARL_EGLM: hlc_GL_SCARL_AGC
		{
			magazineReloadSwitchPhase=0.44;
			reloadAction="NIA_GestureReload_EGLM_Mk16";
			reloadMagazineSound[]=
			{
				"hlc_core\sound\GL\FN40GL_Reload.ogg",
				0.80000001,
				1,
				10
			};
		};
		soundbullet[]=
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
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class PointerSlot
			{
			};
			class MuzzleSlot: asdg_MuzzleSlot_762
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
			"FullAuto",
			"AI_Single",
			"AI_FullAuto",
			"AI_Burst_close",
			"AI_Single_optics1",
			"AI_Single_optics2",
			"SemiAuto",
			"AI_far"
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
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"NIA_SCARL_NEW_Shot_SoundSet",
					"NIA_SCARL_tail_SoundSet"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"NIA_SCARL_silencerShot_SoundSet",
					"NIA_SCARL_silencerTail_SoundSet"
				};
			};
			dispersion=0.00037235199;
			reloadtime="(60/600)";
			aiRateOfFire=1;
			aiRateOfFireDistance=350;
			aiRateOfFireDispersion=2;
			minRange=20;
			minRangeProbab=0.69999999;
			midRange=150;
			midRangeProbab=0.5;
			maxRange=500;
			maxRangeProbab=0.1;
		};
		class Burst: Mode_Burst
		{
			sounds[]=
			{
				"StandardSound",
				"SilencedSound"
			};
			class BaseSoundModeType
			{
				weaponSoundEffect="DefaultRifle";
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"NIA_SCARL_NEW_Shot_SoundSet",
					"NIA_SCARL_tail_SoundSet"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"NIA_SCARL_silencerShot_SoundSet",
					"NIA_SCARL_silencerTail_SoundSet"
				};
			};
			dispersion=0.00037235199;
			reloadtime="(60/600)";
			aiRateOfFire=1;
			aiRateOfFireDistance=100;
			aiRateOfFireDispersion=1;
			minRange=0;
			minRangeProbab=0.2;
			midRange=20;
			midRangeProbab=0.80000001;
			maxRange=40;
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
					"\hlc_wp_g36\snd\g36_first",
					1,
					1,
					10
				};
				closure2[]=
				{
					"\hlc_wp_g36\snd\g36_first",
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
					"NIA_SCARH_NEW_Shot_SoundSet",
					"NIA_SCARH_tail_SoundSet"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"NIA_SCARH_silencerShot_SoundSet",
					"NIA_SCARH_silencerTail_SoundSet"
				};
			};
			dispersion=0.00037235199;
			reloadtime="(60/600)";
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
			aiRateOfFire=1;
			aiRateOfFireDistance=350;
			aiRateOfFireDispersion=2;
			minRange=20;
			minRangeProbab=0.69999999;
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
			maxRange=20;
			maxRangeProbab=0.2;
		};
		class AI_Single_optics1: Single
		{
			showToPlayer=0;
			requiredOpticType=1;
			aiRateOfFire=2;
			aiRateOfFireDistance=500;
			aiRateOfFireDispersion=3;
			minRange=200;
			minRangeProbab=0.80000001;
			midRange=300;
			midRangeProbab=0.60000002;
			maxRange=700;
			maxRangeProbab=0.1;
		};
		class AI_Single_optics2: AI_Single_optics1
		{
			requiredOpticType=2;
			aiRateOfFire=3;
			aiRateOfFireDistance=500;
			aiRateOfFireDispersion=4;
			minRange=200;
			minRangeProbab=0.80000001;
			midRange=300;
			midRangeProbab=0.60000002;
			maxRange=900;
			maxRangeProbab=0.1;
		};
		class SemiAuto: Single
		{
			showToPlayer=0;
			aiRateOfFire=1;
			aiRateOfFireDistance=300;
			aiRateOfFireDispersion=2;
			minRange=0;
			minRangeProbab=0.89999998;
			midRange=150;
			midRangeProbab=0.5;
			maxRange=500;
			maxRangeProbab=0.1;
		};
		class Burst3: Single
		{
			aiRateOfFire=1;
			aiRateOfFireDistance=100;
			aiRateOfFireDispersion=1;
			minRange=0;
			minRangeProbab=0.2;
			midRange=20;
			midRangeProbab=0.80000001;
			maxRange=40;
			maxRangeProbab=0.1;
			burst=3;
			displayName="$STR_DN_MODE_BURST";
			textureType="burst";
			soundBurst=0;
		};
		class Burst2: Burst3
		{
			burst=2;
			textureType="dual";
		};
		class AI_far: Single
		{
			showToPlayer=0;
			aiBurstTerminable=1;
			burst=5;
			reloadtime=0.2;
			aiRateOfFire=5;
			aiRateOfFireDistance=600;
			aiRateOfFireDispersion=4;
			minRange=400;
			minRangeProbab=0.1;
			midRange=600;
			midRangeProbab=0.050000001;
			maxRange=800;
			maxRangeProbab=0.0099999998;
		};
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3",
			"Camo4",
			"Camo5",
			"Camo6",
			"Camo7"
		};
	};
	class hlc_wp_SCARH_STD: hlc_SCARH_Base
	{
		author="Toadie";
		dlc="Niarms_SCAR";
		displayName="$STR_NIA_rifle_SCARH_STD";
		descriptionShort="$STR_NIA_scarh_DESC";
		scope=2;
		ACE_barrelTwist=304.79999;
		ACE_barrelLength=400;
		ACE_railHeightAboveBore=3.8;
		magazines[]=
		{
			"hlc_20Rnd_762x51_B_SCARH_tan",
			"hlc_20Rnd_762x51_mk316_SCARH_tan",
			"hlc_20Rnd_762x51_Barrier_SCARH_tan",
			"hlc_20Rnd_762x51_t_SCARH_tan",
			"hlc_20Rnd_762x51_TDim_SCARH_tan",
			"hlc_20rnd_762x51_M_SCARH_tan",
			"hlc_20rnd_762x51_MDIM_SCARH_tan",
			"hlc_20Rnd_762x51_S_SCARH_tan",
			"hlc_20Rnd_762x51_S_SCARH_tan",
			"hlc_20Rnd_762x51_B_SCARH",
			"hlc_20Rnd_762x51_mk316_SCARH",
			"hlc_20Rnd_762x51_Barrier_SCARH",
			"hlc_20Rnd_762x51_t_SCARH",
			"hlc_20Rnd_762x51_TDim_SCARH",
			"hlc_20rnd_762x51_M_SCARH",
			"hlc_20rnd_762x51_MDIM_SCARH",
			"hlc_20Rnd_762x51_S_SCARH",
			"hlc_20Rnd_762x51_B_SCARH_camo",
			"hlc_20Rnd_762x51_mk316_SCARH_camo",
			"hlc_20Rnd_762x51_Barrier_SCARH_camo",
			"hlc_20Rnd_762x51_t_SCARH_camo",
			"hlc_20Rnd_762x51_TDim_SCARH_camo",
			"hlc_20rnd_762x51_M_SCARH_camo",
			"hlc_20rnd_762x51_MDIM_SCARH_camo",
			"hlc_20Rnd_762x51_S_SCARH_camo",
			"hlc_20Rnd_762x51_B_SCARH_MW2",
			"hlc_20Rnd_762x51_barrier_SCARH_MW2",
			"hlc_20Rnd_762x51_mk316_SCARH_MW2",
			"hlc_20Rnd_762x51_TDIM_SCARH_MW2",
			"hlc_20Rnd_762x51_T_SCARH_MW2",
			"hlc_20Rnd_762x51_M_SCARH_MW2",
			"hlc_20Rnd_762x51_MDIM_SCARH_MW2",
			"hlc_20Rnd_762x51_S_SCARH_MW2",
			"hlc_10Rnd_762x51_B_SCARH_tan",
			"hlc_10Rnd_762x51_mk316_SCARH_tan",
			"hlc_10Rnd_762x51_Barrier_SCARH_tan",
			"hlc_10Rnd_762x51_t_SCARH_tan",
			"hlc_10Rnd_762x51_TDim_SCARH_tan",
			"hlc_10Rnd_762x51_S_SCARH_tan",
			"hlc_10Rnd_762x51_B_SCARH",
			"hlc_10Rnd_762x51_mk316_SCARH",
			"hlc_10Rnd_762x51_Barrier_SCARH",
			"hlc_10Rnd_762x51_t_SCARH",
			"hlc_10Rnd_762x51_TDim_SCARH",
			"hlc_10Rnd_762x51_S_SCARH",
			"hlc_10Rnd_762x51_B_SCARH_camo",
			"hlc_10Rnd_762x51_mk316_SCARH_camo",
			"hlc_10Rnd_762x51_Barrier_SCARH_camo",
			"hlc_10Rnd_762x51_t_SCARH_camo",
			"hlc_10Rnd_762x51_TDim_SCARH_camo",
			"hlc_10Rnd_762x51_S_SCARH_camo"
		};
		magazineWell[]=
		{
			"CBA_762x51_SCAR",
			"CBA_762x51_SCAR_EGLM"
		};
		discretedistance[]={200,300,400,500,600};
		discretedistanceinitindex=0;
		discreteDistanceCameraPoint[]=
		{
			"eye",
			"eye_300",
			"eye_400",
			"eye_500",
			"eye_600"
		};
		cameraDir="eye_look";
		baseWeapon="hlc_wp_SCARH_STD";
		mass=78.043999;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=78.043999;
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
				class compatibleItems: compatibleItems
				{
					HLC_Panel_Side_SCAR_FN5cm_Desert=1;
					HLC_Panel_Side_SCAR_2xFN5cm_Desert=1;
					HLC_Panel_Side_SCAR_FN10cm_Desert=1;
					HLC_Panel_Side_SCAR_Ladder_S_Desert=1;
					HLC_Panel_Side_SCAR_Ladder_M_Desert=1;
					HLC_Panel_Side_SCAR_MagpulXT_Desert=1;
					HLC_Panel_Side_SCAR_XTME_Desert=1;
					HLC_Panel_Side_SCAR_2xXTME_Desert=1;
					HLC_Panel_Side_SCAR_FN5cm_Black=1;
					HLC_Panel_Side_SCAR_2xFN5cm_Black=1;
					HLC_Panel_Side_SCAR_FN10cm_Black=1;
					HLC_Panel_Side_SCAR_Ladder_S_Black=1;
					HLC_Panel_Side_SCAR_Ladder_M_Black=1;
					HLC_Panel_Side_SCAR_MagpulXT_Black=1;
					HLC_Panel_Side_SCAR_XTME_Black=1;
					HLC_Panel_Side_SCAR_2xXTME_Black=1;
					HLC_Panel_Side_SCAR_FN5cm_OD=1;
					HLC_Panel_Side_SCAR_2xFN5cm_OD=1;
					HLC_Panel_Side_SCAR_FN10cm_OD=1;
					HLC_Panel_Side_SCAR_Ladder_S_OD=1;
					HLC_Panel_Side_SCAR_Ladder_M_OD=1;
					HLC_Panel_Side_SCAR_MagpulXT_OD=1;
					HLC_Panel_Side_SCAR_XTME_OD=1;
					HLC_Panel_Side_SCAR_2xXTME_OD=1;
					HLC_Panel_Side_SCAR_FN5cm_RG=1;
					HLC_Panel_Side_SCAR_2xFN5cm_RG=1;
					HLC_Panel_Side_SCAR_FN10cm_RG=1;
					HLC_Panel_Side_SCAR_Ladder_S_RG=1;
					HLC_Panel_Side_SCAR_Ladder_M_RG=1;
					HLC_Panel_Side_SCAR_MagpulXT_RG=1;
					HLC_Panel_Side_SCAR_XTME_RG=1;
					HLC_Panel_Side_SCAR_2xXTME_RG=1;
					HLC_Panel_Side_SCAR_Ladder_S_Pride=1;
					HLC_Panel_Side_SCAR_Ladder_M_Pride=1;
					HLC_Panel_Side_SCAR_MagpulXT_Pride=1;
				};
			};
			class MuzzleSlot: asdg_MuzzleSlot_762
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
		inertia=0.35800001;
		dexterity=1.4471935;
		aimTransitionSpeed=1.0130354;
		class LinkedItems
		{
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="hlc_muzzle_OEMDevice";
			};
		};
		model="nia_wp_SCAR\mesh\rifle\SCARH_STD.p3d";
		picture="\nia_wp_SCAR\tex\ui\hlc_wp_SCARH_STD_ca";
		UiPicture="\A3\weapons_f\data\UI\icon_regular_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"nia_wp_SCAR\tex\toadie_SCAR\scar_common_tan_co.paa",
			"nia_wp_SCAR\tex\toadie_SCAR\scar_lower_tan_co.paa",
			"nia_wp_SCAR\tex\toadie_SCAR\stock_tan_co.paa",
			"nia_wp_SCAR\tex\toadie_SCAR\upper_scarh_tan_co.paa"
		};
		HiddenSelectionsMaterials[]=
		{
			"nia_wp_SCAR\mat\scar_common.rvmat",
			"nia_wp_SCAR\mat\scar_lowers.rvmat",
			"nia_wp_SCAR\mat\scar_stock.rvmat",
			"nia_wp_SCAR\mat\scar_upper_scarh.rvmat"
		};
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handpose_STD.rtm"
		};
		reloadAction="NIA_GestureReload_Mk17";
		reloadMagazineSound[]=
		{
			"nia_wp_SCAR\snd\mk17_reload.ogg",
			0.80000001,
			1,
			25
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
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"NIA_SCARH_NEW_Shot_SoundSet",
					"NIA_SCARH_tail_SoundSet"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"NIA_SCARH_silencerShot_SoundSet",
					"NIA_SCARH_silencerTail_SoundSet"
				};
			};
			dispersion=0.00049162103;
			reloadtime="(60/600)";
			aiRateOfFire=1;
			aiRateOfFireDistance=350;
			aiRateOfFireDispersion=2;
			minRange=20;
			minRangeProbab=0.69999999;
			midRange=150;
			midRangeProbab=0.5;
			maxRange=500;
			maxRangeProbab=0.1;
		};
		class Burst: Mode_Burst
		{
			sounds[]=
			{
				"StandardSound",
				"SilencedSound"
			};
			class BaseSoundModeType
			{
				weaponSoundEffect="DefaultRifle";
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"NIA_SCARH_NEW_Shot_SoundSet",
					"NIA_SCARH_tail_SoundSet"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"NIA_SCARH_silencerShot_SoundSet",
					"NIA_SCARH_silencerTail_SoundSet"
				};
			};
			dispersion=0.00059634499;
			reloadtime="(60/600)";
			aiRateOfFire=1;
			aiRateOfFireDistance=100;
			aiRateOfFireDispersion=1;
			minRange=0;
			minRangeProbab=0.2;
			midRange=20;
			midRangeProbab=0.80000001;
			maxRange=40;
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
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"NIA_SCARH_NEW_Shot_SoundSet",
					"NIA_SCARH_tail_SoundSet"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"NIA_SCARH_silencerShot_SoundSet",
					"NIA_SCARH_silencerTail_SoundSet"
				};
			};
			dispersion=0.00062543503;
			reloadtime="(60/600)";
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
		class nia_magSwitch
		{
			hlc_10Rnd_762x51_B_SCARH_tan="hlc_wp_SCARH_STD_10Rnd";
			hlc_10Rnd_762x51_mk316_SCARH_tan="hlc_wp_SCARH_STD_10Rnd";
			hlc_10Rnd_762x51_Barrier_SCARH_tan="hlc_wp_SCARH_STD_10Rnd";
			hlc_10Rnd_762x51_t_SCARH_tan="hlc_wp_SCARH_STD_10Rnd";
			hlc_10Rnd_762x51_TDim_SCARH_tan="hlc_wp_SCARH_STD_10Rnd";
			hlc_10Rnd_762x51_S_SCARH_tan="hlc_wp_SCARH_STD_10Rnd";
			hlc_10Rnd_762x51_B_SCARH="hlc_wp_SCARH_STD_10Rnd";
			hlc_10Rnd_762x51_mk316_SCARH="hlc_wp_SCARH_STD_10Rnd";
			hlc_10Rnd_762x51_Barrier_SCARH="hlc_wp_SCARH_STD_10Rnd";
			hlc_10Rnd_762x51_t_SCARH="hlc_wp_SCARH_STD_10Rnd";
			hlc_10Rnd_762x51_TDim_SCARH="hlc_wp_SCARH_STD_10Rnd";
			hlc_10Rnd_762x51_S_SCARH="hlc_wp_SCARH_STD_10Rnd";
			hlc_10Rnd_762x51_B_SCARH_camo="hlc_wp_SCARH_STD_10Rnd";
			hlc_10Rnd_762x51_mk316_SCARH_camo="hlc_wp_SCARH_STD_10Rnd";
			hlc_10Rnd_762x51_Barrier_SCARH_camo="hlc_wp_SCARH_STD_10Rnd";
			hlc_10Rnd_762x51_t_SCARH_camo="hlc_wp_SCARH_STD_10Rnd";
			hlc_10Rnd_762x51_TDim_SCARH_camo="hlc_wp_SCARH_STD_10Rnd";
			hlc_10Rnd_762x51_S_SCARH_camo="hlc_wp_SCARH_STD_10Rnd";
			default="hlc_wp_SCARH_STD";
		};
		class nia_gripSwitch
		{
			VFG="hlc_wp_SCARH_STD_grip";
			AFG="hlc_wp_SCARH_STD_grip2";
			VFG2="hlc_wp_SCARH_STD_grip3";
			default="hlc_wp_SCARH_STD";
		};
		rhs_grip1_change="hlc_wp_SCARH_STD_grip";
		rhs_grip2_change="hlc_wp_SCARH_STD_grip2";
		rhs_grip3_change="hlc_wp_SCARH_STD_grip3";
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
			class hlc_wp_SCARH_STD
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SCARH_STD_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARH_STD_TacReload: hlc_wp_SCARH_STD
	{
		magazineReloadSwitchPhase="(40 / 96)";
		scopeArsenal=0;
		reloadMagazineSound[]=
		{
			"\nia_wp_SCAR\snd\mk17_reload_Partial.ogg",
			0.85000002,
			1,
			25
		};
		reloadAction="NIA_GestureReload_Mk17_Tactical";
		model="nia_wp_SCAR\mesh\Rifle\SCARH_STD_TacReload.p3d";
		rhs_grip1_change="hlc_wp_SCARH_STD_grip";
		rhs_grip2_change="hlc_wp_SCARH_STD_grip2";
		rhs_grip3_change="hlc_wp_SCARH_STD_grip3";
		class nia_gripSwitch
		{
			VFG="hlc_wp_SCARH_STD_grip";
			AFG="hlc_wp_SCARH_STD_grip2";
			VFG2="hlc_wp_SCARH_STD_grip3";
			default="hlc_wp_SCARH_STD_TacReload";
		};
	};
	class hlc_wp_SCARH_STD_grip: hlc_wp_SCARH_STD
	{
		scopeArsenal=0;
		dexterity=1.5471935;
		aimTransitionSpeed=1.0830355;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handpose_VFG.rtm"
		};
		class nia_magSwitch
		{
			hlc_10Rnd_762x51_B_SCARH_tan="hlc_wp_SCARH_STD_10Rnd_grip";
			hlc_10Rnd_762x51_mk316_SCARH_tan="hlc_wp_SCARH_STD_10Rnd_grip";
			hlc_10Rnd_762x51_Barrier_SCARH_tan="hlc_wp_SCARH_STD_10Rnd_grip";
			hlc_10Rnd_762x51_t_SCARH_tan="hlc_wp_SCARH_STD_10Rnd_grip";
			hlc_10Rnd_762x51_TDim_SCARH_tan="hlc_wp_SCARH_STD_10Rnd_grip";
			hlc_10Rnd_762x51_S_SCARH_tan="hlc_wp_SCARH_STD_10Rnd_grip";
			hlc_10Rnd_762x51_B_SCARH="hlc_wp_SCARH_STD_10Rnd_grip";
			hlc_10Rnd_762x51_mk316_SCARH="hlc_wp_SCARH_STD_10Rnd_grip";
			hlc_10Rnd_762x51_Barrier_SCARH="hlc_wp_SCARH_STD_10Rnd_grip";
			hlc_10Rnd_762x51_t_SCARH="hlc_wp_SCARH_STD_10Rnd_grip";
			hlc_10Rnd_762x51_TDim_SCARH="hlc_wp_SCARH_STD_10Rnd_grip";
			hlc_10Rnd_762x51_S_SCARH="hlc_wp_SCARH_STD_10Rnd_grip";
			hlc_10Rnd_762x51_B_SCARH_camo="hlc_wp_SCARH_STD_10Rnd_grip";
			hlc_10Rnd_762x51_mk316_SCARH_camo="hlc_wp_SCARH_STD_10Rnd_grip";
			hlc_10Rnd_762x51_Barrier_SCARH_camo="hlc_wp_SCARH_STD_10Rnd_grip";
			hlc_10Rnd_762x51_t_SCARH_camo="hlc_wp_SCARH_STD_10Rnd_grip";
			hlc_10Rnd_762x51_TDim_SCARH_camo="hlc_wp_SCARH_STD_10Rnd_grip";
			hlc_10Rnd_762x51_S_SCARH_camo="hlc_wp_SCARH_STD_10Rnd_grip";
			default="hlc_wp_SCARH_STD_grip";
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
			class hlc_wp_SCARH_STD_grip
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SCARH_STD_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARH_STD_grip2: hlc_wp_SCARH_STD
	{
		scopeArsenal=0;
		inertia="(0.358*0.85)";
		dexterity=1.5471935;
		aimTransitionSpeed=1.0830355;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handpose_AFG.rtm"
		};
		class nia_magSwitch
		{
			hlc_10Rnd_762x51_B_SCARH_tan="hlc_wp_SCARH_STD_10Rnd_grip2";
			hlc_10Rnd_762x51_mk316_SCARH_tan="hlc_wp_SCARH_STD_10Rnd_grip2";
			hlc_10Rnd_762x51_Barrier_SCARH_tan="hlc_wp_SCARH_STD_10Rnd_grip2";
			hlc_10Rnd_762x51_t_SCARH_tan="hlc_wp_SCARH_STD_10Rnd_grip2";
			hlc_10Rnd_762x51_TDim_SCARH_tan="hlc_wp_SCARH_STD_10Rnd_grip2";
			hlc_10Rnd_762x51_S_SCARH_tan="hlc_wp_SCARH_STD_10Rnd_grip2";
			hlc_10Rnd_762x51_B_SCARH="hlc_wp_SCARH_STD_10Rnd_grip2";
			hlc_10Rnd_762x51_mk316_SCARH="hlc_wp_SCARH_STD_10Rnd_grip2";
			hlc_10Rnd_762x51_Barrier_SCARH="hlc_wp_SCARH_STD_10Rnd_grip2";
			hlc_10Rnd_762x51_t_SCARH="hlc_wp_SCARH_STD_10Rnd_grip2";
			hlc_10Rnd_762x51_TDim_SCARH="hlc_wp_SCARH_STD_10Rnd_grip2";
			hlc_10Rnd_762x51_S_SCARH="hlc_wp_SCARH_STD_10Rnd_grip2";
			hlc_10Rnd_762x51_B_SCARH_camo="hlc_wp_SCARH_STD_10Rnd_grip2";
			hlc_10Rnd_762x51_mk316_SCARH_camo="hlc_wp_SCARH_STD_10Rnd_grip2";
			hlc_10Rnd_762x51_Barrier_SCARH_camo="hlc_wp_SCARH_STD_10Rnd_grip2";
			hlc_10Rnd_762x51_t_SCARH_camo="hlc_wp_SCARH_STD_10Rnd_grip2";
			hlc_10Rnd_762x51_TDim_SCARH_camo="hlc_wp_SCARH_STD_10Rnd_grip2";
			hlc_10Rnd_762x51_S_SCARH_camo="hlc_wp_SCARH_STD_10Rnd_grip2";
			default="hlc_wp_SCARH_STD_grip2";
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
			class hlc_wp_SCARH_STD_grip2
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SCARH_STD_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARH_STD_grip3: hlc_wp_SCARH_STD
	{
		scopeArsenal=0;
		dexterity=1.5471935;
		aimTransitionSpeed=1.0830355;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handpose_VFG.rtm"
		};
		class nia_magSwitch
		{
			hlc_10Rnd_762x51_B_SCARH_tan="hlc_wp_SCARH_STD_10Rnd_grip3";
			hlc_10Rnd_762x51_mk316_SCARH_tan="hlc_wp_SCARH_STD_10Rnd_grip3";
			hlc_10Rnd_762x51_Barrier_SCARH_tan="hlc_wp_SCARH_STD_10Rnd_grip3";
			hlc_10Rnd_762x51_t_SCARH_tan="hlc_wp_SCARH_STD_10Rnd_grip3";
			hlc_10Rnd_762x51_TDim_SCARH_tan="hlc_wp_SCARH_STD_10Rnd_grip3";
			hlc_10Rnd_762x51_S_SCARH_tan="hlc_wp_SCARH_STD_10Rnd_grip3";
			hlc_10Rnd_762x51_B_SCARH="hlc_wp_SCARH_STD_10Rnd_grip3";
			hlc_10Rnd_762x51_mk316_SCARH="hlc_wp_SCARH_STD_10Rnd_grip3";
			hlc_10Rnd_762x51_Barrier_SCARH="hlc_wp_SCARH_STD_10Rnd_grip3";
			hlc_10Rnd_762x51_t_SCARH="hlc_wp_SCARH_STD_10Rnd_grip3";
			hlc_10Rnd_762x51_TDim_SCARH="hlc_wp_SCARH_STD_10Rnd_grip3";
			hlc_10Rnd_762x51_S_SCARH="hlc_wp_SCARH_STD_10Rnd_grip3";
			hlc_10Rnd_762x51_B_SCARH_camo="hlc_wp_SCARH_STD_10Rnd_grip3";
			hlc_10Rnd_762x51_mk316_SCARH_camo="hlc_wp_SCARH_STD_10Rnd_grip3";
			hlc_10Rnd_762x51_Barrier_SCARH_camo="hlc_wp_SCARH_STD_10Rnd_grip3";
			hlc_10Rnd_762x51_t_SCARH_camo="hlc_wp_SCARH_STD_10Rnd_grip3";
			hlc_10Rnd_762x51_TDim_SCARH_camo="hlc_wp_SCARH_STD_10Rnd_grip3";
			hlc_10Rnd_762x51_S_SCARH_camo="hlc_wp_SCARH_STD_10Rnd_grip3";
			default="hlc_wp_SCARH_STD_grip3";
		};
	};
	class hlc_wp_SCARH_STD_10rnd: hlc_wp_SCARH_STD
	{
		scopeArsenal=0;
		reloadAction="NIA_GestureReload_Mk17_10rnd";
		baseweapon="hlc_wp_SCARH_STD_10rnd";
		class nia_gripSwitch
		{
			VFG="hlc_wp_SCARH_STD_10rnd_grip";
			AFG="hlc_wp_SCARH_STD_10rnd_grip2";
			VFG2="hlc_wp_SCARH_STD_10rnd_grip3";
			default="hlc_wp_SCARH_STD_10rnd";
		};
		rhs_grip1_change="hlc_wp_SCARH_STD_10rnd_grip";
		rhs_grip2_change="hlc_wp_SCARH_STD_10rnd_grip2";
		rhs_grip3_change="hlc_wp_SCARH_STD_10rnd";
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
			class hlc_wp_SCARH_STD_10rnd
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SCARH_STD_10rnd_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARH_STD_10rnd_TacReload: hlc_wp_SCARH_STD_10rnd
	{
		magazineReloadSwitchPhase="(40 / 96)";
		scopeArsenal=0;
		reloadMagazineSound[]=
		{
			"\nia_wp_SCAR\snd\mk17_reload_Partial.ogg",
			0.85000002,
			1,
			25
		};
		reloadAction="NIA_GestureReload_Mk17_10rnd_Tactical";
		model="nia_wp_SCAR\mesh\Rifle\SCARH_STD_TacReload.p3d";
		rhs_grip1_change="hlc_wp_SCARH_STD_10rnd_grip";
		rhs_grip2_change="hlc_wp_SCARH_STD_10rnd_grip2";
		rhs_grip3_change="hlc_wp_SCARH_STD_10rnd_grip3";
		class nia_gripSwitch
		{
			VFG="hlc_wp_SCARH_STD_10rnd_grip";
			AFG="hlc_wp_SCARH_STD_10rnd_grip2";
			VFG2="hlc_wp_SCARH_STD_10rnd_grip3";
			default="hlc_wp_SCARH_STD_10rnd_TacReload";
		};
	};
	class hlc_wp_SCARH_STD_10rnd_grip: hlc_wp_SCARH_STD_10rnd
	{
		scopeArsenal=0;
		dexterity=1.5471935;
		aimTransitionSpeed=1.0830355;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handpose_VFG.rtm"
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
			class hlc_wp_SCARH_STD_10rnd_grip
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SCARH_STD_10rnd_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARH_STD_10rnd_grip2: hlc_wp_SCARH_STD_10rnd
	{
		scopeArsenal=0;
		inertia="(0.358*0.85)";
		dexterity=1.5471935;
		aimTransitionSpeed=1.0830355;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handpose_AFG.rtm"
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
			class hlc_wp_SCARH_STD_10rnd_grip2
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SCARH_STD_10rnd_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARH_STD_10rnd_grip3: hlc_wp_SCARH_STD_10rnd
	{
		scopeArsenal=0;
		dexterity=1.5471935;
		aimTransitionSpeed=1.0830355;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handpose_VFG.rtm"
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
			class hlc_wp_SCARH_STD_10rnd_grip3
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SCARH_STD_10rnd_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARH_STD_Blk: hlc_wp_SCARH_STD
	{
		author="Toadie";
		dlc="Niarms_SCAR";
		displayName="$STR_NIA_rifle_SCARH_STD_blk";
		scope=2;
		baseWeapon="hlc_wp_SCARH_STD_Blk";
		picture="\nia_wp_SCAR\tex\ui\hlc_wp_SCARH_STD_Blk_ca";
		hiddenSelectionsTextures[]=
		{
			"nia_wp_SCAR\tex\toadie_SCAR\scar_common_co.paa",
			"nia_wp_SCAR\tex\toadie_SCAR\scar_lower_co.paa",
			"nia_wp_SCAR\tex\toadie_SCAR\stock_co.paa",
			"nia_wp_SCAR\tex\toadie_SCAR\upper_scarh_co.paa"
		};
		class nia_magSwitch
		{
			hlc_10Rnd_762x51_B_SCARH_tan="hlc_wp_SCARH_STD_10rnd_Blk";
			hlc_10Rnd_762x51_mk316_SCARH_tan="hlc_wp_SCARH_STD_10rnd_Blk";
			hlc_10Rnd_762x51_Barrier_SCARH_tan="hlc_wp_SCARH_STD_10rnd_Blk";
			hlc_10Rnd_762x51_t_SCARH_tan="hlc_wp_SCARH_STD_10rnd_Blk";
			hlc_10Rnd_762x51_TDim_SCARH_tan="hlc_wp_SCARH_STD_10rnd_Blk";
			hlc_10Rnd_762x51_S_SCARH_tan="hlc_wp_SCARH_STD_10rnd_Blk";
			hlc_10Rnd_762x51_B_SCARH="hlc_wp_SCARH_STD_10rnd_Blk";
			hlc_10Rnd_762x51_mk316_SCARH="hlc_wp_SCARH_STD_10rnd_Blk";
			hlc_10Rnd_762x51_Barrier_SCARH="hlc_wp_SCARH_STD_10rnd_Blk";
			hlc_10Rnd_762x51_t_SCARH="hlc_wp_SCARH_STD_10rnd_Blk";
			hlc_10Rnd_762x51_TDim_SCARH="hlc_wp_SCARH_STD_10rnd_Blk";
			hlc_10Rnd_762x51_S_SCARH="hlc_wp_SCARH_STD_10rnd_Blk";
			hlc_10Rnd_762x51_B_SCARH_camo="hlc_wp_SCARH_STD_10rnd_Blk";
			hlc_10Rnd_762x51_mk316_SCARH_camo="hlc_wp_SCARH_STD_10rnd_Blk";
			hlc_10Rnd_762x51_Barrier_SCARH_camo="hlc_wp_SCARH_STD_10rnd_Blk";
			hlc_10Rnd_762x51_t_SCARH_camo="hlc_wp_SCARH_STD_10rnd_Blk";
			hlc_10Rnd_762x51_TDim_SCARH_camo="hlc_wp_SCARH_STD_10rnd_Blk";
			hlc_10Rnd_762x51_S_SCARH_camo="hlc_wp_SCARH_STD_10rnd_Blk";
			default="hlc_wp_SCARH_STD_Blk";
		};
		class nia_gripSwitch
		{
			VFG="hlc_wp_SCARH_STD_Blk_grip";
			AFG="hlc_wp_SCARH_STD_Blk_grip2";
			VFG2="hlc_wp_SCARH_STD_Blk_grip3";
			default="hlc_wp_SCARH_STD_Blk";
		};
		rhs_grip1_change="hlc_wp_SCARH_STD_Blk_grip";
		rhs_grip2_change="hlc_wp_SCARH_STD_Blk_grip2";
		rhs_grip3_change="hlc_wp_SCARH_STD_Blk_grip3";
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
			class hlc_wp_SCARH_STD_Blk
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SCARH_STD_Blk_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARH_STD_Blk_TacReload: hlc_wp_SCARH_STD_Blk
	{
		magazineReloadSwitchPhase="(40 / 96)";
		scopeArsenal=0;
		reloadMagazineSound[]=
		{
			"\nia_wp_SCAR\snd\mk17_reload_Partial.ogg",
			0.85000002,
			1,
			25
		};
		reloadAction="NIA_GestureReload_Mk17_Tactical";
		model="nia_wp_SCAR\mesh\Rifle\SCARH_STD_TacReload.p3d";
		rhs_grip1_change="hlc_wp_SCARH_STD_Blk_grip";
		rhs_grip2_change="hlc_wp_SCARH_STD_Blk_grip2";
		rhs_grip3_change="hlc_wp_SCARH_STD_Blk_grip3";
		class nia_gripSwitch
		{
			VFG="hlc_wp_SCARH_STD_Blk_grip";
			AFG="hlc_wp_SCARH_STD_Blk_grip2";
			VFG2="hlc_wp_SCARH_STD_Blk_grip3";
			default="hlc_wp_SCARH_STD_Blk_TacReload";
		};
	};
	class hlc_wp_SCARH_STD_Blk_grip: hlc_wp_SCARH_STD_Blk
	{
		scopeArsenal=0;
		dexterity=1.5471935;
		aimTransitionSpeed=1.0830355;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handpose_VFG.rtm"
		};
		class nia_magSwitch
		{
			hlc_10Rnd_762x51_B_SCARH_tan="hlc_wp_SCARH_STD_10Rnd_Blk_grip";
			hlc_10Rnd_762x51_mk316_SCARH_tan="hlc_wp_SCARH_STD_10Rnd_Blk_grip";
			hlc_10Rnd_762x51_Barrier_SCARH_tan="hlc_wp_SCARH_STD_10Rnd_Blk_grip";
			hlc_10Rnd_762x51_t_SCARH_tan="hlc_wp_SCARH_STD_10Rnd_Blk_grip";
			hlc_10Rnd_762x51_TDim_SCARH_tan="hlc_wp_SCARH_STD_10Rnd_Blk_grip";
			hlc_10Rnd_762x51_S_SCARH_tan="hlc_wp_SCARH_STD_10Rnd_Blk_grip";
			hlc_10Rnd_762x51_B_SCARH="hlc_wp_SCARH_STD_10Rnd_Blk_grip";
			hlc_10Rnd_762x51_mk316_SCARH="hlc_wp_SCARH_STD_10Rnd_Blk_grip";
			hlc_10Rnd_762x51_Barrier_SCARH="hlc_wp_SCARH_STD_10Rnd_Blk_grip";
			hlc_10Rnd_762x51_t_SCARH="hlc_wp_SCARH_STD_10Rnd_Blk_grip";
			hlc_10Rnd_762x51_TDim_SCARH="hlc_wp_SCARH_STD_10Rnd_Blk_grip";
			hlc_10Rnd_762x51_S_SCARH="hlc_wp_SCARH_STD_10Rnd_Blk_grip";
			hlc_10Rnd_762x51_B_SCARH_camo="hlc_wp_SCARH_STD_10Rnd_Blk_grip";
			hlc_10Rnd_762x51_mk316_SCARH_camo="hlc_wp_SCARH_STD_10Rnd_Blk_grip";
			hlc_10Rnd_762x51_Barrier_SCARH_camo="hlc_wp_SCARH_STD_10Rnd_Blk_grip";
			hlc_10Rnd_762x51_t_SCARH_camo="hlc_wp_SCARH_STD_10Rnd_Blk_grip";
			hlc_10Rnd_762x51_TDim_SCARH_camo="hlc_wp_SCARH_STD_10Rnd_Blk_grip";
			hlc_10Rnd_762x51_S_SCARH_camo="hlc_wp_SCARH_STD_10Rnd_Blk_grip";
			default="hlc_wp_SCARH_STD_Blk_grip";
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
			class hlc_wp_SCARH_STD_Blk_grip
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SCARH_STD_Blk_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARH_STD_Blk_grip2: hlc_wp_SCARH_STD_Blk
	{
		scopeArsenal=0;
		inertia="(0.358*0.85)";
		dexterity=1.5471935;
		aimTransitionSpeed=1.0830355;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handpose_AFG.rtm"
		};
		class nia_magSwitch
		{
			hlc_10Rnd_762x51_B_SCARH_tan="hlc_wp_SCARH_STD_10Rnd_Blk_grip2";
			hlc_10Rnd_762x51_mk316_SCARH_tan="hlc_wp_SCARH_STD_10Rnd_Blk_grip2";
			hlc_10Rnd_762x51_Barrier_SCARH_tan="hlc_wp_SCARH_STD_10Rnd_Blk_grip2";
			hlc_10Rnd_762x51_t_SCARH_tan="hlc_wp_SCARH_STD_10Rnd_Blk_grip2";
			hlc_10Rnd_762x51_TDim_SCARH_tan="hlc_wp_SCARH_STD_10Rnd_Blk_grip2";
			hlc_10Rnd_762x51_S_SCARH_tan="hlc_wp_SCARH_STD_10Rnd_Blk_grip2";
			hlc_10Rnd_762x51_B_SCARH="hlc_wp_SCARH_STD_10Rnd_Blk_grip2";
			hlc_10Rnd_762x51_mk316_SCARH="hlc_wp_SCARH_STD_10Rnd_Blk_grip2";
			hlc_10Rnd_762x51_Barrier_SCARH="hlc_wp_SCARH_STD_10Rnd_Blk_grip2";
			hlc_10Rnd_762x51_t_SCARH="hlc_wp_SCARH_STD_10Rnd_Blk_grip2";
			hlc_10Rnd_762x51_TDim_SCARH="hlc_wp_SCARH_STD_10Rnd_Blk_grip2";
			hlc_10Rnd_762x51_S_SCARH="hlc_wp_SCARH_STD_10Rnd_Blk_grip2";
			hlc_10Rnd_762x51_B_SCARH_camo="hlc_wp_SCARH_STD_10Rnd_Blk_grip2";
			hlc_10Rnd_762x51_mk316_SCARH_camo="hlc_wp_SCARH_STD_10Rnd_Blk_grip2";
			hlc_10Rnd_762x51_Barrier_SCARH_camo="hlc_wp_SCARH_STD_10Rnd_Blk_grip2";
			hlc_10Rnd_762x51_t_SCARH_camo="hlc_wp_SCARH_STD_10Rnd_Blk_grip2";
			hlc_10Rnd_762x51_TDim_SCARH_camo="hlc_wp_SCARH_STD_10Rnd_Blk_grip2";
			hlc_10Rnd_762x51_S_SCARH_camo="hlc_wp_SCARH_STD_10Rnd_Blk_grip2";
			default="hlc_wp_SCARH_STD_Blk_grip2";
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
			class hlc_wp_SCARH_STD_Blk_grip2
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SCARH_STD_Blk_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARH_STD_Blk_grip3: hlc_wp_SCARH_STD_Blk
	{
		scopeArsenal=0;
		dexterity=1.5471935;
		aimTransitionSpeed=1.0830355;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handpose_VFG.rtm"
		};
		class nia_magSwitch
		{
			hlc_10Rnd_762x51_B_SCARH_tan="hlc_wp_SCARH_STD_10Rnd_Blk_grip3";
			hlc_10Rnd_762x51_mk316_SCARH_tan="hlc_wp_SCARH_STD_10Rnd_Blk_grip3";
			hlc_10Rnd_762x51_Barrier_SCARH_tan="hlc_wp_SCARH_STD_10Rnd_Blk_grip3";
			hlc_10Rnd_762x51_t_SCARH_tan="hlc_wp_SCARH_STD_10Rnd_Blk_grip3";
			hlc_10Rnd_762x51_TDim_SCARH_tan="hlc_wp_SCARH_STD_10Rnd_Blk_grip3";
			hlc_10Rnd_762x51_S_SCARH_tan="hlc_wp_SCARH_STD_10Rnd_Blk_grip3";
			hlc_10Rnd_762x51_B_SCARH="hlc_wp_SCARH_STD_10Rnd_Blk_grip3";
			hlc_10Rnd_762x51_mk316_SCARH="hlc_wp_SCARH_STD_10Rnd_Blk_grip3";
			hlc_10Rnd_762x51_Barrier_SCARH="hlc_wp_SCARH_STD_10Rnd_Blk_grip3";
			hlc_10Rnd_762x51_t_SCARH="hlc_wp_SCARH_STD_10Rnd_Blk_grip3";
			hlc_10Rnd_762x51_TDim_SCARH="hlc_wp_SCARH_STD_10Rnd_Blk_grip3";
			hlc_10Rnd_762x51_S_SCARH="hlc_wp_SCARH_STD_10Rnd_Blk_grip3";
			hlc_10Rnd_762x51_B_SCARH_camo="hlc_wp_SCARH_STD_10Rnd_Blk_grip3";
			hlc_10Rnd_762x51_mk316_SCARH_camo="hlc_wp_SCARH_STD_10Rnd_Blk_grip3";
			hlc_10Rnd_762x51_Barrier_SCARH_camo="hlc_wp_SCARH_STD_10Rnd_Blk_grip3";
			hlc_10Rnd_762x51_t_SCARH_camo="hlc_wp_SCARH_STD_10Rnd_Blk_grip3";
			hlc_10Rnd_762x51_TDim_SCARH_camo="hlc_wp_SCARH_STD_10Rnd_Blk_grip3";
			hlc_10Rnd_762x51_S_SCARH_camo="hlc_wp_SCARH_STD_10Rnd_Blk_grip3";
			default="hlc_wp_SCARH_STD_Blk_grip3";
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
			class hlc_wp_SCARH_STD_Blk_grip3
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SCARH_STD_Blk_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARH_STD_10rnd_Blk: hlc_wp_SCARH_STD_Blk
	{
		scopeArsenal=0;
		reloadAction="NIA_GestureReload_Mk17_10rnd";
		baseweapon="hlc_wp_SCARH_STD_10rnd_Blk";
		class nia_gripSwitch
		{
			VFG="hlc_wp_SCARH_STD_10rnd_Blk_grip";
			AFG="hlc_wp_SCARH_STD_10rnd_Blk_grip2";
			VFG2="hlc_wp_SCARH_STD_10rnd_Blk_grip3";
			default="hlc_wp_SCARH_STD_10rnd_Blk";
		};
		rhs_grip1_change="hlc_wp_SCARH_STD_10rnd_Blk_grip";
		rhs_grip2_change="hlc_wp_SCARH_STD_10rnd_Blk_grip2";
		rhs_grip3_change="hlc_wp_SCARH_STD_10rnd_Blk_grip3";
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
			class hlc_wp_SCARH_STD_10rnd_Blk
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SCARH_STD_10rnd_Blk_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARH_STD_10rnd_Blk_TacReload: hlc_wp_SCARH_STD_10rnd_Blk
	{
		magazineReloadSwitchPhase="(40 / 96)";
		scopeArsenal=0;
		reloadMagazineSound[]=
		{
			"\nia_wp_SCAR\snd\mk17_reload_Partial.ogg",
			0.85000002,
			1,
			25
		};
		reloadAction="NIA_GestureReload_Mk17_10rnd_Tactical";
		model="nia_wp_SCAR\mesh\Rifle\SCARH_STD_TacReload.p3d";
		rhs_grip1_change="hlc_wp_SCARH_STD_10rnd_Blk_grip";
		rhs_grip2_change="hlc_wp_SCARH_STD_10rnd_Blk_grip2";
		rhs_grip3_change="hlc_wp_SCARH_STD_10rnd_Blk_grip3";
		class nia_gripSwitch
		{
			VFG="hlc_wp_SCARH_STD_10rnd_Blk_grip";
			AFG="hlc_wp_SCARH_STD_10rnd_Blk_grip2";
			VFG2="hlc_wp_SCARH_STD_10rnd_Blk_grip3";
			default="hlc_wp_SCARH_STD_10rnd_Blk_TacReload";
		};
	};
	class hlc_wp_SCARH_STD_10rnd_Blk_grip: hlc_wp_SCARH_STD_10rnd_Blk
	{
		scopeArsenal=0;
		dexterity=1.5471935;
		aimTransitionSpeed=1.0830355;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handpose_VFG.rtm"
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
			class hlc_wp_SCARH_STD_10rnd_Blk_Grip
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SCARH_STD_10rnd_Blk_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARH_STD_10rnd_Blk_grip2: hlc_wp_SCARH_STD_10rnd_Blk
	{
		scopeArsenal=0;
		inertia="(0.358*0.85)";
		dexterity=1.5471935;
		aimTransitionSpeed=1.0830355;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handpose_AFG.rtm"
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
			class hlc_wp_SCARH_STD_10rnd_Blk_Grip2
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SCARH_STD_10rnd_Blk_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARH_STD_10rnd_Blk_grip3: hlc_wp_SCARH_STD_10rnd_Blk
	{
		scopeArsenal=0;
		dexterity=1.5471935;
		aimTransitionSpeed=1.0830355;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handpose_VFG.rtm"
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
			class hlc_wp_SCARH_STD_10rnd_Blk_Grip3
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SCARH_STD_10rnd_Blk_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARH_STD_camo: hlc_wp_SCARH_STD
	{
		author="Toadie";
		dlc="Niarms_SCAR";
		displayName="$STR_NIA_rifle_SCARH_STD_camo";
		scope=2;
		baseWeapon="hlc_wp_SCARH_STD_camo";
		picture="\nia_wp_SCAR\tex\ui\hlc_wp_SCARH_STD_camo_ca";
		hiddenSelectionsTextures[]=
		{
			"nia_wp_SCAR\tex\toadie_SCAR\scar_common_camo_co.paa",
			"nia_wp_SCAR\tex\toadie_SCAR\scar_lower_camo_co.paa",
			"nia_wp_SCAR\tex\toadie_SCAR\stock_camo_co.paa",
			"nia_wp_SCAR\tex\toadie_SCAR\upper_scarh_camo_co.paa"
		};
		HiddenSelectionsMaterials[]=
		{
			"nia_wp_SCAR\mat\scar_common_camo.rvmat",
			"nia_wp_SCAR\mat\scar_lowers_camo.rvmat",
			"nia_wp_SCAR\mat\scar_stock_camo.rvmat",
			"nia_wp_SCAR\mat\scar_upper_scarh_camo.rvmat"
		};
		class nia_magSwitch
		{
			hlc_10Rnd_762x51_B_SCARH_tan="hlc_wp_SCARH_STD_10rnd_camo";
			hlc_10Rnd_762x51_mk316_SCARH_tan="hlc_wp_SCARH_STD_10rnd_camo";
			hlc_10Rnd_762x51_Barrier_SCARH_tan="hlc_wp_SCARH_STD_10rnd_camo";
			hlc_10Rnd_762x51_t_SCARH_tan="hlc_wp_SCARH_STD_10rnd_camo";
			hlc_10Rnd_762x51_TDim_SCARH_tan="hlc_wp_SCARH_STD_10rnd_camo";
			hlc_10Rnd_762x51_S_SCARH_tan="hlc_wp_SCARH_STD_10rnd_camo";
			hlc_10Rnd_762x51_B_SCARH="hlc_wp_SCARH_STD_10rnd_camo";
			hlc_10Rnd_762x51_mk316_SCARH="hlc_wp_SCARH_STD_10rnd_camo";
			hlc_10Rnd_762x51_Barrier_SCARH="hlc_wp_SCARH_STD_10rnd_camo";
			hlc_10Rnd_762x51_t_SCARH="hlc_wp_SCARH_STD_10rnd_camo";
			hlc_10Rnd_762x51_TDim_SCARH="hlc_wp_SCARH_STD_10rnd_camo";
			hlc_10Rnd_762x51_S_SCARH="hlc_wp_SCARH_STD_10rnd_camo";
			hlc_10Rnd_762x51_B_SCARH_camo="hlc_wp_SCARH_STD_10rnd_camo";
			hlc_10Rnd_762x51_mk316_SCARH_camo="hlc_wp_SCARH_STD_10rnd_camo";
			hlc_10Rnd_762x51_Barrier_SCARH_camo="hlc_wp_SCARH_STD_10rnd_camo";
			hlc_10Rnd_762x51_t_SCARH_camo="hlc_wp_SCARH_STD_10rnd_camo";
			hlc_10Rnd_762x51_TDim_SCARH_camo="hlc_wp_SCARH_STD_10rnd_camo";
			hlc_10Rnd_762x51_S_SCARH_camo="hlc_wp_SCARH_STD_10rnd_camo";
			default="hlc_wp_SCARH_STD_camo";
		};
		class nia_gripSwitch
		{
			VFG="hlc_wp_SCARH_STD_camo_grip";
			AFG="hlc_wp_SCARH_STD_camo_grip2";
			VFG2="hlc_wp_SCARH_STD_camo_grip3";
			default="hlc_wp_SCARH_STD_camo";
		};
		rhs_grip1_change="hlc_wp_SCARH_STD_camo_grip";
		rhs_grip2_change="hlc_wp_SCARH_STD_camo_grip2";
		rhs_grip3_change="hlc_wp_SCARH_STD_camo_grip3";
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
			class hlc_wp_SCARH_STD_camo
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SCARH_STD_camo_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARH_STD_camo_TacReload: hlc_wp_SCARH_STD_camo
	{
		magazineReloadSwitchPhase="(40 / 96)";
		scopeArsenal=0;
		reloadMagazineSound[]=
		{
			"\nia_wp_SCAR\snd\mk17_reload_Partial.ogg",
			0.85000002,
			1,
			25
		};
		reloadAction="NIA_GestureReload_Mk17_Tactical";
		model="nia_wp_SCAR\mesh\Rifle\SCARH_STD_TacReload.p3d";
		rhs_grip1_change="hlc_wp_SCARH_STD_camo_grip";
		rhs_grip2_change="hlc_wp_SCARH_STD_camo_grip2";
		rhs_grip3_change="hlc_wp_SCARH_STD_camo_grip3";
		class nia_gripSwitch
		{
			VFG="hlc_wp_SCARH_STD_camo_grip";
			AFG="hlc_wp_SCARH_STD_camo_grip2";
			VFG2="hlc_wp_SCARH_STD_camo_grip3";
			default="hlc_wp_SCARH_STD_camo_TacReload";
		};
	};
	class hlc_wp_SCARH_STD_camo_grip: hlc_wp_SCARH_STD_camo
	{
		scopeArsenal=0;
		dexterity=1.5471935;
		aimTransitionSpeed=1.0830355;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handpose_VFG.rtm"
		};
		class nia_magSwitch
		{
			hlc_10Rnd_762x51_B_SCARH_tan="hlc_wp_SCARH_STD_10Rnd_camo_grip";
			hlc_10Rnd_762x51_mk316_SCARH_tan="hlc_wp_SCARH_STD_10Rnd_camo_grip";
			hlc_10Rnd_762x51_Barrier_SCARH_tan="hlc_wp_SCARH_STD_10Rnd_camo_grip";
			hlc_10Rnd_762x51_t_SCARH_tan="hlc_wp_SCARH_STD_10Rnd_camo_grip";
			hlc_10Rnd_762x51_TDim_SCARH_tan="hlc_wp_SCARH_STD_10Rnd_camo_grip";
			hlc_10Rnd_762x51_S_SCARH_tan="hlc_wp_SCARH_STD_10Rnd_camo_grip";
			hlc_10Rnd_762x51_B_SCARH="hlc_wp_SCARH_STD_10Rnd_camo_grip";
			hlc_10Rnd_762x51_mk316_SCARH="hlc_wp_SCARH_STD_10Rnd_camo_grip";
			hlc_10Rnd_762x51_Barrier_SCARH="hlc_wp_SCARH_STD_10Rnd_camo_grip";
			hlc_10Rnd_762x51_t_SCARH="hlc_wp_SCARH_STD_10Rnd_camo_grip";
			hlc_10Rnd_762x51_TDim_SCARH="hlc_wp_SCARH_STD_10Rnd_camo_grip";
			hlc_10Rnd_762x51_S_SCARH="hlc_wp_SCARH_STD_10Rnd_camo_grip";
			hlc_10Rnd_762x51_B_SCARH_camo="hlc_wp_SCARH_STD_10Rnd_camo_grip";
			hlc_10Rnd_762x51_mk316_SCARH_camo="hlc_wp_SCARH_STD_10Rnd_camo_grip";
			hlc_10Rnd_762x51_Barrier_SCARH_camo="hlc_wp_SCARH_STD_10Rnd_camo_grip";
			hlc_10Rnd_762x51_t_SCARH_camo="hlc_wp_SCARH_STD_10Rnd_camo_grip";
			hlc_10Rnd_762x51_TDim_SCARH_camo="hlc_wp_SCARH_STD_10Rnd_camo_grip";
			hlc_10Rnd_762x51_S_SCARH_camo="hlc_wp_SCARH_STD_10Rnd_camo_grip";
			default="hlc_wp_SCARH_STD_camo_grip";
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
			class hlc_wp_SCARH_STD_camo_grip
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SCARH_STD_camo_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARH_STD_camo_grip2: hlc_wp_SCARH_STD_camo
	{
		scopeArsenal=0;
		inertia="(0.358*0.85)";
		dexterity=1.5471935;
		aimTransitionSpeed=1.0830355;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handpose_AFG.rtm"
		};
		class nia_magSwitch
		{
			hlc_10Rnd_762x51_B_SCARH_tan="hlc_wp_SCARH_STD_10Rnd_camo_grip2";
			hlc_10Rnd_762x51_mk316_SCARH_tan="hlc_wp_SCARH_STD_10Rnd_camo_grip2";
			hlc_10Rnd_762x51_Barrier_SCARH_tan="hlc_wp_SCARH_STD_10Rnd_camo_grip2";
			hlc_10Rnd_762x51_t_SCARH_tan="hlc_wp_SCARH_STD_10Rnd_camo_grip2";
			hlc_10Rnd_762x51_TDim_SCARH_tan="hlc_wp_SCARH_STD_10Rnd_camo_grip2";
			hlc_10Rnd_762x51_S_SCARH_tan="hlc_wp_SCARH_STD_10Rnd_camo_grip2";
			hlc_10Rnd_762x51_B_SCARH="hlc_wp_SCARH_STD_10Rnd_camo_grip2";
			hlc_10Rnd_762x51_mk316_SCARH="hlc_wp_SCARH_STD_10Rnd_camo_grip2";
			hlc_10Rnd_762x51_Barrier_SCARH="hlc_wp_SCARH_STD_10Rnd_camo_grip2";
			hlc_10Rnd_762x51_t_SCARH="hlc_wp_SCARH_STD_10Rnd_camo_grip2";
			hlc_10Rnd_762x51_TDim_SCARH="hlc_wp_SCARH_STD_10Rnd_camo_grip2";
			hlc_10Rnd_762x51_S_SCARH="hlc_wp_SCARH_STD_10Rnd_camo_grip2";
			hlc_10Rnd_762x51_B_SCARH_camo="hlc_wp_SCARH_STD_10Rnd_camo_grip2";
			hlc_10Rnd_762x51_mk316_SCARH_camo="hlc_wp_SCARH_STD_10Rnd_camo_grip2";
			hlc_10Rnd_762x51_Barrier_SCARH_camo="hlc_wp_SCARH_STD_10Rnd_camo_grip2";
			hlc_10Rnd_762x51_t_SCARH_camo="hlc_wp_SCARH_STD_10Rnd_camo_grip2";
			hlc_10Rnd_762x51_TDim_SCARH_camo="hlc_wp_SCARH_STD_10Rnd_camo_grip2";
			hlc_10Rnd_762x51_S_SCARH_camo="hlc_wp_SCARH_STD_10Rnd_camo_grip2";
			default="hlc_wp_SCARH_STD_camo_grip2";
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
			class hlc_wp_SCARH_STD_camo_grip2
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SCARH_STD_camo_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARH_STD_camo_grip3: hlc_wp_SCARH_STD_camo
	{
		scopeArsenal=0;
		dexterity=1.5471935;
		aimTransitionSpeed=1.0830355;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handpose_VFG.rtm"
		};
		class nia_magSwitch
		{
			hlc_10Rnd_762x51_B_SCARH_tan="hlc_wp_SCARH_STD_10Rnd_camo_grip3";
			hlc_10Rnd_762x51_mk316_SCARH_tan="hlc_wp_SCARH_STD_10Rnd_camo_grip3";
			hlc_10Rnd_762x51_Barrier_SCARH_tan="hlc_wp_SCARH_STD_10Rnd_camo_grip3";
			hlc_10Rnd_762x51_t_SCARH_tan="hlc_wp_SCARH_STD_10Rnd_camo_grip3";
			hlc_10Rnd_762x51_TDim_SCARH_tan="hlc_wp_SCARH_STD_10Rnd_camo_grip3";
			hlc_10Rnd_762x51_S_SCARH_tan="hlc_wp_SCARH_STD_10Rnd_camo_grip3";
			hlc_10Rnd_762x51_B_SCARH="hlc_wp_SCARH_STD_10Rnd_camo_grip3";
			hlc_10Rnd_762x51_mk316_SCARH="hlc_wp_SCARH_STD_10Rnd_camo_grip3";
			hlc_10Rnd_762x51_Barrier_SCARH="hlc_wp_SCARH_STD_10Rnd_camo_grip3";
			hlc_10Rnd_762x51_t_SCARH="hlc_wp_SCARH_STD_10Rnd_camo_grip3";
			hlc_10Rnd_762x51_TDim_SCARH="hlc_wp_SCARH_STD_10Rnd_camo_grip3";
			hlc_10Rnd_762x51_S_SCARH="hlc_wp_SCARH_STD_10Rnd_camo_grip3";
			hlc_10Rnd_762x51_B_SCARH_camo="hlc_wp_SCARH_STD_10Rnd_camo_grip3";
			hlc_10Rnd_762x51_mk316_SCARH_camo="hlc_wp_SCARH_STD_10Rnd_camo_grip3";
			hlc_10Rnd_762x51_Barrier_SCARH_camo="hlc_wp_SCARH_STD_10Rnd_camo_grip3";
			hlc_10Rnd_762x51_t_SCARH_camo="hlc_wp_SCARH_STD_10Rnd_camo_grip3";
			hlc_10Rnd_762x51_TDim_SCARH_camo="hlc_wp_SCARH_STD_10Rnd_camo_grip3";
			hlc_10Rnd_762x51_S_SCARH_camo="hlc_wp_SCARH_STD_10Rnd_camo_grip3";
			default="hlc_wp_SCARH_STD_camo_grip3";
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
			class hlc_wp_SCARH_STD_camo_grip3
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SCARH_STD_camo_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARH_STD_10rnd_camo: hlc_wp_SCARH_STD_camo
	{
		scopeArsenal=0;
		reloadAction="NIA_GestureReload_Mk17_10rnd";
		baseweapon="hlc_wp_SCARH_STD_10rnd_camo";
		class nia_gripSwitch
		{
			VFG="hlc_wp_SCARH_STD_10rnd_camo_grip";
			AFG="hlc_wp_SCARH_STD_10rnd_camo_grip2";
			VFG2="hlc_wp_SCARH_STD_10rnd_camo_grip3";
			default="hlc_wp_SCARH_STD_10rnd_camo";
		};
		rhs_grip1_change="hlc_wp_SCARH_STD_10rnd_camo_grip";
		rhs_grip2_change="hlc_wp_SCARH_STD_10rnd_camo_grip2";
		rhs_grip3_change="hlc_wp_SCARH_STD_10rnd_camo_grip3";
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
			class hlc_wp_SCARH_STD_10rnd_camo
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SCARH_STD_10rnd_camo_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARH_STD_10rnd_camo_TacReload: hlc_wp_SCARH_STD_10rnd_camo
	{
		magazineReloadSwitchPhase="(40 / 96)";
		scopeArsenal=0;
		reloadMagazineSound[]=
		{
			"\nia_wp_SCAR\snd\mk17_reload_Partial.ogg",
			0.85000002,
			1,
			25
		};
		reloadAction="NIA_GestureReload_Mk17_10rnd_Tactical";
		model="nia_wp_SCAR\mesh\Rifle\SCARH_STD_TacReload.p3d";
		rhs_grip1_change="hlc_wp_SCARH_STD_10rnd_camo_grip";
		rhs_grip2_change="hlc_wp_SCARH_STD_10rnd_camo_grip2";
		rhs_grip3_change="hlc_wp_SCARH_STD_10rnd_camo_grip3";
		class nia_gripSwitch
		{
			VFG="hlc_wp_SCARH_STD_10rnd_camo_grip";
			AFG="hlc_wp_SCARH_STD_10rnd_camo_grip2";
			VFG2="hlc_wp_SCARH_STD_10rnd_camo_grip3";
			default="hlc_wp_SCARH_STD_10rnd_camo_TacReload";
		};
	};
	class hlc_wp_SCARH_STD_10rnd_camo_grip: hlc_wp_SCARH_STD_10rnd_camo
	{
		scopeArsenal=0;
		dexterity=1.5471935;
		aimTransitionSpeed=1.0830355;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handpose_VFG.rtm"
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
			class hlc_wp_SCARH_STD_10rnd_camo_grip
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SCARH_STD_10rnd_camo_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARH_STD_10rnd_camo_grip2: hlc_wp_SCARH_STD_10rnd_camo
	{
		scopeArsenal=0;
		inertia="(0.358*0.85)";
		dexterity=1.5471935;
		aimTransitionSpeed=1.0830355;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handpose_AFG.rtm"
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
			class hlc_wp_SCARH_STD_10rnd_camo_grip2
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SCARH_STD_10rnd_camo_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARH_STD_10rnd_camo_grip3: hlc_wp_SCARH_STD_10rnd_camo
	{
		scopeArsenal=0;
		dexterity=1.5471935;
		aimTransitionSpeed=1.0830355;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handpose_VFG.rtm"
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
			class hlc_wp_SCARH_STD_10rnd_camo_grip3
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SCARH_STD_10rnd_camo_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARH_STD_EGLM: hlc_wp_SCARH_STD
	{
		author="Toadie";
		dlc="Niarms_SCAR";
		displayName="$STR_NIA_rifle_SCARH_STD_EGLM";
		scope=2;
		magazines[]=
		{
			"hlc_20Rnd_762x51_B_SCARH_tan",
			"hlc_20Rnd_762x51_mk316_SCARH_tan",
			"hlc_20Rnd_762x51_Barrier_SCARH_tan",
			"hlc_20Rnd_762x51_t_SCARH_tan",
			"hlc_20Rnd_762x51_TDim_SCARH_tan",
			"hlc_20rnd_762x51_M_SCARH_tan",
			"hlc_20rnd_762x51_MDIM_SCARH_tan",
			"hlc_20Rnd_762x51_S_SCARH_tan",
			"hlc_20Rnd_762x51_S_SCARH_tan",
			"hlc_20Rnd_762x51_B_SCARH",
			"hlc_20Rnd_762x51_mk316_SCARH",
			"hlc_20Rnd_762x51_Barrier_SCARH",
			"hlc_20Rnd_762x51_t_SCARH",
			"hlc_20Rnd_762x51_TDim_SCARH",
			"hlc_20rnd_762x51_M_SCARH",
			"hlc_20rnd_762x51_MDIM_SCARH",
			"hlc_20Rnd_762x51_S_SCARH",
			"hlc_20Rnd_762x51_B_SCARH_camo",
			"hlc_20Rnd_762x51_mk316_SCARH_camo",
			"hlc_20Rnd_762x51_Barrier_SCARH_camo",
			"hlc_20Rnd_762x51_t_SCARH_camo",
			"hlc_20Rnd_762x51_TDim_SCARH_camo",
			"hlc_20rnd_762x51_M_SCARH_camo",
			"hlc_20rnd_762x51_MDIM_SCARH_camo",
			"hlc_20Rnd_762x51_S_SCARH_camo",
			"hlc_20Rnd_762x51_B_SCARH_MW2",
			"hlc_20Rnd_762x51_barrier_SCARH_MW2",
			"hlc_20Rnd_762x51_mk316_SCARH_MW2",
			"hlc_20Rnd_762x51_TDIM_SCARH_MW2",
			"hlc_20Rnd_762x51_T_SCARH_MW2",
			"hlc_20Rnd_762x51_M_SCARH_MW2",
			"hlc_20Rnd_762x51_MDIM_SCARH_MW2",
			"hlc_20Rnd_762x51_S_SCARH_MW2"
		};
		magazineWell[]=
		{
			"CBA_762x51_SCAR"
		};
		muzzles[]=
		{
			"this",
			"hlc_GL_SCAR_EGLM"
		};
		baseWeapon="hlc_wp_SCARH_STD_EGLM";
		mass=110.744;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=110.744;
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
			class MuzzleSlot: asdg_MuzzleSlot_762
			{
				iconPosition[]={0,0};
				iconScale=1;
				iconPicture="\A3\Weapons_F\Data\clear_empty.paa";
				iconPinPoint="Left";
			};
			class UnderBarrelSlot
			{
				iconPosition[]={0,0};
				iconScale=1;
				iconPicture="\A3\Weapons_F\Data\clear_empty.paa";
				iconPinPoint="Left";
			};
			class GripodSlot
			{
				iconPosition[]={0,0};
				iconScale=1;
				iconPicture="\A3\Weapons_F\Data\clear_empty.paa";
				iconPinPoint="Left";
			};
		};
		inertia="(0.358+0.15)";
		dexterity=1.1380438;
		aimTransitionSpeed=0.79663062;
		model="nia_wp_SCAR\mesh\rifle\SCARH_STD_EGLM.p3d";
		reloadAction="NIA_GestureReload_Mk17_EGLM";
		picture="\nia_wp_SCAR\tex\ui\hlc_wp_SCARH_STD_EGLM_ca";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handpose_EGLM.rtm"
		};
		UiPicture="\A3\weapons_f\data\UI\icon_regular_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"nia_wp_SCAR\tex\toadie_SCAR\scar_common_tan_co.paa",
			"nia_wp_SCAR\tex\toadie_SCAR\scar_lower_tan_co.paa",
			"nia_wp_SCAR\tex\toadie_SCAR\stock_tan_co.paa",
			"nia_wp_SCAR\tex\toadie_SCAR\upper_scarh_tan_co.paa",
			"nia_wp_SCAR\tex\toadie_SCAR\Launcher_FN-EGLM_tan_co.paa"
		};
		HiddenSelectionsMaterials[]=
		{
			"nia_wp_SCAR\mat\scar_common.rvmat",
			"nia_wp_SCAR\mat\scar_lowers.rvmat",
			"nia_wp_SCAR\mat\scar_stock.rvmat",
			"nia_wp_SCAR\mat\scar_upper_scarh.rvmat",
			"nia_wp_SCAR\mat\Launcher_FN-EGLM.rvmat"
		};
		class nia_magSwitch
		{
			default="hlc_wp_SCARH_STD_EGLM";
		};
		class nia_gripSwitch
		{
			VFG="hlc_wp_SCARH_STD_EGLM";
			AFG="hlc_wp_SCARH_STD_EGLM";
			VFG2="hlc_wp_SCARH_STD_EGLM";
			default="hlc_wp_SCARH_STD_EGLM";
		};
		rhs_grip1_change="hlc_wp_SCARH_STD_EGLM";
		rhs_grip2_change="hlc_wp_SCARH_STD_EGLM";
		rhs_grip3_change="hlc_wp_SCARH_STD_EGLM";
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
			class hlc_wp_SCARH_STD_EGLM
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SCARH_STD_EGLM_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARH_STD_EGLM_TacReload: hlc_wp_SCARH_STD_EGLM
	{
		magazineReloadSwitchPhase="(40 / 96)";
		scopeArsenal=0;
		reloadMagazineSound[]=
		{
			"\nia_wp_SCAR\snd\mk17_reload_Partial.ogg",
			0.85000002,
			1,
			25
		};
		reloadAction="NIA_GestureReload_Mk17_EGLM_Tactical";
		model="nia_wp_SCAR\mesh\Rifle\SCARH_STD_EGLM_TacReload.p3d";
	};
	class hlc_wp_SCARH_STD_EGLM_Blk: hlc_wp_SCARH_STD_Blk
	{
		author="Toadie";
		dlc="Niarms_SCAR";
		displayName="$STR_NIA_rifle_SCARH_STD_EGLM_blk";
		scope=2;
		magazines[]=
		{
			"hlc_20Rnd_762x51_B_SCARH_tan",
			"hlc_20Rnd_762x51_mk316_SCARH_tan",
			"hlc_20Rnd_762x51_Barrier_SCARH_tan",
			"hlc_20Rnd_762x51_t_SCARH_tan",
			"hlc_20Rnd_762x51_TDim_SCARH_tan",
			"hlc_20rnd_762x51_M_SCARH_tan",
			"hlc_20rnd_762x51_MDIM_SCARH_tan",
			"hlc_20Rnd_762x51_S_SCARH_tan",
			"hlc_20Rnd_762x51_S_SCARH_tan",
			"hlc_20Rnd_762x51_B_SCARH",
			"hlc_20Rnd_762x51_mk316_SCARH",
			"hlc_20Rnd_762x51_Barrier_SCARH",
			"hlc_20Rnd_762x51_t_SCARH",
			"hlc_20Rnd_762x51_TDim_SCARH",
			"hlc_20rnd_762x51_M_SCARH",
			"hlc_20rnd_762x51_MDIM_SCARH",
			"hlc_20Rnd_762x51_S_SCARH",
			"hlc_20Rnd_762x51_B_SCARH_camo",
			"hlc_20Rnd_762x51_mk316_SCARH_camo",
			"hlc_20Rnd_762x51_Barrier_SCARH_camo",
			"hlc_20Rnd_762x51_t_SCARH_camo",
			"hlc_20Rnd_762x51_TDim_SCARH_camo",
			"hlc_20rnd_762x51_M_SCARH_camo",
			"hlc_20rnd_762x51_MDIM_SCARH_camo",
			"hlc_20Rnd_762x51_S_SCARH_camo",
			"hlc_20Rnd_762x51_B_SCARH_MW2",
			"hlc_20Rnd_762x51_barrier_SCARH_MW2",
			"hlc_20Rnd_762x51_mk316_SCARH_MW2",
			"hlc_20Rnd_762x51_TDIM_SCARH_MW2",
			"hlc_20Rnd_762x51_T_SCARH_MW2",
			"hlc_20Rnd_762x51_M_SCARH_MW2",
			"hlc_20Rnd_762x51_MDIM_SCARH_MW2",
			"hlc_20Rnd_762x51_S_SCARH_MW2"
		};
		magazineWell[]=
		{
			"CBA_762x51_SCAR"
		};
		muzzles[]=
		{
			"this",
			"hlc_GL_SCAR_EGLM"
		};
		baseWeapon="hlc_wp_SCARH_STD_EGLM_Blk";
		mass=110.744;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=110.744;
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
			class MuzzleSlot: asdg_MuzzleSlot_762
			{
				iconPosition[]={0,0};
				iconScale=1;
				iconPicture="\A3\Weapons_F\Data\clear_empty.paa";
				iconPinPoint="Left";
			};
			class UnderBarrelSlot
			{
				iconPosition[]={0,0};
				iconScale=1;
				iconPicture="\A3\Weapons_F\Data\clear_empty.paa";
				iconPinPoint="Left";
			};
			class GripodSlot
			{
				iconPosition[]={0,0};
				iconScale=1;
				iconPicture="\A3\Weapons_F\Data\clear_empty.paa";
				iconPinPoint="Left";
			};
		};
		inertia="(0.358 + 0.15)";
		dexterity=1.1380438;
		aimTransitionSpeed=0.79663062;
		model="nia_wp_SCAR\mesh\rifle\SCARH_STD_EGLM.p3d";
		reloadAction="NIA_GestureReload_Mk17_EGLM";
		picture="\nia_wp_SCAR\tex\ui\hlc_wp_SCARH_STD_EGLM_Blk_ca";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handpose_EGLM.rtm"
		};
		UiPicture="\A3\weapons_f\data\UI\icon_regular_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"nia_wp_SCAR\tex\toadie_SCAR\scar_common_co.paa",
			"nia_wp_SCAR\tex\toadie_SCAR\scar_lower_co.paa",
			"nia_wp_SCAR\tex\toadie_SCAR\stock_co.paa",
			"nia_wp_SCAR\tex\toadie_SCAR\upper_scarh_co.paa",
			"nia_wp_SCAR\tex\toadie_SCAR\Launcher_FN-EGLM_co.paa"
		};
		HiddenSelectionsMaterials[]=
		{
			"nia_wp_SCAR\mat\scar_common.rvmat",
			"nia_wp_SCAR\mat\scar_lowers.rvmat",
			"nia_wp_SCAR\mat\scar_stock.rvmat",
			"nia_wp_SCAR\mat\scar_upper_scarh.rvmat",
			"nia_wp_SCAR\mat\Launcher_FN-EGLM.rvmat"
		};
		class nia_magSwitch
		{
			default="hlc_wp_SCARH_STD_EGLM_Blk";
		};
		class nia_gripSwitch
		{
			VFG="hlc_wp_SCARH_STD_EGLM_Blk";
			AFG="hlc_wp_SCARH_STD_EGLM_Blk";
			VFG2="hlc_wp_SCARH_STD_EGLM_Blk";
			default="hlc_wp_SCARH_STD_EGLM_Blk";
		};
		rhs_grip1_change="hlc_wp_SCARH_STD_EGLM_Blk";
		rhs_grip2_change="hlc_wp_SCARH_STD_EGLM_Blk";
		rhs_grip3_change="hlc_wp_SCARH_STD_EGLM_Blk";
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
			class hlc_wp_SCARH_STD_EGLM_blk
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SCARH_STD_EGLM_blk_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARH_STD_EGLM_Blk_TacReload: hlc_wp_SCARH_STD_EGLM_Blk
	{
		magazineReloadSwitchPhase="(40 / 96)";
		scopeArsenal=0;
		reloadMagazineSound[]=
		{
			"\nia_wp_SCAR\snd\mk17_reload_Partial.ogg",
			0.85000002,
			1,
			25
		};
		reloadAction="NIA_GestureReload_Mk17_EGLM_Tactical";
		model="nia_wp_SCAR\mesh\Rifle\SCARH_STD_EGLM_TacReload.p3d";
	};
	class hlc_wp_SCARH_STD_EGLM_camo: hlc_wp_SCARH_STD_camo
	{
		author="Toadie";
		dlc="Niarms_SCAR";
		displayName="$STR_NIA_rifle_SCARH_STD_EGLM_camo";
		scope=2;
		magazines[]=
		{
			"hlc_20Rnd_762x51_B_SCARH_tan",
			"hlc_20Rnd_762x51_mk316_SCARH_tan",
			"hlc_20Rnd_762x51_Barrier_SCARH_tan",
			"hlc_20Rnd_762x51_t_SCARH_tan",
			"hlc_20Rnd_762x51_TDim_SCARH_tan",
			"hlc_20rnd_762x51_M_SCARH_tan",
			"hlc_20rnd_762x51_MDIM_SCARH_tan",
			"hlc_20Rnd_762x51_S_SCARH_tan",
			"hlc_20Rnd_762x51_S_SCARH_tan",
			"hlc_20Rnd_762x51_B_SCARH",
			"hlc_20Rnd_762x51_mk316_SCARH",
			"hlc_20Rnd_762x51_Barrier_SCARH",
			"hlc_20Rnd_762x51_t_SCARH",
			"hlc_20Rnd_762x51_TDim_SCARH",
			"hlc_20rnd_762x51_M_SCARH",
			"hlc_20rnd_762x51_MDIM_SCARH",
			"hlc_20Rnd_762x51_S_SCARH",
			"hlc_20Rnd_762x51_B_SCARH_camo",
			"hlc_20Rnd_762x51_mk316_SCARH_camo",
			"hlc_20Rnd_762x51_Barrier_SCARH_camo",
			"hlc_20Rnd_762x51_t_SCARH_camo",
			"hlc_20Rnd_762x51_TDim_SCARH_camo",
			"hlc_20rnd_762x51_M_SCARH_camo",
			"hlc_20rnd_762x51_MDIM_SCARH_camo",
			"hlc_20Rnd_762x51_S_SCARH_camo",
			"hlc_20Rnd_762x51_B_SCARH_MW2",
			"hlc_20Rnd_762x51_barrier_SCARH_MW2",
			"hlc_20Rnd_762x51_mk316_SCARH_MW2",
			"hlc_20Rnd_762x51_TDIM_SCARH_MW2",
			"hlc_20Rnd_762x51_T_SCARH_MW2",
			"hlc_20Rnd_762x51_M_SCARH_MW2",
			"hlc_20Rnd_762x51_MDIM_SCARH_MW2",
			"hlc_20Rnd_762x51_S_SCARH_MW2"
		};
		magazineWell[]=
		{
			"CBA_762x51_SCAR"
		};
		muzzles[]=
		{
			"this",
			"hlc_GL_SCAR_EGLM"
		};
		baseWeapon="hlc_wp_SCARH_STD_EGLM_camo";
		mass=110.744;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=110.744;
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
			class MuzzleSlot: asdg_MuzzleSlot_762
			{
				iconPosition[]={0,0};
				iconScale=1;
				iconPicture="\A3\Weapons_F\Data\clear_empty.paa";
				iconPinPoint="Left";
			};
			class UnderBarrelSlot
			{
				iconPosition[]={0,0};
				iconScale=1;
				iconPicture="\A3\Weapons_F\Data\clear_empty.paa";
				iconPinPoint="Left";
			};
			class GripodSlot
			{
				iconPosition[]={0,0};
				iconScale=1;
				iconPicture="\A3\Weapons_F\Data\clear_empty.paa";
				iconPinPoint="Left";
			};
		};
		inertia="(0.358 + 0.15)";
		dexterity=1.1380438;
		aimTransitionSpeed=0.79663062;
		model="nia_wp_SCAR\mesh\rifle\SCARH_STD_EGLM.p3d";
		reloadAction="NIA_GestureReload_Mk17_EGLM";
		picture="\nia_wp_SCAR\tex\ui\hlc_wp_SCARH_STD_EGLM_camo_ca";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handpose_EGLM.rtm"
		};
		UiPicture="\A3\weapons_f\data\UI\icon_regular_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"nia_wp_SCAR\tex\toadie_SCAR\scar_common_camo_co.paa",
			"nia_wp_SCAR\tex\toadie_SCAR\scar_lower_camo_co.paa",
			"nia_wp_SCAR\tex\toadie_SCAR\stock_camo_co.paa",
			"nia_wp_SCAR\tex\toadie_SCAR\upper_scarh_camo_co.paa",
			"nia_wp_SCAR\tex\toadie_SCAR\Launcher_FN-EGLM_camo_co.paa"
		};
		HiddenSelectionsMaterials[]=
		{
			"nia_wp_SCAR\mat\scar_common_camo.rvmat",
			"nia_wp_SCAR\mat\scar_lowers_camo.rvmat",
			"nia_wp_SCAR\mat\scar_stock_camo.rvmat",
			"nia_wp_SCAR\mat\scar_upper_scarh_camo.rvmat",
			"nia_wp_SCAR\mat\Launcher_FN-EGLM_camo.rvmat"
		};
		class nia_magSwitch
		{
			default="hlc_wp_SCARH_STD_EGLM_camo";
		};
		class nia_gripSwitch
		{
			VFG="hlc_wp_SCARH_STD_EGLM_camo";
			AFG="hlc_wp_SCARH_STD_EGLM_camo";
			VFG2="hlc_wp_SCARH_STD_EGLM_camo";
			default="hlc_wp_SCARH_STD_EGLM_camo";
		};
		rhs_grip1_change="hlc_wp_SCARH_STD_EGLM_camo";
		rhs_grip2_change="hlc_wp_SCARH_STD_EGLM_camo";
		rhs_grip3_change="hlc_wp_SCARH_STD_EGLM_camo";
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
			class hlc_wp_SCARH_STD_EGLM_camo
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SCARH_STD_EGLM_camo_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARH_STD_EGLM_camo_TacReload: hlc_wp_SCARH_STD_EGLM_camo
	{
		magazineReloadSwitchPhase="(40 / 96)";
		scopeArsenal=0;
		reloadMagazineSound[]=
		{
			"\nia_wp_SCAR\snd\mk17_reload_Partial.ogg",
			0.85000002,
			1,
			25
		};
		reloadAction="NIA_GestureReload_Mk17_EGLM_Tactical";
		model="nia_wp_SCAR\mesh\Rifle\SCARH_STD_EGLM_TacReload.p3d";
	};
	class hlc_wp_SCARH_STD_SRX: hlc_wp_SCARH_STD
	{
		author="Toadie";
		dlc="Niarms_SCAR";
		displayName="$STR_NIA_rifle_SCARH_STD_SRX";
		scope=2;
		magazines[]=
		{
			"hlc_20Rnd_762x51_B_SCARH_tan",
			"hlc_20Rnd_762x51_mk316_SCARH_tan",
			"hlc_20Rnd_762x51_Barrier_SCARH_tan",
			"hlc_20Rnd_762x51_t_SCARH_tan",
			"hlc_20Rnd_762x51_TDim_SCARH_tan",
			"hlc_20rnd_762x51_M_SCARH_tan",
			"hlc_20rnd_762x51_MDIM_SCARH_tan",
			"hlc_20Rnd_762x51_S_SCARH_tan",
			"hlc_20Rnd_762x51_S_SCARH_tan",
			"hlc_20Rnd_762x51_B_SCARH",
			"hlc_20Rnd_762x51_mk316_SCARH",
			"hlc_20Rnd_762x51_Barrier_SCARH",
			"hlc_20Rnd_762x51_t_SCARH",
			"hlc_20Rnd_762x51_TDim_SCARH",
			"hlc_20rnd_762x51_M_SCARH",
			"hlc_20rnd_762x51_MDIM_SCARH",
			"hlc_20Rnd_762x51_S_SCARH",
			"hlc_20Rnd_762x51_B_SCARH_camo",
			"hlc_20Rnd_762x51_mk316_SCARH_camo",
			"hlc_20Rnd_762x51_Barrier_SCARH_camo",
			"hlc_20Rnd_762x51_t_SCARH_camo",
			"hlc_20Rnd_762x51_TDim_SCARH_camo",
			"hlc_20rnd_762x51_M_SCARH_camo",
			"hlc_20rnd_762x51_MDIM_SCARH_camo",
			"hlc_20Rnd_762x51_S_SCARH_camo",
			"hlc_20Rnd_762x51_B_SCARH_MW2",
			"hlc_20Rnd_762x51_barrier_SCARH_MW2",
			"hlc_20Rnd_762x51_mk316_SCARH_MW2",
			"hlc_20Rnd_762x51_TDIM_SCARH_MW2",
			"hlc_20Rnd_762x51_T_SCARH_MW2",
			"hlc_20Rnd_762x51_M_SCARH_MW2",
			"hlc_20Rnd_762x51_MDIM_SCARH_MW2",
			"hlc_20Rnd_762x51_S_SCARH_MW2",
			"hlc_10Rnd_762x51_B_SCARH_tan",
			"hlc_10Rnd_762x51_mk316_SCARH_tan",
			"hlc_10Rnd_762x51_Barrier_SCARH_tan",
			"hlc_10Rnd_762x51_t_SCARH_tan",
			"hlc_10Rnd_762x51_TDim_SCARH_tan",
			"hlc_10Rnd_762x51_S_SCARH_tan",
			"hlc_10Rnd_762x51_B_SCARH",
			"hlc_10Rnd_762x51_mk316_SCARH",
			"hlc_10Rnd_762x51_Barrier_SCARH",
			"hlc_10Rnd_762x51_t_SCARH",
			"hlc_10Rnd_762x51_TDim_SCARH",
			"hlc_10Rnd_762x51_S_SCARH",
			"hlc_10Rnd_762x51_B_SCARH_camo",
			"hlc_10Rnd_762x51_mk316_SCARH_camo",
			"hlc_10Rnd_762x51_Barrier_SCARH_camo",
			"hlc_10Rnd_762x51_t_SCARH_camo",
			"hlc_10Rnd_762x51_TDim_SCARH_camo",
			"hlc_10Rnd_762x51_S_SCARH_camo"
		};
		magazineWell[]=
		{
			"CBA_762x51_SCAR"
		};
		baseWeapon="hlc_wp_SCARH_STD_SRX";
		mass=82.927193;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=82.927193;
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
				class compatibleItems: compatibleItems
				{
					HLC_Panel_Side_SCAR_Long_FN5cm_Desert=1;
					HLC_Panel_Side_SCAR_Long_2xFN5cm_Desert=1;
					HLC_Panel_Side_SCAR_Long_FN10cm_Desert=1;
					HLC_Panel_Side_SCAR_Long_FN15cm_Desert=1;
					HLC_Panel_Side_SCAR_Long_Ladder_S_Desert=1;
					HLC_Panel_Side_SCAR_Long_Ladder_M_Desert=1;
					HLC_Panel_Side_SCAR_Long_Ladder_L_Desert=1;
					HLC_Panel_Side_SCAR_Long_MagpulXT_Desert=1;
					HLC_Panel_Side_SCAR_Long_XTME_Desert=1;
					HLC_Panel_Side_SCAR_Long_2xXTME_Desert=1;
					HLC_Panel_Side_SCAR_Long_4xXTME_Desert=1;
					HLC_Panel_Side_SCAR_Long_FN5cm_Black=1;
					HLC_Panel_Side_SCAR_Long_2xFN5cm_Black=1;
					HLC_Panel_Side_SCAR_Long_FN10cm_Black=1;
					HLC_Panel_Side_SCAR_Long_FN15cm_Black=1;
					HLC_Panel_Side_SCAR_Long_Ladder_S_Black=1;
					HLC_Panel_Side_SCAR_Long_Ladder_M_Black=1;
					HLC_Panel_Side_SCAR_Long_Ladder_L_Black=1;
					HLC_Panel_Side_SCAR_Long_MagpulXT_Black=1;
					HLC_Panel_Side_SCAR_Long_XTME_Black=1;
					HLC_Panel_Side_SCAR_Long_2xXTME_Black=1;
					HLC_Panel_Side_SCAR_Long_4xXTME_Black=1;
					HLC_Panel_Side_SCAR_Long_FN5cm_OD=1;
					HLC_Panel_Side_SCAR_Long_2xFN5cm_OD=1;
					HLC_Panel_Side_SCAR_Long_FN10cm_OD=1;
					HLC_Panel_Side_SCAR_Long_FN15cm_OD=1;
					HLC_Panel_Side_SCAR_Long_Ladder_S_OD=1;
					HLC_Panel_Side_SCAR_Long_Ladder_M_OD=1;
					HLC_Panel_Side_SCAR_Long_Ladder_L_OD=1;
					HLC_Panel_Side_SCAR_Long_MagpulXT_OD=1;
					HLC_Panel_Side_SCAR_Long_XTME_OD=1;
					HLC_Panel_Side_SCAR_Long_2xXTME_OD=1;
					HLC_Panel_Side_SCAR_Long_4xXTME_OD=1;
					HLC_Panel_Side_SCAR_Long_FN5cm_RG=1;
					HLC_Panel_Side_SCAR_Long_2xFN5cm_RG=1;
					HLC_Panel_Side_SCAR_Long_FN10cm_RG=1;
					HLC_Panel_Side_SCAR_Long_FN15cm_RG=1;
					HLC_Panel_Side_SCAR_Long_Ladder_S_RG=1;
					HLC_Panel_Side_SCAR_Long_Ladder_M_RG=1;
					HLC_Panel_Side_SCAR_Long_Ladder_L_RG=1;
					HLC_Panel_Side_SCAR_Long_MagpulXT_RG=1;
					HLC_Panel_Side_SCAR_Long_XTME_RG=1;
					HLC_Panel_Side_SCAR_Long_2xXTME_RG=1;
					HLC_Panel_Side_SCAR_Long_4xXTME_RG=1;
					HLC_Panel_Side_SCAR_Long_Ladder_S_Pride=1;
					HLC_Panel_Side_SCAR_Long_Ladder_M_Pride=1;
					HLC_Panel_Side_SCAR_Long_Ladder_L_Pride=1;
					HLC_Panel_Side_SCAR_Long_MagpulXT_Pride=1;
				};
			};
			class MuzzleSlot: asdg_MuzzleSlot_762
			{
				iconPosition[]={0,0};
				iconScale=1;
				iconPicture="\A3\Weapons_F\Data\clear_empty.paa";
				iconPinPoint="Left";
			};
		};
		inertia="(0.358 + 0.024)";
		dexterity=1.3814185;
		aimTransitionSpeed=0.96699291;
		class LinkedItems
		{
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="hlc_muzzle_FSC30";
			};
		};
		model="nia_wp_SCAR\mesh\rifle\SCARH_STD_SRX.p3d";
		picture="\nia_wp_SCAR\tex\ui\hlc_wp_SCARH_STD_SRX_ca";
		UiPicture="\A3\weapons_f\data\UI\icon_regular_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"nia_wp_SCAR\tex\toadie_SCAR\scar_common_tan_co.paa",
			"nia_wp_SCAR\tex\toadie_SCAR\scar_lower_tan_co.paa",
			"nia_wp_SCAR\tex\toadie_SCAR\stock_tan_co.paa",
			"nia_wp_SCAR\tex\toadie_SCAR\upper_scarh_tan_co.paa",
			"nia_wp_SCAR\tex\map3_co.paa",
			"nia_wp_SCAR\tex\mapyes_co.paa",
			"nia_wp_SCAR\tex\toadie_SCAR\acc_extensions_co.paa"
		};
		HiddenSelectionsMaterials[]=
		{
			"nia_wp_SCAR\mat\scar_common.rvmat",
			"nia_wp_SCAR\mat\scar_lowers.rvmat",
			"nia_wp_SCAR\mat\scar_stock.rvmat",
			"nia_wp_SCAR\mat\scar_upper_scarh.rvmat",
			"nia_wp_SCAR\mat\map3.rvmat",
			"nia_wp_SCAR\mat\mapyes.rvmat",
			"nia_wp_SCAR\mat\Acc_Extensions.rvmat"
		};
		class nia_magSwitch
		{
			hlc_10Rnd_762x51_B_SCARH_tan="hlc_wp_SCARH_STD_SRX_10Rnd";
			hlc_10Rnd_762x51_mk316_SCARH_tan="hlc_wp_SCARH_STD_SRX_10Rnd";
			hlc_10Rnd_762x51_Barrier_SCARH_tan="hlc_wp_SCARH_STD_SRX_10Rnd";
			hlc_10Rnd_762x51_t_SCARH_tan="hlc_wp_SCARH_STD_SRX_10Rnd";
			hlc_10Rnd_762x51_TDim_SCARH_tan="hlc_wp_SCARH_STD_SRX_10Rnd";
			hlc_10Rnd_762x51_S_SCARH_tan="hlc_wp_SCARH_STD_SRX_10Rnd";
			hlc_10Rnd_762x51_B_SCARH="hlc_wp_SCARH_STD_SRX_10Rnd";
			hlc_10Rnd_762x51_mk316_SCARH="hlc_wp_SCARH_STD_SRX_10Rnd";
			hlc_10Rnd_762x51_Barrier_SCARH="hlc_wp_SCARH_STD_SRX_10Rnd";
			hlc_10Rnd_762x51_t_SCARH="hlc_wp_SCARH_STD_SRX_10Rnd";
			hlc_10Rnd_762x51_TDim_SCARH="hlc_wp_SCARH_STD_SRX_10Rnd";
			hlc_10Rnd_762x51_S_SCARH="hlc_wp_SCARH_STD_SRX_10Rnd";
			hlc_10Rnd_762x51_B_SCARH_camo="hlc_wp_SCARH_STD_SRX_10Rnd";
			hlc_10Rnd_762x51_mk316_SCARH_camo="hlc_wp_SCARH_STD_SRX_10Rnd";
			hlc_10Rnd_762x51_Barrier_SCARH_camo="hlc_wp_SCARH_STD_SRX_10Rnd";
			hlc_10Rnd_762x51_t_SCARH_camo="hlc_wp_SCARH_STD_SRX_10Rnd";
			hlc_10Rnd_762x51_TDim_SCARH_camo="hlc_wp_SCARH_STD_SRX_10Rnd";
			hlc_10Rnd_762x51_S_SCARH_camo="hlc_wp_SCARH_STD_SRX_10Rnd";
			default="hlc_wp_SCARH_STD_SRX";
		};
		class nia_gripSwitch
		{
			VFG="hlc_wp_SCARH_STD_SRX_grip";
			AFG="hlc_wp_SCARH_STD_SRX_grip2";
			VFG2="hlc_wp_SCARH_STD_SRX_grip3";
			default="hlc_wp_SCARH_STD_SRX";
		};
		rhs_grip1_change="hlc_wp_SCARH_STD_SRX_grip";
		rhs_grip2_change="hlc_wp_SCARH_STD_SRX_grip2";
		rhs_grip3_change="hlc_wp_SCARH_STD_SRX_grip3";
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
			class hlc_wp_SCARH_STD_SRX
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SCARH_STD_SRX_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARH_STD_SRX_TacReload: hlc_wp_SCARH_STD_SRX
	{
		magazineReloadSwitchPhase="(40 / 96)";
		scopeArsenal=0;
		reloadMagazineSound[]=
		{
			"\nia_wp_SCAR\snd\mk17_reload_Partial.ogg",
			0.85000002,
			1,
			25
		};
		reloadAction="NIA_GestureReload_Mk17_Tactical";
		model="nia_wp_SCAR\mesh\Rifle\SCARH_STD_SRX_TacReload.p3d";
		rhs_grip1_change="hlc_wp_SCARH_STD_SRX_grip";
		rhs_grip2_change="hlc_wp_SCARH_STD_SRX_grip2";
		rhs_grip3_change="hlc_wp_SCARH_STD_SRX_grip3";
		class nia_gripSwitch
		{
			VFG="hlc_wp_SCARH_STD_SRX_grip";
			AFG="hlc_wp_SCARH_STD_SRX_grip2";
			VFG2="hlc_wp_SCARH_STD_SRX_grip3";
			default="hlc_wp_SCARH_STD_SRX_TacReload";
		};
	};
	class hlc_wp_SCARH_STD_SRX_grip: hlc_wp_SCARH_STD_SRX
	{
		scopeArsenal=0;
		dexterity=1.4814185;
		aimTransitionSpeed=1.0369929;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handpose_VFG.rtm"
		};
		class nia_magSwitch
		{
			hlc_10Rnd_762x51_B_SCARH_tan="hlc_wp_SCARH_STD_SRX_10Rnd_grip";
			hlc_10Rnd_762x51_mk316_SCARH_tan="hlc_wp_SCARH_STD_SRX_10Rnd_grip";
			hlc_10Rnd_762x51_Barrier_SCARH_tan="hlc_wp_SCARH_STD_SRX_10Rnd_grip";
			hlc_10Rnd_762x51_t_SCARH_tan="hlc_wp_SCARH_STD_SRX_10Rnd_grip";
			hlc_10Rnd_762x51_TDim_SCARH_tan="hlc_wp_SCARH_STD_SRX_10Rnd_grip";
			hlc_10Rnd_762x51_S_SCARH_tan="hlc_wp_SCARH_STD_SRX_10Rnd_grip";
			hlc_10Rnd_762x51_B_SCARH="hlc_wp_SCARH_STD_SRX_10Rnd_grip";
			hlc_10Rnd_762x51_mk316_SCARH="hlc_wp_SCARH_STD_SRX_10Rnd_grip";
			hlc_10Rnd_762x51_Barrier_SCARH="hlc_wp_SCARH_STD_SRX_10Rnd_grip";
			hlc_10Rnd_762x51_t_SCARH="hlc_wp_SCARH_STD_SRX_10Rnd_grip";
			hlc_10Rnd_762x51_TDim_SCARH="hlc_wp_SCARH_STD_SRX_10Rnd_grip";
			hlc_10Rnd_762x51_S_SCARH="hlc_wp_SCARH_STD_SRX_10Rnd_grip";
			hlc_10Rnd_762x51_B_SCARH_camo="hlc_wp_SCARH_STD_SRX_10Rnd_grip";
			hlc_10Rnd_762x51_mk316_SCARH_camo="hlc_wp_SCARH_STD_SRX_10Rnd_grip";
			hlc_10Rnd_762x51_Barrier_SCARH_camo="hlc_wp_SCARH_STD_SRX_10Rnd_grip";
			hlc_10Rnd_762x51_t_SCARH_camo="hlc_wp_SCARH_STD_SRX_10Rnd_grip";
			hlc_10Rnd_762x51_TDim_SCARH_camo="hlc_wp_SCARH_STD_SRX_10Rnd_grip";
			hlc_10Rnd_762x51_S_SCARH_camo="hlc_wp_SCARH_STD_SRX_10Rnd_grip";
			default="hlc_wp_SCARH_STD_SRX_grip";
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
			class hlc_wp_SCARH_STD_SRX_grip
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SCARH_STD_SRX_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARH_STD_SRX_grip2: hlc_wp_SCARH_STD_SRX
	{
		scopeArsenal=0;
		inertia="(0.382*0.85)";
		dexterity=1.4814185;
		aimTransitionSpeed=1.0369929;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handpose_AFG.rtm"
		};
		class nia_magSwitch
		{
			hlc_10Rnd_762x51_B_SCARH_tan="hlc_wp_SCARH_STD_SRX_10Rnd_grip2";
			hlc_10Rnd_762x51_mk316_SCARH_tan="hlc_wp_SCARH_STD_SRX_10Rnd_grip2";
			hlc_10Rnd_762x51_Barrier_SCARH_tan="hlc_wp_SCARH_STD_SRX_10Rnd_grip2";
			hlc_10Rnd_762x51_t_SCARH_tan="hlc_wp_SCARH_STD_SRX_10Rnd_grip2";
			hlc_10Rnd_762x51_TDim_SCARH_tan="hlc_wp_SCARH_STD_SRX_10Rnd_grip2";
			hlc_10Rnd_762x51_S_SCARH_tan="hlc_wp_SCARH_STD_SRX_10Rnd_grip2";
			hlc_10Rnd_762x51_B_SCARH="hlc_wp_SCARH_STD_SRX_10Rnd_grip2";
			hlc_10Rnd_762x51_mk316_SCARH="hlc_wp_SCARH_STD_SRX_10Rnd_grip2";
			hlc_10Rnd_762x51_Barrier_SCARH="hlc_wp_SCARH_STD_SRX_10Rnd_grip2";
			hlc_10Rnd_762x51_t_SCARH="hlc_wp_SCARH_STD_SRX_10Rnd_grip2";
			hlc_10Rnd_762x51_TDim_SCARH="hlc_wp_SCARH_STD_SRX_10Rnd_grip2";
			hlc_10Rnd_762x51_S_SCARH="hlc_wp_SCARH_STD_SRX_10Rnd_grip2";
			hlc_10Rnd_762x51_B_SCARH_camo="hlc_wp_SCARH_STD_SRX_10Rnd_grip2";
			hlc_10Rnd_762x51_mk316_SCARH_camo="hlc_wp_SCARH_STD_SRX_10Rnd_grip2";
			hlc_10Rnd_762x51_Barrier_SCARH_camo="hlc_wp_SCARH_STD_SRX_10Rnd_grip2";
			hlc_10Rnd_762x51_t_SCARH_camo="hlc_wp_SCARH_STD_SRX_10Rnd_grip2";
			hlc_10Rnd_762x51_TDim_SCARH_camo="hlc_wp_SCARH_STD_SRX_10Rnd_grip2";
			hlc_10Rnd_762x51_S_SCARH_camo="hlc_wp_SCARH_STD_SRX_10Rnd_grip2";
			default="hlc_wp_SCARH_STD_SRX_grip2";
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
			class hlc_wp_SCARH_STD_SRX_grip2
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SCARH_STD_SRX_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARH_STD_SRX_grip3: hlc_wp_SCARH_STD_SRX
	{
		scopeArsenal=0;
		dexterity=1.4814185;
		aimTransitionSpeed=1.0369929;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handpose_VFG.rtm"
		};
		class nia_magSwitch
		{
			hlc_10Rnd_762x51_B_SCARH_tan="hlc_wp_SCARH_STD_SRX_10Rnd_grip3";
			hlc_10Rnd_762x51_mk316_SCARH_tan="hlc_wp_SCARH_STD_SRX_10Rnd_grip3";
			hlc_10Rnd_762x51_Barrier_SCARH_tan="hlc_wp_SCARH_STD_SRX_10Rnd_grip3";
			hlc_10Rnd_762x51_t_SCARH_tan="hlc_wp_SCARH_STD_SRX_10Rnd_grip3";
			hlc_10Rnd_762x51_TDim_SCARH_tan="hlc_wp_SCARH_STD_SRX_10Rnd_grip3";
			hlc_10Rnd_762x51_S_SCARH_tan="hlc_wp_SCARH_STD_SRX_10Rnd_grip3";
			hlc_10Rnd_762x51_B_SCARH="hlc_wp_SCARH_STD_SRX_10Rnd_grip3";
			hlc_10Rnd_762x51_mk316_SCARH="hlc_wp_SCARH_STD_SRX_10Rnd_grip3";
			hlc_10Rnd_762x51_Barrier_SCARH="hlc_wp_SCARH_STD_SRX_10Rnd_grip3";
			hlc_10Rnd_762x51_t_SCARH="hlc_wp_SCARH_STD_SRX_10Rnd_grip3";
			hlc_10Rnd_762x51_TDim_SCARH="hlc_wp_SCARH_STD_SRX_10Rnd_grip3";
			hlc_10Rnd_762x51_S_SCARH="hlc_wp_SCARH_STD_SRX_10Rnd_grip3";
			hlc_10Rnd_762x51_B_SCARH_camo="hlc_wp_SCARH_STD_SRX_10Rnd_grip3";
			hlc_10Rnd_762x51_mk316_SCARH_camo="hlc_wp_SCARH_STD_SRX_10Rnd_grip3";
			hlc_10Rnd_762x51_Barrier_SCARH_camo="hlc_wp_SCARH_STD_SRX_10Rnd_grip3";
			hlc_10Rnd_762x51_t_SCARH_camo="hlc_wp_SCARH_STD_SRX_10Rnd_grip3";
			hlc_10Rnd_762x51_TDim_SCARH_camo="hlc_wp_SCARH_STD_SRX_10Rnd_grip3";
			hlc_10Rnd_762x51_S_SCARH_camo="hlc_wp_SCARH_STD_SRX_10Rnd_grip3";
			default="hlc_wp_SCARH_STD_SRX_grip3";
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
			class hlc_wp_SCARH_STD_SRX_grip3
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SCARH_STD_SRX_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARH_STD_SRX_10rnd: hlc_wp_SCARH_STD_SRX
	{
		scopeArsenal=0;
		reloadAction="NIA_GestureReload_Mk17_10rnd";
		baseweapon="hlc_wp_SCARH_STD_SRX_10rnd";
		class nia_gripSwitch
		{
			VFG="hlc_wp_SCARH_STD_SRX_10rnd_grip";
			AFG="hlc_wp_SCARH_STD_SRX_10rnd_grip2";
			VFG2="hlc_wp_SCARH_STD_SRX_10rnd_grip3";
			default="hlc_wp_SCARH_STD_SRX_10rnd";
		};
		rhs_grip1_change="hlc_wp_SCARH_STD_SRX_10rnd_grip";
		rhs_grip2_change="hlc_wp_SCARH_STD_SRX_10rnd_grip2";
		rhs_grip3_change="hlc_wp_SCARH_STD_SRX_10rnd_grip3";
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
			class hlc_wp_SCARH_STD_SRX_10rnd
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SCARH_STD_SRX_10rnd_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARH_STD_SRX_10rnd_TacReload: hlc_wp_SCARH_STD_SRX_10rnd
	{
		magazineReloadSwitchPhase="(40 / 96)";
		scopeArsenal=0;
		reloadMagazineSound[]=
		{
			"\nia_wp_SCAR\snd\mk17_reload_Partial.ogg",
			0.85000002,
			1,
			25
		};
		reloadAction="NIA_GestureReload_Mk17_10rnd_Tactical";
		model="nia_wp_SCAR\mesh\Rifle\SCARH_STD_SRX_TacReload.p3d";
		rhs_grip1_change="hlc_wp_SCARH_STD_SRX_10rnd_grip";
		rhs_grip2_change="hlc_wp_SCARH_STD_SRX_10rnd_grip2";
		rhs_grip3_change="hlc_wp_SCARH_STD_SRX_10rnd_grip3";
		class nia_gripSwitch
		{
			VFG="hlc_wp_SCARH_STD_SRX_10rnd_grip";
			AFG="hlc_wp_SCARH_STD_SRX_10rnd_grip2";
			VFG2="hlc_wp_SCARH_STD_SRX_10rnd_grip3";
			default="hlc_wp_SCARH_STD_SRX_10rnd_TacReload";
		};
	};
	class hlc_wp_SCARH_STD_SRX_10rnd_grip: hlc_wp_SCARH_STD_SRX_10rnd
	{
		scopeArsenal=0;
		dexterity=1.4814185;
		aimTransitionSpeed=1.0369929;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handpose_VFG.rtm"
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
			class hlc_wp_SCARH_STD_SRX_10rnd_grip
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SCARH_STD_SRX_10rnd_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARH_STD_SRX_10rnd_grip2: hlc_wp_SCARH_STD_SRX_10rnd
	{
		scopeArsenal=0;
		inertia="(0.382*0.85)";
		dexterity=1.4814185;
		aimTransitionSpeed=1.0369929;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handpose_AFG.rtm"
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
			class hlc_wp_SCARH_STD_SRX_10rnd_grip2
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SCARH_STD_SRX_10rnd_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARH_STD_SRX_10rnd_grip3: hlc_wp_SCARH_STD_SRX_10rnd
	{
		scopeArsenal=0;
		dexterity=1.4814185;
		aimTransitionSpeed=1.0369929;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handpose_VFG.rtm"
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
			class hlc_wp_SCARH_STD_SRX_10rnd_grip3
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SCARH_STD_SRX_10rnd_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARH_STD_SRX_camo: hlc_wp_SCARH_STD_SRX
	{
		author="Toadie";
		dlc="Niarms_SCAR";
		displayName="$STR_NIA_rifle_SCARH_STD_SRX_camo";
		scope=2;
		baseWeapon="hlc_wp_SCARH_STD_SRX_camo";
		picture="\nia_wp_SCAR\tex\ui\hlc_wp_SCARH_STD_SRX_camo_Ca";
		hiddenSelectionsTextures[]=
		{
			"nia_wp_SCAR\tex\toadie_SCAR\scar_common_camo_co.paa",
			"nia_wp_SCAR\tex\toadie_SCAR\scar_lower_camo_co.paa",
			"nia_wp_SCAR\tex\toadie_SCAR\stock_camo_co.paa",
			"nia_wp_SCAR\tex\toadie_SCAR\upper_scarh_camo_co.paa",
			"nia_wp_SCAR\tex\map3_co.paa",
			"nia_wp_SCAR\tex\mapyes_co.paa",
			"nia_wp_SCAR\tex\toadie_SCAR\acc_extensions_camo_co.paa"
		};
		HiddenSelectionsMaterials[]=
		{
			"nia_wp_SCAR\mat\scar_common_camo.rvmat",
			"nia_wp_SCAR\mat\scar_lowers_camo.rvmat",
			"nia_wp_SCAR\mat\scar_stock_camo.rvmat",
			"nia_wp_SCAR\mat\scar_upper_scarh_camo.rvmat",
			"nia_wp_SCAR\mat\map3.rvmat",
			"nia_wp_SCAR\mat\mapyes.rvmat",
			"nia_wp_SCAR\mat\Acc_Extensions_camo.rvmat"
		};
		class nia_magSwitch
		{
			hlc_10Rnd_762x51_B_SCARH_tan="hlc_wp_SCARH_STD_SRX_10rnd_camo";
			hlc_10Rnd_762x51_mk316_SCARH_tan="hlc_wp_SCARH_STD_SRX_10rnd_camo";
			hlc_10Rnd_762x51_Barrier_SCARH_tan="hlc_wp_SCARH_STD_SRX_10rnd_camo";
			hlc_10Rnd_762x51_t_SCARH_tan="hlc_wp_SCARH_STD_SRX_10rnd_camo";
			hlc_10Rnd_762x51_TDim_SCARH_tan="hlc_wp_SCARH_STD_SRX_10rnd_camo";
			hlc_10Rnd_762x51_S_SCARH_tan="hlc_wp_SCARH_STD_SRX_10rnd_camo";
			hlc_10Rnd_762x51_B_SCARH="hlc_wp_SCARH_STD_SRX_10rnd_camo";
			hlc_10Rnd_762x51_mk316_SCARH="hlc_wp_SCARH_STD_SRX_10rnd_camo";
			hlc_10Rnd_762x51_Barrier_SCARH="hlc_wp_SCARH_STD_SRX_10rnd_camo";
			hlc_10Rnd_762x51_t_SCARH="hlc_wp_SCARH_STD_SRX_10rnd_camo";
			hlc_10Rnd_762x51_TDim_SCARH="hlc_wp_SCARH_STD_SRX_10rnd_camo";
			hlc_10Rnd_762x51_S_SCARH="hlc_wp_SCARH_STD_SRX_10rnd_camo";
			hlc_10Rnd_762x51_B_SCARH_camo="hlc_wp_SCARH_STD_SRX_10rnd_camo";
			hlc_10Rnd_762x51_mk316_SCARH_camo="hlc_wp_SCARH_STD_SRX_10rnd_camo";
			hlc_10Rnd_762x51_Barrier_SCARH_camo="hlc_wp_SCARH_STD_SRX_10rnd_camo";
			hlc_10Rnd_762x51_t_SCARH_camo="hlc_wp_SCARH_STD_SRX_10rnd_camo";
			hlc_10Rnd_762x51_TDim_SCARH_camo="hlc_wp_SCARH_STD_SRX_10rnd_camo";
			hlc_10Rnd_762x51_S_SCARH_camo="hlc_wp_SCARH_STD_SRX_10rnd_camo";
			default="hlc_wp_SCARH_STD_SRX_camo";
		};
		class nia_gripSwitch
		{
			VFG="hlc_wp_SCARH_STD_SRX_camo_grip";
			AFG="hlc_wp_SCARH_STD_SRX_camo_grip2";
			VFG2="hlc_wp_SCARH_STD_SRX_camo_grip3";
			default="hlc_wp_SCARH_STD_SRX_camo";
		};
		rhs_grip1_change="hlc_wp_SCARH_STD_SRX_camo_grip";
		rhs_grip2_change="hlc_wp_SCARH_STD_SRX_camo_grip2";
		rhs_grip3_change="hlc_wp_SCARH_STD_SRX_camo_grip3";
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
			class hlc_wp_SCARH_STD_SRX_camo
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SCARH_STD_SRX_camo_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARH_STD_SRX_camo_TacReload: hlc_wp_SCARH_STD_SRX_camo
	{
		magazineReloadSwitchPhase="(40 / 96)";
		scopeArsenal=0;
		reloadMagazineSound[]=
		{
			"\nia_wp_SCAR\snd\mk17_reload_Partial.ogg",
			0.85000002,
			1,
			25
		};
		reloadAction="NIA_GestureReload_Mk17_Tactical";
		model="nia_wp_SCAR\mesh\Rifle\SCARH_STD_SRX_TacReload.p3d";
		rhs_grip1_change="hlc_wp_SCARH_STD_SRX_camo_grip";
		rhs_grip2_change="hlc_wp_SCARH_STD_SRX_camo_grip2";
		rhs_grip3_change="hlc_wp_SCARH_STD_SRX_camo_grip3";
		class nia_gripSwitch
		{
			VFG="hlc_wp_SCARH_STD_SRX_camo_grip";
			AFG="hlc_wp_SCARH_STD_SRX_camo_grip2";
			VFG2="hlc_wp_SCARH_STD_SRX_camo_grip3";
			default="hlc_wp_SCARH_STD_SRX_camo_TacReload";
		};
	};
	class hlc_wp_SCARH_STD_SRX_camo_grip: hlc_wp_SCARH_STD_SRX_camo
	{
		scopeArsenal=0;
		dexterity=1.4763082;
		aimTransitionSpeed=1.0334158;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handpose_VFG.rtm"
		};
		class nia_magSwitch
		{
			hlc_10Rnd_762x51_B_SCARH_tan="hlc_wp_SCARH_STD_SRX_10Rnd_camo_grip";
			hlc_10Rnd_762x51_mk316_SCARH_tan="hlc_wp_SCARH_STD_SRX_10Rnd_camo_grip";
			hlc_10Rnd_762x51_Barrier_SCARH_tan="hlc_wp_SCARH_STD_SRX_10Rnd_camo_grip";
			hlc_10Rnd_762x51_t_SCARH_tan="hlc_wp_SCARH_STD_SRX_10Rnd_camo_grip";
			hlc_10Rnd_762x51_TDim_SCARH_tan="hlc_wp_SCARH_STD_SRX_10Rnd_camo_grip";
			hlc_10Rnd_762x51_S_SCARH_tan="hlc_wp_SCARH_STD_SRX_10Rnd_camo_grip";
			hlc_10Rnd_762x51_B_SCARH="hlc_wp_SCARH_STD_SRX_10Rnd_camo_grip";
			hlc_10Rnd_762x51_mk316_SCARH="hlc_wp_SCARH_STD_SRX_10Rnd_camo_grip";
			hlc_10Rnd_762x51_Barrier_SCARH="hlc_wp_SCARH_STD_SRX_10Rnd_camo_grip";
			hlc_10Rnd_762x51_t_SCARH="hlc_wp_SCARH_STD_SRX_10Rnd_camo_grip";
			hlc_10Rnd_762x51_TDim_SCARH="hlc_wp_SCARH_STD_SRX_10Rnd_camo_grip";
			hlc_10Rnd_762x51_S_SCARH="hlc_wp_SCARH_STD_SRX_10Rnd_camo_grip";
			hlc_10Rnd_762x51_B_SCARH_camo="hlc_wp_SCARH_STD_SRX_10Rnd_camo_grip";
			hlc_10Rnd_762x51_mk316_SCARH_camo="hlc_wp_SCARH_STD_SRX_10Rnd_camo_grip";
			hlc_10Rnd_762x51_Barrier_SCARH_camo="hlc_wp_SCARH_STD_SRX_10Rnd_camo_grip";
			hlc_10Rnd_762x51_t_SCARH_camo="hlc_wp_SCARH_STD_SRX_10Rnd_camo_grip";
			hlc_10Rnd_762x51_TDim_SCARH_camo="hlc_wp_SCARH_STD_SRX_10Rnd_camo_grip";
			hlc_10Rnd_762x51_S_SCARH_camo="hlc_wp_SCARH_STD_SRX_10Rnd_camo_grip";
			default="hlc_wp_SCARH_STD_SRX_camo_grip";
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
			class hlc_wp_SCARH_STD_SRX_camo_grip
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SCARH_STD_SRX_camo_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARH_STD_SRX_camo_grip2: hlc_wp_SCARH_STD_SRX_camo
	{
		scopeArsenal=0;
		inertia="(0.384*0.85)";
		dexterity=1.4763082;
		aimTransitionSpeed=1.0334158;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handpose_AFG.rtm"
		};
		class nia_magSwitch
		{
			hlc_10Rnd_762x51_B_SCARH_tan="hlc_wp_SCARH_STD_SRX_10Rnd_camo_grip2";
			hlc_10Rnd_762x51_mk316_SCARH_tan="hlc_wp_SCARH_STD_SRX_10Rnd_camo_grip2";
			hlc_10Rnd_762x51_Barrier_SCARH_tan="hlc_wp_SCARH_STD_SRX_10Rnd_camo_grip2";
			hlc_10Rnd_762x51_t_SCARH_tan="hlc_wp_SCARH_STD_SRX_10Rnd_camo_grip2";
			hlc_10Rnd_762x51_TDim_SCARH_tan="hlc_wp_SCARH_STD_SRX_10Rnd_camo_grip2";
			hlc_10Rnd_762x51_S_SCARH_tan="hlc_wp_SCARH_STD_SRX_10Rnd_camo_grip2";
			hlc_10Rnd_762x51_B_SCARH="hlc_wp_SCARH_STD_SRX_10Rnd_camo_grip2";
			hlc_10Rnd_762x51_mk316_SCARH="hlc_wp_SCARH_STD_SRX_10Rnd_camo_grip2";
			hlc_10Rnd_762x51_Barrier_SCARH="hlc_wp_SCARH_STD_SRX_10Rnd_camo_grip2";
			hlc_10Rnd_762x51_t_SCARH="hlc_wp_SCARH_STD_SRX_10Rnd_camo_grip2";
			hlc_10Rnd_762x51_TDim_SCARH="hlc_wp_SCARH_STD_SRX_10Rnd_camo_grip2";
			hlc_10Rnd_762x51_S_SCARH="hlc_wp_SCARH_STD_SRX_10Rnd_camo_grip2";
			hlc_10Rnd_762x51_B_SCARH_camo="hlc_wp_SCARH_STD_SRX_10Rnd_camo_grip2";
			hlc_10Rnd_762x51_mk316_SCARH_camo="hlc_wp_SCARH_STD_SRX_10Rnd_camo_grip2";
			hlc_10Rnd_762x51_Barrier_SCARH_camo="hlc_wp_SCARH_STD_SRX_10Rnd_camo_grip2";
			hlc_10Rnd_762x51_t_SCARH_camo="hlc_wp_SCARH_STD_SRX_10Rnd_camo_grip2";
			hlc_10Rnd_762x51_TDim_SCARH_camo="hlc_wp_SCARH_STD_SRX_10Rnd_camo_grip2";
			hlc_10Rnd_762x51_S_SCARH_camo="hlc_wp_SCARH_STD_SRX_10Rnd_camo_grip2";
			default="hlc_wp_SCARH_STD_SRX_camo_grip2";
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
			class hlc_wp_SCARH_STD_SRX_camo_grip2
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SCARH_STD_SRX_camo_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARH_STD_SRX_camo_grip3: hlc_wp_SCARH_STD_SRX_camo
	{
		scopeArsenal=0;
		dexterity=1.4763082;
		aimTransitionSpeed=1.0334158;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handpose_VFG.rtm"
		};
		class nia_magSwitch
		{
			hlc_10Rnd_762x51_B_SCARH_tan="hlc_wp_SCARH_STD_SRX_10Rnd_camo_grip3";
			hlc_10Rnd_762x51_mk316_SCARH_tan="hlc_wp_SCARH_STD_SRX_10Rnd_camo_grip3";
			hlc_10Rnd_762x51_Barrier_SCARH_tan="hlc_wp_SCARH_STD_SRX_10Rnd_camo_grip3";
			hlc_10Rnd_762x51_t_SCARH_tan="hlc_wp_SCARH_STD_SRX_10Rnd_camo_grip3";
			hlc_10Rnd_762x51_TDim_SCARH_tan="hlc_wp_SCARH_STD_SRX_10Rnd_camo_grip3";
			hlc_10Rnd_762x51_S_SCARH_tan="hlc_wp_SCARH_STD_SRX_10Rnd_camo_grip3";
			hlc_10Rnd_762x51_B_SCARH="hlc_wp_SCARH_STD_SRX_10Rnd_camo_grip3";
			hlc_10Rnd_762x51_mk316_SCARH="hlc_wp_SCARH_STD_SRX_10Rnd_camo_grip3";
			hlc_10Rnd_762x51_Barrier_SCARH="hlc_wp_SCARH_STD_SRX_10Rnd_camo_grip3";
			hlc_10Rnd_762x51_t_SCARH="hlc_wp_SCARH_STD_SRX_10Rnd_camo_grip3";
			hlc_10Rnd_762x51_TDim_SCARH="hlc_wp_SCARH_STD_SRX_10Rnd_camo_grip3";
			hlc_10Rnd_762x51_S_SCARH="hlc_wp_SCARH_STD_SRX_10Rnd_camo_grip3";
			hlc_10Rnd_762x51_B_SCARH_camo="hlc_wp_SCARH_STD_SRX_10Rnd_camo_grip3";
			hlc_10Rnd_762x51_mk316_SCARH_camo="hlc_wp_SCARH_STD_SRX_10Rnd_camo_grip3";
			hlc_10Rnd_762x51_Barrier_SCARH_camo="hlc_wp_SCARH_STD_SRX_10Rnd_camo_grip3";
			hlc_10Rnd_762x51_t_SCARH_camo="hlc_wp_SCARH_STD_SRX_10Rnd_camo_grip3";
			hlc_10Rnd_762x51_TDim_SCARH_camo="hlc_wp_SCARH_STD_SRX_10Rnd_camo_grip3";
			hlc_10Rnd_762x51_S_SCARH_camo="hlc_wp_SCARH_STD_SRX_10Rnd_camo_grip3";
			default="hlc_wp_SCARH_STD_SRX_camo_grip3";
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
			class hlc_wp_SCARH_STD_SRX_camo_grip3
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SCARH_STD_SRX_camo_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARH_STD_SRX_10rnd_camo: hlc_wp_SCARH_STD_SRX_camo
	{
		scopeArsenal=0;
		reloadAction="NIA_GestureReload_Mk17_10rnd";
		baseweapon="hlc_wp_SCARH_STD_SRX_10rnd_camo";
		class nia_gripSwitch
		{
			VFG="hlc_wp_SCARH_STD_SRX_10rnd_camo_grip";
			AFG="hlc_wp_SCARH_STD_SRX_10rnd_camo_grip2";
			VFG2="hlc_wp_SCARH_STD_SRX_10rnd_camo_grip3";
			default="hlc_wp_SCARH_STD_SRX_10rnd_camo";
		};
		rhs_grip1_change="hlc_wp_SCARH_STD_SRX_10rnd_camo_grip";
		rhs_grip2_change="hlc_wp_SCARH_STD_SRX_10rnd_camo_grip2";
		rhs_grip3_change="hlc_wp_SCARH_STD_SRX_10rnd_camo_grip3";
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
			class hlc_wp_SCARH_STD_SRX_camo_10rnd
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SCARH_STD_SRX_camo_10rnd_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARH_STD_SRX_camo_10rnd_TacReload: hlc_wp_SCARH_STD_SRX_10rnd_camo
	{
		magazineReloadSwitchPhase="(40 / 96)";
		scopeArsenal=0;
		reloadMagazineSound[]=
		{
			"\nia_wp_SCAR\snd\mk17_reload_Partial.ogg",
			0.85000002,
			1,
			25
		};
		reloadAction="NIA_GestureReload_Mk17_10rnd_Tactical";
		model="nia_wp_SCAR\mesh\Rifle\SCARH_STD_SRX_TacReload.p3d";
		rhs_grip1_change="hlc_wp_SCARH_STD_SRX_camo_10rnd_grip";
		rhs_grip2_change="hlc_wp_SCARH_STD_SRX_camo_10rnd_grip2";
		rhs_grip3_change="hlc_wp_SCARH_STD_SRX_camo_10rnd_grip3";
		class nia_gripSwitch
		{
			VFG="hlc_wp_SCARH_STD_SRX_camo_10rnd_grip";
			AFG="hlc_wp_SCARH_STD_SRX_camo_10rnd_grip2";
			VFG2="hlc_wp_SCARH_STD_SRX_camo_10rnd_grip3";
			default="hlc_wp_SCARH_STD_SRX_camo_10rnd_TacReload";
		};
	};
	class hlc_wp_SCARH_STD_SRX_10rnd_camo_grip: hlc_wp_SCARH_STD_SRX_10rnd_camo
	{
		scopeArsenal=0;
		dexterity=1.4763082;
		aimTransitionSpeed=1.0334158;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handpose_VFG.rtm"
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
			class hlc_wp_SCARH_STD_SRX_10rnd_camo_grip
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SCARH_STD_SRX_camo_10rnd_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARH_STD_SRX_10rnd_camo_grip2: hlc_wp_SCARH_STD_SRX_10rnd_camo
	{
		scopeArsenal=0;
		inertia="(0.384*0.85)";
		dexterity=1.4763082;
		aimTransitionSpeed=1.0334158;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handpose_AFG.rtm"
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
			class hlc_wp_SCARH_STD_SRX_10rnd_camo_grip2
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SCARH_STD_SRX_camo_10rnd_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARH_STD_SRX_10rnd_camo_grip3: hlc_wp_SCARH_STD_SRX_10rnd_camo
	{
		scopeArsenal=0;
		dexterity=1.4763082;
		aimTransitionSpeed=1.0334158;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handpose_VFG.rtm"
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
			class hlc_wp_SCARH_STD_SRX_10rnd_camo_grip3
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SCARH_STD_SRX_camo_10rnd_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARH_STD_SRX_Blk: hlc_wp_SCARH_STD_SRX
	{
		author="Toadie";
		dlc="Niarms_SCAR";
		displayName="$STR_NIA_rifle_SCARH_STD_SRX_blk";
		scope=2;
		baseWeapon="hlc_wp_SCARH_STD_SRX_Blk";
		picture="\nia_wp_SCAR\tex\ui\hlc_wp_SCARH_STD_SRX_Blk_ca";
		hiddenSelectionsTextures[]=
		{
			"nia_wp_SCAR\tex\toadie_SCAR\scar_common_co.paa",
			"nia_wp_SCAR\tex\toadie_SCAR\scar_lower_co.paa",
			"nia_wp_SCAR\tex\toadie_SCAR\stock_co.paa",
			"nia_wp_SCAR\tex\toadie_SCAR\upper_scarh_co.paa",
			"nia_wp_SCAR\tex\map3-black_co.paa",
			"nia_wp_SCAR\tex\mapyesblack_co.paa",
			"nia_wp_SCAR\tex\toadie_SCAR\acc_extensions_co.paa"
		};
		class nia_magSwitch
		{
			hlc_10Rnd_762x51_B_SCARH_tan="hlc_wp_SCARH_STD_SRX_10rnd_Blk";
			hlc_10Rnd_762x51_mk316_SCARH_tan="hlc_wp_SCARH_STD_SRX_10rnd_Blk";
			hlc_10Rnd_762x51_Barrier_SCARH_tan="hlc_wp_SCARH_STD_SRX_10rnd_Blk";
			hlc_10Rnd_762x51_t_SCARH_tan="hlc_wp_SCARH_STD_SRX_10rnd_Blk";
			hlc_10Rnd_762x51_TDim_SCARH_tan="hlc_wp_SCARH_STD_SRX_10rnd_Blk";
			hlc_10Rnd_762x51_S_SCARH_tan="hlc_wp_SCARH_STD_SRX_10rnd_Blk";
			hlc_10Rnd_762x51_B_SCARH="hlc_wp_SCARH_STD_SRX_10rnd_Blk";
			hlc_10Rnd_762x51_mk316_SCARH="hlc_wp_SCARH_STD_SRX_10rnd_Blk";
			hlc_10Rnd_762x51_Barrier_SCARH="hlc_wp_SCARH_STD_SRX_10rnd_Blk";
			hlc_10Rnd_762x51_t_SCARH="hlc_wp_SCARH_STD_SRX_10rnd_Blk";
			hlc_10Rnd_762x51_TDim_SCARH="hlc_wp_SCARH_STD_SRX_10rnd_Blk";
			hlc_10Rnd_762x51_S_SCARH="hlc_wp_SCARH_STD_SRX_10rnd_Blk";
			hlc_10Rnd_762x51_B_SCARH_camo="hlc_wp_SCARH_STD_SRX_10rnd_Blk";
			hlc_10Rnd_762x51_mk316_SCARH_camo="hlc_wp_SCARH_STD_SRX_10rnd_Blk";
			hlc_10Rnd_762x51_Barrier_SCARH_camo="hlc_wp_SCARH_STD_SRX_10rnd_Blk";
			hlc_10Rnd_762x51_t_SCARH_camo="hlc_wp_SCARH_STD_SRX_10rnd_Blk";
			hlc_10Rnd_762x51_TDim_SCARH_camo="hlc_wp_SCARH_STD_SRX_10rnd_Blk";
			hlc_10Rnd_762x51_S_SCARH_camo="hlc_wp_SCARH_STD_SRX_10rnd_Blk";
			default="hlc_wp_SCARH_STD_SRX_Blk";
		};
		class nia_gripSwitch
		{
			VFG="hlc_wp_SCARH_STD_SRX_Blk_grip";
			AFG="hlc_wp_SCARH_STD_SRX_Blk_grip2";
			VFG2="hlc_wp_SCARH_STD_SRX_Blk_grip3";
			default="hlc_wp_SCARH_STD_SRX_Blk";
		};
		rhs_grip1_change="hlc_wp_SCARH_STD_SRX_Blk_grip";
		rhs_grip2_change="hlc_wp_SCARH_STD_SRX_Blk_grip2";
		rhs_grip3_change="hlc_wp_SCARH_STD_SRX_Blk_grip3";
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
			class hlc_wp_SCARH_STD_SRX_Blk
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SCARH_STD_SRX_Blk_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARH_STD_SRX_Blk_TacReload: hlc_wp_SCARH_STD_SRX_Blk
	{
		magazineReloadSwitchPhase="(40 / 96)";
		scopeArsenal=0;
		reloadMagazineSound[]=
		{
			"\nia_wp_SCAR\snd\mk17_reload_Partial.ogg",
			0.85000002,
			1,
			25
		};
		reloadAction="NIA_GestureReload_Mk17_Tactical";
		model="nia_wp_SCAR\mesh\Rifle\SCARH_STD_SRX_TacReload.p3d";
		rhs_grip1_change="hlc_wp_SCARH_STD_SRX_Blk_grip";
		rhs_grip2_change="hlc_wp_SCARH_STD_SRX_Blk_grip2";
		rhs_grip3_change="hlc_wp_SCARH_STD_SRX_Blk_grip3";
		class nia_gripSwitch
		{
			VFG="hlc_wp_SCARH_STD_SRX_Blk_grip";
			AFG="hlc_wp_SCARH_STD_SRX_Blk_grip2";
			VFG2="hlc_wp_SCARH_STD_SRX_Blk_grip3";
			default="hlc_wp_SCARH_STD_SRX_Blk_TacReload";
		};
	};
	class hlc_wp_SCARH_STD_SRX_Blk_grip: hlc_wp_SCARH_STD_SRX_Blk
	{
		scopeArsenal=0;
		dexterity=1.4763082;
		aimTransitionSpeed=1.0334158;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handpose_VFG.rtm"
		};
		class nia_magSwitch
		{
			hlc_10Rnd_762x51_B_SCARH_tan="hlc_wp_SCARH_STD_SRX_10Rnd_Blk_grip";
			hlc_10Rnd_762x51_mk316_SCARH_tan="hlc_wp_SCARH_STD_SRX_10Rnd_Blk_grip";
			hlc_10Rnd_762x51_Barrier_SCARH_tan="hlc_wp_SCARH_STD_SRX_10Rnd_Blk_grip";
			hlc_10Rnd_762x51_t_SCARH_tan="hlc_wp_SCARH_STD_SRX_10Rnd_Blk_grip";
			hlc_10Rnd_762x51_TDim_SCARH_tan="hlc_wp_SCARH_STD_SRX_10Rnd_Blk_grip";
			hlc_10Rnd_762x51_S_SCARH_tan="hlc_wp_SCARH_STD_SRX_10Rnd_Blk_grip";
			hlc_10Rnd_762x51_B_SCARH="hlc_wp_SCARH_STD_SRX_10Rnd_Blk_grip";
			hlc_10Rnd_762x51_mk316_SCARH="hlc_wp_SCARH_STD_SRX_10Rnd_Blk_grip";
			hlc_10Rnd_762x51_Barrier_SCARH="hlc_wp_SCARH_STD_SRX_10Rnd_Blk_grip";
			hlc_10Rnd_762x51_t_SCARH="hlc_wp_SCARH_STD_SRX_10Rnd_Blk_grip";
			hlc_10Rnd_762x51_TDim_SCARH="hlc_wp_SCARH_STD_SRX_10Rnd_Blk_grip";
			hlc_10Rnd_762x51_S_SCARH="hlc_wp_SCARH_STD_SRX_10Rnd_Blk_grip";
			hlc_10Rnd_762x51_B_SCARH_camo="hlc_wp_SCARH_STD_SRX_10Rnd_Blk_grip";
			hlc_10Rnd_762x51_mk316_SCARH_camo="hlc_wp_SCARH_STD_SRX_10Rnd_Blk_grip";
			hlc_10Rnd_762x51_Barrier_SCARH_camo="hlc_wp_SCARH_STD_SRX_10Rnd_Blk_grip";
			hlc_10Rnd_762x51_t_SCARH_camo="hlc_wp_SCARH_STD_SRX_10Rnd_Blk_grip";
			hlc_10Rnd_762x51_TDim_SCARH_camo="hlc_wp_SCARH_STD_SRX_10Rnd_Blk_grip";
			hlc_10Rnd_762x51_S_SCARH_camo="hlc_wp_SCARH_STD_SRX_10Rnd_Blk_grip";
			default="hlc_wp_SCARH_STD_SRX_Blk_grip";
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
			class hlc_wp_SCARH_STD_SRX_Blk_grip
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SCARH_STD_SRX_Blk_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARH_STD_SRX_Blk_grip2: hlc_wp_SCARH_STD_SRX_Blk
	{
		scopeArsenal=0;
		inertia="(0.384*0.85)";
		dexterity=1.4763082;
		aimTransitionSpeed=1.0334158;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handpose_AFG.rtm"
		};
		class nia_magSwitch
		{
			hlc_10Rnd_762x51_B_SCARH_tan="hlc_wp_SCARH_STD_SRX_10Rnd_Blk_grip2";
			hlc_10Rnd_762x51_mk316_SCARH_tan="hlc_wp_SCARH_STD_SRX_10Rnd_Blk_grip2";
			hlc_10Rnd_762x51_Barrier_SCARH_tan="hlc_wp_SCARH_STD_SRX_10Rnd_Blk_grip2";
			hlc_10Rnd_762x51_t_SCARH_tan="hlc_wp_SCARH_STD_SRX_10Rnd_Blk_grip2";
			hlc_10Rnd_762x51_TDim_SCARH_tan="hlc_wp_SCARH_STD_SRX_10Rnd_Blk_grip2";
			hlc_10Rnd_762x51_S_SCARH_tan="hlc_wp_SCARH_STD_SRX_10Rnd_Blk_grip2";
			hlc_10Rnd_762x51_B_SCARH="hlc_wp_SCARH_STD_SRX_10Rnd_Blk_grip2";
			hlc_10Rnd_762x51_mk316_SCARH="hlc_wp_SCARH_STD_SRX_10Rnd_Blk_grip2";
			hlc_10Rnd_762x51_Barrier_SCARH="hlc_wp_SCARH_STD_SRX_10Rnd_Blk_grip2";
			hlc_10Rnd_762x51_t_SCARH="hlc_wp_SCARH_STD_SRX_10Rnd_Blk_grip2";
			hlc_10Rnd_762x51_TDim_SCARH="hlc_wp_SCARH_STD_SRX_10Rnd_Blk_grip2";
			hlc_10Rnd_762x51_S_SCARH="hlc_wp_SCARH_STD_SRX_10Rnd_Blk_grip2";
			hlc_10Rnd_762x51_B_SCARH_camo="hlc_wp_SCARH_STD_SRX_10Rnd_Blk_grip2";
			hlc_10Rnd_762x51_mk316_SCARH_camo="hlc_wp_SCARH_STD_SRX_10Rnd_Blk_grip2";
			hlc_10Rnd_762x51_Barrier_SCARH_camo="hlc_wp_SCARH_STD_SRX_10Rnd_Blk_grip2";
			hlc_10Rnd_762x51_t_SCARH_camo="hlc_wp_SCARH_STD_SRX_10Rnd_Blk_grip2";
			hlc_10Rnd_762x51_TDim_SCARH_camo="hlc_wp_SCARH_STD_SRX_10Rnd_Blk_grip2";
			hlc_10Rnd_762x51_S_SCARH_camo="hlc_wp_SCARH_STD_SRX_10Rnd_Blk_grip2";
			default="hlc_wp_SCARH_STD_SRX_Blk_grip2";
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
			class hlc_wp_SCARH_STD_SRX_Blk_grip2
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SCARH_STD_SRX_Blk_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARH_STD_SRX_Blk_grip3: hlc_wp_SCARH_STD_SRX_Blk
	{
		scopeArsenal=0;
		dexterity=1.4763082;
		aimTransitionSpeed=1.0334158;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handpose_VFG.rtm"
		};
		class nia_magSwitch
		{
			hlc_10Rnd_762x51_B_SCARH_tan="hlc_wp_SCARH_STD_SRX_10Rnd_Blk_grip3";
			hlc_10Rnd_762x51_mk316_SCARH_tan="hlc_wp_SCARH_STD_SRX_10Rnd_Blk_grip3";
			hlc_10Rnd_762x51_Barrier_SCARH_tan="hlc_wp_SCARH_STD_SRX_10Rnd_Blk_grip3";
			hlc_10Rnd_762x51_t_SCARH_tan="hlc_wp_SCARH_STD_SRX_10Rnd_Blk_grip3";
			hlc_10Rnd_762x51_TDim_SCARH_tan="hlc_wp_SCARH_STD_SRX_10Rnd_Blk_grip3";
			hlc_10Rnd_762x51_S_SCARH_tan="hlc_wp_SCARH_STD_SRX_10Rnd_Blk_grip3";
			hlc_10Rnd_762x51_B_SCARH="hlc_wp_SCARH_STD_SRX_10Rnd_Blk_grip3";
			hlc_10Rnd_762x51_mk316_SCARH="hlc_wp_SCARH_STD_SRX_10Rnd_Blk_grip3";
			hlc_10Rnd_762x51_Barrier_SCARH="hlc_wp_SCARH_STD_SRX_10Rnd_Blk_grip3";
			hlc_10Rnd_762x51_t_SCARH="hlc_wp_SCARH_STD_SRX_10Rnd_Blk_grip3";
			hlc_10Rnd_762x51_TDim_SCARH="hlc_wp_SCARH_STD_SRX_10Rnd_Blk_grip3";
			hlc_10Rnd_762x51_S_SCARH="hlc_wp_SCARH_STD_SRX_10Rnd_Blk_grip3";
			hlc_10Rnd_762x51_B_SCARH_camo="hlc_wp_SCARH_STD_SRX_10Rnd_Blk_grip3";
			hlc_10Rnd_762x51_mk316_SCARH_camo="hlc_wp_SCARH_STD_SRX_10Rnd_Blk_grip3";
			hlc_10Rnd_762x51_Barrier_SCARH_camo="hlc_wp_SCARH_STD_SRX_10Rnd_Blk_grip3";
			hlc_10Rnd_762x51_t_SCARH_camo="hlc_wp_SCARH_STD_SRX_10Rnd_Blk_grip3";
			hlc_10Rnd_762x51_TDim_SCARH_camo="hlc_wp_SCARH_STD_SRX_10Rnd_Blk_grip3";
			hlc_10Rnd_762x51_S_SCARH_camo="hlc_wp_SCARH_STD_SRX_10Rnd_Blk_grip3";
			default="hlc_wp_SCARH_STD_SRX_Blk_grip3";
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
			class hlc_wp_SCARH_STD_SRX_Blk_grip3
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SCARH_STD_SRX_Blk_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARH_STD_SRX_10rnd_Blk: hlc_wp_SCARH_STD_SRX_Blk
	{
		scopeArsenal=0;
		reloadAction="NIA_GestureReload_Mk17_10rnd";
		baseweapon="hlc_wp_SCARH_STD_SRX_10rnd_Blk";
		class nia_gripSwitch
		{
			VFG="hlc_wp_SCARH_STD_SRX_10rnd_Blk_grip";
			AFG="hlc_wp_SCARH_STD_SRX_10rnd_Blk_grip2";
			VFG2="hlc_wp_SCARH_STD_SRX_10rnd_Blk_grip3";
			default="hlc_wp_SCARH_STD_SRX_10rnd_Blk";
		};
		rhs_grip1_change="hlc_wp_SCARH_STD_SRX_10rnd_Blk_grip";
		rhs_grip2_change="hlc_wp_SCARH_STD_SRX_10rnd_Blk_grip2";
		rhs_grip3_change="hlc_wp_SCARH_STD_SRX_10rnd_Blk_grip3";
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
			class hlc_wp_SCARH_STD_SRX_Blk_10rnd
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SCARH_STD_SRX_Blk_10rnd_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARH_STD_SRX_Blk_10rnd_TacReload: hlc_wp_SCARH_STD_SRX_10rnd_Blk
	{
		magazineReloadSwitchPhase="(40 / 96)";
		scopeArsenal=0;
		reloadMagazineSound[]=
		{
			"\nia_wp_SCAR\snd\mk17_reload_Partial.ogg",
			0.85000002,
			1,
			25
		};
		reloadAction="NIA_GestureReload_Mk17_10rnd_Tactical";
		model="nia_wp_SCAR\mesh\Rifle\SCARH_STD_SRX_TacReload.p3d";
		rhs_grip1_change="hlc_wp_SCARH_STD_SRX_Blk_10rnd_grip";
		rhs_grip2_change="hlc_wp_SCARH_STD_SRX_Blk_10rnd_grip2";
		rhs_grip3_change="hlc_wp_SCARH_STD_SRX_Blk_10rnd_grip3";
		class nia_gripSwitch
		{
			VFG="hlc_wp_SCARH_STD_SRX_Blk_10rnd_grip";
			AFG="hlc_wp_SCARH_STD_SRX_Blk_10rnd_grip2";
			VFG2="hlc_wp_SCARH_STD_SRX_Blk_10rnd_grip3";
			default="hlc_wp_SCARH_STD_SRX_Blk_10rnd_TacReload";
		};
	};
	class hlc_wp_SCARH_STD_SRX_10rnd_Blk_grip: hlc_wp_SCARH_STD_SRX_10rnd_Blk
	{
		scopeArsenal=0;
		dexterity=1.4763082;
		aimTransitionSpeed=1.0334158;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handpose_VFG.rtm"
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
			class hlc_wp_SCARH_STD_SRX_10rnd_Blk_grip
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SCARH_STD_SRX_Blk_10rnd_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARH_STD_SRX_10rnd_Blk_grip2: hlc_wp_SCARH_STD_SRX_10rnd_Blk
	{
		scopeArsenal=0;
		inertia="(0.384*0.85)";
		dexterity=1.4763082;
		aimTransitionSpeed=1.0334158;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handpose_AFG.rtm"
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
			class hlc_wp_SCARH_STD_SRX_10rnd_Blk_grip2
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SCARH_STD_SRX_Blk_10rnd_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARH_STD_SRX_10rnd_Blk_grip3: hlc_wp_SCARH_STD_SRX_10rnd_Blk
	{
		scopeArsenal=0;
		dexterity=1.4763082;
		aimTransitionSpeed=1.0334158;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handpose_VFG.rtm"
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
			class hlc_wp_SCARH_STD_SRX_10rnd_Blk_grip3
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SCARH_STD_SRX_Blk_10rnd_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_WP_SCARH_CQC: hlc_wp_SCARH_STD
	{
		author="Toadie";
		dlc="Niarms_SCAR";
		displayName="$STR_NIA_rifle_SCARH_CQC";
		descriptionShort="$STR_NIA_scarh_Carbine_DESC";
		scope=2;
		ACE_barrelTwist=304.79999;
		ACE_barrelLength=330;
		initspeed=-0.958;
		baseWeapon="hlc_WP_SCARH_CQC";
		mass=76.082001;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=76.082001;
		};
		inertia=0.34900001;
		dexterity=1.4741908;
		aimTransitionSpeed=1.0319335;
		picture="\nia_wp_SCAR\tex\ui\hlc_WP_SCARH_CQC_ca";
		model="nia_wp_SCAR\mesh\rifle\SCARH_CQC.p3d";
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
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"NIA_SCARMK18_NEW_Shot_SoundSet",
					"NIA_SCARH_tail_SoundSet"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"NIA_SCARH_silencerShot_SoundSet",
					"NIA_SCARH_silencerTail_SoundSet"
				};
			};
			dispersion=0.00059634499;
			reloadtime="(60/600)";
			aiRateOfFire=1;
			aiRateOfFireDistance=350;
			aiRateOfFireDispersion=2;
			minRange=20;
			minRangeProbab=0.69999999;
			midRange=150;
			midRangeProbab=0.5;
			maxRange=500;
			maxRangeProbab=0.1;
		};
		class Burst: Mode_Burst
		{
			sounds[]=
			{
				"StandardSound",
				"SilencedSound"
			};
			class BaseSoundModeType
			{
				weaponSoundEffect="DefaultRifle";
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"NIA_SCARMK18_NEW_Shot_SoundSet",
					"NIA_SCARH_tail_SoundSet"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"NIA_SCARH_silencerShot_SoundSet",
					"NIA_SCARH_silencerTail_SoundSet"
				};
			};
			dispersion=0.000741795;
			reloadtime="(60/600)";
			aiRateOfFire=1;
			aiRateOfFireDistance=100;
			aiRateOfFireDispersion=1;
			minRange=0;
			minRangeProbab=0.2;
			midRange=20;
			midRangeProbab=0.80000001;
			maxRange=40;
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
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"NIA_SCARMK18_NEW_Shot_SoundSet",
					"NIA_SCARH_tail_SoundSet"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"NIA_SCARH_silencerShot_SoundSet",
					"NIA_SCARH_silencerTail_SoundSet"
				};
			};
			dispersion=0.00074470398;
			reloadtime="(60/600)";
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
		class nia_magSwitch
		{
			hlc_10Rnd_762x51_B_SCARH_tan="hlc_wp_SCARH_CQC_10Rnd";
			hlc_10Rnd_762x51_mk316_SCARH_tan="hlc_wp_SCARH_CQC_10Rnd";
			hlc_10Rnd_762x51_Barrier_SCARH_tan="hlc_wp_SCARH_CQC_10Rnd";
			hlc_10Rnd_762x51_t_SCARH_tan="hlc_wp_SCARH_CQC_10Rnd";
			hlc_10Rnd_762x51_TDim_SCARH_tan="hlc_wp_SCARH_CQC_10Rnd";
			hlc_10Rnd_762x51_S_SCARH_tan="hlc_wp_SCARH_CQC_10Rnd";
			hlc_10Rnd_762x51_B_SCARH="hlc_wp_SCARH_CQC_10Rnd";
			hlc_10Rnd_762x51_mk316_SCARH="hlc_wp_SCARH_CQC_10Rnd";
			hlc_10Rnd_762x51_Barrier_SCARH="hlc_wp_SCARH_CQC_10Rnd";
			hlc_10Rnd_762x51_t_SCARH="hlc_wp_SCARH_CQC_10Rnd";
			hlc_10Rnd_762x51_TDim_SCARH="hlc_wp_SCARH_CQC_10Rnd";
			hlc_10Rnd_762x51_S_SCARH="hlc_wp_SCARH_CQC_10Rnd";
			hlc_10Rnd_762x51_B_SCARH_camo="hlc_wp_SCARH_CQC_10Rnd";
			hlc_10Rnd_762x51_mk316_SCARH_camo="hlc_wp_SCARH_CQC_10Rnd";
			hlc_10Rnd_762x51_Barrier_SCARH_camo="hlc_wp_SCARH_CQC_10Rnd";
			hlc_10Rnd_762x51_t_SCARH_camo="hlc_wp_SCARH_CQC_10Rnd";
			hlc_10Rnd_762x51_TDim_SCARH_camo="hlc_wp_SCARH_CQC_10Rnd";
			hlc_10Rnd_762x51_S_SCARH_camo="hlc_wp_SCARH_CQC_10Rnd";
			default="hlc_wp_SCARH_CQC";
		};
		class nia_gripSwitch
		{
			VFG="hlc_WP_SCARH_CQC_grip";
			AFG="hlc_WP_SCARH_CQC_grip2";
			VFG2="hlc_WP_SCARH_CQC_grip3";
			default="hlc_WP_SCARH_CQC";
		};
		rhs_grip1_change="hlc_WP_SCARH_CQC_grip";
		rhs_grip2_change="hlc_WP_SCARH_CQC_grip2";
		rhs_grip3_change="hlc_WP_SCARH_CQC_grip3";
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
			class hlc_WP_SCARH_CQC
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SCARH_CQC_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARH_CQC_TacReload: hlc_WP_SCARH_CQC
	{
		magazineReloadSwitchPhase="(40 / 96)";
		scopeArsenal=0;
		reloadMagazineSound[]=
		{
			"\nia_wp_SCAR\snd\mk17_reload_Partial.ogg",
			0.85000002,
			1,
			25
		};
		reloadAction="NIA_GestureReload_Mk17_Tactical";
		model="nia_wp_SCAR\mesh\Rifle\SCARH_CQC_TacReload.p3d";
		rhs_grip1_change="hlc_wp_SCARH_CQC_grip";
		rhs_grip2_change="hlc_wp_SCARH_CQC_grip2";
		rhs_grip3_change="hlc_wp_SCARH_CQC_grip3";
		class nia_gripSwitch
		{
			VFG="hlc_wp_SCARH_CQC_grip";
			AFG="hlc_wp_SCARH_CQC_grip2";
			VFG2="hlc_wp_SCARH_CQC_grip3";
			default="hlc_wp_SCARH_CQC_TacReload";
		};
	};
	class hlc_wp_SCARH_CQC_grip: hlc_WP_SCARH_CQC
	{
		scopeArsenal=0;
		dexterity=1.5741909;
		aimTransitionSpeed=1.1019336;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handpose_VFG.rtm"
		};
		class nia_magSwitch
		{
			hlc_10Rnd_762x51_B_SCARH_tan="hlc_wp_SCARH_CQC_10Rnd_grip";
			hlc_10Rnd_762x51_mk316_SCARH_tan="hlc_wp_SCARH_CQC_10Rnd_grip";
			hlc_10Rnd_762x51_Barrier_SCARH_tan="hlc_wp_SCARH_CQC_10Rnd_grip";
			hlc_10Rnd_762x51_t_SCARH_tan="hlc_wp_SCARH_CQC_10Rnd_grip";
			hlc_10Rnd_762x51_TDim_SCARH_tan="hlc_wp_SCARH_CQC_10Rnd_grip";
			hlc_10Rnd_762x51_S_SCARH_tan="hlc_wp_SCARH_CQC_10Rnd_grip";
			hlc_10Rnd_762x51_B_SCARH="hlc_wp_SCARH_CQC_10Rnd_grip";
			hlc_10Rnd_762x51_mk316_SCARH="hlc_wp_SCARH_CQC_10Rnd_grip";
			hlc_10Rnd_762x51_Barrier_SCARH="hlc_wp_SCARH_CQC_10Rnd_grip";
			hlc_10Rnd_762x51_t_SCARH="hlc_wp_SCARH_CQC_10Rnd_grip";
			hlc_10Rnd_762x51_TDim_SCARH="hlc_wp_SCARH_CQC_10Rnd_grip";
			hlc_10Rnd_762x51_S_SCARH="hlc_wp_SCARH_CQC_10Rnd_grip";
			hlc_10Rnd_762x51_B_SCARH_camo="hlc_wp_SCARH_CQC_10Rnd_grip";
			hlc_10Rnd_762x51_mk316_SCARH_camo="hlc_wp_SCARH_CQC_10Rnd_grip";
			hlc_10Rnd_762x51_Barrier_SCARH_camo="hlc_wp_SCARH_CQC_10Rnd_grip";
			hlc_10Rnd_762x51_t_SCARH_camo="hlc_wp_SCARH_CQC_10Rnd_grip";
			hlc_10Rnd_762x51_TDim_SCARH_camo="hlc_wp_SCARH_CQC_10Rnd_grip";
			hlc_10Rnd_762x51_S_SCARH_camo="hlc_wp_SCARH_CQC_10Rnd_grip";
			default="hlc_wp_SCARH_CQC_grip";
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
			class hlc_WP_SCARH_CQC_grip
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SCARH_CQC_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARH_CQC_grip2: hlc_WP_SCARH_CQC
	{
		scopeArsenal=0;
		inertia="(0.349*0.85)";
		dexterity=1.5741909;
		aimTransitionSpeed=1.1019336;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handpose_AFG.rtm"
		};
		class nia_magSwitch
		{
			hlc_10Rnd_762x51_B_SCARH_tan="hlc_wp_SCARH_CQC_10Rnd_grip2";
			hlc_10Rnd_762x51_mk316_SCARH_tan="hlc_wp_SCARH_CQC_10Rnd_grip2";
			hlc_10Rnd_762x51_Barrier_SCARH_tan="hlc_wp_SCARH_CQC_10Rnd_grip2";
			hlc_10Rnd_762x51_t_SCARH_tan="hlc_wp_SCARH_CQC_10Rnd_grip2";
			hlc_10Rnd_762x51_TDim_SCARH_tan="hlc_wp_SCARH_CQC_10Rnd_grip2";
			hlc_10Rnd_762x51_S_SCARH_tan="hlc_wp_SCARH_CQC_10Rnd_grip2";
			hlc_10Rnd_762x51_B_SCARH="hlc_wp_SCARH_CQC_10Rnd_grip2";
			hlc_10Rnd_762x51_mk316_SCARH="hlc_wp_SCARH_CQC_10Rnd_grip2";
			hlc_10Rnd_762x51_Barrier_SCARH="hlc_wp_SCARH_CQC_10Rnd_grip2";
			hlc_10Rnd_762x51_t_SCARH="hlc_wp_SCARH_CQC_10Rnd_grip2";
			hlc_10Rnd_762x51_TDim_SCARH="hlc_wp_SCARH_CQC_10Rnd_grip2";
			hlc_10Rnd_762x51_S_SCARH="hlc_wp_SCARH_CQC_10Rnd_grip2";
			hlc_10Rnd_762x51_B_SCARH_camo="hlc_wp_SCARH_CQC_10Rnd_grip2";
			hlc_10Rnd_762x51_mk316_SCARH_camo="hlc_wp_SCARH_CQC_10Rnd_grip2";
			hlc_10Rnd_762x51_Barrier_SCARH_camo="hlc_wp_SCARH_CQC_10Rnd_grip2";
			hlc_10Rnd_762x51_t_SCARH_camo="hlc_wp_SCARH_CQC_10Rnd_grip2";
			hlc_10Rnd_762x51_TDim_SCARH_camo="hlc_wp_SCARH_CQC_10Rnd_grip2";
			hlc_10Rnd_762x51_S_SCARH_camo="hlc_wp_SCARH_CQC_10Rnd_grip2";
			default="hlc_wp_SCARH_CQC_grip2";
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
			class hlc_WP_SCARH_CQC_grip2
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SCARH_CQC_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARH_CQC_grip3: hlc_WP_SCARH_CQC
	{
		scopeArsenal=0;
		dexterity=1.5741909;
		aimTransitionSpeed=1.1019336;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handpose_VFG.rtm"
		};
		class nia_magSwitch
		{
			hlc_10Rnd_762x51_B_SCARH_tan="hlc_wp_SCARH_CQC_10Rnd_grip3";
			hlc_10Rnd_762x51_mk316_SCARH_tan="hlc_wp_SCARH_CQC_10Rnd_grip3";
			hlc_10Rnd_762x51_Barrier_SCARH_tan="hlc_wp_SCARH_CQC_10Rnd_grip3";
			hlc_10Rnd_762x51_t_SCARH_tan="hlc_wp_SCARH_CQC_10Rnd_grip3";
			hlc_10Rnd_762x51_TDim_SCARH_tan="hlc_wp_SCARH_CQC_10Rnd_grip3";
			hlc_10Rnd_762x51_S_SCARH_tan="hlc_wp_SCARH_CQC_10Rnd_grip3";
			hlc_10Rnd_762x51_B_SCARH="hlc_wp_SCARH_CQC_10Rnd_grip3";
			hlc_10Rnd_762x51_mk316_SCARH="hlc_wp_SCARH_CQC_10Rnd_grip3";
			hlc_10Rnd_762x51_Barrier_SCARH="hlc_wp_SCARH_CQC_10Rnd_grip3";
			hlc_10Rnd_762x51_t_SCARH="hlc_wp_SCARH_CQC_10Rnd_grip3";
			hlc_10Rnd_762x51_TDim_SCARH="hlc_wp_SCARH_CQC_10Rnd_grip3";
			hlc_10Rnd_762x51_S_SCARH="hlc_wp_SCARH_CQC_10Rnd_grip3";
			hlc_10Rnd_762x51_B_SCARH_camo="hlc_wp_SCARH_CQC_10Rnd_grip3";
			hlc_10Rnd_762x51_mk316_SCARH_camo="hlc_wp_SCARH_CQC_10Rnd_grip3";
			hlc_10Rnd_762x51_Barrier_SCARH_camo="hlc_wp_SCARH_CQC_10Rnd_grip3";
			hlc_10Rnd_762x51_t_SCARH_camo="hlc_wp_SCARH_CQC_10Rnd_grip3";
			hlc_10Rnd_762x51_TDim_SCARH_camo="hlc_wp_SCARH_CQC_10Rnd_grip3";
			hlc_10Rnd_762x51_S_SCARH_camo="hlc_wp_SCARH_CQC_10Rnd_grip3";
			default="hlc_wp_SCARH_CQC_grip3";
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
			class hlc_WP_SCARH_CQC_grip3
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SCARH_CQC_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARH_CQC_10rnd: hlc_WP_SCARH_CQC
	{
		scopeArsenal=0;
		reloadAction="NIA_GestureReload_Mk17_10rnd";
		baseweapon="hlc_wp_SCARH_CQC_10rnd";
		class nia_gripSwitch
		{
			VFG="hlc_wp_SCARH_CQC_10rnd_grip";
			AFG="hlc_wp_SCARH_CQC_10rnd_grip2";
			VFG2="hlc_wp_SCARH_CQC_10rnd_grip3";
			default="hlc_wp_SCARH_CQC_10rnd";
		};
		rhs_grip1_change="hlc_wp_SCARH_CQC_10rnd_grip";
		rhs_grip2_change="hlc_wp_SCARH_CQC_10rnd_grip2";
		rhs_grip3_change="hlc_wp_SCARH_CQC_10rnd";
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
			class hlc_wp_SCARH_CQC_10rnd
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SCARH_CQC_10rnd_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARH_CQC_10rnd_TacReload: hlc_wp_SCARH_CQC_10rnd
	{
		magazineReloadSwitchPhase="(40 / 96)";
		scopeArsenal=0;
		reloadMagazineSound[]=
		{
			"\nia_wp_SCAR\snd\mk17_reload_Partial.ogg",
			0.85000002,
			1,
			25
		};
		reloadAction="NIA_GestureReload_Mk17_10rnd_Tactical";
		model="nia_wp_SCAR\mesh\Rifle\SCARH_CQC_TacReload.p3d";
		rhs_grip1_change="hlc_wp_SCARH_CQC_10rnd_grip";
		rhs_grip2_change="hlc_wp_SCARH_CQC_10rnd_grip2";
		rhs_grip3_change="hlc_wp_SCARH_CQC_10rnd_grip3";
		class nia_gripSwitch
		{
			VFG="hlc_wp_SCARH_CQC_10rnd_grip";
			AFG="hlc_wp_SCARH_CQC_10rnd_grip2";
			VFG2="hlc_wp_SCARH_CQC_10rnd_grip3";
			default="hlc_wp_SCARH_CQC_10rnd_TacReload";
		};
	};
	class hlc_wp_SCARH_CQC_10rnd_grip: hlc_wp_SCARH_CQC_10rnd
	{
		scopeArsenal=0;
		dexterity=1.5741909;
		aimTransitionSpeed=1.1019336;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handpose_VFG.rtm"
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
			class hlc_wp_SCARH_CQC_10rnd_grip
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SCARH_CQC_10rnd_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARH_CQC_10rnd_grip2: hlc_wp_SCARH_CQC_10rnd
	{
		scopeArsenal=0;
		inertia="(0.349*0.85)";
		dexterity=1.5741909;
		aimTransitionSpeed=1.1019336;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handpose_AFG.rtm"
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
			class hlc_wp_SCARH_CQC_10rnd_grip2
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SCARH_CQC_10rnd_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARH_CQC_10rnd_grip3: hlc_wp_SCARH_CQC_10rnd
	{
		scopeArsenal=0;
		dexterity=1.5741909;
		aimTransitionSpeed=1.1019336;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handpose_VFG.rtm"
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
			class hlc_wp_SCARH_CQC_10rnd_grip3
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SCARH_CQC_10rnd_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARH_CQC_Blk: hlc_WP_SCARH_CQC
	{
		author="Toadie";
		dlc="Niarms_SCAR";
		displayName="$STR_NIA_rifle_SCARH_CQC_blk";
		scope=2;
		baseWeapon="hlc_wp_SCARH_CQC_Blk";
		picture="\nia_wp_SCAR\tex\ui\hlc_wp_SCARH_CQC_Blk_ca";
		hiddenSelectionsTextures[]=
		{
			"nia_wp_SCAR\tex\toadie_SCAR\scar_common_co.paa",
			"nia_wp_SCAR\tex\toadie_SCAR\scar_lower_co.paa",
			"nia_wp_SCAR\tex\toadie_SCAR\stock_co.paa",
			"nia_wp_SCAR\tex\toadie_SCAR\upper_scarh_co.paa"
		};
		class nia_magSwitch
		{
			hlc_10Rnd_762x51_B_SCARH_tan="hlc_wp_SCARH_CQC_10rnd_Blk";
			hlc_10Rnd_762x51_mk316_SCARH_tan="hlc_wp_SCARH_CQC_10rnd_Blk";
			hlc_10Rnd_762x51_Barrier_SCARH_tan="hlc_wp_SCARH_CQC_10rnd_Blk";
			hlc_10Rnd_762x51_t_SCARH_tan="hlc_wp_SCARH_CQC_10rnd_Blk";
			hlc_10Rnd_762x51_TDim_SCARH_tan="hlc_wp_SCARH_CQC_10rnd_Blk";
			hlc_10Rnd_762x51_S_SCARH_tan="hlc_wp_SCARH_CQC_10rnd_Blk";
			hlc_10Rnd_762x51_B_SCARH="hlc_wp_SCARH_CQC_10rnd_Blk";
			hlc_10Rnd_762x51_mk316_SCARH="hlc_wp_SCARH_CQC_10rnd_Blk";
			hlc_10Rnd_762x51_Barrier_SCARH="hlc_wp_SCARH_CQC_10rnd_Blk";
			hlc_10Rnd_762x51_t_SCARH="hlc_wp_SCARH_CQC_10rnd_Blk";
			hlc_10Rnd_762x51_TDim_SCARH="hlc_wp_SCARH_CQC_10rnd_Blk";
			hlc_10Rnd_762x51_S_SCARH="hlc_wp_SCARH_CQC_10rnd_Blk";
			hlc_10Rnd_762x51_B_SCARH_camo="hlc_wp_SCARH_CQC_10rnd_Blk";
			hlc_10Rnd_762x51_mk316_SCARH_camo="hlc_wp_SCARH_CQC_10rnd_Blk";
			hlc_10Rnd_762x51_Barrier_SCARH_camo="hlc_wp_SCARH_CQC_10rnd_Blk";
			hlc_10Rnd_762x51_t_SCARH_camo="hlc_wp_SCARH_CQC_10rnd_Blk";
			hlc_10Rnd_762x51_TDim_SCARH_camo="hlc_wp_SCARH_CQC_10rnd_Blk";
			hlc_10Rnd_762x51_S_SCARH_camo="hlc_wp_SCARH_CQC_10rnd_Blk";
			default="hlc_wp_SCARH_CQC_Blk";
		};
		class nia_gripSwitch
		{
			VFG="hlc_wp_SCARH_CQC_Blk_grip";
			AFG="hlc_wp_SCARH_CQC_Blk_grip2";
			VFG2="hlc_wp_SCARH_CQC_Blk_grip3";
			default="hlc_wp_SCARH_CQC_Blk";
		};
		rhs_grip1_change="hlc_wp_SCARH_CQC_Blk_grip";
		rhs_grip2_change="hlc_wp_SCARH_CQC_Blk_grip2";
		rhs_grip3_change="hlc_wp_SCARH_CQC_Blk_grip3";
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
			class hlc_wp_SCARH_CQC_Blk
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SCARH_CQC_Blk_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARH_CQC_Blk_TacReload: hlc_wp_SCARH_CQC_Blk
	{
		magazineReloadSwitchPhase="(40 / 96)";
		scopeArsenal=0;
		reloadMagazineSound[]=
		{
			"\nia_wp_SCAR\snd\mk17_reload_Partial.ogg",
			0.85000002,
			1,
			25
		};
		reloadAction="NIA_GestureReload_Mk17_Tactical";
		model="nia_wp_SCAR\mesh\Rifle\SCARH_CQC_TacReload.p3d";
		rhs_grip1_change="hlc_wp_SCARH_CQC_Blk_grip";
		rhs_grip2_change="hlc_wp_SCARH_CQC_Blk_grip2";
		rhs_grip3_change="hlc_wp_SCARH_CQC_Blk_grip3";
		class nia_gripSwitch
		{
			VFG="hlc_wp_SCARH_CQC_Blk_grip";
			AFG="hlc_wp_SCARH_CQC_Blk_grip2";
			VFG2="hlc_wp_SCARH_CQC_Blk_grip3";
			default="hlc_wp_SCARH_CQC_TacReload";
		};
	};
	class hlc_wp_SCARH_CQC_Blk_grip: hlc_wp_SCARH_CQC_Blk
	{
		scopeArsenal=0;
		dexterity=1.5741909;
		aimTransitionSpeed=1.1019336;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handpose_VFG.rtm"
		};
		class nia_magSwitch
		{
			hlc_10Rnd_762x51_B_SCARH_tan="hlc_wp_SCARH_CQC_10Rnd_Blk_grip";
			hlc_10Rnd_762x51_mk316_SCARH_tan="hlc_wp_SCARH_CQC_10Rnd_Blk_grip";
			hlc_10Rnd_762x51_Barrier_SCARH_tan="hlc_wp_SCARH_CQC_10Rnd_Blk_grip";
			hlc_10Rnd_762x51_t_SCARH_tan="hlc_wp_SCARH_CQC_10Rnd_Blk_grip";
			hlc_10Rnd_762x51_TDim_SCARH_tan="hlc_wp_SCARH_CQC_10Rnd_Blk_grip";
			hlc_10Rnd_762x51_S_SCARH_tan="hlc_wp_SCARH_CQC_10Rnd_Blk_grip";
			hlc_10Rnd_762x51_B_SCARH="hlc_wp_SCARH_CQC_10Rnd_Blk_grip";
			hlc_10Rnd_762x51_mk316_SCARH="hlc_wp_SCARH_CQC_10Rnd_Blk_grip";
			hlc_10Rnd_762x51_Barrier_SCARH="hlc_wp_SCARH_CQC_10Rnd_Blk_grip";
			hlc_10Rnd_762x51_t_SCARH="hlc_wp_SCARH_CQC_10Rnd_Blk_grip";
			hlc_10Rnd_762x51_TDim_SCARH="hlc_wp_SCARH_CQC_10Rnd_Blk_grip";
			hlc_10Rnd_762x51_S_SCARH="hlc_wp_SCARH_CQC_10Rnd_Blk_grip";
			hlc_10Rnd_762x51_B_SCARH_camo="hlc_wp_SCARH_CQC_10Rnd_Blk_grip";
			hlc_10Rnd_762x51_mk316_SCARH_camo="hlc_wp_SCARH_CQC_10Rnd_Blk_grip";
			hlc_10Rnd_762x51_Barrier_SCARH_camo="hlc_wp_SCARH_CQC_10Rnd_Blk_grip";
			hlc_10Rnd_762x51_t_SCARH_camo="hlc_wp_SCARH_CQC_10Rnd_Blk_grip";
			hlc_10Rnd_762x51_TDim_SCARH_camo="hlc_wp_SCARH_CQC_10Rnd_Blk_grip";
			hlc_10Rnd_762x51_S_SCARH_camo="hlc_wp_SCARH_CQC_10Rnd_Blk_grip";
			default="hlc_wp_SCARH_CQC_Blk_grip";
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
			class hlc_wp_SCARH_CQC_Blk_grip
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SCARH_CQC_Blk_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARH_CQC_Blk_grip2: hlc_wp_SCARH_CQC_Blk
	{
		scopeArsenal=0;
		inertia="(0.349*0.85)";
		dexterity=1.5741909;
		aimTransitionSpeed=1.1019336;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handpose_AFG.rtm"
		};
		class nia_magSwitch
		{
			hlc_10Rnd_762x51_B_SCARH_tan="hlc_wp_SCARH_CQC_10Rnd_Blk_grip2";
			hlc_10Rnd_762x51_mk316_SCARH_tan="hlc_wp_SCARH_CQC_10Rnd_Blk_grip2";
			hlc_10Rnd_762x51_Barrier_SCARH_tan="hlc_wp_SCARH_CQC_10Rnd_Blk_grip2";
			hlc_10Rnd_762x51_t_SCARH_tan="hlc_wp_SCARH_CQC_10Rnd_Blk_grip2";
			hlc_10Rnd_762x51_TDim_SCARH_tan="hlc_wp_SCARH_CQC_10Rnd_Blk_grip2";
			hlc_10Rnd_762x51_S_SCARH_tan="hlc_wp_SCARH_CQC_10Rnd_Blk_grip2";
			hlc_10Rnd_762x51_B_SCARH="hlc_wp_SCARH_CQC_10Rnd_Blk_grip2";
			hlc_10Rnd_762x51_mk316_SCARH="hlc_wp_SCARH_CQC_10Rnd_Blk_grip2";
			hlc_10Rnd_762x51_Barrier_SCARH="hlc_wp_SCARH_CQC_10Rnd_Blk_grip2";
			hlc_10Rnd_762x51_t_SCARH="hlc_wp_SCARH_CQC_10Rnd_Blk_grip2";
			hlc_10Rnd_762x51_TDim_SCARH="hlc_wp_SCARH_CQC_10Rnd_Blk_grip2";
			hlc_10Rnd_762x51_S_SCARH="hlc_wp_SCARH_CQC_10Rnd_Blk_grip2";
			hlc_10Rnd_762x51_B_SCARH_camo="hlc_wp_SCARH_CQC_10Rnd_Blk_grip2";
			hlc_10Rnd_762x51_mk316_SCARH_camo="hlc_wp_SCARH_CQC_10Rnd_Blk_grip2";
			hlc_10Rnd_762x51_Barrier_SCARH_camo="hlc_wp_SCARH_CQC_10Rnd_Blk_grip2";
			hlc_10Rnd_762x51_t_SCARH_camo="hlc_wp_SCARH_CQC_10Rnd_Blk_grip2";
			hlc_10Rnd_762x51_TDim_SCARH_camo="hlc_wp_SCARH_CQC_10Rnd_Blk_grip2";
			hlc_10Rnd_762x51_S_SCARH_camo="hlc_wp_SCARH_CQC_10Rnd_Blk_grip2";
			default="hlc_wp_SCARH_CQC_Blk_grip2";
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
			class hlc_wp_SCARH_CQC_Blk_grip2
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SCARH_CQC_Blk_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARH_CQC_Blk_grip3: hlc_wp_SCARH_CQC_Blk
	{
		scopeArsenal=0;
		dexterity=1.5741909;
		aimTransitionSpeed=1.1019336;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handpose_VFG.rtm"
		};
		class nia_magSwitch
		{
			hlc_10Rnd_762x51_B_SCARH_tan="hlc_wp_SCARH_CQC_10Rnd_Blk_grip3";
			hlc_10Rnd_762x51_mk316_SCARH_tan="hlc_wp_SCARH_CQC_10Rnd_Blk_grip3";
			hlc_10Rnd_762x51_Barrier_SCARH_tan="hlc_wp_SCARH_CQC_10Rnd_Blk_grip3";
			hlc_10Rnd_762x51_t_SCARH_tan="hlc_wp_SCARH_CQC_10Rnd_Blk_grip3";
			hlc_10Rnd_762x51_TDim_SCARH_tan="hlc_wp_SCARH_CQC_10Rnd_Blk_grip3";
			hlc_10Rnd_762x51_S_SCARH_tan="hlc_wp_SCARH_CQC_10Rnd_Blk_grip3";
			hlc_10Rnd_762x51_B_SCARH="hlc_wp_SCARH_CQC_10Rnd_Blk_grip3";
			hlc_10Rnd_762x51_mk316_SCARH="hlc_wp_SCARH_CQC_10Rnd_Blk_grip3";
			hlc_10Rnd_762x51_Barrier_SCARH="hlc_wp_SCARH_CQC_10Rnd_Blk_grip3";
			hlc_10Rnd_762x51_t_SCARH="hlc_wp_SCARH_CQC_10Rnd_Blk_grip3";
			hlc_10Rnd_762x51_TDim_SCARH="hlc_wp_SCARH_CQC_10Rnd_Blk_grip3";
			hlc_10Rnd_762x51_S_SCARH="hlc_wp_SCARH_CQC_10Rnd_Blk_grip3";
			hlc_10Rnd_762x51_B_SCARH_camo="hlc_wp_SCARH_CQC_10Rnd_Blk_grip3";
			hlc_10Rnd_762x51_mk316_SCARH_camo="hlc_wp_SCARH_CQC_10Rnd_Blk_grip3";
			hlc_10Rnd_762x51_Barrier_SCARH_camo="hlc_wp_SCARH_CQC_10Rnd_Blk_grip3";
			hlc_10Rnd_762x51_t_SCARH_camo="hlc_wp_SCARH_CQC_10Rnd_Blk_grip3";
			hlc_10Rnd_762x51_TDim_SCARH_camo="hlc_wp_SCARH_CQC_10Rnd_Blk_grip3";
			hlc_10Rnd_762x51_S_SCARH_camo="hlc_wp_SCARH_CQC_10Rnd_Blk_grip3";
			default="hlc_wp_SCARH_CQC_Blk_grip3";
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
			class hlc_wp_SCARH_CQC_Blk_grip3
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SCARH_CQC_Blk_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARH_CQC_10rnd_Blk: hlc_wp_SCARH_CQC_Blk
	{
		scopeArsenal=0;
		reloadAction="NIA_GestureReload_Mk17_10rnd";
		baseweapon="hlc_wp_SCARH_CQC_10rnd_Blk";
		class nia_gripSwitch
		{
			VFG="hlc_wp_SCARH_CQC_10rnd_Blk_grip";
			AFG="hlc_wp_SCARH_CQC_10rnd_Blk_grip2";
			VFG2="hlc_wp_SCARH_CQC_10rnd_Blk_grip3";
			default="hlc_wp_SCARH_CQC_10rnd_Blk";
		};
		rhs_grip1_change="hlc_wp_SCARH_CQC_10rnd_Blk_grip";
		rhs_grip2_change="hlc_wp_SCARH_CQC_10rnd_Blk_grip2";
		rhs_grip3_change="hlc_wp_SCARH_CQC_10rnd_Blk_grip3";
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
			class hlc_wp_SCARH_CQC_10rnd_Blk
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SCARH_CQC_10rnd_Blk_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARH_CQC_10rnd_Blk_TacReload: hlc_wp_SCARH_CQC_10rnd_Blk
	{
		magazineReloadSwitchPhase="(40 / 96)";
		scopeArsenal=0;
		reloadMagazineSound[]=
		{
			"\nia_wp_SCAR\snd\mk17_reload_Partial.ogg",
			0.85000002,
			1,
			25
		};
		reloadAction="NIA_GestureReload_Mk17_10rnd_Tactical";
		model="nia_wp_SCAR\mesh\Rifle\SCARH_CQC_TacReload.p3d";
		rhs_grip1_change="hlc_wp_SCARH_CQC_10rnd_Blk_grip";
		rhs_grip2_change="hlc_wp_SCARH_CQC_10rnd_Blk_grip2";
		rhs_grip3_change="hlc_wp_SCARH_CQC_10rnd_Blk_grip3";
		class nia_gripSwitch
		{
			VFG="hlc_wp_SCARH_CQC_10rnd_Blk_grip";
			AFG="hlc_wp_SCARH_CQC_10rnd_Blk_grip2";
			VFG2="hlc_wp_SCARH_CQC_10rnd_Blk_grip3";
			default="hlc_wp_SCARH_CQC_10rnd_Blk_TacReload";
		};
	};
	class hlc_wp_SCARH_CQC_10rnd_Blk_grip: hlc_wp_SCARH_CQC_10rnd_Blk
	{
		scopeArsenal=0;
		dexterity=1.5741909;
		aimTransitionSpeed=1.1019336;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handpose_VFG.rtm"
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
			class hlc_wp_SCARH_CQC_10rnd_Blk_grip
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SCARH_CQC_10rnd_Blk_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARH_CQC_10rnd_Blk_grip2: hlc_wp_SCARH_CQC_10rnd_Blk
	{
		scopeArsenal=0;
		inertia="(0.349*0.85)";
		dexterity=1.5741909;
		aimTransitionSpeed=1.1019336;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handpose_AFG.rtm"
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
			class hlc_wp_SCARH_CQC_10rnd_Blk_grip2
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SCARH_CQC_10rnd_Blk_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARH_CQC_10rnd_Blk_grip3: hlc_wp_SCARH_CQC_10rnd_Blk
	{
		scopeArsenal=0;
		dexterity=1.5741909;
		aimTransitionSpeed=1.1019336;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handpose_VFG.rtm"
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
			class hlc_wp_SCARH_CQC_10rnd_Blk_grip3
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SCARH_CQC_10rnd_Blk_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARH_CQC_camo: hlc_WP_SCARH_CQC
	{
		author="Toadie";
		dlc="Niarms_SCAR";
		displayName="$STR_NIA_rifle_SCARH_CQC_camo";
		scope=2;
		baseWeapon="hlc_wp_SCARH_CQC_camo";
		picture="\nia_wp_SCAR\tex\ui\hlc_wp_SCARH_CQC_camo_ca";
		hiddenSelectionsTextures[]=
		{
			"nia_wp_SCAR\tex\toadie_SCAR\scar_common_camo_co.paa",
			"nia_wp_SCAR\tex\toadie_SCAR\scar_lower_camo_co.paa",
			"nia_wp_SCAR\tex\toadie_SCAR\stock_camo_co.paa",
			"nia_wp_SCAR\tex\toadie_SCAR\upper_scarh_camo_co.paa"
		};
		HiddenSelectionsMaterials[]=
		{
			"nia_wp_SCAR\mat\scar_common_camo.rvmat",
			"nia_wp_SCAR\mat\scar_lowers_camo.rvmat",
			"nia_wp_SCAR\mat\scar_stock_camo.rvmat",
			"nia_wp_SCAR\mat\scar_upper_scarh_camo.rvmat"
		};
		class nia_magSwitch
		{
			hlc_10Rnd_762x51_B_SCARH_tan="hlc_wp_SCARH_CQC_10rnd_Camo";
			hlc_10Rnd_762x51_mk316_SCARH_tan="hlc_wp_SCARH_CQC_10rnd_Camo";
			hlc_10Rnd_762x51_Barrier_SCARH_tan="hlc_wp_SCARH_CQC_10rnd_Camo";
			hlc_10Rnd_762x51_t_SCARH_tan="hlc_wp_SCARH_CQC_10rnd_Camo";
			hlc_10Rnd_762x51_TDim_SCARH_tan="hlc_wp_SCARH_CQC_10rnd_Camo";
			hlc_10Rnd_762x51_S_SCARH_tan="hlc_wp_SCARH_CQC_10rnd_Camo";
			hlc_10Rnd_762x51_B_SCARH="hlc_wp_SCARH_CQC_10rnd_Camo";
			hlc_10Rnd_762x51_mk316_SCARH="hlc_wp_SCARH_CQC_10rnd_Camo";
			hlc_10Rnd_762x51_Barrier_SCARH="hlc_wp_SCARH_CQC_10rnd_Camo";
			hlc_10Rnd_762x51_t_SCARH="hlc_wp_SCARH_CQC_10rnd_Camo";
			hlc_10Rnd_762x51_TDim_SCARH="hlc_wp_SCARH_CQC_10rnd_Camo";
			hlc_10Rnd_762x51_S_SCARH="hlc_wp_SCARH_CQC_10rnd_Camo";
			hlc_10Rnd_762x51_B_SCARH_camo="hlc_wp_SCARH_CQC_10rnd_Camo";
			hlc_10Rnd_762x51_mk316_SCARH_camo="hlc_wp_SCARH_CQC_10rnd_Camo";
			hlc_10Rnd_762x51_Barrier_SCARH_camo="hlc_wp_SCARH_CQC_10rnd_Camo";
			hlc_10Rnd_762x51_t_SCARH_camo="hlc_wp_SCARH_CQC_10rnd_Camo";
			hlc_10Rnd_762x51_TDim_SCARH_camo="hlc_wp_SCARH_CQC_10rnd_Camo";
			hlc_10Rnd_762x51_S_SCARH_camo="hlc_wp_SCARH_CQC_10rnd_Camo";
			default="hlc_wp_SCARH_CQC_Camo";
		};
		class nia_gripSwitch
		{
			VFG="hlc_wp_SCARH_CQC_camo_grip";
			AFG="hlc_wp_SCARH_CQC_camo_grip2";
			VFG2="hlc_wp_SCARH_CQC_camo_grip3";
			default="hlc_wp_SCARH_CQC_camo";
		};
		rhs_grip1_change="hlc_wp_SCARH_CQC_camo_grip";
		rhs_grip2_change="hlc_wp_SCARH_CQC_camo_grip2";
		rhs_grip3_change="hlc_wp_SCARH_CQC_camo_grip3";
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
			class hlc_wp_SCARH_CQC_camo
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SCARH_CQC_camo_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARH_CQC_camo_TacReload: hlc_wp_SCARH_CQC_camo
	{
		magazineReloadSwitchPhase="(40 / 96)";
		scopeArsenal=0;
		reloadMagazineSound[]=
		{
			"\nia_wp_SCAR\snd\mk17_reload_Partial.ogg",
			0.85000002,
			1,
			25
		};
		reloadAction="NIA_GestureReload_Mk17_Tactical";
		model="nia_wp_SCAR\mesh\Rifle\SCARH_CQC_TacReload.p3d";
		rhs_grip1_change="hlc_wp_SCARH_CQC_camo_grip";
		rhs_grip2_change="hlc_wp_SCARH_CQC_camo_grip2";
		rhs_grip3_change="hlc_wp_SCARH_CQC_camo_grip3";
		class nia_gripSwitch
		{
			VFG="hlc_wp_SCARH_CQC_camo_grip";
			AFG="hlc_wp_SCARH_CQC_camo_grip2";
			VFG2="hlc_wp_SCARH_CQC_camo_grip3";
			default="hlc_wp_SCARH_CQC_TacReload";
		};
	};
	class hlc_wp_SCARH_CQC_camo_grip: hlc_wp_SCARH_CQC_camo
	{
		scopeArsenal=0;
		dexterity=1.5741909;
		aimTransitionSpeed=1.1019336;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handpose_VFG.rtm"
		};
		class nia_magSwitch
		{
			hlc_10Rnd_762x51_B_SCARH_tan="hlc_wp_SCARH_CQC_10Rnd_camo_grip";
			hlc_10Rnd_762x51_mk316_SCARH_tan="hlc_wp_SCARH_CQC_10Rnd_camo_grip";
			hlc_10Rnd_762x51_Barrier_SCARH_tan="hlc_wp_SCARH_CQC_10Rnd_camo_grip";
			hlc_10Rnd_762x51_t_SCARH_tan="hlc_wp_SCARH_CQC_10Rnd_camo_grip";
			hlc_10Rnd_762x51_TDim_SCARH_tan="hlc_wp_SCARH_CQC_10Rnd_camo_grip";
			hlc_10Rnd_762x51_S_SCARH_tan="hlc_wp_SCARH_CQC_10Rnd_camo_grip";
			hlc_10Rnd_762x51_B_SCARH="hlc_wp_SCARH_CQC_10Rnd_camo_grip";
			hlc_10Rnd_762x51_mk316_SCARH="hlc_wp_SCARH_CQC_10Rnd_camo_grip";
			hlc_10Rnd_762x51_Barrier_SCARH="hlc_wp_SCARH_CQC_10Rnd_camo_grip";
			hlc_10Rnd_762x51_t_SCARH="hlc_wp_SCARH_CQC_10Rnd_camo_grip";
			hlc_10Rnd_762x51_TDim_SCARH="hlc_wp_SCARH_CQC_10Rnd_camo_grip";
			hlc_10Rnd_762x51_S_SCARH="hlc_wp_SCARH_CQC_10Rnd_camo_grip";
			hlc_10Rnd_762x51_B_SCARH_camo="hlc_wp_SCARH_CQC_10Rnd_camo_grip";
			hlc_10Rnd_762x51_mk316_SCARH_camo="hlc_wp_SCARH_CQC_10Rnd_camo_grip";
			hlc_10Rnd_762x51_Barrier_SCARH_camo="hlc_wp_SCARH_CQC_10Rnd_camo_grip";
			hlc_10Rnd_762x51_t_SCARH_camo="hlc_wp_SCARH_CQC_10Rnd_camo_grip";
			hlc_10Rnd_762x51_TDim_SCARH_camo="hlc_wp_SCARH_CQC_10Rnd_camo_grip";
			hlc_10Rnd_762x51_S_SCARH_camo="hlc_wp_SCARH_CQC_10Rnd_camo_grip";
			default="hlc_wp_SCARH_CQC_camo_grip";
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
			class hlc_wp_SCARH_CQC_camo_grip
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SCARH_CQC_camo_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARH_CQC_camo_grip2: hlc_wp_SCARH_CQC_camo
	{
		scopeArsenal=0;
		inertia="(0.349*0.85)";
		dexterity=1.5741909;
		aimTransitionSpeed=1.1019336;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handpose_AFG.rtm"
		};
		class nia_magSwitch
		{
			hlc_10Rnd_762x51_B_SCARH_tan="hlc_wp_SCARH_CQC_10Rnd_camo_grip2";
			hlc_10Rnd_762x51_mk316_SCARH_tan="hlc_wp_SCARH_CQC_10Rnd_camo_grip2";
			hlc_10Rnd_762x51_Barrier_SCARH_tan="hlc_wp_SCARH_CQC_10Rnd_camo_grip2";
			hlc_10Rnd_762x51_t_SCARH_tan="hlc_wp_SCARH_CQC_10Rnd_camo_grip2";
			hlc_10Rnd_762x51_TDim_SCARH_tan="hlc_wp_SCARH_CQC_10Rnd_camo_grip2";
			hlc_10Rnd_762x51_S_SCARH_tan="hlc_wp_SCARH_CQC_10Rnd_camo_grip2";
			hlc_10Rnd_762x51_B_SCARH="hlc_wp_SCARH_CQC_10Rnd_camo_grip2";
			hlc_10Rnd_762x51_mk316_SCARH="hlc_wp_SCARH_CQC_10Rnd_camo_grip2";
			hlc_10Rnd_762x51_Barrier_SCARH="hlc_wp_SCARH_CQC_10Rnd_camo_grip2";
			hlc_10Rnd_762x51_t_SCARH="hlc_wp_SCARH_CQC_10Rnd_camo_grip2";
			hlc_10Rnd_762x51_TDim_SCARH="hlc_wp_SCARH_CQC_10Rnd_camo_grip2";
			hlc_10Rnd_762x51_S_SCARH="hlc_wp_SCARH_CQC_10Rnd_camo_grip2";
			hlc_10Rnd_762x51_B_SCARH_camo="hlc_wp_SCARH_CQC_10Rnd_camo_grip2";
			hlc_10Rnd_762x51_mk316_SCARH_camo="hlc_wp_SCARH_CQC_10Rnd_camo_grip2";
			hlc_10Rnd_762x51_Barrier_SCARH_camo="hlc_wp_SCARH_CQC_10Rnd_camo_grip2";
			hlc_10Rnd_762x51_t_SCARH_camo="hlc_wp_SCARH_CQC_10Rnd_camo_grip2";
			hlc_10Rnd_762x51_TDim_SCARH_camo="hlc_wp_SCARH_CQC_10Rnd_camo_grip2";
			hlc_10Rnd_762x51_S_SCARH_camo="hlc_wp_SCARH_CQC_10Rnd_camo_grip2";
			default="hlc_wp_SCARH_CQC_camo_grip2";
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
			class hlc_wp_SCARH_CQC_camo_grip2
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SCARH_CQC_camo_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARH_CQC_camo_grip3: hlc_wp_SCARH_CQC_camo
	{
		scopeArsenal=0;
		dexterity=1.5741909;
		aimTransitionSpeed=1.1019336;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handpose_VFG.rtm"
		};
		class nia_magSwitch
		{
			hlc_10Rnd_762x51_B_SCARH_tan="hlc_wp_SCARH_CQC_10Rnd_camo_grip3";
			hlc_10Rnd_762x51_mk316_SCARH_tan="hlc_wp_SCARH_CQC_10Rnd_camo_grip3";
			hlc_10Rnd_762x51_Barrier_SCARH_tan="hlc_wp_SCARH_CQC_10Rnd_camo_grip3";
			hlc_10Rnd_762x51_t_SCARH_tan="hlc_wp_SCARH_CQC_10Rnd_camo_grip3";
			hlc_10Rnd_762x51_TDim_SCARH_tan="hlc_wp_SCARH_CQC_10Rnd_camo_grip3";
			hlc_10Rnd_762x51_S_SCARH_tan="hlc_wp_SCARH_CQC_10Rnd_camo_grip3";
			hlc_10Rnd_762x51_B_SCARH="hlc_wp_SCARH_CQC_10Rnd_camo_grip3";
			hlc_10Rnd_762x51_mk316_SCARH="hlc_wp_SCARH_CQC_10Rnd_camo_grip3";
			hlc_10Rnd_762x51_Barrier_SCARH="hlc_wp_SCARH_CQC_10Rnd_camo_grip3";
			hlc_10Rnd_762x51_t_SCARH="hlc_wp_SCARH_CQC_10Rnd_camo_grip3";
			hlc_10Rnd_762x51_TDim_SCARH="hlc_wp_SCARH_CQC_10Rnd_camo_grip3";
			hlc_10Rnd_762x51_S_SCARH="hlc_wp_SCARH_CQC_10Rnd_camo_grip3";
			hlc_10Rnd_762x51_B_SCARH_camo="hlc_wp_SCARH_CQC_10Rnd_camo_grip3";
			hlc_10Rnd_762x51_mk316_SCARH_camo="hlc_wp_SCARH_CQC_10Rnd_camo_grip3";
			hlc_10Rnd_762x51_Barrier_SCARH_camo="hlc_wp_SCARH_CQC_10Rnd_camo_grip3";
			hlc_10Rnd_762x51_t_SCARH_camo="hlc_wp_SCARH_CQC_10Rnd_camo_grip3";
			hlc_10Rnd_762x51_TDim_SCARH_camo="hlc_wp_SCARH_CQC_10Rnd_camo_grip3";
			hlc_10Rnd_762x51_S_SCARH_camo="hlc_wp_SCARH_CQC_10Rnd_camo_grip3";
			default="hlc_wp_SCARH_CQC_camo_grip3";
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
			class hlc_wp_SCARH_CQC_camo_grip3
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SCARH_CQC_camo_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARH_CQC_10rnd_camo: hlc_wp_SCARH_CQC_camo
	{
		scopeArsenal=0;
		reloadAction="NIA_GestureReload_Mk17_10rnd";
		baseweapon="hlc_wp_SCARH_CQC_10rnd_camo";
		class nia_gripSwitch
		{
			VFG="hlc_wp_SCARH_CQC_10rnd_camo_grip";
			AFG="hlc_wp_SCARH_CQC_10rnd_camo_grip2";
			VFG2="hlc_wp_SCARH_CQC_10rnd_camo_grip3";
			default="hlc_wp_SCARH_CQC_10rnd_camo";
		};
		rhs_grip1_change="hlc_wp_SCARH_CQC_10rnd_camo_grip";
		rhs_grip2_change="hlc_wp_SCARH_CQC_10rnd_camo_grip2";
		rhs_grip3_change="hlc_wp_SCARH_CQC_10rnd_camo_grip3";
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
			class hlc_wp_SCARH_CQC_10rnd_camo
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SCARH_CQC_10rnd_camo_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARH_CQC_10rnd_camo_TacReload: hlc_wp_SCARH_CQC_10rnd_camo
	{
		magazineReloadSwitchPhase="(40 / 96)";
		scopeArsenal=0;
		reloadMagazineSound[]=
		{
			"\nia_wp_SCAR\snd\mk17_reload_Partial.ogg",
			0.85000002,
			1,
			25
		};
		reloadAction="NIA_GestureReload_Mk17_10rnd_Tactical";
		model="nia_wp_SCAR\mesh\Rifle\SCARH_CQC_TacReload.p3d";
		rhs_grip1_change="hlc_wp_SCARH_CQC_10rnd_camo_grip";
		rhs_grip2_change="hlc_wp_SCARH_CQC_10rnd_camo_grip2";
		rhs_grip3_change="hlc_wp_SCARH_CQC_10rnd_camo_grip3";
		class nia_gripSwitch
		{
			VFG="hlc_wp_SCARH_CQC_10rnd_camo_grip";
			AFG="hlc_wp_SCARH_CQC_10rnd_camo_grip2";
			VFG2="hlc_wp_SCARH_CQC_10rnd_camo_grip3";
			default="hlc_wp_SCARH_CQC_10rnd_camo_TacReload";
		};
	};
	class hlc_wp_SCARH_CQC_10rnd_camo_grip: hlc_wp_SCARH_CQC_10rnd_camo
	{
		scopeArsenal=0;
		dexterity=1.5741909;
		aimTransitionSpeed=1.1019336;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handpose_VFG.rtm"
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
			class hlc_wp_SCARH_CQC_10rnd_camo_grip
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SCARH_CQC_10rnd_camo_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARH_CQC_10rnd_camo_grip2: hlc_wp_SCARH_CQC_10rnd_camo
	{
		scopeArsenal=0;
		inertia="(0.349*0.85)";
		dexterity=1.5741909;
		aimTransitionSpeed=1.1019336;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handpose_AFG.rtm"
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
			class hlc_wp_SCARH_CQC_10rnd_camo_grip2
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SCARH_CQC_10rnd_camo_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARH_CQC_10rnd_camo_grip3: hlc_wp_SCARH_CQC_10rnd_camo
	{
		scopeArsenal=0;
		dexterity=1.5741909;
		aimTransitionSpeed=1.1019336;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handpose_VFG.rtm"
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
			class hlc_wp_SCARH_CQC_10rnd_camo_grip3
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SCARH_CQC_10rnd_camo_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARH_cqc_EGLM: hlc_WP_SCARH_CQC
	{
		author="Toadie";
		dlc="Niarms_SCAR";
		displayName="$STR_NIA_rifle_SCARH_cqc_EGLM";
		scope=2;
		magazines[]=
		{
			"hlc_20Rnd_762x51_B_SCARH_tan",
			"hlc_20Rnd_762x51_mk316_SCARH_tan",
			"hlc_20Rnd_762x51_Barrier_SCARH_tan",
			"hlc_20Rnd_762x51_t_SCARH_tan",
			"hlc_20Rnd_762x51_TDim_SCARH_tan",
			"hlc_20rnd_762x51_M_SCARH_tan",
			"hlc_20rnd_762x51_MDIM_SCARH_tan",
			"hlc_20Rnd_762x51_S_SCARH_tan",
			"hlc_20Rnd_762x51_S_SCARH_tan",
			"hlc_20Rnd_762x51_B_SCARH",
			"hlc_20Rnd_762x51_mk316_SCARH",
			"hlc_20Rnd_762x51_Barrier_SCARH",
			"hlc_20Rnd_762x51_t_SCARH",
			"hlc_20Rnd_762x51_TDim_SCARH",
			"hlc_20rnd_762x51_M_SCARH",
			"hlc_20rnd_762x51_MDIM_SCARH",
			"hlc_20Rnd_762x51_S_SCARH",
			"hlc_20Rnd_762x51_B_SCARH_camo",
			"hlc_20Rnd_762x51_mk316_SCARH_camo",
			"hlc_20Rnd_762x51_Barrier_SCARH_camo",
			"hlc_20Rnd_762x51_t_SCARH_camo",
			"hlc_20Rnd_762x51_TDim_SCARH_camo",
			"hlc_20rnd_762x51_M_SCARH_camo",
			"hlc_20rnd_762x51_MDIM_SCARH_camo",
			"hlc_20Rnd_762x51_S_SCARH_camo",
			"hlc_20Rnd_762x51_B_SCARH_MW2",
			"hlc_20Rnd_762x51_barrier_SCARH_MW2",
			"hlc_20Rnd_762x51_mk316_SCARH_MW2",
			"hlc_20Rnd_762x51_TDIM_SCARH_MW2",
			"hlc_20Rnd_762x51_T_SCARH_MW2",
			"hlc_20Rnd_762x51_M_SCARH_MW2",
			"hlc_20Rnd_762x51_MDIM_SCARH_MW2",
			"hlc_20Rnd_762x51_S_SCARH_MW2"
		};
		magazineWell[]=
		{
			"CBA_762x51_SCAR"
		};
		muzzles[]=
		{
			"this",
			"hlc_GL_SCAR_EGLM"
		};
		baseWeapon="hlc_wp_SCARH_cqc_EGLM";
		mass=108.78199;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=108.78199;
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
			class MuzzleSlot: asdg_MuzzleSlot_762
			{
				iconPosition[]={0,0};
				iconScale=1;
				iconPicture="\A3\Weapons_F\Data\clear_empty.paa";
				iconPinPoint="Left";
			};
			class UnderBarrelSlot
			{
				iconPosition[]={0,0};
				iconScale=1;
				iconPicture="\A3\Weapons_F\Data\clear_empty.paa";
				iconPinPoint="Left";
			};
			class GripodSlot
			{
				iconPosition[]={0,0};
				iconScale=1;
				iconPicture="\A3\Weapons_F\Data\clear_empty.paa";
				iconPinPoint="Left";
			};
		};
		inertia="(0.349 + 0.15)";
		dexterity=1.1513525;
		aimTransitionSpeed=0.80594677;
		model="nia_wp_SCAR\mesh\rifle\SCARH_cqc_EGLM.p3d";
		reloadAction="NIA_GestureReload_Mk17_EGLM";
		picture="\nia_wp_SCAR\tex\ui\hlc_wp_SCARH_cqc_EGLM_CA";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handpose_EGLM.rtm"
		};
		UiPicture="\A3\weapons_f\data\UI\icon_regular_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"nia_wp_SCAR\tex\toadie_SCAR\scar_common_tan_co.paa",
			"nia_wp_SCAR\tex\toadie_SCAR\scar_lower_tan_co.paa",
			"nia_wp_SCAR\tex\toadie_SCAR\stock_tan_co.paa",
			"nia_wp_SCAR\tex\toadie_SCAR\upper_scarh_tan_co.paa",
			"nia_wp_SCAR\tex\toadie_SCAR\Launcher_FN-EGLM_tan_co.paa"
		};
		HiddenSelectionsMaterials[]=
		{
			"nia_wp_SCAR\mat\scar_common.rvmat",
			"nia_wp_SCAR\mat\scar_lowers.rvmat",
			"nia_wp_SCAR\mat\scar_stock.rvmat",
			"nia_wp_SCAR\mat\scar_upper_scarh.rvmat",
			"nia_wp_SCAR\mat\Launcher_FN-EGLM.rvmat"
		};
		class nia_magSwitch
		{
			default="hlc_wp_SCARH_cqc_EGLM";
		};
		class nia_gripSwitch
		{
			VFG="hlc_wp_SCARH_cqc_EGLM";
			AFG="hlc_wp_SCARH_cqc_EGLM";
			VFG2="hlc_wp_SCARH_cqc_EGLM";
			default="hlc_wp_SCARH_cqc_EGLM";
		};
		rhs_grip1_change="hlc_wp_SCARH_cqc_EGLM";
		rhs_grip2_change="hlc_wp_SCARH_cqc_EGLM";
		rhs_grip3_change="hlc_wp_SCARH_cqc_EGLM";
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
			class hlc_wp_SCARH_cqc_EGLM
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SCARH_cqc_EGLM_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARH_cqc_EGLM_TacReload: hlc_wp_SCARH_cqc_EGLM
	{
		magazineReloadSwitchPhase="(40 / 96)";
		scopeArsenal=0;
		reloadMagazineSound[]=
		{
			"\nia_wp_SCAR\snd\mk17_reload_Partial.ogg",
			0.85000002,
			1,
			25
		};
		reloadAction="NIA_GestureReload_Mk17_Tactical";
		model="nia_wp_SCAR\mesh\Rifle\SCARH_cqc_EGLM_TacReload.p3d";
	};
	class hlc_wp_SCARH_CQC_EGLM_Blk: hlc_wp_SCARH_CQC_Blk
	{
		author="Toadie";
		dlc="Niarms_SCAR";
		displayName="$STR_NIA_rifle_SCARH_CQC_EGLM_blk";
		scope=2;
		magazines[]=
		{
			"hlc_20Rnd_762x51_B_SCARH_tan",
			"hlc_20Rnd_762x51_mk316_SCARH_tan",
			"hlc_20Rnd_762x51_Barrier_SCARH_tan",
			"hlc_20Rnd_762x51_t_SCARH_tan",
			"hlc_20Rnd_762x51_TDim_SCARH_tan",
			"hlc_20rnd_762x51_M_SCARH_tan",
			"hlc_20rnd_762x51_MDIM_SCARH_tan",
			"hlc_20Rnd_762x51_S_SCARH_tan",
			"hlc_20Rnd_762x51_S_SCARH_tan",
			"hlc_20Rnd_762x51_B_SCARH",
			"hlc_20Rnd_762x51_mk316_SCARH",
			"hlc_20Rnd_762x51_Barrier_SCARH",
			"hlc_20Rnd_762x51_t_SCARH",
			"hlc_20Rnd_762x51_TDim_SCARH",
			"hlc_20rnd_762x51_M_SCARH",
			"hlc_20rnd_762x51_MDIM_SCARH",
			"hlc_20Rnd_762x51_S_SCARH",
			"hlc_20Rnd_762x51_B_SCARH_camo",
			"hlc_20Rnd_762x51_mk316_SCARH_camo",
			"hlc_20Rnd_762x51_Barrier_SCARH_camo",
			"hlc_20Rnd_762x51_t_SCARH_camo",
			"hlc_20Rnd_762x51_TDim_SCARH_camo",
			"hlc_20rnd_762x51_M_SCARH_camo",
			"hlc_20rnd_762x51_MDIM_SCARH_camo",
			"hlc_20Rnd_762x51_S_SCARH_camo",
			"hlc_20Rnd_762x51_B_SCARH_MW2",
			"hlc_20Rnd_762x51_barrier_SCARH_MW2",
			"hlc_20Rnd_762x51_mk316_SCARH_MW2",
			"hlc_20Rnd_762x51_TDIM_SCARH_MW2",
			"hlc_20Rnd_762x51_T_SCARH_MW2",
			"hlc_20Rnd_762x51_M_SCARH_MW2",
			"hlc_20Rnd_762x51_MDIM_SCARH_MW2",
			"hlc_20Rnd_762x51_S_SCARH_MW2"
		};
		magazineWell[]=
		{
			"CBA_762x51_SCAR"
		};
		muzzles[]=
		{
			"this",
			"hlc_GL_SCAR_EGLM"
		};
		baseWeapon="hlc_wp_SCARH_CQC_EGLM_Blk";
		mass=108.78199;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=108.78199;
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
			class MuzzleSlot: asdg_MuzzleSlot_762
			{
				iconPosition[]={0,0};
				iconScale=1;
				iconPicture="\A3\Weapons_F\Data\clear_empty.paa";
				iconPinPoint="Left";
			};
			class UnderBarrelSlot
			{
				iconPosition[]={0,0};
				iconScale=1;
				iconPicture="\A3\Weapons_F\Data\clear_empty.paa";
				iconPinPoint="Left";
			};
			class GripodSlot
			{
				iconPosition[]={0,0};
				iconScale=1;
				iconPicture="\A3\Weapons_F\Data\clear_empty.paa";
				iconPinPoint="Left";
			};
		};
		inertia="(0.349 + 0.15)";
		dexterity=1.1513525;
		aimTransitionSpeed=0.80594677;
		model="nia_wp_SCAR\mesh\rifle\SCARH_CQC_EGLM.p3d";
		reloadAction="NIA_GestureReload_Mk17_EGLM";
		picture="\nia_wp_SCAR\tex\ui\hlc_wp_SCARH_CQC_EGLM_Blk_ca";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handpose_EGLM.rtm"
		};
		UiPicture="\A3\weapons_f\data\UI\icon_regular_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"nia_wp_SCAR\tex\toadie_SCAR\scar_common_co.paa",
			"nia_wp_SCAR\tex\toadie_SCAR\scar_lower_co.paa",
			"nia_wp_SCAR\tex\toadie_SCAR\stock_co.paa",
			"nia_wp_SCAR\tex\toadie_SCAR\upper_scarh_co.paa",
			"nia_wp_SCAR\tex\toadie_SCAR\Launcher_FN-EGLM_co.paa"
		};
		HiddenSelectionsMaterials[]=
		{
			"nia_wp_SCAR\mat\scar_common.rvmat",
			"nia_wp_SCAR\mat\scar_lowers.rvmat",
			"nia_wp_SCAR\mat\scar_stock.rvmat",
			"nia_wp_SCAR\mat\scar_upper_scarh.rvmat",
			"nia_wp_SCAR\mat\Launcher_FN-EGLM.rvmat"
		};
		class nia_magSwitch
		{
			default="hlc_wp_SCARH_CQC_EGLM_Blk";
		};
		class nia_gripSwitch
		{
			VFG="hlc_wp_SCARH_CQC_EGLM_Blk";
			AFG="hlc_wp_SCARH_CQC_EGLM_Blk";
			VFG2="hlc_wp_SCARH_CQC_EGLM_Blk";
			default="hlc_wp_SCARH_CQC_EGLM_Blk";
		};
		rhs_grip1_change="hlc_wp_SCARH_CQC_EGLM_Blk";
		rhs_grip2_change="hlc_wp_SCARH_CQC_EGLM_Blk";
		rhs_grip3_change="hlc_wp_SCARH_CQC_EGLM_Blk";
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
			class hlc_wp_SCARH_CQC_EGLM_Blk
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SCARH_cqc_EGLM_Blk_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARH_cqc_EGLM_Blk_TacReload: hlc_wp_SCARH_CQC_EGLM_Blk
	{
		magazineReloadSwitchPhase="(40 / 96)";
		scopeArsenal=0;
		reloadMagazineSound[]=
		{
			"\nia_wp_SCAR\snd\mk17_reload_Partial.ogg",
			0.85000002,
			1,
			25
		};
		reloadAction="NIA_GestureReload_Mk17_Tactical";
		model="nia_wp_SCAR\mesh\Rifle\SCARH_cqc_EGLM_TacReload.p3d";
	};
	class hlc_wp_SCARH_CQC_EGLM_camo: hlc_wp_SCARH_CQC_camo
	{
		author="Toadie";
		dlc="Niarms_SCAR";
		displayName="$STR_NIA_rifle_SCARH_CQC_EGLM_camo";
		scope=2;
		magazines[]=
		{
			"hlc_20Rnd_762x51_B_SCARH_tan",
			"hlc_20Rnd_762x51_mk316_SCARH_tan",
			"hlc_20Rnd_762x51_Barrier_SCARH_tan",
			"hlc_20Rnd_762x51_t_SCARH_tan",
			"hlc_20Rnd_762x51_TDim_SCARH_tan",
			"hlc_20rnd_762x51_M_SCARH_tan",
			"hlc_20rnd_762x51_MDIM_SCARH_tan",
			"hlc_20Rnd_762x51_S_SCARH_tan",
			"hlc_20Rnd_762x51_S_SCARH_tan",
			"hlc_20Rnd_762x51_B_SCARH",
			"hlc_20Rnd_762x51_mk316_SCARH",
			"hlc_20Rnd_762x51_Barrier_SCARH",
			"hlc_20Rnd_762x51_t_SCARH",
			"hlc_20Rnd_762x51_TDim_SCARH",
			"hlc_20rnd_762x51_M_SCARH",
			"hlc_20rnd_762x51_MDIM_SCARH",
			"hlc_20Rnd_762x51_S_SCARH",
			"hlc_20Rnd_762x51_B_SCARH_camo",
			"hlc_20Rnd_762x51_mk316_SCARH_camo",
			"hlc_20Rnd_762x51_Barrier_SCARH_camo",
			"hlc_20Rnd_762x51_t_SCARH_camo",
			"hlc_20Rnd_762x51_TDim_SCARH_camo",
			"hlc_20rnd_762x51_M_SCARH_camo",
			"hlc_20rnd_762x51_MDIM_SCARH_camo",
			"hlc_20Rnd_762x51_S_SCARH_camo",
			"hlc_20Rnd_762x51_B_SCARH_MW2",
			"hlc_20Rnd_762x51_barrier_SCARH_MW2",
			"hlc_20Rnd_762x51_mk316_SCARH_MW2",
			"hlc_20Rnd_762x51_TDIM_SCARH_MW2",
			"hlc_20Rnd_762x51_T_SCARH_MW2",
			"hlc_20Rnd_762x51_M_SCARH_MW2",
			"hlc_20Rnd_762x51_MDIM_SCARH_MW2",
			"hlc_20Rnd_762x51_S_SCARH_MW2"
		};
		magazineWell[]=
		{
			"CBA_762x51_SCAR"
		};
		muzzles[]=
		{
			"this",
			"hlc_GL_SCAR_EGLM"
		};
		baseWeapon="hlc_wp_SCARH_CQC_EGLM_camo";
		mass=108.78199;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=108.78199;
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
			class MuzzleSlot: asdg_MuzzleSlot_762
			{
				iconPosition[]={0,0};
				iconScale=1;
				iconPicture="\A3\Weapons_F\Data\clear_empty.paa";
				iconPinPoint="Left";
			};
			class UnderBarrelSlot
			{
				iconPosition[]={0,0};
				iconScale=1;
				iconPicture="\A3\Weapons_F\Data\clear_empty.paa";
				iconPinPoint="Left";
			};
			class GripodSlot
			{
				iconPosition[]={0,0};
				iconScale=1;
				iconPicture="\A3\Weapons_F\Data\clear_empty.paa";
				iconPinPoint="Left";
			};
		};
		inertia="(0.349 + 0.15)";
		dexterity=1.1513525;
		aimTransitionSpeed=0.80594677;
		model="nia_wp_SCAR\mesh\rifle\SCARH_CQC_EGLM.p3d";
		reloadAction="NIA_GestureReload_Mk17_EGLM";
		picture="\nia_wp_SCAR\tex\ui\hlc_wp_SCARH_CQC_EGLM_camo_ca";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handpose_EGLM.rtm"
		};
		UiPicture="\A3\weapons_f\data\UI\icon_regular_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"nia_wp_SCAR\tex\toadie_SCAR\scar_common_camo_co.paa",
			"nia_wp_SCAR\tex\toadie_SCAR\scar_lower_camo_co.paa",
			"nia_wp_SCAR\tex\toadie_SCAR\stock_camo_co.paa",
			"nia_wp_SCAR\tex\toadie_SCAR\upper_scarh_camo_co.paa",
			"nia_wp_SCAR\tex\toadie_SCAR\Launcher_FN-EGLM_camo_co.paa"
		};
		HiddenSelectionsMaterials[]=
		{
			"nia_wp_SCAR\mat\scar_common_camo.rvmat",
			"nia_wp_SCAR\mat\scar_lowers_camo.rvmat",
			"nia_wp_SCAR\mat\scar_stock_camo.rvmat",
			"nia_wp_SCAR\mat\scar_upper_scarh_camo.rvmat",
			"nia_wp_SCAR\mat\Launcher_FN-EGLM_camo.rvmat"
		};
		class nia_magSwitch
		{
			default="hlc_wp_SCARH_CQC_EGLM_camo";
		};
		class nia_gripSwitch
		{
			VFG="hlc_wp_SCARH_CQC_EGLM_camo";
			AFG="hlc_wp_SCARH_CQC_EGLM_camo";
			VFG2="hlc_wp_SCARH_CQC_EGLM_camo";
			default="hlc_wp_SCARH_CQC_EGLM_camo";
		};
		rhs_grip1_change="hlc_wp_SCARH_CQC_EGLM_camo";
		rhs_grip2_change="hlc_wp_SCARH_CQC_EGLM_camo";
		rhs_grip3_change="hlc_wp_SCARH_CQC_EGLM_camo";
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
			class hlc_wp_SCARH_CQC_EGLM_camo
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SCARH_cqc_EGLM_camo_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARH_cqc_EGLM_camo_TacReload: hlc_wp_SCARH_CQC_EGLM_camo
	{
		magazineReloadSwitchPhase="(40 / 96)";
		scopeArsenal=0;
		reloadMagazineSound[]=
		{
			"\nia_wp_SCAR\snd\mk17_reload_Partial.ogg",
			0.85000002,
			1,
			25
		};
		reloadAction="NIA_GestureReload_Mk17_Tactical";
		model="nia_wp_SCAR\mesh\Rifle\SCARH_cqc_EGLM_TacReload.p3d";
	};
	class hlc_wp_SCARH_CQC_SRX: hlc_WP_SCARH_CQC
	{
		author="Toadie";
		dlc="Niarms_SCAR";
		displayName="$STR_NIA_rifle_SCARH_CQC_SRX";
		scope=2;
		magazines[]=
		{
			"hlc_20Rnd_762x51_B_SCARH_tan",
			"hlc_20Rnd_762x51_mk316_SCARH_tan",
			"hlc_20Rnd_762x51_Barrier_SCARH_tan",
			"hlc_20Rnd_762x51_t_SCARH_tan",
			"hlc_20Rnd_762x51_TDim_SCARH_tan",
			"hlc_20rnd_762x51_M_SCARH_tan",
			"hlc_20rnd_762x51_MDIM_SCARH_tan",
			"hlc_20Rnd_762x51_S_SCARH_tan",
			"hlc_20Rnd_762x51_S_SCARH_tan",
			"hlc_20Rnd_762x51_B_SCARH",
			"hlc_20Rnd_762x51_mk316_SCARH",
			"hlc_20Rnd_762x51_Barrier_SCARH",
			"hlc_20Rnd_762x51_t_SCARH",
			"hlc_20Rnd_762x51_TDim_SCARH",
			"hlc_20rnd_762x51_M_SCARH",
			"hlc_20rnd_762x51_MDIM_SCARH",
			"hlc_20Rnd_762x51_S_SCARH",
			"hlc_20Rnd_762x51_B_SCARH_camo",
			"hlc_20Rnd_762x51_mk316_SCARH_camo",
			"hlc_20Rnd_762x51_Barrier_SCARH_camo",
			"hlc_20Rnd_762x51_t_SCARH_camo",
			"hlc_20Rnd_762x51_TDim_SCARH_camo",
			"hlc_20rnd_762x51_M_SCARH_camo",
			"hlc_20rnd_762x51_MDIM_SCARH_camo",
			"hlc_20Rnd_762x51_S_SCARH_camo",
			"hlc_20Rnd_762x51_B_SCARH_MW2",
			"hlc_20Rnd_762x51_barrier_SCARH_MW2",
			"hlc_20Rnd_762x51_mk316_SCARH_MW2",
			"hlc_20Rnd_762x51_TDIM_SCARH_MW2",
			"hlc_20Rnd_762x51_T_SCARH_MW2",
			"hlc_20Rnd_762x51_M_SCARH_MW2",
			"hlc_20Rnd_762x51_MDIM_SCARH_MW2",
			"hlc_20Rnd_762x51_S_SCARH_MW2",
			"hlc_10Rnd_762x51_B_SCARH_tan",
			"hlc_10Rnd_762x51_mk316_SCARH_tan",
			"hlc_10Rnd_762x51_Barrier_SCARH_tan",
			"hlc_10Rnd_762x51_t_SCARH_tan",
			"hlc_10Rnd_762x51_TDim_SCARH_tan",
			"hlc_10Rnd_762x51_S_SCARH_tan",
			"hlc_10Rnd_762x51_B_SCARH",
			"hlc_10Rnd_762x51_mk316_SCARH",
			"hlc_10Rnd_762x51_Barrier_SCARH",
			"hlc_10Rnd_762x51_t_SCARH",
			"hlc_10Rnd_762x51_TDim_SCARH",
			"hlc_10Rnd_762x51_S_SCARH",
			"hlc_10Rnd_762x51_B_SCARH_camo",
			"hlc_10Rnd_762x51_mk316_SCARH_camo",
			"hlc_10Rnd_762x51_Barrier_SCARH_camo",
			"hlc_10Rnd_762x51_t_SCARH_camo",
			"hlc_10Rnd_762x51_TDim_SCARH_camo",
			"hlc_10Rnd_762x51_S_SCARH_camo"
		};
		magazineWell[]=
		{
			"CBA_762x51_SCAR"
		};
		baseWeapon="hlc_wp_SCARH_CQC_SRX";
		mass=80.965195;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=80.965195;
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
				class compatibleItems: compatibleItems
				{
					HLC_Panel_Side_SCAR_Long_FN5cm_Desert=1;
					HLC_Panel_Side_SCAR_Long_2xFN5cm_Desert=1;
					HLC_Panel_Side_SCAR_Long_FN10cm_Desert=1;
					HLC_Panel_Side_SCAR_Long_FN15cm_Desert=1;
					HLC_Panel_Side_SCAR_Long_Ladder_S_Desert=1;
					HLC_Panel_Side_SCAR_Long_Ladder_M_Desert=1;
					HLC_Panel_Side_SCAR_Long_Ladder_L_Desert=1;
					HLC_Panel_Side_SCAR_Long_MagpulXT_Desert=1;
					HLC_Panel_Side_SCAR_Long_XTME_Desert=1;
					HLC_Panel_Side_SCAR_Long_2xXTME_Desert=1;
					HLC_Panel_Side_SCAR_Long_4xXTME_Desert=1;
					HLC_Panel_Side_SCAR_Long_FN5cm_Black=1;
					HLC_Panel_Side_SCAR_Long_2xFN5cm_Black=1;
					HLC_Panel_Side_SCAR_Long_FN10cm_Black=1;
					HLC_Panel_Side_SCAR_Long_FN15cm_Black=1;
					HLC_Panel_Side_SCAR_Long_Ladder_S_Black=1;
					HLC_Panel_Side_SCAR_Long_Ladder_M_Black=1;
					HLC_Panel_Side_SCAR_Long_Ladder_L_Black=1;
					HLC_Panel_Side_SCAR_Long_MagpulXT_Black=1;
					HLC_Panel_Side_SCAR_Long_XTME_Black=1;
					HLC_Panel_Side_SCAR_Long_2xXTME_Black=1;
					HLC_Panel_Side_SCAR_Long_4xXTME_Black=1;
					HLC_Panel_Side_SCAR_Long_FN5cm_OD=1;
					HLC_Panel_Side_SCAR_Long_2xFN5cm_OD=1;
					HLC_Panel_Side_SCAR_Long_FN10cm_OD=1;
					HLC_Panel_Side_SCAR_Long_FN15cm_OD=1;
					HLC_Panel_Side_SCAR_Long_Ladder_S_OD=1;
					HLC_Panel_Side_SCAR_Long_Ladder_M_OD=1;
					HLC_Panel_Side_SCAR_Long_Ladder_L_OD=1;
					HLC_Panel_Side_SCAR_Long_MagpulXT_OD=1;
					HLC_Panel_Side_SCAR_Long_XTME_OD=1;
					HLC_Panel_Side_SCAR_Long_2xXTME_OD=1;
					HLC_Panel_Side_SCAR_Long_4xXTME_OD=1;
					HLC_Panel_Side_SCAR_Long_FN5cm_RG=1;
					HLC_Panel_Side_SCAR_Long_2xFN5cm_RG=1;
					HLC_Panel_Side_SCAR_Long_FN10cm_RG=1;
					HLC_Panel_Side_SCAR_Long_FN15cm_RG=1;
					HLC_Panel_Side_SCAR_Long_Ladder_S_RG=1;
					HLC_Panel_Side_SCAR_Long_Ladder_M_RG=1;
					HLC_Panel_Side_SCAR_Long_Ladder_L_RG=1;
					HLC_Panel_Side_SCAR_Long_MagpulXT_RG=1;
					HLC_Panel_Side_SCAR_Long_XTME_RG=1;
					HLC_Panel_Side_SCAR_Long_2xXTME_RG=1;
					HLC_Panel_Side_SCAR_Long_4xXTME_RG=1;
					HLC_Panel_Side_SCAR_Long_Ladder_S_Pride=1;
					HLC_Panel_Side_SCAR_Long_Ladder_M_Pride=1;
					HLC_Panel_Side_SCAR_Long_Ladder_L_Pride=1;
					HLC_Panel_Side_SCAR_Long_MagpulXT_Pride=1;
				};
			};
			class MuzzleSlot: asdg_MuzzleSlot_762
			{
				iconPosition[]={0,0};
				iconScale=1;
				iconPicture="\A3\Weapons_F\Data\clear_empty.paa";
				iconPinPoint="Left";
			};
		};
		inertia="(0.349 + 0.024)";
		dexterity=1.4050925;
		aimTransitionSpeed=0.98356473;
		class LinkedItems
		{
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="hlc_muzzle_FSC30";
			};
		};
		model="nia_wp_SCAR\mesh\rifle\SCARH_CQC_SRX.p3d";
		picture="\nia_wp_SCAR\tex\ui\hlc_wp_SCARH_CQC_SRX_ca";
		UiPicture="\A3\weapons_f\data\UI\icon_regular_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"nia_wp_SCAR\tex\toadie_SCAR\scar_common_tan_co.paa",
			"nia_wp_SCAR\tex\toadie_SCAR\scar_lower_tan_co.paa",
			"nia_wp_SCAR\tex\toadie_SCAR\stock_tan_co.paa",
			"nia_wp_SCAR\tex\toadie_SCAR\upper_scarh_tan_co.paa",
			"nia_wp_SCAR\tex\map3_co.paa",
			"nia_wp_SCAR\tex\mapyes_co.paa",
			"nia_wp_SCAR\tex\toadie_SCAR\acc_extensions_co.paa"
		};
		HiddenSelectionsMaterials[]=
		{
			"nia_wp_SCAR\mat\scar_common.rvmat",
			"nia_wp_SCAR\mat\scar_lowers.rvmat",
			"nia_wp_SCAR\mat\scar_stock.rvmat",
			"nia_wp_SCAR\mat\scar_upper_scarh.rvmat",
			"nia_wp_SCAR\mat\map3.rvmat",
			"nia_wp_SCAR\mat\mapyes.rvmat",
			"nia_wp_SCAR\mat\Acc_Extensions.rvmat"
		};
		class nia_magSwitch
		{
			hlc_10Rnd_762x51_B_SCARH_tan="hlc_wp_SCARH_CQC_SRX_10Rnd";
			hlc_10Rnd_762x51_mk316_SCARH_tan="hlc_wp_SCARH_CQC_SRX_10Rnd";
			hlc_10Rnd_762x51_Barrier_SCARH_tan="hlc_wp_SCARH_CQC_SRX_10Rnd";
			hlc_10Rnd_762x51_t_SCARH_tan="hlc_wp_SCARH_CQC_SRX_10Rnd";
			hlc_10Rnd_762x51_TDim_SCARH_tan="hlc_wp_SCARH_CQC_SRX_10Rnd";
			hlc_10Rnd_762x51_S_SCARH_tan="hlc_wp_SCARH_CQC_SRX_10Rnd";
			hlc_10Rnd_762x51_B_SCARH="hlc_wp_SCARH_CQC_SRX_10Rnd";
			hlc_10Rnd_762x51_mk316_SCARH="hlc_wp_SCARH_CQC_SRX_10Rnd";
			hlc_10Rnd_762x51_Barrier_SCARH="hlc_wp_SCARH_CQC_SRX_10Rnd";
			hlc_10Rnd_762x51_t_SCARH="hlc_wp_SCARH_CQC_SRX_10Rnd";
			hlc_10Rnd_762x51_TDim_SCARH="hlc_wp_SCARH_CQC_SRX_10Rnd";
			hlc_10Rnd_762x51_S_SCARH="hlc_wp_SCARH_CQC_SRX_10Rnd";
			hlc_10Rnd_762x51_B_SCARH_camo="hlc_wp_SCARH_CQC_SRX_10Rnd";
			hlc_10Rnd_762x51_mk316_SCARH_camo="hlc_wp_SCARH_CQC_SRX_10Rnd";
			hlc_10Rnd_762x51_Barrier_SCARH_camo="hlc_wp_SCARH_CQC_SRX_10Rnd";
			hlc_10Rnd_762x51_t_SCARH_camo="hlc_wp_SCARH_CQC_SRX_10Rnd";
			hlc_10Rnd_762x51_TDim_SCARH_camo="hlc_wp_SCARH_CQC_SRX_10Rnd";
			hlc_10Rnd_762x51_S_SCARH_camo="hlc_wp_SCARH_CQC_SRX_10Rnd";
			default="hlc_wp_SCARH_CQC_SRX";
		};
		class nia_gripSwitch
		{
			VFG="hlc_wp_SCARH_CQC_SRX_grip";
			AFG="hlc_wp_SCARH_CQC_SRX_grip2";
			VFG2="hlc_wp_SCARH_CQC_SRX_grip3";
			default="hlc_wp_SCARH_CQC_SRX";
		};
		rhs_grip1_change="hlc_wp_SCARH_CQC_SRX_grip";
		rhs_grip2_change="hlc_wp_SCARH_CQC_SRX_grip2";
		rhs_grip3_change="hlc_wp_SCARH_CQC_SRX_grip3";
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
			class hlc_wp_SCARH_CQC_SRX
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SCARH_CQC_SRX_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARH_CQC_SRX_TacReload: hlc_wp_SCARH_CQC_SRX
	{
		magazineReloadSwitchPhase="(40 / 96)";
		scopeArsenal=0;
		reloadMagazineSound[]=
		{
			"\nia_wp_SCAR\snd\mk17_reload_Partial.ogg",
			0.85000002,
			1,
			25
		};
		reloadAction="NIA_GestureReload_Mk17_Tactical";
		model="nia_wp_SCAR\mesh\Rifle\SCARH_CQC_SRX_TacReload.p3d";
		rhs_grip1_change="hlc_wp_SCARH_CQC_SRX_grip";
		rhs_grip2_change="hlc_wp_SCARH_CQC_SRX_grip2";
		rhs_grip3_change="hlc_wp_SCARH_CQC_SRX_grip3";
		class nia_gripSwitch
		{
			VFG="hlc_wp_SCARH_CQC_SRX_grip";
			AFG="hlc_wp_SCARH_CQC_SRX_grip2";
			VFG2="hlc_wp_SCARH_CQC_SRX_grip3";
			default="hlc_wp_SCARH_CQC_SRX_TacReload";
		};
	};
	class hlc_wp_SCARH_CQC_SRX_grip: hlc_wp_SCARH_CQC_SRX
	{
		scopeArsenal=0;
		dexterity=1.5327734;
		aimTransitionSpeed=1.0729413;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handpose_VFG.rtm"
		};
		class nia_magSwitch
		{
			hlc_10Rnd_762x51_B_SCARH_tan="hlc_wp_SCARH_CQC_SRX_10Rnd_grip";
			hlc_10Rnd_762x51_mk316_SCARH_tan="hlc_wp_SCARH_CQC_SRX_10Rnd_grip";
			hlc_10Rnd_762x51_Barrier_SCARH_tan="hlc_wp_SCARH_CQC_SRX_10Rnd_grip";
			hlc_10Rnd_762x51_t_SCARH_tan="hlc_wp_SCARH_CQC_SRX_10Rnd_grip";
			hlc_10Rnd_762x51_TDim_SCARH_tan="hlc_wp_SCARH_CQC_SRX_10Rnd_grip";
			hlc_10Rnd_762x51_S_SCARH_tan="hlc_wp_SCARH_CQC_SRX_10Rnd_grip";
			hlc_10Rnd_762x51_B_SCARH="hlc_wp_SCARH_CQC_SRX_10Rnd_grip";
			hlc_10Rnd_762x51_mk316_SCARH="hlc_wp_SCARH_CQC_SRX_10Rnd_grip";
			hlc_10Rnd_762x51_Barrier_SCARH="hlc_wp_SCARH_CQC_SRX_10Rnd_grip";
			hlc_10Rnd_762x51_t_SCARH="hlc_wp_SCARH_CQC_SRX_10Rnd_grip";
			hlc_10Rnd_762x51_TDim_SCARH="hlc_wp_SCARH_CQC_SRX_10Rnd_grip";
			hlc_10Rnd_762x51_S_SCARH="hlc_wp_SCARH_CQC_SRX_10Rnd_grip";
			hlc_10Rnd_762x51_B_SCARH_camo="hlc_wp_SCARH_CQC_SRX_10Rnd_grip";
			hlc_10Rnd_762x51_mk316_SCARH_camo="hlc_wp_SCARH_CQC_SRX_10Rnd_grip";
			hlc_10Rnd_762x51_Barrier_SCARH_camo="hlc_wp_SCARH_CQC_SRX_10Rnd_grip";
			hlc_10Rnd_762x51_t_SCARH_camo="hlc_wp_SCARH_CQC_SRX_10Rnd_grip";
			hlc_10Rnd_762x51_TDim_SCARH_camo="hlc_wp_SCARH_CQC_SRX_10Rnd_grip";
			hlc_10Rnd_762x51_S_SCARH_camo="hlc_wp_SCARH_CQC_SRX_10Rnd_grip";
			default="hlc_wp_SCARH_CQC_SRX_grip";
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
			class hlc_wp_SCARH_CQC_SRX_grip
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SCARH_CQC_SRX_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARH_CQC_SRX_grip2: hlc_wp_SCARH_CQC_SRX
	{
		scopeArsenal=0;
		inertia="(0.363*0.85)";
		dexterity=1.5327734;
		aimTransitionSpeed=1.0729413;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handpose_AFG.rtm"
		};
		class nia_magSwitch
		{
			hlc_10Rnd_762x51_B_SCARH_tan="hlc_wp_SCARH_CQC_SRX_10Rnd_grip2";
			hlc_10Rnd_762x51_mk316_SCARH_tan="hlc_wp_SCARH_CQC_SRX_10Rnd_grip2";
			hlc_10Rnd_762x51_Barrier_SCARH_tan="hlc_wp_SCARH_CQC_SRX_10Rnd_grip2";
			hlc_10Rnd_762x51_t_SCARH_tan="hlc_wp_SCARH_CQC_SRX_10Rnd_grip2";
			hlc_10Rnd_762x51_TDim_SCARH_tan="hlc_wp_SCARH_CQC_SRX_10Rnd_grip2";
			hlc_10Rnd_762x51_S_SCARH_tan="hlc_wp_SCARH_CQC_SRX_10Rnd_grip2";
			hlc_10Rnd_762x51_B_SCARH="hlc_wp_SCARH_CQC_SRX_10Rnd_grip2";
			hlc_10Rnd_762x51_mk316_SCARH="hlc_wp_SCARH_CQC_SRX_10Rnd_grip2";
			hlc_10Rnd_762x51_Barrier_SCARH="hlc_wp_SCARH_CQC_SRX_10Rnd_grip2";
			hlc_10Rnd_762x51_t_SCARH="hlc_wp_SCARH_CQC_SRX_10Rnd_grip2";
			hlc_10Rnd_762x51_TDim_SCARH="hlc_wp_SCARH_CQC_SRX_10Rnd_grip2";
			hlc_10Rnd_762x51_S_SCARH="hlc_wp_SCARH_CQC_SRX_10Rnd_grip2";
			hlc_10Rnd_762x51_B_SCARH_camo="hlc_wp_SCARH_CQC_SRX_10Rnd_grip2";
			hlc_10Rnd_762x51_mk316_SCARH_camo="hlc_wp_SCARH_CQC_SRX_10Rnd_grip2";
			hlc_10Rnd_762x51_Barrier_SCARH_camo="hlc_wp_SCARH_CQC_SRX_10Rnd_grip2";
			hlc_10Rnd_762x51_t_SCARH_camo="hlc_wp_SCARH_CQC_SRX_10Rnd_grip2";
			hlc_10Rnd_762x51_TDim_SCARH_camo="hlc_wp_SCARH_CQC_SRX_10Rnd_grip2";
			hlc_10Rnd_762x51_S_SCARH_camo="hlc_wp_SCARH_CQC_SRX_10Rnd_grip2";
			default="hlc_wp_SCARH_CQC_SRX_grip2";
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
			class hlc_wp_SCARH_CQC_SRX_grip2
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SCARH_CQC_SRX_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARH_CQC_SRX_grip3: hlc_wp_SCARH_CQC_SRX
	{
		scopeArsenal=0;
		dexterity=1.5327734;
		aimTransitionSpeed=1.0729413;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handpose_VFG.rtm"
		};
		class nia_magSwitch
		{
			hlc_10Rnd_762x51_B_SCARH_tan="hlc_wp_SCARH_CQC_SRX_10Rnd_grip3";
			hlc_10Rnd_762x51_mk316_SCARH_tan="hlc_wp_SCARH_CQC_SRX_10Rnd_grip3";
			hlc_10Rnd_762x51_Barrier_SCARH_tan="hlc_wp_SCARH_CQC_SRX_10Rnd_grip3";
			hlc_10Rnd_762x51_t_SCARH_tan="hlc_wp_SCARH_CQC_SRX_10Rnd_grip3";
			hlc_10Rnd_762x51_TDim_SCARH_tan="hlc_wp_SCARH_CQC_SRX_10Rnd_grip3";
			hlc_10Rnd_762x51_S_SCARH_tan="hlc_wp_SCARH_CQC_SRX_10Rnd_grip3";
			hlc_10Rnd_762x51_B_SCARH="hlc_wp_SCARH_CQC_SRX_10Rnd_grip3";
			hlc_10Rnd_762x51_mk316_SCARH="hlc_wp_SCARH_CQC_SRX_10Rnd_grip3";
			hlc_10Rnd_762x51_Barrier_SCARH="hlc_wp_SCARH_CQC_SRX_10Rnd_grip3";
			hlc_10Rnd_762x51_t_SCARH="hlc_wp_SCARH_CQC_SRX_10Rnd_grip3";
			hlc_10Rnd_762x51_TDim_SCARH="hlc_wp_SCARH_CQC_SRX_10Rnd_grip3";
			hlc_10Rnd_762x51_S_SCARH="hlc_wp_SCARH_CQC_SRX_10Rnd_grip3";
			hlc_10Rnd_762x51_B_SCARH_camo="hlc_wp_SCARH_CQC_SRX_10Rnd_grip3";
			hlc_10Rnd_762x51_mk316_SCARH_camo="hlc_wp_SCARH_CQC_SRX_10Rnd_grip3";
			hlc_10Rnd_762x51_Barrier_SCARH_camo="hlc_wp_SCARH_CQC_SRX_10Rnd_grip3";
			hlc_10Rnd_762x51_t_SCARH_camo="hlc_wp_SCARH_CQC_SRX_10Rnd_grip3";
			hlc_10Rnd_762x51_TDim_SCARH_camo="hlc_wp_SCARH_CQC_SRX_10Rnd_grip3";
			hlc_10Rnd_762x51_S_SCARH_camo="hlc_wp_SCARH_CQC_SRX_10Rnd_grip3";
			default="hlc_wp_SCARH_CQC_SRX_grip3";
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
			class hlc_wp_SCARH_CQC_SRX_grip3
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SCARH_CQC_SRX_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARH_CQC_SRX_10rnd: hlc_wp_SCARH_CQC_SRX
	{
		scopeArsenal=0;
		reloadAction="NIA_GestureReload_Mk17_10rnd";
		baseweapon="hlc_wp_SCARH_CQC_SRX_10rnd";
		class nia_gripSwitch
		{
			VFG="hlc_wp_SCARH_CQC_SRX_10rnd_grip";
			AFG="hlc_wp_SCARH_CQC_SRX_10rnd_grip2";
			VFG2="hlc_wp_SCARH_CQC_SRX_10rnd_grip3";
			default="hlc_wp_SCARH_CQC_SRX_10rnd";
		};
		rhs_grip1_change="hlc_wp_SCARH_CQC_SRX_10rnd_grip";
		rhs_grip2_change="hlc_wp_SCARH_CQC_SRX_10rnd_grip2";
		rhs_grip3_change="hlc_wp_SCARH_CQC_SRX_10rnd_grip3";
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
			class hlc_wp_SCARH_CQC_SRX_10rnd
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SCARH_CQC_SRX_10rnd_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARH_CQC_SRX_10rnd_TacReload: hlc_wp_SCARH_CQC_SRX_10rnd
	{
		magazineReloadSwitchPhase="(40 / 96)";
		scopeArsenal=0;
		reloadMagazineSound[]=
		{
			"\nia_wp_SCAR\snd\mk17_reload_Partial.ogg",
			0.85000002,
			1,
			25
		};
		reloadAction="NIA_GestureReload_Mk17_10rnd_Tactical";
		model="nia_wp_SCAR\mesh\Rifle\SCARH_CQC_SRX_TacReload.p3d";
		rhs_grip1_change="hlc_wp_SCARH_CQC_SRX_10rnd_grip";
		rhs_grip2_change="hlc_wp_SCARH_CQC_SRX_10rnd_grip2";
		rhs_grip3_change="hlc_wp_SCARH_CQC_SRX_10rnd_grip3";
		class nia_gripSwitch
		{
			VFG="hlc_wp_SCARH_CQC_SRX_10rnd_grip";
			AFG="hlc_wp_SCARH_CQC_SRX_10rnd_grip2";
			VFG2="hlc_wp_SCARH_CQC_SRX_10rnd_grip3";
			default="hlc_wp_SCARH_CQC_SRX_10rnd_TacReload";
		};
	};
	class hlc_wp_SCARH_CQC_SRX_10rnd_grip: hlc_wp_SCARH_CQC_SRX_10rnd
	{
		scopeArsenal=0;
		dexterity=1.5327734;
		aimTransitionSpeed=1.0729413;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handpose_VFG.rtm"
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
			class hlc_wp_SCARH_CQC_SRX_10rnd_grip
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SCARH_CQC_SRX_10rnd_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARH_CQC_SRX_10rnd_grip2: hlc_wp_SCARH_CQC_SRX_10rnd
	{
		scopeArsenal=0;
		inertia="(0.363*0.85)";
		dexterity=1.5327734;
		aimTransitionSpeed=1.0729413;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handpose_AFG.rtm"
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
			class hlc_wp_SCARH_CQC_SRX_10rnd_grip2
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SCARH_CQC_SRX_10rnd_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARH_CQC_SRX_10rnd_grip3: hlc_wp_SCARH_CQC_SRX_10rnd
	{
		scopeArsenal=0;
		dexterity=1.5327734;
		aimTransitionSpeed=1.0729413;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handpose_VFG.rtm"
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
			class hlc_wp_SCARH_CQC_SRX_10rnd_grip3
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SCARH_CQC_SRX_10rnd_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARH_CQC_SRX_camo: hlc_wp_SCARH_CQC_SRX
	{
		author="Toadie";
		dlc="Niarms_SCAR";
		displayName="$STR_NIA_rifle_SCARH_CQC_SRX_camo";
		scope=2;
		baseWeapon="hlc_wp_SCARH_CQC_SRX_camo";
		picture="\nia_wp_SCAR\tex\ui\hlc_wp_SCARH_CQC_SRX_camo_ca";
		hiddenSelectionsTextures[]=
		{
			"nia_wp_SCAR\tex\toadie_SCAR\scar_common_camo_co.paa",
			"nia_wp_SCAR\tex\toadie_SCAR\scar_lower_camo_co.paa",
			"nia_wp_SCAR\tex\toadie_SCAR\stock_camo_co.paa",
			"nia_wp_SCAR\tex\toadie_SCAR\upper_scarh_camo_co.paa",
			"nia_wp_SCAR\tex\map3_co.paa",
			"nia_wp_SCAR\tex\mapyes_co.paa",
			"nia_wp_SCAR\tex\toadie_SCAR\acc_extensions_camo_co.paa"
		};
		HiddenSelectionsMaterials[]=
		{
			"nia_wp_SCAR\mat\scar_common_camo.rvmat",
			"nia_wp_SCAR\mat\scar_lowers_camo.rvmat",
			"nia_wp_SCAR\mat\scar_stock_camo.rvmat",
			"nia_wp_SCAR\mat\scar_upper_scarh_camo.rvmat",
			"nia_wp_SCAR\mat\map3.rvmat",
			"nia_wp_SCAR\mat\mapyes.rvmat",
			"nia_wp_SCAR\mat\Acc_Extensions_camo.rvmat"
		};
		class nia_magSwitch
		{
			hlc_10Rnd_762x51_B_SCARH_tan="hlc_wp_SCARH_CQC_SRX_camo_10rnd";
			hlc_10Rnd_762x51_mk316_SCARH_tan="hlc_wp_SCARH_CQC_SRX_camo_10rnd";
			hlc_10Rnd_762x51_Barrier_SCARH_tan="hlc_wp_SCARH_CQC_SRX_camo_10rnd";
			hlc_10Rnd_762x51_t_SCARH_tan="hlc_wp_SCARH_CQC_SRX_camo_10rnd";
			hlc_10Rnd_762x51_TDim_SCARH_tan="hlc_wp_SCARH_CQC_SRX_camo_10rnd";
			hlc_10Rnd_762x51_S_SCARH_tan="hlc_wp_SCARH_CQC_SRX_camo_10rnd";
			hlc_10Rnd_762x51_B_SCARH="hlc_wp_SCARH_CQC_SRX_camo_10rnd";
			hlc_10Rnd_762x51_mk316_SCARH="hlc_wp_SCARH_CQC_SRX_camo_10rnd";
			hlc_10Rnd_762x51_Barrier_SCARH="hlc_wp_SCARH_CQC_SRX_camo_10rnd";
			hlc_10Rnd_762x51_t_SCARH="hlc_wp_SCARH_CQC_SRX_camo_10rnd";
			hlc_10Rnd_762x51_TDim_SCARH="hlc_wp_SCARH_CQC_SRX_camo_10rnd";
			hlc_10Rnd_762x51_S_SCARH="hlc_wp_SCARH_CQC_SRX_camo_10rnd";
			hlc_10Rnd_762x51_B_SCARH_camo="hlc_wp_SCARH_CQC_SRX_camo_10rnd";
			hlc_10Rnd_762x51_mk316_SCARH_camo="hlc_wp_SCARH_CQC_SRX_camo_10rnd";
			hlc_10Rnd_762x51_Barrier_SCARH_camo="hlc_wp_SCARH_CQC_SRX_camo_10rnd";
			hlc_10Rnd_762x51_t_SCARH_camo="hlc_wp_SCARH_CQC_SRX_camo_10rnd";
			hlc_10Rnd_762x51_TDim_SCARH_camo="hlc_wp_SCARH_CQC_SRX_camo_10rnd";
			hlc_10Rnd_762x51_S_SCARH_camo="hlc_wp_SCARH_CQC_SRX_camo_10rnd";
			default="hlc_wp_SCARH_CQC_SRX_camo";
		};
		class nia_gripSwitch
		{
			VFG="hlc_wp_SCARH_CQC_SRX_camo_grip";
			AFG="hlc_wp_SCARH_CQC_SRX_camo_grip2";
			VFG2="hlc_wp_SCARH_CQC_SRX_camo_grip3";
			default="hlc_wp_SCARH_CQC_SRX_camo";
		};
		rhs_grip1_change="hlc_wp_SCARH_CQC_SRX_camo_grip";
		rhs_grip2_change="hlc_wp_SCARH_CQC_SRX_camo_grip2";
		rhs_grip3_change="hlc_wp_SCARH_CQC_SRX_camo_grip3";
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
			class hlc_wp_SCARH_CQC_SRX_camo
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SCARH_CQC_SRX_Camo_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARH_CQC_SRX_Camo_TacReload: hlc_wp_SCARH_CQC_SRX_camo
	{
		magazineReloadSwitchPhase="(40 / 96)";
		scopeArsenal=0;
		reloadMagazineSound[]=
		{
			"\nia_wp_SCAR\snd\mk17_reload_Partial.ogg",
			0.85000002,
			1,
			25
		};
		reloadAction="NIA_GestureReload_Mk17_Tactical";
		model="nia_wp_SCAR\mesh\Rifle\SCARH_CQC_SRX_TacReload.p3d";
		rhs_grip1_change="hlc_wp_SCARH_CQC_SRX_Camo_grip";
		rhs_grip2_change="hlc_wp_SCARH_CQC_SRX_Camo_grip2";
		rhs_grip3_change="hlc_wp_SCARH_CQC_SRX_Camo_grip3";
		class nia_gripSwitch
		{
			VFG="hlc_wp_SCARH_CQC_SRX_Camo_grip";
			AFG="hlc_wp_SCARH_CQC_SRX_Camo_grip2";
			VFG2="hlc_wp_SCARH_CQC_SRX_Camo_grip3";
			default="hlc_wp_SCARH_CQC_SRX_Camo_TacReload";
		};
	};
	class hlc_wp_SCARH_CQC_SRX_Camo_grip: hlc_wp_SCARH_CQC_SRX_camo
	{
		scopeArsenal=0;
		dexterity=1.5327734;
		aimTransitionSpeed=1.0729413;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handpose_VFG.rtm"
		};
		class nia_magSwitch
		{
			hlc_10Rnd_762x51_B_SCARH_tan="hlc_wp_SCARH_CQC_SRX_Camo_10Rnd_grip";
			hlc_10Rnd_762x51_mk316_SCARH_tan="hlc_wp_SCARH_CQC_SRX_Camo_10Rnd_grip";
			hlc_10Rnd_762x51_Barrier_SCARH_tan="hlc_wp_SCARH_CQC_SRX_Camo_10Rnd_grip";
			hlc_10Rnd_762x51_t_SCARH_tan="hlc_wp_SCARH_CQC_SRX_Camo_10Rnd_grip";
			hlc_10Rnd_762x51_TDim_SCARH_tan="hlc_wp_SCARH_CQC_SRX_Camo_10Rnd_grip";
			hlc_10Rnd_762x51_S_SCARH_tan="hlc_wp_SCARH_CQC_SRX_Camo_10Rnd_grip";
			hlc_10Rnd_762x51_B_SCARH="hlc_wp_SCARH_CQC_SRX_Camo_10Rnd_grip";
			hlc_10Rnd_762x51_mk316_SCARH="hlc_wp_SCARH_CQC_SRX_Camo_10Rnd_grip";
			hlc_10Rnd_762x51_Barrier_SCARH="hlc_wp_SCARH_CQC_SRX_Camo_10Rnd_grip";
			hlc_10Rnd_762x51_t_SCARH="hlc_wp_SCARH_CQC_SRX_Camo_10Rnd_grip";
			hlc_10Rnd_762x51_TDim_SCARH="hlc_wp_SCARH_CQC_SRX_Camo_10Rnd_grip";
			hlc_10Rnd_762x51_S_SCARH="hlc_wp_SCARH_CQC_SRX_Camo_10Rnd_grip";
			hlc_10Rnd_762x51_B_SCARH_camo="hlc_wp_SCARH_CQC_SRX_Camo_10Rnd_grip";
			hlc_10Rnd_762x51_mk316_SCARH_camo="hlc_wp_SCARH_CQC_SRX_Camo_10Rnd_grip";
			hlc_10Rnd_762x51_Barrier_SCARH_camo="hlc_wp_SCARH_CQC_SRX_Camo_10Rnd_grip";
			hlc_10Rnd_762x51_t_SCARH_camo="hlc_wp_SCARH_CQC_SRX_Camo_10Rnd_grip";
			hlc_10Rnd_762x51_TDim_SCARH_camo="hlc_wp_SCARH_CQC_SRX_Camo_10Rnd_grip";
			hlc_10Rnd_762x51_S_SCARH_camo="hlc_wp_SCARH_CQC_SRX_Camo_10Rnd_grip";
			default="hlc_wp_SCARH_CQC_SRX_Camo_grip";
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
			class hlc_wp_SCARH_CQC_SRX_Camo_grip
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SCARH_CQC_SRX_Camo_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARH_CQC_SRX_Camo_grip2: hlc_wp_SCARH_CQC_SRX_camo
	{
		scopeArsenal=0;
		inertia="(0.363*0.85)";
		dexterity=1.5327734;
		aimTransitionSpeed=1.0729413;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handpose_AFG.rtm"
		};
		class nia_magSwitch
		{
			hlc_10Rnd_762x51_B_SCARH_tan="hlc_wp_SCARH_CQC_SRX_Camo_10Rnd_grip2";
			hlc_10Rnd_762x51_mk316_SCARH_tan="hlc_wp_SCARH_CQC_SRX_Camo_10Rnd_grip2";
			hlc_10Rnd_762x51_Barrier_SCARH_tan="hlc_wp_SCARH_CQC_SRX_Camo_10Rnd_grip2";
			hlc_10Rnd_762x51_t_SCARH_tan="hlc_wp_SCARH_CQC_SRX_Camo_10Rnd_grip2";
			hlc_10Rnd_762x51_TDim_SCARH_tan="hlc_wp_SCARH_CQC_SRX_Camo_10Rnd_grip2";
			hlc_10Rnd_762x51_S_SCARH_tan="hlc_wp_SCARH_CQC_SRX_Camo_10Rnd_grip2";
			hlc_10Rnd_762x51_B_SCARH="hlc_wp_SCARH_CQC_SRX_Camo_10Rnd_grip2";
			hlc_10Rnd_762x51_mk316_SCARH="hlc_wp_SCARH_CQC_SRX_Camo_10Rnd_grip2";
			hlc_10Rnd_762x51_Barrier_SCARH="hlc_wp_SCARH_CQC_SRX_Camo_10Rnd_grip2";
			hlc_10Rnd_762x51_t_SCARH="hlc_wp_SCARH_CQC_SRX_Camo_10Rnd_grip2";
			hlc_10Rnd_762x51_TDim_SCARH="hlc_wp_SCARH_CQC_SRX_Camo_10Rnd_grip2";
			hlc_10Rnd_762x51_S_SCARH="hlc_wp_SCARH_CQC_SRX_Camo_10Rnd_grip2";
			hlc_10Rnd_762x51_B_SCARH_camo="hlc_wp_SCARH_CQC_SRX_Camo_10Rnd_grip2";
			hlc_10Rnd_762x51_mk316_SCARH_camo="hlc_wp_SCARH_CQC_SRX_Camo_10Rnd_grip2";
			hlc_10Rnd_762x51_Barrier_SCARH_camo="hlc_wp_SCARH_CQC_SRX_Camo_10Rnd_grip2";
			hlc_10Rnd_762x51_t_SCARH_camo="hlc_wp_SCARH_CQC_SRX_Camo_10Rnd_grip2";
			hlc_10Rnd_762x51_TDim_SCARH_camo="hlc_wp_SCARH_CQC_SRX_Camo_10Rnd_grip2";
			hlc_10Rnd_762x51_S_SCARH_camo="hlc_wp_SCARH_CQC_SRX_Camo_10Rnd_grip2";
			default="hlc_wp_SCARH_CQC_SRX_Camo_grip2";
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
			class hlc_wp_SCARH_CQC_SRX_Camo_grip2
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SCARH_CQC_SRX_Camo_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARH_CQC_SRX_Camo_grip3: hlc_wp_SCARH_CQC_SRX_camo
	{
		scopeArsenal=0;
		dexterity=1.5327734;
		aimTransitionSpeed=1.0729413;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handpose_VFG.rtm"
		};
		class nia_magSwitch
		{
			hlc_10Rnd_762x51_B_SCARH_tan="hlc_wp_SCARH_CQC_SRX_Camo_10Rnd_grip3";
			hlc_10Rnd_762x51_mk316_SCARH_tan="hlc_wp_SCARH_CQC_SRX_Camo_10Rnd_grip3";
			hlc_10Rnd_762x51_Barrier_SCARH_tan="hlc_wp_SCARH_CQC_SRX_Camo_10Rnd_grip3";
			hlc_10Rnd_762x51_t_SCARH_tan="hlc_wp_SCARH_CQC_SRX_Camo_10Rnd_grip3";
			hlc_10Rnd_762x51_TDim_SCARH_tan="hlc_wp_SCARH_CQC_SRX_Camo_10Rnd_grip3";
			hlc_10Rnd_762x51_S_SCARH_tan="hlc_wp_SCARH_CQC_SRX_Camo_10Rnd_grip3";
			hlc_10Rnd_762x51_B_SCARH="hlc_wp_SCARH_CQC_SRX_Camo_10Rnd_grip3";
			hlc_10Rnd_762x51_mk316_SCARH="hlc_wp_SCARH_CQC_SRX_Camo_10Rnd_grip3";
			hlc_10Rnd_762x51_Barrier_SCARH="hlc_wp_SCARH_CQC_SRX_Camo_10Rnd_grip3";
			hlc_10Rnd_762x51_t_SCARH="hlc_wp_SCARH_CQC_SRX_Camo_10Rnd_grip3";
			hlc_10Rnd_762x51_TDim_SCARH="hlc_wp_SCARH_CQC_SRX_Camo_10Rnd_grip3";
			hlc_10Rnd_762x51_S_SCARH="hlc_wp_SCARH_CQC_SRX_Camo_10Rnd_grip3";
			hlc_10Rnd_762x51_B_SCARH_camo="hlc_wp_SCARH_CQC_SRX_Camo_10Rnd_grip3";
			hlc_10Rnd_762x51_mk316_SCARH_camo="hlc_wp_SCARH_CQC_SRX_Camo_10Rnd_grip3";
			hlc_10Rnd_762x51_Barrier_SCARH_camo="hlc_wp_SCARH_CQC_SRX_Camo_10Rnd_grip3";
			hlc_10Rnd_762x51_t_SCARH_camo="hlc_wp_SCARH_CQC_SRX_Camo_10Rnd_grip3";
			hlc_10Rnd_762x51_TDim_SCARH_camo="hlc_wp_SCARH_CQC_SRX_Camo_10Rnd_grip3";
			hlc_10Rnd_762x51_S_SCARH_camo="hlc_wp_SCARH_CQC_SRX_Camo_10Rnd_grip3";
			default="hlc_wp_SCARH_CQC_SRX_Camo_grip3";
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
			class hlc_wp_SCARH_CQC_SRX_Camo_grip3
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SCARH_CQC_SRX_Camo_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARH_CQC_SRX_Camo_10rnd: hlc_wp_SCARH_CQC_SRX_camo
	{
		scopeArsenal=0;
		reloadAction="NIA_GestureReload_Mk17_10rnd";
		baseweapon="hlc_wp_SCARH_CQC_SRX_Camo_10rnd";
		class nia_gripSwitch
		{
			VFG="hlc_wp_SCARH_CQC_SRX_Camo_10rnd_grip";
			AFG="hlc_wp_SCARH_CQC_SRX_Camo_10rnd_grip2";
			VFG2="hlc_wp_SCARH_CQC_SRX_Camo_10rnd_grip3";
			default="hlc_wp_SCARH_CQC_SRX_Camo_10rnd";
		};
		rhs_grip1_change="hlc_wp_SCARH_CQC_SRX_Camo_10rnd_grip";
		rhs_grip2_change="hlc_wp_SCARH_CQC_SRX_Camo_10rnd_grip2";
		rhs_grip3_change="hlc_wp_SCARH_CQC_SRX_Camo_10rnd_grip3";
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
			class hlc_wp_SCARH_CQC_SRX_Camo_10rnd
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SCARH_CQC_SRX_Camo_10rnd_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARH_CQC_SRX_Camo_10rnd_TacReload: hlc_wp_SCARH_CQC_SRX_Camo_10rnd
	{
		magazineReloadSwitchPhase="(40 / 96)";
		scopeArsenal=0;
		reloadMagazineSound[]=
		{
			"\nia_wp_SCAR\snd\mk17_reload_Partial.ogg",
			0.85000002,
			1,
			25
		};
		reloadAction="NIA_GestureReload_Mk17_10rnd_Tactical";
		model="nia_wp_SCAR\mesh\Rifle\SCARH_CQC_SRX_TacReload.p3d";
		rhs_grip1_change="hlc_wp_SCARH_CQC_SRX_Camo_10rnd_grip";
		rhs_grip2_change="hlc_wp_SCARH_CQC_SRX_Camo_10rnd_grip2";
		rhs_grip3_change="hlc_wp_SCARH_CQC_SRX_Camo_10rnd_grip3";
		class nia_gripSwitch
		{
			VFG="hlc_wp_SCARH_CQC_SRX_Camo_10rnd_grip";
			AFG="hlc_wp_SCARH_CQC_SRX_Camo_10rnd_grip2";
			VFG2="hlc_wp_SCARH_CQC_SRX_Camo_10rnd_grip3";
			default="hlc_wp_SCARH_CQC_SRX_Camo_10rnd_TacReload";
		};
	};
	class hlc_wp_SCARH_CQC_SRX_Camo_10rnd_grip: hlc_wp_SCARH_CQC_SRX_Camo_10rnd
	{
		scopeArsenal=0;
		dexterity=1.5327734;
		aimTransitionSpeed=1.0729413;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handpose_VFG.rtm"
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
			class hlc_wp_SCARH_CQC_SRX_Camo_10rnd_grip
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SCARH_CQC_SRX_Camo_10rnd_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARH_CQC_SRX_Camo_10rnd_grip2: hlc_wp_SCARH_CQC_SRX_Camo_10rnd
	{
		scopeArsenal=0;
		inertia="(0.363*0.85)";
		dexterity=1.5327734;
		aimTransitionSpeed=1.0729413;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handpose_AFG.rtm"
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
			class hlc_wp_SCARH_CQC_SRX_Camo_10rnd_grip2
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SCARH_CQC_SRX_Camo_10rnd_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARH_CQC_SRX_Camo_10rnd_grip3: hlc_wp_SCARH_CQC_SRX_Camo_10rnd
	{
		scopeArsenal=0;
		dexterity=1.5327734;
		aimTransitionSpeed=1.0729413;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handpose_VFG.rtm"
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
			class hlc_wp_SCARH_CQC_SRX_Camo_10rnd_grip3
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SCARH_CQC_SRX_Camo_10rnd_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARH_CQC_SRX_tranoflage: hlc_wp_SCARH_CQC_SRX
	{
		author="Toadie";
		dlc="Niarms_SCAR";
		displayName="$STR_NIA_rifle_SCARH_CQC_SRX_tranoflage";
		scope=2;
		baseWeapon="hlc_wp_SCARH_CQC_SRX_tranoflage";
		picture="\nia_wp_SCAR\tex\ui\hlc_wp_SCARH_CQC_SRX_tranoflage_ca";
		hiddenSelectionsTextures[]=
		{
			"nia_wp_SCAR\tex\toadie_SCAR\scar_common_GenderMountain_co.paa",
			"nia_wp_SCAR\tex\toadie_SCAR\scar_lower_GenderMountain_co.paa",
			"nia_wp_SCAR\tex\toadie_SCAR\stock_GenderMountain_co.paa",
			"nia_wp_SCAR\tex\toadie_SCAR\upper_scarh_GenderMountain_co.paa",
			"nia_wp_SCAR\tex\map3_co.paa",
			"nia_wp_SCAR\tex\mapyes_co.paa",
			"nia_wp_SCAR\tex\toadie_SCAR\acc_extensions_GenderMountain_co.paa"
		};
		HiddenSelectionsMaterials[]=
		{
			"nia_wp_SCAR\mat\scar_common_camo.rvmat",
			"nia_wp_SCAR\mat\scar_lowers_camo.rvmat",
			"nia_wp_SCAR\mat\scar_stock_camo.rvmat",
			"nia_wp_SCAR\mat\scar_upper_scarh_camo.rvmat",
			"nia_wp_SCAR\mat\map3.rvmat",
			"nia_wp_SCAR\mat\mapyes.rvmat",
			"nia_wp_SCAR\mat\Acc_Extensions_camo.rvmat"
		};
		class LinkedItems
		{
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="hlc_muzzle_Cherrybomb";
			};
			class LinkedItemsUnderslot
			{
				slot="GripodSlot";
				item="hlc_grip_AFG2";
			};
		};
		class nia_magSwitch
		{
			hlc_10Rnd_762x51_B_SCARH_tan="hlc_wp_SCARH_CQC_SRX_tranoflage_10rnd";
			hlc_10Rnd_762x51_mk316_SCARH_tan="hlc_wp_SCARH_CQC_SRX_tranoflage_10rnd";
			hlc_10Rnd_762x51_Barrier_SCARH_tan="hlc_wp_SCARH_CQC_SRX_tranoflage_10rnd";
			hlc_10Rnd_762x51_t_SCARH_tan="hlc_wp_SCARH_CQC_SRX_tranoflage_10rnd";
			hlc_10Rnd_762x51_TDim_SCARH_tan="hlc_wp_SCARH_CQC_SRX_tranoflage_10rnd";
			hlc_10Rnd_762x51_S_SCARH_tan="hlc_wp_SCARH_CQC_SRX_tranoflage_10rnd";
			hlc_10Rnd_762x51_B_SCARH="hlc_wp_SCARH_CQC_SRX_tranoflage_10rnd";
			hlc_10Rnd_762x51_mk316_SCARH="hlc_wp_SCARH_CQC_SRX_tranoflage_10rnd";
			hlc_10Rnd_762x51_Barrier_SCARH="hlc_wp_SCARH_CQC_SRX_tranoflage_10rnd";
			hlc_10Rnd_762x51_t_SCARH="hlc_wp_SCARH_CQC_SRX_tranoflage_10rnd";
			hlc_10Rnd_762x51_TDim_SCARH="hlc_wp_SCARH_CQC_SRX_tranoflage_10rnd";
			hlc_10Rnd_762x51_S_SCARH="hlc_wp_SCARH_CQC_SRX_tranoflage_10rnd";
			hlc_10Rnd_762x51_B_SCARH_tranoflage="hlc_wp_SCARH_CQC_SRX_tranoflage_10rnd";
			hlc_10Rnd_762x51_mk316_SCARH_tranoflage="hlc_wp_SCARH_CQC_SRX_tranoflage_10rnd";
			hlc_10Rnd_762x51_Barrier_SCARH_tranoflage="hlc_wp_SCARH_CQC_SRX_tranoflage_10rnd";
			hlc_10Rnd_762x51_t_SCARH_tranoflage="hlc_wp_SCARH_CQC_SRX_tranoflage_10rnd";
			hlc_10Rnd_762x51_TDim_SCARH_tranoflage="hlc_wp_SCARH_CQC_SRX_tranoflage_10rnd";
			hlc_10Rnd_762x51_S_SCARH_tranoflage="hlc_wp_SCARH_CQC_SRX_tranoflage_10rnd";
			default="hlc_wp_SCARH_CQC_SRX_tranoflage";
		};
		class nia_gripSwitch
		{
			VFG="hlc_wp_SCARH_CQC_SRX_tranoflage_grip";
			AFG="hlc_wp_SCARH_CQC_SRX_tranoflage_grip2";
			VFG2="hlc_wp_SCARH_CQC_SRX_tranoflage_grip3";
			default="hlc_wp_SCARH_CQC_SRX_tranoflage";
		};
		rhs_grip1_change="hlc_wp_SCARH_CQC_SRX_tranoflage_grip";
		rhs_grip2_change="hlc_wp_SCARH_CQC_SRX_tranoflage_grip2";
		rhs_grip3_change="hlc_wp_SCARH_CQC_SRX_tranoflage_grip3";
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
			class hlc_wp_SCARH_CQC_SRX_Tranoflage
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SCARH_CQC_SRX_Tranoflage_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARH_CQC_SRX_Tranoflage_TacReload: hlc_wp_SCARH_CQC_SRX_tranoflage
	{
		magazineReloadSwitchPhase="(40 / 96)";
		scopeArsenal=0;
		reloadMagazineSound[]=
		{
			"\nia_wp_SCAR\snd\mk17_reload_Partial.ogg",
			0.85000002,
			1,
			25
		};
		reloadAction="NIA_GestureReload_Mk17_Tactical";
		model="nia_wp_SCAR\mesh\Rifle\SCARH_CQC_SRX_TacReload.p3d";
		rhs_grip1_change="hlc_wp_SCARH_CQC_SRX_Tranoflage_grip";
		rhs_grip2_change="hlc_wp_SCARH_CQC_SRX_Tranoflage_grip2";
		rhs_grip3_change="hlc_wp_SCARH_CQC_SRX_Tranoflage_grip3";
		class nia_gripSwitch
		{
			VFG="hlc_wp_SCARH_CQC_SRX_Tranoflage_grip";
			AFG="hlc_wp_SCARH_CQC_SRX_Tranoflage_grip2";
			VFG2="hlc_wp_SCARH_CQC_SRX_Tranoflage_grip3";
			default="hlc_wp_SCARH_CQC_SRX_Tranoflage_TacReload";
		};
	};
	class hlc_wp_SCARH_CQC_SRX_Tranoflage_grip: hlc_wp_SCARH_CQC_SRX_tranoflage
	{
		scopeArsenal=0;
		dexterity=1.5327734;
		aimTransitionSpeed=1.0729413;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handpose_VFG.rtm"
		};
		class nia_magSwitch
		{
			hlc_10Rnd_762x51_B_SCARH_tan="hlc_wp_SCARH_CQC_SRX_Tranoflage_10Rnd_grip";
			hlc_10Rnd_762x51_mk316_SCARH_tan="hlc_wp_SCARH_CQC_SRX_Tranoflage_10Rnd_grip";
			hlc_10Rnd_762x51_Barrier_SCARH_tan="hlc_wp_SCARH_CQC_SRX_Tranoflage_10Rnd_grip";
			hlc_10Rnd_762x51_t_SCARH_tan="hlc_wp_SCARH_CQC_SRX_Tranoflage_10Rnd_grip";
			hlc_10Rnd_762x51_TDim_SCARH_tan="hlc_wp_SCARH_CQC_SRX_Tranoflage_10Rnd_grip";
			hlc_10Rnd_762x51_S_SCARH_tan="hlc_wp_SCARH_CQC_SRX_Tranoflage_10Rnd_grip";
			hlc_10Rnd_762x51_B_SCARH="hlc_wp_SCARH_CQC_SRX_Tranoflage_10Rnd_grip";
			hlc_10Rnd_762x51_mk316_SCARH="hlc_wp_SCARH_CQC_SRX_Tranoflage_10Rnd_grip";
			hlc_10Rnd_762x51_Barrier_SCARH="hlc_wp_SCARH_CQC_SRX_Tranoflage_10Rnd_grip";
			hlc_10Rnd_762x51_t_SCARH="hlc_wp_SCARH_CQC_SRX_Tranoflage_10Rnd_grip";
			hlc_10Rnd_762x51_TDim_SCARH="hlc_wp_SCARH_CQC_SRX_Tranoflage_10Rnd_grip";
			hlc_10Rnd_762x51_S_SCARH="hlc_wp_SCARH_CQC_SRX_Tranoflage_10Rnd_grip";
			hlc_10Rnd_762x51_B_SCARH_Tranoflage="hlc_wp_SCARH_CQC_SRX_Tranoflage_10Rnd_grip";
			hlc_10Rnd_762x51_mk316_SCARH_Tranoflage="hlc_wp_SCARH_CQC_SRX_Tranoflage_10Rnd_grip";
			hlc_10Rnd_762x51_Barrier_SCARH_Tranoflage="hlc_wp_SCARH_CQC_SRX_Tranoflage_10Rnd_grip";
			hlc_10Rnd_762x51_t_SCARH_Tranoflage="hlc_wp_SCARH_CQC_SRX_Tranoflage_10Rnd_grip";
			hlc_10Rnd_762x51_TDim_SCARH_Tranoflage="hlc_wp_SCARH_CQC_SRX_Tranoflage_10Rnd_grip";
			hlc_10Rnd_762x51_S_SCARH_Tranoflage="hlc_wp_SCARH_CQC_SRX_Tranoflage_10Rnd_grip";
			default="hlc_wp_SCARH_CQC_SRX_Tranoflage_grip";
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
			class hlc_wp_SCARH_CQC_SRX_Tranoflage_grip
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SCARH_CQC_SRX_Tranoflage_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARH_CQC_SRX_Tranoflage_grip2: hlc_wp_SCARH_CQC_SRX_tranoflage
	{
		scopeArsenal=0;
		inertia="(0.363*0.85)";
		dexterity=1.5327734;
		aimTransitionSpeed=1.0729413;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handpose_AFG.rtm"
		};
		class nia_magSwitch
		{
			hlc_10Rnd_762x51_B_SCARH_tan="hlc_wp_SCARH_CQC_SRX_Tranoflage_10Rnd_grip2";
			hlc_10Rnd_762x51_mk316_SCARH_tan="hlc_wp_SCARH_CQC_SRX_Tranoflage_10Rnd_grip2";
			hlc_10Rnd_762x51_Barrier_SCARH_tan="hlc_wp_SCARH_CQC_SRX_Tranoflage_10Rnd_grip2";
			hlc_10Rnd_762x51_t_SCARH_tan="hlc_wp_SCARH_CQC_SRX_Tranoflage_10Rnd_grip2";
			hlc_10Rnd_762x51_TDim_SCARH_tan="hlc_wp_SCARH_CQC_SRX_Tranoflage_10Rnd_grip2";
			hlc_10Rnd_762x51_S_SCARH_tan="hlc_wp_SCARH_CQC_SRX_Tranoflage_10Rnd_grip2";
			hlc_10Rnd_762x51_B_SCARH="hlc_wp_SCARH_CQC_SRX_Tranoflage_10Rnd_grip2";
			hlc_10Rnd_762x51_mk316_SCARH="hlc_wp_SCARH_CQC_SRX_Tranoflage_10Rnd_grip2";
			hlc_10Rnd_762x51_Barrier_SCARH="hlc_wp_SCARH_CQC_SRX_Tranoflage_10Rnd_grip2";
			hlc_10Rnd_762x51_t_SCARH="hlc_wp_SCARH_CQC_SRX_Tranoflage_10Rnd_grip2";
			hlc_10Rnd_762x51_TDim_SCARH="hlc_wp_SCARH_CQC_SRX_Tranoflage_10Rnd_grip2";
			hlc_10Rnd_762x51_S_SCARH="hlc_wp_SCARH_CQC_SRX_Tranoflage_10Rnd_grip2";
			hlc_10Rnd_762x51_B_SCARH_Tranoflage="hlc_wp_SCARH_CQC_SRX_Tranoflage_10Rnd_grip2";
			hlc_10Rnd_762x51_mk316_SCARH_Tranoflage="hlc_wp_SCARH_CQC_SRX_Tranoflage_10Rnd_grip2";
			hlc_10Rnd_762x51_Barrier_SCARH_Tranoflage="hlc_wp_SCARH_CQC_SRX_Tranoflage_10Rnd_grip2";
			hlc_10Rnd_762x51_t_SCARH_Tranoflage="hlc_wp_SCARH_CQC_SRX_Tranoflage_10Rnd_grip2";
			hlc_10Rnd_762x51_TDim_SCARH_Tranoflage="hlc_wp_SCARH_CQC_SRX_Tranoflage_10Rnd_grip2";
			hlc_10Rnd_762x51_S_SCARH_Tranoflage="hlc_wp_SCARH_CQC_SRX_Tranoflage_10Rnd_grip2";
			default="hlc_wp_SCARH_CQC_SRX_Tranoflage_grip2";
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
			class hlc_wp_SCARH_CQC_SRX_Tranoflage_grip2
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SCARH_CQC_SRX_Tranoflage_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARH_CQC_SRX_Tranoflage_grip3: hlc_wp_SCARH_CQC_SRX_tranoflage
	{
		scopeArsenal=0;
		dexterity=1.5327734;
		aimTransitionSpeed=1.0729413;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handpose_VFG.rtm"
		};
		class nia_magSwitch
		{
			hlc_10Rnd_762x51_B_SCARH_tan="hlc_wp_SCARH_CQC_SRX_Tranoflage_10Rnd_grip3";
			hlc_10Rnd_762x51_mk316_SCARH_tan="hlc_wp_SCARH_CQC_SRX_Tranoflage_10Rnd_grip3";
			hlc_10Rnd_762x51_Barrier_SCARH_tan="hlc_wp_SCARH_CQC_SRX_Tranoflage_10Rnd_grip3";
			hlc_10Rnd_762x51_t_SCARH_tan="hlc_wp_SCARH_CQC_SRX_Tranoflage_10Rnd_grip3";
			hlc_10Rnd_762x51_TDim_SCARH_tan="hlc_wp_SCARH_CQC_SRX_Tranoflage_10Rnd_grip3";
			hlc_10Rnd_762x51_S_SCARH_tan="hlc_wp_SCARH_CQC_SRX_Tranoflage_10Rnd_grip3";
			hlc_10Rnd_762x51_B_SCARH="hlc_wp_SCARH_CQC_SRX_Tranoflage_10Rnd_grip3";
			hlc_10Rnd_762x51_mk316_SCARH="hlc_wp_SCARH_CQC_SRX_Tranoflage_10Rnd_grip3";
			hlc_10Rnd_762x51_Barrier_SCARH="hlc_wp_SCARH_CQC_SRX_Tranoflage_10Rnd_grip3";
			hlc_10Rnd_762x51_t_SCARH="hlc_wp_SCARH_CQC_SRX_Tranoflage_10Rnd_grip3";
			hlc_10Rnd_762x51_TDim_SCARH="hlc_wp_SCARH_CQC_SRX_Tranoflage_10Rnd_grip3";
			hlc_10Rnd_762x51_S_SCARH="hlc_wp_SCARH_CQC_SRX_Tranoflage_10Rnd_grip3";
			hlc_10Rnd_762x51_B_SCARH_Tranoflage="hlc_wp_SCARH_CQC_SRX_Tranoflage_10Rnd_grip3";
			hlc_10Rnd_762x51_mk316_SCARH_Tranoflage="hlc_wp_SCARH_CQC_SRX_Tranoflage_10Rnd_grip3";
			hlc_10Rnd_762x51_Barrier_SCARH_Tranoflage="hlc_wp_SCARH_CQC_SRX_Tranoflage_10Rnd_grip3";
			hlc_10Rnd_762x51_t_SCARH_Tranoflage="hlc_wp_SCARH_CQC_SRX_Tranoflage_10Rnd_grip3";
			hlc_10Rnd_762x51_TDim_SCARH_Tranoflage="hlc_wp_SCARH_CQC_SRX_Tranoflage_10Rnd_grip3";
			hlc_10Rnd_762x51_S_SCARH_Tranoflage="hlc_wp_SCARH_CQC_SRX_Tranoflage_10Rnd_grip3";
			default="hlc_wp_SCARH_CQC_SRX_Tranoflage_grip3";
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
			class hlc_wp_SCARH_CQC_SRX_Tranoflage_grip3
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SCARH_CQC_SRX_Tranoflage_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARH_CQC_SRX_Tranoflage_10rnd: hlc_wp_SCARH_CQC_SRX_tranoflage
	{
		scopeArsenal=0;
		reloadAction="NIA_GestureReload_Mk17_10rnd";
		baseweapon="hlc_wp_SCARH_CQC_SRX_Tranoflage_10rnd";
		class nia_gripSwitch
		{
			VFG="hlc_wp_SCARH_CQC_SRX_Tranoflage_10rnd_grip";
			AFG="hlc_wp_SCARH_CQC_SRX_Tranoflage_10rnd_grip2";
			VFG2="hlc_wp_SCARH_CQC_SRX_Tranoflage_10rnd_grip3";
			default="hlc_wp_SCARH_CQC_SRX_Tranoflage_10rnd";
		};
		rhs_grip1_change="hlc_wp_SCARH_CQC_SRX_Tranoflage_10rnd_grip";
		rhs_grip2_change="hlc_wp_SCARH_CQC_SRX_Tranoflage_10rnd_grip2";
		rhs_grip3_change="hlc_wp_SCARH_CQC_SRX_Tranoflage_10rnd_grip3";
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
			class hlc_wp_SCARH_CQC_SRX_Tranoflage_10rnd
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SCARH_CQC_SRX_Tranoflage_10rnd_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARH_CQC_SRX_Tranoflage_10rnd_TacReload: hlc_wp_SCARH_CQC_SRX_Tranoflage_10rnd
	{
		magazineReloadSwitchPhase="(40 / 96)";
		scopeArsenal=0;
		reloadMagazineSound[]=
		{
			"\nia_wp_SCAR\snd\mk17_reload_Partial.ogg",
			0.85000002,
			1,
			25
		};
		reloadAction="NIA_GestureReload_Mk17_10rnd_Tactical";
		model="nia_wp_SCAR\mesh\Rifle\SCARH_CQC_SRX_TacReload.p3d";
		rhs_grip1_change="hlc_wp_SCARH_CQC_SRX_Tranoflage_10rnd_grip";
		rhs_grip2_change="hlc_wp_SCARH_CQC_SRX_Tranoflage_10rnd_grip2";
		rhs_grip3_change="hlc_wp_SCARH_CQC_SRX_Tranoflage_10rnd_grip3";
		class nia_gripSwitch
		{
			VFG="hlc_wp_SCARH_CQC_SRX_Tranoflage_10rnd_grip";
			AFG="hlc_wp_SCARH_CQC_SRX_Tranoflage_10rnd_grip2";
			VFG2="hlc_wp_SCARH_CQC_SRX_Tranoflage_10rnd_grip3";
			default="hlc_wp_SCARH_CQC_SRX_Tranoflage_10rnd_TacReload";
		};
	};
	class hlc_wp_SCARH_CQC_SRX_Tranoflage_10rnd_grip: hlc_wp_SCARH_CQC_SRX_Tranoflage_10rnd
	{
		scopeArsenal=0;
		dexterity=1.5327734;
		aimTransitionSpeed=1.0729413;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handpose_VFG.rtm"
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
			class hlc_wp_SCARH_CQC_SRX_Tranoflage_10rnd_grip
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SCARH_CQC_SRX_Tranoflage_10rnd_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARH_CQC_SRX_Tranoflage_10rnd_grip2: hlc_wp_SCARH_CQC_SRX_Tranoflage_10rnd
	{
		scopeArsenal=0;
		inertia="(0.363*0.85)";
		dexterity=1.5327734;
		aimTransitionSpeed=1.0729413;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handpose_AFG.rtm"
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
			class hlc_wp_SCARH_CQC_SRX_Tranoflage_10rnd_grip2
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SCARH_CQC_SRX_Tranoflage_10rnd_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARH_CQC_SRX_Tranoflage_10rnd_grip3: hlc_wp_SCARH_CQC_SRX_Tranoflage_10rnd
	{
		scopeArsenal=0;
		dexterity=1.5327734;
		aimTransitionSpeed=1.0729413;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handpose_VFG.rtm"
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
			class hlc_wp_SCARH_CQC_SRX_Tranoflage_10rnd_grip3
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SCARH_CQC_SRX_Tranoflage_10rnd_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARH_CQC_SRX_Blk: hlc_wp_SCARH_CQC_SRX
	{
		author="Toadie";
		dlc="Niarms_SCAR";
		displayName="$STR_NIA_rifle_SCARH_CQC_SRX_blk";
		scope=2;
		baseWeapon="hlc_wp_SCARH_CQC_SRX_Blk";
		picture="\nia_wp_SCAR\tex\ui\hlc_wp_SCARH_CQC_SRX_Blk_Ca";
		hiddenSelectionsTextures[]=
		{
			"nia_wp_SCAR\tex\toadie_SCAR\scar_common_co.paa",
			"nia_wp_SCAR\tex\toadie_SCAR\scar_lower_co.paa",
			"nia_wp_SCAR\tex\toadie_SCAR\stock_co.paa",
			"nia_wp_SCAR\tex\toadie_SCAR\upper_scarh_co.paa",
			"nia_wp_SCAR\tex\map3-black_co.paa",
			"nia_wp_SCAR\tex\mapyesblack_co.paa",
			"nia_wp_SCAR\tex\toadie_SCAR\acc_extensions_co.paa"
		};
		class nia_gripSwitch
		{
			VFG="hlc_wp_SCARH_CQC_SRX_Blk_grip";
			AFG="hlc_wp_SCARH_CQC_SRX_Blk_grip2";
			VFG2="hlc_wp_SCARH_CQC_SRX_Blk_grip3";
			default="hlc_wp_SCARH_CQC_SRX_Blk";
		};
		rhs_grip1_change="hlc_wp_SCARH_CQC_SRX_Blk_grip";
		rhs_grip2_change="hlc_wp_SCARH_CQC_SRX_Blk_grip2";
		rhs_grip3_change="hlc_wp_SCARH_CQC_SRX_Blk_grip3";
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
			class hlc_wp_SCARH_CQC_SRX_Blk
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SCARH_CQC_SRX_Blk_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
		class nia_magSwitch
		{
			hlc_10Rnd_762x51_B_SCARH_tan="hlc_wp_SCARH_CQC_SRX_Blk_10rnd";
			hlc_10Rnd_762x51_mk316_SCARH_tan="hlc_wp_SCARH_CQC_SRX_Blk_10rnd";
			hlc_10Rnd_762x51_Barrier_SCARH_tan="hlc_wp_SCARH_CQC_SRX_Blk_10rnd";
			hlc_10Rnd_762x51_t_SCARH_tan="hlc_wp_SCARH_CQC_SRX_Blk_10rnd";
			hlc_10Rnd_762x51_TDim_SCARH_tan="hlc_wp_SCARH_CQC_SRX_Blk_10rnd";
			hlc_10Rnd_762x51_S_SCARH_tan="hlc_wp_SCARH_CQC_SRX_Blk_10rnd";
			hlc_10Rnd_762x51_B_SCARH="hlc_wp_SCARH_CQC_SRX_Blk_10rnd";
			hlc_10Rnd_762x51_mk316_SCARH="hlc_wp_SCARH_CQC_SRX_Blk_10rnd";
			hlc_10Rnd_762x51_Barrier_SCARH="hlc_wp_SCARH_CQC_SRX_Blk_10rnd";
			hlc_10Rnd_762x51_t_SCARH="hlc_wp_SCARH_CQC_SRX_Blk_10rnd";
			hlc_10Rnd_762x51_TDim_SCARH="hlc_wp_SCARH_CQC_SRX_Blk_10rnd";
			hlc_10Rnd_762x51_S_SCARH="hlc_wp_SCARH_CQC_SRX_Blk_10rnd";
			hlc_10Rnd_762x51_B_SCARH_camo="hlc_wp_SCARH_CQC_SRX_Blk_10rnd";
			hlc_10Rnd_762x51_mk316_SCARH_camo="hlc_wp_SCARH_CQC_SRX_Blk_10rnd";
			hlc_10Rnd_762x51_Barrier_SCARH_camo="hlc_wp_SCARH_CQC_SRX_Blk_10rnd";
			hlc_10Rnd_762x51_t_SCARH_camo="hlc_wp_SCARH_CQC_SRX_Blk_10rnd";
			hlc_10Rnd_762x51_TDim_SCARH_camo="hlc_wp_SCARH_CQC_SRX_Blk_10rnd";
			hlc_10Rnd_762x51_S_SCARH_camo="hlc_wp_SCARH_CQC_SRX_Blk_10rnd";
			default="hlc_wp_SCARH_CQC_SRX_Blk";
		};
	};
	class hlc_wp_SCARH_CQC_SRX_Blk_TacReload: hlc_wp_SCARH_CQC_SRX_Blk
	{
		magazineReloadSwitchPhase="(40 / 96)";
		scopeArsenal=0;
		reloadMagazineSound[]=
		{
			"\nia_wp_SCAR\snd\mk17_reload_Partial.ogg",
			0.85000002,
			1,
			25
		};
		reloadAction="NIA_GestureReload_Mk17_Tactical";
		model="nia_wp_SCAR\mesh\Rifle\SCARH_CQC_SRX_TacReload.p3d";
		rhs_grip1_change="hlc_wp_SCARH_CQC_SRX_Blk_grip";
		rhs_grip2_change="hlc_wp_SCARH_CQC_SRX_Blk_grip2";
		rhs_grip3_change="hlc_wp_SCARH_CQC_SRX_Blk_grip3";
		class nia_gripSwitch
		{
			VFG="hlc_wp_SCARH_CQC_SRX_Blk_grip";
			AFG="hlc_wp_SCARH_CQC_SRX_Blk_grip2";
			VFG2="hlc_wp_SCARH_CQC_SRX_Blk_grip3";
			default="hlc_wp_SCARH_CQC_SRX_Blk_TacReload";
		};
	};
	class hlc_wp_SCARH_CQC_SRX_Blk_grip: hlc_wp_SCARH_CQC_SRX_Blk
	{
		scopeArsenal=0;
		dexterity=1.5327734;
		aimTransitionSpeed=1.0729413;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handpose_VFG.rtm"
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
			class hlc_wp_SCARH_CQC_SRX_Blk_grip
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SCARH_CQC_SRX_Blk_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
		class nia_magSwitch
		{
			hlc_10Rnd_762x51_B_SCARH_tan="hlc_wp_SCARH_CQC_SRX_Blk_10Rnd_grip";
			hlc_10Rnd_762x51_mk316_SCARH_tan="hlc_wp_SCARH_CQC_SRX_Blk_10Rnd_grip";
			hlc_10Rnd_762x51_Barrier_SCARH_tan="hlc_wp_SCARH_CQC_SRX_Blk_10Rnd_grip";
			hlc_10Rnd_762x51_t_SCARH_tan="hlc_wp_SCARH_CQC_SRX_Blk_10Rnd_grip";
			hlc_10Rnd_762x51_TDim_SCARH_tan="hlc_wp_SCARH_CQC_SRX_Blk_10Rnd_grip";
			hlc_10Rnd_762x51_S_SCARH_tan="hlc_wp_SCARH_CQC_SRX_Blk_10Rnd_grip";
			hlc_10Rnd_762x51_B_SCARH="hlc_wp_SCARH_CQC_SRX_Blk_10Rnd_grip";
			hlc_10Rnd_762x51_mk316_SCARH="hlc_wp_SCARH_CQC_SRX_Blk_10Rnd_grip";
			hlc_10Rnd_762x51_Barrier_SCARH="hlc_wp_SCARH_CQC_SRX_Blk_10Rnd_grip";
			hlc_10Rnd_762x51_t_SCARH="hlc_wp_SCARH_CQC_SRX_Blk_10Rnd_grip";
			hlc_10Rnd_762x51_TDim_SCARH="hlc_wp_SCARH_CQC_SRX_Blk_10Rnd_grip";
			hlc_10Rnd_762x51_S_SCARH="hlc_wp_SCARH_CQC_SRX_Blk_10Rnd_grip";
			hlc_10Rnd_762x51_B_SCARH_Blk="hlc_wp_SCARH_CQC_SRX_Blk_10Rnd_grip";
			hlc_10Rnd_762x51_mk316_SCARH_Blk="hlc_wp_SCARH_CQC_SRX_Blk_10Rnd_grip";
			hlc_10Rnd_762x51_Barrier_SCARH_Blk="hlc_wp_SCARH_CQC_SRX_Blk_10Rnd_grip";
			hlc_10Rnd_762x51_t_SCARH_Blk="hlc_wp_SCARH_CQC_SRX_Blk_10Rnd_grip";
			hlc_10Rnd_762x51_TDim_SCARH_Blk="hlc_wp_SCARH_CQC_SRX_Blk_10Rnd_grip";
			hlc_10Rnd_762x51_S_SCARH_Blk="hlc_wp_SCARH_CQC_SRX_Blk_10Rnd_grip";
			default="hlc_wp_SCARH_CQC_SRX_Blk_grip";
		};
	};
	class hlc_wp_SCARH_CQC_SRX_Blk_grip2: hlc_wp_SCARH_CQC_SRX_Blk
	{
		scopeArsenal=0;
		inertia="(0.363*0.85)";
		dexterity=1.5327734;
		aimTransitionSpeed=1.0729413;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handpose_AFG.rtm"
		};
		class nia_magSwitch
		{
			hlc_10Rnd_762x51_B_SCARH_tan="hlc_wp_SCARH_CQC_SRX_Blk_10Rnd_grip2";
			hlc_10Rnd_762x51_mk316_SCARH_tan="hlc_wp_SCARH_CQC_SRX_Blk_10Rnd_grip2";
			hlc_10Rnd_762x51_Barrier_SCARH_tan="hlc_wp_SCARH_CQC_SRX_Blk_10Rnd_grip2";
			hlc_10Rnd_762x51_t_SCARH_tan="hlc_wp_SCARH_CQC_SRX_Blk_10Rnd_grip2";
			hlc_10Rnd_762x51_TDim_SCARH_tan="hlc_wp_SCARH_CQC_SRX_Blk_10Rnd_grip2";
			hlc_10Rnd_762x51_S_SCARH_tan="hlc_wp_SCARH_CQC_SRX_Blk_10Rnd_grip2";
			hlc_10Rnd_762x51_B_SCARH="hlc_wp_SCARH_CQC_SRX_Blk_10Rnd_grip2";
			hlc_10Rnd_762x51_mk316_SCARH="hlc_wp_SCARH_CQC_SRX_Blk_10Rnd_grip2";
			hlc_10Rnd_762x51_Barrier_SCARH="hlc_wp_SCARH_CQC_SRX_Blk_10Rnd_grip2";
			hlc_10Rnd_762x51_t_SCARH="hlc_wp_SCARH_CQC_SRX_Blk_10Rnd_grip2";
			hlc_10Rnd_762x51_TDim_SCARH="hlc_wp_SCARH_CQC_SRX_Blk_10Rnd_grip2";
			hlc_10Rnd_762x51_S_SCARH="hlc_wp_SCARH_CQC_SRX_Blk_10Rnd_grip2";
			hlc_10Rnd_762x51_B_SCARH_Blk="hlc_wp_SCARH_CQC_SRX_Blk_10Rnd_grip2";
			hlc_10Rnd_762x51_mk316_SCARH_Blk="hlc_wp_SCARH_CQC_SRX_Blk_10Rnd_grip2";
			hlc_10Rnd_762x51_Barrier_SCARH_Blk="hlc_wp_SCARH_CQC_SRX_Blk_10Rnd_grip2";
			hlc_10Rnd_762x51_t_SCARH_Blk="hlc_wp_SCARH_CQC_SRX_Blk_10Rnd_grip2";
			hlc_10Rnd_762x51_TDim_SCARH_Blk="hlc_wp_SCARH_CQC_SRX_Blk_10Rnd_grip2";
			hlc_10Rnd_762x51_S_SCARH_Blk="hlc_wp_SCARH_CQC_SRX_Blk_10Rnd_grip2";
			default="hlc_wp_SCARH_CQC_SRX_Blk_grip2";
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
			class hlc_wp_SCARH_CQC_SRX_Blk_grip2
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SCARH_CQC_SRX_Blk_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARH_CQC_SRX_Blk_grip3: hlc_wp_SCARH_CQC_SRX_Blk
	{
		scopeArsenal=0;
		dexterity=1.5327734;
		aimTransitionSpeed=1.0729413;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handpose_VFG.rtm"
		};
		class nia_magSwitch
		{
			hlc_10Rnd_762x51_B_SCARH_tan="hlc_wp_SCARH_CQC_SRX_Blk_10Rnd_grip3";
			hlc_10Rnd_762x51_mk316_SCARH_tan="hlc_wp_SCARH_CQC_SRX_Blk_10Rnd_grip3";
			hlc_10Rnd_762x51_Barrier_SCARH_tan="hlc_wp_SCARH_CQC_SRX_Blk_10Rnd_grip3";
			hlc_10Rnd_762x51_t_SCARH_tan="hlc_wp_SCARH_CQC_SRX_Blk_10Rnd_grip3";
			hlc_10Rnd_762x51_TDim_SCARH_tan="hlc_wp_SCARH_CQC_SRX_Blk_10Rnd_grip3";
			hlc_10Rnd_762x51_S_SCARH_tan="hlc_wp_SCARH_CQC_SRX_Blk_10Rnd_grip3";
			hlc_10Rnd_762x51_B_SCARH="hlc_wp_SCARH_CQC_SRX_Blk_10Rnd_grip3";
			hlc_10Rnd_762x51_mk316_SCARH="hlc_wp_SCARH_CQC_SRX_Blk_10Rnd_grip3";
			hlc_10Rnd_762x51_Barrier_SCARH="hlc_wp_SCARH_CQC_SRX_Blk_10Rnd_grip3";
			hlc_10Rnd_762x51_t_SCARH="hlc_wp_SCARH_CQC_SRX_Blk_10Rnd_grip3";
			hlc_10Rnd_762x51_TDim_SCARH="hlc_wp_SCARH_CQC_SRX_Blk_10Rnd_grip3";
			hlc_10Rnd_762x51_S_SCARH="hlc_wp_SCARH_CQC_SRX_Blk_10Rnd_grip3";
			hlc_10Rnd_762x51_B_SCARH_Blk="hlc_wp_SCARH_CQC_SRX_Blk_10Rnd_grip3";
			hlc_10Rnd_762x51_mk316_SCARH_Blk="hlc_wp_SCARH_CQC_SRX_Blk_10Rnd_grip3";
			hlc_10Rnd_762x51_Barrier_SCARH_Blk="hlc_wp_SCARH_CQC_SRX_Blk_10Rnd_grip3";
			hlc_10Rnd_762x51_t_SCARH_Blk="hlc_wp_SCARH_CQC_SRX_Blk_10Rnd_grip3";
			hlc_10Rnd_762x51_TDim_SCARH_Blk="hlc_wp_SCARH_CQC_SRX_Blk_10Rnd_grip3";
			hlc_10Rnd_762x51_S_SCARH_Blk="hlc_wp_SCARH_CQC_SRX_Blk_10Rnd_grip3";
			default="hlc_wp_SCARH_CQC_SRX_Blk_grip3";
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
			class hlc_wp_SCARH_CQC_SRX_Blk_grip3
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SCARH_CQC_SRX_Blk_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARH_CQC_SRX_Blk_10rnd: hlc_wp_SCARH_CQC_SRX_Blk
	{
		scopeArsenal=0;
		baseweapon="hlc_wp_SCARH_CQC_SRX_Blk_10rnd";
		reloadAction="NIA_GestureReload_Mk17_10rnd";
		class nia_gripSwitch
		{
			VFG="hlc_wp_SCARH_CQC_SRX_Blk_10rnd_grip";
			AFG="hlc_wp_SCARH_CQC_SRX_Blk_10rnd_grip2";
			VFG2="hlc_wp_SCARH_CQC_SRX_Blk_10rnd_grip3";
			default="hlc_wp_SCARH_CQC_SRX_Blk_10rnd";
		};
		rhs_grip1_change="hlc_wp_SCARH_CQC_SRX_Blk_10rnd_grip";
		rhs_grip2_change="hlc_wp_SCARH_CQC_SRX_Blk_10rnd_grip2";
		rhs_grip3_change="hlc_wp_SCARH_CQC_SRX_Blk_10rnd_grip3";
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
			class hlc_wp_SCARH_CQC_SRX_Blk_10rnd
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SCARH_CQC_SRX_Blk_10rnd_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARH_CQC_SRX_Blk_10rnd_TacReload: hlc_wp_SCARH_CQC_SRX_Blk_10rnd
	{
		magazineReloadSwitchPhase="(40 / 96)";
		scopeArsenal=0;
		reloadMagazineSound[]=
		{
			"\nia_wp_SCAR\snd\mk17_reload_Partial.ogg",
			0.85000002,
			1,
			25
		};
		reloadAction="NIA_GestureReload_Mk17_10rnd_Tactical";
		model="nia_wp_SCAR\mesh\Rifle\SCARH_CQC_SRX_TacReload.p3d";
		rhs_grip1_change="hlc_wp_SCARH_CQC_SRX_Blk_10rnd_grip";
		rhs_grip2_change="hlc_wp_SCARH_CQC_SRX_Blk_10rnd_grip2";
		rhs_grip3_change="hlc_wp_SCARH_CQC_SRX_Blk_10rnd_grip3";
		class nia_gripSwitch
		{
			VFG="hlc_wp_SCARH_CQC_SRX_Blk_10rnd_grip";
			AFG="hlc_wp_SCARH_CQC_SRX_Blk_10rnd_grip2";
			VFG2="hlc_wp_SCARH_CQC_SRX_Blk_10rnd_grip3";
			default="hlc_wp_SCARH_CQC_SRX_Blk_10rnd_TacReload";
		};
	};
	class hlc_wp_SCARH_CQC_SRX_Blk_10rnd_grip: hlc_wp_SCARH_CQC_SRX_Blk_10rnd
	{
		scopeArsenal=0;
		dexterity=1.5327734;
		aimTransitionSpeed=1.0729413;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handpose_VFG.rtm"
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
			class hlc_wp_SCARH_CQC_SRX_Blk_10rnd_grip
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SCARH_CQC_SRX_Blk_10rnd_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARH_CQC_SRX_Blk_10rnd_grip2: hlc_wp_SCARH_CQC_SRX_Blk_10rnd
	{
		scopeArsenal=0;
		inertia="(0.363*0.85)";
		dexterity=1.5327734;
		aimTransitionSpeed=1.0729413;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handpose_AFG.rtm"
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
			class hlc_wp_SCARH_CQC_SRX_Blk_10rnd_grip2
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SCARH_CQC_SRX_Blk_10rnd_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARH_CQC_SRX_Blk_10rnd_grip3: hlc_wp_SCARH_CQC_SRX_Blk_10rnd
	{
		scopeArsenal=0;
		dexterity=1.5327734;
		aimTransitionSpeed=1.0729413;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handpose_VFG.rtm"
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
			class hlc_wp_SCARH_CQC_SRX_Blk_10rnd_grip3
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SCARH_CQC_SRX_Blk_10rnd_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_WP_SCARH_DMR: hlc_wp_SCARH_STD
	{
		author="Toadie";
		dlc="Niarms_SCAR";
		displayName="$STR_NIA_rifle_SCARH_DMR";
		descriptionShort="$STR_NIA_SSR_DESC";
		scope=2;
		UiPicture="\A3\weapons_f\data\UI\icon_sniper_CA.paa";
		ACE_barrelTwist=304.79999;
		ACE_barrelLength=510;
		baseWeapon="hlc_WP_SCARH_DMR";
		mass=77.68866;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=77.68866;
			class PointerSlot: asdg_FrontSideRail
			{
				iconPosition[]={0,0};
				iconScale=1;
				iconPicture="\A3\Weapons_F\Data\clear_empty.paa";
				iconPinPoint="Left";
				class compatibleItems: compatibleItems
				{
					HLC_Panel_Side_SCAR_Long_FN5cm_Desert=1;
					HLC_Panel_Side_SCAR_Long_2xFN5cm_Desert=1;
					HLC_Panel_Side_SCAR_Long_FN10cm_Desert=1;
					HLC_Panel_Side_SCAR_Long_FN15cm_Desert=1;
					HLC_Panel_Side_SCAR_Long_Ladder_S_Desert=1;
					HLC_Panel_Side_SCAR_Long_Ladder_M_Desert=1;
					HLC_Panel_Side_SCAR_Long_Ladder_L_Desert=1;
					HLC_Panel_Side_SCAR_Long_MagpulXT_Desert=1;
					HLC_Panel_Side_SCAR_Long_XTME_Desert=1;
					HLC_Panel_Side_SCAR_Long_2xXTME_Desert=1;
					HLC_Panel_Side_SCAR_Long_4xXTME_Desert=1;
					HLC_Panel_Side_SCAR_Long_FN5cm_Black=1;
					HLC_Panel_Side_SCAR_Long_2xFN5cm_Black=1;
					HLC_Panel_Side_SCAR_Long_FN10cm_Black=1;
					HLC_Panel_Side_SCAR_Long_FN15cm_Black=1;
					HLC_Panel_Side_SCAR_Long_Ladder_S_Black=1;
					HLC_Panel_Side_SCAR_Long_Ladder_M_Black=1;
					HLC_Panel_Side_SCAR_Long_Ladder_L_Black=1;
					HLC_Panel_Side_SCAR_Long_MagpulXT_Black=1;
					HLC_Panel_Side_SCAR_Long_XTME_Black=1;
					HLC_Panel_Side_SCAR_Long_2xXTME_Black=1;
					HLC_Panel_Side_SCAR_Long_4xXTME_Black=1;
					HLC_Panel_Side_SCAR_Long_FN5cm_OD=1;
					HLC_Panel_Side_SCAR_Long_2xFN5cm_OD=1;
					HLC_Panel_Side_SCAR_Long_FN10cm_OD=1;
					HLC_Panel_Side_SCAR_Long_FN15cm_OD=1;
					HLC_Panel_Side_SCAR_Long_Ladder_S_OD=1;
					HLC_Panel_Side_SCAR_Long_Ladder_M_OD=1;
					HLC_Panel_Side_SCAR_Long_Ladder_L_OD=1;
					HLC_Panel_Side_SCAR_Long_MagpulXT_OD=1;
					HLC_Panel_Side_SCAR_Long_XTME_OD=1;
					HLC_Panel_Side_SCAR_Long_2xXTME_OD=1;
					HLC_Panel_Side_SCAR_Long_4xXTME_OD=1;
					HLC_Panel_Side_SCAR_Long_FN5cm_RG=1;
					HLC_Panel_Side_SCAR_Long_2xFN5cm_RG=1;
					HLC_Panel_Side_SCAR_Long_FN10cm_RG=1;
					HLC_Panel_Side_SCAR_Long_FN15cm_RG=1;
					HLC_Panel_Side_SCAR_Long_Ladder_S_RG=1;
					HLC_Panel_Side_SCAR_Long_Ladder_M_RG=1;
					HLC_Panel_Side_SCAR_Long_Ladder_L_RG=1;
					HLC_Panel_Side_SCAR_Long_MagpulXT_RG=1;
					HLC_Panel_Side_SCAR_Long_XTME_RG=1;
					HLC_Panel_Side_SCAR_Long_2xXTME_RG=1;
					HLC_Panel_Side_SCAR_Long_4xXTME_RG=1;
					HLC_Panel_Side_SCAR_Long_Ladder_S_Pride=1;
					HLC_Panel_Side_SCAR_Long_Ladder_M_Pride=1;
					HLC_Panel_Side_SCAR_Long_Ladder_L_Pride=1;
					HLC_Panel_Side_SCAR_Long_MagpulXT_Pride=1;
				};
			};
		};
		inertia=0.44499999;
		dexterity=1.2411845;
		aimTransitionSpeed=0.86882913;
		picture="\nia_wp_SCAR\tex\ui\hlc_WP_SCARH_DMR_ca";
		model="nia_wp_SCAR\mesh\rifle\SCARH_Sniper.p3d";
		hiddenSelectionsTextures[]=
		{
			"nia_wp_SCAR\tex\toadie_SCAR\scar_common_tan_co.paa",
			"nia_wp_SCAR\tex\toadie_SCAR\scar_lower_tan_co.paa",
			"nia_wp_SCAR\tex\toadie_SCAR\stock_tan_co.paa",
			"nia_wp_SCAR\tex\toadie_SCAR\upper_scarh_tan_co.paa",
			"nia_wp_SCAR\tex\toadie_SCAR\Upper_SCAR_PDW_tan_co.paa",
			"nia_wp_SCAR\tex\toadie_SCAR\acc_extensions_co.paa"
		};
		HiddenSelectionsMaterials[]=
		{
			"nia_wp_SCAR\mat\scar_common.rvmat",
			"nia_wp_SCAR\mat\scar_lowers.rvmat",
			"nia_wp_SCAR\mat\scar_stock.rvmat",
			"nia_wp_SCAR\mat\scar_upper_scarh.rvmat",
			"nia_wp_SCAR\mat\scar_upper_scar-pdw.rvmat",
			"nia_wp_SCAR\mat\acc_extensions.rvmat"
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
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"NIA_SCARH_NEW_Shot_SoundSet",
					"NIA_SCARH_tail_SoundSet"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"NIA_SCARH_silencerShot_SoundSet",
					"NIA_SCARH_silencerTail_SoundSet"
				};
			};
			dispersion=0.00037235199;
			reloadtime="(60/600)";
			aiRateOfFire=1;
			aiRateOfFireDistance=350;
			aiRateOfFireDispersion=2;
			minRange=20;
			minRangeProbab=0.69999999;
			midRange=150;
			midRangeProbab=0.5;
			maxRange=500;
			maxRangeProbab=0.1;
		};
		class Burst: Mode_Burst
		{
			sounds[]=
			{
				"StandardSound",
				"SilencedSound"
			};
			class BaseSoundModeType
			{
				weaponSoundEffect="DefaultRifle";
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"NIA_SCARH_NEW_Shot_SoundSet",
					"NIA_SCARH_tail_SoundSet"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"NIA_SCARH_silencerShot_SoundSet",
					"NIA_SCARH_silencerTail_SoundSet"
				};
			};
			dispersion=0.000570164;
			reloadtime="(60/600)";
			aiRateOfFire=1;
			aiRateOfFireDistance=100;
			aiRateOfFireDispersion=1;
			minRange=0;
			minRangeProbab=0.2;
			midRange=20;
			midRangeProbab=0.80000001;
			maxRange=40;
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
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"NIA_SCARH_NEW_Shot_SoundSet",
					"NIA_SCARH_tail_SoundSet"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"NIA_SCARH_silencerShot_SoundSet",
					"NIA_SCARH_silencerTail_SoundSet"
				};
			};
			dispersion=0.00049162103;
			reloadtime="(60/600)";
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
		class nia_magSwitch
		{
			hlc_10Rnd_762x51_B_SCARH_tan="hlc_wp_SCARH_DMR_10Rnd";
			hlc_10Rnd_762x51_mk316_SCARH_tan="hlc_wp_SCARH_DMR_10Rnd";
			hlc_10Rnd_762x51_Barrier_SCARH_tan="hlc_wp_SCARH_DMR_10Rnd";
			hlc_10Rnd_762x51_t_SCARH_tan="hlc_wp_SCARH_DMR_10Rnd";
			hlc_10Rnd_762x51_TDim_SCARH_tan="hlc_wp_SCARH_DMR_10Rnd";
			hlc_10Rnd_762x51_S_SCARH_tan="hlc_wp_SCARH_DMR_10Rnd";
			hlc_10Rnd_762x51_B_SCARH="hlc_wp_SCARH_DMR_10Rnd";
			hlc_10Rnd_762x51_mk316_SCARH="hlc_wp_SCARH_DMR_10Rnd";
			hlc_10Rnd_762x51_Barrier_SCARH="hlc_wp_SCARH_DMR_10Rnd";
			hlc_10Rnd_762x51_t_SCARH="hlc_wp_SCARH_DMR_10Rnd";
			hlc_10Rnd_762x51_TDim_SCARH="hlc_wp_SCARH_DMR_10Rnd";
			hlc_10Rnd_762x51_S_SCARH="hlc_wp_SCARH_DMR_10Rnd";
			hlc_10Rnd_762x51_B_SCARH_camo="hlc_wp_SCARH_DMR_10Rnd";
			hlc_10Rnd_762x51_mk316_SCARH_camo="hlc_wp_SCARH_DMR_10Rnd";
			hlc_10Rnd_762x51_Barrier_SCARH_camo="hlc_wp_SCARH_DMR_10Rnd";
			hlc_10Rnd_762x51_t_SCARH_camo="hlc_wp_SCARH_DMR_10Rnd";
			hlc_10Rnd_762x51_TDim_SCARH_camo="hlc_wp_SCARH_DMR_10Rnd";
			hlc_10Rnd_762x51_S_SCARH_camo="hlc_wp_SCARH_DMR_10Rnd";
			default="hlc_wp_SCARH_DMR";
		};
		class nia_gripSwitch
		{
			VFG="hlc_WP_SCARH_DMR_grip";
			AFG="hlc_WP_SCARH_DMR_grip2";
			VFG2="hlc_WP_SCARH_DMR_grip3";
			default="hlc_WP_SCARH_DMR";
		};
		rhs_grip1_change="hlc_WP_SCARH_DMR_grip";
		rhs_grip2_change="hlc_WP_SCARH_DMR_grip2";
		rhs_grip3_change="hlc_WP_SCARH_DMR_grip3";
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
			class hlc_wp_SCARH_DMR
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SCARH_DMR_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARH_DMR_TacReload: hlc_WP_SCARH_DMR
	{
		magazineReloadSwitchPhase="(40 / 96)";
		scopeArsenal=0;
		reloadMagazineSound[]=
		{
			"\nia_wp_SCAR\snd\mk17_reload_Partial.ogg",
			0.85000002,
			1,
			25
		};
		reloadAction="NIA_GestureReload_Mk17_Tactical";
		model="nia_wp_SCAR\mesh\Rifle\SCARH_Sniper_TacReload.p3d";
		rhs_grip1_change="hlc_wp_SCARH_DMR_grip";
		rhs_grip2_change="hlc_wp_SCARH_DMR_grip2";
		rhs_grip3_change="hlc_wp_SCARH_DMR_grip3";
		class nia_gripSwitch
		{
			VFG="hlc_wp_SCARH_DMR_grip";
			AFG="hlc_wp_SCARH_DMR_grip2";
			VFG2="hlc_wp_SCARH_DMR_grip3";
			default="hlc_wp_SCARH_DMR_TacReload";
		};
	};
	class hlc_wp_SCARH_DMR_grip: hlc_WP_SCARH_DMR
	{
		scopeArsenal=0;
		dexterity=1.3411845;
		aimTransitionSpeed=0.93882912;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handpose_VFG.rtm"
		};
		class nia_magSwitch
		{
			hlc_10Rnd_762x51_B_SCARH_tan="hlc_wp_SCARH_DMR_10Rnd_grip";
			hlc_10Rnd_762x51_mk316_SCARH_tan="hlc_wp_SCARH_DMR_10Rnd_grip";
			hlc_10Rnd_762x51_Barrier_SCARH_tan="hlc_wp_SCARH_DMR_10Rnd_grip";
			hlc_10Rnd_762x51_t_SCARH_tan="hlc_wp_SCARH_DMR_10Rnd_grip";
			hlc_10Rnd_762x51_TDim_SCARH_tan="hlc_wp_SCARH_DMR_10Rnd_grip";
			hlc_10Rnd_762x51_S_SCARH_tan="hlc_wp_SCARH_DMR_10Rnd_grip";
			hlc_10Rnd_762x51_B_SCARH="hlc_wp_SCARH_DMR_10Rnd_grip";
			hlc_10Rnd_762x51_mk316_SCARH="hlc_wp_SCARH_DMR_10Rnd_grip";
			hlc_10Rnd_762x51_Barrier_SCARH="hlc_wp_SCARH_DMR_10Rnd_grip";
			hlc_10Rnd_762x51_t_SCARH="hlc_wp_SCARH_DMR_10Rnd_grip";
			hlc_10Rnd_762x51_TDim_SCARH="hlc_wp_SCARH_DMR_10Rnd_grip";
			hlc_10Rnd_762x51_S_SCARH="hlc_wp_SCARH_DMR_10Rnd_grip";
			hlc_10Rnd_762x51_B_SCARH_camo="hlc_wp_SCARH_DMR_10Rnd_grip";
			hlc_10Rnd_762x51_mk316_SCARH_camo="hlc_wp_SCARH_DMR_10Rnd_grip";
			hlc_10Rnd_762x51_Barrier_SCARH_camo="hlc_wp_SCARH_DMR_10Rnd_grip";
			hlc_10Rnd_762x51_t_SCARH_camo="hlc_wp_SCARH_DMR_10Rnd_grip";
			hlc_10Rnd_762x51_TDim_SCARH_camo="hlc_wp_SCARH_DMR_10Rnd_grip";
			hlc_10Rnd_762x51_S_SCARH_camo="hlc_wp_SCARH_DMR_10Rnd_grip";
			default="hlc_wp_SCARH_DMR_grip";
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
			class hlc_wp_SCARH_DMR_grip
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SCARH_DMR_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARH_DMR_grip2: hlc_WP_SCARH_DMR
	{
		scopeArsenal=0;
		inertia="(0.445*0.85)";
		dexterity=1.3411845;
		aimTransitionSpeed=0.93882912;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handpose_AFG.rtm"
		};
		class nia_magSwitch
		{
			hlc_10Rnd_762x51_B_SCARH_tan="hlc_wp_SCARH_DMR_10Rnd_Blk_grip2";
			hlc_10Rnd_762x51_mk316_SCARH_tan="hlc_wp_SCARH_DMR_10Rnd_Blk_grip2";
			hlc_10Rnd_762x51_Barrier_SCARH_tan="hlc_wp_SCARH_DMR_10Rnd_Blk_grip2";
			hlc_10Rnd_762x51_t_SCARH_tan="hlc_wp_SCARH_DMR_10Rnd_Blk_grip2";
			hlc_10Rnd_762x51_TDim_SCARH_tan="hlc_wp_SCARH_DMR_10Rnd_Blk_grip2";
			hlc_10Rnd_762x51_S_SCARH_tan="hlc_wp_SCARH_DMR_10Rnd_Blk_grip2";
			hlc_10Rnd_762x51_B_SCARH="hlc_wp_SCARH_DMR_10Rnd_Blk_grip2";
			hlc_10Rnd_762x51_mk316_SCARH="hlc_wp_SCARH_DMR_10Rnd_Blk_grip2";
			hlc_10Rnd_762x51_Barrier_SCARH="hlc_wp_SCARH_DMR_10Rnd_Blk_grip2";
			hlc_10Rnd_762x51_t_SCARH="hlc_wp_SCARH_DMR_10Rnd_Blk_grip2";
			hlc_10Rnd_762x51_TDim_SCARH="hlc_wp_SCARH_DMR_10Rnd_Blk_grip2";
			hlc_10Rnd_762x51_S_SCARH="hlc_wp_SCARH_DMR_10Rnd_Blk_grip2";
			hlc_10Rnd_762x51_B_SCARH_camo="hlc_wp_SCARH_DMR_10Rnd_Blk_grip2";
			hlc_10Rnd_762x51_mk316_SCARH_camo="hlc_wp_SCARH_DMR_10Rnd_Blk_grip2";
			hlc_10Rnd_762x51_Barrier_SCARH_camo="hlc_wp_SCARH_DMR_10Rnd_Blk_grip2";
			hlc_10Rnd_762x51_t_SCARH_camo="hlc_wp_SCARH_DMR_10Rnd_Blk_grip2";
			hlc_10Rnd_762x51_TDim_SCARH_camo="hlc_wp_SCARH_DMR_10Rnd_Blk_grip2";
			hlc_10Rnd_762x51_S_SCARH_camo="hlc_wp_SCARH_DMR_10Rnd_Blk_grip2";
			default="hlc_wp_SCARH_DMR_Blk_grip2";
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
			class hlc_wp_SCARH_DMR_grip2
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SCARH_DMR_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARH_DMR_grip3: hlc_WP_SCARH_DMR
	{
		scopeArsenal=0;
		dexterity=1.3411845;
		aimTransitionSpeed=0.93882912;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handpose_VFG.rtm"
		};
		class nia_magSwitch
		{
			hlc_10Rnd_762x51_B_SCARH_tan="hlc_wp_SCARH_DMR_10Rnd_grip3";
			hlc_10Rnd_762x51_mk316_SCARH_tan="hlc_wp_SCARH_DMR_10Rnd_grip3";
			hlc_10Rnd_762x51_Barrier_SCARH_tan="hlc_wp_SCARH_DMR_10Rnd_grip3";
			hlc_10Rnd_762x51_t_SCARH_tan="hlc_wp_SCARH_DMR_10Rnd_grip3";
			hlc_10Rnd_762x51_TDim_SCARH_tan="hlc_wp_SCARH_DMR_10Rnd_grip3";
			hlc_10Rnd_762x51_S_SCARH_tan="hlc_wp_SCARH_DMR_10Rnd_grip3";
			hlc_10Rnd_762x51_B_SCARH="hlc_wp_SCARH_DMR_10Rnd_grip3";
			hlc_10Rnd_762x51_mk316_SCARH="hlc_wp_SCARH_DMR_10Rnd_grip3";
			hlc_10Rnd_762x51_Barrier_SCARH="hlc_wp_SCARH_DMR_10Rnd_grip3";
			hlc_10Rnd_762x51_t_SCARH="hlc_wp_SCARH_DMR_10Rnd_grip3";
			hlc_10Rnd_762x51_TDim_SCARH="hlc_wp_SCARH_DMR_10Rnd_grip3";
			hlc_10Rnd_762x51_S_SCARH="hlc_wp_SCARH_DMR_10Rnd_grip3";
			hlc_10Rnd_762x51_B_SCARH_camo="hlc_wp_SCARH_DMR_10Rnd_grip3";
			hlc_10Rnd_762x51_mk316_SCARH_camo="hlc_wp_SCARH_DMR_10Rnd_grip3";
			hlc_10Rnd_762x51_Barrier_SCARH_camo="hlc_wp_SCARH_DMR_10Rnd_grip3";
			hlc_10Rnd_762x51_t_SCARH_camo="hlc_wp_SCARH_DMR_10Rnd_grip3";
			hlc_10Rnd_762x51_TDim_SCARH_camo="hlc_wp_SCARH_DMR_10Rnd_grip3";
			hlc_10Rnd_762x51_S_SCARH_camo="hlc_wp_SCARH_DMR_10Rnd_grip3";
			default="hlc_wp_SCARH_DMR_grip3";
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
			class hlc_wp_SCARH_DMR_grip3
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SCARH_DMR_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARH_DMR_10rnd: hlc_WP_SCARH_DMR
	{
		scopeArsenal=0;
		reloadAction="NIA_GestureReload_Mk17_10rnd";
		baseweapon="hlc_wp_SCARH_DMR_10rnd";
		class nia_gripSwitch
		{
			VFG="hlc_wp_SCARH_DMR_10rnd_grip";
			AFG="hlc_wp_SCARH_DMR_10rnd_grip2";
			VFG2="hlc_wp_SCARH_DMR_10rnd_grip3";
			default="hlc_wp_SCARH_DMR_10rnd";
		};
		rhs_grip1_change="hlc_wp_SCARH_DMR_10rnd_grip";
		rhs_grip2_change="hlc_wp_SCARH_DMR_10rnd_grip2";
		rhs_grip3_change="hlc_wp_SCARH_DMR_10rnd";
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
			class hlc_wp_SCARH_DMR_10rnd
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SCARH_DMR_10rnd_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARH_DMR_10rnd_TacReload: hlc_wp_SCARH_DMR_10rnd
	{
		magazineReloadSwitchPhase="(40 / 96)";
		scopeArsenal=0;
		reloadMagazineSound[]=
		{
			"\nia_wp_SCAR\snd\mk17_reload_Partial.ogg",
			0.85000002,
			1,
			25
		};
		reloadAction="NIA_GestureReload_Mk17_10rnd_Tactical";
		model="nia_wp_SCAR\mesh\Rifle\SCARH_Sniper_TacReload.p3d";
		rhs_grip1_change="hlc_wp_SCARH_DMR_10rnd_grip";
		rhs_grip2_change="hlc_wp_SCARH_DMR_10rnd_grip2";
		rhs_grip3_change="hlc_wp_SCARH_DMR_10rnd_grip3";
		class nia_gripSwitch
		{
			VFG="hlc_wp_SCARH_DMR_10rnd_grip";
			AFG="hlc_wp_SCARH_DMR_10rnd_grip2";
			VFG2="hlc_wp_SCARH_DMR_10rnd_grip3";
			default="hlc_wp_SCARH_DMR_10rnd_TacReload";
		};
	};
	class hlc_wp_SCARH_DMR_10rnd_grip: hlc_wp_SCARH_DMR_10rnd
	{
		scopeArsenal=0;
		dexterity=1.3411845;
		aimTransitionSpeed=0.93882912;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handpose_VFG.rtm"
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
			class hlc_wp_SCARH_DMR_10rnd_Grip
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SCARH_DMR_10rnd_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARH_DMR_10rnd_grip2: hlc_wp_SCARH_DMR_10rnd
	{
		scopeArsenal=0;
		inertia="(0.445*0.85)";
		dexterity=1.3411845;
		aimTransitionSpeed=0.93882912;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handpose_AFG.rtm"
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
			class hlc_wp_SCARH_DMR_10rnd_Grip2
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SCARH_DMR_10rnd_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARH_DMR_10rnd_grip3: hlc_wp_SCARH_DMR_10rnd
	{
		scopeArsenal=0;
		dexterity=1.3411845;
		aimTransitionSpeed=0.93882912;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handpose_VFG.rtm"
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
			class hlc_wp_SCARH_DMR_10rnd_Grip3
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SCARH_DMR_10rnd_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARH_DMR_Blk: hlc_WP_SCARH_DMR
	{
		author="Toadie";
		dlc="Niarms_SCAR";
		displayName="$STR_NIA_rifle_SCARH_DMR_blk";
		scope=2;
		baseWeapon="hlc_wp_SCARH_DMR_Blk";
		picture="\nia_wp_SCAR\tex\ui\hlc_wp_SCARH_DMR_Blk_ca";
		hiddenSelectionsTextures[]=
		{
			"nia_wp_SCAR\tex\toadie_SCAR\scar_common_co.paa",
			"nia_wp_SCAR\tex\toadie_SCAR\scar_lower_co.paa",
			"nia_wp_SCAR\tex\toadie_SCAR\stock_co.paa",
			"nia_wp_SCAR\tex\toadie_SCAR\upper_scarh_co.paa",
			"nia_wp_SCAR\tex\toadie_SCAR\upper_scar_pdw_co.paa",
			"nia_wp_SCAR\tex\toadie_SCAR\acc_extensions_co.paa"
		};
		class nia_magSwitch
		{
			hlc_10Rnd_762x51_B_SCARH_tan="hlc_wp_SCARH_DMR_10rnd_Blk";
			hlc_10Rnd_762x51_mk316_SCARH_tan="hlc_wp_SCARH_DMR_10rnd_Blk";
			hlc_10Rnd_762x51_Barrier_SCARH_tan="hlc_wp_SCARH_DMR_10rnd_Blk";
			hlc_10Rnd_762x51_t_SCARH_tan="hlc_wp_SCARH_DMR_10rnd_Blk";
			hlc_10Rnd_762x51_TDim_SCARH_tan="hlc_wp_SCARH_DMR_10rnd_Blk";
			hlc_10Rnd_762x51_S_SCARH_tan="hlc_wp_SCARH_DMR_10rnd_Blk";
			hlc_10Rnd_762x51_B_SCARH="hlc_wp_SCARH_DMR_10rnd_Blk";
			hlc_10Rnd_762x51_mk316_SCARH="hlc_wp_SCARH_DMR_10rnd_Blk";
			hlc_10Rnd_762x51_Barrier_SCARH="hlc_wp_SCARH_DMR_10rnd_Blk";
			hlc_10Rnd_762x51_t_SCARH="hlc_wp_SCARH_DMR_10rnd_Blk";
			hlc_10Rnd_762x51_TDim_SCARH="hlc_wp_SCARH_DMR_10rnd_Blk";
			hlc_10Rnd_762x51_S_SCARH="hlc_wp_SCARH_DMR_10rnd_Blk";
			hlc_10Rnd_762x51_B_SCARH_camo="hlc_wp_SCARH_DMR_10rnd_Blk";
			hlc_10Rnd_762x51_mk316_SCARH_camo="hlc_wp_SCARH_DMR_10rnd_Blk";
			hlc_10Rnd_762x51_Barrier_SCARH_camo="hlc_wp_SCARH_DMR_10rnd_Blk";
			hlc_10Rnd_762x51_t_SCARH_camo="hlc_wp_SCARH_DMR_10rnd_Blk";
			hlc_10Rnd_762x51_TDim_SCARH_camo="hlc_wp_SCARH_DMR_10rnd_Blk";
			hlc_10Rnd_762x51_S_SCARH_camo="hlc_wp_SCARH_DMR_10rnd_Blk";
			default="hlc_wp_SCARH_DMR_Blk";
		};
		class nia_gripSwitch
		{
			VFG="hlc_wp_SCARH_DMR_Blk_grip";
			AFG="hlc_wp_SCARH_DMR_Blk_grip2";
			VFG2="hlc_wp_SCARH_DMR_Blk_grip3";
			default="hlc_wp_SCARH_DMR_Blk";
		};
		rhs_grip1_change="hlc_wp_SCARH_DMR_Blk_grip";
		rhs_grip2_change="hlc_wp_SCARH_DMR_Blk_grip2";
		rhs_grip3_change="hlc_wp_SCARH_DMR_Blk_grip3";
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
			class hlc_wp_SCARH_DMR_Blk
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SCARH_DMR_Blk_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARH_DMR_Blk_TacReload: hlc_wp_SCARH_DMR_Blk
	{
		magazineReloadSwitchPhase="(40 / 96)";
		scopeArsenal=0;
		reloadMagazineSound[]=
		{
			"\nia_wp_SCAR\snd\mk17_reload_Partial.ogg",
			0.85000002,
			1,
			25
		};
		reloadAction="NIA_GestureReload_Mk17_Tactical";
		model="nia_wp_SCAR\mesh\Rifle\SCARH_Sniper_TacReload.p3d";
		rhs_grip1_change="hlc_wp_SCARH_DMR_Blk_grip";
		rhs_grip2_change="hlc_wp_SCARH_DMR_Blk_grip2";
		rhs_grip3_change="hlc_wp_SCARH_DMR_Blk_grip3";
		class nia_gripSwitch
		{
			VFG="hlc_wp_SCARH_DMR_Blk_grip";
			AFG="hlc_wp_SCARH_DMR_Blk_grip2";
			VFG2="hlc_wp_SCARH_DMR_Blk_grip3";
			default="hlc_wp_SCARH_DMR_Blk_TacReload";
		};
	};
	class hlc_wp_SCARH_DMR_Blk_grip: hlc_wp_SCARH_DMR_Blk
	{
		scopeArsenal=0;
		dexterity=1.3411845;
		aimTransitionSpeed=0.93882912;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handpose_VFG.rtm"
		};
		class nia_magSwitch
		{
			hlc_10Rnd_762x51_B_SCARH_tan="hlc_wp_SCARH_DMR_10Rnd_Blk_grip";
			hlc_10Rnd_762x51_mk316_SCARH_tan="hlc_wp_SCARH_DMR_10Rnd_Blk_grip";
			hlc_10Rnd_762x51_Barrier_SCARH_tan="hlc_wp_SCARH_DMR_10Rnd_Blk_grip";
			hlc_10Rnd_762x51_t_SCARH_tan="hlc_wp_SCARH_DMR_10Rnd_Blk_grip";
			hlc_10Rnd_762x51_TDim_SCARH_tan="hlc_wp_SCARH_DMR_10Rnd_Blk_grip";
			hlc_10Rnd_762x51_S_SCARH_tan="hlc_wp_SCARH_DMR_10Rnd_Blk_grip";
			hlc_10Rnd_762x51_B_SCARH="hlc_wp_SCARH_DMR_10Rnd_Blk_grip";
			hlc_10Rnd_762x51_mk316_SCARH="hlc_wp_SCARH_DMR_10Rnd_Blk_grip";
			hlc_10Rnd_762x51_Barrier_SCARH="hlc_wp_SCARH_DMR_10Rnd_Blk_grip";
			hlc_10Rnd_762x51_t_SCARH="hlc_wp_SCARH_DMR_10Rnd_Blk_grip";
			hlc_10Rnd_762x51_TDim_SCARH="hlc_wp_SCARH_DMR_10Rnd_Blk_grip";
			hlc_10Rnd_762x51_S_SCARH="hlc_wp_SCARH_DMR_10Rnd_Blk_grip";
			hlc_10Rnd_762x51_B_SCARH_camo="hlc_wp_SCARH_DMR_10Rnd_Blk_grip";
			hlc_10Rnd_762x51_mk316_SCARH_camo="hlc_wp_SCARH_DMR_10Rnd_Blk_grip";
			hlc_10Rnd_762x51_Barrier_SCARH_camo="hlc_wp_SCARH_DMR_10Rnd_Blk_grip";
			hlc_10Rnd_762x51_t_SCARH_camo="hlc_wp_SCARH_DMR_10Rnd_Blk_grip";
			hlc_10Rnd_762x51_TDim_SCARH_camo="hlc_wp_SCARH_DMR_10Rnd_Blk_grip";
			hlc_10Rnd_762x51_S_SCARH_camo="hlc_wp_SCARH_DMR_10Rnd_Blk_grip";
			default="hlc_wp_SCARH_DMR_Blk_grip";
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
			class hlc_wp_SCARH_DMR_Blk_Grip
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SCARH_DMR_Blk_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARH_DMR_Blk_grip2: hlc_wp_SCARH_DMR_Blk
	{
		scopeArsenal=0;
		inertia="(0.445*0.85)";
		dexterity=1.3411845;
		aimTransitionSpeed=0.93882912;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handpose_AFG.rtm"
		};
		class nia_magSwitch
		{
			hlc_10Rnd_762x51_B_SCARH_tan="hlc_wp_SCARH_DMR_10Rnd_Blk_grip2";
			hlc_10Rnd_762x51_mk316_SCARH_tan="hlc_wp_SCARH_DMR_10Rnd_Blk_grip2";
			hlc_10Rnd_762x51_Barrier_SCARH_tan="hlc_wp_SCARH_DMR_10Rnd_Blk_grip2";
			hlc_10Rnd_762x51_t_SCARH_tan="hlc_wp_SCARH_DMR_10Rnd_Blk_grip2";
			hlc_10Rnd_762x51_TDim_SCARH_tan="hlc_wp_SCARH_DMR_10Rnd_Blk_grip2";
			hlc_10Rnd_762x51_S_SCARH_tan="hlc_wp_SCARH_DMR_10Rnd_Blk_grip2";
			hlc_10Rnd_762x51_B_SCARH="hlc_wp_SCARH_DMR_10Rnd_Blk_grip2";
			hlc_10Rnd_762x51_mk316_SCARH="hlc_wp_SCARH_DMR_10Rnd_Blk_grip2";
			hlc_10Rnd_762x51_Barrier_SCARH="hlc_wp_SCARH_DMR_10Rnd_Blk_grip2";
			hlc_10Rnd_762x51_t_SCARH="hlc_wp_SCARH_DMR_10Rnd_Blk_grip2";
			hlc_10Rnd_762x51_TDim_SCARH="hlc_wp_SCARH_DMR_10Rnd_Blk_grip2";
			hlc_10Rnd_762x51_S_SCARH="hlc_wp_SCARH_DMR_10Rnd_Blk_grip2";
			hlc_10Rnd_762x51_B_SCARH_camo="hlc_wp_SCARH_DMR_10Rnd_Blk_grip2";
			hlc_10Rnd_762x51_mk316_SCARH_camo="hlc_wp_SCARH_DMR_10Rnd_Blk_grip2";
			hlc_10Rnd_762x51_Barrier_SCARH_camo="hlc_wp_SCARH_DMR_10Rnd_Blk_grip2";
			hlc_10Rnd_762x51_t_SCARH_camo="hlc_wp_SCARH_DMR_10Rnd_Blk_grip2";
			hlc_10Rnd_762x51_TDim_SCARH_camo="hlc_wp_SCARH_DMR_10Rnd_Blk_grip2";
			hlc_10Rnd_762x51_S_SCARH_camo="hlc_wp_SCARH_DMR_10Rnd_Blk_grip2";
			default="hlc_wp_SCARH_DMR_Blk_grip2";
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
			class hlc_wp_SCARH_DMR_Blk_Grip2
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SCARH_DMR_Blk_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARH_DMR_Blk_grip3: hlc_wp_SCARH_DMR_Blk
	{
		scopeArsenal=0;
		dexterity=1.3411845;
		aimTransitionSpeed=0.93882912;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handpose_VFG.rtm"
		};
		class nia_magSwitch
		{
			hlc_10Rnd_762x51_B_SCARH_tan="hlc_wp_SCARH_DMR_10Rnd_Blk_grip3";
			hlc_10Rnd_762x51_mk316_SCARH_tan="hlc_wp_SCARH_DMR_10Rnd_Blk_grip3";
			hlc_10Rnd_762x51_Barrier_SCARH_tan="hlc_wp_SCARH_DMR_10Rnd_Blk_grip3";
			hlc_10Rnd_762x51_t_SCARH_tan="hlc_wp_SCARH_DMR_10Rnd_Blk_grip3";
			hlc_10Rnd_762x51_TDim_SCARH_tan="hlc_wp_SCARH_DMR_10Rnd_Blk_grip3";
			hlc_10Rnd_762x51_S_SCARH_tan="hlc_wp_SCARH_DMR_10Rnd_Blk_grip3";
			hlc_10Rnd_762x51_B_SCARH="hlc_wp_SCARH_DMR_10Rnd_Blk_grip3";
			hlc_10Rnd_762x51_mk316_SCARH="hlc_wp_SCARH_DMR_10Rnd_Blk_grip3";
			hlc_10Rnd_762x51_Barrier_SCARH="hlc_wp_SCARH_DMR_10Rnd_Blk_grip3";
			hlc_10Rnd_762x51_t_SCARH="hlc_wp_SCARH_DMR_10Rnd_Blk_grip3";
			hlc_10Rnd_762x51_TDim_SCARH="hlc_wp_SCARH_DMR_10Rnd_Blk_grip3";
			hlc_10Rnd_762x51_S_SCARH="hlc_wp_SCARH_DMR_10Rnd_Blk_grip3";
			hlc_10Rnd_762x51_B_SCARH_camo="hlc_wp_SCARH_DMR_10Rnd_Blk_grip3";
			hlc_10Rnd_762x51_mk316_SCARH_camo="hlc_wp_SCARH_DMR_10Rnd_Blk_grip3";
			hlc_10Rnd_762x51_Barrier_SCARH_camo="hlc_wp_SCARH_DMR_10Rnd_Blk_grip3";
			hlc_10Rnd_762x51_t_SCARH_camo="hlc_wp_SCARH_DMR_10Rnd_Blk_grip3";
			hlc_10Rnd_762x51_TDim_SCARH_camo="hlc_wp_SCARH_DMR_10Rnd_Blk_grip3";
			hlc_10Rnd_762x51_S_SCARH_camo="hlc_wp_SCARH_DMR_10Rnd_Blk_grip3";
			default="hlc_wp_SCARH_DMR_Blk_grip3";
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
			class hlc_wp_SCARH_DMR_Blk_Grip3
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SCARH_DMR_Blk_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARH_DMR_10rnd_Blk: hlc_wp_SCARH_DMR_Blk
	{
		scopeArsenal=0;
		reloadAction="NIA_GestureReload_Mk17_10rnd";
		baseweapon="hlc_wp_SCARH_DMR_10rnd_Blk";
		class nia_gripSwitch
		{
			VFG="hlc_wp_SCARH_DMR_10rnd_Blk_grip";
			AFG="hlc_wp_SCARH_DMR_10rnd_Blk_grip2";
			VFG2="hlc_wp_SCARH_DMR_10rnd_Blk_grip3";
			default="hlc_wp_SCARH_DMR_10rnd_Blk";
		};
		rhs_grip1_change="hlc_wp_SCARH_DMR_10rnd_Blk_grip";
		rhs_grip2_change="hlc_wp_SCARH_DMR_10rnd_Blk_grip2";
		rhs_grip3_change="hlc_wp_SCARH_DMR_10rnd_Blk_grip3";
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
			class hlc_wp_SCARH_DMR_10rnd_Blk
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SCARH_DMR_10Rnd_Blk_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARH_DMR_10Rnd_Blk_TacReload: hlc_wp_SCARH_DMR_10rnd_Blk
	{
		magazineReloadSwitchPhase="(40 / 96)";
		scopeArsenal=0;
		reloadMagazineSound[]=
		{
			"\nia_wp_SCAR\snd\mk17_reload_Partial.ogg",
			0.85000002,
			1,
			25
		};
		reloadAction="NIA_GestureReload_Mk17_10Rnd_Tactical";
		model="nia_wp_SCAR\mesh\Rifle\SCARH_Sniper_TacReload.p3d";
		rhs_grip1_change="hlc_wp_SCARH_DMR_10Rnd_Blk_grip";
		rhs_grip2_change="hlc_wp_SCARH_DMR_10Rnd_Blk_grip2";
		rhs_grip3_change="hlc_wp_SCARH_DMR_10Rnd_Blk_grip3";
		class nia_gripSwitch
		{
			VFG="hlc_wp_SCARH_DMR_10Rnd_Blk_grip";
			AFG="hlc_wp_SCARH_DMR_10Rnd_Blk_grip2";
			VFG2="hlc_wp_SCARH_DMR_10Rnd_Blk_grip3";
			default="hlc_wp_SCARH_DMR_10Rnd_Blk_TacReload";
		};
	};
	class hlc_wp_SCARH_DMR_10rnd_Blk_grip: hlc_wp_SCARH_DMR_10rnd_Blk
	{
		scopeArsenal=0;
		dexterity=1.5741909;
		aimTransitionSpeed=1.1019336;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handpose_VFG.rtm"
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
			class hlc_wp_SCARH_DMR_10rnd_Blk_Grip
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SCARH_DMR_10Rnd_Blk_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARH_DMR_10rnd_Blk_grip2: hlc_wp_SCARH_DMR_10rnd_Blk
	{
		scopeArsenal=0;
		inertia="(0.349*0.85)";
		dexterity=1.5741909;
		aimTransitionSpeed=1.1019336;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handpose_AFG.rtm"
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
			class hlc_wp_SCARH_DMR_10rnd_Blk_Grip2
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SCARH_DMR_10Rnd_Blk_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARH_DMR_10rnd_Blk_grip3: hlc_wp_SCARH_DMR_10rnd_Blk
	{
		scopeArsenal=0;
		dexterity=1.5741909;
		aimTransitionSpeed=1.1019336;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handpose_VFG.rtm"
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
			class hlc_wp_SCARH_DMR_10rnd_Blk_Grip3
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SCARH_DMR_10Rnd_Blk_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARH_DMR_camo: hlc_WP_SCARH_DMR
	{
		author="Toadie";
		dlc="Niarms_SCAR";
		displayName="$STR_NIA_rifle_SCARH_DMR_camo";
		scope=2;
		baseWeapon="hlc_wp_SCARH_DMR_camo";
		picture="\nia_wp_SCAR\tex\ui\hlc_wp_SCARH_DMR_camo_ca";
		hiddenSelectionsTextures[]=
		{
			"nia_wp_SCAR\tex\toadie_SCAR\scar_common_camo_co.paa",
			"nia_wp_SCAR\tex\toadie_SCAR\scar_lower_camo_co.paa",
			"nia_wp_SCAR\tex\toadie_SCAR\stock_camo_co.paa",
			"nia_wp_SCAR\tex\toadie_SCAR\upper_scarh_camo_co.paa",
			"nia_wp_SCAR\tex\toadie_SCAR\upper_scar_pdw_camo_co.paa",
			"nia_wp_SCAR\tex\toadie_SCAR\acc_extensions_camo_co.paa"
		};
		HiddenSelectionsMaterials[]=
		{
			"nia_wp_SCAR\mat\scar_common_camo.rvmat",
			"nia_wp_SCAR\mat\scar_lowers_camo.rvmat",
			"nia_wp_SCAR\mat\scar_stock_camo.rvmat",
			"nia_wp_SCAR\mat\scar_upper_scarh_camo.rvmat",
			"nia_wp_SCAR\mat\scar_upper_scar-pdw_camo.rvmat",
			"nia_wp_SCAR\mat\acc_extensions_camo.rvmat"
		};
		class nia_magSwitch
		{
			hlc_10Rnd_762x51_B_SCARH_tan="hlc_wp_SCARH_DMR_10rnd_Camo";
			hlc_10Rnd_762x51_mk316_SCARH_tan="hlc_wp_SCARH_DMR_10rnd_Camo";
			hlc_10Rnd_762x51_Barrier_SCARH_tan="hlc_wp_SCARH_DMR_10rnd_Camo";
			hlc_10Rnd_762x51_t_SCARH_tan="hlc_wp_SCARH_DMR_10rnd_Camo";
			hlc_10Rnd_762x51_TDim_SCARH_tan="hlc_wp_SCARH_DMR_10rnd_Camo";
			hlc_10Rnd_762x51_S_SCARH_tan="hlc_wp_SCARH_DMR_10rnd_Camo";
			hlc_10Rnd_762x51_B_SCARH="hlc_wp_SCARH_DMR_10rnd_Camo";
			hlc_10Rnd_762x51_mk316_SCARH="hlc_wp_SCARH_DMR_10rnd_Camo";
			hlc_10Rnd_762x51_Barrier_SCARH="hlc_wp_SCARH_DMR_10rnd_Camo";
			hlc_10Rnd_762x51_t_SCARH="hlc_wp_SCARH_DMR_10rnd_Camo";
			hlc_10Rnd_762x51_TDim_SCARH="hlc_wp_SCARH_DMR_10rnd_Camo";
			hlc_10Rnd_762x51_S_SCARH="hlc_wp_SCARH_DMR_10rnd_Camo";
			hlc_10Rnd_762x51_B_SCARH_camo="hlc_wp_SCARH_DMR_10rnd_Camo";
			hlc_10Rnd_762x51_mk316_SCARH_camo="hlc_wp_SCARH_DMR_10rnd_Camo";
			hlc_10Rnd_762x51_Barrier_SCARH_camo="hlc_wp_SCARH_DMR_10rnd_Camo";
			hlc_10Rnd_762x51_t_SCARH_camo="hlc_wp_SCARH_DMR_10rnd_Camo";
			hlc_10Rnd_762x51_TDim_SCARH_camo="hlc_wp_SCARH_DMR_10rnd_Camo";
			hlc_10Rnd_762x51_S_SCARH_camo="hlc_wp_SCARH_DMR_10rnd_Camo";
			default="hlc_wp_SCARH_DMR_Camo";
		};
		class nia_gripSwitch
		{
			VFG="hlc_wp_SCARH_DMR_camo_grip";
			AFG="hlc_wp_SCARH_DMR_camo_grip2";
			VFG2="hlc_wp_SCARH_DMR_camo_grip3";
			default="hlc_wp_SCARH_DMR_camo";
		};
		rhs_grip1_change="hlc_wp_SCARH_DMR_camo_grip";
		rhs_grip2_change="hlc_wp_SCARH_DMR_camo_grip2";
		rhs_grip3_change="hlc_wp_SCARH_DMR_camo_grip3";
	};
	class hlc_wp_SCARH_DMR_Camo_TacReload: hlc_wp_SCARH_DMR_camo
	{
		magazineReloadSwitchPhase="(40 / 96)";
		scopeArsenal=0;
		reloadMagazineSound[]=
		{
			"\nia_wp_SCAR\snd\mk17_reload_Partial.ogg",
			0.85000002,
			1,
			25
		};
		reloadAction="NIA_GestureReload_Mk17_Tactical";
		model="nia_wp_SCAR\mesh\Rifle\SCARH_Sniper_TacReload.p3d";
		rhs_grip1_change="hlc_wp_SCARH_DMR_Camo_grip";
		rhs_grip2_change="hlc_wp_SCARH_DMR_Camo_grip2";
		rhs_grip3_change="hlc_wp_SCARH_DMR_Camo_grip3";
		class nia_gripSwitch
		{
			VFG="hlc_wp_SCARH_DMR_Camo_grip";
			AFG="hlc_wp_SCARH_DMR_Camo_grip2";
			VFG2="hlc_wp_SCARH_DMR_Camo_grip3";
			default="hlc_wp_SCARH_DMR_Camo_TacReload";
		};
	};
	class hlc_wp_SCARH_DMR_Camo_grip: hlc_wp_SCARH_DMR_camo
	{
		scopeArsenal=0;
		dexterity=1.3411845;
		aimTransitionSpeed=0.93882912;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handpose_VFG.rtm"
		};
		class nia_magSwitch
		{
			hlc_10Rnd_762x51_B_SCARH_tan="hlc_wp_SCARH_DMR_10Rnd_Camo_grip";
			hlc_10Rnd_762x51_mk316_SCARH_tan="hlc_wp_SCARH_DMR_10Rnd_Camo_grip";
			hlc_10Rnd_762x51_Barrier_SCARH_tan="hlc_wp_SCARH_DMR_10Rnd_Camo_grip";
			hlc_10Rnd_762x51_t_SCARH_tan="hlc_wp_SCARH_DMR_10Rnd_Camo_grip";
			hlc_10Rnd_762x51_TDim_SCARH_tan="hlc_wp_SCARH_DMR_10Rnd_Camo_grip";
			hlc_10Rnd_762x51_S_SCARH_tan="hlc_wp_SCARH_DMR_10Rnd_Camo_grip";
			hlc_10Rnd_762x51_B_SCARH="hlc_wp_SCARH_DMR_10Rnd_Camo_grip";
			hlc_10Rnd_762x51_mk316_SCARH="hlc_wp_SCARH_DMR_10Rnd_Camo_grip";
			hlc_10Rnd_762x51_Barrier_SCARH="hlc_wp_SCARH_DMR_10Rnd_Camo_grip";
			hlc_10Rnd_762x51_t_SCARH="hlc_wp_SCARH_DMR_10Rnd_Camo_grip";
			hlc_10Rnd_762x51_TDim_SCARH="hlc_wp_SCARH_DMR_10Rnd_Camo_grip";
			hlc_10Rnd_762x51_S_SCARH="hlc_wp_SCARH_DMR_10Rnd_Camo_grip";
			hlc_10Rnd_762x51_B_SCARH_camo="hlc_wp_SCARH_DMR_10Rnd_Camo_grip";
			hlc_10Rnd_762x51_mk316_SCARH_camo="hlc_wp_SCARH_DMR_10Rnd_Camo_grip";
			hlc_10Rnd_762x51_Barrier_SCARH_camo="hlc_wp_SCARH_DMR_10Rnd_Camo_grip";
			hlc_10Rnd_762x51_t_SCARH_camo="hlc_wp_SCARH_DMR_10Rnd_Camo_grip";
			hlc_10Rnd_762x51_TDim_SCARH_camo="hlc_wp_SCARH_DMR_10Rnd_Camo_grip";
			hlc_10Rnd_762x51_S_SCARH_camo="hlc_wp_SCARH_DMR_10Rnd_Camo_grip";
			default="hlc_wp_SCARH_DMR_Camo_grip";
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
			class hlc_wp_SCARH_DMR_Camo_Grip
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SCARH_DMR_Camo_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARH_DMR_Camo_grip2: hlc_wp_SCARH_DMR_camo
	{
		scopeArsenal=0;
		inertia="(0.445*0.85)";
		dexterity=1.3411845;
		aimTransitionSpeed=0.93882912;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handpose_AFG.rtm"
		};
		class nia_magSwitch
		{
			hlc_10Rnd_762x51_B_SCARH_tan="hlc_wp_SCARH_DMR_10Rnd_Camo_grip2";
			hlc_10Rnd_762x51_mk316_SCARH_tan="hlc_wp_SCARH_DMR_10Rnd_Camo_grip2";
			hlc_10Rnd_762x51_Barrier_SCARH_tan="hlc_wp_SCARH_DMR_10Rnd_Camo_grip2";
			hlc_10Rnd_762x51_t_SCARH_tan="hlc_wp_SCARH_DMR_10Rnd_Camo_grip2";
			hlc_10Rnd_762x51_TDim_SCARH_tan="hlc_wp_SCARH_DMR_10Rnd_Camo_grip2";
			hlc_10Rnd_762x51_S_SCARH_tan="hlc_wp_SCARH_DMR_10Rnd_Camo_grip2";
			hlc_10Rnd_762x51_B_SCARH="hlc_wp_SCARH_DMR_10Rnd_Camo_grip2";
			hlc_10Rnd_762x51_mk316_SCARH="hlc_wp_SCARH_DMR_10Rnd_Camo_grip2";
			hlc_10Rnd_762x51_Barrier_SCARH="hlc_wp_SCARH_DMR_10Rnd_Camo_grip2";
			hlc_10Rnd_762x51_t_SCARH="hlc_wp_SCARH_DMR_10Rnd_Camo_grip2";
			hlc_10Rnd_762x51_TDim_SCARH="hlc_wp_SCARH_DMR_10Rnd_Camo_grip2";
			hlc_10Rnd_762x51_S_SCARH="hlc_wp_SCARH_DMR_10Rnd_Camo_grip2";
			hlc_10Rnd_762x51_B_SCARH_camo="hlc_wp_SCARH_DMR_10Rnd_Camo_grip2";
			hlc_10Rnd_762x51_mk316_SCARH_camo="hlc_wp_SCARH_DMR_10Rnd_Camo_grip2";
			hlc_10Rnd_762x51_Barrier_SCARH_camo="hlc_wp_SCARH_DMR_10Rnd_Camo_grip2";
			hlc_10Rnd_762x51_t_SCARH_camo="hlc_wp_SCARH_DMR_10Rnd_Camo_grip2";
			hlc_10Rnd_762x51_TDim_SCARH_camo="hlc_wp_SCARH_DMR_10Rnd_Camo_grip2";
			hlc_10Rnd_762x51_S_SCARH_camo="hlc_wp_SCARH_DMR_10Rnd_Camo_grip2";
			default="hlc_wp_SCARH_DMR_Camo_grip2";
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
			class hlc_wp_SCARH_DMR_Camo_Grip2
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SCARH_DMR_Camo_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARH_DMR_Camo_grip3: hlc_wp_SCARH_DMR_camo
	{
		scopeArsenal=0;
		dexterity=1.3411845;
		aimTransitionSpeed=0.93882912;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handpose_VFG.rtm"
		};
		class nia_magSwitch
		{
			hlc_10Rnd_762x51_B_SCARH_tan="hlc_wp_SCARH_DMR_10Rnd_Camo_grip3";
			hlc_10Rnd_762x51_mk316_SCARH_tan="hlc_wp_SCARH_DMR_10Rnd_Camo_grip3";
			hlc_10Rnd_762x51_Barrier_SCARH_tan="hlc_wp_SCARH_DMR_10Rnd_Camo_grip3";
			hlc_10Rnd_762x51_t_SCARH_tan="hlc_wp_SCARH_DMR_10Rnd_Camo_grip3";
			hlc_10Rnd_762x51_TDim_SCARH_tan="hlc_wp_SCARH_DMR_10Rnd_Camo_grip3";
			hlc_10Rnd_762x51_S_SCARH_tan="hlc_wp_SCARH_DMR_10Rnd_Camo_grip3";
			hlc_10Rnd_762x51_B_SCARH="hlc_wp_SCARH_DMR_10Rnd_Camo_grip3";
			hlc_10Rnd_762x51_mk316_SCARH="hlc_wp_SCARH_DMR_10Rnd_Camo_grip3";
			hlc_10Rnd_762x51_Barrier_SCARH="hlc_wp_SCARH_DMR_10Rnd_Camo_grip3";
			hlc_10Rnd_762x51_t_SCARH="hlc_wp_SCARH_DMR_10Rnd_Camo_grip3";
			hlc_10Rnd_762x51_TDim_SCARH="hlc_wp_SCARH_DMR_10Rnd_Camo_grip3";
			hlc_10Rnd_762x51_S_SCARH="hlc_wp_SCARH_DMR_10Rnd_Camo_grip3";
			hlc_10Rnd_762x51_B_SCARH_camo="hlc_wp_SCARH_DMR_10Rnd_Camo_grip3";
			hlc_10Rnd_762x51_mk316_SCARH_camo="hlc_wp_SCARH_DMR_10Rnd_Camo_grip3";
			hlc_10Rnd_762x51_Barrier_SCARH_camo="hlc_wp_SCARH_DMR_10Rnd_Camo_grip3";
			hlc_10Rnd_762x51_t_SCARH_camo="hlc_wp_SCARH_DMR_10Rnd_Camo_grip3";
			hlc_10Rnd_762x51_TDim_SCARH_camo="hlc_wp_SCARH_DMR_10Rnd_Camo_grip3";
			hlc_10Rnd_762x51_S_SCARH_camo="hlc_wp_SCARH_DMR_10Rnd_Camo_grip3";
			default="hlc_wp_SCARH_DMR_Camo_grip3";
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
			class hlc_wp_SCARH_DMR_Camo_Grip3
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SCARH_DMR_Camo_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARH_DMR_10rnd_Camo: hlc_wp_SCARH_DMR_camo
	{
		scopeArsenal=0;
		reloadAction="NIA_GestureReload_Mk17_10rnd";
		baseweapon="hlc_wp_SCARH_DMR_10rnd_Camo";
		class nia_gripSwitch
		{
			VFG="hlc_wp_SCARH_DMR_10rnd_Camo_grip";
			AFG="hlc_wp_SCARH_DMR_10rnd_Camo_grip2";
			VFG2="hlc_wp_SCARH_DMR_10rnd_Camo_grip3";
			default="hlc_wp_SCARH_DMR_10rnd_Blk";
		};
		rhs_grip1_change="hlc_wp_SCARH_DMR_10rnd_Camo_grip";
		rhs_grip2_change="hlc_wp_SCARH_DMR_10rnd_Camo_grip2";
		rhs_grip3_change="hlc_wp_SCARH_DMR_10rnd_Camo_grip3";
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
			class hlc_wp_SCARH_DMR_10rnd_Blk
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SCARH_DMR_10Rnd_Camo_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARH_DMR_10Rnd_Camo_TacReload: hlc_wp_SCARH_DMR_10rnd_Camo
	{
		magazineReloadSwitchPhase="(40 / 96)";
		scopeArsenal=0;
		reloadMagazineSound[]=
		{
			"\nia_wp_SCAR\snd\mk17_reload_Partial.ogg",
			0.85000002,
			1,
			25
		};
		reloadAction="NIA_GestureReload_Mk17_10Rnd_Tactical";
		model="nia_wp_SCAR\mesh\Rifle\SCARH_Sniper_TacReload.p3d";
		rhs_grip1_change="hlc_wp_SCARH_DMR_10Rnd_Camo_grip";
		rhs_grip2_change="hlc_wp_SCARH_DMR_10Rnd_Camo_grip2";
		rhs_grip3_change="hlc_wp_SCARH_DMR_10Rnd_Camo_grip3";
		class nia_gripSwitch
		{
			VFG="hlc_wp_SCARH_DMR_10Rnd_Camo_grip";
			AFG="hlc_wp_SCARH_DMR_10Rnd_Camo_grip2";
			VFG2="hlc_wp_SCARH_DMR_10Rnd_Camo_grip3";
			default="hlc_wp_SCARH_DMR_10Rnd_Camo_TacReload";
		};
	};
	class hlc_wp_SCARH_DMR_10rnd_Camo_grip: hlc_wp_SCARH_DMR_10rnd_Camo
	{
		scopeArsenal=0;
		dexterity=1.5741909;
		aimTransitionSpeed=1.1019336;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handpose_VFG.rtm"
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
			class hlc_wp_SCARH_DMR_10rnd_Camo_Grip
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SCARH_DMR_10Rnd_Camo_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARH_DMR_10rnd_Camo_grip2: hlc_wp_SCARH_DMR_10rnd_Camo
	{
		scopeArsenal=0;
		inertia="(0.349*0.85)";
		dexterity=1.5741909;
		aimTransitionSpeed=1.1019336;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handpose_AFG.rtm"
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
			class hlc_wp_SCARH_DMR_10rnd_Camo_Grip2
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SCARH_DMR_10Rnd_Camo_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARH_DMR_10rnd_Camo_grip3: hlc_wp_SCARH_DMR_10rnd_Camo
	{
		scopeArsenal=0;
		dexterity=1.5741909;
		aimTransitionSpeed=1.1019336;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handpose_VFG.rtm"
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
			class hlc_wp_SCARH_DMR_10rnd_Camo_Grip3
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SCARH_DMR_10Rnd_Camo_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_MK17: hlc_wp_SCARH_STD
	{
		author="Toadie";
		dlc="Niarms_SCAR";
		displayName="$STR_NIA_rifle_Mk17";
		scope=2;
		baseWeapon="hlc_WP_Mk17";
		class LinkedItems
		{
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="hlc_muzzle_Miter18T";
			};
		};
		picture="\nia_wp_SCAR\tex\ui\hlc_wp_MK17_ca";
		hiddenSelectionsTextures[]=
		{
			"nia_wp_SCAR\tex\toadie_SCAR\scar_common_tan_co.paa",
			"nia_wp_SCAR\tex\toadie_SCAR\scar_lower_tan_co.paa",
			"nia_wp_SCAR\tex\toadie_SCAR\stock_tan_co.paa",
			"nia_wp_SCAR\tex\toadie_SCAR\upper_scarh_mk17_co.paa"
		};
		HiddenSelectionsMaterials[]=
		{
			"nia_wp_SCAR\mat\scar_common.rvmat",
			"nia_wp_SCAR\mat\scar_lowers.rvmat",
			"nia_wp_SCAR\mat\scar_stock.rvmat",
			"nia_wp_SCAR\mat\scar_upper_scarh_mk17.rvmat"
		};
		class nia_magSwitch
		{
			hlc_10Rnd_762x51_B_SCARH_tan="hlc_wp_Mk17_10Rnd";
			hlc_10Rnd_762x51_mk316_SCARH_tan="hlc_wp_Mk17_10Rnd";
			hlc_10Rnd_762x51_Barrier_SCARH_tan="hlc_wp_Mk17_10Rnd";
			hlc_10Rnd_762x51_t_SCARH_tan="hlc_wp_Mk17_10Rnd";
			hlc_10Rnd_762x51_TDim_SCARH_tan="hlc_wp_Mk17_10Rnd";
			hlc_10Rnd_762x51_S_SCARH_tan="hlc_wp_Mk17_10Rnd";
			hlc_10Rnd_762x51_B_SCARH="hlc_wp_Mk17_10Rnd";
			hlc_10Rnd_762x51_mk316_SCARH="hlc_wp_Mk17_10Rnd";
			hlc_10Rnd_762x51_Barrier_SCARH="hlc_wp_Mk17_10Rnd";
			hlc_10Rnd_762x51_t_SCARH="hlc_wp_Mk17_10Rnd";
			hlc_10Rnd_762x51_TDim_SCARH="hlc_wp_Mk17_10Rnd";
			hlc_10Rnd_762x51_S_SCARH="hlc_wp_Mk17_10Rnd";
			hlc_10Rnd_762x51_B_SCARH_camo="hlc_wp_Mk17_10Rnd";
			hlc_10Rnd_762x51_mk316_SCARH_camo="hlc_wp_Mk17_10Rnd";
			hlc_10Rnd_762x51_Barrier_SCARH_camo="hlc_wp_Mk17_10Rnd";
			hlc_10Rnd_762x51_t_SCARH_camo="hlc_wp_Mk17_10Rnd";
			hlc_10Rnd_762x51_TDim_SCARH_camo="hlc_wp_Mk17_10Rnd";
			hlc_10Rnd_762x51_S_SCARH_camo="hlc_wp_Mk17_10Rnd";
			default="hlc_wp_Mk17";
		};
		class nia_gripSwitch
		{
			VFG="hlc_WP_Mk17_grip";
			AFG="hlc_WP_Mk17_grip2";
			VFG2="hlc_WP_Mk17_grip3";
			default="hlc_WP_Mk17";
		};
		rhs_grip1_change="hlc_WP_Mk17_grip";
		rhs_grip2_change="hlc_WP_Mk17_grip2";
		rhs_grip3_change="hlc_WP_Mk17_grip3";
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
			class hlc_WP_Mk17
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_Mk17_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_Mk17_TacReload: hlc_wp_MK17
	{
		magazineReloadSwitchPhase="(40 / 96)";
		scopeArsenal=0;
		reloadMagazineSound[]=
		{
			"\nia_wp_SCAR\snd\mk17_reload_Partial.ogg",
			0.85000002,
			1,
			25
		};
		reloadAction="NIA_GestureReload_Mk17_Tactical";
		model="nia_wp_SCAR\mesh\Rifle\SCARH_STD_TacReload.p3d";
		rhs_grip1_change="hlc_wp_Mk17_grip";
		rhs_grip2_change="hlc_wp_Mk17_grip2";
		rhs_grip3_change="hlc_wp_Mk17_grip3";
		class nia_gripSwitch
		{
			VFG="hlc_wp_Mk17_grip";
			AFG="hlc_wp_Mk17_grip2";
			VFG2="hlc_wp_Mk17_grip3";
			default="hlc_wp_Mk17_TacReload";
		};
	};
	class hlc_wp_Mk17_grip: hlc_wp_MK17
	{
		scopeArsenal=0;
		dexterity=1.5471935;
		aimTransitionSpeed=1.0830355;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handpose_VFG.rtm"
		};
		class nia_magSwitch
		{
			hlc_10Rnd_762x51_B_SCARH_tan="hlc_wp_Mk17_10Rnd_grip";
			hlc_10Rnd_762x51_mk316_SCARH_tan="hlc_wp_Mk17_10Rnd_grip";
			hlc_10Rnd_762x51_Barrier_SCARH_tan="hlc_wp_Mk17_10Rnd_grip";
			hlc_10Rnd_762x51_t_SCARH_tan="hlc_wp_Mk17_10Rnd_grip";
			hlc_10Rnd_762x51_TDim_SCARH_tan="hlc_wp_Mk17_10Rnd_grip";
			hlc_10Rnd_762x51_S_SCARH_tan="hlc_wp_Mk17_10Rnd_grip";
			hlc_10Rnd_762x51_B_SCARH="hlc_wp_Mk17_10Rnd_grip";
			hlc_10Rnd_762x51_mk316_SCARH="hlc_wp_Mk17_10Rnd_grip";
			hlc_10Rnd_762x51_Barrier_SCARH="hlc_wp_Mk17_10Rnd_grip";
			hlc_10Rnd_762x51_t_SCARH="hlc_wp_Mk17_10Rnd_grip";
			hlc_10Rnd_762x51_TDim_SCARH="hlc_wp_Mk17_10Rnd_grip";
			hlc_10Rnd_762x51_S_SCARH="hlc_wp_Mk17_10Rnd_grip";
			hlc_10Rnd_762x51_B_SCARH_camo="hlc_wp_Mk17_10Rnd_grip";
			hlc_10Rnd_762x51_mk316_SCARH_camo="hlc_wp_Mk17_10Rnd_grip";
			hlc_10Rnd_762x51_Barrier_SCARH_camo="hlc_wp_Mk17_10Rnd_grip";
			hlc_10Rnd_762x51_t_SCARH_camo="hlc_wp_Mk17_10Rnd_grip";
			hlc_10Rnd_762x51_TDim_SCARH_camo="hlc_wp_Mk17_10Rnd_grip";
			hlc_10Rnd_762x51_S_SCARH_camo="hlc_wp_Mk17_10Rnd_grip";
			default="hlc_wp_Mk17_grip";
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
			class hlc_WP_Mk17_Grip
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_Mk17_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_Mk17_grip2: hlc_wp_MK17
	{
		scopeArsenal=0;
		inertia="(0.358*0.85)";
		dexterity=1.5471935;
		aimTransitionSpeed=1.0830355;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handpose_AFG.rtm"
		};
		class nia_magSwitch
		{
			hlc_10Rnd_762x51_B_SCARH_tan="hlc_wp_Mk17_10Rnd_grip2";
			hlc_10Rnd_762x51_mk316_SCARH_tan="hlc_wp_Mk17_10Rnd_grip2";
			hlc_10Rnd_762x51_Barrier_SCARH_tan="hlc_wp_Mk17_10Rnd_grip2";
			hlc_10Rnd_762x51_t_SCARH_tan="hlc_wp_Mk17_10Rnd_grip2";
			hlc_10Rnd_762x51_TDim_SCARH_tan="hlc_wp_Mk17_10Rnd_grip2";
			hlc_10Rnd_762x51_S_SCARH_tan="hlc_wp_Mk17_10Rnd_grip2";
			hlc_10Rnd_762x51_B_SCARH="hlc_wp_Mk17_10Rnd_grip2";
			hlc_10Rnd_762x51_mk316_SCARH="hlc_wp_Mk17_10Rnd_grip2";
			hlc_10Rnd_762x51_Barrier_SCARH="hlc_wp_Mk17_10Rnd_grip2";
			hlc_10Rnd_762x51_t_SCARH="hlc_wp_Mk17_10Rnd_grip2";
			hlc_10Rnd_762x51_TDim_SCARH="hlc_wp_Mk17_10Rnd_grip2";
			hlc_10Rnd_762x51_S_SCARH="hlc_wp_Mk17_10Rnd_grip2";
			hlc_10Rnd_762x51_B_SCARH_camo="hlc_wp_Mk17_10Rnd_grip2";
			hlc_10Rnd_762x51_mk316_SCARH_camo="hlc_wp_Mk17_10Rnd_grip2";
			hlc_10Rnd_762x51_Barrier_SCARH_camo="hlc_wp_Mk17_10Rnd_grip2";
			hlc_10Rnd_762x51_t_SCARH_camo="hlc_wp_Mk17_10Rnd_grip2";
			hlc_10Rnd_762x51_TDim_SCARH_camo="hlc_wp_Mk17_10Rnd_grip2";
			hlc_10Rnd_762x51_S_SCARH_camo="hlc_wp_Mk17_10Rnd_grip2";
			default="hlc_wp_Mk17_grip2";
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
			class hlc_WP_Mk17_Grip2
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_Mk17_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_Mk17_grip3: hlc_wp_MK17
	{
		scopeArsenal=0;
		dexterity=1.5471935;
		aimTransitionSpeed=1.0830355;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handpose_VFG.rtm"
		};
		class nia_magSwitch
		{
			hlc_10Rnd_762x51_B_SCARH_tan="hlc_wp_Mk17_10Rnd_grip3";
			hlc_10Rnd_762x51_mk316_SCARH_tan="hlc_wp_Mk17_10Rnd_grip3";
			hlc_10Rnd_762x51_Barrier_SCARH_tan="hlc_wp_Mk17_10Rnd_grip3";
			hlc_10Rnd_762x51_t_SCARH_tan="hlc_wp_Mk17_10Rnd_grip3";
			hlc_10Rnd_762x51_TDim_SCARH_tan="hlc_wp_Mk17_10Rnd_grip3";
			hlc_10Rnd_762x51_S_SCARH_tan="hlc_wp_Mk17_10Rnd_grip3";
			hlc_10Rnd_762x51_B_SCARH="hlc_wp_Mk17_10Rnd_grip3";
			hlc_10Rnd_762x51_mk316_SCARH="hlc_wp_Mk17_10Rnd_grip3";
			hlc_10Rnd_762x51_Barrier_SCARH="hlc_wp_Mk17_10Rnd_grip3";
			hlc_10Rnd_762x51_t_SCARH="hlc_wp_Mk17_10Rnd_grip3";
			hlc_10Rnd_762x51_TDim_SCARH="hlc_wp_Mk17_10Rnd_grip3";
			hlc_10Rnd_762x51_S_SCARH="hlc_wp_Mk17_10Rnd_grip3";
			hlc_10Rnd_762x51_B_SCARH_camo="hlc_wp_Mk17_10Rnd_grip3";
			hlc_10Rnd_762x51_mk316_SCARH_camo="hlc_wp_Mk17_10Rnd_grip3";
			hlc_10Rnd_762x51_Barrier_SCARH_camo="hlc_wp_Mk17_10Rnd_grip3";
			hlc_10Rnd_762x51_t_SCARH_camo="hlc_wp_Mk17_10Rnd_grip3";
			hlc_10Rnd_762x51_TDim_SCARH_camo="hlc_wp_Mk17_10Rnd_grip3";
			hlc_10Rnd_762x51_S_SCARH_camo="hlc_wp_Mk17_10Rnd_grip3";
			default="hlc_wp_Mk17_grip3";
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
			class hlc_WP_Mk17_Grip3
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_Mk17_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_Mk17_10rnd: hlc_wp_MK17
	{
		scopeArsenal=0;
		reloadAction="NIA_GestureReload_Mk17_10rnd";
		baseweapon="hlc_wp_Mk17_10rnd";
		class nia_gripSwitch
		{
			VFG="hlc_wp_Mk17_10rnd_grip";
			AFG="hlc_wp_Mk17_10rnd_grip2";
			VFG2="hlc_wp_Mk17_10rnd_grip3";
			default="hlc_wp_Mk17_10rnd";
		};
		rhs_grip1_change="hlc_wp_Mk17_10rnd_grip";
		rhs_grip2_change="hlc_wp_Mk17_10rnd_grip2";
		rhs_grip3_change="hlc_wp_Mk17_10rnd";
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
			class hlc_WP_Mk17_10rnd
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_Mk17_10rnd_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_Mk17_10rnd_TacReload: hlc_wp_Mk17_10rnd
	{
		magazineReloadSwitchPhase="(40 / 96)";
		scopeArsenal=0;
		reloadMagazineSound[]=
		{
			"\nia_wp_SCAR\snd\mk17_reload_Partial.ogg",
			0.85000002,
			1,
			25
		};
		reloadAction="NIA_GestureReload_Mk17_10rnd_Tactical";
		model="nia_wp_SCAR\mesh\Rifle\SCARH_STD_TacReload.p3d";
		rhs_grip1_change="hlc_wp_Mk17_10rnd_grip";
		rhs_grip2_change="hlc_wp_Mk17_10rnd_grip2";
		rhs_grip3_change="hlc_wp_Mk17_10rnd_grip3";
		class nia_gripSwitch
		{
			VFG="hlc_wp_Mk17_10rnd_grip";
			AFG="hlc_wp_Mk17_10rnd_grip2";
			VFG2="hlc_wp_Mk17_10rnd_grip3";
			default="hlc_wp_Mk17_10rnd_TacReload";
		};
	};
	class hlc_wp_Mk17_10rnd_grip: hlc_wp_Mk17_10rnd
	{
		scopeArsenal=0;
		dexterity=1.5471935;
		aimTransitionSpeed=1.0830355;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handpose_VFG.rtm"
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
			class hlc_WP_Mk17_10rnd_grip
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_Mk17_10rnd_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_Mk17_10rnd_grip2: hlc_wp_Mk17_10rnd
	{
		scopeArsenal=0;
		inertia="(0.358*0.85)";
		dexterity=1.5471935;
		aimTransitionSpeed=1.0830355;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handpose_AFG.rtm"
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
			class hlc_WP_Mk17_10rnd_grip2
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_Mk17_10rnd_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_Mk17_10rnd_grip3: hlc_wp_Mk17_10rnd
	{
		scopeArsenal=0;
		dexterity=1.5471935;
		aimTransitionSpeed=1.0830355;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handpose_VFG.rtm"
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
			class hlc_WP_Mk17_10rnd_grip3
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_Mk17_10rnd_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_Mk17_camo: hlc_wp_MK17
	{
		author="Toadie";
		dlc="Niarms_SCAR";
		displayName="$STR_NIA_rifle_Mk17_camo";
		scope=2;
		baseWeapon="hlc_wp_Mk17_camo";
		picture="\nia_wp_SCAR\tex\ui\hlc_wp_Mk17_camo_ca";
		hiddenSelectionsTextures[]=
		{
			"nia_wp_SCAR\tex\toadie_SCAR\scar_common_camo_co.paa",
			"nia_wp_SCAR\tex\toadie_SCAR\scar_lower_camo_co.paa",
			"nia_wp_SCAR\tex\toadie_SCAR\stock_camo_co.paa",
			"nia_wp_SCAR\tex\toadie_SCAR\upper_scarh_Mk17_camo_co.paa"
		};
		HiddenSelectionsMaterials[]=
		{
			"nia_wp_SCAR\mat\scar_common_camo.rvmat",
			"nia_wp_SCAR\mat\scar_lowers_camo.rvmat",
			"nia_wp_SCAR\mat\scar_stock_camo.rvmat",
			"nia_wp_SCAR\mat\scar_upper_scarh_Mk17_camo.rvmat"
		};
		class nia_magSwitch
		{
			hlc_10Rnd_762x51_B_SCARH_tan="hlc_wp_MK17_10rnd_Camo";
			hlc_10Rnd_762x51_mk316_SCARH_tan="hlc_wp_MK17_10rnd_Camo";
			hlc_10Rnd_762x51_Barrier_SCARH_tan="hlc_wp_MK17_10rnd_Camo";
			hlc_10Rnd_762x51_t_SCARH_tan="hlc_wp_MK17_10rnd_Camo";
			hlc_10Rnd_762x51_TDim_SCARH_tan="hlc_wp_MK17_10rnd_Camo";
			hlc_10Rnd_762x51_S_SCARH_tan="hlc_wp_MK17_10rnd_Camo";
			hlc_10Rnd_762x51_B_SCARH="hlc_wp_MK17_10rnd_Camo";
			hlc_10Rnd_762x51_mk316_SCARH="hlc_wp_MK17_10rnd_Camo";
			hlc_10Rnd_762x51_Barrier_SCARH="hlc_wp_MK17_10rnd_Camo";
			hlc_10Rnd_762x51_t_SCARH="hlc_wp_MK17_10rnd_Camo";
			hlc_10Rnd_762x51_TDim_SCARH="hlc_wp_MK17_10rnd_Camo";
			hlc_10Rnd_762x51_S_SCARH="hlc_wp_MK17_10rnd_Camo";
			hlc_10Rnd_762x51_B_SCARH_camo="hlc_wp_MK17_10rnd_Camo";
			hlc_10Rnd_762x51_mk316_SCARH_camo="hlc_wp_MK17_10rnd_Camo";
			hlc_10Rnd_762x51_Barrier_SCARH_camo="hlc_wp_MK17_10rnd_Camo";
			hlc_10Rnd_762x51_t_SCARH_camo="hlc_wp_MK17_10rnd_Camo";
			hlc_10Rnd_762x51_TDim_SCARH_camo="hlc_wp_MK17_10rnd_Camo";
			hlc_10Rnd_762x51_S_SCARH_camo="hlc_wp_MK17_10rnd_Camo";
			default="hlc_wp_MK17_Camo";
		};
		class nia_gripSwitch
		{
			VFG="hlc_wp_Mk17_camo_grip";
			AFG="hlc_wp_Mk17_camo_grip2";
			VFG2="hlc_wp_Mk17_camo_grip3";
			default="hlc_wp_Mk17_camo";
		};
		rhs_grip1_change="hlc_wp_Mk17_camo_grip";
		rhs_grip2_change="hlc_wp_Mk17_camo_grip2";
		rhs_grip3_change="hlc_wp_Mk17_camo_grip3";
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
			class hlc_WP_Mk17_Camo
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_Mk17_Camo_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_Mk17_Camo_TacReload: hlc_wp_Mk17_camo
	{
		magazineReloadSwitchPhase="(40 / 96)";
		scopeArsenal=0;
		reloadMagazineSound[]=
		{
			"\nia_wp_SCAR\snd\mk17_reload_Partial.ogg",
			0.85000002,
			1,
			25
		};
		reloadAction="NIA_GestureReload_Mk17_Tactical";
		model="nia_wp_SCAR\mesh\Rifle\SCARH_STD_TacReload.p3d";
		rhs_grip1_change="hlc_wp_Mk17_Camo_grip";
		rhs_grip2_change="hlc_wp_Mk17_Camo_grip2";
		rhs_grip3_change="hlc_wp_Mk17_Camo_grip3";
		class nia_gripSwitch
		{
			VFG="hlc_wp_Mk17_Camo_grip";
			AFG="hlc_wp_Mk17_Camo_grip2";
			VFG2="hlc_wp_Mk17_Camo_grip3";
			default="hlc_wp_Mk17_Camo_TacReload";
		};
	};
	class hlc_wp_Mk17_camo_grip: hlc_wp_Mk17_camo
	{
		scopeArsenal=0;
		dexterity=1.5471935;
		aimTransitionSpeed=1.0830355;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handpose_VFG.rtm"
		};
		class nia_magSwitch
		{
			hlc_10Rnd_762x51_B_SCARH_tan="hlc_wp_MK17_10Rnd_camo_grip";
			hlc_10Rnd_762x51_mk316_SCARH_tan="hlc_wp_MK17_10Rnd_camo_grip";
			hlc_10Rnd_762x51_Barrier_SCARH_tan="hlc_wp_MK17_10Rnd_camo_grip";
			hlc_10Rnd_762x51_t_SCARH_tan="hlc_wp_MK17_10Rnd_camo_grip";
			hlc_10Rnd_762x51_TDim_SCARH_tan="hlc_wp_MK17_10Rnd_camo_grip";
			hlc_10Rnd_762x51_S_SCARH_tan="hlc_wp_MK17_10Rnd_camo_grip";
			hlc_10Rnd_762x51_B_SCARH="hlc_wp_MK17_10Rnd_camo_grip";
			hlc_10Rnd_762x51_mk316_SCARH="hlc_wp_MK17_10Rnd_camo_grip";
			hlc_10Rnd_762x51_Barrier_SCARH="hlc_wp_MK17_10Rnd_camo_grip";
			hlc_10Rnd_762x51_t_SCARH="hlc_wp_MK17_10Rnd_camo_grip";
			hlc_10Rnd_762x51_TDim_SCARH="hlc_wp_MK17_10Rnd_camo_grip";
			hlc_10Rnd_762x51_S_SCARH="hlc_wp_MK17_10Rnd_camo_grip";
			hlc_10Rnd_762x51_B_SCARH_camo="hlc_wp_MK17_10Rnd_camo_grip";
			hlc_10Rnd_762x51_mk316_SCARH_camo="hlc_wp_MK17_10Rnd_camo_grip";
			hlc_10Rnd_762x51_Barrier_SCARH_camo="hlc_wp_MK17_10Rnd_camo_grip";
			hlc_10Rnd_762x51_t_SCARH_camo="hlc_wp_MK17_10Rnd_camo_grip";
			hlc_10Rnd_762x51_TDim_SCARH_camo="hlc_wp_MK17_10Rnd_camo_grip";
			hlc_10Rnd_762x51_S_SCARH_camo="hlc_wp_MK17_10Rnd_camo_grip";
			default="hlc_wp_MK17_camo_grip";
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
			class hlc_WP_Mk17_Camo_grip
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_Mk17_Camo_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_Mk17_camo_grip2: hlc_wp_Mk17_camo
	{
		scopeArsenal=0;
		inertia="(0.358*0.85)";
		dexterity=1.5471935;
		aimTransitionSpeed=1.0830355;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handpose_AFG.rtm"
		};
		class nia_magSwitch
		{
			hlc_10Rnd_762x51_B_SCARH_tan="hlc_wp_MK17_10Rnd_camo_grip2";
			hlc_10Rnd_762x51_mk316_SCARH_tan="hlc_wp_MK17_10Rnd_camo_grip2";
			hlc_10Rnd_762x51_Barrier_SCARH_tan="hlc_wp_MK17_10Rnd_camo_grip2";
			hlc_10Rnd_762x51_t_SCARH_tan="hlc_wp_MK17_10Rnd_camo_grip2";
			hlc_10Rnd_762x51_TDim_SCARH_tan="hlc_wp_MK17_10Rnd_camo_grip2";
			hlc_10Rnd_762x51_S_SCARH_tan="hlc_wp_MK17_10Rnd_camo_grip2";
			hlc_10Rnd_762x51_B_SCARH="hlc_wp_MK17_10Rnd_camo_grip2";
			hlc_10Rnd_762x51_mk316_SCARH="hlc_wp_MK17_10Rnd_camo_grip2";
			hlc_10Rnd_762x51_Barrier_SCARH="hlc_wp_MK17_10Rnd_camo_grip2";
			hlc_10Rnd_762x51_t_SCARH="hlc_wp_MK17_10Rnd_camo_grip2";
			hlc_10Rnd_762x51_TDim_SCARH="hlc_wp_MK17_10Rnd_camo_grip2";
			hlc_10Rnd_762x51_S_SCARH="hlc_wp_MK17_10Rnd_camo_grip2";
			hlc_10Rnd_762x51_B_SCARH_camo="hlc_wp_MK17_10Rnd_camo_grip2";
			hlc_10Rnd_762x51_mk316_SCARH_camo="hlc_wp_MK17_10Rnd_camo_grip2";
			hlc_10Rnd_762x51_Barrier_SCARH_camo="hlc_wp_MK17_10Rnd_camo_grip2";
			hlc_10Rnd_762x51_t_SCARH_camo="hlc_wp_MK17_10Rnd_camo_grip2";
			hlc_10Rnd_762x51_TDim_SCARH_camo="hlc_wp_MK17_10Rnd_camo_grip2";
			hlc_10Rnd_762x51_S_SCARH_camo="hlc_wp_MK17_10Rnd_camo_grip2";
			default="hlc_wp_MK17_camo_grip2";
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
			class hlc_WP_Mk17_Camo_grip2
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_Mk17_Camo_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_Mk17_camo_grip3: hlc_wp_Mk17_camo
	{
		scopeArsenal=0;
		dexterity=1.5471935;
		aimTransitionSpeed=1.0830355;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handpose_VFG.rtm"
		};
		class nia_magSwitch
		{
			hlc_10Rnd_762x51_B_SCARH_tan="hlc_wp_MK17_10Rnd_camo_grip3";
			hlc_10Rnd_762x51_mk316_SCARH_tan="hlc_wp_MK17_10Rnd_camo_grip3";
			hlc_10Rnd_762x51_Barrier_SCARH_tan="hlc_wp_MK17_10Rnd_camo_grip3";
			hlc_10Rnd_762x51_t_SCARH_tan="hlc_wp_MK17_10Rnd_camo_grip3";
			hlc_10Rnd_762x51_TDim_SCARH_tan="hlc_wp_MK17_10Rnd_camo_grip3";
			hlc_10Rnd_762x51_S_SCARH_tan="hlc_wp_MK17_10Rnd_camo_grip3";
			hlc_10Rnd_762x51_B_SCARH="hlc_wp_MK17_10Rnd_camo_grip3";
			hlc_10Rnd_762x51_mk316_SCARH="hlc_wp_MK17_10Rnd_camo_grip3";
			hlc_10Rnd_762x51_Barrier_SCARH="hlc_wp_MK17_10Rnd_camo_grip3";
			hlc_10Rnd_762x51_t_SCARH="hlc_wp_MK17_10Rnd_camo_grip3";
			hlc_10Rnd_762x51_TDim_SCARH="hlc_wp_MK17_10Rnd_camo_grip3";
			hlc_10Rnd_762x51_S_SCARH="hlc_wp_MK17_10Rnd_camo_grip3";
			hlc_10Rnd_762x51_B_SCARH_camo="hlc_wp_MK17_10Rnd_camo_grip3";
			hlc_10Rnd_762x51_mk316_SCARH_camo="hlc_wp_MK17_10Rnd_camo_grip3";
			hlc_10Rnd_762x51_Barrier_SCARH_camo="hlc_wp_MK17_10Rnd_camo_grip3";
			hlc_10Rnd_762x51_t_SCARH_camo="hlc_wp_MK17_10Rnd_camo_grip3";
			hlc_10Rnd_762x51_TDim_SCARH_camo="hlc_wp_MK17_10Rnd_camo_grip3";
			hlc_10Rnd_762x51_S_SCARH_camo="hlc_wp_MK17_10Rnd_camo_grip3";
			default="hlc_wp_MK17_camo_grip3";
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
			class hlc_WP_Mk17_Camo_grip3
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_Mk17_Camo_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_MK17_10rnd_Camo: hlc_wp_Mk17_camo
	{
		scopeArsenal=0;
		reloadAction="NIA_GestureReload_Mk17_10rnd";
		baseweapon="hlc_wp_MK17_10rnd_Camo";
		class nia_gripSwitch
		{
			VFG="hlc_wp_MK17_10rnd_Camo_grip";
			AFG="hlc_wp_MK17_10rnd_Camo_grip2";
			VFG2="hlc_wp_MK17_10rnd_Camo_grip3";
			default="hlc_wp_MK17_10rnd_Camo";
		};
		rhs_grip1_change="hlc_wp_MK17_10rnd_Camo_grip";
		rhs_grip2_change="hlc_wp_MK17_10rnd_Camo_grip2";
		rhs_grip3_change="hlc_wp_MK17_10rnd_Camo_grip3";
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
			class hlc_WP_Mk17_10rnd_Camo
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_Mk17_10rnd_Camo_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_Mk17_10rnd_Camo_TacReload: hlc_wp_MK17_10rnd_Camo
	{
		magazineReloadSwitchPhase="(40 / 96)";
		scopeArsenal=0;
		reloadMagazineSound[]=
		{
			"\nia_wp_SCAR\snd\mk17_reload_Partial.ogg",
			0.85000002,
			1,
			25
		};
		reloadAction="NIA_GestureReload_Mk17_10rnd_Tactical";
		model="nia_wp_SCAR\mesh\Rifle\SCARH_STD_TacReload.p3d";
		rhs_grip1_change="hlc_wp_Mk17_10rnd_Camo_grip";
		rhs_grip2_change="hlc_wp_Mk17_10rnd_Camo_grip2";
		rhs_grip3_change="hlc_wp_Mk17_10rnd_Camo_grip3";
		class nia_gripSwitch
		{
			VFG="hlc_wp_Mk17_10rnd_Camo_grip";
			AFG="hlc_wp_Mk17_10rnd_Camo_grip2";
			VFG2="hlc_wp_Mk17_10rnd_Camo_grip3";
			default="hlc_wp_Mk17_10rnd_Camo_TacReload";
		};
	};
	class hlc_wp_MK17_10rnd_Camo_grip: hlc_wp_MK17_10rnd_Camo
	{
		scopeArsenal=0;
		dexterity=1.5471935;
		aimTransitionSpeed=1.0830355;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handpose_VFG.rtm"
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
			class hlc_WP_Mk17_10rnd_Camo_grip
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_Mk17_10rnd_Camo_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_MK17_10rnd_Camo_grip2: hlc_wp_MK17_10rnd_Camo
	{
		scopeArsenal=0;
		inertia="(0.358*0.85)";
		dexterity=1.5471935;
		aimTransitionSpeed=1.0830355;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handpose_AFG.rtm"
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
			class hlc_WP_Mk17_10rnd_Camo_grip2
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_Mk17_10rnd_Camo_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_MK17_10rnd_Camo_grip3: hlc_wp_MK17_10rnd_Camo
	{
		scopeArsenal=0;
		dexterity=1.5471935;
		aimTransitionSpeed=1.0830355;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handpose_VFG.rtm"
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
			class hlc_WP_Mk17_10rnd_Camo_grip3
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_Mk17_10rnd_Camo_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_MK17_AGC: hlc_wp_MK17
	{
		author="Toadie";
		dlc="Niarms_SCAR";
		displayName="$STR_NIA_rifle_MK17_AGC";
		scope=2;
		muzzles[]=
		{
			"this",
			"hlc_GL_SCAR_AGC"
		};
		baseWeapon="hlc_wp_MK17_AGC";
		mass=110.744;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=110.744;
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
				class compatibleItems: compatibleItems
				{
					HLC_Panel_Side_SCAR_FN5cm_Desert=1;
					HLC_Panel_Side_SCAR_2xFN5cm_Desert=1;
					HLC_Panel_Side_SCAR_FN10cm_Desert=1;
					HLC_Panel_Side_SCAR_Ladder_S_Desert=1;
					HLC_Panel_Side_SCAR_Ladder_M_Desert=1;
					HLC_Panel_Side_SCAR_MagpulXT_Desert=1;
					HLC_Panel_Side_SCAR_XTME_Desert=1;
					HLC_Panel_Side_SCAR_2xXTME_Desert=1;
					HLC_Panel_Side_SCAR_FN5cm_Black=1;
					HLC_Panel_Side_SCAR_2xFN5cm_Black=1;
					HLC_Panel_Side_SCAR_FN10cm_Black=1;
					HLC_Panel_Side_SCAR_Ladder_S_Black=1;
					HLC_Panel_Side_SCAR_Ladder_M_Black=1;
					HLC_Panel_Side_SCAR_MagpulXT_Black=1;
					HLC_Panel_Side_SCAR_XTME_Black=1;
					HLC_Panel_Side_SCAR_2xXTME_Black=1;
					HLC_Panel_Side_SCAR_4xXTME_Black=1;
					HLC_Panel_Side_SCAR_FN5cm_OD=1;
					HLC_Panel_Side_SCAR_2xFN5cm_OD=1;
					HLC_Panel_Side_SCAR_FN10cm_OD=1;
					HLC_Panel_Side_SCAR_Ladder_S_OD=1;
					HLC_Panel_Side_SCAR_Ladder_M_OD=1;
					HLC_Panel_Side_SCAR_MagpulXT_OD=1;
					HLC_Panel_Side_SCAR_XTME_OD=1;
					HLC_Panel_Side_SCAR_2xXTME_OD=1;
					HLC_Panel_Side_SCAR_4xXTME_OD=1;
					HLC_Panel_Side_SCAR_FN5cm_RG=1;
					HLC_Panel_Side_SCAR_2xFN5cm_RG=1;
					HLC_Panel_Side_SCAR_FN10cm_RG=1;
					HLC_Panel_Side_SCAR_Ladder_S_RG=1;
					HLC_Panel_Side_SCAR_Ladder_M_RG=1;
					HLC_Panel_Side_SCAR_MagpulXT_RG=1;
					HLC_Panel_Side_SCAR_XTME_RG=1;
					HLC_Panel_Side_SCAR_2xXTME_RG=1;
					HLC_Panel_Side_SCAR_4xXTME_RG=1;
					HLC_Panel_Side_SCAR_Ladder_S_Pride=1;
					HLC_Panel_Side_SCAR_Ladder_M_Pride=1;
					HLC_Panel_Side_SCAR_MagpulXT_Pride=1;
				};
			};
			class MuzzleSlot: asdg_MuzzleSlot_762
			{
				iconPosition[]={0,0};
				iconScale=1;
				iconPicture="\A3\Weapons_F\Data\clear_empty.paa";
				iconPinPoint="Left";
			};
			class UnderBarrelSlot
			{
				iconPosition[]={0,0};
				iconScale=1;
				iconPicture="\A3\Weapons_F\Data\clear_empty.paa";
				iconPinPoint="Left";
			};
			class GripodSlot
			{
				iconPosition[]={0,0};
				iconScale=1;
				iconPicture="\A3\Weapons_F\Data\clear_empty.paa";
				iconPinPoint="Left";
			};
		};
		inertia="(0.358 + 0.15)";
		dexterity=1.1380438;
		aimTransitionSpeed=0.79663062;
		model="nia_wp_SCAR\mesh\rifle\SCARH_STD_AGC.p3d";
		picture="\nia_wp_SCAR\tex\ui\hlc_wp_MK17_AGC_ca";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handpose_AGC.rtm"
		};
		UiPicture="\A3\weapons_f\data\UI\icon_regular_CA.paa";
		class nia_magSwitch
		{
			hlc_10Rnd_762x51_B_SCARH_tan="hlc_wp_Mk17_10rnd_AGC";
			hlc_10Rnd_762x51_mk316_SCARH_tan="hlc_wp_Mk17_10rnd_AGC";
			hlc_10Rnd_762x51_Barrier_SCARH_tan="hlc_wp_Mk17_10rnd_AGC";
			hlc_10Rnd_762x51_t_SCARH_tan="hlc_wp_Mk17_10rnd_AGC";
			hlc_10Rnd_762x51_TDim_SCARH_tan="hlc_wp_Mk17_10rnd_AGC";
			hlc_10Rnd_762x51_S_SCARH_tan="hlc_wp_Mk17_10rnd_AGC";
			hlc_10Rnd_762x51_B_SCARH="hlc_wp_Mk17_10rnd_AGC";
			hlc_10Rnd_762x51_mk316_SCARH="hlc_wp_Mk17_10rnd_AGC";
			hlc_10Rnd_762x51_Barrier_SCARH="hlc_wp_Mk17_10rnd_AGC";
			hlc_10Rnd_762x51_t_SCARH="hlc_wp_Mk17_10rnd_AGC";
			hlc_10Rnd_762x51_TDim_SCARH="hlc_wp_Mk17_10rnd_AGC";
			hlc_10Rnd_762x51_S_SCARH="hlc_wp_Mk17_10rnd_AGC";
			hlc_10Rnd_762x51_B_SCARH_camo="hlc_wp_Mk17_10rnd_AGC";
			hlc_10Rnd_762x51_mk316_SCARH_camo="hlc_wp_Mk17_10rnd_AGC";
			hlc_10Rnd_762x51_Barrier_SCARH_camo="hlc_wp_Mk17_10rnd_AGC";
			hlc_10Rnd_762x51_t_SCARH_camo="hlc_wp_Mk17_10rnd_AGC";
			hlc_10Rnd_762x51_TDim_SCARH_camo="hlc_wp_Mk17_10rnd_AGC";
			hlc_10Rnd_762x51_S_SCARH_camo="hlc_wp_Mk17_10rnd_AGC";
			default="hlc_wp_Mk17_AGC";
		};
		class nia_gripSwitch
		{
			VFG="hlc_wp_MK17_AGC";
			AFG="hlc_wp_MK17_AGC";
			VFG2="hlc_wp_MK17_AGC";
			default="hlc_wp_MK17_AGC";
		};
		rhs_grip1_change="hlc_wp_MK17_AGC";
		rhs_grip2_change="hlc_wp_MK17_AGC";
		rhs_grip3_change="hlc_wp_MK17_AGC";
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
			class hlc_WP_Mk17_AGC
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_Mk17_AGC_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_Mk17_AGC_TacReload: hlc_wp_MK17_AGC
	{
		magazineReloadSwitchPhase="(40 / 96)";
		scopeArsenal=0;
		reloadMagazineSound[]=
		{
			"\nia_wp_SCAR\snd\mk17_reload_Partial.ogg",
			0.85000002,
			1,
			25
		};
		reloadAction="NIA_GestureReload_Mk17_Tactical";
		model="nia_wp_SCAR\mesh\Rifle\SCARH_STD_AGC_TacReload.p3d";
	};
	class hlc_wp_Mk17_10rnd_AGC: hlc_wp_MK17_AGC
	{
		scopeArsenal=0;
		reloadAction="NIA_GestureReload_Mk17_10rnd";
		baseweapon="hlc_wp_Mk17_10rnd_AGC";
		class nia_gripSwitch
		{
			VFG="hlc_wp_Mk17_10rnd_AGC";
			AFG="hlc_wp_Mk17_10rnd_AGC";
			VFG2="hlc_wp_Mk17_10rnd_AGC";
			default="hlc_wp_Mk17_10rnd_AGC";
		};
		rhs_grip1_change="hlc_wp_Mk17_10rnd_AGC";
		rhs_grip2_change="hlc_wp_Mk17_10rnd_AGC";
		rhs_grip3_change="hlc_wp_Mk17_10rnd_AGC";
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
			class hlc_WP_Mk17_10rnd_AGC
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_Mk17_10rnd_AGC_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_Mk17_10rnd_AGC_TacReload: hlc_wp_Mk17_10rnd_AGC
	{
		magazineReloadSwitchPhase="(40 / 96)";
		scopeArsenal=0;
		reloadMagazineSound[]=
		{
			"\nia_wp_SCAR\snd\mk17_reload_Partial.ogg",
			0.85000002,
			1,
			25
		};
		reloadAction="NIA_GestureReload_Mk17_10rnd_Tactical";
		model="nia_wp_SCAR\mesh\Rifle\SCARH_STD_AGC_TacReload.p3d";
	};
	class hlc_wp_MK17_AGC_camo: hlc_wp_Mk17_camo
	{
		author="Toadie";
		dlc="Niarms_SCAR";
		displayName="$STR_NIA_rifle_MK17_AGC_camo";
		scope=2;
		muzzles[]=
		{
			"this",
			"hlc_GL_SCAR_AGC"
		};
		baseWeapon="hlc_wp_MK17_AGC_camo";
		mass=110.744;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=110.744;
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
				class compatibleItems: compatibleItems
				{
					HLC_Panel_Side_SCAR_FN5cm_Desert=1;
					HLC_Panel_Side_SCAR_2xFN5cm_Desert=1;
					HLC_Panel_Side_SCAR_FN10cm_Desert=1;
					HLC_Panel_Side_SCAR_Ladder_S_Desert=1;
					HLC_Panel_Side_SCAR_Ladder_M_Desert=1;
					HLC_Panel_Side_SCAR_MagpulXT_Desert=1;
					HLC_Panel_Side_SCAR_XTME_Desert=1;
					HLC_Panel_Side_SCAR_2xXTME_Desert=1;
					HLC_Panel_Side_SCAR_FN5cm_Black=1;
					HLC_Panel_Side_SCAR_2xFN5cm_Black=1;
					HLC_Panel_Side_SCAR_FN10cm_Black=1;
					HLC_Panel_Side_SCAR_Ladder_S_Black=1;
					HLC_Panel_Side_SCAR_Ladder_M_Black=1;
					HLC_Panel_Side_SCAR_MagpulXT_Black=1;
					HLC_Panel_Side_SCAR_XTME_Black=1;
					HLC_Panel_Side_SCAR_2xXTME_Black=1;
					HLC_Panel_Side_SCAR_4xXTME_Black=1;
					HLC_Panel_Side_SCAR_FN5cm_OD=1;
					HLC_Panel_Side_SCAR_2xFN5cm_OD=1;
					HLC_Panel_Side_SCAR_FN10cm_OD=1;
					HLC_Panel_Side_SCAR_Ladder_S_OD=1;
					HLC_Panel_Side_SCAR_Ladder_M_OD=1;
					HLC_Panel_Side_SCAR_MagpulXT_OD=1;
					HLC_Panel_Side_SCAR_XTME_OD=1;
					HLC_Panel_Side_SCAR_2xXTME_OD=1;
					HLC_Panel_Side_SCAR_4xXTME_OD=1;
					HLC_Panel_Side_SCAR_FN5cm_RG=1;
					HLC_Panel_Side_SCAR_2xFN5cm_RG=1;
					HLC_Panel_Side_SCAR_FN10cm_RG=1;
					HLC_Panel_Side_SCAR_Ladder_S_RG=1;
					HLC_Panel_Side_SCAR_Ladder_M_RG=1;
					HLC_Panel_Side_SCAR_MagpulXT_RG=1;
					HLC_Panel_Side_SCAR_XTME_RG=1;
					HLC_Panel_Side_SCAR_2xXTME_RG=1;
					HLC_Panel_Side_SCAR_4xXTME_RG=1;
					HLC_Panel_Side_SCAR_Ladder_S_Pride=1;
					HLC_Panel_Side_SCAR_Ladder_M_Pride=1;
					HLC_Panel_Side_SCAR_MagpulXT_Pride=1;
				};
			};
			class MuzzleSlot: asdg_MuzzleSlot_762
			{
				iconPosition[]={0,0};
				iconScale=1;
				iconPicture="\A3\Weapons_F\Data\clear_empty.paa";
				iconPinPoint="Left";
			};
			class UnderBarrelSlot
			{
				iconPosition[]={0,0};
				iconScale=1;
				iconPicture="\A3\Weapons_F\Data\clear_empty.paa";
				iconPinPoint="Left";
			};
			class GripodSlot
			{
				iconPosition[]={0,0};
				iconScale=1;
				iconPicture="\A3\Weapons_F\Data\clear_empty.paa";
				iconPinPoint="Left";
			};
		};
		inertia="(0.358 + 0.15)";
		dexterity=1.1380438;
		aimTransitionSpeed=0.79663062;
		model="nia_wp_SCAR\mesh\rifle\SCARH_STD_AGC.p3d";
		picture="\nia_wp_SCAR\tex\ui\hlc_wp_MK17_AGC_camo_ca";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handpose_AGC.rtm"
		};
		UiPicture="\A3\weapons_f\data\UI\icon_regular_CA.paa";
		class nia_magSwitch
		{
			hlc_10Rnd_762x51_B_SCARH_tan="hlc_wp_Mk17_10rnd_AGC_camo";
			hlc_10Rnd_762x51_mk316_SCARH_tan="hlc_wp_Mk17_10rnd_AGC_camo";
			hlc_10Rnd_762x51_Barrier_SCARH_tan="hlc_wp_Mk17_10rnd_AGC_camo";
			hlc_10Rnd_762x51_t_SCARH_tan="hlc_wp_Mk17_10rnd_AGC_camo";
			hlc_10Rnd_762x51_TDim_SCARH_tan="hlc_wp_Mk17_10rnd_AGC_camo";
			hlc_10Rnd_762x51_S_SCARH_tan="hlc_wp_Mk17_10rnd_AGC_camo";
			hlc_10Rnd_762x51_B_SCARH="hlc_wp_Mk17_10rnd_AGC_camo";
			hlc_10Rnd_762x51_mk316_SCARH="hlc_wp_Mk17_10rnd_AGC_camo";
			hlc_10Rnd_762x51_Barrier_SCARH="hlc_wp_Mk17_10rnd_AGC_camo";
			hlc_10Rnd_762x51_t_SCARH="hlc_wp_Mk17_10rnd_AGC_camo";
			hlc_10Rnd_762x51_TDim_SCARH="hlc_wp_Mk17_10rnd_AGC_camo";
			hlc_10Rnd_762x51_S_SCARH="hlc_wp_Mk17_10rnd_AGC_camo";
			hlc_10Rnd_762x51_B_SCARH_camo="hlc_wp_Mk17_10rnd_AGC_camo";
			hlc_10Rnd_762x51_mk316_SCARH_camo="hlc_wp_Mk17_10rnd_AGC_camo";
			hlc_10Rnd_762x51_Barrier_SCARH_camo="hlc_wp_Mk17_10rnd_AGC_camo";
			hlc_10Rnd_762x51_t_SCARH_camo="hlc_wp_Mk17_10rnd_AGC_camo";
			hlc_10Rnd_762x51_TDim_SCARH_camo="hlc_wp_Mk17_10rnd_AGC_camo";
			hlc_10Rnd_762x51_S_SCARH_camo="hlc_wp_Mk17_10rnd_AGC_camo";
			default="hlc_wp_Mk17_AGC_camo";
		};
		class nia_gripSwitch
		{
			VFG="hlc_wp_MK17_AGC_camo";
			AFG="hlc_wp_MK17_AGC_camo";
			VFG2="hlc_wp_MK17_AGC_camo";
			default="hlc_wp_MK17_AGC_camo";
		};
		rhs_grip1_change="hlc_wp_MK17_AGC_camo";
		rhs_grip2_change="hlc_wp_MK17_AGC_camo";
		rhs_grip3_change="hlc_wp_MK17_AGC_camo";
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
			class hlc_WP_Mk17_AGC_camo
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_Mk17_AGC_camo_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_Mk17_AGC_camo_TacReload: hlc_wp_MK17_AGC_camo
	{
		magazineReloadSwitchPhase="(40 / 96)";
		scopeArsenal=0;
		reloadMagazineSound[]=
		{
			"\nia_wp_SCAR\snd\mk17_reload_Partial.ogg",
			0.85000002,
			1,
			25
		};
		reloadAction="NIA_GestureReload_Mk17_Tactical";
		model="nia_wp_SCAR\mesh\Rifle\SCARH_STD_AGC_TacReload.p3d";
	};
	class hlc_wp_Mk17_10rnd_AGC_camo: hlc_wp_MK17_AGC_camo
	{
		scopeArsenal=0;
		reloadAction="NIA_GestureReload_Mk17_10rnd";
		baseweapon="hlc_wp_Mk17_10rnd_AGC_camo";
		class nia_gripSwitch
		{
			VFG="hlc_wp_Mk17_10rnd_AGC_camo";
			AFG="hlc_wp_Mk17_10rnd_AGC_camo";
			VFG2="hlc_wp_Mk17_10rnd_AGC_camo";
			default="hlc_wp_Mk17_10rnd_AGC_camo";
		};
		rhs_grip1_change="hlc_wp_Mk17_10rnd_AGC_camo";
		rhs_grip2_change="hlc_wp_Mk17_10rnd_AGC_camo";
		rhs_grip3_change="hlc_wp_Mk17_10rnd_AGC_camo";
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
			class hlc_wp_Mk17_10rnd_AGC_camo
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_Mk17_10rnd_AGC_camo_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_Mk17_10rnd_AGC_camo_TacReload: hlc_wp_Mk17_10rnd_AGC_camo
	{
		magazineReloadSwitchPhase="(40 / 96)";
		scopeArsenal=0;
		reloadMagazineSound[]=
		{
			"\nia_wp_SCAR\snd\mk17_reload_Partial.ogg",
			0.85000002,
			1,
			25
		};
		reloadAction="NIA_GestureReload_Mk17_10rnd_Tactical";
		model="nia_wp_SCAR\mesh\Rifle\SCARH_STD_AGC_TacReload.p3d";
	};
	class hlc_wp_Mk17_CQC: hlc_WP_SCARH_CQC
	{
		author="Toadie";
		dlc="Niarms_SCAR";
		displayName="$STR_NIA_rifle_MK17CQC";
		scope=2;
		scopearsenal=2;
		baseWeapon="hlc_WP_Mk17_CQC";
		class LinkedItems
		{
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="hlc_muzzle_Miter18T";
			};
		};
		picture="\nia_wp_SCAR\tex\ui\hlc_wp_Mk17_CQC_ca";
		hiddenSelectionsTextures[]=
		{
			"nia_wp_SCAR\tex\toadie_SCAR\scar_common_tan_co.paa",
			"nia_wp_SCAR\tex\toadie_SCAR\scar_lower_tan_co.paa",
			"nia_wp_SCAR\tex\toadie_SCAR\stock_tan_co.paa",
			"nia_wp_SCAR\tex\toadie_SCAR\upper_scarh_Mk17_co.paa"
		};
		HiddenSelectionsMaterials[]=
		{
			"nia_wp_SCAR\mat\scar_common.rvmat",
			"nia_wp_SCAR\mat\scar_lowers.rvmat",
			"nia_wp_SCAR\mat\scar_stock.rvmat",
			"nia_wp_SCAR\mat\scar_upper_scarh_Mk17.rvmat"
		};
		class nia_magSwitch
		{
			hlc_10Rnd_762x51_B_SCARH_tan="hlc_wp_Mk17_CQC_10Rnd";
			hlc_10Rnd_762x51_mk316_SCARH_tan="hlc_wp_Mk17_CQC_10Rnd";
			hlc_10Rnd_762x51_Barrier_SCARH_tan="hlc_wp_Mk17_CQC_10Rnd";
			hlc_10Rnd_762x51_t_SCARH_tan="hlc_wp_Mk17_CQC_10Rnd";
			hlc_10Rnd_762x51_TDim_SCARH_tan="hlc_wp_Mk17_CQC_10Rnd";
			hlc_10Rnd_762x51_S_SCARH_tan="hlc_wp_Mk17_CQC_10Rnd";
			hlc_10Rnd_762x51_B_SCARH="hlc_wp_Mk17_CQC_10Rnd";
			hlc_10Rnd_762x51_mk316_SCARH="hlc_wp_Mk17_CQC_10Rnd";
			hlc_10Rnd_762x51_Barrier_SCARH="hlc_wp_Mk17_CQC_10Rnd";
			hlc_10Rnd_762x51_t_SCARH="hlc_wp_Mk17_CQC_10Rnd";
			hlc_10Rnd_762x51_TDim_SCARH="hlc_wp_Mk17_CQC_10Rnd";
			hlc_10Rnd_762x51_S_SCARH="hlc_wp_Mk17_CQC_10Rnd";
			hlc_10Rnd_762x51_B_SCARH_camo="hlc_wp_Mk17_CQC_10Rnd";
			hlc_10Rnd_762x51_mk316_SCARH_camo="hlc_wp_Mk17_CQC_10Rnd";
			hlc_10Rnd_762x51_Barrier_SCARH_camo="hlc_wp_Mk17_CQC_10Rnd";
			hlc_10Rnd_762x51_t_SCARH_camo="hlc_wp_Mk17_CQC_10Rnd";
			hlc_10Rnd_762x51_TDim_SCARH_camo="hlc_wp_Mk17_CQC_10Rnd";
			hlc_10Rnd_762x51_S_SCARH_camo="hlc_wp_Mk17_CQC_10Rnd";
			default="hlc_wp_Mk17_CQC";
		};
		class nia_gripSwitch
		{
			VFG="hlc_WP_Mk17_CQC_grip";
			AFG="hlc_WP_Mk17_CQC_grip2";
			VFG2="hlc_WP_Mk17_CQC_grip3";
			default="hlc_WP_Mk17_CQC";
		};
		rhs_grip1_change="hlc_WP_Mk17_CQC_grip";
		rhs_grip2_change="hlc_WP_Mk17_CQC_grip2";
		rhs_grip3_change="hlc_WP_Mk17_CQC_grip3";
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
			class hlc_wp_Mk17_CQC
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_Mk17_CQC_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_Mk17_CQC_TacReload: hlc_wp_Mk17_CQC
	{
		magazineReloadSwitchPhase="(40 / 96)";
		scopeArsenal=0;
		reloadMagazineSound[]=
		{
			"\nia_wp_SCAR\snd\mk17_reload_Partial.ogg",
			0.85000002,
			1,
			25
		};
		reloadAction="NIA_GestureReload_Mk17_Tactical";
		model="nia_wp_SCAR\mesh\Rifle\SCARH_CQC_TacReload.p3d";
		rhs_grip1_change="hlc_wp_Mk17_CQC_grip";
		rhs_grip2_change="hlc_wp_Mk17_CQC_grip2";
		rhs_grip3_change="hlc_wp_Mk17_CQC_grip3";
		class nia_gripSwitch
		{
			VFG="hlc_wp_Mk17_CQC_grip";
			AFG="hlc_wp_Mk17_CQC_grip2";
			VFG2="hlc_wp_Mk17_CQC_grip3";
			default="hlc_wp_Mk17_CQC_TacReload";
		};
	};
	class hlc_wp_Mk17_CQC_grip: hlc_wp_Mk17_CQC
	{
		scopeArsenal=0;
		dexterity=1.5741909;
		aimTransitionSpeed=1.1019336;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handpose_VFG.rtm"
		};
		class nia_magSwitch
		{
			hlc_10Rnd_762x51_B_SCARH_tan="hlc_wp_Mk17_CQC_10Rnd_grip";
			hlc_10Rnd_762x51_mk316_SCARH_tan="hlc_wp_Mk17_CQC_10Rnd_grip";
			hlc_10Rnd_762x51_Barrier_SCARH_tan="hlc_wp_Mk17_CQC_10Rnd_grip";
			hlc_10Rnd_762x51_t_SCARH_tan="hlc_wp_Mk17_CQC_10Rnd_grip";
			hlc_10Rnd_762x51_TDim_SCARH_tan="hlc_wp_Mk17_CQC_10Rnd_grip";
			hlc_10Rnd_762x51_S_SCARH_tan="hlc_wp_Mk17_CQC_10Rnd_grip";
			hlc_10Rnd_762x51_B_SCARH="hlc_wp_Mk17_CQC_10Rnd_grip";
			hlc_10Rnd_762x51_mk316_SCARH="hlc_wp_Mk17_CQC_10Rnd_grip";
			hlc_10Rnd_762x51_Barrier_SCARH="hlc_wp_Mk17_CQC_10Rnd_grip";
			hlc_10Rnd_762x51_t_SCARH="hlc_wp_Mk17_CQC_10Rnd_grip";
			hlc_10Rnd_762x51_TDim_SCARH="hlc_wp_Mk17_CQC_10Rnd_grip";
			hlc_10Rnd_762x51_S_SCARH="hlc_wp_Mk17_CQC_10Rnd_grip";
			hlc_10Rnd_762x51_B_SCARH_camo="hlc_wp_Mk17_CQC_10Rnd_grip";
			hlc_10Rnd_762x51_mk316_SCARH_camo="hlc_wp_Mk17_CQC_10Rnd_grip";
			hlc_10Rnd_762x51_Barrier_SCARH_camo="hlc_wp_Mk17_CQC_10Rnd_grip";
			hlc_10Rnd_762x51_t_SCARH_camo="hlc_wp_Mk17_CQC_10Rnd_grip";
			hlc_10Rnd_762x51_TDim_SCARH_camo="hlc_wp_Mk17_CQC_10Rnd_grip";
			hlc_10Rnd_762x51_S_SCARH_camo="hlc_wp_Mk17_CQC_10Rnd_grip";
			default="hlc_wp_Mk17_CQC_grip";
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
			class hlc_wp_Mk17_CQC_grip
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_Mk17_CQC_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_Mk17_CQC_grip2: hlc_wp_Mk17_CQC
	{
		scopeArsenal=0;
		inertia="(0.349*0.85)";
		dexterity=1.5741909;
		aimTransitionSpeed=1.1019336;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handpose_AFG.rtm"
		};
		class nia_magSwitch
		{
			hlc_10Rnd_762x51_B_SCARH_tan="hlc_wp_Mk17_CQC_10Rnd_grip2";
			hlc_10Rnd_762x51_mk316_SCARH_tan="hlc_wp_Mk17_CQC_10Rnd_grip2";
			hlc_10Rnd_762x51_Barrier_SCARH_tan="hlc_wp_Mk17_CQC_10Rnd_grip2";
			hlc_10Rnd_762x51_t_SCARH_tan="hlc_wp_Mk17_CQC_10Rnd_grip2";
			hlc_10Rnd_762x51_TDim_SCARH_tan="hlc_wp_Mk17_CQC_10Rnd_grip2";
			hlc_10Rnd_762x51_S_SCARH_tan="hlc_wp_Mk17_CQC_10Rnd_grip2";
			hlc_10Rnd_762x51_B_SCARH="hlc_wp_Mk17_CQC_10Rnd_grip2";
			hlc_10Rnd_762x51_mk316_SCARH="hlc_wp_Mk17_CQC_10Rnd_grip2";
			hlc_10Rnd_762x51_Barrier_SCARH="hlc_wp_Mk17_CQC_10Rnd_grip2";
			hlc_10Rnd_762x51_t_SCARH="hlc_wp_Mk17_CQC_10Rnd_grip2";
			hlc_10Rnd_762x51_TDim_SCARH="hlc_wp_Mk17_CQC_10Rnd_grip2";
			hlc_10Rnd_762x51_S_SCARH="hlc_wp_Mk17_CQC_10Rnd_grip2";
			hlc_10Rnd_762x51_B_SCARH_camo="hlc_wp_Mk17_CQC_10Rnd_grip2";
			hlc_10Rnd_762x51_mk316_SCARH_camo="hlc_wp_Mk17_CQC_10Rnd_grip2";
			hlc_10Rnd_762x51_Barrier_SCARH_camo="hlc_wp_Mk17_CQC_10Rnd_grip2";
			hlc_10Rnd_762x51_t_SCARH_camo="hlc_wp_Mk17_CQC_10Rnd_grip2";
			hlc_10Rnd_762x51_TDim_SCARH_camo="hlc_wp_Mk17_CQC_10Rnd_grip2";
			hlc_10Rnd_762x51_S_SCARH_camo="hlc_wp_Mk17_CQC_10Rnd_grip2";
			default="hlc_wp_Mk17_CQC_grip2";
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
			class hlc_wp_Mk17_CQC_grip2
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_Mk17_CQC_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_Mk17_CQC_grip3: hlc_wp_Mk17_CQC
	{
		scopeArsenal=0;
		dexterity=1.5741909;
		aimTransitionSpeed=1.1019336;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handpose_VFG.rtm"
		};
		class nia_magSwitch
		{
			hlc_10Rnd_762x51_B_SCARH_tan="hlc_wp_Mk17_CQC_10Rnd_grip3";
			hlc_10Rnd_762x51_mk316_SCARH_tan="hlc_wp_Mk17_CQC_10Rnd_grip3";
			hlc_10Rnd_762x51_Barrier_SCARH_tan="hlc_wp_Mk17_CQC_10Rnd_grip3";
			hlc_10Rnd_762x51_t_SCARH_tan="hlc_wp_Mk17_CQC_10Rnd_grip3";
			hlc_10Rnd_762x51_TDim_SCARH_tan="hlc_wp_Mk17_CQC_10Rnd_grip3";
			hlc_10Rnd_762x51_S_SCARH_tan="hlc_wp_Mk17_CQC_10Rnd_grip3";
			hlc_10Rnd_762x51_B_SCARH="hlc_wp_Mk17_CQC_10Rnd_grip3";
			hlc_10Rnd_762x51_mk316_SCARH="hlc_wp_Mk17_CQC_10Rnd_grip3";
			hlc_10Rnd_762x51_Barrier_SCARH="hlc_wp_Mk17_CQC_10Rnd_grip3";
			hlc_10Rnd_762x51_t_SCARH="hlc_wp_Mk17_CQC_10Rnd_grip3";
			hlc_10Rnd_762x51_TDim_SCARH="hlc_wp_Mk17_CQC_10Rnd_grip3";
			hlc_10Rnd_762x51_S_SCARH="hlc_wp_Mk17_CQC_10Rnd_grip3";
			hlc_10Rnd_762x51_B_SCARH_camo="hlc_wp_Mk17_CQC_10Rnd_grip3";
			hlc_10Rnd_762x51_mk316_SCARH_camo="hlc_wp_Mk17_CQC_10Rnd_grip3";
			hlc_10Rnd_762x51_Barrier_SCARH_camo="hlc_wp_Mk17_CQC_10Rnd_grip3";
			hlc_10Rnd_762x51_t_SCARH_camo="hlc_wp_Mk17_CQC_10Rnd_grip3";
			hlc_10Rnd_762x51_TDim_SCARH_camo="hlc_wp_Mk17_CQC_10Rnd_grip3";
			hlc_10Rnd_762x51_S_SCARH_camo="hlc_wp_Mk17_CQC_10Rnd_grip3";
			default="hlc_wp_Mk17_CQC_grip3";
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
			class hlc_wp_Mk17_CQC_grip3
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_Mk17_CQC_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_Mk17_CQC_10rnd: hlc_wp_Mk17_CQC
	{
		scopeArsenal=0;
		reloadAction="NIA_GestureReload_Mk17_10rnd";
		baseweapon="hlc_wp_Mk17_CQC_10rnd";
		class nia_gripSwitch
		{
			VFG="hlc_wp_Mk17_CQC_10rnd_grip";
			AFG="hlc_wp_Mk17_CQC_10rnd_grip2";
			VFG2="hlc_wp_Mk17_CQC_10rnd_grip3";
			default="hlc_wp_Mk17_CQC_10rnd";
		};
		rhs_grip1_change="hlc_wp_Mk17_CQC_10rnd_grip";
		rhs_grip2_change="hlc_wp_Mk17_CQC_10rnd_grip2";
		rhs_grip3_change="hlc_wp_Mk17_CQC_10rnd";
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
			class hlc_wp_Mk17_CQC_10rnd
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_Mk17_CQC_10rnd_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_Mk17_CQC_10rnd_TacReload: hlc_wp_Mk17_CQC_10rnd
	{
		magazineReloadSwitchPhase="(40 / 96)";
		scopeArsenal=0;
		reloadMagazineSound[]=
		{
			"\nia_wp_SCAR\snd\mk17_reload_Partial.ogg",
			0.85000002,
			1,
			25
		};
		reloadAction="NIA_GestureReload_Mk17_10rnd_Tactical";
		model="nia_wp_SCAR\mesh\Rifle\SCARH_CQC_TacReload.p3d";
		rhs_grip1_change="hlc_wp_Mk17_CQC_10rnd_grip";
		rhs_grip2_change="hlc_wp_Mk17_CQC_10rnd_grip2";
		rhs_grip3_change="hlc_wp_Mk17_CQC_10rnd_grip3";
		class nia_gripSwitch
		{
			VFG="hlc_wp_Mk17_CQC_10rnd_grip";
			AFG="hlc_wp_Mk17_CQC_10rnd_grip2";
			VFG2="hlc_wp_Mk17_CQC_10rnd_grip3";
			default="hlc_wp_Mk17_CQC_10rnd_TacReload";
		};
	};
	class hlc_wp_Mk17_CQC_10rnd_grip: hlc_wp_Mk17_CQC_10rnd
	{
		scopeArsenal=0;
		dexterity=1.5741909;
		aimTransitionSpeed=1.1019336;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handpose_VFG.rtm"
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
			class hlc_wp_Mk17_CQC_10rnd_grip
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_Mk17_CQC_10rnd_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_Mk17_CQC_10rnd_grip2: hlc_wp_Mk17_CQC_10rnd
	{
		scopeArsenal=0;
		inertia="(0.349*0.85)";
		dexterity=1.5741909;
		aimTransitionSpeed=1.1019336;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handpose_AFG.rtm"
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
			class hlc_wp_Mk17_CQC_10rnd_grip2
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_Mk17_CQC_10rnd_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_Mk17_CQC_10rnd_grip3: hlc_wp_Mk17_CQC_10rnd
	{
		scopeArsenal=0;
		dexterity=1.5741909;
		aimTransitionSpeed=1.1019336;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handpose_VFG.rtm"
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
			class hlc_wp_Mk17_CQC_10rnd_grip3
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_Mk17_CQC_10rnd_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_Mk17_CQC_camo: hlc_wp_Mk17_CQC
	{
		author="Toadie";
		dlc="Niarms_SCAR";
		displayName="$STR_NIA_rifle_MK17CQC_camo";
		scope=2;
		baseWeapon="hlc_wp_Mk17_CQC_camo";
		picture="\nia_wp_SCAR\tex\ui\hlc_wp_Mk17_CQC_camo_ca";
		hiddenSelectionsTextures[]=
		{
			"nia_wp_SCAR\tex\toadie_SCAR\scar_common_camo_co.paa",
			"nia_wp_SCAR\tex\toadie_SCAR\scar_lower_camo_co.paa",
			"nia_wp_SCAR\tex\toadie_SCAR\stock_camo_co.paa",
			"nia_wp_SCAR\tex\toadie_SCAR\upper_scarh_Mk17_camo_co.paa"
		};
		HiddenSelectionsMaterials[]=
		{
			"nia_wp_SCAR\mat\scar_common_camo.rvmat",
			"nia_wp_SCAR\mat\scar_lowers_camo.rvmat",
			"nia_wp_SCAR\mat\scar_stock_camo.rvmat",
			"nia_wp_SCAR\mat\scar_upper_scarh_Mk17_camo.rvmat"
		};
		class nia_magSwitch
		{
			hlc_10Rnd_762x51_B_SCARH_tan="hlc_wp_Mk17_CQC_10rnd_Camo";
			hlc_10Rnd_762x51_mk316_SCARH_tan="hlc_wp_Mk17_CQC_10rnd_Camo";
			hlc_10Rnd_762x51_Barrier_SCARH_tan="hlc_wp_Mk17_CQC_10rnd_Camo";
			hlc_10Rnd_762x51_t_SCARH_tan="hlc_wp_Mk17_CQC_10rnd_Camo";
			hlc_10Rnd_762x51_TDim_SCARH_tan="hlc_wp_Mk17_CQC_10rnd_Camo";
			hlc_10Rnd_762x51_S_SCARH_tan="hlc_wp_Mk17_CQC_10rnd_Camo";
			hlc_10Rnd_762x51_B_SCARH="hlc_wp_Mk17_CQC_10rnd_Camo";
			hlc_10Rnd_762x51_mk316_SCARH="hlc_wp_Mk17_CQC_10rnd_Camo";
			hlc_10Rnd_762x51_Barrier_SCARH="hlc_wp_Mk17_CQC_10rnd_Camo";
			hlc_10Rnd_762x51_t_SCARH="hlc_wp_Mk17_CQC_10rnd_Camo";
			hlc_10Rnd_762x51_TDim_SCARH="hlc_wp_Mk17_CQC_10rnd_Camo";
			hlc_10Rnd_762x51_S_SCARH="hlc_wp_Mk17_CQC_10rnd_Camo";
			hlc_10Rnd_762x51_B_SCARH_camo="hlc_wp_Mk17_CQC_10rnd_Camo";
			hlc_10Rnd_762x51_mk316_SCARH_camo="hlc_wp_Mk17_CQC_10rnd_Camo";
			hlc_10Rnd_762x51_Barrier_SCARH_camo="hlc_wp_Mk17_CQC_10rnd_Camo";
			hlc_10Rnd_762x51_t_SCARH_camo="hlc_wp_Mk17_CQC_10rnd_Camo";
			hlc_10Rnd_762x51_TDim_SCARH_camo="hlc_wp_Mk17_CQC_10rnd_Camo";
			hlc_10Rnd_762x51_S_SCARH_camo="hlc_wp_Mk17_CQC_10rnd_Camo";
			default="hlc_wp_Mk17_CQC_Camo";
		};
		class nia_gripSwitch
		{
			VFG="hlc_wp_Mk17_CQC_camo_grip";
			AFG="hlc_wp_Mk17_CQC_camo_grip2";
			VFG2="hlc_wp_Mk17_CQC_camo_grip3";
			default="hlc_wp_Mk17_CQC_camo";
		};
		rhs_grip1_change="hlc_wp_Mk17_CQC_camo_grip";
		rhs_grip2_change="hlc_wp_Mk17_CQC_camo_grip2";
		rhs_grip3_change="hlc_wp_Mk17_CQC_camo_grip3";
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
			class hlc_wp_Mk17_CQC_camo
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_Mk17_CQC_Camo_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_Mk17_CQC_Camo_TacReload: hlc_wp_Mk17_CQC_camo
	{
		magazineReloadSwitchPhase="(40 / 96)";
		scopeArsenal=0;
		reloadMagazineSound[]=
		{
			"\nia_wp_SCAR\snd\mk17_reload_Partial.ogg",
			0.85000002,
			1,
			25
		};
		reloadAction="NIA_GestureReload_Mk17_Tactical";
		model="nia_wp_SCAR\mesh\Rifle\SCARH_CQC_TacReload.p3d";
		rhs_grip1_change="hlc_wp_Mk17_CQC_Camo_grip";
		rhs_grip2_change="hlc_wp_Mk17_CQC_Camo_grip2";
		rhs_grip3_change="hlc_wp_Mk17_CQC_Camo_grip3";
		class nia_gripSwitch
		{
			VFG="hlc_wp_Mk17_CQC_Camo_grip";
			AFG="hlc_wp_Mk17_CQC_Camo_grip2";
			VFG2="hlc_wp_Mk17_CQC_Camo_grip3";
			default="hlc_wp_Mk17_CQC_Camo_TacReload";
		};
	};
	class hlc_wp_Mk17_CQC_camo_grip: hlc_wp_Mk17_CQC_camo
	{
		scopeArsenal=0;
		dexterity=1.5741909;
		aimTransitionSpeed=1.1019336;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handpose_VFG.rtm"
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
			class hlc_WP_Mk17_CQC_Camo_grip
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_Mk17_CQC_Camo_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
		class nia_magSwitch
		{
			hlc_10Rnd_762x51_B_SCARH_tan="hlc_wp_Mk17_CQC_10Rnd_camo_grip";
			hlc_10Rnd_762x51_mk316_SCARH_tan="hlc_wp_Mk17_CQC_10Rnd_camo_grip";
			hlc_10Rnd_762x51_Barrier_SCARH_tan="hlc_wp_Mk17_CQC_10Rnd_camo_grip";
			hlc_10Rnd_762x51_t_SCARH_tan="hlc_wp_Mk17_CQC_10Rnd_camo_grip";
			hlc_10Rnd_762x51_TDim_SCARH_tan="hlc_wp_Mk17_CQC_10Rnd_camo_grip";
			hlc_10Rnd_762x51_S_SCARH_tan="hlc_wp_Mk17_CQC_10Rnd_camo_grip";
			hlc_10Rnd_762x51_B_SCARH="hlc_wp_Mk17_CQC_10Rnd_camo_grip";
			hlc_10Rnd_762x51_mk316_SCARH="hlc_wp_Mk17_CQC_10Rnd_camo_grip";
			hlc_10Rnd_762x51_Barrier_SCARH="hlc_wp_Mk17_CQC_10Rnd_camo_grip";
			hlc_10Rnd_762x51_t_SCARH="hlc_wp_Mk17_CQC_10Rnd_camo_grip";
			hlc_10Rnd_762x51_TDim_SCARH="hlc_wp_Mk17_CQC_10Rnd_camo_grip";
			hlc_10Rnd_762x51_S_SCARH="hlc_wp_Mk17_CQC_10Rnd_camo_grip";
			hlc_10Rnd_762x51_B_SCARH_camo="hlc_wp_Mk17_CQC_10Rnd_camo_grip";
			hlc_10Rnd_762x51_mk316_SCARH_camo="hlc_wp_Mk17_CQC_10Rnd_camo_grip";
			hlc_10Rnd_762x51_Barrier_SCARH_camo="hlc_wp_Mk17_CQC_10Rnd_camo_grip";
			hlc_10Rnd_762x51_t_SCARH_camo="hlc_wp_Mk17_CQC_10Rnd_camo_grip";
			hlc_10Rnd_762x51_TDim_SCARH_camo="hlc_wp_Mk17_CQC_10Rnd_camo_grip";
			hlc_10Rnd_762x51_S_SCARH_camo="hlc_wp_Mk17_CQC_10Rnd_camo_grip";
			default="hlc_wp_Mk17_CQC_camo_grip";
		};
	};
	class hlc_wp_Mk17_CQC_camo_grip2: hlc_wp_Mk17_CQC_camo
	{
		scopeArsenal=0;
		inertia="(0.349*0.85)";
		dexterity=1.5741909;
		aimTransitionSpeed=1.1019336;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handpose_AFG.rtm"
		};
		class nia_magSwitch
		{
			hlc_10Rnd_762x51_B_SCARH_tan="hlc_wp_Mk17_CQC_10Rnd_camo_grip2";
			hlc_10Rnd_762x51_mk316_SCARH_tan="hlc_wp_Mk17_CQC_10Rnd_camo_grip2";
			hlc_10Rnd_762x51_Barrier_SCARH_tan="hlc_wp_Mk17_CQC_10Rnd_camo_grip2";
			hlc_10Rnd_762x51_t_SCARH_tan="hlc_wp_Mk17_CQC_10Rnd_camo_grip2";
			hlc_10Rnd_762x51_TDim_SCARH_tan="hlc_wp_Mk17_CQC_10Rnd_camo_grip2";
			hlc_10Rnd_762x51_S_SCARH_tan="hlc_wp_Mk17_CQC_10Rnd_camo_grip2";
			hlc_10Rnd_762x51_B_SCARH="hlc_wp_Mk17_CQC_10Rnd_camo_grip2";
			hlc_10Rnd_762x51_mk316_SCARH="hlc_wp_Mk17_CQC_10Rnd_camo_grip2";
			hlc_10Rnd_762x51_Barrier_SCARH="hlc_wp_Mk17_CQC_10Rnd_camo_grip2";
			hlc_10Rnd_762x51_t_SCARH="hlc_wp_Mk17_CQC_10Rnd_camo_grip2";
			hlc_10Rnd_762x51_TDim_SCARH="hlc_wp_Mk17_CQC_10Rnd_camo_grip2";
			hlc_10Rnd_762x51_S_SCARH="hlc_wp_Mk17_CQC_10Rnd_camo_grip2";
			hlc_10Rnd_762x51_B_SCARH_camo="hlc_wp_Mk17_CQC_10Rnd_camo_grip2";
			hlc_10Rnd_762x51_mk316_SCARH_camo="hlc_wp_Mk17_CQC_10Rnd_camo_grip2";
			hlc_10Rnd_762x51_Barrier_SCARH_camo="hlc_wp_Mk17_CQC_10Rnd_camo_grip2";
			hlc_10Rnd_762x51_t_SCARH_camo="hlc_wp_Mk17_CQC_10Rnd_camo_grip2";
			hlc_10Rnd_762x51_TDim_SCARH_camo="hlc_wp_Mk17_CQC_10Rnd_camo_grip2";
			hlc_10Rnd_762x51_S_SCARH_camo="hlc_wp_Mk17_CQC_10Rnd_camo_grip2";
			default="hlc_wp_Mk17_CQC_camo_grip2";
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
			class hlc_WP_Mk17_CQC_Camo_grip2
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_Mk17_CQC_Camo_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_Mk17_CQC_camo_grip3: hlc_wp_Mk17_CQC_camo
	{
		scopeArsenal=0;
		dexterity=1.5741909;
		aimTransitionSpeed=1.1019336;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handpose_VFG.rtm"
		};
		class nia_magSwitch
		{
			hlc_10Rnd_762x51_B_SCARH_tan="hlc_wp_Mk17_CQC_10Rnd_camo_grip3";
			hlc_10Rnd_762x51_mk316_SCARH_tan="hlc_wp_Mk17_CQC_10Rnd_camo_grip3";
			hlc_10Rnd_762x51_Barrier_SCARH_tan="hlc_wp_Mk17_CQC_10Rnd_camo_grip3";
			hlc_10Rnd_762x51_t_SCARH_tan="hlc_wp_Mk17_CQC_10Rnd_camo_grip3";
			hlc_10Rnd_762x51_TDim_SCARH_tan="hlc_wp_Mk17_CQC_10Rnd_camo_grip3";
			hlc_10Rnd_762x51_S_SCARH_tan="hlc_wp_Mk17_CQC_10Rnd_camo_grip3";
			hlc_10Rnd_762x51_B_SCARH="hlc_wp_Mk17_CQC_10Rnd_camo_grip3";
			hlc_10Rnd_762x51_mk316_SCARH="hlc_wp_Mk17_CQC_10Rnd_camo_grip3";
			hlc_10Rnd_762x51_Barrier_SCARH="hlc_wp_Mk17_CQC_10Rnd_camo_grip3";
			hlc_10Rnd_762x51_t_SCARH="hlc_wp_Mk17_CQC_10Rnd_camo_grip3";
			hlc_10Rnd_762x51_TDim_SCARH="hlc_wp_Mk17_CQC_10Rnd_camo_grip3";
			hlc_10Rnd_762x51_S_SCARH="hlc_wp_Mk17_CQC_10Rnd_camo_grip3";
			hlc_10Rnd_762x51_B_SCARH_camo="hlc_wp_Mk17_CQC_10Rnd_camo_grip3";
			hlc_10Rnd_762x51_mk316_SCARH_camo="hlc_wp_Mk17_CQC_10Rnd_camo_grip3";
			hlc_10Rnd_762x51_Barrier_SCARH_camo="hlc_wp_Mk17_CQC_10Rnd_camo_grip3";
			hlc_10Rnd_762x51_t_SCARH_camo="hlc_wp_Mk17_CQC_10Rnd_camo_grip3";
			hlc_10Rnd_762x51_TDim_SCARH_camo="hlc_wp_Mk17_CQC_10Rnd_camo_grip3";
			hlc_10Rnd_762x51_S_SCARH_camo="hlc_wp_Mk17_CQC_10Rnd_camo_grip3";
			default="hlc_wp_Mk17_CQC_camo_grip3";
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
			class hlc_WP_Mk17_CQC_Camo_grip3
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_Mk17_CQC_Camo_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_Mk17_CQC_10rnd_Camo: hlc_wp_Mk17_CQC_camo
	{
		scopeArsenal=0;
		reloadAction="NIA_GestureReload_Mk17_10rnd";
		baseweapon="hlc_wp_Mk17_CQC_10rnd_Camo";
		class nia_gripSwitch
		{
			VFG="hlc_wp_Mk17_CQC_10rnd_Camo_grip";
			AFG="hlc_wp_Mk17_CQC_10rnd_Camo_grip2";
			VFG2="hlc_wp_Mk17_CQC_10rnd_Camo_grip3";
			default="hlc_wp_Mk17_CQC_10rnd_Camo";
		};
		rhs_grip1_change="hlc_wp_Mk17_CQC_10rnd_Camo_grip";
		rhs_grip2_change="hlc_wp_Mk17_CQC_10rnd_Camo_grip2";
		rhs_grip3_change="hlc_wp_Mk17_CQC_10rnd_Camo_grip3";
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
			class hlc_wp_Mk17_CQC_10rnd_Camo
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_Mk17_CQC_10rnd_Camo_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_Mk17_CQC_10rnd_Camo_TacReload: hlc_wp_Mk17_CQC_10rnd_Camo
	{
		magazineReloadSwitchPhase="(40 / 96)";
		scopeArsenal=0;
		reloadMagazineSound[]=
		{
			"\nia_wp_SCAR\snd\mk17_reload_Partial.ogg",
			0.85000002,
			1,
			25
		};
		reloadAction="NIA_GestureReload_Mk17_10rnd_Tactical";
		model="nia_wp_SCAR\mesh\Rifle\SCARH_CQC_TacReload.p3d";
		rhs_grip1_change="hlc_wp_Mk17_CQC_10rnd_Camo_grip";
		rhs_grip2_change="hlc_wp_Mk17_CQC_10rnd_Camo_grip2";
		rhs_grip3_change="hlc_wp_Mk17_CQC_10rnd_Camo_grip3";
		class nia_gripSwitch
		{
			VFG="hlc_wp_Mk17_CQC_10rnd_Camo_grip";
			AFG="hlc_wp_Mk17_CQC_10rnd_Camo_grip2";
			VFG2="hlc_wp_Mk17_CQC_10rnd_Camo_grip3";
			default="hlc_wp_Mk17_CQC_10rnd_Camo_TacReload";
		};
	};
	class hlc_wp_Mk17_CQC_10rnd_Camo_grip: hlc_wp_Mk17_CQC_10rnd_Camo
	{
		scopeArsenal=0;
		dexterity=1.5741909;
		aimTransitionSpeed=1.1019336;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handpose_VFG.rtm"
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
			class hlc_WP_Mk17_CQC_10rnd_Camo_grip
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_Mk17_CQC_10rnd_Camo_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_Mk17_CQC_10rnd_Camo_grip2: hlc_wp_Mk17_CQC_10rnd_Camo
	{
		scopeArsenal=0;
		inertia="(0.349*0.85)";
		dexterity=1.5741909;
		aimTransitionSpeed=1.1019336;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handpose_AFG.rtm"
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
			class hlc_WP_Mk17_CQC_10rnd_Camo_grip2
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_Mk17_CQC_10rnd_Camo_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_Mk17_CQC_10rnd_Camo_grip3: hlc_wp_Mk17_CQC_10rnd_Camo
	{
		scopeArsenal=0;
		dexterity=1.5741909;
		aimTransitionSpeed=1.1019336;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handpose_VFG.rtm"
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
			class hlc_WP_Mk17_CQC_10rnd_Camo_grip3
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_Mk17_CQC_10rnd_Camo_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_MK17_CQC_AGC: hlc_wp_Mk17_CQC
	{
		author="Toadie";
		dlc="Niarms_SCAR";
		displayName="$STR_NIA_rifle_MK17CQC_AGC";
		scope=2;
		muzzles[]=
		{
			"this",
			"hlc_GL_SCAR_AGC"
		};
		baseWeapon="hlc_wp_MK17_CQC_AGC";
		mass=108.78199;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=108.78199;
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
				class compatibleItems: compatibleItems
				{
					HLC_Panel_Side_SCAR_FN5cm_Desert=1;
					HLC_Panel_Side_SCAR_2xFN5cm_Desert=1;
					HLC_Panel_Side_SCAR_FN10cm_Desert=1;
					HLC_Panel_Side_SCAR_Ladder_S_Desert=1;
					HLC_Panel_Side_SCAR_Ladder_M_Desert=1;
					HLC_Panel_Side_SCAR_MagpulXT_Desert=1;
					HLC_Panel_Side_SCAR_XTME_Desert=1;
					HLC_Panel_Side_SCAR_2xXTME_Desert=1;
					HLC_Panel_Side_SCAR_FN5cm_Black=1;
					HLC_Panel_Side_SCAR_2xFN5cm_Black=1;
					HLC_Panel_Side_SCAR_FN10cm_Black=1;
					HLC_Panel_Side_SCAR_Ladder_S_Black=1;
					HLC_Panel_Side_SCAR_Ladder_M_Black=1;
					HLC_Panel_Side_SCAR_MagpulXT_Black=1;
					HLC_Panel_Side_SCAR_XTME_Black=1;
					HLC_Panel_Side_SCAR_2xXTME_Black=1;
					HLC_Panel_Side_SCAR_FN5cm_OD=1;
					HLC_Panel_Side_SCAR_2xFN5cm_OD=1;
					HLC_Panel_Side_SCAR_FN10cm_OD=1;
					HLC_Panel_Side_SCAR_Ladder_S_OD=1;
					HLC_Panel_Side_SCAR_Ladder_M_OD=1;
					HLC_Panel_Side_SCAR_MagpulXT_OD=1;
					HLC_Panel_Side_SCAR_XTME_OD=1;
					HLC_Panel_Side_SCAR_2xXTME_OD=1;
					HLC_Panel_Side_SCAR_FN5cm_RG=1;
					HLC_Panel_Side_SCAR_2xFN5cm_RG=1;
					HLC_Panel_Side_SCAR_FN10cm_RG=1;
					HLC_Panel_Side_SCAR_Ladder_S_RG=1;
					HLC_Panel_Side_SCAR_Ladder_M_RG=1;
					HLC_Panel_Side_SCAR_MagpulXT_RG=1;
					HLC_Panel_Side_SCAR_XTME_RG=1;
					HLC_Panel_Side_SCAR_2xXTME_RG=1;
					HLC_Panel_Side_SCAR_Ladder_S_Pride=1;
					HLC_Panel_Side_SCAR_Ladder_M_Pride=1;
					HLC_Panel_Side_SCAR_MagpulXT_Pride=1;
				};
			};
			class MuzzleSlot: asdg_MuzzleSlot_762
			{
				iconPosition[]={0,0};
				iconScale=1;
				iconPicture="\A3\Weapons_F\Data\clear_empty.paa";
				iconPinPoint="Left";
			};
			class UnderBarrelSlot
			{
				iconPosition[]={0,0};
				iconScale=1;
				iconPicture="\A3\Weapons_F\Data\clear_empty.paa";
				iconPinPoint="Left";
			};
			class GripodSlot
			{
				iconPosition[]={0,0};
				iconScale=1;
				iconPicture="\A3\Weapons_F\Data\clear_empty.paa";
				iconPinPoint="Left";
			};
		};
		inertia="(0.358 + 0.15)";
		dexterity=1.1380438;
		aimTransitionSpeed=0.79663062;
		model="nia_wp_SCAR\mesh\rifle\SCARH_CQC_AGC.p3d";
		picture="\nia_wp_SCAR\tex\ui\hlc_wp_MK17_CQC_AGC_ca";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handpose_AGC.rtm"
		};
		UiPicture="\A3\weapons_f\data\UI\icon_regular_CA.paa";
		class nia_magSwitch
		{
			hlc_10Rnd_762x51_B_SCARH_tan="hlc_wp_Mk17_CQC_10rnd_AGC";
			hlc_10Rnd_762x51_mk316_SCARH_tan="hlc_wp_Mk17_CQC_10rnd_AGC";
			hlc_10Rnd_762x51_Barrier_SCARH_tan="hlc_wp_Mk17_CQC_10rnd_AGC";
			hlc_10Rnd_762x51_t_SCARH_tan="hlc_wp_Mk17_CQC_10rnd_AGC";
			hlc_10Rnd_762x51_TDim_SCARH_tan="hlc_wp_Mk17_CQC_10rnd_AGC";
			hlc_10Rnd_762x51_S_SCARH_tan="hlc_wp_Mk17_CQC_10rnd_AGC";
			hlc_10Rnd_762x51_B_SCARH="hlc_wp_Mk17_CQC_10rnd_AGC";
			hlc_10Rnd_762x51_mk316_SCARH="hlc_wp_Mk17_CQC_10rnd_AGC";
			hlc_10Rnd_762x51_Barrier_SCARH="hlc_wp_Mk17_CQC_10rnd_AGC";
			hlc_10Rnd_762x51_t_SCARH="hlc_wp_Mk17_CQC_10rnd_AGC";
			hlc_10Rnd_762x51_TDim_SCARH="hlc_wp_Mk17_CQC_10rnd_AGC";
			hlc_10Rnd_762x51_S_SCARH="hlc_wp_Mk17_CQC_10rnd_AGC";
			hlc_10Rnd_762x51_B_SCARH_camo="hlc_wp_Mk17_CQC_10rnd_AGC";
			hlc_10Rnd_762x51_mk316_SCARH_camo="hlc_wp_Mk17_CQC_10rnd_AGC";
			hlc_10Rnd_762x51_Barrier_SCARH_camo="hlc_wp_Mk17_CQC_10rnd_AGC";
			hlc_10Rnd_762x51_t_SCARH_camo="hlc_wp_Mk17_CQC_10rnd_AGC";
			hlc_10Rnd_762x51_TDim_SCARH_camo="hlc_wp_Mk17_CQC_10rnd_AGC";
			hlc_10Rnd_762x51_S_SCARH_camo="hlc_wp_Mk17_CQC_10rnd_AGC";
			default="hlc_wp_Mk17_CQC_AGC";
		};
		class nia_gripSwitch
		{
			VFG="hlc_wp_MK17_CQC_AGC";
			AFG="hlc_wp_MK17_CQC_AGC";
			VFG2="hlc_wp_MK17_CQC_AGC";
			default="hlc_wp_MK17_CQC_AGC";
		};
		rhs_grip1_change="hlc_wp_MK17_CQC_AGC";
		rhs_grip2_change="hlc_wp_MK17_CQC_AGC";
		rhs_grip3_change="hlc_wp_MK17_CQC_AGC";
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
			class hlc_wp_MK17_CQC_AGC
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_Mk17_CQC_AGC_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_Mk17_CQC_AGC_TacReload: hlc_wp_MK17_CQC_AGC
	{
		magazineReloadSwitchPhase="(40 / 96)";
		scopeArsenal=0;
		reloadMagazineSound[]=
		{
			"\nia_wp_SCAR\snd\mk17_reload_Partial.ogg",
			0.85000002,
			1,
			25
		};
		reloadAction="NIA_GestureReload_Mk17_Tactical";
		model="nia_wp_SCAR\mesh\Rifle\SCARH_CQC_AGC_TacReload.p3d";
	};
	class hlc_wp_Mk17_CQC_10rnd_AGC: hlc_wp_MK17_CQC_AGC
	{
		scopeArsenal=0;
		reloadAction="NIA_GestureReload_Mk17_10rnd";
		baseweapon="hlc_wp_Mk17_CQC_10rnd_AGC";
		class nia_gripSwitch
		{
			VFG="hlc_wp_Mk17_CQC_10rnd_AGC";
			AFG="hlc_wp_Mk17_CQC_10rnd_AGC";
			VFG2="hlc_wp_Mk17_CQC_10rnd_AGC";
			default="hlc_wp_Mk17_CQC_10rnd_AGC";
		};
		rhs_grip1_change="hlc_wp_Mk17_CQC_10rnd_AGC";
		rhs_grip2_change="hlc_wp_Mk17_CQC_10rnd_AGC";
		rhs_grip3_change="hlc_wp_Mk17_CQC_10rnd_AGC";
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
			class hlc_wp_MK17_CQC_10rnd_AGC
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_Mk17_CQC_10rnd_AGC_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_Mk17_CQC_10rnd_AGC_TacReload: hlc_wp_Mk17_CQC_10rnd_AGC
	{
		magazineReloadSwitchPhase="(40 / 96)";
		scopeArsenal=0;
		reloadMagazineSound[]=
		{
			"\nia_wp_SCAR\snd\mk17_reload_Partial.ogg",
			0.85000002,
			1,
			25
		};
		reloadAction="NIA_GestureReload_Mk17_10rnd_Tactical";
		model="nia_wp_SCAR\mesh\Rifle\SCARH_CQC_AGC_TacReload.p3d";
	};
	class hlc_wp_MK17_CQC_AGC_camo: hlc_wp_Mk17_CQC_camo
	{
		author="Toadie";
		dlc="Niarms_SCAR";
		displayName="$STR_NIA_rifle_MK17CQC_AGC_camo";
		scope=2;
		muzzles[]=
		{
			"this",
			"hlc_GL_SCAR_AGC"
		};
		baseWeapon="hlc_wp_MK17_CQC_AGC_camo";
		mass=108.78199;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=108.78199;
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
				class compatibleItems: compatibleItems
				{
					HLC_Panel_Side_SCAR_FN5cm_Desert=1;
					HLC_Panel_Side_SCAR_2xFN5cm_Desert=1;
					HLC_Panel_Side_SCAR_FN10cm_Desert=1;
					HLC_Panel_Side_SCAR_Ladder_S_Desert=1;
					HLC_Panel_Side_SCAR_Ladder_M_Desert=1;
					HLC_Panel_Side_SCAR_MagpulXT_Desert=1;
					HLC_Panel_Side_SCAR_XTME_Desert=1;
					HLC_Panel_Side_SCAR_2xXTME_Desert=1;
					HLC_Panel_Side_SCAR_FN5cm_Black=1;
					HLC_Panel_Side_SCAR_2xFN5cm_Black=1;
					HLC_Panel_Side_SCAR_FN10cm_Black=1;
					HLC_Panel_Side_SCAR_Ladder_S_Black=1;
					HLC_Panel_Side_SCAR_Ladder_M_Black=1;
					HLC_Panel_Side_SCAR_MagpulXT_Black=1;
					HLC_Panel_Side_SCAR_XTME_Black=1;
					HLC_Panel_Side_SCAR_2xXTME_Black=1;
					HLC_Panel_Side_SCAR_FN5cm_OD=1;
					HLC_Panel_Side_SCAR_2xFN5cm_OD=1;
					HLC_Panel_Side_SCAR_FN10cm_OD=1;
					HLC_Panel_Side_SCAR_Ladder_S_OD=1;
					HLC_Panel_Side_SCAR_Ladder_M_OD=1;
					HLC_Panel_Side_SCAR_MagpulXT_OD=1;
					HLC_Panel_Side_SCAR_XTME_OD=1;
					HLC_Panel_Side_SCAR_2xXTME_OD=1;
					HLC_Panel_Side_SCAR_FN5cm_RG=1;
					HLC_Panel_Side_SCAR_2xFN5cm_RG=1;
					HLC_Panel_Side_SCAR_FN10cm_RG=1;
					HLC_Panel_Side_SCAR_Ladder_S_RG=1;
					HLC_Panel_Side_SCAR_Ladder_M_RG=1;
					HLC_Panel_Side_SCAR_MagpulXT_RG=1;
					HLC_Panel_Side_SCAR_XTME_RG=1;
					HLC_Panel_Side_SCAR_2xXTME_RG=1;
					HLC_Panel_Side_SCAR_Ladder_S_Pride=1;
					HLC_Panel_Side_SCAR_Ladder_M_Pride=1;
					HLC_Panel_Side_SCAR_MagpulXT_Pride=1;
				};
			};
			class MuzzleSlot: asdg_MuzzleSlot_762
			{
				iconPosition[]={0,0};
				iconScale=1;
				iconPicture="\A3\Weapons_F\Data\clear_empty.paa";
				iconPinPoint="Left";
			};
			class UnderBarrelSlot
			{
				iconPosition[]={0,0};
				iconScale=1;
				iconPicture="\A3\Weapons_F\Data\clear_empty.paa";
				iconPinPoint="Left";
			};
			class GripodSlot
			{
				iconPosition[]={0,0};
				iconScale=1;
				iconPicture="\A3\Weapons_F\Data\clear_empty.paa";
				iconPinPoint="Left";
			};
		};
		inertia="(0.358 + 0.15)";
		dexterity=1.1380438;
		aimTransitionSpeed=0.79663062;
		model="nia_wp_SCAR\mesh\rifle\SCARH_CQC_AGC.p3d";
		picture="\nia_wp_SCAR\tex\ui\hlc_wp_MK17_CQC_AGC_camo_ca";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handpose_AGC.rtm"
		};
		UiPicture="\A3\weapons_f\data\UI\icon_regular_CA.paa";
		class nia_magSwitch
		{
			hlc_10Rnd_762x51_B_SCARH_tan="hlc_wp_Mk17_CQC_10rnd_AGC_camo";
			hlc_10Rnd_762x51_mk316_SCARH_tan="hlc_wp_Mk17_CQC_10rnd_AGC_camo";
			hlc_10Rnd_762x51_Barrier_SCARH_tan="hlc_wp_Mk17_CQC_10rnd_AGC_camo";
			hlc_10Rnd_762x51_t_SCARH_tan="hlc_wp_Mk17_CQC_10rnd_AGC_camo";
			hlc_10Rnd_762x51_TDim_SCARH_tan="hlc_wp_Mk17_CQC_10rnd_AGC_camo";
			hlc_10Rnd_762x51_S_SCARH_tan="hlc_wp_Mk17_CQC_10rnd_AGC_camo";
			hlc_10Rnd_762x51_B_SCARH="hlc_wp_Mk17_CQC_10rnd_AGC_camo";
			hlc_10Rnd_762x51_mk316_SCARH="hlc_wp_Mk17_CQC_10rnd_AGC_camo";
			hlc_10Rnd_762x51_Barrier_SCARH="hlc_wp_Mk17_CQC_10rnd_AGC_camo";
			hlc_10Rnd_762x51_t_SCARH="hlc_wp_Mk17_CQC_10rnd_AGC_camo";
			hlc_10Rnd_762x51_TDim_SCARH="hlc_wp_Mk17_CQC_10rnd_AGC_camo";
			hlc_10Rnd_762x51_S_SCARH="hlc_wp_Mk17_CQC_10rnd_AGC_camo";
			hlc_10Rnd_762x51_B_SCARH_camo="hlc_wp_Mk17_CQC_10rnd_AGC_camo";
			hlc_10Rnd_762x51_mk316_SCARH_camo="hlc_wp_Mk17_CQC_10rnd_AGC_camo";
			hlc_10Rnd_762x51_Barrier_SCARH_camo="hlc_wp_Mk17_CQC_10rnd_AGC_camo";
			hlc_10Rnd_762x51_t_SCARH_camo="hlc_wp_Mk17_CQC_10rnd_AGC_camo";
			hlc_10Rnd_762x51_TDim_SCARH_camo="hlc_wp_Mk17_CQC_10rnd_AGC_camo";
			hlc_10Rnd_762x51_S_SCARH_camo="hlc_wp_Mk17_CQC_10rnd_AGC_camo";
			default="hlc_wp_Mk17_CQC_AGC_camo";
		};
		class nia_gripSwitch
		{
			VFG="hlc_wp_MK17_CQC_AGC_camo";
			AFG="hlc_wp_MK17_CQC_AGC_camo";
			VFG2="hlc_wp_MK17_CQC_AGC_camo";
			default="hlc_wp_MK17_CQC_AGC_camo";
		};
		rhs_grip1_change="hlc_wp_MK17_CQC_AGC_camo";
		rhs_grip2_change="hlc_wp_MK17_CQC_AGC_camo";
		rhs_grip3_change="hlc_wp_MK17_CQC_AGC_camo";
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
			class hlc_wp_MK17_CQC_AGC_camo
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_Mk17_CQC_AGC_camo_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_Mk17_CQC_AGC_camo_TacReload: hlc_wp_MK17_CQC_AGC_camo
	{
		magazineReloadSwitchPhase="(40 / 96)";
		scopeArsenal=0;
		reloadMagazineSound[]=
		{
			"\nia_wp_SCAR\snd\mk17_reload_Partial.ogg",
			0.85000002,
			1,
			25
		};
		reloadAction="NIA_GestureReload_Mk17_Tactical";
		model="nia_wp_SCAR\mesh\Rifle\SCARH_CQC_AGC_TacReload.p3d";
	};
	class hlc_wp_Mk17_CQC_10rnd_AGC_camo: hlc_wp_MK17_CQC_AGC_camo
	{
		scopeArsenal=0;
		reloadAction="NIA_GestureReload_Mk17_10rnd";
		baseweapon="hlc_wp_Mk17_CQC_10rnd_AGC_camo";
		class nia_gripSwitch
		{
			VFG="hlc_wp_Mk17_CQC_10rnd_AGC_camo";
			AFG="hlc_wp_Mk17_CQC_10rnd_AGC_camo";
			VFG2="hlc_wp_Mk17_CQC_10rnd_AGC_camo";
			default="hlc_wp_Mk17_CQC_10rnd_AGC_camo";
		};
		rhs_grip1_change="hlc_wp_Mk17_CQC_10rnd_AGC_camo";
		rhs_grip2_change="hlc_wp_Mk17_CQC_10rnd_AGC_camo";
		rhs_grip3_change="hlc_wp_Mk17_CQC_10rnd_AGC_camo";
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
			class hlc_wp_Mk17_CQC_10rnd_AGC_camo
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_Mk17_CQC_10rnd_AGC_camo_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_Mk17_CQC_10rnd_AGC_camo_TacReload: hlc_wp_Mk17_CQC_10rnd_AGC_camo
	{
		magazineReloadSwitchPhase="(40 / 96)";
		scopeArsenal=0;
		reloadMagazineSound[]=
		{
			"\nia_wp_SCAR\snd\mk17_reload_Partial.ogg",
			0.85000002,
			1,
			25
		};
		reloadAction="NIA_GestureReload_Mk17_10rnd_Tactical";
		model="nia_wp_SCAR\mesh\Rifle\SCARH_CQC_AGC_TacReload.p3d";
	};
	class hlc_WP_Mk17IUR: hlc_wp_MK17
	{
		author="Toadie";
		dlc="Niarms_SCAR";
		displayName="$STR_NIA_rifle_MK17IUR";
		scope=2;
		baseWeapon="hlc_WP_MK17IUR";
		class LinkedItems
		{
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="hlc_muzzle_Miter18T";
			};
		};
		picture="\nia_wp_SCAR\tex\ui\hlc_WP_Mk17IUR_ca";
		model="nia_wp_SCAR\mesh\rifle\Mk17IUR.p3d";
		hiddenSelectionsTextures[]=
		{
			"nia_wp_SCAR\tex\toadie_SCAR\scar_common_tan_co.paa",
			"nia_wp_SCAR\tex\toadie_SCAR\scar_lower_IUR_co.paa",
			"nia_wp_SCAR\tex\toadie_SCAR\stock_tan_co.paa",
			"nia_wp_SCAR\tex\toadie_SCAR\upper_scarh_mk17_co.paa"
		};
		HiddenSelectionsMaterials[]=
		{
			"nia_wp_SCAR\mat\scar_common.rvmat",
			"nia_wp_SCAR\mat\scar_lowers_IUR.rvmat",
			"nia_wp_SCAR\mat\scar_stock.rvmat",
			"nia_wp_SCAR\mat\scar_upper_scarh_mk17.rvmat"
		};
		class nia_magSwitch
		{
			hlc_10Rnd_762x51_B_SCARH_tan="hlc_wp_Mk17IUR_10Rnd";
			hlc_10Rnd_762x51_mk316_SCARH_tan="hlc_wp_Mk17IUR_10Rnd";
			hlc_10Rnd_762x51_Barrier_SCARH_tan="hlc_wp_Mk17IUR_10Rnd";
			hlc_10Rnd_762x51_t_SCARH_tan="hlc_wp_Mk17IUR_10Rnd";
			hlc_10Rnd_762x51_TDim_SCARH_tan="hlc_wp_Mk17IUR_10Rnd";
			hlc_10Rnd_762x51_S_SCARH_tan="hlc_wp_Mk17IUR_10Rnd";
			hlc_10Rnd_762x51_B_SCARH="hlc_wp_Mk17IUR_10Rnd";
			hlc_10Rnd_762x51_mk316_SCARH="hlc_wp_Mk17IUR_10Rnd";
			hlc_10Rnd_762x51_Barrier_SCARH="hlc_wp_Mk17IUR_10Rnd";
			hlc_10Rnd_762x51_t_SCARH="hlc_wp_Mk17IUR_10Rnd";
			hlc_10Rnd_762x51_TDim_SCARH="hlc_wp_Mk17IUR_10Rnd";
			hlc_10Rnd_762x51_S_SCARH="hlc_wp_Mk17IUR_10Rnd";
			hlc_10Rnd_762x51_B_SCARH_camo="hlc_wp_Mk17IUR_10Rnd";
			hlc_10Rnd_762x51_mk316_SCARH_camo="hlc_wp_Mk17IUR_10Rnd";
			hlc_10Rnd_762x51_Barrier_SCARH_camo="hlc_wp_Mk17IUR_10Rnd";
			hlc_10Rnd_762x51_t_SCARH_camo="hlc_wp_Mk17IUR_10Rnd";
			hlc_10Rnd_762x51_TDim_SCARH_camo="hlc_wp_Mk17IUR_10Rnd";
			hlc_10Rnd_762x51_S_SCARH_camo="hlc_wp_Mk17IUR_10Rnd";
			default="hlc_wp_Mk17IUR";
		};
		class nia_gripSwitch
		{
			VFG="hlc_WP_MK17IUR_grip";
			AFG="hlc_WP_MK17IUR_grip2";
			VFG2="hlc_WP_MK17IUR_grip3";
			default="hlc_WP_MK17IUR";
		};
		rhs_grip1_change="hlc_WP_MK17IUR_grip";
		rhs_grip2_change="hlc_WP_MK17IUR_grip2";
		rhs_grip3_change="hlc_WP_MK17IUR_grip3";
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
			class hlc_WP_Mk17IUR
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_Mk17IUR_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_Mk17IUR_TacReload: hlc_WP_Mk17IUR
	{
		magazineReloadSwitchPhase="(40 / 96)";
		scopeArsenal=0;
		reloadMagazineSound[]=
		{
			"\nia_wp_SCAR\snd\mk17_reload_Partial.ogg",
			0.85000002,
			1,
			25
		};
		reloadAction="NIA_GestureReload_Mk17_Tactical";
		model="nia_wp_SCAR\mesh\Rifle\MK17IUR_TacReload.p3d";
		rhs_grip1_change="hlc_wp_Mk17IUR_grip";
		rhs_grip2_change="hlc_wp_Mk17IUR_grip2";
		rhs_grip3_change="hlc_wp_Mk17IUR_grip3";
		class nia_gripSwitch
		{
			VFG="hlc_wp_Mk17IUR_grip";
			AFG="hlc_wp_Mk17IUR_grip2";
			VFG2="hlc_wp_Mk1IUR7_grip3";
			default="hlc_wp_Mk17IUR_TacReload";
		};
	};
	class hlc_wp_MK17IUR_grip: hlc_WP_Mk17IUR
	{
		scopeArsenal=0;
		dexterity=1.5471935;
		aimTransitionSpeed=1.0830355;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handpose_VFG.rtm"
		};
		class nia_magSwitch
		{
			hlc_10Rnd_762x51_B_SCARH_tan="hlc_wp_Mk17IUR_10Rnd_grip";
			hlc_10Rnd_762x51_mk316_SCARH_tan="hlc_wp_Mk17IUR_10Rnd_grip";
			hlc_10Rnd_762x51_Barrier_SCARH_tan="hlc_wp_Mk17IUR_10Rnd_grip";
			hlc_10Rnd_762x51_t_SCARH_tan="hlc_wp_Mk17IUR_10Rnd_grip";
			hlc_10Rnd_762x51_TDim_SCARH_tan="hlc_wp_Mk17IUR_10Rnd_grip";
			hlc_10Rnd_762x51_S_SCARH_tan="hlc_wp_Mk17IUR_10Rnd_grip";
			hlc_10Rnd_762x51_B_SCARH="hlc_wp_Mk17IUR_10Rnd_grip";
			hlc_10Rnd_762x51_mk316_SCARH="hlc_wp_Mk17IUR_10Rnd_grip";
			hlc_10Rnd_762x51_Barrier_SCARH="hlc_wp_Mk17IUR_10Rnd_grip";
			hlc_10Rnd_762x51_t_SCARH="hlc_wp_Mk17IUR_10Rnd_grip";
			hlc_10Rnd_762x51_TDim_SCARH="hlc_wp_Mk17IUR_10Rnd_grip";
			hlc_10Rnd_762x51_S_SCARH="hlc_wp_Mk17IUR_10Rnd_grip";
			hlc_10Rnd_762x51_B_SCARH_camo="hlc_wp_Mk17IUR_10Rnd_grip";
			hlc_10Rnd_762x51_mk316_SCARH_camo="hlc_wp_Mk17IUR_10Rnd_grip";
			hlc_10Rnd_762x51_Barrier_SCARH_camo="hlc_wp_Mk17IUR_10Rnd_grip";
			hlc_10Rnd_762x51_t_SCARH_camo="hlc_wp_Mk17IUR_10Rnd_grip";
			hlc_10Rnd_762x51_TDim_SCARH_camo="hlc_wp_Mk17IUR_10Rnd_grip";
			hlc_10Rnd_762x51_S_SCARH_camo="hlc_wp_Mk17IUR_10Rnd_grip";
			default="hlc_wp_Mk17IUR_grip";
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
			class hlc_WP_Mk17IUR_Grip
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_Mk17IUR_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_MK17IUR_grip2: hlc_WP_Mk17IUR
	{
		scopeArsenal=0;
		inertia="(0.358*0.85)";
		dexterity=1.5471935;
		aimTransitionSpeed=1.0830355;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handpose_AFG.rtm"
		};
		class nia_magSwitch
		{
			hlc_10Rnd_762x51_B_SCARH_tan="hlc_wp_Mk17IUR_10Rnd_grip2";
			hlc_10Rnd_762x51_mk316_SCARH_tan="hlc_wp_Mk17IUR_10Rnd_grip2";
			hlc_10Rnd_762x51_Barrier_SCARH_tan="hlc_wp_Mk17IUR_10Rnd_grip2";
			hlc_10Rnd_762x51_t_SCARH_tan="hlc_wp_Mk17IUR_10Rnd_grip2";
			hlc_10Rnd_762x51_TDim_SCARH_tan="hlc_wp_Mk17IUR_10Rnd_grip2";
			hlc_10Rnd_762x51_S_SCARH_tan="hlc_wp_Mk17IUR_10Rnd_grip2";
			hlc_10Rnd_762x51_B_SCARH="hlc_wp_Mk17IUR_10Rnd_grip2";
			hlc_10Rnd_762x51_mk316_SCARH="hlc_wp_Mk17IUR_10Rnd_grip2";
			hlc_10Rnd_762x51_Barrier_SCARH="hlc_wp_Mk17IUR_10Rnd_grip2";
			hlc_10Rnd_762x51_t_SCARH="hlc_wp_Mk17IUR_10Rnd_grip2";
			hlc_10Rnd_762x51_TDim_SCARH="hlc_wp_Mk17IUR_10Rnd_grip2";
			hlc_10Rnd_762x51_S_SCARH="hlc_wp_Mk17IUR_10Rnd_grip2";
			hlc_10Rnd_762x51_B_SCARH_camo="hlc_wp_Mk17IUR_10Rnd_grip2";
			hlc_10Rnd_762x51_mk316_SCARH_camo="hlc_wp_Mk17IUR_10Rnd_grip2";
			hlc_10Rnd_762x51_Barrier_SCARH_camo="hlc_wp_Mk17IUR_10Rnd_grip2";
			hlc_10Rnd_762x51_t_SCARH_camo="hlc_wp_Mk17IUR_10Rnd_grip2";
			hlc_10Rnd_762x51_TDim_SCARH_camo="hlc_wp_Mk17IUR_10Rnd_grip2";
			hlc_10Rnd_762x51_S_SCARH_camo="hlc_wp_Mk17IUR_10Rnd_grip2";
			default="hlc_wp_Mk17IUR_grip2";
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
			class hlc_WP_Mk17IUR_Grip3
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_Mk17IUR_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_MK17IUR_grip3: hlc_WP_Mk17IUR
	{
		scopeArsenal=0;
		dexterity=1.5471935;
		aimTransitionSpeed=1.0830355;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handpose_VFG.rtm"
		};
		class nia_magSwitch
		{
			hlc_10Rnd_762x51_B_SCARH_tan="hlc_wp_Mk17IUR_10Rnd_grip3";
			hlc_10Rnd_762x51_mk316_SCARH_tan="hlc_wp_Mk17IUR_10Rnd_grip3";
			hlc_10Rnd_762x51_Barrier_SCARH_tan="hlc_wp_Mk17IUR_10Rnd_grip3";
			hlc_10Rnd_762x51_t_SCARH_tan="hlc_wp_Mk17IUR_10Rnd_grip3";
			hlc_10Rnd_762x51_TDim_SCARH_tan="hlc_wp_Mk17IUR_10Rnd_grip3";
			hlc_10Rnd_762x51_S_SCARH_tan="hlc_wp_Mk17IUR_10Rnd_grip3";
			hlc_10Rnd_762x51_B_SCARH="hlc_wp_Mk17IUR_10Rnd_grip3";
			hlc_10Rnd_762x51_mk316_SCARH="hlc_wp_Mk17IUR_10Rnd_grip3";
			hlc_10Rnd_762x51_Barrier_SCARH="hlc_wp_Mk17IUR_10Rnd_grip3";
			hlc_10Rnd_762x51_t_SCARH="hlc_wp_Mk17IUR_10Rnd_grip3";
			hlc_10Rnd_762x51_TDim_SCARH="hlc_wp_Mk17IUR_10Rnd_grip3";
			hlc_10Rnd_762x51_S_SCARH="hlc_wp_Mk17IUR_10Rnd_grip3";
			hlc_10Rnd_762x51_B_SCARH_camo="hlc_wp_Mk17IUR_10Rnd_grip3";
			hlc_10Rnd_762x51_mk316_SCARH_camo="hlc_wp_Mk17IUR_10Rnd_grip3";
			hlc_10Rnd_762x51_Barrier_SCARH_camo="hlc_wp_Mk17IUR_10Rnd_grip3";
			hlc_10Rnd_762x51_t_SCARH_camo="hlc_wp_Mk17IUR_10Rnd_grip3";
			hlc_10Rnd_762x51_TDim_SCARH_camo="hlc_wp_Mk17IUR_10Rnd_grip3";
			hlc_10Rnd_762x51_S_SCARH_camo="hlc_wp_Mk17IUR_10Rnd_grip3";
			default="hlc_wp_Mk17IUR_grip3";
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
			class hlc_WP_Mk17IUR_Grip3
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_Mk17IUR_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_Mk17IUR_10rnd: hlc_WP_Mk17IUR
	{
		scopeArsenal=0;
		reloadAction="NIA_GestureReload_Mk17_10rnd";
		baseweapon="hlc_wp_Mk17IUR_10rnd";
		class nia_gripSwitch
		{
			VFG="hlc_wp_Mk17IUR_10rnd_grip";
			AFG="hlc_wp_Mk17IUR_10rnd_grip2";
			VFG2="hlc_wp_Mk17IUR_10rnd_grip3";
			default="hlc_wp_Mk17IUR_10rnd";
		};
		rhs_grip1_change="hlc_wp_Mk17IUR_10rnd_grip";
		rhs_grip2_change="hlc_wp_Mk17IUR_10rnd_grip2";
		rhs_grip3_change="hlc_wp_Mk17IUR_10rnd_Grip3";
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
			class hlc_wp_Mk17IUR_10rnd
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_Mk17IUR_10rnd_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_Mk17IUR_10rnd_TacReload: hlc_wp_Mk17IUR_10rnd
	{
		magazineReloadSwitchPhase="(40 / 96)";
		scopeArsenal=0;
		reloadMagazineSound[]=
		{
			"\nia_wp_SCAR\snd\mk17_reload_Partial.ogg",
			0.85000002,
			1,
			25
		};
		reloadAction="NIA_GestureReload_Mk17_10rnd_Tactical";
		model="nia_wp_SCAR\mesh\Rifle\MK17IUR_TacReload.p3d";
		rhs_grip1_change="hlc_wp_Mk17IUR_10rnd_grip";
		rhs_grip2_change="hlc_wp_Mk17IUR_10rnd_grip2";
		rhs_grip3_change="hlc_wp_Mk17IUR_10rnd_grip3";
		class nia_gripSwitch
		{
			VFG="hlc_wp_Mk17IUR_10rnd_grip";
			AFG="hlc_wp_Mk17IUR_10rnd_grip2";
			VFG2="hlc_wp_Mk17IUR_10rnd_grip3";
			default="hlc_wp_Mk17IUR_10rnd_TacReload";
		};
	};
	class hlc_wp_Mk17IUR_10rnd_grip: hlc_wp_Mk17IUR_10rnd
	{
		scopeArsenal=0;
		dexterity=1.5471935;
		aimTransitionSpeed=1.0830355;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handpose_VFG.rtm"
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
			class hlc_wp_Mk17IUR_10rnd_grip
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_Mk17IUR_10rnd_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_Mk17IUR_10rnd_grip2: hlc_wp_Mk17IUR_10rnd
	{
		scopeArsenal=0;
		inertia="(0.358*0.85)";
		dexterity=1.5471935;
		aimTransitionSpeed=1.0830355;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handpose_AFG.rtm"
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
			class hlc_wp_Mk17IUR_10rnd_grip2
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_Mk17IUR_10rnd_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_Mk17IUR_10rnd_grip3: hlc_wp_Mk17IUR_10rnd
	{
		scopeArsenal=0;
		dexterity=1.5471935;
		aimTransitionSpeed=1.0830355;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handpose_VFG.rtm"
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
			class hlc_wp_Mk17IUR_10rnd_grip3
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_Mk17IUR_10rnd_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_MK17IUR_camo: hlc_WP_Mk17IUR
	{
		author="Toadie";
		dlc="Niarms_SCAR";
		displayName="$STR_NIA_rifle_MK17IUR_camo";
		scope=2;
		baseWeapon="hlc_wp_MK17IUR_camo";
		picture="\nia_wp_SCAR\tex\ui\hlc_wp_MK17IUR_camo_ca";
		hiddenSelectionsTextures[]=
		{
			"nia_wp_SCAR\tex\toadie_SCAR\scar_common_camo_co.paa",
			"nia_wp_SCAR\tex\toadie_SCAR\scar_lower_IUR_camo_co.paa",
			"nia_wp_SCAR\tex\toadie_SCAR\stock_camo_co.paa",
			"nia_wp_SCAR\tex\toadie_SCAR\upper_scarh_MK17_camo_co.paa"
		};
		HiddenSelectionsMaterials[]=
		{
			"nia_wp_SCAR\mat\scar_common_camo.rvmat",
			"nia_wp_SCAR\mat\scar_lowers_IUR_camo.rvmat",
			"nia_wp_SCAR\mat\scar_stock_camo.rvmat",
			"nia_wp_SCAR\mat\scar_upper_scarh_MK17_camo.rvmat"
		};
		class nia_magSwitch
		{
			hlc_10Rnd_762x51_B_SCARH_tan="hlc_wp_Mk17IUR_10rnd_Camo";
			hlc_10Rnd_762x51_mk316_SCARH_tan="hlc_wp_Mk17IUR_10rnd_Camo";
			hlc_10Rnd_762x51_Barrier_SCARH_tan="hlc_wp_Mk17IUR_10rnd_Camo";
			hlc_10Rnd_762x51_t_SCARH_tan="hlc_wp_Mk17IUR_10rnd_Camo";
			hlc_10Rnd_762x51_TDim_SCARH_tan="hlc_wp_Mk17IUR_10rnd_Camo";
			hlc_10Rnd_762x51_S_SCARH_tan="hlc_wp_Mk17IUR_10rnd_Camo";
			hlc_10Rnd_762x51_B_SCARH="hlc_wp_Mk17IUR_10rnd_Camo";
			hlc_10Rnd_762x51_mk316_SCARH="hlc_wp_Mk17IUR_10rnd_Camo";
			hlc_10Rnd_762x51_Barrier_SCARH="hlc_wp_Mk17IUR_10rnd_Camo";
			hlc_10Rnd_762x51_t_SCARH="hlc_wp_Mk17IUR_10rnd_Camo";
			hlc_10Rnd_762x51_TDim_SCARH="hlc_wp_Mk17IUR_10rnd_Camo";
			hlc_10Rnd_762x51_S_SCARH="hlc_wp_Mk17IUR_10rnd_Camo";
			hlc_10Rnd_762x51_B_SCARH_camo="hlc_wp_Mk17IUR_10rnd_Camo";
			hlc_10Rnd_762x51_mk316_SCARH_camo="hlc_wp_Mk17IUR_10rnd_Camo";
			hlc_10Rnd_762x51_Barrier_SCARH_camo="hlc_wp_Mk17IUR_10rnd_Camo";
			hlc_10Rnd_762x51_t_SCARH_camo="hlc_wp_Mk17IUR_10rnd_Camo";
			hlc_10Rnd_762x51_TDim_SCARH_camo="hlc_wp_Mk17IUR_10rnd_Camo";
			hlc_10Rnd_762x51_S_SCARH_camo="hlc_wp_Mk17IUR_10rnd_Camo";
			default="hlc_wp_Mk17IUR_Camo";
		};
		class nia_gripSwitch
		{
			VFG="hlc_wp_MK17IUR_camo_grip";
			AFG="hlc_wp_MK17IUR_camo_grip2";
			VFG2="hlc_wp_MK17IUR_camo_grip3";
			default="hlc_wp_MK17IUR_camo";
		};
		rhs_grip1_change="hlc_wp_MK17IUR_camo_grip";
		rhs_grip2_change="hlc_wp_MK17IUR_camo_grip2";
		rhs_grip3_change="hlc_wp_MK17IUR_camo_grip3";
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
			class hlc_WP_Mk17IUR_camo
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_Mk17IUR_camo_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_Mk17IUR_camo_TacReload: hlc_wp_MK17IUR_camo
	{
		magazineReloadSwitchPhase="(40 / 96)";
		scopeArsenal=0;
		reloadMagazineSound[]=
		{
			"\nia_wp_SCAR\snd\mk17_reload_Partial.ogg",
			0.85000002,
			1,
			25
		};
		reloadAction="NIA_GestureReload_Mk17_Tactical";
		model="nia_wp_SCAR\mesh\Rifle\MK17IUR_TacReload.p3d";
		rhs_grip1_change="hlc_wp_Mk17IUR_camo_grip";
		rhs_grip2_change="hlc_wp_Mk17IUR_camo_grip2";
		rhs_grip3_change="hlc_wp_Mk17IUR_camo_grip3";
		class nia_gripSwitch
		{
			VFG="hlc_wp_Mk17IUR_camo_grip";
			AFG="hlc_wp_Mk17IUR_camo_grip2";
			VFG2="hlc_wp_Mk1IUR7_camo_grip3";
			default="hlc_wp_Mk17IUR_camo_TacReload";
		};
	};
	class hlc_wp_MK17IUR_camo_grip: hlc_wp_MK17IUR_camo
	{
		scopeArsenal=0;
		dexterity=1.5471935;
		aimTransitionSpeed=1.0830355;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handpose_VFG.rtm"
		};
		class nia_magSwitch
		{
			hlc_10Rnd_762x51_B_SCARH_tan="hlc_wp_Mk17IUR_10Rnd_camo_grip";
			hlc_10Rnd_762x51_mk316_SCARH_tan="hlc_wp_Mk17IUR_10Rnd_camo_grip";
			hlc_10Rnd_762x51_Barrier_SCARH_tan="hlc_wp_Mk17IUR_10Rnd_camo_grip";
			hlc_10Rnd_762x51_t_SCARH_tan="hlc_wp_Mk17IUR_10Rnd_camo_grip";
			hlc_10Rnd_762x51_TDim_SCARH_tan="hlc_wp_Mk17IUR_10Rnd_camo_grip";
			hlc_10Rnd_762x51_S_SCARH_tan="hlc_wp_Mk17IUR_10Rnd_camo_grip";
			hlc_10Rnd_762x51_B_SCARH="hlc_wp_Mk17IUR_10Rnd_camo_grip";
			hlc_10Rnd_762x51_mk316_SCARH="hlc_wp_Mk17IUR_10Rnd_camo_grip";
			hlc_10Rnd_762x51_Barrier_SCARH="hlc_wp_Mk17IUR_10Rnd_camo_grip";
			hlc_10Rnd_762x51_t_SCARH="hlc_wp_Mk17IUR_10Rnd_camo_grip";
			hlc_10Rnd_762x51_TDim_SCARH="hlc_wp_Mk17IUR_10Rnd_camo_grip";
			hlc_10Rnd_762x51_S_SCARH="hlc_wp_Mk17IUR_10Rnd_camo_grip";
			hlc_10Rnd_762x51_B_SCARH_camo="hlc_wp_Mk17IUR_10Rnd_camo_grip";
			hlc_10Rnd_762x51_mk316_SCARH_camo="hlc_wp_Mk17IUR_10Rnd_camo_grip";
			hlc_10Rnd_762x51_Barrier_SCARH_camo="hlc_wp_Mk17IUR_10Rnd_camo_grip";
			hlc_10Rnd_762x51_t_SCARH_camo="hlc_wp_Mk17IUR_10Rnd_camo_grip";
			hlc_10Rnd_762x51_TDim_SCARH_camo="hlc_wp_Mk17IUR_10Rnd_camo_grip";
			hlc_10Rnd_762x51_S_SCARH_camo="hlc_wp_Mk17IUR_10Rnd_camo_grip";
			default="hlc_wp_Mk17IUR_camo_grip";
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
			class hlc_WP_Mk17IUR_camo_grip
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_Mk17IUR_camo_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_MK17IUR_camo_grip2: hlc_wp_MK17IUR_camo
	{
		scopeArsenal=0;
		inertia="(0.358*0.85)";
		dexterity=1.5471935;
		aimTransitionSpeed=1.0830355;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handpose_AFG.rtm"
		};
		class nia_magSwitch
		{
			hlc_10Rnd_762x51_B_SCARH_tan="hlc_wp_Mk17IUR_10Rnd_camo_grip2";
			hlc_10Rnd_762x51_mk316_SCARH_tan="hlc_wp_Mk17IUR_10Rnd_camo_grip2";
			hlc_10Rnd_762x51_Barrier_SCARH_tan="hlc_wp_Mk17IUR_10Rnd_camo_grip2";
			hlc_10Rnd_762x51_t_SCARH_tan="hlc_wp_Mk17IUR_10Rnd_camo_grip2";
			hlc_10Rnd_762x51_TDim_SCARH_tan="hlc_wp_Mk17IUR_10Rnd_camo_grip2";
			hlc_10Rnd_762x51_S_SCARH_tan="hlc_wp_Mk17IUR_10Rnd_camo_grip2";
			hlc_10Rnd_762x51_B_SCARH="hlc_wp_Mk17IUR_10Rnd_camo_grip2";
			hlc_10Rnd_762x51_mk316_SCARH="hlc_wp_Mk17IUR_10Rnd_camo_grip2";
			hlc_10Rnd_762x51_Barrier_SCARH="hlc_wp_Mk17IUR_10Rnd_camo_grip2";
			hlc_10Rnd_762x51_t_SCARH="hlc_wp_Mk17IUR_10Rnd_camo_grip2";
			hlc_10Rnd_762x51_TDim_SCARH="hlc_wp_Mk17IUR_10Rnd_camo_grip2";
			hlc_10Rnd_762x51_S_SCARH="hlc_wp_Mk17IUR_10Rnd_camo_grip2";
			hlc_10Rnd_762x51_B_SCARH_camo="hlc_wp_Mk17IUR_10Rnd_camo_grip2";
			hlc_10Rnd_762x51_mk316_SCARH_camo="hlc_wp_Mk17IUR_10Rnd_camo_grip2";
			hlc_10Rnd_762x51_Barrier_SCARH_camo="hlc_wp_Mk17IUR_10Rnd_camo_grip2";
			hlc_10Rnd_762x51_t_SCARH_camo="hlc_wp_Mk17IUR_10Rnd_camo_grip2";
			hlc_10Rnd_762x51_TDim_SCARH_camo="hlc_wp_Mk17IUR_10Rnd_camo_grip2";
			hlc_10Rnd_762x51_S_SCARH_camo="hlc_wp_Mk17IUR_10Rnd_camo_grip2";
			default="hlc_wp_Mk17IUR_camo_grip2";
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
			class hlc_WP_Mk17IUR_camo_grip2
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_Mk17IUR_camo_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_MK17IUR_camo_grip3: hlc_wp_MK17IUR_camo
	{
		scopeArsenal=0;
		dexterity=1.5471935;
		aimTransitionSpeed=1.0830355;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handpose_VFG.rtm"
		};
		class nia_magSwitch
		{
			hlc_10Rnd_762x51_B_SCARH_tan="hlc_wp_Mk17IUR_10Rnd_camo_grip3";
			hlc_10Rnd_762x51_mk316_SCARH_tan="hlc_wp_Mk17IUR_10Rnd_camo_grip3";
			hlc_10Rnd_762x51_Barrier_SCARH_tan="hlc_wp_Mk17IUR_10Rnd_camo_grip3";
			hlc_10Rnd_762x51_t_SCARH_tan="hlc_wp_Mk17IUR_10Rnd_camo_grip3";
			hlc_10Rnd_762x51_TDim_SCARH_tan="hlc_wp_Mk17IUR_10Rnd_camo_grip3";
			hlc_10Rnd_762x51_S_SCARH_tan="hlc_wp_Mk17IUR_10Rnd_camo_grip3";
			hlc_10Rnd_762x51_B_SCARH="hlc_wp_Mk17IUR_10Rnd_camo_grip3";
			hlc_10Rnd_762x51_mk316_SCARH="hlc_wp_Mk17IUR_10Rnd_camo_grip3";
			hlc_10Rnd_762x51_Barrier_SCARH="hlc_wp_Mk17IUR_10Rnd_camo_grip3";
			hlc_10Rnd_762x51_t_SCARH="hlc_wp_Mk17IUR_10Rnd_camo_grip3";
			hlc_10Rnd_762x51_TDim_SCARH="hlc_wp_Mk17IUR_10Rnd_camo_grip3";
			hlc_10Rnd_762x51_S_SCARH="hlc_wp_Mk17IUR_10Rnd_camo_grip3";
			hlc_10Rnd_762x51_B_SCARH_camo="hlc_wp_Mk17IUR_10Rnd_camo_grip3";
			hlc_10Rnd_762x51_mk316_SCARH_camo="hlc_wp_Mk17IUR_10Rnd_camo_grip3";
			hlc_10Rnd_762x51_Barrier_SCARH_camo="hlc_wp_Mk17IUR_10Rnd_camo_grip3";
			hlc_10Rnd_762x51_t_SCARH_camo="hlc_wp_Mk17IUR_10Rnd_camo_grip3";
			hlc_10Rnd_762x51_TDim_SCARH_camo="hlc_wp_Mk17IUR_10Rnd_camo_grip3";
			hlc_10Rnd_762x51_S_SCARH_camo="hlc_wp_Mk17IUR_10Rnd_camo_grip3";
			default="hlc_wp_Mk17IUR_camo_grip3";
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
			class hlc_WP_Mk17IUR_camo_grip3
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_Mk17IUR_camo_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_Mk17IUR_10rnd_Camo: hlc_wp_MK17IUR_camo
	{
		scopeArsenal=0;
		reloadAction="NIA_GestureReload_Mk17_10rnd";
		baseweapon="hlc_wp_Mk17IUR_10rnd_Camo";
		class nia_gripSwitch
		{
			VFG="hlc_wp_Mk17IUR_10rnd_Camo_grip";
			AFG="hlc_wp_Mk17IUR_10rnd_Camo_grip2";
			VFG2="hlc_wp_Mk17IUR_10rnd_Camo_grip3";
			default="hlc_wp_Mk17IUR_10rnd_Camo";
		};
		rhs_grip1_change="hlc_wp_Mk17IUR_10rnd_Camo_grip";
		rhs_grip2_change="hlc_wp_Mk17IUR_10rnd_Camo_grip2";
		rhs_grip3_change="hlc_wp_Mk17IUR_10rnd_Camo_grip3";
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
			class hlc_WP_Mk17IUR_10Rnd_camo
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_Mk17IUR_10Rnd_camo_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_Mk17IUR_10rnd_Camo_TacReload: hlc_wp_Mk17IUR_10rnd_Camo
	{
		magazineReloadSwitchPhase="(40 / 96)";
		scopeArsenal=0;
		reloadMagazineSound[]=
		{
			"\nia_wp_SCAR\snd\mk17_reload_Partial.ogg",
			0.85000002,
			1,
			25
		};
		reloadAction="NIA_GestureReload_Mk17_10rnd_Tactical";
		model="nia_wp_SCAR\mesh\Rifle\MK17IUR_TacReload.p3d";
		rhs_grip1_change="hlc_wp_Mk17IUR_10rnd_Camo_grip";
		rhs_grip2_change="hlc_wp_Mk17IUR_10rnd_Camo_grip2";
		rhs_grip3_change="hlc_wp_Mk17IUR_10rnd_Camo_grip3";
		class nia_gripSwitch
		{
			VFG="hlc_wp_Mk17IUR_10rnd_Camo_grip";
			AFG="hlc_wp_Mk17IUR_10rnd_Camo_grip2";
			VFG2="hlc_wp_Mk17IUR_10rnd_Camo_grip3";
			default="hlc_wp_Mk17IUR_10rnd_Camo_TacReload";
		};
	};
	class hlc_wp_Mk17IUR_10rnd_Camo_grip: hlc_wp_Mk17IUR_10rnd_Camo
	{
		scopeArsenal=0;
		dexterity=1.5471935;
		aimTransitionSpeed=1.0830355;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handpose_VFG.rtm"
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
			class hlc_WP_Mk17IUR_10Rnd_camo_grip
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_Mk17IUR_10Rnd_camo_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_Mk17IUR_10rnd_Camo_grip2: hlc_wp_Mk17IUR_10rnd_Camo
	{
		scopeArsenal=0;
		inertia="(0.358*0.85)";
		dexterity=1.5471935;
		aimTransitionSpeed=1.0830355;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handpose_AFG.rtm"
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
			class hlc_WP_Mk17IUR_10Rnd_camo_grip2
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_Mk17IUR_10Rnd_camo_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_Mk17IUR_10rnd_Camo_grip3: hlc_wp_Mk17IUR_10rnd_Camo
	{
		scopeArsenal=0;
		dexterity=1.5471935;
		aimTransitionSpeed=1.0830355;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handpose_VFG.rtm"
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
			class hlc_WP_Mk17IUR_10Rnd_camo_grip3
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_Mk17IUR_10Rnd_camo_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_MK17IUR_AGC: hlc_WP_Mk17IUR
	{
		author="Toadie";
		dlc="Niarms_SCAR";
		displayName="$STR_NIA_rifle_MK17IUR_AGC";
		scope=2;
		muzzles[]=
		{
			"this",
			"hlc_GL_SCAR_AGC"
		};
		baseWeapon="hlc_wp_MK17IUR_AGC";
		mass=110.744;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=110.744;
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
				class compatibleItems: compatibleItems
				{
					HLC_Panel_Side_SCAR_FN5cm_Desert=1;
					HLC_Panel_Side_SCAR_2xFN5cm_Desert=1;
					HLC_Panel_Side_SCAR_FN10cm_Desert=1;
					HLC_Panel_Side_SCAR_Ladder_S_Desert=1;
					HLC_Panel_Side_SCAR_Ladder_M_Desert=1;
					HLC_Panel_Side_SCAR_MagpulXT_Desert=1;
					HLC_Panel_Side_SCAR_XTME_Desert=1;
					HLC_Panel_Side_SCAR_2xXTME_Desert=1;
					HLC_Panel_Side_SCAR_FN5cm_Black=1;
					HLC_Panel_Side_SCAR_2xFN5cm_Black=1;
					HLC_Panel_Side_SCAR_FN10cm_Black=1;
					HLC_Panel_Side_SCAR_Ladder_S_Black=1;
					HLC_Panel_Side_SCAR_Ladder_M_Black=1;
					HLC_Panel_Side_SCAR_MagpulXT_Black=1;
					HLC_Panel_Side_SCAR_XTME_Black=1;
					HLC_Panel_Side_SCAR_2xXTME_Black=1;
					HLC_Panel_Side_SCAR_FN5cm_OD=1;
					HLC_Panel_Side_SCAR_2xFN5cm_OD=1;
					HLC_Panel_Side_SCAR_FN10cm_OD=1;
					HLC_Panel_Side_SCAR_Ladder_S_OD=1;
					HLC_Panel_Side_SCAR_Ladder_M_OD=1;
					HLC_Panel_Side_SCAR_MagpulXT_OD=1;
					HLC_Panel_Side_SCAR_XTME_OD=1;
					HLC_Panel_Side_SCAR_2xXTME_OD=1;
					HLC_Panel_Side_SCAR_FN5cm_RG=1;
					HLC_Panel_Side_SCAR_2xFN5cm_RG=1;
					HLC_Panel_Side_SCAR_FN10cm_RG=1;
					HLC_Panel_Side_SCAR_Ladder_S_RG=1;
					HLC_Panel_Side_SCAR_Ladder_M_RG=1;
					HLC_Panel_Side_SCAR_MagpulXT_RG=1;
					HLC_Panel_Side_SCAR_XTME_RG=1;
					HLC_Panel_Side_SCAR_2xXTME_RG=1;
					HLC_Panel_Side_SCAR_Ladder_S_Pride=1;
					HLC_Panel_Side_SCAR_Ladder_M_Pride=1;
					HLC_Panel_Side_SCAR_MagpulXT_Pride=1;
				};
			};
			class MuzzleSlot: asdg_MuzzleSlot_762
			{
				iconPosition[]={0,0};
				iconScale=1;
				iconPicture="\A3\Weapons_F\Data\clear_empty.paa";
				iconPinPoint="Left";
			};
			class UnderBarrelSlot
			{
				iconPosition[]={0,0};
				iconScale=1;
				iconPicture="\A3\Weapons_F\Data\clear_empty.paa";
				iconPinPoint="Left";
			};
			class GripodSlot
			{
				iconPosition[]={0,0};
				iconScale=1;
				iconPicture="\A3\Weapons_F\Data\clear_empty.paa";
				iconPinPoint="Left";
			};
		};
		inertia="(0.358 + 0.15)";
		dexterity=1.1380438;
		aimTransitionSpeed=0.79663062;
		model="nia_wp_SCAR\mesh\rifle\MK17IUR_AGC.p3d";
		picture="\nia_wp_SCAR\tex\ui\hlc_wp_MK17IUR_AGC_ca";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handpose_AGC.rtm"
		};
		UiPicture="\A3\weapons_f\data\UI\icon_regular_CA.paa";
		class nia_magSwitch
		{
			hlc_10Rnd_762x51_B_SCARH_tan="hlc_wp_Mk17IUR_10rnd_AGC";
			hlc_10Rnd_762x51_mk316_SCARH_tan="hlc_wp_Mk17IUR_10rnd_AGC";
			hlc_10Rnd_762x51_Barrier_SCARH_tan="hlc_wp_Mk17IUR_10rnd_AGC";
			hlc_10Rnd_762x51_t_SCARH_tan="hlc_wp_Mk17IUR_10rnd_AGC";
			hlc_10Rnd_762x51_TDim_SCARH_tan="hlc_wp_Mk17IUR_10rnd_AGC";
			hlc_10Rnd_762x51_S_SCARH_tan="hlc_wp_Mk17IUR_10rnd_AGC";
			hlc_10Rnd_762x51_B_SCARH="hlc_wp_Mk17IUR_10rnd_AGC";
			hlc_10Rnd_762x51_mk316_SCARH="hlc_wp_Mk17IUR_10rnd_AGC";
			hlc_10Rnd_762x51_Barrier_SCARH="hlc_wp_Mk17IUR_10rnd_AGC";
			hlc_10Rnd_762x51_t_SCARH="hlc_wp_Mk17IUR_10rnd_AGC";
			hlc_10Rnd_762x51_TDim_SCARH="hlc_wp_Mk17IUR_10rnd_AGC";
			hlc_10Rnd_762x51_S_SCARH="hlc_wp_Mk17IUR_10rnd_AGC";
			hlc_10Rnd_762x51_B_SCARH_camo="hlc_wp_Mk17IUR_10rnd_AGC";
			hlc_10Rnd_762x51_mk316_SCARH_camo="hlc_wp_Mk17IUR_10rnd_AGC";
			hlc_10Rnd_762x51_Barrier_SCARH_camo="hlc_wp_Mk17IUR_10rnd_AGC";
			hlc_10Rnd_762x51_t_SCARH_camo="hlc_wp_Mk17IUR_10rnd_AGC";
			hlc_10Rnd_762x51_TDim_SCARH_camo="hlc_wp_Mk17IUR_10rnd_AGC";
			hlc_10Rnd_762x51_S_SCARH_camo="hlc_wp_Mk17IUR_10rnd_AGC";
			default="hlc_wp_MK17IUR_AGC";
		};
		class nia_gripSwitch
		{
			VFG="hlc_wp_MK17IUR_AGC";
			AFG="hlc_wp_MK17IUR_AGC";
			VFG2="hlc_wp_MK17IUR_AGC";
			default="hlc_wp_MK17IUR_AGC";
		};
		rhs_grip1_change="hlc_wp_MK17IUR_AGC";
		rhs_grip2_change="hlc_wp_MK17IUR_AGC";
		rhs_grip3_change="hlc_wp_MK17IUR_AGC";
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
			class hlc_wp_MK17IUR_AGC
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_MK17IUR_AGC_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_MK17IUR_AGC_TacReload: hlc_wp_MK17IUR_AGC
	{
		magazineReloadSwitchPhase="(40 / 96)";
		scopeArsenal=0;
		reloadMagazineSound[]=
		{
			"\nia_wp_SCAR\snd\mk17_reload_Partial.ogg",
			0.85000002,
			1,
			25
		};
		reloadAction="NIA_GestureReload_Mk17_Tactical";
		model="nia_wp_SCAR\mesh\Rifle\MK17IUR_AGC_TacReload.p3d";
	};
	class hlc_wp_Mk17IUR_10rnd_AGC: hlc_wp_MK17IUR_AGC
	{
		scopeArsenal=0;
		reloadAction="NIA_GestureReload_Mk17_10rnd";
		baseweapon="hlc_wp_Mk17IUR_10rnd_AGC";
		class nia_gripSwitch
		{
			VFG="hlc_wp_Mk17IUR_10rnd_AGC";
			AFG="hlc_wp_Mk17IUR_10rnd_AGC";
			VFG2="hlc_wp_Mk17IUR_10rnd_AGC";
			default="hlc_wp_Mk17IUR_10rnd_AGC";
		};
		rhs_grip1_change="hlc_wp_Mk17IUR_10rnd_AGC";
		rhs_grip2_change="hlc_wp_Mk17IUR_10rnd_AGC";
		rhs_grip3_change="hlc_wp_Mk17IUR_10rnd_AGC";
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
			class hlc_wp_Mk17IUR_10rnd_AGC
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_Mk17IUR_10rnd_AGC_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_Mk17IUR_10rnd_AGC_TacReload: hlc_wp_Mk17IUR_10rnd_AGC
	{
		magazineReloadSwitchPhase="(40 / 96)";
		scopeArsenal=0;
		reloadMagazineSound[]=
		{
			"\nia_wp_SCAR\snd\mk17_reload_Partial.ogg",
			0.85000002,
			1,
			25
		};
		reloadAction="NIA_GestureReload_Mk17_10rnd_Tactical";
		model="nia_wp_SCAR\mesh\Rifle\MK17IUR_AGC_TacReload.p3d";
	};
	class hlc_wp_MK17IUR_AGC_camo: hlc_wp_MK17IUR_camo
	{
		author="Toadie";
		dlc="Niarms_SCAR";
		displayName="$STR_NIA_rifle_MK17IUR_AGC_camo";
		scope=2;
		muzzles[]=
		{
			"this",
			"hlc_GL_SCAR_AGC"
		};
		baseWeapon="hlc_wp_MK17IUR_AGC_camo";
		mass=110.744;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=110.744;
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
				class compatibleItems: compatibleItems
				{
					HLC_Panel_Side_SCAR_FN5cm_Desert=1;
					HLC_Panel_Side_SCAR_2xFN5cm_Desert=1;
					HLC_Panel_Side_SCAR_FN10cm_Desert=1;
					HLC_Panel_Side_SCAR_Ladder_S_Desert=1;
					HLC_Panel_Side_SCAR_Ladder_M_Desert=1;
					HLC_Panel_Side_SCAR_MagpulXT_Desert=1;
					HLC_Panel_Side_SCAR_XTME_Desert=1;
					HLC_Panel_Side_SCAR_2xXTME_Desert=1;
					HLC_Panel_Side_SCAR_FN5cm_Black=1;
					HLC_Panel_Side_SCAR_2xFN5cm_Black=1;
					HLC_Panel_Side_SCAR_FN10cm_Black=1;
					HLC_Panel_Side_SCAR_Ladder_S_Black=1;
					HLC_Panel_Side_SCAR_Ladder_M_Black=1;
					HLC_Panel_Side_SCAR_MagpulXT_Black=1;
					HLC_Panel_Side_SCAR_XTME_Black=1;
					HLC_Panel_Side_SCAR_2xXTME_Black=1;
					HLC_Panel_Side_SCAR_FN5cm_OD=1;
					HLC_Panel_Side_SCAR_2xFN5cm_OD=1;
					HLC_Panel_Side_SCAR_FN10cm_OD=1;
					HLC_Panel_Side_SCAR_Ladder_S_OD=1;
					HLC_Panel_Side_SCAR_Ladder_M_OD=1;
					HLC_Panel_Side_SCAR_MagpulXT_OD=1;
					HLC_Panel_Side_SCAR_XTME_OD=1;
					HLC_Panel_Side_SCAR_2xXTME_OD=1;
					HLC_Panel_Side_SCAR_FN5cm_RG=1;
					HLC_Panel_Side_SCAR_2xFN5cm_RG=1;
					HLC_Panel_Side_SCAR_FN10cm_RG=1;
					HLC_Panel_Side_SCAR_Ladder_S_RG=1;
					HLC_Panel_Side_SCAR_Ladder_M_RG=1;
					HLC_Panel_Side_SCAR_MagpulXT_RG=1;
					HLC_Panel_Side_SCAR_XTME_RG=1;
					HLC_Panel_Side_SCAR_2xXTME_RG=1;
					HLC_Panel_Side_SCAR_Ladder_S_Pride=1;
					HLC_Panel_Side_SCAR_Ladder_M_Pride=1;
					HLC_Panel_Side_SCAR_MagpulXT_Pride=1;
				};
			};
			class MuzzleSlot: asdg_MuzzleSlot_762
			{
				iconPosition[]={0,0};
				iconScale=1;
				iconPicture="\A3\Weapons_F\Data\clear_empty.paa";
				iconPinPoint="Left";
			};
			class UnderBarrelSlot
			{
				iconPosition[]={0,0};
				iconScale=1;
				iconPicture="\A3\Weapons_F\Data\clear_empty.paa";
				iconPinPoint="Left";
			};
			class GripodSlot
			{
				iconPosition[]={0,0};
				iconScale=1;
				iconPicture="\A3\Weapons_F\Data\clear_empty.paa";
				iconPinPoint="Left";
			};
		};
		inertia="(0.358 + 0.15)";
		dexterity=1.1380438;
		aimTransitionSpeed=0.79663062;
		model="nia_wp_SCAR\mesh\rifle\MK17IUR_AGC.p3d";
		picture="\nia_wp_SCAR\tex\ui\hlc_wp_MK17IUR_AGC_camo_ca";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handpose_AGC.rtm"
		};
		UiPicture="\A3\weapons_f\data\UI\icon_regular_CA.paa";
		class nia_magSwitch
		{
			hlc_10Rnd_762x51_B_SCARH_tan="hlc_wp_Mk17IUR_10rnd_AGC_camo";
			hlc_10Rnd_762x51_mk316_SCARH_tan="hlc_wp_Mk17IUR_10rnd_AGC_camo";
			hlc_10Rnd_762x51_Barrier_SCARH_tan="hlc_wp_Mk17IUR_10rnd_AGC_camo";
			hlc_10Rnd_762x51_t_SCARH_tan="hlc_wp_Mk17IUR_10rnd_AGC_camo";
			hlc_10Rnd_762x51_TDim_SCARH_tan="hlc_wp_Mk17IUR_10rnd_AGC_camo";
			hlc_10Rnd_762x51_S_SCARH_tan="hlc_wp_Mk17IUR_10rnd_AGC_camo";
			hlc_10Rnd_762x51_B_SCARH="hlc_wp_Mk17IUR_10rnd_AGC_camo";
			hlc_10Rnd_762x51_mk316_SCARH="hlc_wp_Mk17IUR_10rnd_AGC_camo";
			hlc_10Rnd_762x51_Barrier_SCARH="hlc_wp_Mk17IUR_10rnd_AGC_camo";
			hlc_10Rnd_762x51_t_SCARH="hlc_wp_Mk17IUR_10rnd_AGC_camo";
			hlc_10Rnd_762x51_TDim_SCARH="hlc_wp_Mk17IUR_10rnd_AGC_camo";
			hlc_10Rnd_762x51_S_SCARH="hlc_wp_Mk17IUR_10rnd_AGC_camo";
			hlc_10Rnd_762x51_B_SCARH_camo="hlc_wp_Mk17IUR_10rnd_AGC_camo";
			hlc_10Rnd_762x51_mk316_SCARH_camo="hlc_wp_Mk17IUR_10rnd_AGC_camo";
			hlc_10Rnd_762x51_Barrier_SCARH_camo="hlc_wp_Mk17IUR_10rnd_AGC_camo";
			hlc_10Rnd_762x51_t_SCARH_camo="hlc_wp_Mk17IUR_10rnd_AGC_camo";
			hlc_10Rnd_762x51_TDim_SCARH_camo="hlc_wp_Mk17IUR_10rnd_AGC_camo";
			hlc_10Rnd_762x51_S_SCARH_camo="hlc_wp_Mk17IUR_10rnd_AGC_camo";
			default="hlc_wp_MK17IUR_AGC_camo";
		};
		class nia_gripSwitch
		{
			VFG="hlc_wp_MK17IUR_AGC_camo";
			AFG="hlc_wp_MK17IUR_AGC_camo";
			VFG2="hlc_wp_MK17IUR_AGC_camo";
			default="hlc_wp_MK17IUR_AGC_camo";
		};
		rhs_grip1_change="hlc_wp_MK17IUR_AGC_camo";
		rhs_grip2_change="hlc_wp_MK17IUR_AGC_camo";
		rhs_grip3_change="hlc_wp_MK17IUR_AGC_camo";
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
			class hlc_wp_MK17IUR_AGC_camo
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_MK17IUR_AGC_camo_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_MK17IUR_AGC_camo_TacReload: hlc_wp_MK17IUR_AGC_camo
	{
		magazineReloadSwitchPhase="(40 / 96)";
		scopeArsenal=0;
		reloadMagazineSound[]=
		{
			"\nia_wp_SCAR\snd\mk17_reload_Partial.ogg",
			0.85000002,
			1,
			25
		};
		reloadAction="NIA_GestureReload_Mk17_Tactical";
		model="nia_wp_SCAR\mesh\Rifle\MK17IUR_AGC_TacReload.p3d";
	};
	class hlc_wp_Mk17IUR_10rnd_AGC_camo: hlc_wp_MK17IUR_AGC_camo
	{
		scopeArsenal=0;
		reloadAction="NIA_GestureReload_Mk17_10rnd";
		baseweapon="hlc_wp_Mk17IUR_10rnd_AGC_camo";
		class nia_gripSwitch
		{
			VFG="hlc_wp_Mk17IUR_10rnd_AGC_camo";
			AFG="hlc_wp_Mk17IUR_10rnd_AGC_camo";
			VFG2="hlc_wp_Mk17IUR_10rnd_AGC_camo";
			default="hlc_wp_Mk17IUR_10rnd_AGC_camo";
		};
		rhs_grip1_change="hlc_wp_Mk17IUR_10rnd_AGC_camo";
		rhs_grip2_change="hlc_wp_Mk17IUR_10rnd_AGC_camo";
		rhs_grip3_change="hlc_wp_Mk17IUR_10rnd_AGC_camo";
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
			class hlc_wp_Mk17IUR_10rnd_AGC_camo
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_Mk17IUR_10rnd_AGC_camo_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_Mk17IUR_10rnd_AGC_camo_TacReload: hlc_wp_Mk17IUR_10rnd_AGC_camo
	{
		magazineReloadSwitchPhase="(40 / 96)";
		scopeArsenal=0;
		reloadMagazineSound[]=
		{
			"\nia_wp_SCAR\snd\mk17_reload_Partial.ogg",
			0.85000002,
			1,
			25
		};
		reloadAction="NIA_GestureReload_Mk17_10rnd_Tactical";
		model="nia_wp_SCAR\mesh\Rifle\MK17IUR_AGC_TacReload.p3d";
	};
	class hlc_wp_MK17IUR_556: hlc_SCARL_Base
	{
		author="Toadie";
		dlc="Niarms_SCAR";
		displayName="$STR_NIA_rifle_MK17IUR_556";
		descriptionShort="$STR_NIA_SCARL_Carbine_DESC";
		scope=2;
		ACE_barrelTwist=177.8;
		ACE_barrelLength=355;
		ACE_railHeightAboveBore=3.8;
		discretedistance[]={200,300,400,500,600};
		discretedistanceinitindex=0;
		discreteDistanceCameraPoint[]=
		{
			"eye",
			"eye_300",
			"eye_400",
			"eye_500",
			"eye_600"
		};
		cameraDir="eye_look";
		baseWeapon="hlc_wp_MK17IUR_556";
		mass=74.882996;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=74.882996;
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
				class compatibleItems: compatibleItems
				{
					HLC_Panel_Side_SCAR_FN5cm_Desert=1;
					HLC_Panel_Side_SCAR_2xFN5cm_Desert=1;
					HLC_Panel_Side_SCAR_FN10cm_Desert=1;
					HLC_Panel_Side_SCAR_Ladder_S_Desert=1;
					HLC_Panel_Side_SCAR_Ladder_M_Desert=1;
					HLC_Panel_Side_SCAR_MagpulXT_Desert=1;
					HLC_Panel_Side_SCAR_XTME_Desert=1;
					HLC_Panel_Side_SCAR_2xXTME_Desert=1;
					HLC_Panel_Side_SCAR_FN5cm_Black=1;
					HLC_Panel_Side_SCAR_2xFN5cm_Black=1;
					HLC_Panel_Side_SCAR_FN10cm_Black=1;
					HLC_Panel_Side_SCAR_Ladder_S_Black=1;
					HLC_Panel_Side_SCAR_Ladder_M_Black=1;
					HLC_Panel_Side_SCAR_MagpulXT_Black=1;
					HLC_Panel_Side_SCAR_XTME_Black=1;
					HLC_Panel_Side_SCAR_2xXTME_Black=1;
					HLC_Panel_Side_SCAR_FN5cm_OD=1;
					HLC_Panel_Side_SCAR_2xFN5cm_OD=1;
					HLC_Panel_Side_SCAR_FN10cm_OD=1;
					HLC_Panel_Side_SCAR_FN15cm_OD=1;
					HLC_Panel_Side_SCAR_Ladder_S_OD=1;
					HLC_Panel_Side_SCAR_Ladder_M_OD=1;
					HLC_Panel_Side_SCAR_MagpulXT_OD=1;
					HLC_Panel_Side_SCAR_XTME_OD=1;
					HLC_Panel_Side_SCAR_2xXTME_OD=1;
					HLC_Panel_Side_SCAR_FN5cm_RG=1;
					HLC_Panel_Side_SCAR_2xFN5cm_RG=1;
					HLC_Panel_Side_SCAR_FN10cm_RG=1;
					HLC_Panel_Side_SCAR_Ladder_S_RG=1;
					HLC_Panel_Side_SCAR_Ladder_M_RG=1;
					HLC_Panel_Side_SCAR_MagpulXT_RG=1;
					HLC_Panel_Side_SCAR_XTME_RG=1;
					HLC_Panel_Side_SCAR_2xXTME_RG=1;
					HLC_Panel_Side_SCAR_4xXTME_RG=1;
					HLC_Panel_Side_SCAR_Ladder_S_Pride=1;
					HLC_Panel_Side_SCAR_Ladder_M_Pride=1;
					HLC_Panel_Side_SCAR_MagpulXT_Pride=1;
				};
			};
			class MuzzleSlot: asdg_MuzzleSlot_556
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
		inertia=0.34349999;
		dexterity=1.5212438;
		aimTransitionSpeed=1.0648706;
		class LinkedItems
		{
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="hlc_muzzle_OEMDevice_556";
			};
		};
		model="nia_wp_SCAR\mesh\rifle\MK17IUR_556.p3d";
		picture="\nia_wp_SCAR\tex\ui\hlc_wp_MK17IUR_556_ca";
		UiPicture="\A3\weapons_f\data\UI\icon_regular_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"nia_wp_SCAR\tex\toadie_SCAR\scar_common_tan_co.paa",
			"nia_wp_SCAR\tex\toadie_SCAR\scar_lower_IUR_co.paa",
			"nia_wp_SCAR\tex\toadie_SCAR\stock_tan_co.paa",
			"nia_wp_SCAR\tex\toadie_SCAR\upper_scarh_mk17_co.paa"
		};
		HiddenSelectionsMaterials[]=
		{
			"nia_wp_SCAR\mat\scar_common.rvmat",
			"nia_wp_SCAR\mat\SCAR_Lowers_iur.rvmat",
			"nia_wp_SCAR\mat\scar_stock.rvmat",
			"nia_wp_SCAR\mat\scar_upper_scarh_mk17.rvmat"
		};
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handpose_STD.rtm"
		};
		reloadAction="NIA_GestureReload_Mk16";
		reloadMagazineSound[]=
		{
			"nia_wp_SCAR\snd\mk16_reload_short.ogg",
			0.80000001,
			1,
			25
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
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"NIA_SCARL_NEW_Shot_SoundSet",
					"NIA_SCARL_tail_SoundSet"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"NIA_SCARL_silencerShot_SoundSet",
					"NIA_SCARL_silencerTail_SoundSet"
				};
			};
			dispersion=0.00049162103;
			reloadtime="(60/600)";
			aiRateOfFire=1;
			aiRateOfFireDistance=350;
			aiRateOfFireDispersion=2;
			minRange=20;
			minRangeProbab=0.69999999;
			midRange=150;
			midRangeProbab=0.5;
			maxRange=500;
			maxRangeProbab=0.1;
		};
		class Burst: Mode_Burst
		{
			sounds[]=
			{
				"StandardSound",
				"SilencedSound"
			};
			class BaseSoundModeType
			{
				weaponSoundEffect="DefaultRifle";
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"NIA_SCARL_NEW_Shot_SoundSet",
					"NIA_SCARL_tail_SoundSet"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"NIA_SCARL_silencerShot_SoundSet",
					"NIA_SCARL_silencerTail_SoundSet"
				};
			};
			dispersion=0.00059634499;
			reloadtime="(60/600)";
			aiRateOfFire=1;
			aiRateOfFireDistance=100;
			aiRateOfFireDispersion=1;
			minRange=0;
			minRangeProbab=0.2;
			midRange=20;
			midRangeProbab=0.80000001;
			maxRange=40;
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
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"NIA_SCARL_NEW_Shot_SoundSet",
					"NIA_SCARL_tail_SoundSet"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"NIA_SCARL_silencerShot_SoundSet",
					"NIA_SCARL_silencerTail_SoundSet"
				};
			};
			dispersion=0.00062543503;
			reloadtime="(60/600)";
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
		class nia_magSwitch
		{
			hlc_50rnd_556x45_EPR="hlc_wp_MK17IUR_556_x15";
			hlc_50rnd_556x45_SOST="hlc_wp_MK17IUR_556_x15";
			hlc_50rnd_556x45_SPR="hlc_wp_MK17IUR_556_x15";
			hlc_50rnd_556x45_M="hlc_wp_MK17IUR_556_x15";
			hlc_50rnd_556x45_MDim="hlc_wp_MK17IUR_556_x15";
			default="hlc_wp_MK17IUR_556";
		};
		class nia_gripSwitch
		{
			VFG="hlc_wp_MK17IUR_556_grip";
			AFG="hlc_wp_MK17IUR_556_grip2";
			VFG2="hlc_wp_MK17IUR_556_grip3";
			default="hlc_wp_MK17IUR_556";
		};
		rhs_grip1_change="hlc_wp_MK17IUR_556_grip";
		rhs_grip2_change="hlc_wp_MK17IUR_556_grip2";
		rhs_grip3_change="hlc_wp_MK17IUR_556_grip3";
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
			class hlc_wp_MK17IUR_556
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_Mk17IUR_556_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_Mk17IUR_556_TacReload: hlc_wp_MK17IUR_556
	{
		magazineReloadSwitchPhase="(40 / 96)";
		scopeArsenal=0;
		reloadMagazineSound[]=
		{
			"\nia_wp_SCAR\snd\mk16_reload_partial.ogg",
			0.85000002,
			1,
			25
		};
		reloadAction="NIA_GestureReload_Mk16_Tactical";
		model="nia_wp_SCAR\mesh\Rifle\MK17IUR_556_TacReload.p3d";
		rhs_grip1_change="hlc_wp_MK17IUR_556_grip";
		rhs_grip2_change="hlc_wp_MK17IUR_556_grip2";
		rhs_grip3_change="hlc_wp_MK17IUR_556_grip3";
		class nia_gripSwitch
		{
			VFG="hlc_wp_MK17IUR_556_grip";
			AFG="hlc_wp_MK17IUR_556_grip2";
			VFG2="hlc_wp_MK17IUR_556_grip3";
			default="hlc_wp_Mk17IUR_556_TacReload";
		};
	};
	class hlc_wp_MK17IUR_556_grip: hlc_wp_MK17IUR_556
	{
		scopeArsenal=0;
		dexterity=1.6212438;
		aimTransitionSpeed=1.1348706;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handpose_VFG.rtm"
		};
		class nia_magSwitch
		{
			hlc_50rnd_556x45_EPR="hlc_wp_MK17IUR_556_x15_grip";
			hlc_50rnd_556x45_SOST="hlc_wp_MK17IUR_556_x15_grip";
			hlc_50rnd_556x45_SPR="hlc_wp_MK17IUR_556_x15_grip";
			hlc_50rnd_556x45_M="hlc_wp_MK17IUR_556_x15_grip";
			hlc_50rnd_556x45_MDim="hlc_wp_MK17IUR_556_x15_grip";
			default="hlc_wp_MK17IUR_556_grip";
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
			class hlc_wp_MK17IUR_556_grip
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_Mk17IUR_556_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_MK17IUR_556_grip2: hlc_wp_MK17IUR_556
	{
		scopeArsenal=0;
		inertia="(0.3435*0.85)";
		dexterity=1.6212438;
		aimTransitionSpeed=1.1348706;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handpose_AFG.rtm"
		};
		class nia_magSwitch
		{
			hlc_50rnd_556x45_EPR="hlc_wp_MK17IUR_556_x15_grip2";
			hlc_50rnd_556x45_SOST="hlc_wp_MK17IUR_556_x15_grip2";
			hlc_50rnd_556x45_SPR="hlc_wp_MK17IUR_556_x15_grip2";
			hlc_50rnd_556x45_M="hlc_wp_MK17IUR_556_x15_grip2";
			hlc_50rnd_556x45_MDim="hlc_wp_MK17IUR_556_x15_grip2";
			default="hlc_wp_MK17IUR_556_grip2";
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
			class hlc_wp_MK17IUR_556_grip2
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_Mk17IUR_556_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_MK17IUR_556_grip3: hlc_wp_MK17IUR_556
	{
		scopeArsenal=0;
		dexterity=1.6212438;
		aimTransitionSpeed=1.1348706;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handpose_VFG.rtm"
		};
		class nia_magSwitch
		{
			hlc_50rnd_556x45_EPR="hlc_wp_MK17IUR_556_x15_grip3";
			hlc_50rnd_556x45_SOST="hlc_wp_MK17IUR_556_x15_grip3";
			hlc_50rnd_556x45_SPR="hlc_wp_MK17IUR_556_x15_grip3";
			hlc_50rnd_556x45_M="hlc_wp_MK17IUR_556_x15_grip3";
			hlc_50rnd_556x45_MDim="hlc_wp_MK17IUR_556_x15_grip3";
			default="hlc_wp_MK17IUR_556_grip3";
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
			class hlc_wp_MK17IUR_556_grip3
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_Mk17IUR_556_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_MK17IUR_556_x15: hlc_wp_MK17IUR_556
	{
		scopeArsenal=0;
		reloadAction="NIA_GestureReload_Mk16_X15";
		baseweapon="hlc_wp_MK17IUR_556_x15";
		reloadMagazineSound[]=
		{
			"nia_wp_SCAR\snd\mk16_reload_X15_short.ogg",
			0.80000001,
			1,
			25
		};
		class nia_gripSwitch
		{
			VFG="hlc_wp_MK17IUR_556_x15_grip";
			AFG="hlc_wp_MK17IUR_556_x15_grip2";
			VFG2="hlc_wp_MK17IUR_556_x15_grip3";
			default="hlc_wp_MK17IUR_556_x15";
		};
		rhs_grip1_change="hlc_wp_MK17IUR_556_x15_grip";
		rhs_grip2_change="hlc_wp_MK17IUR_556_x15_grip2";
		rhs_grip3_change="hlc_wp_MK17IUR_556_x15_grip3";
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
			class hlc_wp_MK17IUR_556_x15
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_Mk17IUR_556_x15_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_Mk17IUR_556_x15_TacReload: hlc_wp_MK17IUR_556_x15
	{
		magazineReloadSwitchPhase="(40 / 96)";
		scopeArsenal=0;
		reloadMagazineSound[]=
		{
			"\nia_wp_SCAR\snd\mk16_reload_X15_partial.ogg",
			0.85000002,
			1,
			25
		};
		reloadAction="NIA_GestureReload_Mk16_X15_Tactical";
		model="nia_wp_SCAR\mesh\Rifle\MK17IUR_556_TacReload.p3d";
		rhs_grip1_change="hlc_wp_MK17IUR_556_x15_grip";
		rhs_grip2_change="hlc_wp_MK17IUR_556_x15_grip2";
		rhs_grip3_change="hlc_wp_MK17IUR_556_x15_grip3";
		class nia_gripSwitch
		{
			VFG="hlc_wp_MK17IUR_556_x15_grip";
			AFG="hlc_wp_MK17IUR_556_x15_grip2";
			VFG2="hlc_wp_MK17IUR_556_x15_grip3";
			default="hlc_wp_Mk17IUR_556_x15_TacReload";
		};
	};
	class hlc_wp_MK17IUR_556_x15_grip: hlc_wp_MK17IUR_556_x15
	{
		scopeArsenal=0;
		dexterity=1.6212438;
		aimTransitionSpeed=1.1348706;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handpose_VFG.rtm"
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
			class hlc_wp_MK17IUR_556_x15_grip
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_Mk17IUR_556_x15_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_MK17IUR_556_x15_grip2: hlc_wp_MK17IUR_556_x15
	{
		scopeArsenal=0;
		inertia="(0.3435*0.85)";
		dexterity=1.6212438;
		aimTransitionSpeed=1.1348706;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handpose_AFG.rtm"
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
			class hlc_wp_MK17IUR_556_x15_grip2
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_Mk17IUR_556_x15_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_MK17IUR_556_x15_grip3: hlc_wp_MK17IUR_556_x15
	{
		scopeArsenal=0;
		dexterity=1.6212438;
		aimTransitionSpeed=1.1348706;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handpose_VFG.rtm"
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
			class hlc_wp_MK17IUR_556_x15_grip3
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_Mk17IUR_556_x15_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_MK17IUR_556_camo: hlc_wp_MK17IUR_556
	{
		author="Toadie";
		dlc="Niarms_SCAR";
		displayName="$STR_NIA_rifle_MK17IUR_556_camo";
		scope=2;
		baseWeapon="hlc_wp_MK17IUR_556_camo";
		picture="\nia_wp_SCAR\tex\ui\hlc_wp_MK17IUR_556_camo_ca";
		hiddenSelectionsTextures[]=
		{
			"nia_wp_SCAR\tex\toadie_SCAR\scar_common_camo_co.paa",
			"nia_wp_SCAR\tex\toadie_SCAR\scar_lower_camo_co.paa",
			"nia_wp_SCAR\tex\toadie_SCAR\stock_camo_co.paa",
			"nia_wp_SCAR\tex\toadie_SCAR\upper_scarh_MK17_camo_co.paa"
		};
		HiddenSelectionsMaterials[]=
		{
			"nia_wp_SCAR\mat\scar_common_camo.rvmat",
			"nia_wp_SCAR\mat\scar_lowers_IUR_camo.rvmat",
			"nia_wp_SCAR\mat\scar_stock_camo.rvmat",
			"nia_wp_SCAR\mat\scar_upper_scarh_MK17_camo.rvmat"
		};
		class nia_magSwitch
		{
			hlc_50rnd_556x45_EPR="hlc_wp_MK17IUR_556_x15_camo";
			hlc_50rnd_556x45_SOST="hlc_wp_MK17IUR_556_x15_camo";
			hlc_50rnd_556x45_SPR="hlc_wp_MK17IUR_556_x15_camo";
			hlc_50rnd_556x45_M="hlc_wp_MK17IUR_556_x15_camo";
			hlc_50rnd_556x45_MDim="hlc_wp_MK17IUR_556_x15_camo";
			default="hlc_wp_MK17IUR_556_camo";
		};
		class nia_gripSwitch
		{
			VFG="hlc_wp_MK17IUR_556_camo_grip";
			AFG="hlc_wp_MK17IUR_556_camo_grip2";
			VFG2="hlc_wp_MK17IUR_556_camo_grip3";
			default="hlc_wp_MK17IUR_556_camo";
		};
		rhs_grip1_change="hlc_wp_MK17IUR_556_camo_grip";
		rhs_grip2_change="hlc_wp_MK17IUR_556_camo_grip2";
		rhs_grip3_change="hlc_wp_MK17IUR_556_camo_grip3";
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
			class hlc_wp_MK17IUR_556_camo
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_Mk17IUR_556_camo_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_Mk17IUR_556_camo_TacReload: hlc_wp_MK17IUR_556_camo
	{
		magazineReloadSwitchPhase="(40 / 96)";
		scopeArsenal=0;
		reloadMagazineSound[]=
		{
			"\nia_wp_SCAR\snd\mk16_reload_partial.ogg",
			0.85000002,
			1,
			25
		};
		reloadAction="NIA_GestureReload_Mk16_Tactical";
		model="nia_wp_SCAR\mesh\Rifle\MK17IUR_556_TacReload.p3d";
		rhs_grip1_change="hlc_wp_MK17IUR_556_camo_grip";
		rhs_grip2_change="hlc_wp_MK17IUR_556_camo_grip2";
		rhs_grip3_change="hlc_wp_MK17IUR_556_camo_grip3";
		class nia_gripSwitch
		{
			VFG="hlc_wp_MK17IUR_556_camo_grip";
			AFG="hlc_wp_MK17IUR_556_camo_grip2";
			VFG2="hlc_wp_MK17IUR_556_camo_grip3";
			default="hlc_wp_Mk17IUR_556_camo_TacReload";
		};
	};
	class hlc_wp_MK17IUR_556_camo_grip: hlc_wp_MK17IUR_556_camo
	{
		scopeArsenal=0;
		dexterity=1.6212438;
		aimTransitionSpeed=1.1348706;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handpose_VFG.rtm"
		};
		class nia_magSwitch
		{
			hlc_50rnd_556x45_EPR="hlc_wp_MK17IUR_556_x15_camo_grip";
			hlc_50rnd_556x45_SOST="hlc_wp_MK17IUR_556_x15_camo_grip";
			hlc_50rnd_556x45_SPR="hlc_wp_MK17IUR_556_x15_camo_grip";
			hlc_50rnd_556x45_M="hlc_wp_MK17IUR_556_x15_camo_grip";
			hlc_50rnd_556x45_MDim="hlc_wp_MK17IUR_556_x15_camo_grip";
			default="hlc_wp_MK17IUR_556_camo_grip";
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
			class hlc_wp_MK17IUR_556_camo_grip
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_Mk17IUR_556_camo_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_MK17IUR_556_camo_grip2: hlc_wp_MK17IUR_556_camo
	{
		scopeArsenal=0;
		inertia="(0.3435*0.85)";
		dexterity=1.6212438;
		aimTransitionSpeed=1.1348706;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handpose_AFG.rtm"
		};
		class nia_magSwitch
		{
			hlc_50rnd_556x45_EPR="hlc_wp_MK17IUR_556_x15_camo_grip2";
			hlc_50rnd_556x45_SOST="hlc_wp_MK17IUR_556_x15_camo_grip2";
			hlc_50rnd_556x45_SPR="hlc_wp_MK17IUR_556_x15_camo_grip2";
			hlc_50rnd_556x45_M="hlc_wp_MK17IUR_556_x15_camo_grip2";
			hlc_50rnd_556x45_MDim="hlc_wp_MK17IUR_556_x15_camo_grip2";
			default="hlc_wp_MK17IUR_556_camo_grip2";
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
			class hlc_wp_MK17IUR_556_camo_grip2
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_Mk17IUR_556_camo_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_MK17IUR_556_camo_grip3: hlc_wp_MK17IUR_556_camo
	{
		scopeArsenal=0;
		dexterity=1.6212438;
		aimTransitionSpeed=1.1348706;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handpose_VFG.rtm"
		};
		class nia_magSwitch
		{
			hlc_50rnd_556x45_EPR="hlc_wp_MK17IUR_556_x15_camo_grip3";
			hlc_50rnd_556x45_SOST="hlc_wp_MK17IUR_556_x15_camo_grip3";
			hlc_50rnd_556x45_SPR="hlc_wp_MK17IUR_556_x15_camo_grip3";
			hlc_50rnd_556x45_M="hlc_wp_MK17IUR_556_x15_camo_grip3";
			hlc_50rnd_556x45_MDim="hlc_wp_MK17IUR_556_x15_camo_grip3";
			default="hlc_wp_MK17IUR_556_camo_grip3";
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
			class hlc_wp_MK17IUR_556_camo_grip3
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_Mk17IUR_556_camo_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_MK17IUR_556_x15_camo: hlc_wp_MK17IUR_556_camo
	{
		scopeArsenal=0;
		reloadAction="NIA_GestureReload_Mk16_X15";
		baseweapon="hlc_wp_MK17IUR_556_x15_camo";
		reloadMagazineSound[]=
		{
			"nia_wp_SCAR\snd\mk16_reload_X15_short.ogg",
			0.80000001,
			1,
			25
		};
		class nia_gripSwitch
		{
			VFG="hlc_wp_MK17IUR_556_x15_camo_grip";
			AFG="hlc_wp_MK17IUR_556_x15_camo_grip2";
			VFG2="hlc_wp_MK17IUR_556_x15_camo_grip3";
			default="hlc_wp_MK17IUR_556_x15_camo";
		};
		rhs_grip1_change="hlc_wp_MK17IUR_556_x15_camo_grip";
		rhs_grip2_change="hlc_wp_MK17IUR_556_x15_camo_grip2";
		rhs_grip3_change="hlc_wp_MK17IUR_556_x15_camo_grip3";
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
			class hlc_wp_MK17IUR_556_x15_camo
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_Mk17IUR_556_x15_camo_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_Mk17IUR_556_x15_camo_TacReload: hlc_wp_MK17IUR_556_x15_camo
	{
		magazineReloadSwitchPhase="(40 / 96)";
		scopeArsenal=0;
		reloadMagazineSound[]=
		{
			"\nia_wp_SCAR\snd\mk16_reload_X15_partial.ogg",
			0.85000002,
			1,
			25
		};
		reloadAction="NIA_GestureReload_Mk16_X15_Tactical";
		model="nia_wp_SCAR\mesh\Rifle\MK17IUR_556_TacReload.p3d";
		rhs_grip1_change="hlc_wp_MK17IUR_556_x15_camo_grip";
		rhs_grip2_change="hlc_wp_MK17IUR_556_x15_camo_grip2";
		rhs_grip3_change="hlc_wp_MK17IUR_556_x15_camo_grip3";
		class nia_gripSwitch
		{
			VFG="hlc_wp_MK17IUR_556_x15_camo_grip";
			AFG="hlc_wp_MK17IUR_556_x15_camo_grip2";
			VFG2="hlc_wp_MK17IUR_556_x15_camo_grip3";
			default="hlc_wp_Mk17IUR_556_x15_camo_TacReload";
		};
	};
	class hlc_wp_MK17IUR_556_x15_camo_grip: hlc_wp_MK17IUR_556_x15_camo
	{
		scopeArsenal=0;
		dexterity=1.6212438;
		aimTransitionSpeed=1.1348706;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handpose_VFG.rtm"
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
			class hlc_wp_MK17IUR_556_x15_camo_grip
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_Mk17IUR_556_x15_camo_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_MK17IUR_556_x15_camo_grip2: hlc_wp_MK17IUR_556_x15_camo
	{
		scopeArsenal=0;
		inertia="(0.3435*0.85)";
		dexterity=1.6212438;
		aimTransitionSpeed=1.1348706;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handpose_AFG.rtm"
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
			class hlc_wp_MK17IUR_556_x15_camo_grip2
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_Mk17IUR_556_x15_camo_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_MK17IUR_556_x15_camo_grip3: hlc_wp_MK17IUR_556_x15_camo
	{
		scopeArsenal=0;
		dexterity=1.6212438;
		aimTransitionSpeed=1.1348706;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handpose_VFG.rtm"
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
			class hlc_wp_MK17IUR_556_x15_camo_grip3
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_Mk17IUR_556_x15_camo_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_MK17IUR_556_AGC: hlc_wp_MK17IUR_556
	{
		author="Toadie";
		dlc="Niarms_SCAR";
		displayName="$STR_NIA_rifle_MK17IUR_556_AGC";
		scope=2;
		muzzles[]=
		{
			"this",
			"hlc_GL_SCARL_AGC"
		};
		baseWeapon="hlc_wp_MK17IUR_556_AGC";
		mass=107.58299;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=107.58299;
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
				class compatibleItems: compatibleItems
				{
					HLC_Panel_Side_SCAR_FN5cm_Desert=1;
					HLC_Panel_Side_SCAR_2xFN5cm_Desert=1;
					HLC_Panel_Side_SCAR_FN10cm_Desert=1;
					HLC_Panel_Side_SCAR_Ladder_S_Desert=1;
					HLC_Panel_Side_SCAR_Ladder_M_Desert=1;
					HLC_Panel_Side_SCAR_MagpulXT_Desert=1;
					HLC_Panel_Side_SCAR_XTME_Desert=1;
					HLC_Panel_Side_SCAR_2xXTME_Desert=1;
					HLC_Panel_Side_SCAR_FN5cm_Black=1;
					HLC_Panel_Side_SCAR_2xFN5cm_Black=1;
					HLC_Panel_Side_SCAR_FN10cm_Black=1;
					HLC_Panel_Side_SCAR_Ladder_S_Black=1;
					HLC_Panel_Side_SCAR_Ladder_M_Black=1;
					HLC_Panel_Side_SCAR_MagpulXT_Black=1;
					HLC_Panel_Side_SCAR_XTME_Black=1;
					HLC_Panel_Side_SCAR_2xXTME_Black=1;
					HLC_Panel_Side_SCAR_FN5cm_OD=1;
					HLC_Panel_Side_SCAR_2xFN5cm_OD=1;
					HLC_Panel_Side_SCAR_FN10cm_OD=1;
					HLC_Panel_Side_SCAR_Ladder_S_OD=1;
					HLC_Panel_Side_SCAR_Ladder_M_OD=1;
					HLC_Panel_Side_SCAR_MagpulXT_OD=1;
					HLC_Panel_Side_SCAR_XTME_OD=1;
					HLC_Panel_Side_SCAR_2xXTME_OD=1;
					HLC_Panel_Side_SCAR_FN5cm_RG=1;
					HLC_Panel_Side_SCAR_2xFN5cm_RG=1;
					HLC_Panel_Side_SCAR_FN10cm_RG=1;
					HLC_Panel_Side_SCAR_Ladder_S_RG=1;
					HLC_Panel_Side_SCAR_Ladder_M_RG=1;
					HLC_Panel_Side_SCAR_MagpulXT_RG=1;
					HLC_Panel_Side_SCAR_XTME_RG=1;
					HLC_Panel_Side_SCAR_2xXTME_RG=1;
					HLC_Panel_Side_SCAR_Ladder_S_Pride=1;
					HLC_Panel_Side_SCAR_Ladder_M_Pride=1;
					HLC_Panel_Side_SCAR_MagpulXT_Pride=1;
				};
			};
			class MuzzleSlot: asdg_MuzzleSlot_556
			{
				iconPosition[]={0,0};
				iconScale=1;
				iconPicture="\A3\Weapons_F\Data\clear_empty.paa";
				iconPinPoint="Left";
			};
			class UnderBarrelSlot
			{
				iconPosition[]={0,0};
				iconScale=1;
				iconPicture="\A3\Weapons_F\Data\clear_empty.paa";
				iconPinPoint="Left";
			};
			class GripodSlot
			{
				iconPosition[]={0,0};
				iconScale=1;
				iconPicture="\A3\Weapons_F\Data\clear_empty.paa";
				iconPinPoint="Left";
			};
		};
		inertia="(0.3435 + 0.15)";
		dexterity=1.1597245;
		aimTransitionSpeed=0.8118071;
		model="nia_wp_SCAR\mesh\rifle\MK17IUR_556_AGC.p3d";
		picture="\nia_wp_SCAR\tex\ui\hlc_wp_MK17IUR_556_AGC_ca";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handpose_AGC.rtm"
		};
		UiPicture="\A3\weapons_f\data\UI\icon_regular_CA.paa";
		class nia_magSwitch
		{
			hlc_50rnd_556x45_EPR="hlc_wp_MK17IUR_556_AGC_x15";
			hlc_50rnd_556x45_SOST="hlc_wp_MK17IUR_556_AGC_x15";
			hlc_50rnd_556x45_SPR="hlc_wp_MK17IUR_556_AGC_x15";
			hlc_50rnd_556x45_M="hlc_wp_MK17IUR_556_AGC_x15";
			hlc_50rnd_556x45_MDim="hlc_wp_MK17IUR_556_AGC_x15";
			default="hlc_wp_MK17IUR_556_AGC";
		};
		class nia_gripSwitch
		{
			VFG="hlc_wp_MK17IUR_556_AGC";
			AFG="hlc_wp_MK17IUR_556_AGC";
			VFG2="hlc_wp_MK17IUR_556_AGC";
			default="hlc_wp_MK17IUR_556_AGC";
		};
		rhs_grip1_change="hlc_wp_MK17IUR_556_AGC";
		rhs_grip2_change="hlc_wp_MK17IUR_556_AGC";
		rhs_grip3_change="hlc_wp_MK17IUR_556_AGC";
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
			class hlc_wp_MK17IUR_556_AGC
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_Mk17IUR_556_AGC_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_Mk17IUR_556_AGC_TacReload: hlc_wp_MK17IUR_556_AGC
	{
		magazineReloadSwitchPhase="(40 / 96)";
		scopeArsenal=0;
		reloadMagazineSound[]=
		{
			"\nia_wp_SCAR\snd\mk16_reload_partial.ogg",
			0.85000002,
			1,
			25
		};
		reloadAction="NIA_GestureReload_Mk16_Tactical";
		model="nia_wp_SCAR\mesh\Rifle\Mk17IUR_556_AGC_TacReload.p3d";
		rhs_grip1_change="hlc_wp_Mk17IUR_556_AGC_TacReload";
		rhs_grip2_change="hlc_wp_Mk17IUR_556_AGC_TacReload";
		rhs_grip3_change="hlc_wp_Mk17IUR_556_AGC_TacReload";
		class nia_gripSwitch
		{
			VFG="hlc_wp_Mk17IUR_556_AGC_TacReload";
			AFG="hlc_wp_Mk17IUR_556_AGC_TacReload";
			VFG2="hlc_wp_Mk17IUR_556_AGC_TacReload";
			default="hlc_wp_Mk17IUR_556_AGC_TacReload";
		};
	};
	class hlc_wp_MK17IUR_556_AGC_x15: hlc_wp_MK17IUR_556_AGC
	{
		scopeArsenal=0;
		reloadAction="NIA_GestureReload_Mk16_X15";
		baseweapon="hlc_wp_MK17IUR_556_AGC_x15";
		reloadMagazineSound[]=
		{
			"nia_wp_SCAR\snd\mk16_reload_X15_short.ogg",
			0.80000001,
			1,
			25
		};
		class nia_gripSwitch
		{
			VFG="hlc_wp_MK17IUR_556_AGC_x15";
			AFG="hlc_wp_MK17IUR_556_AGC_x15";
			VFG2="hlc_wp_MK17IUR_556_AGC_x15";
			default="hlc_wp_MK17IUR_556_x15";
		};
		rhs_grip1_change="hlc_wp_MK17IUR_556_AGC_x15";
		rhs_grip2_change="hlc_wp_MK17IUR_556_AGC_x15";
		rhs_grip3_change="hlc_wp_MK17IUR_556_AGC_x15";
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
			class hlc_wp_MK17IUR_556_AGC_x15
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_MK17IUR_556_AGC_x15_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_MK17IUR_556_AGC_x15_TacReload: hlc_wp_MK17IUR_556_AGC_x15
	{
		magazineReloadSwitchPhase="(40 / 91)";
		scopeArsenal=0;
		reloadMagazineSound[]=
		{
			"\nia_wp_SCAR\snd\mk16_reload_X15_partial.ogg",
			0.85000002,
			1,
			25
		};
		reloadAction="NIA_GestureReload_Mk16_X15_Tactical";
		model="nia_wp_SCAR\mesh\Rifle\Mk17IUR_556_AGC_TacReload.p3d";
		rhs_grip1_change="hlc_wp_MK17IUR_556_AGC_x15_TacReload";
		rhs_grip2_change="hlc_wp_MK17IUR_556_AGC_x15_TacReload";
		rhs_grip3_change="hlc_wp_MK17IUR_556_AGC_x15_TacReload";
		class nia_gripSwitch
		{
			VFG="hlc_wp_MK17IUR_556_AGC_x15_TacReload";
			AFG="hlc_wp_MK17IUR_556_AGC_x15_TacReload";
			VFG2="hlc_wp_MK17IUR_556_AGC_x15_TacReload";
			default="hlc_wp_MK17IUR_556_AGC_x15_TacReload";
		};
	};
	class hlc_wp_MK17IUR_556_AGC_camo: hlc_wp_MK17IUR_556_camo
	{
		author="Toadie";
		dlc="Niarms_SCAR";
		displayName="$STR_NIA_rifle_MK17IUR_556_AGC_camo";
		scope=2;
		muzzles[]=
		{
			"this",
			"hlc_GL_SCARL_AGC"
		};
		baseWeapon="hlc_wp_MK17IUR_556_AGC_camo";
		mass=107.58299;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=107.58299;
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
				class compatibleItems: compatibleItems
				{
					HLC_Panel_Side_SCAR_FN5cm_Desert=1;
					HLC_Panel_Side_SCAR_2xFN5cm_Desert=1;
					HLC_Panel_Side_SCAR_FN10cm_Desert=1;
					HLC_Panel_Side_SCAR_Ladder_S_Desert=1;
					HLC_Panel_Side_SCAR_Ladder_M_Desert=1;
					HLC_Panel_Side_SCAR_MagpulXT_Desert=1;
					HLC_Panel_Side_SCAR_XTME_Desert=1;
					HLC_Panel_Side_SCAR_2xXTME_Desert=1;
					HLC_Panel_Side_SCAR_FN5cm_Black=1;
					HLC_Panel_Side_SCAR_2xFN5cm_Black=1;
					HLC_Panel_Side_SCAR_FN10cm_Black=1;
					HLC_Panel_Side_SCAR_Ladder_S_Black=1;
					HLC_Panel_Side_SCAR_Ladder_M_Black=1;
					HLC_Panel_Side_SCAR_MagpulXT_Black=1;
					HLC_Panel_Side_SCAR_XTME_Black=1;
					HLC_Panel_Side_SCAR_2xXTME_Black=1;
					HLC_Panel_Side_SCAR_FN5cm_OD=1;
					HLC_Panel_Side_SCAR_2xFN5cm_OD=1;
					HLC_Panel_Side_SCAR_FN10cm_OD=1;
					HLC_Panel_Side_SCAR_Ladder_S_OD=1;
					HLC_Panel_Side_SCAR_Ladder_M_OD=1;
					HLC_Panel_Side_SCAR_MagpulXT_OD=1;
					HLC_Panel_Side_SCAR_XTME_OD=1;
					HLC_Panel_Side_SCAR_2xXTME_OD=1;
					HLC_Panel_Side_SCAR_FN5cm_RG=1;
					HLC_Panel_Side_SCAR_2xFN5cm_RG=1;
					HLC_Panel_Side_SCAR_FN10cm_RG=1;
					HLC_Panel_Side_SCAR_Ladder_S_RG=1;
					HLC_Panel_Side_SCAR_Ladder_M_RG=1;
					HLC_Panel_Side_SCAR_MagpulXT_RG=1;
					HLC_Panel_Side_SCAR_XTME_RG=1;
					HLC_Panel_Side_SCAR_2xXTME_RG=1;
					HLC_Panel_Side_SCAR_Ladder_S_Pride=1;
					HLC_Panel_Side_SCAR_Ladder_M_Pride=1;
					HLC_Panel_Side_SCAR_MagpulXT_Pride=1;
				};
			};
			class MuzzleSlot: asdg_MuzzleSlot_556
			{
				iconPosition[]={0,0};
				iconScale=1;
				iconPicture="\A3\Weapons_F\Data\clear_empty.paa";
				iconPinPoint="Left";
			};
			class UnderBarrelSlot
			{
				iconPosition[]={0,0};
				iconScale=1;
				iconPicture="\A3\Weapons_F\Data\clear_empty.paa";
				iconPinPoint="Left";
			};
			class GripodSlot
			{
				iconPosition[]={0,0};
				iconScale=1;
				iconPicture="\A3\Weapons_F\Data\clear_empty.paa";
				iconPinPoint="Left";
			};
		};
		inertia="(0.3435 + 0.15)";
		dexterity=1.1597245;
		aimTransitionSpeed=0.8118071;
		model="nia_wp_SCAR\mesh\rifle\MK17IUR_556_AGC.p3d";
		picture="\nia_wp_SCAR\tex\ui\hlc_wp_MK17IUR_556_AGC_camo_ca";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handpose_AGC.rtm"
		};
		UiPicture="\A3\weapons_f\data\UI\icon_regular_CA.paa";
		class nia_magSwitch
		{
			hlc_50rnd_556x45_EPR="hlc_wp_MK17IUR_556_AGC_x15_camo";
			hlc_50rnd_556x45_SOST="hlc_wp_MK17IUR_556_AGC_x15_camo";
			hlc_50rnd_556x45_SPR="hlc_wp_MK17IUR_556_AGC_x15_camo";
			hlc_50rnd_556x45_M="hlc_wp_MK17IUR_556_AGC_x15_camo";
			hlc_50rnd_556x45_MDim="hlc_wp_MK17IUR_556_AGC_x15_camo";
			default="hlc_wp_MK17IUR_556_AGC_camo";
		};
		class nia_gripSwitch
		{
			VFG="hlc_wp_MK17IUR_556_AGC_camo";
			AFG="hlc_wp_MK17IUR_556_AGC_camo";
			VFG2="hlc_wp_MK17IUR_556_AGC_camo";
			default="hlc_wp_MK17IUR_556_AGC_camo";
		};
		rhs_grip1_change="hlc_wp_MK17IUR_556_AGC_camo";
		rhs_grip2_change="hlc_wp_MK17IUR_556_AGC_camo";
		rhs_grip3_change="hlc_wp_MK17IUR_556_AGC_camo";
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
			class hlc_wp_MK17IUR_556_AGC_camo
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_Mk17IUR_556_AGC_TacReload_camo
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_Mk17IUR_556_AGC_TacReload_camo: hlc_wp_MK17IUR_556_AGC_camo
	{
		magazineReloadSwitchPhase="(40 / 96)";
		scopeArsenal=0;
		reloadMagazineSound[]=
		{
			"\nia_wp_SCAR\snd\mk16_reload_partial.ogg",
			0.85000002,
			1,
			25
		};
		reloadAction="NIA_GestureReload_Mk16_Tactical";
		model="nia_wp_SCAR\mesh\Rifle\Mk17IUR_556_AGC_TacReload.p3d";
		rhs_grip1_change="hlc_wp_Mk17IUR_556_AGC_camo_TacReload";
		rhs_grip2_change="hlc_wp_Mk17IUR_556_AGC_camo_TacReload";
		rhs_grip3_change="hlc_wp_Mk17IUR_556_AGC_camo_TacReload";
		class nia_gripSwitch
		{
			VFG="hlc_wp_Mk17IUR_556_AGC_camo_TacReload";
			AFG="hlc_wp_Mk17IUR_556_AGC_camo_TacReload";
			VFG2="hlc_wp_Mk17IUR_556_AGC_camo_TacReload";
			default="hlc_wp_Mk17IUR_556_AGC_camo_TacReload";
		};
	};
	class hlc_wp_MK17IUR_556_AGC_x15_camo: hlc_wp_MK17IUR_556_AGC_camo
	{
		scopeArsenal=0;
		reloadAction="NIA_GestureReload_Mk16_X15";
		baseweapon="hlc_wp_MK17IUR_556_AGC_x15_camo";
		reloadMagazineSound[]=
		{
			"nia_wp_SCAR\snd\mk16_reload_X15_short.ogg",
			0.80000001,
			1,
			25
		};
		class nia_gripSwitch
		{
			VFG="hlc_wp_MK17IUR_556_AGC_x15_camo";
			AFG="hlc_wp_MK17IUR_556_AGC_x15_camo";
			VFG2="hlc_wp_MK17IUR_556_AGC_x15_camo";
			default="hlc_wp_MK17IUR_556_AGC_x15_camo";
		};
		rhs_grip1_change="hlc_wp_MK17IUR_556_AGC_x15_camo";
		rhs_grip2_change="hlc_wp_MK17IUR_556_AGC_x15_camo";
		rhs_grip3_change="hlc_wp_MK17IUR_556_AGC_x15_camo";
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
			class hlc_wp_MK17IUR_556_AGC_x15_camo
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_MK17IUR_556_AGC_x15_camo_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_MK17IUR_556_AGC_x15_camo_TacReload: hlc_wp_MK17IUR_556_AGC_x15_camo
	{
		magazineReloadSwitchPhase="(40 / 91)";
		scopeArsenal=0;
		reloadMagazineSound[]=
		{
			"\nia_wp_SCAR\snd\mk16_reload_X15_partial.ogg",
			0.85000002,
			1,
			25
		};
		reloadAction="NIA_GestureReload_Mk16_X15_Tactical";
		model="nia_wp_SCAR\mesh\Rifle\Mk17IUR_556_AGC_TacReload.p3d";
		rhs_grip1_change="hlc_wp_MK17IUR_556_AGC_x15_camo_TacReload";
		rhs_grip2_change="hlc_wp_MK17IUR_556_AGC_x15_camo_TacReload";
		rhs_grip3_change="hlc_wp_MK17IUR_556_AGC_x15_camo_TacReload";
		class nia_gripSwitch
		{
			VFG="hlc_wp_MK17IUR_556_AGC_x15_camo_TacReload";
			AFG="hlc_wp_MK17IUR_556_AGC_x15_camo_TacReload";
			VFG2="hlc_wp_MK17IUR_556_AGC_x15_camo_TacReload";
			default="hlc_wp_MK17IUR_556_AGC_x15_camo_TacReload";
		};
	};
	class hlc_wp_MK17IUR_300: hlc_wp_MK17IUR_556
	{
		author="Toadie";
		dlc="Niarms_SCAR";
		displayName="$STR_NIA_rifle_MK17IUR_300";
		descriptionShort="$STR_NIA_SCARL_300AAC_DESC";
		scope=2;
		ACE_barrelTwist=203.2;
		ACE_barrelLength=355;
		ACE_railHeightAboveBore=3.8;
		initspeed=-1.0341001;
		magazines[]={};
		magazineWell[]=
		{
			"CBA_300BLK_STANAG",
			"CBA_300BLK_STANAG_L",
			"CBA_300BLK_STANAG_XL",
			"CBA_300BLK_STANAG_2D",
			"CBA_300BLK_STANAG_2D_XL"
		};
		discretedistance[]={200,300,400,500,600};
		discretedistanceinitindex=0;
		discreteDistanceCameraPoint[]=
		{
			"eye",
			"eye_300",
			"eye_400",
			"eye_500",
			"eye_600"
		};
		cameraDir="eye_look";
		recoil="recoil_mx";
		baseWeapon="hlc_wp_MK17IUR_300";
		mass=74.882996;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=74.882996;
			class PointerSlot: asdg_FrontSideRail
			{
				iconPosition[]={0,0};
				iconScale=1;
				iconPicture="\A3\Weapons_F\Data\clear_empty.paa";
				iconPinPoint="Left";
				class compatibleItems: compatibleItems
				{
					HLC_Panel_Side_SCAR_FN5cm_Desert=1;
					HLC_Panel_Side_SCAR_2xFN5cm_Desert=1;
					HLC_Panel_Side_SCAR_FN10cm_Desert=1;
					HLC_Panel_Side_SCAR_Ladder_S_Desert=1;
					HLC_Panel_Side_SCAR_Ladder_M_Desert=1;
					HLC_Panel_Side_SCAR_MagpulXT_Desert=1;
					HLC_Panel_Side_SCAR_XTME_Desert=1;
					HLC_Panel_Side_SCAR_2xXTME_Desert=1;
					HLC_Panel_Side_SCAR_FN5cm_Black=1;
					HLC_Panel_Side_SCAR_2xFN5cm_Black=1;
					HLC_Panel_Side_SCAR_FN10cm_Black=1;
					HLC_Panel_Side_SCAR_Ladder_S_Black=1;
					HLC_Panel_Side_SCAR_Ladder_M_Black=1;
					HLC_Panel_Side_SCAR_MagpulXT_Black=1;
					HLC_Panel_Side_SCAR_XTME_Black=1;
					HLC_Panel_Side_SCAR_2xXTME_Black=1;
					HLC_Panel_Side_SCAR_FN5cm_OD=1;
					HLC_Panel_Side_SCAR_2xFN5cm_OD=1;
					HLC_Panel_Side_SCAR_FN10cm_OD=1;
					HLC_Panel_Side_SCAR_Ladder_S_OD=1;
					HLC_Panel_Side_SCAR_Ladder_M_OD=1;
					HLC_Panel_Side_SCAR_MagpulXT_OD=1;
					HLC_Panel_Side_SCAR_XTME_OD=1;
					HLC_Panel_Side_SCAR_2xXTME_OD=1;
					HLC_Panel_Side_SCAR_FN5cm_RG=1;
					HLC_Panel_Side_SCAR_2xFN5cm_RG=1;
					HLC_Panel_Side_SCAR_FN10cm_RG=1;
					HLC_Panel_Side_SCAR_Ladder_S_RG=1;
					HLC_Panel_Side_SCAR_Ladder_M_RG=1;
					HLC_Panel_Side_SCAR_MagpulXT_RG=1;
					HLC_Panel_Side_SCAR_XTME_RG=1;
					HLC_Panel_Side_SCAR_2xXTME_RG=1;
					HLC_Panel_Side_SCAR_Ladder_S_Pride=1;
					HLC_Panel_Side_SCAR_Ladder_M_Pride=1;
					HLC_Panel_Side_SCAR_MagpulXT_Pride=1;
				};
			};
			class MuzzleSlot: asdg_MuzzleSlot_762
			{
				iconPosition[]={0,0};
				iconScale=1;
				iconPicture="\A3\Weapons_F\Data\clear_empty.paa";
				iconPinPoint="Left";
			};
		};
		inertia=0.34349999;
		dexterity=1.5212438;
		aimTransitionSpeed=1.0648706;
		class LinkedItems
		{
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="hlc_muzzle_Miter18T";
			};
		};
		picture="\nia_wp_SCAR\tex\ui\hlc_wp_MK17IUR_300_ca";
		UiPicture="\A3\weapons_f\data\UI\icon_regular_CA.paa";
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
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"NIA_SCAR_300AAC_NEW_Shot_SoundSet",
					"NIA_SCARL_tail_SoundSet"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"NIA_SCARL_silencerShot_SoundSet",
					"NIA_SCARL_silencerTail_SoundSet"
				};
			};
			dispersion=0.00049162103;
			reloadtime="(60/600)";
			aiRateOfFire=1;
			aiRateOfFireDistance=350;
			aiRateOfFireDispersion=2;
			minRange=20;
			minRangeProbab=0.69999999;
			midRange=150;
			midRangeProbab=0.5;
			maxRange=500;
			maxRangeProbab=0.1;
		};
		class Burst: Mode_Burst
		{
			sounds[]=
			{
				"StandardSound",
				"SilencedSound"
			};
			class BaseSoundModeType
			{
				weaponSoundEffect="DefaultRifle";
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"NIA_SCAR_300AAC_NEW_Shot_SoundSet",
					"NIA_SCARL_tail_SoundSet"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"NIA_SCARL_silencerShot_SoundSet",
					"NIA_SCARL_silencerTail_SoundSet"
				};
			};
			dispersion=0.00059634499;
			reloadtime="(60/600)";
			aiRateOfFire=1;
			aiRateOfFireDistance=100;
			aiRateOfFireDispersion=1;
			minRange=0;
			minRangeProbab=0.2;
			midRange=20;
			midRangeProbab=0.80000001;
			maxRange=40;
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
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"NIA_SCAR_300AAC_NEW_Shot_SoundSet",
					"NIA_SCARL_tail_SoundSet"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"NIA_SCARL_silencerShot_SoundSet",
					"NIA_SCARL_silencerTail_SoundSet"
				};
			};
			dispersion=0.00062543503;
			reloadtime="(60/600)";
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
		class nia_magSwitch
		{
			hlc_50rnd_300BLK_STANAG_EPR="hlc_wp_MK17IUR_300_x15";
			default="hlc_wp_MK17IUR_300";
		};
		class nia_gripSwitch
		{
			VFG="hlc_wp_MK17IUR_300_grip";
			AFG="hlc_wp_MK17IUR_300_grip2";
			VFG2="hlc_wp_MK17IUR_300_grip3";
			default="hlc_wp_MK17IUR_300";
		};
		rhs_grip1_change="hlc_wp_MK17IUR_300_grip";
		rhs_grip2_change="hlc_wp_MK17IUR_300_grip2";
		rhs_grip3_change="hlc_wp_MK17IUR_300_grip3";
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
			class hlc_wp_MK17IUR_300
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_Mk17IUR_300_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_Mk17IUR_300_TacReload: hlc_wp_MK17IUR_300
	{
		magazineReloadSwitchPhase="(40 / 96)";
		scopeArsenal=0;
		reloadMagazineSound[]=
		{
			"\nia_wp_SCAR\snd\mk16_reload_partial.ogg",
			0.85000002,
			1,
			25
		};
		reloadAction="NIA_GestureReload_Mk16_Tactical";
		model="nia_wp_SCAR\mesh\Rifle\MK17IUR_556_TacReload.p3d";
		rhs_grip1_change="hlc_wp_MK17IUR_300_grip";
		rhs_grip2_change="hlc_wp_MK17IUR_300_grip2";
		rhs_grip3_change="hlc_wp_MK17IUR_300_grip3";
		class nia_gripSwitch
		{
			VFG="hlc_wp_MK17IUR_300_grip";
			AFG="hlc_wp_MK17IUR_300_grip2";
			VFG2="hlc_wp_MK17IUR_300_grip3";
			default="hlc_wp_Mk17IUR_300_TacReload";
		};
	};
	class hlc_wp_MK17IUR_300_grip: hlc_wp_MK17IUR_300
	{
		scopeArsenal=0;
		dexterity=1.6212438;
		aimTransitionSpeed=1.1348706;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handpose_VFG.rtm"
		};
		class nia_magSwitch
		{
			hlc_50rnd_300BLK_STANAG_EPR="hlc_wp_MK17IUR_300_x15_grip";
			default="hlc_wp_MK17IUR_300_grip";
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
			class hlc_wp_MK17IUR_300_grip
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_Mk17IUR_300_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_MK17IUR_300_grip2: hlc_wp_MK17IUR_300
	{
		scopeArsenal=0;
		inertia="(0.3435*0.85)";
		dexterity=1.6212438;
		aimTransitionSpeed=1.1348706;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handpose_AFG.rtm"
		};
		class nia_magSwitch
		{
			hlc_50rnd_300BLK_STANAG_EPR="hlc_wp_MK17IUR_300_x15_grip2";
			default="hlc_wp_MK17IUR_300_grip2";
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
				class hlc_wp_MK17IUR_300_grip2
				{
					condition="(%1 == 0 )";
				};
				class hlc_wp_Mk17IUR_300_TacReload
				{
					condition="( %1 >= 1 )";
				};
			};
		};
	};
	class hlc_wp_MK17IUR_300_grip3: hlc_wp_MK17IUR_300
	{
		scopeArsenal=0;
		dexterity=1.6212438;
		aimTransitionSpeed=1.1348706;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handpose_VFG.rtm"
		};
		class nia_magSwitch
		{
			hlc_50rnd_300BLK_STANAG_EPR="hlc_wp_MK17IUR_300_x15_grip3";
			default="hlc_wp_MK17IUR_300_grip3";
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
				class hlc_wp_MK17IUR_300_grip3
				{
					condition="(%1 == 0 )";
				};
				class hlc_wp_Mk17IUR_300_TacReload
				{
					condition="( %1 >= 1 )";
				};
			};
		};
	};
	class hlc_wp_MK17IUR_300_x15: hlc_wp_MK17IUR_300
	{
		scopeArsenal=0;
		reloadAction="NIA_GestureReload_Mk16_X15";
		baseweapon="hlc_wp_MK17IUR_300_x15";
		reloadMagazineSound[]=
		{
			"nia_wp_SCAR\snd\mk16_reload_X15_short.ogg",
			0.80000001,
			1,
			25
		};
		class nia_gripSwitch
		{
			VFG="hlc_wp_MK17IUR_300_x15_grip";
			AFG="hlc_wp_MK17IUR_300_x15_grip2";
			VFG2="hlc_wp_MK17IUR_300_x15_grip3";
			default="hlc_wp_MK17IUR_300_x15";
		};
		rhs_grip1_change="hlc_wp_MK17IUR_300_x15_grip";
		rhs_grip2_change="hlc_wp_MK17IUR_300_x15_grip2";
		rhs_grip3_change="hlc_wp_MK17IUR_300_x15_grip3";
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
			class hlc_wp_MK17IUR_300_x15
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_Mk17IUR_300_x15_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_Mk17IUR_300_x15_TacReload: hlc_wp_MK17IUR_300_x15
	{
		magazineReloadSwitchPhase="(40 / 96)";
		scopeArsenal=0;
		reloadMagazineSound[]=
		{
			"\nia_wp_SCAR\snd\mk16_reload_X15_partial.ogg",
			0.85000002,
			1,
			25
		};
		reloadAction="NIA_GestureReload_Mk16_X15_Tactical";
		model="nia_wp_SCAR\mesh\Rifle\MK17IUR_556_TacReload.p3d";
		rhs_grip1_change="hlc_wp_MK17IUR_300_x15_grip";
		rhs_grip2_change="hlc_wp_MK17IUR_300_x15_grip2";
		rhs_grip3_change="hlc_wp_MK17IUR_300_x15_grip3";
		class nia_gripSwitch
		{
			VFG="hlc_wp_MK17IUR_300_x15_grip";
			AFG="hlc_wp_MK17IUR_300_x15_grip2";
			VFG2="hlc_wp_MK17IUR_300_x15_grip3";
			default="hlc_wp_Mk17IUR_300_x15_TacReload";
		};
	};
	class hlc_wp_MK17IUR_300_x15_grip: hlc_wp_MK17IUR_300_x15
	{
		scopeArsenal=0;
		dexterity=1.6212438;
		aimTransitionSpeed=1.1348706;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handpose_VFG.rtm"
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
			class hlc_wp_MK17IUR_300_x15_grip
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_Mk17IUR_300_x15_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_MK17IUR_300_x15_grip2: hlc_wp_MK17IUR_300_x15
	{
		scopeArsenal=0;
		inertia="(0.3435*0.85)";
		dexterity=1.6212438;
		aimTransitionSpeed=1.1348706;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handpose_AFG.rtm"
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
			class hlc_wp_MK17IUR_300_x15_grip2
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_Mk17IUR_300_x15_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_MK17IUR_300_x15_grip3: hlc_wp_MK17IUR_300_x15
	{
		scopeArsenal=0;
		dexterity=1.6212438;
		aimTransitionSpeed=1.1348706;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handpose_VFG.rtm"
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
			class hlc_wp_MK17IUR_300_x15_grip3
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_Mk17IUR_300_x15_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_MK17IUR_300_camo: hlc_wp_MK17IUR_300
	{
		author="Toadie";
		dlc="Niarms_SCAR";
		displayName="$STR_NIA_rifle_MK17IUR_300_camo";
		scope=2;
		baseWeapon="hlc_wp_MK17IUR_300_camo";
		picture="\nia_wp_SCAR\tex\ui\hlc_wp_MK17IUR_300_camo_ca";
		hiddenSelectionsTextures[]=
		{
			"nia_wp_SCAR\tex\toadie_SCAR\scar_common_camo_co.paa",
			"nia_wp_SCAR\tex\toadie_SCAR\scar_lower_IUR_camo_co.paa",
			"nia_wp_SCAR\tex\toadie_SCAR\stock_camo_co.paa",
			"nia_wp_SCAR\tex\toadie_SCAR\upper_scarh_MK17_camo_co.paa"
		};
		HiddenSelectionsMaterials[]=
		{
			"nia_wp_SCAR\mat\scar_common_camo.rvmat",
			"nia_wp_SCAR\mat\scar_lowers_IUR_camo.rvmat",
			"nia_wp_SCAR\mat\scar_stock_camo.rvmat",
			"nia_wp_SCAR\mat\scar_upper_scarh_MK17_camo.rvmat"
		};
		class nia_magSwitch
		{
			hlc_50rnd_300BLK_STANAG_EPR="hlc_wp_MK17IUR_300_x15_camo";
			default="hlc_wp_MK17IUR_300_camo";
		};
		class nia_gripSwitch
		{
			VFG="hlc_wp_MK17IUR_300_camo_grip";
			AFG="hlc_wp_MK17IUR_300_camo_grip2";
			VFG2="hlc_wp_MK17IUR_300_camo_grip3";
			default="hlc_wp_MK17IUR_300_camo";
		};
		rhs_grip1_change="hlc_wp_MK17IUR_300_camo_grip";
		rhs_grip2_change="hlc_wp_MK17IUR_300_camo_grip2";
		rhs_grip3_change="hlc_wp_MK17IUR_300_camo_grip3";
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
			class hlc_wp_MK17IUR_300_camo
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_Mk17IUR_300_camo_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_Mk17IUR_300_camo_TacReload: hlc_wp_MK17IUR_300_camo
	{
		magazineReloadSwitchPhase="(40 / 96)";
		scopeArsenal=0;
		reloadMagazineSound[]=
		{
			"\nia_wp_SCAR\snd\mk16_reload_partial.ogg",
			0.85000002,
			1,
			25
		};
		reloadAction="NIA_GestureReload_Mk16_Tactical";
		model="nia_wp_SCAR\mesh\Rifle\MK17IUR_556_TacReload.p3d";
		rhs_grip1_change="hlc_wp_MK17IUR_300_camo_grip";
		rhs_grip2_change="hlc_wp_MK17IUR_300_camo_grip2";
		rhs_grip3_change="hlc_wp_MK17IUR_300_camo_grip3";
		class nia_gripSwitch
		{
			VFG="hlc_wp_MK17IUR_300_camo_grip";
			AFG="hlc_wp_MK17IUR_300_camo_grip2";
			VFG2="hlc_wp_MK17IUR_300_camo_grip3";
			default="hlc_wp_Mk17IUR_300_camo_TacReload";
		};
	};
	class hlc_wp_MK17IUR_300_camo_grip: hlc_wp_MK17IUR_300_camo
	{
		scopeArsenal=0;
		dexterity=1.6212438;
		aimTransitionSpeed=1.1348706;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handpose_VFG.rtm"
		};
		class nia_magSwitch
		{
			hlc_50rnd_300BLK_STANAG_EPR="hlc_wp_MK17IUR_300_x15_camo_grip";
			default="hlc_wp_MK17IUR_300_camo_grip";
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
			class hlc_wp_MK17IUR_300_camo_grip
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_Mk17IUR_300_camo_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_MK17IUR_300_camo_grip2: hlc_wp_MK17IUR_300_camo
	{
		scopeArsenal=0;
		inertia="(0.3435*0.85)";
		dexterity=1.6212438;
		aimTransitionSpeed=1.1348706;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handpose_AFG.rtm"
		};
		class nia_magSwitch
		{
			hlc_50rnd_300BLK_STANAG_EPR="hlc_wp_MK17IUR_300_x15_camo_grip2";
			default="hlc_wp_MK17IUR_300_camo_grip2";
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
			class hlc_wp_MK17IUR_300_camo_grip2
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_Mk17IUR_300_camo_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_MK17IUR_300_camo_grip3: hlc_wp_MK17IUR_300_camo
	{
		scopeArsenal=0;
		dexterity=1.6212438;
		aimTransitionSpeed=1.1348706;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handpose_VFG.rtm"
		};
		class nia_magSwitch
		{
			hlc_50rnd_300BLK_STANAG_EPR="hlc_wp_MK17IUR_300_x15_camo_grip3";
			default="hlc_wp_MK17IUR_300_camo_grip3";
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
			class hlc_wp_MK17IUR_300_camo_grip3
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_Mk17IUR_300_camo_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_MK17IUR_300_x15_camo: hlc_wp_MK17IUR_300_camo
	{
		scopeArsenal=0;
		reloadAction="NIA_GestureReload_Mk16_X15";
		baseweapon="hlc_wp_MK17IUR_300_x15_camo";
		reloadMagazineSound[]=
		{
			"nia_wp_SCAR\snd\mk16_reload_X15_short.ogg",
			0.80000001,
			1,
			25
		};
		class nia_gripSwitch
		{
			VFG="hlc_wp_MK17IUR_300_x15_camo_grip";
			AFG="hlc_wp_MK17IUR_300_x15_camo_grip2";
			VFG2="hlc_wp_MK17IUR_300_x15_camo_grip3";
			default="hlc_wp_MK17IUR_300_x15_camo";
		};
		rhs_grip1_change="hlc_wp_MK17IUR_300_x15_camo_grip";
		rhs_grip2_change="hlc_wp_MK17IUR_300_x15_camo_grip2";
		rhs_grip3_change="hlc_wp_MK17IUR_300_x15_camo_grip3";
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
			class hlc_wp_MK17IUR_300_x15_camo
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_Mk17IUR_300_x15_camo_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_Mk17IUR_300_x15_camo_TacReload: hlc_wp_MK17IUR_300_x15_camo
	{
		magazineReloadSwitchPhase="(40 / 96)";
		scopeArsenal=0;
		reloadMagazineSound[]=
		{
			"\nia_wp_SCAR\snd\mk16_reload_X15_partial.ogg",
			0.85000002,
			1,
			25
		};
		reloadAction="NIA_GestureReload_Mk16_X15_Tactical";
		model="nia_wp_SCAR\mesh\Rifle\MK17IUR_556_TacReload.p3d";
		rhs_grip1_change="hlc_wp_MK17IUR_300_x15_camo_grip";
		rhs_grip2_change="hlc_wp_MK17IUR_300_x15_camo_grip2";
		rhs_grip3_change="hlc_wp_MK17IUR_300_x15_camo_grip3";
		class nia_gripSwitch
		{
			VFG="hlc_wp_MK17IUR_300_x15_camo_grip";
			AFG="hlc_wp_MK17IUR_300_x15_camo_grip2";
			VFG2="hlc_wp_MK17IUR_300_x15_camo_grip3";
			default="hlc_wp_Mk17IUR_300_x15_camo_TacReload";
		};
	};
	class hlc_wp_MK17IUR_300_x15_camo_grip: hlc_wp_MK17IUR_300_x15_camo
	{
		scopeArsenal=0;
		dexterity=1.6212438;
		aimTransitionSpeed=1.1348706;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handpose_VFG.rtm"
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
			class hlc_wp_MK17IUR_300_x15_camo_grip
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_Mk17IUR_300_x15_camo_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_MK17IUR_300_x15_camo_grip2: hlc_wp_MK17IUR_300_x15_camo
	{
		scopeArsenal=0;
		inertia="(0.3435*0.85)";
		dexterity=1.6212438;
		aimTransitionSpeed=1.1348706;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handpose_AFG.rtm"
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
			class hlc_wp_MK17IUR_300_x15_camo_grip2
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_Mk17IUR_300_x15_camo_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_MK17IUR_300_x15_camo_grip3: hlc_wp_MK17IUR_300_x15_camo
	{
		scopeArsenal=0;
		dexterity=1.6212438;
		aimTransitionSpeed=1.1348706;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handpose_VFG.rtm"
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
			class hlc_wp_MK17IUR_300_x15_camo_grip3
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_Mk17IUR_300_x15_camo_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_MK17IUR_300_AGC: hlc_wp_MK17IUR_300
	{
		author="Toadie";
		dlc="Niarms_SCAR";
		displayName="$STR_NIA_rifle_MK17IUR_300_AGC";
		scope=2;
		muzzles[]=
		{
			"this",
			"hlc_GL_SCARL_AGC"
		};
		baseWeapon="hlc_wp_MK17IUR_300_AGC";
		mass=107.58299;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=107.58299;
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
				class compatibleItems: compatibleItems
				{
					HLC_Panel_Side_SCAR_FN5cm_Desert=1;
					HLC_Panel_Side_SCAR_2xFN5cm_Desert=1;
					HLC_Panel_Side_SCAR_FN10cm_Desert=1;
					HLC_Panel_Side_SCAR_Ladder_S_Desert=1;
					HLC_Panel_Side_SCAR_Ladder_M_Desert=1;
					HLC_Panel_Side_SCAR_MagpulXT_Desert=1;
					HLC_Panel_Side_SCAR_XTME_Desert=1;
					HLC_Panel_Side_SCAR_2xXTME_Desert=1;
					HLC_Panel_Side_SCAR_FN5cm_Black=1;
					HLC_Panel_Side_SCAR_2xFN5cm_Black=1;
					HLC_Panel_Side_SCAR_FN10cm_Black=1;
					HLC_Panel_Side_SCAR_Ladder_S_Black=1;
					HLC_Panel_Side_SCAR_Ladder_M_Black=1;
					HLC_Panel_Side_SCAR_MagpulXT_Black=1;
					HLC_Panel_Side_SCAR_XTME_Black=1;
					HLC_Panel_Side_SCAR_2xXTME_Black=1;
					HLC_Panel_Side_SCAR_FN5cm_OD=1;
					HLC_Panel_Side_SCAR_2xFN5cm_OD=1;
					HLC_Panel_Side_SCAR_FN10cm_OD=1;
					HLC_Panel_Side_SCAR_Ladder_S_OD=1;
					HLC_Panel_Side_SCAR_Ladder_M_OD=1;
					HLC_Panel_Side_SCAR_MagpulXT_OD=1;
					HLC_Panel_Side_SCAR_XTME_OD=1;
					HLC_Panel_Side_SCAR_2xXTME_OD=1;
					HLC_Panel_Side_SCAR_FN5cm_RG=1;
					HLC_Panel_Side_SCAR_2xFN5cm_RG=1;
					HLC_Panel_Side_SCAR_FN10cm_RG=1;
					HLC_Panel_Side_SCAR_Ladder_S_RG=1;
					HLC_Panel_Side_SCAR_Ladder_M_RG=1;
					HLC_Panel_Side_SCAR_MagpulXT_RG=1;
					HLC_Panel_Side_SCAR_XTME_RG=1;
					HLC_Panel_Side_SCAR_2xXTME_RG=1;
					HLC_Panel_Side_SCAR_Ladder_S_Pride=1;
					HLC_Panel_Side_SCAR_Ladder_M_Pride=1;
					HLC_Panel_Side_SCAR_MagpulXT_Pride=1;
				};
			};
			class MuzzleSlot: asdg_MuzzleSlot_762
			{
				iconPosition[]={0,0};
				iconScale=1;
				iconPicture="\A3\Weapons_F\Data\clear_empty.paa";
				iconPinPoint="Left";
			};
			class UnderBarrelSlot
			{
				iconPosition[]={0,0};
				iconScale=1;
				iconPicture="\A3\Weapons_F\Data\clear_empty.paa";
				iconPinPoint="Left";
			};
			class GripodSlot
			{
				iconPosition[]={0,0};
				iconScale=1;
				iconPicture="\A3\Weapons_F\Data\clear_empty.paa";
				iconPinPoint="Left";
			};
		};
		inertia="(0.3435 + 0.15)";
		dexterity=1.1597245;
		aimTransitionSpeed=0.8118071;
		model="nia_wp_SCAR\mesh\rifle\MK17IUR_556_AGC.p3d";
		picture="\nia_wp_SCAR\tex\ui\hlc_wp_MK17IUR_300_AGC_ca";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handpose_AGC.rtm"
		};
		UiPicture="\A3\weapons_f\data\UI\icon_regular_CA.paa";
		class nia_magSwitch
		{
			hlc_50rnd_300BLK_STANAG_EPR="hlc_wp_MK17IUR_300_AGC_x15";
			default="hlc_wp_MK17IUR_300_AGC";
		};
		class nia_gripSwitch
		{
			VFG="hlc_wp_MK17IUR_300_AGC";
			AFG="hlc_wp_MK17IUR_300_AGC";
			VFG2="hlc_wp_MK17IUR_300_AGC";
			default="hlc_wp_MK17IUR_300_AGC";
		};
		rhs_grip1_change="hlc_wp_MK17IUR_300_AGC";
		rhs_grip2_change="hlc_wp_MK17IUR_300_AGC";
		rhs_grip3_change="hlc_wp_MK17IUR_300_AGC";
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
			class hlc_wp_MK17IUR_300_AGC
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_Mk17IUR_300_AGC_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_Mk17IUR_300_AGC_TacReload: hlc_wp_MK17IUR_300_AGC
	{
		magazineReloadSwitchPhase="(40 / 96)";
		scopeArsenal=0;
		reloadMagazineSound[]=
		{
			"\nia_wp_SCAR\snd\mk16_reload_partial.ogg",
			0.85000002,
			1,
			25
		};
		reloadAction="NIA_GestureReload_Mk16_Tactical";
		model="nia_wp_SCAR\mesh\Rifle\MK17IUR_556_AGC_TacReload.p3d";
	};
	class hlc_wp_MK17IUR_300_AGC_x15: hlc_wp_MK17IUR_300_AGC
	{
		scopeArsenal=0;
		reloadAction="NIA_GestureReload_Mk16_X15";
		baseweapon="hlc_wp_MK17IUR_300_AGC_x15";
		reloadMagazineSound[]=
		{
			"nia_wp_SCAR\snd\mk16_reload_X15_short.ogg",
			0.80000001,
			1,
			25
		};
		class nia_gripSwitch
		{
			VFG="hlc_wp_MK17IUR_300_AGC_x15";
			AFG="hlc_wp_MK17IUR_300_AGC_x15";
			VFG2="hlc_wp_MK17IUR_300_AGC_x15";
			default="hlc_wp_MK17IUR_300_x15";
		};
		rhs_grip1_change="hlc_wp_MK17IUR_300_AGC_x15";
		rhs_grip2_change="hlc_wp_MK17IUR_300_AGC_x15";
		rhs_grip3_change="hlc_wp_MK17IUR_300_AGC_x15";
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
			class hlc_wp_MK17IUR_300_AGC_x15
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_Mk17IUR_300_AGC_x15_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_Mk17IUR_300_AGC_x15_TacReload: hlc_wp_MK17IUR_300_AGC_x15
	{
		magazineReloadSwitchPhase="(40 / 96)";
		scopeArsenal=0;
		reloadMagazineSound[]=
		{
			"\nia_wp_SCAR\snd\mk16_reload_X15_partial.ogg",
			0.85000002,
			1,
			25
		};
		reloadAction="NIA_GestureReload_Mk16_X15_Tactical";
		model="nia_wp_SCAR\mesh\Rifle\MK17IUR_556_AGC_TacReload.p3d";
	};
	class hlc_wp_MK17IUR_300_AGC_camo: hlc_wp_MK17IUR_300_camo
	{
		author="Toadie";
		dlc="Niarms_SCAR";
		displayName="$STR_NIA_rifle_MK17IUR_300_AGC_camo";
		scope=2;
		muzzles[]=
		{
			"this",
			"hlc_GL_SCARL_AGC"
		};
		baseWeapon="hlc_wp_MK17IUR_300_AGC_camo";
		mass=107.58299;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=107.58299;
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
				class compatibleItems: compatibleItems
				{
					HLC_Panel_Side_SCAR_FN5cm_Desert=1;
					HLC_Panel_Side_SCAR_2xFN5cm_Desert=1;
					HLC_Panel_Side_SCAR_FN10cm_Desert=1;
					HLC_Panel_Side_SCAR_Ladder_S_Desert=1;
					HLC_Panel_Side_SCAR_Ladder_M_Desert=1;
					HLC_Panel_Side_SCAR_MagpulXT_Desert=1;
					HLC_Panel_Side_SCAR_XTME_Desert=1;
					HLC_Panel_Side_SCAR_2xXTME_Desert=1;
					HLC_Panel_Side_SCAR_FN5cm_Black=1;
					HLC_Panel_Side_SCAR_2xFN5cm_Black=1;
					HLC_Panel_Side_SCAR_FN10cm_Black=1;
					HLC_Panel_Side_SCAR_Ladder_S_Black=1;
					HLC_Panel_Side_SCAR_Ladder_M_Black=1;
					HLC_Panel_Side_SCAR_MagpulXT_Black=1;
					HLC_Panel_Side_SCAR_XTME_Black=1;
					HLC_Panel_Side_SCAR_2xXTME_Black=1;
					HLC_Panel_Side_SCAR_FN5cm_OD=1;
					HLC_Panel_Side_SCAR_2xFN5cm_OD=1;
					HLC_Panel_Side_SCAR_FN10cm_OD=1;
					HLC_Panel_Side_SCAR_Ladder_S_OD=1;
					HLC_Panel_Side_SCAR_Ladder_M_OD=1;
					HLC_Panel_Side_SCAR_MagpulXT_OD=1;
					HLC_Panel_Side_SCAR_XTME_OD=1;
					HLC_Panel_Side_SCAR_2xXTME_OD=1;
					HLC_Panel_Side_SCAR_FN5cm_RG=1;
					HLC_Panel_Side_SCAR_2xFN5cm_RG=1;
					HLC_Panel_Side_SCAR_FN10cm_RG=1;
					HLC_Panel_Side_SCAR_Ladder_S_RG=1;
					HLC_Panel_Side_SCAR_Ladder_M_RG=1;
					HLC_Panel_Side_SCAR_MagpulXT_RG=1;
					HLC_Panel_Side_SCAR_XTME_RG=1;
					HLC_Panel_Side_SCAR_2xXTME_RG=1;
					HLC_Panel_Side_SCAR_Ladder_S_Pride=1;
					HLC_Panel_Side_SCAR_Ladder_M_Pride=1;
					HLC_Panel_Side_SCAR_MagpulXT_Pride=1;
				};
			};
			class MuzzleSlot: asdg_MuzzleSlot_762
			{
				iconPosition[]={0,0};
				iconScale=1;
				iconPicture="\A3\Weapons_F\Data\clear_empty.paa";
				iconPinPoint="Left";
			};
			class UnderBarrelSlot
			{
				iconPosition[]={0,0};
				iconScale=1;
				iconPicture="\A3\Weapons_F\Data\clear_empty.paa";
				iconPinPoint="Left";
			};
			class GripodSlot
			{
				iconPosition[]={0,0};
				iconScale=1;
				iconPicture="\A3\Weapons_F\Data\clear_empty.paa";
				iconPinPoint="Left";
			};
		};
		inertia="(0.3435 + 0.15)";
		dexterity=1.1597245;
		aimTransitionSpeed=0.8118071;
		model="nia_wp_SCAR\mesh\rifle\MK17IUR_556_AGC.p3d";
		picture="\nia_wp_SCAR\tex\ui\hlc_wp_MK17IUR_300_AGC_camo_ca";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handpose_AGC.rtm"
		};
		UiPicture="\A3\weapons_f\data\UI\icon_regular_CA.paa";
		class nia_magSwitch
		{
			hlc_50rnd_300BLK_STANAG_EPR="hlc_wp_MK17IUR_300_AGC_x15_camo";
			default="hlc_wp_MK17IUR_300_AGC_camo";
		};
		class nia_gripSwitch
		{
			VFG="hlc_wp_MK17IUR_300_AGC_camo";
			AFG="hlc_wp_MK17IUR_300_AGC_camo";
			VFG2="hlc_wp_MK17IUR_300_AGC_camo";
			default="hlc_wp_MK17IUR_300_AGC_camo";
		};
		rhs_grip1_change="hlc_wp_MK17IUR_300_AGC_camo";
		rhs_grip2_change="hlc_wp_MK17IUR_300_AGC_camo";
		rhs_grip3_change="hlc_wp_MK17IUR_300_AGC_camo";
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
			class hlc_wp_MK17IUR_300_AGC_camo
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_Mk17IUR_300_AGC_camo_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_Mk17IUR_300_AGC_camo_TacReload: hlc_wp_MK17IUR_300_AGC_camo
	{
		magazineReloadSwitchPhase="(40 / 96)";
		scopeArsenal=0;
		reloadMagazineSound[]=
		{
			"\nia_wp_SCAR\snd\mk16_reload_partial.ogg",
			0.85000002,
			1,
			25
		};
		reloadAction="NIA_GestureReload_Mk16_Tactical";
		model="nia_wp_SCAR\mesh\Rifle\MK17IUR_556_AGC_TacReload.p3d";
	};
	class hlc_wp_MK17IUR_300_AGC_x15_camo: hlc_wp_MK17IUR_300_AGC_camo
	{
		scopeArsenal=0;
		reloadAction="NIA_GestureReload_Mk16_X15";
		baseweapon="hlc_wp_MK17IUR_300_AGC_x15_camo";
		reloadMagazineSound[]=
		{
			"nia_wp_SCAR\snd\mk16_reload_X15_short.ogg",
			0.80000001,
			1,
			25
		};
		class nia_gripSwitch
		{
			VFG="hlc_wp_MK17IUR_300_AGC_x15_camo";
			AFG="hlc_wp_MK17IUR_300_AGC_x15_camo";
			VFG2="hlc_wp_MK17IUR_300_AGC_x15_camo";
			default="hlc_wp_MK17IUR_300_AGC_x15_camo";
		};
		rhs_grip1_change="hlc_wp_MK17IUR_300_AGC_x15_camo";
		rhs_grip2_change="hlc_wp_MK17IUR_300_AGC_x15_camo";
		rhs_grip3_change="hlc_wp_MK17IUR_300_AGC_x15_camo";
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
			class hlc_wp_MK17IUR_300_AGC_x15_camo
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_Mk17IUR_300_AGC_x15_camo_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_Mk17IUR_300_AGC_x15_camo_TacReload: hlc_wp_MK17IUR_300_AGC_x15_camo
	{
		magazineReloadSwitchPhase="(40 / 96)";
		scopeArsenal=0;
		reloadMagazineSound[]=
		{
			"\nia_wp_SCAR\snd\mk16_reload_X15_partial.ogg",
			0.85000002,
			1,
			25
		};
		reloadAction="NIA_GestureReload_Mk16_X15_Tactical";
		model="nia_wp_SCAR\mesh\Rifle\MK17IUR_556_AGC_TacReload.p3d";
	};
	class hlc_wp_MK17IUR_762R: hlc_wp_MK17IUR_300
	{
		author="Toadie";
		dlc="Niarms_SCAR";
		displayName="$STR_NIA_rifle_MK17IUR_762R";
		descriptionShort="$STR_NIA_MK17IUR_762R_DESC";
		scope=2;
		ACE_barrelTwist=254;
		ACE_barrelLength=400;
		ACE_railHeightAboveBore=3.8;
		magazines[]=
		{
			"hlc_30Rnd_762x39_b_ak",
			"hlc_30Rnd_762x39_t_ak",
			"hlc_30rnd_762x39_m_ak",
			"hlc_30rnd_762x39_s_ak",
			"hlc_30Rnd_762x39_AP_ak",
			"hlc_30Rnd_762x39_b_ak_6L10",
			"hlc_30Rnd_762x39_t_ak_6L10",
			"hlc_30rnd_762x39_m_ak_6L10",
			"hlc_30rnd_762x39_s_ak_6L10",
			"hlc_30Rnd_762x39_AP_ak_6L10",
			"hlc_30Rnd_762x39_b_ak_Valmet",
			"hlc_30Rnd_762x39_t_ak_Valmet",
			"hlc_30rnd_762x39_m_ak_Valmet",
			"hlc_30rnd_762x39_s_ak_Valmet",
			"hlc_30Rnd_762x39_AP_ak_Valmet",
			"hlc_30Rnd_762x39_b_ak_PMAG",
			"hlc_30Rnd_762x39_t_ak_PMAG",
			"hlc_30rnd_762x39_m_ak_PMAG",
			"hlc_30rnd_762x39_s_ak_PMAG",
			"hlc_30Rnd_762x39_AP_ak_PMAG",
			"hlc_30Rnd_762x39_b_ak_PMAGD",
			"hlc_30Rnd_762x39_t_ak_PMAGD",
			"hlc_30rnd_762x39_m_ak_PMAGD",
			"hlc_30rnd_762x39_s_ak_PMAGD",
			"hlc_30Rnd_762x39_AP_ak_PMAGD",
			"hlc_40Rnd_762x39_b_rpk",
			"hlc_45Rnd_762x39_m_rpk",
			"HLC_45rnd_762x39_T_RPK",
			"hlc_45Rnd_762x39_AP_rpk",
			"hlc_75Rnd_762x39_b_rpk",
			"hlc_75Rnd_762x39_m_rpk",
			"hlc_75Rnd_762x39_t_rpk",
			"hlc_75Rnd_762x39_AP_rpk",
			"30Rnd_762x39_Mag_F",
			"30Rnd_762x39_Mag_Green_F",
			"30Rnd_762x39_Mag_Tracer_F",
			"30Rnd_762x39_Mag_Tracer_Green_F"
		};
		magazineWell[]=
		{
			"CBA_762x39_AK",
			"CBA_762x39_RPK"
		};
		discretedistance[]={200,300,400,500,600};
		discretedistanceinitindex=0;
		discreteDistanceCameraPoint[]=
		{
			"eye",
			"eye_300",
			"eye_400",
			"eye_500",
			"eye_600"
		};
		cameraDir="eye_look";
		recoil="recoil_mx";
		baseWeapon="hlc_wp_MK17IUR_762R";
		mass=78.043999;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=78.043999;
		};
		inertia=0.35800001;
		dexterity=1.5164037;
		aimTransitionSpeed=1.0614825;
		class LinkedItems
		{
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="hlc_muzzle_Miter18T";
			};
		};
		model="nia_wp_SCAR\mesh\rifle\MK17IUR_762R.p3d";
		picture="\nia_wp_SCAR\tex\ui\hlc_wp_MK17IUR_762R_ca";
		UiPicture="\A3\weapons_f\data\UI\icon_regular_CA.paa";
		reloadAction="NIA_GestureReload_Mk17IUR_762";
		reloadMagazineSound[]=
		{
			"nia_wp_SCAR\snd\Mk17IUR_762R_reload_short.ogg",
			0.80000001,
			1,
			25
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
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"NIA_SCAR_300AAC_NEW_Shot_SoundSet",
					"NIA_SCARL_tail_SoundSet"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"NIA_SCARL_silencerShot_SoundSet",
					"NIA_SCARL_silencerTail_SoundSet"
				};
			};
			dispersion=0.00049162103;
			reloadtime="(60/600)";
			aiRateOfFire=1;
			aiRateOfFireDistance=350;
			aiRateOfFireDispersion=2;
			minRange=20;
			minRangeProbab=0.69999999;
			midRange=150;
			midRangeProbab=0.5;
			maxRange=500;
			maxRangeProbab=0.1;
		};
		class Burst: Mode_Burst
		{
			sounds[]=
			{
				"StandardSound",
				"SilencedSound"
			};
			class BaseSoundModeType
			{
				weaponSoundEffect="DefaultRifle";
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"NIA_SCAR_300AAC_NEW_Shot_SoundSet",
					"NIA_SCARL_tail_SoundSet"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"NIA_SCARL_silencerShot_SoundSet",
					"NIA_SCARL_silencerTail_SoundSet"
				};
			};
			dispersion=0.00059634499;
			reloadtime="(60/600)";
			aiRateOfFire=1;
			aiRateOfFireDistance=100;
			aiRateOfFireDispersion=1;
			minRange=0;
			minRangeProbab=0.2;
			midRange=20;
			midRangeProbab=0.80000001;
			maxRange=40;
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
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"NIA_SCAR_300AAC_NEW_Shot_SoundSet",
					"NIA_SCARL_tail_SoundSet"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"NIA_SCARL_silencerShot_SoundSet",
					"NIA_SCARL_silencerTail_SoundSet"
				};
			};
			dispersion=0.00062543503;
			reloadtime="(60/600)";
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
		class nia_magSwitch
		{
			default="hlc_wp_MK17IUR_762R";
		};
		class nia_gripSwitch
		{
			VFG="hlc_wp_MK17IUR_762R_grip";
			AFG="hlc_wp_MK17IUR_762R_grip2";
			VFG2="hlc_wp_MK17IUR_762R_grip3";
			default="hlc_wp_MK17IUR_762R";
		};
		rhs_grip1_change="hlc_wp_MK17IUR_762R_grip";
		rhs_grip2_change="hlc_wp_MK17IUR_762R_grip2";
		rhs_grip3_change="hlc_wp_MK17IUR_762R_grip3";
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
			class hlc_wp_MK17IUR_762R
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_Mk17IUR_762R_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_Mk17IUR_762R_TacReload: hlc_wp_MK17IUR_762R
	{
		magazineReloadSwitchPhase="(40 / 96)";
		scopeArsenal=0;
		reloadMagazineSound[]=
		{
			"\nia_wp_SCAR\snd\Mk17IUR_762R_reload_short_partial.ogg",
			0.85000002,
			1,
			25
		};
		reloadAction="NIA_GestureReload_Mk17IUR_762_Tactical";
		model="nia_wp_SCAR\mesh\Rifle\MK17IUR_762R_TacReload.p3d";
		rhs_grip1_change="hlc_wp_MK17IUR_762R_grip";
		rhs_grip2_change="hlc_wp_MK17IUR_762R_grip2";
		rhs_grip3_change="hlc_wp_MK17IUR_762R_grip3";
		class nia_gripSwitch
		{
			VFG="hlc_wp_MK17IUR_762R_grip";
			AFG="hlc_wp_MK17IUR_762R_grip2";
			VFG2="hlc_wp_MK17IUR_762R_grip3";
			default="hlc_wp_Mk17IUR_762R_TacReload";
		};
	};
	class hlc_wp_MK17IUR_762R_grip: hlc_wp_MK17IUR_762R
	{
		scopeArsenal=0;
		dexterity=1.6212438;
		aimTransitionSpeed=1.1348706;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handpose_VFG.rtm"
		};
		class nia_magSwitch
		{
			default="hlc_wp_MK17IUR_762R_grip";
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
			class hlc_wp_MK17IUR_762R_grip
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_Mk17IUR_762R_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_MK17IUR_762R_grip2: hlc_wp_MK17IUR_762R
	{
		scopeArsenal=0;
		inertia="(0.3435*0.85)";
		dexterity=1.6212438;
		aimTransitionSpeed=1.1348706;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handpose_AFG.rtm"
		};
		class nia_magSwitch
		{
			default="hlc_wp_MK17IUR_762R_grip2";
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
			class hlc_wp_MK17IUR_762R_grip2
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_Mk17IUR_762R_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_MK17IUR_762R_grip3: hlc_wp_MK17IUR_762R
	{
		scopeArsenal=0;
		dexterity=1.6212438;
		aimTransitionSpeed=1.1348706;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handpose_VFG.rtm"
		};
		class nia_magSwitch
		{
			default="hlc_wp_MK17IUR_762R_grip3";
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
			class hlc_wp_MK17IUR_762R_grip3
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_Mk17IUR_762R_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_MK17IUR_762R_camo: hlc_wp_MK17IUR_762R
	{
		author="Toadie";
		dlc="Niarms_SCAR";
		displayName="$STR_NIA_rifle_MK17IUR_762R_camo";
		scope=2;
		baseWeapon="hlc_wp_MK17IUR_762R_camo";
		picture="\nia_wp_SCAR\tex\ui\hlc_wp_MK17IUR_762R_camo_ca";
		hiddenSelectionsTextures[]=
		{
			"nia_wp_SCAR\tex\toadie_SCAR\scar_common_camo_co.paa",
			"nia_wp_SCAR\tex\toadie_SCAR\scar_lower_IUR_camo_co.paa",
			"nia_wp_SCAR\tex\toadie_SCAR\stock_camo_co.paa",
			"nia_wp_SCAR\tex\toadie_SCAR\upper_scarh_MK17_camo_co.paa"
		};
		HiddenSelectionsMaterials[]=
		{
			"nia_wp_SCAR\mat\scar_common_camo.rvmat",
			"nia_wp_SCAR\mat\scar_lowers_IUR_camo.rvmat",
			"nia_wp_SCAR\mat\scar_stock_camo.rvmat",
			"nia_wp_SCAR\mat\scar_upper_scarh_MK17_camo.rvmat"
		};
		class nia_magSwitch
		{
			default="hlc_wp_MK17IUR_762R_camo";
		};
		class nia_gripSwitch
		{
			VFG="hlc_wp_MK17IUR_762R_camo_grip";
			AFG="hlc_wp_MK17IUR_762R_camo_grip2";
			VFG2="hlc_wp_MK17IUR_762R_camo_grip3";
			default="hlc_wp_MK17IUR_762R_camo";
		};
		rhs_grip1_change="hlc_wp_MK17IUR_762R_camo_grip";
		rhs_grip2_change="hlc_wp_MK17IUR_762R_camo_grip2";
		rhs_grip3_change="hlc_wp_MK17IUR_762R_camo_grip3";
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
			class hlc_wp_MK17IUR_762R_camo
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_Mk17IUR_762R_camo_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_Mk17IUR_762R_camo_TacReload: hlc_wp_MK17IUR_762R_camo
	{
		magazineReloadSwitchPhase="(40 / 96)";
		scopeArsenal=0;
		reloadMagazineSound[]=
		{
			"\nia_wp_SCAR\snd\Mk17IUR_762R_reload_short_partial.ogg",
			0.85000002,
			1,
			25
		};
		reloadAction="NIA_GestureReload_Mk17IUR_762_Tactical";
		model="nia_wp_SCAR\mesh\Rifle\MK17IUR_762R_TacReload.p3d";
		rhs_grip1_change="hlc_wp_MK17IUR_762R_camo_grip";
		rhs_grip2_change="hlc_wp_MK17IUR_762R_camo_grip2";
		rhs_grip3_change="hlc_wp_MK17IUR_762R_camo_grip3";
		class nia_gripSwitch
		{
			VFG="hlc_wp_MK17IUR_762R_camo_grip";
			AFG="hlc_wp_MK17IUR_762R_camo_grip2";
			VFG2="hlc_wp_MK17IUR_762R_camo_grip3";
			default="hlc_wp_Mk17IUR_762R_camo_TacReload";
		};
	};
	class hlc_wp_MK17IUR_762R_camo_grip: hlc_wp_MK17IUR_762R_camo
	{
		scopeArsenal=0;
		dexterity=1.6212438;
		aimTransitionSpeed=1.1348706;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handpose_VFG.rtm"
		};
		class nia_magSwitch
		{
			default="hlc_wp_MK17IUR_762R_camo_grip";
		};
	};
	class hlc_wp_MK17IUR_762R_camo_grip2: hlc_wp_MK17IUR_762R_camo
	{
		scopeArsenal=0;
		inertia="(0.3435*0.85)";
		dexterity=1.6212438;
		aimTransitionSpeed=1.1348706;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handpose_AFG.rtm"
		};
		class nia_magSwitch
		{
			default="hlc_wp_MK17IUR_762R_camo_grip2";
		};
	};
	class hlc_wp_MK17IUR_762R_camo_grip3: hlc_wp_MK17IUR_762R_camo
	{
		scopeArsenal=0;
		dexterity=1.6212438;
		aimTransitionSpeed=1.1348706;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handpose_VFG.rtm"
		};
		class nia_magSwitch
		{
			default="hlc_wp_MK17IUR_762R_camo_grip3";
		};
	};
	class hlc_WP_SSR: hlc_wp_SCARH_STD
	{
		author="Toadie";
		dlc="Niarms_SCAR";
		displayName="$STR_NIA_rifle_SSR";
		descriptionShort="$STR_NIA_SSR_DESC";
		scope=2;
		UiPicture="\A3\weapons_f\data\UI\icon_sniper_CA.paa";
		ACE_barrelTwist=304.79999;
		ACE_barrelLength=510;
		baseWeapon="hlc_WP_SSR";
		mass=105.73;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=105.73;
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
				class compatibleItems: compatibleItems
				{
					HLC_Panel_Side_SCAR_Long_FN5cm_Desert=1;
					HLC_Panel_Side_SCAR_Long_2xFN5cm_Desert=1;
					HLC_Panel_Side_SCAR_Long_FN10cm_Desert=1;
					HLC_Panel_Side_SCAR_Long_FN15cm_Desert=1;
					HLC_Panel_Side_SCAR_Long_Ladder_S_Desert=1;
					HLC_Panel_Side_SCAR_Long_Ladder_M_Desert=1;
					HLC_Panel_Side_SCAR_Long_Ladder_L_Desert=1;
					HLC_Panel_Side_SCAR_Long_MagpulXT_Desert=1;
					HLC_Panel_Side_SCAR_Long_XTME_Desert=1;
					HLC_Panel_Side_SCAR_Long_2xXTME_Desert=1;
					HLC_Panel_Side_SCAR_Long_4xXTME_Desert=1;
					HLC_Panel_Side_SCAR_Long_FN5cm_Black=1;
					HLC_Panel_Side_SCAR_Long_2xFN5cm_Black=1;
					HLC_Panel_Side_SCAR_Long_FN10cm_Black=1;
					HLC_Panel_Side_SCAR_Long_FN15cm_Black=1;
					HLC_Panel_Side_SCAR_Long_Ladder_S_Black=1;
					HLC_Panel_Side_SCAR_Long_Ladder_M_Black=1;
					HLC_Panel_Side_SCAR_Long_Ladder_L_Black=1;
					HLC_Panel_Side_SCAR_Long_MagpulXT_Black=1;
					HLC_Panel_Side_SCAR_Long_XTME_Black=1;
					HLC_Panel_Side_SCAR_Long_2xXTME_Black=1;
					HLC_Panel_Side_SCAR_Long_4xXTME_Black=1;
					HLC_Panel_Side_SCAR_Long_FN5cm_OD=1;
					HLC_Panel_Side_SCAR_Long_2xFN5cm_OD=1;
					HLC_Panel_Side_SCAR_Long_FN10cm_OD=1;
					HLC_Panel_Side_SCAR_Long_FN15cm_OD=1;
					HLC_Panel_Side_SCAR_Long_Ladder_S_OD=1;
					HLC_Panel_Side_SCAR_Long_Ladder_M_OD=1;
					HLC_Panel_Side_SCAR_Long_Ladder_L_OD=1;
					HLC_Panel_Side_SCAR_Long_MagpulXT_OD=1;
					HLC_Panel_Side_SCAR_Long_XTME_OD=1;
					HLC_Panel_Side_SCAR_Long_2xXTME_OD=1;
					HLC_Panel_Side_SCAR_Long_4xXTME_OD=1;
					HLC_Panel_Side_SCAR_Long_FN5cm_RG=1;
					HLC_Panel_Side_SCAR_Long_2xFN5cm_RG=1;
					HLC_Panel_Side_SCAR_Long_FN10cm_RG=1;
					HLC_Panel_Side_SCAR_Long_FN15cm_RG=1;
					HLC_Panel_Side_SCAR_Long_Ladder_S_RG=1;
					HLC_Panel_Side_SCAR_Long_Ladder_M_RG=1;
					HLC_Panel_Side_SCAR_Long_Ladder_L_RG=1;
					HLC_Panel_Side_SCAR_Long_MagpulXT_RG=1;
					HLC_Panel_Side_SCAR_Long_XTME_RG=1;
					HLC_Panel_Side_SCAR_Long_2xXTME_RG=1;
					HLC_Panel_Side_SCAR_Long_4xXTME_RG=1;
					HLC_Panel_Side_SCAR_Long_Ladder_S_Pride=1;
					HLC_Panel_Side_SCAR_Long_Ladder_M_Pride=1;
					HLC_Panel_Side_SCAR_Long_Ladder_L_Pride=1;
					HLC_Panel_Side_SCAR_Long_MagpulXT_Pride=1;
				};
			};
			class MuzzleSlot: asdg_MuzzleSlot_762
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
		inertia=0.48500001;
		dexterity=1.1730366;
		aimTransitionSpeed=0.82112557;
		class LinkedItems
		{
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="hlc_muzzle_OEMDevice";
			};
		};
		picture="\nia_wp_SCAR\tex\ui\hlc_WP_SSR_ca";
		model="nia_wp_SCAR\mesh\rifle\SSR.p3d";
		reloadAction="NIA_GestureReload_SSR";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handgestUre_SSR_STD.rtm"
		};
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3",
			"Camo4",
			"Camo5",
			"Camo6"
		};
		hiddenSelectionsTextures[]=
		{
			"nia_wp_SCAR\tex\toadie_SCAR\scar_common_tan_co.paa",
			"nia_wp_SCAR\tex\toadie_SCAR\SCAR_Lower_semi_tan_co.paa",
			"nia_wp_SCAR\tex\toadie_SCAR\Stock_SSR_tan_co.paa",
			"nia_wp_SCAR\tex\toadie_SCAR\upper_ssr_tan_co.paa",
			"nia_wp_SCAR\tex\toadie_SCAR\stock_tan_co.paa",
			"nia_wp_SCAR\tex\toadie_SCAR\upper_scarh_tan_co.paa"
		};
		HiddenSelectionsMaterials[]=
		{
			"nia_wp_SCAR\mat\scar_common.rvmat",
			"nia_wp_SCAR\mat\SCAR_Lowers_semi.rvmat",
			"nia_wp_SCAR\mat\SCAR_Stock_SSR.rvmat",
			"nia_wp_SCAR\mat\scar_upper_ssr.rvmat",
			"nia_wp_SCAR\mat\scar_stock.rvmat",
			"nia_wp_SCAR\mat\scar_upper_scarH.rvmat"
		};
		modes[]=
		{
			"Single",
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
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"NIA_SCARHPR_NEW_Shot_SoundSet",
					"NIA_SCARH_tail_SoundSet"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"NIA_SCARH_silencerShot_SoundSet",
					"NIA_SCARH_silencerTail_SoundSet"
				};
			};
			dispersion=0.00020944802;
			reloadtime="(60/600)";
			aiRateOfFire=1;
			aiRateOfFireDistance=350;
			aiRateOfFireDispersion=2;
			minRange=20;
			minRangeProbab=0.69999999;
			midRange=150;
			midRangeProbab=0.5;
			maxRange=500;
			maxRangeProbab=0.1;
		};
		class Burst: Mode_Burst
		{
			sounds[]=
			{
				"StandardSound",
				"SilencedSound"
			};
			class BaseSoundModeType
			{
				weaponSoundEffect="DefaultRifle";
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"NIA_SCARHPR_NEW_Shot_SoundSet",
					"NIA_SCARH_tail_SoundSet"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"NIA_SCARH_silencerShot_SoundSet",
					"NIA_SCARH_silencerTail_SoundSet"
				};
			};
			dispersion=0.00037235199;
			reloadtime="(60/600)";
			aiRateOfFire=1;
			aiRateOfFireDistance=100;
			aiRateOfFireDispersion=1;
			minRange=0;
			minRangeProbab=0.2;
			midRange=20;
			midRangeProbab=0.80000001;
			maxRange=40;
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
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"NIA_SCARHPR_NEW_Shot_SoundSet",
					"NIA_SCARH_tail_SoundSet"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"NIA_SCARH_silencerShot_SoundSet",
					"NIA_SCARH_silencerTail_SoundSet"
				};
			};
			dispersion=0.00037235199;
			reloadtime="(60/600)";
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
		class nia_magSwitch
		{
			hlc_10Rnd_762x51_B_SCARH_tan="hlc_wp_SSR_10Rnd";
			hlc_10Rnd_762x51_mk316_SCARH_tan="hlc_wp_SSR_10Rnd";
			hlc_10Rnd_762x51_Barrier_SCARH_tan="hlc_wp_SSR_10Rnd";
			hlc_10Rnd_762x51_t_SCARH_tan="hlc_wp_SSR_10Rnd";
			hlc_10Rnd_762x51_TDim_SCARH_tan="hlc_wp_SSR_10Rnd";
			hlc_10Rnd_762x51_S_SCARH_tan="hlc_wp_SSR_10Rnd";
			hlc_10Rnd_762x51_B_SCARH="hlc_wp_SSR_10Rnd";
			hlc_10Rnd_762x51_mk316_SCARH="hlc_wp_SSR_10Rnd";
			hlc_10Rnd_762x51_Barrier_SCARH="hlc_wp_SSR_10Rnd";
			hlc_10Rnd_762x51_t_SCARH="hlc_wp_SSR_10Rnd";
			hlc_10Rnd_762x51_TDim_SCARH="hlc_wp_SSR_10Rnd";
			hlc_10Rnd_762x51_S_SCARH="hlc_wp_SSR_10Rnd";
			hlc_10Rnd_762x51_B_SCARH_camo="hlc_wp_SSR_10Rnd";
			hlc_10Rnd_762x51_mk316_SCARH_camo="hlc_wp_SSR_10Rnd";
			hlc_10Rnd_762x51_Barrier_SCARH_camo="hlc_wp_SSR_10Rnd";
			hlc_10Rnd_762x51_t_SCARH_camo="hlc_wp_SSR_10Rnd";
			hlc_10Rnd_762x51_TDim_SCARH_camo="hlc_wp_SSR_10Rnd";
			hlc_10Rnd_762x51_S_SCARH_camo="hlc_wp_SSR_10Rnd";
			default="hlc_wp_SSR";
		};
		class nia_gripSwitch
		{
			VFG="hlc_WP_SSR_grip";
			AFG="hlc_WP_SSR_grip2";
			VFG2="hlc_WP_SSR_grip3";
			default="hlc_WP_SSR";
		};
		rhs_grip1_change="hlc_WP_SSR_grip";
		rhs_grip2_change="hlc_WP_SSR_grip2";
		rhs_grip3_change="hlc_WP_SSR_grip3";
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
			class hlc_wp_SSR
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SSR_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SSR_TacReload: hlc_WP_SSR
	{
		magazineReloadSwitchPhase="(40 / 96)";
		scopeArsenal=0;
		reloadMagazineSound[]=
		{
			"\nia_wp_SCAR\snd\mk17_reload_Partial.ogg",
			0.85000002,
			1,
			25
		};
		reloadAction="NIA_GestureReload_SSR_Tactical";
		model="nia_wp_SCAR\mesh\Rifle\SSR_TacReload.p3d";
		rhs_grip1_change="hlc_wp_SSR_grip";
		rhs_grip2_change="hlc_wp_SSR_grip2";
		rhs_grip3_change="hlc_wp_SSR_grip3";
		class nia_gripSwitch
		{
			VFG="hlc_wp_SSR_grip";
			AFG="hlc_wp_SSR_grip2";
			VFG2="hlc_wp_SSR_grip3";
			default="hlc_wp_SSR_TacReload";
		};
	};
	class hlc_wp_SSR_grip: hlc_WP_SSR
	{
		scopeArsenal=0;
		dexterity=1.2730366;
		aimTransitionSpeed=0.89112562;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handgesture_SSR_VFG.rtm"
		};
		class nia_magSwitch
		{
			hlc_10Rnd_762x51_B_SCARH_tan="hlc_wp_SSR_10Rnd_grip";
			hlc_10Rnd_762x51_mk316_SCARH_tan="hlc_wp_SSR_10Rnd_grip";
			hlc_10Rnd_762x51_Barrier_SCARH_tan="hlc_wp_SSR_10Rnd_grip";
			hlc_10Rnd_762x51_t_SCARH_tan="hlc_wp_SSR_10Rnd_grip";
			hlc_10Rnd_762x51_TDim_SCARH_tan="hlc_wp_SSR_10Rnd_grip";
			hlc_10Rnd_762x51_S_SCARH_tan="hlc_wp_SSR_10Rnd_grip";
			hlc_10Rnd_762x51_B_SCARH="hlc_wp_SSR_10Rnd_grip";
			hlc_10Rnd_762x51_mk316_SCARH="hlc_wp_SSR_10Rnd_grip";
			hlc_10Rnd_762x51_Barrier_SCARH="hlc_wp_SSR_10Rnd_grip";
			hlc_10Rnd_762x51_t_SCARH="hlc_wp_SSR_10Rnd_grip";
			hlc_10Rnd_762x51_TDim_SCARH="hlc_wp_SSR_10Rnd_grip";
			hlc_10Rnd_762x51_S_SCARH="hlc_wp_SSR_10Rnd_grip";
			hlc_10Rnd_762x51_B_SCARH_camo="hlc_wp_SSR_10Rnd_grip";
			hlc_10Rnd_762x51_mk316_SCARH_camo="hlc_wp_SSR_10Rnd_grip";
			hlc_10Rnd_762x51_Barrier_SCARH_camo="hlc_wp_SSR_10Rnd_grip";
			hlc_10Rnd_762x51_t_SCARH_camo="hlc_wp_SSR_10Rnd_grip";
			hlc_10Rnd_762x51_TDim_SCARH_camo="hlc_wp_SSR_10Rnd_grip";
			hlc_10Rnd_762x51_S_SCARH_camo="hlc_wp_SSR_10Rnd_grip";
			default="hlc_wp_SSR_grip";
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
			class hlc_WP_SSR_grip
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SSR_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SSR_grip2: hlc_WP_SSR
	{
		scopeArsenal=0;
		inertia="(0.485*0.85)";
		dexterity=1.2730366;
		aimTransitionSpeed=0.89112562;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handgesture_SSR_AFG.rtm"
		};
		class nia_magSwitch
		{
			hlc_10Rnd_762x51_B_SCARH_tan="hlc_wp_SSR_10Rnd_grip2";
			hlc_10Rnd_762x51_mk316_SCARH_tan="hlc_wp_SSR_10Rnd_grip2";
			hlc_10Rnd_762x51_Barrier_SCARH_tan="hlc_wp_SSR_10Rnd_grip2";
			hlc_10Rnd_762x51_t_SCARH_tan="hlc_wp_SSR_10Rnd_grip2";
			hlc_10Rnd_762x51_TDim_SCARH_tan="hlc_wp_SSR_10Rnd_grip2";
			hlc_10Rnd_762x51_S_SCARH_tan="hlc_wp_SSR_10Rnd_grip2";
			hlc_10Rnd_762x51_B_SCARH="hlc_wp_SSR_10Rnd_grip2";
			hlc_10Rnd_762x51_mk316_SCARH="hlc_wp_SSR_10Rnd_grip2";
			hlc_10Rnd_762x51_Barrier_SCARH="hlc_wp_SSR_10Rnd_grip2";
			hlc_10Rnd_762x51_t_SCARH="hlc_wp_SSR_10Rnd_grip2";
			hlc_10Rnd_762x51_TDim_SCARH="hlc_wp_SSR_10Rnd_grip2";
			hlc_10Rnd_762x51_S_SCARH="hlc_wp_SSR_10Rnd_grip2";
			hlc_10Rnd_762x51_B_SCARH_camo="hlc_wp_SSR_10Rnd_grip2";
			hlc_10Rnd_762x51_mk316_SCARH_camo="hlc_wp_SSR_10Rnd_grip2";
			hlc_10Rnd_762x51_Barrier_SCARH_camo="hlc_wp_SSR_10Rnd_grip2";
			hlc_10Rnd_762x51_t_SCARH_camo="hlc_wp_SSR_10Rnd_grip2";
			hlc_10Rnd_762x51_TDim_SCARH_camo="hlc_wp_SSR_10Rnd_grip2";
			hlc_10Rnd_762x51_S_SCARH_camo="hlc_wp_SSR_10Rnd_grip2";
			default="hlc_wp_SSR_grip2";
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
			class hlc_WP_SSR_grip2
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SSR_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SSR_grip3: hlc_WP_SSR
	{
		scopeArsenal=0;
		dexterity=1.2730366;
		aimTransitionSpeed=0.89112562;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handgesture_SSR_VFG.rtm"
		};
		class nia_magSwitch
		{
			hlc_10Rnd_762x51_B_SCARH_tan="hlc_wp_SSR_10Rnd_grip3";
			hlc_10Rnd_762x51_mk316_SCARH_tan="hlc_wp_SSR_10Rnd_grip3";
			hlc_10Rnd_762x51_Barrier_SCARH_tan="hlc_wp_SSR_10Rnd_grip3";
			hlc_10Rnd_762x51_t_SCARH_tan="hlc_wp_SSR_10Rnd_grip3";
			hlc_10Rnd_762x51_TDim_SCARH_tan="hlc_wp_SSR_10Rnd_grip3";
			hlc_10Rnd_762x51_S_SCARH_tan="hlc_wp_SSR_10Rnd_grip3";
			hlc_10Rnd_762x51_B_SCARH="hlc_wp_SSR_10Rnd_grip3";
			hlc_10Rnd_762x51_mk316_SCARH="hlc_wp_SSR_10Rnd_grip3";
			hlc_10Rnd_762x51_Barrier_SCARH="hlc_wp_SSR_10Rnd_grip3";
			hlc_10Rnd_762x51_t_SCARH="hlc_wp_SSR_10Rnd_grip3";
			hlc_10Rnd_762x51_TDim_SCARH="hlc_wp_SSR_10Rnd_grip3";
			hlc_10Rnd_762x51_S_SCARH="hlc_wp_SSR_10Rnd_grip3";
			hlc_10Rnd_762x51_B_SCARH_camo="hlc_wp_SSR_10Rnd_grip3";
			hlc_10Rnd_762x51_mk316_SCARH_camo="hlc_wp_SSR_10Rnd_grip3";
			hlc_10Rnd_762x51_Barrier_SCARH_camo="hlc_wp_SSR_10Rnd_grip3";
			hlc_10Rnd_762x51_t_SCARH_camo="hlc_wp_SSR_10Rnd_grip3";
			hlc_10Rnd_762x51_TDim_SCARH_camo="hlc_wp_SSR_10Rnd_grip3";
			hlc_10Rnd_762x51_S_SCARH_camo="hlc_wp_SSR_10Rnd_grip3";
			default="hlc_wp_SSR_grip3";
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
			class hlc_WP_SSR_grip3
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SSR_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SSR_10rnd: hlc_WP_SSR
	{
		scopeArsenal=0;
		reloadAction="NIA_GestureReload_SSR_10rnd";
		baseweapon="hlc_wp_SSR_10rnd";
		class nia_gripSwitch
		{
			VFG="hlc_wp_SSR_10rnd_grip";
			AFG="hlc_wp_SSR_10rnd_grip2";
			VFG2="hlc_wp_SSR_10rnd_grip3";
			default="hlc_wp_SSR_10rnd";
		};
		rhs_grip1_change="hlc_wp_SSR_10rnd_grip";
		rhs_grip2_change="hlc_wp_SSR_10rnd_grip2";
		rhs_grip3_change="hlc_wp_SSR_10rnd";
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
			class hlc_wp_SSR_10rnd
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SSR_10rnd_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SSR_10rnd_TacReload: hlc_wp_SSR_10rnd
	{
		magazineReloadSwitchPhase="(40 / 96)";
		scopeArsenal=0;
		reloadMagazineSound[]=
		{
			"\nia_wp_SCAR\snd\mk17_reload_Partial.ogg",
			0.85000002,
			1,
			25
		};
		reloadAction="NIA_GestureReload_SSR_10rnd_Tactical";
		model="nia_wp_SCAR\mesh\Rifle\SSR_TacReload.p3d";
		rhs_grip1_change="hlc_wp_SSR_10rnd_grip";
		rhs_grip2_change="hlc_wp_SSR_10rnd_grip2";
		rhs_grip3_change="hlc_wp_SSR_10rnd_grip3";
		class nia_gripSwitch
		{
			VFG="hlc_wp_SSR_10rnd_grip";
			AFG="hlc_wp_SSR_10rnd_grip2";
			VFG2="hlc_wp_SSR_10rnd_grip3";
			default="hlc_wp_SSR_10rnd_TacReload";
		};
	};
	class hlc_wp_SSR_10rnd_grip: hlc_wp_SSR_10rnd
	{
		scopeArsenal=0;
		dexterity=1.2730366;
		aimTransitionSpeed=0.89112562;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handgesture_SSR_VFG.rtm"
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
			class hlc_wp_SSR_10rnd_grip
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SSR_10rnd_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SSR_10rnd_grip2: hlc_wp_SSR_10rnd
	{
		scopeArsenal=0;
		inertia="(0.485*0.85)";
		dexterity=1.2730366;
		aimTransitionSpeed=0.89112562;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handgesture_SSR_AFG.rtm"
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
			class hlc_wp_SSR_10rnd_grip2
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SSR_10rnd_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SSR_10rnd_grip3: hlc_wp_SSR_10rnd
	{
		scopeArsenal=0;
		dexterity=1.2730366;
		aimTransitionSpeed=0.89112562;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handgesture_SSR_VFG.rtm"
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
			class hlc_wp_SSR_10rnd_grip3
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SSR_10rnd_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SSR_Blk: hlc_WP_SSR
	{
		author="Toadie";
		dlc="Niarms_SCAR";
		displayName="$STR_NIA_rifle_SSR_blk";
		scope=2;
		baseWeapon="hlc_wp_SSR_Blk";
		picture="\nia_wp_SCAR\tex\ui\hlc_wp_SSR_Blk_ca";
		hiddenSelectionsTextures[]=
		{
			"nia_wp_SCAR\tex\toadie_SCAR\scar_common_co.paa",
			"nia_wp_SCAR\tex\toadie_SCAR\SCAR_Lower_semi_co.paa",
			"nia_wp_SCAR\tex\toadie_SCAR\stock_ssr_co.paa",
			"nia_wp_SCAR\tex\toadie_SCAR\upper_SSR_co.paa",
			"nia_wp_SCAR\tex\toadie_SCAR\upper_scarh_co.paa"
		};
		class nia_magSwitch
		{
			hlc_10Rnd_762x51_B_SCARH_tan="hlc_wp_SSR_Blk_10Rnd";
			hlc_10Rnd_762x51_mk316_SCARH_tan="hlc_wp_SSR_Blk_10Rnd";
			hlc_10Rnd_762x51_Barrier_SCARH_tan="hlc_wp_SSR_Blk_10Rnd";
			hlc_10Rnd_762x51_t_SCARH_tan="hlc_wp_SSR_Blk_10Rnd";
			hlc_10Rnd_762x51_TDim_SCARH_tan="hlc_wp_SSR_Blk_10Rnd";
			hlc_10Rnd_762x51_S_SCARH_tan="hlc_wp_SSR_Blk_10Rnd";
			hlc_10Rnd_762x51_B_SCARH="hlc_wp_SSR_Blk_10Rnd";
			hlc_10Rnd_762x51_mk316_SCARH="hlc_wp_SSR_Blk_10Rnd";
			hlc_10Rnd_762x51_Barrier_SCARH="hlc_wp_SSR_Blk_10Rnd";
			hlc_10Rnd_762x51_t_SCARH="hlc_wp_SSR_Blk_10Rnd";
			hlc_10Rnd_762x51_TDim_SCARH="hlc_wp_SSR_Blk_10Rnd";
			hlc_10Rnd_762x51_S_SCARH="hlc_wp_SSR_Blk_10Rnd";
			hlc_10Rnd_762x51_B_SCARH_camo="hlc_wp_SSR_Blk_10Rnd";
			hlc_10Rnd_762x51_mk316_SCARH_camo="hlc_wp_SSR_Blk_10Rnd";
			hlc_10Rnd_762x51_Barrier_SCARH_camo="hlc_wp_SSR_Blk_10Rnd";
			hlc_10Rnd_762x51_t_SCARH_camo="hlc_wp_SSR_Blk_10Rnd";
			hlc_10Rnd_762x51_TDim_SCARH_camo="hlc_wp_SSR_Blk_10Rnd";
			hlc_10Rnd_762x51_S_SCARH_camo="hlc_wp_SSR_Blk_10Rnd";
			default="hlc_wp_SSR_Blk";
		};
		class nia_gripSwitch
		{
			VFG="hlc_wp_SSR_Blk_grip";
			AFG="hlc_wp_SSR_Blk_grip2";
			VFG2="hlc_wp_SSR_Blk_grip3";
			default="hlc_wp_SSR_Blk";
		};
		rhs_grip1_change="hlc_wp_SSR_Blk_grip";
		rhs_grip2_change="hlc_wp_SSR_Blk_grip2";
		rhs_grip3_change="hlc_wp_SSR_Blk_grip3";
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
			class hlc_wp_SSR_Blk
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SSR_Blk_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SSR_Blk_TacReload: hlc_wp_SSR_Blk
	{
		magazineReloadSwitchPhase="(40 / 96)";
		scopeArsenal=0;
		reloadMagazineSound[]=
		{
			"\nia_wp_SCAR\snd\mk17_reload_Partial.ogg",
			0.85000002,
			1,
			25
		};
		reloadAction="NIA_GestureReload_SSR_Tactical";
		model="nia_wp_SCAR\mesh\Rifle\SSR_TacReload.p3d";
		rhs_grip1_change="hlc_wp_SSR_Blk_grip";
		rhs_grip2_change="hlc_wp_SSR_Blk_grip2";
		rhs_grip3_change="hlc_wp_SSR_Blk_grip3";
		class nia_gripSwitch
		{
			VFG="hlc_wp_SSR_Blk_grip";
			AFG="hlc_wp_SSR_Blk_grip2";
			VFG2="hlc_wp_SSR_Blk_grip3";
			default="hlc_wp_SSR_Blk_TacReload";
		};
	};
	class hlc_wp_SSR_Blk_grip: hlc_wp_SSR_Blk
	{
		scopeArsenal=0;
		dexterity=1.2730366;
		aimTransitionSpeed=0.89112562;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handgesture_SSR_VFG.rtm"
		};
		class nia_magSwitch
		{
			hlc_10Rnd_762x51_B_SCARH_tan="hlc_wp_SSR_Blk_10Rnd_grip";
			hlc_10Rnd_762x51_mk316_SCARH_tan="hlc_wp_SSR_Blk_10Rnd_grip";
			hlc_10Rnd_762x51_Barrier_SCARH_tan="hlc_wp_SSR_Blk_10Rnd_grip";
			hlc_10Rnd_762x51_t_SCARH_tan="hlc_wp_SSR_Blk_10Rnd_grip";
			hlc_10Rnd_762x51_TDim_SCARH_tan="hlc_wp_SSR_Blk_10Rnd_grip";
			hlc_10Rnd_762x51_S_SCARH_tan="hlc_wp_SSR_Blk_10Rnd_grip";
			hlc_10Rnd_762x51_B_SCARH="hlc_wp_SSR_Blk_10Rnd_grip";
			hlc_10Rnd_762x51_mk316_SCARH="hlc_wp_SSR_Blk_10Rnd_grip";
			hlc_10Rnd_762x51_Barrier_SCARH="hlc_wp_SSR_Blk_10Rnd_grip";
			hlc_10Rnd_762x51_t_SCARH="hlc_wp_SSR_Blk_10Rnd_grip";
			hlc_10Rnd_762x51_TDim_SCARH="hlc_wp_SSR_Blk_10Rnd_grip";
			hlc_10Rnd_762x51_S_SCARH="hlc_wp_SSR_Blk_10Rnd_grip";
			hlc_10Rnd_762x51_B_SCARH_camo="hlc_wp_SSR_Blk_10Rnd_grip";
			hlc_10Rnd_762x51_mk316_SCARH_camo="hlc_wp_SSR_Blk_10Rnd_grip";
			hlc_10Rnd_762x51_Barrier_SCARH_camo="hlc_wp_SSR_Blk_10Rnd_grip";
			hlc_10Rnd_762x51_t_SCARH_camo="hlc_wp_SSR_Blk_10Rnd_grip";
			hlc_10Rnd_762x51_TDim_SCARH_camo="hlc_wp_SSR_Blk_10Rnd_grip";
			hlc_10Rnd_762x51_S_SCARH_camo="hlc_wp_SSR_Blk_10Rnd_grip";
			default="hlc_wp_SSR_Blk_grip";
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
			class hlc_wp_SSR_Blk_grip
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SSR_Blk_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SSR_Blk_grip2: hlc_wp_SSR_Blk
	{
		scopeArsenal=0;
		inertia="(0.485*0.85)";
		dexterity=1.2730366;
		aimTransitionSpeed=0.89112562;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handgesture_SSR_AFG.rtm"
		};
		class nia_magSwitch
		{
			hlc_10Rnd_762x51_B_SCARH_tan="hlc_wp_SSR_Blk_10Rnd_grip2";
			hlc_10Rnd_762x51_mk316_SCARH_tan="hlc_wp_SSR_Blk_10Rnd_grip2";
			hlc_10Rnd_762x51_Barrier_SCARH_tan="hlc_wp_SSR_Blk_10Rnd_grip2";
			hlc_10Rnd_762x51_t_SCARH_tan="hlc_wp_SSR_Blk_10Rnd_grip2";
			hlc_10Rnd_762x51_TDim_SCARH_tan="hlc_wp_SSR_Blk_10Rnd_grip2";
			hlc_10Rnd_762x51_S_SCARH_tan="hlc_wp_SSR_Blk_10Rnd_grip2";
			hlc_10Rnd_762x51_B_SCARH="hlc_wp_SSR_Blk_10Rnd_grip2";
			hlc_10Rnd_762x51_mk316_SCARH="hlc_wp_SSR_Blk_10Rnd_grip2";
			hlc_10Rnd_762x51_Barrier_SCARH="hlc_wp_SSR_Blk_10Rnd_grip2";
			hlc_10Rnd_762x51_t_SCARH="hlc_wp_SSR_Blk_10Rnd_grip2";
			hlc_10Rnd_762x51_TDim_SCARH="hlc_wp_SSR_Blk_10Rnd_grip2";
			hlc_10Rnd_762x51_S_SCARH="hlc_wp_SSR_Blk_10Rnd_grip2";
			hlc_10Rnd_762x51_B_SCARH_camo="hlc_wp_SSR_Blk_10Rnd_grip2";
			hlc_10Rnd_762x51_mk316_SCARH_camo="hlc_wp_SSR_Blk_10Rnd_grip2";
			hlc_10Rnd_762x51_Barrier_SCARH_camo="hlc_wp_SSR_Blk_10Rnd_grip2";
			hlc_10Rnd_762x51_t_SCARH_camo="hlc_wp_SSR_Blk_10Rnd_grip2";
			hlc_10Rnd_762x51_TDim_SCARH_camo="hlc_wp_SSR_Blk_10Rnd_grip2";
			hlc_10Rnd_762x51_S_SCARH_camo="hlc_wp_SSR_Blk_10Rnd_grip2";
			default="hlc_wp_SSR_Blk_grip2";
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
			class hlc_wp_SSR_Blk_grip2
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SSR_Blk_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SSR_Blk_grip3: hlc_wp_SSR_Blk
	{
		scopeArsenal=0;
		dexterity=1.2730366;
		aimTransitionSpeed=0.89112562;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handgesture_SSR_VFG.rtm"
		};
		class nia_magSwitch
		{
			hlc_10Rnd_762x51_B_SCARH_tan="hlc_wp_SSR_Blk_10Rnd_grip3";
			hlc_10Rnd_762x51_mk316_SCARH_tan="hlc_wp_SSR_Blk_10Rnd_grip3";
			hlc_10Rnd_762x51_Barrier_SCARH_tan="hlc_wp_SSR_Blk_10Rnd_grip3";
			hlc_10Rnd_762x51_t_SCARH_tan="hlc_wp_SSR_Blk_10Rnd_grip3";
			hlc_10Rnd_762x51_TDim_SCARH_tan="hlc_wp_SSR_Blk_10Rnd_grip3";
			hlc_10Rnd_762x51_S_SCARH_tan="hlc_wp_SSR_Blk_10Rnd_grip3";
			hlc_10Rnd_762x51_B_SCARH="hlc_wp_SSR_Blk_10Rnd_grip3";
			hlc_10Rnd_762x51_mk316_SCARH="hlc_wp_SSR_Blk_10Rnd_grip3";
			hlc_10Rnd_762x51_Barrier_SCARH="hlc_wp_SSR_Blk_10Rnd_grip3";
			hlc_10Rnd_762x51_t_SCARH="hlc_wp_SSR_Blk_10Rnd_grip3";
			hlc_10Rnd_762x51_TDim_SCARH="hlc_wp_SSR_Blk_10Rnd_grip3";
			hlc_10Rnd_762x51_S_SCARH="hlc_wp_SSR_Blk_10Rnd_grip3";
			hlc_10Rnd_762x51_B_SCARH_camo="hlc_wp_SSR_Blk_10Rnd_grip3";
			hlc_10Rnd_762x51_mk316_SCARH_camo="hlc_wp_SSR_Blk_10Rnd_grip3";
			hlc_10Rnd_762x51_Barrier_SCARH_camo="hlc_wp_SSR_Blk_10Rnd_grip3";
			hlc_10Rnd_762x51_t_SCARH_camo="hlc_wp_SSR_Blk_10Rnd_grip3";
			hlc_10Rnd_762x51_TDim_SCARH_camo="hlc_wp_SSR_Blk_10Rnd_grip3";
			hlc_10Rnd_762x51_S_SCARH_camo="hlc_wp_SSR_Blk_10Rnd_grip3";
			default="hlc_wp_SSR_Blk_grip3";
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
			class hlc_wp_SSR_Blk_grip3
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SSR_Blk_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SSR_blk_10rnd: hlc_wp_SSR_Blk
	{
		scopeArsenal=0;
		reloadAction="NIA_GestureReload_SSR_10rnd";
		baseweapon="hlc_wp_SSR_Blk_10rnd";
		class nia_gripSwitch
		{
			VFG="hlc_wp_SSR_Blk_10rnd_grip";
			AFG="hlc_wp_SSR_Blk_10rnd_grip2";
			VFG2="hlc_wp_SSR_Blk_10rnd_grip3";
			default="hlc_wp_SSR_Blk_10rnd";
		};
		rhs_grip1_change="hlc_wp_SSR_Blk_10rnd_grip";
		rhs_grip2_change="hlc_wp_SSR_Blk_10rnd_grip2";
		rhs_grip3_change="hlc_wp_SSR_Blk_10rnd";
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
			class hlc_wp_SSR_Blk_10Rnd
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SSR_Blk_10Rnd_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SSR_Blk_10rnd_TacReload: hlc_wp_SSR_blk_10rnd
	{
		magazineReloadSwitchPhase="(40 / 96)";
		scopeArsenal=0;
		reloadMagazineSound[]=
		{
			"\nia_wp_SCAR\snd\mk17_reload_Partial.ogg",
			0.85000002,
			1,
			25
		};
		reloadAction="NIA_GestureReload_SSR_10rnd_Tactical";
		model="nia_wp_SCAR\mesh\Rifle\SSR_TacReload.p3d";
		rhs_grip1_change="hlc_wp_SSR_Blk_10rnd_grip";
		rhs_grip2_change="hlc_wp_SSR_Blk_10rnd_grip2";
		rhs_grip3_change="hlc_wp_SSR_Blk_10rnd_grip3";
		class nia_gripSwitch
		{
			VFG="hlc_wp_SSR_Blk_10rnd_grip";
			AFG="hlc_wp_SSR_Blk_10rnd_grip2";
			VFG2="hlc_wp_SSR_Blk_10rnd_grip3";
			default="hlc_wp_SSR_Blk_10rnd_TacReload";
		};
	};
	class hlc_wp_SSR_Blk_10rnd_grip: hlc_wp_SSR_blk_10rnd
	{
		scopeArsenal=0;
		dexterity=1.2730366;
		aimTransitionSpeed=0.89112562;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handgesture_SSR_VFG.rtm"
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
			class hlc_wp_SSR_Blk_10rnd_grip
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SSR_Blk_10Rnd_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SSR_Blk_10rnd_grip2: hlc_wp_SSR_blk_10rnd
	{
		scopeArsenal=0;
		inertia="(0.485*0.85)";
		dexterity=1.2730366;
		aimTransitionSpeed=0.89112562;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handgesture_SSR_AFG.rtm"
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
			class hlc_wp_SSR_Blk_10rnd_grip2
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SSR_Blk_10Rnd_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SSR_Blk_10rnd_grip3: hlc_wp_SSR_blk_10rnd
	{
		scopeArsenal=0;
		dexterity=1.2730366;
		aimTransitionSpeed=0.89112562;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handgesture_SSR_VFG.rtm"
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
			class hlc_wp_SSR_Blk_10rnd_grip3
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SSR_Blk_10Rnd_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SSR_camo: hlc_WP_SSR
	{
		author="Toadie";
		dlc="Niarms_SCAR";
		displayName="$STR_NIA_rifle_SSR_camo";
		scope=2;
		baseWeapon="hlc_wp_SSR_camo";
		picture="\nia_wp_SCAR\tex\ui\hlc_wp_SSR_camo_ca";
		hiddenSelectionsTextures[]=
		{
			"nia_wp_SCAR\tex\toadie_SCAR\scar_common_camo_co.paa",
			"nia_wp_SCAR\tex\toadie_SCAR\SCAR_Lower_semi_camo_co.paa",
			"nia_wp_SCAR\tex\toadie_SCAR\stock_SSR_camo_co.paa",
			"nia_wp_SCAR\tex\toadie_SCAR\upper_SSR_camo_co.paa",
			"nia_wp_SCAR\tex\toadie_SCAR\stock_camo_co.paa",
			"nia_wp_SCAR\tex\toadie_SCAR\upper_scarh_camo_co.paa"
		};
		HiddenSelectionsMaterials[]=
		{
			"nia_wp_SCAR\mat\scar_common_camo.rvmat",
			"nia_wp_SCAR\mat\SCAR_Lowers_semi_camo.rvmat",
			"nia_wp_SCAR\mat\scar_stock_SSR_camo.rvmat",
			"nia_wp_SCAR\mat\scar_upper_SSR_camo.rvmat",
			"nia_wp_SCAR\mat\scar_stock_camo.rvmat",
			"nia_wp_SCAR\mat\scar_upper_scarH_camo.rvmat"
		};
		class nia_magSwitch
		{
			hlc_10Rnd_762x51_B_SCARH_tan="hlc_wp_SSR_camo_10Rnd";
			hlc_10Rnd_762x51_mk316_SCARH_tan="hlc_wp_SSR_camo_10Rnd";
			hlc_10Rnd_762x51_Barrier_SCARH_tan="hlc_wp_SSR_camo_10Rnd";
			hlc_10Rnd_762x51_t_SCARH_tan="hlc_wp_SSR_camo_10Rnd";
			hlc_10Rnd_762x51_TDim_SCARH_tan="hlc_wp_SSR_camo_10Rnd";
			hlc_10Rnd_762x51_S_SCARH_tan="hlc_wp_SSR_camo_10Rnd";
			hlc_10Rnd_762x51_B_SCARH="hlc_wp_SSR_camo_10Rnd";
			hlc_10Rnd_762x51_mk316_SCARH="hlc_wp_SSR_camo_10Rnd";
			hlc_10Rnd_762x51_Barrier_SCARH="hlc_wp_SSR_camo_10Rnd";
			hlc_10Rnd_762x51_t_SCARH="hlc_wp_SSR_camo_10Rnd";
			hlc_10Rnd_762x51_TDim_SCARH="hlc_wp_SSR_camo_10Rnd";
			hlc_10Rnd_762x51_S_SCARH="hlc_wp_SSR_camo_10Rnd";
			hlc_10Rnd_762x51_B_SCARH_camo="hlc_wp_SSR_camo_10Rnd";
			hlc_10Rnd_762x51_mk316_SCARH_camo="hlc_wp_SSR_camo_10Rnd";
			hlc_10Rnd_762x51_Barrier_SCARH_camo="hlc_wp_SSR_camo_10Rnd";
			hlc_10Rnd_762x51_t_SCARH_camo="hlc_wp_SSR_camo_10Rnd";
			hlc_10Rnd_762x51_TDim_SCARH_camo="hlc_wp_SSR_camo_10Rnd";
			hlc_10Rnd_762x51_S_SCARH_camo="hlc_wp_SSR_camo_10Rnd";
			default="hlc_wp_SSR_camo";
		};
		class nia_gripSwitch
		{
			VFG="hlc_wp_SSR_camo_grip";
			AFG="hlc_wp_SSR_camo_grip2";
			VFG2="hlc_wp_SSR_camo_grip3";
			default="hlc_wp_SSR_camo";
		};
		rhs_grip1_change="hlc_wp_SSR_camo_grip";
		rhs_grip2_change="hlc_wp_SSR_camo_grip2";
		rhs_grip3_change="hlc_wp_SSR_camo_grip3";
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
			class hlc_wp_SSR_camo
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SSR_Camo_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SSR_Camo_TacReload: hlc_wp_SSR_camo
	{
		magazineReloadSwitchPhase="(40 / 96)";
		scopeArsenal=0;
		reloadMagazineSound[]=
		{
			"\nia_wp_SCAR\snd\mk17_reload_Partial.ogg",
			0.85000002,
			1,
			25
		};
		reloadAction="NIA_GestureReload_SSR_Tactical";
		model="nia_wp_SCAR\mesh\Rifle\SSR_TacReload.p3d";
		rhs_grip1_change="hlc_wp_SSR_Camo_grip";
		rhs_grip2_change="hlc_wp_SSR_Camo_grip2";
		rhs_grip3_change="hlc_wp_SSR_Camo_grip3";
		class nia_gripSwitch
		{
			VFG="hlc_wp_SSR_Camo_grip";
			AFG="hlc_wp_SSR_Camo_grip2";
			VFG2="hlc_wp_SSR_Camo_grip3";
			default="hlc_wp_SSR_Camo_TacReload";
		};
	};
	class hlc_wp_SSR_camo_grip: hlc_wp_SSR_camo
	{
		scopeArsenal=0;
		dexterity=1.2730366;
		aimTransitionSpeed=0.89112562;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handgesture_SSR_VFG.rtm"
		};
		class nia_magSwitch
		{
			hlc_10Rnd_762x51_B_SCARH_tan="hlc_wp_SSR_camo_10Rnd_grip";
			hlc_10Rnd_762x51_mk316_SCARH_tan="hlc_wp_SSR_camo_10Rnd_grip";
			hlc_10Rnd_762x51_Barrier_SCARH_tan="hlc_wp_SSR_camo_10Rnd_grip";
			hlc_10Rnd_762x51_t_SCARH_tan="hlc_wp_SSR_camo_10Rnd_grip";
			hlc_10Rnd_762x51_TDim_SCARH_tan="hlc_wp_SSR_camo_10Rnd_grip";
			hlc_10Rnd_762x51_S_SCARH_tan="hlc_wp_SSR_camo_10Rnd_grip";
			hlc_10Rnd_762x51_B_SCARH="hlc_wp_SSR_camo_10Rnd_grip";
			hlc_10Rnd_762x51_mk316_SCARH="hlc_wp_SSR_camo_10Rnd_grip";
			hlc_10Rnd_762x51_Barrier_SCARH="hlc_wp_SSR_camo_10Rnd_grip";
			hlc_10Rnd_762x51_t_SCARH="hlc_wp_SSR_camo_10Rnd_grip";
			hlc_10Rnd_762x51_TDim_SCARH="hlc_wp_SSR_camo_10Rnd_grip";
			hlc_10Rnd_762x51_S_SCARH="hlc_wp_SSR_camo_10Rnd_grip";
			hlc_10Rnd_762x51_B_SCARH_camo="hlc_wp_SSR_camo_10Rnd_grip";
			hlc_10Rnd_762x51_mk316_SCARH_camo="hlc_wp_SSR_camo_10Rnd_grip";
			hlc_10Rnd_762x51_Barrier_SCARH_camo="hlc_wp_SSR_camo_10Rnd_grip";
			hlc_10Rnd_762x51_t_SCARH_camo="hlc_wp_SSR_camo_10Rnd_grip";
			hlc_10Rnd_762x51_TDim_SCARH_camo="hlc_wp_SSR_camo_10Rnd_grip";
			hlc_10Rnd_762x51_S_SCARH_camo="hlc_wp_SSR_camo_10Rnd_grip";
			default="hlc_wp_SSR_camo_grip";
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
			class hlc_wp_SSR_camo_grip
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SSR_Camo_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SSR_camo_grip2: hlc_wp_SSR_camo
	{
		scopeArsenal=0;
		inertia="(0.485*0.85)";
		dexterity=1.2730366;
		aimTransitionSpeed=0.89112562;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handgesture_SSR_AFG.rtm"
		};
		class nia_magSwitch
		{
			hlc_10Rnd_762x51_B_SCARH_tan="hlc_wp_SSR_camo_10Rnd_grip2";
			hlc_10Rnd_762x51_mk316_SCARH_tan="hlc_wp_SSR_camo_10Rnd_grip2";
			hlc_10Rnd_762x51_Barrier_SCARH_tan="hlc_wp_SSR_camo_10Rnd_grip2";
			hlc_10Rnd_762x51_t_SCARH_tan="hlc_wp_SSR_camo_10Rnd_grip2";
			hlc_10Rnd_762x51_TDim_SCARH_tan="hlc_wp_SSR_camo_10Rnd_grip2";
			hlc_10Rnd_762x51_S_SCARH_tan="hlc_wp_SSR_camo_10Rnd_grip2";
			hlc_10Rnd_762x51_B_SCARH="hlc_wp_SSR_camo_10Rnd_grip2";
			hlc_10Rnd_762x51_mk316_SCARH="hlc_wp_SSR_camo_10Rnd_grip2";
			hlc_10Rnd_762x51_Barrier_SCARH="hlc_wp_SSR_camo_10Rnd_grip2";
			hlc_10Rnd_762x51_t_SCARH="hlc_wp_SSR_camo_10Rnd_grip2";
			hlc_10Rnd_762x51_TDim_SCARH="hlc_wp_SSR_camo_10Rnd_grip2";
			hlc_10Rnd_762x51_S_SCARH="hlc_wp_SSR_camo_10Rnd_grip2";
			hlc_10Rnd_762x51_B_SCARH_camo="hlc_wp_SSR_camo_10Rnd_grip2";
			hlc_10Rnd_762x51_mk316_SCARH_camo="hlc_wp_SSR_camo_10Rnd_grip2";
			hlc_10Rnd_762x51_Barrier_SCARH_camo="hlc_wp_SSR_camo_10Rnd_grip2";
			hlc_10Rnd_762x51_t_SCARH_camo="hlc_wp_SSR_camo_10Rnd_grip2";
			hlc_10Rnd_762x51_TDim_SCARH_camo="hlc_wp_SSR_camo_10Rnd_grip2";
			hlc_10Rnd_762x51_S_SCARH_camo="hlc_wp_SSR_camo_10Rnd_grip2";
			default="hlc_wp_SSR_camo_grip2";
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
			class hlc_wp_SSR_camo_grip2
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SSR_Camo_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SSR_camo_grip3: hlc_wp_SSR_camo
	{
		scopeArsenal=0;
		dexterity=1.2730366;
		aimTransitionSpeed=0.89112562;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handgesture_SSR_VFG.rtm"
		};
		class nia_magSwitch
		{
			hlc_10Rnd_762x51_B_SCARH_tan="hlc_wp_SSR_camo_10Rnd_grip3";
			hlc_10Rnd_762x51_mk316_SCARH_tan="hlc_wp_SSR_camo_10Rnd_grip3";
			hlc_10Rnd_762x51_Barrier_SCARH_tan="hlc_wp_SSR_camo_10Rnd_grip3";
			hlc_10Rnd_762x51_t_SCARH_tan="hlc_wp_SSR_camo_10Rnd_grip3";
			hlc_10Rnd_762x51_TDim_SCARH_tan="hlc_wp_SSR_camo_10Rnd_grip3";
			hlc_10Rnd_762x51_S_SCARH_tan="hlc_wp_SSR_camo_10Rnd_grip3";
			hlc_10Rnd_762x51_B_SCARH="hlc_wp_SSR_camo_10Rnd_grip3";
			hlc_10Rnd_762x51_mk316_SCARH="hlc_wp_SSR_camo_10Rnd_grip3";
			hlc_10Rnd_762x51_Barrier_SCARH="hlc_wp_SSR_camo_10Rnd_grip3";
			hlc_10Rnd_762x51_t_SCARH="hlc_wp_SSR_camo_10Rnd_grip3";
			hlc_10Rnd_762x51_TDim_SCARH="hlc_wp_SSR_camo_10Rnd_grip3";
			hlc_10Rnd_762x51_S_SCARH="hlc_wp_SSR_camo_10Rnd_grip3";
			hlc_10Rnd_762x51_B_SCARH_camo="hlc_wp_SSR_camo_10Rnd_grip3";
			hlc_10Rnd_762x51_mk316_SCARH_camo="hlc_wp_SSR_camo_10Rnd_grip3";
			hlc_10Rnd_762x51_Barrier_SCARH_camo="hlc_wp_SSR_camo_10Rnd_grip3";
			hlc_10Rnd_762x51_t_SCARH_camo="hlc_wp_SSR_camo_10Rnd_grip3";
			hlc_10Rnd_762x51_TDim_SCARH_camo="hlc_wp_SSR_camo_10Rnd_grip3";
			hlc_10Rnd_762x51_S_SCARH_camo="hlc_wp_SSR_camo_10Rnd_grip3";
			default="hlc_wp_SSR_camo_grip3";
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
			class hlc_wp_SSR_camo_grip3
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SSR_Camo_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SSR_camo_10rnd: hlc_wp_SSR_camo
	{
		scopeArsenal=0;
		reloadAction="NIA_GestureReload_SSR_10rnd";
		baseweapon="hlc_wp_SSR_camo_10rnd";
		class nia_gripSwitch
		{
			VFG="hlc_wp_SSR_camo_10rnd_grip";
			AFG="hlc_wp_SSR_camo_10rnd_grip2";
			VFG2="hlc_wp_SSR_camo_10rnd_grip3";
			default="hlc_wp_SSR_camo_10rnd";
		};
		rhs_grip1_change="hlc_wp_SSR_camo_10rnd_grip";
		rhs_grip2_change="hlc_wp_SSR_camo_10rnd_grip2";
		rhs_grip3_change="hlc_wp_SSR_camo_10rnd";
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
			class hlc_wp_SSR_camo_10rnd
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SSR_Camo_10rnd_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SSR_Camo_10rnd_TacReload: hlc_wp_SSR_camo_10rnd
	{
		magazineReloadSwitchPhase="(40 / 96)";
		scopeArsenal=0;
		reloadMagazineSound[]=
		{
			"\nia_wp_SCAR\snd\mk17_reload_Partial.ogg",
			0.85000002,
			1,
			25
		};
		reloadAction="NIA_GestureReload_SSR_10rnd_Tactical";
		model="nia_wp_SCAR\mesh\Rifle\SSR_TacReload.p3d";
		rhs_grip1_change="hlc_wp_SSR_Camo_10rnd_grip";
		rhs_grip2_change="hlc_wp_SSR_Camo_10rnd_grip2";
		rhs_grip3_change="hlc_wp_SSR_Camo_10rnd_grip3";
		class nia_gripSwitch
		{
			VFG="hlc_wp_SSR_Camo_10rnd_grip";
			AFG="hlc_wp_SSR_Camo_10rnd_grip2";
			VFG2="hlc_wp_SSR_Camo_10rnd_grip3";
			default="hlc_wp_SSR_Camo_10rnd_TacReload";
		};
	};
	class hlc_wp_SSR_camo_10rnd_grip: hlc_wp_SSR_camo_10rnd
	{
		scopeArsenal=0;
		dexterity=1.2730366;
		aimTransitionSpeed=0.89112562;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handgesture_SSR_VFG.rtm"
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
			class hlc_wp_SSR_camo_10rnd_Grip
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SSR_Camo_10rnd_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SSR_camo_10rnd_grip2: hlc_wp_SSR_camo_10rnd
	{
		scopeArsenal=0;
		inertia="(0.485*0.85)";
		dexterity=1.2730366;
		aimTransitionSpeed=0.89112562;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handgesture_SSR_AFG.rtm"
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
			class hlc_wp_SSR_camo_10rnd_Grip2
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SSR_Camo_10rnd_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SSR_camo_10rnd_grip3: hlc_wp_SSR_camo_10rnd
	{
		scopeArsenal=0;
		dexterity=1.2730366;
		aimTransitionSpeed=0.89112562;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handgesture_SSR_VFG.rtm"
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
			class hlc_wp_SSR_camo_10rnd_Grip3
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SSR_Camo_10rnd_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARL_STD: hlc_SCARL_Base
	{
		author="Toadie";
		dlc="Niarms_SCAR";
		displayName="$STR_NIA_rifle_SCARL_STD";
		descriptionShort="$STR_NIA_SCARL_Carbine_DESC";
		scope=2;
		ACE_barrelTwist=177.8;
		ACE_barrelLength=355;
		ACE_railHeightAboveBore=3.8;
		discretedistance[]={200,300,400,500,600};
		discretedistanceinitindex=0;
		discreteDistanceCameraPoint[]=
		{
			"eye",
			"eye_300",
			"eye_400",
			"eye_500",
			"eye_600"
		};
		cameraDir="eye_look";
		baseWeapon="hlc_wp_SCARL_STD";
		mass=71.722;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=71.722;
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
				class compatibleItems: compatibleItems
				{
					HLC_Panel_Side_SCAR_FN5cm_Desert=1;
					HLC_Panel_Side_SCAR_2xFN5cm_Desert=1;
					HLC_Panel_Side_SCAR_FN10cm_Desert=1;
					HLC_Panel_Side_SCAR_Ladder_S_Desert=1;
					HLC_Panel_Side_SCAR_Ladder_M_Desert=1;
					HLC_Panel_Side_SCAR_MagpulXT_Desert=1;
					HLC_Panel_Side_SCAR_XTME_Desert=1;
					HLC_Panel_Side_SCAR_2xXTME_Desert=1;
					HLC_Panel_Side_SCAR_FN5cm_Black=1;
					HLC_Panel_Side_SCAR_2xFN5cm_Black=1;
					HLC_Panel_Side_SCAR_FN10cm_Black=1;
					HLC_Panel_Side_SCAR_Ladder_S_Black=1;
					HLC_Panel_Side_SCAR_Ladder_M_Black=1;
					HLC_Panel_Side_SCAR_MagpulXT_Black=1;
					HLC_Panel_Side_SCAR_XTME_Black=1;
					HLC_Panel_Side_SCAR_2xXTME_Black=1;
					HLC_Panel_Side_SCAR_FN5cm_OD=1;
					HLC_Panel_Side_SCAR_2xFN5cm_OD=1;
					HLC_Panel_Side_SCAR_FN10cm_OD=1;
					HLC_Panel_Side_SCAR_Ladder_S_OD=1;
					HLC_Panel_Side_SCAR_Ladder_M_OD=1;
					HLC_Panel_Side_SCAR_MagpulXT_OD=1;
					HLC_Panel_Side_SCAR_XTME_OD=1;
					HLC_Panel_Side_SCAR_2xXTME_OD=1;
					HLC_Panel_Side_SCAR_FN5cm_RG=1;
					HLC_Panel_Side_SCAR_2xFN5cm_RG=1;
					HLC_Panel_Side_SCAR_FN10cm_RG=1;
					HLC_Panel_Side_SCAR_Ladder_S_RG=1;
					HLC_Panel_Side_SCAR_Ladder_M_RG=1;
					HLC_Panel_Side_SCAR_MagpulXT_RG=1;
					HLC_Panel_Side_SCAR_XTME_RG=1;
					HLC_Panel_Side_SCAR_2xXTME_RG=1;
					HLC_Panel_Side_SCAR_Ladder_S_Pride=1;
					HLC_Panel_Side_SCAR_Ladder_M_Pride=1;
					HLC_Panel_Side_SCAR_MagpulXT_Pride=1;
				};
			};
			class MuzzleSlot: asdg_MuzzleSlot_556
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
		inertia=0.329;
		dexterity=1.5394713;
		aimTransitionSpeed=1.0776299;
		class LinkedItems
		{
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="hlc_muzzle_OEMDevice_556";
			};
		};
		model="nia_wp_SCAR\mesh\rifle\SCARL_STD.p3d";
		picture="\nia_wp_SCAR\tex\ui\hlc_wp_SCARL_STD_ca";
		UiPicture="\A3\weapons_f\data\UI\icon_regular_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"nia_wp_SCAR\tex\toadie_SCAR\scar_common_tan_co.paa",
			"nia_wp_SCAR\tex\toadie_SCAR\scar_lower_tan_co.paa",
			"nia_wp_SCAR\tex\toadie_SCAR\stock_tan_co.paa",
			"nia_wp_SCAR\tex\toadie_SCAR\upper_scarl_tan_co.paa"
		};
		HiddenSelectionsMaterials[]=
		{
			"nia_wp_SCAR\mat\scar_common.rvmat",
			"nia_wp_SCAR\mat\scar_lowers.rvmat",
			"nia_wp_SCAR\mat\scar_stock.rvmat",
			"nia_wp_SCAR\mat\scar_upper_scarl.rvmat"
		};
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handpose_STD.rtm"
		};
		reloadAction="NIA_GestureReload_Mk16";
		reloadMagazineSound[]=
		{
			"nia_wp_SCAR\snd\mk16_reload_short.ogg",
			0.80000001,
			1,
			25
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
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"NIA_SCARL_NEW_Shot_SoundSet",
					"NIA_SCARL_tail_SoundSet"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"NIA_SCARL_silencerShot_SoundSet",
					"NIA_SCARL_silencerTail_SoundSet"
				};
			};
			dispersion=0.00049162103;
			reloadtime="(60/600)";
			aiRateOfFire=1;
			aiRateOfFireDistance=350;
			aiRateOfFireDispersion=2;
			minRange=20;
			minRangeProbab=0.69999999;
			midRange=150;
			midRangeProbab=0.5;
			maxRange=500;
			maxRangeProbab=0.1;
		};
		class Burst: Mode_Burst
		{
			sounds[]=
			{
				"StandardSound",
				"SilencedSound"
			};
			class BaseSoundModeType
			{
				weaponSoundEffect="DefaultRifle";
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"NIA_SCARL_NEW_Shot_SoundSet",
					"NIA_SCARL_tail_SoundSet"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"NIA_SCARL_silencerShot_SoundSet",
					"NIA_SCARL_silencerTail_SoundSet"
				};
			};
			dispersion=0.00059634499;
			reloadtime="(60/600)";
			aiRateOfFire=1;
			aiRateOfFireDistance=100;
			aiRateOfFireDispersion=1;
			minRange=0;
			minRangeProbab=0.2;
			midRange=20;
			midRangeProbab=0.80000001;
			maxRange=40;
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
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"NIA_SCARL_NEW_Shot_SoundSet",
					"NIA_SCARL_tail_SoundSet"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"NIA_SCARL_silencerShot_SoundSet",
					"NIA_SCARL_silencerTail_SoundSet"
				};
			};
			dispersion=0.00062543503;
			reloadtime="(60/600)";
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
		class nia_magSwitch
		{
			hlc_50rnd_556x45_EPR="hlc_wp_SCARL_STD_x15";
			hlc_50rnd_556x45_SOST="hlc_wp_SCARL_STD_x15";
			hlc_50rnd_556x45_SPR="hlc_wp_SCARL_STD_x15";
			hlc_50rnd_556x45_M="hlc_wp_SCARL_STD_x15";
			hlc_50rnd_556x45_MDim="hlc_wp_SCARL_STD_x15";
			default="hlc_wp_SCARL_STD";
		};
		class nia_gripSwitch
		{
			VFG="hlc_wp_SCARL_STD_grip";
			AFG="hlc_wp_SCARL_STD_grip2";
			VFG2="hlc_wp_SCARL_STD_grip3";
			default="hlc_wp_SCARL_STD";
		};
		rhs_grip1_change="hlc_wp_SCARL_STD_grip";
		rhs_grip2_change="hlc_wp_SCARL_STD_grip2";
		rhs_grip3_change="hlc_wp_SCARL_STD_grip3";
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
			class hlc_wp_SCARL_STD
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SCARL_STD_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARL_STD_TacReload: hlc_wp_SCARL_STD
	{
		magazineReloadSwitchPhase="(40 / 96)";
		scopeArsenal=0;
		reloadMagazineSound[]=
		{
			"\nia_wp_SCAR\snd\mk16_reload_partial.ogg",
			0.85000002,
			1,
			25
		};
		reloadAction="NIA_GestureReload_Mk16_Tactical";
		model="nia_wp_SCAR\mesh\Rifle\SCARL_STD_TacReload.p3d";
		rhs_grip1_change="hlc_wp_SCARL_STD_grip";
		rhs_grip2_change="hlc_wp_SCARL_STD_grip2";
		rhs_grip3_change="hlc_wp_SCARL_STD_grip3";
		class nia_gripSwitch
		{
			VFG="hlc_wp_SCARL_STD_grip";
			AFG="hlc_wp_SCARL_STD_grip2";
			VFG2="hlc_wp_SCARL_STD_grip3";
			default="hlc_wp_SCARL_STD_TacReload";
		};
	};
	class hlc_wp_SCARL_STD_grip: hlc_wp_SCARL_STD
	{
		scopeArsenal=0;
		dexterity=1.6394713;
		aimTransitionSpeed=1.1476299;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handgesture_SCARL_VFG.rtm"
		};
		class nia_magSwitch
		{
			hlc_50rnd_556x45_EPR="hlc_wp_SCARL_STD_x15_grip";
			hlc_50rnd_556x45_SOST="hlc_wp_SCARL_STD_x15_grip";
			hlc_50rnd_556x45_SPR="hlc_wp_SCARL_STD_x15_grip";
			hlc_50rnd_556x45_M="hlc_wp_SCARL_STD_x15_grip";
			hlc_50rnd_556x45_MDim="hlc_wp_SCARL_STD_x15_grip";
			default="hlc_wp_SCARL_STD_grip";
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
			class hlc_wp_SCARL_STD_grip
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SCARL_STD_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARL_STD_grip2: hlc_wp_SCARL_STD
	{
		scopeArsenal=0;
		inertia="(0.329*0.85)";
		dexterity=1.6394713;
		aimTransitionSpeed=1.1476299;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handgesture_SCARL_AFG.rtm"
		};
		class nia_magSwitch
		{
			hlc_50rnd_556x45_EPR="hlc_wp_SCARL_STD_x15_grip2";
			hlc_50rnd_556x45_SOST="hlc_wp_SCARL_STD_x15_grip2";
			hlc_50rnd_556x45_SPR="hlc_wp_SCARL_STD_x15_grip2";
			hlc_50rnd_556x45_M="hlc_wp_SCARL_STD_x15_grip2";
			hlc_50rnd_556x45_MDim="hlc_wp_SCARL_STD_x15_grip2";
			default="hlc_wp_SCARL_STD_grip2";
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
			class hlc_wp_SCARL_STD_grip2
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SCARL_STD_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARL_STD_grip3: hlc_wp_SCARL_STD
	{
		scopeArsenal=0;
		dexterity=1.6394713;
		aimTransitionSpeed=1.1476299;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handgesture_SCARL_VFG.rtm"
		};
		class nia_magSwitch
		{
			hlc_50rnd_556x45_EPR="hlc_wp_SCARL_STD_x15_grip3";
			hlc_50rnd_556x45_SOST="hlc_wp_SCARL_STD_x15_grip3";
			hlc_50rnd_556x45_SPR="hlc_wp_SCARL_STD_x15_grip3";
			hlc_50rnd_556x45_M="hlc_wp_SCARL_STD_x15_grip3";
			hlc_50rnd_556x45_MDim="hlc_wp_SCARL_STD_x15_grip3";
			default="hlc_wp_SCARL_STD_grip3";
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
			class hlc_wp_SCARL_STD_grip3
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SCARL_STD_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARL_STD_x15: hlc_wp_SCARL_STD
	{
		scopeArsenal=0;
		reloadAction="NIA_GestureReload_Mk16_X15";
		baseweapon="hlc_wp_SCARL_STD_x15";
		reloadMagazineSound[]=
		{
			"nia_wp_SCAR\snd\mk16_reload_X15_short.ogg",
			0.80000001,
			1,
			25
		};
		class nia_gripSwitch
		{
			VFG="hlc_wp_SCARL_STD_x15_grip";
			AFG="hlc_wp_SCARL_STD_x15_grip2";
			VFG2="hlc_wp_SCARL_STD_x15_grip3";
			default="hlc_wp_SCARL_STD_x15";
		};
		rhs_grip1_change="hlc_wp_SCARL_STD_x15_grip";
		rhs_grip2_change="hlc_wp_SCARL_STD_x15_grip2";
		rhs_grip3_change="hlc_wp_SCARL_STD_x15_grip3";
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
			class hlc_wp_SCARL_STD_x15
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SCARL_STD_x15_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARL_STD_x15_TacReload: hlc_wp_SCARL_STD_x15
	{
		magazineReloadSwitchPhase="(40 / 96)";
		scopeArsenal=0;
		reloadMagazineSound[]=
		{
			"\nia_wp_SCAR\snd\mk16_reload_X15_partial.ogg",
			0.85000002,
			1,
			25
		};
		reloadAction="NIA_GestureReload_Mk16_X15_Tactical";
		model="nia_wp_SCAR\mesh\Rifle\SCARL_STD_TacReload.p3d";
		rhs_grip1_change="hlc_wp_SCARL_STD_x15_grip";
		rhs_grip2_change="hlc_wp_SCARL_STD_x15_grip2";
		rhs_grip3_change="hlc_wp_SCARL_STD_x15_grip3";
		class nia_gripSwitch
		{
			VFG="hlc_wp_SCARL_STD_x15_grip";
			AFG="hlc_wp_SCARL_STD_x15_grip2";
			VFG2="hlc_wp_SCARL_STD_x15_grip3";
			default="hlc_wp_SCARL_STD_x15_TacReload";
		};
	};
	class hlc_wp_SCARL_STD_x15_grip: hlc_wp_SCARL_STD_x15
	{
		scopeArsenal=0;
		dexterity=1.6212438;
		aimTransitionSpeed=1.1348706;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handgesture_SCARL_VFG.rtm"
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
			class hlc_wp_SCARL_STD_x15_grip
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SCARL_STD_x15_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARL_STD_x15_grip2: hlc_wp_SCARL_STD_x15
	{
		scopeArsenal=0;
		inertia="(0.3435*0.85)";
		dexterity=1.6212438;
		aimTransitionSpeed=1.1348706;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handgesture_SCARL_AFG.rtm"
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
			class hlc_wp_SCARL_STD_x15_grip2
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SCARL_STD_x15_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARL_STD_x15_grip3: hlc_wp_SCARL_STD_x15
	{
		scopeArsenal=0;
		dexterity=1.6212438;
		aimTransitionSpeed=1.1348706;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handgesture_SCARL_VFG.rtm"
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
			class hlc_wp_SCARL_STD_x15_grip3
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SCARL_STD_x15_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARL_STD_blk: hlc_wp_SCARL_STD
	{
		author="Toadie";
		dlc="Niarms_SCAR";
		displayName="$STR_NIA_rifle_SCARL_STD_blk";
		scope=2;
		baseWeapon="hlc_wp_SCARL_STD_Blk";
		picture="\nia_wp_SCAR\tex\ui\hlc_wp_SCARL_STD_Blk_ca";
		hiddenSelectionsTextures[]=
		{
			"nia_wp_SCAR\tex\toadie_SCAR\scar_common_co.paa",
			"nia_wp_SCAR\tex\toadie_SCAR\scar_lower_co.paa",
			"nia_wp_SCAR\tex\toadie_SCAR\stock_co.paa",
			"nia_wp_SCAR\tex\toadie_SCAR\upper_SCARL_co.paa"
		};
		class nia_magSwitch
		{
			hlc_50rnd_556x45_EPR="hlc_wp_SCARL_STD_Blk_x15";
			hlc_50rnd_556x45_SOST="hlc_wp_SCARL_STD_Blk_x15";
			hlc_50rnd_556x45_SPR="hlc_wp_SCARL_STD_Blk_x15";
			hlc_50rnd_556x45_M="hlc_wp_SCARL_STD_Blk_x15";
			hlc_50rnd_556x45_MDim="hlc_wp_SCARL_STD_Blk_x15";
			default="hlc_wp_SCARL_STD_Blk";
		};
		class nia_gripSwitch
		{
			VFG="hlc_wp_SCARL_STD_Blk_grip";
			AFG="hlc_wp_SCARL_STD_Blk_grip2";
			VFG2="hlc_wp_SCARL_STD_Blk_grip3";
			default="hlc_wp_SCARL_STD_Blk";
		};
		rhs_grip1_change="hlc_wp_SCARL_STD_Blk_grip";
		rhs_grip2_change="hlc_wp_SCARL_STD_Blk_grip2";
		rhs_grip3_change="hlc_wp_SCARL_STD_Blk_grip3";
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
			class hlc_wp_SCARL_STD_Blk
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SCARL_STD_Blk_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARL_STD_Blk_TacReload: hlc_wp_SCARL_STD_blk
	{
		magazineReloadSwitchPhase="(40 / 96)";
		scopeArsenal=0;
		reloadMagazineSound[]=
		{
			"\nia_wp_SCAR\snd\mk16_reload_partial.ogg",
			0.85000002,
			1,
			25
		};
		reloadAction="NIA_GestureReload_Mk16_Tactical";
		model="nia_wp_SCAR\mesh\Rifle\SCARL_STD_TacReload.p3d";
		rhs_grip1_change="hlc_wp_SCARL_STD_Blk_grip";
		rhs_grip2_change="hlc_wp_SCARL_STD_Blk_grip2";
		rhs_grip3_change="hlc_wp_SCARL_STD_Blk_grip3";
		class nia_gripSwitch
		{
			VFG="hlc_wp_SCARL_STD_Blk_grip";
			AFG="hlc_wp_SCARL_STD_Blk_grip2";
			VFG2="hlc_wp_SCARL_STD_Blk_grip3";
			default="hlc_wp_SCARL_STD_Blk_TacReload";
		};
	};
	class hlc_wp_SCARL_STD_Blk_grip: hlc_wp_SCARL_STD_blk
	{
		scopeArsenal=0;
		dexterity=1.6394713;
		aimTransitionSpeed=1.1476299;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handgesture_SCARL_VFG.rtm"
		};
		class nia_magSwitch
		{
			hlc_50rnd_556x45_EPR="hlc_wp_SCARL_STD_Blk_x15_grip";
			hlc_50rnd_556x45_SOST="hlc_wp_SCARL_STD_Blk_x15_grip";
			hlc_50rnd_556x45_SPR="hlc_wp_SCARL_STD_Blk_x15_grip";
			hlc_50rnd_556x45_M="hlc_wp_SCARL_STD_Blk_x15_grip";
			hlc_50rnd_556x45_MDim="hlc_wp_SCARL_STD_Blk_x15_grip";
			default="hlc_wp_SCARL_STD_Blk_grip";
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
			class hlc_wp_SCARL_STD_Blk_grip
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SCARL_STD_Blk_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARL_STD_Blk_grip2: hlc_wp_SCARL_STD_blk
	{
		scopeArsenal=0;
		inertia="(0.328*0.85)";
		dexterity=1.6394713;
		aimTransitionSpeed=1.1476299;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handgesture_SCARL_AFG.rtm"
		};
		class nia_magSwitch
		{
			hlc_50rnd_556x45_EPR="hlc_wp_SCARL_STD_Blk_x15_grip2";
			hlc_50rnd_556x45_SOST="hlc_wp_SCARL_STD_Blk_x15_grip2";
			hlc_50rnd_556x45_SPR="hlc_wp_SCARL_STD_Blk_x15_grip2";
			hlc_50rnd_556x45_M="hlc_wp_SCARL_STD_Blk_x15_grip2";
			hlc_50rnd_556x45_MDim="hlc_wp_SCARL_STD_Blk_x15_grip2";
			default="hlc_wp_SCARL_STD_Blk_grip2";
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
			class hlc_wp_SCARL_STD_Blk_grip2
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SCARL_STD_Blk_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARL_STD_Blk_grip3: hlc_wp_SCARL_STD_blk
	{
		scopeArsenal=0;
		dexterity=1.6394713;
		aimTransitionSpeed=1.1476299;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handgesture_SCARL_VFG.rtm"
		};
		class nia_magSwitch
		{
			hlc_50rnd_556x45_EPR="hlc_wp_SCARL_STD_Blk_x15_grip3";
			hlc_50rnd_556x45_SOST="hlc_wp_SCARL_STD_Blk_x15_grip3";
			hlc_50rnd_556x45_SPR="hlc_wp_SCARL_STD_Blk_x15_grip3";
			hlc_50rnd_556x45_M="hlc_wp_SCARL_STD_Blk_x15_grip3";
			hlc_50rnd_556x45_MDim="hlc_wp_SCARL_STD_Blk_x15_grip3";
			default="hlc_wp_SCARL_STD_Blk_grip3";
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
			class hlc_wp_SCARL_STD_Blk_grip3
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SCARL_STD_Blk_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARL_STD_Blk_x15: hlc_wp_SCARL_STD_blk
	{
		scopeArsenal=0;
		reloadAction="NIA_GestureReload_Mk16_X15";
		baseweapon="hlc_wp_SCARL_STD_Blk_x15";
		reloadMagazineSound[]=
		{
			"nia_wp_SCAR\snd\mk16_reload_X15_short.ogg",
			0.80000001,
			1,
			25
		};
		class nia_gripSwitch
		{
			VFG="hlc_wp_SCARL_STD_Blk_x15_grip";
			AFG="hlc_wp_SCARL_STD_Blk_x15_grip2";
			VFG2="hlc_wp_SCARL_STD_Blk_x15_grip3";
			default="hlc_wp_SCARL_STD_Blk_x15";
		};
		rhs_grip1_change="hlc_wp_SCARL_STD_Blk_x15_grip";
		rhs_grip2_change="hlc_wp_SCARL_STD_Blk_x15_grip2";
		rhs_grip3_change="hlc_wp_SCARL_STD_Blk_x15_grip3";
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
			class hlc_wp_SCARL_STD_Blk_x15
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SCARL_STD_Blk_x15_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARL_STD_Blk_x15_TacReload: hlc_wp_SCARL_STD_Blk_x15
	{
		magazineReloadSwitchPhase="(40 / 96)";
		scopeArsenal=0;
		reloadMagazineSound[]=
		{
			"\nia_wp_SCAR\snd\mk16_reload_X15_partial.ogg",
			0.85000002,
			1,
			25
		};
		reloadAction="NIA_GestureReload_Mk16_X15_Tactical";
		model="nia_wp_SCAR\mesh\Rifle\SCARL_STD_TacReload.p3d";
		rhs_grip1_change="hlc_wp_SCARL_STD_Blk_x15_grip";
		rhs_grip2_change="hlc_wp_SCARL_STD_Blk_x15_grip2";
		rhs_grip3_change="hlc_wp_SCARL_STD_Blk_x15_grip3";
		class nia_gripSwitch
		{
			VFG="hlc_wp_SCARL_STD_Blk_x15_grip";
			AFG="hlc_wp_SCARL_STD_Blk_x15_grip2";
			VFG2="hlc_wp_SCARL_STD_Blk_x15_grip3";
			default="hlc_wp_SCARL_STD_Blk_x15_TacReload";
		};
	};
	class hlc_wp_SCARL_STD_Blk_x15_grip: hlc_wp_SCARL_STD_Blk_x15
	{
		scopeArsenal=0;
		dexterity=1.6212438;
		aimTransitionSpeed=1.1348706;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handgesture_SCARL_VFG.rtm"
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
			class hlc_wp_SCARL_STD_Blk_x15_grip
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SCARL_STD_Blk_x15_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARL_STD_Blk_x15_grip2: hlc_wp_SCARL_STD_Blk_x15
	{
		scopeArsenal=0;
		inertia="(0.3435*0.85)";
		dexterity=1.6212438;
		aimTransitionSpeed=1.1348706;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handgesture_SCARL_AFG.rtm"
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
			class hlc_wp_SCARL_STD_Blk_x15_grip2
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SCARL_STD_Blk_x15_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARL_STD_Blk_x15_grip3: hlc_wp_SCARL_STD_Blk_x15
	{
		scopeArsenal=0;
		dexterity=1.6212438;
		aimTransitionSpeed=1.1348706;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handgesture_SCARL_VFG.rtm"
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
			class hlc_wp_SCARL_STD_Blk_x15_grip3
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SCARL_STD_Blk_x15_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARL_STD_camo: hlc_wp_SCARL_STD
	{
		author="Toadie";
		dlc="Niarms_SCAR";
		displayName="$STR_NIA_rifle_SCARL_STD_camo";
		scope=2;
		baseWeapon="hlc_wp_SCARL_STD_camo";
		picture="\nia_wp_SCAR\tex\ui\hlc_wp_SCARL_STD_camo_ca";
		hiddenSelectionsTextures[]=
		{
			"nia_wp_SCAR\tex\toadie_SCAR\scar_common_camo_co.paa",
			"nia_wp_SCAR\tex\toadie_SCAR\scar_lower_camo_co.paa",
			"nia_wp_SCAR\tex\toadie_SCAR\stock_camo_co.paa",
			"nia_wp_SCAR\tex\toadie_SCAR\upper_SCARL_camo_co.paa"
		};
		HiddenSelectionsMaterials[]=
		{
			"nia_wp_SCAR\mat\scar_common_camo.rvmat",
			"nia_wp_SCAR\mat\scar_lowers_camo.rvmat",
			"nia_wp_SCAR\mat\scar_stock_camo.rvmat",
			"nia_wp_SCAR\mat\scar_upper_SCARL_camo.rvmat"
		};
		class nia_magSwitch
		{
			hlc_50rnd_556x45_EPR="hlc_wp_SCARL_STD_Camo_x15";
			hlc_50rnd_556x45_SOST="hlc_wp_SCARL_STD_Camo_x15";
			hlc_50rnd_556x45_SPR="hlc_wp_SCARL_STD_Camo_x15";
			hlc_50rnd_556x45_M="hlc_wp_SCARL_STD_Camo_x15";
			hlc_50rnd_556x45_MDim="hlc_wp_SCARL_STD_Camo_x15";
			default="hlc_wp_SCARL_STD_camo";
		};
		class nia_gripSwitch
		{
			VFG="hlc_wp_SCARL_STD_camo_grip";
			AFG="hlc_wp_SCARL_STD_camo_grip2";
			VFG2="hlc_wp_SCARL_STD_camo_grip3";
			default="hlc_wp_SCARL_STD_camo";
		};
		rhs_grip1_change="hlc_wp_SCARL_STD_camo_grip";
		rhs_grip2_change="hlc_wp_SCARL_STD_camo_grip2";
		rhs_grip3_change="hlc_wp_SCARL_STD_camo_grip3";
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
			class hlc_wp_SCARL_STD_camo
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SCARL_STD_Camo_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARL_STD_Camo_TacReload: hlc_wp_SCARL_STD_camo
	{
		magazineReloadSwitchPhase="(40 / 96)";
		scopeArsenal=0;
		reloadMagazineSound[]=
		{
			"\nia_wp_SCAR\snd\mk16_reload_partial.ogg",
			0.85000002,
			1,
			25
		};
		reloadAction="NIA_GestureReload_Mk16_Tactical";
		model="nia_wp_SCAR\mesh\Rifle\SCARL_STD_TacReload.p3d";
		rhs_grip1_change="hlc_wp_SCARL_STD_Camo_grip";
		rhs_grip2_change="hlc_wp_SCARL_STD_Camo_grip2";
		rhs_grip3_change="hlc_wp_SCARL_STD_Camo_grip3";
		class nia_gripSwitch
		{
			VFG="hlc_wp_SCARL_STD_Camo_grip";
			AFG="hlc_wp_SCARL_STD_Camo_grip2";
			VFG2="hlc_wp_SCARL_STD_Camo_grip3";
			default="hlc_wp_SCARL_STD_Camo_TacReload";
		};
	};
	class hlc_wp_SCARL_STD_camo_grip: hlc_wp_SCARL_STD_camo
	{
		scopeArsenal=0;
		dexterity=1.6394713;
		aimTransitionSpeed=1.1476299;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handgesture_SCARL_VFG.rtm"
		};
		class nia_magSwitch
		{
			hlc_50rnd_556x45_EPR="hlc_wp_SCARL_STD_Camo_x15_grip";
			hlc_50rnd_556x45_SOST="hlc_wp_SCARL_STD_Camo_x15_grip";
			hlc_50rnd_556x45_SPR="hlc_wp_SCARL_STD_Camo_x15_grip";
			hlc_50rnd_556x45_M="hlc_wp_SCARL_STD_Camo_x15_grip";
			hlc_50rnd_556x45_MDim="hlc_wp_SCARL_STD_Camo_x15_grip";
			default="hlc_wp_SCARL_STD_camo_grip";
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
			class hlc_wp_SCARL_STD_Camo_Grip
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SCARL_STD_Camo_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARL_STD_camo_grip2: hlc_wp_SCARL_STD_camo
	{
		scopeArsenal=0;
		inertia="(0.328*0.85)";
		dexterity=1.6394713;
		aimTransitionSpeed=1.1476299;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handgesture_SCARL_AFG.rtm"
		};
		class nia_magSwitch
		{
			hlc_50rnd_556x45_EPR="hlc_wp_SCARL_STD_Camo_x15_grip2";
			hlc_50rnd_556x45_SOST="hlc_wp_SCARL_STD_Camo_x15_grip2";
			hlc_50rnd_556x45_SPR="hlc_wp_SCARL_STD_Camo_x15_grip2";
			hlc_50rnd_556x45_M="hlc_wp_SCARL_STD_Camo_x15_grip2";
			hlc_50rnd_556x45_MDim="hlc_wp_SCARL_STD_Camo_x15_grip2";
			default="hlc_wp_SCARL_STD_camo_grip2";
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
			class hlc_wp_SCARL_STD_Camo_Grip2
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SCARL_STD_Camo_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARL_STD_camo_grip3: hlc_wp_SCARL_STD_camo
	{
		scopeArsenal=0;
		dexterity=1.6394713;
		aimTransitionSpeed=1.1476299;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handgesture_SCARL_VFG.rtm"
		};
		class nia_magSwitch
		{
			hlc_50rnd_556x45_EPR="hlc_wp_SCARL_STD_Camo_x15_grip3";
			hlc_50rnd_556x45_SOST="hlc_wp_SCARL_STD_Camo_x15_grip3";
			hlc_50rnd_556x45_SPR="hlc_wp_SCARL_STD_Camo_x15_grip3";
			hlc_50rnd_556x45_M="hlc_wp_SCARL_STD_Camo_x15_grip3";
			hlc_50rnd_556x45_MDim="hlc_wp_SCARL_STD_Camo_x15_grip3";
			default="hlc_wp_SCARL_STD_camo_grip3";
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
			class hlc_wp_SCARL_STD_Camo_Grip3
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SCARL_STD_Camo_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARL_STD_Camo_x15: hlc_wp_SCARL_STD_camo
	{
		scopeArsenal=0;
		reloadAction="NIA_GestureReload_Mk16_X15";
		baseweapon="hlc_wp_SCARL_STD_Camo_x15";
		reloadMagazineSound[]=
		{
			"nia_wp_SCAR\snd\mk16_reload_X15_short.ogg",
			0.80000001,
			1,
			25
		};
		class nia_gripSwitch
		{
			VFG="hlc_wp_SCARL_STD_Camo_x15_grip";
			AFG="hlc_wp_SCARL_STD_Camo_x15_grip2";
			VFG2="hlc_wp_SCARL_STD_Camo_x15_grip3";
			default="hlc_wp_SCARL_STD_Camo_x15";
		};
		rhs_grip1_change="hlc_wp_SCARL_STD_Camo_x15_grip";
		rhs_grip2_change="hlc_wp_SCARL_STD_Camo_x15_grip2";
		rhs_grip3_change="hlc_wp_SCARL_STD_Camo_x15_grip3";
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
			class hlc_wp_SCARL_STD_Camo_x15
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SCARL_STD_Camo_x15_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARL_STD_Camo_x15_TacReload: hlc_wp_SCARL_STD_Camo_x15
	{
		magazineReloadSwitchPhase="(40 / 96)";
		scopeArsenal=0;
		reloadMagazineSound[]=
		{
			"\nia_wp_SCAR\snd\mk16_reload_X15_partial.ogg",
			0.85000002,
			1,
			25
		};
		reloadAction="NIA_GestureReload_Mk16_X15_Tactical";
		model="nia_wp_SCAR\mesh\Rifle\SCARL_STD_TacReload.p3d";
		rhs_grip1_change="hlc_wp_SCARL_STD_Camo_x15_grip";
		rhs_grip2_change="hlc_wp_SCARL_STD_Camo_x15_grip2";
		rhs_grip3_change="hlc_wp_SCARL_STD_Camo_x15_grip3";
		class nia_gripSwitch
		{
			VFG="hlc_wp_SCARL_STD_Camo_x15_grip";
			AFG="hlc_wp_SCARL_STD_Camo_x15_grip2";
			VFG2="hlc_wp_SCARL_STD_Camo_x15_grip3";
			default="hlc_wp_SCARL_STD_Camo_x15_TacReload";
		};
	};
	class hlc_wp_SCARL_STD_Camo_x15_grip: hlc_wp_SCARL_STD_Camo_x15
	{
		scopeArsenal=0;
		dexterity=1.6212438;
		aimTransitionSpeed=1.1348706;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handgesture_SCARL_VFG.rtm"
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
			class hlc_wp_SCARL_STD_Camo_x15_grip
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SCARL_STD_Camo_x15_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARL_STD_Camo_x15_grip2: hlc_wp_SCARL_STD_Camo_x15
	{
		scopeArsenal=0;
		inertia="(0.3435*0.85)";
		dexterity=1.6212438;
		aimTransitionSpeed=1.1348706;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handgesture_SCARL_AFG.rtm"
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
			class hlc_wp_SCARL_STD_Camo_x15_grip2
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SCARL_STD_Camo_x15_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARL_STD_Camo_x15_grip3: hlc_wp_SCARL_STD_Camo_x15
	{
		scopeArsenal=0;
		dexterity=1.6212438;
		aimTransitionSpeed=1.1348706;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handgesture_SCARL_VFG.rtm"
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
			class hlc_wp_SCARL_STD_Camo_x15_grip3
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SCARL_STD_Camo_x15_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARL_STD_SRX: hlc_wp_SCARL_STD
	{
		author="Toadie";
		dlc="Niarms_SCAR";
		displayName="$STR_NIA_rifle_SCARL_STD_SRX";
		scope=2;
		baseWeapon="hlc_wp_SCARL_STD_SRX";
		mass=76.605194;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=76.605194;
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
				class compatibleItems: compatibleItems
				{
					HLC_Panel_Side_SCAR_Long_FN5cm_Desert=1;
					HLC_Panel_Side_SCAR_Long_2xFN5cm_Desert=1;
					HLC_Panel_Side_SCAR_Long_FN10cm_Desert=1;
					HLC_Panel_Side_SCAR_Long_FN15cm_Desert=1;
					HLC_Panel_Side_SCAR_Long_Ladder_S_Desert=1;
					HLC_Panel_Side_SCAR_Long_Ladder_M_Desert=1;
					HLC_Panel_Side_SCAR_Long_Ladder_L_Desert=1;
					HLC_Panel_Side_SCAR_Long_MagpulXT_Desert=1;
					HLC_Panel_Side_SCAR_Long_XTME_Desert=1;
					HLC_Panel_Side_SCAR_Long_2xXTME_Desert=1;
					HLC_Panel_Side_SCAR_Long_4xXTME_Desert=1;
					HLC_Panel_Side_SCAR_Long_FN5cm_Black=1;
					HLC_Panel_Side_SCAR_Long_2xFN5cm_Black=1;
					HLC_Panel_Side_SCAR_Long_FN10cm_Black=1;
					HLC_Panel_Side_SCAR_Long_FN15cm_Black=1;
					HLC_Panel_Side_SCAR_Long_Ladder_S_Black=1;
					HLC_Panel_Side_SCAR_Long_Ladder_M_Black=1;
					HLC_Panel_Side_SCAR_Long_Ladder_L_Black=1;
					HLC_Panel_Side_SCAR_Long_MagpulXT_Black=1;
					HLC_Panel_Side_SCAR_Long_XTME_Black=1;
					HLC_Panel_Side_SCAR_Long_2xXTME_Black=1;
					HLC_Panel_Side_SCAR_Long_4xXTME_Black=1;
					HLC_Panel_Side_SCAR_Long_FN5cm_OD=1;
					HLC_Panel_Side_SCAR_Long_2xFN5cm_OD=1;
					HLC_Panel_Side_SCAR_Long_FN10cm_OD=1;
					HLC_Panel_Side_SCAR_Long_FN15cm_OD=1;
					HLC_Panel_Side_SCAR_Long_Ladder_S_OD=1;
					HLC_Panel_Side_SCAR_Long_Ladder_M_OD=1;
					HLC_Panel_Side_SCAR_Long_Ladder_L_OD=1;
					HLC_Panel_Side_SCAR_Long_MagpulXT_OD=1;
					HLC_Panel_Side_SCAR_Long_XTME_OD=1;
					HLC_Panel_Side_SCAR_Long_2xXTME_OD=1;
					HLC_Panel_Side_SCAR_Long_4xXTME_OD=1;
					HLC_Panel_Side_SCAR_Long_FN5cm_RG=1;
					HLC_Panel_Side_SCAR_Long_2xFN5cm_RG=1;
					HLC_Panel_Side_SCAR_Long_FN10cm_RG=1;
					HLC_Panel_Side_SCAR_Long_FN15cm_RG=1;
					HLC_Panel_Side_SCAR_Long_Ladder_S_RG=1;
					HLC_Panel_Side_SCAR_Long_Ladder_M_RG=1;
					HLC_Panel_Side_SCAR_Long_Ladder_L_RG=1;
					HLC_Panel_Side_SCAR_Long_MagpulXT_RG=1;
					HLC_Panel_Side_SCAR_Long_XTME_RG=1;
					HLC_Panel_Side_SCAR_Long_2xXTME_RG=1;
					HLC_Panel_Side_SCAR_Long_4xXTME_RG=1;
					HLC_Panel_Side_SCAR_Long_Ladder_S_Pride=1;
					HLC_Panel_Side_SCAR_Long_Ladder_M_Pride=1;
					HLC_Panel_Side_SCAR_Long_Ladder_L_Pride=1;
					HLC_Panel_Side_SCAR_Long_MagpulXT_Pride=1;
				};
			};
			class MuzzleSlot: asdg_MuzzleSlot_556
			{
				iconPosition[]={0,0};
				iconScale=1;
				iconPicture="\A3\Weapons_F\Data\clear_empty.paa";
				iconPinPoint="Left";
			};
		};
		inertia="(0.329 + 0.024)";
		dexterity=1.4620221;
		aimTransitionSpeed=1.0234154;
		class LinkedItems
		{
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="hlc_muzzle_KX3_comp";
			};
		};
		model="nia_wp_SCAR\mesh\rifle\SCARL_STD_SRX.p3d";
		picture="\nia_wp_SCAR\tex\ui\hlc_wp_SCARL_STD_SRX_ca";
		UiPicture="\A3\weapons_f\data\UI\icon_regular_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"nia_wp_SCAR\tex\toadie_SCAR\scar_common_tan_co.paa",
			"nia_wp_SCAR\tex\toadie_SCAR\scar_lower_tan_co.paa",
			"nia_wp_SCAR\tex\toadie_SCAR\stock_tan_co.paa",
			"nia_wp_SCAR\tex\toadie_SCAR\upper_SCARL_tan_co.paa",
			"hlc_core\tex\acc\Stock\magpul_CTR_co.paa",
			"nia_wp_SCAR\tex\toadie_SCAR\acc_extensions_co.paa"
		};
		HiddenSelectionsMaterials[]=
		{
			"nia_wp_SCAR\mat\scar_common.rvmat",
			"nia_wp_SCAR\mat\scar_lowers.rvmat",
			"nia_wp_SCAR\mat\scar_stock.rvmat",
			"nia_wp_SCAR\mat\scar_upper_SCARL.rvmat",
			"hlc_core\mat\acc\stock\magpul_CTR.rvmat",
			"nia_wp_SCAR\mat\Acc_Extensions.rvmat"
		};
		class nia_magSwitch
		{
			hlc_50rnd_556x45_EPR="hlc_wp_SCARL_STD_SRX_X15";
			hlc_50rnd_556x45_SOST="hlc_wp_SCARL_STD_SRX_X15";
			hlc_50rnd_556x45_SPR="hlc_wp_SCARL_STD_SRX_X15";
			hlc_50rnd_556x45_M="hlc_wp_SCARL_STD_SRX_X15";
			hlc_50rnd_556x45_MDim="hlc_wp_SCARL_STD_SRX_X15";
			default="hlc_wp_SCARL_STD_SRX";
		};
		class nia_gripSwitch
		{
			VFG="hlc_wp_SCARL_STD_SRX_grip";
			AFG="hlc_wp_SCARL_STD_SRX_grip2";
			VFG2="hlc_wp_SCARL_STD_SRX_grip3";
			default="hlc_wp_SCARL_STD_SRX";
		};
		rhs_grip1_change="hlc_wp_SCARL_STD_SRX_grip";
		rhs_grip2_change="hlc_wp_SCARL_STD_SRX_grip2";
		rhs_grip3_change="hlc_wp_SCARL_STD_SRX_grip3";
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
			class hlc_wp_SCARL_STD_SRX
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SCARL_STD_SRX_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARL_STD_SRX_TacReload: hlc_wp_SCARL_STD_SRX
	{
		magazineReloadSwitchPhase="(40 / 96)";
		scopeArsenal=0;
		reloadMagazineSound[]=
		{
			"\nia_wp_SCAR\snd\mk16_reload_partial.ogg",
			0.85000002,
			1,
			25
		};
		reloadAction="NIA_GestureReload_Mk16_Tactical";
		model="nia_wp_SCAR\mesh\Rifle\SCARL_STD_SRX_TacReload.p3d";
		rhs_grip1_change="hlc_wp_SCARL_STD_SRX_grip";
		rhs_grip2_change="hlc_wp_SCARL_STD_SRX_grip2";
		rhs_grip3_change="hlc_wp_SCARL_STD_SRX_grip3";
		class nia_gripSwitch
		{
			VFG="hlc_wp_SCARL_STD_SRX_grip";
			AFG="hlc_wp_SCARL_STD_SRX_grip2";
			VFG2="hlc_wp_SCARL_STD_SRX_grip3";
			default="hlc_wp_SCARL_STD_SRX_TacReload";
		};
	};
	class hlc_wp_SCARL_STD_SRX_grip: hlc_wp_SCARL_STD_SRX
	{
		scopeArsenal=0;
		dexterity=1.5620221;
		aimTransitionSpeed=1.0934155;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handgesture_SCARL_VFG.rtm"
		};
		class nia_magSwitch
		{
			hlc_50rnd_556x45_EPR="hlc_wp_SCARL_STD_SRX_X15_grip";
			hlc_50rnd_556x45_SOST="hlc_wp_SCARL_STD_SRX_X15_grip";
			hlc_50rnd_556x45_SPR="hlc_wp_SCARL_STD_SRX_X15_grip";
			hlc_50rnd_556x45_M="hlc_wp_SCARL_STD_SRX_X15_grip";
			hlc_50rnd_556x45_MDim="hlc_wp_SCARL_STD_SRX_X15_grip";
			default="hlc_wp_SCARL_STD_SRX_grip";
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
			class hlc_wp_SCARL_STD_SRX_grip
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SCARL_STD_SRX_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARL_STD_SRX_grip2: hlc_wp_SCARL_STD_SRX
	{
		scopeArsenal=0;
		inertia="(0.353*0.85)";
		dexterity=1.5620221;
		aimTransitionSpeed=1.0934155;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handgesture_SCARL_AFG.rtm"
		};
		class nia_magSwitch
		{
			hlc_50rnd_556x45_EPR="hlc_wp_SCARL_STD_SRX_X15_grip2";
			hlc_50rnd_556x45_SOST="hlc_wp_SCARL_STD_SRX_X15_grip2";
			hlc_50rnd_556x45_SPR="hlc_wp_SCARL_STD_SRX_X15_grip2";
			hlc_50rnd_556x45_M="hlc_wp_SCARL_STD_SRX_X15_grip2";
			hlc_50rnd_556x45_MDim="hlc_wp_SCARL_STD_SRX_X15_grip2";
			default="hlc_wp_SCARL_STD_SRX_grip2";
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
			class hlc_wp_SCARL_STD_SRX_grip2
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SCARL_STD_SRX_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARL_STD_SRX_grip3: hlc_wp_SCARL_STD_SRX
	{
		scopeArsenal=0;
		dexterity=1.5620221;
		aimTransitionSpeed=1.0934155;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handgesture_SCARL_VFG.rtm"
		};
		class nia_magSwitch
		{
			hlc_50rnd_556x45_EPR="hlc_wp_SCARL_STD_SRX_X15_grip3";
			hlc_50rnd_556x45_SOST="hlc_wp_SCARL_STD_SRX_X15_grip3";
			hlc_50rnd_556x45_SPR="hlc_wp_SCARL_STD_SRX_X15_grip3";
			hlc_50rnd_556x45_M="hlc_wp_SCARL_STD_SRX_X15_grip3";
			hlc_50rnd_556x45_MDim="hlc_wp_SCARL_STD_SRX_X15_grip3";
			default="hlc_wp_SCARL_STD_SRX_grip3";
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
			class hlc_wp_SCARL_STD_SRX_grip3
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SCARL_STD_SRX_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARL_STD_SRX_X15: hlc_wp_SCARL_STD_SRX
	{
		scopeArsenal=0;
		baseweapon="hlc_wp_SCARL_STD_SRX_X15";
		reloadAction="NIA_GestureReload_Mk16_X15";
		reloadMagazineSound[]=
		{
			"nia_wp_SCAR\snd\mk16_reload_X15_short.ogg",
			0.80000001,
			1,
			25
		};
		class nia_gripSwitch
		{
			VFG="hlc_wp_SCARL_STD_SRX_X15_grip";
			AFG="hlc_wp_SCARL_STD_SRX_X15_grip2";
			VFG2="hlc_wp_SCARL_STD_SRX_X15_grip3";
			default="hlc_wp_SCARL_STD_SRX_X15";
		};
		rhs_grip1_change="hlc_wp_SCARL_STD_SRX_X15_grip";
		rhs_grip2_change="hlc_wp_SCARL_STD_SRX_X15_grip2";
		rhs_grip3_change="hlc_wp_SCARL_STD_SRX_X15_grip3";
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
			class hlc_wp_SCARL_STD_SRX_X15
			{
				condition="( %1 == 0 )";
			};
			class hlc_wp_SCARL_STD_SRX_x15_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARL_STD_SRX_x15_TacReload: hlc_wp_SCARL_STD_SRX_X15
	{
		magazineReloadSwitchPhase="(40 / 96)";
		scopeArsenal=0;
		reloadMagazineSound[]=
		{
			"\nia_wp_SCAR\snd\mk16_reload_X15_partial.ogg",
			0.85000002,
			1,
			25
		};
		reloadAction="NIA_GestureReload_Mk16_X15_Tactical";
		model="nia_wp_SCAR\mesh\Rifle\SCARL_STD_SRX_TacReload.p3d";
		rhs_grip1_change="hlc_wp_SCARL_STD_SRX_x15_grip";
		rhs_grip2_change="hlc_wp_SCARL_STD_SRX_x15_grip2";
		rhs_grip3_change="hlc_wp_SCARL_STD_SRX_x15_grip3";
		class nia_gripSwitch
		{
			VFG="hlc_wp_SCARL_STD_SRX_x15_grip";
			AFG="hlc_wp_SCARL_STD_SRX_x15_grip2";
			VFG2="hlc_wp_SCARL_STD_SRX_x15_grip3";
			default="hlc_wp_SCARL_STD_SRX_x15_TacReload";
		};
	};
	class hlc_wp_SCARL_STD_SRX_X15_grip: hlc_wp_SCARL_STD_SRX_X15
	{
		scopeArsenal=0;
		dexterity=1.5620221;
		aimTransitionSpeed=1.0934155;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handgesture_SCARL_VFG.rtm"
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
			class hlc_wp_SCARL_STD_SRX_x15_grip
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SCARL_STD_SRX_x15_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARL_STD_SRX_X15_grip2: hlc_wp_SCARL_STD_SRX_X15
	{
		scopeArsenal=0;
		inertia="(0.353*0.85)";
		dexterity=1.5620221;
		aimTransitionSpeed=1.0934155;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handgesture_SCARL_AFG.rtm"
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
			class hlc_wp_SCARL_STD_SRX_x15_grip2
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SCARL_STD_SRX_x15_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARL_STD_SRX_X15_grip3: hlc_wp_SCARL_STD_SRX_X15
	{
		scopeArsenal=0;
		dexterity=1.5620221;
		aimTransitionSpeed=1.0934155;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handgesture_SCARL_VFG.rtm"
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
			class hlc_wp_SCARL_STD_SRX_x15_grip3
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SCARL_STD_SRX_x15_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARL_STD_SRX_camo: hlc_wp_SCARL_STD_SRX
	{
		author="Toadie";
		dlc="Niarms_SCAR";
		displayName="$STR_NIA_rifle_SCARL_STD_SRX_camo";
		scope=2;
		baseWeapon="hlc_wp_SCARL_STD_SRX_camo";
		picture="\nia_wp_SCAR\tex\ui\hlc_wp_SCARL_STD_SRX_camo_ca";
		hiddenSelectionsTextures[]=
		{
			"nia_wp_SCAR\tex\toadie_SCAR\scar_common_camo_co.paa",
			"nia_wp_SCAR\tex\toadie_SCAR\scar_lower_camo_co.paa",
			"nia_wp_SCAR\tex\toadie_SCAR\stock_camo_co.paa",
			"nia_wp_SCAR\tex\toadie_SCAR\upper_SCARL_camo_co.paa",
			"nia_wp_SCAR\tex\magpul_CTR_camo_co.paa",
			"nia_wp_SCAR\tex\toadie_SCAR\acc_extensions_camo_co.paa"
		};
		HiddenSelectionsMaterials[]=
		{
			"nia_wp_SCAR\mat\scar_common_camo.rvmat",
			"nia_wp_SCAR\mat\scar_lowers_camo.rvmat",
			"nia_wp_SCAR\mat\scar_stock_camo.rvmat",
			"nia_wp_SCAR\mat\scar_upper_SCARL_camo.rvmat",
			"nia_wp_SCAR\mat\magpul_CTR_camo.rvmat",
			"nia_wp_SCAR\mat\Acc_Extensions_camo.rvmat"
		};
		class nia_magSwitch
		{
			hlc_50rnd_556x45_EPR="hlc_wp_SCARL_STD_SRX_X15_camo";
			hlc_50rnd_556x45_SOST="hlc_wp_SCARL_STD_SRX_X15_camo";
			hlc_50rnd_556x45_SPR="hlc_wp_SCARL_STD_SRX_X15_camo";
			hlc_50rnd_556x45_M="hlc_wp_SCARL_STD_SRX_X15_camo";
			hlc_50rnd_556x45_MDim="hlc_wp_SCARL_STD_SRX_X15_camo";
			default="hlc_wp_SCARL_STD_SRX_camo";
		};
		class nia_gripSwitch
		{
			VFG="hlc_wp_SCARL_STD_SRX_camo_grip";
			AFG="hlc_wp_SCARL_STD_SRX_camo_grip2";
			VFG2="hlc_wp_SCARL_STD_SRX_camo_grip3";
			default="hlc_wp_SCARL_STD_SRX_camo";
		};
		rhs_grip1_change="hlc_wp_SCARL_STD_SRX_camo_grip";
		rhs_grip2_change="hlc_wp_SCARL_STD_SRX_camo_grip2";
		rhs_grip3_change="hlc_wp_SCARL_STD_SRX_camo_grip3";
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
			class hlc_wp_SCARL_STD_SRX_camo
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SCARL_STD_SRX_camo_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARL_STD_SRX_camo_TacReload: hlc_wp_SCARL_STD_SRX_camo
	{
		magazineReloadSwitchPhase="(40 / 96)";
		scopeArsenal=0;
		reloadMagazineSound[]=
		{
			"\nia_wp_SCAR\snd\mk16_reload_partial.ogg",
			0.85000002,
			1,
			25
		};
		reloadAction="NIA_GestureReload_Mk16_Tactical";
		model="nia_wp_SCAR\mesh\Rifle\SCARL_STD_SRX_TacReload.p3d";
		rhs_grip1_change="hlc_wp_SCARL_STD_SRX_camo_grip";
		rhs_grip2_change="hlc_wp_SCARL_STD_SRX_camo_grip2";
		rhs_grip3_change="hlc_wp_SCARL_STD_SRX_camo_grip3";
		class nia_gripSwitch
		{
			VFG="hlc_wp_SCARL_STD_SRX_camo_grip";
			AFG="hlc_wp_SCARL_STD_SRX_camo_grip2";
			VFG2="hlc_wp_SCARL_STD_SRX_camo_grip3";
			default="hlc_wp_SCARL_STD_SRX_camo_TacReload";
		};
	};
	class hlc_wp_SCARL_STD_SRX_camo_grip: hlc_wp_SCARL_STD_SRX_camo
	{
		scopeArsenal=0;
		dexterity=1.5620221;
		aimTransitionSpeed=1.0934155;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handgesture_SCARL_VFG.rtm"
		};
		class nia_magSwitch
		{
			hlc_50rnd_556x45_EPR="hlc_wp_SCARL_STD_SRX_X15_camo_grip";
			hlc_50rnd_556x45_SOST="hlc_wp_SCARL_STD_SRX_X15_camo_grip";
			hlc_50rnd_556x45_SPR="hlc_wp_SCARL_STD_SRX_X15_camo_grip";
			hlc_50rnd_556x45_M="hlc_wp_SCARL_STD_SRX_X15_camo_grip";
			hlc_50rnd_556x45_MDim="hlc_wp_SCARL_STD_SRX_X15_camo_grip";
			default="hlc_wp_SCARL_STD_SRX_camo_grip";
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
			class hlc_wp_SCARL_STD_SRX_camo_grip
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SCARL_STD_SRX_camo_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARL_STD_SRX_camo_grip2: hlc_wp_SCARL_STD_SRX_camo
	{
		scopeArsenal=0;
		inertia="(0.353*0.85)";
		dexterity=1.5620221;
		aimTransitionSpeed=1.0934155;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handgesture_SCARL_AFG.rtm"
		};
		class nia_magSwitch
		{
			hlc_50rnd_556x45_EPR="hlc_wp_SCARL_STD_SRX_X15_camo_grip2";
			hlc_50rnd_556x45_SOST="hlc_wp_SCARL_STD_SRX_X15_camo_grip2";
			hlc_50rnd_556x45_SPR="hlc_wp_SCARL_STD_SRX_X15_camo_grip2";
			hlc_50rnd_556x45_M="hlc_wp_SCARL_STD_SRX_X15_camo_grip2";
			hlc_50rnd_556x45_MDim="hlc_wp_SCARL_STD_SRX_X15_camo_grip2";
			default="hlc_wp_SCARL_STD_SRX_camo_grip2";
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
			class hlc_wp_SCARL_STD_SRX_camo_grip2
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SCARL_STD_SRX_camo_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARL_STD_SRX_camo_grip3: hlc_wp_SCARL_STD_SRX_camo
	{
		scopeArsenal=0;
		dexterity=1.5620221;
		aimTransitionSpeed=1.0934155;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handgesture_SCARL_VFG.rtm"
		};
		class nia_magSwitch
		{
			hlc_50rnd_556x45_EPR="hlc_wp_SCARL_STD_SRX_X15_camo_grip3";
			hlc_50rnd_556x45_SOST="hlc_wp_SCARL_STD_SRX_X15_camo_grip3";
			hlc_50rnd_556x45_SPR="hlc_wp_SCARL_STD_SRX_X15_camo_grip3";
			hlc_50rnd_556x45_M="hlc_wp_SCARL_STD_SRX_X15_camo_grip3";
			hlc_50rnd_556x45_MDim="hlc_wp_SCARL_STD_SRX_X15_camo_grip3";
			default="hlc_wp_SCARL_STD_SRX_camo_grip3";
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
			class hlc_wp_SCARL_STD_SRX_camo_grip3
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SCARL_STD_SRX_camo_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARL_STD_SRX_X15_camo: hlc_wp_SCARL_STD_SRX_camo
	{
		scopeArsenal=0;
		reloadAction="NIA_GestureReload_Mk16_X15";
		reloadMagazineSound[]=
		{
			"nia_wp_SCAR\snd\mk16_reload_X15_short.ogg",
			0.80000001,
			1,
			25
		};
		baseweapon="hlc_wp_SCARL_STD_SRX_X15_camo";
		class nia_gripSwitch
		{
			VFG="hlc_wp_SCARL_STD_SRX_X15_camo_grip";
			AFG="hlc_wp_SCARL_STD_SRX_X15_camo_grip2";
			VFG2="hlc_wp_SCARL_STD_SRX_X15_camo_grip3";
			default="hlc_wp_SCARL_STD_SRX_X15_camo";
		};
		rhs_grip1_change="hlc_wp_SCARL_STD_SRX_X15_camo_grip";
		rhs_grip2_change="hlc_wp_SCARL_STD_SRX_X15_camo_grip2";
		rhs_grip3_change="hlc_wp_SCARL_STD_SRX_X15_camo_grip3";
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
			class hlc_wp_SCARL_STD_SRX_X15_camo
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SCARL_STD_SRX_x15_camo_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARL_STD_SRX_x15_camo_TacReload: hlc_wp_SCARL_STD_SRX_X15_camo
	{
		magazineReloadSwitchPhase="(40 / 96)";
		scopeArsenal=0;
		reloadMagazineSound[]=
		{
			"\nia_wp_SCAR\snd\mk16_reload_X15_partial.ogg",
			0.85000002,
			1,
			25
		};
		reloadAction="NIA_GestureReload_Mk16_X15_Tactical";
		model="nia_wp_SCAR\mesh\Rifle\SCARL_STD_SRX_TacReload.p3d";
		rhs_grip1_change="hlc_wp_SCARL_STD_SRX_x15_camo_grip";
		rhs_grip2_change="hlc_wp_SCARL_STD_SRX_x15_camo_grip2";
		rhs_grip3_change="hlc_wp_SCARL_STD_SRX_x15_camo_grip3";
		class nia_gripSwitch
		{
			VFG="hlc_wp_SCARL_STD_SRX_x15_camo_grip";
			AFG="hlc_wp_SCARL_STD_SRX_x15_camo_grip2";
			VFG2="hlc_wp_SCARL_STD_SRX_x15_camo_grip3";
			default="hlc_wp_SCARL_STD_SRX_x15_camo_TacReload";
		};
	};
	class hlc_wp_SCARL_STD_SRX_X15_camo_grip: hlc_wp_SCARL_STD_SRX_X15_camo
	{
		scopeArsenal=0;
		dexterity=1.5620221;
		aimTransitionSpeed=1.0934155;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handgesture_SCARL_VFG.rtm"
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
			class hlc_wp_SCARL_STD_SRX_X15_camo_grip
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SCARL_STD_SRX_x15_camo_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARL_STD_SRX_X15_camo_grip2: hlc_wp_SCARL_STD_SRX_X15_camo
	{
		scopeArsenal=0;
		inertia="(0.353*0.85)";
		dexterity=1.5620221;
		aimTransitionSpeed=1.0934155;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handgesture_SCARL_AFG.rtm"
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
			class hlc_wp_SCARL_STD_SRX_X15_camo_grip2
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SCARL_STD_SRX_x15_camo_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARL_STD_SRX_X15_camo_grip3: hlc_wp_SCARL_STD_SRX_X15_camo
	{
		scopeArsenal=0;
		dexterity=1.5620221;
		aimTransitionSpeed=1.0934155;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handgesture_SCARL_VFG.rtm"
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
			class hlc_wp_SCARL_STD_SRX_X15_camo_grip3
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SCARL_STD_SRX_x15_camo_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARL_STD_SRX_Blk: hlc_wp_SCARL_STD_SRX
	{
		author="Toadie";
		dlc="Niarms_SCAR";
		displayName="$STR_NIA_rifle_SCARL_STD_SRX_blk";
		scope=2;
		baseWeapon="hlc_wp_SCARL_STD_SRX_Blk";
		picture="\nia_wp_SCAR\tex\ui\hlc_wp_SCARL_STD_SRX_Blk_ca";
		hiddenSelectionsTextures[]=
		{
			"nia_wp_SCAR\tex\toadie_SCAR\scar_common_co.paa",
			"nia_wp_SCAR\tex\toadie_SCAR\scar_lower_co.paa",
			"nia_wp_SCAR\tex\toadie_SCAR\stock_co.paa",
			"nia_wp_SCAR\tex\toadie_SCAR\upper_SCARL_co.paa",
			"hlc_core\tex\acc\Stock\magpul_CTR_black_co.paa",
			"nia_wp_SCAR\tex\toadie_SCAR\acc_extensions_co.paa"
		};
		class nia_magSwitch
		{
			hlc_X15_762x51_B_SCARL_tan="hlc_wp_SCARL_STD_SRX_X15_Blk";
			hlc_X15_762x51_mk316_SCARL_tan="hlc_wp_SCARL_STD_SRX_X15_Blk";
			hlc_X15_762x51_Barrier_SCARL_tan="hlc_wp_SCARL_STD_SRX_X15_Blk";
			hlc_X15_762x51_t_SCARL_tan="hlc_wp_SCARL_STD_SRX_X15_Blk";
			hlc_X15_762x51_TDim_SCARL_tan="hlc_wp_SCARL_STD_SRX_X15_Blk";
			hlc_X15_762x51_S_SCARL_tan="hlc_wp_SCARL_STD_SRX_X15_Blk";
			hlc_X15_762x51_B_SCARL="hlc_wp_SCARL_STD_SRX_X15_Blk";
			hlc_X15_762x51_mk316_SCARL="hlc_wp_SCARL_STD_SRX_X15_Blk";
			hlc_X15_762x51_Barrier_SCARL="hlc_wp_SCARL_STD_SRX_X15_Blk";
			hlc_X15_762x51_t_SCARL="hlc_wp_SCARL_STD_SRX_X15_Blk";
			hlc_X15_762x51_TDim_SCARL="hlc_wp_SCARL_STD_SRX_X15_Blk";
			hlc_X15_762x51_S_SCARL="hlc_wp_SCARL_STD_SRX_X15_Blk";
			hlc_X15_762x51_B_SCARL_camo="hlc_wp_SCARL_STD_SRX_X15_Blk";
			hlc_X15_762x51_mk316_SCARL_camo="hlc_wp_SCARL_STD_SRX_X15_Blk";
			hlc_X15_762x51_Barrier_SCARL_camo="hlc_wp_SCARL_STD_SRX_X15_Blk";
			hlc_X15_762x51_t_SCARL_camo="hlc_wp_SCARL_STD_SRX_X15_Blk";
			hlc_X15_762x51_TDim_SCARL_camo="hlc_wp_SCARL_STD_SRX_X15_Blk";
			hlc_X15_762x51_S_SCARL_camo="hlc_wp_SCARL_STD_SRX_X15_Blk";
			default="hlc_wp_SCARL_STD_SRX_Blk";
		};
		class nia_gripSwitch
		{
			VFG="hlc_wp_SCARL_STD_SRX_Blk_grip";
			AFG="hlc_wp_SCARL_STD_SRX_Blk_grip2";
			VFG2="hlc_wp_SCARL_STD_SRX_Blk_grip3";
			default="hlc_wp_SCARL_STD_SRX_Blk";
		};
		rhs_grip1_change="hlc_wp_SCARL_STD_SRX_Blk_grip";
		rhs_grip2_change="hlc_wp_SCARL_STD_SRX_Blk_grip2";
		rhs_grip3_change="hlc_wp_SCARL_STD_SRX_Blk_grip3";
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
			class hlc_wp_SCARL_STD_SRX_blk
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SCARL_STD_SRX_blk_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARL_STD_SRX_blk_TacReload: hlc_wp_SCARL_STD_SRX_Blk
	{
		magazineReloadSwitchPhase="(40 / 96)";
		scopeArsenal=0;
		reloadMagazineSound[]=
		{
			"\nia_wp_SCAR\snd\mk16_reload_partial.ogg",
			0.85000002,
			1,
			25
		};
		reloadAction="NIA_GestureReload_Mk16_Tactical";
		model="nia_wp_SCAR\mesh\Rifle\SCARL_STD_SRX_TacReload.p3d";
		rhs_grip1_change="hlc_wp_SCARL_STD_SRX_blk_grip";
		rhs_grip2_change="hlc_wp_SCARL_STD_SRX_blk_grip2";
		rhs_grip3_change="hlc_wp_SCARL_STD_SRX_blk_grip3";
		class nia_gripSwitch
		{
			VFG="hlc_wp_SCARL_STD_SRX_blk_grip";
			AFG="hlc_wp_SCARL_STD_SRX_blk_grip2";
			VFG2="hlc_wp_SCARL_STD_SRX_blk_grip3";
			default="hlc_wp_SCARL_STD_SRX_blk_TacReload";
		};
	};
	class hlc_wp_SCARL_STD_SRX_Blk_grip: hlc_wp_SCARL_STD_SRX_Blk
	{
		scopeArsenal=0;
		dexterity=1.5620221;
		aimTransitionSpeed=1.0934155;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handgesture_SCARL_VFG.rtm"
		};
		class nia_magSwitch
		{
			hlc_50rnd_556x45_EPR="hlc_wp_SCARL_STD_SRX_X15_blk_grip";
			hlc_50rnd_556x45_SOST="hlc_wp_SCARL_STD_SRX_X15_blk_grip";
			hlc_50rnd_556x45_SPR="hlc_wp_SCARL_STD_SRX_X15_blk_grip";
			hlc_50rnd_556x45_M="hlc_wp_SCARL_STD_SRX_X15_blk_grip";
			hlc_50rnd_556x45_MDim="hlc_wp_SCARL_STD_SRX_X15_blk_grip";
			default="hlc_wp_SCARL_STD_SRX_Blk_grip";
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
			class hlc_wp_SCARL_STD_SRX_blk_grip
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SCARL_STD_SRX_blk_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARL_STD_SRX_Blk_grip2: hlc_wp_SCARL_STD_SRX_Blk
	{
		scopeArsenal=0;
		inertia="(0.353*0.85)";
		dexterity=1.5620221;
		aimTransitionSpeed=1.0934155;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handgesture_SCARL_AFG.rtm"
		};
		class nia_magSwitch
		{
			hlc_50rnd_556x45_EPR="hlc_wp_SCARL_STD_SRX_X15_blk_grip2";
			hlc_50rnd_556x45_SOST="hlc_wp_SCARL_STD_SRX_X15_blk_grip2";
			hlc_50rnd_556x45_SPR="hlc_wp_SCARL_STD_SRX_X15_blk_grip2";
			hlc_50rnd_556x45_M="hlc_wp_SCARL_STD_SRX_X15_blk_grip2";
			hlc_50rnd_556x45_MDim="hlc_wp_SCARL_STD_SRX_X15_blk_grip2";
			default="hlc_wp_SCARL_STD_SRX_Blk_grip2";
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
			class hlc_wp_SCARL_STD_SRX_blk_grip2
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SCARL_STD_SRX_blk_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARL_STD_SRX_Blk_grip3: hlc_wp_SCARL_STD_SRX_Blk
	{
		scopeArsenal=0;
		dexterity=1.5620221;
		aimTransitionSpeed=1.0934155;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handgesture_SCARL_VFG.rtm"
		};
		class nia_magSwitch
		{
			hlc_50rnd_556x45_EPR="hlc_wp_SCARL_STD_SRX_X15_blk_grip3";
			hlc_50rnd_556x45_SOST="hlc_wp_SCARL_STD_SRX_X15_blk_grip3";
			hlc_50rnd_556x45_SPR="hlc_wp_SCARL_STD_SRX_X15_blk_grip3";
			hlc_50rnd_556x45_M="hlc_wp_SCARL_STD_SRX_X15_blk_grip3";
			hlc_50rnd_556x45_MDim="hlc_wp_SCARL_STD_SRX_X15_blk_grip3";
			default="hlc_wp_SCARL_STD_SRX_Blk_grip3";
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
			class hlc_wp_SCARL_STD_SRX_blk_grip3
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SCARL_STD_SRX_blk_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARL_STD_SRX_X15_Blk: hlc_wp_SCARL_STD_SRX_Blk
	{
		scopeArsenal=0;
		reloadAction="NIA_GestureReload_Mk16_X15";
		reloadMagazineSound[]=
		{
			"nia_wp_SCAR\snd\mk16_reload_X15_short.ogg",
			0.80000001,
			1,
			25
		};
		baseweapon="hlc_wp_SCARL_STD_SRX_X15_Blk";
		class nia_gripSwitch
		{
			VFG="hlc_wp_SCARL_STD_SRX_X15_Blk_grip";
			AFG="hlc_wp_SCARL_STD_SRX_X15_Blk_grip2";
			VFG2="hlc_wp_SCARL_STD_SRX_X15_Blk_grip3";
			default="hlc_wp_SCARL_STD_SRX_X15_Blk";
		};
		rhs_grip1_change="hlc_wp_SCARL_STD_SRX_X15_Blk_grip";
		rhs_grip2_change="hlc_wp_SCARL_STD_SRX_X15_Blk_grip2";
		rhs_grip3_change="hlc_wp_SCARL_STD_SRX_X15_Blk_grip3";
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
			class hlc_wp_SCARL_STD_SRX_X15_blk
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SCARL_STD_SRX_X15_blk_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARL_STD_SRX_x15_blk_TacReload: hlc_wp_SCARL_STD_SRX_X15_Blk
	{
		magazineReloadSwitchPhase="(40 / 96)";
		scopeArsenal=0;
		reloadMagazineSound[]=
		{
			"\nia_wp_SCAR\snd\mk16_reload_X15_partial.ogg",
			0.85000002,
			1,
			25
		};
		reloadAction="NIA_GestureReload_Mk16_X15_Tactical";
		model="nia_wp_SCAR\mesh\Rifle\SCARL_STD_SRX_TacReload.p3d";
		rhs_grip1_change="hlc_wp_SCARL_STD_SRX_x15_blk_grip";
		rhs_grip2_change="hlc_wp_SCARL_STD_SRX_x15_blk_grip2";
		rhs_grip3_change="hlc_wp_SCARL_STD_SRX_x15_blk_grip3";
		class nia_gripSwitch
		{
			VFG="hlc_wp_SCARL_STD_SRX_x15_blk_grip";
			AFG="hlc_wp_SCARL_STD_SRX_x15_blk_grip2";
			VFG2="hlc_wp_SCARL_STD_SRX_x15_blk_grip3";
			default="hlc_wp_SCARL_STD_SRX_x15_blk_TacReload";
		};
	};
	class hlc_wp_SCARL_STD_SRX_X15_Blk_grip: hlc_wp_SCARL_STD_SRX_X15_Blk
	{
		scopeArsenal=0;
		dexterity=1.5620221;
		aimTransitionSpeed=1.0934155;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handgesture_SCARL_VFG.rtm"
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
			class hlc_wp_SCARL_STD_SRX_X15_blk_grip
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SCARL_STD_SRX_X15_blk_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARL_STD_SRX_X15_Blk_grip2: hlc_wp_SCARL_STD_SRX_X15_Blk
	{
		scopeArsenal=0;
		inertia="(0.353*0.85)";
		dexterity=1.5620221;
		aimTransitionSpeed=1.0934155;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handgesture_SCARL_AFG.rtm"
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
			class hlc_wp_SCARL_STD_SRX_X15_blk_grip2
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SCARL_STD_SRX_X15_blk_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARL_STD_SRX_X15_Blk_grip3: hlc_wp_SCARL_STD_SRX_X15_Blk
	{
		scopeArsenal=0;
		dexterity=1.5620221;
		aimTransitionSpeed=1.0934155;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handgesture_SCARL_VFG.rtm"
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
			class hlc_wp_SCARL_STD_SRX_X15_blk_grip3
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SCARL_STD_SRX_X15_blk_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARL_STD_EGLM: hlc_wp_SCARL_STD
	{
		author="Toadie";
		dlc="Niarms_SCAR";
		displayName="$STR_NIA_rifle_SCARL_STD_EGLM";
		scope=2;
		muzzles[]=
		{
			"this",
			"hlc_GL_SCARL_EGLM"
		};
		baseWeapon="hlc_wp_SCARL_STD_EGLM";
		mass=104.422;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=104.422;
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
			class MuzzleSlot: asdg_MuzzleSlot_556
			{
				iconPosition[]={0,0};
				iconScale=1;
				iconPicture="\A3\Weapons_F\Data\clear_empty.paa";
				iconPinPoint="Left";
			};
			class UnderBarrelSlot
			{
				iconPosition[]={0,0};
				iconScale=1;
				iconPicture="\A3\Weapons_F\Data\clear_empty.paa";
				iconPinPoint="Left";
			};
			class GripodSlot
			{
				iconPosition[]={0,0};
				iconScale=1;
				iconPicture="\A3\Weapons_F\Data\clear_empty.paa";
				iconPinPoint="Left";
			};
		};
		inertia="(0.329 + 0.15)";
		dexterity=1.1827176;
		aimTransitionSpeed=0.82790226;
		model="nia_wp_SCAR\mesh\rifle\SCARL_STD_EGLM.p3d";
		picture="\nia_wp_SCAR\tex\ui\hlc_wp_SCARL_STD_EGLM_ca";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handpose_EGLM.rtm"
		};
		UiPicture="\A3\weapons_f\data\UI\icon_regular_CA.paa";
		reloadAction="NIA_GestureReload_Mk16_EGLM";
		hiddenSelectionsTextures[]=
		{
			"nia_wp_SCAR\tex\toadie_SCAR\scar_common_tan_co.paa",
			"nia_wp_SCAR\tex\toadie_SCAR\scar_lower_tan_co.paa",
			"nia_wp_SCAR\tex\toadie_SCAR\stock_tan_co.paa",
			"nia_wp_SCAR\tex\toadie_SCAR\upper_SCARL_tan_co.paa",
			"nia_wp_SCAR\tex\toadie_SCAR\Launcher_FN-EGLM_L_tan_co.paa"
		};
		HiddenSelectionsMaterials[]=
		{
			"nia_wp_SCAR\mat\scar_common.rvmat",
			"nia_wp_SCAR\mat\scar_lowers.rvmat",
			"nia_wp_SCAR\mat\scar_stock.rvmat",
			"nia_wp_SCAR\mat\scar_upper_scarl.rvmat",
			"nia_wp_SCAR\mat\Launcher_FN-EGLM_L.rvmat"
		};
		class nia_magSwitch
		{
			default="hlc_wp_SCARL_STD_EGLM";
		};
		class nia_gripSwitch
		{
			VFG="hlc_wp_SCARL_STD_EGLM";
			AFG="hlc_wp_SCARL_STD_EGLM";
			VFG2="hlc_wp_SCARL_STD_EGLM";
			default="hlc_wp_SCARL_STD_EGLM";
		};
		rhs_grip1_change="hlc_wp_SCARL_STD_EGLM";
		rhs_grip2_change="hlc_wp_SCARL_STD_EGLM";
		rhs_grip3_change="hlc_wp_SCARL_STD_EGLM";
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
			class hlc_wp_SCARL_STD_EGLM
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SCARL_STD_EGLM_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARL_STD_EGLM_TacReload: hlc_wp_SCARL_STD_EGLM
	{
		magazineReloadSwitchPhase="(40 / 96)";
		scopeArsenal=0;
		reloadMagazineSound[]=
		{
			"\nia_wp_SCAR\snd\mk16_reload_partial.ogg",
			0.85000002,
			1,
			25
		};
		reloadAction="NIA_GestureReload_Mk16_EGLM_Tactical";
		model="nia_wp_SCAR\mesh\Rifle\SCARL_STD_EGLM_TacReload.p3d";
		rhs_grip1_change="hlc_wp_SCARL_STD_EGLM_TacReload";
		rhs_grip2_change="hlc_wp_SCARL_STD_EGLM_TacReload";
		rhs_grip3_change="hlc_wp_SCARL_STD_EGLM_TacReload";
		class nia_gripSwitch
		{
			VFG="hlc_wp_SCARL_STD_EGLM_TacReload";
			AFG="hlc_wp_SCARL_STD_EGLM_TacReload";
			VFG2="hlc_wp_SCARL_STD_EGLM_TacReload";
			default="hlc_wp_SCARL_STD_EGLM_TacReload";
		};
	};
	class hlc_wp_SCARL_STD_EGLM_Blk: hlc_wp_SCARL_STD_blk
	{
		author="Toadie";
		dlc="Niarms_SCAR";
		displayName="$STR_NIA_rifle_SCARL_STD_EGLM_BLK";
		scope=2;
		muzzles[]=
		{
			"this",
			"hlc_GL_SCARL_EGLM"
		};
		baseWeapon="hlc_wp_SCARL_STD_EGLM_Blk";
		mass=104.422;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=104.422;
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
			class MuzzleSlot: asdg_MuzzleSlot_556
			{
				iconPosition[]={0,0};
				iconScale=1;
				iconPicture="\A3\Weapons_F\Data\clear_empty.paa";
				iconPinPoint="Left";
			};
			class UnderBarrelSlot
			{
				iconPosition[]={0,0};
				iconScale=1;
				iconPicture="\A3\Weapons_F\Data\clear_empty.paa";
				iconPinPoint="Left";
			};
			class GripodSlot
			{
				iconPosition[]={0,0};
				iconScale=1;
				iconPicture="\A3\Weapons_F\Data\clear_empty.paa";
				iconPinPoint="Left";
			};
		};
		inertia="(0.329 + 0.15)";
		dexterity=1.1827176;
		aimTransitionSpeed=0.82790226;
		model="nia_wp_SCAR\mesh\rifle\SCARL_STD_EGLM.p3d";
		picture="\nia_wp_SCAR\tex\ui\hlc_wp_SCARL_STD_EGLM_Blk_ca";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handpose_EGLM.rtm"
		};
		UiPicture="\A3\weapons_f\data\UI\icon_regular_CA.paa";
		reloadAction="NIA_GestureReload_Mk16_EGLM";
		hiddenSelectionsTextures[]=
		{
			"nia_wp_SCAR\tex\toadie_SCAR\scar_common_co.paa",
			"nia_wp_SCAR\tex\toadie_SCAR\scar_lower_co.paa",
			"nia_wp_SCAR\tex\toadie_SCAR\stock_co.paa",
			"nia_wp_SCAR\tex\toadie_SCAR\upper_SCARL_co.paa",
			"nia_wp_SCAR\tex\toadie_SCAR\Launcher_FN-EGLM_L_co.paa"
		};
		HiddenSelectionsMaterials[]=
		{
			"nia_wp_SCAR\mat\scar_common.rvmat",
			"nia_wp_SCAR\mat\scar_lowers.rvmat",
			"nia_wp_SCAR\mat\scar_stock.rvmat",
			"nia_wp_SCAR\mat\scar_upper_scarl.rvmat",
			"nia_wp_SCAR\mat\Launcher_FN-EGLM_L.rvmat"
		};
		class nia_magSwitch
		{
			default="hlc_wp_SCARL_STD_EGLM_Blk";
		};
		class nia_gripSwitch
		{
			VFG="hlc_wp_SCARL_STD_EGLM_blk";
			AFG="hlc_wp_SCARL_STD_EGLM_blk";
			VFG2="hlc_wp_SCARL_STD_EGLM_blk";
			default="hlc_wp_SCARL_STD_EGLM_blk";
		};
		rhs_grip1_change="hlc_wp_SCARL_STD_EGLM_blk";
		rhs_grip2_change="hlc_wp_SCARL_STD_EGLM_blk";
		rhs_grip3_change="hlc_wp_SCARL_STD_EGLM_blk";
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
			class hlc_wp_SCARL_STD_EGLM_Blk
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SCARL_STD_EGLM_Blk_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARL_STD_EGLM_Blk_TacReload: hlc_wp_SCARL_STD_EGLM_Blk
	{
		magazineReloadSwitchPhase="(40 / 96)";
		scopeArsenal=0;
		reloadMagazineSound[]=
		{
			"\nia_wp_SCAR\snd\mk16_reload_partial.ogg",
			0.85000002,
			1,
			25
		};
		reloadAction="NIA_GestureReload_Mk16_EGLM_Tactical";
		model="nia_wp_SCAR\mesh\Rifle\SCARL_STD_EGLM_TacReload.p3d";
		rhs_grip1_change="hlc_wp_SCARL_STD_EGLM_Blk_TacReload";
		rhs_grip2_change="hlc_wp_SCARL_STD_EGLM_Blk_TacReload";
		rhs_grip3_change="hlc_wp_SCARL_STD_EGLM_Blk_TacReload";
		class nia_gripSwitch
		{
			VFG="hlc_wp_SCARL_STD_EGLM_Blk_TacReload";
			AFG="hlc_wp_SCARL_STD_EGLM_Blk_TacReload";
			VFG2="hlc_wp_SCARL_STD_EGLM_Blk_TacReload";
			default="hlc_wp_SCARL_STD_EGLM_Blk_TacReload";
		};
	};
	class hlc_wp_SCARL_STD_EGLM_camo: hlc_wp_SCARL_STD_camo
	{
		author="Toadie";
		dlc="Niarms_SCAR";
		displayName="$STR_NIA_rifle_SCARL_STD_EGLM_camo";
		scope=2;
		muzzles[]=
		{
			"this",
			"hlc_GL_SCARL_EGLM"
		};
		baseWeapon="hlc_wp_SCARL_STD_EGLM_camo";
		mass=104.422;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=104.422;
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
			class MuzzleSlot: asdg_MuzzleSlot_556
			{
				iconPosition[]={0,0};
				iconScale=1;
				iconPicture="\A3\Weapons_F\Data\clear_empty.paa";
				iconPinPoint="Left";
			};
			class UnderBarrelSlot
			{
				iconPosition[]={0,0};
				iconScale=1;
				iconPicture="\A3\Weapons_F\Data\clear_empty.paa";
				iconPinPoint="Left";
			};
			class GripodSlot
			{
				iconPosition[]={0,0};
				iconScale=1;
				iconPicture="\A3\Weapons_F\Data\clear_empty.paa";
				iconPinPoint="Left";
			};
		};
		inertia="(0.329 + 0.15)";
		dexterity=1.1827176;
		aimTransitionSpeed=0.82790226;
		model="nia_wp_SCAR\mesh\rifle\SCARL_STD_EGLM.p3d";
		picture="\nia_wp_SCAR\tex\ui\hlc_wp_SCARL_STD_EGLM_camo_ca";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handpose_EGLM.rtm"
		};
		UiPicture="\A3\weapons_f\data\UI\icon_regular_CA.paa";
		reloadAction="NIA_GestureReload_Mk16_EGLM";
		hiddenSelectionsTextures[]=
		{
			"nia_wp_SCAR\tex\toadie_SCAR\scar_common_camo_co.paa",
			"nia_wp_SCAR\tex\toadie_SCAR\scar_lower_camo_co.paa",
			"nia_wp_SCAR\tex\toadie_SCAR\stock_camo_co.paa",
			"nia_wp_SCAR\tex\toadie_SCAR\upper_SCARL_camo_co.paa",
			"nia_wp_SCAR\tex\toadie_SCAR\Launcher_FN-EGLM_L_camo_co.paa"
		};
		HiddenSelectionsMaterials[]=
		{
			"nia_wp_SCAR\mat\scar_common_camo.rvmat",
			"nia_wp_SCAR\mat\scar_lowers_camo.rvmat",
			"nia_wp_SCAR\mat\scar_stock_camo.rvmat",
			"nia_wp_SCAR\mat\scar_upper_scarl_camo.rvmat",
			"nia_wp_SCAR\mat\Launcher_FN-EGLM_L_camo.rvmat"
		};
		class nia_magSwitch
		{
			default="hlc_wp_SCARL_STD_EGLM_camo";
		};
		class nia_gripSwitch
		{
			VFG="hlc_wp_SCARL_STD_EGLM_camo";
			AFG="hlc_wp_SCARL_STD_EGLM_camo";
			VFG2="hlc_wp_SCARL_STD_EGLM_camo";
			default="hlc_wp_SCARL_STD_EGLM_camo";
		};
		rhs_grip1_change="hlc_wp_SCARL_STD_EGLM_camo";
		rhs_grip2_change="hlc_wp_SCARL_STD_EGLM_camo";
		rhs_grip3_change="hlc_wp_SCARL_STD_EGLM_camo";
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
			class hlc_wp_SCARL_STD_EGLM_camo
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SCARL_STD_EGLM_camo_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARL_STD_EGLM_camo_TacReload: hlc_wp_SCARL_STD_EGLM_camo
	{
		magazineReloadSwitchPhase="(40 / 96)";
		scopeArsenal=0;
		reloadMagazineSound[]=
		{
			"\nia_wp_SCAR\snd\mk16_reload_partial.ogg",
			0.85000002,
			1,
			25
		};
		reloadAction="NIA_GestureReload_Mk16_EGLM_Tactical";
		model="nia_wp_SCAR\mesh\Rifle\SCARL_STD_EGLM_TacReload.p3d";
		rhs_grip1_change="hlc_wp_SCARL_STD_EGLM_camo_TacReload";
		rhs_grip2_change="hlc_wp_SCARL_STD_EGLM_camo_TacReload";
		rhs_grip3_change="hlc_wp_SCARL_STD_EGLM_camo_TacReload";
		class nia_gripSwitch
		{
			VFG="hlc_wp_SCARL_STD_EGLM_camo_TacReload";
			AFG="hlc_wp_SCARL_STD_EGLM_camo_TacReload";
			VFG2="hlc_wp_SCARL_STD_EGLM_camo_TacReload";
			default="hlc_wp_SCARL_STD_EGLM_camo_TacReload";
		};
	};
	class hlc_WP_SCARL_CQC: hlc_wp_SCARL_STD
	{
		author="Toadie";
		dlc="Niarms_SCAR";
		displayName="$STR_NIA_rifle_SCARL_CQC";
		descriptionShort="$STR_NIA_SCARL_Carbine_DESC";
		scope=2;
		ACE_barrelTwist=304.79999;
		ACE_barrelLength=330;
		initspeed=-0.958;
		baseWeapon="hlc_WP_SCARL_CQC";
		mass=68.452003;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=68.452003;
		};
		inertia=0.31400001;
		dexterity=1.5938872;
		aimTransitionSpeed=1.115721;
		picture="\nia_wp_SCAR\tex\ui\hlc_WP_SCARL_CQC_ca";
		model="nia_wp_SCAR\mesh\rifle\SCARL_CQC.p3d";
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
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"NIA_SCARL_NEW_Shot_SoundSet",
					"NIA_SCARL_tail_SoundSet"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"NIA_SCARL_silencerShot_SoundSet",
					"NIA_SCARL_silencerTail_SoundSet"
				};
			};
			dispersion=0.00059634499;
			reloadtime="(60/600)";
			aiRateOfFire=1;
			aiRateOfFireDistance=350;
			aiRateOfFireDispersion=2;
			minRange=20;
			minRangeProbab=0.69999999;
			midRange=150;
			midRangeProbab=0.5;
			maxRange=500;
			maxRangeProbab=0.1;
		};
		class Burst: Mode_Burst
		{
			sounds[]=
			{
				"StandardSound",
				"SilencedSound"
			};
			class BaseSoundModeType
			{
				weaponSoundEffect="DefaultRifle";
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"NIA_SCARL_NEW_Shot_SoundSet",
					"NIA_SCARL_tail_SoundSet"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"NIA_SCARL_silencerShot_SoundSet",
					"NIA_SCARL_silencerTail_SoundSet"
				};
			};
			dispersion=0.000741795;
			reloadtime="(60/600)";
			aiRateOfFire=1;
			aiRateOfFireDistance=100;
			aiRateOfFireDispersion=1;
			minRange=0;
			minRangeProbab=0.2;
			midRange=20;
			midRangeProbab=0.80000001;
			maxRange=40;
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
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"NIA_SCARL_NEW_Shot_SoundSet",
					"NIA_SCARL_tail_SoundSet"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"NIA_SCARL_silencerShot_SoundSet",
					"NIA_SCARL_silencerTail_SoundSet"
				};
			};
			dispersion=0.00074470398;
			reloadtime="(60/600)";
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
		class nia_magSwitch
		{
			hlc_50rnd_556x45_EPR="hlc_wp_SCARL_CQC_x15";
			hlc_50rnd_556x45_SOST="hlc_wp_SCARL_CQC_x15";
			hlc_50rnd_556x45_SPR="hlc_wp_SCARL_CQC_x15";
			hlc_50rnd_556x45_M="hlc_wp_SCARL_CQC_x15";
			hlc_50rnd_556x45_MDim="hlc_wp_SCARL_CQC_x15";
			default="hlc_WP_SCARL_CQC";
		};
		class nia_gripSwitch
		{
			VFG="hlc_WP_SCARL_CQC_grip";
			AFG="hlc_WP_SCARL_CQC_grip2";
			VFG2="hlc_WP_SCARL_CQC_grip3";
			default="hlc_WP_SCARL_CQC";
		};
		rhs_grip1_change="hlc_WP_SCARL_CQC_grip";
		rhs_grip2_change="hlc_WP_SCARL_CQC_grip2";
		rhs_grip3_change="hlc_WP_SCARL_CQC_grip3";
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
			class hlc_wp_SCARL_CQC
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SCARL_CQC_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARL_CQC_TacReload: hlc_WP_SCARL_CQC
	{
		magazineReloadSwitchPhase="(40 / 96)";
		scopeArsenal=0;
		reloadMagazineSound[]=
		{
			"\nia_wp_SCAR\snd\mk16_reload_partial.ogg",
			0.85000002,
			1,
			25
		};
		reloadAction="NIA_GestureReload_Mk16_Tactical";
		model="nia_wp_SCAR\mesh\Rifle\SCARL_CQC_TacReload.p3d";
		rhs_grip1_change="hlc_wp_SCARL_CQC_grip";
		rhs_grip2_change="hlc_wp_SCARL_CQC_grip2";
		rhs_grip3_change="hlc_wp_SCARL_CQC_grip3";
		class nia_gripSwitch
		{
			VFG="hlc_wp_SCARL_CQC_grip";
			AFG="hlc_wp_SCARL_CQC_grip2";
			VFG2="hlc_wp_SCARL_CQC_grip3";
			default="hlc_wp_SCARL_CQC_TacReload";
		};
	};
	class hlc_wp_SCARL_CQC_grip: hlc_WP_SCARL_CQC
	{
		scopeArsenal=0;
		dexterity=1.6938872;
		aimTransitionSpeed=1.185721;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handgesture_SCARL_VFG.rtm"
		};
		class nia_magSwitch
		{
			hlc_50rnd_556x45_EPR="hlc_wp_SCARL_CQC_x15_grip";
			hlc_50rnd_556x45_SOST="hlc_wp_SCARL_CQC_x15_grip";
			hlc_50rnd_556x45_SPR="hlc_wp_SCARL_CQC_x15_grip";
			hlc_50rnd_556x45_M="hlc_wp_SCARL_CQC_x15_grip";
			hlc_50rnd_556x45_MDim="hlc_wp_SCARL_CQC_x15_grip";
			default="hlc_wp_SCARL_CQC_grip";
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
			class hlc_wp_SCARL_CQC_grip
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SCARL_CQC_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARL_CQC_grip2: hlc_WP_SCARL_CQC
	{
		scopeArsenal=0;
		inertia="(0.3140*0.85)";
		dexterity=1.6938872;
		aimTransitionSpeed=1.185721;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handgesture_SCARL_AFG.rtm"
		};
		class nia_magSwitch
		{
			hlc_50rnd_556x45_EPR="hlc_wp_SCARL_CQC_x15_grip2";
			hlc_50rnd_556x45_SOST="hlc_wp_SCARL_CQC_x15_grip2";
			hlc_50rnd_556x45_SPR="hlc_wp_SCARL_CQC_x15_grip2";
			hlc_50rnd_556x45_M="hlc_wp_SCARL_CQC_x15_grip2";
			hlc_50rnd_556x45_MDim="hlc_wp_SCARL_CQC_x15_grip2";
			default="hlc_wp_SCARL_CQC_grip2";
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
			class hlc_wp_SCARL_CQC_grip2
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SCARL_CQC_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARL_CQC_grip3: hlc_WP_SCARL_CQC
	{
		scopeArsenal=0;
		dexterity=1.6938872;
		aimTransitionSpeed=1.185721;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handgesture_SCARL_VFG.rtm"
		};
		class nia_magSwitch
		{
			hlc_50rnd_556x45_EPR="hlc_wp_SCARL_CQC_x15_grip3";
			hlc_50rnd_556x45_SOST="hlc_wp_SCARL_CQC_x15_grip3";
			hlc_50rnd_556x45_SPR="hlc_wp_SCARL_CQC_x15_grip3";
			hlc_50rnd_556x45_M="hlc_wp_SCARL_CQC_x15_grip3";
			hlc_50rnd_556x45_MDim="hlc_wp_SCARL_CQC_x15_grip3";
			default="hlc_wp_SCARL_CQC_grip3";
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
			class hlc_wp_SCARL_CQC_grip3
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SCARL_CQC_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARL_CQC_x15: hlc_WP_SCARL_CQC
	{
		scopeArsenal=0;
		reloadAction="NIA_GestureReload_Mk16_X15";
		baseweapon="hlc_wp_SCARL_CQC_x15";
		reloadMagazineSound[]=
		{
			"nia_wp_SCAR\snd\mk16_reload_X15_short.ogg",
			0.80000001,
			1,
			25
		};
		class nia_gripSwitch
		{
			VFG="hlc_wp_SCARL_CQC_x15_grip";
			AFG="hlc_wp_SCARL_CQC_x15_grip2";
			VFG2="hlc_wp_SCARL_CQC_x15_grip3";
			default="hlc_wp_SCARL_CQC_x15";
		};
		rhs_grip1_change="hlc_wp_SCARL_CQC_x15_grip";
		rhs_grip2_change="hlc_wp_SCARL_CQC_x15_grip2";
		rhs_grip3_change="hlc_wp_SCARL_CQC_x15_grip3";
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
			class hlc_wp_SCARL_CQC_x15
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SCARL_CQC_x15_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARL_CQC_x15_TacReload: hlc_wp_SCARL_CQC_x15
	{
		magazineReloadSwitchPhase="(40 / 96)";
		scopeArsenal=0;
		reloadMagazineSound[]=
		{
			"\nia_wp_SCAR\snd\mk16_reload_X15_partial.ogg",
			0.85000002,
			1,
			25
		};
		reloadAction="NIA_GestureReload_Mk16_X15_Tactical";
		model="nia_wp_SCAR\mesh\Rifle\SCARL_CQC_TacReload.p3d";
		rhs_grip1_change="hlc_wp_SCARL_CQC_x15_grip";
		rhs_grip2_change="hlc_wp_SCARL_CQC_x15_grip2";
		rhs_grip3_change="hlc_wp_SCARL_CQC_x15_grip3";
		class nia_gripSwitch
		{
			VFG="hlc_wp_SCARL_CQC_x15_grip";
			AFG="hlc_wp_SCARL_CQC_x15_grip2";
			VFG2="hlc_wp_SCARL_CQC_x15_grip3";
			default="hlc_wp_SCARL_CQC_x15_TacReload";
		};
	};
	class hlc_wp_SCARL_CQC_x15_grip: hlc_wp_SCARL_CQC_x15
	{
		scopeArsenal=0;
		dexterity=1.6212438;
		aimTransitionSpeed=1.1348706;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handgesture_SCARL_VFG.rtm"
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
			class hlc_wp_SCARL_CQC_x15_grip
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SCARL_CQC_x15_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARL_CQC_x15_grip2: hlc_wp_SCARL_CQC_x15
	{
		scopeArsenal=0;
		inertia="(0.3435*0.85)";
		dexterity=1.6212438;
		aimTransitionSpeed=1.1348706;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handgesture_SCARL_AFG.rtm"
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
			class hlc_wp_SCARL_CQC_x15_grip2
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SCARL_CQC_x15_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARL_CQC_x15_grip3: hlc_wp_SCARL_CQC_x15
	{
		scopeArsenal=0;
		dexterity=1.6212438;
		aimTransitionSpeed=1.1348706;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handgesture_SCARL_VFG.rtm"
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
			class hlc_wp_SCARL_CQC_x15_grip3
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SCARL_CQC_x15_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARL_CQC_Blk: hlc_WP_SCARL_CQC
	{
		author="Toadie";
		dlc="Niarms_SCAR";
		displayName="$STR_NIA_rifle_SCARL_CQC_blk";
		scope=2;
		baseWeapon="hlc_wp_SCARL_CQC_Blk";
		picture="\nia_wp_SCAR\tex\ui\hlc_wp_SCARL_CQC_Blk_ca";
		hiddenSelectionsTextures[]=
		{
			"nia_wp_SCAR\tex\toadie_SCAR\scar_common_co.paa",
			"nia_wp_SCAR\tex\toadie_SCAR\scar_lower_co.paa",
			"nia_wp_SCAR\tex\toadie_SCAR\stock_co.paa",
			"nia_wp_SCAR\tex\toadie_SCAR\upper_SCARL_co.paa"
		};
		class nia_magSwitch
		{
			hlc_50rnd_556x45_EPR="hlc_wp_SCARL_CQC_Blk_x15";
			hlc_50rnd_556x45_SOST="hlc_wp_SCARL_CQC_Blk_x15";
			hlc_50rnd_556x45_SPR="hlc_wp_SCARL_CQC_Blk_x15";
			hlc_50rnd_556x45_M="hlc_wp_SCARL_CQC_Blk_x15";
			hlc_50rnd_556x45_MDim="hlc_wp_SCARL_CQC_Blk_x15";
			default="hlc_wp_SCARL_CQC_Blk";
		};
		class nia_gripSwitch
		{
			VFG="hlc_wp_SCARL_CQC_Blk_grip";
			AFG="hlc_wp_SCARL_CQC_Blk_grip2";
			VFG2="hlc_wp_SCARL_CQC_Blk_grip3";
			default="hlc_wp_SCARL_CQC_Blk";
		};
		rhs_grip1_change="hlc_wp_SCARL_CQC_Blk_grip";
		rhs_grip2_change="hlc_wp_SCARL_CQC_Blk_grip2";
		rhs_grip3_change="hlc_wp_SCARL_CQC_Blk_grip3";
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
			class hlc_wp_SCARL_CQC_Blk
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SCARL_CQC_Blk_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARL_CQC_Blk_TacReload: hlc_wp_SCARL_CQC_Blk
	{
		magazineReloadSwitchPhase="(40 / 96)";
		scopeArsenal=0;
		reloadMagazineSound[]=
		{
			"\nia_wp_SCAR\snd\mk16_reload_partial.ogg",
			0.85000002,
			1,
			25
		};
		reloadAction="NIA_GestureReload_Mk16_Tactical";
		model="nia_wp_SCAR\mesh\Rifle\SCARL_CQC_TacReload.p3d";
		rhs_grip1_change="hlc_wp_SCARL_CQC_grip";
		rhs_grip2_change="hlc_wp_SCARL_CQC_grip2";
		rhs_grip3_change="hlc_wp_SCARL_CQC_grip3";
		class nia_gripSwitch
		{
			VFG="hlc_wp_SCARL_CQC_grip";
			AFG="hlc_wp_SCARL_CQC_grip2";
			VFG2="hlc_wp_SCARL_CQC_grip3";
			default="hlc_wp_SCARL_CQC_TacReload";
		};
	};
	class hlc_wp_SCARL_CQC_Blk_grip: hlc_wp_SCARL_CQC_Blk
	{
		scopeArsenal=0;
		dexterity=1.6938872;
		aimTransitionSpeed=1.185721;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handgesture_SCARL_VFG.rtm"
		};
		class nia_magSwitch
		{
			hlc_50rnd_556x45_EPR="hlc_wp_SCARL_CQC_Blk_x15_grip";
			hlc_50rnd_556x45_SOST="hlc_wp_SCARL_CQC_Blk_x15_grip";
			hlc_50rnd_556x45_SPR="hlc_wp_SCARL_CQC_Blk_x15_grip";
			hlc_50rnd_556x45_M="hlc_wp_SCARL_CQC_Blk_x15_grip";
			hlc_50rnd_556x45_MDim="hlc_wp_SCARL_CQC_Blk_x15_grip";
			default="hlc_wp_SCARL_CQC_Blk_grip";
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
			class hlc_wp_SCARL_CQC_Blk_grip
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SCARL_CQC_Blk_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARL_CQC_Blk_grip2: hlc_wp_SCARL_CQC_Blk
	{
		scopeArsenal=0;
		inertia="(0.3140*0.85)";
		dexterity=1.6938872;
		aimTransitionSpeed=1.185721;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handgesture_SCARL_AFG.rtm"
		};
		class nia_magSwitch
		{
			hlc_50rnd_556x45_EPR="hlc_wp_SCARL_CQC_Blk_x15_grip2";
			hlc_50rnd_556x45_SOST="hlc_wp_SCARL_CQC_Blk_x15_grip2";
			hlc_50rnd_556x45_SPR="hlc_wp_SCARL_CQC_Blk_x15_grip2";
			hlc_50rnd_556x45_M="hlc_wp_SCARL_CQC_Blk_x15_grip2";
			hlc_50rnd_556x45_MDim="hlc_wp_SCARL_CQC_Blk_x15_grip2";
			default="hlc_wp_SCARL_CQC_Blk_grip2";
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
			class hlc_wp_SCARL_CQC_Blk_grip2
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SCARL_CQC_Blk_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARL_CQC_Blk_grip3: hlc_wp_SCARL_CQC_Blk
	{
		scopeArsenal=0;
		dexterity=1.6938872;
		aimTransitionSpeed=1.185721;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handgesture_SCARL_VFG.rtm"
		};
		class nia_magSwitch
		{
			hlc_50rnd_556x45_EPR="hlc_wp_SCARL_CQC_Blk_x15_grip3";
			hlc_50rnd_556x45_SOST="hlc_wp_SCARL_CQC_Blk_x15_grip3";
			hlc_50rnd_556x45_SPR="hlc_wp_SCARL_CQC_Blk_x15_grip3";
			hlc_50rnd_556x45_M="hlc_wp_SCARL_CQC_Blk_x15_grip3";
			hlc_50rnd_556x45_MDim="hlc_wp_SCARL_CQC_Blk_x15_grip3";
			default="hlc_wp_SCARL_CQC_Blk_grip3";
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
			class hlc_wp_SCARL_CQC_Blk_grip3
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SCARL_CQC_Blk_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARL_CQC_Blk_x15: hlc_wp_SCARL_CQC_Blk
	{
		scopeArsenal=0;
		reloadAction="NIA_GestureReload_Mk16_X15";
		baseweapon="hlc_wp_SCARL_CQC_Blk_x15";
		reloadMagazineSound[]=
		{
			"nia_wp_SCAR\snd\mk16_reload_X15_short.ogg",
			0.80000001,
			1,
			25
		};
		class nia_gripSwitch
		{
			VFG="hlc_wp_SCARL_CQC_Blk_x15_grip";
			AFG="hlc_wp_SCARL_CQC_Blk_x15_grip2";
			VFG2="hlc_wp_SCARL_CQC_Blk_x15_grip3";
			default="hlc_wp_SCARL_CQC_Blk_x15";
		};
		rhs_grip1_change="hlc_wp_SCARL_CQC_Blk_x15_grip";
		rhs_grip2_change="hlc_wp_SCARL_CQC_Blk_x15_grip2";
		rhs_grip3_change="hlc_wp_SCARL_CQC_Blk_x15_grip3";
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
			class hlc_wp_SCARL_CQC_Blk_x15
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SCARL_CQC_Blk_x15_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARL_CQC_Blk_x15_TacReload: hlc_wp_SCARL_CQC_Blk_x15
	{
		magazineReloadSwitchPhase="(40 / 96)";
		scopeArsenal=0;
		reloadMagazineSound[]=
		{
			"\nia_wp_SCAR\snd\mk16_reload_X15_partial.ogg",
			0.85000002,
			1,
			25
		};
		reloadAction="NIA_GestureReload_Mk16_X15_Tactical";
		model="nia_wp_SCAR\mesh\Rifle\SCARL_CQC_TacReload.p3d";
		rhs_grip1_change="hlc_wp_SCARL_CQC_Blk_x15_grip";
		rhs_grip2_change="hlc_wp_SCARL_CQC_Blk_x15_grip2";
		rhs_grip3_change="hlc_wp_SCARL_CQC_Blk_x15_grip3";
		class nia_gripSwitch
		{
			VFG="hlc_wp_SCARL_CQC_Blk_x15_grip";
			AFG="hlc_wp_SCARL_CQC_Blk_x15_grip2";
			VFG2="hlc_wp_SCARL_CQC_Blk_x15_grip3";
			default="hlc_wp_SCARL_CQC_Blk_x15_TacReload";
		};
	};
	class hlc_wp_SCARL_CQC_Blk_x15_grip: hlc_wp_SCARL_CQC_Blk_x15
	{
		scopeArsenal=0;
		dexterity=1.6212438;
		aimTransitionSpeed=1.1348706;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handgesture_SCARL_VFG.rtm"
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
			class hlc_wp_SCARL_CQC_Blk_x15_grip
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SCARL_CQC_Blk_x15_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARL_CQC_Blk_x15_grip2: hlc_wp_SCARL_CQC_Blk_x15
	{
		scopeArsenal=0;
		inertia="(0.3435*0.85)";
		dexterity=1.6212438;
		aimTransitionSpeed=1.1348706;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handgesture_SCARL_AFG.rtm"
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
			class hlc_wp_SCARL_CQC_Blk_x15_grip2
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SCARL_CQC_Blk_x15_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARL_CQC_Blk_x15_grip3: hlc_wp_SCARL_CQC_Blk_x15
	{
		scopeArsenal=0;
		dexterity=1.6212438;
		aimTransitionSpeed=1.1348706;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handgesture_SCARL_VFG.rtm"
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
			class hlc_wp_SCARL_CQC_Blk_x15_grip3
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SCARL_CQC_Blk_x15_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARL_CQC_camo: hlc_WP_SCARL_CQC
	{
		author="Toadie";
		dlc="Niarms_SCAR";
		displayName="$STR_NIA_rifle_SCARL_CQC_camo";
		scope=2;
		baseWeapon="hlc_wp_SCARL_CQC_camo";
		picture="\nia_wp_SCAR\tex\ui\hlc_wp_SCARL_CQC_camo_ca";
		hiddenSelectionsTextures[]=
		{
			"nia_wp_SCAR\tex\toadie_SCAR\scar_common_camo_co.paa",
			"nia_wp_SCAR\tex\toadie_SCAR\scar_lower_camo_co.paa",
			"nia_wp_SCAR\tex\toadie_SCAR\stock_camo_co.paa",
			"nia_wp_SCAR\tex\toadie_SCAR\upper_SCARL_camo_co.paa"
		};
		HiddenSelectionsMaterials[]=
		{
			"nia_wp_SCAR\mat\scar_common_camo.rvmat",
			"nia_wp_SCAR\mat\scar_lowers_camo.rvmat",
			"nia_wp_SCAR\mat\scar_stock_camo.rvmat",
			"nia_wp_SCAR\mat\scar_upper_SCARL_camo.rvmat"
		};
		class nia_magSwitch
		{
			hlc_50rnd_556x45_EPR="hlc_wp_SCARL_CQC_Camo_x15";
			hlc_50rnd_556x45_SOST="hlc_wp_SCARL_CQC_Camo_x15";
			hlc_50rnd_556x45_SPR="hlc_wp_SCARL_CQC_Camo_x15";
			hlc_50rnd_556x45_M="hlc_wp_SCARL_CQC_Camo_x15";
			hlc_50rnd_556x45_MDim="hlc_wp_SCARL_CQC_Camo_x15";
			default="hlc_wp_SCARL_CQC_camo";
		};
		class nia_gripSwitch
		{
			VFG="hlc_wp_SCARL_CQC_camo_grip";
			AFG="hlc_wp_SCARL_CQC_camo_grip2";
			VFG2="hlc_wp_SCARL_CQC_camo_grip3";
			default="hlc_wp_SCARL_CQC_camo";
		};
		rhs_grip1_change="hlc_wp_SCARL_CQC_camo_grip";
		rhs_grip2_change="hlc_wp_SCARL_CQC_camo_grip2";
		rhs_grip3_change="hlc_wp_SCARL_CQC_camo_grip3";
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
			class hlc_wp_SCARL_CQC_Camo
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SCARL_CQC_Camo_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARL_CQC_Camo_TacReload: hlc_wp_SCARL_CQC_camo
	{
		magazineReloadSwitchPhase="(40 / 96)";
		scopeArsenal=0;
		reloadMagazineSound[]=
		{
			"\nia_wp_SCAR\snd\mk16_reload_partial.ogg",
			0.85000002,
			1,
			25
		};
		reloadAction="NIA_GestureReload_Mk16_Tactical";
		model="nia_wp_SCAR\mesh\Rifle\SCARL_CQC_TacReload.p3d";
		rhs_grip1_change="hlc_wp_SCARL_CQC_grip";
		rhs_grip2_change="hlc_wp_SCARL_CQC_grip2";
		rhs_grip3_change="hlc_wp_SCARL_CQC_grip3";
		class nia_gripSwitch
		{
			VFG="hlc_wp_SCARL_CQC_grip";
			AFG="hlc_wp_SCARL_CQC_grip2";
			VFG2="hlc_wp_SCARL_CQC_grip3";
			default="hlc_wp_SCARL_CQC_TacReload";
		};
	};
	class hlc_wp_SCARL_CQC_camo_grip: hlc_wp_SCARL_CQC_camo
	{
		scopeArsenal=0;
		dexterity=1.6938872;
		aimTransitionSpeed=1.185721;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handgesture_SCARL_VFG.rtm"
		};
		class nia_magSwitch
		{
			hlc_50rnd_556x45_EPR="hlc_wp_SCARL_CQC_Camo_x15_grip";
			hlc_50rnd_556x45_SOST="hlc_wp_SCARL_CQC_Camo_x15_grip";
			hlc_50rnd_556x45_SPR="hlc_wp_SCARL_CQC_Camo_x15_grip";
			hlc_50rnd_556x45_M="hlc_wp_SCARL_CQC_Camo_x15_grip";
			hlc_50rnd_556x45_MDim="hlc_wp_SCARL_CQC_Camo_x15_grip";
			default="hlc_wp_SCARL_CQC_camo_grip";
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
			class hlc_wp_SCARL_CQC_Camo_grip
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SCARL_CQC_Camo_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARL_CQC_camo_grip2: hlc_wp_SCARL_CQC_camo
	{
		scopeArsenal=0;
		inertia="(0.3140*0.85)";
		dexterity=1.6938872;
		aimTransitionSpeed=1.185721;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handgesture_SCARL_AFG.rtm"
		};
		class nia_magSwitch
		{
			hlc_50rnd_556x45_EPR="hlc_wp_SCARL_CQC_Camo_x15_grip2";
			hlc_50rnd_556x45_SOST="hlc_wp_SCARL_CQC_Camo_x15_grip2";
			hlc_50rnd_556x45_SPR="hlc_wp_SCARL_CQC_Camo_x15_grip2";
			hlc_50rnd_556x45_M="hlc_wp_SCARL_CQC_Camo_x15_grip2";
			hlc_50rnd_556x45_MDim="hlc_wp_SCARL_CQC_Camo_x15_grip2";
			default="hlc_wp_SCARL_CQC_camo_grip2";
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
			class hlc_wp_SCARL_CQC_Camo_grip2
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SCARL_CQC_Camo_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARL_CQC_camo_grip3: hlc_wp_SCARL_CQC_camo
	{
		scopeArsenal=0;
		dexterity=1.6938872;
		aimTransitionSpeed=1.185721;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handgesture_SCARL_VFG.rtm"
		};
		class nia_magSwitch
		{
			hlc_50rnd_556x45_EPR="hlc_wp_SCARL_CQC_Camo_x15_grip3";
			hlc_50rnd_556x45_SOST="hlc_wp_SCARL_CQC_Camo_x15_grip3";
			hlc_50rnd_556x45_SPR="hlc_wp_SCARL_CQC_Camo_x15_grip3";
			hlc_50rnd_556x45_M="hlc_wp_SCARL_CQC_Camo_x15_grip3";
			hlc_50rnd_556x45_MDim="hlc_wp_SCARL_CQC_Camo_x15_grip3";
			default="hlc_wp_SCARL_CQC_camo_grip3";
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
			class hlc_wp_SCARL_CQC_Camo_grip3
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SCARL_CQC_Camo_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARL_CQC_Camo_x15: hlc_wp_SCARL_CQC_camo
	{
		scopeArsenal=0;
		reloadAction="NIA_GestureReload_Mk16_X15";
		baseweapon="hlc_wp_SCARL_CQC_Camo_x15";
		reloadMagazineSound[]=
		{
			"nia_wp_SCAR\snd\mk16_reload_X15_short.ogg",
			0.80000001,
			1,
			25
		};
		class nia_gripSwitch
		{
			VFG="hlc_wp_SCARL_CQC_Camo_x15_grip";
			AFG="hlc_wp_SCARL_CQC_Camo_x15_grip2";
			VFG2="hlc_wp_SCARL_CQC_Camo_x15_grip3";
			default="hlc_wp_SCARL_CQC_Camo_x15";
		};
		rhs_grip1_change="hlc_wp_SCARL_CQC_Camo_x15_grip";
		rhs_grip2_change="hlc_wp_SCARL_CQC_Camo_x15_grip2";
		rhs_grip3_change="hlc_wp_SCARL_CQC_Camo_x15_grip3";
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
			class hlc_wp_SCARL_CQC_Camo_x15
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SCARL_CQC_Camo_x15_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARL_CQC_Camo_x15_TacReload: hlc_wp_SCARL_CQC_Camo_x15
	{
		magazineReloadSwitchPhase="(40 / 96)";
		scopeArsenal=0;
		reloadMagazineSound[]=
		{
			"\nia_wp_SCAR\snd\mk16_reload_X15_partial.ogg",
			0.85000002,
			1,
			25
		};
		reloadAction="NIA_GestureReload_Mk16_X15_Tactical";
		model="nia_wp_SCAR\mesh\Rifle\SCARL_CQC_TacReload.p3d";
		rhs_grip1_change="hlc_wp_SCARL_CQC_Camo_x15_grip";
		rhs_grip2_change="hlc_wp_SCARL_CQC_Camo_x15_grip2";
		rhs_grip3_change="hlc_wp_SCARL_CQC_Camo_x15_grip3";
		class nia_gripSwitch
		{
			VFG="hlc_wp_SCARL_CQC_Camo_x15_grip";
			AFG="hlc_wp_SCARL_CQC_Camo_x15_grip2";
			VFG2="hlc_wp_SCARL_CQC_Camo_x15_grip3";
			default="hlc_wp_SCARL_CQC_Camo_x15_TacReload";
		};
	};
	class hlc_wp_SCARL_CQC_Camo_x15_grip: hlc_wp_SCARL_CQC_Camo_x15
	{
		scopeArsenal=0;
		dexterity=1.6212438;
		aimTransitionSpeed=1.1348706;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handgesture_SCARL_VFG.rtm"
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
			class hlc_wp_SCARL_CQC_Camo_x15_grip
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SCARL_CQC_Camo_x15_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARL_CQC_Camo_x15_grip2: hlc_wp_SCARL_CQC_Camo_x15
	{
		scopeArsenal=0;
		inertia="(0.3435*0.85)";
		dexterity=1.6212438;
		aimTransitionSpeed=1.1348706;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handgesture_SCARL_AFG.rtm"
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
			class hlc_wp_SCARL_CQC_Camo_x15_grip2
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SCARL_CQC_Camo_x15_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARL_CQC_Camo_x15_grip3: hlc_wp_SCARL_CQC_Camo_x15
	{
		scopeArsenal=0;
		dexterity=1.6212438;
		aimTransitionSpeed=1.1348706;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handgesture_SCARL_VFG.rtm"
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
			class hlc_wp_SCARL_CQC_Camo_x15_grip3
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SCARL_CQC_Camo_x15_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARL_CQC_EGLM: hlc_WP_SCARL_CQC
	{
		author="Toadie";
		dlc="Niarms_SCAR";
		displayName="$STR_NIA_rifle_SCARL_CQC_EGLM";
		scope=2;
		muzzles[]=
		{
			"this",
			"hlc_GL_SCARL_EGLM"
		};
		baseWeapon="hlc_wp_SCARL_CQC_EGLM";
		mass=101.15199;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=101.15199;
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
			class MuzzleSlot: asdg_MuzzleSlot_556
			{
				iconPosition[]={0,0};
				iconScale=1;
				iconPicture="\A3\Weapons_F\Data\clear_empty.paa";
				iconPinPoint="Left";
			};
			class UnderBarrelSlot
			{
				iconPosition[]={0,0};
				iconScale=1;
				iconPicture="\A3\Weapons_F\Data\clear_empty.paa";
				iconPinPoint="Left";
			};
			class GripodSlot
			{
				iconPosition[]={0,0};
				iconScale=1;
				iconPicture="\A3\Weapons_F\Data\clear_empty.paa";
				iconPinPoint="Left";
			};
		};
		inertia="(0.3140 + 0.15)";
		dexterity=1.2080154;
		aimTransitionSpeed=0.8456108;
		model="nia_wp_SCAR\mesh\rifle\SCARL_CQC_EGLM.p3d";
		picture="\nia_wp_SCAR\tex\ui\hlc_wp_SCARL_CQC_EGLM_ca";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handpose_EGLM.rtm"
		};
		UiPicture="\A3\weapons_f\data\UI\icon_regular_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"nia_wp_SCAR\tex\toadie_SCAR\scar_common_tan_co.paa",
			"nia_wp_SCAR\tex\toadie_SCAR\scar_lower_tan_co.paa",
			"nia_wp_SCAR\tex\toadie_SCAR\stock_tan_co.paa",
			"nia_wp_SCAR\tex\toadie_SCAR\upper_SCARL_tan_co.paa",
			"nia_wp_SCAR\tex\toadie_SCAR\Launcher_FN-EGLM_L_tan_co.paa"
		};
		HiddenSelectionsMaterials[]=
		{
			"nia_wp_SCAR\mat\scar_common.rvmat",
			"nia_wp_SCAR\mat\scar_lowers.rvmat",
			"nia_wp_SCAR\mat\scar_stock.rvmat",
			"nia_wp_SCAR\mat\scar_upper_scarl.rvmat",
			"nia_wp_SCAR\mat\Launcher_FN-EGLM_L.rvmat"
		};
		class nia_magSwitch
		{
			default="hlc_wp_SCARL_CQC_EGLM";
		};
		class nia_gripSwitch
		{
			VFG="hlc_wp_SCARL_CQC_EGLM";
			AFG="hlc_wp_SCARL_CQC_EGLM";
			VFG2="hlc_wp_SCARL_CQC_EGLM";
			default="hlc_wp_SCARL_CQC_EGLM";
		};
		rhs_grip1_change="hlc_wp_SCARL_CQC_EGLM";
		rhs_grip2_change="hlc_wp_SCARL_CQC_EGLM";
		rhs_grip3_change="hlc_wp_SCARL_CQC_EGLM";
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
			class hlc_wp_SCARL_CQC_EGLM
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SCARL_CQC_EGLM_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARL_CQC_EGLM_TacReload: hlc_wp_SCARL_CQC_EGLM
	{
		magazineReloadSwitchPhase="(40 / 96)";
		scopeArsenal=0;
		reloadMagazineSound[]=
		{
			"\nia_wp_SCAR\snd\mk16_reload_partial.ogg",
			0.85000002,
			1,
			25
		};
		reloadAction="NIA_GestureReload_Mk16_EGLM_Tactical";
		model="nia_wp_SCAR\mesh\Rifle\SCARL_CQC_EGLM_TacReload.p3d";
		rhs_grip1_change="hlc_wp_SCARL_CQC_EGLM_TacReload";
		rhs_grip2_change="hlc_wp_SCARL_CQC_EGLM_TacReload";
		rhs_grip3_change="hlc_wp_SCARL_CQC_EGLM_TacReload";
		class nia_gripSwitch
		{
			VFG="hlc_wp_SCARL_CQC_EGLM_TacReload";
			AFG="hlc_wp_SCARL_CQC_EGLM_TacReload";
			VFG2="hlc_wp_SCARL_CQC_EGLM_TacReload";
			default="hlc_wp_SCARL_CQC_EGLM_TacReload";
		};
	};
	class hlc_wp_SCARL_CQC_EGLM_Blk: hlc_wp_SCARL_CQC_Blk
	{
		author="Toadie";
		dlc="Niarms_SCAR";
		displayName="$STR_NIA_rifle_SCARL_CQC_EGLM_BLK";
		scope=2;
		muzzles[]=
		{
			"this",
			"hlc_GL_SCARL_EGLM"
		};
		baseWeapon="hlc_wp_SCARL_CQC_EGLM_Blk";
		mass=101.15199;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=101.15199;
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
			class MuzzleSlot: asdg_MuzzleSlot_556
			{
				iconPosition[]={0,0};
				iconScale=1;
				iconPicture="\A3\Weapons_F\Data\clear_empty.paa";
				iconPinPoint="Left";
			};
			class UnderBarrelSlot
			{
				iconPosition[]={0,0};
				iconScale=1;
				iconPicture="\A3\Weapons_F\Data\clear_empty.paa";
				iconPinPoint="Left";
			};
			class GripodSlot
			{
				iconPosition[]={0,0};
				iconScale=1;
				iconPicture="\A3\Weapons_F\Data\clear_empty.paa";
				iconPinPoint="Left";
			};
		};
		inertia="(0.3140 + 0.15)";
		dexterity=1.2080154;
		aimTransitionSpeed=0.8456108;
		model="nia_wp_SCAR\mesh\rifle\SCARL_CQC_EGLM.p3d";
		picture="\nia_wp_SCAR\tex\ui\hlc_wp_SCARL_CQC_EGLM_Blk_ca";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handpose_EGLM.rtm"
		};
		UiPicture="\A3\weapons_f\data\UI\icon_regular_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"nia_wp_SCAR\tex\toadie_SCAR\scar_common_co.paa",
			"nia_wp_SCAR\tex\toadie_SCAR\scar_lower_co.paa",
			"nia_wp_SCAR\tex\toadie_SCAR\stock_co.paa",
			"nia_wp_SCAR\tex\toadie_SCAR\upper_SCARL_co.paa",
			"nia_wp_SCAR\tex\toadie_SCAR\Launcher_FN-EGLM_L_co.paa"
		};
		HiddenSelectionsMaterials[]=
		{
			"nia_wp_SCAR\mat\scar_common.rvmat",
			"nia_wp_SCAR\mat\scar_lowers.rvmat",
			"nia_wp_SCAR\mat\scar_stock.rvmat",
			"nia_wp_SCAR\mat\scar_upper_scarl.rvmat",
			"nia_wp_SCAR\mat\Launcher_FN-EGLM_L.rvmat"
		};
		class nia_magSwitch
		{
			default="hlc_wp_SCARL_CQC_EGLM_blk";
		};
		class nia_gripSwitch
		{
			VFG="hlc_wp_SCARL_CQC_EGLM_blk";
			AFG="hlc_wp_SCARL_CQC_EGLM_blk";
			VFG2="hlc_wp_SCARL_CQC_EGLM_blk";
			default="hlc_wp_SCARL_CQC_EGLM_blk";
		};
		rhs_grip1_change="hlc_wp_SCARL_CQC_EGLM_blk";
		rhs_grip2_change="hlc_wp_SCARL_CQC_EGLM_blk";
		rhs_grip3_change="hlc_wp_SCARL_CQC_EGLM_blk";
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
			class hlc_wp_SCARL_CQC_EGLM_blk
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SCARL_CQC_EGLM_blk_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARL_CQC_EGLM_Blk_TacReload: hlc_wp_SCARL_CQC_EGLM_Blk
	{
		magazineReloadSwitchPhase="(40 / 96)";
		scopeArsenal=0;
		reloadMagazineSound[]=
		{
			"\nia_wp_SCAR\snd\mk16_reload_partial.ogg",
			0.85000002,
			1,
			25
		};
		reloadAction="NIA_GestureReload_Mk16_EGLM_Tactical";
		model="nia_wp_SCAR\mesh\Rifle\SCARL_CQC_EGLM_TacReload.p3d";
		rhs_grip1_change="hlc_wp_SCARL_CQC_EGLM_Blk_TacReload";
		rhs_grip2_change="hlc_wp_SCARL_CQC_EGLM_Blk_TacReload";
		rhs_grip3_change="hlc_wp_SCARL_CQC_EGLM_Blk_TacReload";
		class nia_gripSwitch
		{
			VFG="hlc_wp_SCARL_CQC_EGLM_Blk_TacReload";
			AFG="hlc_wp_SCARL_CQC_EGLM_Blk_TacReload";
			VFG2="hlc_wp_SCARL_CQC_EGLM_Blk_TacReload";
			default="hlc_wp_SCARL_CQC_EGLM_Blk_TacReload";
		};
	};
	class hlc_wp_SCARL_CQC_EGLM_camo: hlc_wp_SCARL_CQC_camo
	{
		author="Toadie";
		dlc="Niarms_SCAR";
		displayName="$STR_NIA_rifle_SCARL_CQC_EGLM_camo";
		scope=2;
		muzzles[]=
		{
			"this",
			"hlc_GL_SCARL_EGLM"
		};
		baseWeapon="hlc_wp_SCARL_CQC_EGLM_camo";
		mass=101.15199;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=101.15199;
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
			class MuzzleSlot: asdg_MuzzleSlot_556
			{
				iconPosition[]={0,0};
				iconScale=1;
				iconPicture="\A3\Weapons_F\Data\clear_empty.paa";
				iconPinPoint="Left";
			};
			class UnderBarrelSlot
			{
				iconPosition[]={0,0};
				iconScale=1;
				iconPicture="\A3\Weapons_F\Data\clear_empty.paa";
				iconPinPoint="Left";
			};
			class GripodSlot
			{
				iconPosition[]={0,0};
				iconScale=1;
				iconPicture="\A3\Weapons_F\Data\clear_empty.paa";
				iconPinPoint="Left";
			};
		};
		inertia="(0.3140 + 0.15)";
		dexterity=1.2080154;
		aimTransitionSpeed=0.8456108;
		model="nia_wp_SCAR\mesh\rifle\SCARL_CQC_EGLM.p3d";
		picture="\nia_wp_SCAR\tex\ui\hlc_wp_SCARL_CQC_EGLM_camo_ca";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handpose_EGLM.rtm"
		};
		UiPicture="\A3\weapons_f\data\UI\icon_regular_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"nia_wp_SCAR\tex\toadie_SCAR\scar_common_camo_co.paa",
			"nia_wp_SCAR\tex\toadie_SCAR\scar_lower_camo_co.paa",
			"nia_wp_SCAR\tex\toadie_SCAR\stock_camo_co.paa",
			"nia_wp_SCAR\tex\toadie_SCAR\upper_SCARL_camo_co.paa",
			"nia_wp_SCAR\tex\toadie_SCAR\Launcher_FN-EGLM_L_camo_co.paa"
		};
		HiddenSelectionsMaterials[]=
		{
			"nia_wp_SCAR\mat\scar_common_camo.rvmat",
			"nia_wp_SCAR\mat\scar_lowers_camo.rvmat",
			"nia_wp_SCAR\mat\scar_stock_camo.rvmat",
			"nia_wp_SCAR\mat\scar_upper_scarl_camo.rvmat",
			"nia_wp_SCAR\mat\Launcher_FN-EGLM_L_camo.rvmat"
		};
		class nia_magSwitch
		{
			default="hlc_wp_SCARL_CQC_EGLM_camo";
		};
		class nia_gripSwitch
		{
			VFG="hlc_wp_SCARL_CQC_EGLM_camo";
			AFG="hlc_wp_SCARL_CQC_EGLM_camo";
			VFG2="hlc_wp_SCARL_CQC_EGLM_camo";
			default="hlc_wp_SCARL_CQC_EGLM_camo";
		};
		rhs_grip1_change="hlc_wp_SCARL_CQC_EGLM_camo";
		rhs_grip2_change="hlc_wp_SCARL_CQC_EGLM_camo";
		rhs_grip3_change="hlc_wp_SCARL_CQC_EGLM_camo";
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
			class hlc_wp_SCARL_CQC_EGLM_camo
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SCARL_CQC_EGLM_camo_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARL_CQC_EGLM_camo_TacReload: hlc_wp_SCARL_CQC_EGLM_camo
	{
		magazineReloadSwitchPhase="(40 / 96)";
		scopeArsenal=0;
		reloadMagazineSound[]=
		{
			"\nia_wp_SCAR\snd\mk16_reload_partial.ogg",
			0.85000002,
			1,
			25
		};
		reloadAction="NIA_GestureReload_Mk16_EGLM_Tactical";
		model="nia_wp_SCAR\mesh\Rifle\SCARL_CQC_EGLM_TacReload.p3d";
		rhs_grip1_change="hlc_wp_SCARL_CQC_EGLM_camo_TacReload";
		rhs_grip2_change="hlc_wp_SCARL_CQC_EGLM_camo_TacReload";
		rhs_grip3_change="hlc_wp_SCARL_CQC_EGLM_camo_TacReload";
		class nia_gripSwitch
		{
			VFG="hlc_wp_SCARL_CQC_EGLM_camo_TacReload";
			AFG="hlc_wp_SCARL_CQC_EGLM_camo_TacReload";
			VFG2="hlc_wp_SCARL_CQC_EGLM_camo_TacReload";
			default="hlc_wp_SCARL_CQC_EGLM_camo_TacReload";
		};
	};
	class hlc_WP_SCARL_DMR: hlc_wp_SCARL_STD
	{
		author="Toadie";
		dlc="Niarms_SCAR";
		displayName="$STR_NIA_rifle_SCARL_DMR";
		descriptionShort="$STR_NIA_SCARL_Carbine_DESC";
		scope=2;
		ACE_barrelTwist=304.79999;
		ACE_barrelLength=457;
		baseWeapon="hlc_WP_SCARL_DMR";
		mass=76.082001;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=68.452003;
		};
		inertia=0.31400001;
		dexterity=1.4741908;
		aimTransitionSpeed=1.0319335;
		picture="\nia_wp_SCAR\tex\ui\hlc_WP_SCARL_DMR_ca";
		model="nia_wp_SCAR\mesh\rifle\SCARL_DMR.p3d";
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
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"NIA_SCARL_NEW_Shot_SoundSet",
					"NIA_SCARL_tail_SoundSet"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"NIA_SCARL_silencerShot_SoundSet",
					"NIA_SCARL_silencerTail_SoundSet"
				};
			};
			dispersion=0.00059634499;
			reloadtime="(60/600)";
			aiRateOfFire=1;
			aiRateOfFireDistance=350;
			aiRateOfFireDispersion=2;
			minRange=20;
			minRangeProbab=0.69999999;
			midRange=150;
			midRangeProbab=0.5;
			maxRange=500;
			maxRangeProbab=0.1;
		};
		class Burst: Mode_Burst
		{
			sounds[]=
			{
				"StandardSound",
				"SilencedSound"
			};
			class BaseSoundModeType
			{
				weaponSoundEffect="DefaultRifle";
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"NIA_SCARL_NEW_Shot_SoundSet",
					"NIA_SCARL_tail_SoundSet"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"NIA_SCARL_silencerShot_SoundSet",
					"NIA_SCARL_silencerTail_SoundSet"
				};
			};
			dispersion=0.000741795;
			reloadtime="(60/600)";
			aiRateOfFire=1;
			aiRateOfFireDistance=100;
			aiRateOfFireDispersion=1;
			minRange=0;
			minRangeProbab=0.2;
			midRange=20;
			midRangeProbab=0.80000001;
			maxRange=40;
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
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"NIA_SCARL_NEW_Shot_SoundSet",
					"NIA_SCARL_tail_SoundSet"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"NIA_SCARL_silencerShot_SoundSet",
					"NIA_SCARL_silencerTail_SoundSet"
				};
			};
			dispersion=0.00074470398;
			reloadtime="(60/600)";
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
		class nia_magSwitch
		{
			hlc_50rnd_556x45_EPR="hlc_wp_SCARL_DMR_x15";
			hlc_50rnd_556x45_SOST="hlc_wp_SCARL_DMR_x15";
			hlc_50rnd_556x45_SPR="hlc_wp_SCARL_DMR_x15";
			hlc_50rnd_556x45_M="hlc_wp_SCARL_DMR_x15";
			hlc_50rnd_556x45_MDim="hlc_wp_SCARL_DMR_x15";
			default="hlc_WP_SCARL_DMR";
		};
		class nia_gripSwitch
		{
			VFG="hlc_WP_SCARL_DMR_grip";
			AFG="hlc_WP_SCARL_DMR_grip2";
			VFG2="hlc_WP_SCARL_DMR_grip3";
			default="hlc_WP_SCARL_DMR";
		};
		rhs_grip1_change="hlc_WP_SCARL_DMR_grip";
		rhs_grip2_change="hlc_WP_SCARL_DMR_grip2";
		rhs_grip3_change="hlc_WP_SCARL_DMR_grip3";
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
			class hlc_wp_SCARL_DMR
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SCARL_DMR_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARL_DMR_TacReload: hlc_WP_SCARL_DMR
	{
		magazineReloadSwitchPhase="(40 / 96)";
		scopeArsenal=0;
		reloadMagazineSound[]=
		{
			"\nia_wp_SCAR\snd\mk16_reload_partial.ogg",
			0.85000002,
			1,
			25
		};
		reloadAction="NIA_GestureReload_Mk16_Tactical";
		model="nia_wp_SCAR\mesh\Rifle\SCARL_DMR_TacReload.p3d";
		rhs_grip1_change="hlc_wp_SCARL_DMR_grip";
		rhs_grip2_change="hlc_wp_SCARL_DMR_grip2";
		rhs_grip3_change="hlc_wp_SCARL_DMR_grip3";
		class nia_gripSwitch
		{
			VFG="hlc_wp_SCARL_DMR_grip";
			AFG="hlc_wp_SCARL_DMR_grip2";
			VFG2="hlc_wp_SCARL_DMR_grip3";
			default="hlc_wp_SCARL_DMR_TacReload";
		};
	};
	class hlc_wp_SCARL_DMR_grip: hlc_WP_SCARL_DMR
	{
		scopeArsenal=0;
		dexterity=1.5741909;
		aimTransitionSpeed=1.1019336;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handgesture_SCARL_VFG.rtm"
		};
		class nia_magSwitch
		{
			hlc_50rnd_556x45_EPR="hlc_wp_SCARL_DMR_x15_grip";
			hlc_50rnd_556x45_SOST="hlc_wp_SCARL_DMR_x15_grip";
			hlc_50rnd_556x45_SPR="hlc_wp_SCARL_DMR_x15_grip";
			hlc_50rnd_556x45_M="hlc_wp_SCARL_DMR_x15_grip";
			hlc_50rnd_556x45_MDim="hlc_wp_SCARL_DMR_x15_grip";
			default="hlc_wp_SCARL_DMR_grip";
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
			class hlc_wp_SCARL_DMR_grip
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SCARL_DMR_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARL_DMR_grip2: hlc_WP_SCARL_DMR
	{
		scopeArsenal=0;
		inertia="(0.3490*0.85)";
		dexterity=1.5741909;
		aimTransitionSpeed=1.1019336;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handgesture_SCARL_AFG.rtm"
		};
		class nia_magSwitch
		{
			hlc_50rnd_556x45_EPR="hlc_wp_SCARL_DMR_x15_grip2";
			hlc_50rnd_556x45_SOST="hlc_wp_SCARL_DMR_x15_grip2";
			hlc_50rnd_556x45_SPR="hlc_wp_SCARL_DMR_x15_grip2";
			hlc_50rnd_556x45_M="hlc_wp_SCARL_DMR_x15_grip2";
			hlc_50rnd_556x45_MDim="hlc_wp_SCARL_DMR_x15_grip2";
			default="hlc_wp_SCARL_DMR_grip2";
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
			class hlc_wp_SCARL_DMR_grip2
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SCARL_DMR_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARL_DMR_grip3: hlc_WP_SCARL_DMR
	{
		scopeArsenal=0;
		dexterity=1.5741909;
		aimTransitionSpeed=1.1019336;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handgesture_SCARL_VFG.rtm"
		};
		class nia_magSwitch
		{
			hlc_50rnd_556x45_EPR="hlc_wp_SCARL_DMR_x15_grip3";
			hlc_50rnd_556x45_SOST="hlc_wp_SCARL_DMR_x15_grip3";
			hlc_50rnd_556x45_SPR="hlc_wp_SCARL_DMR_x15_grip3";
			hlc_50rnd_556x45_M="hlc_wp_SCARL_DMR_x15_grip3";
			hlc_50rnd_556x45_MDim="hlc_wp_SCARL_DMR_x15_grip3";
			default="hlc_wp_SCARL_DMR_grip3";
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
			class hlc_wp_SCARL_DMR_grip3
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SCARL_DMR_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARL_DMR_x15: hlc_WP_SCARL_DMR
	{
		scopeArsenal=0;
		reloadAction="NIA_GestureReload_Mk16_X15";
		baseweapon="hlc_wp_SCARL_DMR_x15";
		reloadMagazineSound[]=
		{
			"nia_wp_SCAR\snd\mk16_reload_X15_short.ogg",
			0.80000001,
			1,
			25
		};
		class nia_gripSwitch
		{
			VFG="hlc_wp_SCARL_DMR_x15_grip";
			AFG="hlc_wp_SCARL_DMR_x15_grip2";
			VFG2="hlc_wp_SCARL_DMR_x15_grip3";
			default="hlc_wp_SCARL_DMR_x15";
		};
		rhs_grip1_change="hlc_wp_SCARL_DMR_x15_grip";
		rhs_grip2_change="hlc_wp_SCARL_DMR_x15_grip2";
		rhs_grip3_change="hlc_wp_SCARL_DMR_x15_grip3";
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
			class hlc_wp_SCARL_DMR_x15
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SCARL_DMR_x15_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARL_DMR_x15_TacReload: hlc_wp_SCARL_DMR_x15
	{
		magazineReloadSwitchPhase="(40 / 96)";
		scopeArsenal=0;
		reloadMagazineSound[]=
		{
			"\nia_wp_SCAR\snd\mk16_reload_X15_partial.ogg",
			0.85000002,
			1,
			25
		};
		reloadAction="NIA_GestureReload_Mk16_X15_Tactical";
		model="nia_wp_SCAR\mesh\Rifle\SCARL_DMR_TacReload.p3d";
		rhs_grip1_change="hlc_wp_SCARL_DMR_x15_grip";
		rhs_grip2_change="hlc_wp_SCARL_DMR_x15_grip2";
		rhs_grip3_change="hlc_wp_SCARL_DMR_x15_grip3";
		class nia_gripSwitch
		{
			VFG="hlc_wp_SCARL_DMR_x15_grip";
			AFG="hlc_wp_SCARL_DMR_x15_grip2";
			VFG2="hlc_wp_SCARL_DMR_x15_grip3";
			default="hlc_wp_SCARL_DMR_x15_TacReload";
		};
	};
	class hlc_wp_SCARL_DMR_x15_grip: hlc_wp_SCARL_DMR_x15
	{
		scopeArsenal=0;
		dexterity=1.619403;
		aimTransitionSpeed=1.1335821;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handgesture_SCARL_VFG.rtm"
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
			class hlc_wp_SCARL_DMR_x15_grip
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SCARL_DMR_x15_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARL_DMR_x15_grip2: hlc_wp_SCARL_DMR_x15
	{
		scopeArsenal=0;
		inertia="(0.3490*0.85)";
		dexterity=1.619403;
		aimTransitionSpeed=1.1335821;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handgesture_SCARL_AFG.rtm"
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
			class hlc_wp_SCARL_DMR_x15_grip2
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SCARL_DMR_x15_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARL_DMR_x15_grip3: hlc_wp_SCARL_DMR_x15
	{
		scopeArsenal=0;
		dexterity=1.619403;
		aimTransitionSpeed=1.1335821;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handgesture_SCARL_VFG.rtm"
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
			class hlc_wp_SCARL_DMR_x15_grip3
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SCARL_DMR_x15_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARL_DMR_Blk: hlc_WP_SCARL_DMR
	{
		author="Toadie";
		dlc="Niarms_SCAR";
		displayName="$STR_NIA_rifle_SCARL_DMR_blk";
		scope=2;
		baseWeapon="hlc_wp_SCARL_DMR_Blk";
		picture="\nia_wp_SCAR\tex\ui\hlc_wp_SCARL_DMR_Blk_ca";
		hiddenSelectionsTextures[]=
		{
			"nia_wp_SCAR\tex\toadie_SCAR\scar_common_co.paa",
			"nia_wp_SCAR\tex\toadie_SCAR\scar_lower_co.paa",
			"nia_wp_SCAR\tex\toadie_SCAR\stock_co.paa",
			"nia_wp_SCAR\tex\toadie_SCAR\upper_SCARL_co.paa"
		};
		class nia_magSwitch
		{
			hlc_50rnd_556x45_EPR="hlc_wp_SCARL_DMR_Blk_x15";
			hlc_50rnd_556x45_SOST="hlc_wp_SCARL_DMR_Blk_x15";
			hlc_50rnd_556x45_SPR="hlc_wp_SCARL_DMR_Blk_x15";
			hlc_50rnd_556x45_M="hlc_wp_SCARL_DMR_Blk_x15";
			hlc_50rnd_556x45_MDim="hlc_wp_SCARL_DMR_Blk_x15";
			default="hlc_wp_SCARL_DMR_Blk";
		};
		class nia_gripSwitch
		{
			VFG="hlc_wp_SCARL_DMR_Blk_grip";
			AFG="hlc_wp_SCARL_DMR_Blk_grip2";
			VFG2="hlc_wp_SCARL_DMR_Blk_grip3";
			default="hlc_wp_SCARL_DMR_Blk";
		};
		rhs_grip1_change="hlc_wp_SCARL_DMR_Blk_grip";
		rhs_grip2_change="hlc_wp_SCARL_DMR_Blk_grip2";
		rhs_grip3_change="hlc_wp_SCARL_DMR_Blk_grip3";
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
			class hlc_wp_SCARL_DMR_blk
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SCARL_DMR_blk_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARL_DMR_blk_TacReload: hlc_wp_SCARL_DMR_Blk
	{
		magazineReloadSwitchPhase="(40 / 96)";
		scopeArsenal=0;
		reloadMagazineSound[]=
		{
			"\nia_wp_SCAR\snd\mk16_reload_partial.ogg",
			0.85000002,
			1,
			25
		};
		reloadAction="NIA_GestureReload_Mk16_Tactical";
		model="nia_wp_SCAR\mesh\Rifle\SCARL_DMR_TacReload.p3d";
		rhs_grip1_change="hlc_wp_SCARL_DMR_blk_grip";
		rhs_grip2_change="hlc_wp_SCARL_DMR_blk_grip2";
		rhs_grip3_change="hlc_wp_SCARL_DMR_blk_grip3";
		class nia_gripSwitch
		{
			VFG="hlc_wp_SCARL_DMR_blk_grip";
			AFG="hlc_wp_SCARL_DMR_blk_grip2";
			VFG2="hlc_wp_SCARL_DMR_blk_grip3";
			default="hlc_wp_SCARL_DMR_blk_TacReload";
		};
	};
	class hlc_wp_SCARL_DMR_Blk_grip: hlc_wp_SCARL_DMR_Blk
	{
		scopeArsenal=0;
		dexterity=1.5741909;
		aimTransitionSpeed=1.1019336;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handgesture_SCARL_VFG.rtm"
		};
		class nia_magSwitch
		{
			hlc_50rnd_556x45_EPR="hlc_wp_SCARL_DMR_Blk_x15_grip";
			hlc_50rnd_556x45_SOST="hlc_wp_SCARL_DMR_Blk_x15_grip";
			hlc_50rnd_556x45_SPR="hlc_wp_SCARL_DMR_Blk_x15_grip";
			hlc_50rnd_556x45_M="hlc_wp_SCARL_DMR_Blk_x15_grip";
			hlc_50rnd_556x45_MDim="hlc_wp_SCARL_DMR_Blk_x15_grip";
			default="hlc_wp_SCARL_DMR_Blk_grip";
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
			class hlc_wp_SCARL_DMR_blk_grip
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SCARL_DMR_blk_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARL_DMR_Blk_grip2: hlc_wp_SCARL_DMR_Blk
	{
		scopeArsenal=0;
		inertia="(0.3490*0.85)";
		dexterity=1.5741909;
		aimTransitionSpeed=1.1019336;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handgesture_SCARL_AFG.rtm"
		};
		class nia_magSwitch
		{
			hlc_50rnd_556x45_EPR="hlc_wp_SCARL_DMR_Blk_x15_grip2";
			hlc_50rnd_556x45_SOST="hlc_wp_SCARL_DMR_Blk_x15_grip2";
			hlc_50rnd_556x45_SPR="hlc_wp_SCARL_DMR_Blk_x15_grip2";
			hlc_50rnd_556x45_M="hlc_wp_SCARL_DMR_Blk_x15_grip2";
			hlc_50rnd_556x45_MDim="hlc_wp_SCARL_DMR_Blk_x15_grip2";
			default="hlc_wp_SCARL_DMR_Blk_grip2";
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
			class hlc_wp_SCARL_DMR_blk_grip2
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SCARL_DMR_blk_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARL_DMR_Blk_grip3: hlc_wp_SCARL_DMR_Blk
	{
		scopeArsenal=0;
		dexterity=1.5741909;
		aimTransitionSpeed=1.1019336;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handgesture_SCARL_VFG.rtm"
		};
		class nia_magSwitch
		{
			hlc_50rnd_556x45_EPR="hlc_wp_SCARL_DMR_Blk_x15_grip3";
			hlc_50rnd_556x45_SOST="hlc_wp_SCARL_DMR_Blk_x15_grip3";
			hlc_50rnd_556x45_SPR="hlc_wp_SCARL_DMR_Blk_x15_grip3";
			hlc_50rnd_556x45_M="hlc_wp_SCARL_DMR_Blk_x15_grip3";
			hlc_50rnd_556x45_MDim="hlc_wp_SCARL_DMR_Blk_x15_grip3";
			default="hlc_wp_SCARL_DMR_Blk_grip3";
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
			class hlc_wp_SCARL_DMR_blk_grip3
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SCARL_DMR_blk_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARL_DMR_Blk_x15: hlc_wp_SCARL_DMR_Blk
	{
		scopeArsenal=0;
		reloadAction="NIA_GestureReload_Mk16_X15";
		baseweapon="hlc_wp_SCARL_DMR_Blk_x15";
		reloadMagazineSound[]=
		{
			"nia_wp_SCAR\snd\mk16_reload_X15_short.ogg",
			0.80000001,
			1,
			25
		};
		class nia_gripSwitch
		{
			VFG="hlc_wp_SCARL_DMR_Blk_x15_grip";
			AFG="hlc_wp_SCARL_DMR_Blk_x15_grip2";
			VFG2="hlc_wp_SCARL_DMR_Blk_x15_grip3";
			default="hlc_wp_SCARL_DMR_Blk_x15";
		};
		rhs_grip1_change="hlc_wp_SCARL_DMR_Blk_x15_grip";
		rhs_grip2_change="hlc_wp_SCARL_DMR_Blk_x15_grip2";
		rhs_grip3_change="hlc_wp_SCARL_DMR_Blk_x15_grip3";
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
			class hlc_wp_SCARL_DMR_blk_x15
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SCARL_DMR_blk_x15_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARL_DMR_blk_x15_TacReload: hlc_wp_SCARL_DMR_Blk_x15
	{
		magazineReloadSwitchPhase="(40 / 96)";
		scopeArsenal=0;
		reloadMagazineSound[]=
		{
			"\nia_wp_SCAR\snd\mk16_reload_X15_partial.ogg",
			0.85000002,
			1,
			25
		};
		reloadAction="NIA_GestureReload_Mk16_X15_Tactical";
		model="nia_wp_SCAR\mesh\Rifle\SCARL_DMR_TacReload.p3d";
		rhs_grip1_change="hlc_wp_SCARL_DMR_blk_x15_grip";
		rhs_grip2_change="hlc_wp_SCARL_DMR_blk_x15_grip2";
		rhs_grip3_change="hlc_wp_SCARL_DMR_blk_x15_grip3";
		class nia_gripSwitch
		{
			VFG="hlc_wp_SCARL_DMR_blk_x15_grip";
			AFG="hlc_wp_SCARL_DMR_blk_x15_grip2";
			VFG2="hlc_wp_SCARL_DMR_blk_x15_grip3";
			default="hlc_wp_SCARL_DMR_blk_x15_TacReload";
		};
	};
	class hlc_wp_SCARL_DMR_Blk_x15_grip: hlc_wp_SCARL_DMR_Blk_x15
	{
		scopeArsenal=0;
		dexterity=1.619403;
		aimTransitionSpeed=1.1335821;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handgesture_SCARL_VFG.rtm"
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
			class hlc_wp_SCARL_DMR_blk_x15_grip
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SCARL_DMR_blk_x15_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARL_DMR_Blk_x15_grip2: hlc_wp_SCARL_DMR_Blk_x15
	{
		scopeArsenal=0;
		inertia="(0.3490*0.85)";
		dexterity=1.619403;
		aimTransitionSpeed=1.1335821;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handgesture_SCARL_AFG.rtm"
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
			class hlc_wp_SCARL_DMR_blk_x15_grip2
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SCARL_DMR_blk_x15_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARL_DMR_Blk_x15_grip3: hlc_wp_SCARL_DMR_Blk_x15
	{
		scopeArsenal=0;
		dexterity=1.619403;
		aimTransitionSpeed=1.1335821;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handgesture_SCARL_VFG.rtm"
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
			class hlc_wp_SCARL_DMR_blk_x15_grip3
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SCARL_DMR_blk_x15_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARL_DMR_camo: hlc_WP_SCARL_DMR
	{
		author="Toadie";
		dlc="Niarms_SCAR";
		displayName="$STR_NIA_rifle_SCARL_DMR_camo";
		scope=2;
		baseWeapon="hlc_wp_SCARL_DMR_camo";
		picture="\nia_wp_SCAR\tex\ui\hlc_wp_SCARL_DMR_camo_ca";
		hiddenSelectionsTextures[]=
		{
			"nia_wp_SCAR\tex\toadie_SCAR\scar_common_camo_co.paa",
			"nia_wp_SCAR\tex\toadie_SCAR\scar_lower_camo_co.paa",
			"nia_wp_SCAR\tex\toadie_SCAR\stock_camo_co.paa",
			"nia_wp_SCAR\tex\toadie_SCAR\upper_SCARL_camo_co.paa"
		};
		HiddenSelectionsMaterials[]=
		{
			"nia_wp_SCAR\mat\scar_common_camo.rvmat",
			"nia_wp_SCAR\mat\scar_lowers_camo.rvmat",
			"nia_wp_SCAR\mat\scar_stock_camo.rvmat",
			"nia_wp_SCAR\mat\scar_upper_SCARL_camo.rvmat"
		};
		class nia_magSwitch
		{
			hlc_50rnd_556x45_EPR="hlc_wp_SCARL_DMR_Camo_x15";
			hlc_50rnd_556x45_SOST="hlc_wp_SCARL_DMR_Camo_x15";
			hlc_50rnd_556x45_SPR="hlc_wp_SCARL_DMR_Camo_x15";
			hlc_50rnd_556x45_M="hlc_wp_SCARL_DMR_Camo_x15";
			hlc_50rnd_556x45_MDim="hlc_wp_SCARL_DMR_Camo_x15";
			default="hlc_wp_SCARL_DMR_camo";
		};
		class nia_gripSwitch
		{
			VFG="hlc_wp_SCARL_DMR_camo_grip";
			AFG="hlc_wp_SCARL_DMR_camo_grip2";
			VFG2="hlc_wp_SCARL_DMR_camo_grip3";
			default="hlc_wp_SCARL_DMR_camo";
		};
		rhs_grip1_change="hlc_wp_SCARL_DMR_camo_grip";
		rhs_grip2_change="hlc_wp_SCARL_DMR_camo_grip2";
		rhs_grip3_change="hlc_wp_SCARL_DMR_camo_grip3";
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
			class hlc_wp_SCARL_DMR_camo
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SCARL_DMR_camo_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARL_DMR_camo_TacReload: hlc_wp_SCARL_DMR_camo
	{
		magazineReloadSwitchPhase="(40 / 96)";
		scopeArsenal=0;
		reloadMagazineSound[]=
		{
			"\nia_wp_SCAR\snd\mk16_reload_partial.ogg",
			0.85000002,
			1,
			25
		};
		reloadAction="NIA_GestureReload_Mk16_Tactical";
		model="nia_wp_SCAR\mesh\Rifle\SCARL_DMR_TacReload.p3d";
		rhs_grip1_change="hlc_wp_SCARL_DMR_camo_grip";
		rhs_grip2_change="hlc_wp_SCARL_DMR_camo_grip2";
		rhs_grip3_change="hlc_wp_SCARL_DMR_camo_grip3";
		class nia_gripSwitch
		{
			VFG="hlc_wp_SCARL_DMR_camo_grip";
			AFG="hlc_wp_SCARL_DMR_camo_grip2";
			VFG2="hlc_wp_SCARL_DMR_camo_grip3";
			default="hlc_wp_SCARL_DMR_camo_TacReload";
		};
	};
	class hlc_wp_SCARL_DMR_camo_grip: hlc_wp_SCARL_DMR_camo
	{
		scopeArsenal=0;
		dexterity=1.5741909;
		aimTransitionSpeed=1.1019336;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handgesture_SCARL_VFG.rtm"
		};
		class nia_magSwitch
		{
			hlc_50rnd_556x45_EPR="hlc_wp_SCARL_DMR_Camo_x15_grip";
			hlc_50rnd_556x45_SOST="hlc_wp_SCARL_DMR_Camo_x15_grip";
			hlc_50rnd_556x45_SPR="hlc_wp_SCARL_DMR_Camo_x15_grip";
			hlc_50rnd_556x45_M="hlc_wp_SCARL_DMR_Camo_x15_grip";
			hlc_50rnd_556x45_MDim="hlc_wp_SCARL_DMR_Camo_x15_grip";
			default="hlc_wp_SCARL_DMR_camo_grip";
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
			class hlc_wp_SCARL_DMR_camo_grip
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SCARL_DMR_camo_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARL_DMR_camo_grip2: hlc_wp_SCARL_DMR_camo
	{
		scopeArsenal=0;
		inertia="(0.3490*0.85)";
		dexterity=1.5741909;
		aimTransitionSpeed=1.1019336;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handgesture_SCARL_AFG.rtm"
		};
		class nia_magSwitch
		{
			hlc_50rnd_556x45_EPR="hlc_wp_SCARL_DMR_Camo_x15_grip2";
			hlc_50rnd_556x45_SOST="hlc_wp_SCARL_DMR_Camo_x15_grip2";
			hlc_50rnd_556x45_SPR="hlc_wp_SCARL_DMR_Camo_x15_grip2";
			hlc_50rnd_556x45_M="hlc_wp_SCARL_DMR_Camo_x15_grip2";
			hlc_50rnd_556x45_MDim="hlc_wp_SCARL_DMR_Camo_x15_grip2";
			default="hlc_wp_SCARL_DMR_camo_grip2";
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
			class hlc_wp_SCARL_DMR_camo_grip2
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SCARL_DMR_camo_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARL_DMR_camo_grip3: hlc_wp_SCARL_DMR_camo
	{
		scopeArsenal=0;
		dexterity=1.5741909;
		aimTransitionSpeed=1.1019336;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handgesture_SCARL_VFG.rtm"
		};
		class nia_magSwitch
		{
			hlc_50rnd_556x45_EPR="hlc_wp_SCARL_DMR_Camo_x15_grip3";
			hlc_50rnd_556x45_SOST="hlc_wp_SCARL_DMR_Camo_x15_grip3";
			hlc_50rnd_556x45_SPR="hlc_wp_SCARL_DMR_Camo_x15_grip3";
			hlc_50rnd_556x45_M="hlc_wp_SCARL_DMR_Camo_x15_grip3";
			hlc_50rnd_556x45_MDim="hlc_wp_SCARL_DMR_Camo_x15_grip3";
			default="hlc_wp_SCARL_DMR_camo_grip3";
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
			class hlc_wp_SCARL_DMR_camo_grip3
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SCARL_DMR_camo_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARL_DMR_Camo_x15: hlc_wp_SCARL_DMR_camo
	{
		scopeArsenal=0;
		reloadAction="NIA_GestureReload_Mk16_X15";
		baseweapon="hlc_wp_SCARL_DMR_Camo_x15";
		reloadMagazineSound[]=
		{
			"nia_wp_SCAR\snd\mk16_reload_X15_short.ogg",
			0.80000001,
			1,
			25
		};
		class nia_gripSwitch
		{
			VFG="hlc_wp_SCARL_DMR_Camo_x15_grip";
			AFG="hlc_wp_SCARL_DMR_Camo_x15_grip2";
			VFG2="hlc_wp_SCARL_DMR_Camo_x15_grip3";
			default="hlc_wp_SCARL_DMR_Camo_x15";
		};
		rhs_grip1_change="hlc_wp_SCARL_DMR_Camo_x15_grip";
		rhs_grip2_change="hlc_wp_SCARL_DMR_Camo_x15_grip2";
		rhs_grip3_change="hlc_wp_SCARL_DMR_Camo_x15_grip3";
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
			class hlc_wp_SCARL_DMR_camo_x15
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SCARL_DMR_camo_x15_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARL_DMR_camo_x15_TacReload: hlc_wp_SCARL_DMR_Camo_x15
	{
		magazineReloadSwitchPhase="(40 / 96)";
		scopeArsenal=0;
		reloadMagazineSound[]=
		{
			"\nia_wp_SCAR\snd\mk16_reload_X15_partial.ogg",
			0.85000002,
			1,
			25
		};
		reloadAction="NIA_GestureReload_Mk16_X15_Tactical";
		model="nia_wp_SCAR\mesh\Rifle\SCARL_DMR_TacReload.p3d";
		rhs_grip1_change="hlc_wp_SCARL_DMR_camo_x15_grip";
		rhs_grip2_change="hlc_wp_SCARL_DMR_camo_x15_grip2";
		rhs_grip3_change="hlc_wp_SCARL_DMR_camo_x15_grip3";
		class nia_gripSwitch
		{
			VFG="hlc_wp_SCARL_DMR_camo_x15_grip";
			AFG="hlc_wp_SCARL_DMR_camo_x15_grip2";
			VFG2="hlc_wp_SCARL_DMR_camo_x15_grip3";
			default="hlc_wp_SCARL_DMR_camo_x15_TacReload";
		};
	};
	class hlc_wp_SCARL_DMR_Camo_x15_grip: hlc_wp_SCARL_DMR_Camo_x15
	{
		scopeArsenal=0;
		dexterity=1.619403;
		aimTransitionSpeed=1.1335821;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handgesture_SCARL_VFG.rtm"
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
			class hlc_wp_SCARL_DMR_camo_x15_grip
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SCARL_DMR_camo_x15_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARL_DMR_Camo_x15_grip2: hlc_wp_SCARL_DMR_Camo_x15
	{
		scopeArsenal=0;
		inertia="(0.3490*0.85)";
		dexterity=1.619403;
		aimTransitionSpeed=1.1335821;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handgesture_SCARL_AFG.rtm"
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
			class hlc_wp_SCARL_DMR_camo_x15_grip2
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SCARL_DMR_camo_x15_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARL_DMR_Camo_x15_grip3: hlc_wp_SCARL_DMR_Camo_x15
	{
		scopeArsenal=0;
		dexterity=1.619403;
		aimTransitionSpeed=1.1335821;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handgesture_SCARL_VFG.rtm"
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
			class hlc_wp_SCARL_DMR_camo_x15_grip3
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SCARL_DMR_camo_x15_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCAR_PDW: hlc_SCARL_Base
	{
		author="Toadie";
		dlc="Niarms_SCAR";
		displayName="$STR_NIA_rifle_SCAR_SC";
		descriptionShort="$STR_NIA_SCARL_Compact_DESC";
		scope=2;
		ACE_barrelTwist=177.8;
		ACE_barrelLength=190.5;
		ACE_railHeightAboveBore=3.8;
		initspeed=-0.72792608;
		discretedistance[]={200,300,400,500,600};
		discretedistanceinitindex=0;
		discreteDistanceCameraPoint[]=
		{
			"eye",
			"eye_300",
			"eye_400",
			"eye_500",
			"eye_600"
		};
		cameraDir="eye_look";
		baseWeapon="hlc_wp_SCAR_PDW";
		mass=67.579994;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=67.579994;
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
				class compatibleItems: compatibleItems
				{
					HLC_Panel_Side_SCAR_FN5cm_Desert=1;
					HLC_Panel_Side_SCAR_2xFN5cm_Desert=1;
					HLC_Panel_Side_SCAR_FN10cm_Desert=1;
					HLC_Panel_Side_SCAR_Ladder_S_Desert=1;
					HLC_Panel_Side_SCAR_Ladder_M_Desert=1;
					HLC_Panel_Side_SCAR_MagpulXT_Desert=1;
					HLC_Panel_Side_SCAR_XTME_Desert=1;
					HLC_Panel_Side_SCAR_2xXTME_Desert=1;
					HLC_Panel_Side_SCAR_FN5cm_Black=1;
					HLC_Panel_Side_SCAR_2xFN5cm_Black=1;
					HLC_Panel_Side_SCAR_FN10cm_Black=1;
					HLC_Panel_Side_SCAR_Ladder_S_Black=1;
					HLC_Panel_Side_SCAR_Ladder_M_Black=1;
					HLC_Panel_Side_SCAR_MagpulXT_Black=1;
					HLC_Panel_Side_SCAR_XTME_Black=1;
					HLC_Panel_Side_SCAR_2xXTME_Black=1;
					HLC_Panel_Side_SCAR_FN5cm_OD=1;
					HLC_Panel_Side_SCAR_2xFN5cm_OD=1;
					HLC_Panel_Side_SCAR_FN10cm_OD=1;
					HLC_Panel_Side_SCAR_Ladder_S_OD=1;
					HLC_Panel_Side_SCAR_Ladder_M_OD=1;
					HLC_Panel_Side_SCAR_MagpulXT_OD=1;
					HLC_Panel_Side_SCAR_XTME_OD=1;
					HLC_Panel_Side_SCAR_2xXTME_OD=1;
					HLC_Panel_Side_SCAR_FN5cm_RG=1;
					HLC_Panel_Side_SCAR_2xFN5cm_RG=1;
					HLC_Panel_Side_SCAR_FN10cm_RG=1;
					HLC_Panel_Side_SCAR_Ladder_S_RG=1;
					HLC_Panel_Side_SCAR_Ladder_M_RG=1;
					HLC_Panel_Side_SCAR_MagpulXT_RG=1;
					HLC_Panel_Side_SCAR_XTME_RG=1;
					HLC_Panel_Side_SCAR_2xXTME_RG=1;
					HLC_Panel_Side_SCAR_Ladder_S_Pride=1;
					HLC_Panel_Side_SCAR_Ladder_M_Pride=1;
					HLC_Panel_Side_SCAR_MagpulXT_Pride=1;
				};
			};
			class MuzzleSlot: asdg_MuzzleSlot_556
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
		inertia=0.31;
		dexterity=1.6092874;
		aimTransitionSpeed=1.1265012;
		class LinkedItems
		{
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="hlc_muzzle_OEMDevice_556";
			};
		};
		model="nia_wp_SCAR\mesh\rifle\SCAR_PDW.p3d";
		picture="\nia_wp_SCAR\tex\ui\hlc_wp_SCAR_PDW_ca";
		UiPicture="\A3\weapons_f\data\UI\icon_regular_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"nia_wp_SCAR\tex\toadie_SCAR\scar_common_tan_co.paa",
			"nia_wp_SCAR\tex\toadie_SCAR\scar_lower_tan_co.paa",
			"nia_wp_SCAR\tex\toadie_SCAR\stock_pdw_tan_co.paa",
			"nia_wp_SCAR\tex\toadie_SCAR\Upper_SCAR_PDW_tan_co.paa",
			"",
			"nia_wp_SCAR\tex\toadie_SCAR\upper_scarl_tan_co.paa"
		};
		HiddenSelectionsMaterials[]=
		{
			"nia_wp_SCAR\mat\scar_common.rvmat",
			"nia_wp_SCAR\mat\scar_lowers.rvmat",
			"nia_wp_SCAR\mat\scar_stock_pdw.rvmat",
			"nia_wp_SCAR\mat\scar_upper_scar-pdw.rvmat",
			"",
			"nia_wp_SCAR\mat\scar_upper_scarl.rvmat"
		};
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handgesture_SCAR-PDW_STD.rtm"
		};
		reloadAction="NIA_GestureReload_Mk16";
		reloadMagazineSound[]=
		{
			"nia_wp_SCAR\snd\mk16_reload_short.ogg",
			0.80000001,
			1,
			25
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
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"NIA_SCARPDW_NEW_Shot_SoundSet",
					"NIA_SCARL_tail_SoundSet"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"NIA_SCARL_silencerShot_SoundSet",
					"NIA_SCARL_silencerTail_SoundSet"
				};
			};
			dispersion=0.00049162103;
			reloadtime="(60/600)";
			aiRateOfFire=1;
			aiRateOfFireDistance=350;
			aiRateOfFireDispersion=2;
			minRange=20;
			minRangeProbab=0.69999999;
			midRange=150;
			midRangeProbab=0.5;
			maxRange=500;
			maxRangeProbab=0.1;
		};
		class Burst: Mode_Burst
		{
			sounds[]=
			{
				"StandardSound",
				"SilencedSound"
			};
			class BaseSoundModeType
			{
				weaponSoundEffect="DefaultRifle";
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"NIA_SCARPDW_NEW_Shot_SoundSet",
					"NIA_SCARL_tail_SoundSet"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"NIA_SCARL_silencerShot_SoundSet",
					"NIA_SCARL_silencerTail_SoundSet"
				};
			};
			dispersion=0.00059634499;
			reloadtime="(60/600)";
			aiRateOfFire=1;
			aiRateOfFireDistance=100;
			aiRateOfFireDispersion=1;
			minRange=0;
			minRangeProbab=0.2;
			midRange=20;
			midRangeProbab=0.80000001;
			maxRange=40;
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
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"NIA_SCARPDW_NEW_Shot_SoundSet",
					"NIA_SCARL_tail_SoundSet"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"NIA_SCARL_silencerShot_SoundSet",
					"NIA_SCARL_silencerTail_SoundSet"
				};
			};
			dispersion=0.00062543503;
			reloadtime="(60/600)";
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
		class nia_magSwitch
		{
			hlc_50rnd_556x45_EPR="hlc_wp_SCAR_PDW_x15";
			hlc_50rnd_556x45_SOST="hlc_wp_SCAR_PDW_x15";
			hlc_50rnd_556x45_SPR="hlc_wp_SCAR_PDW_x15";
			hlc_50rnd_556x45_M="hlc_wp_SCAR_PDW_x15";
			hlc_50rnd_556x45_MDim="hlc_wp_SCAR_PDW_x15";
			default="hlc_wp_SCAR_PDW";
		};
		class nia_gripSwitch
		{
			VFG="hlc_wp_SCAR_PDW_grip";
			AFG="hlc_wp_SCAR_PDW_grip2";
			VFG2="hlc_wp_SCAR_PDW_grip3";
			default="hlc_wp_SCAR_PDW";
		};
		rhs_grip1_change="hlc_wp_SCAR_PDW_grip";
		rhs_grip2_change="hlc_wp_SCAR_PDW_grip2";
		rhs_grip3_change="hlc_wp_SCAR_PDW_grip3";
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
			class hlc_wp_SCAR_PDW
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SCAR_PDW_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCAR_PDW_TacReload: hlc_wp_SCAR_PDW
	{
		magazineReloadSwitchPhase="(40 / 96)";
		scopeArsenal=0;
		reloadMagazineSound[]=
		{
			"\nia_wp_SCAR\snd\mk16_reload_partial.ogg",
			0.85000002,
			1,
			25
		};
		reloadAction="NIA_GestureReload_Mk16_Tactical";
		model="nia_wp_SCAR\mesh\Rifle\SCAR_PDW_TacReload.p3d";
		rhs_grip1_change="hlc_wp_SCAR_PDW_grip";
		rhs_grip2_change="hlc_wp_SCAR_PDW_grip2";
		rhs_grip3_change="hlc_wp_SCAR_PDW_grip3";
		class nia_gripSwitch
		{
			VFG="hlc_wp_SCAR_PDW_grip";
			AFG="hlc_wp_SCAR_PDW_grip2";
			VFG2="hlc_wp_SCAR_PDW_grip3";
			default="hlc_wp_SCAR_PDW_TacReload";
		};
	};
	class hlc_wp_SCAR_PDW_grip: hlc_wp_SCAR_PDW
	{
		scopeArsenal=0;
		dexterity=1.7092874;
		aimTransitionSpeed=1.1965011;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handgesture_SCAR-PDW_VFG.rtm"
		};
		class nia_magSwitch
		{
			hlc_50rnd_556x45_EPR="hlc_wp_SCAR_PDW_x15_grip";
			hlc_50rnd_556x45_SOST="hlc_wp_SCAR_PDW_x15_grip";
			hlc_50rnd_556x45_SPR="hlc_wp_SCAR_PDW_x15_grip";
			hlc_50rnd_556x45_M="hlc_wp_SCAR_PDW_x15_grip";
			hlc_50rnd_556x45_MDim="hlc_wp_SCAR_PDW_x15_grip";
			default="hlc_wp_SCAR_PDW_grip";
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
			class hlc_wp_SCAR_PDW_grip
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SCAR_PDW_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCAR_PDW_grip2: hlc_wp_SCAR_PDW
	{
		scopeArsenal=0;
		inertia="(0.1*0.85)";
		dexterity=1.7092874;
		aimTransitionSpeed=1.1965011;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handgesture_SCAR-PDW_AFG.rtm"
		};
		class nia_magSwitch
		{
			hlc_50rnd_556x45_EPR="hlc_wp_SCAR_PDW_x15_grip2";
			hlc_50rnd_556x45_SOST="hlc_wp_SCAR_PDW_x15_grip2";
			hlc_50rnd_556x45_SPR="hlc_wp_SCAR_PDW_x15_grip2";
			hlc_50rnd_556x45_M="hlc_wp_SCAR_PDW_x15_grip2";
			hlc_50rnd_556x45_MDim="hlc_wp_SCAR_PDW_x15_grip2";
			default="hlc_wp_SCAR_PDW_grip2";
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
			class hlc_wp_SCAR_PDW_grip2
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SCAR_PDW_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCAR_PDW_grip3: hlc_wp_SCAR_PDW
	{
		scopeArsenal=0;
		dexterity=1.7092874;
		aimTransitionSpeed=1.1965011;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handgesture_SCAR-PDW_VFG.rtm"
		};
		class nia_magSwitch
		{
			hlc_50rnd_556x45_EPR="hlc_wp_SCAR_PDW_x15_grip3";
			hlc_50rnd_556x45_SOST="hlc_wp_SCAR_PDW_x15_grip3";
			hlc_50rnd_556x45_SPR="hlc_wp_SCAR_PDW_x15_grip3";
			hlc_50rnd_556x45_M="hlc_wp_SCAR_PDW_x15_grip3";
			hlc_50rnd_556x45_MDim="hlc_wp_SCAR_PDW_x15_grip3";
			default="hlc_wp_SCAR_PDW_grip3";
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
			class hlc_wp_SCAR_PDW_grip3
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SCAR_PDW_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCAR_PDW_x15: hlc_wp_SCAR_PDW
	{
		scopeArsenal=0;
		reloadAction="NIA_GestureReload_Mk16_X15";
		baseweapon="hlc_wp_SCAR_PDW_x15";
		reloadMagazineSound[]=
		{
			"nia_wp_SCAR\snd\mk16_reload_X15_short.ogg",
			0.80000001,
			1,
			25
		};
		class nia_gripSwitch
		{
			VFG="hlc_wp_SCAR_PDW_x15_grip";
			AFG="hlc_wp_SCAR_PDW_x15_grip2";
			VFG2="hlc_wp_SCAR_PDW_x15_grip3";
			default="hlc_wp_SCAR_PDW_x15";
		};
		rhs_grip1_change="hlc_wp_SCAR_PDW_x15_grip";
		rhs_grip2_change="hlc_wp_SCAR_PDW_x15_grip2";
		rhs_grip3_change="hlc_wp_SCAR_PDW_x15_grip3";
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
			class hlc_wp_SCAR_PDW_x15
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SCAR_PDW_x15_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCAR_PDW_x15_TacReload: hlc_wp_SCAR_PDW_x15
	{
		magazineReloadSwitchPhase="(40 / 96)";
		scopeArsenal=0;
		reloadMagazineSound[]=
		{
			"\nia_wp_SCAR\snd\mk16_reload_X15_partial.ogg",
			0.85000002,
			1,
			25
		};
		reloadAction="NIA_GestureReload_Mk16_X15_Tactical";
		model="nia_wp_SCAR\mesh\Rifle\SCAR_PDW_TacReload.p3d";
		rhs_grip1_change="hlc_wp_SCAR_PDW_x15_grip";
		rhs_grip2_change="hlc_wp_SCAR_PDW_x15_grip2";
		rhs_grip3_change="hlc_wp_SCAR_PDW_x15_grip3";
		class nia_gripSwitch
		{
			VFG="hlc_wp_SCAR_PDW_x15_grip";
			AFG="hlc_wp_SCAR_PDW_x15_grip2";
			VFG2="hlc_wp_SCAR_PDW_x15_grip3";
			default="hlc_wp_SCAR_PDW_x15_TacReload";
		};
	};
	class hlc_wp_SCAR_PDW_x15_grip: hlc_wp_SCAR_PDW_x15
	{
		scopeArsenal=0;
		dexterity=1.6212438;
		aimTransitionSpeed=1.1348706;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handgesture_SCAR-PDW_VFG.rtm"
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
			class hlc_wp_SCAR_PDW_x15_grip
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SCAR_PDW_x15_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCAR_PDW_x15_grip2: hlc_wp_SCAR_PDW_x15
	{
		scopeArsenal=0;
		inertia="(0.3435*0.85)";
		dexterity=1.6212438;
		aimTransitionSpeed=1.1348706;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handgesture_SCAR-PDW_AFG.rtm"
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
			class hlc_wp_SCAR_PDW_x15_grip2
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SCAR_PDW_x15_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCAR_PDW_x15_grip3: hlc_wp_SCAR_PDW_x15
	{
		scopeArsenal=0;
		dexterity=1.6212438;
		aimTransitionSpeed=1.1348706;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handgesture_SCAR-PDW_VFG.rtm"
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
			class hlc_wp_SCAR_PDW_x15_grip3
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SCAR_PDW_x15_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCAR_PDW_Blk: hlc_wp_SCAR_PDW
	{
		author="Toadie";
		dlc="Niarms_SCAR";
		displayName="$STR_NIA_rifle_SCAR_SC_blk";
		scope=2;
		baseWeapon="hlc_wp_SCAR_PDW_Blk";
		picture="\nia_wp_SCAR\tex\ui\hlc_wp_SCAR_PDW_Blk_Ca";
		hiddenSelectionsTextures[]=
		{
			"nia_wp_SCAR\tex\toadie_SCAR\scar_common_co.paa",
			"nia_wp_SCAR\tex\toadie_SCAR\scar_lower_co.paa",
			"nia_wp_SCAR\tex\toadie_SCAR\stock_pdw_co.paa",
			"nia_wp_SCAR\tex\toadie_SCAR\Upper_SCAR_PDW_co.paa",
			"",
			"nia_wp_SCAR\tex\toadie_SCAR\upper_scarl_co.paa"
		};
		class nia_magSwitch
		{
			hlc_50rnd_556x45_EPR="hlc_wp_SCAR_PDW_Blk_x15";
			hlc_50rnd_556x45_SOST="hlc_wp_SCAR_PDW_Blk_x15";
			hlc_50rnd_556x45_SPR="hlc_wp_SCAR_PDW_Blk_x15";
			hlc_50rnd_556x45_M="hlc_wp_SCAR_PDW_Blk_x15";
			hlc_50rnd_556x45_MDim="hlc_wp_SCAR_PDW_Blk_x15";
			default="hlc_wp_SCAR_PDW_Blk";
		};
		class nia_gripSwitch
		{
			VFG="hlc_wp_SCAR_PDW_Blk_grip";
			AFG="hlc_wp_SCAR_PDW_Blk_grip2";
			VFG2="hlc_wp_SCAR_PDW_Blk_grip3";
			default="hlc_wp_SCAR_PDW_Blk";
		};
		rhs_grip1_change="hlc_wp_SCAR_PDW_Blk_grip";
		rhs_grip2_change="hlc_wp_SCAR_PDW_Blk_grip2";
		rhs_grip3_change="hlc_wp_SCAR_PDW_Blk_grip3";
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
			class hlc_wp_SCAR_PDW_Blk
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SCAR_PDW_Blk_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCAR_PDW_Blk_TacReload: hlc_wp_SCAR_PDW_Blk
	{
		magazineReloadSwitchPhase="(40 / 96)";
		scopeArsenal=0;
		reloadMagazineSound[]=
		{
			"\nia_wp_SCAR\snd\mk16_reload_partial.ogg",
			0.85000002,
			1,
			25
		};
		reloadAction="NIA_GestureReload_Mk16_Tactical";
		model="nia_wp_SCAR\mesh\Rifle\SCAR_PDW_TacReload.p3d";
		rhs_grip1_change="hlc_wp_SCAR_PDW_Blk_grip";
		rhs_grip2_change="hlc_wp_SCAR_PDW_Blk_grip2";
		rhs_grip3_change="hlc_wp_SCAR_PDW_Blk_grip3";
		class nia_gripSwitch
		{
			VFG="hlc_wp_SCAR_PDW_Blk_grip";
			AFG="hlc_wp_SCAR_PDW_Blk_grip2";
			VFG2="hlc_wp_SCAR_PDW_Blk_grip3";
			default="hlc_wp_SCAR_PDW_Blk_TacReload";
		};
	};
	class hlc_wp_SCAR_PDW_Blk_grip: hlc_wp_SCAR_PDW_Blk
	{
		scopeArsenal=0;
		dexterity=1.7092874;
		aimTransitionSpeed=1.1965011;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handgesture_SCAR-PDW_VFG.rtm"
		};
		class nia_magSwitch
		{
			hlc_50rnd_556x45_EPR="hlc_wp_SCAR_PDW_Blk_x15_grip";
			hlc_50rnd_556x45_SOST="hlc_wp_SCAR_PDW_Blk_x15_grip";
			hlc_50rnd_556x45_SPR="hlc_wp_SCAR_PDW_Blk_x15_grip";
			hlc_50rnd_556x45_M="hlc_wp_SCAR_PDW_Blk_x15_grip";
			hlc_50rnd_556x45_MDim="hlc_wp_SCAR_PDW_Blk_x15_grip";
			default="hlc_wp_SCAR_PDW_Blk_grip";
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
			class hlc_wp_SCAR_PDW_Blk_grip
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SCAR_PDW_Blk_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCAR_PDW_Blk_grip2: hlc_wp_SCAR_PDW_Blk
	{
		scopeArsenal=0;
		inertia="(0.31*0.85)";
		dexterity=1.7092874;
		aimTransitionSpeed=1.1965011;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handgesture_SCAR-PDW_AFG.rtm"
		};
		class nia_magSwitch
		{
			hlc_50rnd_556x45_EPR="hlc_wp_SCAR_PDW_Blk_x15_grip2";
			hlc_50rnd_556x45_SOST="hlc_wp_SCAR_PDW_Blk_x15_grip2";
			hlc_50rnd_556x45_SPR="hlc_wp_SCAR_PDW_Blk_x15_grip2";
			hlc_50rnd_556x45_M="hlc_wp_SCAR_PDW_Blk_x15_grip2";
			hlc_50rnd_556x45_MDim="hlc_wp_SCAR_PDW_Blk_x15_grip2";
			default="hlc_wp_SCAR_PDW_Blk_grip2";
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
			class hlc_wp_SCAR_PDW_Blk_grip2
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SCAR_PDW_Blk_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCAR_PDW_Blk_grip3: hlc_wp_SCAR_PDW_Blk
	{
		scopeArsenal=0;
		dexterity=1.6394713;
		aimTransitionSpeed=1.1476299;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handgesture_SCAR-PDW_VFG.rtm"
		};
		class nia_magSwitch
		{
			hlc_50rnd_556x45_EPR="hlc_wp_SCAR_PDW_Blk_x15_grip3";
			hlc_50rnd_556x45_SOST="hlc_wp_SCAR_PDW_Blk_x15_grip3";
			hlc_50rnd_556x45_SPR="hlc_wp_SCAR_PDW_Blk_x15_grip3";
			hlc_50rnd_556x45_M="hlc_wp_SCAR_PDW_Blk_x15_grip3";
			hlc_50rnd_556x45_MDim="hlc_wp_SCAR_PDW_Blk_x15_grip3";
			default="hlc_wp_SCAR_PDW_Blk_grip3";
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
			class hlc_wp_SCAR_PDW_Blk_grip3
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SCAR_PDW_Blk_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCAR_PDW_Blk_x15: hlc_wp_SCAR_PDW_Blk
	{
		scopeArsenal=0;
		reloadAction="NIA_GestureReload_Mk16_X15";
		baseweapon="hlc_wp_SCAR_PDW_Blk_x15";
		reloadMagazineSound[]=
		{
			"nia_wp_SCAR\snd\mk16_reload_X15_short.ogg",
			0.80000001,
			1,
			25
		};
		class nia_gripSwitch
		{
			VFG="hlc_wp_SCAR_PDW_Blk_x15_grip";
			AFG="hlc_wp_SCAR_PDW_Blk_x15_grip2";
			VFG2="hlc_wp_SCAR_PDW_Blk_x15_grip3";
			default="hlc_wp_SCAR_PDW_Blk_x15";
		};
		rhs_grip1_change="hlc_wp_SCAR_PDW_Blk_x15_grip";
		rhs_grip2_change="hlc_wp_SCAR_PDW_Blk_x15_grip2";
		rhs_grip3_change="hlc_wp_SCAR_PDW_Blk_x15_grip3";
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
			class hlc_wp_SCAR_PDW_Blk_x15
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SCAR_PDW_Blk_x15_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCAR_PDW_Blk_x15_TacReload: hlc_wp_SCAR_PDW_Blk_x15
	{
		magazineReloadSwitchPhase="(40 / 96)";
		scopeArsenal=0;
		reloadMagazineSound[]=
		{
			"\nia_wp_SCAR\snd\mk16_reload_X15_partial.ogg",
			0.85000002,
			1,
			25
		};
		reloadAction="NIA_GestureReload_Mk16_X15_Tactical";
		model="nia_wp_SCAR\mesh\Rifle\SCAR_PDW_TacReload.p3d";
		rhs_grip1_change="hlc_wp_SCAR_PDW_Blk_x15_grip";
		rhs_grip2_change="hlc_wp_SCAR_PDW_Blk_x15_grip2";
		rhs_grip3_change="hlc_wp_SCAR_PDW_Blk_x15_grip3";
		class nia_gripSwitch
		{
			VFG="hlc_wp_SCAR_PDW_Blk_x15_grip";
			AFG="hlc_wp_SCAR_PDW_Blk_x15_grip2";
			VFG2="hlc_wp_SCAR_PDW_Blk_x15_grip3";
			default="hlc_wp_SCAR_PDW_Blk_x15_TacReload";
		};
	};
	class hlc_wp_SCAR_PDW_Blk_x15_grip: hlc_wp_SCAR_PDW_Blk_x15
	{
		scopeArsenal=0;
		dexterity=1.6212438;
		aimTransitionSpeed=1.1348706;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handgesture_SCAR-PDW_VFG.rtm"
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
			class hlc_wp_SCAR_PDW_Blk_x15_grip
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SCAR_PDW_Blk_x15_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCAR_PDW_Blk_x15_grip2: hlc_wp_SCAR_PDW_Blk_x15
	{
		scopeArsenal=0;
		inertia="(0.3435*0.85)";
		dexterity=1.6212438;
		aimTransitionSpeed=1.1348706;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handgesture_SCAR-PDW_AFG.rtm"
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
			class hlc_wp_SCAR_PDW_Blk_x15_grip2
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SCAR_PDW_Blk_x15_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCAR_PDW_Blk_x15_grip3: hlc_wp_SCAR_PDW_Blk_x15
	{
		scopeArsenal=0;
		dexterity=1.6212438;
		aimTransitionSpeed=1.1348706;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handgesture_SCAR-PDW_VFG.rtm"
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
			class hlc_wp_SCAR_PDW_Blk_x15_grip3
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SCAR_PDW_Blk_x15_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCAR_PDW_camo: hlc_wp_SCAR_PDW
	{
		author="Toadie";
		dlc="Niarms_SCAR";
		displayName="$STR_NIA_rifle_SCAR_SC_camo";
		scope=2;
		baseWeapon="hlc_wp_SCAR_PDW_camo";
		picture="\nia_wp_SCAR\tex\ui\hlc_wp_SCAR_PDW_camo_ca";
		hiddenSelectionsTextures[]=
		{
			"nia_wp_SCAR\tex\toadie_SCAR\scar_common_camo_co.paa",
			"nia_wp_SCAR\tex\toadie_SCAR\scar_lower_camo_co.paa",
			"nia_wp_SCAR\tex\toadie_SCAR\stock_pdw_camo_co.paa",
			"nia_wp_SCAR\tex\toadie_SCAR\Upper_SCAR_PDW_camo_co.paa",
			"",
			"nia_wp_SCAR\tex\toadie_SCAR\upper_scarl_camo_co.paa"
		};
		HiddenSelectionsMaterials[]=
		{
			"nia_wp_SCAR\mat\scar_common_camo.rvmat",
			"nia_wp_SCAR\mat\scar_lowers_camo.rvmat",
			"nia_wp_SCAR\mat\scar_stock_pdw_camo.rvmat",
			"nia_wp_SCAR\mat\scar_upper_scar-pdw_camo.rvmat",
			"",
			"nia_wp_SCAR\mat\scar_upper_scarl.rvmat"
		};
		class nia_magSwitch
		{
			hlc_50rnd_556x45_EPR="hlc_wp_SCAR_PDW_Camo_x15";
			hlc_50rnd_556x45_SOST="hlc_wp_SCAR_PDW_Camo_x15";
			hlc_50rnd_556x45_SPR="hlc_wp_SCAR_PDW_Camo_x15";
			hlc_50rnd_556x45_M="hlc_wp_SCAR_PDW_Camo_x15";
			hlc_50rnd_556x45_MDim="hlc_wp_SCAR_PDW_Camo_x15";
			default="hlc_wp_SCAR_PDW_Camo";
		};
		class nia_gripSwitch
		{
			VFG="hlc_wp_SCAR_PDW_camo_grip";
			AFG="hlc_wp_SCAR_PDW_camo_grip2";
			VFG2="hlc_wp_SCAR_PDW_camo_grip3";
			default="hlc_wp_SCAR_PDW_camo";
		};
		rhs_grip1_change="hlc_wp_SCAR_PDW_camo_grip";
		rhs_grip2_change="hlc_wp_SCAR_PDW_camo_grip2";
		rhs_grip3_change="hlc_wp_SCAR_PDW_camo_grip3";
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
			class hlc_wp_SCAR_PDW_Camo
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SCAR_PDW_Camo_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCAR_PDW_Camo_TacReload: hlc_wp_SCAR_PDW_camo
	{
		magazineReloadSwitchPhase="(40 / 96)";
		scopeArsenal=0;
		reloadMagazineSound[]=
		{
			"\nia_wp_SCAR\snd\mk16_reload_partial.ogg",
			0.85000002,
			1,
			25
		};
		reloadAction="NIA_GestureReload_Mk16_Tactical";
		model="nia_wp_SCAR\mesh\Rifle\SCAR_PDW_TacReload.p3d";
		rhs_grip1_change="hlc_wp_SCAR_PDW_Camo_grip";
		rhs_grip2_change="hlc_wp_SCAR_PDW_Camo_grip2";
		rhs_grip3_change="hlc_wp_SCAR_PDW_Camo_grip3";
		class nia_gripSwitch
		{
			VFG="hlc_wp_SCAR_PDW_Camo_grip";
			AFG="hlc_wp_SCAR_PDW_Camo_grip2";
			VFG2="hlc_wp_SCAR_PDW_Camo_grip3";
			default="hlc_wp_SCAR_PDW_Camo_TacReload";
		};
	};
	class hlc_wp_SCAR_PDW_camo_grip: hlc_wp_SCAR_PDW_camo
	{
		scopeArsenal=0;
		dexterity=1.7092874;
		aimTransitionSpeed=1.1965011;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handgesture_SCAR-PDW_VFG.rtm"
		};
		class nia_magSwitch
		{
			hlc_50rnd_556x45_EPR="hlc_wp_SCAR_PDW_Camo_x15_grip";
			hlc_50rnd_556x45_SOST="hlc_wp_SCAR_PDW_Camo_x15_grip";
			hlc_50rnd_556x45_SPR="hlc_wp_SCAR_PDW_Camo_x15_grip";
			hlc_50rnd_556x45_M="hlc_wp_SCAR_PDW_Camo_x15_grip";
			hlc_50rnd_556x45_MDim="hlc_wp_SCAR_PDW_Camo_x15_grip";
			default="hlc_wp_SCAR_PDW_Camo_grip";
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
			class hlc_wp_SCAR_PDW_Camo_grip
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SCAR_PDW_Camo_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCAR_PDW_camo_grip2: hlc_wp_SCAR_PDW_camo
	{
		scopeArsenal=0;
		inertia="(0.31*0.85)";
		dexterity=1.7092874;
		aimTransitionSpeed=1.1965011;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handgesture_SCAR-PDW_AFG.rtm"
		};
		class nia_magSwitch
		{
			hlc_50rnd_556x45_EPR="hlc_wp_SCAR_PDW_Camo_x15_grip2";
			hlc_50rnd_556x45_SOST="hlc_wp_SCAR_PDW_Camo_x15_grip2";
			hlc_50rnd_556x45_SPR="hlc_wp_SCAR_PDW_Camo_x15_grip2";
			hlc_50rnd_556x45_M="hlc_wp_SCAR_PDW_Camo_x15_grip2";
			hlc_50rnd_556x45_MDim="hlc_wp_SCAR_PDW_Camo_x15_grip2";
			default="hlc_wp_SCAR_PDW_Camo_grip2";
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
			class hlc_wp_SCAR_PDW_Camo_grip2
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SCAR_PDW_Camo_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCAR_PDW_camo_grip3: hlc_wp_SCAR_PDW_camo
	{
		scopeArsenal=0;
		dexterity=1.7092874;
		aimTransitionSpeed=1.1965011;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handgesture_SCAR-PDW_VFG.rtm"
		};
		class nia_magSwitch
		{
			hlc_50rnd_556x45_EPR="hlc_wp_SCAR_PDW_Camo_x15_grip3";
			hlc_50rnd_556x45_SOST="hlc_wp_SCAR_PDW_Camo_x15_grip3";
			hlc_50rnd_556x45_SPR="hlc_wp_SCAR_PDW_Camo_x15_grip3";
			hlc_50rnd_556x45_M="hlc_wp_SCAR_PDW_Camo_x15_grip3";
			hlc_50rnd_556x45_MDim="hlc_wp_SCAR_PDW_Camo_x15_grip3";
			default="hlc_wp_SCAR_PDW_Camo_grip3";
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
			class hlc_wp_SCAR_PDW_Camo_grip3
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SCAR_PDW_Camo_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCAR_PDW_Camo_x15: hlc_wp_SCAR_PDW_camo
	{
		scopeArsenal=0;
		reloadAction="NIA_GestureReload_Mk16_X15";
		baseweapon="hlc_wp_SCAR_PDW_Camo_x15";
		reloadMagazineSound[]=
		{
			"nia_wp_SCAR\snd\mk16_reload_X15_short.ogg",
			0.80000001,
			1,
			25
		};
		class nia_gripSwitch
		{
			VFG="hlc_wp_SCAR_PDW_Camo_x15_grip";
			AFG="hlc_wp_SCAR_PDW_Camo_x15_grip2";
			VFG2="hlc_wp_SCAR_PDW_Camo_x15_grip3";
			default="hlc_wp_SCAR_PDW_Camo_x15";
		};
		rhs_grip1_change="hlc_wp_SCAR_PDW_Camo_x15_grip";
		rhs_grip2_change="hlc_wp_SCAR_PDW_Camo_x15_grip2";
		rhs_grip3_change="hlc_wp_SCAR_PDW_Camo_x15_grip3";
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
			class hlc_wp_SCAR_PDW_Camo_x15
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SCAR_PDW_Camo_x15_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCAR_PDW_Camo_x15_TacReload: hlc_wp_SCAR_PDW_Camo_x15
	{
		magazineReloadSwitchPhase="(40 / 96)";
		scopeArsenal=0;
		reloadMagazineSound[]=
		{
			"\nia_wp_SCAR\snd\mk16_reload_X15_partial.ogg",
			0.85000002,
			1,
			25
		};
		reloadAction="NIA_GestureReload_Mk16_X15_Tactical";
		model="nia_wp_SCAR\mesh\Rifle\SCAR_PDW_TacReload.p3d";
		rhs_grip1_change="hlc_wp_SCAR_PDW_Camo_x15_grip";
		rhs_grip2_change="hlc_wp_SCAR_PDW_Camo_x15_grip2";
		rhs_grip3_change="hlc_wp_SCAR_PDW_Camo_x15_grip3";
		class nia_gripSwitch
		{
			VFG="hlc_wp_SCAR_PDW_Camo_x15_grip";
			AFG="hlc_wp_SCAR_PDW_Camo_x15_grip2";
			VFG2="hlc_wp_SCAR_PDW_Camo_x15_grip3";
			default="hlc_wp_SCAR_PDW_Camo_x15_TacReload";
		};
	};
	class hlc_wp_SCAR_PDW_Camo_x15_grip: hlc_wp_SCAR_PDW_Camo_x15
	{
		scopeArsenal=0;
		dexterity=1.6212438;
		aimTransitionSpeed=1.1348706;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handgesture_SCAR-PDW_VFG.rtm"
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
			class hlc_wp_SCAR_PDW_Camo_x15_grip
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SCAR_PDW_Camo_x15_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCAR_PDW_Camo_x15_grip2: hlc_wp_SCAR_PDW_Camo_x15
	{
		scopeArsenal=0;
		inertia="(0.3435*0.85)";
		dexterity=1.6212438;
		aimTransitionSpeed=1.1348706;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handgesture_SCAR-PDW_AFG.rtm"
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
			class hlc_wp_SCAR_PDW_Camo_x15_grip2
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SCAR_PDW_Camo_x15_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCAR_PDW_Camo_x15_grip3: hlc_wp_SCAR_PDW_Camo_x15
	{
		scopeArsenal=0;
		dexterity=1.6212438;
		aimTransitionSpeed=1.1348706;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handgesture_SCAR-PDW_VFG.rtm"
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
			class hlc_wp_SCAR_PDW_Camo_x15_grip3
			{
				condition="(%1 == 0 )";
			};
			class hlc_wp_SCAR_PDW_Camo_x15_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARL_STD_300AAC: hlc_wp_SCARL_STD
	{
		author="Toadie";
		dlc="Niarms_SCAR";
		displayName="$STR_NIA_rifle_SCARL_STD_300AAC";
		descriptionShort="$STR_NIA_SCARL_Carbine_DESC";
		scope=2;
		ACE_barrelTwist=203.2;
		ACE_barrelLength=355;
		ACE_railHeightAboveBore=3.8;
		initspeed=-1.0341001;
		magazines[]={};
		magazineWell[]=
		{
			"CBA_300BLK_STANAG",
			"CBA_300BLK_STANAG_L",
			"CBA_300BLK_STANAG_XL",
			"CBA_300BLK_STANAG_2D",
			"CBA_300BLK_STANAG_2D_XL"
		};
		discretedistance[]={200,300,400,500,600};
		discretedistanceinitindex=0;
		discreteDistanceCameraPoint[]=
		{
			"eye",
			"eye_300",
			"eye_400",
			"eye_500",
			"eye_600"
		};
		cameraDir="eye_look";
		recoil="recoil_mx";
		baseWeapon="hlc_wp_SCARL_STD_300AAC";
		mass=71.722;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=71.722;
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
				class compatibleItems: compatibleItems
				{
					HLC_Panel_Side_SCAR_FN5cm_Desert=1;
					HLC_Panel_Side_SCAR_2xFN5cm_Desert=1;
					HLC_Panel_Side_SCAR_FN10cm_Desert=1;
					HLC_Panel_Side_SCAR_Ladder_S_Desert=1;
					HLC_Panel_Side_SCAR_Ladder_M_Desert=1;
					HLC_Panel_Side_SCAR_MagpulXT_Desert=1;
					HLC_Panel_Side_SCAR_XTME_Desert=1;
					HLC_Panel_Side_SCAR_2xXTME_Desert=1;
					HLC_Panel_Side_SCAR_FN5cm_Black=1;
					HLC_Panel_Side_SCAR_2xFN5cm_Black=1;
					HLC_Panel_Side_SCAR_FN10cm_Black=1;
					HLC_Panel_Side_SCAR_Ladder_S_Black=1;
					HLC_Panel_Side_SCAR_Ladder_M_Black=1;
					HLC_Panel_Side_SCAR_MagpulXT_Black=1;
					HLC_Panel_Side_SCAR_XTME_Black=1;
					HLC_Panel_Side_SCAR_2xXTME_Black=1;
					HLC_Panel_Side_SCAR_FN5cm_OD=1;
					HLC_Panel_Side_SCAR_2xFN5cm_OD=1;
					HLC_Panel_Side_SCAR_FN10cm_OD=1;
					HLC_Panel_Side_SCAR_Ladder_S_OD=1;
					HLC_Panel_Side_SCAR_Ladder_M_OD=1;
					HLC_Panel_Side_SCAR_MagpulXT_OD=1;
					HLC_Panel_Side_SCAR_XTME_OD=1;
					HLC_Panel_Side_SCAR_2xXTME_OD=1;
					HLC_Panel_Side_SCAR_FN5cm_RG=1;
					HLC_Panel_Side_SCAR_2xFN5cm_RG=1;
					HLC_Panel_Side_SCAR_FN10cm_RG=1;
					HLC_Panel_Side_SCAR_Ladder_S_RG=1;
					HLC_Panel_Side_SCAR_Ladder_M_RG=1;
					HLC_Panel_Side_SCAR_MagpulXT_RG=1;
					HLC_Panel_Side_SCAR_XTME_RG=1;
					HLC_Panel_Side_SCAR_2xXTME_RG=1;
					HLC_Panel_Side_SCAR_Ladder_S_Pride=1;
					HLC_Panel_Side_SCAR_Ladder_M_Pride=1;
					HLC_Panel_Side_SCAR_MagpulXT_Pride=1;
				};
			};
			class MuzzleSlot: asdg_MuzzleSlot_762
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
		inertia=0.329;
		dexterity=1.5394713;
		aimTransitionSpeed=1.0776299;
		class LinkedItems
		{
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="hlc_muzzle_OEMDevice";
			};
		};
		model="nia_wp_SCAR\mesh\rifle\SCARL_STD.p3d";
		picture="\nia_wp_SCAR\tex\ui\hlc_wp_SCARL_STD_300AAC_ca";
		UiPicture="\A3\weapons_f\data\UI\icon_regular_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"nia_wp_SCAR\tex\toadie_SCAR\scar_common_tan_co.paa",
			"nia_wp_SCAR\tex\toadie_SCAR\scar_lower_tan_co.paa",
			"nia_wp_SCAR\tex\toadie_SCAR\stock_tan_co.paa",
			"nia_wp_SCAR\tex\toadie_SCAR\upper_scarl_tan_co.paa"
		};
		HiddenSelectionsMaterials[]=
		{
			"nia_wp_SCAR\mat\scar_common.rvmat",
			"nia_wp_SCAR\mat\scar_lowers.rvmat",
			"nia_wp_SCAR\mat\scar_stock.rvmat",
			"nia_wp_SCAR\mat\scar_upper_scarl.rvmat"
		};
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handpose_STD.rtm"
		};
		reloadAction="NIA_GestureReload_Mk16";
		reloadMagazineSound[]=
		{
			"nia_wp_SCAR\snd\mk16_reload_short.ogg",
			0.80000001,
			1,
			25
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
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"NIA_SCAR_300AAC_NEW_Shot_SoundSet",
					"NIA_SCARL_tail_SoundSet"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"NIA_SCARL_silencerShot_SoundSet",
					"NIA_SCARL_silencerTail_SoundSet"
				};
			};
			dispersion=0.00049162103;
			reloadtime="(60/600)";
			aiRateOfFire=1;
			aiRateOfFireDistance=350;
			aiRateOfFireDispersion=2;
			minRange=20;
			minRangeProbab=0.69999999;
			midRange=150;
			midRangeProbab=0.5;
			maxRange=500;
			maxRangeProbab=0.1;
		};
		class Burst: Mode_Burst
		{
			sounds[]=
			{
				"StandardSound",
				"SilencedSound"
			};
			class BaseSoundModeType
			{
				weaponSoundEffect="DefaultRifle";
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"NIA_SCAR_300AAC_NEW_Shot_SoundSet",
					"NIA_SCARL_tail_SoundSet"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"NIA_SCARL_silencerShot_SoundSet",
					"NIA_SCARL_silencerTail_SoundSet"
				};
			};
			dispersion=0.00059634499;
			reloadtime="(60/600)";
			aiRateOfFire=1;
			aiRateOfFireDistance=100;
			aiRateOfFireDispersion=1;
			minRange=0;
			minRangeProbab=0.2;
			midRange=20;
			midRangeProbab=0.80000001;
			maxRange=40;
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
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"NIA_SCAR_300AAC_NEW_Shot_SoundSet",
					"NIA_SCARL_tail_SoundSet"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"NIA_SCARL_silencerShot_SoundSet",
					"NIA_SCARL_silencerTail_SoundSet"
				};
			};
			dispersion=0.00062543503;
			reloadtime="(60/600)";
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
		class nia_magSwitch
		{
			hlc_50rnd_300BLK_STANAG_EPR="hlc_wp_SCARL_STD_300AAC_x15";
			default="hlc_wp_SCARL_STD_300AAC";
		};
		class nia_gripSwitch
		{
			VFG="hlc_wp_SCARL_STD_300AAC_grip";
			AFG="hlc_wp_SCARL_STD_300AAC_grip2";
			VFG2="hlc_wp_SCARL_STD_300AAC_grip3";
			default="hlc_wp_SCARL_STD_300AAC";
		};
		rhs_grip1_change="hlc_wp_SCARL_STD_300AAC_grip";
		rhs_grip2_change="hlc_wp_SCARL_STD_300AAC_grip2";
		rhs_grip3_change="hlc_wp_SCARL_STD_300AAC_grip3";
	};
	class hlc_WP_SCARL_STD_300AAC_TacReload: hlc_wp_SCARL_STD_300AAC
	{
		magazineReloadSwitchPhase="(40 / 96)";
		scopeArsenal=0;
		reloadMagazineSound[]=
		{
			"\nia_wp_SCAR\snd\mk16_reload_partial.ogg",
			0.85000002,
			1,
			25
		};
		reloadAction="NIA_GestureReload_Mk16_Tactical";
		model="nia_wp_SCAR\mesh\Rifle\SCARL_STD_TacReload.p3d";
		rhs_grip1_change="hlc_WP_SCARL_STD_300AAC_grip";
		rhs_grip2_change="hlc_WP_SCARL_STD_300AAC_grip2";
		rhs_grip3_change="hlc_WP_SCARL_STD_300AAC_grip3";
		class nia_gripSwitch
		{
			VFG="hlc_WP_SCARL_STD_300AAC_grip";
			AFG="hlc_WP_SCARL_STD_300AAC_grip2";
			VFG2="hlc_WP_SCARL_STD_300AAC_grip3";
			default="hlc_WP_SCARL_STD_300AAC_TacReload";
		};
	};
	class hlc_wp_SCARL_STD_300AAC_grip: hlc_wp_SCARL_STD_300AAC
	{
		scopeArsenal=0;
		dexterity=1.6394713;
		aimTransitionSpeed=1.1476299;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handgesture_SCARL_VFG.rtm"
		};
		class nia_magSwitch
		{
			hlc_50rnd_300BLK_STANAG_EPR="hlc_wp_SCARL_STD_300AAC_x15_grip";
			default="hlc_wp_SCARL_STD_300AAC_grip";
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
			class hlc_WP_SCARL_STD_300AAC_grip
			{
				condition="(%1 == 0 )";
			};
			class hlc_WP_SCARL_STD_300AAC_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARL_STD_300AAC_grip2: hlc_wp_SCARL_STD_300AAC
	{
		scopeArsenal=0;
		inertia="(0.329*0.85)";
		dexterity=1.6394713;
		aimTransitionSpeed=1.1476299;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handgesture_SCARL_AFG.rtm"
		};
		class nia_magSwitch
		{
			hlc_50rnd_300BLK_STANAG_EPR="hlc_wp_SCARL_STD_300AAC_x15_grip2";
			default="hlc_wp_SCARL_STD_300AAC_grip2";
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
			class hlc_WP_SCARL_STD_300AAC_grip2
			{
				condition="(%1 == 0 )";
			};
			class hlc_WP_SCARL_STD_300AAC_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARL_STD_300AAC_grip3: hlc_wp_SCARL_STD_300AAC
	{
		scopeArsenal=0;
		dexterity=1.6394713;
		aimTransitionSpeed=1.1476299;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handgesture_SCARL_VFG.rtm"
		};
		class nia_magSwitch
		{
			hlc_50rnd_300BLK_STANAG_EPR="hlc_wp_SCARL_STD_300AAC_x15_grip3";
			default="hlc_wp_SCARL_STD_300AAC_grip3";
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
			class hlc_WP_SCARL_STD_300AAC_grip3
			{
				condition="(%1 == 0 )";
			};
			class hlc_WP_SCARL_STD_300AAC_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARL_STD_300AAC_x15: hlc_wp_SCARL_STD_300AAC
	{
		scopeArsenal=0;
		reloadAction="NIA_GestureReload_Mk16_X15";
		baseweapon="hlc_wp_SCARL_STD_300AAC_x15";
		reloadMagazineSound[]=
		{
			"nia_wp_SCAR\snd\mk16_reload_X15_short.ogg",
			0.80000001,
			1,
			25
		};
		class nia_gripSwitch
		{
			VFG="hlc_wp_SCARL_STD_300AAC_x15_grip";
			AFG="hlc_wp_SCARL_STD_300AAC_x15_grip2";
			VFG2="hlc_wp_SCARL_STD_300AAC_x15_grip3";
			default="hlc_wp_SCARL_STD_300AAC_x15";
		};
		rhs_grip1_change="hlc_wp_SCARL_STD_300AAC_x15_grip";
		rhs_grip2_change="hlc_wp_SCARL_STD_300AAC_x15_grip2";
		rhs_grip3_change="hlc_wp_SCARL_STD_300AAC_x15_grip3";
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
			class hlc_WP_SCARL_STD_300AAC_x15
			{
				condition="(%1 == 0 )";
			};
			class hlc_WP_SCARL_STD_300AAC_x15_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_WP_SCARL_STD_300AAC_x15_TacReload: hlc_wp_SCARL_STD_300AAC_x15
	{
		magazineReloadSwitchPhase="(40 / 96)";
		scopeArsenal=0;
		reloadMagazineSound[]=
		{
			"\nia_wp_SCAR\snd\mk16_reload_X15_partial.ogg",
			0.85000002,
			1,
			25
		};
		reloadAction="NIA_GestureReload_Mk16_X15_Tactical";
		model="nia_wp_SCAR\mesh\Rifle\SCARL_STD_TacReload.p3d";
		rhs_grip1_change="hlc_WP_SCARL_STD_300AAC_x15_grip";
		rhs_grip2_change="hlc_WP_SCARL_STD_300AAC_x15_grip2";
		rhs_grip3_change="hlc_WP_SCARL_STD_300AAC_x15_grip3";
		class nia_gripSwitch
		{
			VFG="hlc_WP_SCARL_STD_300AAC_x15_grip";
			AFG="hlc_WP_SCARL_STD_300AAC_x15_grip2";
			VFG2="hlc_WP_SCARL_STD_300AAC_x15_grip3";
			default="hlc_WP_SCARL_STD_300AAC_x15_TacReload";
		};
	};
	class hlc_wp_SCARL_STD_300AAC_x15_grip: hlc_wp_SCARL_STD_300AAC_x15
	{
		scopeArsenal=0;
		dexterity=1.6212438;
		aimTransitionSpeed=1.1348706;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handgesture_SCARL_VFG.rtm"
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
			class hlc_WP_SCARL_STD_300AAC_x15_grip
			{
				condition="(%1 == 0 )";
			};
			class hlc_WP_SCARL_STD_300AAC_x15_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARL_STD_300AAC_x15_grip2: hlc_wp_SCARL_STD_300AAC_x15
	{
		scopeArsenal=0;
		inertia="(0.3435*0.85)";
		dexterity=1.6212438;
		aimTransitionSpeed=1.1348706;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handgesture_SCARL_AFG.rtm"
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
			class hlc_WP_SCARL_STD_300AAC_x15_grip2
			{
				condition="(%1 == 0 )";
			};
			class hlc_WP_SCARL_STD_300AAC_x15_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARL_STD_300AAC_x15_grip3: hlc_wp_SCARL_STD_300AAC_x15
	{
		scopeArsenal=0;
		dexterity=1.6212438;
		aimTransitionSpeed=1.1348706;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handgesture_SCARL_VFG.rtm"
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
			class hlc_WP_SCARL_STD_300AAC_x15_grip3
			{
				condition="(%1 == 0 )";
			};
			class hlc_WP_SCARL_STD_300AAC_x15_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARL_STD_300AAC_Blk: hlc_wp_SCARL_STD_300AAC
	{
		author="Toadie";
		dlc="Niarms_SCAR";
		displayName="$STR_NIA_rifle_SCARL_STD_300AAC_blk";
		scope=2;
		recoil="recoil_mx";
		baseWeapon="hlc_wp_SCARL_STD_300AAC_Blk";
		picture="\nia_wp_SCAR\tex\ui\hlc_wp_SCARL_STD_300AAC_Blk_ca";
		hiddenSelectionsTextures[]=
		{
			"nia_wp_SCAR\tex\toadie_SCAR\scar_common_co.paa",
			"nia_wp_SCAR\tex\toadie_SCAR\scar_lower_co.paa",
			"nia_wp_SCAR\tex\toadie_SCAR\stock_co.paa",
			"nia_wp_SCAR\tex\toadie_SCAR\upper_SCARL_co.paa"
		};
		class nia_magSwitch
		{
			hlc_50rnd_300BLK_STANAG_EPR="hlc_wp_SCARL_STD_300AAC_Blk_x15";
			default="hlc_wp_SCARL_STD_300AAC_Blk";
		};
		class nia_gripSwitch
		{
			VFG="hlc_wp_SCARL_STD_300AAC_Blk_grip";
			AFG="hlc_wp_SCARL_STD_300AAC_Blk_grip2";
			VFG2="hlc_wp_SCARL_STD_300AAC_Blk_grip3";
			default="hlc_wp_SCARL_STD_300AAC_Blk";
		};
		rhs_grip1_change="hlc_wp_SCARL_STD_300AAC_Blk_grip";
		rhs_grip2_change="hlc_wp_SCARL_STD_300AAC_Blk_grip2";
		rhs_grip3_change="hlc_wp_SCARL_STD_300AAC_Blk_grip3";
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
			class hlc_WP_SCARL_STD_300AAC_Blk
			{
				condition="(%1 == 0 )";
			};
			class hlc_WP_SCARL_STD_300AAC_Blk_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_WP_SCARL_STD_300AAC_Blk_TacReload: hlc_wp_SCARL_STD_300AAC_Blk
	{
		magazineReloadSwitchPhase="(40 / 96)";
		scopeArsenal=0;
		reloadMagazineSound[]=
		{
			"\nia_wp_SCAR\snd\mk16_reload_partial.ogg",
			0.85000002,
			1,
			25
		};
		reloadAction="NIA_GestureReload_Mk16_Tactical";
		model="nia_wp_SCAR\mesh\Rifle\SCARL_STD_TacReload.p3d";
		rhs_grip1_change="hlc_WP_SCARL_STD_300AAC_Blk_grip";
		rhs_grip2_change="hlc_WP_SCARL_STD_300AAC_Blk_grip2";
		rhs_grip3_change="hlc_WP_SCARL_STD_300AAC_Blk_grip3";
		class nia_gripSwitch
		{
			VFG="hlc_WP_SCARL_STD_300AAC_Blk_grip";
			AFG="hlc_WP_SCARL_STD_300AAC_Blk_grip2";
			VFG2="hlc_WP_SCARL_STD_300AAC_Blk_grip3";
			default="hlc_WP_SCARL_STD_300AAC_Blk_TacReload";
		};
	};
	class hlc_wp_SCARL_STD_300AAC_Blk_grip: hlc_wp_SCARL_STD_300AAC_Blk
	{
		scopeArsenal=0;
		dexterity=1.6394713;
		aimTransitionSpeed=1.1476299;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handgesture_SCARL_VFG.rtm"
		};
		class nia_magSwitch
		{
			hlc_50rnd_300BLK_STANAG_EPR="hlc_wp_SCARL_STD_300AAC_Blk_x15_grip";
			default="hlc_wp_SCARL_STD_300AAC_Blk_grip";
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
			class hlc_WP_SCARL_STD_300AAC_Blk_grip
			{
				condition="(%1 == 0 )";
			};
			class hlc_WP_SCARL_STD_300AAC_Blk_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARL_STD_300AAC_Blk_grip2: hlc_wp_SCARL_STD_300AAC_Blk
	{
		scopeArsenal=0;
		inertia="(0.328*0.85)";
		dexterity=1.6394713;
		aimTransitionSpeed=1.1476299;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handgesture_SCARL_AFG.rtm"
		};
		class nia_magSwitch
		{
			hlc_50rnd_300BLK_STANAG_EPR="hlc_wp_SCARL_STD_300AAC_Blk_x15_grip2";
			default="hlc_wp_SCARL_STD_300AAC_Blk_grip2";
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
			class hlc_WP_SCARL_STD_300AAC_Blk_grip2
			{
				condition="(%1 == 0 )";
			};
			class hlc_WP_SCARL_STD_300AAC_Blk_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARL_STD_300AAC_Blk_grip3: hlc_wp_SCARL_STD_300AAC_Blk
	{
		scopeArsenal=0;
		dexterity=1.6394713;
		aimTransitionSpeed=1.1476299;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handgesture_SCARL_VFG.rtm"
		};
		class nia_magSwitch
		{
			hlc_50rnd_300BLK_STANAG_EPR="hlc_wp_SCARL_STD_300AAC_Blk_x15_grip3";
			default="hlc_wp_SCARL_STD_300AAC_Blk_grip3";
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
			class hlc_WP_SCARL_STD_300AAC_Blk_grip3
			{
				condition="(%1 == 0 )";
			};
			class hlc_WP_SCARL_STD_300AAC_Blk_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARL_STD_300AAC_Blk_x15: hlc_wp_SCARL_STD_300AAC_Blk
	{
		scopeArsenal=0;
		reloadAction="NIA_GestureReload_Mk16_X15";
		baseweapon="hlc_wp_SCARL_STD_300AAC_Blk_x15";
		reloadMagazineSound[]=
		{
			"nia_wp_SCAR\snd\mk16_reload_X15_short.ogg",
			0.80000001,
			1,
			25
		};
		class nia_gripSwitch
		{
			VFG="hlc_wp_SCARL_STD_300AAC_Blk_x15_grip";
			AFG="hlc_wp_SCARL_STD_300AAC_Blk_x15_grip2";
			VFG2="hlc_wp_SCARL_STD_300AAC_Blk_x15_grip3";
			default="hlc_wp_SCARL_STD_300AAC_Blk_x15";
		};
		rhs_grip1_change="hlc_wp_SCARL_STD_300AAC_Blk_x15_grip";
		rhs_grip2_change="hlc_wp_SCARL_STD_300AAC_Blk_x15_grip2";
		rhs_grip3_change="hlc_wp_SCARL_STD_300AAC_Blk_x15_grip3";
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
			class hlc_WP_SCARL_STD_300AAC_Blk_x15
			{
				condition="(%1 == 0 )";
			};
			class hlc_WP_SCARL_STD_300AAC_Blk_x15_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_WP_SCARL_STD_300AAC_Blk_x15_TacReload: hlc_wp_SCARL_STD_300AAC_Blk_x15
	{
		magazineReloadSwitchPhase="(40 / 96)";
		scopeArsenal=0;
		reloadMagazineSound[]=
		{
			"\nia_wp_SCAR\snd\mk16_reload_X15_partial.ogg",
			0.85000002,
			1,
			25
		};
		reloadAction="NIA_GestureReload_Mk16_X15_Tactical";
		model="nia_wp_SCAR\mesh\Rifle\SCARL_STD_TacReload.p3d";
		rhs_grip1_change="hlc_WP_SCARL_STD_300AAC_Blk_x15_grip";
		rhs_grip2_change="hlc_WP_SCARL_STD_300AAC_Blk_x15_grip2";
		rhs_grip3_change="hlc_WP_SCARL_STD_300AAC_Blk_x15_grip3";
		class nia_gripSwitch
		{
			VFG="hlc_WP_SCARL_STD_300AAC_Blk_x15_grip";
			AFG="hlc_WP_SCARL_STD_300AAC_Blk_x15_grip2";
			VFG2="hlc_WP_SCARL_STD_300AAC_Blk_x15_grip3";
			default="hlc_WP_SCARL_STD_300AAC_Blk_x15_TacReload";
		};
	};
	class hlc_wp_SCARL_STD_300AAC_Blk_x15_grip: hlc_wp_SCARL_STD_300AAC_Blk_x15
	{
		scopeArsenal=0;
		dexterity=1.6212438;
		aimTransitionSpeed=1.1348706;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handgesture_SCARL_VFG.rtm"
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
			class hlc_WP_SCARL_STD_300AAC_Blk_x15_grip
			{
				condition="(%1 == 0 )";
			};
			class hlc_WP_SCARL_STD_300AAC_Blk_x15_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARL_STD_300AAC_Blk_x15_grip2: hlc_wp_SCARL_STD_300AAC_Blk_x15
	{
		scopeArsenal=0;
		inertia="(0.3435*0.85)";
		dexterity=1.6212438;
		aimTransitionSpeed=1.1348706;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handgesture_SCARL_AFG.rtm"
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
			class hlc_WP_SCARL_STD_300AAC_Blk_x15_grip2
			{
				condition="(%1 == 0 )";
			};
			class hlc_WP_SCARL_STD_300AAC_Blk_x15_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARL_STD_300AAC_Blk_x15_grip3: hlc_wp_SCARL_STD_300AAC_Blk_x15
	{
		scopeArsenal=0;
		dexterity=1.6212438;
		aimTransitionSpeed=1.1348706;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handgesture_SCARL_VFG.rtm"
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
			class hlc_WP_SCARL_STD_300AAC_Blk_x15_grip3
			{
				condition="(%1 == 0 )";
			};
			class hlc_WP_SCARL_STD_300AAC_Blk_x15_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARL_STD_300AAC_camo: hlc_wp_SCARL_STD_300AAC
	{
		author="Toadie";
		dlc="Niarms_SCAR";
		displayName="$STR_NIA_rifle_SCARL_STD_300AAC_camo";
		scope=2;
		baseWeapon="hlc_wp_SCARL_STD_300AAC_camo";
		picture="\nia_wp_SCAR\tex\ui\hlc_wp_SCARL_STD_300AAC_camo_ca";
		hiddenSelectionsTextures[]=
		{
			"nia_wp_SCAR\tex\toadie_SCAR\scar_common_camo_co.paa",
			"nia_wp_SCAR\tex\toadie_SCAR\scar_lower_camo_co.paa",
			"nia_wp_SCAR\tex\toadie_SCAR\stock_camo_co.paa",
			"nia_wp_SCAR\tex\toadie_SCAR\upper_SCARL_camo_co.paa"
		};
		HiddenSelectionsMaterials[]=
		{
			"nia_wp_SCAR\mat\scar_common_camo.rvmat",
			"nia_wp_SCAR\mat\scar_lowers_camo.rvmat",
			"nia_wp_SCAR\mat\scar_stock_camo.rvmat",
			"nia_wp_SCAR\mat\scar_upper_SCARL_camo.rvmat"
		};
		class nia_magSwitch
		{
			hlc_50rnd_300BLK_STANAG_EPR="hlc_wp_SCARL_STD_300AAC_Camo_x15";
			default="hlc_wp_SCARL_STD_300AAC_camo";
		};
		class nia_gripSwitch
		{
			VFG="hlc_wp_SCARL_STD_300AAC_camo_grip";
			AFG="hlc_wp_SCARL_STD_300AAC_camo_grip2";
			VFG2="hlc_wp_SCARL_STD_300AAC_camo_grip3";
			default="hlc_wp_SCARL_STD_300AAC_camo";
		};
		rhs_grip1_change="hlc_wp_SCARL_STD_300AAC_camo_grip";
		rhs_grip2_change="hlc_wp_SCARL_STD_300AAC_camo_grip2";
		rhs_grip3_change="hlc_wp_SCARL_STD_300AAC_camo_grip3";
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
			class hlc_WP_SCARL_STD_300AAC_camo
			{
				condition="(%1 == 0 )";
			};
			class hlc_WP_SCARL_STD_300AAC_Camo_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_WP_SCARL_STD_300AAC_Camo_TacReload: hlc_wp_SCARL_STD_300AAC_camo
	{
		magazineReloadSwitchPhase="(40 / 96)";
		scopeArsenal=0;
		reloadMagazineSound[]=
		{
			"\nia_wp_SCAR\snd\mk16_reload_partial.ogg",
			0.85000002,
			1,
			25
		};
		reloadAction="NIA_GestureReload_Mk16_Tactical";
		model="nia_wp_SCAR\mesh\Rifle\SCARL_STD_TacReload.p3d";
		rhs_grip1_change="hlc_WP_SCARL_STD_300AAC_Camo_grip";
		rhs_grip2_change="hlc_WP_SCARL_STD_300AAC_Camo_grip2";
		rhs_grip3_change="hlc_WP_SCARL_STD_300AAC_Camo_grip3";
		class nia_gripSwitch
		{
			VFG="hlc_WP_SCARL_STD_300AAC_Camo_grip";
			AFG="hlc_WP_SCARL_STD_300AAC_Camo_grip2";
			VFG2="hlc_WP_SCARL_STD_300AAC_Camo_grip3";
			default="hlc_WP_SCARL_STD_300AAC_Camo_TacReload";
		};
	};
	class hlc_wp_SCARL_STD_300AAC_camo_grip: hlc_wp_SCARL_STD_300AAC_camo
	{
		scopeArsenal=0;
		dexterity=1.6394713;
		aimTransitionSpeed=1.1476299;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handgesture_SCARL_VFG.rtm"
		};
		class nia_magSwitch
		{
			hlc_50rnd_300BLK_STANAG_EPR="hlc_wp_SCARL_STD_300AAC_Camo_x15_grip";
			default="hlc_wp_SCARL_STD_300AAC_camo_grip";
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
			class hlc_WP_SCARL_STD_300AAC_Camo_Grip
			{
				condition="(%1 == 0 )";
			};
			class hlc_WP_SCARL_STD_300AAC_Camo_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARL_STD_300AAC_camo_grip2: hlc_wp_SCARL_STD_300AAC_camo
	{
		scopeArsenal=0;
		inertia="(0.328*0.85)";
		dexterity=1.6394713;
		aimTransitionSpeed=1.1476299;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handgesture_SCARL_AFG.rtm"
		};
		class nia_magSwitch
		{
			hlc_50rnd_300BLK_STANAG_EPR="hlc_wp_SCARL_STD_300AAC_Camo_x15_grip2";
			default="hlc_wp_SCARL_STD_300AAC_camo_grip2";
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
			class hlc_WP_SCARL_STD_300AAC_Camo_Grip2
			{
				condition="(%1 == 0 )";
			};
			class hlc_WP_SCARL_STD_300AAC_Camo_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARL_STD_300AAC_camo_grip3: hlc_wp_SCARL_STD_300AAC_camo
	{
		scopeArsenal=0;
		dexterity=1.6394713;
		aimTransitionSpeed=1.1476299;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handgesture_SCARL_VFG.rtm"
		};
		class nia_magSwitch
		{
			hlc_50rnd_300BLK_STANAG_EPR="hlc_wp_SCARL_STD_300AAC_Camo_x15_grip3";
			default="hlc_wp_SCARL_STD_300AAC_camo_grip3";
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
			class hlc_WP_SCARL_STD_300AAC_Camo_Grip3
			{
				condition="(%1 == 0 )";
			};
			class hlc_WP_SCARL_STD_300AAC_Camo_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARL_STD_300AAC_Camo_x15: hlc_wp_SCARL_STD_300AAC_camo
	{
		scopeArsenal=0;
		reloadAction="NIA_GestureReload_Mk16_X15";
		baseweapon="hlc_wp_SCARL_STD_300AAC_Camo_x15";
		reloadMagazineSound[]=
		{
			"nia_wp_SCAR\snd\mk16_reload_X15_short.ogg",
			0.80000001,
			1,
			25
		};
		class nia_gripSwitch
		{
			VFG="hlc_wp_SCARL_STD_300AAC_Camo_x15_grip";
			AFG="hlc_wp_SCARL_STD_300AAC_Camo_x15_grip2";
			VFG2="hlc_wp_SCARL_STD_300AAC_Camo_x15_grip3";
			default="hlc_wp_SCARL_STD_300AAC_Camo_x15";
		};
		rhs_grip1_change="hlc_wp_SCARL_STD_300AAC_Camo_x15_grip";
		rhs_grip2_change="hlc_wp_SCARL_STD_300AAC_Camo_x15_grip2";
		rhs_grip3_change="hlc_wp_SCARL_STD_300AAC_Camo_x15_grip3";
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
			class hlc_WP_SCARL_STD_300AAC_Camo_x15
			{
				condition="(%1 == 0 )";
			};
			class hlc_WP_SCARL_STD_300AAC_Camo_x15_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_WP_SCARL_STD_300AAC_Camo_x15_TacReload: hlc_wp_SCARL_STD_300AAC_Camo_x15
	{
		magazineReloadSwitchPhase="(40 / 96)";
		scopeArsenal=0;
		reloadMagazineSound[]=
		{
			"\nia_wp_SCAR\snd\mk16_reload_X15_partial.ogg",
			0.85000002,
			1,
			25
		};
		reloadAction="NIA_GestureReload_Mk16_X15_Tactical";
		model="nia_wp_SCAR\mesh\Rifle\SCARL_STD_TacReload.p3d";
		rhs_grip1_change="hlc_WP_SCARL_STD_300AAC_Camo_x15_grip";
		rhs_grip2_change="hlc_WP_SCARL_STD_300AAC_Camo_x15_grip2";
		rhs_grip3_change="hlc_WP_SCARL_STD_300AAC_Camo_x15_grip3";
		class nia_gripSwitch
		{
			VFG="hlc_WP_SCARL_STD_300AAC_Camo_x15_grip";
			AFG="hlc_WP_SCARL_STD_300AAC_Camo_x15_grip2";
			VFG2="hlc_WP_SCARL_STD_300AAC_Camo_x15_grip3";
			default="hlc_WP_SCARL_STD_300AAC_Camo_x15_TacReload";
		};
	};
	class hlc_wp_SCARL_STD_300AAC_Camo_x15_grip: hlc_wp_SCARL_STD_300AAC_Camo_x15
	{
		scopeArsenal=0;
		dexterity=1.6212438;
		aimTransitionSpeed=1.1348706;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handgesture_SCARL_VFG.rtm"
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
			class hlc_WP_SCARL_STD_300AAC_Camo_x15_grip
			{
				condition="(%1 == 0 )";
			};
			class hlc_WP_SCARL_STD_300AAC_Camo_x15_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARL_STD_300AAC_Camo_x15_grip2: hlc_wp_SCARL_STD_300AAC_Camo_x15
	{
		scopeArsenal=0;
		inertia="(0.3435*0.85)";
		dexterity=1.6212438;
		aimTransitionSpeed=1.1348706;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handgesture_SCARL_AFG.rtm"
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
			class hlc_WP_SCARL_STD_300AAC_Camo_x15_grip2
			{
				condition="(%1 == 0 )";
			};
			class hlc_WP_SCARL_STD_300AAC_Camo_x15_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARL_STD_300AAC_Camo_x15_grip3: hlc_wp_SCARL_STD_300AAC_Camo_x15
	{
		scopeArsenal=0;
		dexterity=1.6212438;
		aimTransitionSpeed=1.1348706;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handgesture_SCARL_VFG.rtm"
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
			class hlc_WP_SCARL_STD_300AAC_Camo_x15_grip3
			{
				condition="(%1 == 0 )";
			};
			class hlc_WP_SCARL_STD_300AAC_Camo_x15_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_WP_SCARL_CQC_300AAC: hlc_wp_SCARL_STD_300AAC
	{
		author="Toadie";
		dlc="Niarms_SCAR";
		displayName="$STR_NIA_rifle_SCARL_CQC_300AAC";
		descriptionShort="$STR_NIA_SCARL_Carbine_DESC";
		scope=2;
		ACE_barrelTwist=203.2;
		ACE_barrelLength=330;
		initspeed=-1;
		baseWeapon="hlc_WP_SCARL_CQC_300AAC";
		mass=68.452003;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=68.452003;
		};
		inertia=0.31400001;
		dexterity=1.5938872;
		aimTransitionSpeed=1.115721;
		recoil="recoil_mxc";
		picture="\nia_wp_SCAR\tex\ui\hlc_WP_SCARL_CQC_300AAC_ca";
		model="nia_wp_SCAR\mesh\rifle\SCARL_CQC.p3d";
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
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"NIA_SCAR_300AAC_NEW_Shot_SoundSet",
					"NIA_SCARL_tail_SoundSet"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"NIA_SCARL_silencerShot_SoundSet",
					"NIA_SCARL_silencerTail_SoundSet"
				};
			};
			dispersion=0.00059634499;
			reloadtime="(60/600)";
			aiRateOfFire=1;
			aiRateOfFireDistance=350;
			aiRateOfFireDispersion=2;
			minRange=20;
			minRangeProbab=0.69999999;
			midRange=150;
			midRangeProbab=0.5;
			maxRange=500;
			maxRangeProbab=0.1;
		};
		class Burst: Mode_Burst
		{
			sounds[]=
			{
				"StandardSound",
				"SilencedSound"
			};
			class BaseSoundModeType
			{
				weaponSoundEffect="DefaultRifle";
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"NIA_SCAR_300AAC_NEW_Shot_SoundSet",
					"NIA_SCARL_tail_SoundSet"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"NIA_SCARL_silencerShot_SoundSet",
					"NIA_SCARL_silencerTail_SoundSet"
				};
			};
			dispersion=0.000741795;
			reloadtime="(60/600)";
			aiRateOfFire=1;
			aiRateOfFireDistance=100;
			aiRateOfFireDispersion=1;
			minRange=0;
			minRangeProbab=0.2;
			midRange=20;
			midRangeProbab=0.80000001;
			maxRange=40;
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
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"NIA_SCAR_300AAC_NEW_Shot_SoundSet",
					"NIA_SCARL_tail_SoundSet"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"NIA_SCARL_silencerShot_SoundSet",
					"NIA_SCARL_silencerTail_SoundSet"
				};
			};
			dispersion=0.00074470398;
			reloadtime="(60/600)";
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
		class nia_magSwitch
		{
			hlc_50rnd_300BLK_STANAG_EPR="hlc_wp_SCARL_CQC_300AAC_x15";
			default="hlc_WP_SCARL_CQC_300AAC";
		};
		class nia_gripSwitch
		{
			VFG="hlc_WP_SCARL_CQC_300AAC_grip";
			AFG="hlc_WP_SCARL_CQC_300AAC_grip2";
			VFG2="hlc_WP_SCARL_CQC_300AAC_grip3";
			default="hlc_WP_SCARL_CQC_300AAC";
		};
		rhs_grip1_change="hlc_WP_SCARL_CQC_300AAC_grip";
		rhs_grip2_change="hlc_WP_SCARL_CQC_300AAC_grip2";
		rhs_grip3_change="hlc_WP_SCARL_CQC_300AAC_grip3";
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
			class hlc_WP_SCARL_CQC_300AAC
			{
				condition="(%1 == 0 )";
			};
			class hlc_WP_SCARL_CQC_300AAC_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_WP_SCARL_CQC_300AAC_TacReload: hlc_WP_SCARL_CQC_300AAC
	{
		magazineReloadSwitchPhase="(40 / 96)";
		scopeArsenal=0;
		reloadMagazineSound[]=
		{
			"\nia_wp_SCAR\snd\mk16_reload_partial.ogg",
			0.85000002,
			1,
			25
		};
		reloadAction="NIA_GestureReload_Mk16_Tactical";
		model="nia_wp_SCAR\mesh\Rifle\SCARL_CQC_TacReload.p3d";
		rhs_grip1_change="hlc_WP_SCARL_CQC_300AAC_grip";
		rhs_grip2_change="hlc_WP_SCARL_CQC_300AAC_grip2";
		rhs_grip3_change="hlc_WP_SCARL_CQC_300AAC_grip3";
		class nia_gripSwitch
		{
			VFG="hlc_WP_SCARL_CQC_300AAC_grip";
			AFG="hlc_WP_SCARL_CQC_300AAC_grip2";
			VFG2="hlc_WP_SCARL_CQC_300AAC_grip3";
			default="hlc_WP_SCARL_CQC_300AAC_TacReload";
		};
	};
	class hlc_wp_SCARL_CQC_300AAC_grip: hlc_WP_SCARL_CQC_300AAC
	{
		scopeArsenal=0;
		dexterity=1.6938872;
		aimTransitionSpeed=1.185721;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handgesture_SCARL_VFG.rtm"
		};
		class nia_magSwitch
		{
			hlc_50rnd_300BLK_STANAG_EPR="hlc_wp_SCARL_CQC_300AAC_x15_grip";
			default="hlc_wp_SCARL_CQC_300AAC_grip";
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
			class hlc_WP_SCARL_CQC_300AAC_grip
			{
				condition="(%1 == 0 )";
			};
			class hlc_WP_SCARL_CQC_300AAC_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARL_CQC_300AAC_grip2: hlc_WP_SCARL_CQC_300AAC
	{
		scopeArsenal=0;
		inertia="(0.3140*0.85)";
		dexterity=1.6938872;
		aimTransitionSpeed=1.185721;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handgesture_SCARL_AFG.rtm"
		};
		class nia_magSwitch
		{
			hlc_50rnd_300BLK_STANAG_EPR="hlc_wp_SCARL_CQC_300AAC_x15_grip2";
			default="hlc_wp_SCARL_CQC_300AAC_grip2";
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
			class hlc_WP_SCARL_CQC_300AAC_grip2
			{
				condition="(%1 == 0 )";
			};
			class hlc_WP_SCARL_CQC_300AAC_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARL_CQC_300AAC_grip3: hlc_WP_SCARL_CQC_300AAC
	{
		scopeArsenal=0;
		dexterity=1.6938872;
		aimTransitionSpeed=1.185721;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handgesture_SCARL_VFG.rtm"
		};
		class nia_magSwitch
		{
			hlc_50rnd_300BLK_STANAG_EPR="hlc_wp_SCARL_CQC_300AAC_x15_grip3";
			default="hlc_wp_SCARL_CQC_300AAC_grip3";
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
			class hlc_WP_SCARL_CQC_300AAC_grip3
			{
				condition="(%1 == 0 )";
			};
			class hlc_WP_SCARL_CQC_300AAC_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARL_CQC_300AAC_x15: hlc_WP_SCARL_CQC_300AAC
	{
		scopeArsenal=0;
		reloadAction="NIA_GestureReload_Mk16_X15";
		baseweapon="hlc_wp_SCARL_CQC_300AAC_x15";
		reloadMagazineSound[]=
		{
			"nia_wp_SCAR\snd\mk16_reload_X15_short.ogg",
			0.80000001,
			1,
			25
		};
		class nia_gripSwitch
		{
			VFG="hlc_wp_SCARL_CQC_300AAC_x15_grip";
			AFG="hlc_wp_SCARL_CQC_300AAC_x15_grip2";
			VFG2="hlc_wp_SCARL_CQC_300AAC_x15_grip3";
			default="hlc_wp_SCARL_CQC_300AAC_x15";
		};
		rhs_grip1_change="hlc_wp_SCARL_CQC_300AAC_x15_grip";
		rhs_grip2_change="hlc_wp_SCARL_CQC_300AAC_x15_grip2";
		rhs_grip3_change="hlc_wp_SCARL_CQC_300AAC_x15_grip3";
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
			class hlc_WP_SCARL_CQC_300AAC_x15
			{
				condition="(%1 == 0 )";
			};
			class hlc_WP_SCARL_CQC_300AAC_x15_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_WP_SCARL_CQC_300AAC_x15_TacReload: hlc_wp_SCARL_CQC_300AAC_x15
	{
		magazineReloadSwitchPhase="(40 / 96)";
		scopeArsenal=0;
		reloadMagazineSound[]=
		{
			"\nia_wp_SCAR\snd\mk16_reload_X15_partial.ogg",
			0.85000002,
			1,
			25
		};
		reloadAction="NIA_GestureReload_Mk16_X15_Tactical";
		model="nia_wp_SCAR\mesh\Rifle\SCARL_CQC_TacReload.p3d";
		rhs_grip1_change="hlc_WP_SCARL_CQC_300AAC_x15_grip";
		rhs_grip2_change="hlc_WP_SCARL_CQC_300AAC_x15_grip2";
		rhs_grip3_change="hlc_WP_SCARL_CQC_300AAC_x15_grip3";
		class nia_gripSwitch
		{
			VFG="hlc_WP_SCARL_CQC_300AAC_x15_grip";
			AFG="hlc_WP_SCARL_CQC_300AAC_x15_grip2";
			VFG2="hlc_WP_SCARL_CQC_300AAC_x15_grip3";
			default="hlc_WP_SCARL_CQC_300AAC_x15_TacReload";
		};
	};
	class hlc_wp_SCARL_CQC_300AAC_x15_grip: hlc_wp_SCARL_CQC_300AAC_x15
	{
		scopeArsenal=0;
		dexterity=1.6212438;
		aimTransitionSpeed=1.1348706;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handgesture_SCARL_VFG.rtm"
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
			class hlc_WP_SCARL_CQC_300AAC_x15_grip
			{
				condition="(%1 == 0 )";
			};
			class hlc_WP_SCARL_CQC_300AAC_x15_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARL_CQC_300AAC_x15_grip2: hlc_wp_SCARL_CQC_300AAC_x15
	{
		scopeArsenal=0;
		inertia="(0.3435*0.85)";
		dexterity=1.6212438;
		aimTransitionSpeed=1.1348706;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handgesture_SCARL_AFG.rtm"
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
			class hlc_WP_SCARL_CQC_300AAC_x15_grip2
			{
				condition="(%1 == 0 )";
			};
			class hlc_WP_SCARL_CQC_300AAC_x15_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARL_CQC_300AAC_x15_grip3: hlc_wp_SCARL_CQC_300AAC_x15
	{
		scopeArsenal=0;
		dexterity=1.6212438;
		aimTransitionSpeed=1.1348706;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handgesture_SCARL_VFG.rtm"
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
			class hlc_WP_SCARL_CQC_300AAC_x15_grip3
			{
				condition="(%1 == 0 )";
			};
			class hlc_WP_SCARL_CQC_300AAC_x15_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARL_CQC_300AAC_Blk: hlc_WP_SCARL_CQC_300AAC
	{
		author="Toadie";
		dlc="Niarms_SCAR";
		displayName="$STR_NIA_rifle_SCARL_CQC_300AAC_blk";
		scope=2;
		baseWeapon="hlc_wp_SCARL_CQC_300AAC_Blk";
		picture="\nia_wp_SCAR\tex\ui\hlc_wp_SCARL_CQC_300AAC_Blk_ca";
		hiddenSelectionsTextures[]=
		{
			"nia_wp_SCAR\tex\toadie_SCAR\scar_common_co.paa",
			"nia_wp_SCAR\tex\toadie_SCAR\scar_lower_co.paa",
			"nia_wp_SCAR\tex\toadie_SCAR\stock_co.paa",
			"nia_wp_SCAR\tex\toadie_SCAR\upper_SCARL_co.paa"
		};
		class nia_magSwitch
		{
			hlc_50rnd_300BLK_STANAG_EPR="hlc_wp_SCARL_CQC_300AAC_Blk_x15";
			default="hlc_wp_SCARL_CQC_300AAC_Blk";
		};
		class nia_gripSwitch
		{
			VFG="hlc_wp_SCARL_CQC_300AAC_Blk_grip";
			AFG="hlc_wp_SCARL_CQC_300AAC_Blk_grip2";
			VFG2="hlc_wp_SCARL_CQC_300AAC_Blk_grip3";
			default="hlc_wp_SCARL_CQC_300AAC_Blk";
		};
		rhs_grip1_change="hlc_wp_SCARL_CQC_300AAC_Blk_grip";
		rhs_grip2_change="hlc_wp_SCARL_CQC_300AAC_Blk_grip2";
		rhs_grip3_change="hlc_wp_SCARL_CQC_300AAC_Blk_grip3";
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
			class hlc_WP_SCARL_CQC_300AAC_Blk
			{
				condition="(%1 == 0 )";
			};
			class hlc_WP_SCARL_CQC_300AAC_Blk_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_WP_SCARL_CQC_300AAC_Blk_TacReload: hlc_wp_SCARL_CQC_300AAC_Blk
	{
		magazineReloadSwitchPhase="(40 / 96)";
		scopeArsenal=0;
		reloadMagazineSound[]=
		{
			"\nia_wp_SCAR\snd\mk16_reload_partial.ogg",
			0.85000002,
			1,
			25
		};
		reloadAction="NIA_GestureReload_Mk16_Tactical";
		model="nia_wp_SCAR\mesh\Rifle\SCARL_CQC_TacReload.p3d";
		rhs_grip1_change="hlc_WP_SCARL_CQC_300AAC_grip";
		rhs_grip2_change="hlc_WP_SCARL_CQC_300AAC_grip2";
		rhs_grip3_change="hlc_WP_SCARL_CQC_300AAC_grip3";
		class nia_gripSwitch
		{
			VFG="hlc_WP_SCARL_CQC_300AAC_grip";
			AFG="hlc_WP_SCARL_CQC_300AAC_grip2";
			VFG2="hlc_WP_SCARL_CQC_300AAC_grip3";
			default="hlc_WP_SCARL_CQC_300AAC_TacReload";
		};
	};
	class hlc_wp_SCARL_CQC_300AAC_Blk_grip: hlc_wp_SCARL_CQC_300AAC_Blk
	{
		scopeArsenal=0;
		dexterity=1.6938872;
		aimTransitionSpeed=1.185721;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handgesture_SCARL_VFG.rtm"
		};
		class nia_magSwitch
		{
			hlc_50rnd_300BLK_STANAG_EPR="hlc_wp_SCARL_CQC_300AAC_Blk_x15_grip";
			default="hlc_wp_SCARL_CQC_300AAC_Blk_grip";
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
			class hlc_WP_SCARL_CQC_300AAC_Blk_grip
			{
				condition="(%1 == 0 )";
			};
			class hlc_WP_SCARL_CQC_300AAC_Blk_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARL_CQC_300AAC_Blk_grip2: hlc_wp_SCARL_CQC_300AAC_Blk
	{
		scopeArsenal=0;
		inertia="(0.3140*0.85)";
		dexterity=1.6938872;
		aimTransitionSpeed=1.185721;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handgesture_SCARL_AFG.rtm"
		};
		class nia_magSwitch
		{
			hlc_50rnd_300BLK_STANAG_EPR="hlc_wp_SCARL_CQC_300AAC_Blk_x15_grip2";
			default="hlc_wp_SCARL_CQC_300AAC_Blk_grip2";
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
			class hlc_WP_SCARL_CQC_300AAC_Blk_grip2
			{
				condition="(%1 == 0 )";
			};
			class hlc_WP_SCARL_CQC_300AAC_Blk_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARL_CQC_300AAC_Blk_grip3: hlc_wp_SCARL_CQC_300AAC_Blk
	{
		scopeArsenal=0;
		dexterity=1.6938872;
		aimTransitionSpeed=1.185721;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handgesture_SCARL_VFG.rtm"
		};
		class nia_magSwitch
		{
			hlc_50rnd_300BLK_STANAG_EPR="hlc_wp_SCARL_CQC_300AAC_Blk_x15_grip3";
			default="hlc_wp_SCARL_CQC_300AAC_Blk_grip3";
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
			class hlc_WP_SCARL_CQC_300AAC_Blk_grip3
			{
				condition="(%1 == 0 )";
			};
			class hlc_WP_SCARL_CQC_300AAC_Blk_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARL_CQC_300AAC_Blk_x15: hlc_wp_SCARL_CQC_300AAC_Blk
	{
		scopeArsenal=0;
		reloadAction="NIA_GestureReload_Mk16_X15";
		baseweapon="hlc_wp_SCARL_CQC_300AAC_Blk_x15";
		reloadMagazineSound[]=
		{
			"nia_wp_SCAR\snd\mk16_reload_X15_short.ogg",
			0.80000001,
			1,
			25
		};
		class nia_gripSwitch
		{
			VFG="hlc_wp_SCARL_CQC_300AAC_Blk_x15_grip";
			AFG="hlc_wp_SCARL_CQC_300AAC_Blk_x15_grip2";
			VFG2="hlc_wp_SCARL_CQC_300AAC_Blk_x15_grip3";
			default="hlc_wp_SCARL_CQC_300AAC_Blk_x15";
		};
		rhs_grip1_change="hlc_wp_SCARL_CQC_300AAC_Blk_x15_grip";
		rhs_grip2_change="hlc_wp_SCARL_CQC_300AAC_Blk_x15_grip2";
		rhs_grip3_change="hlc_wp_SCARL_CQC_300AAC_Blk_x15_grip3";
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
			class hlc_WP_SCARL_CQC_300AAC_Blk_x15
			{
				condition="(%1 == 0 )";
			};
			class hlc_WP_SCARL_CQC_300AAC_Blk_x15_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_WP_SCARL_CQC_300AAC_Blk_x15_TacReload: hlc_wp_SCARL_CQC_300AAC_Blk_x15
	{
		magazineReloadSwitchPhase="(40 / 96)";
		scopeArsenal=0;
		reloadMagazineSound[]=
		{
			"\nia_wp_SCAR\snd\mk16_reload_X15_partial.ogg",
			0.85000002,
			1,
			25
		};
		reloadAction="NIA_GestureReload_Mk16_X15_Tactical";
		model="nia_wp_SCAR\mesh\Rifle\SCARL_CQC_TacReload.p3d";
		rhs_grip1_change="hlc_WP_SCARL_CQC_300AAC_Blk_x15_grip";
		rhs_grip2_change="hlc_WP_SCARL_CQC_300AAC_Blk_x15_grip2";
		rhs_grip3_change="hlc_WP_SCARL_CQC_300AAC_Blk_x15_grip3";
		class nia_gripSwitch
		{
			VFG="hlc_WP_SCARL_CQC_300AAC_Blk_x15_grip";
			AFG="hlc_WP_SCARL_CQC_300AAC_Blk_x15_grip2";
			VFG2="hlc_WP_SCARL_CQC_300AAC_Blk_x15_grip3";
			default="hlc_WP_SCARL_CQC_300AAC_Blk_x15_TacReload";
		};
	};
	class hlc_wp_SCARL_CQC_300AAC_Blk_x15_grip: hlc_wp_SCARL_CQC_300AAC_Blk_x15
	{
		scopeArsenal=0;
		dexterity=1.6212438;
		aimTransitionSpeed=1.1348706;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handgesture_SCARL_VFG.rtm"
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
			class hlc_WP_SCARL_CQC_300AAC_Blk_x15_grip
			{
				condition="(%1 == 0 )";
			};
			class hlc_WP_SCARL_CQC_300AAC_Blk_x15_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARL_CQC_300AAC_Blk_x15_grip2: hlc_wp_SCARL_CQC_300AAC_Blk_x15
	{
		scopeArsenal=0;
		inertia="(0.3435*0.85)";
		dexterity=1.6212438;
		aimTransitionSpeed=1.1348706;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handgesture_SCARL_AFG.rtm"
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
			class hlc_WP_SCARL_CQC_300AAC_Blk_x15_grip2
			{
				condition="(%1 == 0 )";
			};
			class hlc_WP_SCARL_CQC_300AAC_Blk_x15_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARL_CQC_300AAC_Blk_x15_grip3: hlc_wp_SCARL_CQC_300AAC_Blk_x15
	{
		scopeArsenal=0;
		dexterity=1.6212438;
		aimTransitionSpeed=1.1348706;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handgesture_SCARL_VFG.rtm"
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
			class hlc_WP_SCARL_CQC_300AAC_Blk_x15_grip3
			{
				condition="(%1 == 0 )";
			};
			class hlc_WP_SCARL_CQC_300AAC_Blk_x15_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARL_CQC_300AAC_camo: hlc_WP_SCARL_CQC_300AAC
	{
		author="Toadie";
		dlc="Niarms_SCAR";
		displayName="$STR_NIA_rifle_SCARL_CQC_300AAC_camo";
		scope=2;
		baseWeapon="hlc_wp_SCARL_CQC_300AAC_camo";
		picture="\nia_wp_SCAR\tex\ui\hlc_wp_SCARL_CQC_300AAC_camo_ca";
		hiddenSelectionsTextures[]=
		{
			"nia_wp_SCAR\tex\toadie_SCAR\scar_common_camo_co.paa",
			"nia_wp_SCAR\tex\toadie_SCAR\scar_lower_camo_co.paa",
			"nia_wp_SCAR\tex\toadie_SCAR\stock_camo_co.paa",
			"nia_wp_SCAR\tex\toadie_SCAR\upper_SCARL_camo_co.paa"
		};
		HiddenSelectionsMaterials[]=
		{
			"nia_wp_SCAR\mat\scar_common_camo.rvmat",
			"nia_wp_SCAR\mat\scar_lowers_camo.rvmat",
			"nia_wp_SCAR\mat\scar_stock_camo.rvmat",
			"nia_wp_SCAR\mat\scar_upper_SCARL_camo.rvmat"
		};
		class nia_magSwitch
		{
			hlc_50rnd_300BLK_STANAG_EPR="hlc_wp_SCARL_CQC_300AAC_Camo_x15";
			default="hlc_wp_SCARL_CQC_300AAC_camo";
		};
		class nia_gripSwitch
		{
			VFG="hlc_wp_SCARL_CQC_300AAC_camo_grip";
			AFG="hlc_wp_SCARL_CQC_300AAC_camo_grip2";
			VFG2="hlc_wp_SCARL_CQC_300AAC_camo_grip3";
			default="hlc_wp_SCARL_CQC_300AAC_camo";
		};
		rhs_grip1_change="hlc_wp_SCARL_CQC_300AAC_camo_grip";
		rhs_grip2_change="hlc_wp_SCARL_CQC_300AAC_camo_grip2";
		rhs_grip3_change="hlc_wp_SCARL_CQC_300AAC_camo_grip3";
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
			class hlc_WP_SCARL_CQC_300AAC_Camo
			{
				condition="(%1 == 0 )";
			};
			class hlc_WP_SCARL_CQC_300AAC_Camo_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_WP_SCARL_CQC_300AAC_Camo_TacReload: hlc_wp_SCARL_CQC_300AAC_camo
	{
		magazineReloadSwitchPhase="(40 / 96)";
		scopeArsenal=0;
		reloadMagazineSound[]=
		{
			"\nia_wp_SCAR\snd\mk16_reload_partial.ogg",
			0.85000002,
			1,
			25
		};
		reloadAction="NIA_GestureReload_Mk16_Tactical";
		model="nia_wp_SCAR\mesh\Rifle\SCARL_CQC_TacReload.p3d";
		rhs_grip1_change="hlc_WP_SCARL_CQC_300AAC_grip";
		rhs_grip2_change="hlc_WP_SCARL_CQC_300AAC_grip2";
		rhs_grip3_change="hlc_WP_SCARL_CQC_300AAC_grip3";
		class nia_gripSwitch
		{
			VFG="hlc_WP_SCARL_CQC_300AAC_grip";
			AFG="hlc_WP_SCARL_CQC_300AAC_grip2";
			VFG2="hlc_WP_SCARL_CQC_300AAC_grip3";
			default="hlc_WP_SCARL_CQC_300AAC_TacReload";
		};
	};
	class hlc_wp_SCARL_CQC_300AAC_camo_grip: hlc_wp_SCARL_CQC_300AAC_camo
	{
		scopeArsenal=0;
		dexterity=1.6938872;
		aimTransitionSpeed=1.185721;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handgesture_SCARL_VFG.rtm"
		};
		class nia_magSwitch
		{
			hlc_50rnd_300BLK_STANAG_EPR="hlc_wp_SCARL_CQC_300AAC_Camo_x15_grip";
			default="hlc_wp_SCARL_CQC_300AAC_camo_grip";
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
			class hlc_WP_SCARL_CQC_300AAC_Camo_grip
			{
				condition="(%1 == 0 )";
			};
			class hlc_WP_SCARL_CQC_300AAC_Camo_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARL_CQC_300AAC_camo_grip2: hlc_wp_SCARL_CQC_300AAC_camo
	{
		scopeArsenal=0;
		inertia="(0.3140*0.85)";
		dexterity=1.6938872;
		aimTransitionSpeed=1.185721;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handgesture_SCARL_AFG.rtm"
		};
		class nia_magSwitch
		{
			hlc_50rnd_300BLK_STANAG_EPR="hlc_wp_SCARL_CQC_300AAC_Camo_x15_grip2";
			default="hlc_wp_SCARL_CQC_300AAC_camo_grip2";
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
			class hlc_WP_SCARL_CQC_300AAC_Camo_grip2
			{
				condition="(%1 == 0 )";
			};
			class hlc_WP_SCARL_CQC_300AAC_Camo_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARL_CQC_300AAC_camo_grip3: hlc_wp_SCARL_CQC_300AAC_camo
	{
		scopeArsenal=0;
		dexterity=1.6938872;
		aimTransitionSpeed=1.185721;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handgesture_SCARL_VFG.rtm"
		};
		class nia_magSwitch
		{
			hlc_50rnd_300BLK_STANAG_EPR="hlc_wp_SCARL_CQC_300AAC_Camo_x15_grip3";
			default="hlc_wp_SCARL_CQC_300AAC_camo_grip3";
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
			class hlc_WP_SCARL_CQC_300AAC_Camo_grip3
			{
				condition="(%1 == 0 )";
			};
			class hlc_WP_SCARL_CQC_300AAC_Camo_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARL_CQC_300AAC_Camo_x15: hlc_wp_SCARL_CQC_300AAC_camo
	{
		scopeArsenal=0;
		reloadAction="NIA_GestureReload_Mk16_X15";
		baseweapon="hlc_wp_SCARL_CQC_300AAC_Camo_x15";
		reloadMagazineSound[]=
		{
			"nia_wp_SCAR\snd\mk16_reload_X15_short.ogg",
			0.80000001,
			1,
			25
		};
		class nia_gripSwitch
		{
			VFG="hlc_wp_SCARL_CQC_300AAC_Camo_x15_grip";
			AFG="hlc_wp_SCARL_CQC_300AAC_Camo_x15_grip2";
			VFG2="hlc_wp_SCARL_CQC_300AAC_Camo_x15_grip3";
			default="hlc_wp_SCARL_CQC_300AAC_Camo_x15";
		};
		rhs_grip1_change="hlc_wp_SCARL_CQC_300AAC_Camo_x15_grip";
		rhs_grip2_change="hlc_wp_SCARL_CQC_300AAC_Camo_x15_grip2";
		rhs_grip3_change="hlc_wp_SCARL_CQC_300AAC_Camo_x15_grip3";
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
			class hlc_WP_SCARL_CQC_300AAC_Camo_x15
			{
				condition="(%1 == 0 )";
			};
			class hlc_WP_SCARL_CQC_300AAC_Camo_x15_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_WP_SCARL_CQC_300AAC_Camo_x15_TacReload: hlc_wp_SCARL_CQC_300AAC_Camo_x15
	{
		magazineReloadSwitchPhase="(40 / 96)";
		scopeArsenal=0;
		reloadMagazineSound[]=
		{
			"\nia_wp_SCAR\snd\mk16_reload_X15_partial.ogg",
			0.85000002,
			1,
			25
		};
		reloadAction="NIA_GestureReload_Mk16_X15_Tactical";
		model="nia_wp_SCAR\mesh\Rifle\SCARL_CQC_TacReload.p3d";
		rhs_grip1_change="hlc_WP_SCARL_CQC_300AAC_Camo_x15_grip";
		rhs_grip2_change="hlc_WP_SCARL_CQC_300AAC_Camo_x15_grip2";
		rhs_grip3_change="hlc_WP_SCARL_CQC_300AAC_Camo_x15_grip3";
		class nia_gripSwitch
		{
			VFG="hlc_WP_SCARL_CQC_300AAC_Camo_x15_grip";
			AFG="hlc_WP_SCARL_CQC_300AAC_Camo_x15_grip2";
			VFG2="hlc_WP_SCARL_CQC_300AAC_Camo_x15_grip3";
			default="hlc_WP_SCARL_CQC_300AAC_Camo_x15_TacReload";
		};
	};
	class hlc_wp_SCARL_CQC_300AAC_Camo_x15_grip: hlc_wp_SCARL_CQC_300AAC_Camo_x15
	{
		scopeArsenal=0;
		dexterity=1.6212438;
		aimTransitionSpeed=1.1348706;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handgesture_SCARL_VFG.rtm"
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
			class hlc_WP_SCARL_CQC_300AAC_Camo_x15_grip
			{
				condition="(%1 == 0 )";
			};
			class hlc_WP_SCARL_CQC_300AAC_CAmo_x15_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARL_CQC_300AAC_Camo_x15_grip2: hlc_wp_SCARL_CQC_300AAC_Camo_x15
	{
		scopeArsenal=0;
		inertia="(0.3435*0.85)";
		dexterity=1.6212438;
		aimTransitionSpeed=1.1348706;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handgesture_SCARL_AFG.rtm"
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
			class hlc_WP_SCARL_CQC_300AAC_Camo_x15_grip2
			{
				condition="(%1 == 0 )";
			};
			class hlc_WP_SCARL_CQC_300AAC_CAmo_x15_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARL_CQC_300AAC_Camo_x15_grip3: hlc_wp_SCARL_CQC_300AAC_Camo_x15
	{
		scopeArsenal=0;
		dexterity=1.6212438;
		aimTransitionSpeed=1.1348706;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handgesture_SCARL_VFG.rtm"
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
			class hlc_WP_SCARL_CQC_300AAC_Camo_x15_grip3
			{
				condition="(%1 == 0 )";
			};
			class hlc_WP_SCARL_CQC_300AAC_CAmo_x15_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARL_STD_300AAC_SRX: hlc_wp_SCARL_STD_300AAC
	{
		author="Toadie";
		dlc="Niarms_SCAR";
		displayName="$STR_NIA_rifle_SCARL_STD_300AAC_SRX";
		scope=2;
		baseWeapon="hlc_wp_SCARL_STD_300AAC_SRX";
		initspeed=-1.0341001;
		mass=76.605194;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=76.605194;
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
				class compatibleItems: compatibleItems
				{
					HLC_Panel_Side_SCAR_Long_FN5cm_Desert=1;
					HLC_Panel_Side_SCAR_Long_2xFN5cm_Desert=1;
					HLC_Panel_Side_SCAR_Long_FN10cm_Desert=1;
					HLC_Panel_Side_SCAR_Long_FN15cm_Desert=1;
					HLC_Panel_Side_SCAR_Long_Ladder_S_Desert=1;
					HLC_Panel_Side_SCAR_Long_Ladder_M_Desert=1;
					HLC_Panel_Side_SCAR_Long_Ladder_L_Desert=1;
					HLC_Panel_Side_SCAR_Long_MagpulXT_Desert=1;
					HLC_Panel_Side_SCAR_Long_XTME_Desert=1;
					HLC_Panel_Side_SCAR_Long_2xXTME_Desert=1;
					HLC_Panel_Side_SCAR_Long_4xXTME_Desert=1;
					HLC_Panel_Side_SCAR_Long_FN5cm_Black=1;
					HLC_Panel_Side_SCAR_Long_2xFN5cm_Black=1;
					HLC_Panel_Side_SCAR_Long_FN10cm_Black=1;
					HLC_Panel_Side_SCAR_Long_FN15cm_Black=1;
					HLC_Panel_Side_SCAR_Long_Ladder_S_Black=1;
					HLC_Panel_Side_SCAR_Long_Ladder_M_Black=1;
					HLC_Panel_Side_SCAR_Long_Ladder_L_Black=1;
					HLC_Panel_Side_SCAR_Long_MagpulXT_Black=1;
					HLC_Panel_Side_SCAR_Long_XTME_Black=1;
					HLC_Panel_Side_SCAR_Long_2xXTME_Black=1;
					HLC_Panel_Side_SCAR_Long_4xXTME_Black=1;
					HLC_Panel_Side_SCAR_Long_FN5cm_OD=1;
					HLC_Panel_Side_SCAR_Long_2xFN5cm_OD=1;
					HLC_Panel_Side_SCAR_Long_FN10cm_OD=1;
					HLC_Panel_Side_SCAR_Long_FN15cm_OD=1;
					HLC_Panel_Side_SCAR_Long_Ladder_S_OD=1;
					HLC_Panel_Side_SCAR_Long_Ladder_M_OD=1;
					HLC_Panel_Side_SCAR_Long_Ladder_L_OD=1;
					HLC_Panel_Side_SCAR_Long_MagpulXT_OD=1;
					HLC_Panel_Side_SCAR_Long_XTME_OD=1;
					HLC_Panel_Side_SCAR_Long_2xXTME_OD=1;
					HLC_Panel_Side_SCAR_Long_4xXTME_OD=1;
					HLC_Panel_Side_SCAR_Long_FN5cm_RG=1;
					HLC_Panel_Side_SCAR_Long_2xFN5cm_RG=1;
					HLC_Panel_Side_SCAR_Long_FN10cm_RG=1;
					HLC_Panel_Side_SCAR_Long_FN15cm_RG=1;
					HLC_Panel_Side_SCAR_Long_Ladder_S_RG=1;
					HLC_Panel_Side_SCAR_Long_Ladder_M_RG=1;
					HLC_Panel_Side_SCAR_Long_Ladder_L_RG=1;
					HLC_Panel_Side_SCAR_Long_MagpulXT_RG=1;
					HLC_Panel_Side_SCAR_Long_XTME_RG=1;
					HLC_Panel_Side_SCAR_Long_2xXTME_RG=1;
					HLC_Panel_Side_SCAR_Long_4xXTME_RG=1;
					HLC_Panel_Side_SCAR_Long_Ladder_S_Pride=1;
					HLC_Panel_Side_SCAR_Long_Ladder_M_Pride=1;
					HLC_Panel_Side_SCAR_Long_Ladder_L_Pride=1;
					HLC_Panel_Side_SCAR_Long_MagpulXT_Pride=1;
				};
			};
			class MuzzleSlot: asdg_MuzzleSlot_762
			{
				iconPosition[]={0,0};
				iconScale=1;
				iconPicture="\A3\Weapons_F\Data\clear_empty.paa";
				iconPinPoint="Left";
			};
		};
		inertia="(0.329 + 0.024)";
		dexterity=1.4620221;
		aimTransitionSpeed=1.0234154;
		class LinkedItems
		{
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="hlc_muzzle_17SBrake";
			};
		};
		model="nia_wp_SCAR\mesh\rifle\SCARL_STD_SRX.p3d";
		picture="\nia_wp_SCAR\tex\ui\hlc_wp_SCARL_STD_300AAC_SRX_ca";
		UiPicture="\A3\weapons_f\data\UI\icon_regular_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"nia_wp_SCAR\tex\toadie_SCAR\scar_common_tan_co.paa",
			"nia_wp_SCAR\tex\toadie_SCAR\scar_lower_tan_co.paa",
			"nia_wp_SCAR\tex\toadie_SCAR\stock_tan_co.paa",
			"nia_wp_SCAR\tex\toadie_SCAR\upper_SCARL_tan_co.paa",
			"hlc_core\tex\acc\Stock\magpul_CTR_co.paa",
			"nia_wp_SCAR\tex\toadie_SCAR\acc_extensions_co.paa"
		};
		HiddenSelectionsMaterials[]=
		{
			"nia_wp_SCAR\mat\scar_common.rvmat",
			"nia_wp_SCAR\mat\scar_lowers.rvmat",
			"nia_wp_SCAR\mat\scar_stock.rvmat",
			"nia_wp_SCAR\mat\scar_upper_SCARL.rvmat",
			"hlc_core\mat\acc\stock\magpul_CTR.rvmat",
			"nia_wp_SCAR\mat\Acc_Extensions.rvmat"
		};
		class nia_magSwitch
		{
			hlc_50rnd_300BLK_STANAG_EPR="hlc_wp_SCARL_STD_300AAC_SRX_X15";
			default="hlc_wp_SCARL_STD_300AAC_SRX";
		};
		class nia_gripSwitch
		{
			VFG="hlc_wp_SCARL_STD_300AAC_SRX_grip";
			AFG="hlc_wp_SCARL_STD_300AAC_SRX_grip2";
			VFG2="hlc_wp_SCARL_STD_300AAC_SRX_grip3";
			default="hlc_wp_SCARL_STD_300AAC_SRX";
		};
		rhs_grip1_change="hlc_wp_SCARL_STD_300AAC_SRX_grip";
		rhs_grip2_change="hlc_wp_SCARL_STD_300AAC_SRX_grip2";
		rhs_grip3_change="hlc_wp_SCARL_STD_300AAC_SRX_grip3";
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
			class hlc_WP_SCARL_STD_300AAC_SRX
			{
				condition="(%1 == 0 )";
			};
			class hlc_WP_SCARL_STD_300AAC_SRX_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_WP_SCARL_STD_300AAC_SRX_TacReload: hlc_wp_SCARL_STD_300AAC_SRX
	{
		magazineReloadSwitchPhase="(40 / 96)";
		scopeArsenal=0;
		reloadMagazineSound[]=
		{
			"\nia_wp_SCAR\snd\mk16_reload_partial.ogg",
			0.85000002,
			1,
			25
		};
		reloadAction="NIA_GestureReload_Mk16_Tactical";
		model="nia_wp_SCAR\mesh\Rifle\SCARL_STD_SRX_TacReload.p3d";
		rhs_grip1_change="hlc_WP_SCARL_STD_300AAC_SRX_grip";
		rhs_grip2_change="hlc_WP_SCARL_STD_300AAC_SRX_grip2";
		rhs_grip3_change="hlc_WP_SCARL_STD_300AAC_SRX_grip3";
		class nia_gripSwitch
		{
			VFG="hlc_WP_SCARL_STD_300AAC_SRX_grip";
			AFG="hlc_WP_SCARL_STD_300AAC_SRX_grip2";
			VFG2="hlc_WP_SCARL_STD_300AAC_SRX_grip3";
			default="hlc_WP_SCARL_STD_300AAC_SRX_TacReload";
		};
	};
	class hlc_wp_SCARL_STD_300AAC_SRX_grip: hlc_wp_SCARL_STD_300AAC_SRX
	{
		scopeArsenal=0;
		dexterity=1.5620221;
		aimTransitionSpeed=1.0934155;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handgesture_SCARL_VFG.rtm"
		};
		class nia_magSwitch
		{
			hlc_50rnd_300BLK_STANAG_EPR="hlc_wp_SCARL_STD_300AAC_SRX_X15_grip";
			default="hlc_wp_SCARL_STD_300AAC_SRX_grip";
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
			class hlc_WP_SCARL_STD_300AAC_SRX_grip
			{
				condition="(%1 == 0 )";
			};
			class hlc_WP_SCARL_STD_300AAC_SRX_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARL_STD_300AAC_SRX_grip2: hlc_wp_SCARL_STD_300AAC_SRX
	{
		scopeArsenal=0;
		inertia="(0.353*0.85)";
		dexterity=1.5620221;
		aimTransitionSpeed=1.0934155;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handgesture_SCARL_AFG.rtm"
		};
		class nia_magSwitch
		{
			hlc_50rnd_556x45_EPR="hlc_50rnd_300BLK_STANAG_EPR";
			default="hlc_wp_SCARL_STD_300AAC_SRX_grip2";
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
			class hlc_WP_SCARL_STD_300AAC_SRX_grip2
			{
				condition="(%1 == 0 )";
			};
			class hlc_WP_SCARL_STD_300AAC_SRX_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARL_STD_300AAC_SRX_grip3: hlc_wp_SCARL_STD_300AAC_SRX
	{
		scopeArsenal=0;
		dexterity=1.5620221;
		aimTransitionSpeed=1.0934155;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handgesture_SCARL_VFG.rtm"
		};
		class nia_magSwitch
		{
			hlc_50rnd_300BLK_STANAG_EPR="hlc_wp_SCARL_STD_300AAC_SRX_X15_grip3";
			default="hlc_wp_SCARL_STD_300AAC_SRX_grip3";
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
			class hlc_WP_SCARL_STD_300AAC_SRX_grip3
			{
				condition="(%1 == 0 )";
			};
			class hlc_WP_SCARL_STD_300AAC_SRX_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARL_STD_300AAC_SRX_X15: hlc_wp_SCARL_STD_300AAC_SRX
	{
		scopeArsenal=0;
		reloadAction="NIA_GestureReload_Mk16_X15";
		baseweapon="hlc_wp_SCARL_STD_300AAC_SRX_X15";
		class nia_gripSwitch
		{
			VFG="hlc_wp_SCARL_STD_300AAC_SRX_X15_grip";
			AFG="hlc_wp_SCARL_STD_300AAC_SRX_X15_grip2";
			VFG2="hlc_wp_SCARL_STD_300AAC_SRX_X15_grip3";
			default="hlc_wp_SCARL_STD_300AAC_SRX_X15";
		};
		rhs_grip1_change="hlc_wp_SCARL_STD_300AAC_SRX_X15_grip";
		rhs_grip2_change="hlc_wp_SCARL_STD_300AAC_SRX_X15_grip2";
		rhs_grip3_change="hlc_wp_SCARL_STD_300AAC_SRX_X15_grip3";
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
			class hlc_WP_SCARL_STD_300AAC_SRX_X15
			{
				condition="( %1 == 0 )";
			};
			class hlc_WP_SCARL_STD_300AAC_SRX_x15_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_WP_SCARL_STD_300AAC_SRX_x15_TacReload: hlc_wp_SCARL_STD_300AAC_SRX_X15
	{
		magazineReloadSwitchPhase="(40 / 96)";
		scopeArsenal=0;
		reloadMagazineSound[]=
		{
			"\nia_wp_SCAR\snd\mk16_reload_X15_partial.ogg",
			0.85000002,
			1,
			25
		};
		reloadAction="NIA_GestureReload_Mk16_X15_Tactical";
		model="nia_wp_SCAR\mesh\Rifle\SCARL_STD_SRX_TacReload.p3d";
		rhs_grip1_change="hlc_WP_SCARL_STD_300AAC_SRX_x15_grip";
		rhs_grip2_change="hlc_WP_SCARL_STD_300AAC_SRX_x15_grip2";
		rhs_grip3_change="hlc_WP_SCARL_STD_300AAC_SRX_x15_grip3";
		class nia_gripSwitch
		{
			VFG="hlc_WP_SCARL_STD_300AAC_SRX_x15_grip";
			AFG="hlc_WP_SCARL_STD_300AAC_SRX_x15_grip2";
			VFG2="hlc_WP_SCARL_STD_300AAC_SRX_x15_grip3";
			default="hlc_WP_SCARL_STD_300AAC_SRX_x15_TacReload";
		};
	};
	class hlc_wp_SCARL_STD_300AAC_SRX_X15_grip: hlc_wp_SCARL_STD_300AAC_SRX_X15
	{
		scopeArsenal=0;
		dexterity=1.5620221;
		aimTransitionSpeed=1.0934155;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handgesture_SCARL_VFG.rtm"
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
			class hlc_WP_SCARL_STD_300AAC_SRX_x15_grip
			{
				condition="(%1 == 0 )";
			};
			class hlc_WP_SCARL_STD_300AAC_SRX_x15_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARL_STD_300AAC_SRX_X15_grip2: hlc_wp_SCARL_STD_300AAC_SRX_X15
	{
		scopeArsenal=0;
		inertia="(0.353*0.85)";
		dexterity=1.5620221;
		aimTransitionSpeed=1.0934155;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handgesture_SCARL_AFG.rtm"
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
			class hlc_WP_SCARL_STD_300AAC_SRX_x15_grip2
			{
				condition="(%1 == 0 )";
			};
			class hlc_WP_SCARL_STD_300AAC_SRX_x15_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARL_STD_300AAC_SRX_X15_grip3: hlc_wp_SCARL_STD_300AAC_SRX_X15
	{
		scopeArsenal=0;
		dexterity=1.5620221;
		aimTransitionSpeed=1.0934155;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handgesture_SCARL_VFG.rtm"
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
			class hlc_WP_SCARL_STD_300AAC_SRX_x15_grip3
			{
				condition="(%1 == 0 )";
			};
			class hlc_WP_SCARL_STD_300AAC_SRX_x15_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARL_STD_300AAC_SRX_camo: hlc_wp_SCARL_STD_300AAC_SRX
	{
		author="Toadie";
		dlc="Niarms_SCAR";
		displayName="$STR_NIA_rifle_SCARL_STD_300AAC_SRX_camo";
		scope=2;
		baseWeapon="hlc_wp_SCARL_STD_300AAC_SRX_camo";
		picture="\nia_wp_SCAR\tex\ui\hlc_wp_SCARL_STD_300AAC_SRX_camo_ca";
		hiddenSelectionsTextures[]=
		{
			"nia_wp_SCAR\tex\toadie_SCAR\scar_common_camo_co.paa",
			"nia_wp_SCAR\tex\toadie_SCAR\scar_lower_camo_co.paa",
			"nia_wp_SCAR\tex\toadie_SCAR\stock_camo_co.paa",
			"nia_wp_SCAR\tex\toadie_SCAR\upper_SCARL_camo_co.paa",
			"nia_wp_SCAR\tex\magpul_CTR_camo_co.paa",
			"nia_wp_SCAR\tex\toadie_SCAR\acc_extensions_camo_co.paa"
		};
		HiddenSelectionsMaterials[]=
		{
			"nia_wp_SCAR\mat\scar_common_camo.rvmat",
			"nia_wp_SCAR\mat\scar_lowers_camo.rvmat",
			"nia_wp_SCAR\mat\scar_stock_camo.rvmat",
			"nia_wp_SCAR\mat\scar_upper_SCARL_camo.rvmat",
			"nia_wp_SCAR\mat\magpul_CTR_camo.rvmat",
			"nia_wp_SCAR\mat\Acc_Extensions_camo.rvmat"
		};
		class nia_magSwitch
		{
			hlc_50rnd_300BLK_STANAG_EPR="hlc_wp_SCARL_STD_300AAC_SRX_X15_camo";
			default="hlc_wp_SCARL_STD_300AAC_SRX_camo";
		};
		class nia_gripSwitch
		{
			VFG="hlc_wp_SCARL_STD_300AAC_SRX_camo_grip";
			AFG="hlc_wp_SCARL_STD_300AAC_SRX_camo_grip2";
			VFG2="hlc_wp_SCARL_STD_300AAC_SRX_camo_grip3";
			default="hlc_wp_SCARL_STD_300AAC_SRX_camo";
		};
		rhs_grip1_change="hlc_wp_SCARL_STD_300AAC_SRX_camo_grip";
		rhs_grip2_change="hlc_wp_SCARL_STD_300AAC_SRX_camo_grip2";
		rhs_grip3_change="hlc_wp_SCARL_STD_300AAC_SRX_camo_grip3";
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
			class hlc_WP_SCARL_STD_300AAC_SRX_camo
			{
				condition="(%1 == 0 )";
			};
			class hlc_WP_SCARL_STD_300AAC_SRX_camo_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_WP_SCARL_STD_300AAC_SRX_camo_TacReload: hlc_wp_SCARL_STD_300AAC_SRX_camo
	{
		magazineReloadSwitchPhase="(40 / 96)";
		scopeArsenal=0;
		reloadMagazineSound[]=
		{
			"\nia_wp_SCAR\snd\mk16_reload_partial.ogg",
			0.85000002,
			1,
			25
		};
		reloadAction="NIA_GestureReload_Mk16_Tactical";
		model="nia_wp_SCAR\mesh\Rifle\SCARL_STD_SRX_TacReload.p3d";
		rhs_grip1_change="hlc_WP_SCARL_STD_300AAC_SRX_camo_grip";
		rhs_grip2_change="hlc_WP_SCARL_STD_300AAC_SRX_camo_grip2";
		rhs_grip3_change="hlc_WP_SCARL_STD_300AAC_SRX_camo_grip3";
		class nia_gripSwitch
		{
			VFG="hlc_WP_SCARL_STD_300AAC_SRX_camo_grip";
			AFG="hlc_WP_SCARL_STD_300AAC_SRX_camo_grip2";
			VFG2="hlc_WP_SCARL_STD_300AAC_SRX_camo_grip3";
			default="hlc_WP_SCARL_STD_300AAC_SRX_camo_TacReload";
		};
	};
	class hlc_wp_SCARL_STD_300AAC_SRX_camo_grip: hlc_wp_SCARL_STD_300AAC_SRX_camo
	{
		scopeArsenal=0;
		dexterity=1.5620221;
		aimTransitionSpeed=1.0934155;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handgesture_SCARL_VFG.rtm"
		};
		class nia_magSwitch
		{
			hlc_50rnd_300BLK_STANAG_EPR="hlc_wp_SCARL_STD_300AAC_SRX_X15_camo_grip";
			default="hlc_wp_SCARL_STD_300AAC_SRX_camo_grip";
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
			class hlc_WP_SCARL_STD_300AAC_SRX_camo_grip
			{
				condition="(%1 == 0 )";
			};
			class hlc_WP_SCARL_STD_300AAC_SRX_camo_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARL_STD_300AAC_SRX_camo_grip2: hlc_wp_SCARL_STD_300AAC_SRX_camo
	{
		scopeArsenal=0;
		inertia="(0.353*0.85)";
		dexterity=1.5620221;
		aimTransitionSpeed=1.0934155;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handgesture_SCARL_AFG.rtm"
		};
		class nia_magSwitch
		{
			hlc_50rnd_300BLK_STANAG_EPR="hlc_wp_SCARL_STD_300AAC_SRX_X15_camo_grip2";
			default="hlc_wp_SCARL_STD_300AAC_SRX_camo_grip2";
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
			class hlc_WP_SCARL_STD_300AAC_SRX_camo_grip2
			{
				condition="(%1 == 0 )";
			};
			class hlc_WP_SCARL_STD_300AAC_SRX_camo_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARL_STD_300AAC_SRX_camo_grip3: hlc_wp_SCARL_STD_300AAC_SRX_camo
	{
		scopeArsenal=0;
		dexterity=1.5620221;
		aimTransitionSpeed=1.0934155;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handgesture_SCARL_VFG.rtm"
		};
		class nia_magSwitch
		{
			hlc_50rnd_300BLK_STANAG_EPR="hlc_wp_SCARL_STD_300AAC_SRX_X15_camo_grip3";
			default="hlc_wp_SCARL_STD_300AAC_SRX_camo_grip3";
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
			class hlc_WP_SCARL_STD_300AAC_SRX_camo_grip3
			{
				condition="(%1 == 0 )";
			};
			class hlc_WP_SCARL_STD_300AAC_SRX_camo_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARL_STD_300AAC_SRX_X15_camo: hlc_wp_SCARL_STD_300AAC_SRX_camo
	{
		scopeArsenal=0;
		reloadAction="NIA_GestureReload_Mk16_X15";
		baseweapon="hlc_wp_SCARL_STD_300AAC_SRX_X15_camo";
		class nia_gripSwitch
		{
			VFG="hlc_wp_SCARL_STD_300AAC_SRX_X15_camo_grip";
			AFG="hlc_wp_SCARL_STD_300AAC_SRX_X15_camo_grip2";
			VFG2="hlc_wp_SCARL_STD_300AAC_SRX_X15_camo_grip3";
			default="hlc_wp_SCARL_STD_300AAC_SRX_X15_camo";
		};
		rhs_grip1_change="hlc_wp_SCARL_STD_300AAC_SRX_X15_camo_grip";
		rhs_grip2_change="hlc_wp_SCARL_STD_300AAC_SRX_X15_camo_grip2";
		rhs_grip3_change="hlc_wp_SCARL_STD_300AAC_SRX_X15_camo_grip3";
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
			class hlc_WP_SCARL_STD_300AAC_SRX_X15_camo
			{
				condition="(%1 == 0 )";
			};
			class hlc_WP_SCARL_STD_300AAC_SRX_x15_camo_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_WP_SCARL_STD_300AAC_SRX_x15_camo_TacReload: hlc_wp_SCARL_STD_300AAC_SRX_X15_camo
	{
		magazineReloadSwitchPhase="(40 / 96)";
		scopeArsenal=0;
		reloadMagazineSound[]=
		{
			"\nia_wp_SCAR\snd\mk16_reload_X15_partial.ogg",
			0.85000002,
			1,
			25
		};
		reloadAction="NIA_GestureReload_Mk16_X15_Tactical";
		model="nia_wp_SCAR\mesh\Rifle\SCARL_STD_SRX_TacReload.p3d";
		rhs_grip1_change="hlc_WP_SCARL_STD_300AAC_SRX_x15_camo_grip";
		rhs_grip2_change="hlc_WP_SCARL_STD_300AAC_SRX_x15_camo_grip2";
		rhs_grip3_change="hlc_WP_SCARL_STD_300AAC_SRX_x15_camo_grip3";
		class nia_gripSwitch
		{
			VFG="hlc_WP_SCARL_STD_300AAC_SRX_x15_camo_grip";
			AFG="hlc_WP_SCARL_STD_300AAC_SRX_x15_camo_grip2";
			VFG2="hlc_WP_SCARL_STD_300AAC_SRX_x15_camo_grip3";
			default="hlc_WP_SCARL_STD_300AAC_SRX_x15_camo_TacReload";
		};
	};
	class hlc_wp_SCARL_STD_300AAC_SRX_X15_camo_grip: hlc_wp_SCARL_STD_300AAC_SRX_X15_camo
	{
		scopeArsenal=0;
		dexterity=1.5620221;
		aimTransitionSpeed=1.0934155;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handgesture_SCARL_VFG.rtm"
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
			class hlc_WP_SCARL_STD_300AAC_SRX_X15_camo_grip
			{
				condition="(%1 == 0 )";
			};
			class hlc_WP_SCARL_STD_300AAC_SRX_x15_camo_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARL_STD_300AAC_SRX_X15_camo_grip2: hlc_wp_SCARL_STD_300AAC_SRX_X15_camo
	{
		scopeArsenal=0;
		inertia="(0.353*0.85)";
		dexterity=1.5620221;
		aimTransitionSpeed=1.0934155;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handgesture_SCARL_AFG.rtm"
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
			class hlc_WP_SCARL_STD_300AAC_SRX_X15_camo_grip2
			{
				condition="(%1 == 0 )";
			};
			class hlc_WP_SCARL_STD_300AAC_SRX_x15_camo_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARL_STD_300AAC_SRX_X15_camo_grip3: hlc_wp_SCARL_STD_300AAC_SRX_X15_camo
	{
		scopeArsenal=0;
		dexterity=1.5620221;
		aimTransitionSpeed=1.0934155;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handgesture_SCARL_VFG.rtm"
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
			class hlc_WP_SCARL_STD_300AAC_SRX_X15_camo_grip3
			{
				condition="(%1 == 0 )";
			};
			class hlc_WP_SCARL_STD_300AAC_SRX_x15_camo_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARL_STD_300AAC_SRX_muddy: hlc_wp_SCARL_STD_300AAC_SRX
	{
		author="Toadie";
		dlc="Niarms_SCAR";
		displayName="$STR_NIA_rifle_SCARL_STD_300AAC_SRX_muddygirl";
		scope=2;
		baseWeapon="hlc_wp_SCARL_STD_300AAC_SRX_muddy";
		class LinkedItems
		{
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="hlc_muzzle_AAC_762SDN6";
			};
			class LinkedItemsUnderslot
			{
				slot="GripodSlot";
				item="hlc_grip_PMVFG_Black";
			};
			class LinkedItemsCows
			{
				slot="CowsSlot";
				item="hlc_acc_TLR1_Side";
			};
			class LinkedItemsPointerSlot
			{
				slot="PointerSlot";
				item="hlc_optic_ATACR_Offset";
			};
		};
		picture="\nia_wp_SCAR\tex\ui\hlc_wp_SCARL_STD_300AAC_SRX_muddy_ca";
		hiddenSelectionsTextures[]=
		{
			"nia_wp_SCAR\tex\toadie_SCAR\SCAR_Common_Mudgirl_co.paa",
			"nia_wp_SCAR\tex\toadie_SCAR\SCAR_Lower_MuddyGirl_co.paa",
			"nia_wp_SCAR\tex\toadie_SCAR\stock_muddy_co.paa",
			"nia_wp_SCAR\tex\toadie_SCAR\Upper_SCARL_MuddyGirl_co.paa",
			"nia_wp_SCAR\tex\magpul_CTR_muddygirl_co.paa",
			"nia_wp_SCAR\tex\toadie_SCAR\Acc_Extensions_MuddyGirl_co.paa"
		};
		HiddenSelectionsMaterials[]=
		{
			"nia_wp_SCAR\mat\scar_common_camo.rvmat",
			"nia_wp_SCAR\mat\scar_lowers_camo.rvmat",
			"nia_wp_SCAR\mat\scar_stock_camo.rvmat",
			"nia_wp_SCAR\mat\scar_upper_SCARL_camo.rvmat",
			"nia_wp_SCAR\mat\magpul_CTR_camo.rvmat",
			"nia_wp_SCAR\mat\Acc_Extensions_camo.rvmat"
		};
		class nia_magSwitch
		{
			hlc_50rnd_300BLK_STANAG_EPR="hlc_wp_SCARL_STD_300AAC_SRX_X15_muddy";
			default="hlc_wp_SCARL_STD_300AAC_SRX_muddy";
		};
		class nia_gripSwitch
		{
			VFG="hlc_wp_SCARL_STD_300AAC_SRX_muddy_grip";
			AFG="hlc_wp_SCARL_STD_300AAC_SRX_muddy_grip2";
			VFG2="hlc_wp_SCARL_STD_300AAC_SRX_muddy_grip3";
			default="hlc_wp_SCARL_STD_300AAC_SRX_muddy";
		};
		rhs_grip1_change="hlc_wp_SCARL_STD_300AAC_SRX_muddy_grip";
		rhs_grip2_change="hlc_wp_SCARL_STD_300AAC_SRX_muddy_grip2";
		rhs_grip3_change="hlc_wp_SCARL_STD_300AAC_SRX_muddy_grip3";
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
			class hlc_WP_SCARL_STD_300AAC_SRX_Muddy
			{
				condition="(%1 == 0 )";
			};
			class hlc_WP_SCARL_STD_300AAC_SRX_Muddy_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_WP_SCARL_STD_300AAC_SRX_Muddy_TacReload: hlc_wp_SCARL_STD_300AAC_SRX_muddy
	{
		magazineReloadSwitchPhase="(40 / 96)";
		scopeArsenal=0;
		reloadMagazineSound[]=
		{
			"\nia_wp_SCAR\snd\mk16_reload_partial.ogg",
			0.85000002,
			1,
			25
		};
		reloadAction="NIA_GestureReload_Mk16_Tactical";
		model="nia_wp_SCAR\mesh\Rifle\SCARL_STD_SRX_TacReload.p3d";
		rhs_grip1_change="hlc_WP_SCARL_STD_300AAC_SRX_Muddy_grip";
		rhs_grip2_change="hlc_WP_SCARL_STD_300AAC_SRX_Muddy_grip2";
		rhs_grip3_change="hlc_WP_SCARL_STD_300AAC_SRX_Muddy_grip3";
		class nia_gripSwitch
		{
			VFG="hlc_WP_SCARL_STD_300AAC_SRX_Muddy_grip";
			AFG="hlc_WP_SCARL_STD_300AAC_SRX_Muddy_grip2";
			VFG2="hlc_WP_SCARL_STD_300AAC_SRX_Muddy_grip3";
			default="hlc_WP_SCARL_STD_300AAC_SRX_Muddy_TacReload";
		};
	};
	class hlc_wp_SCARL_STD_300AAC_SRX_muddy_grip: hlc_wp_SCARL_STD_300AAC_SRX_muddy
	{
		scopeArsenal=0;
		dexterity=1.5620221;
		aimTransitionSpeed=1.0934155;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handgesture_SCARL_VFG.rtm"
		};
		class nia_magSwitch
		{
			hlc_50rnd_300BLK_STANAG_EPR="hlc_wp_SCARL_STD_300AAC_SRX_X15_muddy_grip";
			default="hlc_wp_SCARL_STD_300AAC_SRX_muddy_grip";
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
			class hlc_WP_SCARL_STD_300AAC_SRX_Muddy_grip
			{
				condition="(%1 == 0 )";
			};
			class hlc_WP_SCARL_STD_300AAC_SRX_Muddy_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARL_STD_300AAC_SRX_muddy_grip2: hlc_wp_SCARL_STD_300AAC_SRX_muddy
	{
		scopeArsenal=0;
		inertia="(0.353*0.85)";
		dexterity=1.5620221;
		aimTransitionSpeed=1.0934155;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handgesture_SCARL_AFG.rtm"
		};
		class nia_magSwitch
		{
			hlc_50rnd_300BLK_STANAG_EPR="hlc_wp_SCARL_STD_300AAC_SRX_X15_muddy_grip2";
			default="hlc_wp_SCARL_STD_300AAC_SRX_muddy_grip2";
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
			class hlc_WP_SCARL_STD_300AAC_SRX_Muddy_grip2
			{
				condition="(%1 == 0 )";
			};
			class hlc_WP_SCARL_STD_300AAC_SRX_Muddy_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARL_STD_300AAC_SRX_muddy_grip3: hlc_wp_SCARL_STD_300AAC_SRX_muddy
	{
		scopeArsenal=0;
		dexterity=1.5620221;
		aimTransitionSpeed=1.0934155;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handgesture_SCARL_VFG.rtm"
		};
		class nia_magSwitch
		{
			hlc_50rnd_300BLK_STANAG_EPR="hlc_wp_SCARL_STD_300AAC_SRX_X15_muddy_grip3";
			default="hlc_wp_SCARL_STD_300AAC_SRX_muddy_grip3";
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
			class hlc_WP_SCARL_STD_300AAC_SRX_Muddy_grip3
			{
				condition="(%1 == 0 )";
			};
			class hlc_WP_SCARL_STD_300AAC_SRX_Muddy_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARL_STD_300AAC_SRX_X15_muddy: hlc_wp_SCARL_STD_300AAC_SRX_muddy
	{
		scopeArsenal=0;
		reloadAction="NIA_GestureReload_Mk16_X15";
		baseweapon="hlc_wp_SCARL_STD_300AAC_SRX_X15_muddy";
		class nia_gripSwitch
		{
			VFG="hlc_wp_SCARL_STD_300AAC_SRX_X15_muddy_grip";
			AFG="hlc_wp_SCARL_STD_300AAC_SRX_X15_muddy_grip2";
			VFG2="hlc_wp_SCARL_STD_300AAC_SRX_X15_muddy_grip3";
			default="hlc_wp_SCARL_STD_300AAC_SRX_X15_muddy";
		};
		rhs_grip1_change="hlc_wp_SCARL_STD_300AAC_SRX_X15_muddy_grip";
		rhs_grip2_change="hlc_wp_SCARL_STD_300AAC_SRX_X15_muddy_grip2";
		rhs_grip3_change="hlc_wp_SCARL_STD_300AAC_SRX_X15_muddy_grip3";
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
			class hlc_wp_SCARL_STD_300AAC_SRX_X15_muddy
			{
				condition="(%1 == 0 )";
			};
			class hlc_WP_SCARL_STD_300AAC_SRX_x15_Muddy_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_WP_SCARL_STD_300AAC_SRX_x15_Muddy_TacReload: hlc_wp_SCARL_STD_300AAC_SRX_X15_muddy
	{
		magazineReloadSwitchPhase="(40 / 96)";
		scopeArsenal=0;
		reloadMagazineSound[]=
		{
			"\nia_wp_SCAR\snd\mk16_reload_X15_partial.ogg",
			0.85000002,
			1,
			25
		};
		reloadAction="NIA_GestureReload_Mk16_X15_Tactical";
		model="nia_wp_SCAR\mesh\Rifle\SCARL_STD_SRX_TacReload.p3d";
		rhs_grip1_change="hlc_WP_SCARL_STD_300AAC_SRX_x15_Muddy_grip";
		rhs_grip2_change="hlc_WP_SCARL_STD_300AAC_SRX_x15_Muddy_grip2";
		rhs_grip3_change="hlc_WP_SCARL_STD_300AAC_SRX_x15_Muddy_grip3";
		class nia_gripSwitch
		{
			VFG="hlc_WP_SCARL_STD_300AAC_SRX_x15_Muddy_grip";
			AFG="hlc_WP_SCARL_STD_300AAC_SRX_x15_Muddy_grip2";
			VFG2="hlc_WP_SCARL_STD_300AAC_SRX_x15_Muddy_grip3";
			default="hlc_WP_SCARL_STD_300AAC_SRX_x15_Muddy_TacReload";
		};
	};
	class hlc_wp_SCARL_STD_300AAC_SRX_X15_muddy_grip: hlc_wp_SCARL_STD_300AAC_SRX_X15_muddy
	{
		scopeArsenal=0;
		dexterity=1.5620221;
		aimTransitionSpeed=1.0934155;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handgesture_SCARL_VFG.rtm"
		};
	};
	class hlc_wp_SCARL_STD_300AAC_SRX_X15_muddy_grip2: hlc_wp_SCARL_STD_300AAC_SRX_X15_muddy
	{
		scopeArsenal=0;
		inertia="(0.353*0.85)";
		dexterity=1.5620221;
		aimTransitionSpeed=1.0934155;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handgesture_SCARL_AFG.rtm"
		};
	};
	class hlc_wp_SCARL_STD_300AAC_SRX_X15_muddy_grip3: hlc_wp_SCARL_STD_300AAC_SRX_X15_muddy
	{
		scopeArsenal=0;
		dexterity=1.5620221;
		aimTransitionSpeed=1.0934155;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handgesture_SCARL_VFG.rtm"
		};
	};
	class hlc_wp_SCARL_STD_300AAC_SRX_Blk: hlc_wp_SCARL_STD_300AAC_SRX
	{
		author="Toadie";
		dlc="Niarms_SCAR";
		displayName="$STR_NIA_rifle_SCARL_STD_300AAC_SRX_blk";
		scope=2;
		baseWeapon="hlc_wp_SCARL_STD_300AAC_SRX_Blk";
		picture="\nia_wp_SCAR\tex\ui\hlc_wp_SCARL_STD_300AAC_SRX_Blk_ca";
		hiddenSelectionsTextures[]=
		{
			"nia_wp_SCAR\tex\toadie_SCAR\scar_common_co.paa",
			"nia_wp_SCAR\tex\toadie_SCAR\scar_lower_co.paa",
			"nia_wp_SCAR\tex\toadie_SCAR\stock_co.paa",
			"nia_wp_SCAR\tex\toadie_SCAR\upper_SCARL_co.paa",
			"hlc_core\tex\acc\Stock\magpul_CTR_black_co.paa",
			"nia_wp_SCAR\tex\toadie_SCAR\acc_extensions_co.paa"
		};
		class nia_magSwitch
		{
			hlc_50rnd_300BLK_STANAG_EPR="hlc_wp_SCARL_STD_300AAC_SRX_X15_Blk";
			default="hlc_wp_SCARL_STD_300AAC_SRX_Blk";
		};
		class nia_gripSwitch
		{
			VFG="hlc_wp_SCARL_STD_300AAC_SRX_Blk_grip";
			AFG="hlc_wp_SCARL_STD_300AAC_SRX_Blk_grip2";
			VFG2="hlc_wp_SCARL_STD_300AAC_SRX_Blk_grip3";
			default="hlc_wp_SCARL_STD_300AAC_SRX_Blk";
		};
		rhs_grip1_change="hlc_wp_SCARL_STD_300AAC_SRX_Blk_grip";
		rhs_grip2_change="hlc_wp_SCARL_STD_300AAC_SRX_Blk_grip2";
		rhs_grip3_change="hlc_wp_SCARL_STD_300AAC_SRX_Blk_grip3";
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
			class hlc_WP_SCARL_STD_300AAC_SRX_blk
			{
				condition="(%1 == 0 )";
			};
			class hlc_WP_SCARL_STD_300AAC_SRX_blk_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_WP_SCARL_STD_300AAC_SRX_blk_TacReload: hlc_wp_SCARL_STD_300AAC_SRX_Blk
	{
		magazineReloadSwitchPhase="(40 / 96)";
		scopeArsenal=0;
		reloadMagazineSound[]=
		{
			"\nia_wp_SCAR\snd\mk16_reload_partial.ogg",
			0.85000002,
			1,
			25
		};
		reloadAction="NIA_GestureReload_Mk16_Tactical";
		model="nia_wp_SCAR\mesh\Rifle\SCARL_STD_SRX_TacReload.p3d";
		rhs_grip1_change="hlc_WP_SCARL_STD_300AAC_SRX_blk_grip";
		rhs_grip2_change="hlc_WP_SCARL_STD_300AAC_SRX_blk_grip2";
		rhs_grip3_change="hlc_WP_SCARL_STD_300AAC_SRX_blk_grip3";
		class nia_gripSwitch
		{
			VFG="hlc_WP_SCARL_STD_300AAC_SRX_blk_grip";
			AFG="hlc_WP_SCARL_STD_300AAC_SRX_blk_grip2";
			VFG2="hlc_WP_SCARL_STD_300AAC_SRX_blk_grip3";
			default="hlc_WP_SCARL_STD_300AAC_SRX_blk_TacReload";
		};
	};
	class hlc_wp_SCARL_STD_300AAC_SRX_Blk_grip: hlc_wp_SCARL_STD_300AAC_SRX_Blk
	{
		scopeArsenal=0;
		dexterity=1.5620221;
		aimTransitionSpeed=1.0934155;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handgesture_SCARL_VFG.rtm"
		};
		class nia_magSwitch
		{
			hlc_50rnd_300BLK_STANAG_EPR="hlc_wp_SCARL_STD_300AAC_SRX_X15_Blk_grip";
			default="hlc_wp_SCARL_STD_300AAC_SRX_Blk_grip";
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
			class hlc_WP_SCARL_STD_300AAC_SRX_blk_grip
			{
				condition="(%1 == 0 )";
			};
			class hlc_WP_SCARL_STD_300AAC_SRX_blk_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARL_STD_300AAC_SRX_Blk_grip2: hlc_wp_SCARL_STD_300AAC_SRX_Blk
	{
		scopeArsenal=0;
		inertia="(0.353*0.85)";
		dexterity=1.5620221;
		aimTransitionSpeed=1.0934155;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handgesture_SCARL_AFG.rtm"
		};
		class nia_magSwitch
		{
			hlc_50rnd_300BLK_STANAG_EPR="hlc_wp_SCARL_STD_300AAC_SRX_X15_Blk_grip2";
			default="hlc_wp_SCARL_STD_300AAC_SRX_Blk_grip2";
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
			class hlc_WP_SCARL_STD_300AAC_SRX_blk_grip2
			{
				condition="(%1 == 0 )";
			};
			class hlc_WP_SCARL_STD_300AAC_SRX_blk_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARL_STD_300AAC_SRX_Blk_grip3: hlc_wp_SCARL_STD_300AAC_SRX_Blk
	{
		scopeArsenal=0;
		dexterity=1.5620221;
		aimTransitionSpeed=1.0934155;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handgesture_SCARL_VFG.rtm"
		};
		class nia_magSwitch
		{
			hlc_50rnd_300BLK_STANAG_EPR="hlc_wp_SCARL_STD_300AAC_SRX_X15_Blk_grip3";
			default="hlc_wp_SCARL_STD_300AAC_SRX_Blk_grip3";
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
			class hlc_WP_SCARL_STD_300AAC_SRX_blk_grip3
			{
				condition="(%1 == 0 )";
			};
			class hlc_WP_SCARL_STD_300AAC_SRX_blk_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARL_STD_300AAC_SRX_X15_Blk: hlc_wp_SCARL_STD_300AAC_SRX_Blk
	{
		scopeArsenal=0;
		reloadAction="NIA_GestureReload_Mk16_X15";
		baseweapon="hlc_wp_SCARL_STD_300AAC_SRX_X15_Blk";
		class nia_gripSwitch
		{
			VFG="hlc_wp_SCARL_STD_300AAC_SRX_X15_Blk_grip";
			AFG="hlc_wp_SCARL_STD_300AAC_SRX_X15_Blk_grip2";
			VFG2="hlc_wp_SCARL_STD_300AAC_SRX_X15_Blk_grip3";
			default="hlc_wp_SCARL_STD_300AAC_SRX_X15_Blk";
		};
		rhs_grip1_change="hlc_wp_SCARL_STD_300AAC_SRX_X15_Blk_grip";
		rhs_grip2_change="hlc_wp_SCARL_STD_300AAC_SRX_X15_Blk_grip2";
		rhs_grip3_change="hlc_wp_SCARL_STD_300AAC_SRX_X15_Blk_grip3";
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
			class hlc_WP_SCARL_STD_300AAC_SRX_X15_blk
			{
				condition="(%1 == 0 )";
			};
			class hlc_WP_SCARL_STD_300AAC_SRX_X15_blk_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_WP_SCARL_STD_300AAC_SRX_x15_blk_TacReload: hlc_wp_SCARL_STD_300AAC_SRX_X15_Blk
	{
		magazineReloadSwitchPhase="(40 / 96)";
		scopeArsenal=0;
		reloadMagazineSound[]=
		{
			"\nia_wp_SCAR\snd\mk16_reload_X15_partial.ogg",
			0.85000002,
			1,
			25
		};
		reloadAction="NIA_GestureReload_Mk16_X15_Tactical";
		model="nia_wp_SCAR\mesh\Rifle\SCARL_STD_SRX_TacReload.p3d";
		rhs_grip1_change="hlc_WP_SCARL_STD_300AAC_SRX_x15_blk_grip";
		rhs_grip2_change="hlc_WP_SCARL_STD_300AAC_SRX_x15_blk_grip2";
		rhs_grip3_change="hlc_WP_SCARL_STD_300AAC_SRX_x15_blk_grip3";
		class nia_gripSwitch
		{
			VFG="hlc_WP_SCARL_STD_300AAC_SRX_x15_blk_grip";
			AFG="hlc_WP_SCARL_STD_300AAC_SRX_x15_blk_grip2";
			VFG2="hlc_WP_SCARL_STD_300AAC_SRX_x15_blk_grip3";
			default="hlc_WP_SCARL_STD_300AAC_SRX_x15_blk_TacReload";
		};
	};
	class hlc_wp_SCARL_STD_300AAC_SRX_X15_Blk_grip: hlc_wp_SCARL_STD_300AAC_SRX_X15_Blk
	{
		scopeArsenal=0;
		dexterity=1.5620221;
		aimTransitionSpeed=1.0934155;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handgesture_SCARL_VFG.rtm"
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
			class hlc_WP_SCARL_STD_300AAC_SRX_X15_blk_grip
			{
				condition="(%1 == 0 )";
			};
			class hlc_WP_SCARL_STD_300AAC_SRX_X15_blk_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARL_STD_300AAC_SRX_X15_Blk_grip2: hlc_wp_SCARL_STD_300AAC_SRX_X15_Blk
	{
		scopeArsenal=0;
		inertia="(0.353*0.85)";
		dexterity=1.5620221;
		aimTransitionSpeed=1.0934155;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handgesture_SCARL_AFG.rtm"
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
			class hlc_WP_SCARL_STD_300AAC_SRX_X15_blk_grip2
			{
				condition="(%1 == 0 )";
			};
			class hlc_WP_SCARL_STD_300AAC_SRX_X15_blk_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARL_STD_300AAC_SRX_X15_Blk_grip3: hlc_wp_SCARL_STD_300AAC_SRX_X15_Blk
	{
		scopeArsenal=0;
		dexterity=1.5620221;
		aimTransitionSpeed=1.0934155;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handgesture_SCARL_VFG.rtm"
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
			class hlc_WP_SCARL_STD_300AAC_SRX_X15_blk_grip3
			{
				condition="(%1 == 0 )";
			};
			class hlc_WP_SCARL_STD_300AAC_SRX_X15_blk_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_wp_SCARL_CQC_300AAC_EGLM: hlc_WP_SCARL_CQC_300AAC
	{
		author="Toadie";
		dlc="Niarms_SCAR";
		displayName="$STR_NIA_rifle_SCARL_CQC_300AAC_EGLM";
		scope=2;
		muzzles[]=
		{
			"this",
			"hlc_GL_SCARL_EGLM"
		};
		baseWeapon="hlc_wp_SCARL_CQC_300AAC_EGLM";
		mass=101.15199;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=101.15199;
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
			class MuzzleSlot: asdg_MuzzleSlot_762
			{
				iconPosition[]={0,0};
				iconScale=1;
				iconPicture="\A3\Weapons_F\Data\clear_empty.paa";
				iconPinPoint="Left";
			};
			class UnderBarrelSlot
			{
				iconPosition[]={0,0};
				iconScale=1;
				iconPicture="\A3\Weapons_F\Data\clear_empty.paa";
				iconPinPoint="Left";
			};
			class GripodSlot
			{
				iconPosition[]={0,0};
				iconScale=1;
				iconPicture="\A3\Weapons_F\Data\clear_empty.paa";
				iconPinPoint="Left";
			};
		};
		inertia="(0.3140 + 0.15)";
		dexterity=1.2080154;
		aimTransitionSpeed=0.8456108;
		model="nia_wp_SCAR\mesh\rifle\SCARL_CQC_EGLM.p3d";
		picture="\nia_wp_SCAR\tex\ui\hlc_wp_SCARL_CQC_300AAC_EGLM_ca";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handpose_EGLM.rtm"
		};
		UiPicture="\A3\weapons_f\data\UI\icon_regular_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"nia_wp_SCAR\tex\toadie_SCAR\scar_common_tan_co.paa",
			"nia_wp_SCAR\tex\toadie_SCAR\scar_lower_tan_co.paa",
			"nia_wp_SCAR\tex\toadie_SCAR\stock_tan_co.paa",
			"nia_wp_SCAR\tex\toadie_SCAR\upper_SCARL_tan_co.paa",
			"nia_wp_SCAR\tex\toadie_SCAR\Launcher_FN-EGLM_L_tan_co.paa"
		};
		HiddenSelectionsMaterials[]=
		{
			"nia_wp_SCAR\mat\scar_common.rvmat",
			"nia_wp_SCAR\mat\scar_lowers.rvmat",
			"nia_wp_SCAR\mat\scar_stock.rvmat",
			"nia_wp_SCAR\mat\scar_upper_scarl.rvmat",
			"nia_wp_SCAR\mat\Launcher_FN-EGLM_L.rvmat"
		};
		class nia_magSwitch
		{
			default="hlc_wp_SCARL_CQC_300AAC_EGLM";
		};
		class nia_gripSwitch
		{
			VFG="hlc_wp_SCARL_CQC_300AAC_EGLM";
			AFG="hlc_wp_SCARL_CQC_300AAC_EGLM";
			VFG2="hlc_wp_SCARL_CQC_300AAC_EGLM";
			default="hlc_wp_SCARL_CQC_300AAC_EGLM";
		};
		rhs_grip1_change="hlc_wp_SCARL_CQC_300AAC_EGLM";
		rhs_grip2_change="hlc_wp_SCARL_CQC_300AAC_EGLM";
		rhs_grip3_change="hlc_wp_SCARL_CQC_300AAC_EGLM";
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
			class hlc_WP_SCARL_CQC_300AAC_EGLM
			{
				condition="(%1 == 0 )";
			};
			class hlc_WP_SCARL_CQC_300AAC_EGLM_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_WP_SCARL_CQC_300AAC_EGLM_TacReload: hlc_wp_SCARL_CQC_300AAC_EGLM
	{
		magazineReloadSwitchPhase="(40 / 96)";
		scopeArsenal=0;
		reloadMagazineSound[]=
		{
			"\nia_wp_SCAR\snd\mk16_reload_partial.ogg",
			0.85000002,
			1,
			25
		};
		reloadAction="NIA_GestureReload_Mk16_EGLM_Tactical";
		model="nia_wp_SCAR\mesh\Rifle\SCARL_CQC_EGLM_TacReload.p3d";
		rhs_grip1_change="hlc_WP_SCARL_CQC_300AAC_EGLM_TacReload";
		rhs_grip2_change="hlc_WP_SCARL_CQC_300AAC_EGLM_TacReload";
		rhs_grip3_change="hlc_WP_SCARL_CQC_300AAC_EGLM_TacReload";
		class nia_gripSwitch
		{
			VFG="hlc_WP_SCARL_CQC_300AAC_EGLM_TacReload";
			AFG="hlc_WP_SCARL_CQC_300AAC_EGLM_TacReload";
			VFG2="hlc_WP_SCARL_CQC_300AAC_EGLM_TacReload";
			default="hlc_WP_SCARL_CQC_300AAC_EGLM_TacReload";
		};
	};
	class hlc_wp_SCARL_CQC_300AAC_EGLM_Blk: hlc_wp_SCARL_CQC_300AAC_Blk
	{
		author="Toadie";
		dlc="Niarms_SCAR";
		displayName="$STR_NIA_rifle_SCARL_CQC_300AAC_EGLM_BLK";
		scope=2;
		muzzles[]=
		{
			"this",
			"hlc_GL_SCARL_EGLM"
		};
		baseWeapon="hlc_wp_SCARL_CQC_300AAC_EGLM_Blk";
		mass=101.15199;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=101.15199;
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
			class MuzzleSlot: asdg_MuzzleSlot_762
			{
				iconPosition[]={0,0};
				iconScale=1;
				iconPicture="\A3\Weapons_F\Data\clear_empty.paa";
				iconPinPoint="Left";
			};
			class UnderBarrelSlot
			{
				iconPosition[]={0,0};
				iconScale=1;
				iconPicture="\A3\Weapons_F\Data\clear_empty.paa";
				iconPinPoint="Left";
			};
			class GripodSlot
			{
				iconPosition[]={0,0};
				iconScale=1;
				iconPicture="\A3\Weapons_F\Data\clear_empty.paa";
				iconPinPoint="Left";
			};
		};
		inertia="(0.3140 + 0.15)";
		dexterity=1.2080154;
		aimTransitionSpeed=0.8456108;
		model="nia_wp_SCAR\mesh\rifle\SCARL_CQC_EGLM.p3d";
		picture="\nia_wp_SCAR\tex\ui\hlc_wp_SCARL_CQC_300AAC_EGLM_Blk_ca";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handpose_EGLM.rtm"
		};
		UiPicture="\A3\weapons_f\data\UI\icon_regular_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"nia_wp_SCAR\tex\toadie_SCAR\scar_common_co.paa",
			"nia_wp_SCAR\tex\toadie_SCAR\scar_lower_co.paa",
			"nia_wp_SCAR\tex\toadie_SCAR\stock_co.paa",
			"nia_wp_SCAR\tex\toadie_SCAR\upper_SCARL_co.paa",
			"nia_wp_SCAR\tex\toadie_SCAR\Launcher_FN-EGLM_L_co.paa"
		};
		HiddenSelectionsMaterials[]=
		{
			"nia_wp_SCAR\mat\scar_common.rvmat",
			"nia_wp_SCAR\mat\scar_lowers.rvmat",
			"nia_wp_SCAR\mat\scar_stock.rvmat",
			"nia_wp_SCAR\mat\scar_upper_scarl.rvmat",
			"nia_wp_SCAR\mat\Launcher_FN-EGLM_L.rvmat"
		};
		class nia_magSwitch
		{
			default="hlc_wp_SCARL_CQC_300AAC_EGLM_blk";
		};
		class nia_gripSwitch
		{
			VFG="hlc_wp_SCARL_CQC_300AAC_EGLM_blk";
			AFG="hlc_wp_SCARL_CQC_300AAC_EGLM_blk";
			VFG2="hlc_wp_SCARL_CQC_300AAC_EGLM_blk";
			default="hlc_wp_SCARL_CQC_300AAC_EGLM_blk";
		};
		rhs_grip1_change="hlc_wp_SCARL_CQC_300AAC_EGLM_blk";
		rhs_grip2_change="hlc_wp_SCARL_CQC_300AAC_EGLM_blk";
		rhs_grip3_change="hlc_wp_SCARL_CQC_300AAC_EGLM_blk";
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
			class hlc_WP_SCARL_CQC_300AAC_EGLM_blk
			{
				condition="(%1 == 0 )";
			};
			class hlc_WP_SCARL_CQC_300AAC_EGLM_blk_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_WP_SCARL_CQC_300AAC_EGLM_Blk_TacReload: hlc_wp_SCARL_CQC_300AAC_EGLM_Blk
	{
		magazineReloadSwitchPhase="(40 / 96)";
		scopeArsenal=0;
		reloadMagazineSound[]=
		{
			"\nia_wp_SCAR\snd\mk16_reload_partial.ogg",
			0.85000002,
			1,
			25
		};
		reloadAction="NIA_GestureReload_Mk16_EGLM_Tactical";
		model="nia_wp_SCAR\mesh\Rifle\SCARL_CQC_EGLM_TacReload.p3d";
		rhs_grip1_change="hlc_WP_SCARL_CQC_300AAC_EGLM_Blk_TacReload";
		rhs_grip2_change="hlc_WP_SCARL_CQC_300AAC_EGLM_Blk_TacReload";
		rhs_grip3_change="hlc_WP_SCARL_CQC_300AAC_EGLM_Blk_TacReload";
		class nia_gripSwitch
		{
			VFG="hlc_WP_SCARL_CQC_300AAC_EGLM_Blk_TacReload";
			AFG="hlc_WP_SCARL_CQC_300AAC_EGLM_Blk_TacReload";
			VFG2="hlc_WP_SCARL_CQC_300AAC_EGLM_Blk_TacReload";
			default="hlc_WP_SCARL_CQC_300AAC_EGLM_Blk_TacReload";
		};
	};
	class hlc_wp_SCARL_CQC_300AAC_EGLM_camo: hlc_wp_SCARL_CQC_300AAC_camo
	{
		author="Toadie";
		dlc="Niarms_SCAR";
		displayName="$STR_NIA_rifle_SCARL_CQC_300AAC_EGLM_camo";
		scope=2;
		muzzles[]=
		{
			"this",
			"hlc_GL_SCARL_EGLM"
		};
		baseWeapon="hlc_wp_SCARL_CQC_300AAC_EGLM_camo";
		mass=101.15199;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=101.15199;
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
			class MuzzleSlot: asdg_MuzzleSlot_762
			{
				iconPosition[]={0,0};
				iconScale=1;
				iconPicture="\A3\Weapons_F\Data\clear_empty.paa";
				iconPinPoint="Left";
			};
			class UnderBarrelSlot
			{
				iconPosition[]={0,0};
				iconScale=1;
				iconPicture="\A3\Weapons_F\Data\clear_empty.paa";
				iconPinPoint="Left";
			};
			class GripodSlot
			{
				iconPosition[]={0,0};
				iconScale=1;
				iconPicture="\A3\Weapons_F\Data\clear_empty.paa";
				iconPinPoint="Left";
			};
		};
		inertia="(0.3140 + 0.15)";
		dexterity=1.2080154;
		aimTransitionSpeed=0.8456108;
		model="nia_wp_SCAR\mesh\rifle\SCARL_CQC_EGLM.p3d";
		picture="\nia_wp_SCAR\tex\ui\hlc_wp_SCARL_CQC_300AAC_EGLM_camo_ca";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handpose_EGLM.rtm"
		};
		UiPicture="\A3\weapons_f\data\UI\icon_regular_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"nia_wp_SCAR\tex\toadie_SCAR\scar_common_camo_co.paa",
			"nia_wp_SCAR\tex\toadie_SCAR\scar_lower_camo_co.paa",
			"nia_wp_SCAR\tex\toadie_SCAR\stock_camo_co.paa",
			"nia_wp_SCAR\tex\toadie_SCAR\upper_SCARL_camo_co.paa",
			"nia_wp_SCAR\tex\toadie_SCAR\Launcher_FN-EGLM_L_camo_co.paa"
		};
		HiddenSelectionsMaterials[]=
		{
			"nia_wp_SCAR\mat\scar_common_camo.rvmat",
			"nia_wp_SCAR\mat\scar_lowers_camo.rvmat",
			"nia_wp_SCAR\mat\scar_stock_camo.rvmat",
			"nia_wp_SCAR\mat\scar_upper_scarl_camo.rvmat",
			"nia_wp_SCAR\mat\Launcher_FN-EGLM_L_camo.rvmat"
		};
		class nia_magSwitch
		{
			default="hlc_wp_SCARL_CQC_300AAC_EGLM_camo";
		};
		class nia_gripSwitch
		{
			VFG="hlc_wp_SCARL_CQC_300AAC_EGLM_camo";
			AFG="hlc_wp_SCARL_CQC_300AAC_EGLM_camo";
			VFG2="hlc_wp_SCARL_CQC_300AAC_EGLM_camo";
			default="hlc_wp_SCARL_CQC_300AAC_EGLM_camo";
		};
		rhs_grip1_change="hlc_wp_SCARL_CQC_300AAC_EGLM_camo";
		rhs_grip2_change="hlc_wp_SCARL_CQC_300AAC_EGLM_camo";
		rhs_grip3_change="hlc_wp_SCARL_CQC_300AAC_EGLM_camo";
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
			class hlc_WP_SCARL_CQC_300AAC_EGLM_camo
			{
				condition="(%1 == 0 )";
			};
			class hlc_WP_SCARL_CQC_300AAC_EGLM_camo_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_WP_SCARL_CQC_300AAC_EGLM_camo_TacReload: hlc_wp_SCARL_CQC_300AAC_EGLM_camo
	{
		magazineReloadSwitchPhase="(40 / 96)";
		scopeArsenal=0;
		reloadMagazineSound[]=
		{
			"\nia_wp_SCAR\snd\mk16_reload_partial.ogg",
			0.85000002,
			1,
			25
		};
		reloadAction="NIA_GestureReload_Mk16_EGLM_Tactical";
		model="nia_wp_SCAR\mesh\Rifle\SCARL_CQC_EGLM_TacReload.p3d";
		rhs_grip1_change="hlc_WP_SCARL_CQC_300AAC_EGLM_camo_TacReload";
		rhs_grip2_change="hlc_WP_SCARL_CQC_300AAC_EGLM_camo_TacReload";
		rhs_grip3_change="hlc_WP_SCARL_CQC_300AAC_EGLM_camo_TacReload";
		class nia_gripSwitch
		{
			VFG="hlc_WP_SCARL_CQC_300AAC_EGLM_camo_TacReload";
			AFG="hlc_WP_SCARL_CQC_300AAC_EGLM_camo_TacReload";
			VFG2="hlc_WP_SCARL_CQC_300AAC_EGLM_camo_TacReload";
			default="hlc_WP_SCARL_CQC_300AAC_EGLM_camo_TacReload";
		};
	};
	class hlc_wp_SCARL_STD_300AAC_EGLM: hlc_wp_SCARL_STD_300AAC
	{
		author="Toadie";
		dlc="Niarms_SCAR";
		displayName="$STR_NIA_rifle_SCARL_STD_300AAC_EGLM";
		scope=2;
		muzzles[]=
		{
			"this",
			"hlc_GL_SCARL_EGLM"
		};
		baseWeapon="hlc_wp_SCARL_STD_300AAC_EGLM";
		mass=104.422;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=104.422;
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
			class MuzzleSlot: asdg_MuzzleSlot_762
			{
				iconPosition[]={0,0};
				iconScale=1;
				iconPicture="\A3\Weapons_F\Data\clear_empty.paa";
				iconPinPoint="Left";
			};
			class UnderBarrelSlot
			{
				iconPosition[]={0,0};
				iconScale=1;
				iconPicture="\A3\Weapons_F\Data\clear_empty.paa";
				iconPinPoint="Left";
			};
			class GripodSlot
			{
				iconPosition[]={0,0};
				iconScale=1;
				iconPicture="\A3\Weapons_F\Data\clear_empty.paa";
				iconPinPoint="Left";
			};
		};
		inertia="(0.329 + 0.15)";
		dexterity=1.1827176;
		aimTransitionSpeed=0.82790226;
		model="nia_wp_SCAR\mesh\rifle\SCARL_STD_EGLM.p3d";
		picture="\nia_wp_SCAR\tex\ui\hlc_wp_SCARL_STD_300AAC_EGLM_ca";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handpose_EGLM.rtm"
		};
		UiPicture="\A3\weapons_f\data\UI\icon_regular_CA.paa";
		reloadAction="NIA_GestureReload_Mk16_EGLM";
		hiddenSelectionsTextures[]=
		{
			"nia_wp_SCAR\tex\toadie_SCAR\scar_common_tan_co.paa",
			"nia_wp_SCAR\tex\toadie_SCAR\scar_lower_tan_co.paa",
			"nia_wp_SCAR\tex\toadie_SCAR\stock_tan_co.paa",
			"nia_wp_SCAR\tex\toadie_SCAR\upper_SCARL_tan_co.paa",
			"nia_wp_SCAR\tex\toadie_SCAR\Launcher_FN-EGLM_L_tan_co.paa"
		};
		HiddenSelectionsMaterials[]=
		{
			"nia_wp_SCAR\mat\scar_common.rvmat",
			"nia_wp_SCAR\mat\scar_lowers.rvmat",
			"nia_wp_SCAR\mat\scar_stock.rvmat",
			"nia_wp_SCAR\mat\scar_upper_scarl.rvmat",
			"nia_wp_SCAR\mat\Launcher_FN-EGLM_L.rvmat"
		};
		class nia_magSwitch
		{
			default="hlc_wp_SCARL_STD_300AAC_EGLM";
		};
		class nia_gripSwitch
		{
			VFG="hlc_wp_SCARL_STD_300AAC_EGLM";
			AFG="hlc_wp_SCARL_STD_300AAC_EGLM";
			VFG2="hlc_wp_SCARL_STD_300AAC_EGLM";
			default="hlc_wp_SCARL_STD_300AAC_EGLM";
		};
		rhs_grip1_change="hlc_wp_SCARL_STD_300AAC_EGLM";
		rhs_grip2_change="hlc_wp_SCARL_STD_300AAC_EGLM";
		rhs_grip3_change="hlc_wp_SCARL_STD_300AAC_EGLM";
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
			class hlc_WP_SCARL_STD_300AAC_EGLM
			{
				condition="(%1 == 0 )";
			};
			class hlc_WP_SCARL_STD_300AAC_EGLM_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_WP_SCARL_STD_300AAC_EGLM_TacReload: hlc_wp_SCARL_STD_300AAC_EGLM
	{
		magazineReloadSwitchPhase="(40 / 96)";
		scopeArsenal=0;
		reloadMagazineSound[]=
		{
			"\nia_wp_SCAR\snd\mk16_reload_partial.ogg",
			0.85000002,
			1,
			25
		};
		reloadAction="NIA_GestureReload_Mk16_EGLM_Tactical";
		model="nia_wp_SCAR\mesh\Rifle\SCARL_STD_EGLM_TacReload.p3d";
		rhs_grip1_change="hlc_WP_SCARL_STD_300AAC_EGLM_TacReload";
		rhs_grip2_change="hlc_WP_SCARL_STD_300AAC_EGLM_TacReload";
		rhs_grip3_change="hlc_WP_SCARL_STD_300AAC_EGLM_TacReload";
		class nia_gripSwitch
		{
			VFG="hlc_WP_SCARL_STD_300AAC_EGLM_TacReload";
			AFG="hlc_WP_SCARL_STD_300AAC_EGLM_TacReload";
			VFG2="hlc_WP_SCARL_STD_300AAC_EGLM_TacReload";
			default="hlc_WP_SCARL_STD_300AAC_EGLM_TacReload";
		};
	};
	class hlc_wp_SCARL_STD_300AAC_EGLM_Blk: hlc_wp_SCARL_STD_300AAC_Blk
	{
		author="Toadie";
		dlc="Niarms_SCAR";
		displayName="$STR_NIA_rifle_SCARL_STD_300AAC_EGLM_BLK";
		scope=2;
		muzzles[]=
		{
			"this",
			"hlc_GL_SCARL_EGLM"
		};
		baseWeapon="hlc_wp_SCARL_STD_300AAC_EGLM_Blk";
		mass=104.422;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=104.422;
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
			class MuzzleSlot: asdg_MuzzleSlot_762
			{
				iconPosition[]={0,0};
				iconScale=1;
				iconPicture="\A3\Weapons_F\Data\clear_empty.paa";
				iconPinPoint="Left";
			};
			class UnderBarrelSlot
			{
				iconPosition[]={0,0};
				iconScale=1;
				iconPicture="\A3\Weapons_F\Data\clear_empty.paa";
				iconPinPoint="Left";
			};
			class GripodSlot
			{
				iconPosition[]={0,0};
				iconScale=1;
				iconPicture="\A3\Weapons_F\Data\clear_empty.paa";
				iconPinPoint="Left";
			};
		};
		inertia="(0.329 + 0.15)";
		dexterity=1.1827176;
		aimTransitionSpeed=0.82790226;
		model="nia_wp_SCAR\mesh\rifle\SCARL_STD_EGLM.p3d";
		picture="\nia_wp_SCAR\tex\ui\hlc_wp_SCARL_STD_300AAC_EGLM_Blk_ca";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handpose_EGLM.rtm"
		};
		UiPicture="\A3\weapons_f\data\UI\icon_regular_CA.paa";
		reloadAction="NIA_GestureReload_Mk16_EGLM";
		hiddenSelectionsTextures[]=
		{
			"nia_wp_SCAR\tex\toadie_SCAR\scar_common_co.paa",
			"nia_wp_SCAR\tex\toadie_SCAR\scar_lower_co.paa",
			"nia_wp_SCAR\tex\toadie_SCAR\stock_co.paa",
			"nia_wp_SCAR\tex\toadie_SCAR\upper_SCARL_co.paa",
			"nia_wp_SCAR\tex\toadie_SCAR\Launcher_FN-EGLM_L_co.paa"
		};
		HiddenSelectionsMaterials[]=
		{
			"nia_wp_SCAR\mat\scar_common.rvmat",
			"nia_wp_SCAR\mat\scar_lowers.rvmat",
			"nia_wp_SCAR\mat\scar_stock.rvmat",
			"nia_wp_SCAR\mat\scar_upper_scarl.rvmat",
			"nia_wp_SCAR\mat\Launcher_FN-EGLM_L.rvmat"
		};
		class nia_magSwitch
		{
			default="hlc_wp_SCARL_STD_300AAC_EGLM_Blk";
		};
		class nia_gripSwitch
		{
			VFG="hlc_wp_SCARL_STD_300AAC_EGLM_blk";
			AFG="hlc_wp_SCARL_STD_300AAC_EGLM_blk";
			VFG2="hlc_wp_SCARL_STD_300AAC_EGLM_blk";
			default="hlc_wp_SCARL_STD_300AAC_EGLM_blk";
		};
		rhs_grip1_change="hlc_wp_SCARL_STD_300AAC_EGLM_blk";
		rhs_grip2_change="hlc_wp_SCARL_STD_300AAC_EGLM_blk";
		rhs_grip3_change="hlc_wp_SCARL_STD_300AAC_EGLM_blk";
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
			class hlc_WP_SCARL_STD_300AAC_EGLM_Blk
			{
				condition="(%1 == 0 )";
			};
			class hlc_WP_SCARL_STD_300AAC_EGLM_Blk_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_WP_SCARL_STD_300AAC_EGLM_Blk_TacReload: hlc_wp_SCARL_STD_300AAC_EGLM_Blk
	{
		magazineReloadSwitchPhase="(40 / 96)";
		scopeArsenal=0;
		reloadMagazineSound[]=
		{
			"\nia_wp_SCAR\snd\mk16_reload_partial.ogg",
			0.85000002,
			1,
			25
		};
		reloadAction="NIA_GestureReload_Mk16_EGLM_Tactical";
		model="nia_wp_SCAR\mesh\Rifle\SCARL_STD_EGLM_TacReload.p3d";
		rhs_grip1_change="hlc_WP_SCARL_STD_300AAC_EGLM_Blk_TacReload";
		rhs_grip2_change="hlc_WP_SCARL_STD_300AAC_EGLM_Blk_TacReload";
		rhs_grip3_change="hlc_WP_SCARL_STD_300AAC_EGLM_Blk_TacReload";
		class nia_gripSwitch
		{
			VFG="hlc_WP_SCARL_STD_300AAC_EGLM_Blk_TacReload";
			AFG="hlc_WP_SCARL_STD_300AAC_EGLM_Blk_TacReload";
			VFG2="hlc_WP_SCARL_STD_300AAC_EGLM_Blk_TacReload";
			default="hlc_WP_SCARL_STD_300AAC_EGLM_Blk_TacReload";
		};
	};
	class hlc_wp_SCARL_STD_300AAC_EGLM_camo: hlc_wp_SCARL_STD_300AAC_camo
	{
		author="Toadie";
		dlc="Niarms_SCAR";
		displayName="$STR_NIA_rifle_SCARL_STD_300AAC_EGLM_camo";
		scope=2;
		muzzles[]=
		{
			"this",
			"hlc_GL_SCARL_EGLM"
		};
		baseWeapon="hlc_wp_SCARL_STD_300AAC_EGLM_camo";
		mass=104.422;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=104.422;
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
			class MuzzleSlot: asdg_MuzzleSlot_762
			{
				iconPosition[]={0,0};
				iconScale=1;
				iconPicture="\A3\Weapons_F\Data\clear_empty.paa";
				iconPinPoint="Left";
			};
			class UnderBarrelSlot
			{
				iconPosition[]={0,0};
				iconScale=1;
				iconPicture="\A3\Weapons_F\Data\clear_empty.paa";
				iconPinPoint="Left";
			};
			class GripodSlot
			{
				iconPosition[]={0,0};
				iconScale=1;
				iconPicture="\A3\Weapons_F\Data\clear_empty.paa";
				iconPinPoint="Left";
			};
		};
		inertia="(0.329 + 0.15)";
		dexterity=1.1827176;
		aimTransitionSpeed=0.82790226;
		model="nia_wp_SCAR\mesh\rifle\SCARL_STD_EGLM.p3d";
		picture="\nia_wp_SCAR\tex\ui\hlc_wp_SCARL_STD_300AAC_EGLM_camo_ca";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_SCAR\anim\handpose_EGLM.rtm"
		};
		UiPicture="\A3\weapons_f\data\UI\icon_regular_CA.paa";
		reloadAction="NIA_GestureReload_Mk16_EGLM";
		hiddenSelectionsTextures[]=
		{
			"nia_wp_SCAR\tex\toadie_SCAR\scar_common_camo_co.paa",
			"nia_wp_SCAR\tex\toadie_SCAR\scar_lower_camo_co.paa",
			"nia_wp_SCAR\tex\toadie_SCAR\stock_camo_co.paa",
			"nia_wp_SCAR\tex\toadie_SCAR\upper_SCARL_camo_co.paa",
			"nia_wp_SCAR\tex\toadie_SCAR\Launcher_FN-EGLM_L_camo_co.paa"
		};
		HiddenSelectionsMaterials[]=
		{
			"nia_wp_SCAR\mat\scar_common_camo.rvmat",
			"nia_wp_SCAR\mat\scar_lowers_camo.rvmat",
			"nia_wp_SCAR\mat\scar_stock_camo.rvmat",
			"nia_wp_SCAR\mat\scar_upper_scarl_camo.rvmat",
			"nia_wp_SCAR\mat\Launcher_FN-EGLM_L_camo.rvmat"
		};
		class nia_magSwitch
		{
			default="hlc_wp_SCARL_STD_300AAC_EGLM_camo";
		};
		class nia_gripSwitch
		{
			VFG="hlc_wp_SCARL_STD_300AAC_EGLM_camo";
			AFG="hlc_wp_SCARL_STD_300AAC_EGLM_camo";
			VFG2="hlc_wp_SCARL_STD_300AAC_EGLM_camo";
			default="hlc_wp_SCARL_STD_300AAC_EGLM_camo";
		};
		rhs_grip1_change="hlc_wp_SCARL_STD_300AAC_EGLM_camo";
		rhs_grip2_change="hlc_wp_SCARL_STD_300AAC_EGLM_camo";
		rhs_grip3_change="hlc_wp_SCARL_STD_300AAC_EGLM_camo";
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
			class hlc_WP_SCARL_STD_300AAC_EGLM_camo
			{
				condition="(%1 == 0 )";
			};
			class hlc_WP_SCARL_STD_300AAC_EGLM_camo_TacReload
			{
				condition="( %1 >= 1 )";
			};
		};
	};
	class hlc_WP_SCARL_STD_300AAC_EGLM_camo_TacReload: hlc_wp_SCARL_STD_300AAC_EGLM_camo
	{
		magazineReloadSwitchPhase="(40 / 96)";
		scopeArsenal=0;
		reloadMagazineSound[]=
		{
			"\nia_wp_SCAR\snd\mk16_reload_partial.ogg",
			0.85000002,
			1,
			25
		};
		reloadAction="NIA_GestureReload_Mk16_EGLM_Tactical";
		model="nia_wp_SCAR\mesh\Rifle\SCARL_STD_EGLM_TacReload.p3d";
		rhs_grip1_change="hlc_WP_SCARL_STD_300AAC_EGLM_camo_TacReload";
		rhs_grip2_change="hlc_WP_SCARL_STD_300AAC_EGLM_camo_TacReload";
		rhs_grip3_change="hlc_WP_SCARL_STD_300AAC_EGLM_camo_TacReload";
		class nia_gripSwitch
		{
			VFG="hlc_WP_SCARL_STD_300AAC_EGLM_camo_TacReload";
			AFG="hlc_WP_SCARL_STD_300AAC_EGLM_camo_TacReload";
			VFG2="hlc_WP_SCARL_STD_300AAC_EGLM_camo_TacReload";
			default="hlc_WP_SCARL_STD_300AAC_EGLM_camo_TacReload";
		};
	};
};
