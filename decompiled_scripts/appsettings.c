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
	var uLocal_18 = 20;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
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
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	var uLocal_42 = 0;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	BOOL bLocal_50 = 0;
	BOOL bLocal_51 = 0;
	BOOL bLocal_52 = 0;
	BOOL bLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	BOOL bLocal_56 = 0;
	BOOL bLocal_57 = 0;
	float fLocal_58 = 0f;
	float fLocal_59 = 0f;
	float fLocal_60 = 0f;
	float fLocal_61 = 0f;
	BOOL bLocal_62 = 0;
	float fLocal_63 = 0f;
	float fLocal_64 = 0f;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
#endregion

void main() // Position - 0x0 Hash - 0x5D84F89F ^0x5D84F89F
{
	int i;

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
	fLocal_58 = 0.82f;
	fLocal_59 = 0.42f;
	fLocal_60 = 0f;
	fLocal_61 = 0f;
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	func_46(Global_20364, "SET_DATA_SLOT_EMPTY", 13f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_45();

	if (Global_20328 == 0)
	{
		fLocal_63 = 0.75f;
		fLocal_64 = 0.8f;
	}
	else
	{
		fLocal_63 = 0.65f;
		fLocal_64 = 0.77f;
	}

	Global_9058[Global_20383 /*2811*/][2 /*281*/].f_259 = Global_113648.f_14053[Global_20383 /*20*/].f_6;
	Global_9058[Global_20383 /*2811*/][4 /*281*/].f_259 = Global_113648.f_14053[Global_20383 /*20*/].f_9;

	for (i = 0; i < 9; i = i + 1)
	{
		if (Global_78558)
		{
			Global_9058[Global_20383 /*2811*/][1 /*281*/].f_259 = func_44(1199, -1, 0);
			Global_9058[Global_20383 /*2811*/][2 /*281*/].f_259 = func_44(2030, -1, 0);
			Global_9058[Global_20383 /*2811*/][4 /*281*/].f_259 = func_44(2029, -1, 0);
		}
		else if (MISC::ARE_STRINGS_EQUAL(&(Global_113648.f_14053[Global_20383 /*20*/].f_11), &Global_9058[Global_20383 /*2811*/][1 /*281*/].f_144[i /*6*/]))
		{
			Global_9058[Global_20383 /*2811*/][1 /*281*/].f_259 = i;
		}
	}

	if (Global_78558)
		Global_113648.f_14053[3 /*20*/].f_10 = func_44(1198, -1, 0);

	Global_9058[Global_20383 /*2811*/][3 /*281*/].f_259 = Global_113648.f_14053[Global_20383 /*20*/].f_10;
	func_43();

	if (Global_78558)
	{
		Global_9058[3 /*2811*/][0 /*281*/] = 190;
		Global_9058[3 /*2811*/][0 /*281*/].f_1 = 190;
		TEXT_LABEL_ASSIGN_STRING(&(Global_9058[3 /*2811*/][0 /*281*/].f_2), _("Snapmatic"), 16);
		Global_9058[3 /*2811*/][0 /*281*/].f_6 = 19;
		Global_9058[3 /*2811*/][0 /*281*/].f_280 = 1;
		TEXT_LABEL_ASSIGN_STRING(&Global_9058[3 /*2811*/][0 /*281*/].f_7[0 /*4*/], _("Quick launch Off"), 16);
		Global_9058[3 /*2811*/][0 /*281*/].f_124[0] = 1;
		Global_9058[3 /*2811*/][0 /*281*/].f_84[0] = 170;
		Global_9058[3 /*2811*/][0 /*281*/].f_104[0] = 19;
		TEXT_LABEL_ASSIGN_STRING(&Global_9058[3 /*2811*/][0 /*281*/].f_7[1 /*4*/], _("Quick launch On"), 16);
		Global_9058[3 /*2811*/][0 /*281*/].f_124[1] = 1;
		Global_9058[3 /*2811*/][0 /*281*/].f_84[1] = 175;
		Global_9058[3 /*2811*/][0 /*281*/].f_104[1] = 19;
		TEXT_LABEL_ASSIGN_STRING(&Global_9058[3 /*2811*/][0 /*281*/].f_7[2 /*4*/], _("Sleep Mode"), 16);
		Global_9058[3 /*2811*/][0 /*281*/].f_124[2] = 0;
		Global_9058[3 /*2811*/][0 /*281*/].f_84[2] = 190;
		Global_9058[3 /*2811*/][0 /*281*/].f_104[2] = 26;
	
		if (func_44(2092, -1, 0) == 0)
			Global_9058[3 /*2811*/][0 /*281*/].f_259 = 0;
		else
			Global_9058[3 /*2811*/][0 /*281*/].f_259 = 1;
	}

	func_33();

	while (true)
	{
		SYSTEM::WAIT(0);
	
		if (bLocal_50)
		{
			if (SYSTEM::TIMERB() > 3500)
			{
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
					AUDIO::STOP_PED_RINGTONE(PLAYER::PLAYER_PED_ID());
			
				bLocal_50 = false;
			}
		}
	
		if (Global_20383.f_1 != 9)
		{
			switch (Global_20383.f_1)
			{
				case 7:
					func_28();
					func_26();
					break;
			
				case 8:
					if (bLocal_56 || bLocal_57)
					{
						if (bLocal_56)
						{
							bLocal_56 = false;
							SYSTEM::SETTIMERB(0);
							Global_113648.f_14053.f_82 = 1;
							bLocal_57 = true;
						}
						else if (SYSTEM::TIMERB() > 7500)
						{
							bLocal_57 = false;
							HUD::SET_SCRIPT_VARIABLE_HUD_COLOUR(1);
						}
					}
					else
					{
						func_28();
						func_12();
					
						if (bLocal_53)
							func_11();
					
						if (func_10(FRONTEND_CONTROL, Global_20351, 0))
						{
							if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
								AUDIO::STOP_PED_RINGTONE(PLAYER::PLAYER_PED_ID());
						
							bLocal_53 = false;
							func_9();
							Global_20361 = 1;
							func_46(Global_20364, "SET_DATA_SLOT_EMPTY", 13f, -1082130432, -1082130432, -1082130432, -1082130432);
							func_33();
						
							if (Global_20383.f_1 > 3)
								Global_20383.f_1 = 7;
						}
					}
					break;
			
				default:
					break;
			}
		
			if (func_8())
				func_2();
		}
		else
		{
			Global_20385 = 6;
			func_2();
		}
	
		if (func_1())
			func_2();
	}

	return;
}

BOOL func_1() // Position - 0x44E Hash - 0x57EB5377 ^0xDC0824ED
{
	if (Global_20383.f_1 == 1 || Global_20383.f_1 == 3 || Global_20383.f_1 == 0 || Global_20327 == 1)
	{
		Global_20370 = 1;
		return true;
	}

	return false;
}

void func_2() // Position - 0x491 Hash - 0xB4012E69 ^0x9CA0F0BD
{
	func_7();

	if (func_4(0))
		func_3();

	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		AUDIO::STOP_PED_RINGTONE(PLAYER::PLAYER_PED_ID());

	if (bLocal_56)
		HUD::SET_SCRIPT_VARIABLE_HUD_COLOUR(1);

	if (Global_113648.f_14053.f_83 == 0 || Global_113648.f_14053.f_82 == 0)
		func_3();

	MISC::SET_GAME_PAUSED(false);
	SCRIPT::TERMINATE_THIS_THREAD();
	return;
}

void func_3() // Position - 0x4F4 Hash - 0x53295875 ^0x53295875
{
	if (Global_9058[0 /*2811*/][0 /*281*/].f_259 == 2)
		Global_9058[0 /*2811*/][0 /*281*/].f_259 = 0;

	if (Global_9058[1 /*2811*/][0 /*281*/].f_259 == 2)
		Global_9058[1 /*2811*/][0 /*281*/].f_259 = 0;

	if (Global_9058[2 /*2811*/][0 /*281*/].f_259 == 2)
		Global_9058[2 /*2811*/][0 /*281*/].f_259 = 0;

	MISC::CLEAR_BIT(&Global_8253, 25);
	MISC::SET_BIT(&Global_8254, 11);
	return;
}

BOOL func_4(int iParam0) // Position - 0x571 Hash - 0x3BAB94E9 ^0x3BAB94E9
{
	if (Global_43257 == 15)
		return false;

	if (func_5(iParam0))
		return false;

	return true;
}

BOOL func_5(int iParam0) // Position - 0x593 Hash - 0xECB6C71B ^0xECB6C71B
{
	return func_6(iParam0, Global_43257);
}

BOOL func_6(int iParam0, int iParam1) // Position - 0x5A4 Hash - 0x1FD727E0 ^0x1FD727E0
{
	if (iParam1 == 15)
		return 1;

	if (iParam0 == 15)
		return 0;

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
			}
		
			return 1;
	
		case 0:
			switch (iParam1)
			{
				case 5:
				case 17:
					return 1;
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
			}
			break;
	
		case 4:
			if (iParam1 == 17)
				return 1;
			break;
	
		case 5:
			break;
	
		case 6:
		case 8:
			if (iParam1 == 5)
				return 1;
			break;
	
		case 7:
			if (iParam1 == 6)
				return 1;
			break;
	
		case 9:
			if (iParam1 == 5)
				return 1;
			break;
	
		case 10:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 17:
					return 1;
			}
			break;
	
		case 11:
			if (iParam1 == 5)
				return 1;
			break;
	
		case 17:
			switch (iParam1)
			{
				case 17:
				case 12:
				case 5:
					return 1;
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
			}
			break;
	
		case 13:
			switch (iParam1)
			{
				case 5:
					return 1;
			}
			break;
	
		case 14:
			switch (iParam1)
			{
				case 5:
					return 1;
			}
			break;
	}

	return 0;
}

