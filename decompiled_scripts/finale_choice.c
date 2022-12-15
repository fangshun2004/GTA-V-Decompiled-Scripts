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
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	char* sLocal_20 = 0;
	float fLocal_21 = 0f;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	BOOL bLocal_28 = 0;
#endregion

void main() // Position - 0x0 Hash - 0x5D84F89F ^0x5D84F89F
{
	BOOL flag;

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
	sLocal_20 = "NULL";
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	bLocal_28 = true;

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(18))
		func_43();

	func_42(20);
	func_41();
	func_40(1);
	func_40(0);
	func_40(2);
	func_40(13);
	func_40(12);
	Global_8258 = 1;
	func_39();

	if (!func_38(-1615086084))
		func_37(-1615086084, 2, 2, 2, 1, -1, 5);

	if (!func_38(-1970925435))
		func_37(-1970925435, 2, 0, 0, 1, -1, 5);

	if (!func_38(-1817481777))
		func_37(-1817481777, 2, 12, 3, 1, -1, 5);

	flag = false;

	while (func_36(23) && !func_35(134))
	{
		if (func_30() == 1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
			{
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					if (!PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID()) && !FILES::GET_DLC_VEHICLE_FLAGS(PLAYER::PLAYER_PED_ID()))
					{
						if (!flag)
						{
							if (!(func_29() || STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() || func_28()))
								if (func_13())
									flag = true;
						}
						else
						{
							if (bLocal_28)
							{
								PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, SPC_REENABLE_CONTROL_ON_DEATH | 256);
								PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 0f);
								PAD::ENABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_CELLPHONE_DOWN, true);
								PAD::ENABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_CELLPHONE_UP, true);
								PAD::ENABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_CELLPHONE_LEFT, true);
								PAD::ENABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_CELLPHONE_RIGHT, true);
								PAD::ENABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_CELLPHONE_SELECT, true);
								PAD::ENABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_CELLPHONE_CANCEL, true);
								PAD::ENABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_CELLPHONE_OPTION, true);
								PAD::ENABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_CELLPHONE_EXTRA_OPTION, true);
								PAD::ENABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_CELLPHONE_SCROLL_FORWARD, true);
								PAD::ENABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_CELLPHONE_SCROLL_BACKWARD, true);
							}
							else
							{
								PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
							}
						
							switch (func_12())
							{
								case -1615086084:
									if (!func_38(-1989308064))
										func_8(-1989308064, 0, 1, 0, 1, 6000, 6000, -1, 0, -1, 68);
									break;
							
								case -1989308064:
									func_7(12, 0);
									func_6(134, 1);
									STATS::STAT_SET_INT(-674681309, 2, true);
									break;
							
								case -1970925435:
									if (!func_38(-1060930305))
										func_8(-1060930305, 0, 1, 2, 2, 6000, 6000, -1, 0, -1, 68);
									break;
							
								case -1060930305:
									func_7(12, 1);
									func_6(134, true);
									STATS::STAT_SET_INT(-674681309, 1, true);
									break;
							
								case -1817481777:
									func_7(12, 2);
									func_6(134, true);
									STATS::STAT_SET_INT(-674681309, 3, true);
									break;
							
								default:
									if (!func_5(0))
										flag = false;
									else if (bLocal_28)
										if (func_4())
											bLocal_28 = false;
									break;
							}
						}
					}
				}
			}
		}
	
		SYSTEM::WAIT(0);
	}

	func_3(20);
	Global_100720 = 0;
	func_1();
	func_43();
	return;
}

int func_1() // Position - 0x2F3 Hash - 0x9482CBBF ^0x8B17A994
{
	if (func_2(false))
		return 0;

	if (Global_100720.f_8)
		if (Global_100720.f_10 > 0)
			return 0;
	else if (Global_100720.f_10 > 1)
		return 0;

	Global_100720.f_10 = Global_100720.f_10 + 1;
	return 1;
}

BOOL func_2(BOOL bParam0) // Position - 0x33E Hash - 0x15889021 ^0xE7262364
{
	if (!bParam0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(-448212099) > 0)
		return true;

	return IS_BIT_SET(Global_78807, 0);
}

int func_3(int iParam0) // Position - 0x366 Hash - 0xFCBFD2CC ^0x1DBFD43E
{
	int num;
	int offset;

	if (iParam0 <= 31)
	{
		num = 9;
		offset = iParam0;
	}
	else
	{
		num = 10;
		offset = iParam0 - 32;
	}

	if (IS_BIT_SET(Global_113648.f_9087.f_99.f_219[num], offset))
	{
		MISC::CLEAR_BIT(&Global_113648.f_9087.f_99.f_219[num], offset);
		return 1;
	}

	return 0;
}

BOOL func_4() // Position - 0x3BD Hash - 0x3E5D30B5 ^0x66847798
{
	if (Global_20383.f_1 == 10 || Global_20383.f_1 == 9)
		return true;

	return false;
}

BOOL func_5(int iParam0) // Position - 0x3E6 Hash - 0xE8921B44 ^0x4F063755
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

