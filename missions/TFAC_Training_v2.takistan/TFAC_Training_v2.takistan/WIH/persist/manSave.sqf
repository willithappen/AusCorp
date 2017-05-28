[] spawn {
	_pdw = ["new", "inidbi"] call OO_PDW;
	["setDbName", "TFAC_Morbus_v1"] call _pdw;

	_includeType =  ["Box_IND_AmmoVeh_F","Box_IND_Wps_F","Box_IND_WpsLaunch_F","Box_IND_Ammo_F","Box_IND_WpsSpecial_F","Box_IND_Support_F","Box_IND_AmmoOrd_F","Box_IND_Grenades_F","Box_East_AmmoOrd_F",
	"Land_HelipadEmpty_F","Land_RattanTable_01_F","Land_MapBoard_F","Fridge_01_open_F","Land_WaterCooler_01_new_F",
	"ALIVE_IEDLandBig_Remote_Ammo", "ALIVE_DemoCharge_Remote_Ammo","ALIVE_IEDUrbanSmall_Remote_Ammo","ALIVE_IEDLandSmall_Remote_Ammo",
	"CBA_NamespaceDummy",
	"groundWeaponHolder","WeaponHolder_Single_limited_item_F","WeaponHolder_Single_limited_magazine_F","WeaponHolder_Single_limited_weapon_F",
	"Land_Cargo20_military_ruins_F","Land_CncBarrier_F"];
	["setIncludingTypes",[_includeType]] call _pdw;

	["setExcludingMarkers", ["OO_NoSave"]] call _pdw;

	"saveObjects" call _pdw;
};