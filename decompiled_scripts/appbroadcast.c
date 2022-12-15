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
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
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
#endregion

void main() // Position - 0x0 Hash - 0x5D84F89F ^0x5D84F89F
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
	TEXT_LABEL_ASSIGN_STRING(&uLocal_30, _("YES"), 16);
	TEXT_LABEL_ASSIGN_STRING(&uLocal_34, _("NO"), 16);
	TEXT_LABEL_ASSIGN_STRING(&uLocal_38, _("Broadcast"), 16);
	TEXT_LABEL_ASSIGN_STRING(&uLocal_42, _("Activate?"), 16);
	TEXT_LABEL_ASSIGN_STRING(&uLocal_46, _("Deactivate?"), 16);
	TEXT_LABEL_ASSIGN_STRING(&uLocal_50, _("Unavailable"), 16);
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	func_45(&uLocal_28);
	func_36();

	while (true)
	{
		SYSTEM::WAIT(0);
	
		if (!NETWORK::NETWORK_IS_IN_SESSION())
		{
			func_34(true);
			func_33();
		}
	
		if (!Global_20383.f_1 == 9 && Global_20383.f_1 > 3)
		{
			func_3();
		
			if (Global_20383.f_1 != 8)
				if (func_2())
					func_33();
		}
	
		if (func_1())
			func_33();
	}

	return;
}

BOOL func_1() // Position - 0xDE Hash - 0x57EB5377 ^0xDC0824ED
{
	if (Global_20383.f_1 == 1 || Global_20383.f_1 == 3 || Global_20383.f_1 == 0 || Global_20327 == 1)
	{
		Global_20370 = 1;
		return true;
	}

	return false;
}

BOOL func_2() // Position - 0x121 Hash - 0x1F39C732 ^0x92A1ED04
{
	if (Global_8859 == 1 || Global_20383.f_1 < 7)
	{
		Global_20370 = 1;
		return true;
	}

	return false;
}

void func_3() // Position - 0x14A Hash - 0xCAA8F161 ^0xF8BCCBE2
{
	if (func_29(&uLocal_28))
	{
		if (func_16())
		{
			if (Global_2694463)
			{
				NETWORK::NETWORK_OVERRIDE_SEND_RESTRICTIONS_ALL(false);
				func_10(-1011984062, func_11(true, true));
				Global_2694463 = false;
			}
			else
			{
				NETWORK::NETWORK_OVERRIDE_SEND_RESTRICTIONS_ALL(true);
				func_10(213830448, func_11(true, true));
				Global_2694463 = true;
			}
		
			func_4(0);
			return;
		}
	}

	return;
}

void func_4(int iParam0) // Position - 0x1A6 Hash - 0x4066FEF5 ^0x9787FBDA
{
	if (func_9())
		return;

	if (Global_20584)
		if (func_8())
			func_6(true, true);
		else
			func_6(false, false);

	if (Global_20383.f_1 == 10 || Global_20383.f_1 == 9)
		MISC::SET_BIT(&Global_8254, 16);

	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);

	Global_21725 = 5;

	if (iParam0 == 1)
		MISC::SET_BIT(&Global_8253, 30);
	else
		MISC::CLEAR_BIT(&Global_8253, 30);

	if (!func_5())
		Global_20383.f_1 = 3;

	return;
}

BOOL func_5() // Position - 0x230 Hash - 0xD140D54A ^0xE638D98F
{
	if (Global_20383.f_1 == 1 || Global_20383.f_1 == 0)
		return true;

	return false;
}

void func_6(BOOL bParam0, BOOL bParam1) // Position - 0x257 Hash - 0xF40FC178 ^0xA6F60F17
{
	if (bParam0)
	{
		if (func_7(0))
		{
			Global_20584 = true;
		
			if (bParam1)
				MOBILE::GET_MOBILE_PHONE_POSITION(&Global_20320);
		
			Global_20311 = { Global_20329[Global_20328 /*3*/] };
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_20311);
		}
	}
	else if (Global_20584 == true)
	{
		Global_20584 = false;
		Global_20311 = { Global_20336[Global_20328 /*3*/] };
	
		if (bParam1)
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_20320);
		else
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_20311);
	}

	return;
}

BOOL func_7(int iParam0) // Position - 0x2CB Hash - 0xE8921B44 ^0x4F063755
{
	if (iParam0 == 1)
		if (Global_20383.f_1 > 3)
			if (IS_BIT_SET(Global_8253, 14))
				return true;
			else
				return false;
		else
			return false;

	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(-754107665) > 0)
		return true;

	if (Global_20383.f_1 > 3)
		return true;

	return false;
}

