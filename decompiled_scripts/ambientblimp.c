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
	int iLocal_28 = 0;
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
	sLocal_20 = "NULL";
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(82))
		func_33();

	if (func_32())
		iLocal_28 = 1;

	while (true)
	{
		switch (iLocal_28)
		{
			case 0:
				if (func_10())
					iLocal_28 = 1;
				break;
		
			case 1:
				if (func_1())
					func_33();
				break;
		}
	
		SYSTEM::WAIT(1000);
	}

	return;
}

BOOL func_1() // Position - 0x9D Hash - 0xEA0E79A5 ^0xE5E5AA84
{
	switch (func_8(_("The Blimp has now been unlocked. Call the Blimp contact on your cellphone to arrange for a Blimp to be delivered to the nearest available drop-off location.")))
	{
		case 2:
			func_5(_("The Blimp has now been unlocked. Call the Blimp contact on your cellphone to arrange for a Blimp to be delivered to the nearest available drop-off location."), 1, 0, 1000, 10000, 7, 0, 0, 0);
			break;
	
		case 1:
			func_4(57);
			func_2();
			return true;
	
		case 0:
			break;
	}

	return false;
}

int func_2() // Position - 0xED Hash - 0x9482CBBF ^0x8B17A994
{
	if (func_3(false))
		return 0;

	if (Global_100720.f_8)
		if (Global_100720.f_10 > 0)
			return 0;
	else if (Global_100720.f_10 > 1)
		return 0;

	Global_100720.f_10 = Global_100720.f_10 + 1;
	return 1;
}

BOOL func_3(BOOL bParam0) // Position - 0x138 Hash - 0x15889021 ^0xE7262364
{
	if (!bParam0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(-448212099) > 0)
		return true;

	return IS_BIT_SET(Global_78807, 0);
}

void func_4(int iParam0) // Position - 0x160 Hash - 0x12249850 ^0x46987D7A
{
	int offset;
	int i;

	offset = iParam0;

	for (i = 0; offset > 31; i = i + 1)
	{
		offset = offset - 32;
	}

	if (i < 3)
		MISC::SET_BIT(&Global_113648.f_20412.f_150[i], offset);

	return;
}

void func_5(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8) // Position - 0x1A2 Hash - 0x8D7475AD ^0x8D7475AD
{
	func_6(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
	return;
}

void func_6(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9) // Position - 0x1C3 Hash - 0x2422F518 ^0x7E6F3C42
{
	int i;

	if (MISC::ARE_STRINGS_EQUAL(sParam0, ""))
		return;

	if (iParam3 < 0)
		return;

	if (iParam5 < 500 && iParam5 != -1)
		return;

	if (iParam4 < 0 && iParam4 != -1)
		return;

	if (iParam6 < 1 || iParam6 > 7)
		return;

	if (iParam7 == 235)
		return;

	if (iParam8 == 235)
		return;

	for (i = 0; i < Global_113648.f_20412.f_145; i = i + 1)
	{
		if (MISC::ARE_STRINGS_EQUAL(&Global_113648.f_20412[i /*16*/], sParam0))
			return;
	}

	if (Global_113648.f_20412.f_145 < 9)
	{
		TEXT_LABEL_ASSIGN_STRING(&Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/], sParam0, 16);
		TEXT_LABEL_ASSIGN_STRING(&(Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/].f_4), sParam1, 16);
		Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/].f_8 = MISC::GET_GAME_TIMER() + iParam3;
		Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/].f_9 = iParam5;
		Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/].f_11 = iParam6;
		Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/].f_12 = iParam2;
		Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/].f_13 = iParam7;
		Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/].f_14 = iParam8;
		Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/].f_15 = iParam9;
	
		if (iParam4 != -1)
			Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/].f_10 = MISC::GET_GAME_TIMER() + iParam3 + iParam4;
		else
			Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/].f_10 = -1;
	
		Global_113648.f_20412.f_145 = Global_113648.f_20412.f_145 + 1;
		func_7();
	}

	return;
}

