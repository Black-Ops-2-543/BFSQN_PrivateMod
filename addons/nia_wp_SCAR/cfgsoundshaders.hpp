
class CfgSoundShaders
{


	class NIA_SCARH_Closure_SoundShader
	{
		samples[] = {
			{ "nia_wp_SCAR\snd\SCAR2_first", 1 } };
        range = 10;
        volume = 1;
        rangeCurve[] = {
			{ 0, 1 },
			{ 10, 0 } };
	};
	class NIA_SCARH_closeShot_SoundShader
	{
		samples[] = {
			{ "hlc_core\sound\weapon\FNFAL\Close_1", 1 },
			{ "hlc_core\sound\weapon\FNFAL\Close_2", 1 },
			{ "hlc_core\sound\weapon\FNFAL\Close_3", 1 },
			{ "hlc_core\sound\weapon\FNFAL\Close_4", 1 }
		};

		volume = 1.6;
		range = 100;
		rangeCurve = "closeShotCurve";
	};
	class NIA_SCARH_midShot_SoundShader
	{
		samples[] = {
			{ "nia_wp_SCAR\snd\Mk17\Mk17_mid", 1 } };
        volume = 1;
		range = 2500;
		rangeCurve[] = {
			{ 0, 0.5 },
			{ 100, 1 },
			{ 300, 0 },
			{ 2500, 0 } };
	};
	class NIA_SCARH_distShot_SoundShader
	{
		samples[] = {
            { "nia_wp_SCAR\snd\Mk17\Mk17_dist", 1 } };
		volume = 1.0;
		range = 2500;
		rangeCurve[] = {
			{ 0, 0 },
			{ 100, 0 },
			{ 300, 1 },
			{ 2500, 1 } };
	};
	class NIA_SCARH_tailDistant_SoundShader
	{
		samples[] = {
            { "\A3\Sounds_F\arsenal\weapons\LongRangeRifles\mk18\mk18_taildistant", 1 } };
		volume = 1;
		range = 2000;
		rangeCurve[] = {
			{ 0, 0 },
            { 250, 0.2 },
			{ 600, 0.7 },
			{ 2000, 1 } };
		limitation = 1;
	};
	class NIA_SCARH_tailForest_SoundShader
	{
		samples[] = {
            { "nia_wp_SCAR\snd\Mk17\Mk17_forest", 1 } };
        volume = " 1.3*((1-interior/1.4)*Forest/3)";
		range = 250;
        rangeCurve[] = { 
            { 0,1 }, 
            { 250, 0 } 
        }; 
        limitation = 1;
    };
    class NIA_SCARH_tailForest_mid_SoundShader {
        samples[] = {
            { "nia_wp_SCAR\snd\Mk17\Mk17_forest_mid", 1 }
        };
        volume = " 1.3*((1-interior/1.4)*Forest/3)";
        rangeCurve[] = { 
			{ 0,0 }, 
			{ 250, 1 }, 
            { 1800, 1 }
		}; 
        range = 1800;
        limitation = 1;
    };
	class NIA_SCARH_tailHouses_SoundShader
	{
		samples[] = {
            { "nia_wp_SCAR\snd\Mk17\Mk17_urban", 1 } };
        volume = "1.3*((1-interior/1.4)*houses/3)";
		range = 250;
        rangeCurve[] = { 
            { 0,1 }, 
            { 250, 0 } 
        }; 
        limitation = 1;
    };
    class NIA_SCARH_tailHouses_mid_SoundShader {
        samples[] = {
            { "nia_wp_SCAR\snd\Mk17\Mk17_urban_mid", 1 }
        };
        volume = "1.3*((1-interior/1.4)*houses/3)";
        rangeCurve[] = { 
			{ 0,0 }, 
			{ 250, 1 }, 
            { 2000, 1 }
		}; 
        range = 2000;
        limitation = 1;
    };
	class NIA_SCARH_tailInterior_SoundShader
	{
		samples[] = {
            { "nia_wp_SCAR\snd\Mk17\Mk17_indoor", 1 } };
        volume = " 1.3*((interior)*0.65)";
		range = 250;
        rangeCurve[] = { 
            { 0,0.7 }, 
            { 250, 0 } 
        }; 
        limitation = 1;
    };

