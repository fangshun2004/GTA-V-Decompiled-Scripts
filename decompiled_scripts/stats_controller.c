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
	char* sLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	int iLocal_21 = 0;
	float fLocal_22 = 0f;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	float fLocal_26 = 0f;
	float fLocal_27 = 0f;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	BOOL bLocal_59 = 0;
	BOOL bLocal_60 = 0;
	BOOL bLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	BOOL bLocal_64 = 0;
	int iLocal_65 = 0;
	BOOL bLocal_66 = 0;
	BOOL bLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	BOOL bLocal_74 = 0;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	int iLocal_77 = 0;
	int iLocal_78 = 0;
	int iLocal_79 = 0;
	BOOL bLocal_80 = 0;
	BOOL bLocal_81 = 0;
	BOOL bLocal_82 = 0;
	int iLocal_83 = 0;
	int iLocal_84 = 0;
#endregion

void main() // Hash - 0x5D84F89F ^0x5D84F89F
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
	sLocal_18 = "NULL";
	iLocal_21 = 3;
	fLocal_22 = 0f;
	fLocal_26 = -0.0375f;
	fLocal_27 = 0.17f;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	iLocal_53 = 2;
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(32))
		SCRIPT::TERMINATE_THIS_THREAD();

	while (true)
	{
		func_104();
	
		switch (iLocal_54)
		{
			case 0:
				func_99();
				break;
		
			case 1:
				func_90();
				func_2();
				Global_97965 = false;
				break;
		
			case 2:
				func_1();
				break;
		}
	
		SYSTEM::WAIT(0);
	}

	return;
}

void func_1() // Hash - 0x69D2274F ^0x69D2274F
{
	iLocal_54 = 0;
	return;
}

void func_2() // Hash - 0xB8F71D41 ^0x6DBD8EEC
{
	int num;
	BOOL flag;
	int i;
	int outValue;
	int value;
	int num2;
	Hash statHash;
	int num3;
	int num4;
	Hash statName;
	int outValue2;
	int num5;
	int j;
	BOOL flag2;
	int num6;
	int num7;
	BOOL flag3;

	if (bLocal_60)
		bLocal_60 = false;
	else
		iLocal_55 = iLocal_55 + 1;

	bLocal_59 = false;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		num = 3;
	else
		num = func_85();

	if (num != iLocal_58)
	{
		iLocal_58 = num;
		bLocal_59 = true;
		bLocal_66 = false;
		bLocal_67 = false;
		bLocal_74 = false;
		bLocal_80 = false;
	}

	if (iLocal_58 == 145)
		return;

	flag = false;

	if (iLocal_55 == 6 && func_84(64) || iLocal_55 == 5 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("PILOT_SCHOOL")) > 0)
	{
		flag = true;
		bLocal_60 = true;
	}

	func_78();

	if (Global_97963 || Global_97964 && !func_75(0))
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			for (i = 0; i < 8; i = i + 1)
			{
				func_74(iLocal_58, i);
			}
		
			Global_97963 = false;
		}
	}

	if (!flag)
	{
		if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) || !NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !func_73(iLocal_58) || STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() || func_72() || CUTSCENE::IS_CUTSCENE_PLAYING() || CAM::IS_SCREEN_FADED_OUT() || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) || Global_78556 || Global_97965 || bLocal_61)
		{
			bLocal_82 = true;
			iLocal_83 = MISC::GET_GAME_TIMER();
		
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				iLocal_84 = NETWORK::GET_NETWORK_TIME();
		
			return;
		}
	
		if (bLocal_82)
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && MISC::GET_GAME_TIMER() - iLocal_83 > 3000 || NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::IS_TIME_MORE_THAN(NETWORK::GET_NETWORK_TIME(), NETWORK::GET_TIME_OFFSET(iLocal_84, 3000)))
				bLocal_82 = false;
			else
				return;
	}

	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && MISC::GET_GAME_TIMER() - iLocal_56 > 2000 || NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::IS_TIME_MORE_THAN(NETWORK::GET_NETWORK_TIME(), NETWORK::GET_TIME_OFFSET(iLocal_57, 2000)) || bLocal_59)
	{
		if (iLocal_55 >= 8)
		{
			iLocal_55 = 0;
			iLocal_56 = MISC::GET_GAME_TIMER();
		
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				iLocal_57 = NETWORK::GET_NETWORK_TIME();
		}
	
		num5 = 1;
	
		if (bLocal_59)
			num5 = 8;
	
		for (j = 0; j < num5; j = j + 1)
		{
			flag2 = true;
		
			if (bLocal_59)
				num4 = j;
			else
				num4 = iLocal_55;
		
			func_71(iLocal_58, num4, &statHash, &num3);
		
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				outValue = func_70(num3, -1, 0);
			else if (num4 == 0)
				outValue = Global_113648.f_2365.f_539.f_2387[iLocal_58];
			else
				STATS::STAT_GET_INT(statHash, &outValue, -1);
		
			num2 = outValue;
			outValue = func_69(outValue, 0, 100);
		
			if (func_56(iLocal_58, num4, outValue, &value))
			{
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					func_55(num3, value, -1, true, false);
				}
				else if (num4 == 0)
				{
					if (Global_113648.f_2365.f_539.f_2387[iLocal_58] == 0)
						flag2 = false;
				
					Global_113648.f_2365.f_539.f_2387[iLocal_58] = value;
				}
				else
				{
					STATS::STAT_SET_INT(statHash, value, true);
				}
			
				if (value > func_53(iLocal_58, num4, -1))
				{
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
						if (NETWORK::NETWORK_IS_ACTIVITY_SESSION() && IS_BIT_SET(Global_4718592.f_39, 19))
							flag2 = false;
					else if (!Global_113648.f_9087 && !func_52(false) || !IS_BIT_SET(Global_113648.f_9087.f_2[27 /*3*/], 2))
						flag2 = false;
				
					num6 = value;
					num7 = num6 - (num6 % func_51(iLocal_58, num4));
				
					if (num6 % func_51(iLocal_58, num4) >= 0)
						num7 = num7 + func_51(iLocal_58, num4);
				
					if (num6 >= num7)
						num6 = num7;
					else
						num6 = num7 - func_51(iLocal_58, num4);
				
					if (value > num6)
						flag2 = false;
				
					if (func_46())
						flag2 = false;
				
					if (flag2)
					{
						if (!bLocal_59)
						{
							if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
							{
								if (func_45(117, -1) == 0)
								{
									if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() && func_9())
									{
										func_8(_("~s~Character stats represent skill levels for your character. Increase individual stats by performing that activity throughout the game."), -1);
										func_4(117, true, -1, true);
									}
								}
							}
						
							bLocal_61 = true;
							bLocal_64 = value - outValue;
							bLocal_64 = bLocal_64 + (outValue % func_51(iLocal_58, num4));
							iLocal_65 = value;
							iLocal_62 = iLocal_58;
							iLocal_63 = num4;
						}
					}
				
					if (value >= 100)
					{
						if (func_3(iLocal_58, num4, &statName))
						{
							if (iLocal_58 == 0)
							{
								STATS::STAT_GET_INT(joaat("SP0_TOTAL_PLAYING_TIME"), &outValue2, -1);
								STATS::STAT_SET_INT(statName, outValue2, true);
							}
							else if (iLocal_58 == 1)
							{
								STATS::STAT_GET_INT(joaat("SP1_TOTAL_PLAYING_TIME"), &outValue2, -1);
								STATS::STAT_SET_INT(statName, outValue2, true);
							}
							else if (iLocal_58 == 2)
							{
								STATS::STAT_GET_INT(joaat("SP2_TOTAL_PLAYING_TIME"), &outValue2, -1);
								STATS::STAT_SET_INT(statName, outValue2, true);
							}
							else
							{
								iLocal_58 == 3;
							}
						}
					}
				}
			
				func_74(iLocal_58, num4);
			}
			else if (value < num2)
			{
				flag3 = true;
			
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					func_55(num3, value, -1, true, false);
				}
				else if (num4 == 0)
				{
					Global_113648.f_2365.f_539.f_2387[iLocal_58] = value;
					flag3 = false;
				}
				else
				{
					STATS::STAT_SET_INT(statHash, value, true);
				}
			
				if (flag3)
					func_74(iLocal_58, num4);
			}
		}
	}
	else
	{
		bLocal_60 = true;
	}

	return;
}

BOOL func_3(int iParam0, int iParam1, var uParam2) // Hash - 0xAFBCF378 ^0xDCA0536A
{
	*uParam2 = joaat("LAST_PLAYING_TIME");

	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					*uParam2 = joaat("SP0_SPECIAL_ABILITY_MAXED");
					break;
			
				case 1:
					*uParam2 = joaat("SP0_STAMINA_MAXED");
					break;
			
				case 3:
					*uParam2 = joaat("SP0_LUNG_CAPACITY_MAXED");
					break;
			
				case 2:
					*uParam2 = joaat("SP0_STRENGTH_MAXED");
					break;
			
				case 4:
					*uParam2 = joaat("SP0_WHEELIE_ABILITY_MAXED");
					break;
			
				case 5:
					*uParam2 = joaat("SP0_FLYING_ABILITY_MAXED");
					break;
			
				case 6:
					*uParam2 = joaat("SP0_SHOOTING_ABILITY_MAXED");
					break;
			
				case 7:
					*uParam2 = joaat("SP0_STEALTH_ABILITY_MAXED");
					break;
			}
			break;
	
		case 1:
			switch (iParam1)
			{
				case 0:
					*uParam2 = joaat("SP1_SPECIAL_ABILITY_MAXED");
					break;
			
				case 1:
					*uParam2 = joaat("SP1_STAMINA_MAXED");
					break;
			
				case 3:
					*uParam2 = joaat("SP1_LUNG_CAPACITY_MAXED");
					break;
			
				case 2:
					*uParam2 = joaat("SP1_STRENGTH_MAXED");
					break;
			
				case 4:
					*uParam2 = joaat("SP1_WHEELIE_ABILITY_MAXED");
					break;
			
				case 5:
					*uParam2 = joaat("SP1_FLYING_ABILITY_MAXED");
					break;
			
				case 6:
					*uParam2 = joaat("SP1_SHOOTING_ABILITY_MAXED");
					break;
			
				case 7:
					*uParam2 = joaat("SP1_STEALTH_ABILITY_MAXED");
					break;
			}
			break;
	
		case 2:
			switch (iParam1)
			{
				case 0:
					*uParam2 = joaat("SP2_SPECIAL_ABILITY_MAXED");
					break;
			
				case 1:
					*uParam2 = joaat("SP2_STAMINA_MAXED");
					break;
			
				case 3:
					*uParam2 = joaat("SP2_LUNG_CAPACITY_MAXED");
					break;
			
				case 2:
					*uParam2 = joaat("SP2_STRENGTH_MAXED");
					break;
			
				case 4:
					*uParam2 = joaat("SP2_WHEELIE_ABILITY_MAXED");
					break;
			
				case 5:
					*uParam2 = joaat("SP2_FLYING_ABILITY_MAXED");
					break;
			
				case 6:
					*uParam2 = joaat("SP2_SHOOTING_ABILITY_MAXED");
					break;
			
				case 7:
					*uParam2 = joaat("SP2_STEALTH_ABILITY_MAXED");
					break;
			}
			break;
	}

	return *uParam2 != joaat("LAST_PLAYING_TIME");
}

