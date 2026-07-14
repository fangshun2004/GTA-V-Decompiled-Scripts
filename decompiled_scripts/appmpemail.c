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
	int iLocal_35 = 0;
	int iLocal_36[12] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
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
	struct<16> Local_63 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<6> Local_79[60];
	struct<16> Local_440[60];
	int iLocal_1401 = 0;
	struct<3> Local_1402 = { 0, 0, 0 } ;
	struct<3> Local_1405 = { 0, 0, 0 } ;
	int iLocal_1408 = 0;
	int iLocal_1409 = 0;
	bool bLocal_1410 = 0;
	int iLocal_1411 = 0;
	int iLocal_1412 = 0;
	struct<395> Local_1413 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
		func_68();
	}
	func_67();
	Global_24089 = 0;
	Global_114963.f_14060[Global_21649 /*20*/].f_18 = 0;
	Global_21881 = 0;
	func_66();
	func_65(Global_21630, "SET_DATA_SLOT_EMPTY", 8f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_61();
	func_59();
	if (Global_21649.f_1 > 3)
	{
		Global_21649.f_1 = 7;
	}
	iLocal_60 = MISC::GET_GAME_TIMER();
	Global_21653 = 0;
	MOBILE::GET_MOBILE_PHONE_POSITION(&Local_1405);
	Local_1402 = { Local_1405 };
	Local_1402.f_0 = (Local_1402.f_0 - 10f);
	Local_1402.f_1 = (Local_1402.f_1 + 20f);
	Global_24056 = 0;
	Global_24057 = 1;
	while (true)
	{
		SYSTEM::WAIT(0);
		if (Global_24057 == 0 && Global_24056 == 1)
		{
			func_58();
		}
		if (Global_24057 == 1 && Global_24056 == 0)
		{
			func_53();
		}
		if (iLocal_59 == 0)
		{
			iLocal_61 = MISC::GET_GAME_TIMER();
			if ((iLocal_61 - iLocal_60) > 500)
			{
				iLocal_59 = 1;
			}
		}
		if ((Global_21649.f_1 != 9 && Global_24057 == 0) && Global_24056 == 0)
		{
			switch (Global_21649.f_1)
			{
				case 7:
					if (Global_24089 == 0)
					{
						if (Global_2740404 == 0)
						{
							func_52();
							func_45();
						}
					}
					break;
				
				case 8:
					if (Global_24089 == 1)
					{
						func_11();
						func_5();
					}
					break;
				
				default:
					break;
			}
			if (Global_24089 == 0)
			{
				if (func_4())
				{
					Global_24056 = 1;
				}
			}
			else if (func_3(2, Global_21617, 0) || BitTest(Global_9503, 12))
			{
				if (MISC::ARE_STRINGS_EQUAL(&(Global_4521354[iLocal_53 /*296*/]), "CELL_FINV"))
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
						func_68();
					}
					func_65(Global_21630, "SET_DATA_SLOT_EMPTY", 8f, -1082130432, -1082130432, -1082130432, -1082130432);
					func_61();
					func_59();
					if (Global_4521354[iLocal_53 /*296*/].f_29 > 0)
					{
						if (Global_4521354[iLocal_53 /*296*/].f_31 == 1)
						{
							Global_4521354[iLocal_53 /*296*/].f_29 = 4;
							Global_4521354[iLocal_53 /*296*/].f_24 = 1;
						}
						else
						{
							Global_4521354[iLocal_53 /*296*/].f_24 = 1;
						}
					}
				}
			}
		}
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand")) == 0)
		{
			func_68();
		}
		if (func_1())
		{
			func_68();
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
	if (iLocal_56)
	{
		if (SYSTEM::TIMERA() > 50)
		{
			iLocal_56 = 0;
		}
	}
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2))
	{
		if (func_3(2, 181, 0))
		{
			func_9();
		}
		if (func_3(2, 180, 0))
		{
			func_6();
		}
	}
	if (iLocal_56 == 0)
	{
		if (func_3(2, Global_21625, 0))
		{
			func_9();
			iLocal_56 = 1;
			SYSTEM::SETTIMERA(0);
		}
		if (func_3(2, Global_21626, 0))
		{
			func_6();
			iLocal_56 = 1;
			SYSTEM::SETTIMERA(0);
		}
	}
}

void func_6()
{
	func_65(Global_21630, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(3), -1082130432, -1082130432, -1082130432, -1082130432);
	AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_21638, true);
	func_7();
}

void func_7()
{
	if (func_8())
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

int func_8()
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

void func_9()
{
	func_65(Global_21630, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(1), -1082130432, -1082130432, -1082130432, -1082130432);
	AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_21638, true);
	func_10();
}

