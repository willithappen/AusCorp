if (hasInterface) then {
	player setVariable ["Ace_medical_medicClass", 1];


/*	if (([position player select 0,position player select 1,0] distance getpos LHD_ADF_1) > 250) then {} else {execVM "AusCorp\gear\misc\00_def.sqf"; [LHD_ADF_1, player] call CUP_fnc_moveInCargo; player groupChat "LHD Spawn - Bad Spawn"};

	if (([position player select 0,position player select 1,0] distance getmarkerPos "respawn_west") < 100) then {execVM "AusCorp\gear\misc\00_def.sqf"; [LHD_ADF_1, player] call CUP_fnc_moveInCargo; player groupChat "LHD Spawn - Respawn"};
*/

setViewDistance 1600;
setObjectViewDistance 1200;

/*
_unit = player;
_unit setUnitLoadout [['ADFU_f88sa2_camo','','','ADFU_acog_ta31_t',['ADFU_30Rnd_aug',30],[],''],[],[],
						['ASF_AMCU_C',[['ACE_elasticBandage',24],['ACE_quikclot',10],['ACE_CableTie',2],['ACE_EarPlugs',1],['ACE_epinephrine',2],['ACE_Flashlight_XL50',1],['ACE_MapTools',1],['ACE_morphine',10],['ACE_packingBandage',25],['ACE_tourniquet',4]]],
						['cpc_Fastbelt_mc',[['ADFU_30Rnd_aug',9,30],['MiniGrenade',2,1],['ACE_M84',2,1],['SmokeShell',2,1]]],[],'WIH_ADF_AIRFRAME','G_Combat',['Binocular','','','',[],[],''],
						['ItemMap','','tf_anprc152','ItemCompass','ItemWatch','']];
reload _unit;
};
*/