class CfgPatches
{
    class OEC_Extension_Resistance_Weapons_Magazines
    {  
        addonRootClass = "OEC_Extension_Resistance_Weapons";
        requiredAddons[] = {"OEC_Extension_Resistance_Weapons"};
        units[] = {};
        weapons[] = {};
    };
};

class CfgMagazines 
{
	// 5.45x39 AK Mags
    class Default;
    class OEC_Magazine_AK_Base: Default
    {
        author = "OEC Extension";
		scope = 1;  
		value = 1;
		displayName = "";
		model = "\A3\weapons_F\ammo\mag_univ.p3d";
		picture = "";
		modelSpecial = "";
		useAction = 0;
		useActionTitle = "";
		reloadAction = "";
		ammo = "";
		count = 30;
		type = 256;
		initSpeed = 900;
		selectionFireAnim = "zasleh";
		nameSound = "magazine";
		maxLeadSpeed = 25;
		weaponpoolavailable = 1;
		mass = 8;
		cost = 1;
    };

    class OEC_Magazine_545x39_30Rnd_Bakelite: OEC_Magazine_AK_Base
    {
        author = "OEC Extension";
		scope = 2;
		displayName = "[OEC] 30rnd 5.45x39 (Bakelite)";
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\magazines\rhs_30Rnd_545x39_AK_ca.paa";
		model = "\rhsafrf\addons\rhs_weapons3\magazines\rhs_ak_bklt_mag";
		modelSpecial = "\rhsafrf\addons\rhs_weapons\mag_proxies\rhs_mag_545x39_6l20_30rnd.p3d";
		modelSpecialIsProxy = 1;
		ammo = "OEC_Ammo_545x39";
		count = 30;
		mass = 9;
		initSpeed = 910;
		tracersEvery = 0;
		lastRoundsTracer = 3;
		descriptionShort = "30Rnd 5.45x39mm Magazine";
    };

    class OEC_Magazine_545x39_30Rnd_Black: OEC_Magazine_545x39_30Rnd_Bakelite
    {
		author = "OEC Extension";
		displayName = "[OEC] 30rnd 5.45x39 (Black)";
        picture = "\rhsafrf\addons\rhs_inventoryicons\data\magazines\rhs_30Rnd_545x39_7N10_plum_AK_ca.paa";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_weapons\texture\rhs_ak74_new_co.paa"};
		modelSpecial = "\rhsafrf\addons\rhs_weapons\mag_proxies\rhs_mag_545x39_6l23_30rnd.p3d";
		model = "\rhsafrf\addons\rhs_weapons\magazines\rhs_ak_mag_plum";
    };

