{if ((typeOf _x == 'rhsusf_army_ocp_officer') && (!isPlayer _x)) then {deleteVehicle _x}} forEach allUnits;
[MedicalData8,3] call BIS_fnc_dataTerminalAnimate;
sleep 5;
_group8=createGroup west;
'rhsusf_army_ocp_officer' createUnit [getmarkerPos 'PatientSpawn8', _group8,'pat1=this; dostop pat1'];
[pat1, selectRandom[0.3,0.5,0.7,0.9], "leg_r", selectrandom ["stab","bullet","falling"]] call ace_medical_fnc_addDamageToUnit;
[pat1, selectRandom[0.3,0.5,0.7,0.9], "leg_l", selectrandom ["stab","bullet","falling"]] call ace_medical_fnc_addDamageToUnit;
[pat1, selectRandom[0.3,0.5,0.7,0.9], "body", selectrandom ["stab","bullet","falling"]] call ace_medical_fnc_addDamageToUnit;
[pat1, selectRandom[0.3,0.5,0.7,0.9], "head", selectrandom ["stab","bullet","falling"]] call ace_medical_fnc_addDamageToUnit;
[pat1, selectRandom[0.3,0.5,0.7,0.9], "hand_r", selectrandom ["stab","bullet","falling"]] call ace_medical_fnc_addDamageToUnit;
[pat1, selectRandom[0.3,0.5,0.7,0.9], "hand_l", selectrandom ["stab","bullet","falling"]] call ace_medical_fnc_addDamageToUnit;
[pat1] call ace_medical_fnc_handleDamage_advancedSetDamage;
[MedicalData8,0] call BIS_fnc_dataTerminalAnimate;
hint 'Your patient is ready';


//the first selctrandom chooses a randomish damage from a small one to a large one, the second selectrandom chooses the type of damage.