    class NIA_SCARH_tailInterior_mid_SoundShader {
        samples[] = {
            { "nia_wp_SCAR\snd\Mk17\Mk17_indoor_mid", 1 }
        };
        volume = " 1.3*((interior)*0.65)";
        rangeCurve[] = { 
			{ 0,0 }, 
			{ 250, 0.4 }, 
            { 320, 0 } 
		}; 
        range = 500;
        limitation = 1;
    };
	class NIA_SCARH_tailMeadows_SoundShader
	{
		samples[] = {
            { "nia_wp_SCAR\snd\Mk17\Mk17_meadows", 1 } };
        volume = " 1.3*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
		range = 250;
        rangeCurve[] = { 
            { 0,1 }, 
            { 250, 0 } 
        }; 
        limitation = 1;
    };
    class NIA_SCARH_tailMeadows_mid_SoundShader {
        samples[] = {
            { "nia_wp_SCAR\snd\Mk17\Mk17_meadows_mid", 1 }
        };
        volume = " 1.3*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
        rangeCurve[] = { 
			{ 0,0 }, 
			{ 250, 1 }, 
            { 2000,1}
		}; 
        range = 2000;
        limitation = 1;
    };
	class NIA_SCARH_tailTrees_SoundShader
	{
		samples[] = {
            { "nia_wp_SCAR\snd\Mk17\Mk17_trees", 1 } };   
        volume = " 1.3*((1-interior/1.4)*trees/3)";
		range = 250;
        rangeCurve[] = { 
            { 0,1 }, 
            { 250, 0 } 
        }; 
        limitation = 1;
    };
    class NIA_SCARH_tailTrees_mid_SoundShader {
        samples[] = {
            { "nia_wp_SCAR\snd\Mk17\Mk17_trees_mid", 1 }
        };
        volume = " 1.3*((1-interior/1.4)*trees/3)";
        rangeCurve[] = { 
			{ 0,0 }, 
			{ 250, 1 }, 
            { 2000,1}
		}; 
        range = 2000;
        limitation = 1;
    };
	class NIA_SCARH_silencerShot_SoundShader
	{
		samples[] = {
            { "nia_wp_SCAR\snd\Mk17\Mk17_sil_close", 1 } };
		volume = 1.0;
		range = 50;
		rangeCurve = "closeShotCurve";
	};
    class NIA_SCARH_silencerShot_mid_SoundShader
    {
        samples[] = {
            { "nia_wp_SCAR\snd\Mk17\Mk17_sil_mid", 1 } };
        volume = 1.0;
        range = 350;
        rangeCurve[] = {
            { 0, 0.2 },
            { 50, 1 },
            { 350, 0 }
        };
    };
	class NIA_SCARH_silencerTailForest_SoundShader
	{
		samples[] = {
			{ "A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\DMR01_silencerTailForest", 1 } };
		volume = "(1-interior/1.4)*forest/3";
		range = 150;
		rangeCurve[] = {
			{ 0, 1 },
			{ 150, 0.3 } };
		limitation = 1;
	};
	class NIA_SCARH_silencerTailHouses_SoundShader
	{
		samples[] = {
			{ "A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\DMR01_silencerTailHouses", 1 } };
		volume = "(1-interior/1.4)*houses/3";
		range = 150;
		rangeCurve[] = {
			{ 0, 1 },
			{ 150, 0 } };
		limitation = 1;
	};
	class NIA_SCARH_silencerTailInterior_SoundShader
	{
		samples[] = {
			{ "nia_wp_SCAR\snd\Mk17\Mk17_sil_close_tail_indoor", 1 } };
		volume = "interior";
		range = 150;
		rangeCurve[] = {
			{ 0, 1 },
			{ 50, 0.3 },
			{ 150, 0 } };
		limitation = 1;
	};
	class NIA_SCARH_silencerTailMeadows_SoundShader
	{
		samples[] = {
            { "nia_wp_SCAR\snd\Mk17\Mk17_sil_close_tail", 1 } };
		volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range = 150;
		rangeCurve[] = {
			{ 0, 1 },
			{ 150, 0.3 } };
		limitation = 1;
	};
	class NIA_SCARH_silencerTailTrees_SoundShader
	{
		samples[] = {
			{ "A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\DMR01_silencerTailTrees", 1 } };
		volume = "(1-interior/1.4)*trees/3";
		range = 150;
		rangeCurve[] = {
			{ 0, 1 },
			{ 150, 0.3 } };
		limitation = 1;
	};
	class NIA_SCARH_CQB_closeShot_SoundShader
	{
		samples[] = {
            { "nia_wp_SCAR\snd\Mk17\Mk17_close", 1 }
		};
		volume = 0.7;
		range = 100;
		rangeCurve = "closeShotCurve";
	};
	class NIA_SCARH_CQB_midShot_SoundShader
	{
		samples[] = {
			{ "nia_wp_SCAR\snd\Mk17\Mk17_mid", 1 } };
        volume = 1;
		range = 2500;
		rangeCurve[] = {
			{ 0, 0.5 },
			{ 100, 1 },
			{ 300, 0 },
			{ 2500, 0 } };
	};
	class NIA_SCARH_CQB_distShot_SoundShader
	{
		samples[] = {
            { "nia_wp_SCAR\snd\Mk17\Mk17_dist", 1 } };
		volume = 1.0;
		range = 2500;
		rangeCurve[] = {
			{ 0, 0 },
			{ 100, 0 },
			{ 300, 1 },
			{ 2500, 1 } };
	};
	class NIA_SCARH_CQB_tailDistant_SoundShader
	{
		samples[] = {
            { "\A3\Sounds_F\arsenal\weapons\LongRangeRifles\mk18\mk18_taildistant", 1 } };
        volume = 1;
		range = 2000;
		rangeCurve[] = {
            { 0, 0 },
            { 150, 0.2 },
			{ 600, 0.7 },
			{ 2000, 1 } };
		limitation = 1;
	};
	class NIA_SCARH_CQB_tailForest_SoundShader
	{
		samples[] = {
            { "nia_wp_SCAR\snd\Mk17\Mk17_forest", 1 } };
        volume = " 1.3*((1-interior/1.4)*Forest/3)";
		range = 250;
        rangeCurve[] = { 
            { 0,1 }, 
            { 250, 0 } 
        }; 
        limitation = 1;
    };
    class NIA_SCARH_CQB_tailForest_mid_SoundShader {
        samples[] = {
            { "nia_wp_SCAR\snd\Mk17\Mk17_forest_mid", 1 }
        };
        volume = " 1.3*((1-interior/1.4)*Forest/3)";
        rangeCurve[] = { 
			{ 0,0 }, 
			{ 250, 1 }, 
            { 1800, 1 }
		}; 
        range = 1800;
        limitation = 1;
    };
	class NIA_SCARH_CQB_tailHouses_SoundShader
	{
		samples[] = {
            { "nia_wp_SCAR\snd\Mk17\Mk17_urban", 1 } };
        volume = "1.3*((1-interior/1.4)*houses/3)";
		range = 250;
        rangeCurve[] = { 
            { 0,1 }, 
            { 250, 0 } 
        }; 
        limitation = 1;
    };
    class NIA_SCARH_CQB_tailHouses_mid_SoundShader {
        samples[] = {
            { "nia_wp_SCAR\snd\Mk17\Mk17_urban_mid", 1 }
        };
        volume = "1.3*((1-interior/1.4)*houses/3)";
        rangeCurve[] = { 
			{ 0,0 }, 
			{ 250, 1 }, 
            { 2000, 1 }
		}; 
        range = 2000;
        limitation = 1;
    };
	class NIA_SCARH_CQB_tailInterior_SoundShader
	{
		samples[] = {
            { "nia_wp_SCAR\snd\Mk17\Mk17_indoor", 1 } };
        volume = " 1.3*((interior)*0.65)";
		range = 250;
        rangeCurve[] = { 
            { 0,0.7 }, 
            { 250, 0 } 
        }; 
        limitation = 1;
    };
    class NIA_SCARH_CQB_tailInterior_mid_SoundShader {
        samples[] = {
            { "nia_wp_SCAR\snd\Mk17\Mk17_indoor_mid", 1 }
        };
        volume = " 1.2*((interior)*0.65)";
        rangeCurve[] = { 
			{ 0,0 }, 
			{ 250, 0.4 }, 
            { 320, 0 } 
		}; 
        range = 500;
        limitation = 1;
    };
	class NIA_SCARH_CQB_tailMeadows_SoundShader
	{
		samples[] = {
            { "nia_wp_SCAR\snd\Mk17\Mk17_meadows", 1 } };
        volume = " 1.3*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
		range = 250;
        rangeCurve[] = { 
            { 0,1 }, 
            { 250, 0 } 
        }; 
        limitation = 1;
    };
    class NIA_SCARH_CQB_tailMeadows_mid_SoundShader {
        samples[] = {
            { "nia_wp_SCAR\snd\Mk17\Mk17_meadows_mid", 1 }
        };
        volume = " 1.3*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
        rangeCurve[] = { 
			{ 0,0 }, 
			{ 250, 1 }, 
            { 2000,1}
		}; 
        range = 2000;
        limitation = 1;
    };
	class NIA_SCARH_CQB_tailTrees_SoundShader
	{
		samples[] = {
            { "nia_wp_SCAR\snd\Mk17\Mk17_trees", 1 } };   
        volume = " 1.3*((1-interior/1.4)*trees/3)";
		range = 250;
        rangeCurve[] = { 
            { 0,1 }, 
            { 250, 0 } 
        }; 
        limitation = 1;
    };
    class NIA_SCARH_CQB_tailTrees_mid_SoundShader {
        samples[] = {
            { "nia_wp_SCAR\snd\Mk17\Mk17_trees_mid", 1 }
        };
        volume = " 1.3*((1-interior/1.4)*trees/3)";
        rangeCurve[] = { 
			{ 0,0 }, 
			{ 250, 1 }, 
            { 2000,1}
		}; 
        range = 2000;
        limitation = 1;
    };


