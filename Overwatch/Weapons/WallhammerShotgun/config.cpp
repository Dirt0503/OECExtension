class CfgPatches
{
    class OEC_Extension_Overwatch_Weapons_WallhammerShotgun
    {
        addonRootClass = "OEC_Extension_Overwatch_Weapons";
        requiredAddons[] = {"OEC_Extension_Overwatch_Weapons"};
        units[] = {};
        weapons[] = 
        {
            "OEC_Weapons_WallhammerShotgun"
        };
    };
};

class Mode_SemiAuto;
class CfgWeapons
{
    class sgun_HunterShotgun_01_F;

    class OEC_Weapons_WallhammerShotgun: sgun_HunterShotgun_01_F
    {
        author = "OEC Extension";
        displayName = "[OEC] Wallhammer Shotgun";
        baseWeapon = "OEC_Weapons_WallhammerShotgun";
        magazines[] = {"OEC_Magazine_WallhammerShotgun_8Rnd"};
        magazineWell[] = {};

        picture = "\hl_cmb_weapons\UI\w_spas12_x_ca.paa";
		drySound[] = {"WBK_Combines\weapons\shotgun_empty.wav",1,1,10};
		reloadAction = "WBK_HLA_ChargerShotgun_reload";
		reloadMagazineSound[] = {"WBK_Combines\weapons\shotgun_reloadSnd.ogg",1,1,30};
		model = "WBK_Combines\weapons\charger_shotgun.p3d";
        mass = 135;
		class GunParticles
		{
			class Effect1
			{
				directionName = "konec hlavne";
				effectName = "StarterPistolCloud1";
				positionName = "usti hlavne";
			};
			class Effect2
			{
				directionName = "usti hlavne";
				effectName = "StarterPistolCloud2";
				positionName = "konec hlavne";
			};
			class FirstEffect
			{
				directionName = "Konec hlavne";
				effectName = "RifleAssaultCloud";
				positionName = "Usti hlavne";
			};
		};
		handAnim[] = {"OFP2_ManSkeleton","WBK_Combines\weapons\shotgun_idle.rtm"};
		inertia = 0.5;
		fireSpreadAngle = 1;
        class Single: Mode_SemiAuto
		{
			displayName = "Coagulum Cell";
			sounds[] = {"StandardSound"};
			dispersion = 0;
            class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"WBK_SPAS_Shot_Base_Soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"Mk18_silencerShot_SoundSet","Mk18_silencerTail_SoundSet","Mk18_silencerInteriorTail_SoundSet"};
			};
			soundContinuous = 0;
			reloadTime = 0.1;
		};
		bullet1[] = {"a3\sounds_f\weapons\Shells\shotgun\metal_shotgun_01",0.5011872,1,15};
		bullet2[] = {"A3\Sounds_F\weapons\shells\shotgun\metal_shotgun_02",0.5011872,1,15};
		bullet3[] = {"A3\Sounds_F\weapons\shells\shotgun\metal_shotgun_03",0.5011872,1,15};
		bullet4[] = {"A3\Sounds_F\weapons\shells\shotgun\metal_shotgun_04",0.5011872,1,15};
		bullet5[] = {"A3\Sounds_F\weapons\shells\shotgun\dirt_shotgun_01",0.39810717,1,15};
		bullet6[] = {"A3\Sounds_F\weapons\shells\shotgun\dirt_shotgun_02",0.39810717,1,15};
		bullet7[] = {"A3\Sounds_F\weapons\shells\shotgun\dirt_shotgun_03",0.39810717,1,15};
		bullet8[] = {"A3\Sounds_F\weapons\shells\shotgun\dirt_shotgun_04",0.39810717,1,15};
		bullet9[] = {"A3\Sounds_F\weapons\shells\shotgun\grass_shotgun_01",0.2238721,1,15};
		bullet10[] = {"A3\Sounds_F\weapons\shells\shotgun\grass_shotgun_02",0.2238721,1,15};
		bullet11[] = {"A3\Sounds_F\weapons\shells\shotgun\grass_shotgun_03",0.2238721,1,15};
		bullet12[] = {"A3\Sounds_F\weapons\shells\shotgun\grass_shotgun_04",0.2238721,1,15};
		soundBullet[] = {"bullet1",0.083,"bullet2",0.083,"bullet3",0.083,"bullet4",0.083,"bullet5",0.083,"bullet6",0.083,"bullet7",0.083,"bullet8",0.083,"bullet9",0.083,"bullet10",0.083,"bullet11",0.083,"bullet12",0.083};
       
