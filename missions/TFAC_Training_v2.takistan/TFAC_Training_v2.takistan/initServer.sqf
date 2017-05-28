["Initialize", [true]] call BIS_fnc_dynamicGroups;

{
		if (isMultiplayer) then
		{
			_x enableSimulationGlobal false;
		}
		else
		{
			_x enableSimulation false;
		};

} forEach (allMissionObjects "ThingX");

/*
[west,"TFAC_Platoon_Commander_01"] call bis_fnc_addrespawninventory;
[west,"TFAC_Platoon_Medic_01"] call bis_fnc_addrespawninventory;
[west,"TFAC_Platoon_Sergeant_01"] call bis_fnc_addrespawninventory;
[west,"TFAC_Platoon_Signaller_01"] call bis_fnc_addrespawninventory;
[west,"TFAC_Section_2IC_01"] call bis_fnc_addrespawninventory;
[west,"TFAC_Section_Combat_Medic_01"] call bis_fnc_addrespawninventory;
[west,"TFAC_Section_Commander_01"] call bis_fnc_addrespawninventory;
[west,"TFAC_Section_Machinegunner_01"] call bis_fnc_addrespawninventory;
[west,"TFAC_Section_Marksman_01"] call bis_fnc_addrespawninventory;
[west,"TFAC_Section_Marksman_02"] call bis_fnc_addrespawninventory;
[west,"TFAC_Section_Rifleman_01"] call bis_fnc_addrespawninventory;
[west,"TFAC_Section_Rifleman_02"] call bis_fnc_addrespawninventory;
*/











