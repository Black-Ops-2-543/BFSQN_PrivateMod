class CfgMagazineWells
{
	class CBA_762x51_SCAR {
		NIA_mags[] = { __762SCARH_MAGS_SHORT };
	};
	class CBA_762x51_SCAR_EGLM {
		NIA_mags_EGLM[] = { __762SCARH_MAGS };
	};
	class CBA_556x45_STANAG {
		NIA_mags_SCARL[] = {
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
		NIA_mags_SCARL[] =
		{
			"hlc_30rnd_300BLK_SCAR",
			"hlc_30rnd_300BLK_SCAR_T",
			"hlc_30rnd_300BLK_SCAR_S"
		};
	};
};
class CfgMagazines {
	class 30Rnd_556x45_Stanag;

	class hlc_20Rnd_762x51_B_SCARH : 30Rnd_556x45_Stanag
	{
		dlc = "Niarms_SCAR";
		author = "Toadie, Spartan0536";
		ammo = "HLC_762x51_ball";
		count = 20;
		descriptionshort = $STR_NIA_DESC_20Rnd_762x51_B_fal;
		displayname = $STR_NIA_20rnd_762x51_b_scarh;
		initspeed = 908.4;
		__SMALLMASS(25.4, 20, 265);
		lastroundstracer = 1;
		picture = "\nia_wp_SCAR\tex\ui\ammo\m_SCARH-Black_EPR_ca.paa";
		model = "\nia_wp_SCAR\mesh\Mag\20rnd_762NATO_MK17.p3d";
		modelSpecial = \nia_wp_SCAR\mesh\Mag\Proxy\20rnd_762NATO_Mk17_OEM;
		hiddenSelections[] = { "camo","camo2" };
		hiddenSelectionsTextures[] = { "nia_wp_SCAR\tex\Toadie_SCAR\Magazine_SCARH_OEM_co.tga","nia_wp_scar\tex\toadie_scar\acc_30cal_magpul_green_co.tga"};
		HiddenSelectionsMaterials[] = { "nia_wp_SCAR\mat\Magazine_SCARH_OEM.rvmat" };
		modelSpecialIsProxy = 1;
		scope = 2;
		tracersevery = 0;
		displaynameshort = $STR_NIA_762NATO_EPR;
	};
	class hlc_20Rnd_762x51_mk316_SCARH : hlc_20Rnd_762x51_b_SCARH {
		author = "Toadie, Spartan0536";
		ammo = "HLC_762x51_MK316_20in";
		count = 20;
		descriptionshort = $STR_NIA_DESC_20Rnd_762x51_sblr_fal;
		displayname = $STR_NIA_20rnd_762x51_Mk316_scarh;
		initspeed = 731;
		__SMALLMASS(25.4, 20, 265);
		lastroundstracer = 1;
		picture = "\nia_wp_SCAR\tex\ui\ammo\m_SCARH-Black_SPR_ca.paa";
		model = "\nia_wp_SCAR\mesh\Mag\20rnd_762NATO_MK17.p3d";
		scope = 2;
		tracersevery = 0;
		displaynameshort = $STR_NIA_762NATO_SBLR;
	};
	class hlc_20Rnd_762x51_barrier_SCARH : hlc_20Rnd_762x51_b_SCARH {
		author = "Toadie, Spartan0536";
		ammo = "HLC_762x51_Barrier";
		count = 20;
		descriptionshort = $STR_NIA_DESC_20Rnd_762x51_sost_fal;
		displayname = $STR_NIA_20rnd_762x51_SOST_scarh;
		model = "\nia_wp_SCAR\mesh\Mag\20rnd_762NATO_MK17.p3d";
		initspeed = 890.4;
		__SMALLMASS(22.52, 20, 265);
		lastroundstracer = 1;
		picture = "\nia_wp_SCAR\tex\ui\ammo\m_SCARH-Black_SOST_ca.paa";
		scope = 2;
		tracersevery = 0;
		displaynameshort = $STR_NIA_762NATO_SOST;
	};
	class hlc_20Rnd_762x51_T_SCARH : hlc_20Rnd_762x51_b_SCARH {
		author = "Toadie, Spartan0536";
		ammo = "HLC_762x51_tracer";
		descriptionshort = $STR_NIA_DESC_20Rnd_762x51_T_fal;
		displayname = $STR_NIA_20rnd_762x51_Tracer_scarh;
		model = "\nia_wp_SCAR\mesh\Mag\20rnd_762NATO_MK17.p3d";
		lastroundstracer = 0;
		scope = 2;
		__SMALLMASS(23.856836, 20, 265);
		tracersevery = 1;
		picture = "\nia_wp_SCAR\tex\ui\ammo\m_SCARH-Black_T_ca.paa";
		displaynameshort = $STR_NIA_762NATO_Tracer;
	};
	class hlc_20Rnd_762x51_TDim_SCARH : hlc_20Rnd_762x51_b_SCARH {
		author = "Toadie, Spartan0536";
		ammo = "HLC_B_762x51_Tracer_Dim";
		descriptionshort = $STR_NIA_DESC_20Rnd_762x51_Tdim_fal;
		displayname = $STR_NIA_20rnd_762x51_IRDIM_scarh;
		model = "\nia_wp_SCAR\mesh\Mag\20rnd_762NATO_MK17.p3d";
		lastroundstracer = 0;
		scope = 2;
		__SMALLMASS(23.856836, 20, 265);
		tracersevery = 1;
		picture = "\nia_wp_SCAR\tex\ui\ammo\m_SCARH-Black_T_ca.paa";
		displaynameshort = $STR_NIA_762NATO_IRDIM;
	};
	class hlc_20rnd_762x51_M_SCARH : hlc_20Rnd_762x51_b_SCARH {
		author = "Toadie, Spartan0536";
		count = 20;
		__SMALLMASS(24.628, 20, 265);
		descriptionshort = $STR_NIA_DESC_20Rnd_762x51_M_fal;
		displayname = $STR_NIA_20rnd_762x51_M_FAL;
		model = "\nia_wp_SCAR\mesh\Mag\20rnd_762NATO_MK17.p3d";
		initspeed = 908.4;
		lastroundstracer = 3;
		picture = "\nia_wp_SCAR\tex\ui\ammo\m_SCARH-Black_m_ca.paa";
		scope = 2;
		tracersevery = 4;
		displaynameshort = $STR_NIA_762NATO_M;
	};
	class hlc_20rnd_762x51_MDIM_SCARH : hlc_20Rnd_762x51_b_SCARH {
		ammo = "HLC_B_762x51_Tracer_Dim";
		author = "Toadie, Spartan0536";
		count = 20;
		descriptionshort = $STR_NIA_DESC_20Rnd_762x51_Mdim_fal;
		displayname = $STR_NIA_20rnd_762x51_MDim_scarh;
		model = "\nia_wp_SCAR\mesh\Mag\20rnd_762NATO_MK17.p3d";
		initspeed = 908.4;
		__SMALLMASS(24.628, 20, 265);
		lastroundstracer = 3;
		picture = "\nia_wp_SCAR\tex\ui\ammo\m_SCARH-Black_m_ca.paa";
		scope = 2;
		tracersevery = 4;
		displaynameshort = $STR_NIA_762NATO_MDim;
	};
	class hlc_20Rnd_762x51_S_SCARH : hlc_20Rnd_762x51_b_SCARH {
		author = "Toadie, Spartan0536";
		ammo = "HLC_762x51_BTSub";
		descriptionshort = $STR_NIA_DESC_20Rnd_762x51_s_fal;
		displayname = $STR_NIA_20rnd_762x51_Subsonic_scarh;
		model = "\nia_wp_SCAR\mesh\Mag\20rnd_762NATO_MK17.p3d";
		lastroundstracer = 0;
		scope = 2;
		__SMALLMASS(27.1046, 20, 265);
		tracersevery = 0;
		initspeed = 325;
		displaynameshort = $STR_NIA_762NATO_Subsonic;
		picture = "\nia_wp_SCAR\tex\ui\ammo\m_SCARH-Black_s_ca.paa";
	};

	class hlc_20Rnd_762x51_B_SCARH_Tan : hlc_20Rnd_762x51_B_SCARH
	{
		dlc = "Niarms_SCAR";
		author = "Toadie, Spartan0536";
		displayname = $STR_NIA_20rnd_762x51_b_scarh_Tan;
		hiddenSelectionsTextures[] = { "nia_wp_SCAR\tex\Toadie_SCAR\Magazine_SCARH_OEM_tan_co.paa" };
		picture = "\nia_wp_SCAR\tex\ui\ammo\m_SCARH-TAN_EPR_ca.paa";
	};
	class hlc_20Rnd_762x51_mk316_SCARH_tan :hlc_20Rnd_762x51_mk316_SCARH
	{
		dlc = "Niarms_SCAR";
		author = "Toadie, Spartan0536";
		displayname = $STR_NIA_20rnd_762x51_Mk316_scarh_Tan;
		hiddenSelectionsTextures[] = { "nia_wp_SCAR\tex\Toadie_SCAR\Magazine_SCARH_OEM_tan_co.paa" };
		picture = "\nia_wp_SCAR\tex\ui\ammo\m_SCARH-TAN_SPR_ca.paa";
	};
	class hlc_20Rnd_762x51_barrier_SCARH_tan :hlc_20Rnd_762x51_barrier_SCARH
	{
		dlc = "Niarms_SCAR";
		author = "Toadie, Spartan0536";
		displayname = $STR_NIA_20rnd_762x51_SOST_scarh_Tan;
		hiddenSelectionsTextures[] = { "nia_wp_SCAR\tex\Toadie_SCAR\Magazine_SCARH_OEM_tan_co.paa" };
		picture = "\nia_wp_SCAR\tex\ui\ammo\m_SCARH-TAN_SOST_ca.paa";
	};
	class hlc_20Rnd_762x51_TDim_SCARH_tan :hlc_20Rnd_762x51_TDim_SCARH
	{
		dlc = "Niarms_SCAR";
		author = "Toadie, Spartan0536";
		displayname = $STR_NIA_20rnd_762x51_IRDIM_scarh_Tan;
		hiddenSelectionsTextures[] = { "nia_wp_SCAR\tex\Toadie_SCAR\Magazine_SCARH_OEM_tan_co.paa" };
		picture = "\nia_wp_SCAR\tex\ui\ammo\m_SCARH-TAN_T_ca.paa";
	};
	class hlc_20Rnd_762x51_T_SCARH_tan :hlc_20Rnd_762x51_T_SCARH
	{
		dlc = "Niarms_SCAR";
		author = "Toadie, Spartan0536";
		displayname = $STR_NIA_20rnd_762x51_Tracer_scarh_Tan;
		hiddenSelectionsTextures[] = { "nia_wp_SCAR\tex\Toadie_SCAR\Magazine_SCARH_OEM_tan_co.paa" };
		picture = "\nia_wp_SCAR\tex\ui\ammo\m_SCARH-TAN_T_ca.paa";
	};
	class hlc_20Rnd_762x51_M_SCARH_tan :hlc_20Rnd_762x51_M_SCARH
	{
		dlc = "Niarms_SCAR";
		author = "Toadie, Spartan0536";
		displayname = $STR_NIA_20rnd_762x51_m_scarh_Tan;
		hiddenSelectionsTextures[] = { "nia_wp_SCAR\tex\Toadie_SCAR\Magazine_SCARH_OEM_tan_co.paa" };
		picture = "\nia_wp_SCAR\tex\ui\ammo\m_SCARH-TAN_M_ca.paa";
	};
	class hlc_20Rnd_762x51_MDIM_SCARH_tan :hlc_20Rnd_762x51_MDIM_SCARH
	{
		dlc = "Niarms_SCAR";
		author = "Toadie, Spartan0536";
		displayname = $STR_NIA_20rnd_762x51_MDIM_scarh_Tan;
		hiddenSelectionsTextures[] = { "nia_wp_SCAR\tex\Toadie_SCAR\Magazine_SCARH_OEM_tan_co.paa" };
		picture = "\nia_wp_SCAR\tex\ui\ammo\m_SCARH-TAN_M_ca.paa";
	};
	class hlc_20Rnd_762x51_S_SCARH_tan :hlc_20Rnd_762x51_S_SCARH
	{
		dlc = "Niarms_SCAR";
		author = "Toadie, Spartan0536";
		displayname = $STR_NIA_20rnd_762x51_Subsonic_scarh_Tan;
		hiddenSelectionsTextures[] = { "nia_wp_SCAR\tex\Toadie_SCAR\Magazine_SCARH_OEM_tan_co.paa" };
		picture = "\nia_wp_SCAR\tex\ui\ammo\m_SCARH-TAN_S_ca.paa";
	};

	class hlc_20Rnd_762x51_B_SCARH_camo : hlc_20Rnd_762x51_B_SCARH
	{
		dlc = "Niarms_SCAR";
		author = "Toadie, Spartan0536";
		displayname = $STR_NIA_20rnd_762x51_b_scarh_camo;
		hiddenSelectionsTextures[] = { "nia_wp_SCAR\tex\Toadie_SCAR\Magazine_SCARH_OEM_camo_co.paa" };
		HiddenSelectionsMaterials[] = { "nia_wp_SCAR\mat\Magazine_SCARH_OEM_Camo.rvmat" };
		picture = "\nia_wp_SCAR\tex\ui\ammo\m_SCARH-camo_EPR_ca.paa";
	};
	class hlc_20Rnd_762x51_mk316_SCARH_camo :hlc_20Rnd_762x51_mk316_SCARH
	{
		dlc = "Niarms_SCAR";
		author = "Toadie, Spartan0536";
		displayname = $STR_NIA_20rnd_762x51_Mk316_scarh_camo;
		hiddenSelectionsTextures[] = { "nia_wp_SCAR\tex\Toadie_SCAR\Magazine_SCARH_OEM_camo_co.paa" };
		HiddenSelectionsMaterials[] = { "nia_wp_SCAR\mat\Magazine_SCARH_OEM_Camo.rvmat" };
		picture = "\nia_wp_SCAR\tex\ui\ammo\m_SCARH-camo_SPR_ca.paa";
	};
	class hlc_20Rnd_762x51_barrier_SCARH_camo :hlc_20Rnd_762x51_barrier_SCARH
	{
		dlc = "Niarms_SCAR";
		author = "Toadie, Spartan0536";
		displayname = $STR_NIA_20rnd_762x51_SOST_scarh_camo;
		hiddenSelectionsTextures[] = { "nia_wp_SCAR\tex\Toadie_SCAR\Magazine_SCARH_OEM_camo_co.paa" };
		HiddenSelectionsMaterials[] = { "nia_wp_SCAR\mat\Magazine_SCARH_OEM_Camo.rvmat" };
		picture = "\nia_wp_SCAR\tex\ui\ammo\m_SCARH-camo_SOST_ca.paa";
	};
	class hlc_20Rnd_762x51_TDim_SCARH_camo :hlc_20Rnd_762x51_TDim_SCARH
	{
		dlc = "Niarms_SCAR";
		author = "Toadie, Spartan0536";
		displayname = $STR_NIA_20rnd_762x51_IRDIM_scarh_camo;
		hiddenSelectionsTextures[] = { "nia_wp_SCAR\tex\Toadie_SCAR\Magazine_SCARH_OEM_camo_co.paa" };
		HiddenSelectionsMaterials[] = { "nia_wp_SCAR\mat\Magazine_SCARH_OEM_Camo.rvmat" };
		picture = "\nia_wp_SCAR\tex\ui\ammo\m_SCARH-camo_t_ca.paa";
	};
	class hlc_20Rnd_762x51_T_SCARH_camo :hlc_20Rnd_762x51_T_SCARH
	{
		dlc = "Niarms_SCAR";
		author = "Toadie, Spartan0536";
		displayname = $STR_NIA_20rnd_762x51_Tracer_scarh_camo;
		hiddenSelectionsTextures[] = { "nia_wp_SCAR\tex\Toadie_SCAR\Magazine_SCARH_OEM_camo_co.paa" };
		HiddenSelectionsMaterials[] = { "nia_wp_SCAR\mat\Magazine_SCARH_OEM_Camo.rvmat" };
		picture = "\nia_wp_SCAR\tex\ui\ammo\m_SCARH-camo_t_ca.paa";
	};
	class hlc_20Rnd_762x51_M_SCARH_camo :hlc_20Rnd_762x51_M_SCARH
	{
		dlc = "Niarms_SCAR";
		author = "Toadie, Spartan0536";
		displayname = $STR_NIA_20rnd_762x51_m_scarh_camo;
		hiddenSelectionsTextures[] = { "nia_wp_SCAR\tex\Toadie_SCAR\Magazine_SCARH_OEM_camo_co.paa" };
		HiddenSelectionsMaterials[] = { "nia_wp_SCAR\mat\Magazine_SCARH_OEM_Camo.rvmat" };
		picture = "\nia_wp_SCAR\tex\ui\ammo\m_SCARH-camo_m_ca.paa";
	};
	class hlc_20Rnd_762x51_MDIM_SCARH_camo :hlc_20Rnd_762x51_MDIM_SCARH
	{
		dlc = "Niarms_SCAR";
		author = "Toadie, Spartan0536";
		displayname = $STR_NIA_20rnd_762x51_MDIM_scarh_camo;
		hiddenSelectionsTextures[] = { "nia_wp_SCAR\tex\Toadie_SCAR\Magazine_SCARH_OEM_camo_co.paa" };
		HiddenSelectionsMaterials[] = { "nia_wp_SCAR\mat\Magazine_SCARH_OEM_Camo.rvmat" };
		picture = "\nia_wp_SCAR\tex\ui\ammo\m_SCARH-camo_m_ca.paa";
	};
	class hlc_20Rnd_762x51_S_SCARH_camo :hlc_20Rnd_762x51_S_SCARH
	{
		dlc = "Niarms_SCAR";
		author = "Toadie, Spartan0536";
		displayname = $STR_NIA_20rnd_762x51_Subsonic_scarh_camo;
		hiddenSelectionsTextures[] = { "nia_wp_SCAR\tex\Toadie_SCAR\Magazine_SCARH_OEM_camo_co.paa" };
		HiddenSelectionsMaterials[] = { "nia_wp_SCAR\mat\Magazine_SCARH_OEM_Camo.rvmat" };
		picture = "\nia_wp_SCAR\tex\ui\ammo\m_SCARH-camo_s_ca.paa";
	};

	class hlc_20Rnd_762x51_B_SCARH_MW2 :hlc_20Rnd_762x51_B_SCARH
	{
		dlc = "Niarms_SCAR";
		author = "Toadie, Spartan0536";
		model = "\nia_wp_SCAR\mesh\Mag\20rnd_762NATO_MK17_Magpul.p3d";
		modelSpecial = \nia_wp_SCAR\mesh\Mag\Proxy\20rnd_762NATO_Mk17_OEM_Magpul;
		displayname = $STR_NIA_20rnd_762x51_b_scarh_MW2;
		picture = "\nia_wp_SCAR\tex\ui\ammo\m_SCARH-MW2_EPR_ca.paa";
	};
	class hlc_20Rnd_762x51_barrier_SCARH_MW2 :hlc_20Rnd_762x51_barrier_SCARH
	{
		dlc = "Niarms_SCAR";
		author = "Toadie, Spartan0536";
		model = "\nia_wp_SCAR\mesh\Mag\20rnd_762NATO_MK17_Magpul.p3d";
		modelSpecial = \nia_wp_SCAR\mesh\Mag\Proxy\20rnd_762NATO_Mk17_OEM_Magpul;
		picture = "\nia_wp_SCAR\tex\ui\ammo\m_SCARH-MW2_spr_ca.paa";
		displayname = $STR_NIA_20rnd_762x51_SOST_scarh_MW2;
	};
	class hlc_20Rnd_762x51_mk316_SCARH_MW2 :hlc_20Rnd_762x51_mk316_SCARH
	{
		dlc = "Niarms_SCAR";
		author = "Toadie, Spartan0536";
		model = "\nia_wp_SCAR\mesh\Mag\20rnd_762NATO_MK17_Magpul.p3d";
		modelSpecial = \nia_wp_SCAR\mesh\Mag\Proxy\20rnd_762NATO_Mk17_OEM_Magpul;
		picture = "\nia_wp_SCAR\tex\ui\ammo\m_SCARH-MW2_sost_ca.paa";
		displayname = $STR_NIA_20rnd_762x51_mk316_scarh_MW2;
	};
	class hlc_20Rnd_762x51_TDIM_SCARH_MW2 :hlc_20Rnd_762x51_TDIM_SCARH
	{
		dlc = "Niarms_SCAR";
		author = "Toadie, Spartan0536";
		model = "\nia_wp_SCAR\mesh\Mag\20rnd_762NATO_MK17_Magpul.p3d";
		modelSpecial = \nia_wp_SCAR\mesh\Mag\Proxy\20rnd_762NATO_Mk17_OEM_Magpul;
		picture = "\nia_wp_SCAR\tex\ui\ammo\m_SCARH-MW2_t_ca.paa";
		displayname = $STR_NIA_20rnd_762x51_IRDIM_scarh_MW2;
	};
	class hlc_20Rnd_762x51_T_SCARH_MW2 :hlc_20Rnd_762x51_T_SCARH
	{
		dlc = "Niarms_SCAR";
		author = "Toadie, Spartan0536";
		model = "\nia_wp_SCAR\mesh\Mag\20rnd_762NATO_MK17_Magpul.p3d";
		modelSpecial = \nia_wp_SCAR\mesh\Mag\Proxy\20rnd_762NATO_Mk17_OEM_Magpul;
		picture = "\nia_wp_SCAR\tex\ui\ammo\m_SCARH-MW2_t_ca.paa";
		displayname = $STR_NIA_20rnd_762x51_Tracer_scarh_MW2;
	};
	class hlc_20Rnd_762x51_M_SCARH_MW2 :hlc_20Rnd_762x51_M_SCARH
	{
		dlc = "Niarms_SCAR";
		author = "Toadie, Spartan0536";
		model = "\nia_wp_SCAR\mesh\Mag\20rnd_762NATO_MK17_Magpul.p3d";
		modelSpecial = \nia_wp_SCAR\mesh\Mag\Proxy\20rnd_762NATO_Mk17_OEM_Magpul;
		displayname = $STR_NIA_20rnd_762x51_M_scarh_MW2;
		picture = "\nia_wp_SCAR\tex\ui\ammo\m_SCARH-MW2_m_ca.paa";
	};
	class hlc_20Rnd_762x51_MDIM_SCARH_MW2 :hlc_20Rnd_762x51_MDIM_SCARH
	{
		dlc = "Niarms_SCAR";
		author = "Toadie, Spartan0536";
		model = "\nia_wp_SCAR\mesh\Mag\20rnd_762NATO_MK17_Magpul.p3d";
		modelSpecial = \nia_wp_SCAR\mesh\Mag\Proxy\20rnd_762NATO_Mk17_OEM_Magpul;
		picture = "\nia_wp_SCAR\tex\ui\ammo\m_SCARH-MW2_m_ca.paa";
		displayname = $STR_NIA_20rnd_762x51_Mdim_scarh_MW2;
	};
	class hlc_20Rnd_762x51_S_SCARH_MW2 :hlc_20Rnd_762x51_S_SCARH
	{
		dlc = "Niarms_SCAR";
		author = "Toadie, Spartan0536";
		model = "\nia_wp_SCAR\mesh\Mag\20rnd_762NATO_MK17_Magpul.p3d";
		modelSpecial = \nia_wp_SCAR\mesh\Mag\Proxy\20rnd_762NATO_Mk17_OEM_Magpul;
		picture = "\nia_wp_SCAR\tex\ui\ammo\m_SCARH-MW2_s_ca.paa";
		displayname = $STR_NIA_20rnd_762x51_subsonic_scarh_MW2;
	};

	//We ain't using these no more 
	/*
	class hlc_50Rnd_762x51_B_SCARH : 30Rnd_556x45_Stanag
	{
		dlc = "Niarms_FAL";
		author = "Toadie, Spartan0536";
		ammo = "HLC_762x51_ball";
		count = 50;
		descriptionshort = $STR_NIA_DESC_50Rnd_762x51_B_fal;
		displayname = $STR_NIA_50Rnd_762x51_B_fal;
		initspeed = 908.4;
		__SMALLMASS(25.4, 50, 700);
		lastroundstracer = 1;
		picture = "\nia_wp_SCAR\tex\ui\ammo\m_FAL50_EPR_ca.paa";
		model = "\hlc_core\mesh\magazines\50rnd_762NATO_XMAG.p3d";
		modelSpecial = \hlc_core\mesh\magazines\proxies\50rnd_762NATO_XFAL;
		modelSpecialIsProxy = 1;
		scope = 2;
		tracersevery = 0;
		displaynameshort = $STR_NIA_762NATO_EPR;
	};
	class hlc_50Rnd_762x51_T_SCARH : hlc_50Rnd_762x51_b_SCARH {
		author = "Toadie, Spartan0536";
		ammo = "HLC_762x51_tracer";
		descriptionshort = $STR_NIA_DESC_50Rnd_762x51_T_fal;
		displayname = $STR_NIA_50Rnd_762x51_T_fal;
		model = "\hlc_core\mesh\magazines\50rnd_762NATO_XMAG.p3d";
		lastroundstracer = 0;
		scope = 2;
		__SMALLMASS(23.856836, 50, 700);
		tracersevery = 1;
		picture = "\nia_wp_SCAR\tex\ui\ammo\m_FAL50_T_ca.paa";
		displaynameshort = $STR_NIA_762NATO_Tracer;
	};
	class hlc_50Rnd_762x51_TDim_SCARH : hlc_50Rnd_762x51_b_SCARH {
		author = "Toadie, Spartan0536";
		ammo = "HLC_B_762x51_Tracer_Dim";
		descriptionshort = $STR_NIA_DESC_50Rnd_762x51_Tdim_fal;
		displayname = $STR_NIA_50Rnd_762x51_Tdim_fal;
		model = "\hlc_core\mesh\magazines\50rnd_762NATO_XMAG.p3d";
		lastroundstracer = 0;
		scope = 2;
		__SMALLMASS(23.856836, 50, 700);
		tracersevery = 1;
		picture = "\nia_wp_SCAR\tex\ui\ammo\m_FAL50_T_ca.paa";
		displaynameshort = $STR_NIA_762NATO_IRDIM;
	};
	class hlc_50rnd_762x51_M_SCARH : hlc_50Rnd_762x51_b_SCARH {
		author = "Toadie, Spartan0536";
		count = 50;
		__SMALLMASS(24.628, 50, 700);
		descriptionshort = $STR_NIA_DESC_50Rnd_762x51_m_fal;
		displayname = $STR_NIA_50rnd_762x51_M_FAL;
		model = "\hlc_core\mesh\magazines\50rnd_762NATO_XMAG.p3d";
		initspeed = 908.4;
		lastroundstracer = 3;
		picture = "\nia_wp_SCAR\tex\ui\ammo\m_FAL50_M_ca.paa";
		scope = 2;
		tracersevery = 4;
		displaynameshort = $STR_NIA_762NATO_M;
	};
	class hlc_50rnd_762x51_MDIM_SCARH : hlc_50Rnd_762x51_b_SCARH {
		ammo = "HLC_B_762x51_Tracer_Dim";
		author = "Toadie, Spartan0536";
		count = 50;
		descriptionshort = $STR_NIA_DESC_50Rnd_762x51_Mdim_fal;
		displayname = $STR_NIA_50rnd_762x51_MDIM_FAL;
		model = "\hlc_core\mesh\magazines\50rnd_762NATO_XMAG.p3d";
		initspeed = 908.4;
		__SMALLMASS(24.628, 50, 700);
		lastroundstracer = 3;
		picture = "\nia_wp_SCAR\tex\ui\ammo\m_FAL50_M_ca.paa";
		scope = 2;
		tracersevery = 4;
		displaynameshort = $STR_NIA_762NATO_MDim;
	};
*/

	class hlc_10Rnd_762x51_B_SCARH : 30Rnd_556x45_Stanag{
		author = "Toadie";
		ammo = "HLC_762x51_ball";
		count = 10;
		descriptionshort = $STR_NIA_DESC_10Rnd_762x51_B_fal;
		displayname = $STR_NIA_10Rnd_762x51_B_scarh;
		initspeed = 870;
		__SMALLMASS(25.4, 10, 145.14);
		lastroundstracer = 0;
		picture = "\nia_wp_SCAR\tex\ui\ammo\M_SCARH_10Rrnd-Black_EPR_ca.paa";
		model = "\nia_wp_SCAR\mesh\Mag\10rnd_762NATO_MK17.p3d";
		modelSpecial = \nia_wp_SCAR\mesh\Mag\proxy\10rnd_762NATO_Mk17_OEM;
		modelSpecialIsProxy = 1;
		hiddenSelections[] = { "camo" };
		hiddenSelectionsTextures[] = { "nia_wp_SCAR\tex\Toadie_SCAR\Magazine_SCARH_OEM_co.tga" };
		HiddenSelectionsMaterials[] = { "nia_wp_SCAR\mat\Magazine_SCARH_OEM.rvmat" };
		scope = 2;
		tracersevery = 0;
		displaynameshort = $STR_NIA_762NATO_EPR;
	};
	class hlc_10Rnd_762x51_mk316_SCARH : hlc_10Rnd_762x51_b_SCARH {
		author = "Toadie";
		ammo = "HLC_762x51_MK316_20in";
		count = 10;
		descriptionshort = $STR_NIA_DESC_10Rnd_762x51_sblr_fal;
		displayname = $STR_NIA_10Rnd_762x51_Mk316_scarh;
		initspeed = 890;
		__SMALLMASS(25.4, 10, 145.14);
		lastroundstracer = 0;
		picture = "\nia_wp_SCAR\tex\ui\ammo\M_SCARH_10Rrnd-Black_SPR_ca.paa";
		scope = 2;
		tracersevery = 0;
		displaynameshort = $STR_NIA_762NATO_SBLR;
	};
	class hlc_10Rnd_762x51_barrier_SCARH : hlc_10Rnd_762x51_b_SCARH {
		author = "Toadie";
		ammo = "HLC_762x51_Barrier";
		count = 10;
		descriptionshort = $STR_NIA_DESC_10Rnd_762x51_sost_fal;
		displayname = $STR_NIA_10Rnd_762x51_SOST_scarh;
		initspeed = 850;
		__SMALLMASS(22.52, 10, 145.14);
		lastroundstracer = 0;
		picture = "\nia_wp_SCAR\tex\ui\ammo\M_SCARH_10Rrnd-Black_SOST_ca.paa";
		scope = 2;
		tracersevery = 0;
		displaynameshort = $STR_NIA_762NATO_SOST;
	};
	class hlc_10Rnd_762x51_T_SCARH : hlc_10Rnd_762x51_b_SCARH {
		author = "Toadie";
		ammo = "HLC_762x51_tracer";
		descriptionshort = $STR_NIA_DESC_10Rnd_762x51_T_fal;
		displayname = $STR_NIA_10Rnd_762x51_Tracer_scarh;
		lastroundstracer = 0;
		scope = 2;
		__SMALLMASS(23.856836, 10, 145.14);
		tracersevery = 1;
		picture = "\nia_wp_SCAR\tex\ui\ammo\M_SCARH_10Rrnd-Black_T_ca.paa";
		displaynameshort = $STR_NIA_762NATO_Tracer;
	};
	class hlc_10Rnd_762x51_TDim_SCARH : hlc_10Rnd_762x51_b_SCARH {
		author = "Toadie";
		ammo = "HLC_B_762x51_Tracer_Dim";
		descriptionshort = $STR_NIA_DESC_10Rnd_762x51_Tdim_fal;
		displayname = $STR_NIA_10Rnd_762x51_IRDIM_scarh;
		lastroundstracer = 0;
		scope = 2;
		__SMALLMASS(23.856836, 10, 145.14);
		tracersevery = 1;
		picture = "\nia_wp_SCAR\tex\ui\ammo\M_SCARH_10Rrnd-Black_T_ca.paa";
		displaynameshort = $STR_NIA_762NATO_IRDIM;
	};
	class hlc_10Rnd_762x51_S_SCARH : hlc_10Rnd_762x51_b_SCARH {
		author = "Toadie";
		ammo = "HLC_762x51_BTSub";
		descriptionshort = $STR_NIA_DESC_10Rnd_762x51_s_fal;
		displayname = $STR_NIA_10Rnd_762x51_Subsonic_scarh;
		lastroundstracer = 0;
		scope = 2;
		__SMALLMASS(27.1046, 10, 145.14);
		tracersevery = 0;
		initspeed = 325;
		displaynameshort = $STR_NIA_762NATO_Subsonic;
		picture = "\nia_wp_SCAR\tex\ui\ammo\M_SCARH_10Rrnd-Black_T_ca.paa";
	};

	class hlc_10Rnd_762x51_B_SCARH_Tan : hlc_10Rnd_762x51_B_SCARH
	{
		dlc = "Niarms_SCAR";
		author = "Toadie, Spartan0536";
		displayname = $STR_NIA_10Rnd_762x51_b_scarh_Tan;
		hiddenSelectionsTextures[] = { "nia_wp_SCAR\tex\Toadie_SCAR\Magazine_SCARH_OEM_tan_co.tga" };
		picture = "\nia_wp_SCAR\tex\ui\ammo\M_SCARH_10Rrnd-tan_EPR_ca.paa";
	};
	class hlc_10Rnd_762x51_mk316_SCARH_tan :hlc_10Rnd_762x51_mk316_SCARH
	{
		dlc = "Niarms_SCAR";
		author = "Toadie, Spartan0536";
		displayname = $STR_NIA_10Rnd_762x51_Mk316_scarh_Tan;
		hiddenSelectionsTextures[] = { "nia_wp_SCAR\tex\Toadie_SCAR\Magazine_SCARH_OEM_tan_co.tga" };
		picture = "\nia_wp_SCAR\tex\ui\ammo\M_SCARH_10Rrnd-tan_spr_ca.paa";
	};
	class hlc_10Rnd_762x51_barrier_SCARH_tan :hlc_10Rnd_762x51_barrier_SCARH
	{
		dlc = "Niarms_SCAR";
		author = "Toadie, Spartan0536";
		displayname = $STR_NIA_10Rnd_762x51_SOST_scarh_Tan;
		hiddenSelectionsTextures[] = { "nia_wp_SCAR\tex\Toadie_SCAR\Magazine_SCARH_OEM_tan_co.tga" };
		picture = "\nia_wp_SCAR\tex\ui\ammo\M_SCARH_10Rrnd-tan_sost_ca.paa";
	};
	class hlc_10Rnd_762x51_TDim_SCARH_tan :hlc_10Rnd_762x51_TDim_SCARH
	{
		dlc = "Niarms_SCAR";
		author = "Toadie, Spartan0536";
		displayname = $STR_NIA_10Rnd_762x51_IRDIM_scarh_Tan;
		hiddenSelectionsTextures[] = { "nia_wp_SCAR\tex\Toadie_SCAR\Magazine_SCARH_OEM_tan_co.tga" };
		picture = "\nia_wp_SCAR\tex\ui\ammo\M_SCARH_10Rrnd-tan_t_ca.paa";
	};
	class hlc_10Rnd_762x51_T_SCARH_tan :hlc_10Rnd_762x51_T_SCARH
	{
		dlc = "Niarms_SCAR";
		author = "Toadie, Spartan0536";
		displayname = $STR_NIA_10Rnd_762x51_Tracer_scarh_Tan;
		hiddenSelectionsTextures[] = { "nia_wp_SCAR\tex\Toadie_SCAR\Magazine_SCARH_OEM_tan_co.tga" };
		picture = "\nia_wp_SCAR\tex\ui\ammo\M_SCARH_10Rrnd-tan_t_ca.paa";
	};
	class hlc_10Rnd_762x51_S_SCARH_tan :hlc_10Rnd_762x51_S_SCARH
	{
		dlc = "Niarms_SCAR";
		author = "Toadie, Spartan0536";
		displayname = $STR_NIA_10Rnd_762x51_Subsonic_scarh_Tan;
		hiddenSelectionsTextures[] = { "nia_wp_SCAR\tex\Toadie_SCAR\Magazine_SCARH_OEM_tan_co.tga" };
		picture = "\nia_wp_SCAR\tex\ui\ammo\M_SCARH_10Rrnd-tan_S_ca.paa";
	};

	class hlc_10Rnd_762x51_B_SCARH_camo : hlc_10Rnd_762x51_B_SCARH
	{
		dlc = "Niarms_SCAR";
		author = "Toadie, Spartan0536";
		displayname = $STR_NIA_10Rnd_762x51_b_scarh_camo;
		hiddenSelectionsTextures[] = { "nia_wp_SCAR\tex\Toadie_SCAR\Magazine_SCARH_OEM_camo_co.tga" };
		HiddenSelectionsMaterials[] = { "nia_wp_SCAR\mat\Magazine_SCARH_OEM_Camo.rvmat" };
		picture = "\nia_wp_SCAR\tex\ui\ammo\M_SCARH_10Rrnd-camo_EPR_ca.paa";
	};
	class hlc_10Rnd_762x51_mk316_SCARH_camo :hlc_10Rnd_762x51_mk316_SCARH
	{
		dlc = "Niarms_SCAR";
		author = "Toadie, Spartan0536";
		displayname = $STR_NIA_10Rnd_762x51_Mk316_scarh_camo;
		hiddenSelectionsTextures[] = { "nia_wp_SCAR\tex\Toadie_SCAR\Magazine_SCARH_OEM_camo_co.tga" };
		HiddenSelectionsMaterials[] = { "nia_wp_SCAR\mat\Magazine_SCARH_OEM_Camo.rvmat" };
		picture = "\nia_wp_SCAR\tex\ui\ammo\M_SCARH_10Rrnd-camo_spr_ca.paa";
	};
	class hlc_10Rnd_762x51_barrier_SCARH_camo :hlc_10Rnd_762x51_barrier_SCARH
	{
		dlc = "Niarms_SCAR";
		author = "Toadie, Spartan0536";
		displayname = $STR_NIA_10Rnd_762x51_SOST_scarh_camo;
		hiddenSelectionsTextures[] = { "nia_wp_SCAR\tex\Toadie_SCAR\Magazine_SCARH_OEM_camo_co.tga" };
		HiddenSelectionsMaterials[] = { "nia_wp_SCAR\mat\Magazine_SCARH_OEM_Camo.rvmat" };
		picture = "\nia_wp_SCAR\tex\ui\ammo\M_SCARH_10Rrnd-camo_sost_ca.paa";
	};
	class hlc_10Rnd_762x51_TDim_SCARH_camo :hlc_10Rnd_762x51_TDim_SCARH
	{
		dlc = "Niarms_SCAR";
		author = "Toadie, Spartan0536";
		displayname = $STR_NIA_10Rnd_762x51_IRDIM_scarh_camo;
		hiddenSelectionsTextures[] = { "nia_wp_SCAR\tex\Toadie_SCAR\Magazine_SCARH_OEM_camo_co.tga" };
		HiddenSelectionsMaterials[] = { "nia_wp_SCAR\mat\Magazine_SCARH_OEM_Camo.rvmat" };
		picture = "\nia_wp_SCAR\tex\ui\ammo\M_SCARH_10Rrnd-camo_t_ca.paa";
	};
	class hlc_10Rnd_762x51_T_SCARH_camo :hlc_10Rnd_762x51_T_SCARH
	{
		dlc = "Niarms_SCAR";
		author = "Toadie, Spartan0536";
		displayname = $STR_NIA_10Rnd_762x51_Tracer_scarh_camo;
		hiddenSelectionsTextures[] = { "nia_wp_SCAR\tex\Toadie_SCAR\Magazine_SCARH_OEM_camo_co.tga" };
		HiddenSelectionsMaterials[] = { "nia_wp_SCAR\mat\Magazine_SCARH_OEM_Camo.rvmat" };
		picture = "\nia_wp_SCAR\tex\ui\ammo\M_SCARH_10Rrnd-camo_t_ca.paa";
	};
	class hlc_10Rnd_762x51_S_SCARH_camo :hlc_10Rnd_762x51_S_SCARH
	{
		dlc = "Niarms_SCAR";
		author = "Toadie, Spartan0536";
		displayname = $STR_NIA_10Rnd_762x51_Subsonic_scarh_camo;
		hiddenSelectionsTextures[] = { "nia_wp_SCAR\tex\Toadie_SCAR\Magazine_SCARH_OEM_camo_co.tga" };
		HiddenSelectionsMaterials[] = { "nia_wp_SCAR\mat\Magazine_SCARH_OEM_Camo.rvmat" };
		picture = "\nia_wp_SCAR\tex\ui\ammo\M_SCARH_10Rrnd-camo_s_ca.paa";
	};
	class hlc_30rnd_556x45_EPR;
	//5.56 Mags
	class hlc_30rnd_556x45_EPR_SCAR : hlc_30rnd_556x45_EPR {
		author = "Toadie,Spartan0536";
		ammo = "HLC_556NATO_EPR";
		count = 30;
		descriptionshort = $STR_NIA_DESC_30Rnd_556x45_B;
		displayname = $STR_NIA_30rnd_556x45_EPR_SCAR;
		initspeed = 974.8;
		__SMALLMASS(12.307, 30, 112);
		lastroundstracer = 0;
		scope = 2;
		tracersevery = 0;
		displaynameshort = $STR_NIA_556_EPR;
		picture = "nia_wp_SCAR\tex\ui\ammo\m_SCAR_EPR_ca.paa";
		modelSpecial = \nia_wp_SCAR\mesh\mag\proxy\30rnd_556NATO_STANAG_FN;
		model = "\nia_wp_SCAR\mesh\mag\30rnd_556NATO_STANAG_FN.p3d";
		hiddenSelections[] = { "roundtype1", "roundtype2" };
		hiddenSelectionsTextures[] = { "hlc_core\tex\magazines\308_greentip_co.paa", "hlc_core\tex\magazines\308_redtip_co.paa" };
		modelSpecialIsProxy = 1;
	};
	class hlc_30rnd_556x45_SOST_SCAR : hlc_30rnd_556x45_EPR_SCAR {
		author = "Toadie,Spartan0536";
		ammo = "HLC_556NATO_SOST";
		count = 30;
		descriptionshort = $STR_NIA_DESC_30Rnd_556x45_SOST;
		displayname = $STR_NIA_30rnd_556x45_SOST_SCAR;
		initspeed = 954.4;
		__SMALLMASS(12.307, 30, 112);// +1 mass over EPR for ever 30
		lastroundstracer = 0;
		scope = 2;
		tracersevery = 0;
		displaynameshort = $STR_NIA_556_SOST;
		picture = "nia_wp_SCAR\tex\ui\ammo\m_SCAR_sost_ca.paa";
		hiddenSelectionsTextures[] = { "hlc_core\tex\magazines\308_co.paa", "hlc_core\tex\magazines\308_co.paa" };
	};
	class hlc_30rnd_556x45_SPR_SCAR : hlc_30rnd_556x45_EPR_SCAR {
		author = "Toadie,Spartan0536";
		ammo = "HLC_556NATO_SPR";
		count = 30;
		descriptionshort = $STR_NIA_DESC_30Rnd_556x45_SPR;
		displayname = $STR_NIA_30rnd_556x45_SPR_SCAR;
		initspeed = 868.7;
		__SMALLMASS(13.27, 30, 112);// +1 mass over EPR for ever 30
		lastroundstracer = 0;
		scope = 2;
		tracersevery = 0;
		displaynameshort = $STR_NIA_556_SPR;
		picture = "nia_wp_SCAR\tex\ui\ammo\m_SCAR_spr_ca.paa";
		hiddenSelectionsTextures[] = { "hlc_core\tex\magazines\308_co.paa", "hlc_core\tex\magazines\308_co.paa" };
	};
	class hlc_30rnd_556x45_S_SCAR : hlc_30rnd_556x45_EPR_SCAR {
		author = "Toadie,Spartan0536";
		initspeed = 340;
		displaynameshort = $STR_NIA_556_Sub;
		descriptionshort = "Caliber: 5.56x45mm NATO Cold-load M855A1<br />Type: Reverse Drawn Full Metal Jacket Exposed Penetrator (Enhanced Performance Round)<br />Rounds: 30";
		displayname = $STR_NIA_30rnd_556x45_S_SCAR;
		picture = "nia_wp_SCAR\tex\ui\ammo\m_SCAR_s_ca.paa";
		hiddenSelectionsTextures[] = { "hlc_core\tex\magazines\308_co.paa", "hlc_core\tex\magazines\308_co.paa" };
	};
	class hlc_30rnd_556x45_M_SCAR : hlc_30rnd_556x45_EPR_SCAR {
		ammo = "HLC_556NATO_EPR_Tracer";
		author = "Toadie,Spartan0536";
		count = 30;
		descriptionshort = $STR_NIA_DESC_30Rnd_556x45_M;
		displayname = $STR_NIA_30Rnd_556x45_M_SCAR;
		initspeed = 974.8;
		__SMALLMASS(10.60937, 30, 112);// +1 mass over EPR for ever 30
		lastroundstracer = 3;
		scope = 2;
		tracersevery = 4;
		displaynameshort = $STR_NIA_556_M;
		picture = "nia_wp_SCAR\tex\ui\ammo\m_SCAR_m_ca.paa";
		hiddenSelectionsTextures[] = { "hlc_core\tex\magazines\308_greentip_co.paa", "hlc_core\tex\magazines\308_redtip_co.paa" };
	};
	class hlc_30rnd_556x45_t_SCAR : hlc_30rnd_556x45_EPR_SCAR {
		author = "Toadie,Spartan0536";
		ammo = "HLC_556NATO_EPR_Tracer";
		count = 30;
		descriptionshort = $STR_NIA_DESC_30Rnd_556x45_T;
		displayname = $STR_NIA_30Rnd_556x45_T_SCAR;
		initspeed = 974.8;
		__SMALLMASS(11.9, 30, 112);
		lastroundstracer = 1;
		scope = 2;
		tracersevery = 1;
		displaynameshort = $STR_NIA_556_Tracer;
		picture = "nia_wp_SCAR\tex\ui\ammo\m_SCAR_t_ca.paa";
		hiddenSelectionsTextures[] = { "hlc_core\tex\magazines\308_redtip_co.paa", "hlc_core\tex\magazines\308_redtip_co.paa" };
	};
	class hlc_30rnd_556x45_MDim_SCAR : hlc_30rnd_556x45_EPR_SCAR {
		author = "Toadie,Spartan0536";
		ammo = "HLC_B_556x45_Ball_Tracer_Dim";
		initspeed = 950.3664;
		descriptionshort = $STR_NIA_DESC_30Rnd_556x45_Mdim;
		displayname = $STR_NIA_30rnd_556x45_MDim_SCAR;
		__SMALLMASS(10.60937, 30, 112);
		tracersevery = 4;
		displaynameshort = $STR_NIA_556_MDim;
		picture = "nia_wp_SCAR\tex\ui\ammo\m_SCAR_m_ca.paa";
		hiddenSelectionsTextures[] = { "hlc_core\tex\magazines\308_greentip_co.paa", "hlc_core\tex\magazines\308_redtip_co.paa" };
	};
	class hlc_30rnd_556x45_TDim_SCAR :hlc_30rnd_556x45_EPR_SCAR {
		author = "Toadie,Spartan0536";
		ammo = "HLC_B_556x45_Ball_Tracer_Dim";
		initspeed = 950.3664;
		descriptionshort = $STR_NIA_DESC_30Rnd_556x45_irdim;
		displayname = $STR_NIA_30rnd_556x45_TDim_SCAR;
		__SMALLMASS(11.9, 30, 112);
		tracersevery = 1;
		displaynameshort = $STR_NIA_556_IRDIM;
		picture = "nia_wp_SCAR\tex\ui\ammo\m_SCAR_t_ca.paa";
		hiddenSelectionsTextures[] = { "hlc_core\tex\magazines\308_redtip_co.paa", "hlc_core\tex\magazines\308_redtip_co.paa" };

	};

	//.300 Blackout Mags. Because.
	class hlc_29rnd_300BLK_STANAG;
	class hlc_29rnd_300BLK_STANAG_T;
	class hlc_29rnd_300BLK_STANAG_S;
	class hlc_30rnd_300BLK_SCAR : hlc_29rnd_300BLK_STANAG
	{
		modelSpecial = \nia_wp_SCAR\mesh\mag\proxy\30rnd_556NATO_STANAG_FN;
		model = "\nia_wp_SCAR\mesh\mag\30rnd_556NATO_STANAG_FN.p3d";
		hiddenSelections[] = { "roundtype1", "roundtype2" };
		hiddenSelectionsTextures[] = { "hlc_core\tex\magazines\308_co.paa", "hlc_core\tex\magazines\308_co.paa" };
		picture = "nia_wp_SCAR\tex\ui\ammo\m_SCAR_EPR_ca.paa";
		displayname = $STR_NIA_30rnd_300BLK_SCAR;
		__SMALLMASS(15.29, 30, 112);
	};
	class hlc_30rnd_300BLK_SCAR_T : hlc_29rnd_300BLK_STANAG_T
	{
		modelSpecial = \nia_wp_SCAR\mesh\mag\proxy\30rnd_556NATO_STANAG_FN;
		model = "\nia_wp_SCAR\mesh\mag\30rnd_556NATO_STANAG_FN.p3d";
		hiddenSelections[] = { "roundtype1", "roundtype2" };
		hiddenSelectionsTextures[] = { "hlc_core\tex\magazines\308_co.paa", "hlc_core\tex\magazines\308_co.paa" };
		displayname = $STR_NIA_30Rnd_300BLK_T_SCAR;
		__SMALLMASS(20.28491, 30, 112);
		picture = "nia_wp_SCAR\tex\ui\ammo\m_SCAR_t_ca.paa";
	};
	class hlc_30rnd_300BLK_SCAR_S : hlc_29rnd_300BLK_STANAG_S
	{
		modelSpecial = \nia_wp_SCAR\mesh\mag\proxy\30rnd_556NATO_STANAG_FN;
		model = "\nia_wp_SCAR\mesh\mag\30rnd_556NATO_STANAG_FN.p3d";
		hiddenSelections[] = { "roundtype1", "roundtype2" };
		hiddenSelectionsTextures[] = { "hlc_core\tex\magazines\308_co.paa", "hlc_core\tex\magazines\308_co.paa" };
		displayname = $STR_NIA_30rnd_300BLK_IRDIM_SCAR;
		__SMALLMASS(14.58, 30, 112);
		picture = "nia_wp_SCAR\tex\ui\ammo\m_SCAR_s_ca.paa";
	};
};