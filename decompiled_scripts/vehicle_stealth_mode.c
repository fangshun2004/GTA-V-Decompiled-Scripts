#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	int iLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	float fLocal_14 = 0f;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	int iLocal_17 = 0;
	char* sLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	int iLocal_28 = 0;
	float fLocal_29 = 0f;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	float fLocal_33 = 0f;
	float fLocal_34 = 0f;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
#endregion

void main() // Hash - 0x5D84F89F ^0x5D84F89F
{
	iLocal_2 = 1;
	iLocal_3 = 134;
	iLocal_4 = 134;
	iLocal_5 = 1;
	iLocal_6 = 1;
	iLocal_7 = 1;
	iLocal_8 = 134;
	iLocal_9 = 1;
	iLocal_10 = 12;
	iLocal_11 = 12;
	fLocal_14 = 0.001f;
	iLocal_17 = -1;
	sLocal_18 = "NULL";
	fLocal_23 = 80f;
	fLocal_24 = 140f;
	fLocal_25 = 180f;
	iLocal_28 = 3;
	fLocal_29 = 0f;
	fLocal_33 = -0.0375f;
	fLocal_34 = 0.17f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;

	if (func_88(&uLocal_46))
	{
		while (!func_79())
		{
			func_67(&uLocal_46);
		
			if (func_57(&uLocal_46))
				break;
		
			func_17(&uLocal_46);
			SYSTEM::WAIT(0);
		}
	}

	func_1(&uLocal_46);
	return;
}

void func_1(int* piParam0) // Hash - 0x8D25DECD ^0xD1E5F804
{
	func_16();

	if (func_10(piParam0))
		HUD::CLEAR_HELP(true);

	if (func_8(&uLocal_46))
		func_4(&uLocal_46);

	PLAYER::SET_MAX_WANTED_LEVEL(5);
	func_3();
	PLAYER::SET_PLAYER_HOMING_DISABLED_FOR_ALL_VEHICLE_WEAPONS(PLAYER::PLAYER_ID(), 0);
	func_2();
	return;
}

void func_2() // Hash - 0xCE5FB49E ^0x214A59D5
{
	SCRIPT::TERMINATE_THIS_THREAD();
	return;
}

void func_3() // Hash - 0xFB0BB1F9 ^0x4526D383
{
	MISC::CLEAR_BIT(&(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_837), 3);
	return;
}

void func_4(int* piParam0) // Hash - 0xCF8F112 ^0xD3735C92
{
	func_7(false, true);
	func_6(false, -1, true);
	func_5(&(piParam0->f_6), 5);
	return;
}

void func_5(int* piParam0, int iParam1) // Hash - 0xAEE04633 ^0xFF7FBF85
{
	MISC::CLEAR_BIT(piParam0, iParam1);
	return;
}

void func_6(BOOL bParam0, int iParam1, BOOL bParam2) // Hash - 0xB065F1DA ^0xB441C126
{
	if (!SCRIPT::IS_THREAD_ACTIVE(Global_2646729.f_1582) || Global_2646729.f_1582 == SCRIPT::GET_ID_OF_THIS_THREAD() || bParam2)
	{
		if (bParam0)
		{
			Global_2646729.f_1582 = SCRIPT::GET_ID_OF_THIS_THREAD();
			Global_2646729.f_1583 = NETWORK::GET_NETWORK_TIME();
		}
		else
		{
			Global_2646729.f_1582 = -1;
		}
	
		Global_2646729.f_1585 = iParam1;
		Global_2646729.f_1587 = bParam0;
	}
	else
	{
		!bParam2;
	}

	return;
}

void func_7(BOOL bParam0, BOOL bParam1) // Hash - 0xBCD519EA ^0x92932677
{
	if (!SCRIPT::IS_THREAD_ACTIVE(Global_2646729.f_1598) || Global_2646729.f_1598 == SCRIPT::GET_ID_OF_THIS_THREAD() || bParam1)
	{
		if (bParam0)
		{
			Global_2646729.f_1598 = SCRIPT::GET_ID_OF_THIS_THREAD();
			MISC::SET_BIT(&(Global_2657589[PLAYER::PLAYER_ID() /*466*/].f_73.f_2), 23);
		}
		else
		{
			Global_2646729.f_1598 = -1;
			MISC::CLEAR_BIT(&(Global_2657589[PLAYER::PLAYER_ID() /*466*/].f_73.f_2), 23);
		}
	}
	else
	{
		!bParam1;
	}

	return;
}

