[] spawn
{ 
    waitUntil {!isNil "WBK_ECHO_HelmetArray"};

    WBK_ECHO_HelmetArray append [
        "OEC_Overwatch_Helmet_Soldier",
        "OEC_Overwatch_Helmet_AT",
        "OEC_Overwatch_Helmet_Medic",
        "OEC_Overwatch_Helmet_Recon",
        "OEC_Overwatch_Helmet_TL",
        "OEC_Overwatch_Helmet_Elite",
        "OEC_Overwatch_Helmet_Recon_TL",
        "OEC_Overwatch_Helmet_Assassin_1",
        "OEC_Overwatch_Helmet_Assassin_2",
        "OEC_Overwatch_Helmet_Wallhammer",
        "OEC_Overwatch_Helmet_APF"
    ];
};