void func_10()
{
	if (func_8())
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

void func_11()
{
	func_12();
}

void func_12()
{
	if (Global_4521354[iLocal_53 /*296*/].f_24 == 1)
	{
		if (Global_21627 == 0)
		{
			if (PAD::IS_CONTROL_PRESSED(2, Global_21620))
			{
				func_2();
				Global_21627 = 1;
				func_38();
				if (Global_4521354[iLocal_53 /*296*/].f_27 == 1)
				{
					Global_4521354[iLocal_53 /*296*/].f_291[0] = 0;
					Global_4521354[iLocal_53 /*296*/].f_291[1] = 0;
					Global_4521354[iLocal_53 /*296*/].f_291[2] = 0;
				}
				else
				{
					Global_4521354[iLocal_53 /*296*/].f_291[Global_21649] = 0;
				}
				if (func_37(iLocal_53))
				{
				}
				else
				{
					Global_4521354[iLocal_53 /*296*/].f_24 = 0;
					Global_4521354[iLocal_53 /*296*/].f_28 = 0;
				}
				HUD::THEFEED_REMOVE_ITEM(Global_4521354[iLocal_53 /*296*/].f_16);
				func_65(Global_21630, "SET_DATA_SLOT_EMPTY", 8f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_61();
				if (iLocal_51 > 0)
				{
					iLocal_51 = (iLocal_51 - 1);
				}
				func_59();
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
			if (iLocal_55 == 1)
			{
				if (Global_21649.f_1 > 3)
				{
					StringCopy(&Global_77380, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&Global_24064), 64);
					if (MISC::ARE_STRINGS_EQUAL(&Global_77380, "HARDCODED_4207156"))
					{
						Global_21649.f_1 = 3;
						Global_1970019 = 1;
					}
					else
					{
						Global_77511 = 7;
						MISC::SET_BIT(&Global_9503, 10);
						Global_21649.f_1 = 6;
					}
				}
				func_68();
			}
		}
	}
	if (Global_4521354[iLocal_53 /*296*/].f_31 == 1)
	{
		if (Global_21627 == 0)
		{
			if (func_3(2, Global_21621, 0))
			{
				func_35();
				Global_21627 = 1;
				Global_4521354[iLocal_53 /*296*/].f_29 = 2;
				Global_4521354[iLocal_53 /*296*/].f_24 = 1;
				Global_4521354[iLocal_53 /*296*/].f_31 = 0;
				MISC::CLEAR_BIT(&Global_9502, 17);
				Global_24089 = 0;
				if (Global_21649.f_1 > 3)
				{
					Global_21649.f_1 = 7;
				}
				func_65(Global_21630, "SET_DATA_SLOT_EMPTY", 8f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_61();
				func_59();
			}
		}
	}
	if (Global_21627 == 0 && iLocal_59 == 1)
	{
		if (func_3(2, Global_21618, 0))
		{
			Global_21627 = 1;
			if (Global_4521354[iLocal_53 /*296*/].f_29 > 0)
			{
				func_35();
				Global_4521354[iLocal_53 /*296*/].f_29 = 3;
				Global_4521354[iLocal_53 /*296*/].f_24 = 1;
				Global_24089 = 0;
				if (Global_21649.f_1 > 3)
				{
					Global_21649.f_1 = 7;
				}
				func_65(Global_21630, "SET_DATA_SLOT_EMPTY", 8f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_61();
				func_59();
			}
			else if (Global_4521354[iLocal_53 /*296*/].f_30 == 1)
			{
				func_35();
				Global_8817 = 144;
				if (Global_21649.f_1 > 3)
				{
					Global_21649.f_1 = 10;
					func_33();
				}
				func_32("appContacts");
				Global_21647 = SYSTEM::START_NEW_SCRIPT("appContacts", 4000);
				SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("appContacts");
				Global_8817 = Global_4521354[iLocal_53 /*296*/].f_17;
				if (func_31(Global_8817, Global_21649) == 0)
				{
					func_30(Global_21630, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(3), -1f, -1f, &(Global_118[Global_8817 /*10*/].f_4), "CELL_300", "CELL_211", "CELL_195", 0);
				}
				else
				{
					func_30(Global_21630, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(3), -1f, -1f, &(Global_2349[Global_8817 /*29*/].f_3), &(Global_2349[Global_8817 /*29*/].f_7), "CELL_211", &(Global_2349[Global_8817 /*29*/].f_3), 0);
				}
				func_13();
				func_68();
			}
		}
	}
}

void func_13()
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
			func_65(Global_21630, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_28(Global_10124);
			if (Global_10124 == 1)
			{
				func_65(Global_21630, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_21653), -1082130432, -1082130432, -1082130432);
				Global_21629 = Global_21653;
			}
			else
			{
				func_65(Global_21630, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_21654), -1082130432, -1082130432, -1082130432);
				Global_21629 = Global_21654;
			}
			if (Global_21637)
			{
				func_30(Global_21630, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
				func_30(Global_21630, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
			}
			else
			{
				func_30(Global_21630, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
				func_30(Global_21630, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_21884 == 0)
			{
				func_30(Global_21630, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				MISC::CLEAR_BIT(&Global_9502, 17);
			}
			else if (Global_80337)
			{
				func_30(Global_21630, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				MISC::CLEAR_BIT(&Global_9502, 17);
			}
			else
			{
				if (Global_21883 == 1)
				{
					if (Global_21637)
					{
						func_30(Global_21630, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
					}
					else
					{
						func_30(Global_21630, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else if (Global_21637)
				{
					func_30(Global_21630, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
				}
				else
				{
					func_30(Global_21630, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				MISC::SET_BIT(&Global_9502, 17);
			}
			if (Global_80337)
			{
				Global_21629 = Global_21653;
				if (func_23() && BitTest(Global_9504, 9))
				{
					func_18(0);
				}
				func_65(Global_21630, "DISPLAY_VIEW", 4f, SYSTEM::TO_FLOAT(Global_21629), -1082130432, -1082130432, -1082130432);
				func_65(Global_21630, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_21629), -1082130432, -1082130432, -1082130432);
			}
			break;
		
		case 7:
			break;
		
		case 10:
			func_65(Global_21630, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_30(Global_21630, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_30(Global_21630, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			MISC::CLEAR_BIT(&Global_9502, 17);
			if (BitTest(Global_9502, 20))
			{
				func_30(Global_21630, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_21637)
			{
				func_30(Global_21630, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_21592)
				{
					func_30(Global_21630, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_30(Global_21630, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			break;
		
		case 9:
			if (Global_21648 == 1)
			{
				func_17();
				func_65(Global_21630, "SET_THEME", SYSTEM::TO_FLOAT(Global_114963.f_14060[Global_21649 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				if (Global_23036)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21630, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(4);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_CONDFON");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_23038);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					func_16("CELL_300");
					func_16("CELL_217");
					func_16("CELL_217");
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				else if (func_31(Global_8817, Global_21649) == 0)
				{
					func_30(Global_21630, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(2), -1f, -1f, &(Global_118[Global_8817 /*10*/].f_4), "CELL_300", "CELL_217", "CELL_195", 0);
				}
				else
				{
					func_30(Global_21630, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(2), -1f, -1f, &(Global_2349[Global_8817 /*29*/].f_3), &(Global_2349[Global_8817 /*29*/].f_7), "CELL_217", &(Global_2349[Global_8817 /*29*/].f_3), 0);
				}
				func_65(Global_21630, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			else if (Global_23023 == 4 || Global_23023 == 3)
			{
				func_65(Global_21630, "SET_THEME", SYSTEM::TO_FLOAT(Global_114963.f_14060[Global_21649 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				func_17();
				if (Global_23036)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21630, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(4);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_CONDFON");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_23038);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					func_16("CELL_300");
					func_16("CELL_219");
					func_16("CELL_219");
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
					if (func_31(Global_8817, Global_21649) == 0)
					{
						func_65(Global_21630, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_30(Global_21630, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(3), -1f, -1f, &(Global_118[Global_8817 /*10*/].f_4), "CELL_300", &cVar0, "CELL_195", 0);
					}
					else
					{
						func_65(Global_21630, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_30(Global_21630, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(3), -1f, -1f, &(Global_2349[Global_8817 /*29*/].f_3), &(Global_2349[Global_8817 /*29*/].f_7), &cVar0, &(Global_2349[Global_8817 /*29*/].f_3), 0);
					}
				}
				func_65(Global_21630, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			func_14();
			break;
		
		default:
			break;
	}
}

void func_14()
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_21630))
	{
		func_15();
		if (Global_21648 == 1)
		{
			if (Global_21637)
			{
				func_30(Global_21630, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, "CELL_203", 0, 0, 0, 0);
			}
			else
			{
				func_30(Global_21630, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_23070)
			{
				func_30(Global_21630, "SET_SOFT_KEYS", 3f, 0f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (BitTest(Global_9502, 20))
			{
				func_30(Global_21630, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_21637)
			{
				func_30(Global_21630, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_204", 0, 0, 0, 0);
			}
			else
			{
				func_30(Global_21630, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			func_30(Global_21630, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			MISC::CLEAR_BIT(&Global_9502, 17);
		}
		else
		{
			func_30(Global_21630, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_30(Global_21630, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			MISC::CLEAR_BIT(&Global_9502, 17);
			if (BitTest(Global_9502, 20))
			{
				func_30(Global_21630, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_21637)
			{
				func_30(Global_21630, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_21592)
				{
					func_30(Global_21630, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_30(Global_21630, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
		}
	}
}

void func_15()
{
	if (Global_80337)
	{
		func_30(Global_21630, "SET_SOFT_KEYS", 1f, 0f, 9f, -1f, -1f, 0, 0, 0, 0, 0);
		MISC::CLEAR_BIT(&Global_9502, 17);
	}
}

void func_16(char* sParam0)
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

void func_17()
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

void func_18(bool bParam0)
{
	int iVar0;
	
	MISC::SET_BIT(&Global_9504, 9);
	if (bParam0)
	{
		func_65(Global_21630, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
	}
	func_22();
	func_21();
	iVar0 = 0;
	while (iVar0 < 9)
	{
		Global_10050[iVar0] = 0;
		Global_10087[iVar0] = 0;
		iVar0++;
	}
	func_19(10, "CELL_16", 0, "appSettings", 24);
	if (bParam0)
	{
		func_65(Global_21630, "DISPLAY_VIEW", 4f, SYSTEM::TO_FLOAT(Global_21629), -1082130432, -1082130432, -1082130432);
		func_65(Global_21630, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_21629), -1082130432, -1082130432, -1082130432);
	}
}

void func_19(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4)
{
	func_20(iParam0, sParam1, iParam2, sParam3, iParam4, 1, 1, 0, 0);
	Global_10087[iParam2] = 1;
	Global_10050[iParam2] = iParam0;
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21630, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_9509[iParam0 /*15*/].f_4);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_9509[iParam0 /*15*/].f_10);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
	func_16(&(Global_9509[iParam0 /*15*/]));
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(255);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_20(int iParam0, char* sParam1, var uParam2, char* sParam3, var uParam4, int iParam5, int iParam6, int iParam7, int iParam8)
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

void func_21()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		Global_10087[iVar0] = 0;
		iVar0++;
	}
}

void func_22()
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
		func_16(&(Global_9509[10 /*15*/]));
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(225);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		iVar0++;
	}
	func_65(Global_21630, "DISPLAY_VIEW", 4f, SYSTEM::TO_FLOAT(0), -1082130432, -1082130432, -1082130432);
	func_65(Global_21630, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(0), -1082130432, -1082130432, -1082130432);
}

int func_23()
{
	if (func_24())
	{
		return 1;
	}
	return 0;
}

bool func_24()
{
	return (func_25() && !NETWORK::NETWORK_IS_ACTIVITY_SESSION());
}

bool func_25()
{
	return func_26(9539, -1);
}

bool func_26(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = func_27();
	}
	return STATS::GET_PACKED_STAT_BOOL_CODE(iParam0, iParam1);
}

int func_27()
{
	return Global_1574928;
}

void func_28(int iParam0)
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
	func_21();
	iVar0 = 0;
	while (iVar0 < 9)
	{
		iVar1 = 0;
		if (func_29(14))
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
								func_16(&(Global_9509[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar2);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							if (Global_2697067)
							{
								if (iVar1 == 14)
								{
									func_30(Global_21630, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_9509[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_24086), -1f, &(Global_9509[iVar1 /*15*/]), 0, 0, 0, 0);
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
								func_30(Global_21630, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_9509[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_24092), -1f, &(Global_9509[iVar1 /*15*/]), 0, 0, 0, 0);
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
									func_30(Global_21630, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_9509[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar4), -1f, &(Global_9509[iVar1 /*15*/]), 0, 0, 0, 0);
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
									func_30(Global_21630, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_9509[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar6), -1f, &(Global_9509[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_30(Global_21630, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_9509[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_24086), -1f, &(Global_9509[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21630, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_9509[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_16(&(Global_9509[iVar1 /*15*/]));
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
								func_16(&(Global_9509[iVar1 /*15*/]));
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
								func_16(&(Global_9509[iVar1 /*15*/]));
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
								func_16(&(Global_9509[iVar1 /*15*/]));
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
								func_16(&(Global_9509[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(42);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (Global_9509[iVar1 /*15*/].f_10 == 57 && iVar1 == 24)
							{
								iVar9 = 0;
								iVar9 = Global_1882061.f_1;
								func_30(Global_21630, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_9509[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar9), -1f, &(Global_9509[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_30(Global_21630, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_9509[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(0), -1f, &(Global_9509[iVar1 /*15*/]), 0, 0, 0, 0);
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

bool func_29(int iParam0)
{
	return Global_44921 == iParam0;
}

void func_30(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)
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
		func_16(sParam7);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
	{
		func_16(sParam8);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam9))
	{
		func_16(sParam9);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam10))
	{
		func_16(sParam10);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam11))
	{
		func_16(sParam11);
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

int func_31(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_2349[iParam0 /*29*/].f_24[iParam1];
}

void func_32(char* sParam0)
{
	SCRIPT::REQUEST_SCRIPT(sParam0);
	while (!SCRIPT::HAS_SCRIPT_LOADED(sParam0))
	{
		SYSTEM::WAIT(0);
	}
}

void func_33()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 0;
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (func_34() && PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), false))
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

int func_34()
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

void func_35()
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Accept", &Global_21638, true);
		func_36();
	}
}

void func_36()
{
	if (func_8())
	{
		MOBILE::CELL_SET_INPUT(5);
	}
}

int func_37(int iParam0)
{
	if ((Global_114963.f_14150[iParam0 /*104*/].f_99[0] == 1 || Global_114963.f_14150[iParam0 /*104*/].f_99[1] == 1) || Global_114963.f_14150[iParam0 /*104*/].f_99[2] == 1)
	{
		return 1;
	}
	return 0;
}

void func_38()
{
	if (func_29(14))
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
		Global_21649 = func_39();
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

var func_39()
{
	func_40();
	return Global_114963.f_2370.f_539.f_4321;
}

void func_40()
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_43(Global_114963.f_2370.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_42(PLAYER::PLAYER_PED_ID());
			if (func_41(iVar0) && (!func_29(14) || Global_113909))
			{
				if (Global_114963.f_2370.f_539.f_4321 != iVar0 && func_41(Global_114963.f_2370.f_539.f_4321))
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

bool func_41(int iParam0)
{
	return iParam0 < 3;
}

int func_42(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_43(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_43(int iParam0)
{
	if (func_41(iParam0))
	{
		return func_44(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_44(int iParam0)
{
	return Global_2349[iParam0 /*29*/];
}

void func_45()
{
	struct<16> Var0;
	
	if (Global_21627 == 0)
	{
		if ((func_3(2, Global_21618, 0) || Global_4524908 == 1) || Global_24083 == 1)
		{
			if (Global_4524908 == 0 && Global_24083 == 0)
			{
				func_35();
			}
			Global_21627 = 1;
			iLocal_59 = 0;
			func_30(Global_21630, "SET_SOFT_KEYS", 1f, 0f, 11f, -1f, -1f, 0, 0, 0, 0, 0);
			MISC::CLEAR_BIT(&Global_9502, 17);
			iLocal_53 = iLocal_36[iLocal_51];
			if (iLocal_51 == iLocal_50 || iLocal_51 > iLocal_50)
			{
				if (Global_21649.f_1 > 3)
				{
					Global_21649.f_1 = 8;
					Global_24089 = 1;
					iLocal_52 = iLocal_51;
					SOCIALCLUB::SC_EMAIL_GET_EMAIL_AT_INDEX(iLocal_36[iLocal_51], &Local_1413);
				}
				SYSTEM::SETTIMERB(0);
				iLocal_57 = 0;
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21630, "GET_CURRENT_SELECTION");
				iLocal_62 = GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
				while (!GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(iLocal_62) && iLocal_57 == 0)
				{
					SYSTEM::WAIT(0);
					if (SYSTEM::TIMERB() > 2000)
					{
						iLocal_57 = 1;
					}
				}
				func_50();
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21630, "SET_DATA_SLOT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(9);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
				func_16("CELL_1");
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_TO_FIELD");
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(PLAYER::GET_PLAYER_NAME(PLAYER::PLAYER_ID()));
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_FROM_FIELD");
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Local_1413.f_2));
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_EMAIL_BCON");
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Local_1413.f_56[0 /*16*/]));
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Local_1413.f_56[1 /*16*/]));
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Local_1413.f_56[2 /*16*/]));
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Local_1413.f_56[3 /*16*/]));
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Local_1413.f_56[4 /*16*/]));
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Local_1413.f_56[5 /*16*/]));
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Local_1413.f_56[6 /*16*/]));
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Local_1413.f_56[7 /*16*/]));
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Local_1413.f_56[8 /*16*/]));
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Local_1413.f_56[9 /*16*/]));
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_2000");
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Local_1413.f_2));
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				switch (Local_1413.f_393)
				{
					case 0:
						break;
					
					case 1:
						break;
					
					case 2:
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING("EmailAds_Dock_Tease");
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
						break;
					
					case 3:
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING("EmailAds_Warstock");
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
						break;
					
					case 4:
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING("EmailAds_Legendary_Motorsport");
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
						break;
					
					case 5:
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING("EmailAds_LS_Customs");
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
						break;
					
					case 6:
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING("EmailAds_Elitas_Travel");
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
						break;
					
					case 7:
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING("EmailAds_LS_Tourist_Info");
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
						break;
					
					case 8:
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING("emailads_dynasty8");
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
						break;
					
					case 9:
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING("emailads_bennys");
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
						break;
					
					case 10:
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING("emailads_ammunation");
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
						break;
					
					case 11:
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING("emailads_SSSA");
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
						break;
					
					case 12:
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING("emailads_maze_bank");
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
						break;
					
					case 13:
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING("emailads_shark");
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
						break;
					
					case 14:
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING("emailads_RP");
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
						break;
					
					case 15:
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING("emailads_rockstar");
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
						break;
				}
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				func_30(Global_21630, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				func_65(Global_21630, "DISPLAY_VIEW", 9f, -1082130432, -1082130432, -1082130432, -1082130432);
				if (Local_1413.f_394 != -141697331)
				{
					unk_0x69AA35F3F391CDBA(iLocal_36[iLocal_51], joaat("opened"));
				}
				if (iLocal_51 == iLocal_50)
				{
					if (BitTest(Global_4524923, 25))
					{
						MISC::CLEAR_BIT(&Global_4524923, 25);
					}
					if (Global_4521352 > 0)
					{
						func_47(14818, iLocal_1408, -1, 1);
						if (Global_4521352 > 0)
						{
							Global_4521352 = 0;
						}
					}
				}
				return;
			}
			if (Global_4521354[iLocal_53 /*296*/].f_24 != 0)
			{
				if (Global_21649.f_1 > 3)
				{
					Global_21649.f_1 = 8;
				}
				if (Global_4524908 == 1 || Global_24083 == 1)
				{
					iLocal_53 = iLocal_36[0];
					iLocal_52 = 0;
					if (Global_4524908 == 1)
					{
					}
					Global_24083 = 0;
				}
				else
				{
					SYSTEM::SETTIMERB(0);
					iLocal_57 = 0;
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21630, "GET_CURRENT_SELECTION");
					iLocal_62 = GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
					while (!GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(iLocal_62) && iLocal_57 == 0)
					{
						SYSTEM::WAIT(0);
						if (SYSTEM::TIMERB() > 2000)
						{
							iLocal_57 = 1;
						}
					}
					if (iLocal_57 == 1)
					{
						iLocal_58 = 0;
					}
					else
					{
						iLocal_58 = GRAPHICS::GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_INT(iLocal_62);
					}
					if (iLocal_58 < 0)
					{
						iLocal_58 = 0;
					}
					iLocal_53 = iLocal_36[iLocal_51];
					iLocal_52 = iLocal_51;
				}
				Global_4521354[iLocal_53 /*296*/].f_28 = 1;
				iLocal_55 = 0;
				StringCopy(&Global_24064, "NO_HYPERLINK", 64);
				Var0 = { Global_4521354[iLocal_53 /*296*/] };
				StringConCat(&Var0, "_LINK", 64);
				if (HUD::DOES_TEXT_LABEL_EXIST(&Var0))
				{
					Global_24064 = { Var0 };
					iLocal_55 = 1;
					if (Global_21637)
					{
						func_30(Global_21630, "SET_SOFT_KEYS", 1f, 1f, 16f, -1f, -1f, "CELL_267", 0, 0, 0, 0);
					}
					else
					{
						func_30(Global_21630, "SET_SOFT_KEYS", 1f, 1f, 16f, -1f, -1f, 0, 0, 0, 0, 0);
					}
					MISC::SET_BIT(&Global_9502, 17);
					Global_4521354[iLocal_53 /*296*/].f_26 = 1;
					Global_4521354[iLocal_53 /*296*/].f_24 = 2;
				}
				if (Global_4521354[iLocal_53 /*296*/].f_26 == 0)
				{
					Global_4521354[iLocal_53 /*296*/].f_24 = 1;
				}
				func_50();
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21630, "SET_DATA_SLOT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(9);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
				func_16("CELL_1");
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_TO_FIELD");
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(PLAYER::GET_PLAYER_NAME(PLAYER::PLAYER_ID()));
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				if (Global_4521354[iLocal_53 /*296*/].f_17 == 145)
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_FROM_FIELD");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4521354[iLocal_53 /*296*/].f_50));
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_FROM_FIELD");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_2349[Global_4521354[iLocal_53 /*296*/].f_17 /*29*/].f_3));
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				switch (Global_4521354[iLocal_53 /*296*/].f_32)
				{
					case 0:
						func_16(&(Global_4521354[iLocal_53 /*296*/]));
						break;
					
					case 1:
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_4521354[iLocal_53 /*296*/]));
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4521354[iLocal_53 /*296*/].f_33));
						if (Global_4521354[iLocal_53 /*296*/].f_66 == 1 && !MISC::ARE_STRINGS_EQUAL(&(Global_4521354[iLocal_53 /*296*/].f_67), "NULL"))
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4521354[iLocal_53 /*296*/].f_67));
						}
						if ((Global_4521354[iLocal_53 /*296*/].f_66 == 2 && !MISC::ARE_STRINGS_EQUAL(&(Global_4521354[iLocal_53 /*296*/].f_67), "NULL")) && !MISC::ARE_STRINGS_EQUAL(&(Global_4521354[iLocal_53 /*296*/].f_83), "NULL"))
						{
							if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_4521354[iLocal_53 /*296*/].f_67)))
							{
								HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4521354[iLocal_53 /*296*/].f_67));
							}
							else
							{
								HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4521354[iLocal_53 /*296*/].f_67));
							}
							if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_4521354[iLocal_53 /*296*/].f_83)))
							{
								HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4521354[iLocal_53 /*296*/].f_83));
							}
							else
							{
								HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4521354[iLocal_53 /*296*/].f_83));
							}
						}
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
						break;
					
					case 2:
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_4521354[iLocal_53 /*296*/]));
						HUD::ADD_TEXT_COMPONENT_INTEGER(Global_4521354[iLocal_53 /*296*/].f_49);
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
						break;
					
					case 3:
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_4521354[iLocal_53 /*296*/]));
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4521354[iLocal_53 /*296*/].f_33));
						HUD::ADD_TEXT_COMPONENT_INTEGER(Global_4521354[iLocal_53 /*296*/].f_49);
						if (Global_4521354[iLocal_53 /*296*/].f_66 == 1 && !MISC::ARE_STRINGS_EQUAL(&(Global_4521354[iLocal_53 /*296*/].f_67), "NULL"))
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4521354[iLocal_53 /*296*/].f_67));
						}
						if ((Global_4521354[iLocal_53 /*296*/].f_66 == 2 && !MISC::ARE_STRINGS_EQUAL(&(Global_4521354[iLocal_53 /*296*/].f_67), "NULL")) && !MISC::ARE_STRINGS_EQUAL(&(Global_4521354[iLocal_53 /*296*/].f_83), "NULL"))
						{
							if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_4521354[iLocal_53 /*296*/].f_67)))
							{
								HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4521354[iLocal_53 /*296*/].f_67));
							}
							else
							{
								HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4521354[iLocal_53 /*296*/].f_67));
							}
							if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_4521354[iLocal_53 /*296*/].f_83)))
							{
								HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4521354[iLocal_53 /*296*/].f_83));
							}
							else
							{
								HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4521354[iLocal_53 /*296*/].f_83));
							}
						}
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
						break;
					
					case 4:
						func_46(iLocal_53);
						break;
					
					case 5:
						func_46(iLocal_53);
						break;
					
					case 6:
						func_46(iLocal_53);
						break;
					
					case 7:
						func_46(iLocal_53);
						break;
					
					case 8:
						func_46(iLocal_53);
						break;
					
					case 9:
						func_46(iLocal_53);
						break;
					
					case 10:
						func_46(iLocal_53);
						break;
					
					case 11:
						func_46(iLocal_53);
						break;
				}
				if (Global_4521354[iLocal_53 /*296*/].f_17 == 145)
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_2000");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4521354[iLocal_53 /*296*/].f_50));
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else
				{
					func_16(&(Global_2349[Global_4521354[iLocal_53 /*296*/].f_17 /*29*/].f_3));
				}
				if (Global_4521354[iLocal_53 /*296*/].f_17 == 149)
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING("emailads_maze_bank");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
				}
				if (Global_4521354[iLocal_53 /*296*/].f_17 == 140)
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING("EmailAds_Warstock");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
				}
				if (Global_4521354[iLocal_53 /*296*/].f_17 == 155)
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING("emailads_arena");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
				}
				if (Global_4521354[iLocal_53 /*296*/].f_17 == 160)
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING("emailads_diamond");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
				}
				if (Global_4521354[iLocal_53 /*296*/].f_17 == 174)
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING("emailads_ls_car_meet");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
				}
				if (Global_4521354[iLocal_53 /*296*/].f_17 == 185)
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING("SUM2_EMAIL_LUXURY_AUTOS");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
				}
				if (Global_4521354[iLocal_53 /*296*/].f_17 == 186)
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING("SUM2_EMAIL_PREMIUM_DELUXE");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
				}
				if (Global_4521354[iLocal_53 /*296*/].f_17 == 191)
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING("emailads_ghost_exposed");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
				}
				if (Global_4521354[iLocal_53 /*296*/].f_17 == 217)
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING("emailads_prix_luxury");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
				}
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				Global_24089 = 1;
				func_65(Global_21630, "DISPLAY_VIEW", 9f, -1082130432, -1082130432, -1082130432, -1082130432);
				HUD::THEFEED_REMOVE_ITEM(Global_4521354[iLocal_53 /*296*/].f_16);
				if (Global_4521354[iLocal_53 /*296*/].f_29 > 0)
				{
					if (Global_21637)
					{
						func_30(Global_21630, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, "CELL_212", 0, 0, 0, 0);
					}
					else
					{
						func_30(Global_21630, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else if (Global_4521354[iLocal_53 /*296*/].f_30 == 1)
				{
					if (Global_21637)
					{
						func_30(Global_21630, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
					}
					else
					{
						func_30(Global_21630, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else
				{
					func_30(Global_21630, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				if (Global_4521354[iLocal_53 /*296*/].f_29 > 0)
				{
					if (MISC::ARE_STRINGS_EQUAL(&(Global_4521354[iLocal_53 /*296*/]), "CELL_FINV"))
					{
						if (Global_21637)
						{
							func_30(Global_21630, "SET_SOFT_KEYS", 3f, 0f, 14f, -1f, -1f, "CELL_213", 0, 0, 0, 0);
						}
						else
						{
							func_30(Global_21630, "SET_SOFT_KEYS", 3f, 0f, 14f, -1f, -1f, 0, 0, 0, 0, 0);
						}
					}
					else if (Global_21637)
					{
						func_30(Global_21630, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
					}
					else
					{
						func_30(Global_21630, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else if (Global_21637)
				{
					func_30(Global_21630, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
				}
				else
				{
					func_30(Global_21630, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				if (Global_4521354[iLocal_53 /*296*/].f_24 == 2)
				{
					if (Global_4521354[iLocal_53 /*296*/].f_31 == 1)
					{
						iLocal_55 = 0;
						if (Global_21637)
						{
							func_30(Global_21630, "SET_SOFT_KEYS", 1f, 1f, 11f, -1f, -1f, "CELL_264", 0, 0, 0, 0);
						}
						else
						{
							func_30(Global_21630, "SET_SOFT_KEYS", 1f, 1f, 11f, -1f, -1f, 0, 0, 0, 0, 0);
						}
						MISC::SET_BIT(&Global_9502, 17);
					}
					else if (iLocal_55 == 0)
					{
						func_30(Global_21630, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
						MISC::CLEAR_BIT(&Global_9502, 17);
					}
				}
				else if (Global_21637)
				{
					func_30(Global_21630, "SET_SOFT_KEYS", 1f, 1f, 12f, -1f, -1f, "CELL_216", 0, 0, 0, 0);
					MISC::SET_BIT(&Global_9502, 17);
				}
				else
				{
					func_30(Global_21630, "SET_SOFT_KEYS", 1f, 1f, 12f, -1f, -1f, 0, 0, 0, 0, 0);
					MISC::SET_BIT(&Global_9502, 17);
				}
				Global_114963.f_14060[Global_21649 /*20*/].f_18 = 0;
				Global_4524908 = 0;
			}
			else
			{
				Global_114963.f_14060[Global_21649 /*20*/].f_18 = 0;
				Global_4524908 = 0;
			}
		}
		if (Global_2740404 == 0)
		{
			if (Global_80337)
			{
			}
		}
	}
}

void func_46(int iParam0)
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

void func_47(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	if (iParam0 != 16764)
	{
		iVar0 = func_48(iParam0, iParam2);
		if (iVar0 != 0)
		{
			STATS::STAT_SET_INT(iVar0, iParam1, bParam3);
		}
	}
}

int func_48(int iParam0, var uParam1)
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(0, iParam0, func_49(uParam1));
}

int func_49(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_27();
		if (iVar1 > -1)
		{
			Global_2741491 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2741491 = 1;
		}
	}
	return iVar0;
}

void func_50()
{
	int iVar0;
	
	if (iLocal_1401)
	{
		GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(&Local_63);
	}
	iLocal_1401 = 0;
	if (Global_4521354[iLocal_53 /*296*/].f_24 != 0)
	{
		iVar0 = 0;
		while (iVar0 < 60)
		{
			if (MISC::ARE_STRINGS_EQUAL(&(Global_4521354[iLocal_53 /*296*/]), &(Local_79[iVar0 /*6*/])))
			{
				if (func_51(&(Local_79[iVar0 /*6*/])))
				{
					StringCopy(&Local_63, "BAT_CASE_", 64);
					StringIntConCat(&Local_63, Global_1970011, 64);
				}
				else
				{
					Local_63 = { Local_440[iVar0 /*16*/] };
				}
				iLocal_1401 = 1;
				GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(&Local_63, false);
				while (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED(&Local_63))
				{
					SYSTEM::WAIT(100);
				}
			}
			iVar0++;
		}
	}
}

int func_51(char* sParam0)
{
	switch (MISC::GET_HASH_KEY(sParam0))
	{
		case 368818696:
		case -242537573:
		case 293851599:
		case 1276417163:
		case -695052470:
		case -272335065:
		case 1286719131:
		case -1417266496:
		case -469944288:
		case -687436221:
		case 1989355620:
		case 549480519:
		case 1944388503:
		case -934641488:
		case -728564821:
		case 1522380948:
		case -1256768569:
		case -320488889:
		case -539437394:
		case -1801936221:
			return 1;
		
		default:
	}
	return 0;
}

void func_52()
{
	if (iLocal_56)
	{
		if (SYSTEM::TIMERA() > 50)
		{
			iLocal_56 = 0;
		}
	}
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2))
	{
		if (func_3(2, 181, 0))
		{
			if (iLocal_51 > 0)
			{
				iLocal_51 = (iLocal_51 - 1);
				func_9();
			}
		}
		if (func_3(2, 180, 0))
		{
			iLocal_51++;
			if (iLocal_51 == iLocal_49)
			{
				iLocal_51 = 0;
			}
			func_6();
		}
	}
	if (iLocal_56 == 0)
	{
		if (func_3(2, Global_21625, 0))
		{
			if (iLocal_51 > 0)
			{
				iLocal_51 = (iLocal_51 - 1);
				func_9();
			}
			iLocal_56 = 1;
			SYSTEM::SETTIMERA(0);
		}
		if (func_3(2, Global_21626, 0))
		{
			iLocal_51++;
			if (iLocal_51 == iLocal_49)
			{
				iLocal_51 = 0;
			}
			func_6();
			iLocal_56 = 1;
			SYSTEM::SETTIMERA(0);
		}
	}
}

void func_53()
{
	float fVar0;
	
	fVar0 = func_54(Local_1405, Local_1402, Global_21609, -90f, 0f, 90f, 350f, 0);
	MOBILE::SET_MOBILE_PHONE_SCALE((500f + (75f * fVar0)));
	if (fVar0 >= 1f)
	{
		Global_24057 = 0;
		iLocal_35 = 0;
	}
}

float func_54(struct<3> Param0, struct<3> Param3, struct<3> Param6, struct<3> Param9, float fParam12, bool bParam13)
{
	struct<2> Var0;
	float fVar3;
	float fVar4;
	float fVar5;
	
	if (Global_4525202 == 0)
	{
		if (BitTest(Global_9502, 14) && Global_21649.f_1 < 4)
		{
			MOBILE::GET_MOBILE_PHONE_POSITION(&Var0);
			if (Global_21602[Global_21594 /*3*/].f_1 == Var0.f_1)
			{
				Global_4525202 = 1;
			}
		}
	}
	if (func_57() && Global_4525202 == 0)
	{
		return 2f;
	}
	if (iLocal_35 == 0)
	{
		iLocal_35 = MISC::GET_GAME_TIMER();
	}
	fVar3 = func_56((SYSTEM::TO_FLOAT((MISC::GET_GAME_TIMER() - iLocal_35)) / fParam12), 0f, 1f);
	if (fVar3 < 1f)
	{
		fVar4 = fVar3;
		if (bParam13)
		{
			fVar4 = (fVar4 - 1f);
			fVar5 = 0.670158f;
			fVar4 = (((fVar4 * fVar4) * (((fVar5 + 1f) * fVar4) + fVar5)) + 1f);
		}
		else
		{
			fVar4 = SYSTEM::SIN((fVar3 * 90f));
		}
		Global_21577 = { func_55(Param0, Param3, fVar4) };
		Global_21580 = { func_55(Param6, Param9, fVar4) };
	}
	else
	{
		Global_21577 = { Param3 };
		Global_21580 = { Param9 };
	}
	MOBILE::SET_MOBILE_PHONE_POSITION(Global_21577);
	MOBILE::SET_MOBILE_PHONE_ROTATION(Global_21580, 0);
	return fVar3;
}

Vector3 func_55(struct<3> Param0, struct<3> Param3, float fParam6)
{
	return Param0 + Param3 - Param0 * Vector(fParam6, fParam6, fParam6);
}

float func_56(float fParam0, float fParam1, float fParam2)
{
	if (fParam0 > fParam2)
	{
		return fParam2;
	}
	else if (fParam0 < fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

int func_57()
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
		if (func_29(14))
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

void func_58()
{
	float fVar0;
	
	fVar0 = func_54(Local_1402, Local_1405, -90f, 0f, 90f, Global_21609, 350f, 0);
	MOBILE::SET_MOBILE_PHONE_SCALE((500f + (75f * (1f - fVar0))));
	if (fVar0 >= 1f)
	{
		Global_24056 = 0;
		func_68();
		iLocal_35 = 0;
	}
}

void func_59()
{
	if (Global_4524908 == 0)
	{
		if (iLocal_52 < 0)
		{
			iLocal_52 = 0;
		}
		func_60(Global_21630, "SET_HEADER", "CELL_INBOX", 0, 0, 0, 0);
		func_65(Global_21630, "DISPLAY_VIEW", 8f, SYSTEM::TO_FLOAT(iLocal_52), -1082130432, -1082130432, -1082130432);
		if (Global_21637)
		{
			if (iLocal_49 > 0)
			{
				func_30(Global_21630, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_214", 0, 0, 0, 0);
			}
			else
			{
				func_30(Global_21630, "SET_SOFT_KEYS", 2f, 0f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			func_30(Global_21630, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
		}
		else
		{
			if (iLocal_49 > 0)
			{
				func_30(Global_21630, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else
			{
				func_30(Global_21630, "SET_SOFT_KEYS", 2f, 0f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			func_30(Global_21630, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
		}
		if (Global_80337)
		{
			func_30(Global_21630, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			MISC::CLEAR_BIT(&Global_9502, 17);
		}
		else
		{
			func_30(Global_21630, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			MISC::CLEAR_BIT(&Global_9502, 17);
		}
	}
	else
	{
		iLocal_52 = 0;
	}
}

void func_60(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, sParam1);
	func_16(sParam2);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
	{
		func_16(sParam3);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
	{
		func_16(sParam4);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam5))
	{
		func_16(sParam5);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam6))
	{
		func_16(sParam6);
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_61()
{
	int iVar0[12];
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	struct<8> Var17;
	int iVar33;
	int iVar34[10];
	int iVar45;
	
	iLocal_49 = 0;
	iLocal_50 = 0;
	func_38();
	iVar13 = 0;
	iVar14 = 0;
	while (iVar13 < 11)
	{
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand")) == 0)
		{
			func_68();
		}
		iVar15 = 0;
		iVar16 = 11;
		Global_4521354[iVar16 /*296*/].f_18 = -1;
		Global_4521354[iVar16 /*296*/].f_18.f_1 = 0;
		Global_4521354[iVar16 /*296*/].f_18.f_2 = 0;
		Global_4521354[iVar16 /*296*/].f_18.f_3 = 0;
		Global_4521354[iVar16 /*296*/].f_18.f_5 = 0;
		while (iVar15 < 12)
		{
			if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand")) == 0)
			{
				func_68();
			}
			if (iVar0[iVar15] == 0)
			{
				if (Global_4521354[iVar15 /*296*/].f_24 != 0)
				{
					if (Global_4521354[iVar15 /*296*/].f_291[Global_21649] == 1)
					{
						if (func_64(Global_4521354[iVar15 /*296*/].f_18, Global_4521354[iVar16 /*296*/].f_18))
						{
							iVar16 = iVar15;
							if (Global_4521354[iVar16 /*296*/].f_28 == 0)
							{
								iLocal_54 = 0;
							}
							else
							{
								iLocal_54 = 1;
							}
						}
					}
				}
			}
			iVar15++;
		}
		iLocal_36[iVar13] = iVar16;
		iVar0[iVar16] = 1;
		if (Global_4521354[iVar16 /*296*/].f_24 != 0)
		{
			if (Global_4521354[iVar16 /*296*/].f_291[Global_21649] == 1)
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21630, "SET_DATA_SLOT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(8);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar13);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iLocal_54);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
				if (Global_4521354[iVar16 /*296*/].f_17 == 145)
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_2000");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4521354[iVar16 /*296*/].f_50));
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else
				{
					func_16(&(Global_2349[Global_4521354[iVar16 /*296*/].f_17 /*29*/].f_3));
				}
				Var17 = { Global_4521354[iVar16 /*296*/] };
				if (func_51(&(Global_4521354[iVar16 /*296*/])))
				{
					iVar33 = func_63(7315, -1);
					switch (iVar33)
					{
						case 0:
							StringCopy(&Var17, "BONEMAIL_TXT_SUB", 64);
							break;
						
						case 1:
							StringCopy(&Var17, "BONEMAIL2_TXT_SUB", 64);
							break;
						
						case 2:
							StringCopy(&Var17, "BONEMAIL3_TXT_SUB", 64);
							break;
						
						case 3:
							StringCopy(&Var17, "BONEMAIL4_TXT_SUB", 64);
							break;
						
						case 4:
							StringCopy(&Var17, "BONEMAIL5_TXT_SUB", 64);
							break;
					}
				}
				else if (func_62(&(Global_4521354[iVar16 /*296*/])))
				{
					StringCopy(&Var17, "HK24_FLW_SUB", 64);
				}
				else
				{
					StringConCat(&Var17, "_SUB", 64);
				}
				func_16(&Var17);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				iLocal_49++;
				iLocal_50++;
			}
		}
		iVar13++;
	}
	if (Global_262145.f_36236)
	{
		return;
	}
	iVar13 = iLocal_49;
	iVar45 = 0;
	while (iVar13 < (iLocal_1412 + iLocal_49))
	{
		iVar14 = 0;
		iVar45 = 0;
		while (iVar14 < iLocal_1412 && iVar45 == 0)
		{
			SOCIALCLUB::SC_EMAIL_GET_EMAIL_AT_INDEX(iVar14, &Local_1413);
			if (iVar34[iVar14] == 0)
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21630, "SET_DATA_SLOT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(8);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar13);
				if (iVar13 == 0)
				{
					if (Global_4521352 == 0)
					{
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
					}
					else
					{
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
					}
				}
				else
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
				}
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_2000");
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Local_1413.f_2));
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_EMAIL_SUBJ");
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Local_1413.f_23[0 /*16*/]));
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Local_1413.f_23[1 /*16*/]));
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				iVar34[iVar14] = 1;
				iLocal_36[iVar13] = iVar14;
				iVar45 = 1;
				iLocal_49++;
				if (iVar14 == 0)
				{
					iLocal_1408 = Local_1413.f_1;
				}
			}
			iVar14++;
		}
		iVar13++;
	}
}

int func_62(char* sParam0)
{
	switch (MISC::GET_HASH_KEY(sParam0))
	{
		case -793228278:
		case 2074583534:
		case 1848706817:
			return 1;
		
		default:
	}
	return 0;
}

int func_63(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = func_27();
	}
	return STATS::GET_PACKED_STAT_INT_CODE(iParam0, iParam1);
}

int func_64(struct<6> Param0, struct<6> Param6)
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

void func_65(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
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

void func_66()
{
	switch (LOCALIZATION::GET_CURRENT_LANGUAGE())
	{
		case -1:
			SOCIALCLUB::SC_EMAIL_SET_CURRENT_EMAIL_TAG("gta5mkt_en");
			break;
		
		case 0:
			SOCIALCLUB::SC_EMAIL_SET_CURRENT_EMAIL_TAG("gta5mkt_en");
			break;
		
		case 1:
			SOCIALCLUB::SC_EMAIL_SET_CURRENT_EMAIL_TAG("gta5mkt_fr");
			break;
		
		case 2:
			SOCIALCLUB::SC_EMAIL_SET_CURRENT_EMAIL_TAG("gta5mkt_ge");
			break;
		
		case 3:
			SOCIALCLUB::SC_EMAIL_SET_CURRENT_EMAIL_TAG("gta5mkt_it");
			break;
		
		case 4:
			SOCIALCLUB::SC_EMAIL_SET_CURRENT_EMAIL_TAG("gta5mkt_sp");
			break;
		
		case 5:
			SOCIALCLUB::SC_EMAIL_SET_CURRENT_EMAIL_TAG("gta5mkt_pt");
			break;
		
		case 6:
			SOCIALCLUB::SC_EMAIL_SET_CURRENT_EMAIL_TAG("gta5mkt_pl");
			break;
		
		case 7:
			SOCIALCLUB::SC_EMAIL_SET_CURRENT_EMAIL_TAG("gta5mkt_ru");
			break;
		
		case 8:
			SOCIALCLUB::SC_EMAIL_SET_CURRENT_EMAIL_TAG("gta5mkt_ko");
			break;
		
		case 9:
			SOCIALCLUB::SC_EMAIL_SET_CURRENT_EMAIL_TAG("gta5mkt_ch");
			break;
		
		case 10:
			SOCIALCLUB::SC_EMAIL_SET_CURRENT_EMAIL_TAG("gta5mkt_ja");
			break;
		
		case 11:
			SOCIALCLUB::SC_EMAIL_SET_CURRENT_EMAIL_TAG("gta5mkt_me");
			break;
		
		case 12:
			SOCIALCLUB::SC_EMAIL_SET_CURRENT_EMAIL_TAG("gta5mkt_cn");
			break;
	}
	SOCIALCLUB::SC_EMAIL_RETRIEVE_EMAILS(0, 6);
	SYSTEM::WAIT(0);
	iLocal_1409 = 1;
	bLocal_1410 = false;
	while (iLocal_1409 && Global_21649.f_1 > 3)
	{
		SYSTEM::WAIT(0);
		iLocal_1411 = SOCIALCLUB::SC_EMAIL_GET_RETRIEVAL_STATUS();
		if (func_4())
		{
			Global_21649.f_1 = 3;
			iLocal_1409 = 0;
			bLocal_1410 = false;
		}
		switch (iLocal_1411)
		{
			case 3:
				iLocal_1409 = 0;
				bLocal_1410 = true;
				break;
			
			case 0:
				iLocal_1409 = 0;
				bLocal_1410 = true;
				break;
			
			case 1:
				break;
			
			case 4:
				iLocal_1409 = 0;
				bLocal_1410 = false;
				break;
			
			case 2:
				iLocal_1409 = 0;
				bLocal_1410 = false;
				break;
		}
	}
	if (bLocal_1410)
	{
		iLocal_1412 = SOCIALCLUB::SC_EMAIL_GET_NUM_RETRIEVED_EMAILS();
	}
	else
	{
		iLocal_1412 = 0;
	}
}

void func_67()
{
	StringCopy(&(Local_79[0 /*6*/]), "SXT_JUL_1ST", 24);
	StringCopy(&(Local_440[0 /*16*/]), "05_a_sext_stripperJuliet", 64);
	StringCopy(&(Local_79[1 /*6*/]), "SXT_JUL_2ND", 24);
	StringCopy(&(Local_440[1 /*16*/]), "05_b_sext_stripperJuliet", 64);
	StringCopy(&(Local_79[2 /*6*/]), "SXT_JUL_NEED", 24);
	StringCopy(&(Local_440[2 /*16*/]), "05_c_sext_stripperJuliet", 64);
	StringCopy(&(Local_79[3 /*6*/]), "MAPEMAIL_TXT", 24);
	StringCopy(&(Local_440[3 /*16*/]), "NHP_PHOTO_19", 64);
	StringCopy(&(Local_79[4 /*6*/]), "SXT_NIK_2ND", 24);
	StringCopy(&(Local_440[4 /*16*/]), "06_b_sext_stripperNikki", 64);
	StringCopy(&(Local_79[5 /*6*/]), "SXT_NIK_NEED", 24);
	StringCopy(&(Local_440[5 /*16*/]), "06_c_sext_stripperNikki", 64);
	StringCopy(&(Local_79[6 /*6*/]), "SXT_SAP_1ST", 24);
	StringCopy(&(Local_440[6 /*16*/]), "08_a_sext_stripperSapphire", 64);
	StringCopy(&(Local_79[7 /*6*/]), "SXT_SAP_2ND", 24);
	StringCopy(&(Local_440[7 /*16*/]), "08_b_sext_stripperSapphire", 64);
	StringCopy(&(Local_79[8 /*6*/]), "SXT_SAP_NEED", 24);
	StringCopy(&(Local_440[8 /*16*/]), "08_c_sext_stripperSapphire", 64);
	StringCopy(&(Local_79[9 /*6*/]), "SXT_INF_1ST", 24);
	StringCopy(&(Local_440[9 /*16*/]), "04_a_sext_stripperInfernus", 64);
	StringCopy(&(Local_79[10 /*6*/]), "SXT_INF_2ND", 24);
	StringCopy(&(Local_440[10 /*16*/]), "04_b_sext_stripperInfernus", 64);
	StringCopy(&(Local_79[11 /*6*/]), "SXT_INF_NEED", 24);
	StringCopy(&(Local_440[11 /*16*/]), "04_c_sext_stripperInfernus", 64);
	StringCopy(&(Local_79[12 /*6*/]), "SXT_TXI_1ST", 24);
	StringCopy(&(Local_440[12 /*16*/]), "11_a_sext_taxiLiz", 64);
	StringCopy(&(Local_79[13 /*6*/]), "SXT_TXI_2ND", 24);
	StringCopy(&(Local_440[13 /*16*/]), "11_b_sext_taxiLiz", 64);
	StringCopy(&(Local_79[14 /*6*/]), "SXT_TXI_NEED", 24);
	StringCopy(&(Local_440[14 /*16*/]), "11_c_sext_taxiLiz", 64);
	StringCopy(&(Local_79[15 /*6*/]), "SXT_HCH_1ST", 24);
	StringCopy(&(Local_440[15 /*16*/]), "10_a_sext_hitcherGirl", 64);
	StringCopy(&(Local_79[16 /*6*/]), "SXT_HCH_2ND", 24);
	StringCopy(&(Local_440[16 /*16*/]), "10_b_sext_hitcherGirl", 64);
	StringCopy(&(Local_79[17 /*6*/]), "SXT_HCH_NEED", 24);
	StringCopy(&(Local_440[17 /*16*/]), "10_c_sext_hitcherGirl", 64);
	StringCopy(&(Local_79[18 /*6*/]), "SOL2_PASS", 24);
	StringCopy(&(Local_440[18 /*16*/]), "executiveproducer", 64);
	StringCopy(&(Local_79[19 /*6*/]), "MAPEMAIL_TXT1", 24);
	StringCopy(&(Local_440[19 /*16*/]), "NHP_PHOTO_18", 64);
	StringCopy(&(Local_79[20 /*6*/]), "MAPEMAIL_TXT2", 24);
	StringCopy(&(Local_440[20 /*16*/]), "NHP_PHOTO_11", 64);
	StringCopy(&(Local_79[21 /*6*/]), "MAPEMAIL_TXT3", 24);
	StringCopy(&(Local_440[21 /*16*/]), "NHP_PHOTO_13", 64);
	StringCopy(&(Local_79[22 /*6*/]), "MAPEMAIL_TXT4", 24);
	StringCopy(&(Local_440[22 /*16*/]), "NHP_PHOTO_5", 64);
	StringCopy(&(Local_79[23 /*6*/]), "MAPEMAIL_TXT5", 24);
	StringCopy(&(Local_440[23 /*16*/]), "NHP_PHOTO_12", 64);
	StringCopy(&(Local_79[24 /*6*/]), "MAPEMAIL_TXT6", 24);
	StringCopy(&(Local_440[24 /*16*/]), "NHP_PHOTO_3", 64);
	StringCopy(&(Local_79[25 /*6*/]), "MAPEMAIL_TXT7", 24);
	StringCopy(&(Local_440[25 /*16*/]), "NHP_PHOTO_1", 64);
	StringCopy(&(Local_79[26 /*6*/]), "MAPEMAIL_TXT8", 24);
	StringCopy(&(Local_440[26 /*16*/]), "NHP_PHOTO_10", 64);
	StringCopy(&(Local_79[27 /*6*/]), "MAPEMAIL_TXT9", 24);
	StringCopy(&(Local_440[27 /*16*/]), "NHP_PHOTO_6", 64);
	StringCopy(&(Local_79[28 /*6*/]), "MAPEMAIL_TXT10", 24);
	StringCopy(&(Local_440[28 /*16*/]), "NHP_PHOTO_20", 64);
	StringCopy(&(Local_79[29 /*6*/]), "MAPEMAIL_TXT11", 24);
	StringCopy(&(Local_440[29 /*16*/]), "NHP_PHOTO_7", 64);
	StringCopy(&(Local_79[30 /*6*/]), "MAPEMAIL_TXT12", 24);
	StringCopy(&(Local_440[30 /*16*/]), "NHP_PHOTO_14", 64);
	StringCopy(&(Local_79[31 /*6*/]), "MAPEMAIL_TXT13", 24);
	StringCopy(&(Local_440[31 /*16*/]), "NHP_PHOTO_4", 64);
	StringCopy(&(Local_79[32 /*6*/]), "MAPEMAIL_TXT14", 24);
	StringCopy(&(Local_440[32 /*16*/]), "NHP_PHOTO_17", 64);
	StringCopy(&(Local_79[33 /*6*/]), "MAPEMAIL_TXT15", 24);
	StringCopy(&(Local_440[33 /*16*/]), "NHP_PHOTO_2", 64);
	StringCopy(&(Local_79[34 /*6*/]), "MAPEMAIL_TXT16", 24);
	StringCopy(&(Local_440[34 /*16*/]), "NHP_PHOTO_15", 64);
	StringCopy(&(Local_79[35 /*6*/]), "MAPEMAIL_TXT17", 24);
	StringCopy(&(Local_440[35 /*16*/]), "NHP_PHOTO_8", 64);
	StringCopy(&(Local_79[36 /*6*/]), "MAPEMAIL_TXT18", 24);
	StringCopy(&(Local_440[36 /*16*/]), "NHP_PHOTO_9", 64);
	StringCopy(&(Local_79[37 /*6*/]), "MAPEMAIL_TXT19", 24);
	StringCopy(&(Local_440[37 /*16*/]), "NHP_PHOTO_16", 64);
	StringCopy(&(Local_79[38 /*6*/]), "MC_EMAIL_0", 24);
	StringCopy(&(Local_440[38 /*16*/]), "NHP_prep_mines", 64);
	StringCopy(&(Local_79[39 /*6*/]), "BONEPIC1_TXT", 24);
	StringCopy(&(Local_440[39 /*16*/]), "", 64);
	StringCopy(&(Local_79[40 /*6*/]), "BONEPIC2_TXT", 24);
	StringCopy(&(Local_440[40 /*16*/]), "", 64);
	StringCopy(&(Local_79[41 /*6*/]), "BONEPIC3_TXT", 24);
	StringCopy(&(Local_440[41 /*16*/]), "", 64);
	StringCopy(&(Local_79[42 /*6*/]), "BONEPIC4_TXT", 24);
	StringCopy(&(Local_440[42 /*16*/]), "", 64);
	StringCopy(&(Local_79[43 /*6*/]), "BONEPIC5_TXT", 24);
	StringCopy(&(Local_440[43 /*16*/]), "", 64);
	StringCopy(&(Local_79[44 /*6*/]), "BONEPIC6_TXT", 24);
	StringCopy(&(Local_440[44 /*16*/]), "", 64);
	StringCopy(&(Local_79[45 /*6*/]), "BONEPIC7_TXT", 24);
	StringCopy(&(Local_440[45 /*16*/]), "", 64);
	StringCopy(&(Local_79[46 /*6*/]), "BONEPIC8_TXT", 24);
	StringCopy(&(Local_440[46 /*16*/]), "", 64);
	StringCopy(&(Local_79[47 /*6*/]), "BONEPIC9_TXT", 24);
	StringCopy(&(Local_440[47 /*16*/]), "", 64);
	StringCopy(&(Local_79[48 /*6*/]), "BONEPIC10_TXT", 24);
	StringCopy(&(Local_440[48 /*16*/]), "", 64);
	StringCopy(&(Local_79[49 /*6*/]), "BONEPIC11_TXT", 24);
	StringCopy(&(Local_440[49 /*16*/]), "", 64);
	StringCopy(&(Local_79[50 /*6*/]), "BONEPIC12_TXT", 24);
	StringCopy(&(Local_440[50 /*16*/]), "", 64);
	StringCopy(&(Local_79[51 /*6*/]), "BONEPIC13_TXT", 24);
	StringCopy(&(Local_440[51 /*16*/]), "", 64);
	StringCopy(&(Local_79[52 /*6*/]), "BONEPIC14_TXT", 24);
	StringCopy(&(Local_440[52 /*16*/]), "", 64);
	StringCopy(&(Local_79[53 /*6*/]), "BONEPIC15_TXT", 24);
	StringCopy(&(Local_440[53 /*16*/]), "", 64);
	StringCopy(&(Local_79[54 /*6*/]), "BONEPIC16_TXT", 24);
	StringCopy(&(Local_440[54 /*16*/]), "", 64);
	StringCopy(&(Local_79[55 /*6*/]), "BONEPIC17_TXT", 24);
	StringCopy(&(Local_440[55 /*16*/]), "", 64);
	StringCopy(&(Local_79[56 /*6*/]), "BONEPIC18_TXT", 24);
	StringCopy(&(Local_440[56 /*16*/]), "", 64);
	StringCopy(&(Local_79[57 /*6*/]), "BONEPIC19_TXT", 24);
	StringCopy(&(Local_440[57 /*16*/]), "", 64);
	StringCopy(&(Local_79[58 /*6*/]), "BONEPIC20_TXT", 24);
	StringCopy(&(Local_440[58 /*16*/]), "", 64);
	StringCopy(&(Local_79[58 /*6*/]), "HK24_FLW_T2", 24);
	StringCopy(&(Local_440[58 /*16*/]), "UPDT2_24_TEXT_LESTER", 64);
}

void func_68()
{
	if (func_57() == 0)
	{
		MOBILE::SET_MOBILE_PHONE_POSITION(Global_21602[Global_21594 /*3*/]);
	}
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand")) == 0)
	{
		func_69(0);
	}
	if (iLocal_1401)
	{
		GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(&Local_63);
	}
	Global_24057 = 0;
	Global_24056 = 0;
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_69(int iParam0)
{
	if (func_74())
	{
		return;
	}
	if (Global_21882)
	{
		if (func_73())
		{
			func_71(1, 1);
		}
		else
		{
			func_71(0, 0);
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
	if (!func_70())
	{
		Global_21649.f_1 = 3;
	}
}

int func_70()
{
	if (Global_21649.f_1 == 1 || Global_21649.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_71(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_72(0))
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

int func_72(int iParam0)
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

bool func_73()
{
	return BitTest(Global_1964670, 5);
}

bool func_74()
{
	return BitTest(Global_1964670, 19);
}