void func_4(int iParam0, BOOL bParam1, int iParam2, BOOL bParam3) // Hash - 0xC5F20840 ^0x5F046BAB
{
	Hash statName;

	if (func_7())
	{
		statName = Global_2848280[iParam0 /*3*/][func_5(iParam2)];
	
		if (statName != 0)
			STATS::STAT_SET_BOOL(statName, bParam1, bParam3);
	}

	return;
}

int func_5(int iParam0) // Hash - 0x1A3F3220 ^0x1A3F3220
{
	int num;
	int num2;

	num = iParam0;

	if (num == -1)
	{
		num2 = func_6();
	
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

int func_6() // Hash - 0x47FF56D2 ^0x47FF56D2
{
	return Global_1574918;
}

BOOL func_7() // Hash - 0x6AD579EE ^0x6AD579EE
{
	return true;
}

void func_8(char* sParam0, int iParam1) // Hash - 0xCBB0D91 ^0x21070E5C
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam1);
	return;
}

BOOL func_9() // Hash - 0x5B36D84A ^0xA96F3076
{
	int frameCount;

	frameCount = MISC::GET_FRAME_COUNT();

	if (Global_1935365 == frameCount)
	{
		return Global_1935366;
	}
	else
	{
		Global_1935365 = frameCount;
		Global_1935366 = false;
	}

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		if (NETWORK::NETWORK_IS_ACTIVITY_SESSION() && IS_BIT_SET(Global_4718592.f_39, 19))
			return false;

	if (HUD::IS_HUD_HIDDEN() && HUD::IS_RADAR_HIDDEN() && !func_44(PLAYER::PLAYER_ID()))
		return false;

	if (Global_1935367 == 1)
		return false;

	if (Global_1935176 == 1)
		return false;

	if (func_43())
		return false;

	if (MISC::IS_STUNT_JUMP_MESSAGE_SHOWING())
		return false;

	if (Global_1836583 == 1)
		return false;

	if (MISC::IS_STUNT_JUMP_IN_PROGRESS())
		return false;

	if (Global_1057410)
		return false;

	if (IS_BIT_SET(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_861, 16))
		return false;

	if (func_42())
		return false;

	if (func_41())
		return false;

	if (func_40())
	{
		if (!func_41())
		{
			if (!func_39(3, -1))
			{
				if (func_37(&Global_2696995, 300000, false) == 1)
				{
					func_36(&Global_2696993);
					func_34(3, -1);
				}
				else if (func_37(&Global_2696993, 7000, false) == 0)
				{
					return false;
				}
			}
		}
		else
		{
			return false;
		}
	}

	if (func_33())
		return false;

	if (func_32())
		return false;

	if (func_30())
		return false;

	if (func_29())
		return false;

	if (func_28())
		return false;

	if (func_27())
		return false;

	if (NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
		return false;

	if (HUD::IS_PAUSE_MENU_ACTIVE())
		return false;

	if (CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE())
		if (func_26(PLAYER::PLAYER_PED_ID()) == joaat("WEAPON_SNIPERRIFLE") || func_26(PLAYER::PLAYER_PED_ID()) == joaat("WEAPON_HEAVYSNIPER"))
			return false;

	if (CAM::IS_SCREEN_FADED_OUT())
		return false;

	if (func_25(8, -1))
		return false;

	if (func_24(12, -1))
		return false;

	if (HUD::IS_HUD_COMPONENT_ACTIVE(HUD_WEAPON_WHEEL))
		return false;

	if (func_23())
		return false;

	if (func_22())
		return false;

	if (IS_BIT_SET(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_861, 2))
		return false;

	if (Global_1836374)
		return false;

	if (Global_1836378)
		return false;

	if (Global_1836380)
		return false;

	if (Global_2672505.f_3693.f_39)
		return false;

	if (func_21(0))
		return false;

	if (func_20())
		return false;

	if (Global_2793044.f_4062)
		return false;

	if (Global_2672505.f_3559)
		return false;

	if (!func_19(PLAYER::PLAYER_ID(), true, false))
		return false;

	if (func_18(PLAYER::PLAYER_ID()))
		return false;

	if (Global_2672505.f_3693.f_39 == true)
		return false;

	if (Global_2684799.f_2846.f_26 == 1)
		return false;

	if (func_17(true))
		return false;

	if (func_15())
		return false;

	if (HUD::IS_HUD_COMPONENT_ACTIVE(HUD_RADIO_STATIONS))
		return false;

	if (func_14())
		return false;

	if (func_13())
		return false;

	if (HUD::IS_HELP_MESSAGE_ON_SCREEN())
		if (func_12(_("Shout through your headset to make the store clerk fill the bag with cash faster.")))
			return false;

	if (IS_BIT_SET(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_861, 6))
		return false;

	if (func_10(PLAYER::PLAYER_ID()))
		return false;

	Global_1935366 = true;
	return true;
}

BOOL func_10(Player plParam0) // Hash - 0x43CB1CB6 ^0x43CB1CB6
{
	if (plParam0 != func_11())
		return IS_BIT_SET(Global_1853910[plParam0 /*862*/].f_267.f_365, 26);

	return false;
}

Player func_11() // Hash - 0x478900E4 ^0x478900E4
{
	return -1;
}

BOOL func_12(char* sParam0) // Hash - 0xCD6A3595 ^0xB0E86AA0
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

BOOL func_13() // Hash - 0x9DB50CDB ^0x9DB50CDB
{
	return Global_2672505.f_1684.f_701 != 0;
}

BOOL func_14() // Hash - 0x1B9090CC ^0x1B9090CC
{
	return Global_2672505.f_2837.f_582;
}

BOOL func_15() // Hash - 0xBA2FE0DB ^0xBA2FE0DB
{
	return func_16();
}

BOOL func_16() // Hash - 0x198EDDD5 ^0x6A882A2
{
	return Global_1649046.f_40 == 3;
}

BOOL func_17(BOOL bParam0) // Hash - 0x1F743529 ^0xDFDFCA73
{
	if (bParam0)
		return Global_23131.f_4 && Global_23131.f_104 == 4;

	return Global_23131.f_4;
}

BOOL func_18(Player plParam0) // Hash - 0x5087784F ^0x7195A453
{
	return IS_BIT_SET(Global_1890444[plParam0 /*129*/].f_14, 0);
}

BOOL func_19(Player plParam0, BOOL bParam1, BOOL bParam2) // Hash - 0x3FF6E4CA ^0xE6B59972
{
	Player player;

	player = plParam0;

	if (player != -1)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(plParam0))
		{
			if (bParam1)
				if (!PLAYER::IS_PLAYER_PLAYING(plParam0))
					return false;
		
			if (bParam2)
				if (player == Global_2672505.f_3)
					return Global_2672505.f_2;
				else if (Global_2657589[player /*466*/] != 4)
					return false;
		
			return true;
		}
	}

	return false;
}

BOOL func_20() // Hash - 0x9E06F5B4 ^0xC825B580
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("APPCAMERA")) > 0)
		return true;

	return false;
}

BOOL func_21(int iParam0) // Hash - 0xE8921B44 ^0x4F063755
{
	if (iParam0 == 1)
		if (Global_20383.f_1 > 3)
			if (IS_BIT_SET(Global_8253, 14))
				return true;
			else
				return false;
		else
			return false;

	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("CELLPHONE_FLASHHAND")) > 0)
		return true;

	if (Global_20383.f_1 > 3)
		return true;

	return false;
}

BOOL func_22() // Hash - 0x4228A1C2 ^0xD7B9A876
{
	return Global_1653913.f_112;
}

BOOL func_23() // Hash - 0xD30DED2E ^0xF6A4A60A
{
	return Global_2672505.f_2513[0 /*80*/].f_1 != 0;
}

BOOL func_24(int iParam0, int iParam1) // Hash - 0xC6B42DC1 ^0x40929BA6
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				if (Global_1653913.f_137[iParam1])
					return true;
			
				if (Global_1653913.f_170[iParam1])
					return true;
			}
			break;
	
		default:
			if (IS_BIT_SET(Global_1653913.f_1046, iParam0))
				return true;
		
			if (IS_BIT_SET(Global_1653913.f_1047, iParam0))
				return true;
			break;
	}

	return false;
}

BOOL func_25(int iParam0, int iParam1) // Hash - 0xA14C4D3F ^0xA6034F77
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
				return Global_1653913.f_203[iParam1];
			break;
	}

	return IS_BIT_SET(Global_1653913.f_1048, iParam0);
}