	class NIA_SCARL_Closure_SoundShader 
			{
				samples[] = {
					{ "nia_wp_SCAR\snd\SCAR2_first", 1 } };
				range = 25;
				volume = 0.2;
				rangeCurve[] = {
					{ 0, 1 },
					{ 25, 0 } };
			};
	class NIA_SCARL_closeShot_SoundShader {
		samples[] = {
			{ "hlc_core\sound\weapon\M4\Close_1", 1 },
			{ "hlc_core\sound\weapon\M4\Close_2", 1 },
			{ "hlc_core\sound\weapon\M4\Close_3", 1 },
			{ "hlc_core\sound\weapon\M4\Close_4", 1 }
		};
		volume = 1.6;
		range = 50;
		rangeCurve = "closeShotCurve";
	};
	class NIA_SCARL_midShot_SoundShader {
		samples[] = {
			{ "\A3\Sounds_F\arsenal\weapons\Rifles\mk20\Mk20_midShot_01", 1 }
		};
		volume = 1.0;
		range = 2000;
		rangeCurve[] = {
			{ 0, 0.2 },
			{ 50, 1 },
			{ 300, 0 },
			{ 2000, 0 }
		};
	};
	class NIA_SCARL_distShot_SoundShader {
		samples[] = {
			{ "\A3\Sounds_F\arsenal\weapons\Rifles\mk20\mk20_distShot_01", 1 },
			{ "\A3\Sounds_F\arsenal\weapons\Rifles\mk20\mk20_distShot_02", 1 },
			{ "\A3\Sounds_F\arsenal\weapons\Rifles\mk20\mk20_distShot_03", 1 }
		};
		volume = 1.0;
		range = 2000;
		rangeCurve[] = {
			{ 0, 0 },
			{ 50, 0 },
			{ 300, 1 },
			{ 2000, 1 }
		};
	};

