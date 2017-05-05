player setVariable ["Ace_medical_medicClass", 1];
setViewDistance 2000;
setObjectViewDistance 1800;

/*	if (([position player select 0,position player select 1,0] distance getpos LHD_ADF_1) > 250) then {} else {execVM "AusCorp\gear\misc\00_def.sqf"; [LHD_ADF_1, player] call CUP_fnc_moveInCargo; player groupChat "LHD Spawn - Bad Spawn"};

	if (([position player select 0,position player select 1,0] distance getmarkerPos "respawn_west") < 100) then {execVM "AusCorp\gear\misc\00_def.sqf"; [LHD_ADF_1, player] call CUP_fnc_moveInCargo; player groupChat "LHD Spawn - Respawn"};
*/