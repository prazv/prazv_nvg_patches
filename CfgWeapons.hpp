class CfgWeapons
{
	class Binocular;
	class NVGoggles: Binocular
	{
		class ItemInfo;
	};
	//3CB NVGs
	class UK3CB_PVS5A: NVGoggles
	{
		scope=2;
		author="www.3commandobrigade.com";
		DLC="UK3CB_Factions";
		displayName="PVS-5A";
		model="\UK3CB_Factions\addons\UK3CB_Factions_Equipment2\nvgs\pvs5a\uk3cb_pvs5a_on.p3d";
		picture="\UK3CB_Factions\addons\UK3CB_Factions_Equipment2\nvgs\pvs5a\data\icon_pvs5a_ca.paa";
		class ItemInfo: ItemInfo
		{
			type=616;
			hmdType=0;
			uniformModel="\UK3CB_Factions\addons\UK3CB_Factions_Equipment2\nvgs\pvs5a\uk3cb_pvs5a_on.p3d";
			modelOff="\UK3CB_Factions\addons\UK3CB_Factions_Equipment2\nvgs\pvs5a\uk3cb_pvs5a_off.p3d";
			mass=24;
		};
		ace_nightvision_border="\UK3CB_Factions\addons\UK3CB_Factions_Equipment2\nvgs\pvs5a\data\nvg_mask_binos_4096.paa";
	};
	class UK3CB_ANPVS7: NVGoggles
	{
		scope=2;
		author="www.3commandobrigade.com";
		DLC="UK3CB_Factions";
		displayName="AN/PVS-7B";
		model="\UK3CB_Factions\addons\UK3CB_Factions_Equipment2\nvgs\anpvs7\uk3cb_anpvs7_on.p3d";
		picture="\UK3CB_Factions\addons\UK3CB_Factions_Equipment2\nvgs\anpvs7\data\icon_anpvs7_ca.paa";
		class ItemInfo: ItemInfo
		{
			type=616;
			hmdType=0;
			uniformModel="\UK3CB_Factions\addons\UK3CB_Factions_Equipment2\nvgs\anpvs7\uk3cb_anpvs7_on.p3d";
			modelOff="\UK3CB_Factions\addons\UK3CB_Factions_Equipment2\nvgs\anpvs7\uk3cb_anpvs7_off.p3d";
			mass=16;
		};
		ace_nightvision_border="\UK3CB_Factions\addons\UK3CB_Factions_Equipment2\nvgs\anpvs7\data\hmnvs_mask_4096.paa";
	};
    class UK3CB_PVS5A_wp: NVGoggles
	{
		scope=2;
		author="www.3commandobrigade.com";
		DLC="UK3CB_Factions";
		displayName="PVS-5A (WP)";
		model="\UK3CB_Factions\addons\UK3CB_Factions_Equipment2\nvgs\pvs5a\uk3cb_pvs5a_on.p3d";
		picture="\UK3CB_Factions\addons\UK3CB_Factions_Equipment2\nvgs\pvs5a\data\icon_pvs5a_ca.paa";
        ace_nightvision_colorPreset[]=
		{
			0,
			{0,0,0,0},
			{1.1,0.80000001,1.9,0.89999998},
			{1,1,6,0}
		};
		ace_nightvision_eyeCups=1;
		ace_nightvision_generation=4;
		ace_nightvision_bluRadius=0.13;
		class ItemInfo: ItemInfo
		{
			type=616;
			hmdType=0;
			uniformModel="\UK3CB_Factions\addons\UK3CB_Factions_Equipment2\nvgs\pvs5a\uk3cb_pvs5a_on.p3d";
			modelOff="\UK3CB_Factions\addons\UK3CB_Factions_Equipment2\nvgs\pvs5a\uk3cb_pvs5a_off.p3d";
			mass=24;
		};
		ace_nightvision_border="\UK3CB_Factions\addons\UK3CB_Factions_Equipment2\nvgs\pvs5a\data\nvg_mask_binos_4096.paa";
	};
    class UK3CB_ANPVS7_wp: NVGoggles
	{
		scope=2;
		author="www.3commandobrigade.com";
		DLC="UK3CB_Factions";
		displayName="AN/PVS-7B (WP)";
        ace_nightvision_colorPreset[]=
		{
			0,
			{0,0,0,0},
			{1.1,0.80000001,1.9,0.89999998},
			{1,1,6,0}
		};
		ace_nightvision_eyeCups=1;
		ace_nightvision_generation=4;
		ace_nightvision_bluRadius=0.13;
		model="\UK3CB_Factions\addons\UK3CB_Factions_Equipment2\nvgs\anpvs7\uk3cb_anpvs7_on.p3d";
		picture="\UK3CB_Factions\addons\UK3CB_Factions_Equipment2\nvgs\anpvs7\data\icon_anpvs7_ca.paa";
		class ItemInfo: ItemInfo
		{
			type=616;
			hmdType=0;
			uniformModel="\UK3CB_Factions\addons\UK3CB_Factions_Equipment2\nvgs\anpvs7\uk3cb_anpvs7_on.p3d";
			modelOff="\UK3CB_Factions\addons\UK3CB_Factions_Equipment2\nvgs\anpvs7\uk3cb_anpvs7_off.p3d";
			mass=16;
		};
		ace_nightvision_border="\UK3CB_Factions\addons\UK3CB_Factions_Equipment2\nvgs\anpvs7\data\hmnvs_mask_4096.paa";
	};
    //VSM NVGs
    class cbwgo_nv33_bat_cov: NVGoggles
	{
		scope=2;
		displayName="Xact NV33 (BatPack) (Covers)";
		picture="";
		model="cbwgo_nvg\ModellMain\nv33_bat_cov_on.p3d";
		simulation="NVGoggles";
		author="randomTechpriest";
		showEmpty=0;
		muzzlePos="usti hlavne";
		muzzleEnd="konec hlavne";
		value=5;
		opticsZoomMin=1;
		opticsZoomMax=1;
		modelloptics="\A3\Weapons_f\reticle\optics_night";
		class ItemInfo
		{
			type=616;
			hmdType=0;
			uniformModel="cbwgo_nvg\ModellMain\nv33_bat_cov_on.p3d";
			modelOff="cbwgo_nvg\ModellMain\nv33_bat_cov_off.p3d";
			mass=15;
		};
		ACE_NightVision_grain=0.41;
		ACE_NightVision_blur=0.041000001;
		ACE_NightVision_radBlur=0.001;
	};
	class cbwgo_nv33_bat_nocov: NVGoggles
	{
		scope=2;
		displayName="Xact NV33 (BatPack) (No Covers)";
		picture="";
		model="cbwgo_nvg\ModellMain\nv33_bat_nocov_on.p3d";
		simulation="NVGoggles";
		author="randomTechpriest";
		showEmpty=0;
		muzzlePos="usti hlavne";
		muzzleEnd="konec hlavne";
		value=5;
		opticsZoomMin=1;
		opticsZoomMax=1;
		modelloptics="\A3\Weapons_f\reticle\optics_night";
		class ItemInfo
		{
			type=616;
			hmdType=0;
			uniformModel="cbwgo_nvg\ModellMain\nv33_bat_nocov_on.p3d";
			modelOff="cbwgo_nvg\ModellMain\nv33_bat_nocov_off.p3d";
			mass=15;
		};
		ACE_NightVision_grain=0.41;
		ACE_NightVision_blur=0.041000001;
		ACE_NightVision_radBlur=0.001;
	};
	class cbwgo_nv33_nobat_cov: NVGoggles
	{
		scope=2;
		displayName="Xact NV33 (No BatPack) (Covers)";
		picture="";
		model="cbwgo_nvg\ModellMain\nv33_nobat_cov_on.p3d";
		simulation="NVGoggles";
		author="randomTechpriest";
		showEmpty=0;
		muzzlePos="usti hlavne";
		muzzleEnd="konec hlavne";
		value=5;
		opticsZoomMin=1;
		opticsZoomMax=1;
		modelloptics="\A3\Weapons_f\reticle\optics_night";
		class ItemInfo
		{
			type=616;
			hmdType=0;
			uniformModel="cbwgo_nvg\ModellMain\nv33_nobat_cov_on.p3d";
			modelOff="cbwgo_nvg\ModellMain\nv33_nobat_cov_off.p3d";
			mass=15;
		};
		ACE_NightVision_grain=0.41;
		ACE_NightVision_blur=0.041000001;
		ACE_NightVision_radBlur=0.001;
	};
	class cbwgo_nv33_nobat_nocov: NVGoggles
	{
		scope=2;
		displayName="Xact NV33 (No BatPack) (No Covers)";
		picture="";
		model="cbwgo_nvg\ModellMain\nv33_nobat_nocov_on.p3d";
		simulation="NVGoggles";
		author="randomTechpriest";
		showEmpty=0;
		muzzlePos="usti hlavne";
		muzzleEnd="konec hlavne";
		value=5;
		opticsZoomMin=1;
		opticsZoomMax=1;
		modelloptics="\A3\Weapons_f\reticle\optics_night";
		class ItemInfo
		{
			type=616;
			hmdType=0;
			uniformModel="cbwgo_nvg\ModellMain\nv33_nobat_nocov_on.p3d";
			modelOff="cbwgo_nvg\ModellMain\nv33_nobat_nocov_off.p3d";
			mass=15;
		};
		ACE_NightVision_grain=0.41;
		ACE_NightVision_blur=0.041000001;
		ACE_NightVision_radBlur=0.001;
	};
	class cbwgo_bonie_cov: NVGoggles
	{
		scope=2;
		displayName="Bonie-M (Covers)";
		picture="";
		model="cbwgo_nvg\ModellMain\bonie_on.p3d";
		simulation="NVGoggles";
		author="randomTechpriest";
		showEmpty=0;
		muzzlePos="usti hlavne";
		muzzleEnd="konec hlavne";
		value=5;
		opticsZoomMin=1;
		opticsZoomMax=1;
		modelloptics="\A3\Weapons_f\reticle\optics_night";
		class ItemInfo
		{
			type=616;
			hmdType=0;
			uniformModel="cbwgo_nvg\ModellMain\bonie_on.p3d";
			modelOff="cbwgo_nvg\ModellMain\bonie_off.p3d";
			mass=15;
		};
		ACE_NightVision_grain=0.44999999;
		ACE_NightVision_blur=0.045000002;
		ACE_NightVision_radBlur=0.0024999999;
	};
	class cbwgo_bonie_nocov: NVGoggles
	{
		scope=2;
		displayName="Bonie-M (No Covers)";
		picture="";
		model="cbwgo_nvg\ModellMain\bonienc_on.p3d";
		simulation="NVGoggles";
		author="randomTechpriest";
		showEmpty=0;
		muzzlePos="usti hlavne";
		muzzleEnd="konec hlavne";
		value=5;
		opticsZoomMin=1;
		opticsZoomMax=1;
		modelloptics="\A3\Weapons_f\reticle\optics_night";
		class ItemInfo
		{
			type=616;
			hmdType=0;
			uniformModel="cbwgo_nvg\ModellMain\bonienc_on.p3d";
			modelOff="cbwgo_nvg\ModellMain\bonienc_off.p3d";
			mass=15;
		};
		ACE_NightVision_grain=0.44999999;
		ACE_NightVision_blur=0.045000002;
		ACE_NightVision_radBlur=0.0024999999;
	};
	// VSM nvg wp variants
	class cbwgo_nv33_bat_cov_wp: cbwgo_nv33_bat_cov
	{
		scope=2;
		ScopeCurator=2;
		displayName="Xact NV33 WP (BatPack) (Covers)";
		model="cbwgo_nvg\ModellMain\nv33_bat_cov_on.p3d";
		ace_nightvision_colorPreset[]=
		{
			0,
			{0,0,0,0},
			{1.1,0.80000001,1.9,0.89999998},
			{1,1,6,0}
		};
		ace_nightvision_eyeCups=1;
		ace_nightvision_generation=4;
		ace_nightvision_bluRadius=0.13;
		class ItemInfo
		{
			type=616;
			hmdType=0;
			uniformModel="cbwgo_nvg\ModellMain\nv33_bat_cov_on.p3d";
			modelOff="cbwgo_nvg\ModellMain\nv33_bat_cov_off.p3d";
			mass=15;
		};
	};
	class cbwgo_nv33_bat_nocov_wp: cbwgo_nv33_bat_nocov
	{
		scope=2;
		ScopeCurator=2;
		displayName="Xact NV33 WP (BatPack) (No Covers)";
		model="cbwgo_nvg\ModellMain\nv33_bat_nocov_on.p3d";
		ace_nightvision_colorPreset[]=
		{
			0,
			{0,0,0,0},
			{1.1,0.80000001,1.9,0.89999998},
			{1,1,6,0}
		};
		ace_nightvision_eyeCups=1;
		ace_nightvision_generation=4;
		ace_nightvision_bluRadius=0.13;
		class ItemInfo
		{
			type=616;
			hmdType=0;
			uniformModel="cbwgo_nvg\ModellMain\nv33_bat_nocov_on.p3d";
			modelOff="cbwgo_nvg\ModellMain\nv33_bat_nocov_off.p3d";
			mass=15;
		};

	};
	class cbwgo_nv33_nobat_cov_wp: cbwgo_nv33_nobat_cov
	{
		scope=2;
		ScopeCurator=2;
		displayName="Xact NV33 WP (No BatPack) (Covers)";
		model="cbwgo_nvg\ModellMain\nv33_nobat_cov_on.p3d";
		ace_nightvision_colorPreset[]=
		{
			0,
			{0,0,0,0},
			{1.1,0.80000001,1.9,0.89999998},
			{1,1,6,0}
		};
		ace_nightvision_eyeCups=1;
		ace_nightvision_generation=4;
		ace_nightvision_bluRadius=0.13;
		class ItemInfo
		{
			type=616;
			hmdType=0;
			uniformModel="cbwgo_nvg\ModellMain\nv33_nobat_cov_on.p3d";
			modelOff="cbwgo_nvg\ModellMain\nv33_nobat_cov_off.p3d";
			mass=15;
		};
	};
	class cbwgo_nv33_nobat_nocov_wp: cbwgo_nv33_nobat_nocov
	{
		scope=2;
		ScopeCurator=2;
		displayName="Xact NV33 WP (No BatPack) (No Covers)";
		model="cbwgo_nvg\ModellMain\nv33_nobat_nocov_on.p3d";
		ace_nightvision_colorPreset[]=
		{
			0,
			{0,0,0,0},
			{1.1,0.80000001,1.9,0.89999998},
			{1,1,6,0}
		};
		ace_nightvision_eyeCups=1;
		ace_nightvision_generation=4;
		ace_nightvision_bluRadius=0.13;
		class ItemInfo
		{
			type=616;
			hmdType=0;
			uniformModel="cbwgo_nvg\ModellMain\nv33_nobat_nocov_on.p3d";
			modelOff="cbwgo_nvg\ModellMain\nv33_nobat_nocov_off.p3d";
			mass=15;
		};
	};
	class cbwgo_bonie_cov_wp: cbwgo_bonie_cov
	{
		scope=2;
		ScopeCurator=2;
		displayName="Bonie-M WP(Covers)";
		model="cbwgo_nvg\ModellMain\bonie_on.p3d";
		ace_nightvision_colorPreset[]=
		{
			0,
			{0,0,0,0},
			{1.1,0.80000001,1.9,0.89999998},
			{1,1,6,0}
		};
		ace_nightvision_eyeCups=1;
		ace_nightvision_generation=4;
		ace_nightvision_bluRadius=0.13;
		class ItemInfo
		{
			type=616;
			hmdType=0;
			uniformModel="cbwgo_nvg\ModellMain\bonie_on.p3d";
			modelOff="cbwgo_nvg\ModellMain\bonie_off.p3d";
			mass=15;
		};
	};
	class cbwgo_bonie_nocov_wp: cbwgo_bonie_nocov
	{
		scope=2;
		ScopeCurator=2;
		displayName="Bonie-M WP (No Covers)";
		model="cbwgo_nvg\ModellMain\bonienc_on.p3d";
		ace_nightvision_colorPreset[]=
		{
			0,
			{0,0,0,0},
			{1.1,0.80000001,1.9,0.89999998},
			{1,1,6,0}
		};
		ace_nightvision_eyeCups=1;
		ace_nightvision_generation=4;
		ace_nightvision_bluRadius=0.13;
		class ItemInfo
		{
			type=616;
			hmdType=0;
			uniformModel="cbwgo_nvg\ModellMain\bonienc_on.p3d";
			modelOff="cbwgo_nvg\ModellMain\bonienc_off.p3d";
			mass=15;
		};
	};
    //Project M NVGs
	class MIG_PVS31_LOW: NVGoggles
	{
		class ItemInfo
		{
			mass=15;
		};
	};
	class MIG_PVS31_LOW_Up: NVGoggles
	{
		class ItemInfo
		{
			mass=15;
		};
	};
	class MIG_PVS31_STD: NVGoggles
	{
		class ItemInfo
		{
			mass=15;
		};
	};
	class MIG_PVS31_DayOps_STD: NVGoggles
	{
		class ItemInfo
		{
			mass=15;
		};
	};
	class MIG_PVS14_DayOps_B: NVGoggles
	{
		class ItemInfo
		{
			mass=15;
		};
	};
	class MIG_PVS14_B: NVGoggles
	{
		class ItemInfo
		{
			mass=15;
		};
	};
	class MIG_PVS14_DayOps_L: NVGoggles
	{
		class ItemInfo
		{
			mass=11;
		};
	};
	class MIG_PVS14_L: NVGoggles
	{
		class ItemInfo
		{
			mass=11;
		};
	};
	class MIG_PVS14_DayOps_R: NVGoggles
	{
		class ItemInfo
		{
			mass=11;
		};
	};
	class MIG_PVS14_R: NVGoggles
	{
		class ItemInfo
		{
			mass=11;
		};
	};
    class MIG_FPANO_BLK: NVGoggles
	{
		class ItemInfo
		{
			mass=24;
		};
	};
	class MIG_FPANO_DayOps_BLK: NVGoggles
	{
		class ItemInfo
		{
			mass=24;
		};
	};
	class MIG_FPANO_FDE: NVGoggles
	{
		class ItemInfo
		{
			mass=24;
		};
	};
	class MIG_FPANO_DayOps_FDE: NVGoggles
	{
		class ItemInfo
		{
			mass=24;
		};
	};
	class MIG_GPNVG18_BLK: NVGoggles
	{
		class ItemInfo
		{
			mass=24;
		};
	};
	class MIG_GPNVG18_DayOps_BLK: NVGoggles
	{
		class ItemInfo
		{
			mass=24;
		};
	};
	class MIG_GPNVG18_FDE: NVGoggles
	{
		class ItemInfo
		{
			mass=24;
		};
	};
	class MIG_GPNVG18_DayOps_FDE: NVGoggles
	{
		class ItemInfo
		{
			mass=24;
		};
	};
    //RHS NVGs
    class rhsusf_Rhino: NVGoggles
	{
		class ItemInfo
		{
			mass=1;
		};
	};
	class rhsusf_ANPVS_14: NVGoggles
	{
		scope=2;
		ScopeCurator=2;
		displayName="AN/PVS-14 WP";
		model="\rhsusf\addons\rhsusf_infantry\gear\nvg\ANPVS_14_UP";
		class ItemInfo
		{
			type=616;
			hmdType=0;
			uniformModel="\rhsusf\addons\rhsusf_infantry\gear\nvg\ANPVS_14_DOWN";
			modelOff="\rhsusf\addons\rhsusf_infantry\gear\nvg\ANPVS_14_UP";
			mass=11;
		};
	};
	class rhsusf_ANPVS_15: NVGoggles
	{
		scope=2;
		ScopeCurator=2;
		displayName="AN/PVS-15 WP";
		model="\rhsusf\addons\rhsusf_infantry\gear\nvg\ANPVS_15_UP";
		class ItemInfo
		{
			type=616;
			hmdType=0;
			uniformModel="\rhsusf\addons\rhsusf_infantry\gear\nvg\ANPVS_15_DOWN";
			modelOff="\rhsusf\addons\rhsusf_infantry\gear\nvg\ANPVS_15_UP";
			mass=17;
		};
	};
	class rhsusf_ANPVS_14_wp: rhsusf_ANPVS_14
	{
		scope=2;
		ScopeCurator=2;
		displayName="AN/PVS-14 WP";
		model="\rhsusf\addons\rhsusf_infantry\gear\nvg\ANPVS_14_UP";
		ace_nightvision_colorPreset[]=
		{
			0,
			{0,0,0,0},
			{1.1,0.80000001,1.9,0.89999998},
			{1,1,6,0}
		};
		ace_nightvision_eyeCups=1;
		ace_nightvision_generation=4;
		ace_nightvision_bluRadius=0.13;
		class ItemInfo
		{
			type=616;
			hmdType=0;
			uniformModel="\rhsusf\addons\rhsusf_infantry\gear\nvg\ANPVS_14_DOWN";
			modelOff="\rhsusf\addons\rhsusf_infantry\gear\nvg\ANPVS_14_UP";
			mass=11;
		};
	};
    class rhs_1PN138: NVGoggles
    {
        Scope=2;
        ScopeCurator=2;
        displayName = "$STR_RHS_1PN138";
        model = "\rhsafrf\addons\rhs_infantry2\gear\nvg\NVM14_HELM_OFF.p3d";
        modelOptics="\rhsafrf\addons\rhs_infantry2\gear\nvg\mono_opt";
        descriptionShort="1PN138 Monocular Night Vision Device";

        class ItemInfo
        {
            type = 616;
            hmdType = 0;
            uniformModel = "\rhsafrf\addons\rhs_infantry2\gear\nvg\NVM14_HELM_ON.p3d";
            modelOff = "\rhsafrf\addons\rhs_infantry2\gear\nvg\NVM14_HELM_OFF.p3d";
            mass = 11;
        };
    };
    class rhs_1PN138_wp: NVGoggles
    {
        Scope=2;
        ScopeCurator=2;
        displayName = "1PN138 WP";
        model = "\rhsafrf\addons\rhs_infantry2\gear\nvg\NVM14_HELM_OFF.p3d";
        modelOptics="\rhsafrf\addons\rhs_infantry2\gear\nvg\mono_opt";
        descriptionShort="1PN138 Monocular Night Vision Device";
        ace_nightvision_colorPreset[]=
		{
			0,
			{0,0,0,0},
			{1.1,0.80000001,1.9,0.89999998},
			{1,1,6,0}
		};
		ace_nightvision_eyeCups=1;
		ace_nightvision_generation=4;
		ace_nightvision_bluRadius=0.13;
        class ItemInfo
        {
            type = 616;
            hmdType = 0;
            uniformModel = "\rhsafrf\addons\rhs_infantry2\gear\nvg\NVM14_HELM_ON.p3d";
            modelOff = "\rhsafrf\addons\rhs_infantry2\gear\nvg\NVM14_HELM_OFF.p3d";
            mass = 11;
        };
    };
	class rhsusf_ANPVS_15_wp: rhsusf_ANPVS_15
	{
		scope=2;
		ScopeCurator=2;
		displayName="AN/PVS-15 WP";
		model="\rhsusf\addons\rhsusf_infantry\gear\nvg\ANPVS_15_UP";
		ace_nightvision_colorPreset[]=
		{
			0,
			{0,0,0,0},
			{1.1,0.80000001,1.9,0.89999998},
			{1,1,6,0}
		};
		ace_nightvision_eyeCups=1;
		ace_nightvision_generation=4;
		ace_nightvision_bluRadius=0.13;
		class ItemInfo
		{
			type=616;
			hmdType=0;
			uniformModel="\rhsusf\addons\rhsusf_infantry\gear\nvg\ANPVS_15_DOWN";
			modelOff="\rhsusf\addons\rhsusf_infantry\gear\nvg\ANPVS_15_UP";
			mass=17;
		};
	};
	class rhsusf_anvis_nvg_bc_caps: rhsusf_ANPVS_15
	{
		scope=2;
		scopeCurator=2;
		displayName="ANVIS-9";
		nameSound="nvgoggles";
		simulation="NVGoggles";
		showEmpty=0;
		muzzlePos="usti hlavne";
		muzzleEnd="konec hlavne";
		value=5;
		opticsZoomMin=1;
		opticsZoomMax=1;
		model="\rhsusf\addons\rhsusf_infantry2\gear\head\anvis\ANVIS_bc_caps_up";
		class ItemInfo
		{
			type=616;
			hmdType=0;
			uniformModel="\rhsusf\addons\rhsusf_infantry2\gear\head\anvis\ANVIS_bc_caps_down.p3d";
			modelOff="\rhsusf\addons\rhsusf_infantry2\gear\head\anvis\ANVIS_bc_caps_up.p3d";
			mass=15;
		};
	};
	class rhsusf_anvis_nvg_bc_caps_wp: rhsusf_ANPVS_15
	{
		scope=2;
		ScopeCurator=2;
		displayName="ANVIS-9 WP";
		nameSound="nvgoggles";
		simulation="NVGoggles";
		showEmpty=0;
		muzzlePos="usti hlavne";
		muzzleEnd="konec hlavne";
		value=5;
		opticsZoomMin=1;
		opticsZoomMax=1;
		model="\rhsusf\addons\rhsusf_infantry2\gear\head\anvis\ANVIS_bc_caps_up";
		ace_nightvision_colorPreset[]=
		{
			0,
			{0,0,0,0},
			{1.1,0.80000001,1.9,0.89999998},
			{1,1,6,0}
		};
		ace_nightvision_eyeCups=1;
		ace_nightvision_generation=4;
		ace_nightvision_bluRadius=0.13;
		class ItemInfo
		{
			type=616;
			hmdType=0;
			uniformModel="\rhsusf\addons\rhsusf_infantry2\gear\head\anvis\ANVIS_bc_caps_down.p3d";
			modelOff="\rhsusf\addons\rhsusf_infantry2\gear\head\anvis\ANVIS_bc_caps_up.p3d";
			mass=15;
		};
	};
    //JASon's GPNVG-18
    class JAS_GPNVG18_Tan: NVGoggles
	{
		displayName="GPNVG-18 (Tan)";
		nameSound="nvgoggles";
		simulation="NVGoggles";
		showEmpty=0;
		muzzlePos="usti hlavne";
		muzzleEnd="konec hlavne";
		value=5;
		opticsZoomMin=1;
		opticsZoomMax=1;
		modelOptics="\JAS_GPNVG18\NVG_Scene.p3d";
		model="\A3\Weapons_f\binocular\nvg_proxy";
		picture="\JAS_GPNVG18\ui\GPNVG18_Tan.paa";
		descriptionUse="$STR_A3_cfgWeapons_Default_NVGoggles1";
		class Library
		{
			libTextDesc="$STR_LIB_NV_GOGGLES";
		};
		descriptionShort="$STR_DSS_NV_GOGGLES";
		class ItemInfo
		{
			type=616;
			hmdType=0;
			uniformModel="\JAS_GPNVG18\JAS_GPNVG18_Tan_ON.p3d";
			modelOff="\JAS_GPNVG18\JAS_GPNVG18_Tan_OFF.p3d";
			mass=24;
		};
	};
    //Tan WP
    class JAS_GPNVG18_Tan_WP: NVGoggles
	{
		displayName="GPNVG-18 (Tan) WP";
		nameSound="nvgoggles";
		simulation="NVGoggles";
		showEmpty=0;
		muzzlePos="usti hlavne";
		muzzleEnd="konec hlavne";
		value=5;
		opticsZoomMin=1;
		opticsZoomMax=1;
		modelOptics="\JAS_GPNVG18\NVG_Scene.p3d";
		model="\A3\Weapons_f\binocular\nvg_proxy";
		picture="\JAS_GPNVG18\ui\GPNVG18_Tan.paa";
		descriptionUse="$STR_A3_cfgWeapons_Default_NVGoggles1";
        ace_nightvision_colorPreset[]=
		{
			0,
			{0,0,0,0},
			{1.1,0.80000001,1.9,0.89999998},
			{1,1,6,0}
		};
		ace_nightvision_eyeCups=1;
		ace_nightvision_generation=4;
		ace_nightvision_bluRadius=0.13;
		class Library
		{
			libTextDesc="$STR_LIB_NV_GOGGLES";
		};
		descriptionShort="$STR_DSS_NV_GOGGLES";
		class ItemInfo
		{
			type=616;
			hmdType=0;
			uniformModel="\JAS_GPNVG18\JAS_GPNVG18_Tan_ON.p3d";
			modelOff="\JAS_GPNVG18\JAS_GPNVG18_Tan_OFF.p3d";
			mass=24;
		};
	};
    //Black
	class JAS_GPNVG18_blk: NVGoggles
	{
		displayName="GPNVG-18 (Black)";
		nameSound="nvgoggles";
		simulation="NVGoggles";
		showEmpty=0;
		muzzlePos="usti hlavne";
		muzzleEnd="konec hlavne";
		value=5;
		opticsZoomMin=1;
		opticsZoomMax=1;
		modelOptics="\JAS_GPNVG18\NVG_Scene.p3d";
		model="\A3\Weapons_f\binocular\nvg_proxy";
		picture="\JAS_GPNVG18\ui\GPNVG18_Blk.paa";
		descriptionUse="$STR_A3_cfgWeapons_Default_NVGoggles1";
		class Library
		{
			libTextDesc="$STR_LIB_NV_GOGGLES";
		};
		descriptionShort="$STR_DSS_NV_GOGGLES";
		class ItemInfo
		{
			type=616;
			hmdType=0;
			uniformModel="\JAS_GPNVG18\JAS_GPNVG18_Blk_ON.p3d";
			modelOff="\JAS_GPNVG18\JAS_GPNVG18_Blk_OFF.p3d";
			mass=24;
		};
	};
    //Black WP
    class JAS_GPNVG18_blk_WP: NVGoggles
	{
		displayName="GPNVG-18 (Black) WP";
		nameSound="nvgoggles";
		simulation="NVGoggles";
		showEmpty=0;
		muzzlePos="usti hlavne";
		muzzleEnd="konec hlavne";
		value=5;
		opticsZoomMin=1;
		opticsZoomMax=1;
		modelOptics="\JAS_GPNVG18\NVG_Scene.p3d";
		model="\A3\Weapons_f\binocular\nvg_proxy";
		picture="\JAS_GPNVG18\ui\GPNVG18_Blk.paa";
		descriptionUse="$STR_A3_cfgWeapons_Default_NVGoggles1";
        ace_nightvision_colorPreset[]=
		{
			0,
			{0,0,0,0},
			{1.1,0.80000001,1.9,0.89999998},
			{1,1,6,0}
		};
		ace_nightvision_eyeCups=1;
		ace_nightvision_generation=4;
		ace_nightvision_bluRadius=0.13;
		class Library
		{
			libTextDesc="$STR_LIB_NV_GOGGLES";
		};
		descriptionShort="$STR_DSS_NV_GOGGLES";
		class ItemInfo
		{
			type=616;
			hmdType=0;
			uniformModel="\JAS_GPNVG18\JAS_GPNVG18_Blk_ON.p3d";
			modelOff="\JAS_GPNVG18\JAS_GPNVG18_Blk_OFF.p3d";
			mass=24;
		};
	};
    //Tan TI
	class JAS_GPNVG18_Tan_TI: NVGoggles
	{
		displayName="GPNVG-18 TI (Tan)";
		nameSound="nvgoggles";
		simulation="NVGoggles";
		showEmpty=0;
		muzzlePos="usti hlavne";
		muzzleEnd="konec hlavne";
		value=5;
		opticsZoomMin=1;
		opticsZoomMax=1;
		modelOptics="\JAS_GPNVG18\NVG_Scene.p3d";
		model="\A3\Weapons_f\binocular\nvg_proxy";
		picture="\JAS_GPNVG18\ui\GPNVG18_Tan.paa";
		descriptionUse="$STR_A3_cfgWeapons_Default_NVGoggles1";
		visionMode[]=
		{
			"Normal",
			"NVG",
			"TI"
		};
		class Library
		{
			libTextDesc="$STR_LIB_NV_GOGGLES";
		};
		descriptionShort="$STR_DSS_NV_GOGGLES";
		class ItemInfo
		{
			type=616;
			hmdType=0;
			uniformModel="\JAS_GPNVG18\JAS_GPNVG18_Tan_ON.p3d";
			modelOff="\JAS_GPNVG18\JAS_GPNVG18_Tan_OFF.p3d";
			mass=24;
		};
	};
    // Tan TI WP
    class JAS_GPNVG18_Tan_TI_WP: NVGoggles
	{
		displayName="GPNVG-18 TI (Tan) WP";
		nameSound="nvgoggles";
		simulation="NVGoggles";
		showEmpty=0;
		muzzlePos="usti hlavne";
		muzzleEnd="konec hlavne";
		value=5;
		opticsZoomMin=1;
		opticsZoomMax=1;
		modelOptics="\JAS_GPNVG18\NVG_Scene.p3d";
		model="\A3\Weapons_f\binocular\nvg_proxy";
		picture="\JAS_GPNVG18\ui\GPNVG18_Tan.paa";
		descriptionUse="$STR_A3_cfgWeapons_Default_NVGoggles1";
		visionMode[]=
		{
			"Normal",
			"NVG",
			"TI"
		};
		class Library
		{
			libTextDesc="$STR_LIB_NV_GOGGLES";
		};
		descriptionShort="$STR_DSS_NV_GOGGLES";
		class ItemInfo
		{
			type=616;
			hmdType=0;
			uniformModel="\JAS_GPNVG18\JAS_GPNVG18_Tan_ON.p3d";
			modelOff="\JAS_GPNVG18\JAS_GPNVG18_Tan_OFF.p3d";
			mass=24;
		};
	};
    //Black TI
	class JAS_GPNVG18_blk_TI: NVGoggles
	{
		displayName="GPNVG-18 TI (Black)";
		nameSound="nvgoggles";
		simulation="NVGoggles";
		showEmpty=0;
		muzzlePos="usti hlavne";
		muzzleEnd="konec hlavne";
		value=5;
		opticsZoomMin=1;
		opticsZoomMax=1;
		modelOptics="\JAS_GPNVG18\NVG_Scene.p3d";
		model="\A3\Weapons_f\binocular\nvg_proxy";
		picture="\JAS_GPNVG18\ui\GPNVG18_Blk.paa";
		descriptionUse="$STR_A3_cfgWeapons_Default_NVGoggles1";
		visionMode[]=
		{
			"Normal",
			"NVG",
			"TI"
		};
		class Library
		{
			libTextDesc="$STR_LIB_NV_GOGGLES";
		};
		descriptionShort="$STR_DSS_NV_GOGGLES";
		class ItemInfo
		{
			type=616;
			hmdType=0;
			uniformModel="\JAS_GPNVG18\JAS_GPNVG18_Blk_ON.p3d";
			modelOff="\JAS_GPNVG18\JAS_GPNVG18_Blk_OFF.p3d";
			mass=24;
		};
	};
    //Black TI WP
    class JAS_GPNVG18_blk_TI_WP: NVGoggles
	{
		displayName="GPNVG-18 TI (Black) WP";
		nameSound="nvgoggles";
		simulation="NVGoggles";
		showEmpty=0;
		muzzlePos="usti hlavne";
		muzzleEnd="konec hlavne";
		value=5;
		opticsZoomMin=1;
		opticsZoomMax=1;
		modelOptics="\JAS_GPNVG18\NVG_Scene.p3d";
		model="\A3\Weapons_f\binocular\nvg_proxy";
		picture="\JAS_GPNVG18\ui\GPNVG18_Blk.paa";
		descriptionUse="$STR_A3_cfgWeapons_Default_NVGoggles1";
		visionMode[]=
		{
			"Normal",
			"NVG",
			"TI"
		};
		class Library
		{
			libTextDesc="$STR_LIB_NV_GOGGLES";
		};
		descriptionShort="$STR_DSS_NV_GOGGLES";
		class ItemInfo
		{
			type=616;
			hmdType=0;
			uniformModel="\JAS_GPNVG18\JAS_GPNVG18_Blk_ON.p3d";
			modelOff="\JAS_GPNVG18\JAS_GPNVG18_Blk_OFF.p3d";
			mass=24;
		};
	};
};