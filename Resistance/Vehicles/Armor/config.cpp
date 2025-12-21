class CfgFunctions
{
    class OEC
    {
        tag = "OEC";
        class functions
        {
            class cisBMP3Assign
            {
                file = "\OECExtension\Scripts\OEC_cisBMP3Assign.sqf";
				description = "CIS BMP3 IFV Script";
            };
        };
    };
};

class CfgPatches
{
    class OEC_Extension_Resistance_Vehicles_Armor
    {
        addonRootClass = "OEC_Extension_Resistance_Vehicles";
        requiredAddons[] = 
        {
            "OEC_Extension_Resistance_Vehicles",
            "rhs_c_a2port_armor",
            "rhs_c_btr",
            "rhs_btr80",
			"rhs_c_bmp3",
			"rhs_bmp3",
			"rhs_c_heavyweapons",
			"OEC_Extension_Resistance_Weapons_Heavy"
        };
        units[] = 
		{
            "OEC_zsutank_base",
            "OEC_zsu234_AA",
     //       "OEC_BTR80_Base",
            "OEC_BTR80_CIS",
			"OEC_Vehicles_bmp3m",
			"OEC_Vehicles_T80_UE1"
		};
        weapons[] = 
        {
            "OEC_Weapons_ZU23_Shilka",
			"OEC_Weapons_vicPKM_BMP3_bow1",
			"OEC_Weapons_vicPKM_BMP3_bow2",
			"OEC_Weapons_DSHKM_BMP3"
        };
    };
};

class SensorTemplatePassiveRadar;
class SensorTemplateActiveRadar;
class SensorTemplateIR;
class SensorTemplateVisual;
class SensorTemplateMan;
class SensorTemplateLaser;
class SensorTemplateNV;
class DefaultVehicleSystemsDisplayManagerLeft
{
	class components;
};
class DefaultVehicleSystemsDisplayManagerRight
{
	class components;
};
class VehicleSystemsTemplateLeftDriver: DefaultVehicleSystemsDisplayManagerLeft
{
	class components;
};
class VehicleSystemsTemplateRightDriver: DefaultVehicleSystemsDisplayManagerRight
{
	class components;
};
class VehicleSystemsTemplateLeftCommander: DefaultVehicleSystemsDisplayManagerLeft
{
	class components;
};
class VehicleSystemsTemplateRightCommander: DefaultVehicleSystemsDisplayManagerRight
{
	class components;
};
class VehicleSystemsTemplateLeftGunner: DefaultVehicleSystemsDisplayManagerLeft
{
	class components;
};
class VehicleSystemsTemplateRightGunner: DefaultVehicleSystemsDisplayManagerRight
{
	class components;
};
class DefaultEventhandlers;
class RCWSOptics;

class CfgWeapons
{
    class OEC_Weapons_ZU23;
    class OEC_Weapons_ZU23_Shilka: OEC_Weapons_ZU23
	{
		type = 1;
		ballisticsComputer = 4;
		canLock = 0;
		weaponLockSystem = "1 + 2 + 8";
		displayName = "2A14";
		reloadMagazineSound[] = {"rhsafrf\addons\rhs_c_heavyweapons\sounds\rhs_2a14_reload",10.0,1,20};
		scope = 1;
		nameSound = "cannon";
		cartridgePos = "eject1";
		cartridgeVel = "eject1dir";
		cursor = "emptyCursor";
		cursorAim = "mg";
		cursorAimOn = "";
		cursorSize = 1;
		flash = "gunfire";
		flashSize = 0.1;
		class gunParticles
		{
			class effect1
			{
				positionName = "eject1";
				directionName = "eject1dir";
				effectName = "RHS_23mm_Catridge";
			};
			class effect2
			{
				positionName = "eject2";
				directionName = "eject2dir";
				effectName = "RHS_23mm_AmmoBeltLink";
			};
			class effect3
			{
				positionName = "eject3";
				directionName = "eject3dir";
				effectName = "RHS_23mm_Catridge";
			};
			class effect4
			{
				positionName = "eject4";
				directionName = "eject4dir";
				effectName = "RHS_23mm_AmmoBeltLink";
			};
		};
		magazines[] = {"OEC_Magazine_AZP23_AA_1250Rnd"};
		magazineReloadTime = 9;
		modes[] = {"manual","close","short","medium"};
		class manual: OEC_Weapons_ZU23
		{
			displayName = "2A14 23x152mm";
			autoFire = 1;
			reloadTime = 0.03;
			dispersion = 0.005;
			multiplier = 1;
			soundContinuous = 0;
			showToPlayer = 1;
			burst = 1;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 50;
			minRange = 1;
			minRangeProbab = 0.01;
			midRange = 2;
			midRangeProbab = 0.01;
			maxRange = 3;
			maxRangeProbab = 0.01;
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				soundSetShot[] = {"RHS_KPVT_Closure_SoundSet","RHS_KPVT_Shot_SoundSet","RHS_KPVT_Int_Shot_SoundSet","RHS_autocannon_Tail_SoundSet"};
			};
		};
		class close: manual
		{
			showToPlayer = 0;
			soundBurst = 0;
			burst = 40;
			burstRangeMax = 60;
			aiRateOfFire = 3;
			aiRateOfFireDistance = 500;
			aiRateOfFireDispersion = 2;
			minRange = 0;
			minRangeProbab = 0.05;
			midRange = 300;
			midRangeProbab = 0.58;
			maxRange = 500;
			maxRangeProbab = 0.3;
		};
		class short: close
		{
			burst = 40;
			burstRangeMax = 60;
			aiRateOfFire = 3;
			aiRateOfFireDistance = 1200;
			aiRateOfFireDispersion = 3;
			minRange = 500;
			minRangeProbab = 0.3;
			midRange = 800;
			midRangeProbab = 0.58;
			maxRange = 1200;
			maxRangeProbab = 0.3;
		};
		class medium: close
		{
			burst = 40;
			burstRangeMax = 60;
			aiRateOfFire = 3;
			aiRateOfFireDistance = 2500;
			aiRateOfFireDispersion = 3;
			minRange = 1200;
			minRangeProbab = 0.3;
			midRange = 1800;
			midRangeProbab = 0.58;
			maxRange = 2500;
			maxRangeProbab = 0.3;
		};
	};

	class OEC_Weapons_vicPKM;
	class OEC_Weapons_vicPKM_BMP3_bow1: OEC_Weapons_vicPKM
	{
		class gunParticles
		{
			class effect1
			{
				effectname = "MachineGunCloud";
				positionname = "muzzle2";
				directionname = "end2";
			};
		};
	};

	class OEC_Weapons_vicPKM_BMP3_bow2: OEC_Weapons_vicPKM
	{
		class gunParticles
		{
			class effect1
			{
				effectname = "MachineGunCloud";
				positionname = "muzzle3";
				directionname = "end2";
			};
		};
	};

	class OEC_Weapons_DSHKM;
	class OEC_Weapons_DSHKM_BTR80: OEC_Weapons_DSHKM
	{
		class effect1
			{
				effectname = "MachineGunCloud";
				positionname = "Usti hlavne";
				directionname = "Konec hlavne";
			};
			class effect2
			{
				effectname = "RHS_145mm_Catridge";
				positionname = "machinegun_eject_pos";
				directionname = "machinegun_eject_dir";
			};
		/*class effect1a
			{
				effectname = "MachineGunCloud";
				positionname = "Usti hlavne";
				directionname = "Konec hlavne";
			};
            class effect1
			{
				positionname = "nabojnicestart";
				directionname = "nabojniceend";
				effectname = "MachineGunEject";
			};
			class effect2
			{
				positionName = "machinegun_eject_pos";
				directionName = "machinegun_eject_dir";
				effectName = "MachineGunCartridge2";
			};*/
	};
	class OEC_Weapons_DSHKM_BMP3: OEC_Weapons_DSHKM
	{
		class gunParticles
		{
			class Shell
			{
				positionName = "ejector_30mm";
				directionName = "ejector_30mm_dir";
				effectName = "MachineGunCartridge2";
			};
			class Effect
			{
				positionname = "Usti hlavne3";
				directionname = "Konec hlavne3";
				effectname = "MachineGunCloud";
			};
		};
		/*class effect1a
			{
				effectname = "MachineGunCloud";
				positionname = "Usti hlavne";
				directionname = "Konec hlavne";
			};
            class effect1
			{
				positionname = "nabojnicestart";
				directionname = "nabojniceend";
				effectname = "MachineGunEject";
			};
			class effect2
			{
				positionName = "machinegun_eject_pos";
				directionName = "machinegun_eject_dir";
				effectName = "MachineGunCartridge2";
			};*/
	};
};

