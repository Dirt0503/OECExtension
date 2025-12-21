class CfgPatches
{
    class OEC_Extension_Overwatch_Weapons_APFSuppressor
    {
        addonRootClass = "OEC_Extension_Overwatch_Weapons";
        requiredAddons[] = 
		{
			"OEC_Extension_Overwatch_Weapons",
            "HL_CMB_Weapons_arifle_AR2"
        };
        units[] = {};
        weapons[] = 
        {
            "OEC_Weapons_APFSuppressor"
        };
    };
};

class Mode_FullAuto;

class CfgWeapons
{
    class HL_CMB_arifle_AR2_base;

    class OEC_Weapons_APFSuppressor: HL_CMB_arifle_AR2_base
    {
        author = "OEC";
        displayName = "[OEC] APF Suppressor";

        picture = "\hl_cmb_weapons\UI\w_ar2_x_ca.paa";
        model = "WBK_Combines\weapons\supressor_LMG.p3d";

        scope = 2;
        scopeArsenal = 2;
        magazines[] = {"OEC_Magazine_APFSuppressor_100Rnd"};
        magazineWell[] = {"OEC_MagazineWell_APFSuppressor"};
        drySound[] = {"WBK_Combines\weapons\shotgun_empty.wav",1,1,10};
		reloadMagazineSound[] = {"WBK_Combines\weapons\APF_reload.ogg",1,1,30};
        reloadAction = "WBK_HLA_APFLMG_reload";
		handAnim[] = {"OFP2_ManSkeleton","WBK_Combines\weapons\apf_weap_idle.rtm"};
        magazineReloadTime = 1.5;
        baseWeapon = "OEC_Weapons_APFSuppressor";
        _generalMacro = "";
        muzzles[] = {"this"};
		modes[] = {"FullAuto450", "FullAuto600", "FullAuto750","close","near","short","medium","far"};
		class Library
		{
			libTextDesc = "Overwatch Standard Issue HMG. This unstable ammunition has no damage dropoff and is not affected by gravity, but will dissipate beyond 300m.";
		};
        class FullAuto450: Mode_FullAuto
        {
            displayName = "450 RPM";
			reloadTime = 0.13333;
			aiRateOfFire = 0.13333;
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				soundSetShot[] = {"WBK_APF_Shot_Base_Soundset"};
				begin1[] = {"WBK_Combines\weapons\APF_Fire_1.ogg",1.1,1,1000};
				begin2[] = {"WBK_Combines\weapons\APF_Fire_2.ogg",1.1,1,1000};
				begin3[] = {"WBK_Combines\weapons\APF_Fire_3.ogg",1.1,1,1000};
				begin4[] = {"WBK_Combines\weapons\APF_Fire_4.ogg",1.1,1,1000};
				soundBegin[] = {"begin1",0.25,"begin2",0.25,"begin3",0.25,"begin4",0.25};
			};
			autoFire = 1;
			textureType = "semi";
			flash = "gunfire";
			flashSize = 0.1;
			recoil = "Empty";
			aiDispersionCoefX = 10;
			aiDispersionCoefY = 10;
			ffMagnitude = 0.5;
			ffFrequency = 11;
			ffCount = 6;
			minRange = 1;
			minRangeProbab = 0.06;
			midRange = 2;
			midRangeProbab = 0.06;
			maxRange = 3;
			maxRangeProbab = 0.004;
			dispersion = 0.0038;
			showToPlayer = 1;
        };
		class FullAuto600: FullAuto450
		{
			showToPlayer = 1;
			displayName = "600 RPM";
			reloadTime = 0.1;
			aiRateOfFire = 0.1;
			textureType = "burst";
		};
		class FullAuto750: FullAuto450
		{
			showToPlayer = 1;
			displayName = "750 RPM";
			reloadTime = 0.08;
			aiRateOfFire = 0.08;
			textureType = "fullAuto";
		};
        class close: FullAuto750
		{
			showToPlayer = 0;
			burst = 25;
			aiRateOfFire = 0.25;
			aiRateOfFireDistance = 400;
			minRange = 1;
			minRangeProbab = 0.35;
			midRange = 200;
			midRangeProbab = 0.88;
			maxRange = 400;
			maxRangeProbab = 0.3;
		};
		class near: close
		{
			showToPlayer = 0;
			burst = 20;
			aiRateOfFire = 0.25;
			aiRateOfFireDistance = 400;
			minRange = 1;
			minRangeProbab = 0.35;
			midRange = 150;
			midRangeProbab = 0.88;
			maxRange = 300;
			maxRangeProbab = 0.3;
		};
		class short: close
		{
			burst = 15;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 600;
			minRange = 200;
			minRangeProbab = 0.3;
			midRange = 400;
			midRangeProbab = 0.88;
			maxRange = 600;
			maxRangeProbab = 0.3;
		};
		class medium: close
		{
			burst = 10;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 900;
			minRange = 400;
			minRangeProbab = 0.3;
			midRange = 700;
			midRangeProbab = 0.78;
			maxRange = 900;
			maxRangeProbab = 0.2;
		};
		class far: close
		{
			burst = 5;
			aiRateOfFire = 1.5;
			aiRateOfFireDistance = 1500;
			minRange = 800;
			minRangeProbab = 0.2;
			midRange = 1000;
			midRangeProbab = 0.6;
			maxRange = 1500;
			maxRangeProbab = 0.1;
		};
    };
};

class CfgMagazines
{
    class HL_CMB_30Rnd_AR2_Mag;

    class OEC_Magazine_APFSuppressor_100Rnd: HL_CMB_30Rnd_AR2_Mag
    {
        ammo = "OEC_Ammo_APFSuppressor";
        count = 100;
        author = "OEC Extension";
		initSpeed = 770;
        displayName = "[OEC] 100Rnd Suppressor Cell";
        descriptionShort = "High Capacity Suppressor Cell";
        displayNameShort = "100Rnd Cell";
        tracersEvery = 0;
        lastRoundsTracer = 0;
		mass = 50;
    };
};

class CfgMagazineWells
{
    class OEC_MagazineWell_APFSuppressor
    {
        OEC_APFSuppressor_Mags[] =
        {
            "OEC_Magazine_APFSuppressor_100Rnd"
        };
    };
};