void func_7() // Position - 0x785 Hash - 0xC65DFBA5 ^0xD68DB962
{
	func_45();
	Global_9058[Global_20383 /*2811*/][0 /*281*/].f_124[2] = 1;
	return;
}

BOOL func_8() // Position - 0x7A4 Hash - 0x1F39C732 ^0x92A1ED04
{
	if (Global_8859 == 1 || Global_20383.f_1 < 7)
	{
		Global_20370 = 1;
		return true;
	}

	return false;
}

void func_9() // Position - 0x7CD Hash - 0x6CF4C3D ^0xE9743895
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Back", &Global_20372, true);

	return;
}

BOOL func_10(eControlType ectParam0, eControlAction ecaParam1, int iParam2) // Position - 0x7EE Hash - 0xBB00BE4E ^0xA27687FD
{
	if (PAD::IS_CONTROL_JUST_PRESSED(ectParam0, ecaParam1) || iParam2 == 1 && PAD::IS_DISABLED_CONTROL_JUST_PRESSED(ectParam0, ecaParam1))
	{
		if (MISC::IS_PC_VERSION())
			if (MISC::UPDATE_ONSCREEN_KEYBOARD() == 0 || NETWORK::NETWORK_TEXT_CHAT_IS_TYPING() && PAD::IS_USING_KEYBOARD_AND_MOUSE(FRONTEND_CONTROL))
				return false;
	
		if (HUD::IS_PAUSE_MENU_ACTIVE() || HUD::IS_WARNING_MESSAGE_ACTIVE())
			return false;
		else
			return true;
	}

	return false;
}

