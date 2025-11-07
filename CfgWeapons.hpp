class CfgWeapons
{
	class NVGoggles;
	class rhsusf_ANPVS_14: NVGoggles
	{
		class ItemInfo
		{
			mass=16;
		};
	};
	class rhsusf_ANPVS_15: NVGoggles
	{
		class ItemInfo
		{
			mass=19;
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
			mass=16;
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
			mass=19;
		};
	};
	class rhsusf_anvis_nvg_bc_caps: NVGoggles
	{
		scope=2;
		scopeCurator=2;
		displayName="ANVIS-9 (Buttler Creek flip caps)";
		nameSound="nvgoggles";
		simulation="NVGoggles";
		showEmpty=0;
		muzzlePos="usti hlavne";
		muzzleEnd="konec hlavne";
		value=5;
		opticsZoomMin=1;
		opticsZoomMax=1;
		modelOptics="\A3\weapons_f\reticle\optics_night";
		model="\rhsusf\addons\rhsusf_infantry2\gear\head\anvis\ANVIS_bc_caps_up";
		class ItemInfo
		{
			type=616;
			hmdType=0;
			uniformModel="\rhsusf\addons\rhsusf_infantry2\gear\head\anvis\ANVIS_bc_caps_down.p3d";
			modelOff="\rhsusf\addons\rhsusf_infantry2\gear\head\anvis\ANVIS_bc_caps_up.p3d";
			mass=18;
		};
	};
	class rhsusf_ANVIS: NVGoggles
	{
		scope=2;
		scopeCurator=2;
		displayName="ANVIS-9";
		descriptionShort="ANVIS-9 Night Vision Binocular";
		nameSound="nvgoggles";
		simulation="NVGoggles";
		showEmpty=0;
		muzzlePos="usti hlavne";
		muzzleEnd="konec hlavne";
		value=5;
		opticsZoomMin=1;
		opticsZoomMax=1;
		modelOptics="\A3\weapons_f\reticle\optics_night";
		model="\rhsusf\addons\rhsusf_infantry2\gear\head\anvis\ANVIS_up";
		class ItemInfo
		{
			type=616;
			hmdType=0;
			uniformModel="\rhsusf\addons\rhsusf_infantry2\gear\head\anvis\ANVIS_down";
			modelOff="\rhsusf\addons\rhsusf_infantry2\gear\head\anvis\ANVIS_up";
			mass=18;
		};
	};
	class rhsusf_anvis_nvg_bc_caps_wp: NVGoggles
	{
		scope=2;
		ScopeCurator=2;
		displayName="ANVIS-9 WP (Buttler Creek flip caps)";
		nameSound="nvgoggles";
		simulation="NVGoggles";
		showEmpty=0;
		muzzlePos="usti hlavne";
		muzzleEnd="konec hlavne";
		value=5;
		opticsZoomMin=1;
		opticsZoomMax=1;
		modelOptics="\A3\weapons_f\reticle\optics_night";
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
			mass=18;
		};
	};
	class rhsusf_ANVIS_wp: NVGoggles
	{
		scope=2;
		scopeCurator=2;
		displayName="ANVIS-9 WP";
		descriptionShort="ANVIS-9 WP Night Vision Binocular";
		nameSound="nvgoggles";
		simulation="NVGoggles";
		showEmpty=0;
		muzzlePos="usti hlavne";
		muzzleEnd="konec hlavne";
		value=5;
		opticsZoomMin=1;
		opticsZoomMax=1;
		modelOptics="\A3\weapons_f\reticle\optics_night";
		model="\rhsusf\addons\rhsusf_infantry2\gear\head\anvis\ANVIS_up";
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
			uniformModel="\rhsusf\addons\rhsusf_infantry2\gear\head\anvis\ANVIS_down";
			modelOff="\rhsusf\addons\rhsusf_infantry2\gear\head\anvis\ANVIS_up";
			mass=18;
		};
	};
	class JAS_GPNVG18_Tan_WP: NVGoggles
	{
		class ItemInfo
		{
			mass=24;
		};
	};
	class JAS_GPNVG18_blk: NVGoggles
	{
		class ItemInfo
		{
			mass=24;
		};
	};
	class JAS_GPNVG18_blk_WP: NVGoggles
	{
		class ItemInfo
		{
			mass=24;
		};
	};
	class JAS_GPNVG18_Tan: NVGoggles
	{
		class ItemInfo
		{
			mass=24;
		};
	};
	class JAS_GPNVG18_blk_TI: NVGoggles
	{
		class ItemInfo
		{
			mass=24;
		};
	};
	class JAS_GPNVG18_Tan_TI: NVGoggles
	{
		class ItemInfo
		{
			mass=24;
		};
	};
	class UK3CB_ANPVS7: NVGoggles
	{
		class ItemInfo
		{
			mass=18;
		};
	};
	class UK3CB_PVS5A: NVGoggles
	{
		class ItemInfo
		{
			mass=18;
		};
	};
	class rhsusf_Rhino: NVGoggles
	{
		class ItemInfo
		{
			mass=1;
		};
	};
};