int func_26(Ped pedParam0) // Hash - 0xA860C4B2 ^0x4F46EE3F
{
	int weaponHash;

	WEAPON::GET_CURRENT_PED_WEAPON(pedParam0, &weaponHash, true);
	return weaponHash;
}

BOOL func_27() // Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_2683862.f_692;
}

BOOL func_28() // Hash - 0xDB96C64C ^0x88EF32C
{
	return IS_BIT_SET(Global_1048576.f_10, 13);
}

BOOL func_29() // Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_2683862.f_691;
}

BOOL func_30() // Hash - 0xCD546126 ^0xCD546126
{
	if (func_31() == 1 || func_31() == 4)
		return true;

	return false;
}

int func_31() // Hash - 0x4228A1C2 ^0x58D4D226
{
	return Global_1574632.f_18;
}

BOOL func_32() // Hash - 0x3F80A72E ^0x3F80A72E
{
	if (func_31() == 3 || func_31() == 2)
		return true;

	return false;
}

BOOL func_33() // Hash - 0x3CA1BB47 ^0x93FAD138
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("MAINTRANSITION")) > 0)
		return true;

	return false;
}

void func_34(int iParam0, int iParam1) // Hash - 0x8377B0A ^0x6570F14
{
	int profileSetting;
	int profileSetting2;

	if (iParam1 == -1)
		iParam1 = func_6();

	Global_1665487 = 0;

	if (MISC::ARE_PROFILE_SETTINGS_VALID() == false)
		return;

	switch (iParam0)
	{
		case 0:
			STATS::SET_FREEMODE_PROLOGUE_DONE(0, iParam1);
			profileSetting2 = func_35(iParam1);
			profileSetting = MISC::GET_PROFILE_SETTING(profileSetting2);
			break;
	
		default:
			profileSetting2 = func_35(iParam1);
			profileSetting = MISC::GET_PROFILE_SETTING(profileSetting2);
		
			if (!IS_BIT_SET(profileSetting, iParam0))
			{
				MISC::SET_BIT(&profileSetting, iParam0);
				STATS::SET_FREEMODE_PROLOGUE_DONE(profileSetting, iParam1);
			}
			break;
	}

	switch (iParam0)
	{
		case 0:
			func_4(120, false, iParam1, true);
			func_4(124, false, iParam1, true);
			func_4(115, false, iParam1, true);
			func_4(119, false, iParam1, true);
			func_4(121, false, iParam1, true);
			func_4(122, false, iParam1, true);
			func_4(125, false, iParam1, true);
			func_55(1304, 0, iParam1, true, false);
			func_55(7236, 0, iParam1, true, false);
			break;
	}

	return;
}

int func_35(int iParam0) // Hash - 0xE9111CD1 ^0x81B320A3
{
	int num;

	if (iParam0 == -1)
		iParam0 = func_6();

	switch (iParam0)
	{
		case 0:
			num = 914;
			break;
	
		case 1:
			num = 915;
			break;
	
		case 2:
			num = 916;
			break;
	
		case 3:
			num = 917;
			break;
	
		case 4:
			num = 918;
			break;
	}

	return num;
}

void func_36(var uParam0) // Hash - 0xBA5A1D5A ^0x33644ECA
{
	uParam0->f_1 = 0;
	return;
}

int func_37(var uParam0, int iParam1, BOOL bParam2) // Hash - 0xE7AE0A5 ^0x8D771ED3
{
	if (iParam1 == -1)
		return 1;

	func_38(uParam0, bParam2, false);

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam2)
	{
		if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0)) >= iParam1)
		{
			func_36(uParam0);
			return 1;
		}
	}
	else if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), *uParam0)) >= iParam1)
	{
		func_36(uParam0);
		return 1;
	}

	return 0;
}

void func_38(var uParam0, BOOL bParam1, BOOL bParam2) // Hash - 0x6F79B86B ^0x7B76DD66
{
	if (uParam0->f_1 == 0)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam1)
			if (!bParam2)
				*uParam0 = NETWORK::GET_NETWORK_TIME();
			else
				*uParam0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		else
			*uParam0 = MISC::GET_GAME_TIMER();
	
		uParam0->f_1 = 1;
	}

	return;
}

BOOL func_39(int iParam0, int iParam1) // Hash - 0xF6E4B595 ^0x3042B439
{
	int profileSetting;
	int profileSetting2;

	if (iParam1 == -1)
		iParam1 = func_6();

	profileSetting = func_35(iParam1);
	profileSetting2 = MISC::GET_PROFILE_SETTING(profileSetting);
	return IS_BIT_SET(profileSetting2, iParam0);
}

BOOL func_40() // Hash - 0x44DD83CC ^0x7B62A376
{
	int profileSetting;

	if (Global_152523 == 2)
		return true;
	else if (Global_152523 == 3)
		return false;

	if (NETWORK::NETWORK_IS_SIGNED_IN())
	{
		if (NETWORK::NETWORK_HAS_VALID_ROS_CREDENTIALS())
		{
			if (NETWORK::NETWORK_HAS_ROS_PRIVILEGE_PLAYED_LAST_GEN())
			{
				STATS::STAT_GET_INT(joaat("SP_UNLOCK_EXCLUS_CONTENT"), &profileSetting, -1);
				MISC::SET_BIT(&profileSetting, 2);
				MISC::SET_BIT(&profileSetting, 4);
				MISC::SET_BIT(&profileSetting, 6);
				MISC::SET_BIT(&Global_25, 2);
				MISC::SET_BIT(&Global_25, 4);
				MISC::SET_BIT(&Global_25, 6);
				STATS::STAT_SET_INT(joaat("SP_UNLOCK_EXCLUS_CONTENT"), profileSetting, true);
			
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

BOOL func_41() // Hash - 0x47FF56D2 ^0x47FF56D2
{
	return Global_1575060;
}

BOOL func_42() // Hash - 0x9A79549B ^0x5E09568E
{
	return Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_192 != 0;
}

BOOL func_43() // Hash - 0x47FF56D2 ^0x47FF56D2
{
	return Global_2764905;
}

BOOL func_44(Player plParam0) // Hash - 0xA9D58EBA ^0xF2ED60B1
{
	return IS_BIT_SET(Global_2657589[plParam0 /*466*/].f_321.f_3, 13);
}

int func_45(int iParam0, int iParam1) // Hash - 0x1FBC7704 ^0x2B72B37D
{
	Hash statHash;
	int outValue;

	statHash = Global_2848280[iParam0 /*3*/][func_5(iParam1)];

	if (STATS::STAT_GET_BOOL(statHash, &outValue, -1))
		return outValue;

	return 0;
}

BOOL func_46() // Hash - 0x7A95657A ^0x7A95657A
{
	if (!func_49(true))
		return false;

	if (func_47())
		return false;

	return Global_1947720;
}

BOOL func_47() // Hash - 0x5976C0FC ^0xC3C6644E
{
	return func_48(PLAYER::PLAYER_ID());
}

BOOL func_48(Player plParam0) // Hash - 0x240F2609 ^0x5DFCCAA2
{
	if (plParam0 != func_11())
		if (Global_1894573[plParam0 /*608*/].f_10 != func_11())
			return Global_1894573[plParam0 /*608*/].f_10 == plParam0;

	return false;
}

BOOL func_49(BOOL bParam0) // Hash - 0xCA2EA26D ^0x45E6CA28
{
	return func_50(PLAYER::PLAYER_ID(), bParam0);
}

BOOL func_50(Player plParam0, BOOL bParam1) // Hash - 0xB01293DB ^0xE5AEA938
{
	if (!bParam1)
		if (func_48(plParam0))
			return false;

	return Global_1894573[plParam0 /*608*/].f_10 != func_11();
}

int func_51(int iParam0, int iParam1) // Hash - 0x51063E79 ^0x51063E79
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 20;
			
				case 1:
					return 20;
			
				case 3:
					return 20;
			
				case 2:
					return 20;
			
				case 4:
					return 20;
			
				case 5:
					return 20;
			
				case 6:
					return 20;
			
				case 7:
					return 20;
			}
			break;
	
		case 1:
			switch (iParam1)
			{
				case 0:
					return 20;
			
				case 1:
					return 20;
			
				case 3:
					return 20;
			
				case 2:
					return 20;
			
				case 4:
					return 20;
			
				case 5:
					return 20;
			
				case 6:
					return 20;
			
				case 7:
					return 20;
			}
			break;
	
		case 2:
			switch (iParam1)
			{
				case 0:
					return 20;
			
				case 1:
					return 20;
			
				case 3:
					return 20;
			
				case 2:
					return 20;
			
				case 4:
					return 20;
			
				case 5:
					return 20;
			
				case 6:
					return 20;
			
				case 7:
					return 20;
			}
			break;
	
		case 3:
			switch (iParam1)
			{
				case 0:
					return 20;
			
				case 1:
					return 20;
			
				case 3:
					return 20;
			
				case 2:
					return 20;
			
				case 4:
					return 20;
			
				case 5:
					return 20;
			
				case 6:
					return 20;
			
				case 7:
					return 20;
			}
			break;
	}

	return 1;
}

BOOL func_52(BOOL bParam0) // Hash - 0x15889021 ^0xE7262364
{
	if (!bParam0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("BENCHMARK")) > 0)
		return true;

	return IS_BIT_SET(Global_78807, 0);
}

int func_53(int iParam0, int iParam1, int iParam2) // Hash - 0x2976A781 ^0x85F6002E
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		if (func_54(14))
			return 100;

	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 47;
			
				case 3:
					return 22;
			
				case 2:
					return 21;
			
				case 4:
					return 54;
			
				case 5:
					return 31;
			
				case 6:
					return 79;
			
				case 7:
					return 81;
			}
			break;
	
		case 1:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 51;
			
				case 3:
					return 46;
			
				case 2:
					return 49;
			
				case 4:
					return 71;
			
				case 5:
					return 19;
			
				case 6:
					return 24;
			
				case 7:
					return 21;
			}
			break;
	
		case 2:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 23;
			
				case 3:
					return 28;
			
				case 2:
					return 79;
			
				case 4:
					return 31;
			
				case 5:
					return 82;
			
				case 6:
					return 69;
			
				case 7:
					return 49;
			}
			break;
	
		case 3:
			switch (iParam1)
			{
				case 1:
					return func_70(1225, iParam2, 0);
			
				case 3:
					return func_70(1231, iParam2, 0);
			
				case 2:
					return func_70(1227, iParam2, 0);
			
				case 4:
					return func_70(1230, iParam2, 0);
			
				case 5:
					return func_70(1229, iParam2, 0);
			
				case 6:
					return func_70(1226, iParam2, 0);
			
				case 7:
					return func_70(1228, iParam2, 0);
			}
			break;
	}

	return 0;
}