void func_7() // Position - 0x396 Hash - 0xCF8881D1 ^0x40507183
{
	int i;

	for (i = 0; i < 3; i = i + 1)
	{
		Global_113648.f_20412.f_146[i] = 0;
	}

	for (i = 0; i < Global_113648.f_20412.f_145; i = i + 1)
	{
		if (IS_BIT_SET(Global_113648.f_20412[i /*16*/].f_11, 0))
			if (Global_113648.f_20412[i /*16*/].f_12 > Global_113648.f_20412.f_146[0])
				Global_113648.f_20412.f_146[0] = Global_113648.f_20412[i /*16*/].f_12;
	
		if (IS_BIT_SET(Global_113648.f_20412[i /*16*/].f_11, 1))
			if (Global_113648.f_20412[i /*16*/].f_12 > Global_113648.f_20412.f_146[1])
				Global_113648.f_20412.f_146[1] = Global_113648.f_20412[i /*16*/].f_12;
	
		if (IS_BIT_SET(Global_113648.f_20412[i /*16*/].f_11, 2))
			if (Global_113648.f_20412[i /*16*/].f_12 > Global_113648.f_20412.f_146[2])
				Global_113648.f_20412.f_146[2] = Global_113648.f_20412[i /*16*/].f_12;
	}

	return;
}

int func_8(char* sParam0) // Position - 0x4AD Hash - 0x3411B367 ^0xD0D08AE8
{
	if (MISC::ARE_STRINGS_EQUAL(sParam0, &Global_112291))
		return 1;

	if (func_9(sParam0))
		return 0;

	return 2;
}

BOOL func_9(char* sParam0) // Position - 0x4D4 Hash - 0x486E76BF ^0xD39F7AD6
{
	int i;

	for (i = 0; i < Global_113648.f_20412.f_145; i = i + 1)
	{
		if (MISC::ARE_STRINGS_EQUAL(sParam0, &Global_113648.f_20412[i /*16*/]))
			return true;
	}

	return false;
}

BOOL func_10() // Position - 0x50F Hash - 0xDA41AB50 ^0xA7CEB4A4
{
	if (func_31() || func_30() || func_29() || func_28() || func_27())
	{
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) && !STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
		{
			if (func_26(0))
			{
				func_11(48, 4, false);
				func_2();
				return true;
			}
		}
	}

	return false;
}

void func_11(int iParam0, int iParam1, BOOL bParam2) // Position - 0x582 Hash - 0x8A81DB2F ^0xDFC7B4EA
{
	int num;

	Global_8939 = iParam0;

	if (Global_117[iParam0 /*10*/].f_8 != 169)
	{
		func_18();
	
		if (iParam1 == 4)
		{
			func_17(iParam0, 0, 1);
			func_17(iParam0, 1, 1);
			func_17(iParam0, 2, 1);
			func_16(iParam0, 0, 1);
			func_16(iParam0, 1, 1);
			func_16(iParam0, 2, 1);
		}
		else
		{
			if (func_15(iParam0, iParam1) == 1 && func_14(iParam0, iParam1) == 1)
				bParam2 = false;
		
			num = iParam1;
			func_17(iParam0, num, 1);
			func_16(iParam0, num, 1);
		
			if (iParam0 == 172 && !Global_2793044.f_6891)
				bParam2 = false;
		
			if (iParam0 == 171 && !Global_2793044.f_6890)
				bParam2 = false;
		
			if (iParam0 == 173 && !Global_2793044.f_6890)
				bParam2 = false;
		}
	
		if (bParam2)
		{
			if (!Global_78558)
			{
				if (iParam1 != 4)
				{
					if (Global_20383 != iParam1)
					{
						Global_8912[iParam1 /*4*/] = { func_13(iParam0) };
						Global_8929[iParam1] = 1;
						Global_8934[iParam1] = iParam0;
					}
					else if (iParam0 == Global_20383)
					{
					}
					else
					{
						Global_8863[1 /*6*/] = { func_13(iParam0) };
						Global_8863[1 /*6*/].f_5 = iParam1;
						func_12();
					}
				}
				else
				{
					Global_8863[1 /*6*/] = { func_13(iParam0) };
					Global_8863[1 /*6*/].f_5 = iParam1;
					func_12();
				}
			}
			else
			{
				Global_8863[1 /*6*/] = { func_13(iParam0) };
				Global_8863[1 /*6*/].f_5 = iParam1;
				func_12();
			}
		}
	}

	return;
}