class CfgVehicles
{
	class LandVehicle;
	class Tank: LandVehicle
	{
		class NewTurret;
		class Sounds;
		class HitPoints;
	};
	class Tank_F: Tank
	{
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class Turrets
				{
					class CommanderOptics;
				};
			};
		};
		class AnimationSources;
		class ViewPilot;
		class ViewOptics;
		class ViewCargo;
		class HeadLimits;
		class Components;
		class HitPoints: HitPoints
		{
			class HitHull;
			class HitEngine;
			class HitLTrack;
			class HitRTrack;
		};
		class Sounds: Sounds
		{
			class Engine;
			class Movement;
		};
		class EventHandlers;
	};
	class APC_Tracked_02_base_F: Tank_F
	{
		class Components;
	};

    class OEC_zsutank_base: APC_Tracked_02_base_F
	{
		category = "Armored";
		driveOnComponent[] = {"Slide"};
		simulation = "tankX";
		maxFordingDepth = 0;
		waterResistance = 0;
		waterDamageEngine = 0.2;
		waterLeakiness = 10;
		maxSpeed = 50;
		enginePower = 209;
		peakTorque = 1176;
		minOmega = 61;
		maxOmega = 209.44;
		idleRpm = 600;
		redRpm = 2000;
		torqueCurve[] = {{0,0},{0.3,0.757238},{0.4,0.868597},{0.6,0.957684},{0.7,1},{0.8,0.746102},{1,0.534521},{1.5,0}};
		thrustDelay = 0.6;
		clutchStrength = 80.0;
		fuelCapacity = 30;
		RHS_fuelCapacity = 520;
		brakeIdleSpeed = 1.78;
		latency = 1.1;
		tankTurnForce = 330000;
		tankTurnForceAngMinSpd = 0.6;
		tankTurnForceAngSpd = 0.91;
		accelAidForceYOffset = -3.5;
		accelAidForceCoef = 4;
		accelAidForceSpd = 1.9;
		engineLosses = 25;
		transmissionLosses = 15;
		normalSpeedForwardCoef = 0.7;
		changeGearType = "rpmratio";
		changeGearOmegaRatios[] = {1,0.7,0.75,0.55,0.65,0.5,0.75,0.7,0.75,0.7,0.75,0.55,1,0.5};
		class complexGearbox
		{
			GearboxRatios[] = {"R2",-7.0,"N",0,"D1",1.25,"D2",1.2,"D3",1.15,"D4",1.05,"D5",0.95};
			TransmissionRatios[] = {"High",15.8};
			gearBoxMode = "auto";
			moveOffGear = 1;
			driveString = "D";
			neutralString = "N";
			reverseString = "R";
			transmissionDelay = 0.6;
		};
		class Wheels
		{
			class L2
			{
				suspTravelDirection[] = {-0.125,-1,0};
				side = "left";
				boneName = "wheel_podkoloL1";
				center = "wheel_1_2_axis";
				boundary = "wheel_1_2_bound";
				steering = 0;
				width = 0.33;
				mass = 150;
				MOI = 10;
				maxBrakeTorque = 8000;
				sprungMass = -1;
				springStrength = 150000;
				springDamperRate = 11000;
				dampingRate = 2114.0;
				dampingRateInAir = 2114.0;
				dampingRateDamaged = 10.0;
				dampingRateDestroyed = 10000.0;
				maxDroop = 0.18;
				maxCompression = 0.18;
				latStiffX = 3.5;
				latStiffY = 35;
				longitudinalStiffnessPerUnitGravity = 14000;
				frictionVsSlipGraph[] = {{0.0,0.45},{0.18,1.0},{0.6,0.6}};
			};
			class L3: L2
			{
				boneName = "wheel_podkolol2";
				center = "wheel_1_3_axis";
				boundary = "wheel_1_3_bound";
			};
			class L4: L2
			{
				boneName = "wheel_podkolol3";
				center = "wheel_1_4_axis";
				boundary = "wheel_1_4_bound";
			};
			class L5: L2
			{
				boneName = "wheel_podkolol4";
				center = "wheel_1_5_axis";
				boundary = "wheel_1_5_bound";
			};
			class L6: L2
			{
				boneName = "wheel_podkolol5";
				center = "wheel_1_6_axis";
				boundary = "wheel_1_6_bound";
			};
			class L7: L2
			{
				boneName = "wheel_podkolol6";
				center = "wheel_1_7_axis";
				boundary = "wheel_1_7_bound";
			};
			class L9: L2
			{
				boneName = "wheel_podkolol9";
				center = "wheel_1_9_axis";
				boundary = "wheel_1_9_bound";
				maxDroop = 0;
				maxCompression = 0;
			};
			class L1: L2
			{
				boneName = "";
				center = "wheel_1_1_axis";
				boundary = "wheel_1_1_bound";
				maxDroop = 0;
				maxCompression = 0;
			};
			class R2: L2
			{
				boneName = "wheel_podkolop1";
				center = "wheel_2_2_axis";
				boundary = "wheel_2_2_bound";
				side = "right";
				suspTravelDirection[] = {0.125,-1,0};
			};
			class R3: R2
			{
				boneName = "wheel_podkolop2";
				center = "wheel_2_3_axis";
				boundary = "wheel_2_3_bound";
			};
			class R4: R2
			{
				boneName = "wheel_podkolop3";
				center = "wheel_2_4_axis";
				boundary = "wheel_2_4_bound";
			};
			class R5: R2
			{
				boneName = "wheel_podkolop4";
				center = "wheel_2_5_axis";
				boundary = "wheel_2_5_bound";
			};
			class R6: R2
			{
				boneName = "wheel_podkolop5";
				center = "wheel_2_6_axis";
				boundary = "wheel_2_6_bound";
			};
			class R7: R2
			{
				boneName = "wheel_podkolop6";
				center = "wheel_2_7_axis";
				boundary = "wheel_2_7_bound";
			};
			class R9: R2
			{
				boneName = "wheel_podkolop9";
				center = "wheel_2_9_axis";
				boundary = "wheel_2_9_bound";
				maxDroop = 0;
				maxCompression = 0;
			};
			class R1: R2
			{
				boneName = "";
				center = "wheel_2_1_axis";
				boundary = "wheel_2_1_bound";
				maxDroop = 0;
				maxCompression = 0;
			};
		};
		displayName = "ZSU-23-4 Shilka";
		author = "OEC Extension";
		vehicleClass = "OEC_Vehclass_AA";
		editorSubcategory = "OEC_EdSubCat_AA";
		accuracy = 0.3;
		destrType = "DestructDefault";
		model = "\rhsafrf\addons\rhs_a2port_armor\rhs_zsu";
		picture = "\rhsafrf\addons\rhs_a2port_armor\pictures\rhs_zsu23_pic_ca.paa";
		Icon = "\rhsafrf\addons\rhs_a2port_armor\data\icomap_zsu_CA.paa";
		crew = "OEC_Units_CIS_Crew";
		typicalCargo[] = {};
		side = 0;
		faction = "OEC_Faction_CIS";
		tracksSpeed = 1;
		irTarget = 1;
		irTargetSize = 1.2;
		visualTarget = 1;
		visualTargetSize = 1.2;
		radarTarget = 1;
		radarTargetSize = 1.2;
		reportRemoteTargets = 1;
		receiveRemoteTargets = 1;
		cost = 1500000;
		damageResistance = 0.02;
		crewVulnerable = 1;
		drivercompartments = "Compartment1";
		getInAction = "GetInLow";
		getOutAction = "GetOutLow";
		driverAction = "RHS_ZSU_Driver";
		driverInAction = "RHS_ZSU_Driver";
		driverDoor = "hatchD";
		forceHideDriver = 0;
		driverForceOptics = 1;
		viewDriverInExternal = 1;
		LODDriverOpticsIn = 0;
		LODDriverOpticsOut = 0;
		LODDriverTurnedIn = 0;
		LODDriverTurnedOut = 0;
		unitInfoType = "RHS_RscUnitInfoEastTank";
		mapSize = 6.5;
		commanderCanSee = 31;
		gunnerCanSee = "1+16+4+8";
		threat[] = {1.0,0.6,1.0};
		irScanGround = 0;
		irScanRangeMix = 3000;
		irScanRangeMax = 3000;
		radarType = 2;
		artilleryScanner = 0;
		incomingMissileDetectionSystem = 0;
		driverOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_tnpo170a";
		armor = 400;
		armorStructural = 600;
		class ViewOptics: ViewOptics
		{
			initFov = 0.7;
			minFov = 0.7;
			maxFov = 0.7;
		};
		class HitPoints: HitPoints
		{
			class HitHull: HitHull
			{
				armor = 1;
				material = -1;
				name = "telo";
				visual = "zbytek";
				passThrough = 0;
				minimalHit = 0.14;
				explosionShielding = 0.5;
				radius = 0.25;
			};
			class HitEngine
			{
				armor = 0.8;
				material = -1;
				name = "motor";
				visual = "zbytek";
				passThrough = 0.01;
				minimalHit = 0.03;
				explosionShielding = 0.05;
				radius = 0.2;
				class DestructionEffects
				{
					ammoExplosionEffect = "";
					class RHS_Engine_Smoke
					{
						simulation = "particles";
						type = "SmallWreckSmoke";
						position = "engine_smoke1";
						intensity = 0.5;
						interval = 1;
						lifeTime = 60;
					};
					class RHS_Engine_Fire: RHS_Engine_Smoke
					{
						type = "SmallFireFPlace";
					};
					class RHS_Engine_Sparks: RHS_Engine_Smoke
					{
						type = "RHS_FireSparks";
					};
					class RHS_Engine_Sounds: RHS_Engine_Smoke
					{
						simulation = "sound";
						type = "Fire";
					};
					class RHS_Engine_Smoke_small1: RHS_Engine_Smoke
					{
						type = "WeaponWreckSmoke";
						position = "engine_smoke2";
					};
					class RHS_Engine_Smoke_small2: RHS_Engine_Smoke_small1
					{
						position = "engine_smoke3";
					};
					class RHS_Engine_Smoke_small3: RHS_Engine_Smoke
					{
						position = "engine_smoke4";
					};
					class RHS_Engine_Fire2: RHS_Engine_Smoke_small3
					{
						type = "SmallFireFPlace";
					};
					class RHS_Engine_Sparks2: RHS_Engine_Smoke_small3
					{
						type = "RHS_FireSparks";
					};
				};
			};
			class HitLTrack: HitLTrack
			{
				armor = 0.5;
				material = -1;
				name = "pas_L";
				passThrough = 0;
				minimalHit = 0.15;
				explosionShielding = 0.5;
				radius = 0.3;
			};
			class HitRTrack: HitRTrack
			{
				armor = 0.5;
				material = -1;
				name = "pas_P";
				passThrough = 0;
				minimalHit = 0.15;
				explosionShielding = 0.5;
				radius = 0.3;
			};
		};
		class RenderTargets{};
		class TransportMagazines{};
		class TransportWeapons{};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name = "FirstAidKit";
				count = 4;
			};
		};
		hiddenSelections[] = {"camo1","camo2","camo3","n1","n2","n3"};
		hiddenSelectionsTextures[] = {"\rhsafrf\addons\rhs_a2port_armor\data\zsu_01_co.paa","\rhsafrf\addons\rhs_a2port_armor\data\zsu_02_co.paa","\rhsafrf\addons\rhs_a2port_armor\data\zsu_03_co.paa","rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa"};
		class textureSources
		{
			class standard
			{
				displayName = "Standard";
				textures[] = {"\rhsafrf\addons\rhs_a2port_armor\data\zsu_01_co.paa","\rhsafrf\addons\rhs_a2port_armor\data\zsu_02_co.paa","\rhsafrf\addons\rhs_a2port_armor\data\zsu_03_co.paa"};
				factions[] = {"rhs_faction_vpvo"};
			};
			class Chdkz
			{
				displayName = "Chedaki";
				textures[] = {"\rhsafrf\addons\rhs_a2port_armor\data\zsu_01_gue_co.paa","\rhsafrf\addons\rhs_a2port_armor\data\zsu_02_gue_co.paa","\rhsafrf\addons\rhs_a2port_armor\data\zsu_03_gue_co.paa"};
				factions[] = {};
			};
			class rhs_sand
			{
				displayName = "Sand";
				author = "beaar";
				textures[] = {"\rhsafrf\addons\rhs_a2port_armor_camo\data\zsu_01_des_co.paa","\rhsafrf\addons\rhs_a2port_armor_camo\data\zsu_02_des_co.paa","\rhsafrf\addons\rhs_a2port_armor_camo\data\zsu_03_des_co.paa"};
				factions[] = {};
			};
		};
		textureList[] = {};
		class Attributes
		{
			class ObjectTexture
			{
				control = "ObjectTexture";
				data = "ObjectTexture";
				displayName = "Skin";
				tooltip = "Texture and material set applied on the object.";
			};
			class rhs_decalNumber_type
			{
				displayName = "Define font type of plate number";
				tooltip = "Define kind of font that will be drawn on vehicle.";
				property = "rhs_decalNumber_type";
				control = "Combo";
				expression = "_this setVariable ['%s', _value,true];[_this,[['Number', cRHSZSUNumberPlaces, _value]]] call rhs_fnc_decalsInit";
				defaultValue = 0;
				typeName = "STRING";
				class values
				{
					class Default
					{
						name = "Default";
						value = "Default";
						defaultValue = "Default";
					};
					class DefaultRed
					{
						name = "Default (Red)";
						value = "DefaultRed";
					};
					class BoldRed
					{
						name = "Bold Red";
						value = "BoldRed";
					};
					class CDF
					{
						name = "CDF";
						value = "CDF";
					};
					class Handpaint
					{
						name = "Handpaint";
						value = "Handpaint";
					};
					class HandpaintBlack
					{
						name = "Handpaint Black";
						value = "HandpaintBlack";
					};
					class Iraqi
					{
						name = "Iraqi";
						value = "Iraqi";
					};
					class LicensePlate
					{
						name = "License Plate";
						value = "LicensePlate";
					};
				};
			};
			class rhs_decalNumber
			{
				collapsed = 1;
				displayName = "Set side number";
				tooltip = "Set side number. 4 numbers are required. Type 0 to hide numbers complety & leave at -1 to get random number";
				property = "rhs_decalNumber";
				control = "Edit";
				validate = "Number";
				typeName = "Number";
				defaultValue = "-1";
				expression = "if( _value >= 0)then{if( _value == 0)then{{[_this setobjectTexture [_x,'a3\data_f\clear_empty.paa']]}foreach cRHSZSUNumberPlaces}else{[_this, [['Number', cRHSZSUNumberPlaces, _this getVariable ['rhs_decalNumber_type','Default'], _value] ] ] call rhs_fnc_decalsInit}};";
			};
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						gunBeg = "gun_muzzle";
						gunEnd = "gun_chamber";
						body = "ObsTurret";
						gun = "ObsGun";
						gunnerOutOpticsModel = "";
						memoryPointGunnerOutOptics = "commanderview";
						memoryPointGunnerOptics = "commanderview";
						LODTurnedOut = 1100;
						gunnerOpticsEffect[] = {"TankCommanderOptics1"};
						weapons[] = {};
						magazines[] = {};
						turretInfoType = "RscWeaponEmpty";
						forceHideGunner = 0;
						gunnerInAction = "RHS_ZSU_Commander";
						gunnerAction = "RHS_ZSU_CommanderOut";
						gunnerDoor = "hatchC";
						gunnerForceOptics = 1;
						gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_tkn3.p3d";
						minElev = -10;
						maxElev = 60;
						initElev = 0;
						minTurn = -360;
						maxTurn = 360;
						initTurn = 0;
						class ViewOptics: ViewOptics
						{
							initFov = 0.111;
							minFov = 0.111;
							maxFov = 0.111;
							visionMode[] = {"Normal","NVG"};
						};
						startEngine = 0;
						outGunnerMayFire = 0;
						maxHorizontalRotSpeed = 2;
						maxVerticalRotSpeed = 2;
						inGunnerMayFire = 1;
						viewGunnerInExternal = 1;
						class OpticsIn
						{
							class Wide: ViewOptics
							{
								gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_tkn3.p3d";
								gunnerOutOpticsModel = "";
							};
							class Periscope: ViewOptics
							{
								initAngleX = 0;
								minAngleX = -30;
								maxAngleX = 30;
								initAngleY = 0;
								minAngleY = -100;
								maxAngleY = 100;
								initFov = 0.26;
								minFov = 0.26;
								maxFov = 0.26;
								visionMode[] = {"Normal"};
								gunnerOpticsModel = "\a3\weapons_f\reticle\Optics_Driver_01_f";
								gunnerOpticsEffect[] = {"TankGunnerOptics1","OpticsBlur2","OpticsCHAbera2"};
							};
						};
						class Components
						{
							class AICarSteeringComponent
							{
								steeringPIDWeights[] = {1.2,0.1,0.2};
								speedPIDWeights[] = {1.7,1.3,1.1};
								doRemapSpeed = 1;
								remapSpeedRange[] = {40.0,50.0};
								remapSpeedScalar[] = {1.0,0.35};
								doPredictForward = 1;
								predictForwardRange[] = {0.1,20};
								steerAheadSaturation[] = {0.01,0.4};
								speedPredictionMethod = 1;
								wheelAngleCoef = 0.7;
								forwardAngleCoef = 0.7;
								steeringAngleCoef = 1.0;
								differenceAngleCoef = 1.0;
								stuckMaxTime = 3.0;
								allowOvertaking = 1;
								allowCollisionAvoidance = 1;
								allowDrifting = 0;
								maxWheelAngleDiff = 0.2616;
								minSpeedToKeep = 0.1;
								commandTurnFactor = 1.0;
							};
							class VehicleSystemsDisplayManagerComponentLeft: VehicleSystemsTemplateLeftCommander
							{
								class Components
								{
									class EmptyDisplay
									{
										componentType = "EmptyDisplayComponent";
									};
									class CrewDisplay
									{
										componentType = "CrewDisplayComponent";
										resource = "RscCustomInfoCrew";
									};
									class SensorDisplay
									{
										componentType = "SensorsDisplayComponent";
										range[] = {2000,4000,8000,14000};
										resource = "RscCustomInfoSensors";
									};
								};
							};
							class VehicleSystemsDisplayManagerComponentRight: VehicleSystemsTemplateRightCommander
							{
								defaultDisplay = "SensorDisplay";
								class Components
								{
									class EmptyDisplay
									{
										componentType = "EmptyDisplayComponent";
									};
									class CrewDisplay
									{
										componentType = "CrewDisplayComponent";
										resource = "RscCustomInfoCrew";
									};
									class SensorDisplay
									{
										componentType = "SensorsDisplayComponent";
										range[] = {2000,4000,8000,14000};
										resource = "RscCustomInfoSensors";
									};
								};
							};
						};
					};
				};
				class Components
				{
					class VehicleSystemsDisplayManagerComponentLeft: VehicleSystemsTemplateLeftGunner
					{
						class Components
						{
							class EmptyDisplay
							{
								componentType = "EmptyDisplayComponent";
							};
							class CrewDisplay
							{
								componentType = "CrewDisplayComponent";
								resource = "RscCustomInfoCrew";
							};
							class SensorDisplay
							{
								componentType = "SensorsDisplayComponent";
								range[] = {2000,4000,8000,16000};
								resource = "RscCustomInfoSensors";
							};
						};
					};
					class VehicleSystemsDisplayManagerComponentRight: VehicleSystemsTemplateRightGunner
					{
						defaultDisplay = "SensorDisplay";
						class Components
						{
							class EmptyDisplay
							{
								componentType = "EmptyDisplayComponent";
							};
							class CrewDisplay
							{
								componentType = "CrewDisplayComponent";
								resource = "RscCustomInfoCrew";
							};
							class SensorDisplay
							{
								componentType = "SensorsDisplayComponent";
								range[] = {2000,4000,8000,16000};
								resource = "RscCustomInfoSensors";
							};
						};
					};
				};
				LODTurnedOut = 1100;
				weapons[] = {"OEC_Weapons_ZU23_Shilka"};
				magazines[] = {"OEC_Magazine_AZP23_AA_1250Rnd"};
				forceHideGunner = 0;
				minElev = -4.5;
				maxElev = 85;
				minTurn = -360;
				maxTurn = 360;
				maxHorizontalRotSpeed = 0.94;
				maxVerticalRotSpeed = 0.6;
				class OpticsIn
				{
					class Wide: ViewOptics
					{
						initFov = 0.35;
						minFov = 0.35;
						maxFov = 0.35;
						gunnerOpticsModel = "\rhsafrf\addons\rhs_a2port_armor\2Dscope_RUAA8";
						gunnerOutOpticsModel = "";
						visionMode[] = {"Normal"};
						gunnerOpticsEffect[] = {"TankGunnerOptics1","OpticsBlur2","OpticsCHAbera2"};
					};
					class Auto: Wide
					{
						initFov = 0.175;
						minFov = 0.175;
						maxFov = 0.175;
						directionStabilized = 1;
					};
				};
				gunnerAction = "RHS_ZSU_GunnerOut";
				gunnerInAction = "RHS_ZSU_Gunner";
				gunnerForceOptics = 1;
				class ViewOptics
				{
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = 30;
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = 100;
					initFov = 0.2;
					minFov = 0.058;
					maxFov = 0.2;
					visionMode[] = {"Normal","NVG"};
				};
				gunnerDoor = "hatchG";
				memoryPointGun[] = {"chase01","chase02","chase03","chase04"};
				turretInfoType = "RscWeaponZeroing";
				discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000};
				discreteDistanceInitIndex = 5;
				selectionFireAnim = "zasleh";
				viewGunnerInExternal = 1;
				class HitPoints
				{
					class HitTurret
					{
						armor = 0.5;
						material = -1;
						name = "vez";
						visual = "vez";
						passThrough = 0;
						minimalHit = 0.14;
						explosionShielding = 0.001;
						radius = 0.2;
					};
					class HitGun
					{
						armor = 0.6;
						material = -1;
						name = "zbran";
						visual = "-";
						passThrough = 0;
						minimalHit = 0.13;
						explosionShielding = 0.001;
						radius = 0.2;
					};
				};
			};
		};
		class Damage
		{
			tex[] = {};
			mat[] = {"rhsafrf\addons\rhs_a2port_armor\data\ZSU_01.rvmat","rhsafrf\addons\rhs_a2port_armor\data\ZSU_01_damage.rvmat","rhsafrf\addons\rhs_a2port_armor\data\ZSU_01_destruct.rvmat","rhsafrf\addons\rhs_a2port_armor\data\ZSU_02.rvmat","rhsafrf\addons\rhs_a2port_armor\data\ZSU_02_damage.rvmat","rhsafrf\addons\rhs_a2port_armor\data\ZSU_02_destruct.rvmat","rhsafrf\addons\rhs_a2port_armor\data\ZSU_03.rvmat","rhsafrf\addons\rhs_a2port_armor\data\ZSU_03_damage.rvmat","rhsafrf\addons\rhs_a2port_armor\data\ZSU_03_destruct.rvmat","rhsafrf\addons\rhs_a2port_armor\data\ZSU_track.rvmat","rhsafrf\addons\rhs_a2port_armor\data\ZSU_track_damage.rvmat","rhsafrf\addons\rhs_a2port_armor\data\ZSU_track_destruct.rvmat","a3\data_f\default.rvmat","a3\data_f\default.rvmat","a3\data_f\default_destruct.rvmat"};
		};
		class AnimationSources
		{
			class HatchC
			{
				source = "door";
				animPeriod = 2.1;
			};
			class HatchG: HatchC{};
			class HatchD: HatchC{};
			class muzzle_rot1
			{
				weapon = "OEC_Weapons_ZU23_Shilka";
				source = "ammorandom";
			};
		};
		class Reflectors
		{
			class Left
			{
				color[] = {190,130,95};
				ambient[] = {0.1,0.1,0.1,1};
				position = "L svetlo";
				direction = "konec L svetla";
				hitpoint = "L svetlo";
				selection = "L svetlo";
				size = 1;
				innerAngle = 100;
				outerAngle = 179;
				coneFadeCoef = 10;
				intensity = 1;
				useFlare = 0;
				dayLight = 0;
				flareSize = 1.0;
				class Attenuation
				{
					start = 1.0;
					constant = 0;
					linear = 0;
					quadratic = 0.25;
					hardLimitStart = 30;
					hardLimitEnd = 60;
				};
			};
			class Right: Left
			{
				position = "P svetlo";
				direction = "konec P svetla";
				hitpoint = "P svetlo";
				selection = "P svetlo";
			};
		};
		aggregateReflectors[] = {{"Left","Right"}};
		class Exhausts
		{
			class Exhaust1
			{
				position = "exhaust";
				direction = "exhaust_dir";
				effect = "ExhaustEffectTankBack";
			};
		};
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class ActiveRadarSensorComponent: SensorTemplateActiveRadar
					{
						class AirTarget
						{
							minRange = 3000;
							maxRange = 3000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							minRange = -1;
							maxRange = -1;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						angleRangeHorizontal = 360;
						angleRangeVertical = 100;
						typeRecognitionDistance = 3000;
						groundNoiseDistanceCoef = 0.05;
						maxGroundNoiseDistance = 60;
						minSpeedThreshold = 20;
						maxSpeedThreshold = 90;
						maxFogSeeThrough = 1;
						aimDown = -35;
						minTrackableSpeed = 25;
						maxTrackableSpeed = 555;
						minTrackableATL = 30;
					};
				};
			};
		};
		class EventHandlers: EventHandlers
		{
			class RHS_EventHandlers
			{
				init = "_this call rhs_fnc_bmp3_init;";
				postInit = "_this call rhs_fnc_reapplyTextures";
				getOut = "_this call rhs_fnc_hatchAbandon";
				engine = "_this call rhs_fnc_engineCheckDamage;";
			};
		};
	};

    class OEC_zsu234_AA: OEC_zsutank_base
	{
		editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_zsu234_aa.paa";
		scope = 2;
        scopeCurator = 2;
		side = 0;
        displayName = "ZSU-23-4 Shilka";
		author = "OEC Extension";
		faction = "OEC_Faction_CIS";
		factionClass = "OEC_Faction_Class_CIS";
        editorCategory = "OEC_EdCat_CIS";
        editorSubCategory = "OEC_EdSubCat_AA";
		vehicleClass = "OEC_Vehclass_AA";
	};

    // BTR-80 APC
    class rhs_btr70_msv;
    class rhs_btr80_msv: rhs_btr70_msv
    {
        class Turrets
        {
            class MainTurret;
        };
        class AnimationSources
        {
            class recoil_source;
        };
		class HitPoints
		{
			class HitBody;
			class HitEngine;
		};
    };
    class OEC_BTR80_Base: rhs_btr80_msv
    {
        class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
                weapons[] = {"OEC_Weapons_DSHKM_BTR80","OEC_Weapons_vicPKM", "rhs_weap_902a"};
				magazines[] = {"OEC_Magazine_127x100_50Rnd", "OEC_Magazine_127x100_50Rnd", "OEC_Magazine_127x100_50Rnd", "OEC_Magazine_127x100_50Rnd", "OEC_Magazine_762x51_100Rnd", "OEC_Magazine_762x51_100Rnd", "OEC_Magazine_762x51_100Rnd", "OEC_Magazine_762x51_100Rnd", "rhs_mag_3d17_6"};
            };
        };
		armor = 350;
		class HitPoints: HitPoints
		{
			class HitEngine
			{
				armor = 1;
				material = -1;
				name = "engine";
				visual = "zbytek";
				passThrough = 0.2;
				radius = 0.2;
				class DestructionEffects
				{
					ammoExplosionEffect = "";
					class RHS_Engine_Smoke
					{
						simulation = "particles";
						type = "SmallWreckSmoke";
						position = "engine_smoke1";
						intensity = 0.5;
						interval = 1;
						lifeTime = 60;
					};
					class RHS_Engine_Fire: RHS_Engine_Smoke
					{
						type = "SmallFireFPlace";
					};
					class RHS_Engine_Sparks: RHS_Engine_Smoke
					{
						type = "RHS_FireSparks";
					};
					class RHS_Engine_Sounds: RHS_Engine_Smoke
					{
						simulation = "sound";
						type = "Fire";
					};
					class RHS_Engine_Smoke_small1: RHS_Engine_Smoke
					{
						type = "WeaponWreckSmoke";
						position = "engine_smoke2";
					};
					class RHS_Engine_Smoke_small2: RHS_Engine_Smoke_small1
					{
						position = "engine_smoke3";
					};
					class RHS_Engine_Smoke_small3: RHS_Engine_Smoke
					{
						position = "engine_smoke4";
					};
					class RHS_Engine_Fire2: RHS_Engine_Smoke_small3
					{
						type = "SmallFireFPlace";
					};
					class RHS_Engine_Sparks2: RHS_Engine_Smoke_small3
					{
						type = "RHS_FireSparks";
					};
				};
			};
			class HitFuel
			{
				armor = 4;
				material = -1;
				name = "palivo";
				passThrough = 0;
				radius = 0.15;
			};
			class HitHull
			{
				armor = 1;
				material = -1;
				name = "telo";
				visual = "zbytek";
				passThrough = 1;
				minimalHit = 0.44;
				explosionShielding = 1;
				radius = 0.25;
			};
			class Armor_Composite_50
			{
				armor = 3;
				material = -1;
				name = "Armor_CE_50_Hit";
				armorComponent = "Armor_CE_50";
				simulation = "RHS_Composite_50";
				passThrough = 0;
				minimalHit = 1;
				explosionShielding = 0.0;
				radius = 0.001;
				visual = "-";
			};
		};
		class AnimationSources: AnimationSources
		{
			class recoil_source
			{
				source = "reload";
				weapon = "OEC_Weapons_DSHKM_BTR80";
			};
			class muzzle_hide_hmg: recoil_source{};
			class muzzle_rot_hmg: recoil_source
			{
				source = "ammorandom";
			};
			class muzzle_rot_mg: muzzle_rot_hmg
			{
				weapon = "OEC_Weapons_vicPKM";
			};
			class smokecap_revolving_source
			{
				source = "revolving";
				weapon = "rhs_weap_902a";
			};
		};
		class TransportMagazines{};
		class TransportWeapons{};
		class TransportItems{};
		class TransportBackpacks{};
		class Eventhandlers;
        
    };

    class OEC_BTR80_CIS: OEC_BTR80_Base
	{
		editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_btr80_vv.paa";
		scope = 2;
        scopeCurator = 2;
		side = 0;
        displayName = "BTR-80 APC";
		author = "OEC Extension";
		faction = "OEC_Faction_CIS";
		factionClass = "OEC_Faction_Class_CIS";
        editorCategory = "OEC_EdCat_CIS";
        editorSubCategory = "OEC_EdSubCat_AFV";
		vehicleClass = "OEC_Vehclass_APC";
		crew = "OEC_Units_CIS_Crew";
	};

	// BMP-3 IFV
	class rhs_bmp3tank_base: Tank_F
	{
		class Wheels;
		class textureSources
		{
			class standard;
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics{};
				};
				class OpticsIn
				{
					class Wide;
				};
			};
			class GPMGTurret1: NewTurret{};
			class GPMGTurret2: GPMGTurret1{};
		};
		class EventHandlers: EventHandlers
		{
			class RHS_EventHandlers
			{
				init = "_this call rhs_fnc_bmp3_init;";
				postInit = "_this call rhs_fnc_reapplyTextures";
				fired = "_this call RHS_fnc_bmp3_autoloader;";
				hitpart = "_this call rhs_fnc_hitSpall";
				engine = "[_this select 0,_this select 1,2] call rhs_fnc_engineStartupDelay;_this call rhs_fnc_engineCheckDamage;";
				getOut = "_this call rhs_fnc_hatchAbandon";
			};
		};

	};
	class rhs_bmp3m_msv: rhs_bmp3tank_base
	{
		class Wheels: Wheels
		{
			class L2;
		};
		class textureSources
		{
			class standard;
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics{};
				};
				class OpticsIn
				{
					class Wide;
				};
			};
			class GPMGTurret1: GPMGTurret1{};
			class GPMGTurret2: GPMGTurret2{};
		};
	};
	class OEC_Vehicles_bmp3m: rhs_bmp3m_msv
	{
		editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_bmp3mera_msv.paa";
		model = "\rhsafrf\addons\rhs_bmp3\bmp3m_era";
		displayName = "BMP-3 IFV";
		scope = 2;
		scopeCurator = 2;
		side = 0;
		author = "OEC Extension";
		faction = "OEC_Faction_CIS";
		factionClass = "OEC_Faction_Class_CIS";
        editorCategory = "OEC_EdCat_CIS";
        editorSubCategory = "OEC_EdSubCat_AFV";
		vehicleClass = "OEC_Vehclass_IFV";
		crew = "OEC_Units_CIS_Crew";
		typicalCargo[] = {"OEC_Units_CIS_Crew","OEC_Units_CIS_Crew","OEC_Units_CIS_Crew","OEC_Units_CIS_rifleman","OEC_Units_CIS_rifleman"};
		enableGPS = 1;
		reportOwnPosition = 1;
		enginePower = 478;
		peakTorque = 1650;
		threat[] = {1.0,0.6,0.5};
		torqueCurve[] = {{0,0},{0.228896,0.649091},{0.4,0.892121},{0.519156,1},{0.657143,0.992727},{0.813961,0.970303},{0.942857,0.952121},{1.05,0}};
		class Wheels: Wheels
		{
			class L2: L2
			{
				dampingRate = 1034.0;
				dampingRateInAir = 1034.0;
			};
			class L3: L2
			{
				boneName = "wheel_podkolol2";
				center = "wheel_1_3_axis";
				boundary = "wheel_1_3_bound";
			};
			class L4: L2
			{
				boneName = "wheel_podkolol3";
				center = "wheel_1_4_axis";
				boundary = "wheel_1_4_bound";
			};
			class L5: L2
			{
				boneName = "wheel_podkolol4";
				center = "wheel_1_5_axis";
				boundary = "wheel_1_5_bound";
			};
			class L6: L2
			{
				boneName = "wheel_podkolol5";
				center = "wheel_1_6_axis";
				boundary = "wheel_1_6_bound";
			};
			class L7: L2
			{
				boneName = "wheel_podkolol6";
				center = "wheel_1_7_axis";
				boundary = "wheel_1_7_bound";
			};
			class L9: L2
			{
				boneName = "wheel_podkolol9";
				center = "wheel_1_9_axis";
				boundary = "wheel_1_9_bound";
				maxDroop = 0;
				maxCompression = 0;
			};
			class L1: L2
			{
				boneName = "";
				center = "wheel_1_1_axis";
				boundary = "wheel_1_1_bound";
				maxDroop = 0;
				maxCompression = 0;
			};
			class R2: L2
			{
				boneName = "wheel_podkolop1";
				center = "wheel_2_2_axis";
				boundary = "wheel_2_2_bound";
				side = "right";
			};
			class R3: R2
			{
				boneName = "wheel_podkolop2";
				center = "wheel_2_3_axis";
				boundary = "wheel_2_3_bound";
			};
			class R4: R2
			{
				boneName = "wheel_podkolop3";
				center = "wheel_2_4_axis";
				boundary = "wheel_2_4_bound";
			};
			class R5: R2
			{
				boneName = "wheel_podkolop4";
				center = "wheel_2_5_axis";
				boundary = "wheel_2_5_bound";
			};
			class R6: R2
			{
				boneName = "wheel_podkolop5";
				center = "wheel_2_6_axis";
				boundary = "wheel_2_6_bound";
			};
			class R7: R2
			{
				boneName = "wheel_podkolop6";
				center = "wheel_2_7_axis";
				boundary = "wheel_2_7_bound";
			};
			class R9: R2
			{
				boneName = "wheel_podkolop9";
				center = "wheel_2_9_axis";
				boundary = "wheel_2_9_bound";
				maxDroop = 0;
				maxCompression = 0;
			};
			class R1: R2
			{
				boneName = "";
				center = "wheel_2_1_axis";
				boundary = "wheel_2_1_bound";
				maxDroop = 0;
				maxCompression = 0;
			};
		};
		hiddenSelections[] = {"camo1","camo2","camo3","camo4","camo5","n1","n2","n3","i1","f1","f2","f3","f4","f5","f6","f7","f8","f9"};
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_bmp3\data\rhs_bmp3_01_3mera_co.paa","rhsafrf\addons\rhs_bmp3\data\rhs_bmp3_02_3mera_co.paa","rhsafrf\addons\rhs_bmp3\data\rhs_bmp3_03_3m_co.paa","rhsafrf\addons\rhs_bmp3\data\rhs_bmp3_04_co.paa","rhsafrf\addons\rhs_bmp3\data\3m_era_co.paa"};
		class textureSources: textureSources
		{
			class standard: standard
			{
				author = "$STR_RHS_AUTHOR_FULL";
				textures[] = {"rhsafrf\addons\rhs_bmp3\data\rhs_bmp3_01_3mera_co.paa","rhsafrf\addons\rhs_bmp3\data\rhs_bmp3_02_3mera_co.paa","rhsafrf\addons\rhs_bmp3\data\rhs_bmp3_03_3m_co.paa","rhsafrf\addons\rhs_bmp3\data\rhs_bmp3_04_co.paa","rhsafrf\addons\rhs_bmp3\data\3m_era_co.paa"};
			};
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						gunnerType = "OEC_Units_CIS_Crew";
						class Components
						{
							class VehicleSystemsDisplayManagerComponentLeft
							{
								class EmptyDisplay
								{
									componentType = "EmptyDisplayComponent";
								};
								class CrewDisplay
								{
									componentType = "CrewDisplayComponent";
									resource = "RscCustomInfoCrew";
								};
								class MinimapDisplay
								{
									componentType = "MinimapDisplayComponent";
									resource = "RscCustomInfoMiniMap";
								};
								class VehiclePrimaryGunnerDisplay
								{
									componentType = "TransportFeedDisplayComponent";
									source = "PrimaryGunner";
								};
							};
							class VehicleSystemsDisplayManagerComponentRight
							{
								class EmptyDisplay
								{
									componentType = "EmptyDisplayComponent";
								};
								class CrewDisplay
								{
									componentType = "CrewDisplayComponent";
									resource = "RscCustomInfoCrew";
								};
								class MinimapDisplay
								{
									componentType = "MinimapDisplayComponent";
									resource = "RscCustomInfoMiniMap";
								};
								class VehiclePrimaryGunnerDisplay
								{
									componentType = "TransportFeedDisplayComponent";
									source = "PrimaryGunner";
								};
							};
						};
					};
				};
				weapons[] = {"OEC_Weapons_2a72","OEC_Weapons_DSHKM_BMP3","rhs_weap_902a"};
				//weapons[] = {"rhs_weap_2a70","OEC_Weapons_2a72","rhs_weap_pkt_bmd_coax","rhs_weap_902a","rhs_weap_fcs"};
				magazines[] = {"OEC_Magazine_2a72_20Rnd", "OEC_Magazine_2a72_20Rnd","OEC_Magazine_2a72_20Rnd", "OEC_Magazine_2a72_20Rnd","OEC_Magazine_2a72_20Rnd", "OEC_Magazine_2a72_20Rnd","OEC_Magazine_2a72_20Rnd", "OEC_Magazine_2a72_20Rnd","OEC_Magazine_2a72_20Rnd", "OEC_Magazine_2a72_20Rnd","OEC_Magazine_762x51_100Rnd", "OEC_Magazine_127x100_50Rnd", "OEC_Magazine_127x100_50Rnd", "OEC_Magazine_127x100_50Rnd", "OEC_Magazine_127x100_50Rnd","OEC_Magazine_127x100_50Rnd", "OEC_Magazine_127x100_50Rnd", "OEC_Magazine_127x100_50Rnd", "OEC_Magazine_127x100_50Rnd", "rhs_mag_3d17_6"};
				turretInfoType = "RHS_RscWeaponESSA_FCS";
				discreteDistance[] = {};
				discreteDistanceInitIndex = 0;
				class OpticsIn: OpticsIn
				{
					class Wide: Wide
					{
						opticsDisplayName = "DAY3";
						initAngleX = 0;
						minAngleX = -30;
						maxAngleX = 30;
						initAngleY = 0;
						minAngleY = -100;
						maxAngleY = 100;
						initFov = 0.233333;
						minFov = 0.233333;
						maxFov = 0.233333;
						visionMode[] = {"Normal","Ti"};
						thermalMode[] = {0,1};
						gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_thermalscreen_empty.p3d";
					};
					class Medium: Wide
					{
						opticsDisplayName = "DAY12";
						initFov = 0.0583333;
						minFov = 0.0583333;
						maxFov = 0.0583333;
					};
					class Narrow: Medium
					{
						opticsDisplayName = "DAY24";
						initFov = 0.0291667;
						minFov = 0.0291667;
						maxFov = 0.0291667;
					};
					class Narrow2: Narrow
					{
						opticsDisplayName = "AUTOTRACK";
						directionStabilized = 1;
					};
				};
				class Components
				{
					class VehicleSystemsDisplayManagerComponentLeft
					{
						class EmptyDisplay
						{
							componentType = "EmptyDisplayComponent";
						};
						class CrewDisplay
						{
							componentType = "CrewDisplayComponent";
							resource = "RscCustomInfoCrew";
						};
					};
					class VehicleSystemsDisplayManagerComponentRight
					{
						class EmptyDisplay
						{
							componentType = "EmptyDisplayComponent";
						};
						class CrewDisplay
						{
							componentType = "CrewDisplayComponent";
							resource = "RscCustomInfoCrew";
						};
					};
				};
			};
			class GPMGTurret1: GPMGTurret1
			{
				weapons[] = {"OEC_Weapons_vicPKM_BMP3_bow1"};
				magazines[] = {"OEC_Magazine_762x51_100Rnd", "OEC_Magazine_762x51_100Rnd", "OEC_Magazine_762x51_100Rnd", "OEC_Magazine_762x51_100Rnd", "OEC_Magazine_762x51_100Rnd", "OEC_Magazine_762x51_100Rnd"};
				gunnerType = "OEC_Units_CIS_rifleman";
			};
			class GPMGTurret2: GPMGTurret2
			{
				weapons[] = {"OEC_Weapons_vicPKM_BMP3_bow2"};
				magazines[] = {"OEC_Magazine_762x51_100Rnd", "OEC_Magazine_762x51_100Rnd", "OEC_Magazine_762x51_100Rnd", "OEC_Magazine_762x51_100Rnd", "OEC_Magazine_762x51_100Rnd", "OEC_Magazine_762x51_100Rnd"};
				gunnerType = "OEC_Units_CIS_rifleman";
			};
		};
		class AnimationSources
		{
			/*class muzzle_rot_coax
			{
				source = "ammorandom";
				weapon = "OEC_Weapons_vicPKM";
			};*/
			class recoil_source
			{
				source = "reload";
				weapon = "OEC_Weapons_2a72";
			};
			class muzzle_hide_cannon: recoil_source{};
			class muzzle_rot_cannon: recoil_source
			{
				source = "ammorandom";
			};
			class recoil_source2
			{
				source = "reload";
				weapon = "OEC_Weapons_DSHKM_BMP3";
			};
			class muzzle_hide_hmg: recoil_source2{};
			class muzzle_rot_hmg: recoil_source2
			{
				source = "ammorandom";
			};
			class smokecap_revolving_source
			{
				source = "revolving";
				weapon = "rhs_weap_902a";
			};
			class muzzle_rot_coax2: muzzle_rot_hmg
			{
				weapon = "OEC_Weapons_vicPKM_BMP3_bow1";
			};
			class muzzle_rot_coax3: muzzle_rot_hmg
			{
				weapon = "OEC_Weapons_vicPKM_BMP3_bow2";
			};
			class hatchC
			{
				source = "door";
				animPeriod = 2.1;
			};
			class HatchG: hatchC{};
			class HatchD: hatchC{};
			class HatchLA: hatchC{};
			class HatchRA: hatchC{};
			class elev
			{
				source = "user";
				animperiod = 0.0003;
			};
			class elev_bank
			{
				source = "user";
				animperiod = 0.0003;
			};
			class lead
			{
				source = "user";
				animperiod = 0.0016;
			};
			class offset
			{
				source = "user";
				animperiod = 0.0002;
			};
		};
		class EventHandlers: EventHandlers
		{
			class RHS_EventHandlers
			{
				init = "_this call rhs_fnc_bmp3_init; _this call oec_fnc_cisBMP3Assign";
				postInit = "_this call rhs_fnc_reapplyTextures";
				fired = "_this call RHS_fnc_bmp3_autoloader;";
				hitpart = "_this call rhs_fnc_hitSpall";
				engine = "[_this select 0,_this select 1,2] call rhs_fnc_engineStartupDelay;_this call rhs_fnc_engineCheckDamage;";
				getOut = "_this call rhs_fnc_hatchAbandon";
			};
		};
		class TransportItems {};
		class TransportBackpacks {};
		class TransportWeapons {};
		class TransportMagazines {};
	};

	//T-80UE-1
	class rhs_tank_base: Tank_F
	{
		class textureSources;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						class ViewOptics: ViewOptics{};
						class OpticsIn
						{
							class Wide: ViewOptics{};
						};
					};
					/*class CommanderMG: CommanderOptics
					{
						class OpticsIn: OpticsIn
						{
							class Wide: Wide {};
						};
					};*/
				};
			};
		};
		class AnimationSources
		{
			class kshield_unhide;
			class kdeck_unhide: kshield_unhide{};
			class sideskirt_unhide: kshield_unhide{};
			class fbskirt_unhide: kshield_unhide{};
			class ftskirt_unhide: kshield_unhide{};
			class log_unhide: kshield_unhide{};
			class snorkel_unhide: kshield_unhide{};
			class snorkel_unhide2;
			class snorkel_hide: snorkel_unhide2{};
			class TCOverrideTurret;
			class recoil_source;
			class reload_source;
			class reload_magazine_source: reload_source{};
			class muzzle_rot_cannon: reload_source{};
			class muzzle_rot_hmg: muzzle_rot_cannon{};
			class muzzle_rot_coax: muzzle_rot_cannon{};
			class ReloadAnim;
			class ReloadMagazine: ReloadAnim{};
			class Revolving: ReloadAnim{};
			class autoloader;
			class elev;
			class elev_bank;
			class lead;
			class offset;
			class HatchC;
			class HatchG: HatchC{};
			class HatchD: HatchC{};
			class turretHide: autoloader{};
			class nsvtHide: kshield_unhide{};
		};
		class HitPoints: HitPoints
		{
			class HitHull: HitHull{};
			class HitEngine: HitEngine{};
			class HitLTrack: HitLTrack{};
			class HitRTrack: HitRTrack{};
		};
		class Attributes
		{
			class ObjectTexture;
			class rhs_decalNumber_type;
			class rhs_decalNumber;
			class rhs_decalPlatoon_type;
			class rhs_decalPlatoon;
			class rhs_decalArmy_type: rhs_decalPlatoon_type{};
			class rhs_decalArmy: rhs_decalPlatoon{};
			class rhs_decalHonor_type: rhs_decalPlatoon_type{};
			class rhs_decalHonor: rhs_decalPlatoon{};
			class rhs_ammoslot_1_type;
			class rhs_ammoslot_1;
			class rhs_ammoslot_2_type: rhs_ammoslot_1_type{};
			class rhs_ammoslot_2: rhs_ammoslot_1{};
			class rhs_ammoslot_3_type: rhs_ammoslot_1_type{};
			class rhs_ammoslot_3: rhs_ammoslot_1{};
			class rhs_ammoslot_4_type: rhs_ammoslot_1_type{};
			class rhs_ammoslot_4: rhs_ammoslot_1{};
			class sideskirt_unhide;
			class fbskirt_unhide: sideskirt_unhide{};
			class ftskirt_unhide: sideskirt_unhide{};
			class log_unhide: sideskirt_unhide{};
			//class kshield_unhide: sideskirt_unhide{};
			class rhs_disableHabar: sideskirt_unhide{};
			class rhs_snorkel: rhs_disableHabar{};
			class rhs_searchlight: rhs_disableHabar{};
		};
		class ViewOptics: ViewOptics{};
		class Components: Components{};
		class EventHandlers: Eventhandlers{};
	};

	class rhs_t80b: rhs_tank_base
	{
		//class textureSources: textureSources {};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				/*class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						class ViewOptics: ViewOptics{};
					};
				};*/
			};
		};
		class AnimationSources: AnimationSources 
		{
			class kshield_unhide: kshield_unhide{};
			class kdeck_unhide: kdeck_unhide{};
			/*class sideskirt_unhide: kshield_unhide{};
			class fbskirt_unhide: kshield_unhide{};
			class ftskirt_unhide: kshield_unhide{};
			class log_unhide: kshield_unhide{};
			class snorkel_unhide: kshield_unhide{};
			class snorkel_unhide2;
			class snorkel_hide: snorkel_unhide2{};
			class TCOverrideTurret;
			class recoil_source;
			class reload_source;
			class reload_magazine_source: reload_source{};
			class muzzle_rot_cannon: reload_source{};
			class muzzle_rot_hmg: muzzle_rot_cannon{};
			class muzzle_rot_coax: muzzle_rot_cannon{};
			class ReloadAnim;
			class ReloadMagazine: ReloadAnim{};
			class Revolving: ReloadAnim{};
			class autoloader;
			class elev;
			class elev_bank;
			class lead;
			class offset;
			class HatchC;
			class HatchG: HatchC{};
			class HatchD: HatchC{};
			class turretHide: autoloader[];
			class nsvtHide: kshield_unhide{};*/
		};
		/*class HitPoints: HitPoints
		{
			class HitHull: HitHull{};
			class HitEngine: HitEngine{};
			class HitLTrack: HitLTrack{};
			class HitRTrack: HitRTrack{};
		};*/
		class Attributes: Attributes
		{
			class ObjectTexture: ObjectTexture{};
			class rhs_decalNumber_type: rhs_decalNumber_type{};
			class rhs_decalNumber: rhs_decalNumber{};
			class rhs_decalArmy_type: rhs_decalArmy_type{};
			class rhs_decalArmy: rhs_decalArmy{};
			class rhs_decalHonor_type: rhs_decalHonor_type{};
			class rhs_decalHonor: rhs_decalHonor{};
			class rhs_ammoslot_1_type: rhs_ammoslot_1_type{};
			class rhs_ammoslot_1: rhs_ammoslot_1{};
			class rhs_ammoslot_2_type: rhs_ammoslot_2_type{};
			class rhs_ammoslot_2: rhs_ammoslot_2{};
			class rhs_ammoslot_3_type: rhs_ammoslot_3_type{};
			class rhs_ammoslot_3: rhs_ammoslot_3{};
			class rhs_ammoslot_4_type: rhs_ammoslot_4_type{};
			class rhs_ammoslot_4: rhs_ammoslot_4{};
			class sideskirt_unhide: sideskirt_unhide{};
			class fbskirt_unhide: fbskirt_unhide{};
			class ftskirt_unhide: ftskirt_unhide{};
			class log_unhide: log_unhide{};
			class kshield_unhide: sideskirt_unhide{};
			class rhs_disableHabar: rhs_disableHabar{};
			class rhs_snorkel: rhs_snorkel{};
			class rhs_searchlight: rhs_searchlight{};
		};
		/*class ViewOptics: ViewOptics{};
		class components: Components{};
		class EventHandlers: Eventhandlers{};*/
	};

	class rhs_t80bv: rhs_t80b
	{
		class textureSources: textureSources {};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						class ViewOptics: ViewOptics{};
					};
					class CommanderMG: CommanderOptics{};
				};
			};
		};
		class AnimationSources: AnimationSources 
		{
			/*class kshield_unhide: kshield_unhide{};
			class kdeck_unhide: kdeck_unhide{};
			class sideskirt_unhide: kshield_unhide{};
			class fbskirt_unhide: kshield_unhide{};
			class ftskirt_unhide: kshield_unhide{};
			class log_unhide: kshield_unhide{};
			class snorkel_unhide: kshield_unhide{};
			class nsvtHide: kshield_unhide{};*/
		};
		class HitPoints: HitPoints
		{
			/*class HitHull: HitHull{};
			class HitEngine: HitEngine{};
			class HitLTrack: HitLTrack{};
			class HitRTrack: HitRTrack{};*/
		};
		class Attributes: Attributes
		{
			class ObjectTexture: ObjectTexture{};
			class rhs_decalNumber_type: rhs_decalNumber_type{};
			class rhs_decalNumber: rhs_decalNumber{};
			class rhs_decalArmy_type: rhs_decalArmy_type{};
			class rhs_decalArmy: rhs_decalArmy{};
			class rhs_decalHonor_type: rhs_decalHonor_type{};
			class rhs_decalHonor: rhs_decalHonor{};
			class rhs_ammoslot_1_type: rhs_ammoslot_1_type{};
			class rhs_ammoslot_1: rhs_ammoslot_1{};
			class rhs_ammoslot_2_type: rhs_ammoslot_2_type{};
			class rhs_ammoslot_2: rhs_ammoslot_2{};
			class rhs_ammoslot_3_type: rhs_ammoslot_3_type{};
			class rhs_ammoslot_3: rhs_ammoslot_3{};
			class rhs_ammoslot_4_type: rhs_ammoslot_4_type{};
			class rhs_ammoslot_4: rhs_ammoslot_4{};
			class sideskirt_unhide: sideskirt_unhide{};
			class fbskirt_unhide: fbskirt_unhide{};
			class ftskirt_unhide: ftskirt_unhide{};
			class log_unhide: log_unhide{};
			class kshield_unhide: sideskirt_unhide{};
			class rhs_disableHabar: rhs_disableHabar{};
			class rhs_snorkel: rhs_snorkel{};
			class rhs_searchlight: rhs_searchlight{};
		};
		class EventHandlers: Eventhandlers{};
	};

	class rhs_t80a: rhs_t80bv
	{
		class textureSources: textureSources {};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics{};
				};
			};
		};
		class AnimationSources: AnimationSources 
		{
			class kshield_unhide: kshield_unhide{};
			class kdeck_unhide: kdeck_unhide{};
			/*class sideskirt_unhide: kshield_unhide{};
			class fbskirt_unhide: kshield_unhide{};
			class ftskirt_unhide: kshield_unhide{};
			class log_unhide: kshield_unhide{};
			class snorkel_unhide: kshield_unhide{};
			class nsvtHide: kshield_unhide{};*/
		};
		class HitPoints: HitPoints
		{
			class HitHull: HitHull{};
			class HitEngine: HitEngine{};
			class HitLTrack: HitLTrack{};
			class HitRTrack: HitRTrack{};
		};
		class Attributes: Attributes
		{
			class ObjectTexture: ObjectTexture{};
			class rhs_decalNumber_type: rhs_decalNumber_type{};
			class rhs_decalNumber: rhs_decalNumber{};
			class rhs_decalArmy_type: rhs_decalArmy_type{};
			class rhs_decalArmy: rhs_decalArmy{};
			class rhs_decalHonor_type: rhs_decalHonor_type{};
			class rhs_decalHonor: rhs_decalHonor{};
			class rhs_ammoslot_1_type: rhs_ammoslot_1_type{};
			class rhs_ammoslot_1: rhs_ammoslot_1{};
			class rhs_ammoslot_2_type: rhs_ammoslot_2_type{};
			class rhs_ammoslot_2: rhs_ammoslot_2{};
			class rhs_ammoslot_3_type: rhs_ammoslot_3_type{};
			class rhs_ammoslot_3: rhs_ammoslot_3{};
			class rhs_ammoslot_4_type: rhs_ammoslot_4_type{};
			class rhs_ammoslot_4: rhs_ammoslot_4{};
			class sideskirt_unhide: sideskirt_unhide{};
			class fbskirt_unhide: fbskirt_unhide{};
			class ftskirt_unhide: ftskirt_unhide{};
			class log_unhide: log_unhide{};
			class rhs_disableHabar: rhs_disableHabar{};
			class rhs_snorkel: rhs_snorkel{};
			class rhs_searchlight: rhs_searchlight{};
		};
		class EventHandlers: Eventhandlers{};
	};

	class rhs_t80ue1: rhs_t80a
	{
		class textureSources: textureSources {};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics{};
				};
			};
		};
		class AnimationSources: AnimationSources 
		{
			/*class kdeck_unhide: kshield_unhide{};
			class sideskirt_unhide: kshield_unhide{};
			class fbskirt_unhide: kshield_unhide{};
			class ftskirt_unhide: kshield_unhide{};
			class log_unhide: kshield_unhide{};
			class snorkel_unhide: kshield_unhide{};
			class nsvtHide: kshield_unhide{};*/
		};
		class HitPoints: HitPoints
		{
			class HitHull: HitHull{};
			class HitEngine: HitEngine{};
			class HitLTrack: HitLTrack{};
			class HitRTrack: HitRTrack{};
		};
		class Attributes: Attributes
		{
			class ObjectTexture: ObjectTexture{};
			class rhs_decalNumber_type: rhs_decalNumber_type{};
			class rhs_decalNumber: rhs_decalNumber{};
			class rhs_ammoslot_1_type: rhs_ammoslot_1_type{};
			class rhs_ammoslot_1: rhs_ammoslot_1{};
			class rhs_ammoslot_2_type: rhs_ammoslot_2_type{};
			class rhs_ammoslot_2: rhs_ammoslot_2{};
			class rhs_ammoslot_3_type: rhs_ammoslot_3_type{};
			class rhs_ammoslot_3: rhs_ammoslot_3{};
			class rhs_ammoslot_4_type: rhs_ammoslot_4_type{};
			class rhs_ammoslot_4: rhs_ammoslot_4{};
		};
		class EventHandlers: Eventhandlers{};
	};
	class OEC_Vehicles_T80_UE1: rhs_t80ue1
	{
		rhs_hasSnorkel = 0;
		enableGPS = 1;
		receiveRemoteTargets = 1;
		reportRemoteTargets = 1;
		reportOwnPosition = 1;
		simulation = "tankX";
		normalSpeedForwardCoef = 0.5;
		slowSpeedForwardCoef = 0.25;
		fuelCapacity = 19.5;
		RHS_fuelCapacity = 1540;
		brakeIdleSpeed = 1.78;
		maxSpeed = 70;
		engineMOI = 20.0;
		enginePower = 932;
		peakTorque = 4393;
		minOmega = 114.72;
		maxOmega = 350.86;
		idleRPM = 1200;
		redRPM = 3255;
		torqueCurve[] = {{0.30722,0},{0.447619,0.948555},{0.526574,0.897109},{0.60553,0.845664},{0.684485,0.794218},{0.763441,0.742773},{0.842396,0.691327},{1.90292,0}};
		thrustDelay = 0.3;
		dampingRateFullThrottle = 0.3;
		dampingRateZeroThrottleClutchEngaged = 3.0;
		dampingRateZeroThrottleClutchDisengaged = 0.25;
		antiRollbarForceCoef = 24;
		antiRollbarForceLimit = 42;
		antiRollbarSpeedMin = 30;
		antiRollbarSpeedMax = 75;
		engineBrakeCoef = 0;
		tracksSpeed = 1.4;
		tankTurnForce = 650000.0;
		tankTurnForceAngMinSpd = 0.7;
		tankTurnForceAngSpd = 0.72;
		accelAidForceCoef = 3.3;
		accelAidForceYOffset = -4.0;
		accelAidForceSpd = 2.83;
		maxFordingDepth = 0;
		waterResistance = 0;
		waterDamageEngine = 0.2;
		waterLeakiness = 10;
		engineLosses = 25;
		transmissionLosses = 15;
		clutchStrength = 30.0;
		latency = 1.3;
		switchTime = 0;
		changeGearType = "rpmratio";
		changeGearOmegaRatios[] = {1,0.333333,0.333333,0,0.96,0.333333,0.983333,0.7,0.983333,0.733333,0.983333,0.733333};
		class complexGearbox
		{
			GearboxRatios[] = {"R1",-10.36,"N",0,"D1",4.38,"D2",2.16,"D3",1.46,"D4",1};
			TransmissionRatios[] = {"High",11.55};
			gearBoxMode = "auto";
			moveOffGear = 1;
			driveString = "D";
			neutralString = "N";
			reverseString = "R";
			transmissionDelay = 0.9;
		};
		class Wheels
		{
			class L2
			{
				suspTravelDirection[] = {-0.125,-1,0};
				boneName = "RHS_T80B_SUSL_1";
				center = "wheel_1_2_axis";
				boundary = "wheel_1_2_bound";
				side = "left";
				steering = 0;
				width = 0.396;
				mass = 188;
				MOI = 14.0783;
				maxBrakeTorque = 10000;
				sprungMass = 3833.33;
				springStrength = 254000;
				springDamperRate = 11000;
				maxDroop = 0.14;
				maxCompression = 0.14;
				dampingRate = 1364.0;
				dampingRateInAir = 1364.0;
				dampingRateDamaged = 10.0;
				dampingRateDestroyed = 10000.0;
				latStiffX = 3;
				latStiffY = 40;
				longitudinalStiffnessPerUnitGravity = 72000;
				frictionVsSlipGraph[] = {{0.0,0.4},{0.18,1.0},{0.7,0.75}};
			};
			class L3: L2
			{
				boneName = "RHS_T80B_SUSL_3";
				center = "wheel_1_3_axis";
				boundary = "wheel_1_3_bound";
			};
			class L4: L2
			{
				boneName = "RHS_T80B_SUSL_5";
				center = "wheel_1_4_axis";
				boundary = "wheel_1_4_bound";
			};
			class L5: L2
			{
				boneName = "RHS_T80B_SUSL_7";
				center = "wheel_1_5_axis";
				boundary = "wheel_1_5_bound";
			};
			class L6: L2
			{
				boneName = "RHS_T80B_SUSL_9";
				center = "wheel_1_6_axis";
				boundary = "wheel_1_6_bound";
			};
			class L7: L2
			{
				boneName = "RHS_T80B_SUSL_11";
				center = "wheel_1_7_axis";
				boundary = "wheel_1_7_bound";
			};
			class L9: L2
			{
				boneName = "";
				center = "wheel_1_9_axis";
				boundary = "wheel_1_9_bound";
				maxDroop = 0;
				maxCompression = 0;
			};
			class L1: L2
			{
				boneName = "";
				center = "wheel_1_1_axis";
				boundary = "wheel_1_1_bound";
				maxDroop = 0;
				maxCompression = 0;
			};
			class R2: L2
			{
				suspTravelDirection[] = {0.125,-1,0};
				boneName = "RHS_T80B_SUSR_1";
				center = "wheel_2_2_axis";
				boundary = "wheel_2_2_bound";
				side = "right";
			};
			class R3: R2
			{
				boneName = "RHS_T80B_SUSR_3";
				center = "wheel_2_3_axis";
				boundary = "wheel_2_3_bound";
			};
			class R4: R2
			{
				boneName = "RHS_T80B_SUSR_5";
				center = "wheel_2_4_axis";
				boundary = "wheel_2_4_bound";
			};
			class R5: R2
			{
				boneName = "RHS_T80B_SUSR_7";
				center = "wheel_2_5_axis";
				boundary = "wheel_2_5_bound";
			};
			class R6: R2
			{
				boneName = "RHS_T80B_SUSR_9";
				center = "wheel_2_6_axis";
				boundary = "wheel_2_6_bound";
			};
			class R7: R2
			{
				boneName = "RHS_T80B_SUSR_11";
				center = "wheel_2_7_axis";
				boundary = "wheel_2_7_bound";
			};
			class R9: R2
			{
				boneName = "wheel_podkolop9";
				center = "wheel_2_9_axis";
				boundary = "wheel_2_9_bound";
				maxDroop = 0;
				maxCompression = 0;
			};
			class R1: R2
			{
				boneName = "";
				center = "wheel_2_1_axis";
				boundary = "wheel_2_1_bound";
				maxDroop = 0;
				maxCompression = 0;
			};
		};
		editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_t80ue1.paa";
		displayName = "T-80UE Tank";
		scope = 2;
		scopeCurator = 2;
		side = 0;
		author = "OEC Extension";
		faction = "OEC_Faction_CIS";
		factionClass = "OEC_Faction_Class_CIS";
        editorCategory = "OEC_EdCat_CIS";
        editorSubCategory = "OEC_EdSubCat_AFV";
		vehicleClass = "OEC_Vehclass_Tank";
		crew = "OEC_Units_CIS_Crew";
		model = "\rhsafrf\addons\rhs_t80u\rhs_t80ue1.p3d";
		picture = "\rhsafrf\addons\rhs_t80\data\icon\rhs_t80ue_pic_ca.paa";
		threat[] = {1.0,1.0,0.5};
		hiddenSelections[] = {"camo1","camo2","camo3","","n1","n2","n3","i1","i2","i3"};
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_t80u\data\rhs_t80u_01_co.paa","rhsafrf\addons\rhs_t80u\data\rhs_t80u_02b_co.paa","rhsafrf\addons\rhs_t80u\data\rhs_t80u_03_co.paa"};
		class textureSources: textureSources
		{
			class standard
			{
				displayName = "Standard";
				author = "$STR_RHS_AUTHOR_FULL";
				factions[] = {};
				textures[] = {"rhsafrf\addons\rhs_t80u\data\rhs_t80u_01_co.paa","rhsafrf\addons\rhs_t80u\data\rhs_t80u_02b_co.paa","rhsafrf\addons\rhs_t80u\data\rhs_t80u_03_co.paa"};
			};
			class tricolor: standard
			{
				displayName = "3-Color Camo";
				author = "$STR_RHS_AUTHOR_FULL";
				textures[] = {"rhsafrf\addons\rhs_t80u_camo\data\rhs_t80u_tricolor_01_co.paa","rhsafrf\addons\rhs_t80u_camo\data\rhs_t80u_tricolor_02b_co.paa","rhsafrf\addons\rhs_t80u_camo\data\rhs_t80u_tricolor_03_co.paa"};
			};
			class r1: standard
			{
				displayName = "#1";
				author = "$STR_RHS_AUTHOR_FULL";
				textures[] = {"#(argb,8,8,3)color(0.92,0.87,0.92,1)","#(argb,8,8,3)color(0.92,0.87,0.92,1)","#(argb,8,8,3)color(0.92,0.87,0.92,1)"};
			};
			class r2: standard
			{
				displayName = "#2";
				author = "$STR_RHS_AUTHOR_FULL";
				textures[] = {"#(argb,8,8,3)color(0.07,0.98,0,1)","#(argb,8,8,3)color(0.07,0.98,0,1)","#(argb,8,8,3)color(0.07,0.98,0,1)"};
			};
			class r3: standard
			{
				displayName = "#3";
				author = "$STR_RHS_AUTHOR_FULL";
				textures[] = {"#(argb,8,8,3)color(0,0.11,0.67,1)","#(argb,8,8,3)color(0,0.11,0.67,1)","#(argb,8,8,3)color(0,0.11,0.67,1)"};
			};
			class r4: standard
			{
				displayName = "#4";
				author = "$STR_RHS_AUTHOR_FULL";
				textures[] = {"#(argb,8,8,3)color(0.99,0.27,0.25,1)","#(argb,8,8,3)color(0.99,0.27,0.25,1)","#(argb,8,8,3)color(0.99,0.27,0.25,1)"};
			};
			class r5: standard
			{
				displayName = "#5";
				author = "$STR_RHS_AUTHOR_FULL";
				textures[] = {"#(argb,8,8,3)color(00.41,0.4,0,1)","#(argb,8,8,3)color(00.41,0.4,0,1)","#(argb,8,8,3)color(00.41,0.4,0,1)"};
			};
		};
		textureList[] = {};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						gun = "RHS_T80B_com_Gun";
						weapons[] = {"OEC_Weapons_DSHKM_t80"};
						magazines[] = {"OEC_Magazine_127x100_50Rnd","OEC_Magazine_127x100_50Rnd","OEC_Magazine_127x100_50Rnd"};
						animationSourceGun = "obsGun";
						gunnerAction = "rhs_t80u_commander_out";
						gunnerInAction = "rhs_t80u_commander_in";
					};
					class CommanderMG: CommanderMG
					{
						gunnername = "Commander HMG";
						proxyindex = 2;
						dontCreateAi = 1;
						cantCreateAI = 1;
						body = "mg_turret";
						gun = "mg_gun";
						animationSourceBody = "mg_turret";
						animationSourceGun = "mg_gun";
						gunnerDoor = "";
						stabilizedInAxes = 0;
						canHideGunner = 0;
						viewGunnerShadow = 0;
						LodTurnedOut = 1200;
						canUseScanners = 0;
						allowTabLock = 0;
						memoryPointGunnerOutOptics = "commander_out_view";
						gunnerOutOpticsModel = "\A3\weapons_f\reticle\optics_empty";
						soundAttenuationTurret = "HeliAttenuationGunner";
						disableSoundAttenuation = 1;
						animationSourceStickX = "mg_Turret_Inertia";
						animationSourceStickY = "mg_Gun_Inertia";
						gunnerLeftHandAnimName = "";
						gunnerRightHandAnimName = "mg_handle2";
						maxVerticalRotSpeed = 0.35;
						minElev = -5;
						maxElev = 45;
						initElev = 0;
						initTurn = 0;
						LODOpticsOut = 1200;
						LODOpticsIn = 1200;
						turretInfoType = "RHS_RscWeaponZeroing";
						discreteDistance[] = {100,200,300,400,500,600,800,900,1000,1100,1200,1400,1500,1800,1900,2000};
						discreteDistanceInitIndex = 2;
						weapons[] = {"OEC_Weapons_DSHKM_t80"};
						magazines[] = {"OEC_Magazine_127x100_50Rnd","OEC_Magazine_127x100_50Rnd","OEC_Magazine_127x100_50Rnd"};
						selectionFireAnim = "zasleh3";
						class OpticsIn: OpticsIn
						{
							class Wide: Wide
							{
								visionMode[] = {"Normal"};
								initFov = 0.583333;
								minFov = 0.583333;
								maxFov = 0.583333;
							};
						};
						gunnercompartments = "Compartment5";
						class HitPoints
						{
							class HitTurretNSVT
							{
								isTurret = 1;
								armor = 0.3;
								material = -1;
								name = "nsvt_turret";
								visual = "-";
								passThrough = 0;
								minimalHit = 0.03;
								explosionShielding = 0.6;
								radius = 0.25;
							};
							class HitGunNSVT
							{
								isGun = 1;
								armor = 0.3;
								material = -1;
								name = "nsvt_gun";
								visual = "-";
								passThrough = 0;
								minimalHit = 0.03;
								explosionShielding = 0.6;
								radius = 0.25;
							};
						};
					};
				};
				weapons[] = {"OEC_Weapons_2A46_Cannon","OEC_Weapons_vicPKM","rhs_weap_902a"};
				magazines[] = {"OEC_Magazine_125mm_HE","OEC_Magazine_125mm_HE","OEC_Magazine_125mm_HE","OEC_Magazine_762x51_100Rnd", "OEC_Magazine_762x51_100Rnd", "OEC_Magazine_762x51_100Rnd", "OEC_Magazine_762x51_100Rnd", "rhs_mag_3d17_6"};
				turretInfoType = "RHS_RscWeaponPlissa_FCS";
				class OpticsIn
				{
					class Periscope
					{
						camPos = "view_periscope";
						hitpoint = "Hit_Optic_Periscope";
						opticsDisplayName = "PERISCOPE";
						initAngleX = 0;
						minAngleX = -30;
						maxAngleX = 30;
						initAngleY = 0;
						minAngleY = -100;
						maxAngleY = 100;
						minFov = 0.466667;
						maxFov = 0.466667;
						initFov = 0.466667;
						visionMode[] = {"Normal"};
						gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_tvn5.p3d";
						gunnerOpticsEffect[] = {"TankGunnerOptics1","OpticsBlur2","OpticsCHAbera2"};
					};
					class day1: Periscope
					{
						camPos = "view_1g46";
						hitpoint = "Hit_Optic_1G46";
						opticsDisplayName = "DAY";
						initFov = 0.179487;
						gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_1g46.p3d";
					};
					class day2: day1
					{
						opticsDisplayName = "DAYZOOM";
						initFov = 0.0583333;
						minFov = 0.0583333;
						maxFov = 0.0583333;
						visionMode[] = {"Normal"};
					};
					class thermal1: day1
					{
						camPos = "view_ESSA";
						hitpoint = "Hit_Optic_ESSA";
						opticsDisplayName = "TI1";
						initFov = 0.466667;
						minFov = 0.466667;
						maxFov = 0.466667;
						visionMode[] = {"Ti"};
						thermalMode[] = {0,1};
						gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_sosnau.p3d";
					};
					class thermal2: thermal1
					{
						opticsDisplayName = "TI2";
						initFov = 0.155556;
						minFov = 0.155556;
						maxFov = 0.155556;
					};
					class thermal3: thermal2
					{
						opticsDisplayName = "TI3";
						initFov = 0.0388889;
						minFov = 0.0388889;
						maxFov = 0.0388889;
					};
					class thermal4: thermal3
					{
						opticsDisplayName = "AUTOTRACK";
						directionStabilized = 1;
					};
				};
				class Reflectors
				{
					class Searchlight_FG125
					{
						color[] = {1900,1300,950};
						ambient[] = {5,5,5};
						position = "Light_FG125";
						direction = "Light_FG125_end";
						hitpoint = "Light_FG125";
						selection = "Light_FG125";
						size = 1;
						innerAngle = 8;
						outerAngle = 15;
						coneFadeCoef = 1;
						intensity = 45;
						useFlare = 1;
						dayLight = 1;
						flareSize = 0.85;
						class Attenuation
						{
							start = 1;
							constant = 0;
							linear = 0;
							quadratic = 0.02;
							hardLimitStart = 630;
							hardLimitEnd = 660;
						};
					};
					class Searchlight_FG125_Flare
					{
						color[] = {7,6,6.5};
						ambient[] = {22,22,22};
						position = "Light_FG125";
						direction = "Light_FG125_end";
						hitpoint = "Light_FG125";
						selection = "Light_FG125";
						size = 1;
						innerAngle = 30;
						outerAngle = 175;
						coneFadeCoef = 10;
						intensity = 100;
						useFlare = 1;
						dayLight = 0;
						flareSize = 1.85;
						class Attenuation
						{
							start = 0;
							constant = 0;
							linear = 0;
							quadratic = 10;
							hardLimitStart = 0.0;
							hardLimitEnd = 0.9;
						};
					};
				};
				class HitPoints
				{
					class HitTurret
					{
						armor = -150;
						material = -1;
						name = "vez";
						armorComponent = "Hit_Turret";
						visual = "vez";
						passThrough = 0;
						minimalHit = -0.2;
						explosionShielding = 0.0009;
						radius = 0.1;
					};
					class HitGun
					{
						armor = -150;
						material = -1;
						name = "zbran";
						armorComponent = "Hit_Gun";
						visual = "-";
						passThrough = 0;
						minimalHit = -0.2;
						explosionShielding = 0.0001;
						radius = 0.1;
					};
				};
			};
		};
		class AnimationSources: AnimationSources
		{
			class kshield_unhide
			{
				source = "user";
				animPeriod = 1e-010;
			};
			class kdeck_unhide: kshield_unhide{};
			class sideskirt_unhide: kshield_unhide{};
			class fbskirt_unhide: kshield_unhide{};
			class ftskirt_unhide: kshield_unhide{};
			class log_unhide: kshield_unhide{};
			class snorkel_unhide: kshield_unhide{};
			class nsvtHide: kshield_unhide{};
			class era_1_source
			{
				source = "Hit";
				hitpoint = "era_1_hitpoint";
			};
			class era_2_source
			{
				source = "Hit";
				hitpoint = "era_2_hitpoint";
			};
			class era_3_source
			{
				source = "Hit";
				hitpoint = "era_3_hitpoint";
			};
			class era_4_source
			{
				source = "Hit";
				hitpoint = "era_4_hitpoint";
			};
			class era_5_source
			{
				source = "Hit";
				hitpoint = "era_5_hitpoint";
			};
			class era_6_source
			{
				source = "Hit";
				hitpoint = "era_6_hitpoint";
			};
			class era_7_source
			{
				source = "Hit";
				hitpoint = "era_7_hitpoint";
			};
			class era_8_source
			{
				source = "Hit";
				hitpoint = "era_8_hitpoint";
			};
			class era_9_source
			{
				source = "Hit";
				hitpoint = "era_9_hitpoint";
			};
			class era_10_source
			{
				source = "Hit";
				hitpoint = "era_10_hitpoint";
			};
			class era_11_source
			{
				source = "Hit";
				hitpoint = "era_11_hitpoint";
			};
			class era_12_source
			{
				source = "Hit";
				hitpoint = "era_12_hitpoint";
			};
			class era_13_source
			{
				source = "Hit";
				hitpoint = "era_13_hitpoint";
			};
			class era_14_source
			{
				source = "Hit";
				hitpoint = "era_14_hitpoint";
			};
			class era_15_source
			{
				source = "Hit";
				hitpoint = "era_15_hitpoint";
			};
			class era_16_source
			{
				source = "Hit";
				hitpoint = "era_16_hitpoint";
			};
			class era_17_source
			{
				source = "Hit";
				hitpoint = "era_17_hitpoint";
			};
			class era_18_source
			{
				source = "Hit";
				hitpoint = "era_18_hitpoint";
			};
			class era_19_source
			{
				source = "Hit";
				hitpoint = "era_19_hitpoint";
			};
			class era_20_source
			{
				source = "Hit";
				hitpoint = "era_20_hitpoint";
			};
			class era_21_source
			{
				source = "Hit";
				hitpoint = "era_21_hitpoint";
			};
			class era_22_source
			{
				source = "Hit";
				hitpoint = "era_22_hitpoint";
			};
			class era_23_source
			{
				source = "Hit";
				hitpoint = "era_23_hitpoint";
			};
			class era_24_source
			{
				source = "Hit";
				hitpoint = "era_24_hitpoint";
			};
			class era_25_source
			{
				source = "Hit";
				hitpoint = "era_25_hitpoint";
			};
			class era_26_source
			{
				source = "Hit";
				hitpoint = "era_26_hitpoint";
			};
			class era_27_source
			{
				source = "Hit";
				hitpoint = "era_27_hitpoint";
			};
			class era_28_source
			{
				source = "Hit";
				hitpoint = "era_28_hitpoint";
			};
			class era_29_source
			{
				source = "Hit";
				hitpoint = "era_29_hitpoint";
			};
			class era_30_source
			{
				source = "Hit";
				hitpoint = "era_30_hitpoint";
			};
			class era_31_source
			{
				source = "Hit";
				hitpoint = "era_31_hitpoint";
			};
			class era_32_source
			{
				source = "Hit";
				hitpoint = "era_32_hitpoint";
			};
			class era_33_source
			{
				source = "Hit";
				hitpoint = "era_33_hitpoint";
			};
			class era_34_source
			{
				source = "Hit";
				hitpoint = "era_34_hitpoint";
			};
			class era_35_source
			{
				source = "Hit";
				hitpoint = "era_35_hitpoint";
			};
			class era_36_source
			{
				source = "Hit";
				hitpoint = "era_36_hitpoint";
			};
			class smoketube_1_source: era_1_source
			{
				hitpoint = "smoketube_4_hitpoint";
			};
			class smoketube_2_source: era_1_source
			{
				hitpoint = "smoketube_2_hitpoint";
			};
			class smoketube_3_source: era_1_source
			{
				hitpoint = "smoketube_3_hitpoint";
			};
			class smoketube_4_source: era_1_source
			{
				hitpoint = "smoketube_4_hitpoint";
			};
			class smoketube_5_source: era_1_source
			{
				hitpoint = "smoketube_5_hitpoint";
			};
			class smoketube_6_source: era_1_source
			{
				hitpoint = "smoketube_6_hitpoint";
			};
			class smoketube_7_source: era_1_source
			{
				hitpoint = "smoketube_7_hitpoint";
			};
			class smoketube_8_source: era_1_source
			{
				hitpoint = "smoketube_8_hitpoint";
			};
			class mud_1_source: era_1_source
			{
				hitpoint = "mud_1_hitpoint";
			};
			class mud_2_source: era_1_source
			{
				hitpoint = "mud_2_hitpoint";
			};
			class mud_3_source: era_1_source
			{
				hitpoint = "mud_3_hitpoint";
			};
			class mud_4_source: era_1_source
			{
				hitpoint = "mud_4_hitpoint";
			};
			class mud_5_source: era_1_source
			{
				hitpoint = "mud_5_hitpoint";
			};
			class mud_6_source: era_1_source
			{
				hitpoint = "mud_6_hitpoint";
			};
			class mud_7_source: era_1_source
			{
				hitpoint = "mud_7_hitpoint";
			};
			class mud_8_source: era_1_source
			{
				hitpoint = "mud_8_hitpoint";
			};
			class recoil_source
			{
				source = "door";
				animPeriod = 6;
				initPhase = 0;
			};
			class reload_source
			{
				weapon = "OEC_Weapons_2A46_Cannon";
				source = "reload";
			};
			class reload_magazine_source: reload_source
			{
				source = "reloadMagazine";
			};
			class muzzle_rot_cannon: reload_source
			{
				source = "ammorandom";
			};
			class muzzle_rot_hmg: muzzle_rot_cannon
			{
				weapon = "OEC_Weapons_DSHKM_t80";
			};
			class ReloadAnim
			{
				source = "reload";
				weapon = "OEC_Weapons_DSHKM_t80";
			};
		};
		class HitPoints: HitPoints
		{
			class era_1_hitpoint
			{
				simulation = "RHS_ERA_K5";
				armor = -100;
				material = -1;
				name = "e1";
				armorComponent = "e1";
				passThrough = 0;
				minimalHit = -0.5;
				explosionShielding = 0.01;
				radius = 0.16;
				visual = "-";
				class DestructionEffects
				{
					ammoExplosionEffect = "";
					class RHS_ERA_Flash
					{
						simulation = "particles";
						type = "RHS_ERA_Flash";
						position = "fx_e1";
						intensity = 0.5;
						interval = 1;
						lifeTime = 0.006;
					};
					class RHS_ERA_Sound
					{
						simulation = "sound";
						type = "RHS_ERA_Explosion_Sound";
						position = "fx_e1";
						intensity = 1;
						interval = 1;
						lifeTime = 1;
					};
					class RHS_ERA_Smoke
					{
						simulation = "particles";
						type = "RHS_ERA_Smoke";
						position = "fx_e1";
						intensity = 0.1;
						interval = 1;
						lifeTime = 0.04;
					};
					class RHS_ERA_Shard
					{
						simulation = "particles";
						type = "RHS_ERA_Shard";
						position = "fx_e1";
						intensity = 1;
						interval = 1;
						lifeTime = 0.03;
					};
				};
			};
			class era_2_hitpoint
			{
				simulation = "RHS_ERA_K5";
				armor = -100;
				material = -1;
				name = "e2";
				armorComponent = "e2";
				passThrough = 0;
				minimalHit = -0.5;
				explosionShielding = 0.01;
				radius = 0.16;
				visual = "-";
				class DestructionEffects
				{
					ammoExplosionEffect = "";
					class RHS_ERA_Flash
					{
						simulation = "particles";
						type = "RHS_ERA_Flash";
						position = "fx_e2";
						intensity = 0.5;
						interval = 1;
						lifeTime = 0.006;
					};
					class RHS_ERA_Sound
					{
						simulation = "sound";
						type = "RHS_ERA_Explosion_Sound";
						position = "fx_e2";
						intensity = 1;
						interval = 1;
						lifeTime = 1;
					};
					class RHS_ERA_Smoke
					{
						simulation = "particles";
						type = "RHS_ERA_Smoke";
						position = "fx_e2";
						intensity = 0.1;
						interval = 1;
						lifeTime = 0.04;
					};
					class RHS_ERA_Shard
					{
						simulation = "particles";
						type = "RHS_ERA_Shard";
						position = "fx_e2";
						intensity = 1;
						interval = 1;
						lifeTime = 0.03;
					};
				};
			};
			class era_3_hitpoint
			{
				simulation = "RHS_ERA_K5";
				armor = -100;
				material = -1;
				name = "e3";
				armorComponent = "e3";
				passThrough = 0;
				minimalHit = -0.5;
				explosionShielding = 0.01;
				radius = 0.16;
				visual = "-";
				class DestructionEffects
				{
					ammoExplosionEffect = "";
					class RHS_ERA_Flash
					{
						simulation = "particles";
						type = "RHS_ERA_Flash";
						position = "fx_e3";
						intensity = 0.5;
						interval = 1;
						lifeTime = 0.006;
					};
					class RHS_ERA_Sound
					{
						simulation = "sound";
						type = "RHS_ERA_Explosion_Sound";
						position = "fx_e3";
						intensity = 1;
						interval = 1;
						lifeTime = 1;
					};
					class RHS_ERA_Smoke
					{
						simulation = "particles";
						type = "RHS_ERA_Smoke";
						position = "fx_e3";
						intensity = 0.1;
						interval = 1;
						lifeTime = 0.04;
					};
					class RHS_ERA_Shard
					{
						simulation = "particles";
						type = "RHS_ERA_Shard";
						position = "fx_e3";
						intensity = 1;
						interval = 1;
						lifeTime = 0.03;
					};
				};
			};
			class era_4_hitpoint
			{
				simulation = "RHS_ERA_K5";
				armor = -100;
				material = -1;
				name = "e4";
				armorComponent = "e4";
				passThrough = 0;
				minimalHit = -0.5;
				explosionShielding = 0.01;
				radius = 0.16;
				visual = "-";
				class DestructionEffects
				{
					ammoExplosionEffect = "";
					class RHS_ERA_Flash
					{
						simulation = "particles";
						type = "RHS_ERA_Flash";
						position = "fx_e4";
						intensity = 0.5;
						interval = 1;
						lifeTime = 0.006;
					};
					class RHS_ERA_Sound
					{
						simulation = "sound";
						type = "RHS_ERA_Explosion_Sound";
						position = "fx_e4";
						intensity = 1;
						interval = 1;
						lifeTime = 1;
					};
					class RHS_ERA_Smoke
					{
						simulation = "particles";
						type = "RHS_ERA_Smoke";
						position = "fx_e4";
						intensity = 0.1;
						interval = 1;
						lifeTime = 0.04;
					};
					class RHS_ERA_Shard
					{
						simulation = "particles";
						type = "RHS_ERA_Shard";
						position = "fx_e4";
						intensity = 1;
						interval = 1;
						lifeTime = 0.03;
					};
				};
			};
			class era_5_hitpoint
			{
				simulation = "RHS_ERA_K5";
				armor = -100;
				material = -1;
				name = "e5";
				armorComponent = "e5";
				passThrough = 0;
				minimalHit = -0.5;
				explosionShielding = 0.01;
				radius = 0.16;
				visual = "-";
				class DestructionEffects
				{
					ammoExplosionEffect = "";
					class RHS_ERA_Flash
					{
						simulation = "particles";
						type = "RHS_ERA_Flash";
						position = "fx_e5";
						intensity = 0.5;
						interval = 1;
						lifeTime = 0.006;
					};
					class RHS_ERA_Sound
					{
						simulation = "sound";
						type = "RHS_ERA_Explosion_Sound";
						position = "fx_e5";
						intensity = 1;
						interval = 1;
						lifeTime = 1;
					};
					class RHS_ERA_Smoke
					{
						simulation = "particles";
						type = "RHS_ERA_Smoke";
						position = "fx_e5";
						intensity = 0.1;
						interval = 1;
						lifeTime = 0.04;
					};
					class RHS_ERA_Shard
					{
						simulation = "particles";
						type = "RHS_ERA_Shard";
						position = "fx_e5";
						intensity = 1;
						interval = 1;
						lifeTime = 0.03;
					};
				};
			};
			class era_6_hitpoint
			{
				simulation = "RHS_ERA_K5";
				armor = -100;
				material = -1;
				name = "e6";
				armorComponent = "e6";
				passThrough = 0;
				minimalHit = -0.5;
				explosionShielding = 0.01;
				radius = 0.16;
				visual = "-";
				class DestructionEffects
				{
					ammoExplosionEffect = "";
					class RHS_ERA_Flash
					{
						simulation = "particles";
						type = "RHS_ERA_Flash";
						position = "fx_e6";
						intensity = 0.5;
						interval = 1;
						lifeTime = 0.006;
					};
					class RHS_ERA_Sound
					{
						simulation = "sound";
						type = "RHS_ERA_Explosion_Sound";
						position = "fx_e6";
						intensity = 1;
						interval = 1;
						lifeTime = 1;
					};
					class RHS_ERA_Smoke
					{
						simulation = "particles";
						type = "RHS_ERA_Smoke";
						position = "fx_e6";
						intensity = 0.1;
						interval = 1;
						lifeTime = 0.04;
					};
					class RHS_ERA_Shard
					{
						simulation = "particles";
						type = "RHS_ERA_Shard";
						position = "fx_e6";
						intensity = 1;
						interval = 1;
						lifeTime = 0.03;
					};
				};
			};
			class era_7_hitpoint
			{
				simulation = "RHS_ERA_K5";
				armor = -100;
				material = -1;
				name = "e7";
				armorComponent = "e7";
				passThrough = 0;
				minimalHit = -0.5;
				explosionShielding = 0.01;
				radius = 0.16;
				visual = "-";
				class DestructionEffects
				{
					ammoExplosionEffect = "";
					class RHS_ERA_Flash
					{
						simulation = "particles";
						type = "RHS_ERA_Flash";
						position = "fx_e7";
						intensity = 0.5;
						interval = 1;
						lifeTime = 0.006;
					};
					class RHS_ERA_Sound
					{
						simulation = "sound";
						type = "RHS_ERA_Explosion_Sound";
						position = "fx_e7";
						intensity = 1;
						interval = 1;
						lifeTime = 1;
					};
					class RHS_ERA_Smoke
					{
						simulation = "particles";
						type = "RHS_ERA_Smoke";
						position = "fx_e7";
						intensity = 0.1;
						interval = 1;
						lifeTime = 0.04;
					};
					class RHS_ERA_Shard
					{
						simulation = "particles";
						type = "RHS_ERA_Shard";
						position = "fx_e7";
						intensity = 1;
						interval = 1;
						lifeTime = 0.03;
					};
				};
			};
			class era_8_hitpoint
			{
				simulation = "RHS_ERA_K5";
				armor = -100;
				material = -1;
				name = "e8";
				armorComponent = "e8";
				passThrough = 0;
				minimalHit = -0.5;
				explosionShielding = 0.01;
				radius = 0.16;
				visual = "-";
				class DestructionEffects
				{
					ammoExplosionEffect = "";
					class RHS_ERA_Flash
					{
						simulation = "particles";
						type = "RHS_ERA_Flash";
						position = "fx_e8";
						intensity = 0.5;
						interval = 1;
						lifeTime = 0.006;
					};
					class RHS_ERA_Sound
					{
						simulation = "sound";
						type = "RHS_ERA_Explosion_Sound";
						position = "fx_e8";
						intensity = 1;
						interval = 1;
						lifeTime = 1;
					};
					class RHS_ERA_Smoke
					{
						simulation = "particles";
						type = "RHS_ERA_Smoke";
						position = "fx_e8";
						intensity = 0.1;
						interval = 1;
						lifeTime = 0.04;
					};
					class RHS_ERA_Shard
					{
						simulation = "particles";
						type = "RHS_ERA_Shard";
						position = "fx_e8";
						intensity = 1;
						interval = 1;
						lifeTime = 0.03;
					};
				};
			};
			class era_9_hitpoint
			{
				simulation = "RHS_ERA_K5";
				armor = -100;
				material = -1;
				name = "e9";
				armorComponent = "e9";
				passThrough = 0;
				minimalHit = -0.5;
				explosionShielding = 0.01;
				radius = 0.16;
				visual = "-";
				class DestructionEffects
				{
					ammoExplosionEffect = "";
					class RHS_ERA_Flash
					{
						simulation = "particles";
						type = "RHS_ERA_Flash";
						position = "fx_e9";
						intensity = 0.5;
						interval = 1;
						lifeTime = 0.006;
					};
					class RHS_ERA_Sound
					{
						simulation = "sound";
						type = "RHS_ERA_Explosion_Sound";
						position = "fx_e9";
						intensity = 1;
						interval = 1;
						lifeTime = 1;
					};
					class RHS_ERA_Smoke
					{
						simulation = "particles";
						type = "RHS_ERA_Smoke";
						position = "fx_e9";
						intensity = 0.1;
						interval = 1;
						lifeTime = 0.04;
					};
					class RHS_ERA_Shard
					{
						simulation = "particles";
						type = "RHS_ERA_Shard";
						position = "fx_e9";
						intensity = 1;
						interval = 1;
						lifeTime = 0.03;
					};
				};
			};
			class era_10_hitpoint
			{
				simulation = "RHS_ERA_K5";
				armor = -100;
				material = -1;
				name = "e10";
				armorComponent = "e10";
				passThrough = 0;
				minimalHit = -0.5;
				explosionShielding = 0.01;
				radius = 0.16;
				visual = "-";
				class DestructionEffects
				{
					ammoExplosionEffect = "";
					class RHS_ERA_Flash
					{
						simulation = "particles";
						type = "RHS_ERA_Flash";
						position = "fx_e10";
						intensity = 0.5;
						interval = 1;
						lifeTime = 0.006;
					};
					class RHS_ERA_Sound
					{
						simulation = "sound";
						type = "RHS_ERA_Explosion_Sound";
						position = "fx_e10";
						intensity = 1;
						interval = 1;
						lifeTime = 1;
					};
					class RHS_ERA_Smoke
					{
						simulation = "particles";
						type = "RHS_ERA_Smoke";
						position = "fx_e10";
						intensity = 0.1;
						interval = 1;
						lifeTime = 0.04;
					};
					class RHS_ERA_Shard
					{
						simulation = "particles";
						type = "RHS_ERA_Shard";
						position = "fx_e10";
						intensity = 1;
						interval = 1;
						lifeTime = 0.03;
					};
				};
			};
			class era_11_hitpoint
			{
				simulation = "RHS_ERA_K5";
				armor = -100;
				material = -1;
				name = "e11";
				armorComponent = "e11";
				passThrough = 0;
				minimalHit = -0.5;
				explosionShielding = 0.01;
				radius = 0.16;
				visual = "-";
				class DestructionEffects
				{
					ammoExplosionEffect = "";
					class RHS_ERA_Flash
					{
						simulation = "particles";
						type = "RHS_ERA_Flash";
						position = "fx_e11";
						intensity = 0.5;
						interval = 1;
						lifeTime = 0.006;
					};
					class RHS_ERA_Sound
					{
						simulation = "sound";
						type = "RHS_ERA_Explosion_Sound";
						position = "fx_e11";
						intensity = 1;
						interval = 1;
						lifeTime = 1;
					};
					class RHS_ERA_Smoke
					{
						simulation = "particles";
						type = "RHS_ERA_Smoke";
						position = "fx_e11";
						intensity = 0.1;
						interval = 1;
						lifeTime = 0.04;
					};
					class RHS_ERA_Shard
					{
						simulation = "particles";
						type = "RHS_ERA_Shard";
						position = "fx_e11";
						intensity = 1;
						interval = 1;
						lifeTime = 0.03;
					};
				};
			};
			class era_12_hitpoint
			{
				simulation = "RHS_ERA_K5";
				armor = -100;
				material = -1;
				name = "e12";
				armorComponent = "e12";
				passThrough = 0;
				minimalHit = -0.5;
				explosionShielding = 0.01;
				radius = 0.16;
				visual = "-";
				class DestructionEffects
				{
					ammoExplosionEffect = "";
					class RHS_ERA_Flash
					{
						simulation = "particles";
						type = "RHS_ERA_Flash";
						position = "fx_e12";
						intensity = 0.5;
						interval = 1;
						lifeTime = 0.006;
					};
					class RHS_ERA_Sound
					{
						simulation = "sound";
						type = "RHS_ERA_Explosion_Sound";
						position = "fx_e12";
						intensity = 1;
						interval = 1;
						lifeTime = 1;
					};
					class RHS_ERA_Smoke
					{
						simulation = "particles";
						type = "RHS_ERA_Smoke";
						position = "fx_e12";
						intensity = 0.1;
						interval = 1;
						lifeTime = 0.04;
					};
					class RHS_ERA_Shard
					{
						simulation = "particles";
						type = "RHS_ERA_Shard";
						position = "fx_e12";
						intensity = 1;
						interval = 1;
						lifeTime = 0.03;
					};
				};
			};
			class era_13_hitpoint
			{
				simulation = "RHS_ERA_K5";
				armor = -100;
				material = -1;
				name = "e13";
				armorComponent = "e13";
				passThrough = 0;
				minimalHit = -0.5;
				explosionShielding = 0.01;
				radius = 0.16;
				visual = "-";
				class DestructionEffects
				{
					ammoExplosionEffect = "";
					class RHS_ERA_Flash
					{
						simulation = "particles";
						type = "RHS_ERA_Flash";
						position = "fx_e13";
						intensity = 0.5;
						interval = 1;
						lifeTime = 0.006;
					};
					class RHS_ERA_Sound
					{
						simulation = "sound";
						type = "RHS_ERA_Explosion_Sound";
						position = "fx_e13";
						intensity = 1;
						interval = 1;
						lifeTime = 1;
					};
					class RHS_ERA_Smoke
					{
						simulation = "particles";
						type = "RHS_ERA_Smoke";
						position = "fx_e13";
						intensity = 0.1;
						interval = 1;
						lifeTime = 0.04;
					};
					class RHS_ERA_Shard
					{
						simulation = "particles";
						type = "RHS_ERA_Shard";
						position = "fx_e13";
						intensity = 1;
						interval = 1;
						lifeTime = 0.03;
					};
				};
			};
			class era_14_hitpoint
			{
				simulation = "RHS_ERA_K5";
				armor = -100;
				material = -1;
				name = "e14";
				armorComponent = "e14";
				passThrough = 0;
				minimalHit = -0.5;
				explosionShielding = 0.01;
				radius = 0.16;
				visual = "-";
				class DestructionEffects
				{
					ammoExplosionEffect = "";
					class RHS_ERA_Flash
					{
						simulation = "particles";
						type = "RHS_ERA_Flash";
						position = "fx_e14";
						intensity = 0.5;
						interval = 1;
						lifeTime = 0.006;
					};
					class RHS_ERA_Sound
					{
						simulation = "sound";
						type = "RHS_ERA_Explosion_Sound";
						position = "fx_e14";
						intensity = 1;
						interval = 1;
						lifeTime = 1;
					};
					class RHS_ERA_Smoke
					{
						simulation = "particles";
						type = "RHS_ERA_Smoke";
						position = "fx_e14";
						intensity = 0.1;
						interval = 1;
						lifeTime = 0.04;
					};
					class RHS_ERA_Shard
					{
						simulation = "particles";
						type = "RHS_ERA_Shard";
						position = "fx_e14";
						intensity = 1;
						interval = 1;
						lifeTime = 0.03;
					};
				};
			};
			class era_15_hitpoint
			{
				simulation = "RHS_ERA_K5";
				armor = -100;
				material = -1;
				name = "e15";
				armorComponent = "e15";
				passThrough = 0;
				minimalHit = -0.5;
				explosionShielding = 0.01;
				radius = 0.16;
				visual = "-";
				class DestructionEffects
				{
					ammoExplosionEffect = "";
					class RHS_ERA_Flash
					{
						simulation = "particles";
						type = "RHS_ERA_Flash";
						position = "fx_e15";
						intensity = 0.5;
						interval = 1;
						lifeTime = 0.006;
					};
					class RHS_ERA_Sound
					{
						simulation = "sound";
						type = "RHS_ERA_Explosion_Sound";
						position = "fx_e15";
						intensity = 1;
						interval = 1;
						lifeTime = 1;
					};
					class RHS_ERA_Smoke
					{
						simulation = "particles";
						type = "RHS_ERA_Smoke";
						position = "fx_e15";
						intensity = 0.1;
						interval = 1;
						lifeTime = 0.04;
					};
					class RHS_ERA_Shard
					{
						simulation = "particles";
						type = "RHS_ERA_Shard";
						position = "fx_e15";
						intensity = 1;
						interval = 1;
						lifeTime = 0.03;
					};
				};
			};
			class era_16_hitpoint
			{
				simulation = "RHS_ERA_K5";
				armor = -100;
				material = -1;
				name = "e16";
				armorComponent = "e16";
				passThrough = 0;
				minimalHit = -0.5;
				explosionShielding = 0.01;
				radius = 0.16;
				visual = "-";
				class DestructionEffects
				{
					ammoExplosionEffect = "";
					class RHS_ERA_Flash
					{
						simulation = "particles";
						type = "RHS_ERA_Flash";
						position = "fx_e16";
						intensity = 0.5;
						interval = 1;
						lifeTime = 0.006;
					};
					class RHS_ERA_Sound
					{
						simulation = "sound";
						type = "RHS_ERA_Explosion_Sound";
						position = "fx_e16";
						intensity = 1;
						interval = 1;
						lifeTime = 1;
					};
					class RHS_ERA_Smoke
					{
						simulation = "particles";
						type = "RHS_ERA_Smoke";
						position = "fx_e16";
						intensity = 0.1;
						interval = 1;
						lifeTime = 0.04;
					};
					class RHS_ERA_Shard
					{
						simulation = "particles";
						type = "RHS_ERA_Shard";
						position = "fx_e16";
						intensity = 1;
						interval = 1;
						lifeTime = 0.03;
					};
				};
			};
			class era_17_hitpoint
			{
				simulation = "RHS_ERA_K5";
				armor = -100;
				material = -1;
				name = "e17";
				armorComponent = "e17";
				passThrough = 0;
				minimalHit = -0.5;
				explosionShielding = 0.01;
				radius = 0.16;
				visual = "-";
				class DestructionEffects
				{
					ammoExplosionEffect = "";
					class RHS_ERA_Flash
					{
						simulation = "particles";
						type = "RHS_ERA_Flash";
						position = "fx_e17";
						intensity = 0.5;
						interval = 1;
						lifeTime = 0.006;
					};
					class RHS_ERA_Sound
					{
						simulation = "sound";
						type = "RHS_ERA_Explosion_Sound";
						position = "fx_e17";
						intensity = 1;
						interval = 1;
						lifeTime = 1;
					};
					class RHS_ERA_Smoke
					{
						simulation = "particles";
						type = "RHS_ERA_Smoke";
						position = "fx_e17";
						intensity = 0.1;
						interval = 1;
						lifeTime = 0.04;
					};
					class RHS_ERA_Shard
					{
						simulation = "particles";
						type = "RHS_ERA_Shard";
						position = "fx_e17";
						intensity = 1;
						interval = 1;
						lifeTime = 0.03;
					};
				};
			};
			class era_18_hitpoint
			{
				simulation = "RHS_ERA_K5";
				armor = -100;
				material = -1;
				name = "e18";
				armorComponent = "e18";
				passThrough = 0;
				minimalHit = -0.5;
				explosionShielding = 0.01;
				radius = 0.16;
				visual = "-";
				class DestructionEffects
				{
					ammoExplosionEffect = "";
					class RHS_ERA_Flash
					{
						simulation = "particles";
						type = "RHS_ERA_Flash";
						position = "fx_e18";
						intensity = 0.5;
						interval = 1;
						lifeTime = 0.006;
					};
					class RHS_ERA_Sound
					{
						simulation = "sound";
						type = "RHS_ERA_Explosion_Sound";
						position = "fx_e18";
						intensity = 1;
						interval = 1;
						lifeTime = 1;
					};
					class RHS_ERA_Smoke
					{
						simulation = "particles";
						type = "RHS_ERA_Smoke";
						position = "fx_e18";
						intensity = 0.1;
						interval = 1;
						lifeTime = 0.04;
					};
					class RHS_ERA_Shard
					{
						simulation = "particles";
						type = "RHS_ERA_Shard";
						position = "fx_e18";
						intensity = 1;
						interval = 1;
						lifeTime = 0.03;
					};
				};
			};
			class era_19_hitpoint
			{
				simulation = "RHS_ERA_K5";
				armor = -100;
				material = -1;
				name = "e19";
				armorComponent = "e19";
				passThrough = 0;
				minimalHit = -0.5;
				explosionShielding = 0.01;
				radius = 0.16;
				visual = "-";
				class DestructionEffects
				{
					ammoExplosionEffect = "";
					class RHS_ERA_Flash
					{
						simulation = "particles";
						type = "RHS_ERA_Flash";
						position = "fx_e19";
						intensity = 0.5;
						interval = 1;
						lifeTime = 0.006;
					};
					class RHS_ERA_Sound
					{
						simulation = "sound";
						type = "RHS_ERA_Explosion_Sound";
						position = "fx_e19";
						intensity = 1;
						interval = 1;
						lifeTime = 1;
					};
					class RHS_ERA_Smoke
					{
						simulation = "particles";
						type = "RHS_ERA_Smoke";
						position = "fx_e19";
						intensity = 0.1;
						interval = 1;
						lifeTime = 0.04;
					};
					class RHS_ERA_Shard
					{
						simulation = "particles";
						type = "RHS_ERA_Shard";
						position = "fx_e19";
						intensity = 1;
						interval = 1;
						lifeTime = 0.03;
					};
				};
			};
			class era_20_hitpoint
			{
				simulation = "RHS_ERA_K5";
				armor = -100;
				material = -1;
				name = "e20";
				armorComponent = "e20";
				passThrough = 0;
				minimalHit = -0.5;
				explosionShielding = 0.01;
				radius = 0.16;
				visual = "-";
				class DestructionEffects
				{
					ammoExplosionEffect = "";
					class RHS_ERA_Flash
					{
						simulation = "particles";
						type = "RHS_ERA_Flash";
						position = "fx_e20";
						intensity = 0.5;
						interval = 1;
						lifeTime = 0.006;
					};
					class RHS_ERA_Sound
					{
						simulation = "sound";
						type = "RHS_ERA_Explosion_Sound";
						position = "fx_e20";
						intensity = 1;
						interval = 1;
						lifeTime = 1;
					};
					class RHS_ERA_Smoke
					{
						simulation = "particles";
						type = "RHS_ERA_Smoke";
						position = "fx_e20";
						intensity = 0.1;
						interval = 1;
						lifeTime = 0.04;
					};
					class RHS_ERA_Shard
					{
						simulation = "particles";
						type = "RHS_ERA_Shard";
						position = "fx_e20";
						intensity = 1;
						interval = 1;
						lifeTime = 0.03;
					};
				};
			};
			class era_21_hitpoint
			{
				simulation = "RHS_ERA_K5";
				armor = -100;
				material = -1;
				name = "e21";
				armorComponent = "e21";
				passThrough = 0;
				minimalHit = -0.5;
				explosionShielding = 0.01;
				radius = 0.16;
				visual = "-";
				class DestructionEffects
				{
					ammoExplosionEffect = "";
					class RHS_ERA_Flash
					{
						simulation = "particles";
						type = "RHS_ERA_Flash";
						position = "fx_e21";
						intensity = 0.5;
						interval = 1;
						lifeTime = 0.006;
					};
					class RHS_ERA_Sound
					{
						simulation = "sound";
						type = "RHS_ERA_Explosion_Sound";
						position = "fx_e21";
						intensity = 1;
						interval = 1;
						lifeTime = 1;
					};
					class RHS_ERA_Smoke
					{
						simulation = "particles";
						type = "RHS_ERA_Smoke";
						position = "fx_e21";
						intensity = 0.1;
						interval = 1;
						lifeTime = 0.04;
					};
					class RHS_ERA_Shard
					{
						simulation = "particles";
						type = "RHS_ERA_Shard";
						position = "fx_e21";
						intensity = 1;
						interval = 1;
						lifeTime = 0.03;
					};
				};
			};
			class era_22_hitpoint
			{
				simulation = "RHS_ERA_K5";
				armor = -100;
				material = -1;
				name = "e22";
				armorComponent = "e22";
				passThrough = 0;
				minimalHit = -0.5;
				explosionShielding = 0.01;
				radius = 0.16;
				visual = "-";
				class DestructionEffects
				{
					ammoExplosionEffect = "";
					class RHS_ERA_Flash
					{
						simulation = "particles";
						type = "RHS_ERA_Flash";
						position = "fx_e22";
						intensity = 0.5;
						interval = 1;
						lifeTime = 0.006;
					};
					class RHS_ERA_Sound
					{
						simulation = "sound";
						type = "RHS_ERA_Explosion_Sound";
						position = "fx_e22";
						intensity = 1;
						interval = 1;
						lifeTime = 1;
					};
					class RHS_ERA_Smoke
					{
						simulation = "particles";
						type = "RHS_ERA_Smoke";
						position = "fx_e22";
						intensity = 0.1;
						interval = 1;
						lifeTime = 0.04;
					};
					class RHS_ERA_Shard
					{
						simulation = "particles";
						type = "RHS_ERA_Shard";
						position = "fx_e22";
						intensity = 1;
						interval = 1;
						lifeTime = 0.03;
					};
				};
			};
			class era_23_hitpoint
			{
				simulation = "RHS_ERA_K5";
				armor = -100;
				material = -1;
				name = "e23";
				armorComponent = "e23";
				passThrough = 0;
				minimalHit = -0.5;
				explosionShielding = 0.01;
				radius = 0.16;
				visual = "-";
				class DestructionEffects
				{
					ammoExplosionEffect = "";
					class RHS_ERA_Flash
					{
						simulation = "particles";
						type = "RHS_ERA_Flash";
						position = "fx_e23";
						intensity = 0.5;
						interval = 1;
						lifeTime = 0.006;
					};
					class RHS_ERA_Sound
					{
						simulation = "sound";
						type = "RHS_ERA_Explosion_Sound";
						position = "fx_e23";
						intensity = 1;
						interval = 1;
						lifeTime = 1;
					};
					class RHS_ERA_Smoke
					{
						simulation = "particles";
						type = "RHS_ERA_Smoke";
						position = "fx_e23";
						intensity = 0.1;
						interval = 1;
						lifeTime = 0.04;
					};
					class RHS_ERA_Shard
					{
						simulation = "particles";
						type = "RHS_ERA_Shard";
						position = "fx_e23";
						intensity = 1;
						interval = 1;
						lifeTime = 0.03;
					};
				};
			};
			class era_24_hitpoint
			{
				simulation = "RHS_ERA_K5";
				armor = -100;
				material = -1;
				name = "e24";
				armorComponent = "e24";
				passThrough = 0;
				minimalHit = -0.5;
				explosionShielding = 0.01;
				radius = 0.16;
				visual = "-";
				class DestructionEffects
				{
					ammoExplosionEffect = "";
					class RHS_ERA_Flash
					{
						simulation = "particles";
						type = "RHS_ERA_Flash";
						position = "fx_e24";
						intensity = 0.5;
						interval = 1;
						lifeTime = 0.006;
					};
					class RHS_ERA_Sound
					{
						simulation = "sound";
						type = "RHS_ERA_Explosion_Sound";
						position = "fx_e24";
						intensity = 1;
						interval = 1;
						lifeTime = 1;
					};
					class RHS_ERA_Smoke
					{
						simulation = "particles";
						type = "RHS_ERA_Smoke";
						position = "fx_e24";
						intensity = 0.1;
						interval = 1;
						lifeTime = 0.04;
					};
					class RHS_ERA_Shard
					{
						simulation = "particles";
						type = "RHS_ERA_Shard";
						position = "fx_e24";
						intensity = 1;
						interval = 1;
						lifeTime = 0.03;
					};
				};
			};
			class era_25_hitpoint
			{
				simulation = "RHS_ERA_K5";
				armor = -100;
				material = -1;
				name = "e25";
				armorComponent = "e25";
				passThrough = 0;
				minimalHit = -0.5;
				explosionShielding = 0.01;
				radius = 0.16;
				visual = "-";
				class DestructionEffects
				{
					ammoExplosionEffect = "";
					class RHS_ERA_Flash
					{
						simulation = "particles";
						type = "RHS_ERA_Flash";
						position = "fx_e25";
						intensity = 0.5;
						interval = 1;
						lifeTime = 0.006;
					};
					class RHS_ERA_Sound
					{
						simulation = "sound";
						type = "RHS_ERA_Explosion_Sound";
						position = "fx_e25";
						intensity = 1;
						interval = 1;
						lifeTime = 1;
					};
					class RHS_ERA_Smoke
					{
						simulation = "particles";
						type = "RHS_ERA_Smoke";
						position = "fx_e25";
						intensity = 0.1;
						interval = 1;
						lifeTime = 0.04;
					};
					class RHS_ERA_Shard
					{
						simulation = "particles";
						type = "RHS_ERA_Shard";
						position = "fx_e25";
						intensity = 1;
						interval = 1;
						lifeTime = 0.03;
					};
				};
			};
			class era_26_hitpoint
			{
				simulation = "RHS_ERA_K5";
				armor = -100;
				material = -1;
				name = "e26";
				armorComponent = "e26";
				passThrough = 0;
				minimalHit = -0.5;
				explosionShielding = 0.01;
				radius = 0.16;
				visual = "-";
				class DestructionEffects
				{
					ammoExplosionEffect = "";
					class RHS_ERA_Flash
					{
						simulation = "particles";
						type = "RHS_ERA_Flash";
						position = "fx_e26";
						intensity = 0.5;
						interval = 1;
						lifeTime = 0.006;
					};
					class RHS_ERA_Sound
					{
						simulation = "sound";
						type = "RHS_ERA_Explosion_Sound";
						position = "fx_e26";
						intensity = 1;
						interval = 1;
						lifeTime = 1;
					};
					class RHS_ERA_Smoke
					{
						simulation = "particles";
						type = "RHS_ERA_Smoke";
						position = "fx_e26";
						intensity = 0.1;
						interval = 1;
						lifeTime = 0.04;
					};
					class RHS_ERA_Shard
					{
						simulation = "particles";
						type = "RHS_ERA_Shard";
						position = "fx_e26";
						intensity = 1;
						interval = 1;
						lifeTime = 0.03;
					};
				};
			};
			class era_27_hitpoint
			{
				simulation = "RHS_ERA_K5";
				armor = -100;
				material = -1;
				name = "e27";
				armorComponent = "e27";
				passThrough = 0;
				minimalHit = -0.5;
				explosionShielding = 0.01;
				radius = 0.16;
				visual = "-";
				class DestructionEffects
				{
					ammoExplosionEffect = "";
					class RHS_ERA_Flash
					{
						simulation = "particles";
						type = "RHS_ERA_Flash";
						position = "fx_e27";
						intensity = 0.5;
						interval = 1;
						lifeTime = 0.006;
					};
					class RHS_ERA_Sound
					{
						simulation = "sound";
						type = "RHS_ERA_Explosion_Sound";
						position = "fx_e27";
						intensity = 1;
						interval = 1;
						lifeTime = 1;
					};
					class RHS_ERA_Smoke
					{
						simulation = "particles";
						type = "RHS_ERA_Smoke";
						position = "fx_e27";
						intensity = 0.1;
						interval = 1;
						lifeTime = 0.04;
					};
					class RHS_ERA_Shard
					{
						simulation = "particles";
						type = "RHS_ERA_Shard";
						position = "fx_e27";
						intensity = 1;
						interval = 1;
						lifeTime = 0.03;
					};
				};
			};
			class era_28_hitpoint
			{
				simulation = "RHS_ERA_K5";
				armor = -100;
				material = -1;
				name = "e28";
				armorComponent = "e28";
				passThrough = 0;
				minimalHit = -0.5;
				explosionShielding = 0.01;
				radius = 0.16;
				visual = "-";
				class DestructionEffects
				{
					ammoExplosionEffect = "";
					class RHS_ERA_Flash
					{
						simulation = "particles";
						type = "RHS_ERA_Flash";
						position = "fx_e28";
						intensity = 0.5;
						interval = 1;
						lifeTime = 0.006;
					};
					class RHS_ERA_Sound
					{
						simulation = "sound";
						type = "RHS_ERA_Explosion_Sound";
						position = "fx_e28";
						intensity = 1;
						interval = 1;
						lifeTime = 1;
					};
					class RHS_ERA_Smoke
					{
						simulation = "particles";
						type = "RHS_ERA_Smoke";
						position = "fx_e28";
						intensity = 0.1;
						interval = 1;
						lifeTime = 0.04;
					};
					class RHS_ERA_Shard
					{
						simulation = "particles";
						type = "RHS_ERA_Shard";
						position = "fx_e28";
						intensity = 1;
						interval = 1;
						lifeTime = 0.03;
					};
				};
			};
			class era_29_hitpoint
			{
				simulation = "RHS_ERA_K5";
				armor = -100;
				material = -1;
				name = "e29";
				armorComponent = "e29";
				passThrough = 0;
				minimalHit = -0.5;
				explosionShielding = 0.01;
				radius = 0.16;
				visual = "-";
				class DestructionEffects
				{
					ammoExplosionEffect = "";
					class RHS_ERA_Flash
					{
						simulation = "particles";
						type = "RHS_ERA_Flash";
						position = "fx_e29";
						intensity = 0.5;
						interval = 1;
						lifeTime = 0.006;
					};
					class RHS_ERA_Sound
					{
						simulation = "sound";
						type = "RHS_ERA_Explosion_Sound";
						position = "fx_e29";
						intensity = 1;
						interval = 1;
						lifeTime = 1;
					};
					class RHS_ERA_Smoke
					{
						simulation = "particles";
						type = "RHS_ERA_Smoke";
						position = "fx_e29";
						intensity = 0.1;
						interval = 1;
						lifeTime = 0.04;
					};
					class RHS_ERA_Shard
					{
						simulation = "particles";
						type = "RHS_ERA_Shard";
						position = "fx_e29";
						intensity = 1;
						interval = 1;
						lifeTime = 0.03;
					};
				};
			};
			class era_30_hitpoint
			{
				simulation = "RHS_ERA_K1";
				armor = -80;
				material = -1;
				name = "e30";
				armorComponent = "e30";
				passThrough = 0;
				minimalHit = -0.5;
				explosionShielding = 0.01;
				radius = 0.16;
				visual = "-";
				class DestructionEffects
				{
					ammoExplosionEffect = "";
					class RHS_ERA_Flash
					{
						simulation = "particles";
						type = "RHS_ERA_Flash";
						position = "fx_e30";
						intensity = 0.5;
						interval = 1;
						lifeTime = 0.006;
					};
					class RHS_ERA_Sound
					{
						simulation = "sound";
						type = "RHS_ERA_Explosion_Sound";
						position = "fx_e30";
						intensity = 1;
						interval = 1;
						lifeTime = 1;
					};
					class RHS_ERA_Smoke
					{
						simulation = "particles";
						type = "RHS_ERA_Smoke";
						position = "fx_e30";
						intensity = 0.1;
						interval = 1;
						lifeTime = 0.04;
					};
					class RHS_ERA_Shard
					{
						simulation = "particles";
						type = "RHS_ERA_Shard";
						position = "fx_e30";
						intensity = 1;
						interval = 1;
						lifeTime = 0.03;
					};
				};
			};
			class era_31_hitpoint
			{
				simulation = "RHS_ERA_K1";
				armor = -80;
				material = -1;
				name = "e31";
				armorComponent = "e31";
				passThrough = 0;
				minimalHit = -0.5;
				explosionShielding = 0.01;
				radius = 0.16;
				visual = "-";
				class DestructionEffects
				{
					ammoExplosionEffect = "";
					class RHS_ERA_Flash
					{
						simulation = "particles";
						type = "RHS_ERA_Flash";
						position = "fx_e31";
						intensity = 0.5;
						interval = 1;
						lifeTime = 0.006;
					};
					class RHS_ERA_Sound
					{
						simulation = "sound";
						type = "RHS_ERA_Explosion_Sound";
						position = "fx_e31";
						intensity = 1;
						interval = 1;
						lifeTime = 1;
					};
					class RHS_ERA_Smoke
					{
						simulation = "particles";
						type = "RHS_ERA_Smoke";
						position = "fx_e31";
						intensity = 0.1;
						interval = 1;
						lifeTime = 0.04;
					};
					class RHS_ERA_Shard
					{
						simulation = "particles";
						type = "RHS_ERA_Shard";
						position = "fx_e31";
						intensity = 1;
						interval = 1;
						lifeTime = 0.03;
					};
				};
			};
			class era_32_hitpoint
			{
				simulation = "RHS_ERA_K1";
				armor = -80;
				material = -1;
				name = "e32";
				armorComponent = "e32";
				passThrough = 0;
				minimalHit = -0.5;
				explosionShielding = 0.01;
				radius = 0.16;
				visual = "-";
				class DestructionEffects
				{
					ammoExplosionEffect = "";
					class RHS_ERA_Flash
					{
						simulation = "particles";
						type = "RHS_ERA_Flash";
						position = "fx_e32";
						intensity = 0.5;
						interval = 1;
						lifeTime = 0.006;
					};
					class RHS_ERA_Sound
					{
						simulation = "sound";
						type = "RHS_ERA_Explosion_Sound";
						position = "fx_e32";
						intensity = 1;
						interval = 1;
						lifeTime = 1;
					};
					class RHS_ERA_Smoke
					{
						simulation = "particles";
						type = "RHS_ERA_Smoke";
						position = "fx_e32";
						intensity = 0.1;
						interval = 1;
						lifeTime = 0.04;
					};
					class RHS_ERA_Shard
					{
						simulation = "particles";
						type = "RHS_ERA_Shard";
						position = "fx_e32";
						intensity = 1;
						interval = 1;
						lifeTime = 0.03;
					};
				};
			};
			class era_33_hitpoint
			{
				simulation = "RHS_ERA_K1";
				armor = -80;
				material = -1;
				name = "e33";
				armorComponent = "e33";
				passThrough = 0;
				minimalHit = -0.5;
				explosionShielding = 0.01;
				radius = 0.16;
				visual = "-";
				class DestructionEffects
				{
					ammoExplosionEffect = "";
					class RHS_ERA_Flash
					{
						simulation = "particles";
						type = "RHS_ERA_Flash";
						position = "fx_e33";
						intensity = 0.5;
						interval = 1;
						lifeTime = 0.006;
					};
					class RHS_ERA_Sound
					{
						simulation = "sound";
						type = "RHS_ERA_Explosion_Sound";
						position = "fx_e33";
						intensity = 1;
						interval = 1;
						lifeTime = 1;
					};
					class RHS_ERA_Smoke
					{
						simulation = "particles";
						type = "RHS_ERA_Smoke";
						position = "fx_e33";
						intensity = 0.1;
						interval = 1;
						lifeTime = 0.04;
					};
					class RHS_ERA_Shard
					{
						simulation = "particles";
						type = "RHS_ERA_Shard";
						position = "fx_e33";
						intensity = 1;
						interval = 1;
						lifeTime = 0.03;
					};
				};
			};
			class era_34_hitpoint
			{
				simulation = "RHS_ERA_K1";
				armor = -80;
				material = -1;
				name = "e34";
				armorComponent = "e34";
				passThrough = 0;
				minimalHit = -0.5;
				explosionShielding = 0.01;
				radius = 0.16;
				visual = "-";
				class DestructionEffects
				{
					ammoExplosionEffect = "";
					class RHS_ERA_Flash
					{
						simulation = "particles";
						type = "RHS_ERA_Flash";
						position = "fx_e34";
						intensity = 0.5;
						interval = 1;
						lifeTime = 0.006;
					};
					class RHS_ERA_Sound
					{
						simulation = "sound";
						type = "RHS_ERA_Explosion_Sound";
						position = "fx_e34";
						intensity = 1;
						interval = 1;
						lifeTime = 1;
					};
					class RHS_ERA_Smoke
					{
						simulation = "particles";
						type = "RHS_ERA_Smoke";
						position = "fx_e34";
						intensity = 0.1;
						interval = 1;
						lifeTime = 0.04;
					};
					class RHS_ERA_Shard
					{
						simulation = "particles";
						type = "RHS_ERA_Shard";
						position = "fx_e34";
						intensity = 1;
						interval = 1;
						lifeTime = 0.03;
					};
				};
			};
			class era_35_hitpoint
			{
				simulation = "RHS_ERA_K1";
				armor = -80;
				material = -1;
				name = "e35";
				armorComponent = "e35";
				passThrough = 0;
				minimalHit = -0.5;
				explosionShielding = 0.01;
				radius = 0.16;
				visual = "-";
				class DestructionEffects
				{
					ammoExplosionEffect = "";
					class RHS_ERA_Flash
					{
						simulation = "particles";
						type = "RHS_ERA_Flash";
						position = "fx_e35";
						intensity = 0.5;
						interval = 1;
						lifeTime = 0.006;
					};
					class RHS_ERA_Sound
					{
						simulation = "sound";
						type = "RHS_ERA_Explosion_Sound";
						position = "fx_e35";
						intensity = 1;
						interval = 1;
						lifeTime = 1;
					};
					class RHS_ERA_Smoke
					{
						simulation = "particles";
						type = "RHS_ERA_Smoke";
						position = "fx_e35";
						intensity = 0.1;
						interval = 1;
						lifeTime = 0.04;
					};
					class RHS_ERA_Shard
					{
						simulation = "particles";
						type = "RHS_ERA_Shard";
						position = "fx_e35";
						intensity = 1;
						interval = 1;
						lifeTime = 0.03;
					};
				};
			};
			class era_36_hitpoint
			{
				simulation = "RHS_ERA_K5";
				armor = -100;
				material = -1;
				name = "e36";
				armorComponent = "e36";
				passThrough = 0;
				minimalHit = -0.5;
				explosionShielding = 0.01;
				radius = 0.16;
				visual = "-";
				class DestructionEffects
				{
					ammoExplosionEffect = "";
					class RHS_ERA_Flash
					{
						simulation = "particles";
						type = "RHS_ERA_Flash";
						position = "fx_e36";
						intensity = 0.5;
						interval = 1;
						lifeTime = 0.006;
					};
					class RHS_ERA_Sound
					{
						simulation = "sound";
						type = "RHS_ERA_Explosion_Sound";
						position = "fx_e36";
						intensity = 1;
						interval = 1;
						lifeTime = 1;
					};
					class RHS_ERA_Smoke
					{
						simulation = "particles";
						type = "RHS_ERA_Smoke";
						position = "fx_e36";
						intensity = 0.1;
						interval = 1;
						lifeTime = 0.04;
					};
					class RHS_ERA_Shard
					{
						simulation = "particles";
						type = "RHS_ERA_Shard";
						position = "fx_e36";
						intensity = 1;
						interval = 1;
						lifeTime = 0.03;
					};
				};
			};
			class HitHull: HitHull
			{
				armorComponent = "Hit_Carousel";
			};
			class HitEngine: HitEngine
			{
				armorComponent = "Hit_Engine";
			};
			class HitFuelTank_Left
			{
				armor = -80;
				material = -1;
				name = "Hit_FuelTank_Left";
				armorComponent = "Hit_FuelTank_Left";
				visual = "-";
				passThrough = 0;
				minimalHit = 0.3;
				explosionShielding = 0;
				radius = 0.1;
			};
			class HitFuelTank_Right: HitFuelTank_Left
			{
				name = "Hit_FuelTank_Right";
				armorComponent = "Hit_FuelTank_Right";
			};
			class HitFuel
			{
				armor = 999;
				name = "Hit_Fuel";
				armorComponent = "Hit_Fuel";
				visual = "-";
				passThrough = 0;
				minimalHit = 1;
				explosionShielding = 0;
				radius = 0.01;
				depends = "(HitFuelTank_Left+HitFuelTank_Right)*0.5";
			};
			class HitLTrack: HitLTrack
			{
				armor = -150;
				armorComponent = "Hit_TrackL";
				passThrough = 0;
				material = -1;
				minimalHit = -0.25;
				explosionShielding = 0.5;
				radius = 0.3;
			};
			class HitRTrack: HitRTrack
			{
				armor = -150;
				armorComponent = "Hit_TrackR";
				material = -1;
				passThrough = 0;
				minimalHit = -0.25;
				explosionShielding = 0.5;
				radius = 0.3;
			};
			class smoketube_4_hitpoint
			{
				armor = 1.2;
				material = -1;
				name = "smoketube4";
				visual = "-";
				passThrough = 0;
				minimalHit = 0.08;
				explosionShielding = 0.007;
				depends = "era_23_hitpoint";
			};
			class smoketube_3_hitpoint: smoketube_4_hitpoint
			{
				name = "smoketube3";
				depends = "era_23_hitpoint + smoketube_4_hitpoint";
			};
			class smoketube_2_hitpoint: smoketube_4_hitpoint
			{
				name = "smoketube2";
				depends = "era_22_hitpoint + smoketube_3_hitpoint";
			};
			class smoketube_1_hitpoint: smoketube_4_hitpoint
			{
				name = "smoketube1";
				depends = "era_22_hitpoint + smoketube_2_hitpoint";
			};
			class smoketube_8_hitpoint: smoketube_4_hitpoint
			{
				name = "smoketube8";
				depends = "era_28_hitpoint";
			};
			class smoketube_7_hitpoint: smoketube_4_hitpoint
			{
				name = "smoketube7";
				depends = "era_28_hitpoint + smoketube_8_hitpoint";
			};
			class smoketube_6_hitpoint: smoketube_4_hitpoint
			{
				name = "smoketube6";
				depends = "era_27_hitpoint + smoketube_7_hitpoint";
			};
			class smoketube_5_hitpoint: smoketube_4_hitpoint
			{
				name = "smoketube5";
				depends = "era_27_hitpoint + smoketube_6_hitpoint";
			};
			class mud_1_hitpoint
			{
				armor = 0.8;
				material = -1;
				name = "mud1";
				visual = "-";
				passThrough = 0;
				minimalHit = 0.08;
				explosionShielding = 0.007;
				depends = "era_21_hitpoint";
			};
			class mud_2_hitpoint: mud_1_hitpoint
			{
				name = "mud2";
				depends = "era_22_hitpoint";
			};
			class mud_3_hitpoint: mud_1_hitpoint
			{
				name = "mud3";
				depends = "era_23_hitpoint";
			};
			class mud_4_hitpoint: mud_3_hitpoint
			{
				name = "mud4";
				depends = "era_24_hitpoint";
			};
			class mud_5_hitpoint: mud_1_hitpoint
			{
				name = "mud5";
				depends = "era_26_hitpoint";
			};
			class mud_6_hitpoint: mud_5_hitpoint
			{
				name = "mud6";
				depends = "era_27_hitpoint";
			};
			class mud_7_hitpoint: mud_1_hitpoint
			{
				name = "mud7";
				depends = "era_28_hitpoint";
			};
			class mud_8_hitpoint: mud_7_hitpoint
			{
				name = "mud8";
				depends = "era_29_hitpoint";
			};
			class Hit_Optic_ESSA
			{
				armor = -40;
				explosionShielding = 0;
				name = "Hit_Optic_Agava";
				visual = "vis_optic_ESSA";
				armorComponent = "Hit_Optic_ESSA";
				passThrough = 0;
			};
			class Hit_Optic_NSVT
			{
				armor = -40;
				explosionShielding = 0;
				name = "Hit_Optic_NSVT";
				visual = "vis_optic_1pz3";
				armorComponent = "Hit_Optic_NSVT";
				passThrough = 0;
			};
		};
		class Damage
		{
			tex[] = {};
			mat[] = {"rhsafrf\addons\rhs_t80u\data\rhs_t80u_01.rvmat","rhsafrf\addons\rhs_t80u\data\rhs_dam_t80u_01.rvmat","rhsafrf\addons\rhs_t80u\data\rhs_destr_t80u_01.rvmat","rhsafrf\addons\rhs_t80u\data\rhs_t80u_02.rvmat","rhsafrf\addons\rhs_t80u\data\rhs_dam_t80u_02.rvmat","rhsafrf\addons\rhs_t80u\data\rhs_destr_t80u_02.rvmat","rhsafrf\addons\rhs_t80u\data\rhs_t80u_03.rvmat","rhsafrf\addons\rhs_t80u\data\rhs_dam_t80u_03.rvmat","rhsafrf\addons\rhs_t80u\data\rhs_destr_t80u_03.rvmat","rhsafrf\addons\rhs_t80\data\materials\turret_A.rvmat","rhsafrf\addons\rhs_t80\data\materials\turret_A_dam.rvmat","rhsafrf\addons\rhs_t80\data\materials\turret_destroy.rvmat","a3\data_f\default.rvmat","a3\data_f\default.rvmat","a3\data_f\default_destruct.rvmat"};
		};
		class Attributes: Attributes
		{
			class ObjectTexture: ObjectTexture{};
			class rhs_decalNumber_type: rhs_decalNumber_type{};
			class rhs_decalNumber: rhs_decalNumber{};
			class rhs_ammoslot_1_type: rhs_ammoslot_1_type
			{
				class values
				{
					class rhs_mag_3bm46_10
					{
						name = "$STR_rhs_mag_3bm46";
						value = "rhs_mag_3bm46";
						defaultValue = "rhs_mag_3bm46";
					};
					class rhs_mag_3bm9_10
					{
						name = "$STR_rhs_mag_3bm9";
						value = "rhs_mag_3bm9";
						defaultValue = "rhs_mag_3bm9";
					};
					class rhs_mag_3bm12_10
					{
						name = "$STR_rhs_mag_3bm12";
						value = "rhs_mag_3bm12";
						defaultValue = "rhs_mag_3bm12";
					};
					class rhs_mag_3bm15_10
					{
						name = "$STR_rhs_mag_3bm15";
						value = "rhs_mag_3bm15";
						defaultValue = "rhs_mag_3bm15";
					};
					class rhs_mag_3bm17_10
					{
						name = "$STR_rhs_mag_3bm17";
						value = "rhs_mag_3bm17";
						defaultValue = "rhs_mag_3bm17";
					};
					class rhs_mag_3bm22_10
					{
						name = "$STR_rhs_mag_3bm22";
						value = "rhs_mag_3bm22";
						defaultValue = "rhs_mag_3bm22";
					};
					class rhs_mag_3bm29_10
					{
						name = "$STR_rhs_mag_3bm29";
						value = "rhs_mag_3bm29";
						defaultValue = "rhs_mag_3bm29";
					};
					class rhs_mag_3bm26_10
					{
						name = "$STR_rhs_mag_3bm26";
						value = "rhs_mag_3bm26";
						defaultValue = "rhs_mag_3bm26";
					};
					class rhs_mag_3bm32_10
					{
						name = "$STR_rhs_mag_3bm32";
						value = "rhs_mag_3bm32";
						defaultValue = "rhs_mag_3bm32";
					};
					class rhs_mag_3bm42_10
					{
						name = "$STR_rhs_mag_3bm42";
						value = "rhs_mag_3bm42";
						defaultValue = "rhs_mag_3bm42";
					};
					class rhs_mag_3bm42m_10
					{
						name = "$STR_rhs_mag_3bm42m";
						value = "rhs_mag_3bm42m";
						defaultValue = "rhs_mag_3bm42m";
					};
				};
			};
			class rhs_ammoslot_1: rhs_ammoslot_1{};
			class rhs_ammoslot_2_type: rhs_ammoslot_2_type
			{
				class values
				{
					class rhs_mag_3bk31_8
					{
						name = "$STR_rhs_mag_3bk31";
						value = "rhs_mag_3bk31";
						defaultValue = "rhs_mag_3bk31";
					};
					class rhs_mag_3bk12_8
					{
						name = "$STR_rhs_mag_3bk12";
						value = "rhs_mag_3bk12";
						defaultValue = "rhs_mag_3bk12";
					};
					class rhs_mag_3bk14_8
					{
						name = "$STR_rhs_mag_3bk14";
						value = "rhs_mag_3bk14";
						defaultValue = "rhs_mag_3bk14";
					};
					class rhs_mag_3bk18_8
					{
						name = "$STR_rhs_mag_3bk18";
						value = "rhs_mag_3bk18";
						defaultValue = "rhs_mag_3bk18";
					};
					class rhs_mag_3bk18m_8
					{
						name = "$STR_rhs_mag_3bk18m";
						value = "rhs_mag_3bk18m";
						defaultValue = "rhs_mag_3bk18m";
					};
					class rhs_mag_3bk21_8
					{
						name = "$STR_rhs_mag_3bk21";
						value = "rhs_mag_3bk21";
						defaultValue = "rhs_mag_3bk21";
					};
					class rhs_mag_3bk29_8
					{
						name = "$STR_rhs_mag_3bk29";
						value = "rhs_mag_3bk29";
						defaultValue = "rhs_mag_3bk29";
					};
				};
			};
			class rhs_ammoslot_2: rhs_ammoslot_2{};
			class rhs_ammoslot_3_type: rhs_ammoslot_3_type
			{
				class values
				{
					class rhs_mag_3of26_6
					{
						name = "$STR_rhs_mag_3of26";
						value = "rhs_mag_3of26";
						defaultValue = "rhs_mag_3of26";
					};
					class rhs_mag_3of11_6
					{
						name = "$STR_rhs_mag_3of11";
						value = "rhs_mag_3of11";
						defaultValue = "rhs_mag_3of11";
					};
				};
			};
			class rhs_ammoslot_3: rhs_ammoslot_3{};
			class rhs_ammoslot_4_type: rhs_ammoslot_4_type
			{
				class values
				{
					class rhs_mag_9m119m_6
					{
						name = "$STR_rhs_mag_9m119m";
						value = "rhs_mag_9m119m";
						defaultValue = "rhs_mag_9m119m";
					};
					class rhs_mag_9m119_6
					{
						name = "$STR_rhs_mag_9m119";
						value = "rhs_mag_9m119";
						defaultValue = "rhs_mag_9m119";
					};
					class rhs_mag_9m119f_6
					{
						name = "$STR_rhs_mag_9m119f";
						value = "rhs_mag_9m119f";
						defaultValue = "rhs_mag_9m119f";
					};
				};
			};
			class rhs_ammoslot_4: rhs_ammoslot_4{};
		};
		class EventHandlers: EventHandlers
		{
			class RHS_EventHandlers
			{
				init = "_this call RHS_fnc_t80_init;";
				fired = "_this call RHS_fnc_t80_autoloader;";
				killed = "[_this select 0,'rhs_Wreck_T80U_turret_F'] call rhs_fnc_turretBlow";
				engine = "[_this select 0,_this select 1,20] call rhs_fnc_engineStartupDelay;_this call rhs_fnc_engineCheckDamage;";
				getOut = "_this call rhs_fnc_hatchAbandon";
			};
		};
	};
}; 