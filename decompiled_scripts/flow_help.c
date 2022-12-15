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
	int iLocal_37 = 0;
#endregion

void main() // Position - 0x0 Hash - 0x5D84F89F ^0x5D84F89F
{
	int i;
	int num;
	int j;

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

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(50))
		func_23();

	while (true)
	{
		if (Global_113648.f_20412.f_145 > 0 || Global_112288)
		{
			if (!Global_112288)
			{
				if (Global_43257 != 6 && Global_43257 != 15 && !Global_96688)
					func_23();
			
				if (!Global_112287)
				{
					if (Global_113648.f_20412.f_145 > 0)
					{
						if (func_20(&Global_113648.f_20412[iLocal_37 /*16*/]))
						{
							if (func_18(func_19()))
							{
								if (IS_BIT_SET(Global_113648.f_20412[iLocal_37 /*16*/].f_11, func_12()))
								{
									if (Global_113648.f_20412[iLocal_37 /*16*/].f_12 == Global_113648.f_20412.f_146[func_12()])
									{
										if (MISC::GET_GAME_TIMER() > Global_112290)
										{
											if (MISC::GET_GAME_TIMER() > Global_113648.f_20412[iLocal_37 /*16*/].f_8)
											{
												if (MISC::ARE_STRINGS_EQUAL(&(Global_113648.f_20412[iLocal_37 /*16*/].f_4), ""))
												{
													HUD::ADD_NEXT_MESSAGE_TO_PREVIOUS_BRIEFS(true);
													func_11(&Global_113648.f_20412[iLocal_37 /*16*/]);
												}
												else
												{
													HUD::ADD_NEXT_MESSAGE_TO_PREVIOUS_BRIEFS(true);
													func_10(&Global_113648.f_20412[iLocal_37 /*16*/], &(Global_113648.f_20412[iLocal_37 /*16*/].f_4));
												}
											
												if (Global_113648.f_20412[iLocal_37 /*16*/].f_13 != 0)
													func_9(Global_113648.f_20412[iLocal_37 /*16*/].f_13, 0);
											
												uLocal_20 = { Global_113648.f_20412[iLocal_37 /*16*/] };
												uLocal_20.f_4 = { Global_113648.f_20412[iLocal_37 /*16*/].f_4 };
												uLocal_20.f_8 = Global_113648.f_20412[iLocal_37 /*16*/].f_8;
												uLocal_20.f_10 = Global_113648.f_20412[iLocal_37 /*16*/].f_10;
												uLocal_20.f_9 = Global_113648.f_20412[iLocal_37 /*16*/].f_9;
												uLocal_20.f_11 = Global_113648.f_20412[iLocal_37 /*16*/].f_11;
												uLocal_20.f_12 = Global_113648.f_20412[iLocal_37 /*16*/].f_12;
												uLocal_20.f_13 = Global_113648.f_20412[iLocal_37 /*16*/].f_13;
												uLocal_20.f_14 = Global_113648.f_20412[iLocal_37 /*16*/].f_14;
												uLocal_20.f_15 = Global_113648.f_20412[iLocal_37 /*16*/].f_15;
												uLocal_20.f_16 = 0;
												Global_112291 = { Global_113648.f_20412[iLocal_37 /*16*/] };
												Global_112289 = MISC::GET_GAME_TIMER();
											
												for (i = iLocal_37; i <= Global_113648.f_20412.f_145 - 2; i = i + 1)
												{
													func_8(i, i + 1);
												}
											
												func_7(Global_113648.f_20412.f_145 - 1);
												Global_113648.f_20412.f_145 = Global_113648.f_20412.f_145 - 1;
												func_6();
												Global_112288 = true;
											}
										}
									}
								}
							}
						}
					}
				}
			}
			else if (!func_4())
			{
				if (MISC::ARE_STRINGS_EQUAL(&(uLocal_20.f_4), ""))
					if (func_3(&uLocal_20))
						HUD::SET_SCRIPT_VARIABLE_HUD_COLOUR(0);
				else if (func_2(&uLocal_20, &(uLocal_20.f_4)))
					HUD::SET_SCRIPT_VARIABLE_HUD_COLOUR(0);
			
				if (MISC::GET_GAME_TIMER() - Global_112289 > 4000 || uLocal_20.f_16)
				{
					if (uLocal_20.f_14 != 0)
						func_9(uLocal_20.f_14, 0);
				
					Global_112290 = MISC::GET_GAME_TIMER() + 250;
				}
				else
				{
					if (uLocal_20.f_10 != -1)
						num = 20000;
					else
						num = -1;
				
					func_1(&uLocal_20, &(uLocal_20.f_4), uLocal_20.f_12, 1000, num, uLocal_20.f_9, uLocal_20.f_11, uLocal_20.f_13, uLocal_20.f_14, uLocal_20.f_15);
				}
			
				TEXT_LABEL_ASSIGN_STRING(&uLocal_20, "", 16);
				TEXT_LABEL_ASSIGN_STRING(&(uLocal_20.f_4), "", 16);
				uLocal_20.f_8 = 0;
				uLocal_20.f_9 = 0;
				uLocal_20.f_10 = -1;
				uLocal_20.f_11 = 0;
				uLocal_20.f_12 = 0;
				uLocal_20.f_13 = 0;
				uLocal_20.f_14 = 0;
				uLocal_20.f_15 = 0;
				uLocal_20.f_16 = 0;
				Global_112289 = 0;
				Global_112288 = false;
			}
		
			if (!MISC::ARE_STRINGS_EQUAL(&Global_113648.f_20412[iLocal_37 /*16*/], &uLocal_20) && !MISC::ARE_STRINGS_EQUAL(&Global_113648.f_20412[iLocal_37 /*16*/], ""))
			{
				if (Global_113648.f_20412[iLocal_37 /*16*/].f_10 != -1)
				{
					if (MISC::GET_GAME_TIMER() > Global_113648.f_20412[iLocal_37 /*16*/].f_10)
					{
						for (j = iLocal_37; j <= Global_113648.f_20412.f_145 - 2; j = j + 1)
						{
							func_8(j, j + 1);
						}
					
						func_7(Global_113648.f_20412.f_145 - 1);
						Global_113648.f_20412.f_145 = Global_113648.f_20412.f_145 - 1;
						func_6();
					}
				}
			}
		
			iLocal_37 = iLocal_37 + 1;
		
			if (iLocal_37 >= Global_113648.f_20412.f_145)
				iLocal_37 = 0;
		}
		else if (Global_43257 != 6 && Global_43257 != 15 && !Global_96688)
		{
			func_23();
		}
	
		SYSTEM::WAIT(0);
	}

	return;
}

