class CfgRoles
{
	class Section
	{
		displayName = "Standard";
		icon = "a3\Ui_f\data\GUI\Cfg\RespawnRoles\recon_ca.paa";
	};
	class Extra
	{
		displayName = "Extra";
		icon = "a3\Ui_f\data\GUI\Cfg\RespawnRoles\support_ca.paa";
	};
	class Platoon
	{
		displayName = "Platoon";
		icon = "a3\Ui_f\data\GUI\Cfg\RespawnRoles\assault_ca.paa";
	};
};

class CfgRespawnInventory
{
////////////////
// PLATOON ROLES
////////////////
	class TFAC_Platoon_Commander_01
	{
		displayName = "Platoon Leader";
		icon = "\A3\ui_f\data\map\VehicleIcons\iconMan_ca.paa";
		show = "side group _this == west";
		role = "Platoon";
			// Exported from Arsenal by Sgt. Davis
			uniformClass = "ASF_AMCU_C";
			backpack = "tf_rt1523g_rhs";
			weapons[] = {"ADFU_f88sa2_camo","Binocular","Throw","Put"};
			magazines[] = {"ADFU_30Rnd_aug","ADFU_30Rnd_aug","ADFU_30Rnd_aug","ADFU_30Rnd_aug","ADFU_30Rnd_aug","ADFU_30Rnd_aug","ADFU_30Rnd_aug","ADFU_30Rnd_aug","ADFU_30Rnd_aug","MiniGrenade","MiniGrenade","ACE_M84","ACE_M84","SmokeShell","SmokeShell","SmokeShellBlue","SmokeShellGreen","Chemlight_green","Chemlight_green"};
			items[] = {"ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_CableTie","ACE_CableTie","ACE_EarPlugs","ACE_epinephrine","ACE_epinephrine","ACE_Flashlight_XL50","ACE_MapTools","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet"};
			linkedItems[] = {"cpc_communicationsbelt_mc","WIH_ADF_AIRFRAME","","ItemMap","ItemCompass","ItemWatch","tf_anprc152","ItemcTab"};
	};
	class TFAC_Platoon_Medic_01
	{
		displayName = "Platoon Medic";
		icon = "\A3\ui_f\data\map\VehicleIcons\iconMan_ca.paa";
		show = "side group _this == west";
		role = "Platoon";
			// Exported from Arsenal by Sgt. Davis
			uniformClass = "ASF_AMCU_C";
			backpack = "ASF_Tortilla_AMCU";
			weapons[] = {"ADFU_f88sa2_camo","Binocular","Throw","Put"};
			magazines[] = {"ADFU_30Rnd_aug","ADFU_30Rnd_aug","ADFU_30Rnd_aug","ADFU_30Rnd_aug","ADFU_30Rnd_aug","ADFU_30Rnd_aug","ADFU_30Rnd_aug","ADFU_30Rnd_aug","ADFU_30Rnd_aug","MiniGrenade","MiniGrenade","ACE_M84","ACE_M84","SmokeShell","SmokeShell","SmokeShellBlue","SmokeShellGreen","Chemlight_green","SmokeShellYellow"};
			items[] = {"ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_CableTie","ACE_CableTie","ACE_EarPlugs","ACE_epinephrine","ACE_epinephrine","ACE_Flashlight_XL50","ACE_MapTools","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_bloodIV_250","ACE_bloodIV_250","ACE_bloodIV_250","ACE_bloodIV_250","ACE_bloodIV_250","ACE_bloodIV_250","ACE_bloodIV_250","ACE_bloodIV_250","ACE_bloodIV_500","ACE_bloodIV_500","ACE_bloodIV_500","ACE_bloodIV_500","ACE_bloodIV","ACE_bloodIV","ACE_bloodIV","ACE_bloodIV","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_salineIV_250","ACE_salineIV_250","ACE_salineIV_250","ACE_salineIV_250","ACE_salineIV_500","ACE_salineIV_500","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_surgicalKit"};
			linkedItems[] = {"cpc_medicalbelt_mc","WIH_ADF_AIRFRAME","G_Combat","ItemMap","ItemCompass","ItemWatch","tf_anprc152","ItemAndroid"};
	};
	class TFAC_Platoon_Sergeant_01
	{
		displayName = "Platoon Sergeant";
		icon = "\A3\ui_f\data\map\VehicleIcons\iconMan_ca.paa";
		show = "side group _this == west";
		role = "Platoon";
			// Exported from Arsenal by Sgt. Davis
			uniformClass = "ASF_AMCU_C";
			backpack = "ASF_Compact_AMCU";
			weapons[] = {"ADFU_f88sa2_camo","Binocular","Throw","Put"};
			magazines[] = {"ADFU_30Rnd_aug","ADFU_30Rnd_aug","ADFU_30Rnd_aug","ADFU_30Rnd_aug","ADFU_30Rnd_aug","ADFU_30Rnd_aug","ADFU_30Rnd_aug","ADFU_30Rnd_aug","ADFU_30Rnd_aug","MiniGrenade","MiniGrenade","ACE_M84","ACE_M84","SmokeShell","SmokeShell","SmokeShellBlue","SmokeShellBlue","SmokeShellGreen","Chemlight_green","SmokeShellRed"};
			items[] = {"ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_CableTie","ACE_CableTie","ACE_EarPlugs","ACE_epinephrine","ACE_epinephrine","ACE_Flashlight_XL50","ACE_MapTools","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet"};
			linkedItems[] = {"cpc_tlbelt_mc","WIH_ADF_AIRFRAME","G_Tactical_Clear","ItemMap","ItemCompass","ItemWatch","tf_anprc152","ItemAndroid"};
	};
	class TFAC_Platoon_Signaller_01
	{
		displayName = "Platoon Signaller";
		icon = "\A3\ui_f\data\map\VehicleIcons\iconMan_ca.paa";
		show = "side group _this == west";
		role = "Platoon";
			// Exported from Arsenal by Sgt. Davis
			uniformClass = "ASF_AMCU_C";
			backpack = "tf_rt1523g_big_rhs";
			weapons[] = {"ADFU_f88sa2_camo","Binocular","Throw","Put"};
			magazines[] = {"ADFU_30Rnd_aug","ADFU_30Rnd_aug","ADFU_30Rnd_aug","ADFU_30Rnd_aug","ADFU_30Rnd_aug","ADFU_30Rnd_aug","ADFU_30Rnd_aug","ADFU_30Rnd_aug","ADFU_30Rnd_aug","MiniGrenade","MiniGrenade","ACE_M84","ACE_M84","SmokeShell","SmokeShell","SmokeShellBlue","SmokeShellBlue","Chemlight_green","ACE_HandFlare_Green","ACE_HandFlare_Green","ACE_HandFlare_White","ACE_HandFlare_White","SmokeShell","SmokeShell","SmokeShell","ACE_Chemlight_HiRed","ACE_Chemlight_HiOrange"};
			items[] = {"ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_CableTie","ACE_CableTie","ACE_EarPlugs","ACE_epinephrine","ACE_epinephrine","ACE_Flashlight_XL50","ACE_MapTools","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet"};
			linkedItems[] = {"cpc_communications_mc","WIH_ADF_AIRFRAME","G_Combat","ItemMap","ItemCompass","ItemWatch","tf_anprc152","ItemAndroid","CUP_NVG_PVS14"};
	};

////////////////
// SECTION ROLES
////////////////
	class TFAC_Section_Commander_01
	{
		displayName = "Section Commander";
		icon = "\A3\ui_f\data\map\VehicleIcons\iconMan_ca.paa";
		show = "side group _this == west";
		role = "Section";
			// Exported from Arsenal by Sgt. Davis
			uniformClass = "ASF_AMCU_C";
			backpack = "ASF_Compact_AMCU";
			weapons[] = {"ADFU_f88sa2_camo","ACE_Vector","Throw","Put"};
			magazines[] = {"ADFU_30Rnd_aug","ADFU_30Rnd_aug","ADFU_30Rnd_aug","ADFU_30Rnd_aug","ADFU_30Rnd_aug","ADFU_30Rnd_aug","ADFU_30Rnd_aug","ADFU_30Rnd_aug","ADFU_30Rnd_aug","MiniGrenade","MiniGrenade","ACE_M84","ACE_M84","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShell","CUP_HandGrenade_M67","CUP_HandGrenade_M67","ACE_M84","ACE_M84"};
			items[] = {"ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_CableTie","ACE_CableTie","ACE_EarPlugs","ACE_epinephrine","ACE_epinephrine","ACE_Flashlight_XL50","ACE_MapTools","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet"};
			linkedItems[] = {"cpc_tlbelt_mc","WIH_ADF_AIRFRAME","G_Tactical_Clear","ItemMap","ItemCompass","ItemWatch","tf_anprc152","ItemAndroid"};
	};
	class TFAC_Section_2IC_01
	{
		displayName = "Section 2IC";
		icon = "\A3\ui_f\data\map\VehicleIcons\iconMan_ca.paa";
		show = "side group _this == west";
		role = "Section";
			// Exported from Arsenal by Sgt. Davis
			uniformClass = "ASF_AMCU_C";
			backpack = "ASF_Compact_AMCU";
			weapons[] = {"ADFU_f88sa2_gl_camo","ACE_Vector","Throw","Put"};
			magazines[] = {"MiniGrenade","MiniGrenade","ACE_M84","ACE_M84","SmokeShell","SmokeShell","ADFU_30Rnd_aug","ADFU_30Rnd_aug","ADFU_30Rnd_aug","ADFU_30Rnd_aug","ADFU_30Rnd_aug","ADFU_30Rnd_aug","ADFU_30Rnd_aug","ADFU_30Rnd_aug","ADFU_30Rnd_aug","CUP_HandGrenade_M67","CUP_HandGrenade_M67","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","ACE_M84","ACE_M84"};
			items[] = {"ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_CableTie","ACE_CableTie","ACE_EarPlugs","ACE_epinephrine","ACE_epinephrine","ACE_Flashlight_XL50","ACE_MapTools","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet"};
			linkedItems[] = {"cpc_tlbelt_mc","WIH_ADF_AIRFRAME","G_Tactical_Clear","ItemMap","ItemCompass","ItemWatch","tf_anprc152","ItemAndroid"};
	};
	class TFAC_Section_Combat_Medic_01
	{
		displayName = "Section Combat Medic";
		icon = "\A3\ui_f\data\map\VehicleIcons\iconMan_ca.paa";
		show = "side group _this == west";
		role = "Section";
			// Exported from Arsenal by Sgt. Davis
			uniformClass = "ASF_AMCU_C";
			backpack = "ASF_Compact_AMCU";
			weapons[] = {"ADFU_f88sa2_camo","Binocular","Throw","Put"};
			magazines[] = {"ADFU_30Rnd_aug","ADFU_30Rnd_aug","ADFU_30Rnd_aug","ADFU_30Rnd_aug","ADFU_30Rnd_aug","ADFU_30Rnd_aug","ADFU_30Rnd_aug","ADFU_30Rnd_aug","ADFU_30Rnd_aug","MiniGrenade","MiniGrenade","ACE_M84","ACE_M84","SmokeShell","SmokeShell"};
			items[] = {"ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_CableTie","ACE_CableTie","ACE_EarPlugs","ACE_epinephrine","ACE_epinephrine","ACE_Flashlight_XL50","ACE_MapTools","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_bloodIV_250","ACE_bloodIV_250","ACE_bloodIV_250","ACE_bloodIV_250","ACE_bloodIV_250","ACE_bloodIV_250","ACE_bloodIV_250","ACE_bloodIV_250","ACE_bloodIV_500","ACE_bloodIV_500","ACE_bloodIV_500","ACE_bloodIV_500","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet"};
			linkedItems[] = {"cpc_medicalbelt_mc","WIH_ADF_AIRFRAME","G_Tactical_Clear","ItemMap","ItemCompass","ItemWatch","tf_anprc152","ItemAndroid"};
	};
	class TFAC_Section_Machinegunner_01
	{
		displayName = "Section Machinegunner";
		icon = "\A3\ui_f\data\map\VehicleIcons\iconMan_ca.paa";
		show = "side group _this == west";
		role = "Section";
			// Exported from Arsenal by Sgt. Davis
			uniformClass = "ASF_AMCU_C";
			backpack = "ASF_Compact_AMCU";
			weapons[] = {"ADFU_minimi","Binocular","Throw","Put"};
			magazines[] = {"MiniGrenade","MiniGrenade","ACE_M84","ACE_M84","SmokeShell","SmokeShell","ADFU_100Rnd_556_Belt","ADFU_100Rnd_556_Belt","ADFU_100Rnd_556_Belt","ADFU_100Rnd_556_Belt","ADFU_200Rnd_556_Belt","ADFU_200Rnd_556_Belt","ADFU_200Rnd_556_Belt_TR"};
			items[] = {"ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_CableTie","ACE_CableTie","ACE_EarPlugs","ACE_epinephrine","ACE_epinephrine","ACE_Flashlight_XL50","ACE_MapTools","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet"};
			linkedItems[] = {"cpc_Fastbelt_mc","WIH_ADF_AIRFRAME","G_Combat","ItemMap","ItemCompass","ItemWatch","tf_anprc152"};
	};
	class TFAC_Section_Marksman_01
	{
		displayName = "Section Marksman (3.4x)";
		icon = "\A3\ui_f\data\map\VehicleIcons\iconMan_ca.paa";
		show = "side group _this == west";
		role = "Section";
			// Exported from Arsenal by Sgt. Davis
			uniformClass = "ASF_AMCU_C";
			backpack = "";
			weapons[] = {"ADFU_f88sa2_camo","Binocular","Throw","Put"};
			magazines[] = {"ADFU_30Rnd_aug","ADFU_30Rnd_aug","ADFU_30Rnd_aug","ADFU_30Rnd_aug","ADFU_30Rnd_aug","ADFU_30Rnd_aug","ADFU_30Rnd_aug","ADFU_30Rnd_aug","ADFU_30Rnd_aug","MiniGrenade","MiniGrenade","ACE_M84","ACE_M84","SmokeShell","SmokeShell"};
			items[] = {"ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_CableTie","ACE_CableTie","ACE_EarPlugs","ACE_epinephrine","ACE_epinephrine","ACE_Flashlight_XL50","ACE_MapTools","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet"};
			linkedItems[] = {"cpc_Fast_mc","WIH_ADF_AIRFRAME","G_Tactical_Black","ItemMap","ItemCompass","ItemWatch","tf_anprc152"};
	};
	class TFAC_Section_Rifleman_01
	{
		displayName = "Section Rifleman";
		icon = "\A3\ui_f\data\map\VehicleIcons\iconMan_ca.paa";
		show = "side group _this == west";
		role = "Section";
			// Exported from Arsenal by Sgt. Davis
			uniformClass = "ASF_AMCU_C";
			backpack = "";
			weapons[] = {"ADFU_f88sa2_camo","Binocular","Throw","Put"};
			magazines[] = {"ADFU_30Rnd_aug","ADFU_30Rnd_aug","ADFU_30Rnd_aug","ADFU_30Rnd_aug","ADFU_30Rnd_aug","ADFU_30Rnd_aug","ADFU_30Rnd_aug","ADFU_30Rnd_aug","ADFU_30Rnd_aug","MiniGrenade","MiniGrenade","ACE_M84","ACE_M84","SmokeShell","SmokeShell"};
			items[] = {"ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_CableTie","ACE_CableTie","ACE_EarPlugs","ACE_epinephrine","ACE_epinephrine","ACE_Flashlight_XL50","ACE_MapTools","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet"};
			linkedItems[] = {"cpc_Fastbelt_mc","WIH_ADF_AIRFRAME","G_Tactical_Clear","ItemMap","ItemCompass","ItemWatch","tf_anprc152"};
	};
////////////////
// EXTRA ROLES
////////////////

