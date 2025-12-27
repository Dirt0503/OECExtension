[] spawn
{ 
    waitUntil {!isNil "WBK_ECHO_HelmetArray"};

    WBK_ECHO_HelmetArray append [
        "OEC_Overwatch_Helmet_Soldier",
        "OEC_Overwatch_Helmet_AT",
        "OEC_Overwatch_Helmet_Medic",
        "OEC_Overwatch_Helmet_Recon",
        "OEC_Overwatch_Helmet_Airwatch",
        "OEC_Overwatch_Helmet_TL",
        "OEC_Overwatch_Helmet_Elite",
        "OEC_Overwatch_Helmet_Recon_TL",
        "OEC_Overwatch_Helmet_Assassin_1",
        "OEC_Overwatch_Helmet_Assassin_2",
        "OEC_Overwatch_Helmet_Wallhammer",
        "OEC_Overwatch_Helmet_APF"
    ];
};

[ 
    "WBK_StealthSuit_Rel", 
    "EDITBOX", 
    ["Cloak reload","How much must a unit wait untill using another cloak"],
    ["Our Benefactors","2) Ranger Cloak"],
    60,
    1,
    {   
        params ["_value"];  
        _number = parseNumber _value;
		WBK_StealthSuits_Energy_Reload = _number;
    }
] call CBA_fnc_addSetting;

[ 
    "WBK_HL2_RadioPacks_setting", 
    "EDITBOX", 
    ["Radio backpacks","Backpacks which can call in airwatch scans"],
    ["Our Benefactors","1) Airwatch Scan"],
    "['OrdenalBackpack','HL2_MPF_Radio', 'OEC_Overwatch_Backpack_LR_Black']",
    1,
    {   
        params ["_value"];  
        _arr = parseSimpleArray _value;
		WBK_HL2_RadioPacks = _arr;
    }
] call CBA_fnc_addSetting;