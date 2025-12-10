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
	float fLocal_12 = 0f;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	int iLocal_15 = 0;
	var uLocal_16 = 0;
	int iLocal_17[35] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	struct<6> Local_82[185];
	struct<6> Local_1193[185];
	struct<8> Local_2304[19];
	int iLocal_2457 = 0;
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
	fLocal_12 = 0.001f;
	iLocal_15 = -1;
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand")) == 0)
	{
		func_73();
	}
	func_55();
	Global_24049 = 0;
	Global_114904.f_14058[Global_21610 /*20*/].f_18 = 0;
	Global_21841 = 0;
	func_54(Global_21591, "SET_DATA_SLOT_EMPTY", 6f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_52();
	func_51();
	if (Global_21610.f_1 > 3)
	{
		Global_21610.f_1 = 7;
	}
	iLocal_63 = MISC::GET_GAME_TIMER();
	Global_21614 = 1;
	while (true)
	{
		SYSTEM::WAIT(0);
		if (iLocal_62 == 0)
		{
			iLocal_64 = MISC::GET_GAME_TIMER();
			if ((iLocal_64 - iLocal_63) > 500)
			{
				iLocal_62 = 1;
			}
		}
		if (Global_21610.f_1 != 9)
		{
			switch (Global_21610.f_1)
			{
				case 7:
					if (Global_24049 == 0)
					{
						if (Global_2740211 == 0)
						{
							func_46();
							func_41();
						}
					}
					Global_24050 = -1;
					break;
				
				case 8:
					if (Global_24049 == 1)
					{
						func_5();
						func_46();
						Global_24050 = iLocal_56;
					}
					break;
				
				default:
					Global_24050 = -1;
					break;
			}
			if (Global_24049 == 0)
			{
				if (func_4())
				{
					func_73();
				}
			}
			else if (func_3(2, Global_21578, 0) || BitTest(Global_9464, 12))
			{
				if (MISC::ARE_STRINGS_EQUAL(&(Global_114904.f_14148[iLocal_56 /*104*/]), "CELL_FINV"))
				{
				}
				else
				{
					SYSTEM::WAIT(0);
					MISC::CLEAR_BIT(&Global_9464, 12);
					func_2();
					Global_21588 = 1;
					Global_24049 = 0;
					if (Global_21610.f_1 > 3)
					{
						Global_21610.f_1 = 7;
					}
					if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand")) == 0)
					{
						func_73();
					}
					func_54(Global_21591, "SET_DATA_SLOT_EMPTY", 6f, -1082130432, -1082130432, -1082130432, -1082130432);
					func_52();
					func_51();
					if (Global_114904.f_14148[iLocal_56 /*104*/].f_29 > 0)
					{
						if (Global_114904.f_14148[iLocal_56 /*104*/].f_31 == 1)
						{
							Global_114904.f_14148[iLocal_56 /*104*/].f_29 = 4;
							Global_114904.f_14148[iLocal_56 /*104*/].f_24 = 1;
						}
						else
						{
							Global_114904.f_14148[iLocal_56 /*104*/].f_29 = 4;
							Global_114904.f_14148[iLocal_56 /*104*/].f_24 = 1;
						}
					}
				}
			}
		}
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand")) == 0)
		{
			func_73();
		}
		if (func_1())
		{
			func_73();
		}
	}
}

int func_1()
{
	if (((Global_21610.f_1 == 1 || Global_21610.f_1 == 3) || Global_21610.f_1 == 0) || Global_21554 == 1)
	{
		Global_21597 = 1;
		return 1;
	}
	return 0;
}

