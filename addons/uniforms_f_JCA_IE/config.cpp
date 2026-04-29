class CfgPatches
{
	class Uniforms_F_JCA_IE
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
		units[]=
		{
			"Item_JCA_U_NBCD_Suit_01_black_F",
			"Item_JCA_U_NBCD_Suit_01_sand_F",
			"Item_JCA_U_NBCD_Suit_01_olive_F",
			"Item_JCA_U_NBCD_Suit_01_hood_black_F",
			"Item_JCA_U_NBCD_Suit_01_hood_sand_F",
			"Item_JCA_U_NBCD_Suit_01_hood_olive_F"
		};
		weapons[]=
		{
			"JCA_U_NBCD_Suit_01_black_F",
			"JCA_U_NBCD_Suit_01_sand_F",
			"JCA_U_NBCD_Suit_01_olive_F",
			"JCA_U_NBCD_Suit_01_hood_black_F",
			"JCA_U_NBCD_Suit_01_hood_sand_F",
			"JCA_U_NBCD_Suit_01_hood_olive_F"
		};
	};
};
class CfgVehicles
{
	class B_Soldier_base_F;
	class B_Soldier_F: B_Soldier_base_F
	{
		class EventHandlers;
	};
	class JCA_U_NBCD_Suit_01_Base_F: B_Soldier_F
	{
		scope=0;
		scopeCurator=0;
		model="uniforms_f_JCA_IE\Data\U_NBCD_Suit_01_F.p3d";
		modelSides[]={0,1,2,3,4,5,6,7};
		attenuationEffectType="CarAttenuation";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"insignia"
		};
		class Wounds
		{
			tex[]={};
			mat[]=
			{
				"a3\Characters_F_Enoch\Uniforms\Data\CBRN_Suit_01_F.rvmat",
				"a3\Characters_F_Enoch\Uniforms\Data\CBRN_Suit_01_injury_F.rvmat",
				"a3\Characters_F_Enoch\Uniforms\Data\CBRN_Suit_01_injury_F.rvmat",
				"A3\Characters_F\Common\Data\basicbody.rvmat",
				"A3\Characters_F\Common\Data\basicbody_injury.rvmat",
				"A3\Characters_F\Common\Data\basicbody_injury.rvmat",
				"a3\characters_f\heads\data\hl_white.rvmat",
				"a3\characters_f\heads\data\hl_white_injury.rvmat",
				"a3\characters_f\heads\data\hl_white_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_02_bald_muscular.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_02_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_02_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat",
				"A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_old.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat",
				"A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat",
				"A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular.rvmat",
				"A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular_injury.rvmat",
				"A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular_injury.rvmat",
				"A3\Characters_F_Exp\Heads\Data\hl_asian_02_bald_muscular.rvmat",
				"A3\Characters_F_Exp\Heads\Data\hl_asian_02_bald_muscular_injury.rvmat",
				"A3\Characters_F_Exp\Heads\Data\hl_asian_02_bald_muscular_injury.rvmat"
			};
		};
	};
	class JCA_U_NBCD_Suit_01_hood_Base_F: JCA_U_NBCD_Suit_01_Base_F
	{
		model="uniforms_f_JCA_IE\Data\U_NBCD_Suit_01_hood_F.p3d";
	};
	class JCA_U_NBCD_Suit_01_black_F: JCA_U_NBCD_Suit_01_Base_F
	{
		author="Grave & Nav";
		scope=1;
		scopeCurator=1;
		uniformClass="JCA_U_NBCD_Suit_01_black_F";
		hiddenSelectionsTextures[]=
		{
			"uniforms_f_JCA_IE\Data\U_NBCD\U_NBCD_Suit_01_01_black_CO.paa",
			"uniforms_f_JCA_IE\Data\U_NBCD\U_NBCD_Suit_01_02_black_CO.paa",
			"uniforms_f_JCA_IE\Data\U_NBCD\U_NBCD_Suit_01_03_black_CO.paa"
		};
	};
	class JCA_U_NBCD_Suit_01_sand_F: JCA_U_NBCD_Suit_01_Base_F
	{
		author="Grave & Nav";
		scope=1;
		scopeCurator=1;
		uniformClass="JCA_U_NBCD_Suit_01_sand_F";
		hiddenSelectionsTextures[]=
		{
			"uniforms_f_JCA_IE\Data\U_NBCD\U_NBCD_Suit_01_01_sand_CO.paa",
			"uniforms_f_JCA_IE\Data\U_NBCD\U_NBCD_Suit_01_02_black_CO.paa",
			"uniforms_f_JCA_IE\Data\U_NBCD\U_NBCD_Suit_01_03_black_CO.paa"
		};
	};
	class JCA_U_NBCD_Suit_01_olive_F: JCA_U_NBCD_Suit_01_Base_F
	{
		author="Grave & Nav";
		scope=1;
		scopeCurator=1;
		uniformClass="JCA_U_NBCD_Suit_01_olive_F";
		hiddenSelectionsTextures[]=
		{
			"uniforms_f_JCA_IE\Data\U_NBCD\U_NBCD_Suit_01_01_olive_CO.paa",
			"uniforms_f_JCA_IE\Data\U_NBCD\U_NBCD_Suit_01_02_black_CO.paa",
			"uniforms_f_JCA_IE\Data\U_NBCD\U_NBCD_Suit_01_03_black_CO.paa"
		};
	};
	class JCA_U_NBCD_Suit_01_hood_black_F: JCA_U_NBCD_Suit_01_hood_Base_F
	{
		author="Grave & Nav";
		scope=1;
		scopeCurator=1;
		uniformClass="JCA_U_NBCD_Suit_01_hood_black_F";
		hiddenSelectionsTextures[]=
		{
			"uniforms_f_JCA_IE\Data\U_NBCD\U_NBCD_Suit_01_01_black_CO.paa",
			"uniforms_f_JCA_IE\Data\U_NBCD\U_NBCD_Suit_01_02_black_CO.paa",
			"uniforms_f_JCA_IE\Data\U_NBCD\U_NBCD_Suit_01_03_black_CO.paa"
		};
	};
	class JCA_U_NBCD_Suit_01_hood_sand_F: JCA_U_NBCD_Suit_01_hood_Base_F
	{
		author="Grave & Nav";
		scope=1;
		scopeCurator=1;
		uniformClass="JCA_U_NBCD_Suit_01_hood_sand_F";
		hiddenSelectionsTextures[]=
		{
			"uniforms_f_JCA_IE\Data\U_NBCD\U_NBCD_Suit_01_01_sand_CO.paa",
			"uniforms_f_JCA_IE\Data\U_NBCD\U_NBCD_Suit_01_02_black_CO.paa",
			"uniforms_f_JCA_IE\Data\U_NBCD\U_NBCD_Suit_01_03_black_CO.paa"
		};
	};
	class JCA_U_NBCD_Suit_01_hood_olive_F: JCA_U_NBCD_Suit_01_hood_Base_F
	{
		author="Grave & Nav";
		scope=1;
		scopeCurator=1;
		uniformClass="JCA_U_NBCD_Suit_01_hood_olive_F";
		hiddenSelectionsTextures[]=
		{
			"uniforms_f_JCA_IE\Data\U_NBCD\U_NBCD_Suit_01_01_olive_CO.paa",
			"uniforms_f_JCA_IE\Data\U_NBCD\U_NBCD_Suit_01_02_black_CO.paa",
			"uniforms_f_JCA_IE\Data\U_NBCD\U_NBCD_Suit_01_03_black_CO.paa"
		};
	};
	class Item_Base_F;
	class Item_JCA_U_NBCD_Suit_01_black_F: Item_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="NBCD Suit (Black)";
		author="Grave";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Uniforms";
		vehicleClass="ItemsUniforms";
		model="\A3\Weapons_F\DummyWeapon.p3d";
		class TransportItems
		{
			class JCA_U_NBCD_Suit_01_black_F
			{
				name="JCA_U_NBCD_Suit_01_black_F";
				count=1;
			};
		};
	};
	class Item_JCA_U_NBCD_Suit_01_sand_F: Item_JCA_U_NBCD_Suit_01_black_F
	{
		displayName="NBCD Suit (Sand)";
		class TransportItems
		{
			class JCA_U_NBCD_Suit_01_sand_F
			{
				name="JCA_U_NBCD_Suit_01_sand_F";
				count=1;
			};
		};
	};
	class Item_JCA_U_NBCD_Suit_01_olive_F: Item_JCA_U_NBCD_Suit_01_black_F
	{
		displayName="NBCD Suit (Olive)";
		class TransportItems
		{
			class JCA_U_NBCD_Suit_01_olive_F
			{
				name="JCA_U_NBCD_Suit_01_olive_F";
				count=1;
			};
		};
	};
	class Item_JCA_U_NBCD_Suit_01_hood_black_F: Item_JCA_U_NBCD_Suit_01_black_F
	{
		displayName="NBCD Suit (Black, Hood)";
		class TransportItems
		{
			class JCA_U_NBCD_Suit_01_hood_black_F
			{
				name="JCA_U_NBCD_Suit_01_hood_black_F";
				count=1;
			};
		};
	};
	class Item_JCA_U_NBCD_Suit_01_hood_sand_F: Item_JCA_U_NBCD_Suit_01_black_F
	{
		displayName="NBCD Suit (Sand, Hood)";
		class TransportItems
		{
			class JCA_U_NBCD_Suit_01_hood_sand_F
			{
				name="JCA_U_NBCD_Suit_01_hood_sand_F";
				count=1;
			};
		};
	};
	class Item_JCA_U_NBCD_Suit_01_hood_olive_F: Item_JCA_U_NBCD_Suit_01_black_F
	{
		displayName="NBCD Suit (Olive, Hood)";
		class TransportItems
		{
			class JCA_U_NBCD_Suit_01_hood_olive_F
			{
				name="JCA_U_NBCD_Suit_01_hood_olive_F";
				count=1;
			};
		};
	};
};
class CfgWeapons
{
	class UniformItem;
	class ItemCore;
	class Uniform_Base: ItemCore
	{
		class ItemInfo: UniformItem
		{
		};
	};
	class JCA_U_Base_F: Uniform_Base
	{
		class ItemInfo: ItemInfo
		{
			uniformType="Neopren";
		};
	};
	class JCA_U_NBCD_Suit_01_black_F: JCA_U_Base_F
	{
		author="Grave & Nav";
		scope=2;
		displayName="NBCD Suit (Black)";
		picture="\uniforms_f_JCA_IE\Data\U_NBCD\UI\Icon_U_NBCD_Suit_01_black_F_CA.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"uniforms_f_JCA_IE\Data\U_NBCD\U_NBCD_Suit_01_01_black_CO.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="-";
			uniformClass="JCA_U_NBCD_Suit_01_black_F";
			containerClass="Supply50";
			mass=50;
		};
	};
	class JCA_U_NBCD_Suit_01_sand_F: JCA_U_Base_F
	{
		author="Grave & Nav";
		scope=2;
		displayName="NBCD Suit (Sand)";
		picture="\uniforms_f_JCA_IE\Data\U_NBCD\UI\Icon_U_NBCD_Suit_01_sand_F_CA.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"uniforms_f_JCA_IE\Data\U_NBCD\U_NBCD_Suit_01_01_sand_CO.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="-";
			uniformClass="JCA_U_NBCD_Suit_01_sand_F";
			containerClass="Supply50";
			mass=50;
		};
	};
	class JCA_U_NBCD_Suit_01_olive_F: JCA_U_Base_F
	{
		author="Grave & Nav";
		scope=2;
		displayName="NBCD Suit (Olive)";
		picture="\uniforms_f_JCA_IE\Data\U_NBCD\UI\Icon_U_NBCD_Suit_01_olive_F_CA.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"uniforms_f_JCA_IE\Data\U_NBCD\U_NBCD_Suit_01_01_olive_CO.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="-";
			uniformClass="JCA_U_NBCD_Suit_01_olive_F";
			containerClass="Supply50";
			mass=50;
		};
	};
	class JCA_U_NBCD_Suit_01_hood_black_F: JCA_U_Base_F
	{
		author="Grave & Nav";
		scope=2;
		displayName="NBCD Suit (Black, Hood)";
		picture="\uniforms_f_JCA_IE\Data\U_NBCD\UI\Icon_U_NBCD_Suit_01_hood_black_F_CA.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"uniforms_f_JCA_IE\Data\U_NBCD\U_NBCD_Suit_01_01_black_CO.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="-";
			uniformClass="JCA_U_NBCD_Suit_01_hood_black_F";
			containerClass="Supply50";
			mass=50;
		};
	};
	class JCA_U_NBCD_Suit_01_hood_sand_F: JCA_U_Base_F
	{
		author="Grave & Nav";
		scope=2;
		displayName="NBCD Suit (Sand, Hood)";
		picture="\uniforms_f_JCA_IE\Data\U_NBCD\UI\Icon_U_NBCD_Suit_01_hood_sand_F_CA.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"uniforms_f_JCA_IE\Data\U_NBCD\U_NBCD_Suit_01_01_sand_CO.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="-";
			uniformClass="JCA_U_NBCD_Suit_01_hood_sand_F";
			containerClass="Supply50";
			mass=50;
		};
	};
	class JCA_U_NBCD_Suit_01_hood_olive_F: JCA_U_Base_F
	{
		author="Grave & Nav";
		scope=2;
		displayName="NBCD Suit (Olive, Hood)";
		picture="\uniforms_f_JCA_IE\Data\U_NBCD\UI\Icon_U_NBCD_Suit_01_hood_olive_F_CA.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"uniforms_f_JCA_IE\Data\U_NBCD\U_NBCD_Suit_01_01_olive_CO.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="-";
			uniformClass="JCA_U_NBCD_Suit_01_hood_olive_F";
			containerClass="Supply50";
			mass=50;
		};
	};
};
class cfgMods
{
	author="Grave";
	timepacked="1770508906";
};