void func_6(int iParam0, BOOL bParam1) // Position - 0x43D Hash - 0xD6D1968B ^0x2D6E7FD1
{
	if (iParam0 == 146 || iParam0 == -1)
		return;

	if (Global_113648.f_9087.f_99.f_58[iParam0] == bParam1)
		return;

	Global_113648.f_9087.f_99.f_58[iParam0] = bParam1;
	return;
}

void func_7(int iParam0, int iParam1) // Position - 0x482 Hash - 0x87731F46 ^0xA2D22A46
{
	if (iParam0 == 13 || iParam0 == -1)
		return;

	if (Global_113648.f_9087.f_99.f_205[iParam0] == iParam1)
		return;

	Global_113648.f_9087.f_99.f_205[iParam0] = iParam1;
	return;
}

int func_8(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10) // Position - 0x4C7 Hash - 0x6CC0D4BA ^0x6CC0D4BA
{
	int num;
	int unk;

	if (func_2(false))
		return 0;

	if (iParam5 < 0)
		return 0;

	if (iParam6 < 0)
		return 0;

	if (iParam7 == 76)
		return 0;

	if (iParam8 == 235)
		return 0;

	if (iParam3 == iParam2)
		return 0;

	if (iParam2 != 144 && iParam2 != 0 && iParam2 != 1 && iParam2 != 2)
		return 0;

	if (Global_113648.f_7690.f_136 < 9)
	{
		num = iParam0;
	
		if (Global_113648.f_7690.f_911 == num)
			Global_113648.f_7690.f_911 = -1;
	
		num.f_3 = func_11(iParam1);
		num.f_5 = iParam6;
		num.f_4 = MISC::GET_GAME_TIMER() + iParam5;
		num.f_1 = iParam10;
		address = 0;
		MISC::SET_BIT(&address, iParam2);
		num.f_2 = address;
		num.f_6 = iParam3;
		num.f_14 = iParam4;
		num.f_10 = -1;
		num.f_11 = -1;
		num.f_7 = iParam7;
		num.f_8 = iParam8;
		num.f_9 = iParam9;
		MISC::SET_BIT(&(num.f_1), 0);
		MISC::CLEAR_BIT(&(num.f_1), 1);
	
		if (iParam1 == 0)
			MISC::SET_BIT(&(num.f_1), 10);
	
		Global_113648.f_7690[Global_113648.f_7690.f_136 /*15*/] = { num };
		Global_113648.f_7690.f_136 = Global_113648.f_7690.f_136 + 1;
		func_9(iParam2);
		return 1;
	}

	return 0;
}

void func_9(int iParam0) // Position - 0x618 Hash - 0xDBA91FA2 ^0x62041168
{
	int i;
	int num;
	int j;

	num = 0;

	if (!func_10(iParam0))
		return;

	for (i = 0; i < Global_113648.f_7690.f_136; i = i + 1)
	{
		if (IS_BIT_SET(Global_113648.f_7690[i /*15*/].f_2, iParam0))
			if (Global_113648.f_7690[i /*15*/].f_3 > num)
				num = Global_113648.f_7690[i /*15*/].f_3;
	}

	for (j = 0; j < Global_113648.f_7690.f_764; j = j + 1)
	{
		if (IS_BIT_SET(Global_113648.f_7690.f_651[j /*14*/].f_2, iParam0))
			if (Global_113648.f_7690.f_651[j /*14*/].f_3 == 5)
				num = 5;
	}

	Global_113648.f_7690.f_919[iParam0] = num;
	return;
}

BOOL func_10(int iParam0) // Position - 0x6D6 Hash - 0x8907F004 ^0x8907F004
{
	return iParam0 < 3;
}

int func_11(int iParam0) // Position - 0x6E2 Hash - 0x17C68833 ^0x17C68833
{
	switch (iParam0)
	{
		case 0:
		case 4:
			return 5;
	
		case 7:
			return 4;
	
		case 2:
			return 3;
	
		case 1:
			return 2;
	
		case 3:
			return 1;
	
		case 5:
		case 6:
			return 0;
	}

	return 7;
}

int func_12() // Position - 0x74C Hash - 0x1B9090CC ^0x1B9090CC
{
	return Global_113648.f_7690.f_911;
}

BOOL func_13() // Position - 0x75E Hash - 0x8BFF875A ^0xD0C80A38
{
	if (Global_20383.f_1 > 3)
	{
		MISC::CLEAR_BIT(&Global_8254, 0);
		func_23(0);
		return false;
	}

	MISC::SET_BIT(&Global_8254, 0);

	if (func_14(0, 0, 1, true))
		return true;

	MISC::CLEAR_BIT(&Global_8254, 0);
	return false;
}