void func_11() // Position - 0x860 Hash - 0x6240034E ^0x1A6876B8
{
	int num;

	iLocal_54 = MISC::GET_GAME_TIMER();
	num = iLocal_54 - iLocal_55;

	if (num % 600 <= 300 && num < 3000)
		PAD::SET_CONTROL_SHAKE(PLAYER_CONTROL, 100, 100);

	return;
}

void func_12() // Position - 0x895 Hash - 0x76A20FA9 ^0x47806803
{
	int num;
	var txdName;
	var unk;
	int unk2;

	if (iLocal_43 == 1)
	{
		if (bLocal_52)
		{
			iLocal_54 = MISC::GET_GAME_TIMER();
		
			if (iLocal_54 - iLocal_55 > 1000)
			{
				bLocal_51 = true;
				bLocal_52 = false;
			}
		}
	
		if (PAD::IS_USING_KEYBOARD_AND_MOUSE(FRONTEND_CONTROL))
		{
			if (PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_CELLPHONE_SCROLL_FORWARD))
			{
				iLocal_65 = 1;
				iLocal_66 = 0;
			}
		
			if (PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_CELLPHONE_SCROLL_BACKWARD))
			{
				iLocal_65 = 0;
				iLocal_66 = 1;
			}
		}
	
		if (func_10(FRONTEND_CONTROL, Global_20359, 0) || func_10(FRONTEND_CONTROL, Global_20360, 0) || bLocal_51 || iLocal_65 == 1 || iLocal_66 == 1)
		{
			iLocal_65 = 0;
			iLocal_66 = 0;
			bLocal_51 = false;
			bLocal_52 = false;
			SYSTEM::SETTIMERB(0);
			bLocal_50 = true;
			NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(Global_20364, "GET_CURRENT_SELECTION");
			iLocal_41 = GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
		
			while (!GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(iLocal_41))
			{
				SYSTEM::WAIT(0);
			}
		
			iLocal_47 = uLocal_18[GRAPHICS::GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_INT(iLocal_41)];
		
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				AUDIO::STOP_PED_RINGTONE(PLAYER::PLAYER_PED_ID());
				SYSTEM::WAIT(100);
			
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
				{
					if (!AUDIO::IS_PED_RINGTONE_PLAYING(PLAYER::PLAYER_PED_ID()))
					{
						if (MISC::ARE_STRINGS_EQUAL(&Global_9058[Global_20383 /*2811*/][1 /*281*/].f_144[iLocal_47 /*6*/], "Silent Ringtone Dummy"))
						{
						}
						else
						{
							AUDIO::PLAY_PED_RINGTONE(&Global_9058[Global_20383 /*2811*/][1 /*281*/].f_144[iLocal_47 /*6*/], PLAYER::PLAYER_PED_ID(), true);
						}
					}
				}
			}
		}
	}

	if (Global_20361 == 0)
	{
		if (func_10(FRONTEND_CONTROL, Global_20352, 0))
		{
			func_23();
			Global_20361 = 1;
			NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(Global_20364, "GET_CURRENT_SELECTION");
			iLocal_41 = GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
		
			while (!GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(iLocal_41))
			{
				SYSTEM::WAIT(0);
			}
		
			iLocal_46 = GRAPHICS::GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_INT(iLocal_41);
		
			if (iLocal_46 < 0)
				iLocal_46 = 0;
		
			Global_9058[Global_20383 /*2811*/][iLocal_43 /*281*/].f_259 = uLocal_18[iLocal_46];
		
			if (iLocal_43 == 2)
			{
				num = Global_9058[Global_20383 /*2811*/][iLocal_43 /*281*/].f_259;
				Global_113648.f_14053[Global_20383 /*20*/].f_6 = Global_9058[Global_20383 /*2811*/][2 /*281*/].f_260[num];
				func_46(Global_20364, "SET_THEME", SYSTEM::TO_FLOAT(Global_113648.f_14053[Global_20383 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
			
				if (Global_78558)
				{
					Global_4542573 = Global_9058[3 /*2811*/][2 /*281*/].f_259;
					func_20(2030, Global_9058[3 /*2811*/][2 /*281*/].f_259, -1, true, false);
					func_46(Global_20364, "SET_THEME", SYSTEM::TO_FLOAT(Global_4542573), -1082130432, -1082130432, -1082130432, -1082130432);
				}
				else
				{
					func_46(Global_20364, "SET_THEME", SYSTEM::TO_FLOAT(Global_113648.f_14053[Global_20383 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				}
			
				func_19();
				func_18(Global_20364, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(22), SYSTEM::TO_FLOAT(iLocal_45), SYSTEM::TO_FLOAT(23), -1f, -1f, &Global_9058[Global_20383 /*2811*/][iLocal_43 /*281*/].f_7[uLocal_18[iLocal_45] /*4*/], 0, 0, 0, 0);
				func_18(Global_20364, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(22), SYSTEM::TO_FLOAT(iLocal_46), SYSTEM::TO_FLOAT(48), -1f, -1f, &Global_9058[Global_20383 /*2811*/][iLocal_43 /*281*/].f_7[uLocal_18[iLocal_46] /*4*/], 0, 0, 0, 0);
				iLocal_45 = iLocal_46;
				func_46(Global_20364, "DISPLAY_VIEW", 22f, SYSTEM::TO_FLOAT(iLocal_46), -1082130432, -1082130432, -1082130432);
			}
		
			if (iLocal_43 == 4)
			{
				Global_113648.f_14053[Global_20383 /*20*/].f_9 = Global_9058[Global_20383 /*2811*/][iLocal_43 /*281*/].f_259;
			
				if (Global_78558)
				{
					Global_4542574 = Global_9058[3 /*2811*/][4 /*281*/].f_259;
					func_20(2029, Global_9058[3 /*2811*/][4 /*281*/].f_259, -1, true, false);
				
					if (Global_4542574 == 0)
					{
						gamerHandle = { func_17(PLAYER::PLAYER_ID()) };
						num2 = 0;
						NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(0) == false;
					
						if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&gamerHandle) && NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(0) && Global_4542577 == 0)
						{
							SYSTEM::SETTIMERA(0);
						
							while (!NETWORK::NETWORK_CLAN_GET_EMBLEM_TXD_NAME(&gamerHandle, &txdName) && SYSTEM::TIMERA() < 3000)
							{
								SYSTEM::WAIT(0);
							
								if (SYSTEM::TIMERA() > 2999)
									num2 = 1;
							}
						
							if (num2 == 0)
							{
								NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(Global_20364, "SET_BACKGROUND_CREW_IMAGE");
								GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(_("~a~"));
								HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&txdName);
								GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
						}
						else
						{
							func_46(Global_20364, "SET_BACKGROUND_IMAGE", SYSTEM::TO_FLOAT(0), -1082130432, -1082130432, -1082130432, -1082130432);
						}
					}
					else
					{
						func_46(Global_20364, "SET_BACKGROUND_IMAGE", SYSTEM::TO_FLOAT(Global_4542574), -1082130432, -1082130432, -1082130432, -1082130432);
					}
				}
				else
				{
					func_46(Global_20364, "SET_BACKGROUND_IMAGE", SYSTEM::TO_FLOAT(Global_113648.f_14053[Global_20383 /*20*/].f_9), -1082130432, -1082130432, -1082130432, -1082130432);
				}
			
				func_18(Global_20364, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(22), SYSTEM::TO_FLOAT(iLocal_45), SYSTEM::TO_FLOAT(23), -1f, -1f, &Global_9058[Global_20383 /*2811*/][iLocal_43 /*281*/].f_7[uLocal_18[iLocal_45] /*4*/], 0, 0, 0, 0);
				func_18(Global_20364, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(22), SYSTEM::TO_FLOAT(iLocal_46), SYSTEM::TO_FLOAT(48), -1f, -1f, &Global_9058[Global_20383 /*2811*/][iLocal_43 /*281*/].f_7[uLocal_18[iLocal_46] /*4*/], 0, 0, 0, 0);
				iLocal_45 = iLocal_46;
				func_46(Global_20364, "DISPLAY_VIEW", 22f, SYSTEM::TO_FLOAT(iLocal_46), -1082130432, -1082130432, -1082130432);
			}
		
			if (iLocal_43 == 1)
			{
				Global_113648.f_14053[Global_20383 /*20*/].f_11 = { Global_9058[Global_20383 /*2811*/][1 /*281*/].f_144[Global_9058[Global_20383 /*2811*/][1 /*281*/].f_259 /*6*/] };
			
				if (Global_78558)
					func_20(1199, Global_9058[3 /*2811*/][1 /*281*/].f_259, -1, true, false);
			
				func_18(Global_20364, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(22), SYSTEM::TO_FLOAT(iLocal_45), SYSTEM::TO_FLOAT(18), -1f, -1f, &Global_9058[Global_20383 /*2811*/][iLocal_43 /*281*/].f_7[uLocal_18[iLocal_45] /*4*/], 0, 0, 0, 0);
				func_18(Global_20364, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(22), SYSTEM::TO_FLOAT(iLocal_46), SYSTEM::TO_FLOAT(48), -1f, -1f, &Global_9058[Global_20383 /*2811*/][iLocal_43 /*281*/].f_7[uLocal_18[iLocal_46] /*4*/], 0, 0, 0, 0);
				iLocal_45 = iLocal_46;
				func_46(Global_20364, "DISPLAY_VIEW", 22f, SYSTEM::TO_FLOAT(iLocal_46), -1082130432, -1082130432, -1082130432);
			}
		
			if (iLocal_43 == 3)
			{
				Global_113648.f_14053[Global_20383 /*20*/].f_10 = Global_9058[Global_20383 /*2811*/][iLocal_43 /*281*/].f_259;
			
				if (Global_78558)
					func_20(1198, Global_113648.f_14053[3 /*20*/].f_10, -1, true, false);
			
				if (Global_113648.f_14053[Global_20383 /*20*/].f_10 == 1)
				{
					bLocal_53 = true;
					iLocal_55 = MISC::GET_GAME_TIMER();
				}
				else
				{
					bLocal_53 = false;
				}
			}
		
			if (iLocal_43 == 0)
			{
				if (Global_78558 == true)
				{
					Global_9058[3 /*2811*/][iLocal_43 /*281*/].f_259 = uLocal_18[iLocal_46];
					func_18(Global_20364, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(22), SYSTEM::TO_FLOAT(iLocal_45), SYSTEM::TO_FLOAT(19), -1f, -1f, &Global_9058[Global_20383 /*2811*/][iLocal_43 /*281*/].f_7[uLocal_18[iLocal_45] /*4*/], 0, 0, 0, 0);
					func_18(Global_20364, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(22), SYSTEM::TO_FLOAT(iLocal_46), SYSTEM::TO_FLOAT(48), -1f, -1f, &Global_9058[Global_20383 /*2811*/][iLocal_43 /*281*/].f_7[uLocal_18[iLocal_46] /*4*/], 0, 0, 0, 0);
					iLocal_45 = iLocal_46;
					func_46(Global_20364, "DISPLAY_VIEW", 22f, SYSTEM::TO_FLOAT(iLocal_46), -1082130432, -1082130432, -1082130432);
					func_20(2092, Global_9058[3 /*2811*/][iLocal_43 /*281*/].f_259, -1, true, false);
				}
				else
				{
					Global_9058[0 /*2811*/][iLocal_43 /*281*/].f_259 = uLocal_18[iLocal_46];
					Global_9058[1 /*2811*/][iLocal_43 /*281*/].f_259 = uLocal_18[iLocal_46];
					Global_9058[2 /*2811*/][iLocal_43 /*281*/].f_259 = uLocal_18[iLocal_46];
				
					if (Global_9058[Global_20383 /*2811*/][0 /*281*/].f_259 == 2)
					{
						if (Global_43257 == 15)
						{
							if (Global_113648.f_14053.f_82 == 0)
							{
								HUD::SET_SCRIPT_VARIABLE_HUD_COLOUR(1);
								func_16(_("If you select Sleep Mode you will not receive incoming calls. This can pause game story progression. ~n~Select Normal Mode from this menu or trigger an existing mission to leave Sleep Mode."));
								fLocal_63 == fLocal_64;
								bLocal_56 = true;
							}
							else
							{
								func_46(Global_20364, "SET_SLEEP_MODE", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
								MISC::SET_BIT(&Global_8253, 25);
								MISC::SET_BIT(&Global_8254, 11);
							
								if (Global_113648.f_14053.f_83 == 0)
								{
									HUD::SET_SCRIPT_VARIABLE_HUD_COLOUR(1);
									func_15(_("When Sleep Mode is active, the Sleep symbol will be displayed near the Radar."), -1);
									Global_113648.f_14053.f_83 = 1;
								}
							}
						}
					}
					else
					{
						func_46(Global_20364, "SET_SLEEP_MODE", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
						MISC::CLEAR_BIT(&Global_8253, 25);
						MISC::SET_BIT(&Global_8254, 11);
					}
				}
			}
		
			func_13(Global_20364, "SET_HEADER", &Global_9058[Global_20383 /*2811*/][iLocal_43 /*281*/].f_7[Global_9058[Global_20383 /*2811*/][iLocal_43 /*281*/].f_259 /*4*/], 0, 0, 0, 0);
		
			if (func_4(0))
				func_3();
		}
	}

	return;
}

void func_13(Player plParam0, char* sParam1, char* sParam2, const char* sParam3, const char* sParam4, const char* sParam5, const char* sParam6) // Position - 0x1152 Hash - 0xD2A7E1F6 ^0xAFF0FF17
{
	NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(plParam0, sParam1);
	func_14(sParam2);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
		func_14(sParam3);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
		func_14(sParam4);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam5))
		func_14(sParam5);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam6))
		func_14(sParam6);

	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	return;
}

void func_14(const char* sParam0) // Position - 0x11AD Hash - 0x8E2F5FE2 ^0x29D9D432
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	return;
}