BOOL func_8() // Position - 0x322 Hash - 0x8DF3D75D ^0x8DF3D75D
{
	return IS_BIT_SET(Global_1962996, 5);
}

BOOL func_9() // Position - 0x330 Hash - 0xC41437CB ^0xC41437CB
{
	return IS_BIT_SET(Global_1962996, 19);
}

void func_10(int iParam0, int iParam1) // Position - 0x33F Hash - 0xBF29FBCF ^0x214E3A85
{
	struct<4> eventData;

	eventData = 113023613;
	eventData.f_1 = PLAYER::PLAYER_ID();
	eventData.f_2 = iParam0;
	eventData.f_3 = MISC::GET_RANDOM_INT_IN_RANGE(0, 9999);

	if (!iParam1 == 0)
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			SCRIPT::SEND_TU_SCRIPT_EVENT(SCRIPT_EVENT_QUEUE_NETWORK, &eventData, 4, iParam1);

	return;
}

int func_11(BOOL bParam0, BOOL bParam1) // Position - 0x384 Hash - 0x28809950 ^0x99E2BCBE
{
	int address;
	int i;
	Player player;

	for (i = 0; i < 32; i = i + 1)
	{
		player = PLAYER::INT_TO_PLAYERINDEX(i);
	
		if (func_15(player, false, false))
			if (player != PLAYER::PLAYER_ID() || bParam0)
				if (bParam1)
					MISC::SET_BIT(&address, i);
				else if (!func_12(player, 0))
					MISC::SET_BIT(&address, i);
	}

	return address;
}

BOOL func_12(Player plParam0, int iParam1) // Position - 0x3E9 Hash - 0x5A3B86CC ^0x2CFA58CE
{
	BOOL flag;

	if (plParam0 == PLAYER::PLAYER_ID())
		flag = func_13(-1, false) == 8;
	else
		flag = Global_1853910[plParam0 /*862*/].f_205 == 8;

	if (iParam1 == 1)
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(plParam0))
			flag = PLAYER::GET_PLAYER_TEAM(plParam0) == 8;

	return flag;
}

int func_13(int iParam0, BOOL bParam1) // Position - 0x434 Hash - 0x1DCD393E ^0x1DCD393E
{
	int num;
	int num2;

	num2 = iParam0;

	if (num2 == -1)
		num2 = func_14();

	if (Global_1575040[num2] == 1)
	{
		bParam1;
		num = 8;
	}
	else
	{
		num = Global_1574912[num2];
		bParam1;
	}

	return num;
}

int func_14() // Position - 0x475 Hash - 0x47FF56D2 ^0x47FF56D2
{
	return Global_1574918;
}

BOOL func_15(Player plParam0, BOOL bParam1, BOOL bParam2) // Position - 0x481 Hash - 0x3FF6E4CA ^0xE6B59972
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

BOOL func_16() // Position - 0x4E1 Hash - 0x52D822E ^0x544C879F
{
	if (!func_23(PLAYER::PLAYER_ID(), true) && func_17())
		return true;

	return false;
}

BOOL func_17() // Position - 0x504 Hash - 0x6D428626 ^0x6D428626
{
	if (!func_18())
		return false;

	return true;
}

BOOL func_18() // Position - 0x519 Hash - 0xABE6E929 ^0xABE6E929
{
	if (Global_1574612)
		return true;

	if (func_22())
		return true;

	if (func_21())
		return true;

	return func_19(120, -1);
}

BOOL func_19(int iParam0, int iParam1) // Position - 0x549 Hash - 0x1FBC7704 ^0x2B72B37D
{
	Hash statHash;
	int outValue;

	statHash = Global_2848280[iParam0 /*3*/][func_20(iParam1)];

	if (STATS::STAT_GET_BOOL(statHash, &outValue, -1))
		return outValue;

	return 0;
}

int func_20(int iParam0) // Position - 0x575 Hash - 0x1A3F3220 ^0x1A3F3220
{
	int num;
	int num2;

	num = iParam0;

	if (num == -1)
	{
		num2 = func_14();
	
		if (num2 > -1)
		{
			Global_2804739 = 0;
			num = num2;
		}
		else
		{
			num = 0;
			Global_2804739 = 1;
		}
	}

	return num;
}

BOOL func_21() // Position - 0x5A9 Hash - 0x47FF56D2 ^0x47FF56D2
{
	return Global_1575048;
}

BOOL func_22() // Position - 0x5B5 Hash - 0x47FF56D2 ^0x47FF56D2
{
	return Global_1575050;
}