BOOL func_14(int iParam0, int iParam1, int iParam2, BOOL bParam3) // Position - 0x7A3 Hash - 0x4D320E4F ^0x4D320E4F
{
	if (Global_78558)
	{
		if (iParam0 != 17 && iParam0 != 3 && iParam0 != 23 && iParam0 != 1)
			return false;
	
		if (!IS_BIT_SET(Global_4542297, 14))
		{
			if (iParam0 == 17)
			{
				MISC::SET_BIT(&Global_4542297, 14);
				MISC::SET_BIT(&Global_4542297, 16);
			}
		
			if (iParam0 == 3)
			{
				MISC::SET_BIT(&Global_4542297, 14);
				MISC::SET_BIT(&Global_4542297, 15);
			}
		
			if (iParam0 == 23)
			{
				MISC::SET_BIT(&Global_4542297, 14);
				MISC::SET_BIT(&Global_4542297, 27);
			}
		
			if (iParam0 == 1)
			{
				MISC::SET_BIT(&Global_4542297, 14);
				MISC::SET_BIT(&Global_4542297, 29);
			}
		}
	
		if (Global_8260[iParam0 /*15*/].f_9 == 0)
			func_20();
	
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_8260[iParam0 /*15*/].f_9) > 0)
		{
			MISC::CLEAR_BIT(&Global_4542297, 14);
			MISC::CLEAR_BIT(&Global_4542297, 16);
			MISC::CLEAR_BIT(&Global_4542297, 15);
			MISC::CLEAR_BIT(&Global_4542297, 27);
			MISC::CLEAR_BIT(&Global_4542297, 29);
			return true;
		}
		else
		{
			return false;
		}
	}

	func_19();

	if (Global_20383.f_1 == 9)
		return false;

	if (iParam2 == 0)
		if (func_5(0) == true)
			return false;

	if (Global_20349 == 1)
		return false;

	if (Global_20383.f_1 == 7)
		return false;

	iParam1 == 1;

	if (!SCRIPT::IS_THREAD_ACTIVE(Global_20380))
	{
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(-754107665) == 0)
		{
			if (Global_20383.f_1 < 4)
			{
				func_18("cellphone_flashhand");
			
				if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(-754107665) == 0)
					Global_20380 = SYSTEM::START_NEW_SCRIPT("cellphone_flashhand", DEFAULT);
			
				SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("cellphone_flashhand");
			}
		}
	}

	while (!Global_20365)
	{
		SYSTEM::WAIT(0);
	}

	func_20();
	func_15();

	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_8260[iParam0 /*15*/].f_9) == 0)
	{
		Global_8859 = 0;
		Global_20383.f_1 = 7;
		func_18(&(Global_8260[iParam0 /*15*/].f_5));
	
		if (bParam3)
			if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_8260[iParam0 /*15*/].f_9) == 0)
				Global_20381 = SYSTEM::START_NEW_SCRIPT(&(Global_8260[iParam0 /*15*/].f_5), CONTACTS_APP);
		else if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_8260[iParam0 /*15*/].f_9) == 0)
			Global_20381 = SYSTEM::START_NEW_SCRIPT(&(Global_8260[iParam0 /*15*/].f_5), CELLPHONE);
	
		SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED(&(Global_8260[iParam0 /*15*/].f_5));
		return true;
	}

	return true;
}

void func_15() // Position - 0x9DE Hash - 0xB51CAE6B ^0x60FA5181
{
	if (Global_78558 == false)
	{
		Global_8260[14 /*15*/].f_4 = -99;
		Global_8260[4 /*15*/].f_4 = -99;
	
		if (Global_2694519)
		{
			if (func_17(14))
			{
				func_16(2, _("Internet"), 2, "appInternet", 6, 1, 1, 0, 0);
				func_16(14, _("Job List"), 7, "appMPJobListNEW", 12, 1, 1, 0, 0);
			}
			else
			{
				func_16(14, _("Job List"), 2, "appMPJobListNEW", 12, 1, 1, 0, 0);
			}
		}
		else
		{
			func_16(4, _("Check List"), 2, "appChecklist", 39, 1, 1, 0, 0);
		}
	}

	return;
}

void func_16(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8) // Position - 0xA62 Hash - 0xC22558F4 ^0xA170BFDC
{
	TEXT_LABEL_ASSIGN_STRING(&Global_8260[iParam0 /*15*/], sParam1, 16);
	Global_8260[iParam0 /*15*/].f_4 = iParam2;
	TEXT_LABEL_ASSIGN_STRING(&(Global_8260[iParam0 /*15*/].f_5), sParam3, 16);
	Global_8260[iParam0 /*15*/].f_9 = MISC::GET_HASH_KEY(sParam3);
	Global_8260[iParam0 /*15*/].f_10 = iParam4;
	Global_8260[iParam0 /*15*/].f_11 = iParam5;
	Global_8260[iParam0 /*15*/].f_12 = iParam6;
	Global_8260[iParam0 /*15*/].f_13 = iParam7;
	Global_8260[iParam0 /*15*/].f_14 = iParam8;

	if (Global_8260[iParam0 /*15*/].f_12 == 0)
		Global_8260[iParam0 /*15*/].f_12 = 0;

	if (Global_8260[iParam0 /*15*/].f_13 == 0)
		Global_8260[iParam0 /*15*/].f_13 = 0;

	if (Global_8260[iParam0 /*15*/].f_14 == 0)
		Global_8260[iParam0 /*15*/].f_14 = 0;

	return;
}

BOOL func_17(int iParam0) // Position - 0xB18 Hash - 0x937D8816 ^0x937D8816
{
	return Global_43257 == iParam0;
}