void func_2()
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Back", &Global_21599, true);
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
	if (Global_10086 == 1 || Global_21610.f_1 < 7)
	{
		Global_21597 = 1;
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
	if (Global_114904.f_14148[iLocal_56 /*104*/].f_24 == 1)
	{
		if (Global_21588 == 0)
		{
			if (PAD::IS_CONTROL_JUST_PRESSED(2, Global_21581))
			{
				func_2();
				Global_21588 = 1;
				func_34();
				if (Global_114904.f_14148[iLocal_56 /*104*/].f_27 == 1)
				{
					Global_114904.f_14148[iLocal_56 /*104*/].f_99[0] = 0;
					Global_114904.f_14148[iLocal_56 /*104*/].f_99[1] = 0;
					Global_114904.f_14148[iLocal_56 /*104*/].f_99[2] = 0;
				}
				else
				{
					Global_114904.f_14148[iLocal_56 /*104*/].f_99[Global_21610] = 0;
				}
				if (func_33(iLocal_56))
				{
				}
				else
				{
					Global_114904.f_14148[iLocal_56 /*104*/].f_24 = 0;
					Global_114904.f_14148[iLocal_56 /*104*/].f_28 = 0;
				}
				HUD::THEFEED_REMOVE_ITEM(Global_114904.f_14148[iLocal_56 /*104*/].f_16);
				func_54(Global_21591, "SET_DATA_SLOT_EMPTY", 6f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_52();
				if (iLocal_54 > 0)
				{
					iLocal_54 = (iLocal_54 - 1);
				}
				func_51();
				if (Global_21610.f_1 > 3)
				{
					Global_21610.f_1 = 7;
					Global_24049 = 0;
				}
			}
		}
	}
	else if (Global_21588 == 0)
	{
		if (PAD::IS_CONTROL_PRESSED(2, Global_21582))
		{
			if (iLocal_58 == 1)
			{
				if (Global_21610.f_1 > 3)
				{
					StringCopy(&Global_77325, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&Global_24024), 64);
					Global_77456 = 7;
					MISC::SET_BIT(&Global_9464, 10);
					Global_21610.f_1 = 6;
				}
				func_73();
			}
		}
	}
	if (Global_114904.f_14148[iLocal_56 /*104*/].f_31 == 1)
	{
		if (Global_21588 == 0)
		{
			if (func_3(2, Global_21582, 0))
			{
				func_30();
				Global_21588 = 1;
				Global_114904.f_14148[iLocal_56 /*104*/].f_29 = 2;
				Global_114904.f_14148[iLocal_56 /*104*/].f_24 = 1;
				Global_114904.f_14148[iLocal_56 /*104*/].f_31 = 0;
				MISC::CLEAR_BIT(&Global_9463, 17);
				Global_24049 = 0;
				if (Global_21610.f_1 > 3)
				{
					Global_21610.f_1 = 7;
				}
				func_54(Global_21591, "SET_DATA_SLOT_EMPTY", 6f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_52();
				func_51();
			}
		}
	}
	if (Global_21588 == 0 && iLocal_62 == 1)
	{
		if (func_3(2, Global_21579, 0))
		{
			Global_21588 = 1;
			if (Global_114904.f_14148[iLocal_56 /*104*/].f_29 > 0)
			{
				func_30();
				Global_114904.f_14148[iLocal_56 /*104*/].f_29 = 3;
				Global_114904.f_14148[iLocal_56 /*104*/].f_24 = 1;
				Global_24049 = 0;
				if (Global_21610.f_1 > 3)
				{
					Global_21610.f_1 = 7;
				}
				func_54(Global_21591, "SET_DATA_SLOT_EMPTY", 6f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_52();
				func_51();
			}
			else if (Global_114904.f_14148[iLocal_56 /*104*/].f_30 == 1)
			{
				func_30();
				Global_8778 = 144;
				if (Global_21610.f_1 > 3)
				{
					Global_21610.f_1 = 10;
					if (func_29() == 0)
					{
						func_27();
					}
				}
				func_26("appContacts");
				Global_21608 = SYSTEM::START_NEW_SCRIPT("appContacts", 4000);
				SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("appContacts");
				Global_8778 = Global_114904.f_14148[iLocal_56 /*104*/].f_17;
				if (func_25(Global_8778, Global_21610) == 0)
				{
					func_24(Global_21591, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(3), -1f, -1f, &(Global_118[Global_8778 /*10*/].f_4), "CELL_300", "CELL_211", "CELL_195", 0);
				}
				else
				{
					func_24(Global_21591, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(3), -1f, -1f, &(Global_2339[Global_8778 /*29*/].f_3), &(Global_2339[Global_8778 /*29*/].f_7), "CELL_211", &(Global_2339[Global_8778 /*29*/].f_3), 0);
				}
				func_7();
				func_73();
			}
		}
	}
}

void func_7()
{
	char cVar0[24];
	
	if (Global_21593 == 1)
	{
		return;
	}
	if (Global_21610.f_1 < 4)
	{
		return;
	}
	while (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_21591))
	{
		if (Global_80280)
		{
			return;
		}
		SYSTEM::WAIT(0);
	}
	switch (Global_21610.f_1)
	{
		case 6:
			func_54(Global_21591, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_22(Global_10085);
			if (Global_10085 == 1)
			{
				func_54(Global_21591, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_21614), -1082130432, -1082130432, -1082130432);
				Global_21590 = Global_21614;
			}
			else
			{
				func_54(Global_21591, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_21615), -1082130432, -1082130432, -1082130432);
				Global_21590 = Global_21615;
			}
			if (Global_21598)
			{
				func_24(Global_21591, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
				func_24(Global_21591, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
			}
			else
			{
				func_24(Global_21591, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
				func_24(Global_21591, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_21844 == 0)
			{
				func_24(Global_21591, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				MISC::CLEAR_BIT(&Global_9463, 17);
			}
			else if (Global_80280)
			{
				func_24(Global_21591, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				MISC::CLEAR_BIT(&Global_9463, 17);
			}
			else
			{
				if (Global_21843 == 1)
				{
					if (Global_21598)
					{
						func_24(Global_21591, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
					}
					else
					{
						func_24(Global_21591, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else if (Global_21598)
				{
					func_24(Global_21591, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
				}
				else
				{
					func_24(Global_21591, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				MISC::SET_BIT(&Global_9463, 17);
			}
			if (Global_80280)
			{
				Global_21590 = Global_21614;
				if (func_17() && BitTest(Global_9465, 9))
				{
					func_12(0);
				}
				func_54(Global_21591, "DISPLAY_VIEW", 4f, SYSTEM::TO_FLOAT(Global_21590), -1082130432, -1082130432, -1082130432);
				func_54(Global_21591, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_21590), -1082130432, -1082130432, -1082130432);
			}
			break;
		
		case 7:
			break;
		
		case 10:
			func_54(Global_21591, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_24(Global_21591, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_24(Global_21591, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			MISC::CLEAR_BIT(&Global_9463, 17);
			if (BitTest(Global_9463, 20))
			{
				func_24(Global_21591, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_21598)
			{
				func_24(Global_21591, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_21553)
				{
					func_24(Global_21591, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_24(Global_21591, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			break;
		
		case 9:
			if (Global_21609 == 1)
			{
				func_11();
				func_54(Global_21591, "SET_THEME", SYSTEM::TO_FLOAT(Global_114904.f_14058[Global_21610 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				if (Global_22996)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21591, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(4);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_CONDFON");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_22998);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					func_10("CELL_300");
					func_10("CELL_217");
					func_10("CELL_217");
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				else if (func_25(Global_8778, Global_21610) == 0)
				{
					func_24(Global_21591, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(2), -1f, -1f, &(Global_118[Global_8778 /*10*/].f_4), "CELL_300", "CELL_217", "CELL_195", 0);
				}
				else
				{
					func_24(Global_21591, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(2), -1f, -1f, &(Global_2339[Global_8778 /*29*/].f_3), &(Global_2339[Global_8778 /*29*/].f_7), "CELL_217", &(Global_2339[Global_8778 /*29*/].f_3), 0);
				}
				func_54(Global_21591, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			else if (Global_22983 == 4 || Global_22983 == 3)
			{
				func_54(Global_21591, "SET_THEME", SYSTEM::TO_FLOAT(Global_114904.f_14058[Global_21610 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				func_11();
				if (Global_22996)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21591, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(4);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_CONDFON");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_22998);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					func_10("CELL_300");
					func_10("CELL_219");
					func_10("CELL_219");
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				else
				{
					if (Global_23241)
					{
						StringCopy(&cVar0, "CELL_219", 24);
					}
					else
					{
						StringCopy(&cVar0, "CELL_211", 24);
					}
					if (func_25(Global_8778, Global_21610) == 0)
					{
						func_54(Global_21591, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_24(Global_21591, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(3), -1f, -1f, &(Global_118[Global_8778 /*10*/].f_4), "CELL_300", &cVar0, "CELL_195", 0);
					}
					else
					{
						func_54(Global_21591, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_24(Global_21591, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(3), -1f, -1f, &(Global_2339[Global_8778 /*29*/].f_3), &(Global_2339[Global_8778 /*29*/].f_7), &cVar0, &(Global_2339[Global_8778 /*29*/].f_3), 0);
					}
				}
				func_54(Global_21591, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			func_8();
			break;
		
		default:
			break;
	}
}

void func_8()
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_21591))
	{
		func_9();
		if (Global_21609 == 1)
		{
			if (Global_21598)
			{
				func_24(Global_21591, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, "CELL_203", 0, 0, 0, 0);
			}
			else
			{
				func_24(Global_21591, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_23030)
			{
				func_24(Global_21591, "SET_SOFT_KEYS", 3f, 0f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (BitTest(Global_9463, 20))
			{
				func_24(Global_21591, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_21598)
			{
				func_24(Global_21591, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_204", 0, 0, 0, 0);
			}
			else
			{
				func_24(Global_21591, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			func_24(Global_21591, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			MISC::CLEAR_BIT(&Global_9463, 17);
		}
		else
		{
			func_24(Global_21591, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_24(Global_21591, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			MISC::CLEAR_BIT(&Global_9463, 17);
			if (BitTest(Global_9463, 20))
			{
				func_24(Global_21591, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_21598)
			{
				func_24(Global_21591, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_21553)
				{
					func_24(Global_21591, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_24(Global_21591, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
		}
	}
}

void func_9()
{
	if (Global_80280)
	{
		func_24(Global_21591, "SET_SOFT_KEYS", 1f, 0f, 9f, -1f, -1f, 0, 0, 0, 0, 0);
		MISC::CLEAR_BIT(&Global_9463, 17);
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
		if (Global_21610 == 0)
		{
			switch (Global_114904.f_14058[Global_21610 /*20*/].f_6)
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
		if (Global_21610 == 1)
		{
			switch (Global_114904.f_14058[Global_21610 /*20*/].f_6)
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
		if (Global_21610 == 2)
		{
			switch (Global_114904.f_14058[Global_21610 /*20*/].f_6)
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
		if (Global_21610 == 3)
		{
			switch (Global_4525120)
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
	
	MISC::SET_BIT(&Global_9465, 9);
	if (bParam0)
	{
		func_54(Global_21591, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
	}
	func_16();
	func_15();
	iVar0 = 0;
	while (iVar0 < 9)
	{
		Global_10011[iVar0] = 0;
		Global_10048[iVar0] = 0;
		iVar0++;
	}
	func_13(10, "CELL_16", 0, "appSettings", 24);
	if (bParam0)
	{
		func_54(Global_21591, "DISPLAY_VIEW", 4f, SYSTEM::TO_FLOAT(Global_21590), -1082130432, -1082130432, -1082130432);
		func_54(Global_21591, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_21590), -1082130432, -1082130432, -1082130432);
	}
}

void func_13(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4)
{
	func_14(iParam0, sParam1, iParam2, sParam3, iParam4, 1, 1, 0, 0);
	Global_10048[iParam2] = 1;
	Global_10011[iParam2] = iParam0;
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21591, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_9470[iParam0 /*15*/].f_4);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_9470[iParam0 /*15*/].f_10);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
	func_10(&(Global_9470[iParam0 /*15*/]));
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(255);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_14(int iParam0, char* sParam1, var uParam2, char* sParam3, var uParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	StringCopy(&(Global_9470[iParam0 /*15*/]), sParam1, 16);
	Global_9470[iParam0 /*15*/].f_4 = uParam2;
	StringCopy(&(Global_9470[iParam0 /*15*/].f_5), sParam3, 16);
	Global_9470[iParam0 /*15*/].f_9 = MISC::GET_HASH_KEY(sParam3);
	Global_9470[iParam0 /*15*/].f_10 = uParam4;
	Global_9470[iParam0 /*15*/].f_11 = iParam5;
	Global_9470[iParam0 /*15*/].f_12 = iParam6;
	Global_9470[iParam0 /*15*/].f_13 = iParam7;
	Global_9470[iParam0 /*15*/].f_14 = iParam8;
	if (Global_9470[iParam0 /*15*/].f_12 == 0)
	{
		Global_9470[iParam0 /*15*/].f_12 = 0;
	}
	if (Global_9470[iParam0 /*15*/].f_13 == 0)
	{
		Global_9470[iParam0 /*15*/].f_13 = 0;
	}
	if (Global_9470[iParam0 /*15*/].f_14 == 0)
	{
		Global_9470[iParam0 /*15*/].f_14 = 0;
	}
}

void func_15()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		Global_10048[iVar0] = 0;
		iVar0++;
	}
}

void func_16()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21591, "SET_DATA_SLOT");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(25);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
		func_10(&(Global_9470[10 /*15*/]));
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(225);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		iVar0++;
	}
	func_54(Global_21591, "DISPLAY_VIEW", 4f, SYSTEM::TO_FLOAT(0), -1082130432, -1082130432, -1082130432);
	func_54(Global_21591, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(0), -1082130432, -1082130432, -1082130432);
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
	return Global_1574927;
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
	
	Global_24052 = 0;
	Global_10085 = iParam0;
	func_15();
	iVar0 = 0;
	while (iVar0 < 9)
	{
		iVar1 = 0;
		if (func_23(14))
		{
			while (iVar1 < 35)
			{
				if (iParam0 == Global_9470[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_9470[iVar1 /*15*/].f_4)
					{
						if (Global_10048[iVar0] == 0)
						{
							Global_10011[iVar0] = iVar1;
							if (iVar1 == 3)
							{
								if (BitTest(Global_9464, 3))
								{
									iVar2 = 42;
									Global_21846 = 1;
								}
								else
								{
									iVar2 = 255;
									Global_21846 = 0;
								}
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21591, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_9470[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_10(&(Global_9470[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar2);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							if (Global_2696959)
							{
								if (iVar1 == 14)
								{
									func_24(Global_21591, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_9470[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_24046), -1f, &(Global_9470[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							Global_10048[iVar0] = 1;
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
				if (iParam0 == Global_9470[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_9470[iVar1 /*15*/].f_4)
					{
						if (Global_10048[iVar0] == 0)
						{
							Global_10011[iVar0] = iVar1;
							if (iVar1 == 1)
							{
								iVar3 = 0;
								while (iVar3 < 35)
								{
									if (Global_114904.f_14148[iVar3 /*104*/].f_24 != 0)
									{
										if (Global_114904.f_14148[iVar3 /*104*/].f_28 == 0)
										{
											if (Global_114904.f_14148[iVar3 /*104*/].f_99[Global_21610] == 1)
											{
												Global_24052++;
											}
										}
									}
									iVar3++;
								}
								func_24(Global_21591, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_9470[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_24052), -1f, &(Global_9470[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 7)
							{
								if (Global_80280)
								{
									iVar4 = 0;
									iVar4 = Global_4521273;
									iVar5 = 0;
									while (iVar5 < 12)
									{
										if (Global_4521275[iVar5 /*296*/].f_24 != 0)
										{
											if (Global_4521275[iVar5 /*296*/].f_28 == 0)
											{
												if (Global_4521275[iVar5 /*296*/].f_291[Global_21610] == 1)
												{
													iVar4++;
												}
											}
										}
										iVar5++;
									}
									func_24(Global_21591, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_9470[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar4), -1f, &(Global_9470[iVar1 /*15*/]), 0, 0, 0, 0);
								}
								else
								{
									switch (Global_21610)
									{
										case 0:
											iVar6 = Global_46105;
											break;
										
										case 1:
											iVar6 = Global_46106;
											break;
										
										case 2:
											iVar6 = Global_46107;
											break;
										
										default:
											break;
									}
									func_24(Global_21591, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_9470[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar6), -1f, &(Global_9470[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_24(Global_21591, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_9470[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_24046), -1f, &(Global_9470[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21591, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_9470[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_10(&(Global_9470[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_9469);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (iVar1 == 2)
							{
								if (BitTest(Global_9464, 6))
								{
									iVar7 = 42;
								}
								else
								{
									iVar7 = 255;
								}
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21591, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_9470[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_10(&(Global_9470[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar7);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (iVar1 == 3)
							{
								if (BitTest(Global_9464, 3))
								{
									iVar8 = 42;
									Global_21846 = 1;
								}
								else
								{
									iVar8 = 255;
									Global_21846 = 0;
								}
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21591, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_9470[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_10(&(Global_9470[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar8);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (iVar1 == 8)
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21591, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_9470[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_10(&(Global_9470[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(42);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if ((iVar1 == 24 && MISC::ARE_STRINGS_EQUAL(&(Global_9470[iVar1 /*15*/]), "CELL_BENWEB")) && BitTest(Global_9464, 6))
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21591, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_9470[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_10(&(Global_9470[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(42);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (Global_9470[iVar1 /*15*/].f_10 == 57 && iVar1 == 24)
							{
								iVar9 = 0;
								iVar9 = Global_1881981.f_1;
								func_24(Global_21591, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_9470[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar9), -1f, &(Global_9470[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_24(Global_21591, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_9470[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(0), -1f, &(Global_9470[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							Global_10048[iVar0] = 1;
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
	return Global_44869 == iParam0;
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
	return Global_2339[iParam0 /*29*/].f_24[iParam1];
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
	if (!Global_80280)
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && iVar1 == 0)
		{
			iVar2 = PED::GET_PED_PROP_INDEX(PLAYER::PLAYER_PED_ID(), 0, 1);
			if (Global_80280)
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
			if (!Global_21553)
			{
				if (Global_8778 != 128)
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
								if (Global_80280)
								{
									PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 244, false);
									PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 243, false);
									PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 242, false);
								}
								MISC::SET_BIT(&Global_9463, 11);
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
		if (Global_21610.f_1 == 10 || Global_21610.f_1 == 9)
		{
			if (Global_21553 == 0)
			{
				if (Global_8778 != 128)
				{
					if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						if (Global_22983 != 2)
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
		if (((PED::IS_PED_SWIMMING(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_SWIMMING_UNDER_WATER(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || (PED::IS_PED_HANGING_ON_TO_VEHICLE(PLAYER::PLAYER_PED_ID()) && !(BitTest(Global_4718592.f_38, 17) && (NETWORK::NETWORK_IS_ACTIVITY_SESSION() || Global_1926461))))
		{
			return 0;
		}
		if (Global_113952)
		{
			return 0;
		}
	}
	if (Global_80280)
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
	if (Global_4525122 || iVar2 == 1)
	{
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("apptrackify")) > 0 || Global_114904.f_14058.f_89)
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
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Accept", &Global_21599, true);
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
	
	if (Global_80280)
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
	if (Global_4525122 || iVar2)
	{
		return 1;
	}
	return 1;
}

int func_33(int iParam0)
{
	if ((Global_114904.f_14148[iParam0 /*104*/].f_99[0] == 1 || Global_114904.f_14148[iParam0 /*104*/].f_99[1] == 1) || Global_114904.f_14148[iParam0 /*104*/].f_99[2] == 1)
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
			if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_114904.f_28058[0 /*29*/])
			{
				Global_21610 = 0;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_114904.f_28058[1 /*29*/])
			{
				Global_21610 = 1;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_114904.f_28058[2 /*29*/])
			{
				Global_21610 = 2;
			}
			else
			{
				Global_21610 = 0;
			}
		}
	}
	else
	{
		Global_21610 = func_35();
		if (Global_21610 == 145)
		{
			Global_21610 = 3;
		}
		if (Global_80280)
		{
			Global_21610 = 3;
		}
		if (Global_21610 > 3)
		{
			Global_21610 = 3;
		}
	}
}

var func_35()
{
	func_36();
	return Global_114904.f_2370.f_539.f_4321;
}

void func_36()
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_39(Global_114904.f_2370.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_38(PLAYER::PLAYER_PED_ID());
			if (func_37(iVar0) && (!func_23(14) || Global_113852))
			{
				if (Global_114904.f_2370.f_539.f_4321 != iVar0 && func_37(Global_114904.f_2370.f_539.f_4321))
				{
					Global_114904.f_2370.f_539.f_4322 = Global_114904.f_2370.f_539.f_4321;
				}
				Global_114904.f_2370.f_539.f_4323 = iVar0;
				Global_114904.f_2370.f_539.f_4321 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_114904.f_2370.f_539.f_4321 != 145)
			{
				Global_114904.f_2370.f_539.f_4323 = Global_114904.f_2370.f_539.f_4321;
			}
			return;
		}
	}
	Global_114904.f_2370.f_539.f_4321 = 145;
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
	return Global_2339[iParam0 /*29*/];
}

void func_41()
{
	struct<16> Var0;
	char* sVar16;
	int iVar17;
	
	if (Global_21588 == 0)
	{
		if ((func_3(2, Global_21579, 0) || Global_114904.f_14058[Global_21610 /*20*/].f_17 == 1) || Global_24043 == 1)
		{
			if (Global_114904.f_14058[Global_21610 /*20*/].f_17 == 0 && Global_24043 == 0)
			{
				func_30();
			}
			Global_21588 = 1;
			iLocal_62 = 0;
			iLocal_56 = iLocal_17[iLocal_54];
			if (Global_114904.f_14148[iLocal_56 /*104*/].f_24 != 0)
			{
				if (Global_21610.f_1 > 3)
				{
					func_24(Global_21591, "SET_SOFT_KEYS", 1f, 0f, 11f, -1f, -1f, 0, 0, 0, 0, 0);
					MISC::CLEAR_BIT(&Global_9463, 17);
					Global_21610.f_1 = 8;
				}
				if (Global_114904.f_14058[Global_21610 /*20*/].f_17 == 1 || Global_24043 == 1)
				{
					iLocal_56 = iLocal_17[0];
					iLocal_55 = 0;
					if (Global_114904.f_14058[Global_21610 /*20*/].f_17 == 1)
					{
					}
					Global_24043 = 0;
				}
				else
				{
					SYSTEM::SETTIMERB(0);
					iLocal_60 = 0;
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21591, "GET_CURRENT_SELECTION");
					iLocal_65 = GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
					while (!GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(iLocal_65) && iLocal_60 == 0)
					{
						SYSTEM::WAIT(0);
						if (SYSTEM::TIMERB() > 2000)
						{
							iLocal_60 = 1;
						}
					}
					if (iLocal_60 == 1)
					{
						iLocal_61 = 0;
					}
					else
					{
						iLocal_61 = GRAPHICS::GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_INT(iLocal_65);
					}
					if (iLocal_61 < 0)
					{
						iLocal_61 = 0;
					}
					iLocal_56 = iLocal_17[iLocal_61];
					iLocal_55 = iLocal_61;
				}
				Global_114904.f_14148[iLocal_56 /*104*/].f_28 = 1;
				iLocal_58 = 0;
				StringCopy(&Global_24024, "NO_HYPERLINK", 64);
				Var0 = { Global_114904.f_14148[iLocal_56 /*104*/] };
				StringConCat(&Var0, "_LINK", 64);
				if (HUD::DOES_TEXT_LABEL_EXIST(&Var0))
				{
					Global_24024 = { Var0 };
					iLocal_58 = 1;
					if (Global_21598)
					{
						func_24(Global_21591, "SET_SOFT_KEYS", 1f, 1f, 16f, -1f, -1f, "CELL_267", 0, 0, 0, 0);
					}
					else
					{
						func_24(Global_21591, "SET_SOFT_KEYS", 1f, 1f, 16f, -1f, -1f, 0, 0, 0, 0, 0);
					}
					MISC::SET_BIT(&Global_9463, 17);
					Global_114904.f_14148[iLocal_56 /*104*/].f_26 = 1;
					Global_114904.f_14148[iLocal_56 /*104*/].f_24 = 2;
				}
				if (Global_114904.f_14148[iLocal_56 /*104*/].f_26 == 0)
				{
					Global_114904.f_14148[iLocal_56 /*104*/].f_24 = 1;
				}
				func_45();
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21591, "SET_DATA_SLOT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(7);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
				if (Global_114904.f_14148[iLocal_56 /*104*/].f_17 == 145)
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_2000");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_114904.f_14148[iLocal_56 /*104*/].f_50));
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else
				{
					func_10(&(Global_2339[Global_114904.f_14148[iLocal_56 /*104*/].f_17 /*29*/].f_3));
				}
				switch (Global_114904.f_14148[iLocal_56 /*104*/].f_32)
				{
					case 0:
						func_10(&(Global_114904.f_14148[iLocal_56 /*104*/]));
						break;
					
					case 1:
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_114904.f_14148[iLocal_56 /*104*/]));
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_114904.f_14148[iLocal_56 /*104*/].f_33));
						if (Global_114904.f_14148[iLocal_56 /*104*/].f_66 == 1 && !MISC::ARE_STRINGS_EQUAL(&(Global_114904.f_14148[iLocal_56 /*104*/].f_67), "NULL"))
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_114904.f_14148[iLocal_56 /*104*/].f_67));
						}
						if ((Global_114904.f_14148[iLocal_56 /*104*/].f_66 == 2 && !MISC::ARE_STRINGS_EQUAL(&(Global_114904.f_14148[iLocal_56 /*104*/].f_67), "NULL")) && !MISC::ARE_STRINGS_EQUAL(&(Global_114904.f_14148[iLocal_56 /*104*/].f_83), "NULL"))
						{
							if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_114904.f_14148[iLocal_56 /*104*/].f_67)))
							{
								HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_114904.f_14148[iLocal_56 /*104*/].f_67));
							}
							else
							{
								HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_114904.f_14148[iLocal_56 /*104*/].f_67));
							}
							if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_114904.f_14148[iLocal_56 /*104*/].f_83)))
							{
								HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_114904.f_14148[iLocal_56 /*104*/].f_83));
							}
							else
							{
								HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_114904.f_14148[iLocal_56 /*104*/].f_83));
							}
						}
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
						break;
					
					case 2:
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_114904.f_14148[iLocal_56 /*104*/]));
						HUD::ADD_TEXT_COMPONENT_INTEGER(Global_114904.f_14148[iLocal_56 /*104*/].f_49);
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
						break;
					
					case 3:
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_114904.f_14148[iLocal_56 /*104*/]));
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_114904.f_14148[iLocal_56 /*104*/].f_33));
						HUD::ADD_TEXT_COMPONENT_INTEGER(Global_114904.f_14148[iLocal_56 /*104*/].f_49);
						if (Global_114904.f_14148[iLocal_56 /*104*/].f_66 == 1 && !MISC::ARE_STRINGS_EQUAL(&(Global_114904.f_14148[iLocal_56 /*104*/].f_67), "NULL"))
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_114904.f_14148[iLocal_56 /*104*/].f_67));
						}
						if ((Global_114904.f_14148[iLocal_56 /*104*/].f_66 == 2 && !MISC::ARE_STRINGS_EQUAL(&(Global_114904.f_14148[iLocal_56 /*104*/].f_67), "NULL")) && !MISC::ARE_STRINGS_EQUAL(&(Global_114904.f_14148[iLocal_56 /*104*/].f_83), "NULL"))
						{
							if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_114904.f_14148[iLocal_56 /*104*/].f_67)))
							{
								HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_114904.f_14148[iLocal_56 /*104*/].f_67));
							}
							else
							{
								HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_114904.f_14148[iLocal_56 /*104*/].f_67));
							}
							if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_114904.f_14148[iLocal_56 /*104*/].f_83)))
							{
								HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_114904.f_14148[iLocal_56 /*104*/].f_83));
							}
							else
							{
								HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_114904.f_14148[iLocal_56 /*104*/].f_83));
							}
						}
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
						break;
					
					case 4:
						func_44(iLocal_56);
						break;
					
					case 5:
						func_44(iLocal_56);
						break;
					
					case 6:
						func_44(iLocal_56);
						break;
					
					case 7:
						func_44(iLocal_56);
						break;
					
					case 8:
						func_44(iLocal_56);
						break;
					
					case 9:
						func_44(iLocal_56);
						break;
					
					case 10:
						func_44(iLocal_56);
						break;
					
					case 11:
						func_44(iLocal_56);
						break;
					
					case 12:
						func_43(iLocal_56);
						break;
				}
				if (Global_24053[iLocal_56] == 0)
				{
					if (Global_114904.f_14148[iLocal_56 /*104*/].f_17 == 159)
					{
						func_10("CELL_COMIC_P");
					}
					else
					{
						func_10(&(Global_2339[Global_114904.f_14148[iLocal_56 /*104*/].f_17 /*29*/].f_7));
					}
				}
				else
				{
					if (PED::IS_PEDHEADSHOT_VALID(Global_24053[iLocal_56]))
					{
						if (PED::IS_PEDHEADSHOT_READY(Global_24053[iLocal_56]))
						{
							sVar16 = PED::GET_PEDHEADSHOT_TXD_STRING(Global_24053[iLocal_56]);
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
				Global_24049 = 1;
				func_54(Global_21591, "DISPLAY_VIEW", 7f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_42(Global_21591, "SET_HEADER", "CELL_1", 0, 0, 0, 0);
				HUD::THEFEED_REMOVE_ITEM(Global_114904.f_14148[iLocal_56 /*104*/].f_16);
				if (Global_114904.f_14148[iLocal_56 /*104*/].f_29 > 0)
				{
					if (Global_21598)
					{
						func_24(Global_21591, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, "CELL_212", 0, 0, 0, 0);
					}
					else
					{
						func_24(Global_21591, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else if (Global_114904.f_14148[iLocal_56 /*104*/].f_30 == 1)
				{
					if (Global_21598)
					{
						func_24(Global_21591, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
					}
					else
					{
						func_24(Global_21591, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else
				{
					func_24(Global_21591, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				if (Global_114904.f_14148[iLocal_56 /*104*/].f_29 > 0)
				{
					if (MISC::ARE_STRINGS_EQUAL(&(Global_114904.f_14148[iLocal_56 /*104*/]), "CELL_FINV"))
					{
						if (Global_21598)
						{
							func_24(Global_21591, "SET_SOFT_KEYS", 3f, 0f, 14f, -1f, -1f, "CELL_213", 0, 0, 0, 0);
						}
						else
						{
							func_24(Global_21591, "SET_SOFT_KEYS", 3f, 0f, 14f, -1f, -1f, 0, 0, 0, 0, 0);
						}
					}
					else if (Global_21598)
					{
						func_24(Global_21591, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, "CELL_213", 0, 0, 0, 0);
					}
					else
					{
						func_24(Global_21591, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else if (Global_21598)
				{
					func_24(Global_21591, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
				}
				else
				{
					func_24(Global_21591, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				if (Global_114904.f_14148[iLocal_56 /*104*/].f_24 == 2)
				{
					if (Global_114904.f_14148[iLocal_56 /*104*/].f_31 == 1)
					{
						iLocal_58 = 0;
						if (Global_21598)
						{
							func_24(Global_21591, "SET_SOFT_KEYS", 1f, 1f, 11f, -1f, -1f, "CELL_264", 0, 0, 0, 0);
						}
						else
						{
							func_24(Global_21591, "SET_SOFT_KEYS", 1f, 1f, 11f, -1f, -1f, 0, 0, 0, 0, 0);
						}
						MISC::SET_BIT(&Global_9463, 17);
					}
					else if (iLocal_58 == 0)
					{
						func_24(Global_21591, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
						MISC::CLEAR_BIT(&Global_9463, 17);
					}
				}
				else if (Global_21598)
				{
					func_24(Global_21591, "SET_SOFT_KEYS", 1f, 1f, 12f, -1f, -1f, "CELL_216", 0, 0, 0, 0);
					MISC::SET_BIT(&Global_9463, 17);
				}
				else
				{
					func_24(Global_21591, "SET_SOFT_KEYS", 1f, 1f, 12f, -1f, -1f, 0, 0, 0, 0, 0);
					MISC::SET_BIT(&Global_9463, 17);
				}
				Global_114904.f_14058[Global_21610 /*20*/].f_18 = 0;
				Global_114904.f_14058[Global_21610 /*20*/].f_17 = 0;
			}
			else
			{
				iVar17 = 0;
				if (Global_114904.f_14058[Global_21610 /*20*/].f_17 == 1 || Global_24043 == 1)
				{
					if (Global_24043)
					{
					}
					iVar17 = 1;
				}
				Global_114904.f_14058[Global_21610 /*20*/].f_18 = 0;
				Global_114904.f_14058[Global_21610 /*20*/].f_17 = 0;
				if (iVar17 == 1)
				{
					iVar17 = 0;
					Global_21610.f_1 = 3;
				}
			}
		}
		if (Global_2740211 == 0)
		{
			if (Global_80280)
			{
				PAD::SET_INPUT_EXCLUSIVE(0, Global_21582);
				if (func_3(2, Global_21582, 0))
				{
					Global_21588 = 1;
					Global_2740211 = 1;
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
	switch (Global_114904.f_14148[iParam0 /*104*/].f_49)
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
	while (iVar0 < Global_114904.f_14148[iParam0 /*104*/].f_49)
	{
		switch (Global_114904.f_14148[iParam0 /*104*/].f_32)
		{
			case 12:
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1935152[iVar0 /*4*/]));
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
	switch (Global_114904.f_14148[iParam0 /*104*/].f_49)
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
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_114904.f_14148[iParam0 /*104*/]));
	while (iVar0 < Global_114904.f_14148[iParam0 /*104*/].f_49)
	{
		switch (Global_114904.f_14148[iParam0 /*104*/].f_32)
		{
			case 4:
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_2733002.f_848[iVar0 /*4*/]));
				break;
			
			case 5:
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1935021[iVar0 /*4*/]));
				break;
			
			case 6:
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1935062[iVar0 /*4*/]));
				break;
			
			case 7:
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1935083[iVar0 /*4*/]));
				break;
			
			case 8:
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1935100[iVar0 /*4*/]));
				break;
			
			case 9:
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1935113[iVar0 /*4*/]));
				break;
			
			case 10:
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1935126[iVar0 /*4*/]));
				break;
			
			case 11:
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1935139[iVar0 /*4*/]));
				break;
		}
		iVar0++;
	}
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

void func_45()
{
	int iVar0;
	
	if (iLocal_2457)
	{
		GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(&uLocal_66);
	}
	iLocal_2457 = 0;
	if (Global_114904.f_14148[iLocal_56 /*104*/].f_24 != 0)
	{
		iVar0 = 0;
		while (iVar0 < 185)
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Local_82[iVar0 /*6*/])) && MISC::ARE_STRINGS_EQUAL(&(Global_114904.f_14148[iLocal_56 /*104*/]), &(Local_82[iVar0 /*6*/])))
			{
				if (iVar0 < 19)
				{
					MemCopy(&uLocal_66, {Local_2304[iVar0 /*8*/]}, 16);
				}
				else
				{
					MemCopy(&uLocal_66, {Local_1193[iVar0 /*6*/]}, 16);
				}
				iLocal_2457 = 1;
				GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(&uLocal_66, false);
				while (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED(&uLocal_66))
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
	if (iLocal_59)
	{
		if (SYSTEM::TIMERA() > 50)
		{
			iLocal_59 = 0;
		}
	}
	if (iLocal_59 == 0)
	{
		if (func_3(2, Global_21586, 0) || PAD::IS_CONTROL_JUST_PRESSED(2, 181))
		{
			if (iLocal_54 > 0)
			{
				iLocal_54 = (iLocal_54 - 1);
			}
			func_49();
			iLocal_59 = 1;
			SYSTEM::SETTIMERA(0);
		}
		if (func_3(2, Global_21587, 0) || PAD::IS_CONTROL_JUST_PRESSED(2, 180))
		{
			iLocal_54++;
			if (iLocal_54 == iLocal_53)
			{
				iLocal_54 = 0;
			}
			func_47();
			iLocal_59 = 1;
			SYSTEM::SETTIMERA(0);
		}
	}
}

void func_47()
{
	func_54(Global_21591, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(3), -1082130432, -1082130432, -1082130432, -1082130432);
	AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_21599, true);
	func_48();
}

void func_48()
{
	if (func_32())
	{
		if (Global_21847 == 0)
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
	func_54(Global_21591, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(1), -1082130432, -1082130432, -1082130432, -1082130432);
	AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_21599, true);
	func_50();
}

void func_50()
{
	if (func_32())
	{
		if (Global_21847 == 0)
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
	if (Global_114904.f_14058[Global_21610 /*20*/].f_17 == 0)
	{
		if (iLocal_55 < 0)
		{
			iLocal_55 = 0;
		}
		func_54(Global_21591, "DISPLAY_VIEW", 6f, SYSTEM::TO_FLOAT(iLocal_55), -1082130432, -1082130432, -1082130432);
		func_42(Global_21591, "SET_HEADER", "CELL_1", 0, 0, 0, 0);
		if (Global_21598)
		{
			if (iLocal_53 > 0)
			{
				func_24(Global_21591, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_214", 0, 0, 0, 0);
			}
			else
			{
				func_24(Global_21591, "SET_SOFT_KEYS", 2f, 0f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			func_24(Global_21591, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
		}
		else
		{
			if (iLocal_53 > 0)
			{
				func_24(Global_21591, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else
			{
				func_24(Global_21591, "SET_SOFT_KEYS", 2f, 0f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			func_24(Global_21591, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
		}
		if (Global_80280)
		{
			func_24(Global_21591, "SET_SOFT_KEYS", 1f, 1f, 11f, -1f, -1f, 0, 0, 0, 0, 0);
			MISC::CLEAR_BIT(&Global_9463, 17);
		}
		else
		{
			func_24(Global_21591, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			MISC::CLEAR_BIT(&Global_9463, 17);
		}
	}
	else
	{
		iLocal_55 = 0;
	}
}

void func_52()
{
	int iVar0[35];
	int iVar36;
	int iVar37;
	int iVar38;
	
	iLocal_53 = 0;
	func_34();
	iVar36 = 0;
	while (iVar36 < 34)
	{
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand")) == 0)
		{
			func_73();
		}
		iVar37 = 0;
		iVar38 = 34;
		Global_114904.f_14148[iVar38 /*104*/].f_18 = -1;
		Global_114904.f_14148[iVar38 /*104*/].f_18.f_1 = 0;
		Global_114904.f_14148[iVar38 /*104*/].f_18.f_2 = 0;
		Global_114904.f_14148[iVar38 /*104*/].f_18.f_3 = 0;
		Global_114904.f_14148[iVar38 /*104*/].f_18.f_5 = 0;
		while (iVar37 < 35)
		{
			if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand")) == 0)
			{
				func_73();
			}
			if (iVar0[iVar37] == 0)
			{
				if (Global_114904.f_14148[iVar37 /*104*/].f_24 != 0)
				{
					if (Global_114904.f_14148[iVar37 /*104*/].f_99[Global_21610] == 1)
					{
						if (func_53(Global_114904.f_14148[iVar37 /*104*/].f_18, Global_114904.f_14148[iVar38 /*104*/].f_18))
						{
							iVar38 = iVar37;
							if (Global_114904.f_14148[iVar38 /*104*/].f_28 == 0)
							{
								iLocal_57 = 33;
							}
							else
							{
								iLocal_57 = 34;
							}
						}
					}
				}
			}
			iVar37++;
		}
		iLocal_17[iVar36] = iVar38;
		iVar0[iVar38] = 1;
		if (Global_114904.f_14148[iVar38 /*104*/].f_24 != 0)
		{
			if (Global_114904.f_14148[iVar38 /*104*/].f_99[Global_21610] == 1)
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21591, "SET_DATA_SLOT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(6);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar36);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_114904.f_14148[iVar38 /*104*/].f_18.f_2);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_114904.f_14148[iVar38 /*104*/].f_18.f_1);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iLocal_57);
				if (Global_114904.f_14148[iVar38 /*104*/].f_17 == 145)
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_CONDFNH");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_114904.f_14148[iVar38 /*104*/].f_50));
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else
				{
					func_10(&(Global_2339[Global_114904.f_14148[iVar38 /*104*/].f_17 /*29*/].f_3));
				}
				switch (Global_114904.f_14148[iVar38 /*104*/].f_32)
				{
					case 0:
						func_10(&(Global_114904.f_14148[iVar38 /*104*/]));
						break;
					
					case 1:
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_114904.f_14148[iVar38 /*104*/]));
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_114904.f_14148[iVar38 /*104*/].f_33));
						if (Global_114904.f_14148[iVar38 /*104*/].f_66 == 1 && !MISC::ARE_STRINGS_EQUAL(&(Global_114904.f_14148[iVar38 /*104*/].f_67), "NULL"))
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_114904.f_14148[iVar38 /*104*/].f_67));
						}
						if ((Global_114904.f_14148[iVar38 /*104*/].f_66 == 2 && !MISC::ARE_STRINGS_EQUAL(&(Global_114904.f_14148[iVar38 /*104*/].f_67), "NULL")) && !MISC::ARE_STRINGS_EQUAL(&(Global_114904.f_14148[iVar38 /*104*/].f_83), "NULL"))
						{
							if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_114904.f_14148[iVar38 /*104*/].f_67)))
							{
								HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_114904.f_14148[iVar38 /*104*/].f_67));
							}
							else
							{
								HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_114904.f_14148[iVar38 /*104*/].f_67));
							}
							if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_114904.f_14148[iVar38 /*104*/].f_83)))
							{
								HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_114904.f_14148[iVar38 /*104*/].f_83));
							}
							else
							{
								HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_114904.f_14148[iVar38 /*104*/].f_83));
							}
						}
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
						break;
					
					case 2:
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_114904.f_14148[iVar38 /*104*/]));
						HUD::ADD_TEXT_COMPONENT_INTEGER(Global_114904.f_14148[iVar38 /*104*/].f_49);
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
						break;
					
					case 3:
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_114904.f_14148[iVar38 /*104*/]));
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_114904.f_14148[iVar38 /*104*/].f_33));
						HUD::ADD_TEXT_COMPONENT_INTEGER(Global_114904.f_14148[iVar38 /*104*/].f_49);
						if (Global_114904.f_14148[iVar38 /*104*/].f_66 == 1 && !MISC::ARE_STRINGS_EQUAL(&(Global_114904.f_14148[iVar38 /*104*/].f_67), "NULL"))
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_114904.f_14148[iVar38 /*104*/].f_67));
						}
						if ((Global_114904.f_14148[iVar38 /*104*/].f_66 == 2 && !MISC::ARE_STRINGS_EQUAL(&(Global_114904.f_14148[iVar38 /*104*/].f_67), "NULL")) && !MISC::ARE_STRINGS_EQUAL(&(Global_114904.f_14148[iVar38 /*104*/].f_83), "NULL"))
						{
							if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_114904.f_14148[iVar38 /*104*/].f_67)))
							{
								HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_114904.f_14148[iVar38 /*104*/].f_67));
							}
							else
							{
								HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_114904.f_14148[iVar38 /*104*/].f_67));
							}
							if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_114904.f_14148[iVar38 /*104*/].f_83)))
							{
								HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_114904.f_14148[iVar38 /*104*/].f_83));
							}
							else
							{
								HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_114904.f_14148[iVar38 /*104*/].f_83));
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
		if (Global_114904.f_14148[iVar36 /*104*/].f_24 != 0)
		{
			if (Global_114904.f_14148[iVar36 /*104*/].f_99[Global_21610] == 1)
			{
				iLocal_53++;
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
	StringCopy(&(Local_82[0 /*6*/]), "SXT_JUL_1ST", 24);
	StringCopy(&(Local_2304[0 /*8*/]), "05_a_sext_stripperJuliet", 32);
	StringCopy(&(Local_82[1 /*6*/]), "SXT_JUL_2ND", 24);
	StringCopy(&(Local_2304[1 /*8*/]), "05_b_sext_stripperJuliet", 32);
	StringCopy(&(Local_82[2 /*6*/]), "SXT_JUL_NEED", 24);
	StringCopy(&(Local_2304[2 /*8*/]), "05_c_sext_stripperJuliet", 32);
	StringCopy(&(Local_82[3 /*6*/]), "SXT_NIK_1ST", 24);
	StringCopy(&(Local_2304[3 /*8*/]), "06_a_sext_stripperNikki", 32);
	StringCopy(&(Local_82[4 /*6*/]), "SXT_NIK_2ND", 24);
	StringCopy(&(Local_2304[4 /*8*/]), "06_b_sext_stripperNikki", 32);
	StringCopy(&(Local_82[5 /*6*/]), "SXT_NIK_NEED", 24);
	StringCopy(&(Local_2304[5 /*8*/]), "06_c_sext_stripperNikki", 32);
	StringCopy(&(Local_82[6 /*6*/]), "SXT_SAP_1ST", 24);
	StringCopy(&(Local_2304[6 /*8*/]), "08_a_sext_stripperSapphire", 32);
	StringCopy(&(Local_82[7 /*6*/]), "SXT_SAP_2ND", 24);
	StringCopy(&(Local_2304[7 /*8*/]), "08_b_sext_stripperSapphire", 32);
	StringCopy(&(Local_82[8 /*6*/]), "SXT_SAP_NEED", 24);
	StringCopy(&(Local_2304[8 /*8*/]), "08_c_sext_stripperSapphire", 32);
	StringCopy(&(Local_82[9 /*6*/]), "SXT_INF_1ST", 24);
	StringCopy(&(Local_2304[9 /*8*/]), "04_a_sext_stripperInfernus", 32);
	StringCopy(&(Local_82[10 /*6*/]), "SXT_INF_2ND", 24);
	StringCopy(&(Local_2304[10 /*8*/]), "04_b_sext_stripperInfernus", 32);
	StringCopy(&(Local_82[11 /*6*/]), "SXT_INF_NEED", 24);
	StringCopy(&(Local_2304[11 /*8*/]), "04_c_sext_stripperInfernus", 32);
	StringCopy(&(Local_82[12 /*6*/]), "SXT_TXI_1ST", 24);
	StringCopy(&(Local_2304[12 /*8*/]), "11_a_sext_taxiLiz", 32);
	StringCopy(&(Local_82[13 /*6*/]), "SXT_TXI_2ND", 24);
	StringCopy(&(Local_2304[13 /*8*/]), "11_b_sext_taxiLiz", 32);
	StringCopy(&(Local_82[14 /*6*/]), "SXT_TXI_NEED", 24);
	StringCopy(&(Local_2304[14 /*8*/]), "11_c_sext_taxiLiz", 32);
	StringCopy(&(Local_82[15 /*6*/]), "SXT_HCH_1ST", 24);
	StringCopy(&(Local_2304[15 /*8*/]), "10_a_sext_hitcherGirl", 32);
	StringCopy(&(Local_82[16 /*6*/]), "SXT_HCH_2ND", 24);
	StringCopy(&(Local_2304[16 /*8*/]), "10_b_sext_hitcherGirl", 32);
	StringCopy(&(Local_82[17 /*6*/]), "SXT_HCH_NEED", 24);
	StringCopy(&(Local_2304[17 /*8*/]), "10_c_sext_hitcherGirl", 32);
	StringCopy(&(Local_82[18 /*6*/]), "SOL2_PASS", 24);
	StringCopy(&(Local_2304[18 /*8*/]), "executiveproducer", 32);
	StringCopy(&(Local_82[19 /*6*/]), "LR_PIC_TXT1", 24);
	StringCopy(&(Local_1193[19 /*6*/]), "mt_phone_image_1", 24);
	StringCopy(&(Local_82[20 /*6*/]), "LR_PIC_TXT2", 24);
	StringCopy(&(Local_1193[20 /*6*/]), "mt_phone_image_2", 24);
	StringCopy(&(Local_82[21 /*6*/]), "LR_PIC_TXT3", 24);
	StringCopy(&(Local_1193[21 /*6*/]), "mt_phone_image_3", 24);
	StringCopy(&(Local_82[22 /*6*/]), "LR_PIC_TXT4", 24);
	StringCopy(&(Local_1193[22 /*6*/]), "mt_phone_image_4", 24);
	StringCopy(&(Local_82[23 /*6*/]), "LR_PIC_TXT5", 24);
	StringCopy(&(Local_1193[23 /*6*/]), "mt_phone_image_5", 24);
	StringCopy(&(Local_82[24 /*6*/]), "SAD_SMS_0", 24);
	StringCopy(&(Local_1193[24 /*6*/]), "MP_SND_TARGET_01", 24);
	StringCopy(&(Local_82[25 /*6*/]), "SAD_SMS_1", 24);
	StringCopy(&(Local_1193[25 /*6*/]), "MP_SND_TARGET_02", 24);
	StringCopy(&(Local_82[26 /*6*/]), "SAD_SMS_2", 24);
	StringCopy(&(Local_1193[26 /*6*/]), "MP_SND_TARGET_03", 24);
	StringCopy(&(Local_82[27 /*6*/]), "SAD_SMS_3", 24);
	StringCopy(&(Local_1193[27 /*6*/]), "MP_SND_TARGET_04", 24);
	StringCopy(&(Local_82[28 /*6*/]), "SAD_SMS_4", 24);
	StringCopy(&(Local_1193[28 /*6*/]), "MP_SND_TARGET_05", 24);
	StringCopy(&(Local_82[29 /*6*/]), "SAD_SMS_5", 24);
	StringCopy(&(Local_1193[29 /*6*/]), "MP_SND_TARGET_06", 24);
	StringCopy(&(Local_82[30 /*6*/]), "SAD_SMS_6", 24);
	StringCopy(&(Local_1193[30 /*6*/]), "MP_SND_TARGET_07", 24);
	StringCopy(&(Local_82[31 /*6*/]), "SAD_SMS_7", 24);
	StringCopy(&(Local_1193[31 /*6*/]), "MP_SND_TARGET_08", 24);
	StringCopy(&(Local_82[32 /*6*/]), "SAD_SMS_8", 24);
	StringCopy(&(Local_1193[32 /*6*/]), "MP_SND_TARGET_09", 24);
	StringCopy(&(Local_82[33 /*6*/]), "SAD_SMS_9", 24);
	StringCopy(&(Local_1193[33 /*6*/]), "MP_SND_TARGET_10", 24);
	StringCopy(&(Local_82[34 /*6*/]), "SAD_SMS_10", 24);
	StringCopy(&(Local_1193[34 /*6*/]), "MP_SND_TARGET_11", 24);
	StringCopy(&(Local_82[35 /*6*/]), "SAD_SMS_11", 24);
	StringCopy(&(Local_1193[35 /*6*/]), "MP_SND_TARGET_12", 24);
	StringCopy(&(Local_82[36 /*6*/]), "SAD_SMS_12", 24);
	StringCopy(&(Local_1193[36 /*6*/]), "MP_SND_TARGET_13", 24);
	StringCopy(&(Local_82[37 /*6*/]), "SAD_SMS_13", 24);
	StringCopy(&(Local_1193[37 /*6*/]), "MP_SND_TARGET_14", 24);
	StringCopy(&(Local_82[38 /*6*/]), "SAD_SMS_14", 24);
	StringCopy(&(Local_1193[38 /*6*/]), "MP_SND_TARGET_15", 24);
	StringCopy(&(Local_82[39 /*6*/]), "SAD_SMS_15", 24);
	StringCopy(&(Local_1193[39 /*6*/]), "MP_SND_TARGET_16", 24);
	StringCopy(&(Local_82[40 /*6*/]), "SAD_SMS_16", 24);
	StringCopy(&(Local_1193[40 /*6*/]), "MP_SND_TARGET_17", 24);
	StringCopy(&(Local_82[41 /*6*/]), "SAD_SMS_17", 24);
	StringCopy(&(Local_1193[41 /*6*/]), "MP_SND_TARGET_18", 24);
	StringCopy(&(Local_82[42 /*6*/]), "SAD_SMS_18", 24);
	StringCopy(&(Local_1193[42 /*6*/]), "MP_SND_TARGET_19", 24);
	StringCopy(&(Local_82[43 /*6*/]), "SAD_SMS_19", 24);
	StringCopy(&(Local_1193[43 /*6*/]), "MP_SND_TARGET_20", 24);
	StringCopy(&(Local_82[44 /*6*/]), "VEX_PM_PHOTO0", 24);
	StringCopy(&(Local_1193[44 /*6*/]), "MP_EX_LOCATION_01", 24);
	StringCopy(&(Local_82[45 /*6*/]), "VEX_PM_PHOTO1", 24);
	StringCopy(&(Local_1193[45 /*6*/]), "MP_EX_LOCATION_02", 24);
	StringCopy(&(Local_82[46 /*6*/]), "VEX_PM_PHOTO2", 24);
	StringCopy(&(Local_1193[46 /*6*/]), "MP_EX_LOCATION_03", 24);
	StringCopy(&(Local_82[47 /*6*/]), "VEX_PM_PHOTO3", 24);
	StringCopy(&(Local_1193[47 /*6*/]), "MP_EX_LOCATION_04", 24);
	StringCopy(&(Local_82[48 /*6*/]), "VEX_PM_PHOTO4", 24);
	StringCopy(&(Local_1193[48 /*6*/]), "MP_EX_LOCATION_05", 24);
	StringCopy(&(Local_82[49 /*6*/]), "VEX_PM_PHOTO5", 24);
	StringCopy(&(Local_1193[49 /*6*/]), "MP_EX_LOCATION_06", 24);
	StringCopy(&(Local_82[50 /*6*/]), "VEX_PM_PHOTO6", 24);
	StringCopy(&(Local_1193[50 /*6*/]), "MP_EX_LOCATION_07", 24);
	StringCopy(&(Local_82[51 /*6*/]), "VEX_PM_PHOTO7", 24);
	StringCopy(&(Local_1193[51 /*6*/]), "MP_EX_LOCATION_08", 24);
	StringCopy(&(Local_82[52 /*6*/]), "VEX_PM_PHOTO8", 24);
	StringCopy(&(Local_1193[52 /*6*/]), "MP_EX_LOCATION_09", 24);
	StringCopy(&(Local_82[53 /*6*/]), "VEX_PM_PHOTO9", 24);
	StringCopy(&(Local_1193[53 /*6*/]), "MP_EX_LOCATION_10", 24);
	StringCopy(&(Local_82[54 /*6*/]), "VEX_PM_PHOTO10", 24);
	StringCopy(&(Local_1193[54 /*6*/]), "MP_EX_LOCATION_11", 24);
	StringCopy(&(Local_82[55 /*6*/]), "VEX_PM_PHOTO11", 24);
	StringCopy(&(Local_1193[55 /*6*/]), "MP_EX_LOCATION_12", 24);
	StringCopy(&(Local_82[56 /*6*/]), "VEX_PM_PHOTO12", 24);
	StringCopy(&(Local_1193[56 /*6*/]), "MP_EX_LOCATION_13", 24);
	StringCopy(&(Local_82[57 /*6*/]), "VEX_PM_PHOTO13", 24);
	StringCopy(&(Local_1193[57 /*6*/]), "MP_EX_LOCATION_14", 24);
	StringCopy(&(Local_82[58 /*6*/]), "VEX_1_PROTO", 24);
	StringCopy(&(Local_1193[58 /*6*/]), "IE_TEXTVECH_01", 24);
	StringCopy(&(Local_82[59 /*6*/]), "VEX_2_PROTO", 24);
	StringCopy(&(Local_1193[59 /*6*/]), "IE_TEXTVECH_02", 24);
	StringCopy(&(Local_82[60 /*6*/]), "VEX_3_PROTO", 24);
	StringCopy(&(Local_1193[60 /*6*/]), "IE_TEXTVECH_03", 24);
	StringCopy(&(Local_82[61 /*6*/]), "VEX_4_TYRUS", 24);
	StringCopy(&(Local_1193[61 /*6*/]), "IE_TEXTVECH_04", 24);
	StringCopy(&(Local_82[62 /*6*/]), "VEX_5_TYRUS", 24);
	StringCopy(&(Local_1193[62 /*6*/]), "IE_TEXTVECH_05", 24);
	StringCopy(&(Local_82[63 /*6*/]), "VEX_6_TYRUS", 24);
	StringCopy(&(Local_1193[63 /*6*/]), "IE_TEXTVECH_06", 24);
	StringCopy(&(Local_82[64 /*6*/]), "VEX_7_BESTIA", 24);
	StringCopy(&(Local_1193[64 /*6*/]), "IE_TEXTVECH_07", 24);
	StringCopy(&(Local_82[65 /*6*/]), "VEX_8_BESTIA", 24);
	StringCopy(&(Local_1193[65 /*6*/]), "IE_TEXTVECH_08", 24);
	StringCopy(&(Local_82[66 /*6*/]), "VEX_9_BESTIA", 24);
	StringCopy(&(Local_1193[66 /*6*/]), "IE_TEXTVECH_09", 24);
	StringCopy(&(Local_82[67 /*6*/]), "VEX_10_T20", 24);
	StringCopy(&(Local_1193[67 /*6*/]), "IE_TEXTVECH_10", 24);
	StringCopy(&(Local_82[68 /*6*/]), "VEX_11_T20", 24);
	StringCopy(&(Local_1193[68 /*6*/]), "IE_TEXTVECH_11", 24);
	StringCopy(&(Local_82[69 /*6*/]), "VEX_12_T20", 24);
	StringCopy(&(Local_1193[69 /*6*/]), "IE_TEXTVECH_12", 24);
	StringCopy(&(Local_82[70 /*6*/]), "VEX_13_SHEAVA", 24);
	StringCopy(&(Local_1193[70 /*6*/]), "IE_TEXTVECH_13", 24);
	StringCopy(&(Local_82[71 /*6*/]), "VEX_14_SHEAVA", 24);
	StringCopy(&(Local_1193[71 /*6*/]), "IE_TEXTVECH_14", 24);
	StringCopy(&(Local_82[72 /*6*/]), "VEX_15_SHEAVA", 24);
	StringCopy(&(Local_1193[72 /*6*/]), "IE_TEXTVECH_15", 24);
	StringCopy(&(Local_82[73 /*6*/]), "VEX_16_OSIRIS", 24);
	StringCopy(&(Local_1193[73 /*6*/]), "IE_TEXTVECH_16", 24);
	StringCopy(&(Local_82[74 /*6*/]), "VEX_17_OSIRIS", 24);
	StringCopy(&(Local_1193[74 /*6*/]), "IE_TEXTVECH_17", 24);
	StringCopy(&(Local_82[75 /*6*/]), "VEX_18_OSIRIS", 24);
	StringCopy(&(Local_1193[75 /*6*/]), "IE_TEXTVECH_18", 24);
	StringCopy(&(Local_82[76 /*6*/]), "VEX_19_FMJ", 24);
	StringCopy(&(Local_1193[76 /*6*/]), "IE_TEXTVECH_19", 24);
	StringCopy(&(Local_82[77 /*6*/]), "VEX_20_FMJ", 24);
	StringCopy(&(Local_1193[77 /*6*/]), "IE_TEXTVECH_20", 24);
	StringCopy(&(Local_82[78 /*6*/]), "VEX_21_FMJ", 24);
	StringCopy(&(Local_1193[78 /*6*/]), "IE_TEXTVECH_21", 24);
	StringCopy(&(Local_82[79 /*6*/]), "VEX_22_REAPER", 24);
	StringCopy(&(Local_1193[79 /*6*/]), "IE_TEXTVECH_22", 24);
	StringCopy(&(Local_82[80 /*6*/]), "VEX_23_REAPER", 24);
	StringCopy(&(Local_1193[80 /*6*/]), "IE_TEXTVECH_23", 24);
	StringCopy(&(Local_82[81 /*6*/]), "VEX_24_REAPER", 24);
	StringCopy(&(Local_1193[81 /*6*/]), "IE_TEXTVECH_24", 24);
	StringCopy(&(Local_82[82 /*6*/]), "VEX_25_PFISTER", 24);
	StringCopy(&(Local_1193[82 /*6*/]), "IE_TEXTVECH_25", 24);
	StringCopy(&(Local_82[83 /*6*/]), "VEX_26_PFISTER", 24);
	StringCopy(&(Local_1193[83 /*6*/]), "IE_TEXTVECH_26", 24);
	StringCopy(&(Local_82[84 /*6*/]), "VEX_27_PFISTER", 24);
	StringCopy(&(Local_1193[84 /*6*/]), "IE_TEXTVECH_27", 24);
	StringCopy(&(Local_82[85 /*6*/]), "VEX_28_ALPHA", 24);
	StringCopy(&(Local_1193[85 /*6*/]), "IE_TEXTVECH_28", 24);
	StringCopy(&(Local_82[86 /*6*/]), "VEX_29_ALPHA", 24);
	StringCopy(&(Local_1193[86 /*6*/]), "IE_TEXTVECH_29", 24);
	StringCopy(&(Local_82[87 /*6*/]), "VEX_30_ALPHA", 24);
	StringCopy(&(Local_1193[87 /*6*/]), "IE_TEXTVECH_30", 24);
	StringCopy(&(Local_82[88 /*6*/]), "VEX_31_MAMBA", 24);
	StringCopy(&(Local_1193[88 /*6*/]), "IE_TEXTVECH_31", 24);
	StringCopy(&(Local_82[89 /*6*/]), "VEX_32_MAMBA", 24);
	StringCopy(&(Local_1193[89 /*6*/]), "IE_TEXTVECH_32", 24);
	StringCopy(&(Local_82[90 /*6*/]), "VEX_33_MAMBA", 24);
	StringCopy(&(Local_1193[90 /*6*/]), "IE_TEXTVECH_33", 24);
	StringCopy(&(Local_82[91 /*6*/]), "VEX_34_TAMPA", 24);
	StringCopy(&(Local_1193[91 /*6*/]), "IE_TEXTVECH_34", 24);
	StringCopy(&(Local_82[92 /*6*/]), "VEX_35_TAMPA", 24);
	StringCopy(&(Local_1193[92 /*6*/]), "IE_TEXTVECH_35", 24);
	StringCopy(&(Local_82[93 /*6*/]), "VEX_36_TAMPA", 24);
	StringCopy(&(Local_1193[93 /*6*/]), "IE_TEXTVECH_36", 24);
	StringCopy(&(Local_82[94 /*6*/]), "VEX_37_BTYPE", 24);
	StringCopy(&(Local_1193[94 /*6*/]), "IE_TEXTVECH_37", 24);
	StringCopy(&(Local_82[95 /*6*/]), "VEX_38_BTYPE", 24);
	StringCopy(&(Local_1193[95 /*6*/]), "IE_TEXTVECH_38", 24);
	StringCopy(&(Local_82[96 /*6*/]), "VEX_39_BTYPE", 24);
	StringCopy(&(Local_1193[96 /*6*/]), "IE_TEXTVECH_39", 24);
	StringCopy(&(Local_82[97 /*6*/]), "VEX_40_FELTZ3", 24);
	StringCopy(&(Local_1193[97 /*6*/]), "IE_TEXTVECH_40", 24);
	StringCopy(&(Local_82[98 /*6*/]), "VEX_41_FELTZ3", 24);
	StringCopy(&(Local_1193[98 /*6*/]), "IE_TEXTVECH_41", 24);
	StringCopy(&(Local_82[99 /*6*/]), "VEX_42_FELTZ3", 24);
	StringCopy(&(Local_1193[99 /*6*/]), "IE_TEXTVECH_42", 24);
	StringCopy(&(Local_82[100 /*6*/]), "VEX_43_ZTYPE", 24);
	StringCopy(&(Local_1193[100 /*6*/]), "IE_TEXTVECH_43", 24);
	StringCopy(&(Local_82[101 /*6*/]), "VEX_44_ZTYPE", 24);
	StringCopy(&(Local_1193[101 /*6*/]), "IE_TEXTVECH_44", 24);
	StringCopy(&(Local_82[102 /*6*/]), "VEX_45_ZTYPE", 24);
	StringCopy(&(Local_1193[102 /*6*/]), "IE_TEXTVECH_45", 24);
	StringCopy(&(Local_82[103 /*6*/]), "VEX_46_TROPOS", 24);
	StringCopy(&(Local_1193[103 /*6*/]), "IE_TEXTVECH_46", 24);
	StringCopy(&(Local_82[104 /*6*/]), "VEX_47_TROPOS", 24);
	StringCopy(&(Local_1193[104 /*6*/]), "IE_TEXTVECH_47", 24);
	StringCopy(&(Local_82[105 /*6*/]), "VEX_48_TROPOS", 24);
	StringCopy(&(Local_1193[105 /*6*/]), "IE_TEXTVECH_48", 24);
	StringCopy(&(Local_82[106 /*6*/]), "VEX_49_ENTITYXF", 24);
	StringCopy(&(Local_1193[106 /*6*/]), "IE_TEXTVECH_49", 24);
	StringCopy(&(Local_82[107 /*6*/]), "VEX_50_ENTITYXF", 24);
	StringCopy(&(Local_1193[107 /*6*/]), "IE_TEXTVECH_50", 24);
	StringCopy(&(Local_82[108 /*6*/]), "VEX_51_ENTITYXF", 24);
	StringCopy(&(Local_1193[108 /*6*/]), "IE_TEXTVECH_51", 24);
	StringCopy(&(Local_82[109 /*6*/]), "VEX_52_SULTANRS", 24);
	StringCopy(&(Local_1193[109 /*6*/]), "IE_TEXTVECH_52", 24);
	StringCopy(&(Local_82[110 /*6*/]), "VEX_53_SULTANRS", 24);
	StringCopy(&(Local_1193[110 /*6*/]), "IE_TEXTVECH_53", 24);
	StringCopy(&(Local_82[111 /*6*/]), "VEX_54_SULTANRS", 24);
	StringCopy(&(Local_1193[111 /*6*/]), "IE_TEXTVECH_54", 24);
	StringCopy(&(Local_82[112 /*6*/]), "VEX_55_ZENTORNO", 24);
	StringCopy(&(Local_1193[112 /*6*/]), "IE_TEXTVECH_55", 24);
	StringCopy(&(Local_82[113 /*6*/]), "VEX_56_ZENTORNO", 24);
	StringCopy(&(Local_1193[113 /*6*/]), "IE_TEXTVECH_56", 24);
	StringCopy(&(Local_82[114 /*6*/]), "VEX_57_ZENTORNO", 24);
	StringCopy(&(Local_1193[114 /*6*/]), "IE_TEXTVECH_57", 24);
	StringCopy(&(Local_82[115 /*6*/]), "VEX_58_OMNIS", 24);
	StringCopy(&(Local_1193[115 /*6*/]), "IE_TEXTVECH_58", 24);
	StringCopy(&(Local_82[116 /*6*/]), "VEX_59_OMNIS", 24);
	StringCopy(&(Local_1193[116 /*6*/]), "IE_TEXTVECH_59", 24);
	StringCopy(&(Local_82[117 /*6*/]), "VEX_60_OMNIS", 24);
	StringCopy(&(Local_1193[117 /*6*/]), "IE_TEXTVECH_60", 24);
	StringCopy(&(Local_82[118 /*6*/]), "VEX_61_COQUET3", 24);
	StringCopy(&(Local_1193[118 /*6*/]), "IE_TEXTVECH_61", 24);
	StringCopy(&(Local_82[119 /*6*/]), "VEX_62_COQUET3", 24);
	StringCopy(&(Local_1193[119 /*6*/]), "IE_TEXTVECH_62", 24);
	StringCopy(&(Local_82[120 /*6*/]), "VEX_63_COQUET3", 24);
	StringCopy(&(Local_1193[120 /*6*/]), "IE_TEXTVECH_63", 24);
	StringCopy(&(Local_82[121 /*6*/]), "VEX_64_SEVEN70", 24);
	StringCopy(&(Local_1193[121 /*6*/]), "IE_TEXTVECH_64", 24);
	StringCopy(&(Local_82[122 /*6*/]), "VEX_65_SEVEN70", 24);
	StringCopy(&(Local_1193[122 /*6*/]), "IE_TEXTVECH_65", 24);
	StringCopy(&(Local_82[123 /*6*/]), "VEX_66_SEVEN70", 24);
	StringCopy(&(Local_1193[123 /*6*/]), "IE_TEXTVECH_66", 24);
	StringCopy(&(Local_82[124 /*6*/]), "VEX_67_VERLI", 24);
	StringCopy(&(Local_1193[124 /*6*/]), "IE_TEXTVECH_67", 24);
	StringCopy(&(Local_82[125 /*6*/]), "VEX_68_VERLI", 24);
	StringCopy(&(Local_1193[125 /*6*/]), "IE_TEXTVECH_68", 24);
	StringCopy(&(Local_82[126 /*6*/]), "VEX_69_VERLI", 24);
	StringCopy(&(Local_1193[126 /*6*/]), "IE_TEXTVECH_69", 24);
	StringCopy(&(Local_82[127 /*6*/]), "VEX_70_FELTZ2", 24);
	StringCopy(&(Local_1193[127 /*6*/]), "IE_TEXTVECH_70", 24);
	StringCopy(&(Local_82[128 /*6*/]), "VEX_71_FELTZ2", 24);
	StringCopy(&(Local_1193[128 /*6*/]), "IE_TEXTVECH_71", 24);
	StringCopy(&(Local_82[129 /*6*/]), "VEX_72_FELTZ2", 24);
	StringCopy(&(Local_1193[129 /*6*/]), "IE_TEXTVECH_72", 24);
	StringCopy(&(Local_82[130 /*6*/]), "VEX_73_COQUET2", 24);
	StringCopy(&(Local_1193[130 /*6*/]), "IE_TEXTVECH_73", 24);
	StringCopy(&(Local_82[131 /*6*/]), "VEX_74_COQUET2", 24);
	StringCopy(&(Local_1193[131 /*6*/]), "IE_TEXTVECH_74", 24);
	StringCopy(&(Local_82[132 /*6*/]), "VEX_75_COQUET2", 24);
	StringCopy(&(Local_1193[132 /*6*/]), "IE_TEXTVECH_75", 24);
	StringCopy(&(Local_82[133 /*6*/]), "VEX_76_CHEETAH", 24);
	StringCopy(&(Local_1193[133 /*6*/]), "IE_TEXTVECH_76", 24);
	StringCopy(&(Local_82[134 /*6*/]), "VEX_77_CHEETAH", 24);
	StringCopy(&(Local_1193[134 /*6*/]), "IE_TEXTVECH_77", 24);
	StringCopy(&(Local_82[135 /*6*/]), "VEX_78_CHEETAH", 24);
	StringCopy(&(Local_1193[135 /*6*/]), "IE_TEXTVECH_78", 24);
	StringCopy(&(Local_82[136 /*6*/]), "VEX_79_NSHADE", 24);
	StringCopy(&(Local_1193[136 /*6*/]), "IE_TEXTVECH_79", 24);
	StringCopy(&(Local_82[137 /*6*/]), "VEX_80_NSHADE", 24);
	StringCopy(&(Local_1193[137 /*6*/]), "IE_TEXTVECH_80", 24);
	StringCopy(&(Local_82[138 /*6*/]), "VEX_81_NSHADE", 24);
	StringCopy(&(Local_1193[138 /*6*/]), "IE_TEXTVECH_81", 24);
	StringCopy(&(Local_82[139 /*6*/]), "VEX_82_BANSH2", 24);
	StringCopy(&(Local_1193[139 /*6*/]), "IE_TEXTVECH_82", 24);
	StringCopy(&(Local_82[140 /*6*/]), "VEX_83_BANSH2", 24);
	StringCopy(&(Local_1193[140 /*6*/]), "IE_TEXTVECH_84", 24);
	StringCopy(&(Local_82[141 /*6*/]), "VEX_84_BANSH2", 24);
	StringCopy(&(Local_1193[141 /*6*/]), "IE_TEXTVECH_85", 24);
	StringCopy(&(Local_82[142 /*6*/]), "VEX_82_TURIS", 24);
	StringCopy(&(Local_1193[142 /*6*/]), "IE_TEXTVECH_83", 24);
	StringCopy(&(Local_82[143 /*6*/]), "VEX_86_TURIS", 24);
	StringCopy(&(Local_1193[143 /*6*/]), "IE_TEXTVECH_86", 24);
	StringCopy(&(Local_82[144 /*6*/]), "VEX_87_TURIS", 24);
	StringCopy(&(Local_1193[144 /*6*/]), "IE_TEXTVECH_87", 24);
	StringCopy(&(Local_82[145 /*6*/]), "VEX_88_MASS", 24);
	StringCopy(&(Local_1193[145 /*6*/]), "IE_TEXTVECH_88", 24);
	StringCopy(&(Local_82[146 /*6*/]), "VEX_89_MASS", 24);
	StringCopy(&(Local_1193[146 /*6*/]), "IE_TEXTVECH_89", 24);
	StringCopy(&(Local_82[147 /*6*/]), "VEX_90_MASS", 24);
	StringCopy(&(Local_1193[147 /*6*/]), "IE_TEXTVECH_90", 24);
	StringCopy(&(Local_82[148 /*6*/]), "VEX_91_SABRE2", 24);
	StringCopy(&(Local_1193[148 /*6*/]), "IE_TEXTVECH_91", 24);
	StringCopy(&(Local_82[149 /*6*/]), "VEX_92_SABRE2", 24);
	StringCopy(&(Local_1193[149 /*6*/]), "IE_TEXTVECH_92", 24);
	StringCopy(&(Local_82[150 /*6*/]), "VEX_93_SABRE2", 24);
	StringCopy(&(Local_1193[150 /*6*/]), "IE_TEXTVECH_93", 24);
	StringCopy(&(Local_82[151 /*6*/]), "VEX_94_JESTER", 24);
	StringCopy(&(Local_1193[151 /*6*/]), "IE_TEXTVECH_94", 24);
	StringCopy(&(Local_82[152 /*6*/]), "VEX_95_JESTER", 24);
	StringCopy(&(Local_1193[152 /*6*/]), "IE_TEXTVECH_95", 24);
	StringCopy(&(Local_82[153 /*6*/]), "VEX_96_JESTER", 24);
	StringCopy(&(Local_1193[153 /*6*/]), "IE_TEXTVECH_96", 24);
	StringCopy(&(Local_82[154 /*6*/]), "GO_AS_PICM", 24);
	StringCopy(&(Local_1193[154 /*6*/]), "NHP_prep_autosalvage", 24);
	StringCopy(&(Local_82[155 /*6*/]), "GO_DR_PICM", 24);
	StringCopy(&(Local_1193[155 /*6*/]), "nhp_prep_daylightrob", 24);
	StringCopy(&(Local_82[156 /*6*/]), "FHTXT_DDR00M", 24);
	StringCopy(&(Local_1193[156 /*6*/]), "NHP_prep_deaddrop", 24);
	StringCopy(&(Local_82[157 /*6*/]), "BBTXT_CPS00M", 24);
	StringCopy(&(Local_1193[157 /*6*/]), "BAT_carpark_1", 24);
	StringCopy(&(Local_82[158 /*6*/]), "BBTXT_CPS10M", 24);
	StringCopy(&(Local_1193[158 /*6*/]), "BAT_carpark_2", 24);
	StringCopy(&(Local_82[159 /*6*/]), "BBTXT_CPS20M", 24);
	StringCopy(&(Local_1193[159 /*6*/]), "BAT_carpark_3", 24);
	StringCopy(&(Local_82[160 /*6*/]), "ICEBR_EMAIL", 24);
	StringCopy(&(Local_1193[160 /*6*/]), "ib_aircon", 24);
	StringCopy(&(Local_82[161 /*6*/]), "XM22FLOW_TXT_0", 24);
	StringCopy(&(Local_1193[161 /*6*/]), "PHONE_MESSAGE_D_DUDE", 24);
	StringCopy(&(Local_82[162 /*6*/]), "CHM6_PMSG_TR", 24);
	StringCopy(&(Local_1193[162 /*6*/]), "UPDT1_2023_TEXT_LSA6_1", 24);
	StringCopy(&(Local_82[163 /*6*/]), "CBR2_PMSG_P1", 24);
	StringCopy(&(Local_1193[163 /*6*/]), "UPDT2_2023_TEXT_IMG_2", 24);
	StringCopy(&(Local_82[164 /*6*/]), "CBR2_PMSG_P2", 24);
	StringCopy(&(Local_1193[164 /*6*/]), "UPDT2_2023_TEXT_IMG_3", 24);
	StringCopy(&(Local_82[165 /*6*/]), "CBR2_PMSG_P3", 24);
	StringCopy(&(Local_1193[165 /*6*/]), "UPDT2_2023_TEXT_IMG_4", 24);
	StringCopy(&(Local_82[166 /*6*/]), "CBR2_PMSG_TB", 24);
	StringCopy(&(Local_1193[166 /*6*/]), "UPDT2_2023_TEXT_IMG_5", 24);
	StringCopy(&(Local_82[167 /*6*/]), "CBR3_PMSG", 24);
	StringCopy(&(Local_1193[167 /*6*/]), "UPDT2_2023_TEXT_IMG_6", 24);
	StringCopy(&(Local_82[168 /*6*/]), "CBR4_PMSG", 24);
	StringCopy(&(Local_1193[168 /*6*/]), "UPDT2_2023_TEXT_IMG_7", 24);
	StringCopy(&(Local_82[169 /*6*/]), "BTY_HVTM_CEO", 24);
	StringCopy(&(Local_1193[169 /*6*/]), "UPDT1_24_TEXT_HV", 24);
	StringCopy(&(Local_82[170 /*6*/]), "BTY_HVTM_RESCUE", 24);
	StringCopy(&(Local_1193[170 /*6*/]), "UPDT1_24_TEXT_HV", 24);
	StringCopy(&(Local_82[171 /*6*/]), "BTY_HVTM_AMBUSH", 24);
	StringCopy(&(Local_1193[171 /*6*/]), "UPDT1_24_TEXT_HV", 24);
	StringCopy(&(Local_82[172 /*6*/]), "BTY_HVTM_HEAVY", 24);
	StringCopy(&(Local_1193[172 /*6*/]), "UPDT1_24_TEXT_HV", 24);
	StringCopy(&(Local_82[173 /*6*/]), "BTY_HVTM_MOVIE", 24);
	StringCopy(&(Local_1193[173 /*6*/]), "UPDT1_24_TEXT_HV", 24);
	StringCopy(&(Local_82[174 /*6*/]), "BTY_HVTM_LFINV", 24);
	StringCopy(&(Local_1193[174 /*6*/]), "UPDT1_24_TEXT_HV", 24);
	StringCopy(&(Local_82[175 /*6*/]), "BTY_HVTM_TOWER", 24);
	StringCopy(&(Local_1193[175 /*6*/]), "UPDT1_24_TEXT_TOWER", 24);
	StringCopy(&(Local_82[176 /*6*/]), "TYC_PMSG_L1A", 24);
	StringCopy(&(Local_1193[176 /*6*/]), "UPDT1_25_TEXT_TYCOON", 24);
	StringCopy(&(Local_82[177 /*6*/]), "TYC_PMSG_L1B", 24);
	StringCopy(&(Local_1193[177 /*6*/]), "UPDT1_25_TEXT_TYCOON", 24);
	StringCopy(&(Local_82[178 /*6*/]), "TYC_PMSG_L2A", 24);
	StringCopy(&(Local_1193[178 /*6*/]), "UPDT1_25_TEXT_TYCOON", 24);
	StringCopy(&(Local_82[179 /*6*/]), "TYC_PMSG_L2B", 24);
	StringCopy(&(Local_1193[179 /*6*/]), "UPDT1_25_TEXT_TYCOON", 24);
	StringCopy(&(Local_82[180 /*6*/]), "TYC_PMSG_L3A", 24);
	StringCopy(&(Local_1193[180 /*6*/]), "UPDT1_25_TEXT_TYCOON", 24);
	StringCopy(&(Local_82[181 /*6*/]), "TYC_PMSG_L3B", 24);
	StringCopy(&(Local_1193[181 /*6*/]), "UPDT1_25_TEXT_TYCOON", 24);
	if (func_72(PLAYER::PLAYER_ID()) == 19)
	{
		StringCopy(&(Local_82[44 /*6*/]), "SNP_IMG_0_0", 24);
		StringCopy(&(Local_1193[44 /*6*/]), "SCLUB_1", 24);
		StringCopy(&(Local_82[45 /*6*/]), "SNP_IMG_0_1", 24);
		StringCopy(&(Local_1193[45 /*6*/]), "SCLUB_1", 24);
		StringCopy(&(Local_82[46 /*6*/]), "SNP_IMG_0_2", 24);
		StringCopy(&(Local_1193[46 /*6*/]), "SCLUB_1", 24);
		StringCopy(&(Local_82[47 /*6*/]), "SNP_IMG_0_3", 24);
		StringCopy(&(Local_1193[47 /*6*/]), "SCLUB_1", 24);
		StringCopy(&(Local_82[48 /*6*/]), "SNP_IMG_0_4", 24);
		StringCopy(&(Local_1193[48 /*6*/]), "SCLUB_1", 24);
		StringCopy(&(Local_82[49 /*6*/]), "SNP_IMG_0_5", 24);
		StringCopy(&(Local_1193[49 /*6*/]), "SCLUB_1", 24);
		StringCopy(&(Local_82[50 /*6*/]), "SNP_IMG_0_6", 24);
		StringCopy(&(Local_1193[50 /*6*/]), "SCLUB_1", 24);
		StringCopy(&(Local_82[51 /*6*/]), "SNP_IMG_0_7", 24);
		StringCopy(&(Local_1193[51 /*6*/]), "SCLUB_1", 24);
		StringCopy(&(Local_82[52 /*6*/]), "SNP_IMG_0_8", 24);
		StringCopy(&(Local_1193[52 /*6*/]), "SCLUB_1", 24);
		StringCopy(&(Local_82[53 /*6*/]), "SNP_IMG_0_9", 24);
		StringCopy(&(Local_1193[53 /*6*/]), "SCLUB_1", 24);
		StringCopy(&(Local_82[54 /*6*/]), "SNP_IMG_1_0", 24);
		StringCopy(&(Local_1193[54 /*6*/]), "SCLUB_2", 24);
		StringCopy(&(Local_82[55 /*6*/]), "SNP_IMG_1_1", 24);
		StringCopy(&(Local_1193[55 /*6*/]), "SCLUB_2", 24);
		StringCopy(&(Local_82[56 /*6*/]), "SNP_IMG_1_2", 24);
		StringCopy(&(Local_1193[56 /*6*/]), "SCLUB_2", 24);
		StringCopy(&(Local_82[57 /*6*/]), "SNP_IMG_1_3", 24);
		StringCopy(&(Local_1193[57 /*6*/]), "SCLUB_2", 24);
		StringCopy(&(Local_82[58 /*6*/]), "SNP_IMG_1_4", 24);
		StringCopy(&(Local_1193[58 /*6*/]), "SCLUB_2", 24);
		StringCopy(&(Local_82[59 /*6*/]), "SNP_IMG_1_5", 24);
		StringCopy(&(Local_1193[59 /*6*/]), "SCLUB_2", 24);
		StringCopy(&(Local_82[60 /*6*/]), "SNP_IMG_1_6", 24);
		StringCopy(&(Local_1193[60 /*6*/]), "SCLUB_2", 24);
		StringCopy(&(Local_82[61 /*6*/]), "SNP_IMG_1_7", 24);
		StringCopy(&(Local_1193[61 /*6*/]), "SCLUB_2", 24);
		StringCopy(&(Local_82[62 /*6*/]), "SNP_IMG_1_8", 24);
		StringCopy(&(Local_1193[62 /*6*/]), "SCLUB_2", 24);
		StringCopy(&(Local_82[64 /*6*/]), "SNP_IMG_1_9", 24);
		StringCopy(&(Local_1193[64 /*6*/]), "SCLUB_2", 24);
		StringCopy(&(Local_82[65 /*6*/]), "SNP_IMG_2_0", 24);
		StringCopy(&(Local_1193[65 /*6*/]), "SCLUB_3", 24);
		StringCopy(&(Local_82[66 /*6*/]), "SNP_IMG_2_1", 24);
		StringCopy(&(Local_1193[66 /*6*/]), "SCLUB_3", 24);
		StringCopy(&(Local_82[67 /*6*/]), "SNP_IMG_2_2", 24);
		StringCopy(&(Local_1193[67 /*6*/]), "SCLUB_3", 24);
		StringCopy(&(Local_82[68 /*6*/]), "SNP_IMG_2_3", 24);
		StringCopy(&(Local_1193[68 /*6*/]), "SCLUB_3", 24);
		StringCopy(&(Local_82[69 /*6*/]), "SNP_IMG_2_4", 24);
		StringCopy(&(Local_1193[69 /*6*/]), "SCLUB_3", 24);
		StringCopy(&(Local_82[70 /*6*/]), "SNP_IMG_2_5", 24);
		StringCopy(&(Local_1193[70 /*6*/]), "SCLUB_3", 24);
		StringCopy(&(Local_82[71 /*6*/]), "SNP_IMG_2_6", 24);
		StringCopy(&(Local_1193[71 /*6*/]), "SCLUB_3", 24);
		StringCopy(&(Local_82[72 /*6*/]), "SNP_IMG_2_7", 24);
		StringCopy(&(Local_1193[72 /*6*/]), "SCLUB_3", 24);
		StringCopy(&(Local_82[73 /*6*/]), "SNP_IMG_2_8", 24);
		StringCopy(&(Local_1193[73 /*6*/]), "SCLUB_3", 24);
		StringCopy(&(Local_82[74 /*6*/]), "SNP_IMG_2_9", 24);
		StringCopy(&(Local_1193[74 /*6*/]), "SCLUB_3", 24);
	}
	else if (func_71(PLAYER::PLAYER_ID()) == 14)
	{
		StringCopy(&(Local_82[44 /*6*/]), "GBC_TM_TC100", 24);
		StringCopy(&(Local_1193[44 /*6*/]), "VC_TC_OBSERVCCTV_0", 24);
		StringCopy(&(Local_82[45 /*6*/]), "GBC_TM_TC101", 24);
		StringCopy(&(Local_1193[45 /*6*/]), "VC_TC_OBSERVCCTV_0", 24);
		StringCopy(&(Local_82[46 /*6*/]), "GBC_TM_TC102", 24);
		StringCopy(&(Local_1193[46 /*6*/]), "VC_TC_OBSERVCCTV_0", 24);
		StringCopy(&(Local_82[47 /*6*/]), "GBC_TM_TC103", 24);
		StringCopy(&(Local_1193[47 /*6*/]), "VC_TC_OBSERVCCTV_0", 24);
		StringCopy(&(Local_82[48 /*6*/]), "GBC_TM_TC104", 24);
		StringCopy(&(Local_1193[48 /*6*/]), "VC_TC_OBSERVCCTV_0", 24);
		StringCopy(&(Local_82[49 /*6*/]), "GBC_TM_TC105", 24);
		StringCopy(&(Local_1193[49 /*6*/]), "VC_TC_OBSERVCCTV_0", 24);
		StringCopy(&(Local_82[50 /*6*/]), "GBC_TM_TC110", 24);
		StringCopy(&(Local_1193[50 /*6*/]), "VC_TC_VEHICLECCTV", 24);
		StringCopy(&(Local_82[51 /*6*/]), "GBC_TM_TC111", 24);
		StringCopy(&(Local_1193[51 /*6*/]), "VC_TC_CASINOCCTV", 24);
		StringCopy(&(Local_82[52 /*6*/]), "GBC_TM_TC120", 24);
		StringCopy(&(Local_1193[52 /*6*/]), "VC_TC_VEHICLECCTV", 24);
		StringCopy(&(Local_82[53 /*6*/]), "GBC_TM_TC121", 24);
		StringCopy(&(Local_1193[53 /*6*/]), "VC_TC_CASINOCCTV", 24);
		StringCopy(&(Local_82[54 /*6*/]), "GBC_TM_TC130", 24);
		StringCopy(&(Local_1193[54 /*6*/]), "VC_TC_CASINOCCTV", 24);
		StringCopy(&(Local_82[55 /*6*/]), "GBC_TM_TC140", 24);
		StringCopy(&(Local_1193[55 /*6*/]), "VC_TC_CASINOCCTV", 24);
		StringCopy(&(Local_82[56 /*6*/]), "GBC_TM_TC200", 24);
		StringCopy(&(Local_1193[56 /*6*/]), "VC_TC_UNIVERCCTV", 24);
		StringCopy(&(Local_82[57 /*6*/]), "GBC_TM_TC201", 24);
		StringCopy(&(Local_1193[57 /*6*/]), "VC_TC_UNIVERCCTV", 24);
		StringCopy(&(Local_82[58 /*6*/]), "GBC_TM_TC202", 24);
		StringCopy(&(Local_1193[58 /*6*/]), "VC_TC_UNIVERCCTV", 24);
		StringCopy(&(Local_82[59 /*6*/]), "GBC_TM_TC203", 24);
		StringCopy(&(Local_1193[59 /*6*/]), "VC_TC_UNIVERCCTV", 24);
		StringCopy(&(Local_82[60 /*6*/]), "GBC_TM_TC204", 24);
		StringCopy(&(Local_1193[60 /*6*/]), "VC_TC_UNIVERCCTV", 24);
		StringCopy(&(Local_82[61 /*6*/]), "GBC_TM_TC205", 24);
		StringCopy(&(Local_1193[61 /*6*/]), "VC_TC_UNIVERCCTV", 24);
		StringCopy(&(Local_82[62 /*6*/]), "GBC_TM_TC210", 24);
		StringCopy(&(Local_1193[62 /*6*/]), "VC_TC_VEHICLECCTV", 24);
		StringCopy(&(Local_82[63 /*6*/]), "GBC_TM_TC211", 24);
		StringCopy(&(Local_1193[63 /*6*/]), "VC_TC_CASINOCCTV", 24);
		StringCopy(&(Local_82[64 /*6*/]), "GBC_TM_TC220", 24);
		StringCopy(&(Local_1193[64 /*6*/]), "VC_TC_VEHICLECCTV", 24);
		StringCopy(&(Local_82[65 /*6*/]), "GBC_TM_TC221", 24);
		StringCopy(&(Local_1193[65 /*6*/]), "VC_TC_CASINOCCTV", 24);
		StringCopy(&(Local_82[66 /*6*/]), "GBC_TM_TC230", 24);
		StringCopy(&(Local_1193[66 /*6*/]), "VC_TC_CASINOCCTV", 24);
		StringCopy(&(Local_82[67 /*6*/]), "GBC_TM_TC240", 24);
		StringCopy(&(Local_1193[67 /*6*/]), "VC_TC_CASINOCCTV", 24);
	}
	else if (func_70(PLAYER::PLAYER_ID()) == 30)
	{
		StringCopy(&(Local_82[44 /*6*/]), "CSH_TXT_MD_01M", 24);
		StringCopy(&(Local_1193[44 /*6*/]), "heist3_prep_maid01", 24);
		StringCopy(&(Local_82[45 /*6*/]), "CSH_TXT_MD_02M", 24);
		StringCopy(&(Local_1193[45 /*6*/]), "heist3_prep_maid02", 24);
	}
	else if (func_70(PLAYER::PLAYER_ID()) == 32)
	{
		StringCopy(&(Local_82[44 /*6*/]), "CSHT_IMC_00M", 24);
		StringCopy(&(Local_1193[44 /*6*/]), "heist3_cashier1", 24);
		StringCopy(&(Local_82[45 /*6*/]), "CSHT_IMC_10M", 24);
		StringCopy(&(Local_1193[45 /*6*/]), "heist3_cashier2", 24);
		StringCopy(&(Local_82[46 /*6*/]), "CSHT_IMC_20M", 24);
		StringCopy(&(Local_1193[46 /*6*/]), "heist3_cashier3", 24);
		StringCopy(&(Local_82[47 /*6*/]), "CSHT_IMC_30M", 24);
		StringCopy(&(Local_1193[47 /*6*/]), "heist3_cashier4", 24);
	}
	else if (func_69(PLAYER::PLAYER_ID()) == 17)
	{
		StringCopy(&(Local_82[44 /*6*/]), "ILHTEXT_SFE00M", 24);
		StringCopy(&(Local_1193[44 /*6*/]), "heist4_sec_guard", 24);
	}
	else if (func_68(PLAYER::PLAYER_ID()) == 4)
	{
		StringCopy(&(Local_82[44 /*6*/]), "TR_TXT_CV1", 24);
		StringCopy(&(Local_1193[44 /*6*/]), "TUNER_TEXT_IMG_VIRUS", 24);
		StringCopy(&(Local_82[45 /*6*/]), "TR_TXT_CV2", 24);
		StringCopy(&(Local_1193[45 /*6*/]), "TUNER_TEXT_IMG_VIRUS_02", 24);
		StringCopy(&(Local_82[46 /*6*/]), "TR_TXT_CV3", 24);
		StringCopy(&(Local_1193[46 /*6*/]), "TUNER_TEXT_IMG_VIRUS_03", 24);
	}
	else if (func_68(PLAYER::PLAYER_ID()) == 11)
	{
		StringCopy(&(Local_82[44 /*6*/]), "ROBTEXT_IAA00M", 24);
		StringCopy(&(Local_1193[44 /*6*/]), "TUNER_TEXT_IMG_IAA", 24);
	}
	else if (func_67(PLAYER::PLAYER_ID()) == 4)
	{
		StringCopy(&(Local_82[44 /*6*/]), "FXR_TXT_WI1", 24);
		StringCopy(&(Local_1193[44 /*6*/]), "FXR_WAYIN", 24);
	}
	else if (func_66(PLAYER::PLAYER_ID()) == 4)
	{
		StringCopy(&(Local_82[44 /*6*/]), "DL_TXT_PHOTO1", 24);
		StringCopy(&(Local_1193[44 /*6*/]), "UPDT2_2022_TEXT_IMG_1", 24);
		StringCopy(&(Local_82[45 /*6*/]), "DL_TXT_PHOTO2", 24);
		StringCopy(&(Local_1193[45 /*6*/]), "UPDT2_2022_TEXT_IMG_2", 24);
		StringCopy(&(Local_82[46 /*6*/]), "DL_TXT_PHOTO3", 24);
		StringCopy(&(Local_1193[46 /*6*/]), "UPDT2_2022_TEXT_IMG_3", 24);
	}
	else if (func_65(PLAYER::PLAYER_ID()) == 1)
	{
		StringCopy(&(Local_82[44 /*6*/]), "S23_SOAD_TXT0", 24);
		StringCopy(&(Local_1193[44 /*6*/]), "UPDT1_2023_TEXT_IMG_1", 24);
		StringCopy(&(Local_82[45 /*6*/]), "S23_SOAD_TXT1", 24);
		StringCopy(&(Local_1193[45 /*6*/]), "UPDT1_2023_TEXT_IMG_2", 24);
		StringCopy(&(Local_82[46 /*6*/]), "S23_SOAD_TXT2", 24);
		StringCopy(&(Local_1193[46 /*6*/]), "UPDT1_2023_TEXT_IMG_3", 24);
	}
	else if (func_65(PLAYER::PLAYER_ID()) == 0)
	{
		StringCopy(&(Local_82[44 /*6*/]), "ACR_TXT_IMG", 24);
		StringCopy(&(Local_1193[44 /*6*/]), "UPDT1_2023_TEXT_IMG_4", 24);
	}
	else if (func_64(PLAYER::PLAYER_ID()) == 4)
	{
		StringCopy(&(Local_82[44 /*6*/]), "SALV_SUBF_T_HOS", 24);
		StringCopy(&(Local_1193[44 /*6*/]), "UPDT2_2023_TEXT_IMG_1", 24);
	}
	else if (func_63(PLAYER::PLAYER_ID()) == 0)
	{
		StringCopy(&(Local_82[44 /*6*/]), "BTFM_TXT_00", 24);
		StringCopy(&(Local_1193[44 /*6*/]), "UPDT1_24_TEXT_ARCADE", 24);
		StringCopy(&(Local_82[45 /*6*/]), "BTFM_TXT_01", 24);
		StringCopy(&(Local_1193[45 /*6*/]), "UPDT1_24_TEXT_ARCADE", 24);
		StringCopy(&(Local_82[46 /*6*/]), "BTFM_TXT_02", 24);
		StringCopy(&(Local_1193[46 /*6*/]), "UPDT1_24_TEXT_ARCADE", 24);
	}
	else if (func_63(PLAYER::PLAYER_ID()) == 1)
	{
		StringCopy(&(Local_82[44 /*6*/]), "BTFM_TXT_10", 24);
		StringCopy(&(Local_1193[44 /*6*/]), "UPDT1_24_TEXT_CCTV", 24);
		StringCopy(&(Local_82[45 /*6*/]), "BTFM_TXT_11", 24);
		StringCopy(&(Local_1193[45 /*6*/]), "UPDT1_24_TEXT_CCTV", 24);
		StringCopy(&(Local_82[46 /*6*/]), "BTFM_TXT_12", 24);
		StringCopy(&(Local_1193[46 /*6*/]), "UPDT1_24_TEXT_CCTV", 24);
	}
	else if (func_63(PLAYER::PLAYER_ID()) == 2)
	{
		StringCopy(&(Local_82[44 /*6*/]), "BTFM_TXT_20", 24);
		StringCopy(&(Local_1193[44 /*6*/]), "UPDT1_24_TEXT_CLUB", 24);
		StringCopy(&(Local_82[45 /*6*/]), "BTFM_TXT_21", 24);
		StringCopy(&(Local_1193[45 /*6*/]), "UPDT1_24_TEXT_CLUB", 24);
		StringCopy(&(Local_82[46 /*6*/]), "BTFM_TXT_22", 24);
		StringCopy(&(Local_1193[46 /*6*/]), "UPDT1_24_TEXT_CLUB", 24);
	}
	else if (func_63(PLAYER::PLAYER_ID()) == 3)
	{
		StringCopy(&(Local_82[44 /*6*/]), "BTFM_TXT_30", 24);
		StringCopy(&(Local_1193[44 /*6*/]), "UPDT1_24_TEXT_INTIM", 24);
		StringCopy(&(Local_82[45 /*6*/]), "BTFM_TXT_31", 24);
		StringCopy(&(Local_1193[45 /*6*/]), "UPDT1_24_TEXT_INTIM", 24);
		StringCopy(&(Local_82[46 /*6*/]), "BTFM_TXT_32", 24);
		StringCopy(&(Local_1193[46 /*6*/]), "UPDT1_24_TEXT_INTIM", 24);
	}
	else if (func_63(PLAYER::PLAYER_ID()) == 4)
	{
		StringCopy(&(Local_82[44 /*6*/]), "BTFM_TXT_40", 24);
		StringCopy(&(Local_1193[44 /*6*/]), "UPDT1_24_TEXT_PRISON", 24);
		StringCopy(&(Local_82[45 /*6*/]), "BTFM_TXT_41", 24);
		StringCopy(&(Local_1193[45 /*6*/]), "UPDT1_24_TEXT_PRISON", 24);
		StringCopy(&(Local_82[46 /*6*/]), "BTFM_TXT_42", 24);
		StringCopy(&(Local_1193[46 /*6*/]), "UPDT1_24_TEXT_PRISON", 24);
	}
	else if (func_63(PLAYER::PLAYER_ID()) == 5)
	{
		StringCopy(&(Local_82[44 /*6*/]), "BTFM_TXT_50", 24);
		StringCopy(&(Local_1193[44 /*6*/]), "UPDT1_24_TEXT_ROBBERY", 24);
		StringCopy(&(Local_82[45 /*6*/]), "BTFM_TXT_51", 24);
		StringCopy(&(Local_1193[45 /*6*/]), "UPDT1_24_TEXT_ROBBERY", 24);
		StringCopy(&(Local_82[46 /*6*/]), "BTFM_TXT_52", 24);
		StringCopy(&(Local_1193[46 /*6*/]), "UPDT1_24_TEXT_ROBBERY", 24);
	}
	else if (func_62(PLAYER::PLAYER_ID()) == 338)
	{
		StringCopy(&(Local_82[44 /*6*/]), "DLYBTTXTMAR20", 24);
		StringCopy(&(Local_1193[44 /*6*/]), "UPDT1_24_TEXT_BOUNTY_0", 24);
		StringCopy(&(Local_82[45 /*6*/]), "DLYBTTXTMAR21", 24);
		StringCopy(&(Local_1193[45 /*6*/]), "UPDT1_24_TEXT_BOUNTY_1", 24);
		StringCopy(&(Local_82[46 /*6*/]), "DLYBTTXTMAR22", 24);
		StringCopy(&(Local_1193[46 /*6*/]), "UPDT1_24_TEXT_BOUNTY_2", 24);
		StringCopy(&(Local_82[47 /*6*/]), "DLYBTTXTMAR23", 24);
		StringCopy(&(Local_1193[47 /*6*/]), "UPDT1_24_TEXT_BOUNTY_3", 24);
		StringCopy(&(Local_82[48 /*6*/]), "DLYBTTXTMAR24", 24);
		StringCopy(&(Local_1193[48 /*6*/]), "UPDT1_24_TEXT_BOUNTY_4", 24);
		StringCopy(&(Local_82[49 /*6*/]), "DLYBTTXTMAR25", 24);
		StringCopy(&(Local_1193[49 /*6*/]), "UPDT1_24_TEXT_BOUNTY_5", 24);
		StringCopy(&(Local_82[50 /*6*/]), "DLYBTTXTMAR26", 24);
		StringCopy(&(Local_1193[50 /*6*/]), "UPDT1_24_TEXT_BOUNTY_6", 24);
		StringCopy(&(Local_82[51 /*6*/]), "DLYBTTXTMAR27", 24);
		StringCopy(&(Local_1193[51 /*6*/]), "UPDT1_24_TEXT_BOUNTY_7", 24);
		StringCopy(&(Local_82[52 /*6*/]), "DLYBTTXTMAR28", 24);
		StringCopy(&(Local_1193[52 /*6*/]), "UPDT1_24_TEXT_BOUNTY_8", 24);
		StringCopy(&(Local_82[53 /*6*/]), "DLYBTTXTMAR29", 24);
		StringCopy(&(Local_1193[53 /*6*/]), "UPDT1_24_TEXT_BOUNTY_9", 24);
		StringCopy(&(Local_82[54 /*6*/]), "DLYBTTXTMAR210", 24);
		StringCopy(&(Local_1193[54 /*6*/]), "UPDT1_24_TEXT_BOUNTY_10", 24);
		StringCopy(&(Local_82[55 /*6*/]), "DLYBTTXTMAR211", 24);
		StringCopy(&(Local_1193[55 /*6*/]), "UPDT1_24_TEXT_BOUNTY_11", 24);
		StringCopy(&(Local_82[56 /*6*/]), "DLYBTTXTMAR212", 24);
		StringCopy(&(Local_1193[56 /*6*/]), "UPDT1_24_TEXT_BOUNTY_12", 24);
		StringCopy(&(Local_82[57 /*6*/]), "DLYBTTXTMAR213", 24);
		StringCopy(&(Local_1193[57 /*6*/]), "UPDT1_24_TEXT_BOUNTY_13", 24);
		StringCopy(&(Local_82[58 /*6*/]), "DLYBTTXTMAR214", 24);
		StringCopy(&(Local_1193[58 /*6*/]), "UPDT1_24_TEXT_BOUNTY_14", 24);
	}
	else if (func_61(PLAYER::PLAYER_ID()) == 0)
	{
		StringCopy(&(Local_82[44 /*6*/]), "EMP_TXT_CONT", 24);
		StringCopy(&(Local_1193[44 /*6*/]), "UPDT2_24_TEXT_EMP", 24);
	}
	else if (func_61(PLAYER::PLAYER_ID()) == 2)
	{
		StringCopy(&(Local_82[44 /*6*/]), "SCAN_TXT_TARG", 24);
		StringCopy(&(Local_1193[44 /*6*/]), "UPDT2_24_TEXT_SCAN", 24);
	}
	else if (func_56(PLAYER::PLAYER_ID()) == 2)
	{
		StringCopy(&(Local_82[44 /*6*/]), "TYCSC_TXT_1a", 24);
		StringCopy(&(Local_1193[44 /*6*/]), "UPDT1_25_TEXT_CAR_WASH", 24);
		StringCopy(&(Local_82[45 /*6*/]), "TYCSC_TXT_1b", 24);
		StringCopy(&(Local_1193[45 /*6*/]), "UPDT1_25_TEXT_CAR_WASH", 24);
		StringCopy(&(Local_82[46 /*6*/]), "TYCSC_TXT_1c", 24);
		StringCopy(&(Local_1193[46 /*6*/]), "UPDT1_25_TEXT_CAR_WASH", 24);
	}
}

int func_56(int iParam0)
{
	if (func_62(iParam0) == 354)
	{
		return func_57(iParam0, 354);
	}
	return -1;
}

int func_57(int iParam0, int iParam1)
{
	if (func_62(iParam0) == iParam1)
	{
		return func_58(iParam0);
	}
	return -1;
}

int func_58(int iParam0)
{
	if (func_59(iParam0, 0))
	{
		return Global_1892653[iParam0 /*615*/].f_10.f_183;
	}
	return -1;
}

int func_59(int iParam0, int iParam1)
{
	if (func_60(iParam0))
	{
		if (Global_1892653[iParam0 /*615*/].f_10.f_34 != -1 || (iParam1 && Global_1892653[iParam0 /*615*/].f_10.f_33 != -1))
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
	if (func_62(iParam0) == 349)
	{
		return func_57(iParam0, 349);
	}
	return -1;
}

int func_62(int iParam0)
{
	if (func_60(iParam0))
	{
		if (func_59(iParam0, 0))
		{
			return Global_1892653[iParam0 /*615*/].f_10.f_34;
		}
	}
	return -1;
}

int func_63(int iParam0)
{
	if (func_62(iParam0) == 337)
	{
		return func_57(iParam0, 337);
	}
	return -1;
}

int func_64(int iParam0)
{
	switch (func_62(iParam0))
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

int func_65(int iParam0)
{
	if (func_62(iParam0) == 317)
	{
		return func_57(iParam0, 317);
	}
	return -1;
}

int func_66(int iParam0)
{
	if (func_62(iParam0) == 307)
	{
		return func_57(iParam0, 307);
	}
	return -1;
}

int func_67(int iParam0)
{
	if (func_62(iParam0) == 264)
	{
		return func_58(iParam0);
	}
	return -1;
}

int func_68(int iParam0)
{
	if (func_62(iParam0) == 271)
	{
		return func_58(iParam0);
	}
	return -1;
}

int func_69(int iParam0)
{
	if (func_62(iParam0) == 256)
	{
		return func_58(iParam0);
	}
	return -1;
}

int func_70(int iParam0)
{
	if (func_62(iParam0) == 158)
	{
		return func_58(iParam0);
	}
	return -1;
}

int func_71(int iParam0)
{
	if (func_62(iParam0) == 243)
	{
		return func_58(iParam0);
	}
	return -1;
}

int func_72(int iParam0)
{
	if (func_62(iParam0) == 237 || func_62(iParam0) == 250)
	{
		return func_58(iParam0);
	}
	return -1;
}

void func_73()
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand")) == 0)
	{
		func_74(0);
	}
	if (iLocal_2457)
	{
		GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(&uLocal_66);
	}
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_74(int iParam0)
{
	if (func_79())
	{
		return;
	}
	if (Global_21842)
	{
		if (func_78())
		{
			func_76(1, 1);
		}
		else
		{
			func_76(0, 0);
		}
	}
	if (Global_21610.f_1 == 10 || Global_21610.f_1 == 9)
	{
		MISC::SET_BIT(&Global_9464, 16);
	}
	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
	}
	Global_22983 = 5;
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&Global_9463, 30);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_9463, 30);
	}
	if (!func_75())
	{
		Global_21610.f_1 = 3;
	}
}

int func_75()
{
	if (Global_21610.f_1 == 1 || Global_21610.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_76(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_77(0))
		{
			Global_21842 = 1;
			if (bParam1)
			{
				MOBILE::GET_MOBILE_PHONE_POSITION(&Global_21547);
			}
			Global_21538 = { Global_21556[Global_21555 /*3*/] };
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_21538);
		}
	}
	else if (Global_21842 == 1)
	{
		Global_21842 = 0;
		Global_21538 = { Global_21563[Global_21555 /*3*/] };
		if (bParam1)
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_21547);
		}
		else
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_21538);
		}
	}
}

int func_77(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_21610.f_1 > 3)
		{
			if (BitTest(Global_9463, 14))
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
	if (Global_21610.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

bool func_78()
{
	return BitTest(Global_1964145, 5);
}

bool func_79()
{
	return BitTest(Global_1964145, 19);
}