BOOL func_8(int* piParam0) // Hash - 0x1EF8B247 ^0xCC87D221
{
	return func_9(&(piParam0->f_6), 5);
}

BOOL func_9(int* piParam0, int iParam1) // Hash - 0xDDB0D9A1 ^0xDDB0D9A1
{
	return IS_BIT_SET(*piParam0, iParam1);
}

BOOL func_10(int* piParam0) // Hash - 0xAA28C9C5 ^0x34A63E66
{
	if (piParam0->f_2 != 0)
		if (func_14(_("Press ~INPUT_VEH_ROOF~ to enter Stealth Mode when piloting the ~a~. All pilot and passenger weapons are unavailable in Stealth Mode as the ~a~ will not appear on enemy radars or maps."), func_15(piParam0->f_2), func_15(piParam0->f_2)) || func_13(_("The Pilot has turned on Stealth Mode. All pilot and passenger weapons are unavailable as the ~a~ will not appear on enemy radars or maps."), func_15(piParam0->f_2)))
			return true;

	return func_12(_("Press ~INPUT_VEH_ROOF~ to disable Stealth Mode.")) || func_12(func_11()) || func_12(_("The Pilot has disabled Stealth Mode."));
}

char* func_11() // Hash - 0x8D68C33C ^0x8D68C33C
{
	return _("All pilot and passenger weapons are unavailable while the vehicle is in Stealth Mode.");
}

BOOL func_12(char* sParam0) // Hash - 0xCD6A3595 ^0xB0E86AA0
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

BOOL func_13(char* sParam0, char* sParam1) // Hash - 0xCB708C57 ^0x57AB1DDC
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

BOOL func_14(char* sParam0, char* sParam1, char* sParam2) // Hash - 0x3E27E359 ^0x22928652
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam2);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

char* func_15(Hash hParam0) // Hash - 0x2810F472 ^0xD047DBCA
{
	if (hParam0 == joaat("ANNIHILATOR2"))
		return _("Stealth Annihilator");

	return VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(hParam0);
}

void func_16() // Hash - 0x2F6A9992 ^0xC793CCF7
{
	MISC::CLEAR_BIT(&(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_837), 1);
	return;
}

void func_17(int* piParam0) // Hash - 0xCA0CCE77 ^0x9DCD2955
{
	func_54(piParam0);
	func_53(piParam0);

	if (func_52(piParam0))
	{
		if (func_51(piParam0) && !func_50(piParam0) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(piParam0->f_1) && !func_49())
		{
			func_48(piParam0, true, false);
			func_47(piParam0);
		}
		else if (func_9(&(piParam0->f_6), 6) && func_50(piParam0))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(piParam0->f_1) && !func_49())
			{
				func_48(piParam0, false, false);
				func_5(&(piParam0->f_6), 6);
				func_5(&(piParam0->f_6), 2);
			}
		}
	}

	if (func_46(piParam0))
	{
		PLAYER::SET_PLAYER_HOMING_DISABLED_FOR_ALL_VEHICLE_WEAPONS(PLAYER::PLAYER_ID(), 1);
		func_45();
		func_44(piParam0);
	}
	else if (func_43(piParam0))
	{
		PLAYER::SET_PLAYER_HOMING_DISABLED_FOR_ALL_VEHICLE_WEAPONS(PLAYER::PLAYER_ID(), 0);
		func_16();
		func_44(piParam0);
		func_42(piParam0, 5);
	}

	if (func_50(piParam0) && !func_51(piParam0))
	{
		func_40(piParam0);
		func_39();
		func_42(piParam0, 2);
	
		if (func_36(piParam0))
			func_34();
	}
	else
	{
		func_18(piParam0);
	}

	func_3();
	MISC::CLEAR_BIT(&(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_837), 4);
	return;
}