void func_18(char* sParam0) // Position - 0xB26 Hash - 0x68B96D20 ^0xE2CC02C7
{
	SCRIPT::REQUEST_SCRIPT(sParam0);

	while (!SCRIPT::HAS_SCRIPT_LOADED(sParam0))
	{
		SYSTEM::WAIT(0);
	}

	return;
}

void func_19() // Position - 0xB46 Hash - 0x98476CE1 ^0x250FEB7C
{
	if (func_17(14))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_113648.f_28052[0 /*29*/])
				Global_20383 = 0;
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_113648.f_28052[1 /*29*/])
				Global_20383 = 1;
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_113648.f_28052[2 /*29*/])
				Global_20383 = 2;
			else
				Global_20383 = 0;
	}
	else
	{
		Global_20383 = func_30();
	
		if (Global_20383 == 145)
			Global_20383 = 3;
	
		if (Global_78558)
			Global_20383 = 3;
	
		if (Global_20383 > 3)
			Global_20383 = 3;
	}

	return;
}

void func_20() // Position - 0xBE8 Hash - 0x5BBDBFC7 ^0x21A4F70B
{
	int i;
	int num;
	int num2;

	for (i = 0; i < 34; i = i + 1)
	{
		Global_8260[i /*15*/].f_4 = -99;
	}

	if (Global_78558 == false)
	{
		num = 0;
	
		while (num2 < 161)
		{
			if (func_22(num2, Global_20383) == 1)
				num = 1;
		
			num2 = num2 + 1;
		}
	
		func_16(7, _("Email"), 0, "appEmail", 4, 1, 1, 0, 0);
		func_16(1, _("Texts"), 1, "appTextMessage", 2, 1, 1, 0, 0);
		func_16(4, _("Check List"), 2, "appChecklist", 39, 1, 1, 0, 0);
	
		if (Global_43257 == 15 && func_2(false) == false && Global_8258 == 0)
		{
			func_16(20, _("Quick Save"), 3, "appSettings", 43, 1, 1, 0, 0);
			Global_20587 = 0;
			Global_8259 = 255;
		}
		else
		{
			func_16(20, _("Quick Save"), 3, "appSettings", 43, 1, 1, 0, 0);
			Global_20587 = 1;
			Global_8259 = 42;
		}
	
		if (num == 1)
			func_16(0, _("Contacts"), 4, "appContacts", 27, 1, 1, 0, 0);
		else
			func_16(0, _("Contacts"), 4, "appContacts", 5, 1, 1, 0, 0);
	
		func_16(10, _("Settings"), 5, "appSettings", 24, 1, 1, 0, 0);
		func_16(3, _("Snapmatic"), 6, "appCamera", 1, 1, 1, 0, 0);
		func_16(2, _("Internet"), 7, "appInternet", 6, 1, 1, 0, 0);
	
		if (Global_113648.f_14053.f_89 == 1)
			func_16(17, _("Trackify"), 8, "appTrackify", 42, 1, 1, 0, 0);
	
		if (Global_113648.f_14053.f_88 == 1)
			func_16(16, _("Sniper"), 0, "appContacts", 40, 2, 1, 0, 0);
	
		func_16(25, _("More Apps"), -99, "appContacts", 17, 2, 1, 0, 0);
		func_16(9, _("BAWSAQ"), -99, "appContacts", 13, 2, 1, 0, 0);
		func_16(11, _("More Apps"), -99, "appContacts", 8, 2, 1, 0, 0);
		func_16(27, _("Spare"), -99, "appContacts", 17, 2, 1, 0, 0);
		func_16(28, _("Spare"), -99, "appContacts", 17, 2, 1, 0, 0);
		func_16(29, _("Spare"), -99, "appSettings", 17, 2, 1, 0, 0);
		func_16(30, _("Spare"), -99, "appContacts", 17, 2, 1, 0, 0);
		func_16(31, _("Spare"), -99, "appContacts", 17, 2, 1, 0, 0);
		func_16(32, _("Spare"), -99, "appSettings", 17, 2, 1, 0, 0);
	}
	else
	{
		func_16(7, _("Email"), 0, "appMPEmail", 4, 1, 1, 0, 0);
		func_16(10, _("Settings"), 5, "appSettings", 24, 1, 1, 0, 0);
		func_16(1, _("Texts"), 1, "appTextMessage", 2, 1, 1, 0, 0);
		func_16(3, _("Snapmatic"), 6, "appCamera", 1, 1, 1, 0, 0);
		func_16(2, _("Internet"), 7, "appInternet", 6, 1, 1, 0, 0);
		func_16(14, _("Job List"), 4, "appMPJobListNEW", 12, 1, 1, 0, 0);
		func_16(0, _("Contacts"), 2, "appContacts", 5, 1, 1, 0, 0);
		func_16(21, _("Quick Join"), 3, "AppJIPMP", 14, 1, 1, 0, 0);
	
		if (IS_BIT_SET(Global_4542297, 4) == true)
			func_16(17, _("Trackify"), 8, "appTrackify", 42, 1, 1, 0, 0);
	
		func_16(13, _("Player List"), -99, "appMPCopBackup", 39, 1, 1, 0, 0);
		func_16(13, "CELL_20", -99, "appMPCopBackup", 16, 1, 1, 0, 0);
		func_16(15, _("Map"), -99, "appContacts", 8, 1, 1, 0, 0);
		func_16(9, _("BAWSAQ"), -99, "appContacts", 13, 2, 1, 0, 0);
		func_16(5, _("Sidetasks"), -99, "appContacts", 12, 2, 1, 0, 0);
		func_16(23, _("Spare"), 0, "appContacts", 17, 2, 1, 0, 0);
		func_16(24, _("Spare"), 1, "appContacts", 17, 2, 1, 0, 0);
		func_16(25, _("Spare"), 2, "appContacts", 17, 2, 1, 0, 0);
		func_16(26, _("Spare"), 3, "appContacts", 17, 2, 1, 0, 0);
		func_16(27, _("Spare"), 4, "appContacts", 17, 2, 1, 0, 0);
		func_16(28, _("Spare"), 5, "appContacts", 17, 2, 1, 0, 0);
		func_16(29, _("Spare"), 6, "appContacts", 17, 2, 1, 0, 0);
		func_16(30, _("Spare"), 7, "appContacts", 17, 2, 1, 0, 0);
		func_16(31, _("Spare"), 8, "appContacts", 17, 2, 1, 0, 0);
		func_16(32, _("Spare"), 9, "appContacts", 17, 2, 1, 0, 0);
		func_16(33, _("Spare"), 10, "appContacts", 17, 2, 1, 0, 0);
	
		if (!IS_BIT_SET(Global_4542297, 4) == true)
			if (Global_1836102)
				func_16(23, _("VLSI Unlock"), 8, "AppVLSI", 54, 1, 1, 0, 0);
			else if (IS_BIT_SET(Global_4542297, 20) == true)
				func_16(23, _("Sightseer"), 8, "AppSettings", 59, 1, 1, 0, 0);
			else if (IS_BIT_SET(Global_4542297, 22) == true)
				func_16(23, _("Extraction"), 8, "AppExtraction", 58, 1, 1, 0, 0);
			else if (IS_BIT_SET(Global_4542297, 26) == true)
				if (func_21())
					func_16(23, _("Contacts"), -99, "appContacts", 5, 1, 1, 0, 0);
				else
					func_16(23, _("SecuroServ Hack"), 8, "AppSecuroHack", 57, 1, 1, 0, 0);
	
		if (IS_BIT_SET(Global_4542297, 4) == false && Global_1836102 == false && IS_BIT_SET(Global_4542297, 20) == false && IS_BIT_SET(Global_4542297, 22) == false && IS_BIT_SET(Global_4542297, 26) == false)
			if (func_21())
				func_16(23, _("Contacts"), -99, "appContacts", 5, 1, 1, 0, 0);
			else
				func_16(23, _("SecuroServ"), 8, "appMPBossAgency", 57, 1, 1, 0, 0);
	}

	return;
}