        muzzles[] = {"this","Shredder_Muzzle"};
		class Shredder_Muzzle: sgun_HunterShotgun_01_F
		{
			drySound[] = {"WBK_Combines\weapons\shotgun_empty.wav",1,1,10};
		    reloadAction = "WBK_HLA_ChargerShotgun_reload";
		    reloadMagazineSound[] = {"WBK_Combines\weapons\shotgun_reloadSnd.ogg",1,1,30};
			displayName = "Shredder Mode";
			descriptionShort = "Shredder Mode Switch";
			magazines[] = {"OEC_Magazine_WallhammerShotgun_8Rnd_Shredder"};
			magazineWell[] = {};
            class Single: Mode_SemiAuto
			{
                
				displayName = "[OEC] Wallhammer Shotgun";
				textureType = "topDown";
				sounds[] = {"StandardSound"};
				dispersion = 0;
                class BaseSoundModeType;
                class StandardSound: BaseSoundModeType
                {
                    soundSetShot[] = {"WBK_SPAS_Shot_Base_Soundset"};
                };
                class SilencedSound: BaseSoundModeType
                {
                    soundsetshot[] = {"Mk18_silencerShot_SoundSet","Mk18_silencerTail_SoundSet","Mk18_silencerInteriorTail_SoundSet"};
                };
                soundContinuous = 0;
                reloadTime = 0.1;

			};
            bullet1[] = {"a3\sounds_f\weapons\Shells\shotgun\metal_shotgun_01",0.5011872,1,15};
            bullet2[] = {"A3\Sounds_F\weapons\shells\shotgun\metal_shotgun_02",0.5011872,1,15};
            bullet3[] = {"A3\Sounds_F\weapons\shells\shotgun\metal_shotgun_03",0.5011872,1,15};
            bullet4[] = {"A3\Sounds_F\weapons\shells\shotgun\metal_shotgun_04",0.5011872,1,15};
            bullet5[] = {"A3\Sounds_F\weapons\shells\shotgun\dirt_shotgun_01",0.39810717,1,15};
            bullet6[] = {"A3\Sounds_F\weapons\shells\shotgun\dirt_shotgun_02",0.39810717,1,15};
            bullet7[] = {"A3\Sounds_F\weapons\shells\shotgun\dirt_shotgun_03",0.39810717,1,15};
            bullet8[] = {"A3\Sounds_F\weapons\shells\shotgun\dirt_shotgun_04",0.39810717,1,15};
            bullet9[] = {"A3\Sounds_F\weapons\shells\shotgun\grass_shotgun_01",0.2238721,1,15};
            bullet10[] = {"A3\Sounds_F\weapons\shells\shotgun\grass_shotgun_02",0.2238721,1,15};
            bullet11[] = {"A3\Sounds_F\weapons\shells\shotgun\grass_shotgun_03",0.2238721,1,15};
            bullet12[] = {"A3\Sounds_F\weapons\shells\shotgun\grass_shotgun_04",0.2238721,1,15};
            soundBullet[] = {"bullet1",0.083,"bullet2",0.083,"bullet3",0.083,"bullet4",0.083,"bullet5",0.083,"bullet6",0.083,"bullet7",0.083,"bullet8",0.083,"bullet9",0.083,"bullet10",0.083,"bullet11",0.083,"bullet12",0.083};
		};
    };
};

class CfgMagazines
{
    class 30Rnd_65x39_caseless_mag;
    class OEC_Magazine_WallhammerShotgun_8Rnd: 30Rnd_65x39_caseless_mag
    {
        author = "Overwatch Expeditionary Corps";
        scope = 2;
        displayName = "[OEC] 8Rnd Shotgun Coagulum Cell";
        displayNameShort = "Coagulum Cell";
        descriptionshort = "Powerful Combine Shotgun Cells, designed to fire a concentrated pulse clump.";
        picture = "\CUP\Weapons\CUP_Weapons_Ammunition\data\ui\m_aa12slug_ca.paa";
        ammo = "OEC_Ammo_WallhammerShotgun";
        count = 8;
        initSpeed = 300;
        mass = 15;
    };
    class OEC_Magazine_WallhammerShotgun_8Rnd_Shredder: OEC_Magazine_WallhammerShotgun_8Rnd
    {
        displayName = "[OEC] 8Rnd Shotgun Shredder Cell";
        displayNameShort = "Shredder Cell";
        descriptionshort = "Powerful Combine Shotgun Cells, designed to fire a spread pulse cone.";
        picture = "\CUP\Weapons\CUP_Weapons_Ammunition\data\ui\m_aa12_ca.paa";
        ammo = "OEC_Ammo_WallhammerShotgun_Shredder";
    };
};

class CfgMagazineWells
{
    class OEC_MagazineWell_WallhammerShotgun
    {
        OEC_WallhammerShotgun_Mags[] = 
        {
            "OEC_Magazine_WallhammerShotgun_8Rnd",
            "OEC_Magazine_WallhammerShotgun_8Rnd_Shredder"
        };
    };
};