	class NIA_SCARL_tailDistant_SoundShader {
		samples[] = {
			{ "\A3\Sounds_F\arsenal\weapons\Rifles\mk20\mk20_taildistant", 1 }
		};
		volume = 1;
		range = 2000;
		rangeCurve[] = {
			{ 0, 0 },
			{ 600, 0.7 },
			{ 2000, 1 }
		};
		limitation = 1;
	};
	class NIA_SCARL_tailForest_SoundShader {
		samples[] = {
			{ "nia_WP_scar\snd\Mk16\Mk16_forest", 1 }
		};
		volume = " 2*((1-interior/1.4)*Forest/3)";
		range = 250;
		rangeCurve[] = {
			{ 0, 1 },
			{ 250, 0 }
		};
		limitation = 1;
	};
	class NIA_SCARL_tailForest_mid_SoundShader {
		samples[] = {
			{ "nia_WP_scar\snd\Mk16\Mk16_forest_mid", 1 }
		};
		volume = " 2*((1-interior/1.4)*Forest/3)";
		rangeCurve[] = {
			{ 0, 0 },
			{ 250, 1 },
			{ 1800, 1 }
		};
		range = 1800;
		limitation = 1;
	};
	class NIA_SCARL_tailHouses_SoundShader {
		samples[] = {
			{ "nia_WP_scar\snd\Mk16\Mk16_urban", 1 }
		};
		volume = " 2*((1-interior/1.4)*houses/3)";
		range = 250;
		rangeCurve[] = {
			{ 0, 1 },
			{ 250, 0 }
		};
		limitation = 1;
	};
	class NIA_SCARL_tailHouses_mid_SoundShader {
		samples[] = {
			{ "nia_WP_scar\snd\Mk16\Mk16_urban_mid", 1 }
		};
		volume = "2*((1-interior/1.4)*houses/3)";
		rangeCurve[] = {
			{ 0, 0 },
			{ 250, 1 },
			{ 2000, 1 }
		};
		range = 2000;
		limitation = 1;
	};
	class NIA_SCARL_tailInterior_SoundShader {
		samples[] = {
			{ "nia_WP_scar\snd\Mk16\Mk16_indoor", 1 }
		};
		volume = " 2*((interior)*0.65)";
		range = 250;
		rangeCurve[] = {
			{ 0, 0.7 },
			{ 250, 0 }
		};
		limitation = 1;
	};
	class NIA_SCARL_tailInterior_mid_SoundShader {
		samples[] = {
			{ "nia_WP_scar\snd\Mk16\Mk16_indoor_mid", 1 }
		};
		volume = " 2*((interior)*0.65)";
		rangeCurve[] = {
			{ 0, 0 },
			{ 250, 0.4 },
			{ 320, 0 }
		};
		range = 500;
		limitation = 1;
	};
	class NIA_SCARL_tailMeadows_SoundShader {
		samples[] = {
			{ "nia_WP_scar\snd\Mk16\Mk16_meadow", 1 }
		};
		volume = " 2*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
		range = 250;
		rangeCurve[] = {
			{ 0, 1 },
			{ 250, 0 }
		};
		limitation = 1;
	};
	class NIA_SCARL_tailMeadows_mid_SoundShader {
		samples[] = {
			{ "nia_WP_scar\snd\Mk16\Mk16_meadow_mid", 1 }
		};
		volume = " 2*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
		rangeCurve[] = {
			{ 0, 0 },
			{ 250, 1 },
			{ 2000, 1 }
		};
		range = 2000;
		limitation = 1;
	};
	class NIA_SCARL_tailTrees_SoundShader {
		samples[] = {
			{ "nia_WP_scar\snd\Mk16\Mk16_trees", 1 }
		};
		volume = " 2*((1-interior/1.4)*trees/3)";
		range = 250;
		rangeCurve[] = {
			{ 0, 1 },
			{ 250, 0 }
		};
		limitation = 1;
	};
	class NIA_SCARL_tailTrees_mid_SoundShader {
		samples[] = {
			{ "nia_WP_scar\snd\Mk16\Mk16_trees_mid", 1 }
		};
		volume = " 2*((1-interior/1.4)*trees/3)";
		rangeCurve[] = {
			{ 0, 0 },
			{ 250, 1 },
			{ 2000, 1 }
		};
		range = 2000;
		limitation = 1;
	};

