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
	struct<3> Local_37 = { 0, 0, 0 } ;
	float fLocal_40 = 0f;
	float fLocal_41 = 0f;
	float fLocal_42 = 0f;
	float fLocal_43 = 0f;
	float fLocal_44 = 0f;
	float fLocal_45 = 0f;
	float fLocal_46 = 0f;
	float fLocal_47 = 0f;
	int iLocal_48 = 0;
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
	fLocal_44 = 9.99f;
	fLocal_45 = 0f;
	fLocal_46 = 0f;
	fLocal_47 = 0f;
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	func_10();
	func_7();
	SYSTEM::SETTIMERA(0);
	SYSTEM::SETTIMERB(0);
	while (true)
	{
		SYSTEM::WAIT(0);
		if (Global_21649.f_1 != 9)
		{
			switch (Global_21649.f_1)
			{
				case 7:
					if (SYSTEM::TIMERA() > 125)
					{
						func_10();
						SYSTEM::SETTIMERA(0);
					}
					if (SYSTEM::TIMERB() > SYSTEM::FLOOR(fLocal_46) * 30 && SYSTEM::TIMERB() > 150)
					{
						GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21630, "APP_FUNCTION");
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
						GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
						SYSTEM::SETTIMERB(0);
					}
					if (SYSTEM::TIMERB() > 2000)
					{
						GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21630, "APP_FUNCTION");
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
						GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
						SYSTEM::SETTIMERB(0);
					}
					break;
				
				case 8:
					if (func_6(2, Global_21617, 0))
					{
						func_5();
						Global_21627 = 1;
						func_10();
						func_7();
						if (Global_21649.f_1 > 3)
						{
							Global_21649.f_1 = 7;
						}
					}
					break;
				
				default:
					break;
			}
			if (func_4())
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
	func_3(0, 0);
	func_3(1, 0);
	func_3(2, 0);
	func_3(3, 0);
	func_3(4, 0);
	MISC::CLEAR_BIT(&Global_9503, 22);
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_3(int iParam0, int iParam1)
{
	Global_4525176[iParam0] = iParam1;
}

int func_4()
{
	if (Global_10125 == 1 || Global_21649.f_1 < 7)
	{
		Global_21636 = 1;
		return 1;
	}
	return 0;
}

void func_5()
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Back", &Global_21638, true);
	}
}

int func_6(int iParam0, int iParam1, int iParam2)
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

void func_7()
{
	if (Global_21637)
	{
		func_8(Global_21630, "SET_SOFT_KEYS", 2f, 0f, 13f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
		func_8(Global_21630, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, "CELL_213", 0, 0, 0, 0);
	}
	else
	{
		func_8(Global_21630, "SET_SOFT_KEYS", 2f, 0f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
		func_8(Global_21630, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, 0, 0, 0, 0, 0);
	}
	func_8(Global_21630, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
	MISC::CLEAR_BIT(&Global_9502, 17);
}

void func_8(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)
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
		func_9(sParam7);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
	{
		func_9(sParam8);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam9))
	{
		func_9(sParam9);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam10))
	{
		func_9(sParam10);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam11))
	{
		func_9(sParam11);
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_9(char* sParam0)
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

void func_10()
{
	int iVar0;
	bool bVar1;
	
	if (func_18() == 0)
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			Local_37 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
			fLocal_40 = ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID());
			func_17();
			func_16();
			func_15();
			fLocal_41 = (360f - fLocal_40);
			fLocal_44 = (fLocal_44 - fLocal_41);
			if (fLocal_44 < 0f)
			{
				fLocal_44 = (fLocal_44 + 360f);
			}
			if (iLocal_48 == 0)
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21630, "SET_DATA_SLOT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(23);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
				if (BitTest(Global_9503, 30))
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(-99);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
				}
				else
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::FLOOR(fLocal_44));
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::FLOOR(fLocal_45));
				}
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(100);
				if (BitTest(Global_9503, 22))
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
				}
				else
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
				}
				if (BitTest(Global_9503, 29))
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
				}
				else
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
				}
				if (BitTest(Global_9504, 1))
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fLocal_47);
				}
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
			if (fLocal_40 == fLocal_40)
			{
			}
			func_14(Global_21630, "DISPLAY_VIEW", 23f, SYSTEM::TO_FLOAT(1), -1082130432, -1082130432, -1082130432);
		}
	}
	else if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		Local_37 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		fLocal_40 = ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID());
		if (Global_4525198 > 21)
		{
		}
		iVar0 = 0;
		while (iVar0 < Global_4525198)
		{
			func_13(iVar0);
			func_12(iVar0);
			func_11(iVar0);
			fLocal_41 = (360f - fLocal_40);
			fLocal_44 = (fLocal_44 - fLocal_41);
			if (fLocal_44 < 0f)
			{
				fLocal_44 = (fLocal_44 + 360f);
			}
			if (iLocal_48 == 0)
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21630, "SET_DATA_SLOT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(23);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
				bVar1 = false;
				switch (iVar0)
				{
					case 0:
						if (BitTest(Global_4524923, 5))
						{
							bVar1 = true;
						}
						break;
					
					case 1:
						if (BitTest(Global_4524923, 6))
						{
							bVar1 = true;
						}
						break;
					
					case 2:
						if (BitTest(Global_4524923, 7))
						{
							bVar1 = true;
						}
						break;
					
					case 3:
						if (BitTest(Global_4524923, 8))
						{
							bVar1 = true;
						}
						break;
				}
				if (bVar1)
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(-99);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
				}
				else
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::FLOOR(fLocal_44));
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::FLOOR(fLocal_45));
				}
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(100);
				if (BitTest(Global_9503, 22))
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
				}
				else
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
				}
				if (BitTest(Global_9503, 29))
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
				}
				else
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
				}
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fLocal_47);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_4525176[iVar0]);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
			if (fLocal_40 == fLocal_40)
			{
			}
			func_14(Global_21630, "DISPLAY_VIEW", 23f, SYSTEM::TO_FLOAT(1), -1082130432, -1082130432, -1082130432);
			iVar0++;
		}
	}
}

