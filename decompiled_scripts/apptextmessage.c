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
	int iLocal_36[35] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	int iLocal_77 = 0;
	int iLocal_78 = 0;
	int iLocal_79 = 0;
	int iLocal_80 = 0;
	int iLocal_81 = 0;
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	int iLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	struct<6> Local_101[185];
	struct<6> Local_1212[185];
	struct<8> Local_2323[19];
	int iLocal_2476 = 0;
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
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand")) == 0)
	{
		func_75();
	}
	func_55();
	Global_24089 = 0;
	Global_114963.f_14060[Global_21649 /*20*/].f_18 = 0;
	Global_21881 = 0;
	func_54(Global_21630, "SET_DATA_SLOT_EMPTY", 6f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_52();
	func_51();
	if (Global_21649.f_1 > 3)
	{
		Global_21649.f_1 = 7;
	}
	iLocal_82 = MISC::GET_GAME_TIMER();
	Global_21653 = 1;
	while (true)
	{
		SYSTEM::WAIT(0);
		if (iLocal_81 == 0)
		{
			iLocal_83 = MISC::GET_GAME_TIMER();
			if ((iLocal_83 - iLocal_82) > 500)
			{
				iLocal_81 = 1;
			}
		}
		if (Global_21649.f_1 != 9)
		{
			switch (Global_21649.f_1)
			{
				case 7:
					if (Global_24089 == 0)
					{
						if (Global_2740404 == 0)
						{
							func_46();
							func_41();
						}
					}
					Global_24090 = -1;
					break;
				
				case 8:
					if (Global_24089 == 1)
					{
						func_5();
						func_46();
						Global_24090 = iLocal_75;
					}
					break;
				
				default:
					Global_24090 = -1;
					break;
			}
			if (Global_24089 == 0)
			{
				if (func_4())
				{
					func_75();
				}
			}
			else if (func_3(2, Global_21617, 0) || BitTest(Global_9503, 12))
			{
				if (MISC::ARE_STRINGS_EQUAL(&(Global_114963.f_14150[iLocal_75 /*104*/]), "CELL_FINV"))
				{
				}
				else
				{
					SYSTEM::WAIT(0);
					MISC::CLEAR_BIT(&Global_9503, 12);
					func_2();
					Global_21627 = 1;
					Global_24089 = 0;
					if (Global_21649.f_1 > 3)
					{
						Global_21649.f_1 = 7;
					}
					if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand")) == 0)
					{
						func_75();
					}
					func_54(Global_21630, "SET_DATA_SLOT_EMPTY", 6f, -1082130432, -1082130432, -1082130432, -1082130432);
					func_52();
					func_51();
					if (Global_114963.f_14150[iLocal_75 /*104*/].f_29 > 0)
					{
						if (Global_114963.f_14150[iLocal_75 /*104*/].f_31 == 1)
						{
							Global_114963.f_14150[iLocal_75 /*104*/].f_29 = 4;
							Global_114963.f_14150[iLocal_75 /*104*/].f_24 = 1;
						}
						else
						{
							Global_114963.f_14150[iLocal_75 /*104*/].f_29 = 4;
							Global_114963.f_14150[iLocal_75 /*104*/].f_24 = 1;
						}
					}
				}
			}
		}
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand")) == 0)
		{
			func_75();
		}
		if (func_1())
		{
			func_75();
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
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Back", &Global_21638, true);
	}
}

int func_3(int iParam0, int iParam1, int iParam2)
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
	func_6();
}