	class NIA_SCARL_silencerShot_SoundShader {
		samples[] = {
			{ "nia_WP_scar\snd\Generic\carbine_suppressed_close", 1 }
		};
		volume = 0.7;
		range = 50;
		rangeCurve[] = {
			{ 0, 1 },
			{ 50, 0 }
		};
	};
	class NIA_SCARL_silencerShot_mid_SoundShader {
		samples[] = {
			{ "nia_WP_scar\snd\Generic\carbine_suppressed_mid", 1 }
		};
		volume = 1.0;
		range = 250;
		rangeCurve[] = {
			{ 0, 0.2 },
			{ 50, 1 },
			{ 250, 0 }
		};
	};

	class NIA_SCARL_silencerTailForest_SoundShader {
		samples[] = {
			{ "nia_WP_scar\snd\Generic\carbine_suppressed_forest", 1 }
		};
		volume = "(1-interior/1.4)*forest/3";
		range = 150;
		rangeCurve[] = {
			{ 0, 1 },
			{ 150, 0.3 }
		};
		limitation = 1;
	};
	class NIA_SCARL_silencerTailHouses_SoundShader {
		samples[] = {
			{ "nia_WP_scar\snd\Generic\carbine_suppressed_urban", 1 }
		};
		volume = "(1-interior/1.4)*houses/3";
		range = 150;
		rangeCurve[] = {
			{ 0, 1 },
			{ 150, 0 }
		};
		limitation = 1;
	};
	class NIA_SCARL_silencerTailInterior_SoundShader {
		samples[] = {
			{ "nia_WP_scar\snd\Generic\carbine_suppressed_indoor", 1 }
		};
		volume = "interior";
		range = 150;
		rangeCurve[] = {
			{ 0, 1 },
			{ 50, 0.3 },
			{ 150, 0 }
		};
		limitation = 1;
	};
	class NIA_SCARL_silencerTailMeadows_SoundShader {
		samples[] = {
			{ "nia_WP_scar\snd\Generic\carbine_suppressed_meadow", 1 }
		};
		volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range = 150;
		rangeCurve[] = {
			{ 0, 1 },
			{ 150, 0.3 }
		};
		limitation = 1;
	};
	class NIA_SCARL_silencerTailTrees_SoundShader {
		samples[] = {
			{ "nia_WP_scar\snd\Generic\carbine_suppressed_trees", 1 }
		};
		volume = "(1-interior/1.4)*trees/3";
		range = 150;
		rangeCurve[] = {
			{ 0, 1 },
			{ 150, 0.3 }
		};
		limitation = 1;
	};

};
