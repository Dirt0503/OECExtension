class CfgPatches
{
    class OEC_Extension_Overwatch_Weapons_M320marker
    {
        addonRootClass = "OEC_Extension_Overwatch_Weapons";
        requiredAddons[] = 
		{
			"OEC_Extension_Overwatch_Weapons"
        };
        units[] = {};
        weapons[] = 
        {
            "OEC_Weapons_M320_Base",
            "OEC_Weapons_M320marker"
        };
    };
};

class CfgMagazines
{
    class Default;
	class CA_Magazine;

    // M320 GL 1Rnd mags
	// CMB 40mm HE
	class 1Rnd_HE_Grenade_shell;
	class OEC_Magazine_M320_HE: 1Rnd_HE_Grenade_shell
	{
		author = "OEC Extension";
		displayName = "[OEC] S/M-320 HE Grenade";
		displaynameshort = "HE Grenade";
		descriptionShort = "Special 40mm Combine High-Explosive Grenade";
		//picture = "\cup\weapons\cup_weapons_xm29\data\ui\m_xm29_he_ca.paa";
		//modelSpecial = "\cup\weapons\cup_weapons_xm29\CUP_xm29_he_mag.p3d";
		//modelSpecialIsProxy = 1; // check this if error
		ammo = "OEC_Ammo_CMB20mm";
		count = 1;
		mass = 4;
		//initspeed = 80;
		scope = 2;
		scopearsenal = 2;
	};

	// Cmb 40mm Instant Smoke
	class OEC_Magazine_M320_Smoke: OEC_Magazine_M320_HE
	{
		author = "OEC Extension";
		displayName = "[OEC] S/M-320 Instant Smoke";
		displaynameshort = "Instant Smoke";
		descriptionShort = "Special 40mm Combine Instant Smoke";
		ammo = "OEC_Ammo_CMB20mm_smoke";
		nameSoundWeapon = "smokeshell";
		nameSound = "smokeshell";
		picture = "\A3\Weapons_f\Data\UI\gear_UGL_Smokeshell_white_CA.paa";
		mass = 2;
	};

	// Cmb 40mm Stun Grenade
	class OEC_Magazine_M320_Stun: OEC_Magazine_M320_HE
	{
		author = "OEC Extension";
		displayName = "[OEC] S/M-320 Stun Grenade";
		descriptionShort = "Special 40mm Combine Stun Grenade";
		displaynameshort = "Stun Grenade";
		picture = "\rhsusf\addons\rhsusf_weapons\icons\m576_buckshot_ca.paa";
		ammo = "OEC_Ammo_CMB20mm_stun";
		count = 1;
		mass = 8;
	};

	// Cmb 40mm Flares
	class OEC_Magazine_M320_red: OEC_Magazine_M320_HE
	{
		author = "OEC Extension";
		displayName = "[OEC] S/M-320 Flare (Red)";
		displaynameshort = "Red Flare";
		descriptionShort = "Special 40mm Combine Red Flare";
		ammo = "OEC_Ammo_CMB20mm_red";
        picture = "\A3\Weapons_F\Data\UI\gear_UGL_Flare_red_CA.paa";
		count = 1;
		mass = 0.75;
	};
	class OEC_Magazine_M320_green: OEC_Magazine_M320_HE
	{
		author = "OEC Extension";
		displayName = "[OEC] S/M-320 Flare (Green)";
		displaynameshort = "Green Flare";
		descriptionShort = "Special 40mm Combine Green Flare";
		ammo = "OEC_Ammo_CMB20mm_green";
        picture = "\A3\Weapons_F\Data\UI\gear_UGL_Flare_green_CA.paa";
		count = 1;
		mass = 0.75;
	};
    class OEC_Magazine_M320_yellow: OEC_Magazine_M320_HE
	{
		author = "OEC Extension";
		displayName = "[OEC] S/M-320 Flare (Yellow)";
		displaynameshort = "Yellow Flare";
		descriptionShort = "Special 40mm Combine Yellow Flare";
		ammo = "OEC_Ammo_CMB20mm_yellow";
        picture = "\A3\Weapons_F\Data\UI\gear_UGL_Flare_yelow_CA.paa"; 
		count = 1;
		mass = 0.75;
	};

