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
	int iLocal_35[15] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	var uLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	float fLocal_57 = 0f;
	float fLocal_58 = 0f;
	float fLocal_59 = 0f;
	float fLocal_60 = 0f;
	int iLocal_61 = 0;
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
	fLocal_57 = 0.82f;
	fLocal_58 = 0.42f;
	fLocal_59 = 0f;
	fLocal_60 = 0f;
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	func_28();
	iLocal_56 = 1;
	func_27();
	func_26();
	while (true)
	{
		SYSTEM::WAIT(0);
		if (Global_21649.f_1 != 9)
		{
			switch (Global_21649.f_1)
			{
				case 7:
					func_21();
					if (iLocal_56)
					{
						func_18();
					}
					else
					{
						func_12();
					}
					break;
				
				case 8:
					func_21();
					func_12();
					if (func_11(2, Global_21617, 0))
					{
						func_10();
						Global_21627 = 1;
						func_9(Global_21630, "DISPLAY_VIEW", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_26();
						if (Global_21649.f_1 > 3)
						{
							Global_21649.f_1 = 7;
						}
					}
					break;
				
				default:
					break;
			}
			if (func_8())
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
	func_7();
	if (func_4(0))
	{
		func_3();
	}
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_3()
{
	if (Global_10324[0 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_10324[0 /*2811*/][0 /*281*/].f_259 = 0;
	}
	if (Global_10324[1 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_10324[1 /*2811*/][0 /*281*/].f_259 = 0;
	}
	if (Global_10324[2 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_10324[2 /*2811*/][0 /*281*/].f_259 = 0;
	}
	MISC::CLEAR_BIT(&Global_9502, 25);
	MISC::SET_BIT(&Global_9503, 11);
}

int func_4(int iParam0)
{
	if (Global_44921 == 15)
	{
		return 0;
	}
	if (func_5(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_5(int iParam0)
{
	return func_6(iParam0, Global_44921);
}

int func_6(int iParam0, int iParam1)
{
	if (iParam1 == 15)
	{
		return 1;
	}
	if (iParam0 == 15)
	{
		return 0;
	}
	switch (iParam0)
	{
		case 16:
			switch (iParam1)
			{
				case 9:
				case 10:
				case 7:
				case 13:
				case 14:
					return 0;
					break;
			}
			return 1;
			break;
		
		case 0:
			switch (iParam1)
			{
				case 5:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 2:
		case 3:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 4:
			if (iParam1 == 17)
			{
				return 1;
			}
			break;
		
		case 5:
			break;
		
		case 6:
		case 8:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 7:
			if (iParam1 == 6)
			{
				return 1;
			}
			break;
		
		case 9:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 11:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 17:
			switch (iParam1)
			{
				case 17:
				case 12:
				case 5:
					return 1;
					break;
			}
			break;
		
		case 18:
		case 12:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
					return 1;
					break;
			}
			break;
		
		case 13:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
	}
	return 0;
}

void func_7()
{
	func_28();
	Global_10324[Global_21649 /*2811*/][0 /*281*/].f_124[2] = 1;
}

int func_8()
{
	if (Global_10125 == 1 || Global_21649.f_1 < 7)
	{
		Global_21636 = 1;
		return 1;
	}
	return 0;
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
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Back", &Global_21638, true);
	}
}

int func_11(int iParam0, int iParam1, int iParam2)
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

void func_12()
{
	if (Global_21627 == 0)
	{
		if (func_11(2, Global_21618, 0))
		{
			func_15();
			Global_21627 = 1;
			func_28();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21630, "GET_CURRENT_SELECTION");
			iLocal_53 = GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
			while (!GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(iLocal_53))
			{
				SYSTEM::WAIT(0);
			}
			Global_10324[Global_21649 /*2811*/][iLocal_55 /*281*/].f_259 = iLocal_35[GRAPHICS::GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_INT(iLocal_53)];
			func_13(Global_21630, "SET_HEADER", &(Global_10324[Global_21649 /*2811*/][iLocal_55 /*281*/].f_7[Global_10324[Global_21649 /*2811*/][iLocal_55 /*281*/].f_259 /*4*/]), 0, 0, 0, 0);
			if (Global_10324[Global_21649 /*2811*/][0 /*281*/].f_259 == 2)
			{
				func_9(Global_21630, "SET_SLEEP_MODE", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			else
			{
				func_9(Global_21630, "SET_SLEEP_MODE", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			if (func_4(0))
			{
				func_3();
			}
		}
	}
}

void func_13(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, sParam1);
	func_14(sParam2);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
	{
		func_14(sParam3);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
	{
		func_14(sParam4);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam5))
	{
		func_14(sParam5);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam6))
	{
		func_14(sParam6);
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_14(char* sParam0)
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

void func_15()
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Accept", &Global_21638, true);
		func_16();
	}
}

void func_16()
{
	if (func_17())
	{
		MOBILE::CELL_SET_INPUT(5);
	}
}

int func_17()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_80337)
	{
		return 0;
	}
	iVar2 = 0;
	iVar0 = CAM::GET_CAM_ACTIVE_VIEW_MODE_CONTEXT();
	iVar1 = CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(iVar0);
	if (iVar1 == 4)
	{
		iVar2 = 1;
	}
	if (Global_4525201 || iVar2)
	{
		return 1;
	}
	return 1;
}

void func_18()
{
	Global_21627 = 1;
	iLocal_55 = 0;
	iLocal_56 = 0;
	func_19();
}

void func_19()
{
	int iVar0[15];
	int iVar16;
	int iVar17;
	int iVar18;
	
	func_9(Global_21630, "DISPLAY_VIEW", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_28();
	iLocal_51 = 0;
	iVar16 = 0;
	while (iVar16 < 9)
	{
		iVar17 = 0;
		iVar18 = 9;
		Global_10324[Global_21649 /*2811*/][iLocal_55 /*281*/].f_84[iVar18] = 5000;
		while (iVar17 < 9)
		{
			if (Global_10324[Global_21649 /*2811*/][iLocal_55 /*281*/].f_124[iVar17] == 1)
			{
				if (iVar0[iVar17] == 0)
				{
					if (Global_10324[Global_21649 /*2811*/][iLocal_55 /*281*/].f_84[iVar17] < Global_10324[Global_21649 /*2811*/][iLocal_55 /*281*/].f_84[iVar18])
					{
						iVar18 = iVar17;
						func_20(Global_21630, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(13), SYSTEM::TO_FLOAT(iVar16), SYSTEM::TO_FLOAT(Global_10324[Global_21649 /*2811*/][iLocal_55 /*281*/].f_104[iVar18]), -1f, -1f, &(Global_10324[Global_21649 /*2811*/][iLocal_55 /*281*/].f_7[iVar18 /*4*/]), 0, 0, 0, 0);
					}
				}
			}
			iVar17++;
		}
		iLocal_35[iVar16] = iVar18;
		iVar0[iVar18] = 1;
		if (Global_10324[Global_21649 /*2811*/][iLocal_55 /*281*/].f_124[iVar16] == 1)
		{
			iLocal_51++;
		}
		iVar16++;
	}
	func_9(Global_21630, "DISPLAY_VIEW", 13f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_13(Global_21630, "SET_HEADER", &(Global_10324[Global_21649 /*2811*/][iLocal_55 /*281*/].f_7[Global_10324[Global_21649 /*2811*/][iLocal_55 /*281*/].f_259 /*4*/]), 0, 0, 0, 0);
	if (Global_21637)
	{
		func_20(Global_21630, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
		func_20(Global_21630, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
	}
	else
	{
		func_20(Global_21630, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
		func_20(Global_21630, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
	}
	func_20(Global_21630, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
	MISC::CLEAR_BIT(&Global_9502, 17);
}

void func_20(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)
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
		func_14(sParam7);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
	{
		func_14(sParam8);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam9))
	{
		func_14(sParam9);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam10))
	{
		func_14(sParam10);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam11))
	{
		func_14(sParam11);
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_21()
{
	if (iLocal_61)
	{
		if (SYSTEM::TIMERA() > 50)
		{
			iLocal_61 = 0;
		}
	}
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2))
	{
		if (func_11(2, 181, 0))
		{
			if (iLocal_52 > 0)
			{
				iLocal_52 = (iLocal_52 - 1);
			}
			func_24();
		}
		if (func_11(2, 180, 0))
		{
			iLocal_52++;
			if (iLocal_52 == iLocal_51)
			{
				iLocal_52 = 0;
			}
			func_22();
		}
	}
	if (iLocal_61 == 0)
	{
		if (func_11(2, Global_21625, 0))
		{
			if (iLocal_52 > 0)
			{
				iLocal_52 = (iLocal_52 - 1);
			}
			func_24();
			iLocal_61 = 1;
			SYSTEM::SETTIMERA(0);
		}
		if (func_11(2, Global_21626, 0))
		{
			iLocal_52++;
			if (iLocal_52 == iLocal_51)
			{
				iLocal_52 = 0;
			}
			func_22();
			iLocal_61 = 1;
			SYSTEM::SETTIMERA(0);
		}
	}
}

void func_22()
{
	func_9(Global_21630, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(3), -1082130432, -1082130432, -1082130432, -1082130432);
	AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_21638, true);
	func_23();
}

void func_23()
{
	if (func_17())
	{
		if (Global_21887 == 0)
		{
			MOBILE::CELL_SET_INPUT(2);
		}
		else
		{
			MOBILE::CELL_SET_INPUT(1);
		}
	}
}

void func_24()
{
	func_9(Global_21630, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(1), -1082130432, -1082130432, -1082130432, -1082130432);
	AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_21638, true);
	func_25();
}

void func_25()
{
	if (func_17())
	{
		if (Global_21887 == 0)
		{
			MOBILE::CELL_SET_INPUT(1);
		}
		else
		{
			MOBILE::CELL_SET_INPUT(2);
		}
	}
}

void func_26()
{
	int iVar0[15];
	int iVar16;
	int iVar17;
	int iVar18;
	
	iLocal_51 = 0;
	iVar16 = 0;
	func_28();
	while (iVar16 < 9)
	{
		iVar17 = 0;
		iVar18 = 9;
		Global_10324[Global_21649 /*2811*/][iVar18 /*281*/] = 5000;
		while (iVar17 < 9)
		{
			if (Global_10324[Global_21649 /*2811*/][iVar17 /*281*/].f_280 == 1)
			{
				if (iVar0[iVar17] == 0)
				{
					if (iVar17 == 0)
					{
						if (Global_10324[Global_21649 /*2811*/][iVar17 /*281*/] < Global_10324[Global_21649 /*2811*/][iVar18 /*281*/])
						{
							iVar18 = iVar17;
							func_20(Global_21630, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(2), SYSTEM::TO_FLOAT(iVar16), -1f, -1f, -1f, &(Global_10324[Global_21649 /*2811*/][iVar18 /*281*/].f_2), 0, 0, 0, 0);
						}
					}
				}
			}
			iVar17++;
		}
		iLocal_35[iVar16] = iVar18;
		iVar0[iVar18] = 1;
		if (Global_10324[Global_21649 /*2811*/][iVar16 /*281*/].f_280 == 1)
		{
			iLocal_51++;
		}
		iVar16++;
	}
	func_9(Global_21630, "DISPLAY_VIEW", 13f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_13(Global_21630, "SET_HEADER", "CELL_16", 0, 0, 0, 0);
	if (Global_21637)
	{
		func_20(Global_21630, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
		func_20(Global_21630, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
	}
	else
	{
		func_20(Global_21630, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
		func_20(Global_21630, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
	}
	func_20(Global_21630, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
	MISC::CLEAR_BIT(&Global_9502, 17);
}

void func_27()
{
	if (Global_44921 != 15)
	{
		func_28();
		Global_10324[Global_21649 /*2811*/][0 /*281*/].f_124[2] = 0;
	}
}

void func_28()
{
	if (func_35(14))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_114963.f_28060[0 /*29*/])
			{
				Global_21649 = 0;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_114963.f_28060[1 /*29*/])
			{
				Global_21649 = 1;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_114963.f_28060[2 /*29*/])
			{
				Global_21649 = 2;
			}
			else
			{
				Global_21649 = 0;
			}
		}
	}
	else
	{
		Global_21649 = func_29();
		if (Global_21649 == 145)
		{
			Global_21649 = 3;
		}
		if (Global_80337)
		{
			Global_21649 = 3;
		}
		if (Global_21649 > 3)
		{
			Global_21649 = 3;
		}
	}
}

var func_29()
{
	func_30();
	return Global_114963.f_2370.f_539.f_4321;
}

void func_30()
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_33(Global_114963.f_2370.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_32(PLAYER::PLAYER_PED_ID());
			if (func_31(iVar0) && (!func_35(14) || Global_113909))
			{
				if (Global_114963.f_2370.f_539.f_4321 != iVar0 && func_31(Global_114963.f_2370.f_539.f_4321))
				{
					Global_114963.f_2370.f_539.f_4322 = Global_114963.f_2370.f_539.f_4321;
				}
				Global_114963.f_2370.f_539.f_4323 = iVar0;
				Global_114963.f_2370.f_539.f_4321 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_114963.f_2370.f_539.f_4321 != 145)
			{
				Global_114963.f_2370.f_539.f_4323 = Global_114963.f_2370.f_539.f_4321;
			}
			return;
		}
	}
	Global_114963.f_2370.f_539.f_4321 = 145;
}

bool func_31(int iParam0)
{
	return iParam0 < 3;
}

int func_32(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_33(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_33(int iParam0)
{
	if (func_31(iParam0))
	{
		return func_34(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_34(int iParam0)
{
	return Global_2349[iParam0 /*29*/];
}

bool func_35(int iParam0)
{
	return Global_44921 == iParam0;
}

