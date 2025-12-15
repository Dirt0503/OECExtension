class CfgPatches
{
    class Petee_OEC_RocketLaunchers
    {  
        addonRootClass = "OEC_Extension_Resistance_Weapons";
        requiredAddons[] = {"OEC_Extension_Resistance_Weapons"};
        units[] = {};
        weapons[] = {"OEC_Weapons_RPG7"};
    };
};

class Mode_SemiAuto;

class CfgWeapons
{
    // RPG-7 for CIS
    class Launcher;
	class Launcher_Base_F: Launcher
	{
		class WeaponSlotsInfo;
		class EventHandlers;
	};
    class OEC_Weapons_RPG7: Launcher_Base_F
    {
        displayName = "[OEC] RPG-7V2";
        descriptionShort = "Rocket launcher<br/>Caliber: 70mm<br/>Type: Rocket-propelled grenade launcher";
        author = "OEC Extension";
        useModelOptics = 0;
        useExternalOptic = 0;
        scope = 2;
        scopeArsenal = 2;
        picture = "\rhsafrf\addons\rhs_inventoryicons\data\weapons\rhs_weap_rpg7_ca.paa";
        model = "\rhsafrf\addons\rhs_weapons\rpg7\rhs_rpg7v2";
        modelOptics = "-";
        reloadAction = "RHS_GestureReloadRPG7";
        handAnim[] = {"OFP2_ManSkeleton","\rhsafrf\addons\rhs_c_weapons\anims\RPG7gripPrevraceny.rtm"};
        class GunParticles
        {
            class effect1
            {
                positionName = "konec hlavne";
                directionName = "usti hlavne";
                effectName = "RocketBackEffectsRPGNT";
            };
        };
        magazineReloadSwitchPhase = 0.3;
        magazines[] = {"OEC_Magazine_PG7V"};
        magazineWell[] = {};
        modes[] = {"single","single_optics1","single_optics2"};
        class single: Mode_SemiAuto
        {
            reloadTime = 0.1;
            minRange = 10;
            minRangeProbab = 0.5;
            midRange = 100;
            midRangeProbab = 0.7;
            maxRange = 200;
            maxRangeProbab = 0.3;
            aiRateOfFire = 6;
            aiRateOfFireDistance = 300;
            aiRateOfFireDispersion = 6;
            dispersion = 0.013;
            class BaseSoundModeType{};
            sounds[] = {"StandardSound"};
            class StandardSound
            {
                weaponSoundEffect = "DefaultRifle";
                begin1[] = {"rhsafrf\addons\rhs_sounds\rpg\rpg_1",2.35,1,1100};
                begin2[] = {"rhsafrf\addons\rhs_sounds\rpg\rpg_2",2.35,1,1100};
                soundBegin[] = {"begin1",0.5,"begin2",0.5};
            };
            sound[] = {"rhsafrf\addons\rhs_sounds\rpg\rpg_1",2.35,1,900};

            /*class StandardSound: BaseSoundModeType
            {
                begin1[] = {"A3\Sounds_F\arsenal\weapons\Launchers\NLAW\nlaw",1.9952624,1,1800};
                soundBegin[] = {"begin1",1};
            };
            class SilencedSound: BaseSoundModeType
            {
                begin1[] = {"A3\Sounds_F\arsenal\weapons\Launchers\NLAW\nlaw",1.9952624,1,1800};
                soundBegin[] = {"begin1",1};
            };*/
        };
        class single_optics1: single
        {
            requiredOpticType = 1;
            showToPlayer = 0;
            minRange = 10;
            minRangeProbab = 0.4;
            midRange = 250;
            midRangeProbab = 0.7;
            maxRange = 400;
            maxRangeProbab = 0.2;
        };
        class single_optics2: single_optics1
        {
            requiredOpticType = 2;
            minRange = 10;
            midRange = 300;
            maxRange = 400;
        };
        discreteDistance[] = {100,150,200,300};
        discreteDistanceCameraPoint[] = {"eye_100","eye_150","eye_200","eye_300"};
        discreteDistanceInitIndex = 0;
        cameraDir = "eye_look";
        inertia = 0.8;
        dexterity = 1.2;
        aimTransitionSpeed = 0.5;
        maxZeroing = 500;
        recoil = "rhs_recoil_rpg7";
        sound[] = {"A3\Sounds_F\weapons\Launcher\rpg32",1.99526,1,800};
        drySound[] = {"A3\sounds_f\weapons\other\dry6",0.0316228,1,10};
        reloadMagazineSound[] = {"A3\sounds_f\weapons\rockets\titan_reload_final",0.562341,1,50};

        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            mass = 126.7;
            class CowsSlot{};
            class PointerSlot{};
        };
        class ItemInfo
        {
            priority = 3;
        };

        baseWeapon = "OEC_Weapons_RPG7";
	};
};