BOOL func_21() // Position - 0x111A Hash - 0x4F6FCCAE ^0x4F6FCCAE
{
	if (Global_78558)
		if (Global_1836499 || Global_1836500 == 1)
			return true;

	return false;
}

int func_22(int iParam0, int iParam1) // Position - 0x1141 Hash - 0x97DCD8A1 ^0xFBF2A354
{
	if (iParam1 < 0 || iParam1 > 4)
		return 0;

	return Global_2028[iParam0 /*29*/].f_19[iParam1];
}

void func_23(int iParam0) // Position - 0x116B Hash - 0x4066FEF5 ^0x9787FBDA
{
	if (func_27())
		return;

	if (Global_20584)
		if (func_26())
			func_25(true, true);
		else
			func_25(false, false);

	if (Global_20383.f_1 == 10 || Global_20383.f_1 == 9)
		MISC::SET_BIT(&Global_8254, 16);

	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);

	Global_21725 = 5;

	if (iParam0 == 1)
		MISC::SET_BIT(&Global_8253, 30);
	else
		MISC::CLEAR_BIT(&Global_8253, 30);

	if (!func_24())
		Global_20383.f_1 = 3;

	return;
}

BOOL func_24() // Position - 0x11F5 Hash - 0xD140D54A ^0xE638D98F
{
	if (Global_20383.f_1 == 1 || Global_20383.f_1 == 0)
		return true;

	return false;
}

void func_25(BOOL bParam0, BOOL bParam1) // Position - 0x121C Hash - 0xF40FC178 ^0xA6F60F17
{
	if (bParam0)
	{
		if (func_5(0))
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

BOOL func_26() // Position - 0x1290 Hash - 0x8DF3D75D ^0x8DF3D75D
{
	return IS_BIT_SET(Global_1962996, 5);
}

BOOL func_27() // Position - 0x129E Hash - 0xC41437CB ^0xC41437CB
{
	return IS_BIT_SET(Global_1962996, 19);
}

BOOL func_28() // Position - 0x12AD Hash - 0x7FE517FE ^0x128A3BC8
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return Global_98159.f_44 == 1;

	return false;
}

BOOL func_29() // Position - 0x12C9 Hash - 0x3CA1BB47 ^0xB78A1ACB
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(-1424752554) > 0)
		return true;

	return false;
}