BOOL func_54(int iParam0) // Hash - 0x937D8816 ^0x937D8816
{
	return Global_43257 == iParam0;
}

void func_55(int iParam0, int iParam1, int iParam2, BOOL bParam3, BOOL bParam4) // Hash - 0x7D768555 ^0x693A841
{
	Hash statName;

	bParam4;
	statName = Global_2805027[iParam0 /*3*/][func_5(iParam2)];

	if (statName != 0)
		STATS::STAT_SET_INT(statName, iParam1, bParam3);

	return;
}

BOOL func_56(int iParam0, int iParam1, int iParam2, var uParam3) // Hash - 0x87E555BB ^0x87E555BB
{
	*uParam3 = func_57(iParam0, iParam1, false, -1);

	if (*uParam3 > iParam2)
		return true;

	return false;
}

int func_57(int iParam0, int iParam1, BOOL bParam2, int iParam3) // Hash - 0x3B00D4BE ^0xE9AFD5E6
{
	float value;
	float outValue;
	int num;
	int outValue2;
	int num2;
	int outValue3;
	int outValue4;
	int i;
	int num3;
	int num4;
	int num5;
	int num6;
	float num7;

	num = 0;

	switch (iParam1)
	{
		case 0:
			if (iParam0 == 0)
			{
				STATS::STAT_GET_INT(joaat("SP0_SPECIAL_ABILITY_UNLOCKED"), &outValue2, -1);
				value = SYSTEM::TO_FLOAT(outValue2);
			}
			else if (iParam0 == 1)
			{
				STATS::STAT_GET_INT(joaat("SP1_SPECIAL_ABILITY_UNLOCKED"), &outValue2, -1);
				value = SYSTEM::TO_FLOAT(outValue2);
			}
			else if (iParam0 == 2)
			{
				STATS::STAT_GET_INT(joaat("SP2_SPECIAL_ABILITY_UNLOCKED"), &outValue2, -1);
				value = SYSTEM::TO_FLOAT(outValue2);
			}
			else if (iParam0 == 3)
			{
				value = SYSTEM::TO_FLOAT(func_70(64, iParam3, 0));
			}
			break;
	
		case 1:
			if (iParam0 == 0)
			{
				STATS::STAT_GET_FLOAT(joaat("SP0_DIST_RUNNING"), &outValue, -1);
				value = (outValue - Global_113648.f_2365.f_539.f_2355[iParam0]) / 175f;
			}
			else if (iParam0 == 1)
			{
				STATS::STAT_GET_FLOAT(joaat("SP1_DIST_RUNNING"), &outValue, -1);
				value = (outValue - Global_113648.f_2365.f_539.f_2355[iParam0]) / 175f;
			}
			else if (iParam0 == 2)
			{
				STATS::STAT_GET_FLOAT(joaat("SP2_DIST_RUNNING"), &outValue, -1);
				value = (outValue - Global_113648.f_2365.f_539.f_2355[iParam0]) / 175f;
			}
			else if (iParam0 == 3)
			{
				value = func_68(20, iParam3) / 175f;
				func_65(&value);
			}
		
			if (iParam0 == 0)
			{
				value = value + SYSTEM::TO_FLOAT(func_64(joaat("SP0_TIME_SWIMMING")));
			}
			else if (iParam0 == 1)
			{
				value = value + SYSTEM::TO_FLOAT(func_64(joaat("SP1_TIME_SWIMMING")));
			}
			else if (iParam0 == 2)
			{
				value = value + SYSTEM::TO_FLOAT(func_64(joaat("SP2_TIME_SWIMMING")));
			}
			else if (iParam0 == 3)
			{
				value = value + SYSTEM::TO_FLOAT(func_64(func_63(50, iParam3)));
				func_65(&value);
			}
		
			if (iParam0 == 0)
			{
				value = value + SYSTEM::TO_FLOAT(func_64(joaat("SP0_TIME_DRIVING_BICYCLE")));
			}
			else if (iParam0 == 1)
			{
				value = value + SYSTEM::TO_FLOAT(func_64(joaat("SP1_TIME_DRIVING_BICYCLE")));
			}
			else if (iParam0 == 2)
			{
				value = value + SYSTEM::TO_FLOAT(func_64(joaat("SP2_TIME_DRIVING_BICYCLE")));
			}
			else if (iParam0 == 3)
			{
				value = value + SYSTEM::TO_FLOAT(func_64(func_63(47, iParam3)));
				func_65(&value);
			}
		
			if (iParam0 == 3)
				value = value + (4f * Global_262145.f_24333 * (float)func_70(7237, -1, 0));
		
			if (iParam0 == 3)
				value = value * 0.25f;
			break;
	
		case 3:
			if (iParam0 == 0)
			{
				value = SYSTEM::TO_FLOAT(func_62(joaat("SP0_TIME_UNDERWATER"))) / 30f;
			}
			else if (iParam0 == 1)
			{
				value = SYSTEM::TO_FLOAT(func_62(joaat("SP1_TIME_UNDERWATER"))) / 30f;
			}
			else if (iParam0 == 2)
			{
				value = SYSTEM::TO_FLOAT(func_62(joaat("SP2_TIME_UNDERWATER"))) / 30f;
			}
			else if (iParam0 == 3)
			{
				value = SYSTEM::TO_FLOAT(func_62(func_63(52, iParam3))) / 30f;
				func_65(&value);
			}
			break;
	
		case 2:
			if (iParam0 == 0)
			{
				STATS::STAT_GET_INT(joaat("SP0_UNARMED_HITS"), &outValue2, -1);
				value = SYSTEM::TO_FLOAT(outValue2 - Global_113648.f_2365.f_539.f_2359[iParam0]) / 20f;
			}
			else if (iParam0 == 1)
			{
				STATS::STAT_GET_INT(joaat("SP1_UNARMED_HITS"), &outValue2, -1);
				value = SYSTEM::TO_FLOAT(outValue2 - Global_113648.f_2365.f_539.f_2359[iParam0]) / 20f;
			}
			else if (iParam0 == 2)
			{
				STATS::STAT_GET_INT(joaat("SP2_UNARMED_HITS"), &outValue2, -1);
				value = SYSTEM::TO_FLOAT(outValue2 - Global_113648.f_2365.f_539.f_2359[iParam0]) / 20f;
			}
			else if (iParam0 == 3)
			{
				value = SYSTEM::TO_FLOAT(func_70(1500, iParam3, 0)) / 20f;
				func_65(&value);
			}
			break;
	
		case 4:
			if (iParam0 == 0)
			{
				STATS::STAT_GET_INT(joaat("SP0_NUMBER_NEAR_MISS"), &outValue2, -1);
				value = value + (SYSTEM::TO_FLOAT(outValue2 - Global_113648.f_2365.f_539.f_2363[iParam0]) / 50f);
			}
			else if (iParam0 == 1)
			{
				STATS::STAT_GET_INT(joaat("SP1_NUMBER_NEAR_MISS"), &outValue2, -1);
				value = value + (SYSTEM::TO_FLOAT(outValue2 - Global_113648.f_2365.f_539.f_2363[iParam0]) / 50f);
			}
			else if (iParam0 == 2)
			{
				STATS::STAT_GET_INT(joaat("SP2_NUMBER_NEAR_MISS"), &outValue2, -1);
				value = value + (SYSTEM::TO_FLOAT(outValue2 - Global_113648.f_2365.f_539.f_2363[iParam0]) / 50f);
			}
			else if (iParam0 == 3)
			{
				value = value + (float)func_70(113, iParam3, 0) / 50;
				func_65(&value);
			}
			break;
	
		case 5:
			if (iParam0 == 0)
				value = SYSTEM::TO_FLOAT(func_64(joaat("SP0_TIME_DRIVING_PLANE"))) / 10f;
			else if (iParam0 == 1)
				value = SYSTEM::TO_FLOAT(func_64(joaat("SP1_TIME_DRIVING_PLANE"))) / 10f;
			else if (iParam0 == 2)
				value = SYSTEM::TO_FLOAT(func_64(joaat("SP2_TIME_DRIVING_PLANE"))) / 10f;
			else if (iParam0 == 3)
				value = SYSTEM::TO_FLOAT(func_64(func_63(43, iParam3))) / 10f;
		
			if (iParam0 == 0)
				value = value + (SYSTEM::TO_FLOAT(func_64(joaat("SP0_TIME_DRIVING_HELI"))) / 10f);
			else if (iParam0 == 1)
				value = value + (SYSTEM::TO_FLOAT(func_64(joaat("SP1_TIME_DRIVING_HELI"))) / 10f);
			else if (iParam0 == 2)
				value = value + (SYSTEM::TO_FLOAT(func_64(joaat("SP2_TIME_DRIVING_HELI"))) / 10f);
			else if (iParam0 == 3)
				value = value + (SYSTEM::TO_FLOAT(func_64(func_63(45, iParam3))) / 10f);
		
			if (iParam0 == 0)
			{
				STATS::STAT_GET_INT(joaat("SP0_PLANE_LANDINGS"), &outValue2, -1);
				value = value + SYSTEM::TO_FLOAT(outValue2);
			}
			else if (iParam0 == 1)
			{
				STATS::STAT_GET_INT(joaat("SP1_PLANE_LANDINGS"), &outValue2, -1);
				value = value + SYSTEM::TO_FLOAT(outValue2);
			}
			else if (iParam0 == 2)
			{
				STATS::STAT_GET_INT(joaat("SP2_PLANE_LANDINGS"), &outValue2, -1);
				value = value + SYSTEM::TO_FLOAT(outValue2);
			}
			else if (iParam0 == 3)
			{
				value = value + (float)func_70(61, iParam3, 0);
				func_65(&value);
			}
		
			if (iParam0 == 0 || iParam0 == 1 || iParam0 == 2)
			{
				num2 = func_61(iParam0, 0);
			
				if (iParam0 == 2)
					if (num2 == 3)
						value = value + 10f;
					else if (num2 == 2)
						value = value + 7f;
					else if (num2 == 1)
						value = value + 5f;
				else if (num2 == 3)
					value = value + 12f;
				else if (num2 == 2)
					value = value + 9f;
				else if (num2 == 1)
					value = value + 7f;
			
				num2 = func_61(iParam0, 1);
			
				if (iParam0 == 2)
					if (num2 == 3)
						value = value + 10f;
					else if (num2 == 2)
						value = value + 7f;
					else if (num2 == 1)
						value = value + 5f;
				else if (num2 == 3)
					value = value + 12f;
				else if (num2 == 2)
					value = value + 9f;
				else if (num2 == 1)
					value = value + 7f;
			
				num2 = func_61(iParam0, 2);
			
				if (num2 == 3)
					value = value + 12f;
				else if (num2 == 2)
					value = value + 9f;
				else if (num2 == 1)
					value = value + 7f;
			
				num2 = func_61(iParam0, 3);
			
				if (num2 == 3)
					value = value + 12f;
				else if (num2 == 2)
					value = value + 9f;
				else if (num2 == 1)
					value = value + 7f;
			
				num2 = func_61(iParam0, 6);
			
				if (num2 == 3)
					value = value + 12f;
				else if (num2 == 2)
					value = value + 9f;
				else if (num2 == 1)
					value = value + 7f;
			
				num2 = func_61(iParam0, 4);
			
				if (num2 == 3)
					value = value + 5f;
				else if (num2 == 2)
					value = value + 3f;
				else if (num2 == 1)
					value = value + 2f;
			
				num2 = func_61(iParam0, 5);
			
				if (num2 == 3)
					value = value + 12f;
				else if (num2 == 2)
					value = value + 9f;
				else if (num2 == 1)
					value = value + 7f;
			
				num2 = func_61(iParam0, 7);
			
				if (num2 == 3)
					value = value + 12f;
				else if (num2 == 2)
					value = value + 9f;
				else if (num2 == 1)
					value = value + 7f;
			
				num2 = func_61(iParam0, 8);
			
				if (num2 == 3)
					value = value + 12f;
				else if (num2 == 2)
					value = value + 9f;
				else if (num2 == 1)
					value = value + 7f;
			
				num2 = func_61(iParam0, 11);
			
				if (num2 == 3)
					value = value + 12f;
				else if (num2 == 2)
					value = value + 9f;
				else if (num2 == 1)
					value = value + 7f;
			}
			break;
	
		case 7:
			if (iParam0 == 0)
			{
				STATS::STAT_GET_FLOAT(joaat("SP0_DIST_WALK_ST"), &outValue, -1);
				value = (outValue - Global_113648.f_2365.f_539.f_2367[iParam0]) / 45f;
			}
			else if (iParam0 == 1)
			{
				STATS::STAT_GET_FLOAT(joaat("SP1_DIST_WALK_ST"), &outValue, -1);
				value = (outValue - Global_113648.f_2365.f_539.f_2367[iParam0]) / 45f;
			}
			else if (iParam0 == 2)
			{
				STATS::STAT_GET_FLOAT(joaat("SP2_DIST_WALK_ST"), &outValue, -1);
				value = (outValue - Global_113648.f_2365.f_539.f_2367[iParam0]) / 45f;
			}
			else if (iParam0 == 3)
			{
				value = func_68(19, iParam3) / 45f;
			}
		
			if (iParam0 == 0)
			{
				STATS::STAT_GET_INT(joaat("SP0_KILLS_STEALTH"), &outValue2, -1);
				value = value + ((SYSTEM::TO_FLOAT(outValue2 - Global_113648.f_2365.f_539.f_2371[iParam0]) / 2f) * 1.5f);
			}
			else if (iParam0 == 1)
			{
				STATS::STAT_GET_INT(joaat("SP1_KILLS_STEALTH"), &outValue2, -1);
				value = value + ((SYSTEM::TO_FLOAT(outValue2 - Global_113648.f_2365.f_539.f_2371[iParam0]) / 2f) * 1.5f);
			}
			else if (iParam0 == 2)
			{
				STATS::STAT_GET_INT(joaat("SP2_KILLS_STEALTH"), &outValue2, -1);
				value = value + ((SYSTEM::TO_FLOAT(outValue2 - Global_113648.f_2365.f_539.f_2371[iParam0]) / 2f) * 1.5f);
			}
			else if (iParam0 == 3)
			{
				outValue2 = func_70(34, iParam3, 0);
				value = value + ((SYSTEM::TO_FLOAT(outValue2) / 2f) * 1.5f);
				func_65(&value);
			}
			break;
	
		case 6:
			if (iParam0 == 0)
			{
				STATS::STAT_GET_INT(joaat("SP0_HITS_MISSION"), &outValue3, -1);
				STATS::STAT_GET_INT(joaat("SP0_HITS_PEDS_VEHICLES"), &outValue4, -1);
				outValue4 = outValue4 - outValue3;
				value = SYSTEM::TO_FLOAT(outValue3 - Global_113648.f_2365.f_539.f_2375[iParam0]) / 40f;
				value = value + (SYSTEM::TO_FLOAT(outValue4 - Global_113648.f_2365.f_539.f_2379[iParam0]) / 80f);
			}
			else if (iParam0 == 1)
			{
				STATS::STAT_GET_INT(joaat("SP1_HITS_MISSION"), &outValue3, -1);
				STATS::STAT_GET_INT(joaat("SP1_HITS_PEDS_VEHICLES"), &outValue4, -1);
				outValue4 = outValue4 - outValue3;
				value = SYSTEM::TO_FLOAT(outValue3 - Global_113648.f_2365.f_539.f_2375[iParam0]) / 40f;
				value = value + (SYSTEM::TO_FLOAT(outValue4 - Global_113648.f_2365.f_539.f_2379[iParam0]) / 80f);
			}
			else if (iParam0 == 2)
			{
				STATS::STAT_GET_INT(joaat("SP2_HITS_MISSION"), &outValue3, -1);
				STATS::STAT_GET_INT(joaat("SP2_HITS_PEDS_VEHICLES"), &outValue4, -1);
				outValue4 = outValue4 - outValue3;
				value = SYSTEM::TO_FLOAT(outValue3 - Global_113648.f_2365.f_539.f_2375[iParam0]) / 40f;
				value = value + (SYSTEM::TO_FLOAT(outValue4 - Global_113648.f_2365.f_539.f_2379[iParam0]) / 80f);
			}
			else if (iParam0 == 3)
			{
				outValue4 = func_70(172, iParam3, 0);
				value = value + (SYSTEM::TO_FLOAT(outValue4) / 80f);
			}
		
			if (iParam0 == 0 || iParam0 == 1 || iParam0 == 2)
			{
				for (i = 0; i < 22; i = i + 1)
				{
					switch (func_60(i, iParam0))
					{
						case 3:
							num3 = num3 + 1;
							break;
					
						case 2:
							num4 = num4 + 1;
							break;
					
						case 1:
							num5 = num5 + 1;
							break;
					}
				}
			
				value = value + (float)num3 * 3;
				value = value + (float)num4 * 2;
				value = value + (float)num5 * 1;
			}
			else if (iParam0 == 3)
			{
				value = value + (float)func_59(joaat("MPPLY_SHOOTINGRANGE_WINS")) * 1;
				func_65(&value);
			}
			break;
	}

	if (iParam1 != 0)
	{
		num6 = func_53(iParam0, iParam1, iParam3);
		value = value + (float)num6;
		value = value + (float)func_58(iParam0, iParam1, iParam3);
	}

	if (bParam2)
	{
		num7 = value - (value % (float)func_51(iParam0, iParam1));
	
		if (value % (float)func_51(iParam0, iParam1) >= 0f)
			num7 = num7 + (float)func_51(iParam0, iParam1);
	
		if (value >= num7)
			value = num7;
		else
			value = num7 - (float)func_51(iParam0, iParam1);
	}

	num = SYSTEM::FLOOR(value);
	num = func_69(num, 0, 100);
	return num;
}