	class TFAC_Section_Rifleman_02
	{
		displayName = "Section Rifleman (M203)";
		icon = "\A3\ui_f\data\map\VehicleIcons\iconMan_ca.paa";
		show = "side group _this == west";
		role = "Extra";
			// Exported from Arsenal by Sgt. Davis
			uniformClass = "ASF_AMCU_C";
			backpack = "ASF_Compact_AMCU";
			weapons[] = {"ADFU_f88sa2_gl_camo","ACE_Vector","Throw","Put"};
			magazines[] = {"MiniGrenade","MiniGrenade","ACE_M84","ACE_M84","SmokeShell","SmokeShell","ADFU_30Rnd_aug","ADFU_30Rnd_aug","ADFU_30Rnd_aug","ADFU_30Rnd_aug","ADFU_30Rnd_aug","ADFU_30Rnd_aug","ADFU_30Rnd_aug","ADFU_30Rnd_aug","ADFU_30Rnd_aug","SmokeShell","SmokeShell","SmokeShell","SmokeShell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
			items[] = {"ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_CableTie","ACE_CableTie","ACE_EarPlugs","ACE_epinephrine","ACE_epinephrine","ACE_Flashlight_XL50","ACE_MapTools","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet"};
			linkedItems[] = {"cpc_tlbelt_mc","WIH_ADF_AIRFRAME","","ItemMap","ItemCompass","ItemWatch","tf_anprc152","ItemAndroid"};
	};
	class TFAC_Section_Marksman_02
	{
		displayName = "Section Marksman (SR-25)";
		icon = "\A3\ui_f\data\map\VehicleIcons\iconMan_ca.paa";
		show = "side group _this == west";
		role = "Extra";
			// Exported from Arsenal by Sgt. Davis
			uniform = "ASF_AMCU_C";
			backpack = "ASF_Compact_AMCU";
			weapons[] = {"ADFU_sr25","Binocular","Throw","Put"};
			magazines[] = {"MiniGrenade","MiniGrenade","ACE_M84","ACE_M84","SmokeShell","SmokeShell","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","ACE_HandFlare_Green","IR_Grenade"};
			items[] = {"ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_CableTie","ACE_CableTie","ACE_EarPlugs","ACE_epinephrine","ACE_epinephrine","ACE_Flashlight_XL50","ACE_MapTools","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet"};
			linkedItems[] = {"cpc_Fast_mc","WIH_ADF_AIRFRAME","G_Tactical_Black","ItemMap","ItemCompass","ItemWatch","tf_anprc152"};
	};
};