void func_12() // Position - 0x6FA Hash - 0x41945C1A ^0xD6B19664
{
	var txdName;
	var unk;
	const char* unk2;

	TEXT_LABEL_ASSIGN_STRING(&txdName, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2028[Global_8939 /*29*/].f_7)), 64);

	if (Global_8958 == 0)
	{
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("");
		TEXT_LABEL_ASSIGN_STRING(&subject, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&Global_8863[1 /*6*/]), 64);
		filenameForAudioConversation = HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(_("New Contact"));
		HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&txdName, &txdName, false, 3, filenameForAudioConversation, &subject);
	}
	else
	{
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(_("New Contact: ~n~~a~"));
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_8863[1 /*6*/]);
		HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&txdName, &txdName, false, 3, "", 0);
	}

	MISC::CLEAR_BIT(&Global_8253, 0);
	return;
}

struct<4> func_13(int iParam0) // Position - 0x773 Hash - 0x5D6A4A13 ^0x32291975
{
	return Global_2028[iParam0 /*29*/].f_3;
}

int func_14(int iParam0, int iParam1) // Position - 0x786 Hash - 0x97DCD8A1 ^0xF8178EDD
{
	if (iParam1 < 0 || iParam1 > 4)
		return 0;

	return Global_2028[iParam0 /*29*/].f_24[iParam1];
}

int func_15(int iParam0, int iParam1) // Position - 0x7B0 Hash - 0x97DCD8A1 ^0x5A8D70D2
{
	if (iParam1 < 0 || iParam1 > 4)
		return 0;

	return Global_2028[iParam0 /*29*/].f_12[iParam1];
}

void func_16(int iParam0, int iParam1, int iParam2) // Position - 0x7DA Hash - 0xAB9B6CC ^0x1B5EEB55
{
	if (iParam1 < 0 || iParam1 > 4)
		return;

	Global_2028[iParam0 /*29*/].f_24[iParam1] = iParam2;

	if (iParam0 < 162)
		Global_113648.f_28052[iParam0 /*29*/].f_24[iParam1] = iParam2;

	return;
}

void func_17(int iParam0, int iParam1, int iParam2) // Position - 0x81F Hash - 0xAB9B6CC ^0x80AE0F15
{
	if (iParam1 < 0 || iParam1 > 4)
		return;

	Global_2028[iParam0 /*29*/].f_12[iParam1] = iParam2;

	if (iParam0 < 162)
		Global_113648.f_28052[iParam0 /*29*/].f_12[iParam1] = iParam2;

	return;
}

void func_18() // Position - 0x864 Hash - 0x98476CE1 ^0x250FEB7C
{
	if (func_25(14))
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
		Global_20383 = func_19();
	
		if (Global_20383 == 145)
			Global_20383 = 3;
	
		if (Global_78558)
			Global_20383 = 3;
	
		if (Global_20383 > 3)
			Global_20383 = 3;
	}

	return;
}

int func_19() // Position - 0x906 Hash - 0x3C5423D7 ^0x3C5423D7
{
	func_20();
	return Global_113648.f_2365.f_539.f_4321;
}