int func_58(int iParam0, int iParam1, int iParam2) // Hash - 0x3B5E702C ^0x3B5E702C
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
			switch (iParam1)
			{
				case 1:
				case 3:
				case 2:
				case 4:
				case 5:
				case 6:
				case 7:
					return Global_113648.f_2365.f_539.f_2247[iParam1 /*4*/][iParam0];
			}
			break;
	
		case 3:
			switch (iParam1)
			{
				case 1:
					return func_70(72, iParam2, 0);
			
				case 3:
					return func_70(74, iParam2, 0);
			
				case 2:
					return func_70(73, iParam2, 0);
			
				case 4:
					return func_70(75, iParam2, 0);
			
				case 5:
					return func_70(76, iParam2, 0);
			
				case 6:
					return func_70(77, iParam2, 0);
			
				case 7:
					return func_70(78, iParam2, 0);
			}
			break;
	}

	return 0;
}

int func_59(Hash hParam0) // Hash - 0x4F1C0EC ^0xC7D84231
{
	Hash statHash;
	int outValue;

	statHash = hParam0;

	if (STATS::STAT_GET_INT(statHash, &outValue, -1))
		return outValue;

	return 0;
}

int func_60(int iParam0, int iParam1) // Hash - 0x7D70B3FA ^0xA137583A
{
	return Global_113648.f_19149[iParam1 /*271*/].f_3[iParam0 /*12*/].f_3;
}