float func_11(int iParam0)
{
	fLocal_42 = (Global_4525112[iParam0 /*3*/] - Local_37.f_0);
	fLocal_43 = (SYSTEM::COS(((3.14159f / 180f) * Local_37.f_0)) * (Global_4525112[iParam0 /*3*/].f_1 - Local_37.f_1));
	fLocal_44 = MISC::ATAN2(fLocal_42, fLocal_43);
	if (fLocal_44 < 0f)
	{
		fLocal_44 = (fLocal_44 + 360f);
	}
	return fLocal_44;
}

float func_12(int iParam0)
{
	fLocal_46 = SYSTEM::SQRT(SYSTEM::VDIST2(Global_4525112[iParam0 /*3*/], Local_37));
	fLocal_47 = (Global_4525112[iParam0 /*3*/].f_2 - Local_37.f_2);
	return fLocal_46;
}

float func_13(int iParam0)
{
	fLocal_45 = SYSTEM::SQRT((((Global_4525112[iParam0 /*3*/] - Local_37.f_0) * (Global_4525112[iParam0 /*3*/] - Local_37.f_0)) + ((Global_4525112[iParam0 /*3*/].f_1 - Local_37.f_1) * (Global_4525112[iParam0 /*3*/].f_1 - Local_37.f_1))));
	return fLocal_45;
}

void func_14(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
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

float func_15()
{
	fLocal_42 = (Global_24130 - Local_37.f_0);
	fLocal_43 = (SYSTEM::COS(((3.14159f / 180f) * Local_37.f_0)) * (Global_24130.f_1 - Local_37.f_1));
	fLocal_44 = MISC::ATAN2(fLocal_42, fLocal_43);
	if (fLocal_44 < 0f)
	{
		fLocal_44 = (fLocal_44 + 360f);
	}
	return fLocal_44;
}

float func_16()
{
	fLocal_46 = SYSTEM::SQRT(SYSTEM::VDIST2(Global_24130, Local_37));
	fLocal_47 = (Global_24130.f_2 - Local_37.f_2);
	return fLocal_46;
}

float func_17()
{
	fLocal_45 = SYSTEM::SQRT((((Global_24130 - Local_37.f_0) * (Global_24130 - Local_37.f_0)) + ((Global_24130.f_1 - Local_37.f_1) * (Global_24130.f_1 - Local_37.f_1))));
	return fLocal_45;
}

int func_18()
{
	if (Global_80337 == 1)
	{
		return 1;
	}
	return 0;
}