	class OEC_Magazine_545x39_30Rnd_Taped: OEC_Magazine_545x39_30Rnd_Bakelite
	{
		author = "OEC Extension";
		displayName = "[OEC] 30rnd 5.45x39 (Taped)";
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\magazines\rhs_30Rnd_545x39_7N10_2mag_plum_AK_ca.paa";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_weapons\texture\rhs_ak74_new_co.paa"};
		modelSpecial = "\rhsafrf\addons\rhs_weapons\mag_proxies\rhs_mag_545x39_6l23x2_30rnd.p3d";
		model = "\rhsafrf\addons\rhs_weapons\magazines\rhs_ak_2mag_plum";
	};

	// 9x39 Val Mags
	class OEC_Magazine_9x39mm_SP5_20Rnd: OEC_Magazine_545x39_30Rnd_Black
	{
		author = "OEC Extension";
		displayName = "[OEC] 20Rnd 9x39 Sp-5";
		scope = 2;
		scopeArsenal = 2;
		ammo = "OEC_Ammo_9x39_SP5";
		count = 20;
		initSpeed = 280;
		lastRoundsTracer = 0;
		mass = 8;
		model = "\rhsafrf\addons\rhs_weapons2\magazines\rhs_9x39_20mag";
		modelSpecial = "rhsafrf\addons\rhs_weapons\mag_proxies\rhs_mag_9x39_6l25_20rnd";
		displayNameShort = "SP-5";
	};

	// GP-25 UGL Mags
	// VOG25 HEAT

	class 1Rnd_HE_Grenade_shell;
	class OEC_Magazine_VOG25: 1Rnd_HE_Grenade_shell
	{
		author = "OEC Extension";
		displayName = "[OEC] VOG-25 HEAT";
		displaynameshort = "HE Grenade";
		descriptionShort = "Standard 40mm CIS High-Explosive Grenade";
		picture = "\rhsafrf\addons\rhs_weapons\gear\rhs_vog25_ca.paa";
		model = "\rhsafrf\addons\rhs_weapons2\vogs\rhs_vog25";
		modelSpecial = "\rhsafrf\addons\rhs_weapons\mag_proxies\rhs_mag_vog25";
		modelSpecialIsProxy = 1;
		ammo = "OEC_Ammo_VOG25";
		count = 1;
		mass = 4.125;
		initspeed = 76.5;
		scope = 2;
		scopearsenal = 2;
	};

	class OEC_Magazine_VOG25_6Rnd: OEC_Magazine_VOG25
	{
		displayName = "[OEC] VOG-25 HEAT Drum (6Rnds)";
		displaynameshort = "HE Grenade Drum";
		descriptionShort = "Standard 40mm CIS High-Explosive Grenades, packed into a 6-round drum";
		count = 6;
		mass = 24.5;
	};

	// GMD40 Instant Smoke
	class OEC_Magazine_GDM40: OEC_Magazine_VOG25
	{
		author = "OEC Extension";
		displayName = "[OEC] GMD-40 Impact Smoke";
		displaynameshort = "Impact Smoke";
		descriptionShort = "Specialized 40mm CIS Impact Smoke Grenade";
		ammo = "OEC_Ammo_GDM40";
		nameSoundWeapon = "smokeshell";
		nameSound = "smokeshell";
		picture = "\rhsafrf\addons\rhs_weapons2\gear\rhs_gdm40_ca.paa";
		model = "\rhsafrf\addons\rhs_weapons2\vogs\rhs_gdm40";
		modelSpecial = "\rhsafrf\addons\rhs_weapons\mag_proxies\rhs_mag_gdm40";
		initspeed = 55;
	};

	class OEC_Magazine_GDM40_6Rnd: OEC_Magazine_GDM40
	{
		displayName = "[OEC] GMD-40 Impact Smoke Drum (6Rnds)";
		displaynameshort = "Impact Smoke Grenade Set";
		descriptionShort = "Specialized 40mm CIS Impact Smoke Grenades, packed into a 6-round drum";
		count = 6;
		mass = 24.5;
	};

	// VG40SZ Stun Grenade
	class OEC_Magazine_VG40SZ: OEC_Magazine_VOG25
	{
		author = "OEC Extension";
		displayName = "[OEC] VG-40SZ Stun Grenade";
		descriptionShort = "Specialized 40mm CIS Stun Grenade";
		displaynameshort = "Stun Grenade";
		picture = "\rhsafrf\addons\rhs_weapons\gear\rhs_vg40sz_ca.paa";
		model = "\rhsafrf\addons\rhs_weapons2\vogs\rhs_vg40md";
		modelSpecial = "\rhsafrf\addons\rhs_weapons\mag_proxies\rhs_mag_vg40md";
		ammo = "OEC_Ammo_VG40SZ";
		initspeed = 70;
	};

	// VG40OP Red Flares
	class OEC_Magazine_VG40OP_Red: OEC_Magazine_VOG25
	{
		author = "OEC Extension";
		displayName = "[OEC] VG-40OP Red Flare";
		displaynameshort = "Red Flare";
		descriptionShort = "Standard 40mm CIS Red Flare Grenade";
		ammo = "OEC_Ammo_40mm_RedFlare";
		initspeed = 70;
	};

	//Grenadier Special Submunition Mags (smoke + stun)
	class OEC_Magazine_SmokeStun_6Rnd: OEC_Magazine_VOG25
	{
		displayName = "[OEC] VG-40SZ Stun + GMD-40 Impact Smoke Mix Drum (6Rnds)";
		displaynameshort = "Stun and Impact Mix";
		descriptionShort = "Mix of specialized 40mm CIS Impact Smoke and Stun Grenades, packed into a 6-round drum";
		ammo = "OEC_Ammo_Special_SmokeStun";
		count = 6;
		mass = 10;
		initspeed = 70;
	};

	// PKM Magazines
	class CA_Magazine;
	class OEC_Magazine_762x51_150Rnd: CA_Magazine
	{
		author = "OEC Extension";
		displayName = "[OEC] 7.62x51 Box (150Rnd)";
		scope = 2;
		model = "\rhsafrf\addons\rhs_weapons\magazines\rhs_pk_mag";
		picture = "\rhsafrf\addons\rhs_weapons\icons\pkpbox_ca.paa";
		count = 150;
		type = "2*		256";
		ammo = "OEC_Ammo_762x51_TracerYellow";
		initSpeed = 860;
		tracersEvery = 1;
		mass = 64;
	};
	
	// disposable mag
	class CA_LauncherMagazine;
	class FakeMagazine;
	class OEC_Magazine_Disposable: FakeMagazine
	{
		allowedSlots[] = {701,901};
		scope = 1;
		scopeArsenal = 0;
		author = "OEC Extension";
		displayName = "[OEC] Disposable AT";
		displayNameShort = "AT";
		picture = "\rhsafrf\addons\rhs_weapons\icons\rpg26rocket_ca.paa";
		model = "\A3\weapons_f\empty";
		ammo = "OEC_Ammo_Rocket_Disposable";
		type = "6 * 		256";
		initSpeed = 115;
		mass = 0;
	};
	
	// RPG-7 Mags
	class OEC_Magazine_PG7V: CA_LauncherMagazine
	{
		author = "OEC Extension";
		displayName = "[OEC] PG-7V";
		displayNameShort = "PG-7V - AT";
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\magazines\rhs_rpg7_PG7V_mag_ca.paa";
		scope = 2;
		scopeArsenal = 2;
		descriptionShort = "Effective against: Vehicles, Armor.";
		model = "\rhsafrf\addons\rhs_weapons\rpg7\magazines\rhs_pg7v_mag";
		modelSpecial = "\rhsafrf\addons\rhs_weapons\mag_proxies\rhs_mag_pg7v";
		modelSpecialIsProxy = 1;
		hiddenSelections[] = {"camo_1","camo_2"};
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_weapons\rpg7\data\rhs_rpg7v2_02_co.paa","rhsafrf\addons\rhs_weapons\rpg7\data\pg_7v_co.paa"};
		ammo = "OEC_Ammo_Rocket_PG7V";
		type = "6 * 		256";
		initSpeed = 114;
		mass = 31.46;
	};

	// Makarov 9x18 mags
	class OEC_Magazine_9x18_8Rnd: CA_Magazine
	{
		author = "OEC Extension";
		displayName = "[OEC] 8Rnd 9x18";
		displayNameShort = "9x18";
		scope = 2;
		picture = "\A3\Weapons_F\Data\UI\M_30Rnd_45ACP_CA.paa";
		ammo = "OEC_Ammo_9x18";
		count = 8;
		mass = 10;
		initSpeed = 370;
		tracersEvery = 0;
	};
};