void func_20() // Position - 0x91F Hash - 0xD1F2D853 ^0xF9F5FD4D
{
	int num;

	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_23(Global_113648.f_2365.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			num = func_22(PLAYER::PLAYER_PED_ID());
		
			if (func_21(num) && !func_25(14) || Global_112599)
			{
				if (Global_113648.f_2365.f_539.f_4321 != num && func_21(Global_113648.f_2365.f_539.f_4321))
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

BOOL func_21(int iParam0) // Position - 0xA1C Hash - 0x8907F004 ^0x8907F004
{
	return iParam0 < 3;
}

int func_22(Ped pedParam0) // Position - 0xA28 Hash - 0xAC4E9801 ^0xB379A75F
{
	int i;
	Hash entityModel;

	if (ENTITY::DOES_ENTITY_EXIST(pedParam0))
	{
		entityModel = ENTITY::GET_ENTITY_MODEL(pedParam0);
	
		for (i = 0; i <= 2; i = i + 1)
		{
			if (func_23(i) == entityModel)
				return i;
		}
	}

	return 145;
}

Hash func_23(int iParam0) // Position - 0xA65 Hash - 0xADCB9755 ^0xADCB9755
{
	if (func_21(iParam0))
		return func_24(iParam0);
	else
		iParam0 != 145;

	return 0;
}

Hash func_24(int iParam0) // Position - 0xA8A Hash - 0xE4CEEC2C ^0xE4CEEC2C
{
	return Global_2028[iParam0 /*29*/];
}

BOOL func_25(int iParam0) // Position - 0xA99 Hash - 0x937D8816 ^0x937D8816
{
	return Global_43257 == iParam0;
}

BOOL func_26(int iParam0) // Position - 0xAA7 Hash - 0x35F9F9C ^0x35F9F9C
{
	if (iParam0 == 94 || iParam0 == -1)
		return false;

	return Global_113648.f_9087.f_330[iParam0 /*6*/];
}

BOOL func_27() // Position - 0xAD3 Hash - 0x44DD83CC ^0x6D2C8335
{
	int profileSetting;

	if (Global_152523 == 2)
		return true;
	else if (Global_152523 == 3)
		return false;

	if (NETWORK::NETWORK_HAS_VALID_ROS_CREDENTIALS())
	{
		if (unk_0x8BD41D5945F5762B())
		{
			if (NETWORK::NETWORK_HAS_ROS_PRIVILEGE_PLAYED_LAST_GEN())
			{
				STATS::STAT_GET_INT(1571103992, &profileSetting, -1);
				MISC::SET_BIT(&profileSetting, 2);
				MISC::SET_BIT(&profileSetting, 4);
				MISC::SET_BIT(&profileSetting, 6);
				MISC::SET_BIT(&Global_25, 2);
				MISC::SET_BIT(&Global_25, 4);
				MISC::SET_BIT(&Global_25, 6);
				STATS::STAT_SET_INT(1571103992, profileSetting, true);
			
				if (MISC::ARE_PROFILE_SETTINGS_VALID())
				{
					profileSetting = MISC::GET_PROFILE_SETTING(866);
					MISC::SET_BIT(&profileSetting, 0);
					STATS::SET_HAS_SPECIALEDITION_CONTENT(profileSetting);
				}
			
				return true;
			}
		}
	}

	if (MISC::ARE_PROFILE_SETTINGS_VALID())
		if (IS_BIT_SET(MISC::GET_PROFILE_SETTING(866), 0))
			return true;

	return false;
}

BOOL func_28() // Position - 0xB8B Hash - 0x98B7EFDD ^0x98B7EFDD
{
	return false;
}

BOOL func_29() // Position - 0xB94 Hash - 0xFD255207 ^0xFD255207
{
	return true;
}

int func_30() // Position - 0xB9D Hash - 0xFD255207 ^0xFD255207
{
	return 1;
}

int func_31() // Position - 0xBA6 Hash - 0x64659D79 ^0xC3C726F6
{
	if (DLC::IS_DLC_PRESENT(-1226939934))
		return 1;

	return 0;
}

BOOL func_32() // Position - 0xBBF Hash - 0xDD225E60 ^0xDD225E60
{
	if (func_15(48, 0) == 1 && func_15(48, 1) == 1 && func_15(48, 2) == 1)
		if (func_31() || func_30() || func_29() || func_28() || func_27())
			return true;

	return false;
}

void func_33() // Position - 0xC23 Hash - 0xCE5FB49E ^0x214A59D5
{
	SCRIPT::TERMINATE_THIS_THREAD();
	return;
}