int func_61(int iParam0, int iParam1) // Hash - 0x2222F6FE ^0xA709E366
{
	if (iParam0 < 0 || iParam0 > 2)
		return 0;

	return Global_113648.f_1990[iParam0 /*121*/][iParam1 /*10*/].f_8;
}

int func_62(Hash hParam0) // Hash - 0x2BFD1BC1 ^0x3C66CAF
{
	int num;

	num = 0;
	num = num + (STATS::STAT_GET_NUMBER_OF_DAYS(hParam0) * 86400);
	num = num + (STATS::STAT_GET_NUMBER_OF_HOURS(hParam0) * 3600);
	num = num + (STATS::STAT_GET_NUMBER_OF_MINUTES(hParam0) * 60);
	num = num + STATS::STAT_GET_NUMBER_OF_SECONDS(hParam0);
	return num;
}

Hash func_63(int iParam0, int iParam1) // Hash - 0xE3412A34 ^0xE3412A34
{
	return Global_2805027[iParam0 /*3*/][func_5(iParam1)];
}

int func_64(Hash hParam0) // Hash - 0xA5E46ADC ^0x7E4A8A2D
{
	int num;

	num = 0;
	num = num + (STATS::STAT_GET_NUMBER_OF_DAYS(hParam0) * 1440);
	num = num + (STATS::STAT_GET_NUMBER_OF_HOURS(hParam0) * 60);
	num = num + STATS::STAT_GET_NUMBER_OF_MINUTES(hParam0);
	return num;
}

var func_65(var uParam0) // Hash - 0xE2F04FBA ^0xE2F04FBA
{
	if (func_46())
	{
		if (func_66() < Global_262145.f_13170)
			if (*uParam0 + ((float)func_66() * Global_262145.f_13169) <= (float)Global_262145.f_13179)
				*uParam0 = *uParam0 + ((float)func_66() * Global_262145.f_13169);
	
		return *uParam0;
	}

	return *uParam0;
}

int func_66() // Hash - 0x175469EA ^0x27115631
{
	if (func_49(true))
		return Global_1853910[func_67() /*862*/].f_205.f_6;

	return 0;
}

Player func_67() // Hash - 0xFD2601BF ^0xA8AA969
{
	return Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_10;
}

float func_68(int iParam0, int iParam1) // Hash - 0xAEA34BAA ^0xF3AF90F8
{
	Hash statHash;
	float outValue;

	statHash = Global_2847604[iParam0 /*3*/][func_5(iParam1)];

	if (STATS::STAT_GET_FLOAT(statHash, &outValue, -1))
		return outValue;

	return 0f;
}

int func_69(int iParam0, int iParam1, int iParam2) // Hash - 0x1D7642BB ^0x1D7642BB
{
	if (iParam0 > iParam2)
		return iParam2;
	else if (iParam0 < iParam1)
		return iParam1;

	return iParam0;
}

int func_70(int iParam0, int iParam1, int iParam2) // Hash - 0x4BC84F7B ^0x370D7D6F
{
	Hash statHash;
	int outValue;

	if (iParam0 != 14192)
	{
		iParam2 == 0;
		statHash = Global_2805027[iParam0 /*3*/][func_5(iParam1)];
	
		if (STATS::STAT_GET_INT(statHash, &outValue, -1))
			return outValue;
	}

	return 0;
}

void func_71(int iParam0, int iParam1, var uParam2, var uParam3) // Hash - 0x638A09DD ^0x5D137763
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					*uParam2 = joaat("SP0_SPECIAL_ABILITY_UNLOCKED");
					break;
			
				case 1:
					*uParam2 = joaat("SP0_STAMINA");
					break;
			
				case 3:
					*uParam2 = joaat("SP0_LUNG_CAPACITY");
					break;
			
				case 2:
					*uParam2 = joaat("SP0_STRENGTH");
					break;
			
				case 4:
					*uParam2 = joaat("SP0_WHEELIE_ABILITY");
					break;
			
				case 5:
					*uParam2 = joaat("SP0_FLYING_ABILITY");
					break;
			
				case 6:
					*uParam2 = joaat("SP0_SHOOTING_ABILITY");
					break;
			
				case 7:
					*uParam2 = joaat("SP0_STEALTH_ABILITY");
					break;
			}
			break;
	
		case 1:
			switch (iParam1)
			{
				case 0:
					*uParam2 = joaat("SP1_SPECIAL_ABILITY_UNLOCKED");
					break;
			
				case 1:
					*uParam2 = joaat("SP1_STAMINA");
					break;
			
				case 3:
					*uParam2 = joaat("SP1_LUNG_CAPACITY");
					break;
			
				case 2:
					*uParam2 = joaat("SP1_STRENGTH");
					break;
			
				case 4:
					*uParam2 = joaat("SP1_WHEELIE_ABILITY");
					break;
			
				case 5:
					*uParam2 = joaat("SP1_FLYING_ABILITY");
					break;
			
				case 6:
					*uParam2 = joaat("SP1_SHOOTING_ABILITY");
					break;
			
				case 7:
					*uParam2 = joaat("SP1_STEALTH_ABILITY");
					break;
			}
			break;
	
		case 2:
			switch (iParam1)
			{
				case 0:
					*uParam2 = joaat("SP2_SPECIAL_ABILITY_UNLOCKED");
					break;
			
				case 1:
					*uParam2 = joaat("SP2_STAMINA");
					break;
			
				case 3:
					*uParam2 = joaat("SP2_LUNG_CAPACITY");
					break;
			
				case 2:
					*uParam2 = joaat("SP2_STRENGTH");
					break;
			
				case 4:
					*uParam2 = joaat("SP2_WHEELIE_ABILITY");
					break;
			
				case 5:
					*uParam2 = joaat("SP2_FLYING_ABILITY");
					break;
			
				case 6:
					*uParam2 = joaat("SP2_SHOOTING_ABILITY");
					break;
			
				case 7:
					*uParam2 = joaat("SP2_STEALTH_ABILITY");
					break;
			}
			break;
	
		case 3:
			switch (iParam1)
			{
				case 0:
					*uParam3 = 64;
					break;
			
				case 1:
					*uParam3 = 65;
					break;
			
				case 3:
					*uParam3 = 67;
					break;
			
				case 2:
					*uParam3 = 66;
					break;
			
				case 4:
					*uParam3 = 68;
					break;
			
				case 5:
					*uParam3 = 69;
					break;
			
				case 6:
					*uParam3 = 70;
					break;
			
				case 7:
					*uParam3 = 71;
					break;
			}
			break;
	}

	return;
}

BOOL func_72() // Hash - 0x7FE517FE ^0x128A3BC8
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return Global_98159.f_44 == 1;

	return false;
}

BOOL func_73(int iParam0) // Hash - 0x8907F004 ^0x8907F004
{
	return iParam0 < 3;
}

void func_74(int iParam0, int iParam1) // Hash - 0x349E54AD ^0x7CAB4CD1
{
	int outValue;
	float modifier;
	Hash statHash;
	int num;

	if (iParam0 != 0 || iParam0 != 1 || iParam0 != 2 || iParam0 != 3)
		return;

	func_71(iParam0, iParam1, &statHash, &num);

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		outValue = func_70(num, -1, 0);
	else
		STATS::STAT_GET_INT(statHash, &outValue, -1);

	switch (iParam1)
	{
		case 2:
			modifier = 0.8f + (0.4f * (SYSTEM::TO_FLOAT(outValue) / 100f));
			PLAYER::SET_PLAYER_MELEE_WEAPON_DAMAGE_MODIFIER(PLAYER::PLAYER_ID(), modifier, true);
			break;
	
		case 7:
			if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("ARMENIAN3")) != 0 || SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("TREVOR3")) != 0)
			{
				Global_97964 = true;
			}
			else
			{
				modifier = 1f - (SYSTEM::TO_FLOAT(outValue) / 100f);
				PLAYER::SET_PLAYER_NOISE_MULTIPLIER(PLAYER::PLAYER_ID(), modifier);
				PLAYER::SET_PLAYER_SNEAKING_NOISE_MULTIPLIER(PLAYER::PLAYER_ID(), modifier);
				PLAYER::SET_PLAYER_STEALTH_PERCEPTION_MODIFIER(PLAYER::PLAYER_ID(), modifier);
			}
			break;
	}

	return;
}

BOOL func_75(int iParam0) // Hash - 0x3BAB94E9 ^0x3BAB94E9
{
	if (Global_43257 == 15)
		return false;

	if (func_76(iParam0))
		return false;

	return true;
}

BOOL func_76(int iParam0) // Hash - 0xECB6C71B ^0xECB6C71B
{
	return func_77(iParam0, Global_43257);
}

BOOL func_77(int iParam0, int iParam1) // Hash - 0x1FD727E0 ^0x1FD727E0
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

void func_78() // Hash - 0x21CCAFCA ^0x99C240C9
{
	Vehicle vehiclePedIsIn;
	int num;

	num = 0;

	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		vehiclePedIsIn = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
	
		if (ENTITY::DOES_ENTITY_EXIST(vehiclePedIsIn) && VEHICLE::IS_VEHICLE_DRIVEABLE(vehiclePedIsIn, false) && VEHICLE::GET_PED_IN_VEHICLE_SEAT(vehiclePedIsIn, -1, false) == PLAYER::PLAYER_PED_ID() && VEHICLE::IS_THIS_MODEL_A_CAR(ENTITY::GET_ENTITY_MODEL(vehiclePedIsIn)) || VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(vehiclePedIsIn)) || VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(vehiclePedIsIn)) || VEHICLE::IS_THIS_MODEL_A_QUADBIKE(ENTITY::GET_ENTITY_MODEL(vehiclePedIsIn)))
			num = 1;
	}

	func_83(&vehiclePedIsIn, &num);
	func_82(&vehiclePedIsIn, &num);
	func_79();
	return;
}