void func_6()
{
	if (Global_114963.f_14150[iLocal_75 /*104*/].f_24 == 1)
	{
		if (Global_21627 == 0)
		{
			if (PAD::IS_CONTROL_JUST_PRESSED(2, Global_21620))
			{
				func_2();
				Global_21627 = 1;
				func_34();
				if (Global_114963.f_14150[iLocal_75 /*104*/].f_27 == 1)
				{
					Global_114963.f_14150[iLocal_75 /*104*/].f_99[0] = 0;
					Global_114963.f_14150[iLocal_75 /*104*/].f_99[1] = 0;
					Global_114963.f_14150[iLocal_75 /*104*/].f_99[2] = 0;
				}
				else
				{
					Global_114963.f_14150[iLocal_75 /*104*/].f_99[Global_21649] = 0;
				}
				if (func_33(iLocal_75))
				{
				}
				else
				{
					Global_114963.f_14150[iLocal_75 /*104*/].f_24 = 0;
					Global_114963.f_14150[iLocal_75 /*104*/].f_28 = 0;
				}
				HUD::THEFEED_REMOVE_ITEM(Global_114963.f_14150[iLocal_75 /*104*/].f_16);
				func_54(Global_21630, "SET_DATA_SLOT_EMPTY", 6f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_52();
				if (iLocal_73 > 0)
				{
					iLocal_73 = (iLocal_73 - 1);
				}
				func_51();
				if (Global_21649.f_1 > 3)
				{
					Global_21649.f_1 = 7;
					Global_24089 = 0;
				}
			}
		}
	}
	else if (Global_21627 == 0)
	{
		if (PAD::IS_CONTROL_PRESSED(2, Global_21621))
		{
			if (iLocal_77 == 1)
			{
				if (Global_21649.f_1 > 3)
				{
					StringCopy(&Global_77380, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&Global_24064), 64);
					Global_77511 = 7;
					MISC::SET_BIT(&Global_9503, 10);
					Global_21649.f_1 = 6;
				}
				func_75();
			}
		}
	}
	if (Global_114963.f_14150[iLocal_75 /*104*/].f_31 == 1)
	{
		if (Global_21627 == 0)
		{
			if (func_3(2, Global_21621, 0))
			{
				func_30();
				Global_21627 = 1;
				Global_114963.f_14150[iLocal_75 /*104*/].f_29 = 2;
				Global_114963.f_14150[iLocal_75 /*104*/].f_24 = 1;
				Global_114963.f_14150[iLocal_75 /*104*/].f_31 = 0;
				MISC::CLEAR_BIT(&Global_9502, 17);
				Global_24089 = 0;
				if (Global_21649.f_1 > 3)
				{
					Global_21649.f_1 = 7;
				}
				func_54(Global_21630, "SET_DATA_SLOT_EMPTY", 6f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_52();
				func_51();
			}
		}
	}
	if (Global_21627 == 0 && iLocal_81 == 1)
	{
		if (func_3(2, Global_21618, 0))
		{
			Global_21627 = 1;
			if (Global_114963.f_14150[iLocal_75 /*104*/].f_29 > 0)
			{
				func_30();
				Global_114963.f_14150[iLocal_75 /*104*/].f_29 = 3;
				Global_114963.f_14150[iLocal_75 /*104*/].f_24 = 1;
				Global_24089 = 0;
				if (Global_21649.f_1 > 3)
				{
					Global_21649.f_1 = 7;
				}
				func_54(Global_21630, "SET_DATA_SLOT_EMPTY", 6f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_52();
				func_51();
			}
			else if (Global_114963.f_14150[iLocal_75 /*104*/].f_30 == 1)
			{
				func_30();
				Global_8817 = 144;
				if (Global_21649.f_1 > 3)
				{
					Global_21649.f_1 = 10;
					if (func_29() == 0)
					{
						func_27();
					}
				}
				func_26("appContacts");
				Global_21647 = SYSTEM::START_NEW_SCRIPT("appContacts", 4000);
				SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("appContacts");
				Global_8817 = Global_114963.f_14150[iLocal_75 /*104*/].f_17;
				if (func_25(Global_8817, Global_21649) == 0)
				{
					func_24(Global_21630, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(3), -1f, -1f, &(Global_118[Global_8817 /*10*/].f_4), "CELL_300", "CELL_211", "CELL_195", 0);
				}
				else
				{
					func_24(Global_21630, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(3), -1f, -1f, &(Global_2349[Global_8817 /*29*/].f_3), &(Global_2349[Global_8817 /*29*/].f_7), "CELL_211", &(Global_2349[Global_8817 /*29*/].f_3), 0);
				}
				func_7();
				func_75();
			}
		}
	}
}

void func_7()
{
	char cVar0[24];
	
	if (Global_21632 == 1)
	{
		return;
	}
	if (Global_21649.f_1 < 4)
	{
		return;
	}
	while (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_21630))
	{
		if (Global_80337)
		{
			return;
		}
		SYSTEM::WAIT(0);
	}
	switch (Global_21649.f_1)
	{
		case 6:
			func_54(Global_21630, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_22(Global_10124);
			if (Global_10124 == 1)
			{
				func_54(Global_21630, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_21653), -1082130432, -1082130432, -1082130432);
				Global_21629 = Global_21653;
			}
			else
			{
				func_54(Global_21630, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_21654), -1082130432, -1082130432, -1082130432);
				Global_21629 = Global_21654;
			}
			if (Global_21637)
			{
				func_24(Global_21630, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
				func_24(Global_21630, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
			}
			else
			{
				func_24(Global_21630, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
				func_24(Global_21630, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_21884 == 0)
			{
				func_24(Global_21630, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				MISC::CLEAR_BIT(&Global_9502, 17);
			}
			else if (Global_80337)
			{
				func_24(Global_21630, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				MISC::CLEAR_BIT(&Global_9502, 17);
			}
			else
			{
				if (Global_21883 == 1)
				{
					if (Global_21637)
					{
						func_24(Global_21630, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
					}
					else
					{
						func_24(Global_21630, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else if (Global_21637)
				{
					func_24(Global_21630, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
				}
				else
				{
					func_24(Global_21630, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				MISC::SET_BIT(&Global_9502, 17);
			}
			if (Global_80337)
			{
				Global_21629 = Global_21653;
				if (func_17() && BitTest(Global_9504, 9))
				{
					func_12(0);
				}
				func_54(Global_21630, "DISPLAY_VIEW", 4f, SYSTEM::TO_FLOAT(Global_21629), -1082130432, -1082130432, -1082130432);
				func_54(Global_21630, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_21629), -1082130432, -1082130432, -1082130432);
			}
			break;
		
		case 7:
			break;
		
		case 10:
			func_54(Global_21630, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_24(Global_21630, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_24(Global_21630, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			MISC::CLEAR_BIT(&Global_9502, 17);
			if (BitTest(Global_9502, 20))
			{
				func_24(Global_21630, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_21637)
			{
				func_24(Global_21630, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_21592)
				{
					func_24(Global_21630, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_24(Global_21630, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			break;
		
		case 9:
			if (Global_21648 == 1)
			{
				func_11();
				func_54(Global_21630, "SET_THEME", SYSTEM::TO_FLOAT(Global_114963.f_14060[Global_21649 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				if (Global_23036)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21630, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(4);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_CONDFON");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_23038);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					func_10("CELL_300");
					func_10("CELL_217");
					func_10("CELL_217");
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				else if (func_25(Global_8817, Global_21649) == 0)
				{
					func_24(Global_21630, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(2), -1f, -1f, &(Global_118[Global_8817 /*10*/].f_4), "CELL_300", "CELL_217", "CELL_195", 0);
				}
				else
				{
					func_24(Global_21630, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(2), -1f, -1f, &(Global_2349[Global_8817 /*29*/].f_3), &(Global_2349[Global_8817 /*29*/].f_7), "CELL_217", &(Global_2349[Global_8817 /*29*/].f_3), 0);
				}
				func_54(Global_21630, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			else if (Global_23023 == 4 || Global_23023 == 3)
			{
				func_54(Global_21630, "SET_THEME", SYSTEM::TO_FLOAT(Global_114963.f_14060[Global_21649 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				func_11();
				if (Global_23036)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21630, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(4);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_CONDFON");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_23038);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					func_10("CELL_300");
					func_10("CELL_219");
					func_10("CELL_219");
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				else
				{
					if (Global_23281)
					{
						StringCopy(&cVar0, "CELL_219", 24);
					}
					else
					{
						StringCopy(&cVar0, "CELL_211", 24);
					}
					if (func_25(Global_8817, Global_21649) == 0)
					{
						func_54(Global_21630, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_24(Global_21630, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(3), -1f, -1f, &(Global_118[Global_8817 /*10*/].f_4), "CELL_300", &cVar0, "CELL_195", 0);
					}
					else
					{
						func_54(Global_21630, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_24(Global_21630, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(3), -1f, -1f, &(Global_2349[Global_8817 /*29*/].f_3), &(Global_2349[Global_8817 /*29*/].f_7), &cVar0, &(Global_2349[Global_8817 /*29*/].f_3), 0);
					}
				}
				func_54(Global_21630, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			func_8();
			break;
		
		default:
			break;
	}
}

void func_8()
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_21630))
	{
		func_9();
		if (Global_21648 == 1)
		{
			if (Global_21637)
			{
				func_24(Global_21630, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, "CELL_203", 0, 0, 0, 0);
			}
			else
			{
				func_24(Global_21630, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_23070)
			{
				func_24(Global_21630, "SET_SOFT_KEYS", 3f, 0f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (BitTest(Global_9502, 20))
			{
				func_24(Global_21630, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_21637)
			{
				func_24(Global_21630, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_204", 0, 0, 0, 0);
			}
			else
			{
				func_24(Global_21630, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			func_24(Global_21630, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			MISC::CLEAR_BIT(&Global_9502, 17);
		}
		else
		{
			func_24(Global_21630, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_24(Global_21630, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			MISC::CLEAR_BIT(&Global_9502, 17);
			if (BitTest(Global_9502, 20))
			{
				func_24(Global_21630, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_21637)
			{
				func_24(Global_21630, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_21592)
				{
					func_24(Global_21630, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_24(Global_21630, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
		}
	}
}

void func_9()
{
	if (Global_80337)
	{
		func_24(Global_21630, "SET_SOFT_KEYS", 1f, 0f, 9f, -1f, -1f, 0, 0, 0, 0, 0);
		MISC::CLEAR_BIT(&Global_9502, 17);
	}
}

void func_10(char* sParam0)
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

void func_11()
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		if (Global_21649 == 0)
		{
			switch (Global_114963.f_14060[Global_21649 /*20*/].f_6)
			{
				case 1:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 0);
					break;
				
				case 2:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 1);
					break;
				
				case 3:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 2);
					break;
				
				case 4:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 3);
					break;
				
				case 5:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 4);
					break;
				
				case 6:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 5);
					break;
				
				case 7:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 6);
					break;
				
				default:
					break;
				}
		}
		if (Global_21649 == 1)
		{
			switch (Global_114963.f_14060[Global_21649 /*20*/].f_6)
			{
				case 1:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 6);
					break;
				
				case 2:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 0);
					break;
				
				case 3:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 1);
					break;
				
				case 4:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 2);
					break;
				
				case 5:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 3);
					break;
				
				case 6:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 4);
					break;
				
				case 7:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 5);
					break;
				
				default:
					break;
				}
		}
		if (Global_21649 == 2)
		{
			switch (Global_114963.f_14060[Global_21649 /*20*/].f_6)
			{
				case 1:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 5);
					break;
				
				case 2:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 6);
					break;
				
				case 3:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 1);
					break;
				
				case 4:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 0);
					break;
				
				case 5:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 2);
					break;
				
				case 6:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 3);
					break;
				
				case 7:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 4);
					break;
				
				default:
					break;
				}
		}
		if (Global_21649 == 3)
		{
			switch (Global_4525199)
			{
				case 1:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 0);
					break;
				
				case 2:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 1);
					break;
				
				case 3:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 2);
					break;
				
				case 4:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 3);
					break;
				
				case 5:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 4);
					break;
				
				case 6:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 5);
					break;
				
				case 7:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 6);
					break;
				
				default:
					break;
				}
			}
	}
}

void func_12(bool bParam0)
{
	int iVar0;
	
	MISC::SET_BIT(&Global_9504, 9);
	if (bParam0)
	{
		func_54(Global_21630, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
	}
	func_16();
	func_15();
	iVar0 = 0;
	while (iVar0 < 9)
	{
		Global_10050[iVar0] = 0;
		Global_10087[iVar0] = 0;
		iVar0++;
	}
	func_13(10, "CELL_16", 0, "appSettings", 24);
	if (bParam0)
	{
		func_54(Global_21630, "DISPLAY_VIEW", 4f, SYSTEM::TO_FLOAT(Global_21629), -1082130432, -1082130432, -1082130432);
		func_54(Global_21630, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_21629), -1082130432, -1082130432, -1082130432);
	}
}

void func_13(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4)
{
	func_14(iParam0, sParam1, iParam2, sParam3, iParam4, 1, 1, 0, 0);
	Global_10087[iParam2] = 1;
	Global_10050[iParam2] = iParam0;
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21630, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_9509[iParam0 /*15*/].f_4);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_9509[iParam0 /*15*/].f_10);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
	func_10(&(Global_9509[iParam0 /*15*/]));
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(255);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_14(int iParam0, char* sParam1, var uParam2, char* sParam3, var uParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	StringCopy(&(Global_9509[iParam0 /*15*/]), sParam1, 16);
	Global_9509[iParam0 /*15*/].f_4 = uParam2;
	StringCopy(&(Global_9509[iParam0 /*15*/].f_5), sParam3, 16);
	Global_9509[iParam0 /*15*/].f_9 = MISC::GET_HASH_KEY(sParam3);
	Global_9509[iParam0 /*15*/].f_10 = uParam4;
	Global_9509[iParam0 /*15*/].f_11 = iParam5;
	Global_9509[iParam0 /*15*/].f_12 = iParam6;
	Global_9509[iParam0 /*15*/].f_13 = iParam7;
	Global_9509[iParam0 /*15*/].f_14 = iParam8;
	if (Global_9509[iParam0 /*15*/].f_12 == 0)
	{
		Global_9509[iParam0 /*15*/].f_12 = 0;
	}
	if (Global_9509[iParam0 /*15*/].f_13 == 0)
	{
		Global_9509[iParam0 /*15*/].f_13 = 0;
	}
	if (Global_9509[iParam0 /*15*/].f_14 == 0)
	{
		Global_9509[iParam0 /*15*/].f_14 = 0;
	}
}

void func_15()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		Global_10087[iVar0] = 0;
		iVar0++;
	}
}

void func_16()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21630, "SET_DATA_SLOT");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(25);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
		func_10(&(Global_9509[10 /*15*/]));
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(225);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		iVar0++;
	}
	func_54(Global_21630, "DISPLAY_VIEW", 4f, SYSTEM::TO_FLOAT(0), -1082130432, -1082130432, -1082130432);
	func_54(Global_21630, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(0), -1082130432, -1082130432, -1082130432);
}

int func_17()
{
	if (func_18())
	{
		return 1;
	}
	return 0;
}

bool func_18()
{
	return (func_19() && !NETWORK::NETWORK_IS_ACTIVITY_SESSION());
}

bool func_19()
{
	return func_20(9539, -1);
}

bool func_20(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = func_21();
	}
	return STATS::GET_PACKED_STAT_BOOL_CODE(iParam0, iParam1);
}

int func_21()
{
	return Global_1574928;
}

void func_22(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	Global_24092 = 0;
	Global_10124 = iParam0;
	func_15();
	iVar0 = 0;
	while (iVar0 < 9)
	{
		iVar1 = 0;
		if (func_23(14))
		{
			while (iVar1 < 35)
			{
				if (iParam0 == Global_9509[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_9509[iVar1 /*15*/].f_4)
					{
						if (Global_10087[iVar0] == 0)
						{
							Global_10050[iVar0] = iVar1;
							if (iVar1 == 3)
							{
								if (BitTest(Global_9503, 3))
								{
									iVar2 = 42;
									Global_21886 = 1;
								}
								else
								{
									iVar2 = 255;
									Global_21886 = 0;
								}
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21630, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_9509[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_10(&(Global_9509[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar2);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							if (Global_2697067)
							{
								if (iVar1 == 14)
								{
									func_24(Global_21630, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_9509[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_24086), -1f, &(Global_9509[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							Global_10087[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		else
		{
			while (iVar1 < 35)
			{
				if (iParam0 == Global_9509[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_9509[iVar1 /*15*/].f_4)
					{
						if (Global_10087[iVar0] == 0)
						{
							Global_10050[iVar0] = iVar1;
							if (iVar1 == 1)
							{
								iVar3 = 0;
								while (iVar3 < 35)
								{
									if (Global_114963.f_14150[iVar3 /*104*/].f_24 != 0)
									{
										if (Global_114963.f_14150[iVar3 /*104*/].f_28 == 0)
										{
											if (Global_114963.f_14150[iVar3 /*104*/].f_99[Global_21649] == 1)
											{
												Global_24092++;
											}
										}
									}
									iVar3++;
								}
								func_24(Global_21630, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_9509[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_24092), -1f, &(Global_9509[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 7)
							{
								if (Global_80337)
								{
									iVar4 = 0;
									iVar4 = Global_4521352;
									iVar5 = 0;
									while (iVar5 < 12)
									{
										if (Global_4521354[iVar5 /*296*/].f_24 != 0)
										{
											if (Global_4521354[iVar5 /*296*/].f_28 == 0)
											{
												if (Global_4521354[iVar5 /*296*/].f_291[Global_21649] == 1)
												{
													iVar4++;
												}
											}
										}
										iVar5++;
									}
									func_24(Global_21630, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_9509[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar4), -1f, &(Global_9509[iVar1 /*15*/]), 0, 0, 0, 0);
								}
								else
								{
									switch (Global_21649)
									{
										case 0:
											iVar6 = Global_46158;
											break;
										
										case 1:
											iVar6 = Global_46159;
											break;
										
										case 2:
											iVar6 = Global_46160;
											break;
										
										default:
											break;
									}
									func_24(Global_21630, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_9509[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar6), -1f, &(Global_9509[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_24(Global_21630, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_9509[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_24086), -1f, &(Global_9509[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21630, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_9509[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_10(&(Global_9509[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_9508);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (iVar1 == 2)
							{
								if (BitTest(Global_9503, 6))
								{
									iVar7 = 42;
								}
								else
								{
									iVar7 = 255;
								}
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21630, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_9509[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_10(&(Global_9509[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar7);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (iVar1 == 3)
							{
								if (BitTest(Global_9503, 3))
								{
									iVar8 = 42;
									Global_21886 = 1;
								}
								else
								{
									iVar8 = 255;
									Global_21886 = 0;
								}
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21630, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_9509[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_10(&(Global_9509[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar8);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (iVar1 == 8)
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21630, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_9509[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_10(&(Global_9509[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(42);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if ((iVar1 == 24 && MISC::ARE_STRINGS_EQUAL(&(Global_9509[iVar1 /*15*/]), "CELL_BENWEB")) && BitTest(Global_9503, 6))
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21630, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_9509[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_10(&(Global_9509[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(42);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (Global_9509[iVar1 /*15*/].f_10 == 57 && iVar1 == 24)
							{
								iVar9 = 0;
								iVar9 = Global_1882061.f_1;
								func_24(Global_21630, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_9509[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar9), -1f, &(Global_9509[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_24(Global_21630, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_9509[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(0), -1f, &(Global_9509[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							Global_10087[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

bool func_23(int iParam0)
{
	return Global_44921 == iParam0;
}

void func_24(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)
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
		func_10(sParam7);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
	{
		func_10(sParam8);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam9))
	{
		func_10(sParam9);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam10))
	{
		func_10(sParam10);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam11))
	{
		func_10(sParam11);
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

int func_25(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_2349[iParam0 /*29*/].f_24[iParam1];
}

void func_26(char* sParam0)
{
	SCRIPT::REQUEST_SCRIPT(sParam0);
	while (!SCRIPT::HAS_SCRIPT_LOADED(sParam0))
	{
		SYSTEM::WAIT(0);
	}
}

void func_27()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 0;
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (func_28() && PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar1 = 1;
		}
	}
	if (!Global_80337)
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && iVar1 == 0)
		{
			iVar2 = PED::GET_PED_PROP_INDEX(PLAYER::PLAYER_PED_ID(), 0, 1);
			if (Global_80337)
			{
				if (((((iVar2 == 15 || iVar2 == 16) || iVar2 == 17) || iVar2 == 18) || iVar2 == 19) || PED::IS_PED_WEARING_HELMET(PLAYER::PLAYER_PED_ID()))
				{
					iVar0 = 1;
				}
			}
			else if (PED::IS_PED_WEARING_HELMET(PLAYER::PLAYER_PED_ID()))
			{
				iVar0 = 1;
			}
			if (!Global_21592)
			{
				if (Global_8817 != 128)
				{
					if (iVar0 == 0)
					{
						if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
						{
							if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
							{
							}
							else
							{
								if (Global_80337)
								{
									PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 244, false);
									PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 243, false);
									PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 242, false);
								}
								MISC::SET_BIT(&Global_9502, 11);
								TASK::TASK_USE_MOBILE_PHONE(PLAYER::PLAYER_PED_ID(), true, 1);
							}
						}
					}
				}
			}
		}
	}
}

int func_28()
{
	int iVar0;
	int iVar1;
	
	iVar0 = CAM::GET_CAM_ACTIVE_VIEW_MODE_CONTEXT();
	iVar1 = CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(iVar0);
	if (iVar1 == 4)
	{
		return 1;
	}
	return 0;
}

int func_29()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		if (Global_21649.f_1 == 10 || Global_21649.f_1 == 9)
		{
			if (Global_21592 == 0)
			{
				if (Global_8817 != 128)
				{
					if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						if (Global_23023 != 2)
						{
						}
					}
				}
			}
		}
		if (func_23(14))
		{
			return 0;
		}
		if (PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), false))
		{
			return 0;
		}
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			if (!CAM::IS_CINEMATIC_FIRST_PERSON_VEHICLE_INTERIOR_CAM_RENDERING())
			{
				if (ENTITY::IS_ENTITY_IN_WATER(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
				{
					return 0;
				}
			}
		}
		if (((PED::IS_PED_SWIMMING(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_SWIMMING_UNDER_WATER(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || (PED::IS_PED_HANGING_ON_TO_VEHICLE(PLAYER::PLAYER_PED_ID()) && !(BitTest(Global_4718592.f_38, 17) && (NETWORK::NETWORK_IS_ACTIVITY_SESSION() || Global_1926842))))
		{
			return 0;
		}
		if (Global_114011)
		{
			return 0;
		}
	}
	if (Global_80337)
	{
		return 0;
	}
	iVar2 = 0;
	iVar0 = CAM::GET_CAM_ACTIVE_VIEW_MODE_CONTEXT();
	iVar1 = CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(iVar0);
	if (iVar1 == 4 && (iVar0 == 0 || CAM::IS_CINEMATIC_FIRST_PERSON_VEHICLE_INTERIOR_CAM_RENDERING()))
	{
		iVar2 = 1;
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				iVar3 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
				if ((((((((VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(iVar3)) || VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(iVar3))) || VEHICLE::IS_THIS_MODEL_A_QUADBIKE(ENTITY::GET_ENTITY_MODEL(iVar3))) || ENTITY::GET_ENTITY_MODEL(iVar3) == joaat("seashark")) || ENTITY::GET_ENTITY_MODEL(iVar3) == joaat("seashark2")) || ENTITY::GET_ENTITY_MODEL(iVar3) == joaat("rhino")) || ENTITY::GET_ENTITY_MODEL(iVar3) == joaat("submersible")) || ENTITY::GET_ENTITY_MODEL(iVar3) == joaat("submersible2")) || ENTITY::GET_ENTITY_MODEL(iVar3) == joaat("toro"))
				{
					iVar2 = 0;
				}
			}
		}
	}
	if (Global_4525201 || iVar2 == 1)
	{
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("apptrackify")) > 0 || Global_114963.f_14060.f_89)
		{
			if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("michael2")) > 0)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

void func_30()
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Accept", &Global_21638, true);
		func_31();
	}
}

void func_31()
{
	if (func_32())
	{
		MOBILE::CELL_SET_INPUT(5);
	}
}

int func_32()
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

int func_33(int iParam0)
{
	if ((Global_114963.f_14150[iParam0 /*104*/].f_99[0] == 1 || Global_114963.f_14150[iParam0 /*104*/].f_99[1] == 1) || Global_114963.f_14150[iParam0 /*104*/].f_99[2] == 1)
	{
		return 1;
	}
	return 0;
}

void func_34()
{
	if (func_23(14))
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
		Global_21649 = func_35();
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

var func_35()
{
	func_36();
	return Global_114963.f_2370.f_539.f_4321;
}

void func_36()
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_39(Global_114963.f_2370.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_38(PLAYER::PLAYER_PED_ID());
			if (func_37(iVar0) && (!func_23(14) || Global_113909))
			{
				if (Global_114963.f_2370.f_539.f_4321 != iVar0 && func_37(Global_114963.f_2370.f_539.f_4321))
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

bool func_37(int iParam0)
{
	return iParam0 < 3;
}

int func_38(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_39(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_39(int iParam0)
{
	if (func_37(iParam0))
	{
		return func_40(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_40(int iParam0)
{
	return Global_2349[iParam0 /*29*/];
}

void func_41()
{
	struct<16> Var0;
	char* sVar16;
	int iVar17;
	
	if (Global_21627 == 0)
	{
		if ((func_3(2, Global_21618, 0) || Global_114963.f_14060[Global_21649 /*20*/].f_17 == 1) || Global_24083 == 1)
		{
			if (Global_114963.f_14060[Global_21649 /*20*/].f_17 == 0 && Global_24083 == 0)
			{
				func_30();
			}
			Global_21627 = 1;
			iLocal_81 = 0;
			iLocal_75 = iLocal_36[iLocal_73];
			if (Global_114963.f_14150[iLocal_75 /*104*/].f_24 != 0)
			{
				if (Global_21649.f_1 > 3)
				{
					func_24(Global_21630, "SET_SOFT_KEYS", 1f, 0f, 11f, -1f, -1f, 0, 0, 0, 0, 0);
					MISC::CLEAR_BIT(&Global_9502, 17);
					Global_21649.f_1 = 8;
				}
				if (Global_114963.f_14060[Global_21649 /*20*/].f_17 == 1 || Global_24083 == 1)
				{
					iLocal_75 = iLocal_36[0];
					iLocal_74 = 0;
					if (Global_114963.f_14060[Global_21649 /*20*/].f_17 == 1)
					{
					}
					Global_24083 = 0;
				}
				else
				{
					SYSTEM::SETTIMERB(0);
					iLocal_79 = 0;
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21630, "GET_CURRENT_SELECTION");
					iLocal_84 = GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
					while (!GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(iLocal_84) && iLocal_79 == 0)
					{
						SYSTEM::WAIT(0);
						if (SYSTEM::TIMERB() > 2000)
						{
							iLocal_79 = 1;
						}
					}
					if (iLocal_79 == 1)
					{
						iLocal_80 = 0;
					}
					else
					{
						iLocal_80 = GRAPHICS::GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_INT(iLocal_84);
					}
					if (iLocal_80 < 0)
					{
						iLocal_80 = 0;
					}
					iLocal_75 = iLocal_36[iLocal_80];
					iLocal_74 = iLocal_80;
				}
				Global_114963.f_14150[iLocal_75 /*104*/].f_28 = 1;
				iLocal_77 = 0;
				StringCopy(&Global_24064, "NO_HYPERLINK", 64);
				Var0 = { Global_114963.f_14150[iLocal_75 /*104*/] };
				StringConCat(&Var0, "_LINK", 64);
				if (HUD::DOES_TEXT_LABEL_EXIST(&Var0))
				{
					Global_24064 = { Var0 };
					iLocal_77 = 1;
					if (Global_21637)
					{
						func_24(Global_21630, "SET_SOFT_KEYS", 1f, 1f, 16f, -1f, -1f, "CELL_267", 0, 0, 0, 0);
					}
					else
					{
						func_24(Global_21630, "SET_SOFT_KEYS", 1f, 1f, 16f, -1f, -1f, 0, 0, 0, 0, 0);
					}
					MISC::SET_BIT(&Global_9502, 17);
					Global_114963.f_14150[iLocal_75 /*104*/].f_26 = 1;
					Global_114963.f_14150[iLocal_75 /*104*/].f_24 = 2;
				}
				if (Global_114963.f_14150[iLocal_75 /*104*/].f_26 == 0)
				{
					Global_114963.f_14150[iLocal_75 /*104*/].f_24 = 1;
				}
				func_45();
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21630, "SET_DATA_SLOT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(7);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
				if (Global_114963.f_14150[iLocal_75 /*104*/].f_17 == 145)
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_2000");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_114963.f_14150[iLocal_75 /*104*/].f_50));
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else
				{
					func_10(&(Global_2349[Global_114963.f_14150[iLocal_75 /*104*/].f_17 /*29*/].f_3));
				}
				switch (Global_114963.f_14150[iLocal_75 /*104*/].f_32)
				{
					case 0:
						func_10(&(Global_114963.f_14150[iLocal_75 /*104*/]));
						break;
					
					case 1:
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_114963.f_14150[iLocal_75 /*104*/]));
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_114963.f_14150[iLocal_75 /*104*/].f_33));
						if (Global_114963.f_14150[iLocal_75 /*104*/].f_66 == 1 && !MISC::ARE_STRINGS_EQUAL(&(Global_114963.f_14150[iLocal_75 /*104*/].f_67), "NULL"))
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_114963.f_14150[iLocal_75 /*104*/].f_67));
						}
						if ((Global_114963.f_14150[iLocal_75 /*104*/].f_66 == 2 && !MISC::ARE_STRINGS_EQUAL(&(Global_114963.f_14150[iLocal_75 /*104*/].f_67), "NULL")) && !MISC::ARE_STRINGS_EQUAL(&(Global_114963.f_14150[iLocal_75 /*104*/].f_83), "NULL"))
						{
							if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_114963.f_14150[iLocal_75 /*104*/].f_67)))
							{
								HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_114963.f_14150[iLocal_75 /*104*/].f_67));
							}
							else
							{
								HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_114963.f_14150[iLocal_75 /*104*/].f_67));
							}
							if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_114963.f_14150[iLocal_75 /*104*/].f_83)))
							{
								HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_114963.f_14150[iLocal_75 /*104*/].f_83));
							}
							else
							{
								HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_114963.f_14150[iLocal_75 /*104*/].f_83));
							}
						}
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
						break;
					
					case 2:
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_114963.f_14150[iLocal_75 /*104*/]));
						HUD::ADD_TEXT_COMPONENT_INTEGER(Global_114963.f_14150[iLocal_75 /*104*/].f_49);
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
						break;
					
					case 3:
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_114963.f_14150[iLocal_75 /*104*/]));
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_114963.f_14150[iLocal_75 /*104*/].f_33));
						HUD::ADD_TEXT_COMPONENT_INTEGER(Global_114963.f_14150[iLocal_75 /*104*/].f_49);
						if (Global_114963.f_14150[iLocal_75 /*104*/].f_66 == 1 && !MISC::ARE_STRINGS_EQUAL(&(Global_114963.f_14150[iLocal_75 /*104*/].f_67), "NULL"))
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_114963.f_14150[iLocal_75 /*104*/].f_67));
						}
						if ((Global_114963.f_14150[iLocal_75 /*104*/].f_66 == 2 && !MISC::ARE_STRINGS_EQUAL(&(Global_114963.f_14150[iLocal_75 /*104*/].f_67), "NULL")) && !MISC::ARE_STRINGS_EQUAL(&(Global_114963.f_14150[iLocal_75 /*104*/].f_83), "NULL"))
						{
							if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_114963.f_14150[iLocal_75 /*104*/].f_67)))
							{
								HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_114963.f_14150[iLocal_75 /*104*/].f_67));
							}
							else
							{
								HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_114963.f_14150[iLocal_75 /*104*/].f_67));
							}
							if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_114963.f_14150[iLocal_75 /*104*/].f_83)))
							{
								HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_114963.f_14150[iLocal_75 /*104*/].f_83));
							}
							else
							{
								HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_114963.f_14150[iLocal_75 /*104*/].f_83));
							}
						}
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
						break;
					
					case 4:
						func_44(iLocal_75);
						break;
					
					case 5:
						func_44(iLocal_75);
						break;
					
					case 6:
						func_44(iLocal_75);
						break;
					
					case 7:
						func_44(iLocal_75);
						break;
					
					case 8:
						func_44(iLocal_75);
						break;
					
					case 9:
						func_44(iLocal_75);
						break;
					
					case 10:
						func_44(iLocal_75);
						break;
					
					case 11:
						func_44(iLocal_75);
						break;
					
					case 12:
						func_43(iLocal_75);
						break;
				}
				if (Global_24093[iLocal_75] == 0)
				{
					if (Global_114963.f_14150[iLocal_75 /*104*/].f_17 == 159)
					{
						func_10("CELL_COMIC_P");
					}
					else
					{
						func_10(&(Global_2349[Global_114963.f_14150[iLocal_75 /*104*/].f_17 /*29*/].f_7));
					}
				}
				else
				{
					if (PED::IS_PEDHEADSHOT_VALID(Global_24093[iLocal_75]))
					{
						if (PED::IS_PEDHEADSHOT_READY(Global_24093[iLocal_75]))
						{
							sVar16 = PED::GET_PEDHEADSHOT_TXD_STRING(Global_24093[iLocal_75]);
						}
						else
						{
							sVar16 = "CHAR_DEFAULT";
						}
					}
					else
					{
						sVar16 = "CHAR_DEFAULT";
					}
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_2000");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sVar16);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				Global_24089 = 1;
				func_54(Global_21630, "DISPLAY_VIEW", 7f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_42(Global_21630, "SET_HEADER", "CELL_1", 0, 0, 0, 0);
				HUD::THEFEED_REMOVE_ITEM(Global_114963.f_14150[iLocal_75 /*104*/].f_16);
				if (Global_114963.f_14150[iLocal_75 /*104*/].f_29 > 0)
				{
					if (Global_21637)
					{
						func_24(Global_21630, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, "CELL_212", 0, 0, 0, 0);
					}
					else
					{
						func_24(Global_21630, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else if (Global_114963.f_14150[iLocal_75 /*104*/].f_30 == 1)
				{
					if (Global_21637)
					{
						func_24(Global_21630, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
					}
					else
					{
						func_24(Global_21630, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else
				{
					func_24(Global_21630, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				if (Global_114963.f_14150[iLocal_75 /*104*/].f_29 > 0)
				{
					if (MISC::ARE_STRINGS_EQUAL(&(Global_114963.f_14150[iLocal_75 /*104*/]), "CELL_FINV"))
					{
						if (Global_21637)
						{
							func_24(Global_21630, "SET_SOFT_KEYS", 3f, 0f, 14f, -1f, -1f, "CELL_213", 0, 0, 0, 0);
						}
						else
						{
							func_24(Global_21630, "SET_SOFT_KEYS", 3f, 0f, 14f, -1f, -1f, 0, 0, 0, 0, 0);
						}
					}
					else if (Global_21637)
					{
						func_24(Global_21630, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, "CELL_213", 0, 0, 0, 0);
					}
					else
					{
						func_24(Global_21630, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else if (Global_21637)
				{
					func_24(Global_21630, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
				}
				else
				{
					func_24(Global_21630, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				if (Global_114963.f_14150[iLocal_75 /*104*/].f_24 == 2)
				{
					if (Global_114963.f_14150[iLocal_75 /*104*/].f_31 == 1)
					{
						iLocal_77 = 0;
						if (Global_21637)
						{
							func_24(Global_21630, "SET_SOFT_KEYS", 1f, 1f, 11f, -1f, -1f, "CELL_264", 0, 0, 0, 0);
						}
						else
						{
							func_24(Global_21630, "SET_SOFT_KEYS", 1f, 1f, 11f, -1f, -1f, 0, 0, 0, 0, 0);
						}
						MISC::SET_BIT(&Global_9502, 17);
					}
					else if (iLocal_77 == 0)
					{
						func_24(Global_21630, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
						MISC::CLEAR_BIT(&Global_9502, 17);
					}
				}
				else if (Global_21637)
				{
					func_24(Global_21630, "SET_SOFT_KEYS", 1f, 1f, 12f, -1f, -1f, "CELL_216", 0, 0, 0, 0);
					MISC::SET_BIT(&Global_9502, 17);
				}
				else
				{
					func_24(Global_21630, "SET_SOFT_KEYS", 1f, 1f, 12f, -1f, -1f, 0, 0, 0, 0, 0);
					MISC::SET_BIT(&Global_9502, 17);
				}
				Global_114963.f_14060[Global_21649 /*20*/].f_18 = 0;
				Global_114963.f_14060[Global_21649 /*20*/].f_17 = 0;
			}
			else
			{
				iVar17 = 0;
				if (Global_114963.f_14060[Global_21649 /*20*/].f_17 == 1 || Global_24083 == 1)
				{
					if (Global_24083)
					{
					}
					iVar17 = 1;
				}
				Global_114963.f_14060[Global_21649 /*20*/].f_18 = 0;
				Global_114963.f_14060[Global_21649 /*20*/].f_17 = 0;
				if (iVar17 == 1)
				{
					iVar17 = 0;
					Global_21649.f_1 = 3;
				}
			}
		}
		if (Global_2740404 == 0)
		{
			if (Global_80337)
			{
				PAD::SET_INPUT_EXCLUSIVE(0, Global_21621);
				if (func_3(2, Global_21621, 0))
				{
					Global_21627 = 1;
					Global_2740404 = 1;
				}
			}
		}
	}
}

void func_42(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, sParam1);
	func_10(sParam2);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
	{
		func_10(sParam3);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
	{
		func_10(sParam4);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam5))
	{
		func_10(sParam5);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam6))
	{
		func_10(sParam6);
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_43(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	switch (Global_114963.f_14150[iParam0 /*104*/].f_49)
	{
		case 1:
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("TUN_CBL_L01");
			break;
		
		case 2:
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("TUN_CBL_L02");
			break;
		
		case 3:
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("TUN_CBL_L03");
			break;
		
		case 4:
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("TUN_CBL_L04");
			break;
		
		case 5:
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("TUN_CBL_L05");
			break;
		
		case 6:
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("TUN_CBL_L06");
			break;
		
		case 7:
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("TUN_CBL_L07");
			break;
		
		case 8:
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("TUN_CBL_L08");
			break;
		
		case 9:
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("TUN_CBL_L09");
			break;
		
		case 10:
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("TUN_CBL_L10");
			break;
	}
	while (iVar0 < Global_114963.f_14150[iParam0 /*104*/].f_49)
	{
		switch (Global_114963.f_14150[iParam0 /*104*/].f_32)
		{
			case 12:
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1935544[iVar0 /*4*/]));
				break;
		}
		iVar0++;
	}
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

void func_44(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	switch (Global_114963.f_14150[iParam0 /*104*/].f_49)
	{
		case 1:
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_CL01");
			break;
		
		case 2:
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_CL02");
			break;
		
		case 3:
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_CL03");
			break;
		
		case 4:
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_CL04");
			break;
		
		case 5:
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_CL05");
			break;
		
		case 6:
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_CL06");
			break;
		
		case 7:
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_CL07");
			break;
		
		case 8:
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_CL08");
			break;
		
		case 9:
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_CL09");
			break;
	}
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_114963.f_14150[iParam0 /*104*/]));
	while (iVar0 < Global_114963.f_14150[iParam0 /*104*/].f_49)
	{
		switch (Global_114963.f_14150[iParam0 /*104*/].f_32)
		{
			case 4:
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_2733190.f_848[iVar0 /*4*/]));
				break;
			
			case 5:
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1935413[iVar0 /*4*/]));
				break;
			
			case 6:
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1935454[iVar0 /*4*/]));
				break;
			
			case 7:
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1935475[iVar0 /*4*/]));
				break;
			
			case 8:
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1935492[iVar0 /*4*/]));
				break;
			
			case 9:
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1935505[iVar0 /*4*/]));
				break;
			
			case 10:
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1935518[iVar0 /*4*/]));
				break;
			
			case 11:
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1935531[iVar0 /*4*/]));
				break;
		}
		iVar0++;
	}
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

void func_45()
{
	int iVar0;
	
	if (iLocal_2476)
	{
		GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(&uLocal_85);
	}
	iLocal_2476 = 0;
	if (Global_114963.f_14150[iLocal_75 /*104*/].f_24 != 0)
	{
		iVar0 = 0;
		while (iVar0 < 185)
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Local_101[iVar0 /*6*/])) && MISC::ARE_STRINGS_EQUAL(&(Global_114963.f_14150[iLocal_75 /*104*/]), &(Local_101[iVar0 /*6*/])))
			{
				if (iVar0 < 19)
				{
					MemCopy(&uLocal_85, {Local_2323[iVar0 /*8*/]}, 16);
				}
				else
				{
					MemCopy(&uLocal_85, {Local_1212[iVar0 /*6*/]}, 16);
				}
				iLocal_2476 = 1;
				GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(&uLocal_85, false);
				while (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED(&uLocal_85))
				{
					SYSTEM::WAIT(100);
				}
			}
			iVar0++;
		}
	}
}

void func_46()
{
	if (iLocal_78)
	{
		if (SYSTEM::TIMERA() > 50)
		{
			iLocal_78 = 0;
		}
	}
	if (iLocal_78 == 0)
	{
		if (func_3(2, Global_21625, 0) || PAD::IS_CONTROL_JUST_PRESSED(2, 181))
		{
			if (iLocal_73 > 0)
			{
				iLocal_73 = (iLocal_73 - 1);
			}
			func_49();
			iLocal_78 = 1;
			SYSTEM::SETTIMERA(0);
		}
		if (func_3(2, Global_21626, 0) || PAD::IS_CONTROL_JUST_PRESSED(2, 180))
		{
			iLocal_73++;
			if (iLocal_73 == iLocal_72)
			{
				iLocal_73 = 0;
			}
			func_47();
			iLocal_78 = 1;
			SYSTEM::SETTIMERA(0);
		}
	}
}

void func_47()
{
	func_54(Global_21630, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(3), -1082130432, -1082130432, -1082130432, -1082130432);
	AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_21638, true);
	func_48();
}

void func_48()
{
	if (func_32())
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

void func_49()
{
	func_54(Global_21630, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(1), -1082130432, -1082130432, -1082130432, -1082130432);
	AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_21638, true);
	func_50();
}

void func_50()
{
	if (func_32())
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

void func_51()
{
	if (Global_114963.f_14060[Global_21649 /*20*/].f_17 == 0)
	{
		if (iLocal_74 < 0)
		{
			iLocal_74 = 0;
		}
		func_54(Global_21630, "DISPLAY_VIEW", 6f, SYSTEM::TO_FLOAT(iLocal_74), -1082130432, -1082130432, -1082130432);
		func_42(Global_21630, "SET_HEADER", "CELL_1", 0, 0, 0, 0);
		if (Global_21637)
		{
			if (iLocal_72 > 0)
			{
				func_24(Global_21630, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_214", 0, 0, 0, 0);
			}
			else
			{
				func_24(Global_21630, "SET_SOFT_KEYS", 2f, 0f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			func_24(Global_21630, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
		}
		else
		{
			if (iLocal_72 > 0)
			{
				func_24(Global_21630, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else
			{
				func_24(Global_21630, "SET_SOFT_KEYS", 2f, 0f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			func_24(Global_21630, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
		}
		if (Global_80337)
		{
			func_24(Global_21630, "SET_SOFT_KEYS", 1f, 1f, 11f, -1f, -1f, 0, 0, 0, 0, 0);
			MISC::CLEAR_BIT(&Global_9502, 17);
		}
		else
		{
			func_24(Global_21630, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			MISC::CLEAR_BIT(&Global_9502, 17);
		}
	}
	else
	{
		iLocal_74 = 0;
	}
}

void func_52()
{
	int iVar0[35];
	int iVar36;
	int iVar37;
	int iVar38;
	
	iLocal_72 = 0;
	func_34();
	iVar36 = 0;
	while (iVar36 < 34)
	{
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand")) == 0)
		{
			func_75();
		}
		iVar37 = 0;
		iVar38 = 34;
		Global_114963.f_14150[iVar38 /*104*/].f_18 = -1;
		Global_114963.f_14150[iVar38 /*104*/].f_18.f_1 = 0;
		Global_114963.f_14150[iVar38 /*104*/].f_18.f_2 = 0;
		Global_114963.f_14150[iVar38 /*104*/].f_18.f_3 = 0;
		Global_114963.f_14150[iVar38 /*104*/].f_18.f_5 = 0;
		while (iVar37 < 35)
		{
			if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand")) == 0)
			{
				func_75();
			}
			if (iVar0[iVar37] == 0)
			{
				if (Global_114963.f_14150[iVar37 /*104*/].f_24 != 0)
				{
					if (Global_114963.f_14150[iVar37 /*104*/].f_99[Global_21649] == 1)
					{
						if (func_53(Global_114963.f_14150[iVar37 /*104*/].f_18, Global_114963.f_14150[iVar38 /*104*/].f_18))
						{
							iVar38 = iVar37;
							if (Global_114963.f_14150[iVar38 /*104*/].f_28 == 0)
							{
								iLocal_76 = 33;
							}
							else
							{
								iLocal_76 = 34;
							}
						}
					}
				}
			}
			iVar37++;
		}
		iLocal_36[iVar36] = iVar38;
		iVar0[iVar38] = 1;
		if (Global_114963.f_14150[iVar38 /*104*/].f_24 != 0)
		{
			if (Global_114963.f_14150[iVar38 /*104*/].f_99[Global_21649] == 1)
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21630, "SET_DATA_SLOT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(6);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar36);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_114963.f_14150[iVar38 /*104*/].f_18.f_2);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_114963.f_14150[iVar38 /*104*/].f_18.f_1);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iLocal_76);
				if (Global_114963.f_14150[iVar38 /*104*/].f_17 == 145)
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_CONDFNH");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_114963.f_14150[iVar38 /*104*/].f_50));
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else
				{
					func_10(&(Global_2349[Global_114963.f_14150[iVar38 /*104*/].f_17 /*29*/].f_3));
				}
				switch (Global_114963.f_14150[iVar38 /*104*/].f_32)
				{
					case 0:
						func_10(&(Global_114963.f_14150[iVar38 /*104*/]));
						break;
					
					case 1:
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_114963.f_14150[iVar38 /*104*/]));
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_114963.f_14150[iVar38 /*104*/].f_33));
						if (Global_114963.f_14150[iVar38 /*104*/].f_66 == 1 && !MISC::ARE_STRINGS_EQUAL(&(Global_114963.f_14150[iVar38 /*104*/].f_67), "NULL"))
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_114963.f_14150[iVar38 /*104*/].f_67));
						}
						if ((Global_114963.f_14150[iVar38 /*104*/].f_66 == 2 && !MISC::ARE_STRINGS_EQUAL(&(Global_114963.f_14150[iVar38 /*104*/].f_67), "NULL")) && !MISC::ARE_STRINGS_EQUAL(&(Global_114963.f_14150[iVar38 /*104*/].f_83), "NULL"))
						{
							if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_114963.f_14150[iVar38 /*104*/].f_67)))
							{
								HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_114963.f_14150[iVar38 /*104*/].f_67));
							}
							else
							{
								HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_114963.f_14150[iVar38 /*104*/].f_67));
							}
							if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_114963.f_14150[iVar38 /*104*/].f_83)))
							{
								HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_114963.f_14150[iVar38 /*104*/].f_83));
							}
							else
							{
								HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_114963.f_14150[iVar38 /*104*/].f_83));
							}
						}
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
						break;
					
					case 2:
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_114963.f_14150[iVar38 /*104*/]));
						HUD::ADD_TEXT_COMPONENT_INTEGER(Global_114963.f_14150[iVar38 /*104*/].f_49);
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
						break;
					
					case 3:
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_114963.f_14150[iVar38 /*104*/]));
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_114963.f_14150[iVar38 /*104*/].f_33));
						HUD::ADD_TEXT_COMPONENT_INTEGER(Global_114963.f_14150[iVar38 /*104*/].f_49);
						if (Global_114963.f_14150[iVar38 /*104*/].f_66 == 1 && !MISC::ARE_STRINGS_EQUAL(&(Global_114963.f_14150[iVar38 /*104*/].f_67), "NULL"))
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_114963.f_14150[iVar38 /*104*/].f_67));
						}
						if ((Global_114963.f_14150[iVar38 /*104*/].f_66 == 2 && !MISC::ARE_STRINGS_EQUAL(&(Global_114963.f_14150[iVar38 /*104*/].f_67), "NULL")) && !MISC::ARE_STRINGS_EQUAL(&(Global_114963.f_14150[iVar38 /*104*/].f_83), "NULL"))
						{
							if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_114963.f_14150[iVar38 /*104*/].f_67)))
							{
								HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_114963.f_14150[iVar38 /*104*/].f_67));
							}
							else
							{
								HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_114963.f_14150[iVar38 /*104*/].f_67));
							}
							if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_114963.f_14150[iVar38 /*104*/].f_83)))
							{
								HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_114963.f_14150[iVar38 /*104*/].f_83));
							}
							else
							{
								HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_114963.f_14150[iVar38 /*104*/].f_83));
							}
						}
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
						break;
					
					case 4:
						func_44(iVar38);
						break;
					
					case 5:
						func_44(iVar38);
						break;
					
					case 6:
						func_44(iVar38);
						break;
					
					case 7:
						func_44(iVar38);
						break;
					
					case 8:
						func_44(iVar38);
						break;
					
					case 9:
						func_44(iVar38);
						break;
					
					case 10:
						func_44(iVar38);
						break;
					
					case 11:
						func_44(iVar38);
						break;
					
					case 12:
						func_43(iVar38);
						break;
				}
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
		}
		if (Global_114963.f_14150[iVar36 /*104*/].f_24 != 0)
		{
			if (Global_114963.f_14150[iVar36 /*104*/].f_99[Global_21649] == 1)
			{
				iLocal_72++;
			}
		}
		iVar36++;
	}
}