void func_18(int* piParam0) // Hash - 0xE1ADBA51 ^0xF7D1476B
{
	int num;

	if (!func_9(&(piParam0->f_6), 0) && !func_9(&(piParam0->f_6), 2) && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() && func_33(piParam0) && !func_32(0) && !func_31() && func_29() && ENTITY::DOES_ENTITY_EXIST(VEHICLE::GET_PED_IN_VEHICLE_SEAT(piParam0->f_1, -1, false)))
	{
		func_25(piParam0, 1);
		func_24(&(piParam0->f_6), 3);
		num = piParam0->f_6.f_2 ? 3333 : 10000;
		piParam0->f_6.f_2 = 0;
	
		if (func_52(piParam0))
			func_21(func_22(piParam0), func_15(piParam0->f_2), func_15(piParam0->f_2), num);
		else
			func_20(func_22(piParam0), func_15(piParam0->f_2), num);
	
		func_19(piParam0);
		func_24(&(piParam0->f_6), 0);
	}

	return;
}

void func_19(int* piParam0) // Hash - 0x942EE4B5 ^0x86A949B
{
	func_24(&(piParam0->f_6), 2);
	return;
}

void func_20(char* sParam0, char* sParam1, int iParam2) // Hash - 0xF37B3394 ^0xE3F991D6
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam2);
	return;
}

void func_21(char* sParam0, char* sParam1, char* sParam2, int iParam3) // Hash - 0x47299B4F ^0xDEB05525
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam2);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam3);
	return;
}

char* func_22(int* piParam0) // Hash - 0xA0BE6D2D ^0xA0BE6D2D
{
	if (func_52(piParam0))
		return _("Press ~INPUT_VEH_ROOF~ to enter Stealth Mode when piloting the ~a~. All pilot and passenger weapons are unavailable in Stealth Mode as the ~a~ will not appear on enemy radars or maps.");

	return _("The Pilot has disabled Stealth Mode.");
}

var func_23(BOOL bParam0, var uParam1, var uParam2) // Hash - 0x3EE55A88 ^0x3EE55A88
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

void func_24(int* piParam0, int iParam1) // Hash - 0xAEE04633 ^0xC5A9CA3F
{
	MISC::SET_BIT(piParam0, iParam1);
	return;
}

void func_25(int* piParam0, int iParam1) // Hash - 0x9CF13D9 ^0x82F5A61C
{
	int num;

	if (func_52(piParam0))
	{
		switch (piParam0->f_2)
		{
			case joaat("AKULA"):
			case joaat("ANNIHILATOR2"):
				num = func_28(19004, -1) + iParam1;
			
				if (num >= 0)
					func_26(19004, num, -1);
				break;
		}
	}

	return;
}

void func_26(int iParam0, int iParam1, int iParam2) // Hash - 0x4C8CAB3D ^0xBFF357A2
{
	if (iParam2 == -1)
		iParam2 = func_27();

	if (iParam1 < 0)
		iParam1 = 255;

	STATS::SET_PACKED_STAT_INT_CODE(iParam0, iParam1, iParam2);
	return;
}

int func_27() // Hash - 0x47FF56D2 ^0x47FF56D2
{
	return Global_1574918;
}

int func_28(int iParam0, int iParam1) // Hash - 0x6099A833 ^0x79D555BB
{
	if (iParam1 == -1)
		iParam1 = func_27();

	return STATS::GET_PACKED_STAT_INT_CODE(iParam0, iParam1);
}

BOOL func_29() // Hash - 0xDBF6B584 ^0x50CF4A07
{
	return !IS_BIT_SET(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_837, 4) && !func_30();
}

BOOL func_30() // Hash - 0x9C870A4D ^0x2B7E31CB
{
	return *Global_4718592.f_104427 == 6 || *Global_4718592.f_104427 == 7 && Global_4718592.f_2 == 20;
}

BOOL func_31() // Hash - 0x47FF56D2 ^0x47FF56D2
{
	return Global_75693;
}

BOOL func_32(int iParam0) // Hash - 0xE8921B44 ^0x4F063755
{
	if (iParam0 == 1)
		if (Global_20383.f_1 > 3)
			if (IS_BIT_SET(Global_8253, 14))
				return true;
			else
				return false;
		else
			return false;

	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("CELLPHONE_FLASHHAND")) > 0)
		return true;

	if (Global_20383.f_1 > 3)
		return true;

	return false;
}

BOOL func_33(int* piParam0) // Hash - 0x5ED10D2B ^0x698EAD66
{
	if (func_52(piParam0))
	{
		switch (piParam0->f_2)
		{
			case joaat("AKULA"):
				return func_28(19004, -1) < 3;
		
			default:
			
		}
	}

	return true;
}