void func_79() // Hash - 0xF6DBB169 ^0x8B24971C
{
	int num;
	int value;
	int num2;

	if (!bLocal_80)
	{
		if (iLocal_58 == 3)
		{
			if (Global_2359296[func_81() /*5568*/].f_681.f_7)
			{
				iLocal_77 = func_62(func_63(148, -1));
				Global_2359296[func_81() /*5568*/].f_681.f_7 = 0;
			}
			else
			{
				iLocal_77 = Global_2359296[func_81() /*5568*/].f_681.f_6;
			}
		
			if (Global_2359296[func_81() /*5568*/].f_681.f_4 == 0)
				Global_2359296[func_81() /*5568*/].f_681.f_4 = NETWORK::GET_CLOUD_TIME_AS_INT();
		
			iLocal_79 = Global_2359296[func_81() /*5568*/].f_681.f_4;
			iLocal_78 = Global_2359296[func_81() /*5568*/].f_681.f_5;
		}
		else
		{
			if (Global_113648.f_2365.f_539.f_2292[iLocal_58])
			{
				switch (iLocal_58)
				{
					case 0:
						iLocal_77 = func_62(joaat("SP0_TOTAL_WHEELIE_TIME"));
						break;
				
					case 1:
						iLocal_77 = func_62(joaat("SP1_TOTAL_WHEELIE_TIME"));
						break;
				
					case 2:
						iLocal_77 = func_62(joaat("SP2_TOTAL_WHEELIE_TIME"));
						break;
				}
			
				Global_113648.f_2365.f_539.f_2292[iLocal_58] = false;
			}
			else
			{
				iLocal_77 = Global_113648.f_2365.f_539.f_2288[iLocal_58];
			}
		
			if (Global_113648.f_2365.f_539.f_2280[iLocal_58] == 0)
				Global_113648.f_2365.f_539.f_2280[iLocal_58] = NETWORK::GET_CLOUD_TIME_AS_INT();
		
			iLocal_79 = Global_113648.f_2365.f_539.f_2280[iLocal_58];
			iLocal_78 = Global_113648.f_2365.f_539.f_2284[iLocal_58];
		}
	
		bLocal_80 = true;
		bLocal_81 = true;
	}
	else if (NETWORK::GET_CLOUD_TIME_AS_INT() - iLocal_79 > 86400)
	{
		bLocal_80 = false;
		bLocal_81 = false;
		iLocal_79 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iLocal_78 = 0;
	
		if (iLocal_58 == 3)
			Global_2359296[func_81() /*5568*/].f_681.f_7 = 1;
		else
			Global_113648.f_2365.f_539.f_2292[iLocal_58] = true;
	}

	if (bLocal_81)
	{
		switch (iLocal_58)
		{
			case 0:
				num = func_62(joaat("SP0_TOTAL_WHEELIE_TIME"));
				break;
		
			case 1:
				num = func_62(joaat("SP1_TOTAL_WHEELIE_TIME"));
				break;
		
			case 2:
				num = func_62(joaat("SP2_TOTAL_WHEELIE_TIME"));
				break;
		
			case 3:
				num = func_62(func_63(148, -1));
				break;
		}
	
		value = num - iLocal_77;
		num2 = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(value) / 15f) - iLocal_78;
	
		if (num2 > 0)
		{
			func_80(iLocal_58, 4, num2);
			iLocal_78 = iLocal_78 + num2;
		}
	
		if (num > iLocal_77 + ((CLOCK::GET_MILLISECONDS_PER_GAME_MINUTE() / 1000) * 60))
			bLocal_81 = false;
	}

	if (iLocal_58 == 3)
	{
		Global_2359296[func_81() /*5568*/].f_681.f_4 = iLocal_79;
		Global_2359296[func_81() /*5568*/].f_681.f_5 = iLocal_78;
	}
	else
	{
		Global_113648.f_2365.f_539.f_2280[iLocal_58] = iLocal_79;
		Global_113648.f_2365.f_539.f_2284[iLocal_58] = iLocal_78;
	}

	return;
}

void func_80(int iParam0, int iParam1, int iParam2) // Hash - 0xF0BE1C2C ^0xB42E6E17
{
	int num;
	int num2;

	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
			Global_113648.f_2365.f_539.f_2247[iParam1 /*4*/][iParam0] = Global_113648.f_2365.f_539.f_2247[iParam1 /*4*/][iParam0] + iParam2;
			break;
	
		case 3:
			num2 = 14192;
		
			switch (iParam1)
			{
				case 1:
					num2 = 72;
					break;
			
				case 3:
					num2 = 74;
					break;
			
				case 2:
					num2 = 73;
					break;
			
				case 4:
					num2 = 75;
					break;
			
				case 5:
					num2 = 76;
					break;
			
				case 6:
					num2 = 77;
					break;
			
				case 7:
					num2 = 78;
					break;
			}
		
			if (num2 != 14192)
			{
				num = func_70(num2, -1, 0);
				num = num + iParam2;
			
				if (num > 100)
					num = 100;
			
				func_55(num2, num, -1, true, false);
			}
			break;
	}

	return;
}

int func_81() // Hash - 0xF9396AAC ^0xF9396AAC
{
	int num;

	num = 0;
	return num;
}

void func_82(var uParam0, var uParam1) // Hash - 0x5E94761B ^0x74289112
{
	BOOL flag;

	if (bLocal_74)
	{
		flag = true;
	
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && *uParam1 && !ENTITY::IS_ENTITY_IN_AIR(*uParam0))
		{
			flag = false;
		
			if (ENTITY::GET_ENTITY_SPEED(*uParam0) >= 53f)
			{
				func_80(iLocal_58, 4, 2);
				flag = true;
			}
		}
	
		if (flag)
		{
			bLocal_74 = false;
			iLocal_75 = MISC::GET_GAME_TIMER();
		
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				iLocal_76 = NETWORK::GET_NETWORK_TIME();
		}
	}
	else if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && *uParam1 && ENTITY::GET_ENTITY_SPEED(*uParam0) < 20f && !ENTITY::IS_ENTITY_IN_AIR(*uParam0))
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && MISC::GET_GAME_TIMER() - iLocal_75 > 10000 || NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::IS_TIME_MORE_THAN(NETWORK::GET_NETWORK_TIME(), NETWORK::GET_TIME_OFFSET(iLocal_76, 10000)))
			bLocal_74 = true;
	}

	return;
}

void func_83(var uParam0, var uParam1) // Hash - 0x690B893F ^0xF990DB35
{
	BOOL flag;
	var unk;

	flag = false;

	if (*uParam1)
	{
		if (bLocal_66)
		{
			if (!ENTITY::IS_ENTITY_IN_AIR(*uParam0))
			{
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && MISC::GET_GAME_TIMER() - iLocal_68 > 1500 || NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::IS_TIME_MORE_THAN(NETWORK::GET_NETWORK_TIME(), NETWORK::GET_TIME_OFFSET(iLocal_69, 1500)))
				{
					iLocal_70 = MISC::GET_GAME_TIMER();
				
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
						iLocal_71 = NETWORK::GET_NETWORK_TIME();
				
					bLocal_67 = true;
				}
			
				bLocal_66 = false;
			}
		}
	
		if (bLocal_67)
		{
			if (!ENTITY::IS_ENTITY_IN_AIR(*uParam0))
			{
				if (VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(*uParam0))
				{
					if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && MISC::GET_GAME_TIMER() - iLocal_70 > 20 || !NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && MISC::GET_GAME_TIMER() - iLocal_70 == 0 || NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::IS_TIME_MORE_THAN(NETWORK::GET_NETWORK_TIME(), NETWORK::GET_TIME_OFFSET(iLocal_71, 20)) || NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::IS_TIME_EQUAL_TO(NETWORK::GET_NETWORK_TIME(), iLocal_71))
					{
					}
					else
					{
						func_80(iLocal_58, 4, 1);
					}
				
					TEXT_LABEL_ASSIGN_STRING(&unk, "Player landed on all wheels in ", 64);
					TEXT_LABEL_APPEND_INT(&unk, MISC::GET_GAME_TIMER() - iLocal_70, 64);
					TEXT_LABEL_APPEND_STRING(&unk, "ms", 64);
					flag = true;
				}
			}
			else
			{
				flag = true;
			}
		}
	
		if (!bLocal_66 && !bLocal_67)
		{
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && MISC::GET_GAME_TIMER() - iLocal_72 > 1000 || NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::IS_TIME_MORE_THAN(NETWORK::GET_NETWORK_TIME(), NETWORK::GET_TIME_OFFSET(iLocal_73, 1000)))
			{
				if (ENTITY::IS_ENTITY_IN_AIR(*uParam0))
				{
					if (!bLocal_66)
					{
						iLocal_68 = MISC::GET_GAME_TIMER();
					
						if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
							iLocal_69 = NETWORK::GET_NETWORK_TIME();
					
						bLocal_66 = true;
					}
				}
			}
		}
	}
	else if (bLocal_66 || bLocal_67)
	{
		flag = true;
	}

	if (flag)
	{
		iLocal_72 = MISC::GET_GAME_TIMER();
	
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			iLocal_73 = NETWORK::GET_NETWORK_TIME();
	
		bLocal_66 = false;
		bLocal_67 = false;
	}

	return;
}

BOOL func_84(int iParam0) // Hash - 0x9B2B80BE ^0x9B2B80BE
{
	return Global_112733 && iParam0 != false;
}

int func_85() // Hash - 0x3C5423D7 ^0x3C5423D7
{
	func_86();
	return Global_113648.f_2365.f_539.f_4321;
}