int func_30() // Position - 0x12E3 Hash - 0x3C5423D7 ^0x3C5423D7
{
	func_31();
	return Global_113648.f_2365.f_539.f_4321;
}

void func_31() // Position - 0x12FC Hash - 0xD1F2D853 ^0xF9F5FD4D
{
	int num;

	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_33(Global_113648.f_2365.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			num = func_32(PLAYER::PLAYER_PED_ID());
		
			if (func_10(num) && !func_17(14) || Global_112599)
			{
				if (Global_113648.f_2365.f_539.f_4321 != num && func_10(Global_113648.f_2365.f_539.f_4321))
					Global_113648.f_2365.f_539.f_4322 = Global_113648.f_2365.f_539.f_4321;
			
				Global_113648.f_2365.f_539.f_4323 = num;
				Global_113648.f_2365.f_539.f_4321 = num;
				return;
			}
		}
		else
		{
			if (Global_113648.f_2365.f_539.f_4321 != 145)
				Global_113648.f_2365.f_539.f_4323 = Global_113648.f_2365.f_539.f_4321;
		
			return;
		}
	}

	Global_113648.f_2365.f_539.f_4321 = 145;
	return;
}

int func_32(Ped pedParam0) // Position - 0x13F9 Hash - 0xAC4E9801 ^0xB379A75F
{
	int i;
	Hash entityModel;

	if (ENTITY::DOES_ENTITY_EXIST(pedParam0))
	{
		entityModel = ENTITY::GET_ENTITY_MODEL(pedParam0);
	
		for (i = 0; i <= 2; i = i + 1)
		{
			if (func_33(i) == entityModel)
				return i;
		}
	}

	return 145;
}

Hash func_33(int iParam0) // Position - 0x1436 Hash - 0xADCB9755 ^0xADCB9755
{
	if (func_10(iParam0))
		return func_34(iParam0);
	else
		iParam0 != 145;

	return 0;
}

Hash func_34(int iParam0) // Position - 0x145B Hash - 0xE4CEEC2C ^0xE4CEEC2C
{
	return Global_2028[iParam0 /*29*/];
}

BOOL func_35(int iParam0) // Position - 0x146A Hash - 0xB6246282 ^0x2350A449
{
	if (iParam0 == 146 || iParam0 == -1)
		return false;

	return Global_113648.f_9087.f_99.f_58[iParam0];
}

BOOL func_36(int iParam0) // Position - 0x1497 Hash - 0x35F9F9C ^0x35F9F9C
{
	if (iParam0 == 94 || iParam0 == -1)
		return false;

	return Global_113648.f_9087.f_330[iParam0 /*6*/];
}