void func_34() // Hash - 0xCA794A67 ^0x91B80F45
{
	if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
		func_35(_("All pilot and passenger weapons are unavailable while the vehicle is in Stealth Mode."), 3000);

	return;
}

void func_35(char* sParam0, int iParam1) // Hash - 0xCBB0D91 ^0x21070E5C
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam1);
	return;
}

BOOL func_36(int* piParam0) // Hash - 0xD87B745A ^0xD10A30FB
{
	int num;

	if (func_32(0) || func_31())
		return false;

	num = func_37(piParam0);

	switch (num)
	{
		case 1:
			if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(PLAYER_CONTROL, INPUT_VEH_FLY_ATTACK) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(PLAYER_CONTROL, INPUT_VEH_SELECT_NEXT_WEAPON) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(PLAYER_CONTROL, INPUT_VEH_SELECT_PREV_WEAPON))
				return true;
			break;
	
		case 0:
			if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(PLAYER_CONTROL, INPUT_VEH_FLY_ATTACK))
				return true;
			break;
	
		case 2:
			if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(PLAYER_CONTROL, INPUT_VEH_PASSENGER_ATTACK))
				return true;
			break;
	
		case 3:
			if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(PLAYER_CONTROL, INPUT_VEH_AIM))
				return true;
			break;
	}

	return false;
}

int func_37(int* piParam0) // Hash - 0x53BDFFBE ^0x63804050
{
	if (!func_38(piParam0))
		return 4;

	switch (piParam0->f_2)
	{
		case joaat("AKULA"):
		case joaat("ANNIHILATOR2"):
			switch (piParam0->f_4)
			{
				case -1:
					return 1;
			
				case 0:
					return 2;
			
				default:
				
			}
		
			return 4;
	}

	return 4;
}

BOOL func_38(int* piParam0) // Hash - 0xA482206C ^0xBDFBF523
{
	return ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false);
}

void func_39() // Hash - 0x42735151 ^0x2208980D
{
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_ATTACK, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_GUN_LR, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_GUN_UD, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_AIM, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_FLY_ATTACK, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_ATTACK, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_ATTACKRIGHT, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_PASSENGER_AIM, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_PASSENGER_ATTACK, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_SELECT_NEXT_WEAPON, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_SELECT_PREV_WEAPON, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_SELECT_WEAPON, true);
	return;
}

void func_40(int* piParam0) // Hash - 0xEB920128 ^0xA7531533
{
	int num;

	if (!func_9(&(piParam0->f_6), 0) && !func_9(&(piParam0->f_6), 1) && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() && func_9(&(piParam0->f_6), 3) && !func_32(0) && !func_31() && func_29() && ENTITY::DOES_ENTITY_EXIST(VEHICLE::GET_PED_IN_VEHICLE_SEAT(piParam0->f_1, -1, false)))
	{
		num = piParam0->f_6.f_2 ? 3333 : 10000;
		piParam0->f_6.f_2 = 0;
	
		if (func_52(piParam0))
			func_35(func_41(piParam0), num);
		else
			func_21(func_41(piParam0), func_15(piParam0->f_2), func_15(piParam0->f_2), num);
	
		func_47(piParam0);
		func_24(&(piParam0->f_6), 0);
	}

	return;
}

char* func_41(int* piParam0) // Hash - 0x95A046F2 ^0x95A046F2
{
	if (func_52(piParam0))
		return _("Press ~INPUT_VEH_ROOF~ to disable Stealth Mode.");

	return _("The Pilot has turned on Stealth Mode. All pilot and passenger weapons are unavailable as the ~a~ will not appear on enemy radars or maps.");
}

void func_42(int* piParam0, int iParam1) // Hash - 0xB9D48296 ^0xA5FC03F
{
	if (func_51(piParam0))
		return;

	if (PLAYER::GET_MAX_WANTED_LEVEL() != iParam1)
		PLAYER::SET_MAX_WANTED_LEVEL(iParam1);

	if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > iParam1)
		PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), iParam1, false);

	return;
}

BOOL func_43(int* piParam0) // Hash - 0xC009BC7B ^0xC009BC7B
{
	return !func_9(piParam0, 0) && func_9(piParam0, 1);
}