void func_86() // Hash - 0xD1F2D853 ^0xF9F5FD4D
{
	int num;

	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_88(Global_113648.f_2365.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			num = func_87(PLAYER::PLAYER_PED_ID());
		
			if (func_73(num) && !func_54(14) || Global_112599)
			{
				if (Global_113648.f_2365.f_539.f_4321 != num && func_73(Global_113648.f_2365.f_539.f_4321))
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

int func_87(Ped pedParam0) // Hash - 0xAC4E9801 ^0xB379A75F
{
	int i;
	Hash entityModel;

	if (ENTITY::DOES_ENTITY_EXIST(pedParam0))
	{
		entityModel = ENTITY::GET_ENTITY_MODEL(pedParam0);
	
		for (i = 0; i <= 2; i = i + 1)
		{
			if (func_88(i) == entityModel)
				return i;
		}
	}

	return 145;
}

Hash func_88(int iParam0) // Hash - 0xADCB9755 ^0xADCB9755
{
	if (func_73(iParam0))
		return func_89(iParam0);
	else
		iParam0 != 145;

	return 0;
}

Hash func_89(int iParam0) // Hash - 0xE4CEEC2C ^0xE4CEEC2C
{
	return Global_2028[iParam0 /*29*/];
}

void func_90() // Hash - 0x9E81426C ^0x9E81426C
{
	char* pedheadshotTxdString;
	int num;

	if (bLocal_61)
	{
		if (iLocal_62 != iLocal_58)
		{
			bLocal_61 = false;
			return;
		}
	
		pedheadshotTxdString = "CHAR_DEFAULT";
	
		switch (iLocal_62)
		{
			case 0:
				pedheadshotTxdString = "CHAR_MICHAEL";
				break;
		
			case 1:
				pedheadshotTxdString = "CHAR_FRANKLIN";
				break;
		
			case 2:
				pedheadshotTxdString = "CHAR_TREVOR";
				break;
		
			case 3:
				num = func_93(PLAYER::PLAYER_ID());
			
				if (num == 0)
					return;
				else
					pedheadshotTxdString = PED::GET_PEDHEADSHOT_TXD_STRING(num);
				break;
		}
	
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(_("~1~/100"));
		HUD::ADD_TEXT_COMPONENT_INTEGER(iLocal_65);
		HUD::END_TEXT_COMMAND_THEFEED_POST_STATS(func_92(iLocal_63), func_91(iLocal_63), bLocal_64, iLocal_65 - bLocal_64, false, pedheadshotTxdString, pedheadshotTxdString);
		bLocal_82 = true;
		iLocal_83 = MISC::GET_GAME_TIMER() + 5000;
	
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			iLocal_84 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), 5000);
	
		bLocal_61 = false;
	}

	return;
}

int func_91(int iParam0) // Hash - 0x9DF12115 ^0x9DF12115
{
	switch (iParam0)
	{
		case 0:
			return 23;
	
		case 1:
			return 2;
	
		case 3:
			return 24;
	
		case 2:
			return 25;
	
		case 4:
			return 14;
	
		case 5:
			return 27;
	
		case 6:
			return 17;
	
		case 7:
			return 28;
	}

	return -1;
}

char* func_92(int iParam0) // Hash - 0xEF836A6C ^0xEF836A6C
{
	switch (iParam0)
	{
		case 0:
			return _("Special capacity +");
	
		case 1:
			return _("Stamina +");
	
		case 3:
			return _("Lung Capacity +");
	
		case 2:
			return _("Strength +");
	
		case 4:
			return _("Driving +");
	
		case 5:
			return _("Flying +");
	
		case 6:
			return _("Shooting +");
	
		case 7:
			return _("Stealth +");
	}

	return "ERROR";
}

int func_93(Player plParam0) // Hash - 0x42191E90 ^0xD8949AAB
{
	int num;

	num = func_96(plParam0);

	if (num == -1)
	{
		func_94(plParam0, true);
		return 0;
	}

	Global_1666668[num /*5*/].f_4 = 1;
	return Global_1666668[num /*5*/].f_2;
}

void func_94(Player plParam0, BOOL bParam1) // Hash - 0x33266C8B ^0x1B02BD98
{
	if (!func_19(plParam0, false, true))
		return;

	if (func_96(plParam0) != -1)
		return;

	if (Global_1666831)
		if (plParam0 == Global_1666831.f_1)
			return;

	if (func_95(plParam0))
		return;

	if (Global_1666869 >= 32)
		return;

	Global_1666836[Global_1666869] = plParam0;
	Global_1666869 = Global_1666869 + 1;
	bParam1;
	return;
}

BOOL func_95(Player plParam0) // Hash - 0x37274923 ^0x37274923
{
	int i;

	i = 0;

	for (i = 0; i < Global_1666869; i = i + 1)
	{
		if (Global_1666836[i] == plParam0)
			return true;
	}

	return false;
}

int func_96(Player plParam0) // Hash - 0x83D3907 ^0x83D3907
{
	int i;

	if (!func_19(plParam0, false, true))
		return -1;

	if (Global_1666829 == 0)
		return -1;

	i = 0;

	for (i = 0; i < Global_1666829; i = i + 1)
	{
		if (Global_1666668[i /*5*/].f_1 == plParam0)
		{
			if (PED::IS_PEDHEADSHOT_VALID(Global_1666668[i /*5*/].f_2) && PED::IS_PEDHEADSHOT_READY(Global_1666668[i /*5*/].f_2))
				return i;
		
			func_97(i);
			return -1;
		}
	}

	return -1;
}

void func_97(int iParam0) // Hash - 0xF742012C ^0x8E544E59
{
	var txdString2;
	var txdString1;
	int num;
	int i;

	if (iParam0 >= Global_1666829)
		return;

	if (PED::IS_PEDHEADSHOT_VALID(Global_1666668[iParam0 /*5*/].f_2))
	{
		TEXT_LABEL_ASSIGN_STRING(&txdString2, "CHAR_DEFAULT", 64);
	
		if (Global_1666668[iParam0 /*5*/].f_2 != 0)
		{
			TEXT_LABEL_ASSIGN_STRING(&txdString1, PED::GET_PEDHEADSHOT_TXD_STRING(Global_1666668[iParam0 /*5*/].f_2), 64);
			HUD::THEFEED_UPDATE_ITEM_TEXTURE(&txdString1, &txdString1, &txdString2, &txdString2);
		}
	
		PED::UNREGISTER_PEDHEADSHOT(Global_1666668[iParam0 /*5*/].f_2);
	}

	num = iParam0;

	for (i = num + 1; i < Global_1666829; i = i + 1)
	{
		Global_1666668[num /*5*/] = { Global_1666668[i /*5*/] };
		num = num + 1;
	}

	func_98(&Global_1666668[num /*5*/]);
	Global_1666829 = Global_1666829 - 1;
	return;
}

void func_98(var uParam0) // Hash - 0xCB5CC50E ^0x69BEE3EF
{
	*uParam0 = 0;
	uParam0->f_1 = func_11();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		uParam0->f_3 = NETWORK::GET_NETWORK_TIME();

	return;
}

void func_99() // Hash - 0xA2F70C63 ^0xF2FC769F
{
	float value;
	int num;

	if (MISC::GET_INDEX_OF_CURRENT_LEVEL() != LEVEL_GTA5)
		return;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!func_103(PLAYER::PLAYER_ID()))
			return;
	
		if (func_102() != 0)
			return;
	}

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		if (func_102() == 0)
			iLocal_53 = 1;
	else
		iLocal_53 = 0;

	if (!func_101())
		func_100();

	iLocal_55 = 0;
	iLocal_56 = 0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		iLocal_57 = NETWORK::GET_NETWORK_TIME();

	iLocal_72 = MISC::GET_GAME_TIMER();

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		iLocal_73 = NETWORK::GET_NETWORK_TIME();

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!IS_BIT_SET(Global_2359296[func_81() /*5568*/].f_681.f_1274, 2))
		{
			value = SYSTEM::TO_FLOAT(func_70(193, -1, 0)) / 20f;
			num = SYSTEM::FLOOR(value);
			num = func_69(num, 0, 100);
			func_80(3, 2, num);
			MISC::SET_BIT(&(Global_2359296[func_81() /*5568*/].f_681.f_1274), 2);
		}
	}

	bLocal_59 = true;
	iLocal_54 = 1;
	return;
}

void func_100() // Hash - 0xA485EA6D ^0x3FBD64E7
{
	int i;
	var unk;
	int num;
	int j;
	int k;
	Hash statName;
	var unk2;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		for (i = 0; i < 8; i = i + 1)
		{
			if (i != 0)
			{
				func_71(3, i, &unk, &num);
				func_55(num, func_53(3, i, -1), -1, true, false);
			}
		}
	
		func_4(0, true, -1, true);
		Global_97963 = true;
	}
	else
	{
		for (j = 0; j < 3; j = j + 1)
		{
			for (k = 0; k < 8; k = k + 1)
			{
				if (k != 0)
				{
					func_71(j, k, &statName, &unk2);
					STATS::STAT_SET_INT(statName, func_53(j, k, -1), true);
				}
			}
		}
	
		Global_113648.f_2365.f_539.f_2387[0] = func_53(0, 0, -1);
		Global_113648.f_2365.f_539.f_2387[1] = func_53(1, 0, -1);
		Global_113648.f_2365.f_539.f_2387[2] = func_53(2, 0, -1);
		Global_113648.f_2365.f_539.f_2354 = 1;
		Global_97963 = true;
	}

	return;
}

BOOL func_101() // Hash - 0x29B46375 ^0x7C96A7FC
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return true;

	return Global_113648.f_2365.f_539.f_2354;
}

int func_102() // Hash - 0x21D64237 ^0x21D64237
{
	return Global_32163;
}

BOOL func_103(Player plParam0) // Hash - 0x5B7B4404 ^0xC4C44CB
{
	if (plParam0 == -1)
		return false;
	else
		return IS_BIT_SET(Global_2672505.f_1, plParam0);

	return true;
}

void func_104() // Hash - 0x9C4BDEAF ^0x30B2889E
{
	if (iLocal_54 != 0 && iLocal_53 != 2)
	{
		if (iLocal_53 == 0)
		{
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				iLocal_53 = 2;
		
			if (!func_101())
				iLocal_53 = 2;
		}
		else if (iLocal_53 == 1)
		{
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() || !func_103(PLAYER::PLAYER_ID()) || func_102() != 0)
				iLocal_53 = 2;
		}
	
		if (iLocal_53 == 2)
			iLocal_54 = 2;
	}

	return;
}