    // cmb 40mm colored smoke
    class OEC_Magazine_M320_smokeRed: OEC_Magazine_M320_HE
	{
		author = "OEC Extension";
		displayName = "[OEC] S/M-320 Smoke (Red)";
		displaynameshort = "Red Smoke";
		descriptionShort = "Special 40mm Combine Red Marking Smoke Grenade";
		picture = "\A3\Weapons_f\Data\UI\gear_UGL_Smokeshell_red_CA.paa";
		nameSoundWeapon = "smokeshell";
		nameSound = "smokeshell";
		ammo = "OEC_Ammo_CMB40mm_smokeRed";
        count = 1;
		mass = 1;
	};
	class OEC_Magazine_M320_smokeGreen: OEC_Magazine_M320_smokeRed
	{
		author = "OEC Extension";
		displayName = "[OEC] S/M-320 Smoke (Green)";
		displaynameshort = "Green Smoke";
		descriptionShort = "Special 40mm Combine Green Marking Smoke Grenade";
		picture = "\A3\Weapons_f\Data\UI\gear_UGL_Smokeshell_green_CA.paa";
		ammo = "OEC_Ammo_CMB40mm_smokeGreen";
        count = 1;
		mass = 1;
	};
	class OEC_Magazine_M320_smokeYellow: OEC_Magazine_M320_smokeRed
	{
		author = "OEC Extension";
		displayName = "[OEC] S/M-320 Smoke (Yellow)";
		displaynameshort = "Yellow Smoke";
		descriptionShort = "Special 40mm Combine Yellow Marking Smoke Grenade";
		picture = "\A3\Weapons_f\Data\UI\gear_UGL_Smokeshell_yellow_CA.paa";
		ammo = "OEC_Ammo_CMB40mm_smokeYellow";
        count = 1;
		mass = 1;
	};
};