int func_53(struct<6> Param0, struct<6> Param6)
{
	struct<4> Var0;
	struct<4> Var6;
	int iVar12;
	int iVar13;
	
	if (Param0.f_5 < Param6.f_5)
	{
		return 0;
	}
	if (Param0.f_5 > Param6.f_5)
	{
		return 1;
	}
	if (Param0.f_5 == Param6.f_5)
	{
		if (Param0.f_4 < Param6.f_4)
		{
			return 0;
		}
		if (Param0.f_4 > Param6.f_4)
		{
			return 1;
		}
		if (Param0.f_4 == Param6.f_4)
		{
			Var0.f_0 = Param0.f_0;
			Var0.f_1 = Param0.f_1 * 60;
			Var0.f_2 = Param0.f_2 * 3600;
			Var0.f_3 = (Param0.f_3 * 86400);
			iVar12 = (((Var0.f_0 + Var0.f_1) + Var0.f_2) + Var0.f_3);
			Var6.f_0 = Param6.f_0;
			Var6.f_1 = Param6.f_1 * 60;
			Var6.f_2 = Param6.f_2 * 3600;
			Var6.f_3 = (Param6.f_3 * 86400);
			iVar13 = (((Var6.f_0 + Var6.f_1) + Var6.f_2) + Var6.f_3);
			if (iVar12 > iVar13 || iVar12 == iVar13)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	return 0;
}

void func_54(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
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

void func_55()
{
	StringCopy(&(Local_101[0 /*6*/]), "SXT_JUL_1ST", 24);
	StringCopy(&(Local_2323[0 /*8*/]), "05_a_sext_stripperJuliet", 32);
	StringCopy(&(Local_101[1 /*6*/]), "SXT_JUL_2ND", 24);
	StringCopy(&(Local_2323[1 /*8*/]), "05_b_sext_stripperJuliet", 32);
	StringCopy(&(Local_101[2 /*6*/]), "SXT_JUL_NEED", 24);
	StringCopy(&(Local_2323[2 /*8*/]), "05_c_sext_stripperJuliet", 32);
	StringCopy(&(Local_101[3 /*6*/]), "SXT_NIK_1ST", 24);
	StringCopy(&(Local_2323[3 /*8*/]), "06_a_sext_stripperNikki", 32);
	StringCopy(&(Local_101[4 /*6*/]), "SXT_NIK_2ND", 24);
	StringCopy(&(Local_2323[4 /*8*/]), "06_b_sext_stripperNikki", 32);
	StringCopy(&(Local_101[5 /*6*/]), "SXT_NIK_NEED", 24);
	StringCopy(&(Local_2323[5 /*8*/]), "06_c_sext_stripperNikki", 32);
	StringCopy(&(Local_101[6 /*6*/]), "SXT_SAP_1ST", 24);
	StringCopy(&(Local_2323[6 /*8*/]), "08_a_sext_stripperSapphire", 32);
	StringCopy(&(Local_101[7 /*6*/]), "SXT_SAP_2ND", 24);
	StringCopy(&(Local_2323[7 /*8*/]), "08_b_sext_stripperSapphire", 32);
	StringCopy(&(Local_101[8 /*6*/]), "SXT_SAP_NEED", 24);
	StringCopy(&(Local_2323[8 /*8*/]), "08_c_sext_stripperSapphire", 32);
	StringCopy(&(Local_101[9 /*6*/]), "SXT_INF_1ST", 24);
	StringCopy(&(Local_2323[9 /*8*/]), "04_a_sext_stripperInfernus", 32);
	StringCopy(&(Local_101[10 /*6*/]), "SXT_INF_2ND", 24);
	StringCopy(&(Local_2323[10 /*8*/]), "04_b_sext_stripperInfernus", 32);
	StringCopy(&(Local_101[11 /*6*/]), "SXT_INF_NEED", 24);
	StringCopy(&(Local_2323[11 /*8*/]), "04_c_sext_stripperInfernus", 32);
	StringCopy(&(Local_101[12 /*6*/]), "SXT_TXI_1ST", 24);
	StringCopy(&(Local_2323[12 /*8*/]), "11_a_sext_taxiLiz", 32);
	StringCopy(&(Local_101[13 /*6*/]), "SXT_TXI_2ND", 24);
	StringCopy(&(Local_2323[13 /*8*/]), "11_b_sext_taxiLiz", 32);
	StringCopy(&(Local_101[14 /*6*/]), "SXT_TXI_NEED", 24);
	StringCopy(&(Local_2323[14 /*8*/]), "11_c_sext_taxiLiz", 32);
	StringCopy(&(Local_101[15 /*6*/]), "SXT_HCH_1ST", 24);
	StringCopy(&(Local_2323[15 /*8*/]), "10_a_sext_hitcherGirl", 32);
	StringCopy(&(Local_101[16 /*6*/]), "SXT_HCH_2ND", 24);
	StringCopy(&(Local_2323[16 /*8*/]), "10_b_sext_hitcherGirl", 32);
	StringCopy(&(Local_101[17 /*6*/]), "SXT_HCH_NEED", 24);
	StringCopy(&(Local_2323[17 /*8*/]), "10_c_sext_hitcherGirl", 32);
	StringCopy(&(Local_101[18 /*6*/]), "SOL2_PASS", 24);
	StringCopy(&(Local_2323[18 /*8*/]), "executiveproducer", 32);
	StringCopy(&(Local_101[19 /*6*/]), "LR_PIC_TXT1", 24);
	StringCopy(&(Local_1212[19 /*6*/]), "mt_phone_image_1", 24);
	StringCopy(&(Local_101[20 /*6*/]), "LR_PIC_TXT2", 24);
	StringCopy(&(Local_1212[20 /*6*/]), "mt_phone_image_2", 24);
	StringCopy(&(Local_101[21 /*6*/]), "LR_PIC_TXT3", 24);
	StringCopy(&(Local_1212[21 /*6*/]), "mt_phone_image_3", 24);
	StringCopy(&(Local_101[22 /*6*/]), "LR_PIC_TXT4", 24);
	StringCopy(&(Local_1212[22 /*6*/]), "mt_phone_image_4", 24);
	StringCopy(&(Local_101[23 /*6*/]), "LR_PIC_TXT5", 24);
	StringCopy(&(Local_1212[23 /*6*/]), "mt_phone_image_5", 24);
	StringCopy(&(Local_101[24 /*6*/]), "SAD_SMS_0", 24);
	StringCopy(&(Local_1212[24 /*6*/]), "MP_SND_TARGET_01", 24);
	StringCopy(&(Local_101[25 /*6*/]), "SAD_SMS_1", 24);
	StringCopy(&(Local_1212[25 /*6*/]), "MP_SND_TARGET_02", 24);
	StringCopy(&(Local_101[26 /*6*/]), "SAD_SMS_2", 24);
	StringCopy(&(Local_1212[26 /*6*/]), "MP_SND_TARGET_03", 24);
	StringCopy(&(Local_101[27 /*6*/]), "SAD_SMS_3", 24);
	StringCopy(&(Local_1212[27 /*6*/]), "MP_SND_TARGET_04", 24);
	StringCopy(&(Local_101[28 /*6*/]), "SAD_SMS_4", 24);
	StringCopy(&(Local_1212[28 /*6*/]), "MP_SND_TARGET_05", 24);
	StringCopy(&(Local_101[29 /*6*/]), "SAD_SMS_5", 24);
	StringCopy(&(Local_1212[29 /*6*/]), "MP_SND_TARGET_06", 24);
	StringCopy(&(Local_101[30 /*6*/]), "SAD_SMS_6", 24);
	StringCopy(&(Local_1212[30 /*6*/]), "MP_SND_TARGET_07", 24);
	StringCopy(&(Local_101[31 /*6*/]), "SAD_SMS_7", 24);
	StringCopy(&(Local_1212[31 /*6*/]), "MP_SND_TARGET_08", 24);
	StringCopy(&(Local_101[32 /*6*/]), "SAD_SMS_8", 24);
	StringCopy(&(Local_1212[32 /*6*/]), "MP_SND_TARGET_09", 24);
	StringCopy(&(Local_101[33 /*6*/]), "SAD_SMS_9", 24);
	StringCopy(&(Local_1212[33 /*6*/]), "MP_SND_TARGET_10", 24);
	StringCopy(&(Local_101[34 /*6*/]), "SAD_SMS_10", 24);
	StringCopy(&(Local_1212[34 /*6*/]), "MP_SND_TARGET_11", 24);
	StringCopy(&(Local_101[35 /*6*/]), "SAD_SMS_11", 24);
	StringCopy(&(Local_1212[35 /*6*/]), "MP_SND_TARGET_12", 24);
	StringCopy(&(Local_101[36 /*6*/]), "SAD_SMS_12", 24);
	StringCopy(&(Local_1212[36 /*6*/]), "MP_SND_TARGET_13", 24);
	StringCopy(&(Local_101[37 /*6*/]), "SAD_SMS_13", 24);
	StringCopy(&(Local_1212[37 /*6*/]), "MP_SND_TARGET_14", 24);
	StringCopy(&(Local_101[38 /*6*/]), "SAD_SMS_14", 24);
	StringCopy(&(Local_1212[38 /*6*/]), "MP_SND_TARGET_15", 24);
	StringCopy(&(Local_101[39 /*6*/]), "SAD_SMS_15", 24);
	StringCopy(&(Local_1212[39 /*6*/]), "MP_SND_TARGET_16", 24);
	StringCopy(&(Local_101[40 /*6*/]), "SAD_SMS_16", 24);
	StringCopy(&(Local_1212[40 /*6*/]), "MP_SND_TARGET_17", 24);
	StringCopy(&(Local_101[41 /*6*/]), "SAD_SMS_17", 24);
	StringCopy(&(Local_1212[41 /*6*/]), "MP_SND_TARGET_18", 24);
	StringCopy(&(Local_101[42 /*6*/]), "SAD_SMS_18", 24);
	StringCopy(&(Local_1212[42 /*6*/]), "MP_SND_TARGET_19", 24);
	StringCopy(&(Local_101[43 /*6*/]), "SAD_SMS_19", 24);
	StringCopy(&(Local_1212[43 /*6*/]), "MP_SND_TARGET_20", 24);
	StringCopy(&(Local_101[44 /*6*/]), "VEX_PM_PHOTO0", 24);
	StringCopy(&(Local_1212[44 /*6*/]), "MP_EX_LOCATION_01", 24);
	StringCopy(&(Local_101[45 /*6*/]), "VEX_PM_PHOTO1", 24);
	StringCopy(&(Local_1212[45 /*6*/]), "MP_EX_LOCATION_02", 24);
	StringCopy(&(Local_101[46 /*6*/]), "VEX_PM_PHOTO2", 24);
	StringCopy(&(Local_1212[46 /*6*/]), "MP_EX_LOCATION_03", 24);
	StringCopy(&(Local_101[47 /*6*/]), "VEX_PM_PHOTO3", 24);
	StringCopy(&(Local_1212[47 /*6*/]), "MP_EX_LOCATION_04", 24);
	StringCopy(&(Local_101[48 /*6*/]), "VEX_PM_PHOTO4", 24);
	StringCopy(&(Local_1212[48 /*6*/]), "MP_EX_LOCATION_05", 24);
	StringCopy(&(Local_101[49 /*6*/]), "VEX_PM_PHOTO5", 24);
	StringCopy(&(Local_1212[49 /*6*/]), "MP_EX_LOCATION_06", 24);
	StringCopy(&(Local_101[50 /*6*/]), "VEX_PM_PHOTO6", 24);
	StringCopy(&(Local_1212[50 /*6*/]), "MP_EX_LOCATION_07", 24);
	StringCopy(&(Local_101[51 /*6*/]), "VEX_PM_PHOTO7", 24);
	StringCopy(&(Local_1212[51 /*6*/]), "MP_EX_LOCATION_08", 24);
	StringCopy(&(Local_101[52 /*6*/]), "VEX_PM_PHOTO8", 24);
	StringCopy(&(Local_1212[52 /*6*/]), "MP_EX_LOCATION_09", 24);
	StringCopy(&(Local_101[53 /*6*/]), "VEX_PM_PHOTO9", 24);
	StringCopy(&(Local_1212[53 /*6*/]), "MP_EX_LOCATION_10", 24);
	StringCopy(&(Local_101[54 /*6*/]), "VEX_PM_PHOTO10", 24);
	StringCopy(&(Local_1212[54 /*6*/]), "MP_EX_LOCATION_11", 24);
	StringCopy(&(Local_101[55 /*6*/]), "VEX_PM_PHOTO11", 24);
	StringCopy(&(Local_1212[55 /*6*/]), "MP_EX_LOCATION_12", 24);
	StringCopy(&(Local_101[56 /*6*/]), "VEX_PM_PHOTO12", 24);
	StringCopy(&(Local_1212[56 /*6*/]), "MP_EX_LOCATION_13", 24);
	StringCopy(&(Local_101[57 /*6*/]), "VEX_PM_PHOTO13", 24);
	StringCopy(&(Local_1212[57 /*6*/]), "MP_EX_LOCATION_14", 24);
	StringCopy(&(Local_101[58 /*6*/]), "VEX_1_PROTO", 24);
	StringCopy(&(Local_1212[58 /*6*/]), "IE_TEXTVECH_01", 24);
	StringCopy(&(Local_101[59 /*6*/]), "VEX_2_PROTO", 24);
	StringCopy(&(Local_1212[59 /*6*/]), "IE_TEXTVECH_02", 24);
	StringCopy(&(Local_101[60 /*6*/]), "VEX_3_PROTO", 24);
	StringCopy(&(Local_1212[60 /*6*/]), "IE_TEXTVECH_03", 24);
	StringCopy(&(Local_101[61 /*6*/]), "VEX_4_TYRUS", 24);
	StringCopy(&(Local_1212[61 /*6*/]), "IE_TEXTVECH_04", 24);
	StringCopy(&(Local_101[62 /*6*/]), "VEX_5_TYRUS", 24);
	StringCopy(&(Local_1212[62 /*6*/]), "IE_TEXTVECH_05", 24);
	StringCopy(&(Local_101[63 /*6*/]), "VEX_6_TYRUS", 24);
	StringCopy(&(Local_1212[63 /*6*/]), "IE_TEXTVECH_06", 24);
	StringCopy(&(Local_101[64 /*6*/]), "VEX_7_BESTIA", 24);
	StringCopy(&(Local_1212[64 /*6*/]), "IE_TEXTVECH_07", 24);
	StringCopy(&(Local_101[65 /*6*/]), "VEX_8_BESTIA", 24);
	StringCopy(&(Local_1212[65 /*6*/]), "IE_TEXTVECH_08", 24);
	StringCopy(&(Local_101[66 /*6*/]), "VEX_9_BESTIA", 24);
	StringCopy(&(Local_1212[66 /*6*/]), "IE_TEXTVECH_09", 24);
	StringCopy(&(Local_101[67 /*6*/]), "VEX_10_T20", 24);
	StringCopy(&(Local_1212[67 /*6*/]), "IE_TEXTVECH_10", 24);
	StringCopy(&(Local_101[68 /*6*/]), "VEX_11_T20", 24);
	StringCopy(&(Local_1212[68 /*6*/]), "IE_TEXTVECH_11", 24);
	StringCopy(&(Local_101[69 /*6*/]), "VEX_12_T20", 24);
	StringCopy(&(Local_1212[69 /*6*/]), "IE_TEXTVECH_12", 24);
	StringCopy(&(Local_101[70 /*6*/]), "VEX_13_SHEAVA", 24);
	StringCopy(&(Local_1212[70 /*6*/]), "IE_TEXTVECH_13", 24);
	StringCopy(&(Local_101[71 /*6*/]), "VEX_14_SHEAVA", 24);
	StringCopy(&(Local_1212[71 /*6*/]), "IE_TEXTVECH_14", 24);
	StringCopy(&(Local_101[72 /*6*/]), "VEX_15_SHEAVA", 24);
	StringCopy(&(Local_1212[72 /*6*/]), "IE_TEXTVECH_15", 24);
	StringCopy(&(Local_101[73 /*6*/]), "VEX_16_OSIRIS", 24);
	StringCopy(&(Local_1212[73 /*6*/]), "IE_TEXTVECH_16", 24);
	StringCopy(&(Local_101[74 /*6*/]), "VEX_17_OSIRIS", 24);
	StringCopy(&(Local_1212[74 /*6*/]), "IE_TEXTVECH_17", 24);
	StringCopy(&(Local_101[75 /*6*/]), "VEX_18_OSIRIS", 24);
	StringCopy(&(Local_1212[75 /*6*/]), "IE_TEXTVECH_18", 24);
	StringCopy(&(Local_101[76 /*6*/]), "VEX_19_FMJ", 24);
	StringCopy(&(Local_1212[76 /*6*/]), "IE_TEXTVECH_19", 24);
	StringCopy(&(Local_101[77 /*6*/]), "VEX_20_FMJ", 24);
	StringCopy(&(Local_1212[77 /*6*/]), "IE_TEXTVECH_20", 24);
	StringCopy(&(Local_101[78 /*6*/]), "VEX_21_FMJ", 24);
	StringCopy(&(Local_1212[78 /*6*/]), "IE_TEXTVECH_21", 24);
	StringCopy(&(Local_101[79 /*6*/]), "VEX_22_REAPER", 24);
	StringCopy(&(Local_1212[79 /*6*/]), "IE_TEXTVECH_22", 24);
	StringCopy(&(Local_101[80 /*6*/]), "VEX_23_REAPER", 24);
	StringCopy(&(Local_1212[80 /*6*/]), "IE_TEXTVECH_23", 24);
	StringCopy(&(Local_101[81 /*6*/]), "VEX_24_REAPER", 24);
	StringCopy(&(Local_1212[81 /*6*/]), "IE_TEXTVECH_24", 24);
	StringCopy(&(Local_101[82 /*6*/]), "VEX_25_PFISTER", 24);
	StringCopy(&(Local_1212[82 /*6*/]), "IE_TEXTVECH_25", 24);
	StringCopy(&(Local_101[83 /*6*/]), "VEX_26_PFISTER", 24);
	StringCopy(&(Local_1212[83 /*6*/]), "IE_TEXTVECH_26", 24);
	StringCopy(&(Local_101[84 /*6*/]), "VEX_27_PFISTER", 24);
	StringCopy(&(Local_1212[84 /*6*/]), "IE_TEXTVECH_27", 24);
	StringCopy(&(Local_101[85 /*6*/]), "VEX_28_ALPHA", 24);
	StringCopy(&(Local_1212[85 /*6*/]), "IE_TEXTVECH_28", 24);
	StringCopy(&(Local_101[86 /*6*/]), "VEX_29_ALPHA", 24);
	StringCopy(&(Local_1212[86 /*6*/]), "IE_TEXTVECH_29", 24);
	StringCopy(&(Local_101[87 /*6*/]), "VEX_30_ALPHA", 24);
	StringCopy(&(Local_1212[87 /*6*/]), "IE_TEXTVECH_30", 24);
	StringCopy(&(Local_101[88 /*6*/]), "VEX_31_MAMBA", 24);
	StringCopy(&(Local_1212[88 /*6*/]), "IE_TEXTVECH_31", 24);
	StringCopy(&(Local_101[89 /*6*/]), "VEX_32_MAMBA", 24);
	StringCopy(&(Local_1212[89 /*6*/]), "IE_TEXTVECH_32", 24);
	StringCopy(&(Local_101[90 /*6*/]), "VEX_33_MAMBA", 24);
	StringCopy(&(Local_1212[90 /*6*/]), "IE_TEXTVECH_33", 24);
	StringCopy(&(Local_101[91 /*6*/]), "VEX_34_TAMPA", 24);
	StringCopy(&(Local_1212[91 /*6*/]), "IE_TEXTVECH_34", 24);
	StringCopy(&(Local_101[92 /*6*/]), "VEX_35_TAMPA", 24);
	StringCopy(&(Local_1212[92 /*6*/]), "IE_TEXTVECH_35", 24);
	StringCopy(&(Local_101[93 /*6*/]), "VEX_36_TAMPA", 24);
	StringCopy(&(Local_1212[93 /*6*/]), "IE_TEXTVECH_36", 24);
	StringCopy(&(Local_101[94 /*6*/]), "VEX_37_BTYPE", 24);
	StringCopy(&(Local_1212[94 /*6*/]), "IE_TEXTVECH_37", 24);
	StringCopy(&(Local_101[95 /*6*/]), "VEX_38_BTYPE", 24);
	StringCopy(&(Local_1212[95 /*6*/]), "IE_TEXTVECH_38", 24);
	StringCopy(&(Local_101[96 /*6*/]), "VEX_39_BTYPE", 24);
	StringCopy(&(Local_1212[96 /*6*/]), "IE_TEXTVECH_39", 24);
	StringCopy(&(Local_101[97 /*6*/]), "VEX_40_FELTZ3", 24);
	StringCopy(&(Local_1212[97 /*6*/]), "IE_TEXTVECH_40", 24);
	StringCopy(&(Local_101[98 /*6*/]), "VEX_41_FELTZ3", 24);
	StringCopy(&(Local_1212[98 /*6*/]), "IE_TEXTVECH_41", 24);
	StringCopy(&(Local_101[99 /*6*/]), "VEX_42_FELTZ3", 24);
	StringCopy(&(Local_1212[99 /*6*/]), "IE_TEXTVECH_42", 24);
	StringCopy(&(Local_101[100 /*6*/]), "VEX_43_ZTYPE", 24);
	StringCopy(&(Local_1212[100 /*6*/]), "IE_TEXTVECH_43", 24);
	StringCopy(&(Local_101[101 /*6*/]), "VEX_44_ZTYPE", 24);
	StringCopy(&(Local_1212[101 /*6*/]), "IE_TEXTVECH_44", 24);
	StringCopy(&(Local_101[102 /*6*/]), "VEX_45_ZTYPE", 24);
	StringCopy(&(Local_1212[102 /*6*/]), "IE_TEXTVECH_45", 24);
	StringCopy(&(Local_101[103 /*6*/]), "VEX_46_TROPOS", 24);
	StringCopy(&(Local_1212[103 /*6*/]), "IE_TEXTVECH_46", 24);
	StringCopy(&(Local_101[104 /*6*/]), "VEX_47_TROPOS", 24);
	StringCopy(&(Local_1212[104 /*6*/]), "IE_TEXTVECH_47", 24);
	StringCopy(&(Local_101[105 /*6*/]), "VEX_48_TROPOS", 24);
	StringCopy(&(Local_1212[105 /*6*/]), "IE_TEXTVECH_48", 24);
	StringCopy(&(Local_101[106 /*6*/]), "VEX_49_ENTITYXF", 24);
	StringCopy(&(Local_1212[106 /*6*/]), "IE_TEXTVECH_49", 24);
	StringCopy(&(Local_101[107 /*6*/]), "VEX_50_ENTITYXF", 24);
	StringCopy(&(Local_1212[107 /*6*/]), "IE_TEXTVECH_50", 24);
	StringCopy(&(Local_101[108 /*6*/]), "VEX_51_ENTITYXF", 24);
	StringCopy(&(Local_1212[108 /*6*/]), "IE_TEXTVECH_51", 24);
	StringCopy(&(Local_101[109 /*6*/]), "VEX_52_SULTANRS", 24);
	StringCopy(&(Local_1212[109 /*6*/]), "IE_TEXTVECH_52", 24);
	StringCopy(&(Local_101[110 /*6*/]), "VEX_53_SULTANRS", 24);
	StringCopy(&(Local_1212[110 /*6*/]), "IE_TEXTVECH_53", 24);
	StringCopy(&(Local_101[111 /*6*/]), "VEX_54_SULTANRS", 24);
	StringCopy(&(Local_1212[111 /*6*/]), "IE_TEXTVECH_54", 24);
	StringCopy(&(Local_101[112 /*6*/]), "VEX_55_ZENTORNO", 24);
	StringCopy(&(Local_1212[112 /*6*/]), "IE_TEXTVECH_55", 24);
	StringCopy(&(Local_101[113 /*6*/]), "VEX_56_ZENTORNO", 24);
	StringCopy(&(Local_1212[113 /*6*/]), "IE_TEXTVECH_56", 24);
	StringCopy(&(Local_101[114 /*6*/]), "VEX_57_ZENTORNO", 24);
	StringCopy(&(Local_1212[114 /*6*/]), "IE_TEXTVECH_57", 24);
	StringCopy(&(Local_101[115 /*6*/]), "VEX_58_OMNIS", 24);
	StringCopy(&(Local_1212[115 /*6*/]), "IE_TEXTVECH_58", 24);
	StringCopy(&(Local_101[116 /*6*/]), "VEX_59_OMNIS", 24);
	StringCopy(&(Local_1212[116 /*6*/]), "IE_TEXTVECH_59", 24);
	StringCopy(&(Local_101[117 /*6*/]), "VEX_60_OMNIS", 24);
	StringCopy(&(Local_1212[117 /*6*/]), "IE_TEXTVECH_60", 24);
	StringCopy(&(Local_101[118 /*6*/]), "VEX_61_COQUET3", 24);
	StringCopy(&(Local_1212[118 /*6*/]), "IE_TEXTVECH_61", 24);
	StringCopy(&(Local_101[119 /*6*/]), "VEX_62_COQUET3", 24);
	StringCopy(&(Local_1212[119 /*6*/]), "IE_TEXTVECH_62", 24);
	StringCopy(&(Local_101[120 /*6*/]), "VEX_63_COQUET3", 24);
	StringCopy(&(Local_1212[120 /*6*/]), "IE_TEXTVECH_63", 24);
	StringCopy(&(Local_101[121 /*6*/]), "VEX_64_SEVEN70", 24);
	StringCopy(&(Local_1212[121 /*6*/]), "IE_TEXTVECH_64", 24);
	StringCopy(&(Local_101[122 /*6*/]), "VEX_65_SEVEN70", 24);
	StringCopy(&(Local_1212[122 /*6*/]), "IE_TEXTVECH_65", 24);
	StringCopy(&(Local_101[123 /*6*/]), "VEX_66_SEVEN70", 24);
	StringCopy(&(Local_1212[123 /*6*/]), "IE_TEXTVECH_66", 24);
	StringCopy(&(Local_101[124 /*6*/]), "VEX_67_VERLI", 24);
	StringCopy(&(Local_1212[124 /*6*/]), "IE_TEXTVECH_67", 24);
	StringCopy(&(Local_101[125 /*6*/]), "VEX_68_VERLI", 24);
	StringCopy(&(Local_1212[125 /*6*/]), "IE_TEXTVECH_68", 24);
	StringCopy(&(Local_101[126 /*6*/]), "VEX_69_VERLI", 24);
	StringCopy(&(Local_1212[126 /*6*/]), "IE_TEXTVECH_69", 24);
	StringCopy(&(Local_101[127 /*6*/]), "VEX_70_FELTZ2", 24);
	StringCopy(&(Local_1212[127 /*6*/]), "IE_TEXTVECH_70", 24);
	StringCopy(&(Local_101[128 /*6*/]), "VEX_71_FELTZ2", 24);
	StringCopy(&(Local_1212[128 /*6*/]), "IE_TEXTVECH_71", 24);
	StringCopy(&(Local_101[129 /*6*/]), "VEX_72_FELTZ2", 24);
	StringCopy(&(Local_1212[129 /*6*/]), "IE_TEXTVECH_72", 24);
	StringCopy(&(Local_101[130 /*6*/]), "VEX_73_COQUET2", 24);
	StringCopy(&(Local_1212[130 /*6*/]), "IE_TEXTVECH_73", 24);
	StringCopy(&(Local_101[131 /*6*/]), "VEX_74_COQUET2", 24);
	StringCopy(&(Local_1212[131 /*6*/]), "IE_TEXTVECH_74", 24);
	StringCopy(&(Local_101[132 /*6*/]), "VEX_75_COQUET2", 24);
	StringCopy(&(Local_1212[132 /*6*/]), "IE_TEXTVECH_75", 24);
	StringCopy(&(Local_101[133 /*6*/]), "VEX_76_CHEETAH", 24);
	StringCopy(&(Local_1212[133 /*6*/]), "IE_TEXTVECH_76", 24);
	StringCopy(&(Local_101[134 /*6*/]), "VEX_77_CHEETAH", 24);
	StringCopy(&(Local_1212[134 /*6*/]), "IE_TEXTVECH_77", 24);
	StringCopy(&(Local_101[135 /*6*/]), "VEX_78_CHEETAH", 24);
	StringCopy(&(Local_1212[135 /*6*/]), "IE_TEXTVECH_78", 24);
	StringCopy(&(Local_101[136 /*6*/]), "VEX_79_NSHADE", 24);
	StringCopy(&(Local_1212[136 /*6*/]), "IE_TEXTVECH_79", 24);
	StringCopy(&(Local_101[137 /*6*/]), "VEX_80_NSHADE", 24);
	StringCopy(&(Local_1212[137 /*6*/]), "IE_TEXTVECH_80", 24);
	StringCopy(&(Local_101[138 /*6*/]), "VEX_81_NSHADE", 24);
	StringCopy(&(Local_1212[138 /*6*/]), "IE_TEXTVECH_81", 24);
	StringCopy(&(Local_101[139 /*6*/]), "VEX_82_BANSH2", 24);
	StringCopy(&(Local_1212[139 /*6*/]), "IE_TEXTVECH_82", 24);
	StringCopy(&(Local_101[140 /*6*/]), "VEX_83_BANSH2", 24);
	StringCopy(&(Local_1212[140 /*6*/]), "IE_TEXTVECH_84", 24);
	StringCopy(&(Local_101[141 /*6*/]), "VEX_84_BANSH2", 24);
	StringCopy(&(Local_1212[141 /*6*/]), "IE_TEXTVECH_85", 24);
	StringCopy(&(Local_101[142 /*6*/]), "VEX_82_TURIS", 24);
	StringCopy(&(Local_1212[142 /*6*/]), "IE_TEXTVECH_83", 24);
	StringCopy(&(Local_101[143 /*6*/]), "VEX_86_TURIS", 24);
	StringCopy(&(Local_1212[143 /*6*/]), "IE_TEXTVECH_86", 24);
	StringCopy(&(Local_101[144 /*6*/]), "VEX_87_TURIS", 24);
	StringCopy(&(Local_1212[144 /*6*/]), "IE_TEXTVECH_87", 24);
	StringCopy(&(Local_101[145 /*6*/]), "VEX_88_MASS", 24);
	StringCopy(&(Local_1212[145 /*6*/]), "IE_TEXTVECH_88", 24);
	StringCopy(&(Local_101[146 /*6*/]), "VEX_89_MASS", 24);
	StringCopy(&(Local_1212[146 /*6*/]), "IE_TEXTVECH_89", 24);
	StringCopy(&(Local_101[147 /*6*/]), "VEX_90_MASS", 24);
	StringCopy(&(Local_1212[147 /*6*/]), "IE_TEXTVECH_90", 24);
	StringCopy(&(Local_101[148 /*6*/]), "VEX_91_SABRE2", 24);
	StringCopy(&(Local_1212[148 /*6*/]), "IE_TEXTVECH_91", 24);
	StringCopy(&(Local_101[149 /*6*/]), "VEX_92_SABRE2", 24);
	StringCopy(&(Local_1212[149 /*6*/]), "IE_TEXTVECH_92", 24);
	StringCopy(&(Local_101[150 /*6*/]), "VEX_93_SABRE2", 24);
	StringCopy(&(Local_1212[150 /*6*/]), "IE_TEXTVECH_93", 24);
	StringCopy(&(Local_101[151 /*6*/]), "VEX_94_JESTER", 24);
	StringCopy(&(Local_1212[151 /*6*/]), "IE_TEXTVECH_94", 24);
	StringCopy(&(Local_101[152 /*6*/]), "VEX_95_JESTER", 24);
	StringCopy(&(Local_1212[152 /*6*/]), "IE_TEXTVECH_95", 24);
	StringCopy(&(Local_101[153 /*6*/]), "VEX_96_JESTER", 24);
	StringCopy(&(Local_1212[153 /*6*/]), "IE_TEXTVECH_96", 24);
	StringCopy(&(Local_101[154 /*6*/]), "GO_AS_PICM", 24);
	StringCopy(&(Local_1212[154 /*6*/]), "NHP_prep_autosalvage", 24);
	StringCopy(&(Local_101[155 /*6*/]), "GO_DR_PICM", 24);
	StringCopy(&(Local_1212[155 /*6*/]), "nhp_prep_daylightrob", 24);
	StringCopy(&(Local_101[156 /*6*/]), "FHTXT_DDR00M", 24);
	StringCopy(&(Local_1212[156 /*6*/]), "NHP_prep_deaddrop", 24);
	StringCopy(&(Local_101[157 /*6*/]), "BBTXT_CPS00M", 24);
	StringCopy(&(Local_1212[157 /*6*/]), "BAT_carpark_1", 24);
	StringCopy(&(Local_101[158 /*6*/]), "BBTXT_CPS10M", 24);
	StringCopy(&(Local_1212[158 /*6*/]), "BAT_carpark_2", 24);
	StringCopy(&(Local_101[159 /*6*/]), "BBTXT_CPS20M", 24);
	StringCopy(&(Local_1212[159 /*6*/]), "BAT_carpark_3", 24);
	StringCopy(&(Local_101[160 /*6*/]), "ICEBR_EMAIL", 24);
	StringCopy(&(Local_1212[160 /*6*/]), "ib_aircon", 24);
	StringCopy(&(Local_101[161 /*6*/]), "XM22FLOW_TXT_0", 24);
	StringCopy(&(Local_1212[161 /*6*/]), "PHONE_MESSAGE_D_DUDE", 24);
	StringCopy(&(Local_101[162 /*6*/]), "CHM6_PMSG_TR", 24);
	StringCopy(&(Local_1212[162 /*6*/]), "UPDT1_2023_TEXT_LSA6_1", 24);
	StringCopy(&(Local_101[163 /*6*/]), "CBR2_PMSG_P1", 24);
	StringCopy(&(Local_1212[163 /*6*/]), "UPDT2_2023_TEXT_IMG_2", 24);
	StringCopy(&(Local_101[164 /*6*/]), "CBR2_PMSG_P2", 24);
	StringCopy(&(Local_1212[164 /*6*/]), "UPDT2_2023_TEXT_IMG_3", 24);
	StringCopy(&(Local_101[165 /*6*/]), "CBR2_PMSG_P3", 24);
	StringCopy(&(Local_1212[165 /*6*/]), "UPDT2_2023_TEXT_IMG_4", 24);
	StringCopy(&(Local_101[166 /*6*/]), "CBR2_PMSG_TB", 24);
	StringCopy(&(Local_1212[166 /*6*/]), "UPDT2_2023_TEXT_IMG_5", 24);
	StringCopy(&(Local_101[167 /*6*/]), "CBR3_PMSG", 24);
	StringCopy(&(Local_1212[167 /*6*/]), "UPDT2_2023_TEXT_IMG_6", 24);
	StringCopy(&(Local_101[168 /*6*/]), "CBR4_PMSG", 24);
	StringCopy(&(Local_1212[168 /*6*/]), "UPDT2_2023_TEXT_IMG_7", 24);
	StringCopy(&(Local_101[169 /*6*/]), "BTY_HVTM_CEO", 24);
	StringCopy(&(Local_1212[169 /*6*/]), "UPDT1_24_TEXT_HV", 24);
	StringCopy(&(Local_101[170 /*6*/]), "BTY_HVTM_RESCUE", 24);
	StringCopy(&(Local_1212[170 /*6*/]), "UPDT1_24_TEXT_HV", 24);
	StringCopy(&(Local_101[171 /*6*/]), "BTY_HVTM_AMBUSH", 24);
	StringCopy(&(Local_1212[171 /*6*/]), "UPDT1_24_TEXT_HV", 24);
	StringCopy(&(Local_101[172 /*6*/]), "BTY_HVTM_HEAVY", 24);
	StringCopy(&(Local_1212[172 /*6*/]), "UPDT1_24_TEXT_HV", 24);
	StringCopy(&(Local_101[173 /*6*/]), "BTY_HVTM_MOVIE", 24);
	StringCopy(&(Local_1212[173 /*6*/]), "UPDT1_24_TEXT_HV", 24);
	StringCopy(&(Local_101[174 /*6*/]), "BTY_HVTM_LFINV", 24);
	StringCopy(&(Local_1212[174 /*6*/]), "UPDT1_24_TEXT_HV", 24);
	StringCopy(&(Local_101[175 /*6*/]), "BTY_HVTM_TOWER", 24);
	StringCopy(&(Local_1212[175 /*6*/]), "UPDT1_24_TEXT_TOWER", 24);
	StringCopy(&(Local_101[176 /*6*/]), "TYC_PMSG_L1A", 24);
	StringCopy(&(Local_1212[176 /*6*/]), "UPDT1_25_TEXT_TYCOON", 24);
	StringCopy(&(Local_101[177 /*6*/]), "TYC_PMSG_L1B", 24);
	StringCopy(&(Local_1212[177 /*6*/]), "UPDT1_25_TEXT_TYCOON", 24);
	StringCopy(&(Local_101[178 /*6*/]), "TYC_PMSG_L2A", 24);
	StringCopy(&(Local_1212[178 /*6*/]), "UPDT1_25_TEXT_TYCOON", 24);
	StringCopy(&(Local_101[179 /*6*/]), "TYC_PMSG_L2B", 24);
	StringCopy(&(Local_1212[179 /*6*/]), "UPDT1_25_TEXT_TYCOON", 24);
	StringCopy(&(Local_101[180 /*6*/]), "TYC_PMSG_L3A", 24);
	StringCopy(&(Local_1212[180 /*6*/]), "UPDT1_25_TEXT_TYCOON", 24);
	StringCopy(&(Local_101[181 /*6*/]), "TYC_PMSG_L3B", 24);
	StringCopy(&(Local_1212[181 /*6*/]), "UPDT1_25_TEXT_TYCOON", 24);
	if (func_74(PLAYER::PLAYER_ID()) == 19)
	{
		StringCopy(&(Local_101[44 /*6*/]), "SNP_IMG_0_0", 24);
		StringCopy(&(Local_1212[44 /*6*/]), "SCLUB_1", 24);
		StringCopy(&(Local_101[45 /*6*/]), "SNP_IMG_0_1", 24);
		StringCopy(&(Local_1212[45 /*6*/]), "SCLUB_1", 24);
		StringCopy(&(Local_101[46 /*6*/]), "SNP_IMG_0_2", 24);
		StringCopy(&(Local_1212[46 /*6*/]), "SCLUB_1", 24);
		StringCopy(&(Local_101[47 /*6*/]), "SNP_IMG_0_3", 24);
		StringCopy(&(Local_1212[47 /*6*/]), "SCLUB_1", 24);
		StringCopy(&(Local_101[48 /*6*/]), "SNP_IMG_0_4", 24);
		StringCopy(&(Local_1212[48 /*6*/]), "SCLUB_1", 24);
		StringCopy(&(Local_101[49 /*6*/]), "SNP_IMG_0_5", 24);
		StringCopy(&(Local_1212[49 /*6*/]), "SCLUB_1", 24);
		StringCopy(&(Local_101[50 /*6*/]), "SNP_IMG_0_6", 24);
		StringCopy(&(Local_1212[50 /*6*/]), "SCLUB_1", 24);
		StringCopy(&(Local_101[51 /*6*/]), "SNP_IMG_0_7", 24);
		StringCopy(&(Local_1212[51 /*6*/]), "SCLUB_1", 24);
		StringCopy(&(Local_101[52 /*6*/]), "SNP_IMG_0_8", 24);
		StringCopy(&(Local_1212[52 /*6*/]), "SCLUB_1", 24);
		StringCopy(&(Local_101[53 /*6*/]), "SNP_IMG_0_9", 24);
		StringCopy(&(Local_1212[53 /*6*/]), "SCLUB_1", 24);
		StringCopy(&(Local_101[54 /*6*/]), "SNP_IMG_1_0", 24);
		StringCopy(&(Local_1212[54 /*6*/]), "SCLUB_2", 24);
		StringCopy(&(Local_101[55 /*6*/]), "SNP_IMG_1_1", 24);
		StringCopy(&(Local_1212[55 /*6*/]), "SCLUB_2", 24);
		StringCopy(&(Local_101[56 /*6*/]), "SNP_IMG_1_2", 24);
		StringCopy(&(Local_1212[56 /*6*/]), "SCLUB_2", 24);
		StringCopy(&(Local_101[57 /*6*/]), "SNP_IMG_1_3", 24);
		StringCopy(&(Local_1212[57 /*6*/]), "SCLUB_2", 24);
		StringCopy(&(Local_101[58 /*6*/]), "SNP_IMG_1_4", 24);
		StringCopy(&(Local_1212[58 /*6*/]), "SCLUB_2", 24);
		StringCopy(&(Local_101[59 /*6*/]), "SNP_IMG_1_5", 24);
		StringCopy(&(Local_1212[59 /*6*/]), "SCLUB_2", 24);
		StringCopy(&(Local_101[60 /*6*/]), "SNP_IMG_1_6", 24);
		StringCopy(&(Local_1212[60 /*6*/]), "SCLUB_2", 24);
		StringCopy(&(Local_101[61 /*6*/]), "SNP_IMG_1_7", 24);
		StringCopy(&(Local_1212[61 /*6*/]), "SCLUB_2", 24);
		StringCopy(&(Local_101[62 /*6*/]), "SNP_IMG_1_8", 24);
		StringCopy(&(Local_1212[62 /*6*/]), "SCLUB_2", 24);
		StringCopy(&(Local_101[64 /*6*/]), "SNP_IMG_1_9", 24);
		StringCopy(&(Local_1212[64 /*6*/]), "SCLUB_2", 24);
		StringCopy(&(Local_101[65 /*6*/]), "SNP_IMG_2_0", 24);
		StringCopy(&(Local_1212[65 /*6*/]), "SCLUB_3", 24);
		StringCopy(&(Local_101[66 /*6*/]), "SNP_IMG_2_1", 24);
		StringCopy(&(Local_1212[66 /*6*/]), "SCLUB_3", 24);
		StringCopy(&(Local_101[67 /*6*/]), "SNP_IMG_2_2", 24);
		StringCopy(&(Local_1212[67 /*6*/]), "SCLUB_3", 24);
		StringCopy(&(Local_101[68 /*6*/]), "SNP_IMG_2_3", 24);
		StringCopy(&(Local_1212[68 /*6*/]), "SCLUB_3", 24);
		StringCopy(&(Local_101[69 /*6*/]), "SNP_IMG_2_4", 24);
		StringCopy(&(Local_1212[69 /*6*/]), "SCLUB_3", 24);
		StringCopy(&(Local_101[70 /*6*/]), "SNP_IMG_2_5", 24);
		StringCopy(&(Local_1212[70 /*6*/]), "SCLUB_3", 24);
		StringCopy(&(Local_101[71 /*6*/]), "SNP_IMG_2_6", 24);
		StringCopy(&(Local_1212[71 /*6*/]), "SCLUB_3", 24);
		StringCopy(&(Local_101[72 /*6*/]), "SNP_IMG_2_7", 24);
		StringCopy(&(Local_1212[72 /*6*/]), "SCLUB_3", 24);
		StringCopy(&(Local_101[73 /*6*/]), "SNP_IMG_2_8", 24);
		StringCopy(&(Local_1212[73 /*6*/]), "SCLUB_3", 24);
		StringCopy(&(Local_101[74 /*6*/]), "SNP_IMG_2_9", 24);
		StringCopy(&(Local_1212[74 /*6*/]), "SCLUB_3", 24);
	}
	else if (func_73(PLAYER::PLAYER_ID()) == 14)
	{
		StringCopy(&(Local_101[44 /*6*/]), "GBC_TM_TC100", 24);
		StringCopy(&(Local_1212[44 /*6*/]), "VC_TC_OBSERVCCTV_0", 24);
		StringCopy(&(Local_101[45 /*6*/]), "GBC_TM_TC101", 24);
		StringCopy(&(Local_1212[45 /*6*/]), "VC_TC_OBSERVCCTV_0", 24);
		StringCopy(&(Local_101[46 /*6*/]), "GBC_TM_TC102", 24);
		StringCopy(&(Local_1212[46 /*6*/]), "VC_TC_OBSERVCCTV_0", 24);
		StringCopy(&(Local_101[47 /*6*/]), "GBC_TM_TC103", 24);
		StringCopy(&(Local_1212[47 /*6*/]), "VC_TC_OBSERVCCTV_0", 24);
		StringCopy(&(Local_101[48 /*6*/]), "GBC_TM_TC104", 24);
		StringCopy(&(Local_1212[48 /*6*/]), "VC_TC_OBSERVCCTV_0", 24);
		StringCopy(&(Local_101[49 /*6*/]), "GBC_TM_TC105", 24);
		StringCopy(&(Local_1212[49 /*6*/]), "VC_TC_OBSERVCCTV_0", 24);
		StringCopy(&(Local_101[50 /*6*/]), "GBC_TM_TC110", 24);
		StringCopy(&(Local_1212[50 /*6*/]), "VC_TC_VEHICLECCTV", 24);
		StringCopy(&(Local_101[51 /*6*/]), "GBC_TM_TC111", 24);
		StringCopy(&(Local_1212[51 /*6*/]), "VC_TC_CASINOCCTV", 24);
		StringCopy(&(Local_101[52 /*6*/]), "GBC_TM_TC120", 24);
		StringCopy(&(Local_1212[52 /*6*/]), "VC_TC_VEHICLECCTV", 24);
		StringCopy(&(Local_101[53 /*6*/]), "GBC_TM_TC121", 24);
		StringCopy(&(Local_1212[53 /*6*/]), "VC_TC_CASINOCCTV", 24);
		StringCopy(&(Local_101[54 /*6*/]), "GBC_TM_TC130", 24);
		StringCopy(&(Local_1212[54 /*6*/]), "VC_TC_CASINOCCTV", 24);
		StringCopy(&(Local_101[55 /*6*/]), "GBC_TM_TC140", 24);
		StringCopy(&(Local_1212[55 /*6*/]), "VC_TC_CASINOCCTV", 24);
		StringCopy(&(Local_101[56 /*6*/]), "GBC_TM_TC200", 24);
		StringCopy(&(Local_1212[56 /*6*/]), "VC_TC_UNIVERCCTV", 24);
		StringCopy(&(Local_101[57 /*6*/]), "GBC_TM_TC201", 24);
		StringCopy(&(Local_1212[57 /*6*/]), "VC_TC_UNIVERCCTV", 24);
		StringCopy(&(Local_101[58 /*6*/]), "GBC_TM_TC202", 24);
		StringCopy(&(Local_1212[58 /*6*/]), "VC_TC_UNIVERCCTV", 24);
		StringCopy(&(Local_101[59 /*6*/]), "GBC_TM_TC203", 24);
		StringCopy(&(Local_1212[59 /*6*/]), "VC_TC_UNIVERCCTV", 24);
		StringCopy(&(Local_101[60 /*6*/]), "GBC_TM_TC204", 24);
		StringCopy(&(Local_1212[60 /*6*/]), "VC_TC_UNIVERCCTV", 24);
		StringCopy(&(Local_101[61 /*6*/]), "GBC_TM_TC205", 24);
		StringCopy(&(Local_1212[61 /*6*/]), "VC_TC_UNIVERCCTV", 24);
		StringCopy(&(Local_101[62 /*6*/]), "GBC_TM_TC210", 24);
		StringCopy(&(Local_1212[62 /*6*/]), "VC_TC_VEHICLECCTV", 24);
		StringCopy(&(Local_101[63 /*6*/]), "GBC_TM_TC211", 24);
		StringCopy(&(Local_1212[63 /*6*/]), "VC_TC_CASINOCCTV", 24);
		StringCopy(&(Local_101[64 /*6*/]), "GBC_TM_TC220", 24);
		StringCopy(&(Local_1212[64 /*6*/]), "VC_TC_VEHICLECCTV", 24);
		StringCopy(&(Local_101[65 /*6*/]), "GBC_TM_TC221", 24);
		StringCopy(&(Local_1212[65 /*6*/]), "VC_TC_CASINOCCTV", 24);
		StringCopy(&(Local_101[66 /*6*/]), "GBC_TM_TC230", 24);
		StringCopy(&(Local_1212[66 /*6*/]), "VC_TC_CASINOCCTV", 24);
		StringCopy(&(Local_101[67 /*6*/]), "GBC_TM_TC240", 24);
		StringCopy(&(Local_1212[67 /*6*/]), "VC_TC_CASINOCCTV", 24);
	}
	else if (func_72(PLAYER::PLAYER_ID()) == 30)
	{
		StringCopy(&(Local_101[44 /*6*/]), "CSH_TXT_MD_01M", 24);
		StringCopy(&(Local_1212[44 /*6*/]), "heist3_prep_maid01", 24);
		StringCopy(&(Local_101[45 /*6*/]), "CSH_TXT_MD_02M", 24);
		StringCopy(&(Local_1212[45 /*6*/]), "heist3_prep_maid02", 24);
	}
	else if (func_72(PLAYER::PLAYER_ID()) == 32)
	{
		StringCopy(&(Local_101[44 /*6*/]), "CSHT_IMC_00M", 24);
		StringCopy(&(Local_1212[44 /*6*/]), "heist3_cashier1", 24);
		StringCopy(&(Local_101[45 /*6*/]), "CSHT_IMC_10M", 24);
		StringCopy(&(Local_1212[45 /*6*/]), "heist3_cashier2", 24);
		StringCopy(&(Local_101[46 /*6*/]), "CSHT_IMC_20M", 24);
		StringCopy(&(Local_1212[46 /*6*/]), "heist3_cashier3", 24);
		StringCopy(&(Local_101[47 /*6*/]), "CSHT_IMC_30M", 24);
		StringCopy(&(Local_1212[47 /*6*/]), "heist3_cashier4", 24);
	}
	else if (func_71(PLAYER::PLAYER_ID()) == 17)
	{
		StringCopy(&(Local_101[44 /*6*/]), "ILHTEXT_SFE00M", 24);
		StringCopy(&(Local_1212[44 /*6*/]), "heist4_sec_guard", 24);
	}
	else if (func_70(PLAYER::PLAYER_ID()) == 4)
	{
		StringCopy(&(Local_101[44 /*6*/]), "TR_TXT_CV1", 24);
		StringCopy(&(Local_1212[44 /*6*/]), "TUNER_TEXT_IMG_VIRUS", 24);
		StringCopy(&(Local_101[45 /*6*/]), "TR_TXT_CV2", 24);
		StringCopy(&(Local_1212[45 /*6*/]), "TUNER_TEXT_IMG_VIRUS_02", 24);
		StringCopy(&(Local_101[46 /*6*/]), "TR_TXT_CV3", 24);
		StringCopy(&(Local_1212[46 /*6*/]), "TUNER_TEXT_IMG_VIRUS_03", 24);
	}
	else if (func_70(PLAYER::PLAYER_ID()) == 11)
	{
		StringCopy(&(Local_101[44 /*6*/]), "ROBTEXT_IAA00M", 24);
		StringCopy(&(Local_1212[44 /*6*/]), "TUNER_TEXT_IMG_IAA", 24);
	}
	else if (func_69(PLAYER::PLAYER_ID()) == 4)
	{
		StringCopy(&(Local_101[44 /*6*/]), "FXR_TXT_WI1", 24);
		StringCopy(&(Local_1212[44 /*6*/]), "FXR_WAYIN", 24);
	}
	else if (func_68(PLAYER::PLAYER_ID()) == 4)
	{
		StringCopy(&(Local_101[44 /*6*/]), "DL_TXT_PHOTO1", 24);
		StringCopy(&(Local_1212[44 /*6*/]), "UPDT2_2022_TEXT_IMG_1", 24);
		StringCopy(&(Local_101[45 /*6*/]), "DL_TXT_PHOTO2", 24);
		StringCopy(&(Local_1212[45 /*6*/]), "UPDT2_2022_TEXT_IMG_2", 24);
		StringCopy(&(Local_101[46 /*6*/]), "DL_TXT_PHOTO3", 24);
		StringCopy(&(Local_1212[46 /*6*/]), "UPDT2_2022_TEXT_IMG_3", 24);
	}
	else if (func_67(PLAYER::PLAYER_ID()) == 1)
	{
		StringCopy(&(Local_101[44 /*6*/]), "S23_SOAD_TXT0", 24);
		StringCopy(&(Local_1212[44 /*6*/]), "UPDT1_2023_TEXT_IMG_1", 24);
		StringCopy(&(Local_101[45 /*6*/]), "S23_SOAD_TXT1", 24);
		StringCopy(&(Local_1212[45 /*6*/]), "UPDT1_2023_TEXT_IMG_2", 24);
		StringCopy(&(Local_101[46 /*6*/]), "S23_SOAD_TXT2", 24);
		StringCopy(&(Local_1212[46 /*6*/]), "UPDT1_2023_TEXT_IMG_3", 24);
	}
	else if (func_67(PLAYER::PLAYER_ID()) == 0)
	{
		StringCopy(&(Local_101[44 /*6*/]), "ACR_TXT_IMG", 24);
		StringCopy(&(Local_1212[44 /*6*/]), "UPDT1_2023_TEXT_IMG_4", 24);
	}
	else if (func_66(PLAYER::PLAYER_ID()) == 4)
	{
		StringCopy(&(Local_101[44 /*6*/]), "SALV_SUBF_T_HOS", 24);
		StringCopy(&(Local_1212[44 /*6*/]), "UPDT2_2023_TEXT_IMG_1", 24);
	}
	else if (func_65(PLAYER::PLAYER_ID()) == 0)
	{
		StringCopy(&(Local_101[44 /*6*/]), "BTFM_TXT_00", 24);
		StringCopy(&(Local_1212[44 /*6*/]), "UPDT1_24_TEXT_ARCADE", 24);
		StringCopy(&(Local_101[45 /*6*/]), "BTFM_TXT_01", 24);
		StringCopy(&(Local_1212[45 /*6*/]), "UPDT1_24_TEXT_ARCADE", 24);
		StringCopy(&(Local_101[46 /*6*/]), "BTFM_TXT_02", 24);
		StringCopy(&(Local_1212[46 /*6*/]), "UPDT1_24_TEXT_ARCADE", 24);
	}
	else if (func_65(PLAYER::PLAYER_ID()) == 1)
	{
		StringCopy(&(Local_101[44 /*6*/]), "BTFM_TXT_10", 24);
		StringCopy(&(Local_1212[44 /*6*/]), "UPDT1_24_TEXT_CCTV", 24);
		StringCopy(&(Local_101[45 /*6*/]), "BTFM_TXT_11", 24);
		StringCopy(&(Local_1212[45 /*6*/]), "UPDT1_24_TEXT_CCTV", 24);
		StringCopy(&(Local_101[46 /*6*/]), "BTFM_TXT_12", 24);
		StringCopy(&(Local_1212[46 /*6*/]), "UPDT1_24_TEXT_CCTV", 24);
	}
	else if (func_65(PLAYER::PLAYER_ID()) == 2)
	{
		StringCopy(&(Local_101[44 /*6*/]), "BTFM_TXT_20", 24);
		StringCopy(&(Local_1212[44 /*6*/]), "UPDT1_24_TEXT_CLUB", 24);
		StringCopy(&(Local_101[45 /*6*/]), "BTFM_TXT_21", 24);
		StringCopy(&(Local_1212[45 /*6*/]), "UPDT1_24_TEXT_CLUB", 24);
		StringCopy(&(Local_101[46 /*6*/]), "BTFM_TXT_22", 24);
		StringCopy(&(Local_1212[46 /*6*/]), "UPDT1_24_TEXT_CLUB", 24);
	}
	else if (func_65(PLAYER::PLAYER_ID()) == 3)
	{
		StringCopy(&(Local_101[44 /*6*/]), "BTFM_TXT_30", 24);
		StringCopy(&(Local_1212[44 /*6*/]), "UPDT1_24_TEXT_INTIM", 24);
		StringCopy(&(Local_101[45 /*6*/]), "BTFM_TXT_31", 24);
		StringCopy(&(Local_1212[45 /*6*/]), "UPDT1_24_TEXT_INTIM", 24);
		StringCopy(&(Local_101[46 /*6*/]), "BTFM_TXT_32", 24);
		StringCopy(&(Local_1212[46 /*6*/]), "UPDT1_24_TEXT_INTIM", 24);
	}
	else if (func_65(PLAYER::PLAYER_ID()) == 4)
	{
		StringCopy(&(Local_101[44 /*6*/]), "BTFM_TXT_40", 24);
		StringCopy(&(Local_1212[44 /*6*/]), "UPDT1_24_TEXT_PRISON", 24);
		StringCopy(&(Local_101[45 /*6*/]), "BTFM_TXT_41", 24);
		StringCopy(&(Local_1212[45 /*6*/]), "UPDT1_24_TEXT_PRISON", 24);
		StringCopy(&(Local_101[46 /*6*/]), "BTFM_TXT_42", 24);
		StringCopy(&(Local_1212[46 /*6*/]), "UPDT1_24_TEXT_PRISON", 24);
	}
	else if (func_65(PLAYER::PLAYER_ID()) == 5)
	{
		StringCopy(&(Local_101[44 /*6*/]), "BTFM_TXT_50", 24);
		StringCopy(&(Local_1212[44 /*6*/]), "UPDT1_24_TEXT_ROBBERY", 24);
		StringCopy(&(Local_101[45 /*6*/]), "BTFM_TXT_51", 24);
		StringCopy(&(Local_1212[45 /*6*/]), "UPDT1_24_TEXT_ROBBERY", 24);
		StringCopy(&(Local_101[46 /*6*/]), "BTFM_TXT_52", 24);
		StringCopy(&(Local_1212[46 /*6*/]), "UPDT1_24_TEXT_ROBBERY", 24);
	}
	else if (func_64(PLAYER::PLAYER_ID()) == 338)
	{
		StringCopy(&(Local_101[44 /*6*/]), "DLYBTTXTMAR20", 24);
		StringCopy(&(Local_1212[44 /*6*/]), "UPDT1_24_TEXT_BOUNTY_0", 24);
		StringCopy(&(Local_101[45 /*6*/]), "DLYBTTXTMAR21", 24);
		StringCopy(&(Local_1212[45 /*6*/]), "UPDT1_24_TEXT_BOUNTY_1", 24);
		StringCopy(&(Local_101[46 /*6*/]), "DLYBTTXTMAR22", 24);
		StringCopy(&(Local_1212[46 /*6*/]), "UPDT1_24_TEXT_BOUNTY_2", 24);
		StringCopy(&(Local_101[47 /*6*/]), "DLYBTTXTMAR23", 24);
		StringCopy(&(Local_1212[47 /*6*/]), "UPDT1_24_TEXT_BOUNTY_3", 24);
		StringCopy(&(Local_101[48 /*6*/]), "DLYBTTXTMAR24", 24);
		StringCopy(&(Local_1212[48 /*6*/]), "UPDT1_24_TEXT_BOUNTY_4", 24);
		StringCopy(&(Local_101[49 /*6*/]), "DLYBTTXTMAR25", 24);
		StringCopy(&(Local_1212[49 /*6*/]), "UPDT1_24_TEXT_BOUNTY_5", 24);
		StringCopy(&(Local_101[50 /*6*/]), "DLYBTTXTMAR26", 24);
		StringCopy(&(Local_1212[50 /*6*/]), "UPDT1_24_TEXT_BOUNTY_6", 24);
		StringCopy(&(Local_101[51 /*6*/]), "DLYBTTXTMAR27", 24);
		StringCopy(&(Local_1212[51 /*6*/]), "UPDT1_24_TEXT_BOUNTY_7", 24);
		StringCopy(&(Local_101[52 /*6*/]), "DLYBTTXTMAR28", 24);
		StringCopy(&(Local_1212[52 /*6*/]), "UPDT1_24_TEXT_BOUNTY_8", 24);
		StringCopy(&(Local_101[53 /*6*/]), "DLYBTTXTMAR29", 24);
		StringCopy(&(Local_1212[53 /*6*/]), "UPDT1_24_TEXT_BOUNTY_9", 24);
		StringCopy(&(Local_101[54 /*6*/]), "DLYBTTXTMAR210", 24);
		StringCopy(&(Local_1212[54 /*6*/]), "UPDT1_24_TEXT_BOUNTY_10", 24);
		StringCopy(&(Local_101[55 /*6*/]), "DLYBTTXTMAR211", 24);
		StringCopy(&(Local_1212[55 /*6*/]), "UPDT1_24_TEXT_BOUNTY_11", 24);
		StringCopy(&(Local_101[56 /*6*/]), "DLYBTTXTMAR212", 24);
		StringCopy(&(Local_1212[56 /*6*/]), "UPDT1_24_TEXT_BOUNTY_12", 24);
		StringCopy(&(Local_101[57 /*6*/]), "DLYBTTXTMAR213", 24);
		StringCopy(&(Local_1212[57 /*6*/]), "UPDT1_24_TEXT_BOUNTY_13", 24);
		StringCopy(&(Local_101[58 /*6*/]), "DLYBTTXTMAR214", 24);
		StringCopy(&(Local_1212[58 /*6*/]), "UPDT1_24_TEXT_BOUNTY_14", 24);
	}
	else if (func_63(PLAYER::PLAYER_ID()) == 0)
	{
		StringCopy(&(Local_101[44 /*6*/]), "EMP_TXT_CONT", 24);
		StringCopy(&(Local_1212[44 /*6*/]), "UPDT2_24_TEXT_EMP", 24);
	}
	else if (func_63(PLAYER::PLAYER_ID()) == 2)
	{
		StringCopy(&(Local_101[44 /*6*/]), "SCAN_TXT_TARG", 24);
		StringCopy(&(Local_1212[44 /*6*/]), "UPDT2_24_TEXT_SCAN", 24);
	}
	else if (func_62(PLAYER::PLAYER_ID()) == 2)
	{
		StringCopy(&(Local_101[44 /*6*/]), "TYCSC_TXT_1a", 24);
		StringCopy(&(Local_1212[44 /*6*/]), "UPDT1_25_TEXT_CAR_WASH", 24);
		StringCopy(&(Local_101[45 /*6*/]), "TYCSC_TXT_1b", 24);
		StringCopy(&(Local_1212[45 /*6*/]), "UPDT1_25_TEXT_CAR_WASH", 24);
		StringCopy(&(Local_101[46 /*6*/]), "TYCSC_TXT_1c", 24);
		StringCopy(&(Local_1212[46 /*6*/]), "UPDT1_25_TEXT_CAR_WASH", 24);
	}
	else if (func_61(PLAYER::PLAYER_ID()) == 1)
	{
		StringCopy(&(Local_101[44 /*6*/]), "KEHS_TXT_0a", 24);
		StringCopy(&(Local_1212[44 /*6*/]), "UPDT1_26_TEXT_DRUG_LORD", 24);
		StringCopy(&(Local_101[45 /*6*/]), "KEHS_TXT_0b", 24);
		StringCopy(&(Local_1212[45 /*6*/]), "UPDT1_26_TEXT_DRUG_LORD", 24);
		StringCopy(&(Local_101[46 /*6*/]), "KEHS_TXT_0c", 24);
		StringCopy(&(Local_1212[46 /*6*/]), "UPDT1_26_TEXT_DRUG_LORD", 24);
	}
	else if (func_56(PLAYER::PLAYER_ID()) == 2)
	{
		StringCopy(&(Local_101[44 /*6*/]), "KDGR_TXT_0a", 24);
		StringCopy(&(Local_1212[44 /*6*/]), "UPDT1_26_TEXT_CRUISER", 24);
		StringCopy(&(Local_101[45 /*6*/]), "KDGR_TXT_0b", 24);
		StringCopy(&(Local_1212[45 /*6*/]), "UPDT1_26_TEXT_CRUISER", 24);
		StringCopy(&(Local_101[46 /*6*/]), "KDGR_TXT_0c", 24);
		StringCopy(&(Local_1212[46 /*6*/]), "UPDT1_26_TEXT_CRUISER", 24);
	}
}

int func_56(int iParam0)
{
	if (func_64(iParam0) == 375)
	{
		return func_57(iParam0, 375);
	}
	return -1;
}

int func_57(int iParam0, int iParam1)
{
	if (func_64(iParam0) == iParam1)
	{
		return func_58(iParam0);
	}
	return -1;
}

int func_58(int iParam0)
{
	if (func_59(iParam0, 0))
	{
		return Global_1892925[iParam0 /*615*/].f_10.f_183;
	}
	return -1;
}

int func_59(int iParam0, int iParam1)
{
	if (func_60(iParam0))
	{
		if (Global_1892925[iParam0 /*615*/].f_10.f_34 != -1 || (iParam1 && Global_1892925[iParam0 /*615*/].f_10.f_33 != -1))
		{
			return 1;
		}
	}
	return 0;
}

int func_60(var uParam0)
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 < 0)
	{
		return 0;
	}
	if (iVar0 >= 32)
	{
		return 0;
	}
	return 1;
}

int func_61(int iParam0)
{
	if (func_64(iParam0) == 373)
	{
		return func_57(iParam0, 373);
	}
	return -1;
}

int func_62(int iParam0)
{
	if (func_64(iParam0) == 354)
	{
		return func_57(iParam0, 354);
	}
	return -1;
}

int func_63(int iParam0)
{
	if (func_64(iParam0) == 349)
	{
		return func_57(iParam0, 349);
	}
	return -1;
}

int func_64(int iParam0)
{
	if (func_60(iParam0))
	{
		if (func_59(iParam0, 0))
		{
			return Global_1892925[iParam0 /*615*/].f_10.f_34;
		}
	}
	return -1;
}

int func_65(int iParam0)
{
	if (func_64(iParam0) == 337)
	{
		return func_57(iParam0, 337);
	}
	return -1;
}

int func_66(int iParam0)
{
	switch (func_64(iParam0))
	{
		case 329:
		case 330:
		case 331:
		case 332:
		case 333:
			return func_58(iParam0);
		
		default:
	}
	return -1;
}

int func_67(int iParam0)
{
	if (func_64(iParam0) == 317)
	{
		return func_57(iParam0, 317);
	}
	return -1;
}

int func_68(int iParam0)
{
	if (func_64(iParam0) == 307)
	{
		return func_57(iParam0, 307);
	}
	return -1;
}

int func_69(int iParam0)
{
	if (func_64(iParam0) == 264)
	{
		return func_58(iParam0);
	}
	return -1;
}

int func_70(int iParam0)
{
	if (func_64(iParam0) == 271)
	{
		return func_58(iParam0);
	}
	return -1;
}

int func_71(int iParam0)
{
	if (func_64(iParam0) == 256)
	{
		return func_58(iParam0);
	}
	return -1;
}

int func_72(int iParam0)
{
	if (func_64(iParam0) == 158)
	{
		return func_58(iParam0);
	}
	return -1;
}

int func_73(int iParam0)
{
	if (func_64(iParam0) == 243)
	{
		return func_58(iParam0);
	}
	return -1;
}

int func_74(int iParam0)
{
	if (func_64(iParam0) == 237 || func_64(iParam0) == 250)
	{
		return func_58(iParam0);
	}
	return -1;
}

void func_75()
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand")) == 0)
	{
		func_76(0);
	}
	if (iLocal_2476)
	{
		GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(&uLocal_85);
	}
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_76(int iParam0)
{
	if (func_81())
	{
		return;
	}
	if (Global_21882)
	{
		if (func_80())
		{
			func_78(1, 1);
		}
		else
		{
			func_78(0, 0);
		}
	}
	if (Global_21649.f_1 == 10 || Global_21649.f_1 == 9)
	{
		MISC::SET_BIT(&Global_9503, 16);
	}
	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
	}
	Global_23023 = 5;
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&Global_9502, 30);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_9502, 30);
	}
	if (!func_77())
	{
		Global_21649.f_1 = 3;
	}
}

int func_77()
{
	if (Global_21649.f_1 == 1 || Global_21649.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_78(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_79(0))
		{
			Global_21882 = 1;
			if (bParam1)
			{
				MOBILE::GET_MOBILE_PHONE_POSITION(&Global_21586);
			}
			Global_21577 = { Global_21595[Global_21594 /*3*/] };
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_21577);
		}
	}
	else if (Global_21882 == 1)
	{
		Global_21882 = 0;
		Global_21577 = { Global_21602[Global_21594 /*3*/] };
		if (bParam1)
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_21586);
		}
		else
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_21577);
		}
	}
}

int func_79(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_21649.f_1 > 3)
		{
			if (BitTest(Global_9502, 14))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_21649.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

bool func_80()
{
	return BitTest(Global_1964670, 5);
}

bool func_81()
{
	return BitTest(Global_1964670, 19);
}

