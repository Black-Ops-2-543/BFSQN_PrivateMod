class cfgPatches
{
	class Facewear_F_JCA_IE
	{
		addonRootClass="A3_Characters_F";
		requiredAddons[]=
		{
			"A3_Characters_F",
			"A3_Characters_F_epa",
			"A3_Characters_F_epb",
			"A3_Characters_F_epc",
			"A3_Characters_F_exp",
			"A3_Characters_F_beta",
			"A3_Characters_F_kart",
			"A3_Characters_F_mark",
			"A3_Characters_F_jets",
			"A3_Characters_F_tank",
			"A3_Characters_F_gamma",
			"A3_Characters_F_enoch",
			"A3_Characters_F_oldman",
			"A3_Characters_F_orange",
			"A3_Characters_F_tacops",
			"A3_Characters_F_bootcamp"
		};
		requiredVersion=0.1;
		units[]={};
		weapons[]={};
	};
};
class cfgGlasses
{
	class None;
	class JCA_G_AirPurifyingRespirator_03_base_F: None
	{
		author="Grave";
		scope=0;
		model="\facewear_f_JCA_IE\data\G_APR_03\G_AirPurifyingRespirator_03_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2"
		};
		mass=8;
		identityTypes[]={};
	};
	class JCA_G_AirPurifyingRespirator_03_black_clear_F: JCA_G_AirPurifyingRespirator_03_base_F
	{
		author="Grave";
		scope=2;
		displayName="APR M50 (Black, Clear)";
		picture="\facewear_f_JCA_IE\data\G_APR_03\UI\icon_G_AirPurifyingRespirator_03_black_clear_F_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"facewear_f_JCA_IE\data\G_APR_03\G_AirPurifyingRespirator_03_black_CO.paa",
			"facewear_f_JCA_IE\data\G_APR_03\G_AirPurifyingRespirator_03_glass_clear_CA.paa"
		};
	};
	class JCA_G_AirPurifyingRespirator_03_sand_clear_F: JCA_G_AirPurifyingRespirator_03_base_F
	{
		author="Grave";
		_generalMacro="JCA_G_AirPurifyingRespirator_03_sand_clear_F";
		scope=2;
		displayName="APR M50 (Sand, Clear)";
		picture="\facewear_f_JCA_IE\data\G_APR_03\UI\icon_G_AirPurifyingRespirator_03_sand_clear_F_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"facewear_f_JCA_IE\data\G_APR_03\G_AirPurifyingRespirator_03_sand_CO.paa",
			"facewear_f_JCA_IE\data\G_APR_03\G_AirPurifyingRespirator_03_glass_clear_CA.paa"
		};
	};
	class JCA_G_AirPurifyingRespirator_03_olive_clear_F: JCA_G_AirPurifyingRespirator_03_base_F
	{
		author="Grave";
		scope=2;
		displayName="APR M50 (Olive, Clear)";
		picture="\facewear_f_JCA_IE\data\G_APR_03\UI\icon_G_AirPurifyingRespirator_03_olive_clear_F_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"facewear_f_JCA_IE\data\G_APR_03\G_AirPurifyingRespirator_03_olive_CO.paa",
			"facewear_f_JCA_IE\data\G_APR_03\G_AirPurifyingRespirator_03_glass_clear_CA.paa"
		};
	};
	class JCA_G_AirPurifyingRespirator_03_black_tinted_F: JCA_G_AirPurifyingRespirator_03_base_F
	{
		author="Grave";
		_generalMacro="JCA_G_AirPurifyingRespirator_03_black_tinted_F";
		scope=2;
		displayName="APR M50 (Black, Tinted)";
		picture="\facewear_f_JCA_IE\data\G_APR_03\UI\icon_G_AirPurifyingRespirator_03_black_tinted_F_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"facewear_f_JCA_IE\data\G_APR_03\G_AirPurifyingRespirator_03_black_CO.paa",
			"facewear_f_JCA_IE\data\G_APR_03\G_AirPurifyingRespirator_03_glass_tinted_CA.paa"
		};
	};
	class JCA_G_AirPurifyingRespirator_03_sand_tinted_F: JCA_G_AirPurifyingRespirator_03_base_F
	{
		author="Grave";
		_generalMacro="JCA_G_AirPurifyingRespirator_03_sand_tinted_F";
		scope=2;
		displayName="APR M50 (Sand, Tinted)";
		picture="\facewear_f_JCA_IE\data\G_APR_03\UI\icon_G_AirPurifyingRespirator_03_sand_tinted_F_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"facewear_f_JCA_IE\data\G_APR_03\G_AirPurifyingRespirator_03_sand_CO.paa",
			"facewear_f_JCA_IE\data\G_APR_03\G_AirPurifyingRespirator_03_glass_tinted_CA.paa"
		};
	};
	class JCA_G_AirPurifyingRespirator_03_olive_tinted_F: JCA_G_AirPurifyingRespirator_03_base_F
	{
		author="Grave";
		_generalMacro="JCA_G_AirPurifyingRespirator_03_olive_tinted_F";
		scope=2;
		displayName="APR M50 (Olive, Tinted)";
		picture="\facewear_f_JCA_IE\data\G_APR_03\UI\icon_G_AirPurifyingRespirator_03_olive_tinted_F_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"facewear_f_JCA_IE\data\G_APR_03\G_AirPurifyingRespirator_03_olive_CO.paa",
			"facewear_f_JCA_IE\data\G_APR_03\G_AirPurifyingRespirator_03_glass_tinted_CA.paa"
		};
	};
	class JCA_G_AirPurifyingRespirator_04_base_F: None
	{
		author="Grave";
		scope=1;
		model="\facewear_f_JCA_IE\data\G_APR_04\G_AirPurifyingRespirator_04_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2"
		};
		mass=8;
		identityTypes[]={};
	};
	class JCA_G_AirPurifyingRespirator_04_black_clear_F: JCA_G_AirPurifyingRespirator_04_base_F
	{
		author="Grave";
		scope=2;
		displayName="APR MSA (Black, Clear)";
		picture="\facewear_f_JCA_IE\data\G_APR_04\UI\icon_G_AirPurifyingRespirator_04_black_clear_F_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"facewear_f_JCA_IE\data\G_APR_04\G_AirPurifyingRespirator_04_black_CO.paa",
			"facewear_f_JCA_IE\data\G_APR_04\G_AirPurifyingRespirator_04_glass_clear_CA.paa"
		};
	};
	class JCA_G_AirPurifyingRespirator_04_sand_clear_F: JCA_G_AirPurifyingRespirator_04_base_F
	{
		author="Grave";
		scope=2;
		displayName="APR MSA (Sand, Clear)";
		picture="\facewear_f_JCA_IE\data\G_APR_04\UI\icon_G_AirPurifyingRespirator_04_sand_clear_F_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"facewear_f_JCA_IE\data\G_APR_04\G_AirPurifyingRespirator_04_sand_CO.paa",
			"facewear_f_JCA_IE\data\G_APR_04\G_AirPurifyingRespirator_04_glass_clear_CA.paa"
		};
	};
	class JCA_G_AirPurifyingRespirator_04_olive_clear_F: JCA_G_AirPurifyingRespirator_04_base_F
	{
		author="Grave";
		scope=2;
		displayName="APR MSA (Olive, Clear)";
		picture="\facewear_f_JCA_IE\data\G_APR_04\UI\icon_G_AirPurifyingRespirator_04_olive_clear_F_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"facewear_f_JCA_IE\data\G_APR_04\G_AirPurifyingRespirator_04_olive_CO.paa",
			"facewear_f_JCA_IE\data\G_APR_04\G_AirPurifyingRespirator_04_glass_clear_CA.paa"
		};
	};
	class JCA_G_AirPurifyingRespirator_04_black_tinted_F: JCA_G_AirPurifyingRespirator_04_base_F
	{
		author="Grave";
		scope=2;
		displayName="APR MSA (Black, Tinted)";
		picture="\facewear_f_JCA_IE\data\G_APR_04\UI\icon_G_AirPurifyingRespirator_04_black_tinted_F_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"facewear_f_JCA_IE\data\G_APR_04\G_AirPurifyingRespirator_04_black_CO.paa",
			"facewear_f_JCA_IE\data\G_APR_04\G_AirPurifyingRespirator_04_glass_tinted_CA.paa"
		};
	};
	class JCA_G_AirPurifyingRespirator_04_sand_tinted_F: JCA_G_AirPurifyingRespirator_04_base_F
	{
		author="Grave";
		scope=2;
		displayName="APR MSA (Sand, Tinted)";
		picture="\facewear_f_JCA_IE\data\G_APR_04\UI\icon_G_AirPurifyingRespirator_04_sand_tinted_F_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"facewear_f_JCA_IE\data\G_APR_04\G_AirPurifyingRespirator_04_sand_CO.paa",
			"facewear_f_JCA_IE\data\G_APR_04\G_AirPurifyingRespirator_04_glass_tinted_CA.paa"
		};
	};
	class JCA_G_AirPurifyingRespirator_04_olive_tinted_F: JCA_G_AirPurifyingRespirator_04_base_F
	{
		author="Grave";
		scope=2;
		displayName="APR MSA (Olive, Tinted)";
		picture="\facewear_f_JCA_IE\data\G_APR_04\UI\icon_G_AirPurifyingRespirator_04_olive_tinted_F_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"facewear_f_JCA_IE\data\G_APR_04\G_AirPurifyingRespirator_04_olive_CO.paa",
			"facewear_f_JCA_IE\data\G_APR_04\G_AirPurifyingRespirator_04_glass_tinted_CA.paa"
		};
	};
	class JCA_G_Headset_Combat_01_base_F: None
	{
		author="Grave";
		scope=1;
		model="\headwear_f_JCA_IE\data\H_Headset_Combat_01\H_Headset_Combat_01_F.p3d";
		picture="\A3\Characters_F_Orange\Headgear\data\UI\icon_H_HeadSet_black_F_CA.paa";
		hiddenSelections[]=
		{
			"camo"
		};
		mass=6;
		identityTypes[]={};
	};
	class JCA_G_Headset_Combat_01_black_F: JCA_G_Headset_Combat_01_base_F
	{
		author="Grave";
		scope=2;
		displayName="Combat Headset (Black)";
		picture="\headwear_f_JCA_IE\data\H_Headset_Combat_01\UI\Icon_H_Headset_Combat_01_black_F_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"headwear_f_JCA_IE\data\H_Headset_Combat_01\H_Headset_Combat_01_black_co.paa"
		};
	};
	class JCA_G_Headset_Combat_01_sand_F: JCA_G_Headset_Combat_01_base_F
	{
		author="Grave";
		scope=2;
		displayName="Combat Headset (Sand)";
		picture="\headwear_f_JCA_IE\data\H_Headset_Combat_01\UI\Icon_H_Headset_Combat_01_sand_F_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"headwear_f_JCA_IE\data\H_Headset_Combat_01\H_Headset_Combat_01_sand_co.paa"
		};
	};
	class JCA_G_Headset_Combat_01_olive_F: JCA_G_Headset_Combat_01_base_F
	{
		author="Grave";
		scope=2;
		displayName="Combat Headset (Olive)";
		picture="\headwear_f_JCA_IE\data\H_Headset_Combat_01\UI\Icon_H_Headset_Combat_01_olive_F_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"headwear_f_JCA_IE\data\H_Headset_Combat_01\H_Headset_Combat_01_olive_co.paa"
		};
	};
	class JCA_G_Glasses_Tactical_base_F: None
	{
		author="Grave";
		_generalMacro="JCA_G_Glasses_Tactical_base_F";
		scope=1;
		model="\facewear_f_JCA_IE\Data\G_Glasses_Tactical\G_Glasses_Tactical_F.p3d";
		picture="\facewear_f_JCA_IE\Data\G_Glasses_Tactical\UI\icon_G_Tactical_black_F_CA.paa";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsMaterials[]=
		{
			"facewear_f_JCA_IE\Data\G_Glasses_Tactical\G_Glasses_Tactical.rvmat"
		};
		mass=2;
		identityTypes[]={};
	};
	class JCA_G_Glasses_Tactical_clear_black_F: JCA_G_Glasses_Tactical_base_F
	{
		author="Grave";
		_generalMacro="JCA_G_Glasses_Tactical_black_clear_F";
		picture="\facewear_f_JCA_IE\Data\G_Glasses_Tactical\UI\icon_G_Glasses_Tactical_clear_black_F_CA.paa";
		displayname="Tactical Glasses (Black, Clear)";
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"facewear_f_JCA_IE\Data\G_Glasses_Tactical\G_Glasses_Tactical_black_clear_CA.paa"
		};
	};
	class JCA_G_Glasses_Tactical_faded_black_F: JCA_G_Glasses_Tactical_base_F
	{
		author="Grave";
		_generalMacro="JCA_G_Glasses_Tactical_black_faded_F";
		picture="\facewear_f_JCA_IE\Data\G_Glasses_Tactical\UI\icon_G_Glasses_Tactical_faded_black_F_CA.paa";
		displayname="Tactical Glasses (Black, Faded)";
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"facewear_f_JCA_IE\Data\G_Glasses_Tactical\G_Glasses_Tactical_black_faded_CA.paa"
		};
	};
	class JCA_G_Glasses_Tactical_tinted_black_F: JCA_G_Glasses_Tactical_base_F
	{
		author="Grave";
		_generalMacro="JCA_G_Glasses_Tactical_black_tinted_F";
		picture="\facewear_f_JCA_IE\Data\G_Glasses_Tactical\UI\icon_G_Glasses_Tactical_tinted_black_F_CA.paa";
		displayName="Tactical Glasses (Black, Tinted)";
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"facewear_f_JCA_IE\Data\G_Glasses_Tactical\G_Glasses_Tactical_black_tinted_CA.paa"
		};
	};
	class JCA_G_Glasses_Tactical_amber_black_F: JCA_G_Glasses_Tactical_base_F
	{
		author="Grave";
		_generalMacro="JCA_G_Glasses_Tactical_black_amber_F";
		picture="\facewear_f_JCA_IE\Data\G_Glasses_Tactical\UI\icon_G_Glasses_Tactical_amber_black_F_CA.paa";
		displayname="Tactical Glasses (Black, Amber)";
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"facewear_f_JCA_IE\Data\G_Glasses_Tactical\G_Glasses_Tactical_black_amber_CA.paa"
		};
	};
	class JCA_G_Glasses_Tactical_clear_sand_F: JCA_G_Glasses_Tactical_base_F
	{
		author="Grave";
		_generalMacro="JCA_G_Glasses_Tactical_sand_clear_F";
		picture="\facewear_f_JCA_IE\Data\G_Glasses_Tactical\UI\icon_G_Glasses_Tactical_clear_sand_F_CA.paa";
		displayname="Tactical Glasses (Sand, Clear)";
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"facewear_f_JCA_IE\Data\G_Glasses_Tactical\G_Glasses_Tactical_sand_clear_CA.paa"
		};
	};
	class JCA_G_Glasses_Tactical_faded_sand_F: JCA_G_Glasses_Tactical_base_F
	{
		author="Grave";
		_generalMacro="JCA_G_Glasses_Tactical_sand_faded_F";
		picture="\facewear_f_JCA_IE\Data\G_Glasses_Tactical\UI\icon_G_Glasses_Tactical_faded_sand_F_CA.paa";
		displayname="Tactical Glasses (Sand, Faded)";
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"facewear_f_JCA_IE\Data\G_Glasses_Tactical\G_Glasses_Tactical_sand_faded_CA.paa"
		};
	};
	class JCA_G_Glasses_Tactical_tinted_sand_F: JCA_G_Glasses_Tactical_base_F
	{
		author="Grave";
		_generalMacro="JCA_G_Glasses_Tactical_sand_tinted_F";
		picture="\facewear_f_JCA_IE\Data\G_Glasses_Tactical\UI\icon_G_Glasses_Tactical_tinted_sand_F_CA.paa";
		displayName="Tactical Glasses (Sand, Tinted)";
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"facewear_f_JCA_IE\Data\G_Glasses_Tactical\G_Glasses_Tactical_sand_tinted_CA.paa"
		};
	};
	class JCA_G_Glasses_Tactical_amber_sand_F: JCA_G_Glasses_Tactical_base_F
	{
		author="Grave";
		_generalMacro="JCA_G_Glasses_Tactical_sand_amber_F";
		picture="\facewear_f_JCA_IE\Data\G_Glasses_Tactical\UI\icon_G_Glasses_Tactical_amber_sand_F_CA.paa";
		displayname="Tactical Glasses (Sand, Amber)";
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"facewear_f_JCA_IE\Data\G_Glasses_Tactical\G_Glasses_Tactical_sand_amber_CA.paa"
		};
	};
	class JCA_G_Glasses_Tactical_clear_olive_F: JCA_G_Glasses_Tactical_base_F
	{
		author="Grave";
		_generalMacro="JCA_G_Glasses_Tactical_olive_clear_F";
		picture="\facewear_f_JCA_IE\Data\G_Glasses_Tactical\UI\icon_G_Glasses_Tactical_clear_olive_F_CA.paa";
		displayname="Tactical Glasses (Olive, Clear)";
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"facewear_f_JCA_IE\Data\G_Glasses_Tactical\G_Glasses_Tactical_olive_clear_CA.paa"
		};
	};
	class JCA_G_Glasses_Tactical_faded_olive_F: JCA_G_Glasses_Tactical_base_F
	{
		author="Grave";
		_generalMacro="JCA_G_Glasses_Tactical_olive_faded_F";
		picture="\facewear_f_JCA_IE\Data\G_Glasses_Tactical\UI\icon_G_Glasses_Tactical_faded_olive_F_CA.paa";
		displayname="Tactical Glasses (Olive, Faded)";
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"facewear_f_JCA_IE\Data\G_Glasses_Tactical\G_Glasses_Tactical_olive_faded_CA.paa"
		};
	};
	class JCA_G_Glasses_Tactical_tinted_olive_F: JCA_G_Glasses_Tactical_base_F
	{
		author="Grave";
		_generalMacro="JCA_G_Glasses_Tactical_olive_tinted_F";
		picture="\facewear_f_JCA_IE\Data\G_Glasses_Tactical\UI\icon_G_Glasses_Tactical_tinted_olive_F_CA.paa";
		displayName="Tactical Glasses (Olive, Tinted)";
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"facewear_f_JCA_IE\Data\G_Glasses_Tactical\G_Glasses_Tactical_olive_tinted_CA.paa"
		};
	};
	class JCA_G_Glasses_Tactical_amber_olive_F: JCA_G_Glasses_Tactical_base_F
	{
		author="Grave";
		_generalMacro="JCA_G_Glasses_Tactical_olive_amber_F";
		picture="\facewear_f_JCA_IE\Data\G_Glasses_Tactical\UI\icon_G_Glasses_Tactical_amber_olive_F_CA.paa";
		displayname="Tactical Glasses (Olive, Amber)";
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"facewear_f_JCA_IE\Data\G_Glasses_Tactical\G_Glasses_Tactical_olive_amber_CA.paa"
		};
	};
	class JCA_G_balaclava_01_base_F: None
	{
		author="Grave";
		scope=1;
		model="\facewear_f_JCA_IE\data\G_balaclava_01\G_balaclava_01_F.p3d";
		hiddenSelections[]=
		{
			"Camo"
		};
		mass=4;
		identityTypes[]={};
	};
	class JCA_G_balaclava_01_glasses_base_F: JCA_G_balaclava_01_base_F
	{
		author="Grave";
		model="\facewear_f_JCA_IE\data\G_balaclava_01\G_balaclava_01_glasses_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2"
		};
		mass=6;
	};
	class JCA_G_balaclava_01_headset_base_F: JCA_G_balaclava_01_base_F
	{
		author="Grave";
		model="\facewear_f_JCA_IE\data\G_balaclava_01\G_balaclava_01_headset_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2"
		};
		mass=10;
	};
	class JCA_G_balaclava_01_headset_glasses_base_F: JCA_G_balaclava_01_base_F
	{
		author="Grave";
		model="\facewear_f_JCA_IE\data\G_balaclava_01\G_balaclava_01_headset_glasses_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		mass=12;
	};
	class JCA_G_balaclava_01_black_F: JCA_G_balaclava_01_base_F
	{
		author="Grave";
		scope=2;
		displayName="Tactical Balaclava (Black)";
		picture="\facewear_f_JCA_IE\data\G_balaclava_01\UI\icon_G_balaclava_01_black_F_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"facewear_f_JCA_IE\data\G_Balaclava_01\G_Balaclava_01_black_CO.paa"
		};
	};
	class JCA_G_balaclava_01_sand_F: JCA_G_balaclava_01_base_F
	{
		author="Grave";
		scope=2;
		displayName="Tactical Balaclava (Sand)";
		picture="\facewear_f_JCA_IE\data\G_balaclava_01\UI\icon_G_balaclava_01_sand_F_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"facewear_f_JCA_IE\data\G_Balaclava_01\G_balaclava_01_sand_CO.paa"
		};
	};
	class JCA_G_balaclava_01_olive_F: JCA_G_balaclava_01_base_F
	{
		author="Grave";
		scope=2;
		displayName="Tactical Balaclava (Olive)";
		picture="\facewear_f_JCA_IE\data\G_balaclava_01\UI\icon_G_balaclava_01_olive_F_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"facewear_f_JCA_IE\data\G_Balaclava_01\G_balaclava_01_olive_CO.paa"
		};
	};
	class JCA_G_balaclava_01_glasses_black_F: JCA_G_balaclava_01_glasses_base_F
	{
		author="Grave";
		scope=2;
		displayName="Tactical Balaclava (Black, Glasses)";
		picture="\facewear_f_JCA_IE\data\G_balaclava_01\UI\icon_G_balaclava_01_glasses_black_F_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"facewear_f_JCA_IE\data\G_Balaclava_01\G_Balaclava_01_black_CO.paa",
			"facewear_f_JCA_IE\data\G_Glasses_Tactical\G_Glasses_Tactical_black_tinted_CA.paa"
		};
	};
	class JCA_G_balaclava_01_glasses_sand_F: JCA_G_balaclava_01_glasses_base_F
	{
		author="Grave";
		scope=2;
		displayName="Tactical Balaclava (Sand, Glasses)";
		picture="\facewear_f_JCA_IE\data\G_balaclava_01\UI\icon_G_balaclava_01_glasses_sand_F_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"facewear_f_JCA_IE\data\G_Balaclava_01\G_balaclava_01_sand_CO.paa",
			"facewear_f_JCA_IE\data\G_Glasses_Tactical\G_Glasses_Tactical_sand_tinted_CA.paa"
		};
	};
	class JCA_G_balaclava_01_glasses_olive_F: JCA_G_balaclava_01_glasses_base_F
	{
		author="Grave";
		scope=2;
		displayName="Tactical Balaclava (Olive, Glasses)";
		picture="\facewear_f_JCA_IE\data\G_balaclava_01\UI\icon_G_balaclava_01_glasses_olive_F_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"facewear_f_JCA_IE\data\G_Balaclava_01\G_balaclava_01_olive_CO.paa",
			"facewear_f_JCA_IE\data\G_Glasses_Tactical\G_Glasses_Tactical_olive_tinted_CA.paa"
		};
	};
	class JCA_G_balaclava_01_headset_black_F: JCA_G_balaclava_01_headset_base_F
	{
		author="Grave";
		scope=2;
		displayName="Tactical Balaclava (Black, Headset)";
		picture="\facewear_f_JCA_IE\data\G_balaclava_01\UI\icon_G_balaclava_01_headset_black_F_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"facewear_f_JCA_IE\data\G_Balaclava_01\G_Balaclava_01_black_CO.paa",
			"headwear_f_JCA_IE\Data\H_Headset_Combat_01\H_Headset_Combat_01_black_CO.paa"
		};
	};
	class JCA_G_balaclava_01_headset_sand_F: JCA_G_balaclava_01_headset_base_F
	{
		author="Grave";
		scope=2;
		displayName="Tactical Balaclava (Sand, Headset)";
		picture="\facewear_f_JCA_IE\data\G_balaclava_01\UI\icon_G_balaclava_01_headset_sand_F_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"facewear_f_JCA_IE\data\G_Balaclava_01\G_balaclava_01_sand_CO.paa",
			"headwear_f_JCA_IE\Data\H_Headset_Combat_01\H_Headset_Combat_01_sand_CO.paa"
		};
	};
	class JCA_G_balaclava_01_headset_olive_F: JCA_G_balaclava_01_headset_base_F
	{
		author="Grave";
		scope=2;
		displayName="Tactical Balaclava (Olive, Headset)";
		picture="\facewear_f_JCA_IE\data\G_balaclava_01\UI\icon_G_balaclava_01_headset_olive_F_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"facewear_f_JCA_IE\data\G_Balaclava_01\G_balaclava_01_olive_CO.paa",
			"headwear_f_JCA_IE\Data\H_Headset_Combat_01\H_Headset_Combat_01_olive_CO.paa"
		};
	};
	class JCA_G_balaclava_01_headset_glasses_black_F: JCA_G_balaclava_01_headset_glasses_base_F
	{
		author="Grave";
		scope=2;
		displayName="Tactical Balaclava (Black, Headset, Glasses)";
		picture="\facewear_f_JCA_IE\data\G_balaclava_01\UI\icon_G_balaclava_01_headset_glasses_black_F_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"facewear_f_JCA_IE\data\G_Balaclava_01\G_Balaclava_01_black_CO.paa",
			"headwear_f_JCA_IE\Data\H_Headset_Combat_01\H_Headset_Combat_01_black_CO.paa",
			"facewear_f_JCA_IE\data\G_Glasses_Tactical\G_Glasses_Tactical_black_tinted_CA.paa"
		};
	};
	class JCA_G_balaclava_01_headset_glasses_sand_F: JCA_G_balaclava_01_headset_glasses_base_F
	{
		author="Grave";
		scope=2;
		displayName="Tactical Balaclava (Sand, Headset, Glasses)";
		picture="\facewear_f_JCA_IE\data\G_balaclava_01\UI\icon_G_balaclava_01_headset_glasses_sand_F_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"facewear_f_JCA_IE\data\G_Balaclava_01\G_balaclava_01_sand_CO.paa",
			"headwear_f_JCA_IE\Data\H_Headset_Combat_01\H_Headset_Combat_01_sand_CO.paa",
			"facewear_f_JCA_IE\data\G_Glasses_Tactical\G_Glasses_Tactical_sand_tinted_CA.paa"
		};
	};
	class JCA_G_balaclava_01_headset_glasses_olive_F: JCA_G_balaclava_01_headset_glasses_base_F
	{
		author="Grave";
		scope=2;
		displayName="Tactical Balaclava (Olive, Headset, Glasses)";
		picture="\facewear_f_JCA_IE\data\G_balaclava_01\UI\icon_G_balaclava_01_headset_glasses_olive_F_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"facewear_f_JCA_IE\data\G_Balaclava_01\G_balaclava_01_olive_CO.paa",
			"headwear_f_JCA_IE\Data\H_Headset_Combat_01\H_Headset_Combat_01_olive_CO.paa",
			"facewear_f_JCA_IE\data\G_Glasses_Tactical\G_Glasses_Tactical_olive_tinted_CA.paa"
		};
	};
	class JCA_G_shemagh_01_base_F: None
	{
		author="Grave";
		scope=1;
		model="\facewear_f_JCA_IE\data\G_shemagh_01\G_shemagh_01_F.p3d";
		hiddenSelections[]=
		{
			"Camo"
		};
		mass=4;
		identityTypes[]={};
	};
	class JCA_G_shemagh_01_glasses_base_F: JCA_G_shemagh_01_base_F
	{
		author="Grave";
		model="\facewear_f_JCA_IE\data\G_shemagh_01\G_shemagh_01_glasses_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2"
		};
		mass=6;
	};
	class JCA_G_shemagh_01_headset_base_F: JCA_G_shemagh_01_base_F
	{
		author="Grave";
		model="\facewear_f_JCA_IE\data\G_shemagh_01\G_shemagh_01_headset_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2"
		};
		mass=10;
	};
	class JCA_G_shemagh_01_headset_glasses_base_F: JCA_G_shemagh_01_base_F
	{
		author="Grave";
		model="\facewear_f_JCA_IE\data\G_shemagh_01\G_shemagh_01_headset_glasses_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		mass=12;
	};
	class JCA_G_shemagh_01_black_F: JCA_G_shemagh_01_base_F
	{
		author="Grave";
		scope=2;
		displayName="Shemagh (Black)";
		picture="\facewear_f_JCA_IE\data\G_shemagh_01\UI\icon_G_shemagh_01_black_F_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"facewear_f_JCA_IE\data\G_Shemagh_01\G_Shemagh_01_black_CO.paa"
		};
	};
	class JCA_G_shemagh_01_sand_F: JCA_G_shemagh_01_base_F
	{
		author="Grave";
		scope=2;
		displayName="Shemagh (Sand)";
		picture="\facewear_f_JCA_IE\data\G_shemagh_01\UI\icon_G_shemagh_01_sand_F_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"facewear_f_JCA_IE\data\G_Shemagh_01\G_shemagh_01_sand_CO.paa"
		};
	};
	class JCA_G_shemagh_01_olive_F: JCA_G_shemagh_01_base_F
	{
		author="Grave";
		scope=2;
		displayName="Shemagh (Olive)";
		picture="\facewear_f_JCA_IE\data\G_shemagh_01\UI\icon_G_shemagh_01_olive_F_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"facewear_f_JCA_IE\data\G_Shemagh_01\G_shemagh_01_olive_CO.paa"
		};
	};
	class JCA_G_shemagh_01_glasses_black_F: JCA_G_shemagh_01_glasses_base_F
	{
		author="Grave";
		scope=2;
		displayName="Shemagh (Black, Glasses)";
		picture="\facewear_f_JCA_IE\data\G_shemagh_01\UI\icon_G_shemagh_01_glasses_black_F_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"facewear_f_JCA_IE\data\G_Shemagh_01\G_Shemagh_01_black_CO.paa",
			"facewear_f_JCA_IE\data\G_Glasses_Tactical\G_Glasses_Tactical_black_tinted_CA.paa"
		};
	};
	class JCA_G_shemagh_01_glasses_sand_F: JCA_G_shemagh_01_glasses_base_F
	{
		author="Grave";
		scope=2;
		displayName="Shemagh (Sand, Glasses)";
		picture="\facewear_f_JCA_IE\data\G_shemagh_01\UI\icon_G_shemagh_01_glasses_sand_F_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"facewear_f_JCA_IE\data\G_Shemagh_01\G_shemagh_01_sand_CO.paa",
			"facewear_f_JCA_IE\data\G_Glasses_Tactical\G_Glasses_Tactical_sand_tinted_CA.paa"
		};
	};
	class JCA_G_shemagh_01_glasses_olive_F: JCA_G_shemagh_01_glasses_base_F
	{
		author="Grave";
		scope=2;
		displayName="Shemagh (Olive, Glasses)";
		picture="\facewear_f_JCA_IE\data\G_shemagh_01\UI\icon_G_shemagh_01_glasses_olive_F_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"facewear_f_JCA_IE\data\G_Shemagh_01\G_shemagh_01_olive_CO.paa",
			"facewear_f_JCA_IE\data\G_Glasses_Tactical\G_Glasses_Tactical_olive_tinted_CA.paa"
		};
	};
	class JCA_G_shemagh_01_headset_black_F: JCA_G_shemagh_01_headset_base_F
	{
		author="Grave";
		scope=2;
		displayName="Shemagh (Black, Headset)";
		picture="\facewear_f_JCA_IE\data\G_shemagh_01\UI\icon_G_shemagh_01_headset_black_F_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"facewear_f_JCA_IE\data\G_Shemagh_01\G_Shemagh_01_black_CO.paa",
			"headwear_f_JCA_IE\Data\H_Headset_Combat_01\H_Headset_Combat_01_black_CO.paa"
		};
	};
	class JCA_G_shemagh_01_headset_sand_F: JCA_G_shemagh_01_headset_base_F
	{
		author="Grave";
		scope=2;
		displayName="Shemagh (Sand, Headset)";
		picture="\facewear_f_JCA_IE\data\G_shemagh_01\UI\icon_G_shemagh_01_headset_sand_F_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"facewear_f_JCA_IE\data\G_Shemagh_01\G_shemagh_01_sand_CO.paa",
			"headwear_f_JCA_IE\Data\H_Headset_Combat_01\H_Headset_Combat_01_sand_CO.paa"
		};
	};
	class JCA_G_shemagh_01_headset_olive_F: JCA_G_shemagh_01_headset_base_F
	{
		author="Grave";
		scope=2;
		displayName="Shemagh (Olive, Headset)";
		picture="\facewear_f_JCA_IE\data\G_shemagh_01\UI\icon_G_shemagh_01_headset_olive_F_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"facewear_f_JCA_IE\data\G_Shemagh_01\G_shemagh_01_olive_CO.paa",
			"headwear_f_JCA_IE\Data\H_Headset_Combat_01\H_Headset_Combat_01_olive_CO.paa"
		};
	};
	class JCA_G_shemagh_01_headset_glasses_black_F: JCA_G_shemagh_01_headset_glasses_base_F
	{
		author="Grave";
		scope=2;
		displayName="Shemagh (Black, Headset, Glasses)";
		picture="\facewear_f_JCA_IE\data\G_shemagh_01\UI\icon_G_shemagh_01_headset_glasses_black_F_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"facewear_f_JCA_IE\data\G_Shemagh_01\G_Shemagh_01_black_CO.paa",
			"headwear_f_JCA_IE\Data\H_Headset_Combat_01\H_Headset_Combat_01_black_CO.paa",
			"facewear_f_JCA_IE\data\G_Glasses_Tactical\G_Glasses_Tactical_black_tinted_CA.paa"
		};
	};
	class JCA_G_shemagh_01_headset_glasses_sand_F: JCA_G_shemagh_01_headset_glasses_base_F
	{
		author="Grave";
		scope=2;
		displayName="Shemagh (Sand, Headset, Glasses)";
		picture="\facewear_f_JCA_IE\data\G_shemagh_01\UI\icon_G_shemagh_01_headset_glasses_sand_F_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"facewear_f_JCA_IE\data\G_Shemagh_01\G_shemagh_01_sand_CO.paa",
			"headwear_f_JCA_IE\Data\H_Headset_Combat_01\H_Headset_Combat_01_sand_CO.paa",
			"facewear_f_JCA_IE\data\G_Glasses_Tactical\G_Glasses_Tactical_sand_tinted_CA.paa"
		};
	};
	class JCA_G_shemagh_01_headset_glasses_olive_F: JCA_G_shemagh_01_headset_glasses_base_F
	{
		author="Grave";
		scope=2;
		displayName="Shemagh (Olive, Headset, Glasses)";
		picture="\facewear_f_JCA_IE\data\G_shemagh_01\UI\icon_G_shemagh_01_headset_glasses_olive_F_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"facewear_f_JCA_IE\data\G_Shemagh_01\G_shemagh_01_olive_CO.paa",
			"headwear_f_JCA_IE\Data\H_Headset_Combat_01\H_Headset_Combat_01_olive_CO.paa",
			"facewear_f_JCA_IE\data\G_Glasses_Tactical\G_Glasses_Tactical_olive_tinted_CA.paa"
		};
	};
};
class cfgMods
{
	author="Grave";
	timepacked="1762702915";
};