int func_37(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x14C3 Hash - 0xC5B48713 ^0xC5B48713
{
	int num;

	if (func_2(false))
		return 0;

	if (iParam2 < 3)
		if (IS_BIT_SET(iParam1, iParam2))
			return 0;

	if (iParam1 < 1 || iParam1 > 7)
		return 0;

	if (iParam4 <= 0)
		return 0;

	if (Global_113648.f_7690.f_650 < 30)
	{
		num = iParam0;
	
		if (Global_113648.f_7690.f_911 == num)
			Global_113648.f_7690.f_911 = -1;
	
		num.f_1 = 0;
		num.f_6 = iParam2;
		num.f_2 = iParam1;
		num.f_14 = iParam3;
		num.f_3 = iParam6;
		num.f_7 = -1;
		num.f_8 = 0;
		num.f_9 = -1;
		num.f_4 = MISC::GET_GAME_TIMER() + iParam4;
		num.f_9 = iParam5;
		num.f_10 = -1;
		num.f_11 = -1;
		MISC::SET_BIT(&(num.f_1), 0);
		MISC::SET_BIT(&(num.f_1), 6);
		Global_113648.f_7690.f_199[Global_113648.f_7690.f_650 /*15*/] = { num };
		Global_113648.f_7690.f_650 = Global_113648.f_7690.f_650 + 1;
		return 1;
	}

	return 0;
}

BOOL func_38(int iParam0) // Position - 0x15C6 Hash - 0x3EC1FCE7 ^0x9D52DE7
{
	int i;

	for (i = 0; i < Global_113648.f_7690.f_136; i = i + 1)
	{
		if (Global_113648.f_7690[i /*15*/] == iParam0)
			return true;
	}

	for (i = 0; i < Global_113648.f_7690.f_650; i = i + 1)
	{
		if (Global_113648.f_7690.f_199[i /*15*/] == iParam0)
			return true;
	}

	for (i = 0; i < Global_113648.f_7690.f_198; i = i + 1)
	{
		if (Global_113648.f_7690.f_137[i /*15*/] == iParam0)
			return true;
	}

	for (i = 0; i < Global_113648.f_7690.f_764; i = i + 1)
	{
		if (Global_113648.f_7690.f_651[i /*14*/] == iParam0)
			return true;
	}

	for (i = 0; i < Global_113648.f_7690.f_866; i = i + 1)
	{
		if (Global_113648.f_7690.f_765[i /*10*/] == iParam0)
			return true;
	}

	return false;
}

void func_39() // Position - 0x16C2 Hash - 0xEB0D43DD ^0xEB0D43DD
{
	Global_100720 = 1;
	return;
}

void func_40(int iParam0) // Position - 0x16CF Hash - 0x99412296 ^0x99412296
{
	if (iParam0 == 144 || iParam0 == 145 || iParam0 == 161 || iParam0 == 191 || iParam0 == 190 || iParam0 == 162)
		return;

	Global_43809[iParam0] = MISC::GET_GAME_TIMER();
	return;
}

void func_41() // Position - 0x1724 Hash - 0xD6E4EF90 ^0xCC2CF900
{
	Global_43808 = MISC::GET_GAME_TIMER();
	return;
}

int func_42(int iParam0) // Position - 0x1733 Hash - 0xFCBFD2CC ^0x1DBFD43E
{
	int num;
	int offset;

	if (iParam0 <= 31)
	{
		num = 9;
		offset = iParam0;
	}
	else
	{
		num = 10;
		offset = iParam0 - 32;
	}

	if (IS_BIT_SET(Global_113648.f_9087.f_99.f_219[num], offset))
		return 0;

	MISC::SET_BIT(&Global_113648.f_9087.f_99.f_219[num], offset);
	return 1;
}

void func_43() // Position - 0x178A Hash - 0xB9E15BDB ^0xD8A8920
{
	func_44(-1615086084);
	func_44(-1989308064);
	func_44(-1970925435);
	func_44(-1060930305);
	func_44(-1817481777);
	Global_8258 = 0;
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
	SCRIPT::TERMINATE_THIS_THREAD();
	return;
}

int func_44(int iParam0) // Position - 0x17D6 Hash - 0xA75852D8 ^0xD16C52E
{
	int i;
	int num;

	num = 0;

	for (i = 0; i < Global_113648.f_7690.f_136; i = i + 1)
	{
		if (Global_113648.f_7690[i /*15*/] == iParam0)
		{
			if (Global_43804 != i)
			{
				func_55(i);
				func_48(iParam0);
				num = 1;
			}
		}
	}

	for (i = 0; i < Global_113648.f_7690.f_198; i = i + 1)
	{
		if (Global_113648.f_7690.f_137[i /*15*/] == iParam0)
		{
			func_48(iParam0);
			num = 1;
		}
	}

	for (i = 0; i < Global_113648.f_7690.f_650; i = i + 1)
	{
		if (Global_113648.f_7690.f_199[i /*15*/] == iParam0)
		{
			func_47(iParam0);
			num = 1;
		}
	}

	for (i = 0; i < Global_113648.f_7690.f_764; i = i + 1)
	{
		if (Global_113648.f_7690.f_651[i /*14*/] == iParam0)
		{
			func_46(i);
			num = 1;
		}
	}

	for (i = 0; i < Global_113648.f_7690.f_866; i = i + 1)
	{
		if (Global_113648.f_7690.f_765[i /*10*/] == iParam0)
		{
			func_45(i);
			num = 1;
		}
	}

	return num;
}

void func_45(int iParam0) // Position - 0x18FD Hash - 0xEC7DB104 ^0xEC7DB104
{
	int i;
	var unk;

	if (iParam0 < 0 || iParam0 >= Global_113648.f_7690.f_866)
		return;

	if (Global_113648.f_7690.f_866 > 1)
	{
		for (i = iParam0; i <= Global_113648.f_7690.f_866 - 2; i = i + 1)
		{
			Global_113648.f_7690.f_765[i /*10*/] = { Global_113648.f_7690.f_765[i + 1 /*10*/] };
		}
	}

	if (Global_113648.f_7690.f_866 > 0)
	{
		Global_113648.f_7690.f_765[Global_113648.f_7690.f_866 - 1 /*10*/] = { unk };
		Global_113648.f_7690.f_866 = Global_113648.f_7690.f_866 - 1;
	}

	return;
}

void func_46(int iParam0) // Position - 0x19B6 Hash - 0xEC7DB104 ^0xEC7DB104
{
	int i;
	var unk;

	if (iParam0 < 0 || iParam0 >= Global_113648.f_7690.f_764)
		return;

	if (Global_113648.f_7690.f_764 > 1)
	{
		for (i = iParam0; i <= Global_113648.f_7690.f_764 - 2; i = i + 1)
		{
			Global_113648.f_7690.f_651[i /*14*/] = { Global_113648.f_7690.f_651[i + 1 /*14*/] };
		}
	}

	if (Global_113648.f_7690.f_764 > 0)
	{
		Global_113648.f_7690.f_651[Global_113648.f_7690.f_764 - 1 /*14*/] = { unk };
		Global_113648.f_7690.f_764 = Global_113648.f_7690.f_764 - 1;
	}

	func_9(0);
	func_9(1);
	func_9(2);
	return;
}

void func_47(int iParam0) // Position - 0x1A7E Hash - 0x137FFF25 ^0x82C17B
{
	var unk;
	int unk2;
	int unk3;

	for (i = 0; i < Global_113648.f_7690.f_650; i = i + 1)
	{
		if (Global_113648.f_7690.f_199[i /*15*/] == iParam0)
		{
			for (j = i; j <= Global_113648.f_7690.f_650 - 2; j = j + 1)
			{
				Global_113648.f_7690.f_199[j /*15*/] = { Global_113648.f_7690.f_199[j + 1 /*15*/] };
			}
		
			Global_113648.f_7690.f_199[Global_113648.f_7690.f_650 - 1 /*15*/] = { unk };
			Global_113648.f_7690.f_650 = Global_113648.f_7690.f_650 - 1;
			return;
		}
	}

	return;
}

void func_48(int iParam0) // Position - 0x1B2B Hash - 0xCCFAC6AA ^0xEC431D32
{
	var unk;
	int unk2;
	int unk3;

	for (i = 0; i < Global_113648.f_7690.f_198; i = i + 1)
	{
		if (Global_113648.f_7690.f_137[i /*15*/] == iParam0)
		{
			func_49(Global_113648.f_7690.f_137[i /*15*/].f_6);
		
			for (j = i; j <= Global_113648.f_7690.f_198 - 2; j = j + 1)
			{
				Global_113648.f_7690.f_137[j /*15*/] = { Global_113648.f_7690.f_137[j + 1 /*15*/] };
			}
		
			Global_113648.f_7690.f_137[Global_113648.f_7690.f_198 - 1 /*15*/] = { unk };
			Global_113648.f_7690.f_198 = Global_113648.f_7690.f_198 - 1;
			return;
		}
	}

	return;
}

int func_49(int iParam0) // Position - 0x1BE7 Hash - 0xE624B23E ^0x73975030
{
	int num;

	if (Global_117[iParam0 /*10*/].f_8 != 169)
	{
		if (func_22(iParam0, Global_20383) == 1)
		{
			func_54(iParam0, Global_20383, 0);
		
			if (func_53(iParam0, Global_20383) == 0)
			{
				num = Global_20383;
				func_50(iParam0, num);
			}
		
			return 1;
		}
		else
		{
			return 0;
		}
	}

	return 0;
}

void func_50(int iParam0, int iParam1) // Position - 0x1C3D Hash - 0x5207FAC0 ^0x6E316FC
{
	int num;

	if (Global_117[iParam0 /*10*/].f_8 != 169)
	{
		if (iParam1 > 3)
		{
		}
		else
		{
			num = iParam1;
			func_52(iParam0, num, 0);
			func_51(iParam0, num, 0);
		}
	}

	return;
}

void func_51(int iParam0, int iParam1, int iParam2) // Position - 0x1C72 Hash - 0xAB9B6CC ^0x1B5EEB55
{
	if (iParam1 < 0 || iParam1 > 4)
		return;

	Global_2028[iParam0 /*29*/].f_24[iParam1] = iParam2;

	if (iParam0 < 162)
		Global_113648.f_28052[iParam0 /*29*/].f_24[iParam1] = iParam2;

	return;
}

void func_52(int iParam0, int iParam1, int iParam2) // Position - 0x1CB7 Hash - 0xAB9B6CC ^0x80AE0F15
{
	if (iParam1 < 0 || iParam1 > 4)
		return;

	Global_2028[iParam0 /*29*/].f_12[iParam1] = iParam2;

	if (iParam0 < 162)
		Global_113648.f_28052[iParam0 /*29*/].f_12[iParam1] = iParam2;

	return;
}

int func_53(int iParam0, int iParam1) // Position - 0x1CFC Hash - 0x97DCD8A1 ^0xF8178EDD
{
	if (iParam1 < 0 || iParam1 > 4)
		return 0;

	return Global_2028[iParam0 /*29*/].f_24[iParam1];
}

void func_54(int iParam0, int iParam1, int iParam2) // Position - 0x1D26 Hash - 0xB4ABC33 ^0x67322EDD
{
	Global_2028[iParam0 /*29*/].f_19[iParam1] = iParam2;

	if (iParam0 < 162)
		Global_113648.f_28052[iParam0 /*29*/].f_19[iParam1] = iParam2;

	return;
}

void func_55(int iParam0) // Position - 0x1D57 Hash - 0x4FA51D98 ^0x238D4E50
{
	int i;
	int num;
	var unk;

	if (iParam0 < 0 || iParam0 >= Global_113648.f_7690.f_136)
		return;

	num = Global_113648.f_7690[iParam0 /*15*/].f_2;

	if (Global_113648.f_7690.f_136 > 1)
	{
		for (i = iParam0; i <= Global_113648.f_7690.f_136 - 2; i = i + 1)
		{
			Global_113648.f_7690[i /*15*/] = { Global_113648.f_7690[i + 1 /*15*/] };
		}
	}

	if (Global_113648.f_7690.f_136 > 0)
	{
		Global_113648.f_7690[Global_113648.f_7690.f_136 - 1 /*15*/] = { unk };
		Global_113648.f_7690.f_136 = Global_113648.f_7690.f_136 - 1;
	}

	for (i = 0; i < 3; i = i + 1)
	{
		if (IS_BIT_SET(num, i))
			func_9(i);
	}

	return;
}