void func_1(const char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9) // Position - 0x472 Hash - 0x8D168895 ^0x7B608AFF
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
		Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/].f_12 = uParam2;
		Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/].f_13 = iParam7;
		Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/].f_14 = iParam8;
		Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/].f_15 = uParam9;
	
		if (iParam4 != -1)
			Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/].f_10 = MISC::GET_GAME_TIMER() + iParam3 + iParam4;
		else
			Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/].f_10 = -1;
	
		Global_113648.f_20412.f_145 = Global_113648.f_20412.f_145 + 1;
		func_6();
	}

	return;
}

BOOL func_2(const char* sParam0, const char* sParam1) // Position - 0x644 Hash - 0xCB708C57 ^0x57AB1DDC
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

BOOL func_3(const char* sParam0) // Position - 0x65D Hash - 0xCD6A3595 ^0xB0E86AA0
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

BOOL func_4() // Position - 0x670 Hash - 0x9B7FFE90 ^0x191B8639
{
	if (CUTSCENE::IS_CUTSCENE_PLAYING())
		return false;

	if (func_5())
		return false;

	if (uLocal_20.f_9 != -1 && MISC::GET_GAME_TIMER() - Global_112289 > uLocal_20.f_9)
		return false;

	if (Global_112287)
		return false;

	if (CUTSCENE::IS_CUTSCENE_PLAYING())
		return false;

	if (MISC::ARE_STRINGS_EQUAL(&(uLocal_20.f_4), ""))
	{
		if (!func_3(&uLocal_20))
		{
			uLocal_20.f_16 = 1;
			return false;
		}
	}
	else if (!func_2(&uLocal_20, &(uLocal_20.f_4)))
	{
		uLocal_20.f_16 = 1;
		return false;
	}

	return true;
}