void func_44(int* piParam0) // Hash - 0x1A5C18AC ^0x8C04C460
{
	func_5(&(piParam0->f_6), 0);

	if (func_10(piParam0))
		HUD::CLEAR_HELP(true);

	if (!func_52(piParam0))
		if (func_50(piParam0))
			func_5(&(piParam0->f_6), 1);
		else
			func_5(&(piParam0->f_6), 2);

	return;
}

void func_45() // Hash - 0x2F6A9992 ^0xF84ABC46
{
	MISC::SET_BIT(&(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_837), 1);
	return;
}

BOOL func_46(int* piParam0) // Hash - 0x42E1273E ^0x42E1273E
{
	return func_9(piParam0, 0) && !func_9(piParam0, 1);
}

void func_47(int* piParam0) // Hash - 0x5D53E8CF ^0x529E652D
{
	func_24(&(piParam0->f_6), 1);
	return;
}

void func_48(int* piParam0, BOOL bParam1, BOOL bParam2) // Hash - 0xF8F1406F ^0x74E55214
{
	switch (piParam0->f_2)
	{
		case joaat("AKULA"):
		case joaat("ANNIHILATOR2"):
			VEHICLE::SET_DEPLOY_FOLDING_WINGS(piParam0->f_1, !bParam1, bParam2);
			break;
	}

	return;
}

BOOL func_49() // Hash - 0x978BB7FE ^0x89B2B8A9
{
	return IS_BIT_SET(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_837, 3);
}

BOOL func_50(int* piParam0) // Hash - 0xE7BA92D6 ^0xE7BA92D6
{
	return func_9(piParam0, 0);
}

BOOL func_51(int* piParam0) // Hash - 0xF7D98D06 ^0xF7D98D06
{
	return func_9(piParam0, 2);
}

BOOL func_52(int* piParam0) // Hash - 0xB1BB5CC4 ^0xD57C6565
{
	return func_38(piParam0) && piParam0->f_3 == PLAYER::PLAYER_PED_ID() || VEHICLE::GET_PED_IN_VEHICLE_SEAT(piParam0->f_1, -1, false) == PLAYER::PLAYER_PED_ID();
}

void func_53(int* piParam0) // Hash - 0x712FA1B0 ^0x678ED7D
{
	if (func_10(piParam0) && func_32(0) || func_31())
	{
		piParam0->f_6.f_2 = 1;
		HUD::CLEAR_HELP(true);
		func_5(&(piParam0->f_6), 0);
	
		if (func_50(piParam0))
		{
			func_5(&(piParam0->f_6), 1);
		}
		else
		{
			func_5(&(piParam0->f_6), 2);
		
			if (func_52(piParam0))
				func_25(piParam0, -1);
		}
	}

	return;
}

void func_54(int* piParam0) // Hash - 0x37E4F557 ^0xC73F3AAA
{
	if (func_50(piParam0))
		if (func_8(piParam0))
			if (func_56())
				func_4(piParam0);
		else if (!func_56())
			func_55(piParam0);
	else if (func_8(piParam0))
		func_4(piParam0);

	MISC::CLEAR_BIT(&(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_837), 2);
	return;
}

void func_55(int* piParam0) // Hash - 0x8F9BB5B0 ^0x82B3E882
{
	func_7(true, true);
	func_6(true, -1, true);
	func_24(&(piParam0->f_6), 5);
	return;
}

BOOL func_56() // Hash - 0x84748B7F ^0x711FABA2
{
	return IS_BIT_SET(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_837, 2);
}

BOOL func_57(int* piParam0) // Hash - 0xFEA4F61C ^0x7CB60DD6
{
	if (!func_38(piParam0))
		return true;

	if (!func_66(piParam0))
		return true;

	if (!func_65(piParam0->f_2))
		return true;

	if (func_64(PLAYER::PLAYER_ID(), true, true))
		return true;

	if (func_63(PLAYER::PLAYER_ID()))
		return true;

	if (func_60(PLAYER::PLAYER_ID()))
		return true;

	if (func_58(PLAYER::PLAYER_ID()))
		return true;

	return false;
}

BOOL func_58(Player plParam0) // Hash - 0xE39633AF ^0x46DAFFF0
{
	if (plParam0 > -1)
	{
		if (Global_2657589[plParam0 /*466*/].f_246 > -1)
			if (func_59(Global_2657589[plParam0 /*466*/].f_246) == 4)
				return true;
	
		if (IS_BIT_SET(Global_2657589[plParam0 /*466*/].f_199, 4))
			return true;
	}

	return false;
}

