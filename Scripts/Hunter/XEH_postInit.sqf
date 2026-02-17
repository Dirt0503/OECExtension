if (!(hasInterface )) exitWith {};
[] spawn
{
	waitUntil { !isNull findDisplay 46 };
	_isHudActive = ctrlShown ((findDisplay 46) displayCtrl 041003);

	if (_isHudActive) then 
	{
		ctrlDelete ((findDisplay 46) displayCtrl 041003);
		ctrlDelete ((findDisplay 46) displayCtrl 080503);
		ctrlDelete ((findDisplay 46) displayCtrl 080504);
		sleep 0.5;
	};

	_WBK_AdvancedArmour = findDisplay 46 ctrlCreate ["RscStructuredText", 041003];
	_WBK_AdvancedArmour ctrlSetPosition [(-0.4 * safezoneW + safezoneX), safeZoneY + safeZoneH * 0.905, safeZoneW, safeZoneH * 0.04];
	_WBK_AdvancedArmour ctrlCommit 0;
	_WBK_AdvancedArmourStimArmor = findDisplay 46 ctrlCreate ["RscStructuredText", 080503];
	_WBK_AdvancedArmourStimArmor ctrlSetPosition [(-0.4 * safezoneW + safezoneX), safeZoneY + safeZoneH * 0.95, safeZoneW, safeZoneH * 0.04];
	_WBK_AdvancedArmourStimArmor ctrlCommit 0;
	_TAG_Picture_SHIELD = findDisplay 46 ctrlCreate ["RscPictureKeepAspect", 080504]; 
    _TAG_Picture_SHIELD ctrlSetPosition [0.45, 0.45,0.1,0.1];  
    _TAG_Picture_SHIELD ctrlSetTextColor [1, 1, 1, 1];  
    _TAG_Picture_SHIELD ctrlSetText "\a3\ui_f\data\IGUI\Cfg\Cursors\attack_ca.paa"; 
    _TAG_Picture_SHIELD ctrlCommit 0; 

	_WBK_ExoModHud = 
	[{
		_array = _this select 0;
		_WBK_AdvancedArmour = _array select 0;
		_WBK_AdvancedArmourStimArmor = _array select 1;
		_TAG_Picture_SHIELD = _array select 2;
	    _unit = missionNamespace getVariable["bis_fnc_moduleRemoteControl_unit", player];

		if (_unit isKindOf "OEC_Overwatch_Unit_HunterSynth") then 
		{
			if ((_unit isKindOf "OEC_Overwatch_Unit_HunterSynth") and (animationState _unit != "hunter_FirePosition_Fire") and (animationState _unit != "hunter_FirePosition_Out") and (animationState _unit != "hunter_FirePosition_Loop") and (animationState _unit != "hunter_FirePosition_Pre")) then 
			{
				_TAG_Picture_SHIELD ctrlSetText ""; 
			}else{
				_TAG_Picture_SHIELD ctrlSetText "\a3\ui_f\data\IGUI\Cfg\Cursors\attack_ca.paa"; 
				_TAG_Picture_SHIELD ctrlCommit 0; 
			};

			_var1 = _unit getVariable "WBK_StriderArmor";

			switch true do 
			{
				case (_unit isKindOf "OEC_Overwatch_Unit_HunterSynth"): 
				{
					if (isNil {_unit getVariable "WBK_HunterCanCharge"}) then 
					{
						_WBK_AdvancedArmourStimArmor ctrlSetStructuredText parseText format["<t color='#fcffee' align='center' size='1.31'>Main Gun: %1, Charge: Ready</t>",_unit getVariable "WBK_StriderRounds"];
					}else{
						_WBK_AdvancedArmourStimArmor ctrlSetStructuredText parseText format["<t color='#fcffee' align='center' size='1.31'>Main Gun: %1, Charge: </t><t color='#CB0000' align='center' size='1.31'>RELOADING</t>",_unit getVariable "WBK_StriderRounds"];
					};
				};
			};

			if (_var1 < 25) then 
			{
				_WBK_AdvancedArmour ctrlSetStructuredText parseText format["<t color='#BE0000' align='center' size='1.9'>Health: %1</t>",_unit getVariable "WBK_StriderArmor"];
			} else {
				if (_var1 < 50) then 
				{
					_WBK_AdvancedArmour ctrlSetStructuredText parseText format["<t color='#FF9A29' align='center' size='1.9'>Health: %1</t>",_unit getVariable "WBK_StriderArmor"];
				} else {
					_WBK_AdvancedArmour ctrlSetStructuredText parseText format["<t color='#fcffee' align='center' size='1.9'>Health: %1</t>",_unit getVariable "WBK_StriderArmor"];
				};
			};
		} else {
		_WBK_AdvancedArmour ctrlSetText "";
		_WBK_AdvancedArmourStimArmor ctrlSetText "";
		_TAG_Picture_SHIELD ctrlSetText ""; 
		};
	}, 0.001, [_WBK_AdvancedArmour,_WBK_AdvancedArmourStimArmor, _TAG_Picture_SHIELD]] call CBA_fnc_addPerFrameHandler;

	(findDisplay 46) displayAddEventHandler ["MouseButtonDown", 
	{ 
		_unit = missionNamespace getVariable["bis_fnc_moduleRemoteControl_unit", player];

		if (!(_unit isKindOf "OEC_Overwatch_Unit_HunterSynth")) exitWith {};

		if ((_this select 1 == 0) and (_unit getVariable "WBK_StriderRounds" > 0)) exitWith 
		{
			switch true do 
			{
				case (_unit isKindOf "OEC_Overwatch_Unit_HunterSynth"): 
				{
					if (!(isNil {_unit getVariable "BlockFireAbility_WBK"}) or !(alive _unit) or (animationState _unit == "hunter_scanLocation") or (animationState _unit == "hunter_FirePosition_Fire") or (animationState _unit == "hunter_charge_crash") or (animationState _unit == "hunter_charge_loop") or (animationState _unit == "hunter_charge_start") or (animationState _unit == "hunter_charge_finish") or (animationState _unit == "hunter_die_1") or (animationState _unit == "hunter_die_2") or (animationState _unit == "hunter_SyncAnim") or (animationState _unit == "hunter_melee") or !(isTouchingGround _unit) or (animationState _unit == "hunter_stagger") or (animationState _unit == "hunter_hitHard") or (animationState _unit == "hunter_FirePosition_Out") or (animationState _unit == "hunter_FirePosition_Fire") or (animationState _unit == "hunter_FirePosition_Pre")) exitWith {};
					if (animationState _unit != "hunter_FirePosition_Loop") exitWith {systemChat "Gun is not ready";};
					_veh = "#particlesource" createVehicleLocal (screenToWorld [0.5, 0.5]); _veh call WBK_CalculatePlayerCameraCrosshair; _veh spawn {sleep 2; deleteVehicle _this;};
					[_unit,_unit getVariable "WBK_SynthObjects", _veh] spawn WBK_SynthFire_AI_Hunter_PLAYER;
				};
			};
		};

		if (_this select 1 == 1) exitWith 
		{
			switch true do 
			{
				case (_unit isKindOf "OEC_Overwatch_Unit_HunterSynth"): 
				{
					if (!(alive _unit) or (animationState _unit == "hunter_scanLocation") or (animationState _unit == "hunter_charge_crash") or (animationState _unit == "hunter_charge_loop") or (animationState _unit == "hunter_charge_start") or (animationState _unit == "hunter_charge_finish") or (animationState _unit == "hunter_die_1") or (animationState _unit == "hunter_die_2") or (animationState _unit == "hunter_SyncAnim") or (animationState _unit == "hunter_melee") or !(isTouchingGround _unit) or (animationState _unit == "hunter_stagger") or (animationState _unit == "hunter_hitHard") or (animationState _unit == "hunter_FirePosition_Out") or (animationState _unit == "hunter_FirePosition_Fire") or (animationState _unit == "hunter_FirePosition_Pre")) exitWith {};
					if (animationState _unit == "hunter_FirePosition_Loop") exitWith 
					{
						[_unit, "hunter_FirePosition_Out"] remoteExec ["switchMove", 0];
					};
					[_unit, "hunter_FirePosition_Pre"] remoteExec ["switchMove", 0]; 
					[_unit,selectRandom ["WBK_hunter_alert1","WBK_hunter_alert2","WBK_hunter_alert3"],100] call CBA_fnc_GlobalSay3D;
				};
			};
		};

		if (_this select 1 == 2) exitWith 
		{
			switch true do 
			{
				case (_unit isKindOf "OEC_Overwatch_Unit_HunterSynth"): 
				{
					if (!(alive _unit) or (animationState _unit == "hunter_scanLocation") or (animationState _unit == "hunter_charge_crash") or (animationState _unit == "hunter_charge_loop") or (animationState _unit == "hunter_charge_start") or (animationState _unit == "hunter_charge_finish") or (animationState _unit == "hunter_die_1") or (animationState _unit == "hunter_die_2") or (animationState _unit == "hunter_SyncAnim") or (animationState _unit == "hunter_melee") or !(isTouchingGround _unit) or (animationState _unit == "hunter_stagger") or (animationState _unit == "hunter_hitHard") or (animationState _unit == "hunter_FirePosition_Out") or (animationState _unit == "hunter_FirePosition_Fire") or (animationState _unit == "hunter_FirePosition_Pre")) exitWith {};
					_unit spawn WBK_HunterCloseAttack_player;
				};
			};
		};
	}];
   
   sleep 2;
   switch true do {
        case (player isKindOf "OEC_Overwatch_Unit_HunterSynth"): {[["OB_SynthControlls", "HunterSynth_ControllsScheme"], 15,"",35,"",true,true,false,true] call BIS_fnc_advHint; titleText ["<t size='1.5'>TEST OEC HUNTER BUILD.</t>", "PLAIN DOWN", -1, true, true]; };
   };
};