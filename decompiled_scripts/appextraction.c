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
	var uLocal_13 = -2;
	var uLocal_14 = -2;
	var uLocal_15 = -2;
	var uLocal_16 = 5;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 2;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 2;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 2;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	float fLocal_31 = 0f;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	int iLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	int iLocal_37 = 0;
#endregion

void __EntryFunction__()
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
	fLocal_31 = 0.001f;
	iLocal_34 = -1;
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	if (iLocal_37 == 0)
	{
		func_11();
		func_10();
		iLocal_37 = 1;
		SYSTEM::SETTIMERA(0);
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		if (Global_21649.f_1 != 9)
		{
			switch (Global_21649.f_1)
			{
				case 7:
					if (iLocal_37 == 1 && SYSTEM::TIMERA() > 1500)
					{
						func_6();
						SYSTEM::SETTIMERA(0);
					}
					break;
				
				case 8:
					if (func_5(2, Global_21617, 0))
					{
						func_4();
						Global_21627 = 1;
						if (Global_21649.f_1 > 3)
						{
							Global_21649.f_1 = 7;
						}
					}
					break;
				
				default:
					break;
			}
			if (func_3())
			{
				func_2();
			}
		}
		else
		{
			Global_21651 = 6;
			func_2();
		}
		if (func_1())
		{
			func_2();
		}
	}
}

int func_1()
{
	if (((Global_21649.f_1 == 1 || Global_21649.f_1 == 3) || Global_21649.f_1 == 0) || Global_21593 == 1)
	{
		Global_21636 = 1;
		return 1;
	}
	return 0;
}

void func_2()
{
	SCRIPT::TERMINATE_THIS_THREAD();
}

int func_3()
{
	if (Global_10125 == 1 || Global_21649.f_1 < 7)
	{
		Global_21636 = 1;
		return 1;
	}
	return 0;
}

void func_4()
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Back", &Global_21638, true);
	}
}

int func_5(int iParam0, int iParam1, int iParam2)
{
	if (PAD::IS_CONTROL_JUST_PRESSED(iParam0, iParam1) || (iParam2 == 1 && PAD::IS_DISABLED_CONTROL_JUST_PRESSED(iParam0, iParam1)))
	{
		if (MISC::IS_PC_VERSION())
		{
			if (MISC::UPDATE_ONSCREEN_KEYBOARD() == 0 || (NETWORK::NETWORK_TEXT_CHAT_IS_TYPING() && PAD::IS_USING_KEYBOARD_AND_MOUSE(2)))
			{
				return 0;
			}
		}
		if (HUD::IS_PAUSE_MENU_ACTIVE() || HUD::IS_WARNING_MESSAGE_ACTIVE())
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

void func_6()
{
	func_7();
}

void func_7()
{
	func_9(Global_21630, "SET_DATA_SLOT_EMPTY", 24f, -1082130432, -1082130432, -1082130432, -1082130432);
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21630, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(24);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
	if (BitTest(Global_4524923, 23))
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
		func_8("CELL_EXTBYOU");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_4524924);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::FLOOR(Global_4525204));
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_4524925);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::FLOOR(Global_4525204.f_1));
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_4524926);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::FLOOR(Global_4525204.f_2));
		func_8("CELL_BODYG");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_4524927);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::FLOOR(Global_4525207));
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_4524928);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::FLOOR(Global_4525207.f_1));
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_4524929);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::FLOOR(Global_4525207.f_2));
	}
	else
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
		func_8("CELL_EXTBYOU");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_4524927);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::FLOOR(Global_4525207));
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_4524928);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::FLOOR(Global_4525207.f_1));
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_4524929);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::FLOOR(Global_4525207.f_2));
		func_8("CELL_EXTBTARG");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_4524924);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::FLOOR(Global_4525204));
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_4524925);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::FLOOR(Global_4525204.f_1));
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_4524926);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::FLOOR(Global_4525204.f_2));
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	func_9(Global_21630, "DISPLAY_VIEW", 24f, SYSTEM::TO_FLOAT(1), -1082130432, -1082130432, -1082130432);
}

void func_8(char* sParam0)
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

void func_9(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, sParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam2));
	if (fParam3 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam3));
	}
	if (fParam4 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam4));
	}
	if (fParam5 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam5));
	}
	if (fParam6 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam6));
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_10()
{
	func_7();
}

void func_11()
{
	if (Global_21637)
	{
		func_12(Global_21630, "SET_SOFT_KEYS", 2f, 0f, 13f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
		func_12(Global_21630, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, "CELL_213", 0, 0, 0, 0);
	}
	else
	{
		func_12(Global_21630, "SET_SOFT_KEYS", 2f, 0f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
		func_12(Global_21630, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, 0, 0, 0, 0, 0);
	}
	func_12(Global_21630, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
	MISC::CLEAR_BIT(&Global_9502, 17);
}

void func_12(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, sParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam2));
	if (fParam3 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam3));
	}
	if (fParam4 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam4));
	}
	if (fParam5 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam5));
	}
	if (fParam6 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam6));
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam7))
	{
		func_8(sParam7);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
	{
		func_8(sParam8);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam9))
	{
		func_8(sParam9);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam10))
	{
		func_8(sParam10);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam11))
	{
		func_8(sParam11);
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