class CowsSlot;
class Mode_SemiAuto;
class Mode_FullAuto;
class CfgWeapons
{
    class Pistol;
	class Pistol_Base_F: Pistol
	{
		class WeaponSlotsInfo;
		class GunParticles;
	};
	class OEC_Weapons_M320_Base: Pistol_Base_F
	{
        scope = 1;
        scopearsenal = 1;
		magazines[] = {"rhs_mag_M441_HE","rhs_mag_M433_HEDP","rhs_mag_M397_HET","rhs_mag_m576","rhs_mag_M4009","rhs_mag_M583A1_white","rhs_mag_M661_green","rhs_mag_M662_red","rhs_mag_M585_white_cluster","rhs_mag_M663_green_cluster","rhs_mag_M664_red_cluster","rhs_mag_M713_red","rhs_mag_M714_white","rhs_mag_M715_green","rhs_mag_M716_yellow","rhs_mag_M781_Practice","1Rnd_HE_Grenade_shell","UGL_FlareWhite_F","UGL_FlareGreen_F","UGL_FlareRed_F","UGL_FlareYellow_F","UGL_FlareCIR_F","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeYellow_Grenade_shell","1Rnd_SmokePurple_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell"};
		magazineWell[] = {};
		class Library
		{
			libTextDesc = "Overwatch Special Issue Signal Launcher";
		};
		optics = 0;
		maxRecoilSway = 0.0125;
		swayDecaySpeed = 1.25;
		recoil = "recoil_mx";
		inertia = 0.2;
		class GunParticles: GunParticles
		{
			class SecondEffect
			{
				positionName = "Nabojnicestart";
				directionName = "Nabojniceend";
				effectName = "RifleAssaultCloud";
			};
		};
		weaponInfoType = "rhs_rscOptics_pistol";
		discreteDistance[] = {100,200,300,400};
		discreteDistanceInitIndex = 1;
		opticsZoomMin = 0.275;
		opticsZoomMax = 1.1;
		opticsZoomInit = 0.75;
		distanceZoomMin = 300;
		distanceZoomMax = 300;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot{};
			class CowsSlot{};
			holsterScale = 0;
		};
		reloadAction = "rhs_GestureReloadM320_pistol";
		descriptionShort = "Signal Launcher<br />Caliber: 40mm";
		handAnim[] = {"OFP2_ManSkeleton","\rhsusf\addons\rhsusf_c_weapons\anims\rhs_hand_m320.rtm"};
		dexterity = 1.8;
		caseless[] = {"",1,1,1};
		soundBullet[] = {"caseless",1};
		modes[] = {"Single","single_medium_optics1","single_far_optics2"};
		class Single: Mode_SemiAuto
		{
            sounds[] = {"StandardSound"};
            class StandardSound
            {
                soundSetShot[] = {"rhs_m203_shot_SoundSet","UGL_Tail_SoundSet","UGL_InteriorTail_SoundSet"};
            };
			reloadTime = 0.1;
			dispersion = 0.00093;
			minRange = 2;
			minRangeProbab = 0.3;
			midRange = 250;
			midRangeProbab = 0.7;
			maxRange = 400;
			maxRangeProbab = 0.04;
		};
		class single_medium_optics1: Single
		{
			requiredOpticType = 1;
			showToPlayer = 0;
			minRange = 2;
			minRangeProbab = 0.2;
			midRange = 550;
			midRangeProbab = 0.7;
			maxRange = 700;
			maxRangeProbab = 0.1;
			aiRateOfFire = 6;
			aiRateOfFireDistance = 600;
		};
		class single_far_optics2: single_medium_optics1
		{
			requiredOpticType = 2;
		};
		aiDispersionCoefY = 10;
		aiDispersionCoefX = 8;
		drySound[] = {"A3\sounds_f\weapons\Other\dry_1",0.01,1};
		reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Katiba_UGL_reload",0.794328,1,10};
		hiddenSelections[] = {""};
		hiddenSelectionsTextures[] = {""};
		muzzles[] = {"this"};
		magazineReloadSwitchPhase = 0.56;
	};
	class OEC_Weapons_M320marker: OEC_Weapons_M320_Base
	{
        author = "OEC Extension";
        displayName = "[OEC] S/M-320 Launcher Pistol";
		scopeArsenal = 2;
		scope = 2;
		descriptionShort = "Overwatch Special Issue Signal/Marking Pistol";
		picture = "\rhsusf\addons\rhsusf_inventoryicons\data\weapons\rhs_weap_M320_ca.paa";
		model = "\rhsusf\addons\rhsusf_weapons\m320\M320standalone.p3d";
		UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa";
		weaponInfoType = "rhs_rscOptics_pistol_usf";
		cameraDir = "gl_look";
        magazines[] = {"OEC_Magazine_M320_Smoke", "OEC_Magazine_M320_Stun", "OEC_Magazine_M320_red", "OEC_Magazine_M320_green", "OEC_Magazine_M320_yellow", "OEC_Magazine_M320_smokeRed", "OEC_Magazine_M320_smokeGreen", "OEC_Magazine_M320_smokeYellow"};
		magazineWell[] = {};
		discreteDistance[] = {50,100,150,200,250,300,350};
		discreteDistanceCameraPoint[] = {"gl_eye_50m","gl_eye_100m","gl_eye_150m","gl_eye_200m","gl_eye_250m","gl_eye_300m","gl_eye_350m"};
		discreteDistanceInitIndex = 0;
		maxZeroing = 350;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 33;
		};
		class ItemInfo
		{
			priority = 1;
		};
	};
};