int func_59(int iParam0) // Hash - 0x1BE0B176 ^0x1BE0B176
{
	switch (iParam0)
	{
		case -1:
			return 6;
	
		case 0:
			return 0;
	
		case 1:
			return 0;
	
		case 2:
			return 0;
	
		case 3:
			return 0;
	
		case 4:
			return 0;
	
		case 5:
			return 0;
	
		case 6:
			return 0;
	
		case 50:
			return 0;
	
		case 7:
			return 1;
	
		case 8:
			return 1;
	
		case 9:
			return 1;
	
		case 10:
			return 1;
	
		case 11:
			return 1;
	
		case 12:
			return 1;
	
		case 13:
			return 1;
	
		case 14:
			return 1;
	
		case 15:
			return 1;
	
		case 16:
			return 1;
	
		case 17:
			return 1;
	
		case 18:
			return 1;
	
		case 19:
			return 1;
	
		case 20:
			return 1;
	
		case 21:
			return 1;
	
		case 22:
			return 2;
	
		case 23:
			return 2;
	
		case 24:
			return 2;
	
		case 25:
			return 2;
	
		case 26:
			return 2;
	
		case 27:
			return 2;
	
		case 28:
			return 3;
	
		case 29:
			return 3;
	
		case 30:
			return 3;
	
		case 31:
			return 3;
	
		case 32:
			return 3;
	
		case 33:
			return 3;
	
		case 34:
			return 3;
	
		case 35:
			return 3;
	
		case 36:
			return 3;
	
		case 37:
			return 3;
	
		case 38:
			return 3;
	
		case 39:
			return 4;
	
		case 40:
			return 4;
	
		case 41:
			return 4;
	
		case 42:
			return 4;
	
		case 43:
			return 4;
	
		case 44:
			return 4;
	
		case 45:
			return 5;
	
		case 46:
			return 3;
	
		case 47:
			return 3;
	
		case 48:
			return 3;
	
		case 49:
			return 3;
	
		case 52:
			return 3;
	
		case 51:
			return 1;
	
		case 53:
			return 3;
	
		case 54:
			return 2;
	
		case 55:
			return 1;
	
		case 56:
			return 3;
	
		case 57:
			return 1;
	
		case 58:
			return 3;
	
		case 59:
			return 3;
	}

	return 6;
}

BOOL func_60(Player plParam0) // Hash - 0x3BED6F11 ^0x3BED6F11
{
	if (plParam0 != func_62() && func_61(plParam0, true, true))
		return IS_BIT_SET(Global_2657589[plParam0 /*466*/].f_321, 3);

	return false;
}

BOOL func_61(Player plParam0, BOOL bParam1, BOOL bParam2) // Hash - 0x3FF6E4CA ^0xE6B59972
{
	Player player;

	player = plParam0;

	if (player != -1)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(plParam0))
		{
			if (bParam1)
				if (!PLAYER::IS_PLAYER_PLAYING(plParam0))
					return false;
		
			if (bParam2)
				if (player == Global_2672505.f_3)
					return Global_2672505.f_2;
				else if (Global_2657589[player /*466*/] != 4)
					return false;
		
			return true;
		}
	}

	return false;
}

Player func_62() // Hash - 0x478900E4 ^0x478900E4
{
	return -1;
}

BOOL func_63(Player plParam0) // Hash - 0xD7F7F990 ^0xD6AF2B71
{
	if (IS_BIT_SET(Global_1853910[plParam0 /*862*/].f_267.f_31, 14))
		return true;

	if (IS_BIT_SET(Global_1853910[plParam0 /*862*/].f_267.f_31, 11))
		return true;

	return false;
}

BOOL func_64(Player plParam0, BOOL bParam1, BOOL bParam2) // Hash - 0xBF1A1A60 ^0x7A6A8DDB
{
	if (plParam0 == func_62())
		return false;

	if (IS_BIT_SET(Global_1853910[plParam0 /*862*/].f_267.f_31, 0))
		return true;

	if (bParam1)
		if (IS_BIT_SET(Global_1853910[plParam0 /*862*/].f_267.f_31, 1))
			return true;

	if (bParam2)
		if (Global_2657589[plParam0 /*466*/].f_321.f_7 != -1)
			return true;

	return false;
}

