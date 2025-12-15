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

class CfgWeapons
{
    class HLA_ChargerShotGun;

    class OEC_Weapons_WallhammerShotgun: HLA_ChargerShotGun
    {
        author = "Overwatch Expeditionary Corps";
        displayName = "[OEC] Wallhammer Shotgun";
        baseWeapon = "OEC_Weapons_WallhammerShotgun";
        magazines[] = {};
        magazineWell[] = {"OEC_MagazineWell_WallhammerShotgun"};
    };
};

class CfgMagazines
{
    class 30Rnd_65x39_caseless_mag;
    class OEC_Magazine_WallhammerShotgun_8Rnd: 30Rnd_65x39_caseless_mag
    {
        author = "Overwatch Expeditionary Corps";
        scope = 2;
        displayName = "[OEC] 8Rnd Shotgun Standard Cell";
        displayNameShort = "8Rnd Cell";
        descriptionshort = "Powerful Combine Shotgun Cells";
        picture = "\hl_cmb_weapons\UI\m_12gau_ca.paa";
        ammo = "OEC_Ammo_WallhammerShotgun";
        count = 8;
        initSpeed = 300;
    };
    class OEC_Magazine_WallhammerShotgun_8Rnd_Shredder: OEC_Magazine_WallhammerShotgun_8Rnd
    {
        displayName = "[OEC] 8Rnd Shotgun Shredder Cell";
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