BOOL func_5() // Position - 0x6FF Hash - 0x3CA1BB47 ^0xB78A1ACB
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(-1424752554) > 0)
		return true;

	return false;
}

void func_6() // Position - 0x719 Hash - 0xCF8881D1 ^0x40507183
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

void func_7(int iParam0) // Position - 0x830 Hash - 0x1BA792FD ^0x7C156EE4
{
	TEXT_LABEL_ASSIGN_STRING(&Global_113648.f_20412[iParam0 /*16*/], "", 16);
	TEXT_LABEL_ASSIGN_STRING(&(Global_113648.f_20412[iParam0 /*16*/].f_4), "", 16);
	Global_113648.f_20412[iParam0 /*16*/].f_8 = 0;
	Global_113648.f_20412[iParam0 /*16*/].f_9 = 0;
	Global_113648.f_20412[iParam0 /*16*/].f_11 = 0;
	Global_113648.f_20412[iParam0 /*16*/].f_10 = -1;
	Global_113648.f_20412[iParam0 /*16*/].f_12 = 0;
	Global_113648.f_20412[iParam0 /*16*/].f_13 = 0;
	Global_113648.f_20412[iParam0 /*16*/].f_14 = 0;
	Global_113648.f_20412[iParam0 /*16*/].f_15 = 0;
	return;
}

void func_8(int iParam0, int iParam1) // Position - 0x8C8 Hash - 0x812DB4B8 ^0x93F5D8C6
{
	Global_113648.f_20412[iParam0 /*16*/] = { Global_113648.f_20412[iParam1 /*16*/] };
	Global_113648.f_20412[iParam0 /*16*/].f_4 = { Global_113648.f_20412[iParam1 /*16*/].f_4 };
	Global_113648.f_20412[iParam0 /*16*/].f_8 = Global_113648.f_20412[iParam1 /*16*/].f_8;
	Global_113648.f_20412[iParam0 /*16*/].f_10 = Global_113648.f_20412[iParam1 /*16*/].f_10;
	Global_113648.f_20412[iParam0 /*16*/].f_9 = Global_113648.f_20412[iParam1 /*16*/].f_9;
	Global_113648.f_20412[iParam0 /*16*/].f_11 = Global_113648.f_20412[iParam1 /*16*/].f_11;
	Global_113648.f_20412[iParam0 /*16*/].f_12 = Global_113648.f_20412[iParam1 /*16*/].f_12;
	Global_113648.f_20412[iParam0 /*16*/].f_13 = Global_113648.f_20412[iParam1 /*16*/].f_13;
	Global_113648.f_20412[iParam0 /*16*/].f_14 = Global_113648.f_20412[iParam1 /*16*/].f_14;
	Global_113648.f_20412[iParam0 /*16*/].f_15 = Global_113648.f_20412[iParam1 /*16*/].f_15;
	return;
}

void func_9(int iParam0, int iParam1) // Position - 0x9D8 Hash - 0xEFDF2B54 ^0x1CE7BA3B
{
	if (iParam0 == 235 || iParam0 == 0)
		return;

	Global_113648.f_8615[iParam0] = 1;
	Global_113648.f_8615.f_236[iParam0] = MISC::GET_GAME_TIMER() + iParam1;
	return;
}

void func_10(const char* sParam0, const char* sParam1) // Position - 0xA15 Hash - 0xAFD19873 ^0xEB95752D
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, true, true, -1);
	return;
}