BOOL func_23(Player plParam0, BOOL bParam1) // Position - 0x5C1 Hash - 0xDFFABAF3 ^0xDFFABAF3
{
	if (func_28() != 0)
		return func_27(plParam0) != 0;

	return func_24(plParam0, bParam1, false);
}

BOOL func_24(Player plParam0, BOOL bParam1, BOOL bParam2) // Position - 0x5E8 Hash - 0x326C99FC ^0x326C99FC
{
	if (bParam1)
		if (func_25(plParam0))
			return 1;

	!bParam2;

	if (Global_1853910[plParam0 /*862*/] == -1)
		return 0;

	return 1;
}

BOOL func_25(Player plParam0) // Position - 0x61A Hash - 0x3E978ED3 ^0x3E978ED3
{
	return func_26(plParam0);
}

BOOL func_26(Player plParam0) // Position - 0x628 Hash - 0x1ACBF981 ^0x51A073B
{
	return IS_BIT_SET(Global_1853910[plParam0 /*862*/].f_11.f_1, 0);
}

int func_27(Player plParam0) // Position - 0x63F Hash - 0x5E689433 ^0xD577BEEF
{
	if (func_15(plParam0, false, true))
		return Global_2657589[plParam0 /*466*/].f_1;

	return 0;
}

int func_28() // Position - 0x661 Hash - 0x21D64237 ^0x21D64237
{
	return Global_32163;
}

BOOL func_29(var uParam0) // Position - 0x66C Hash - 0xD23D6E28 ^0xAA9B9510
{
	if (!IS_BIT_SET(*uParam0, 0))
		return false;

	if (Global_20361)
		return false;

	if (!CAM::IS_SCREEN_FADED_IN())
		return false;

	if (!PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, Global_20352))
		return false;

	func_30();
	Global_20361 = true;
	return true;
}

void func_30() // Position - 0x6B0 Hash - 0x6D25E02C ^0x173E2DD4
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Accept", &Global_20372, true);
		func_31();
	}

	return;
}

void func_31() // Position - 0x6D5 Hash - 0xD56EB04 ^0x9DB5936E
{
	if (func_32())
		MOBILE::CELL_SET_INPUT(5);

	return;
}

BOOL func_32() // Position - 0x6E9 Hash - 0xE8350107 ^0x112591EA
{
	eViewModeContext camActiveViewModeContext;
	eViewMode camViewModeForContext;
	int num;

	if (Global_78558)
		return false;

	num = 0;
	camActiveViewModeContext = CAM::GET_CAM_ACTIVE_VIEW_MODE_CONTEXT();
	camViewModeForContext = CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(camActiveViewModeContext);

	if (camViewModeForContext == FIRST_PERSON)
		num = 1;

	if (Global_4542575 || num)
		return true;

	return true;
}

void func_33() // Position - 0x730 Hash - 0xCE5FB49E ^0x214A59D5
{
	SCRIPT::TERMINATE_THIS_THREAD();
	return;
}

void func_34(BOOL bParam0) // Position - 0x73C Hash - 0x5FE88D2A ^0xA22C291D
{
	if (bParam0)
	{
		func_35();
	
		if (Global_20383.f_1 == 10 || Global_20383.f_1 == 9)
			MISC::SET_BIT(&Global_8254, 16);
	
		Global_20383.f_1 = 1;
	
		if (func_7(0))
			func_4(0);
	}
	else if (Global_20383.f_1 == 1)
	{
		if (!Global_20383.f_1 == 0)
			Global_20383.f_1 = 3;
	}

	return;
}

void func_35() // Position - 0x79F Hash - 0xF8FE2348 ^0xA77911B2
{
	if (Global_20383.f_1 == 9 || Global_20383.f_1 == 10)
	{
		Global_21778 = 0;
		Global_21774 = 1;
	}

	return;
}

void func_36() // Position - 0x7C8 Hash - 0x2E394B51 ^0x5CE61972
{
	if (!Global_20383.f_1 == 7)
		Global_20383.f_1 = 7;

	func_44(Global_20364, "SET_DATA_SLOT_EMPTY", SYSTEM::TO_FLOAT(13), -1082130432, -1082130432, -1082130432, -1082130432);

	if (func_16())
		if (Global_2694463)
			func_43(Global_20364, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(13), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(12), -1f, -1f, &uLocal_46, 0, 0, 0, 0);
		else
			func_43(Global_20364, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(13), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(12), -1f, -1f, &uLocal_42, 0, 0, 0, 0);
	else
		func_43(Global_20364, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(13), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(12), -1f, -1f, &uLocal_50, 0, 0, 0, 0);

	func_44(Global_20364, "DISPLAY_VIEW", SYSTEM::TO_FLOAT(13), -1082130432, -1082130432, -1082130432, -1082130432);
	func_40(&uLocal_38);

	if (func_16())
		func_37(13, &uLocal_30, 1, "", 4, &uLocal_34, &uLocal_28);
	else
		func_37(1, "", 1, "", 4, &uLocal_34, &uLocal_28);

	return;
}