void func_15(char* sParam0, int iParam1) // Position - 0x11BF Hash - 0xCBB0D91 ^0x21070E5C
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam1);
	return;
}

void func_16(char* sParam0) // Position - 0x11D6 Hash - 0x99A98712 ^0xE46BE9F0
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, true, true, -1);
	return;
}

struct<13> func_17(Player plParam0) // Position - 0x11EC Hash - 0x3F3CEB62 ^0x60A9D262
{
	var gamerHandle;

	NETWORK::NETWORK_HANDLE_FROM_PLAYER(plParam0, &gamerHandle, 13);
	return gamerHandle;
}

void func_18(Player plParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, const char* sParam8, const char* sParam9, const char* sParam10, const char* sParam11) // Position - 0x1203 Hash - 0x39E054FF ^0xB04F1C48
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
		func_14(sParam7);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
		func_14(sParam8);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam9))
		func_14(sParam9);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam10))
		func_14(sParam10);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam11))
		func_14(sParam11);

	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	return;
}

void func_19() // Position - 0x12B6 Hash - 0x8961A3BB ^0x93F6EC7D
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		if (Global_20383 == 0)
		{
			switch (Global_113648.f_14053[Global_20383 /*20*/].f_6)
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
	
		if (Global_20383 == 1)
		{
			switch (Global_113648.f_14053[Global_20383 /*20*/].f_6)
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
	
		if (Global_20383 == 2)
		{
			switch (Global_113648.f_14053[Global_20383 /*20*/].f_6)
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
	
		if (Global_20383 == 3)
		{
			switch (Global_4542573)
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

	return;
}

void func_20(int iParam0, int iParam1, int iParam2, BOOL bParam3, BOOL bParam4) // Position - 0x152D Hash - 0x7D768555 ^0x693A841
{
	Hash statName;

	bParam4;
	statName = Global_2805027[iParam0 /*3*/][func_21(iParam2)];

	if (statName != 0)
		STATS::STAT_SET_INT(statName, iParam1, bParam3);

	return;
}

int func_21(int iParam0) // Position - 0x155D Hash - 0x1A3F3220 ^0x1A3F3220
{
	int num;
	int num2;

	num = iParam0;

	if (num == -1)
	{
		num2 = func_22();
	
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

int func_22() // Position - 0x1591 Hash - 0x47FF56D2 ^0x47FF56D2
{
	return Global_1574918;
}

void func_23() // Position - 0x159D Hash - 0xDD2ADDA2 ^0x5ABDD2B5
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Accept", &Global_20372, true);
		func_24();
	}

	return;
}

void func_24() // Position - 0x15C2 Hash - 0xD56EB04 ^0x9DB5936E
{
	if (func_25())
		MOBILE::CELL_SET_INPUT(5);

	return;
}

BOOL func_25() // Position - 0x15D6 Hash - 0xE8350107 ^0x112591EA
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

void func_26() // Position - 0x161D Hash - 0x92ECD751 ^0x93038335
{
	if (Global_20361 == 0)
	{
		if (func_10(FRONTEND_CONTROL, Global_20352, 0))
		{
			func_23();
			Global_20361 = 1;
			NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(Global_20364, "GET_CURRENT_SELECTION");
			iLocal_41 = GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
		
			while (!GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(iLocal_41))
			{
				SYSTEM::WAIT(0);
			}
		
			iLocal_44 = GRAPHICS::GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_INT(iLocal_41);
			iLocal_43 = uLocal_18[iLocal_44];
		
			switch (iLocal_43)
			{
				case 0:
					if (Global_78558 == false)
					{
						if (Global_43257 == 15)
						{
							if (Global_113648.f_14053.f_82 == 0)
							{
								HUD::SET_SCRIPT_VARIABLE_HUD_COLOUR(1);
								func_16(_("If you select Sleep Mode you will not receive incoming calls. This can pause game story progression. ~n~Select Normal Mode from this menu or trigger an existing mission to leave Sleep Mode."));
								fLocal_63 == fLocal_64;
								bLocal_56 = true;
							}
						}
					}
					break;
			
				case 1:
					break;
			
				case 2:
					break;
			
				case 3:
					break;
			}
		
			if (Global_20383.f_1 > 3)
				Global_20383.f_1 = 8;
		
			func_27();
			bLocal_52 = true;
			iLocal_55 = MISC::GET_GAME_TIMER();
		}
	}

	return;
}

void func_27() // Position - 0x16EF Hash - 0x50A3369 ^0x7DA30B86
{
	var unk;
	int unk2;
	var unk3;
	int unk4;
	int unk5;

	func_46(Global_20364, "SET_DATA_SLOT_EMPTY", 22f, -1082130432, -1082130432, -1082130432, -1082130432);
	iLocal_39 = 0;
	unk = 19;
	value = 0;

	if (Global_78558)
	{
		TEXT_LABEL_ASSIGN_STRING(&Global_9058[3 /*2811*/][4 /*281*/].f_7[0 /*4*/], _("Crew Emblem"), 16);
		gamerHandle = { func_17(PLAYER::PLAYER_ID()) };
	
		if (!NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&gamerHandle))
			TEXT_LABEL_ASSIGN_STRING(&Global_9058[3 /*2811*/][4 /*281*/].f_7[0 /*4*/], _("Default"), 16);
	}

	while (value < 19)
	{
		num = 0;
		num2 = 18;
		Global_9058[Global_20383 /*2811*/][iLocal_43 /*281*/].f_84[num2] = 5000;
	
		while (num < 19)
		{
			if (Global_9058[Global_20383 /*2811*/][iLocal_43 /*281*/].f_124[num] == 1)
			{
				if (unk[num] == 0)
				{
					if (Global_9058[Global_20383 /*2811*/][iLocal_43 /*281*/].f_84[num] < Global_9058[Global_20383 /*2811*/][iLocal_43 /*281*/].f_84[num2])
					{
						num2 = num;
						func_18(Global_20364, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(22), SYSTEM::TO_FLOAT(value), SYSTEM::TO_FLOAT(Global_9058[Global_20383 /*2811*/][iLocal_43 /*281*/].f_104[num2]), -1f, -1f, &Global_9058[Global_20383 /*2811*/][iLocal_43 /*281*/].f_7[num2 /*4*/], 0, 0, 0, 0);
					}
				}
			}
		
			num = num + 1;
		}
	
		uLocal_18[value] = num2;
		unk[num2] = 1;
	
		if (MISC::ARE_STRINGS_EQUAL(&Global_9058[Global_20383 /*2811*/][iLocal_43 /*281*/].f_7[Global_9058[Global_20383 /*2811*/][iLocal_43 /*281*/].f_259 /*4*/], &Global_9058[Global_20383 /*2811*/][iLocal_43 /*281*/].f_7[num2 /*4*/]))
		{
			iLocal_48 = value;
		
			if (iLocal_48 < 0)
				iLocal_48 = 0;
		
			if (iLocal_43 == 1 || iLocal_43 == 4 || iLocal_43 == 2)
			{
				func_18(Global_20364, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(22), SYSTEM::TO_FLOAT(value), SYSTEM::TO_FLOAT(48), -1f, -1f, &Global_9058[Global_20383 /*2811*/][iLocal_43 /*281*/].f_7[num2 /*4*/], 0, 0, 0, 0);
				iLocal_45 = value;
			}
		
			if (iLocal_43 == 0 && Global_78558 == true)
			{
				func_18(Global_20364, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(22), SYSTEM::TO_FLOAT(value), SYSTEM::TO_FLOAT(48), -1f, -1f, &Global_9058[Global_20383 /*2811*/][iLocal_43 /*281*/].f_7[num2 /*4*/], 0, 0, 0, 0);
				iLocal_45 = value;
			}
		}
	
		if (Global_9058[Global_20383 /*2811*/][iLocal_43 /*281*/].f_124[value] == 1)
			iLocal_39 = iLocal_39 + 1;
	
		value = value + 1;
	}

	func_46(Global_20364, "DISPLAY_VIEW", 22f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_13(Global_20364, "SET_HEADER", &Global_9058[Global_20383 /*2811*/][iLocal_43 /*281*/].f_7[Global_9058[Global_20383 /*2811*/][iLocal_43 /*281*/].f_259 /*4*/], 0, 0, 0, 0);

	if (Global_20371)
	{
		func_18(Global_20364, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, _("SELECT"), 0, 0, 0, 0);
		func_18(Global_20364, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, _("BACK"), 0, 0, 0, 0);
	}
	else
	{
		func_18(Global_20364, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
		func_18(Global_20364, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
	}

	func_18(Global_20364, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
	MISC::CLEAR_BIT(&Global_8253, 17);
	return;
}

void func_28() // Position - 0x1A34 Hash - 0xFDECAEB0 ^0xE7593BB9
{
	if (bLocal_62)
		if (SYSTEM::TIMERA() > 50)
			bLocal_62 = false;

	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(FRONTEND_CONTROL))
	{
		if (func_10(FRONTEND_CONTROL, INPUT_CELLPHONE_SCROLL_BACKWARD, 0))
		{
			if (iLocal_40 > 0)
				iLocal_40 = iLocal_40 - 1;
		
			func_31();
		}
	
		if (func_10(FRONTEND_CONTROL, INPUT_CELLPHONE_SCROLL_FORWARD, 0))
		{
			iLocal_40 = iLocal_40 + 1;
		
			if (iLocal_40 == iLocal_39)
				iLocal_40 = 0;
		
			func_29();
		}
	}

	if (bLocal_62 == false)
	{
		if (func_10(FRONTEND_CONTROL, Global_20359, 0))
		{
			if (iLocal_40 > 0)
				iLocal_40 = iLocal_40 - 1;
		
			func_31();
			bLocal_62 = true;
			SYSTEM::SETTIMERA(0);
		}
	
		if (func_10(FRONTEND_CONTROL, Global_20360, 0))
		{
			iLocal_40 = iLocal_40 + 1;
		
			if (iLocal_40 == iLocal_39)
				iLocal_40 = 0;
		
			func_29();
			bLocal_62 = true;
			SYSTEM::SETTIMERA(0);
		}
	}

	return;
}

void func_29() // Position - 0x1AE1 Hash - 0x27F2007C ^0xC3C664B3
{
	func_46(Global_20364, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(3), -1082130432, -1082130432, -1082130432, -1082130432);
	AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_20372, true);
	func_30();
	return;
}

void func_30() // Position - 0x1B1E Hash - 0x47667904 ^0x5056AC19
{
	if (func_25())
		if (Global_20589 == 0)
			MOBILE::CELL_SET_INPUT(2);
		else
			MOBILE::CELL_SET_INPUT(1);

	return;
}

void func_31() // Position - 0x1B41 Hash - 0xE70DEC1F ^0x240AACFE
{
	func_46(Global_20364, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(1), -1082130432, -1082130432, -1082130432, -1082130432);
	AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_20372, true);
	func_32();
	return;
}

void func_32() // Position - 0x1B7E Hash - 0xA6C955E7 ^0xAF2E403B
{
	if (func_25())
		if (Global_20589 == 0)
			MOBILE::CELL_SET_INPUT(1);
		else
			MOBILE::CELL_SET_INPUT(2);

	return;
}

void func_33() // Position - 0x1BA1 Hash - 0xB2338CED ^0x7D3B560B
{
	var unk;
	int unk2;
	int unk3;
	int unk4;

	iLocal_39 = 0;
	unk = 20;

	for (i = 0; i < 9; i = i + 1)
	{
		num = 0;
		num2 = 9;
		Global_9058[Global_20383 /*2811*/][num2 /*281*/] = 5000;
	
		if (MISC::GET_PROFILE_SETTING(2) == 0)
			Global_9058[Global_20383 /*2811*/][3 /*281*/].f_280 = 0;
		else
			Global_9058[Global_20383 /*2811*/][3 /*281*/].f_280 = 1;
	
		while (num < 9)
		{
			if (Global_9058[Global_20383 /*2811*/][num /*281*/].f_280 == 1)
			{
				if (unk[num] == 0)
				{
					if (Global_9058[Global_20383 /*2811*/][num /*281*/] < Global_9058[Global_20383 /*2811*/][num2 /*281*/])
					{
						if (Global_78558)
						{
							if (num == 0)
							{
								num2 = num;
								func_42(num, num2);
								func_18(Global_20364, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(13), SYSTEM::TO_FLOAT(i), SYSTEM::TO_FLOAT(iLocal_49), -1f, -1f, &(Global_9058[Global_20383 /*2811*/][num2 /*281*/].f_2), 0, 0, 0, 0);
							}
							else
							{
								num2 = num;
								func_42(num, num2);
								func_18(Global_20364, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(13), SYSTEM::TO_FLOAT(i), SYSTEM::TO_FLOAT(iLocal_49), -1f, -1f, &(Global_9058[Global_20383 /*2811*/][num2 /*281*/].f_2), 0, 0, 0, 0);
							}
						}
						else if (func_34() == 2)
						{
							if (num == 4 || num == 5)
							{
							}
							else
							{
								num2 = num;
								func_42(num, num2);
								func_18(Global_20364, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(13), SYSTEM::TO_FLOAT(i), SYSTEM::TO_FLOAT(iLocal_49), -1f, -1f, &(Global_9058[Global_20383 /*2811*/][num2 /*281*/].f_2), 0, 0, 0, 0);
							}
						}
						else if (num == 5)
						{
						}
						else
						{
							num2 = num;
							func_42(num, num2);
							func_18(Global_20364, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(13), SYSTEM::TO_FLOAT(i), SYSTEM::TO_FLOAT(iLocal_49), -1f, -1f, &(Global_9058[Global_20383 /*2811*/][num2 /*281*/].f_2), 0, 0, 0, 0);
						}
					}
				}
			}
		
			num = num + 1;
		}
	
		uLocal_18[i] = num2;
		unk[num2] = 1;
	
		if (Global_9058[Global_20383 /*2811*/][i /*281*/].f_280 == 1)
			iLocal_39 = iLocal_39 + 1;
	}

	func_46(Global_20364, "DISPLAY_VIEW", 13f, SYSTEM::TO_FLOAT(iLocal_44), -1082130432, -1082130432, -1082130432);
	func_13(Global_20364, "SET_HEADER", _("Settings"), 0, 0, 0, 0);

	if (Global_20371)
	{
		func_18(Global_20364, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, _("SELECT"), 0, 0, 0, 0);
		func_18(Global_20364, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, _("BACK"), 0, 0, 0, 0);
	}
	else
	{
		func_18(Global_20364, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
		func_18(Global_20364, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
	}

	func_18(Global_20364, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
	MISC::CLEAR_BIT(&Global_8253, 17);
	return;
}

int func_34() // Position - 0x1E6D Hash - 0xDE820CA2 ^0x7D97FBB8
{
	if (Global_78558)
		Global_20383 = 3;
	else
		Global_20383 = func_35();

	if (Global_20383 > 3)
		Global_20383 = 3;

	return Global_113648.f_14053[Global_20383 /*20*/].f_7;
}

int func_35() // Position - 0x1EA3 Hash - 0x3C5423D7 ^0x3C5423D7
{
	func_36();
	return Global_113648.f_2365.f_539.f_4321;
}

void func_36() // Position - 0x1EBC Hash - 0xD1F2D853 ^0xF9F5FD4D
{
	int num;

	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_40(Global_113648.f_2365.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			num = func_39(PLAYER::PLAYER_PED_ID());
		
			if (func_38(num) && !func_37(14) || Global_112599)
			{
				if (Global_113648.f_2365.f_539.f_4321 != num && func_38(Global_113648.f_2365.f_539.f_4321))
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

BOOL func_37(int iParam0) // Position - 0x1FB9 Hash - 0x937D8816 ^0x937D8816
{
	return Global_43257 == iParam0;
}

BOOL func_38(int iParam0) // Position - 0x1FC7 Hash - 0x8907F004 ^0x8907F004
{
	return iParam0 < 3;
}

int func_39(Ped pedParam0) // Position - 0x1FD3 Hash - 0xAC4E9801 ^0xB379A75F
{
	int i;
	Hash entityModel;

	if (ENTITY::DOES_ENTITY_EXIST(pedParam0))
	{
		entityModel = ENTITY::GET_ENTITY_MODEL(pedParam0);
	
		for (i = 0; i <= 2; i = i + 1)
		{
			if (func_40(i) == entityModel)
				return i;
		}
	}

	return 145;
}

Hash func_40(int iParam0) // Position - 0x2010 Hash - 0xADCB9755 ^0xADCB9755
{
	if (func_38(iParam0))
		return func_41(iParam0);
	else
		iParam0 != 145;

	return 0;
}

Hash func_41(int iParam0) // Position - 0x2035 Hash - 0xE4CEEC2C ^0xE4CEEC2C
{
	return Global_2028[iParam0 /*29*/];
}

void func_42(int iParam0, int iParam1) // Position - 0x2044 Hash - 0xA52A3B89 ^0xA52A3B89
{
	switch (iParam0)
	{
		case 0:
			if (Global_78558)
				iLocal_49 = 19;
			else if (Global_9058[Global_20383 /*2811*/][0 /*281*/].f_259 == 2)
				iLocal_49 = 26;
			else
				iLocal_49 = 25;
			break;
	
		case 3:
			if (Global_9058[Global_20383 /*2811*/][3 /*281*/].f_259 == 1)
				iLocal_49 = 20;
			else
				iLocal_49 = 21;
			break;
	
		default:
			iLocal_49 = Global_9058[Global_20383 /*2811*/][iParam1 /*281*/].f_6;
			break;
	}

	return;
}

void func_43() // Position - 0x20C6 Hash - 0x62DD9502 ^0xE4AB0EE2
{
	if (Global_43257 != 15)
	{
		func_45();
		Global_9058[Global_20383 /*2811*/][0 /*281*/].f_124[2] = 0;
	}

	return;
}

int func_44(int iParam0, int iParam1, int iParam2) // Position - 0x20ED Hash - 0x4BC84F7B ^0x370D7D6F
{
	Hash statHash;
	int outValue;

	if (iParam0 != 14192)
	{
		iParam2 == 0;
		statHash = Global_2805027[iParam0 /*3*/][func_21(iParam1)];
	
		if (STATS::STAT_GET_INT(statHash, &outValue, -1))
			return outValue;
	}

	return 0;
}

void func_45() // Position - 0x212A Hash - 0x98476CE1 ^0x250FEB7C
{
	if (func_37(14))
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
		Global_20383 = func_35();
	
		if (Global_20383 == 145)
			Global_20383 = 3;
	
		if (Global_78558)
			Global_20383 = 3;
	
		if (Global_20383 > 3)
			Global_20383 = 3;
	}

	return;
}

void func_46(Player plParam0, char* sParam1, float fParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x21CC Hash - 0x5F496D0E ^0x4BC02ED5
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

