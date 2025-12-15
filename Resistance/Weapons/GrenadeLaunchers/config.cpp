class CfgPatches
{
    class OEC_Extension_Resistance_Weapons_GrenadeLaunchers
    {  
        addonRootClass = "OEC_Extension_Resistance_Weapons";
        requiredAddons[] = {"OEC_Extension_Resistance_Weapons"};
        units[] = {};
        weapons[] = 
        {
            "OEC_Weapons_6G30"
        };
    };
};
class Mode_SemiAuto;
class CfgWeapons
{
    class CUP_glaunch_6G30;
    class OEC_Weapons_6G30: CUP_glaunch_6G30
    {
        author = "OEC Extension";
        displayName = "[OEC] 6G30 Launcher";
        baseWeapon = "OEC_6G30";
        magazines[] = {"OEC_Magazine_VG40SZ_6Rnd", "OEC_Magazine_VOG25_6Rnd", "OEC_Magazine_GDM40_6Rnd", "OEC_Magazine_SmokeStun_6Rnd", "OEC_Magazine_VOG25","OEC_Magazine_GDM40","OEC_Magazine_VG40SZ","OEC_Magazine_VG40OP_Red"};
        magazineWell[] = {};

        class Single: Mode_SemiAuto
	  	{
            sounds[] = {"StandardSound"};
            class StandardSound
            {
            soundSetShot[] = {"CUP_GrenadeLaunchers_Shot_SoundSet","UGL_Tail_SoundSet","UGL_InteriorTail_SoundSet"};
            weaponSoundEffect = "DefaultRifle";
            begin1[] = {"CUP\Weapons\CUP_Weapons_GrenadeLaunchers\data\sfx\g_launcher",1,1,200};
            soundBegin[] = {"begin1",1};
                class SoundTails
                {
                    class TailInterior
                    {
                        sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_interior",2.2387211,1,1800};
                        frequency = 1;
                        volume = "interior";
                    };
                    class TailTrees
                    {
                        sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_trees",1.0,1,1800};
                        frequency = 1;
                        volume = "(1-interior/1.4)*trees";
                    };
                    class TailForest
                    {
                        sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_forest",1.0,1,1800};
                        frequency = 1;
                        volume = "(1-interior/1.4)*forest";
                    };
                    class TailMeadows
                    {
                        sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_meadows",1.0,1,1800};
                        frequency = 1;
                        volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
                    };
                    class TailHouses
                    {
                        sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_houses",1.0,1,1800};
                        frequency = 1;
                        volume = "(1-interior/1.4)*houses";
                    };
                };
            };
            
        minRange = 15;
        minRangeProbab = 0.5;
        midRange = 40;
        midRangeProbab = 0.5;
        maxRange = 250;
        maxRangeProbab = 0.5;
        showToPlayer = 1;
        canShootInWater = 0;
        requiredOpticType = 0;
        reloadTime = 0.5;
	    dispersion = 0.01;
	    autoFire = 0;
	    soundContinuous = 0;
	    soundBurst = 0;
	    };
    }; 
};