void func_37(int iParam0, const char* sParam1, int iParam2, char* sParam3, int iParam4, char* sParam5, int* piParam6) // Position - 0x8D8 Hash - 0xA713DAFB ^0xA713DAFB
{
	func_38(2, iParam0, sParam1, 0, piParam6, -1);
	func_38(1, iParam2, sParam3, 1, piParam6, 17);
	func_38(3, iParam4, sParam5, 2, piParam6, -1);
	return;
}

void func_38(int iParam0, int iParam1, char* sParam2, int iParam3, int* piParam4, int iParam5) // Position - 0x908 Hash - 0xDD39CE1 ^0xF78C48BF
{
	if (iParam1 == 1)
	{
		func_43(Global_20364, "SET_SOFT_KEYS", SYSTEM::TO_FLOAT(iParam0), 0f, SYSTEM::TO_FLOAT(iParam1), -1f, -1f, 0, 0, 0, 0, 0);
		MISC::CLEAR_BIT(piParam4, iParam3);
		func_39(iParam5, false);
		return;
	}

	if (Global_20371)
	{
		func_43(Global_20364, "SET_SOFT_KEYS", SYSTEM::TO_FLOAT(iParam0), 1f, SYSTEM::TO_FLOAT(iParam1), -1f, -1f, sParam2, 0, 0, 0, 0);
		MISC::SET_BIT(piParam4, iParam3);
		func_39(iParam5, true);
		return;
	}

	func_43(Global_20364, "SET_SOFT_KEYS", SYSTEM::TO_FLOAT(iParam0), 1f, SYSTEM::TO_FLOAT(iParam1), -1f, -1f, 0, 0, 0, 0, 0);
	MISC::SET_BIT(piParam4, iParam3);
	func_39(iParam5, true);
	return;
}

void func_39(int iParam0, BOOL bParam1) // Position - 0x9AA Hash - 0x89C9047C ^0xBC5EE3A2
{
	if (iParam0 == -1)
		return;

	if (bParam1)
	{
		MISC::SET_BIT(&Global_8253, iParam0);
		return;
	}

	MISC::CLEAR_BIT(&Global_8253, iParam0);
	return;
}

void func_40(const char* sParam0) // Position - 0x9D5 Hash - 0x53FB3A6F ^0x53FB3A6F
{
	func_41(Global_20364, "SET_HEADER", sParam0, 0, 0, 0, 0);
	return;
}

void func_41(Player plParam0, char* sParam1, const char* sParam2, const char* sParam3, const char* sParam4, const char* sParam5, const char* sParam6) // Position - 0x9ED Hash - 0xD2A7E1F6 ^0xAFF0FF17
{
	NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(plParam0, sParam1);
	func_42(sParam2);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
		func_42(sParam3);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
		func_42(sParam4);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam5))
		func_42(sParam5);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam6))
		func_42(sParam6);

	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	return;
}

void func_42(const char* sParam0) // Position - 0xA48 Hash - 0x8E2F5FE2 ^0x29D9D432
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	return;
}

void func_43(Player plParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, const char* sParam7, const char* sParam8, const char* sParam9, const char* sParam10, const char* sParam11) // Position - 0xA5A Hash - 0x39E054FF ^0xB04F1C48
{
	NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(plParam0, sParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam2));

	if (fParam3 != -1f)
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam3));

	if (fParam4 != -1f)
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam4));

	if (fParam5 != -1f)
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam5));

	if (fParam6 != -1f)
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam6));

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam7))
		func_42(sParam7);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
		func_42(sParam8);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam9))
		func_42(sParam9);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam10))
		func_42(sParam10);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam11))
		func_42(sParam11);

	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	return;
}

void func_44(Player plParam0, char* sParam1, float fParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0xB0D Hash - 0x5F496D0E ^0x4BC02ED5
{
	NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(plParam0, sParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam2));

	if (iParam3 != -1f)
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(iParam3));

	if (iParam4 != -1f)
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(iParam4));

	if (iParam5 != -1f)
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(iParam5));

	if (iParam6 != -1f)
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(iParam6));

	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	return;
}

void func_45(var uParam0) // Position - 0xB70 Hash - 0x4918B04C ^0x4918B04C
{
	*uParam0 = 0;
	return;
}