void func_11(const char* sParam0) // Position - 0xA31 Hash - 0x99A98712 ^0xE46BE9F0
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, true, true, -1);
	return;
}

int func_12() // Position - 0xA47 Hash - 0x3C5423D7 ^0x3C5423D7
{
	func_13();
	return Global_113648.f_2365.f_539.f_4321;
}

void func_13() // Position - 0xA60 Hash - 0xD1F2D853 ^0xF9F5FD4D
{
	int num;

	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_16(Global_113648.f_2365.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			num = func_15(PLAYER::PLAYER_PED_ID());
		
			if (func_18(num) && !func_14(14) || Global_112599)
			{
				if (Global_113648.f_2365.f_539.f_4321 != num && func_18(Global_113648.f_2365.f_539.f_4321))
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

BOOL func_14(int iParam0) // Position - 0xB5D Hash - 0x937D8816 ^0x937D8816
{
	return Global_43257 == iParam0;
}

int func_15(Ped pedParam0) // Position - 0xB6B Hash - 0xAC4E9801 ^0xB379A75F
{
	int i;
	Hash entityModel;

	if (ENTITY::DOES_ENTITY_EXIST(pedParam0))
	{
		entityModel = ENTITY::GET_ENTITY_MODEL(pedParam0);
	
		for (i = 0; i <= 2; i = i + 1)
		{
			if (func_16(i) == entityModel)
				return i;
		}
	}

	return 145;
}

Hash func_16(int iParam0) // Position - 0xBA8 Hash - 0xADCB9755 ^0xADCB9755
{
	if (func_18(iParam0))
		return func_17(iParam0);
	else
		iParam0 != 145;

	return 0;
}

Hash func_17(int iParam0) // Position - 0xBCD Hash - 0xE4CEEC2C ^0xE4CEEC2C
{
	return Global_2028[iParam0 /*29*/];
}

BOOL func_18(int iParam0) // Position - 0xBDC Hash - 0x8907F004 ^0x8907F004
{
	return iParam0 < 3;
}

int func_19() // Position - 0xBE8 Hash - 0x3C5423D7 ^0x3C5423D7
{
	func_13();
	return Global_113648.f_2365.f_539.f_4321;
}

BOOL func_20(const char* sParam0) // Position - 0xC01 Hash - 0x9BD7833E ^0xF401F44E
{
	if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
		return false;

	if (CUTSCENE::IS_CUTSCENE_PLAYING())
		return false;

	if (!CAM::IS_SCREEN_FADED_IN())
		return false;

	if (HUD::IS_WARNING_MESSAGE_ACTIVE())
		return false;

	if (func_22())
		return false;

	if (func_5())
		return false;

	if (sParam0->f_12 < 3)
	{
		if (func_21())
			return false;
	
		if (Global_78556)
			return false;
	
		if (Global_97601)
			return false;
	
		if (!IS_BIT_SET(sParam0->f_15, 1))
			if (Global_97609)
				return false;
	}

	return true;
}

BOOL func_21() // Position - 0xC8B Hash - 0xE663B8F6 ^0xE663B8F6
{
	if (Global_78819)
		return true;
	else if (Global_63356 && !Global_63362)
		return true;

	return false;
}

BOOL func_22() // Position - 0xCB5 Hash - 0x7FE517FE ^0x128A3BC8
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return Global_98159.f_44 == 1;

	return false;
}

void func_23() // Position - 0xCD1 Hash - 0xB1D2FD2A ^0x17917945
{
	if (Global_112288)
		if (MISC::ARE_STRINGS_EQUAL(&(uLocal_20.f_4), ""))
			if (func_3(&uLocal_20))
				HUD::SET_SCRIPT_VARIABLE_HUD_COLOUR(1);
		else if (func_2(&uLocal_20, &(uLocal_20.f_4)))
			HUD::SET_SCRIPT_VARIABLE_HUD_COLOUR(1);

	Global_112289 = 0;
	Global_112288 = false;
	SCRIPT::TERMINATE_THIS_THREAD();
	return;
}