BOOL func_65(int iParam0) // Hash - 0x5000025C ^0x5000025C
{
	switch (iParam0)
	{
		case joaat("AKULA"):
		case joaat("ANNIHILATOR2"):
			return true;
	
		default:
		
	}

	return false;
}

BOOL func_66(int* piParam0) // Hash - 0xE9DCEBB8 ^0xCC767969
{
	return ENTITY::DOES_ENTITY_EXIST(piParam0->f_1) && VEHICLE::IS_VEHICLE_DRIVEABLE(piParam0->f_1, false);
}

void func_67(int* piParam0) // Hash - 0x4397E5BC ^0x4397E5BC
{
	BOOL flag;
	BOOL flag2;
	Ped pedInVehicleSeat;

	flag = func_9(piParam0, 4);
	flag2 = func_9(piParam0, 0);
	func_78(piParam0);

	if (flag)
		func_24(piParam0, 3);
	else
		func_5(piParam0, 3);

	if (flag2)
		func_24(piParam0, 1);
	else
		func_5(piParam0, 1);

	if (func_38(piParam0))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			piParam0->f_1 = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
		
			if (func_66(piParam0))
			{
				piParam0->f_2 = ENTITY::GET_ENTITY_MODEL(piParam0->f_1);
			
				if (TASK::GET_IS_TASK_ACTIVE(PLAYER::PLAYER_PED_ID(), 2))
					func_24(piParam0, 2);
			}
		}
	}

	if (func_66(piParam0))
	{
		if (!VEHICLE::IS_VEHICLE_SEAT_FREE(piParam0->f_1, -1, false))
		{
			pedInVehicleSeat = VEHICLE::GET_PED_IN_VEHICLE_SEAT(piParam0->f_1, -1, false);
		
			if (ENTITY::DOES_ENTITY_EXIST(pedInVehicleSeat) && !ENTITY::IS_ENTITY_DEAD(pedInVehicleSeat, false) && PED::IS_PED_A_PLAYER(pedInVehicleSeat))
			{
				piParam0->f_3 = pedInVehicleSeat;
			
				if (pedInVehicleSeat == PLAYER::PLAYER_PED_ID())
				{
					func_24(piParam0, 4);
				
					if (!func_9(piParam0, 3))
						func_24(&(piParam0->f_6), 6);
				}
			}
		}
	
		if (func_38(piParam0))
			piParam0->f_4 = func_77(PLAYER::PLAYER_PED_ID(), false);
	
		if (func_52(piParam0))
			if (func_76() && func_70(piParam0))
				func_24(piParam0, 0);
		else
			func_68(piParam0);
	}

	if (func_46(piParam0))
		piParam0->f_6.f_3 = NETWORK::GET_NETWORK_TIME();

	return;
}

void func_68(int* piParam0) // Hash - 0x2E9E6B9 ^0x6C1CA3
{
	if (ENTITY::DOES_ENTITY_EXIST(piParam0->f_3) && func_69(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(piParam0->f_3)))
		func_24(piParam0, 0);
	else
		func_5(piParam0, 0);

	return;
}

BOOL func_69(Player plParam0) // Hash - 0xC1E6753A ^0xC1E6753A
{
	return plParam0 != -1 && IS_BIT_SET(Global_1853910[plParam0 /*862*/].f_837, 1);
}

BOOL func_70(int* piParam0) // Hash - 0x181C7E53 ^0xD429365
{
	BOOL flag;

	flag = func_75();

	if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(piParam0->f_1))
	{
		func_74(piParam0);
	
		switch (piParam0->f_2)
		{
			case joaat("AKULA"):
			case joaat("ANNIHILATOR2"):
				flag = !VEHICLE::ARE_FOLDING_WINGS_DEPLOYED(piParam0->f_1);
				break;
		}
	}
	else if (func_73(piParam0))
	{
		if (func_72(piParam0))
			NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(piParam0->f_1);
	}
	else
	{
		func_71(piParam0);
	}

	return flag;
}

void func_71(int* piParam0) // Hash - 0x342F23B1 ^0x884AB481
{
	func_24(&(piParam0->f_6), 4);
	piParam0->f_6.f_1 = MISC::GET_GAME_TIMER();
	return;
}

BOOL func_72(int* piParam0) // Hash - 0x1BD1D0FA ^0x2C810FBB
{
	return MISC::GET_GAME_TIMER() - piParam0->f_6.f_1 >= 200;
}

