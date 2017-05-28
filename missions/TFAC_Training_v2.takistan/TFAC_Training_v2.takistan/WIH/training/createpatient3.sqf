{if ((typeOf _x == 'rhsusf_army_ucp_rifleman_1stcav') && (!isPlayer _x)) then {deleteVehicle _x}} forEach allUnits;
[MedicalData3,3] call BIS_fnc_dataTerminalAnimate;
sleep 5;
_group3=createGroup west;
'rhsusf_army_ucp_rifleman_1stcav' createUnit [getmarkerPos 'PatientSpawn3', _group3,'pat=this; dostop pat'];
[pat, selectRandom[0.3,0.5,0.7,0.9], "leg_r", selectrandom ["stab","bullet","falling"]] call ace_medical_fnc_addDamageToUnit;
[pat, selectRandom[0.3,0.5,0.7,0.9], "leg_l", selectrandom ["stab","bullet","falling"]] call ace_medical_fnc_addDamageToUnit;
[pat, selectRandom[0.3,0.5,0.7,0.9], "body", selectrandom ["stab","bullet","falling"]] call ace_medical_fnc_addDamageToUnit;
[pat, selectRandom[0.3,0.5,0.7,0.9], "head", selectrandom ["stab","bullet","falling"]] call ace_medical_fnc_addDamageToUnit;
[pat, selectRandom[0.3,0.5,0.7,0.9], "hand_r", selectrandom ["stab","bullet","falling"]] call ace_medical_fnc_addDamageToUnit;
[pat, selectRandom[0.3,0.5,0.7,0.9], "hand_l", selectrandom ["stab","bullet","falling"]] call ace_medical_fnc_addDamageToUnit;
[pat] call ace_medical_fnc_handleDamage_advancedSetDamage;
[MedicalData3,0] call BIS_fnc_dataTerminalAnimate;
hint 'Your patient is ready';


//the first selctrandom chooses a randomish damage from a small one to a large one, the second selectrandom chooses the type of damage.