BOOL func_73(int* piParam0) // Hash - 0x721CC2C4 ^0x38F4880A
{
	return func_9(&(piParam0->f_6), 4);
}

void func_74(int* piParam0) // Hash - 0x79922215 ^0x1A2F8231
{
	func_5(&(piParam0->f_6), 4);
	return;
}

BOOL func_75() // Hash - 0x153877E4 ^0xA0B3529C
{
	return IS_BIT_SET(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_837, 1);
}

BOOL func_76() // Hash - 0x7FC26EC8 ^0x7FC26EC8
{
	return !func_30();
}

int func_77(Ped pedParam0, BOOL bParam1) // Hash - 0x4E1330D6 ^0x886EF094
{
	Vehicle vehiclePedIsIn;
	int vehicleModelNumberOfSeats;
	int i;
	int seatIndex;

	if (!PED::IS_PED_INJURED(pedParam0))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(pedParam0, bParam1))
		{
			vehiclePedIsIn = PED::GET_VEHICLE_PED_IS_IN(pedParam0, bParam1);
		
			if (ENTITY::DOES_ENTITY_EXIST(vehiclePedIsIn))
			{
				vehicleModelNumberOfSeats = VEHICLE::GET_VEHICLE_MODEL_NUMBER_OF_SEATS(ENTITY::GET_ENTITY_MODEL(vehiclePedIsIn));
			
				if (vehicleModelNumberOfSeats == 1)
				{
					seatIndex = -1;
					return seatIndex;
				}
			
				for (i = 0; i < vehicleModelNumberOfSeats; i = i + 1)
				{
					seatIndex = i - 1;
				
					if (!VEHICLE::IS_VEHICLE_SEAT_FREE(vehiclePedIsIn, seatIndex, false))
						if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(vehiclePedIsIn, seatIndex, false) == pedParam0)
							return seatIndex;
				}
			}
		}
	}

	return seatIndex;
}

void func_78(int* piParam0) // Hash - 0x4D7A39B1 ^0xDCE69257
{
	*piParam0 = 0;
	piParam0->f_1 = 0;
	piParam0->f_3 = 0;
	piParam0->f_2 = 0;
	piParam0->f_4 = -1;
	return;
}

BOOL func_79() // Hash - 0x2EE4DDA7 ^0x2EE4DDA7
{
	if (func_80())
		return true;

	return false;
}

BOOL func_80() // Hash - 0x52E21E9B ^0xD0F85E96
{
	if (Global_1575035 == 0)
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			return true;

	if (func_87())
		return true;

	if (Global_2696915)
		return true;

	if (func_86())
		return true;

	if (func_85(159))
		if (!func_84())
			return true;

	if (func_85(157))
		return true;

	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
		return true;

	if (func_81() != 0)
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(func_81()) == 0)
			return true;

	return false;
}

Hash func_81() // Hash - 0x90B5165C ^0xB8DD5DC8
{
	switch (func_83())
	{
		case 0:
			return func_82();
	
		case 2:
			return joaat("CREATOR");
	}

	return 0;
}

Hash func_82() // Hash - 0x61402777 ^0xB9FAC976
{
	switch (Global_2697019)
	{
		case 0:
			return joaat("FREEMODE");
	
		default:
		
	}

	return joaat("FREEMODE");
}

int func_83() // Hash - 0x21D64237 ^0x21D64237
{
	return Global_32163;
}

BOOL func_84() // Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_2683862.f_698;
}

BOOL func_85(int iParam0) // Hash - 0xA28ADBB4 ^0x6EB81E64
{
	if (SCRIPT::GET_EVENT_EXISTS(SCRIPT_EVENT_QUEUE_NETWORK, iParam0))
		return true;

	return false;
}

BOOL func_86() // Hash - 0x47FF56D2 ^0x47FF56D2
{
	return Global_2694524;
}

BOOL func_87() // Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_2683862.f_693;
}

BOOL func_88(int* piParam0) // Hash - 0xE3A9292E ^0xEE3F03A5
{
	func_67(piParam0);

	if (func_66(piParam0))
		if (func_52(piParam0))
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(piParam0->f_1))
				if (!func_49())
					func_48(piParam0, false, false);
				else
					func_24(&(piParam0->f_6), 3);
		else
			func_24(&(piParam0->f_6), 3);

	return true;
}

