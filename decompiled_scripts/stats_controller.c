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
	char* sLocal_35 = NULL;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	int iLocal_38 = 0;
	float fLocal_39 = 0f;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	float fLocal_43 = 0f;
	float fLocal_44 = 0f;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	float fLocal_48 = 0f;
	float fLocal_49 = 0f;
	float fLocal_50 = 0f;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	bool bLocal_77 = 0;
	int iLocal_78 = 0;
	int iLocal_79 = 0;
	int iLocal_80 = 0;
	int iLocal_81 = 0;
	bool bLocal_82 = 0;
	int iLocal_83 = 0;
	int iLocal_84 = 0;
	int iLocal_85 = 0;
	int iLocal_86 = 0;
	int iLocal_87 = 0;
	int iLocal_88 = 0;
	int iLocal_89 = 0;
	int iLocal_90 = 0;
	int iLocal_91 = 0;
	int iLocal_92 = 0;
	int iLocal_93 = 0;
	int iLocal_94 = 0;
	int iLocal_95 = 0;
	int iLocal_96 = 0;
	int iLocal_97 = 0;
	int iLocal_98 = 0;
	int iLocal_99 = 0;
	int iLocal_100 = 0;
	int iLocal_101 = 0;
	int iLocal_102 = 0;
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
	sLocal_35 = "NULL";
	iLocal_38 = 3;
	fLocal_39 = 0f;
	fLocal_43 = -0.0375f;
	fLocal_44 = 0.17f;
	fLocal_48 = 80f;
	fLocal_49 = 140f;
	fLocal_50 = 180f;
	iLocal_57 = 1;
	iLocal_58 = 65;
	iLocal_59 = 49;
	iLocal_60 = 64;
	iLocal_71 = 2;
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(32))
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	while (true)
	{
		func_107();
		switch (iLocal_72)
		{
			case 0:
				func_102();
				break;
			
			case 1:
				func_93();
				func_2();
				Global_99745 = 0;
				break;
			
			case 2:
				func_1();
				break;
		}
		SYSTEM::WAIT(0);
	}
}

void func_1()
{
	iLocal_72 = 0;
}

void func_2()
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	bool bVar13;
	int iVar14;
	int iVar15;
	bool bVar16;
	
	if (iLocal_78)
	{
		iLocal_78 = 0;
	}
	else
	{
		iLocal_73++;
	}
	bLocal_77 = false;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = 3;
	}
	else
	{
		iVar0 = func_88();
	}
	if (iVar0 != iLocal_76)
	{
		iLocal_76 = iVar0;
		bLocal_77 = true;
		iLocal_84 = 0;
		iLocal_85 = 0;
		iLocal_92 = 0;
		iLocal_98 = 0;
	}
	if (iLocal_76 == 145)
	{
		return;
	}
	bVar1 = false;
	if ((iLocal_73 == 6 && func_87(64)) || (iLocal_73 == 5 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("pilot_school")) > 0))
	{
		bVar1 = true;
		iLocal_78 = 1;
	}
	func_81();
	if (Global_99743 || (Global_99744 && !func_78(0)))
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			iVar2 = 0;
			while (iVar2 < 8)
			{
				func_77(iLocal_76, iVar2);
				iVar2++;
			}
			Global_99743 = 0;
		}
	}
	if (!bVar1)
	{
		if (((((((((PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) || (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !func_76(iLocal_76))) || STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS()) || func_75()) || CUTSCENE::IS_CUTSCENE_PLAYING()) || CAM::IS_SCREEN_FADED_OUT()) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || Global_80335) || Global_99745) || iLocal_79)
		{
			iLocal_100 = 1;
			iLocal_101 = MISC::GET_GAME_TIMER();
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				iLocal_102 = NETWORK::GET_NETWORK_TIME();
			}
			return;
		}
		if (iLocal_100)
		{
			if ((!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && (MISC::GET_GAME_TIMER() - iLocal_101) > 3000) || (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::IS_TIME_MORE_THAN(NETWORK::GET_NETWORK_TIME(), NETWORK::GET_TIME_OFFSET(iLocal_102, 3000))))
			{
				iLocal_100 = 0;
			}
			else
			{
				return;
			}
		}
	}
	if (((!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && (MISC::GET_GAME_TIMER() - iLocal_74) > 2000) || (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::IS_TIME_MORE_THAN(NETWORK::GET_NETWORK_TIME(), NETWORK::GET_TIME_OFFSET(iLocal_75, 2000)))) || bLocal_77)
	{
		if (iLocal_73 >= 8)
		{
			iLocal_73 = 0;
			iLocal_74 = MISC::GET_GAME_TIMER();
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				iLocal_75 = NETWORK::GET_NETWORK_TIME();
			}
		}
		iVar11 = 1;
		if (bLocal_77)
		{
			iVar11 = 8;
		}
		iVar12 = 0;
		while (iVar12 < iVar11)
		{
			bVar13 = true;
			if (bLocal_77)
			{
				iVar8 = iVar12;
			}
			else
			{
				iVar8 = iLocal_73;
			}
			func_74(iLocal_76, iVar8, &iVar6, &iVar7);
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				iVar3 = func_73(iVar7, -1);
			}
			else if (iVar8 == 0)
			{
				iVar3 = Global_114963.f_2370.f_539.f_2387[iLocal_76];
			}
			else
			{
				STATS::STAT_GET_INT(iVar6, &iVar3, -1);
			}
			iVar5 = iVar3;
			iVar3 = func_72(iVar3, 0, 100);
			if (func_59(iLocal_76, iVar8, iVar3, &iVar4))
			{
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					func_57(iVar7, iVar4, -1, 1);
				}
				else if (iVar8 == 0)
				{
					if (Global_114963.f_2370.f_539.f_2387[iLocal_76] == 0)
					{
						bVar13 = false;
					}
					Global_114963.f_2370.f_539.f_2387[iLocal_76] = iVar4;
				}
				else
				{
					STATS::STAT_SET_INT(iVar6, iVar4, true);
				}
				if (iVar4 > func_55(iLocal_76, iVar8, -1))
				{
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
					{
						if (NETWORK::NETWORK_IS_ACTIVITY_SESSION() && BitTest(Global_4718592.f_40, 19))
						{
							bVar13 = false;
						}
					}
					else if ((!Global_114963.f_9094 && !func_54(0)) || !BitTest(Global_114963.f_9094.f_2[27 /*3*/], 2))
					{
						bVar13 = false;
					}
					iVar14 = iVar4;
					iVar15 = (iVar14 - (iVar14 % func_53(iLocal_76, iVar8)));
					if ((iVar14 % func_53(iLocal_76, iVar8)) >= 0)
					{
						iVar15 = (iVar15 + func_53(iLocal_76, iVar8));
					}
					if (iVar14 >= iVar15)
					{
						iVar14 = iVar15;
					}
					else
					{
						iVar14 = (iVar15 - func_53(iLocal_76, iVar8));
					}
					if (iVar4 > iVar14)
					{
						bVar13 = false;
					}
					if (func_47())
					{
						bVar13 = false;
					}
					if (bVar13)
					{
						if (!bLocal_77)
						{
							if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
							{
								if (func_46(117, -1) == 0)
								{
									if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() && func_9())
									{
										func_8("STAT_HELP2", -1);
										func_4(117, 1, -1, 1);
									}
								}
							}
							iLocal_79 = 1;
							iLocal_82 = (iVar4 - iVar3);
							iLocal_82 = (iLocal_82 + (iVar3 % func_53(iLocal_76, iVar8)));
							iLocal_83 = iVar4;
							iLocal_80 = iLocal_76;
							iLocal_81 = iVar8;
						}
					}
					if (iVar4 >= 100)
					{
						if (func_3(iLocal_76, iVar8, &iVar9))
						{
							if (iLocal_76 == 0)
							{
								STATS::STAT_GET_INT(joaat("sp0_total_playing_time"), &iVar10, -1);
								STATS::STAT_SET_INT(iVar9, iVar10, true);
							}
							else if (iLocal_76 == 1)
							{
								STATS::STAT_GET_INT(joaat("sp1_total_playing_time"), &iVar10, -1);
								STATS::STAT_SET_INT(iVar9, iVar10, true);
							}
							else if (iLocal_76 == 2)
							{
								STATS::STAT_GET_INT(joaat("sp2_total_playing_time"), &iVar10, -1);
								STATS::STAT_SET_INT(iVar9, iVar10, true);
							}
							else if (iLocal_76 == 3)
							{
							}
						}
					}
				}
				func_77(iLocal_76, iVar8);
			}
			else if (iVar4 < iVar5)
			{
				bVar16 = true;
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					func_57(iVar7, iVar4, -1, 1);
				}
				else if (iVar8 == 0)
				{
					Global_114963.f_2370.f_539.f_2387[iLocal_76] = iVar4;
					bVar16 = false;
				}
				else
				{
					STATS::STAT_SET_INT(iVar6, iVar4, true);
				}
				if (bVar16)
				{
					func_77(iLocal_76, iVar8);
				}
			}
			iVar12++;
		}
	}
	else
	{
		iLocal_78 = 1;
	}
}

bool func_3(int iParam0, int iParam1, var uParam2)
{
	*uParam2 = joaat("last_playing_time");
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					*uParam2 = joaat("sp0_special_ability_maxed");
					break;
				
				case 1:
					*uParam2 = joaat("sp0_stamina_maxed");
					break;
				
				case 3:
					*uParam2 = joaat("sp0_lung_capacity_maxed");
					break;
				
				case 2:
					*uParam2 = joaat("sp0_strength_maxed");
					break;
				
				case 4:
					*uParam2 = joaat("sp0_wheelie_ability_maxed");
					break;
				
				case 5:
					*uParam2 = joaat("sp0_flying_ability_maxed");
					break;
				
				case 6:
					*uParam2 = joaat("sp0_shooting_ability_maxed");
					break;
				
				case 7:
					*uParam2 = joaat("sp0_stealth_ability_maxed");
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					*uParam2 = joaat("sp1_special_ability_maxed");
					break;
				
				case 1:
					*uParam2 = joaat("sp1_stamina_maxed");
					break;
				
				case 3:
					*uParam2 = joaat("sp1_lung_capacity_maxed");
					break;
				
				case 2:
					*uParam2 = joaat("sp1_strength_maxed");
					break;
				
				case 4:
					*uParam2 = joaat("sp1_wheelie_ability_maxed");
					break;
				
				case 5:
					*uParam2 = joaat("sp1_flying_ability_maxed");
					break;
				
				case 6:
					*uParam2 = joaat("sp1_shooting_ability_maxed");
					break;
				
				case 7:
					*uParam2 = joaat("sp1_stealth_ability_maxed");
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					*uParam2 = joaat("sp2_special_ability_maxed");
					break;
				
				case 1:
					*uParam2 = joaat("sp2_stamina_maxed");
					break;
				
				case 3:
					*uParam2 = joaat("sp2_lung_capacity_maxed");
					break;
				
				case 2:
					*uParam2 = joaat("sp2_strength_maxed");
					break;
				
				case 4:
					*uParam2 = joaat("sp2_wheelie_ability_maxed");
					break;
				
				case 5:
					*uParam2 = joaat("sp2_flying_ability_maxed");
					break;
				
				case 6:
					*uParam2 = joaat("sp2_shooting_ability_maxed");
					break;
				
				case 7:
					*uParam2 = joaat("sp2_stealth_ability_maxed");
					break;
			}
			break;
	}
	return *uParam2 != joaat("last_playing_time");
}

void func_4(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	iVar0 = func_5(iParam0, iParam2);
	if (iVar0 != 0)
	{
		STATS::STAT_SET_BOOL(iVar0, bParam1, bParam3);
	}
}

int func_5(int iParam0, var uParam1)
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(2, iParam0, func_6(uParam1));
}

int func_6(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_7();
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

int func_7()
{
	return Global_1574928;
}

void func_8(char* sParam0, int iParam1)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam1);
}

int func_9()
{
	int iVar0;
	
	iVar0 = MISC::GET_FRAME_COUNT();
	if (Global_1935590 == iVar0)
	{
		return Global_1935591;
	}
	else
	{
		Global_1935590 = iVar0;
		Global_1935591 = 0;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (NETWORK::NETWORK_IS_ACTIVITY_SESSION() && (BitTest(Global_4718592.f_40, 19) || func_45(Global_4718592.f_197291, 1)))
		{
			return 0;
		}
	}
	if ((HUD::IS_HUD_HIDDEN() && HUD::IS_RADAR_HIDDEN()) && !func_44(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (Global_1935592 == 1)
	{
		return 0;
	}
	if (Global_1935401 == 1)
	{
		return 0;
	}
	if (func_43())
	{
		return 0;
	}
	if (MISC::IS_STUNT_JUMP_MESSAGE_SHOWING())
	{
		return 0;
	}
	if (Global_1836740 == 1)
	{
		return 0;
	}
	if (MISC::IS_STUNT_JUMP_IN_PROGRESS())
	{
		return 0;
	}
	if (Global_1057465)
	{
		return 0;
	}
	if (BitTest(Global_1845298[PLAYER::PLAYER_ID() /*881*/].f_879, 16))
	{
		return 0;
	}
	if (func_42())
	{
		return 0;
	}
	if (func_41())
	{
		return 0;
	}
	if (func_40())
	{
		if (!func_41())
		{
			if (!func_39(3, -1))
			{
				if (func_37(&Global_2699760, 300000, 0) == 1)
				{
					func_36(&Global_2699758);
					func_34(3, -1);
				}
				else if (func_37(&Global_2699758, 7000, 0) == 0)
				{
					return 0;
				}
			}
		}
		else
		{
			return 0;
		}
	}
	if (func_33())
	{
		return 0;
	}
	if (func_32())
	{
		return 0;
	}
	if (func_30())
	{
		return 0;
	}
	if (func_29())
	{
		return 0;
	}
	if (func_28())
	{
		return 0;
	}
	if (func_27())
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
	{
		return 0;
	}
	if (HUD::IS_PAUSE_MENU_ACTIVE())
	{
		return 0;
	}
	if (CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE())
	{
		if (func_26(PLAYER::PLAYER_PED_ID()) == joaat("weapon_sniperrifle") || func_26(PLAYER::PLAYER_PED_ID()) == joaat("weapon_heavysniper"))
		{
			return 0;
		}
	}
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		return 0;
	}
	if (func_25(8, -1))
	{
		return 0;
	}
	if (func_24(12, -1))
	{
		return 0;
	}
	if (HUD::IS_HUD_COMPONENT_ACTIVE(19))
	{
		return 0;
	}
	if (func_23())
	{
		return 0;
	}
	if (func_22())
	{
		return 0;
	}
	if (BitTest(Global_1845298[PLAYER::PLAYER_ID() /*881*/].f_879, 2))
	{
		return 0;
	}
	if (Global_1836516)
	{
		return 0;
	}
	if (Global_1836520)
	{
		return 0;
	}
	if (Global_1836522)
	{
		return 0;
	}
	if (Global_2673273.f_3776.f_39)
	{
		return 0;
	}
	if (func_21(0))
	{
		return 0;
	}
	if (func_20())
	{
		return 0;
	}
	if (Global_2733190.f_3156)
	{
		return 0;
	}
	if (Global_2673273.f_3638)
	{
		return 0;
	}
	if (!func_19(PLAYER::PLAYER_ID(), 1, 0))
	{
		return 0;
	}
	if (func_18(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (Global_2673273.f_3776.f_39 == 1)
	{
		return 0;
	}
	if (Global_2686119.f_2847.f_26 == 1)
	{
		return 0;
	}
	if (func_17(1))
	{
		return 0;
	}
	if (func_15())
	{
		return 0;
	}
	if (HUD::IS_HUD_COMPONENT_ACTIVE(16))
	{
		return 0;
	}
	if (func_14())
	{
		return 0;
	}
	if (func_13())
	{
		return 0;
	}
	if (HUD::IS_HELP_MESSAGE_ON_SCREEN())
	{
		if (func_12("FHU_HELP3"))
		{
			return 0;
		}
	}
	if (BitTest(Global_1845298[PLAYER::PLAYER_ID() /*881*/].f_879, 6))
	{
		return 0;
	}
	if (func_10(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	Global_1935591 = 1;
	return 1;
}

int func_10(int iParam0)
{
	if (iParam0 != func_11())
	{
		return BitTest(Global_1845298[iParam0 /*881*/].f_260.f_376, 26);
	}
	return 0;
}

int func_11()
{
	return -1;
}

bool func_12(char* sParam0)
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

bool func_13()
{
	return Global_2673273.f_1762.f_701 != 0;
}

bool func_14()
{
	return Global_2673273.f_2915.f_583;
}

bool func_15()
{
	return func_16();
}

bool func_16()
{
	return Global_1674261.f_40 == 3;
}

bool func_17(bool bParam0)
{
	if (bParam0)
	{
		return (Global_24430.f_4 && Global_24430.f_104 == 4);
	}
	return Global_24430.f_4;
}

bool func_18(int iParam0)
{
	return BitTest(Global_1882652[iParam0 /*321*/].f_17, 0);
}

int func_19(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
		{
			if (bParam1)
			{
				if (!PLAYER::IS_PLAYER_PLAYING(iParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (iVar0 == Global_2673273.f_3)
				{
					return Global_2673273.f_2;
				}
				else if (Global_2658293[iVar0 /*468*/] != 4)
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

int func_20()
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("appcamera")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_21(int iParam0)
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

bool func_22()
{
	return Global_1677555.f_112;
}

bool func_23()
{
	return Global_2673273.f_2591[0 /*80*/].f_1 != 0;
}

int func_24(bool bParam0, int iParam1)
{
	switch (bParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				if (Global_1677555.f_137[iParam1])
				{
					return 1;
				}
				if (Global_1677555.f_170[iParam1])
				{
					return 1;
				}
			}
			break;
		
		default:
			if (BitTest(Global_1677555.f_1046, bParam0))
			{
				return 1;
			}
			if (BitTest(Global_1677555.f_1047, bParam0))
			{
				return 1;
			}
			break;
	}
	return 0;
}

bool func_25(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1677555.f_203[iParam1];
			}
			break;
	}
	return BitTest(Global_1677555.f_1048, iParam0);
}

int func_26(int iParam0)
{
	var uVar0;
	
	WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &uVar0, true);
	return uVar0;
}

bool func_27()
{
	return Global_2685152.f_720;
}

bool func_28()
{
	return BitTest(Global_1048576.f_10, 13);
}

bool func_29()
{
	return Global_2685152.f_719;
}

int func_30()
{
	if (func_31() == 1 || func_31() == 4)
	{
		return 1;
	}
	return 0;
}

int func_31()
{
	return Global_1574635.f_18;
}

int func_32()
{
	if (func_31() == 3 || func_31() == 2)
	{
		return 1;
	}
	return 0;
}

int func_33()
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("maintransition")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_34(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (iParam1 == -1)
	{
		iParam1 = func_7();
	}
	if (MISC::ARE_PROFILE_SETTINGS_VALID() == 0)
	{
		return;
	}
	switch (bParam0)
	{
		case 0:
			STATS::SET_FREEMODE_PROLOGUE_DONE(0, iParam1);
			iVar1 = func_35(iParam1);
			iVar0 = MISC::GET_PROFILE_SETTING(iVar1);
			break;
		
		default:
			iVar1 = func_35(iParam1);
			iVar0 = MISC::GET_PROFILE_SETTING(iVar1);
			if (!BitTest(iVar0, bParam0))
			{
				MISC::SET_BIT(&iVar0, bParam0);
				STATS::SET_FREEMODE_PROLOGUE_DONE(iVar0, iParam1);
			}
			break;
	}
	switch (bParam0)
	{
		case 0:
			func_4(120, 0, iParam1, 1);
			func_4(124, 0, iParam1, 1);
			func_4(115, 0, iParam1, 1);
			func_4(119, 0, iParam1, 1);
			func_4(121, 0, iParam1, 1);
			func_4(122, 0, iParam1, 1);
			func_4(125, 0, iParam1, 1);
			func_57(1304, 0, iParam1, 1);
			func_57(7236, 0, iParam1, 1);
			break;
	}
}

int func_35(int iParam0)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_7();
	}
	switch (iParam0)
	{
		case 0:
			iVar0 = 914;
			break;
		
		case 1:
			iVar0 = 915;
			break;
		
		case 2:
			iVar0 = 916;
			break;
		
		case 3:
			iVar0 = 917;
			break;
		
		case 4:
			iVar0 = 918;
			break;
	}
	return iVar0;
}

void func_36(var uParam0)
{
	uParam0->f_1 = 0;
}

int func_37(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_38(uParam0, bParam2, 0);
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

void func_38(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = NETWORK::GET_NETWORK_TIME();
			}
			else
			{
				*uParam0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
			}
		}
		else
		{
			*uParam0 = MISC::GET_GAME_TIMER();
		}
		uParam0->f_1 = 1;
	}
}

bool func_39(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (iParam1 == -1)
	{
		iParam1 = func_7();
	}
	iVar0 = func_35(iParam1);
	iVar1 = MISC::GET_PROFILE_SETTING(iVar0);
	return BitTest(iVar1, iParam0);
}

int func_40()
{
	int iVar0;
	
	if (Global_153848 == 2)
	{
		return 1;
	}
	else if (Global_153848 == 3)
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_SIGNED_IN())
	{
		if (NETWORK::NETWORK_HAS_VALID_ROS_CREDENTIALS())
		{
			if (NETWORK::NETWORK_HAS_ROS_PRIVILEGE_PLAYED_LAST_GEN())
			{
				STATS::STAT_GET_INT(joaat("sp_unlock_exclus_content"), &iVar0, -1);
				MISC::SET_BIT(&iVar0, 2);
				MISC::SET_BIT(&iVar0, 4);
				MISC::SET_BIT(&iVar0, 6);
				MISC::SET_BIT(&Global_26, 2);
				MISC::SET_BIT(&Global_26, 4);
				MISC::SET_BIT(&Global_26, 6);
				STATS::STAT_SET_INT(joaat("sp_unlock_exclus_content"), iVar0, true);
				if (MISC::ARE_PROFILE_SETTINGS_VALID())
				{
					iVar0 = MISC::GET_PROFILE_SETTING(866);
					MISC::SET_BIT(&iVar0, false);
					STATS::SET_HAS_SPECIALEDITION_CONTENT(iVar0);
				}
				return 1;
			}
		}
	}
	if (MISC::ARE_PROFILE_SETTINGS_VALID())
	{
		if (BitTest(MISC::GET_PROFILE_SETTING(866), 0))
		{
			return 1;
		}
	}
	return 0;
}

bool func_41()
{
	return Global_1575095;
}

bool func_42()
{
	return Global_1845298[PLAYER::PLAYER_ID() /*881*/].f_185 != 0;
}

bool func_43()
{
	return Global_2709384;
}

bool func_44(int iParam0)
{
	return BitTest(Global_2658293[iParam0 /*468*/].f_325.f_3, 13);
}

int func_45(int iParam0, bool bParam1)
{
	if (iParam0 == 93)
	{
		if (bParam1)
		{
			if (PLAYER::GET_PLAYER_TEAM(PLAYER::GET_PLAYER_INDEX()) == 2)
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

int func_46(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	iVar0 = func_5(iParam0, iParam1);
	if (STATS::STAT_GET_BOOL(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_47()
{
	if (!func_51(1))
	{
		return 0;
	}
	if (func_48())
	{
		return 0;
	}
	return Global_1948163;
}

bool func_48()
{
	return func_49(PLAYER::PLAYER_ID());
}

int func_49(int iParam0)
{
	if (func_50(iParam0))
	{
		if (func_50(Global_1892925[iParam0 /*615*/].f_10))
		{
			return Global_1892925[iParam0 /*615*/].f_10 == iParam0;
		}
	}
	return 0;
}

int func_50(var uParam0)
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

bool func_51(bool bParam0)
{
	return func_52(PLAYER::PLAYER_ID(), bParam0);
}

int func_52(int iParam0, bool bParam1)
{
	if (!func_50(iParam0))
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_49(iParam0))
		{
			return 0;
		}
	}
	return func_50(Global_1892925[iParam0 /*615*/].f_10);
}

int func_53(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 20;
					break;
				
				case 1:
					return 20;
					break;
				
				case 3:
					return 20;
					break;
				
				case 2:
					return 20;
					break;
				
				case 4:
					return 20;
					break;
				
				case 5:
					return 20;
					break;
				
				case 6:
					return 20;
					break;
				
				case 7:
					return 20;
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return 20;
					break;
				
				case 1:
					return 20;
					break;
				
				case 3:
					return 20;
					break;
				
				case 2:
					return 20;
					break;
				
				case 4:
					return 20;
					break;
				
				case 5:
					return 20;
					break;
				
				case 6:
					return 20;
					break;
				
				case 7:
					return 20;
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return 20;
					break;
				
				case 1:
					return 20;
					break;
				
				case 3:
					return 20;
					break;
				
				case 2:
					return 20;
					break;
				
				case 4:
					return 20;
					break;
				
				case 5:
					return 20;
					break;
				
				case 6:
					return 20;
					break;
				
				case 7:
					return 20;
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return 20;
					break;
				
				case 1:
					return 20;
					break;
				
				case 3:
					return 20;
					break;
				
				case 2:
					return 20;
					break;
				
				case 4:
					return 20;
					break;
				
				case 5:
					return 20;
					break;
				
				case 6:
					return 20;
					break;
				
				case 7:
					return 20;
					break;
			}
			break;
	}
	return 1;
}

int func_54(bool bParam0)
{
	if (!bParam0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return BitTest(Global_80586, 0);
}

int func_55(int iParam0, int iParam1, int iParam2)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_56(14))
		{
			return 100;
		}
	}
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 47;
					break;
				
				case 3:
					return 22;
					break;
				
				case 2:
					return 21;
					break;
				
				case 4:
					return 54;
					break;
				
				case 5:
					return 31;
					break;
				
				case 6:
					return 79;
					break;
				
				case 7:
					return 81;
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 51;
					break;
				
				case 3:
					return 46;
					break;
				
				case 2:
					return 49;
					break;
				
				case 4:
					return 71;
					break;
				
				case 5:
					return 19;
					break;
				
				case 6:
					return 24;
					break;
				
				case 7:
					return 21;
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 23;
					break;
				
				case 3:
					return 28;
					break;
				
				case 2:
					return 79;
					break;
				
				case 4:
					return 31;
					break;
				
				case 5:
					return 82;
					break;
				
				case 6:
					return 69;
					break;
				
				case 7:
					return 49;
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 1:
					return func_73(1225, iParam2);
					break;
				
				case 3:
					return func_73(1231, iParam2);
					break;
				
				case 2:
					return func_73(1227, iParam2);
					break;
				
				case 4:
					return func_73(1230, iParam2);
					break;
				
				case 5:
					return func_73(1229, iParam2);
					break;
				
				case 6:
					return func_73(1226, iParam2);
					break;
				
				case 7:
					return func_73(1228, iParam2);
					break;
			}
			break;
	}
	return 0;
}

bool func_56(int iParam0)
{
	return Global_44921 == iParam0;
}

void func_57(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	if (iParam0 != 16764)
	{
		iVar0 = func_58(iParam0, iParam2);
		if (iVar0 != 0)
		{
			STATS::STAT_SET_INT(iVar0, iParam1, bParam3);
		}
	}
}

int func_58(int iParam0, int iParam1)
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(0, iParam0, func_6(iParam1));
}

int func_59(int iParam0, int iParam1, int iParam2, var uParam3)
{
	*uParam3 = func_60(iParam0, iParam1, 0, -1);
	if (*uParam3 > iParam2)
	{
		return 1;
	}
	return 0;
}

int func_60(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	float fVar12;
	
	iVar2 = 0;
	switch (iParam1)
	{
		case 0:
			if (iParam0 == 0)
			{
				STATS::STAT_GET_INT(joaat("sp0_special_ability_unlocked"), &iVar3, -1);
				fVar0 = SYSTEM::TO_FLOAT(iVar3);
			}
			else if (iParam0 == 1)
			{
				STATS::STAT_GET_INT(joaat("sp1_special_ability_unlocked"), &iVar3, -1);
				fVar0 = SYSTEM::TO_FLOAT(iVar3);
			}
			else if (iParam0 == 2)
			{
				STATS::STAT_GET_INT(joaat("sp2_special_ability_unlocked"), &iVar3, -1);
				fVar0 = SYSTEM::TO_FLOAT(iVar3);
			}
			else if (iParam0 == 3)
			{
				fVar0 = SYSTEM::TO_FLOAT(func_73(64, iParam3));
			}
			break;
		
		case 1:
			if (iParam0 == 0)
			{
				STATS::STAT_GET_FLOAT(joaat("sp0_dist_running"), &fVar1, -1);
				fVar0 = ((fVar1 - Global_114963.f_2370.f_539.f_2355[iParam0]) / 175f);
			}
			else if (iParam0 == 1)
			{
				STATS::STAT_GET_FLOAT(joaat("sp1_dist_running"), &fVar1, -1);
				fVar0 = ((fVar1 - Global_114963.f_2370.f_539.f_2355[iParam0]) / 175f);
			}
			else if (iParam0 == 2)
			{
				STATS::STAT_GET_FLOAT(joaat("sp2_dist_running"), &fVar1, -1);
				fVar0 = ((fVar1 - Global_114963.f_2370.f_539.f_2355[iParam0]) / 175f);
			}
			else if (iParam0 == 3)
			{
				fVar0 = (func_70(20, iParam3) / 175f);
				func_67(&fVar0);
			}
			if (iParam0 == 0)
			{
				fVar0 = (fVar0 + SYSTEM::TO_FLOAT(func_66(joaat("sp0_time_swimming"))));
			}
			else if (iParam0 == 1)
			{
				fVar0 = (fVar0 + SYSTEM::TO_FLOAT(func_66(joaat("sp1_time_swimming"))));
			}
			else if (iParam0 == 2)
			{
				fVar0 = (fVar0 + SYSTEM::TO_FLOAT(func_66(joaat("sp2_time_swimming"))));
			}
			else if (iParam0 == 3)
			{
				fVar0 = (fVar0 + SYSTEM::TO_FLOAT(func_66(func_58(50, iParam3))));
				func_67(&fVar0);
			}
			if (iParam0 == 0)
			{
				fVar0 = (fVar0 + SYSTEM::TO_FLOAT(func_66(joaat("sp0_time_driving_bicycle"))));
			}
			else if (iParam0 == 1)
			{
				fVar0 = (fVar0 + SYSTEM::TO_FLOAT(func_66(joaat("sp1_time_driving_bicycle"))));
			}
			else if (iParam0 == 2)
			{
				fVar0 = (fVar0 + SYSTEM::TO_FLOAT(func_66(joaat("sp2_time_driving_bicycle"))));
			}
			else if (iParam0 == 3)
			{
				fVar0 = (fVar0 + SYSTEM::TO_FLOAT(func_66(func_58(47, iParam3))));
				func_67(&fVar0);
			}
			if (iParam0 == 3)
			{
				fVar0 = (fVar0 + ((4f * Global_262145.f_24006) * IntToFloat(func_73(7237, -1))));
				fVar0 = (fVar0 + IntToFloat((4 * (func_73(14260, -1) / 3))));
			}
			if (iParam0 == 3)
			{
				fVar0 = (fVar0 * 0.25f);
			}
			break;
		
		case 3:
			if (iParam0 == 0)
			{
				fVar0 = (SYSTEM::TO_FLOAT(func_65(joaat("sp0_time_underwater"))) / 30f);
			}
			else if (iParam0 == 1)
			{
				fVar0 = (SYSTEM::TO_FLOAT(func_65(joaat("sp1_time_underwater"))) / 30f);
			}
			else if (iParam0 == 2)
			{
				fVar0 = (SYSTEM::TO_FLOAT(func_65(joaat("sp2_time_underwater"))) / 30f);
			}
			else if (iParam0 == 3)
			{
				fVar0 = (SYSTEM::TO_FLOAT(func_65(func_58(52, iParam3))) / 30f);
				func_67(&fVar0);
			}
			break;
		
		case 2:
			if (iParam0 == 0)
			{
				STATS::STAT_GET_INT(joaat("sp0_unarmed_hits"), &iVar3, -1);
				fVar0 = (SYSTEM::TO_FLOAT((iVar3 - Global_114963.f_2370.f_539.f_2359[iParam0])) / 20f);
			}
			else if (iParam0 == 1)
			{
				STATS::STAT_GET_INT(joaat("sp1_unarmed_hits"), &iVar3, -1);
				fVar0 = (SYSTEM::TO_FLOAT((iVar3 - Global_114963.f_2370.f_539.f_2359[iParam0])) / 20f);
			}
			else if (iParam0 == 2)
			{
				STATS::STAT_GET_INT(joaat("sp2_unarmed_hits"), &iVar3, -1);
				fVar0 = (SYSTEM::TO_FLOAT((iVar3 - Global_114963.f_2370.f_539.f_2359[iParam0])) / 20f);
			}
			else if (iParam0 == 3)
			{
				fVar0 = (SYSTEM::TO_FLOAT(func_73(1500, iParam3)) / 20f);
				func_67(&fVar0);
			}
			break;
		
		case 4:
			if (iParam0 == 0)
			{
				STATS::STAT_GET_INT(joaat("sp0_number_near_miss"), &iVar3, -1);
				fVar0 = (fVar0 + (SYSTEM::TO_FLOAT((iVar3 - Global_114963.f_2370.f_539.f_2363[iParam0])) / 50f));
			}
			else if (iParam0 == 1)
			{
				STATS::STAT_GET_INT(joaat("sp1_number_near_miss"), &iVar3, -1);
				fVar0 = (fVar0 + (SYSTEM::TO_FLOAT((iVar3 - Global_114963.f_2370.f_539.f_2363[iParam0])) / 50f));
			}
			else if (iParam0 == 2)
			{
				STATS::STAT_GET_INT(joaat("sp2_number_near_miss"), &iVar3, -1);
				fVar0 = (fVar0 + (SYSTEM::TO_FLOAT((iVar3 - Global_114963.f_2370.f_539.f_2363[iParam0])) / 50f));
			}
			else if (iParam0 == 3)
			{
				fVar0 = (fVar0 + IntToFloat((func_73(113, iParam3) / 50)));
				func_67(&fVar0);
			}
			break;
		
		case 5:
			if (iParam0 == 0)
			{
				fVar0 = (SYSTEM::TO_FLOAT(func_66(joaat("sp0_time_driving_plane"))) / 10f);
			}
			else if (iParam0 == 1)
			{
				fVar0 = (SYSTEM::TO_FLOAT(func_66(joaat("sp1_time_driving_plane"))) / 10f);
			}
			else if (iParam0 == 2)
			{
				fVar0 = (SYSTEM::TO_FLOAT(func_66(joaat("sp2_time_driving_plane"))) / 10f);
			}
			else if (iParam0 == 3)
			{
				fVar0 = (SYSTEM::TO_FLOAT(func_66(func_58(43, iParam3))) / 10f);
			}
			if (iParam0 == 0)
			{
				fVar0 = (fVar0 + (SYSTEM::TO_FLOAT(func_66(joaat("sp0_time_driving_heli"))) / 10f));
			}
			else if (iParam0 == 1)
			{
				fVar0 = (fVar0 + (SYSTEM::TO_FLOAT(func_66(joaat("sp1_time_driving_heli"))) / 10f));
			}
			else if (iParam0 == 2)
			{
				fVar0 = (fVar0 + (SYSTEM::TO_FLOAT(func_66(joaat("sp2_time_driving_heli"))) / 10f));
			}
			else if (iParam0 == 3)
			{
				fVar0 = (fVar0 + (SYSTEM::TO_FLOAT(func_66(func_58(45, iParam3))) / 10f));
			}
			if (iParam0 == 0)
			{
				STATS::STAT_GET_INT(joaat("sp0_plane_landings"), &iVar3, -1);
				fVar0 = (fVar0 + SYSTEM::TO_FLOAT(iVar3));
			}
			else if (iParam0 == 1)
			{
				STATS::STAT_GET_INT(joaat("sp1_plane_landings"), &iVar3, -1);
				fVar0 = (fVar0 + SYSTEM::TO_FLOAT(iVar3));
			}
			else if (iParam0 == 2)
			{
				STATS::STAT_GET_INT(joaat("sp2_plane_landings"), &iVar3, -1);
				fVar0 = (fVar0 + SYSTEM::TO_FLOAT(iVar3));
			}
			else if (iParam0 == 3)
			{
				fVar0 = (fVar0 + IntToFloat(func_73(61, iParam3)));
				func_67(&fVar0);
			}
			if (iParam0 == 3)
			{
				if (BitTest(Global_1575013, 15))
				{
					fVar0 = 100f;
				}
			}
			if ((iParam0 == 0 || iParam0 == 1) || iParam0 == 2)
			{
				iVar4 = func_64(iParam0, 0);
				if (iParam0 == 2)
				{
					if (iVar4 == 3)
					{
						fVar0 = (fVar0 + 10f);
					}
					else if (iVar4 == 2)
					{
						fVar0 = (fVar0 + 7f);
					}
					else if (iVar4 == 1)
					{
						fVar0 = (fVar0 + 5f);
					}
				}
				else if (iVar4 == 3)
				{
					fVar0 = (fVar0 + 12f);
				}
				else if (iVar4 == 2)
				{
					fVar0 = (fVar0 + 9f);
				}
				else if (iVar4 == 1)
				{
					fVar0 = (fVar0 + 7f);
				}
				iVar4 = func_64(iParam0, 1);
				if (iParam0 == 2)
				{
					if (iVar4 == 3)
					{
						fVar0 = (fVar0 + 10f);
					}
					else if (iVar4 == 2)
					{
						fVar0 = (fVar0 + 7f);
					}
					else if (iVar4 == 1)
					{
						fVar0 = (fVar0 + 5f);
					}
				}
				else if (iVar4 == 3)
				{
					fVar0 = (fVar0 + 12f);
				}
				else if (iVar4 == 2)
				{
					fVar0 = (fVar0 + 9f);
				}
				else if (iVar4 == 1)
				{
					fVar0 = (fVar0 + 7f);
				}
				iVar4 = func_64(iParam0, 2);
				if (iVar4 == 3)
				{
					fVar0 = (fVar0 + 12f);
				}
				else if (iVar4 == 2)
				{
					fVar0 = (fVar0 + 9f);
				}
				else if (iVar4 == 1)
				{
					fVar0 = (fVar0 + 7f);
				}
				iVar4 = func_64(iParam0, 3);
				if (iVar4 == 3)
				{
					fVar0 = (fVar0 + 12f);
				}
				else if (iVar4 == 2)
				{
					fVar0 = (fVar0 + 9f);
				}
				else if (iVar4 == 1)
				{
					fVar0 = (fVar0 + 7f);
				}
				iVar4 = func_64(iParam0, 6);
				if (iVar4 == 3)
				{
					fVar0 = (fVar0 + 12f);
				}
				else if (iVar4 == 2)
				{
					fVar0 = (fVar0 + 9f);
				}
				else if (iVar4 == 1)
				{
					fVar0 = (fVar0 + 7f);
				}
				iVar4 = func_64(iParam0, 4);
				if (iVar4 == 3)
				{
					fVar0 = (fVar0 + 5f);
				}
				else if (iVar4 == 2)
				{
					fVar0 = (fVar0 + 3f);
				}
				else if (iVar4 == 1)
				{
					fVar0 = (fVar0 + 2f);
				}
				iVar4 = func_64(iParam0, 5);
				if (iVar4 == 3)
				{
					fVar0 = (fVar0 + 12f);
				}
				else if (iVar4 == 2)
				{
					fVar0 = (fVar0 + 9f);
				}
				else if (iVar4 == 1)
				{
					fVar0 = (fVar0 + 7f);
				}
				iVar4 = func_64(iParam0, 7);
				if (iVar4 == 3)
				{
					fVar0 = (fVar0 + 12f);
				}
				else if (iVar4 == 2)
				{
					fVar0 = (fVar0 + 9f);
				}
				else if (iVar4 == 1)
				{
					fVar0 = (fVar0 + 7f);
				}
				iVar4 = func_64(iParam0, 8);
				if (iVar4 == 3)
				{
					fVar0 = (fVar0 + 12f);
				}
				else if (iVar4 == 2)
				{
					fVar0 = (fVar0 + 9f);
				}
				else if (iVar4 == 1)
				{
					fVar0 = (fVar0 + 7f);
				}
				iVar4 = func_64(iParam0, 11);
				if (iVar4 == 3)
				{
					fVar0 = (fVar0 + 12f);
				}
				else if (iVar4 == 2)
				{
					fVar0 = (fVar0 + 9f);
				}
				else if (iVar4 == 1)
				{
					fVar0 = (fVar0 + 7f);
				}
			}
			break;
		
		case 7:
			if (iParam0 == 0)
			{
				STATS::STAT_GET_FLOAT(joaat("sp0_dist_walk_st"), &fVar1, -1);
				fVar0 = ((fVar1 - Global_114963.f_2370.f_539.f_2367[iParam0]) / 45f);
			}
			else if (iParam0 == 1)
			{
				STATS::STAT_GET_FLOAT(joaat("sp1_dist_walk_st"), &fVar1, -1);
				fVar0 = ((fVar1 - Global_114963.f_2370.f_539.f_2367[iParam0]) / 45f);
			}
			else if (iParam0 == 2)
			{
				STATS::STAT_GET_FLOAT(joaat("sp2_dist_walk_st"), &fVar1, -1);
				fVar0 = ((fVar1 - Global_114963.f_2370.f_539.f_2367[iParam0]) / 45f);
			}
			else if (iParam0 == 3)
			{
				fVar0 = (func_70(19, iParam3) / 45f);
			}
			if (iParam0 == 0)
			{
				STATS::STAT_GET_INT(joaat("sp0_kills_stealth"), &iVar3, -1);
				fVar0 = (fVar0 + ((SYSTEM::TO_FLOAT((iVar3 - Global_114963.f_2370.f_539.f_2371[iParam0])) / 2f) * 1.5f));
			}
			else if (iParam0 == 1)
			{
				STATS::STAT_GET_INT(joaat("sp1_kills_stealth"), &iVar3, -1);
				fVar0 = (fVar0 + ((SYSTEM::TO_FLOAT((iVar3 - Global_114963.f_2370.f_539.f_2371[iParam0])) / 2f) * 1.5f));
			}
			else if (iParam0 == 2)
			{
				STATS::STAT_GET_INT(joaat("sp2_kills_stealth"), &iVar3, -1);
				fVar0 = (fVar0 + ((SYSTEM::TO_FLOAT((iVar3 - Global_114963.f_2370.f_539.f_2371[iParam0])) / 2f) * 1.5f));
			}
			else if (iParam0 == 3)
			{
				iVar3 = func_73(34, iParam3);
				fVar0 = (fVar0 + ((SYSTEM::TO_FLOAT(iVar3) / 2f) * 1.5f));
				func_67(&fVar0);
			}
			break;
		
		case 6:
			if (iParam0 == 0)
			{
				STATS::STAT_GET_INT(joaat("sp0_hits_mission"), &iVar5, -1);
				STATS::STAT_GET_INT(joaat("sp0_hits_peds_vehicles"), &iVar6, -1);
				iVar6 = (iVar6 - iVar5);
				fVar0 = (SYSTEM::TO_FLOAT((iVar5 - Global_114963.f_2370.f_539.f_2375[iParam0])) / 40f);
				fVar0 = (fVar0 + (SYSTEM::TO_FLOAT((iVar6 - Global_114963.f_2370.f_539.f_2379[iParam0])) / 80f));
			}
			else if (iParam0 == 1)
			{
				STATS::STAT_GET_INT(joaat("sp1_hits_mission"), &iVar5, -1);
				STATS::STAT_GET_INT(joaat("sp1_hits_peds_vehicles"), &iVar6, -1);
				iVar6 = (iVar6 - iVar5);
				fVar0 = (SYSTEM::TO_FLOAT((iVar5 - Global_114963.f_2370.f_539.f_2375[iParam0])) / 40f);
				fVar0 = (fVar0 + (SYSTEM::TO_FLOAT((iVar6 - Global_114963.f_2370.f_539.f_2379[iParam0])) / 80f));
			}
			else if (iParam0 == 2)
			{
				STATS::STAT_GET_INT(joaat("sp2_hits_mission"), &iVar5, -1);
				STATS::STAT_GET_INT(joaat("sp2_hits_peds_vehicles"), &iVar6, -1);
				iVar6 = (iVar6 - iVar5);
				fVar0 = (SYSTEM::TO_FLOAT((iVar5 - Global_114963.f_2370.f_539.f_2375[iParam0])) / 40f);
				fVar0 = (fVar0 + (SYSTEM::TO_FLOAT((iVar6 - Global_114963.f_2370.f_539.f_2379[iParam0])) / 80f));
			}
			else if (iParam0 == 3)
			{
				iVar6 = func_73(172, iParam3);
				fVar0 = (fVar0 + (SYSTEM::TO_FLOAT(iVar6) / 80f));
			}
			if ((iParam0 == 0 || iParam0 == 1) || iParam0 == 2)
			{
				iVar7 = 0;
				while (iVar7 < 22)
				{
					switch (func_63(iVar7, iParam0))
					{
						case 3:
							iVar8++;
							break;
						
						case 2:
							iVar9++;
							break;
						
						case 1:
							iVar10++;
							break;
					}
					iVar7++;
				}
				fVar0 = (fVar0 + IntToFloat(iVar8 * 3));
				fVar0 = (fVar0 + IntToFloat(iVar9 * 2));
				fVar0 = (fVar0 + IntToFloat(iVar10 * 1));
			}
			else if (iParam0 == 3)
			{
				fVar0 = (fVar0 + IntToFloat(func_62(joaat("mpply_shootingrange_wins")) * 1));
				func_67(&fVar0);
			}
			break;
	}
	if (iParam1 != 0)
	{
		iVar11 = func_55(iParam0, iParam1, iParam3);
		fVar0 = (fVar0 + IntToFloat(iVar11));
		fVar0 = (fVar0 + IntToFloat(func_61(iParam0, iParam1, iParam3)));
	}
	if (bParam2)
	{
		fVar12 = (fVar0 - (fVar0 % IntToFloat(func_53(iParam0, iParam1))));
		if ((fVar0 % IntToFloat(func_53(iParam0, iParam1))) >= 0f)
		{
			fVar12 = (fVar12 + IntToFloat(func_53(iParam0, iParam1)));
		}
		if (fVar0 >= fVar12)
		{
			fVar0 = fVar12;
		}
		else
		{
			fVar0 = (fVar12 - IntToFloat(func_53(iParam0, iParam1)));
		}
	}
	iVar2 = SYSTEM::FLOOR(fVar0);
	iVar2 = func_72(iVar2, 0, 100);
	return iVar2;
}

int func_61(int iParam0, int iParam1, int iParam2)
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
					return Global_114963.f_2370.f_539.f_2247[iParam1 /*4*/][iParam0];
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 1:
					return func_73(72, iParam2);
					break;
				
				case 3:
					return func_73(74, iParam2);
					break;
				
				case 2:
					return func_73(73, iParam2);
					break;
				
				case 4:
					return func_73(75, iParam2);
					break;
				
				case 5:
					return func_73(76, iParam2);
					break;
				
				case 6:
					return func_73(77, iParam2);
					break;
				
				case 7:
					return func_73(78, iParam2);
					break;
			}
			break;
	}
	return 0;
}

int func_62(int iParam0)
{
	int iVar0;
	var uVar1;
	
	iVar0 = iParam0;
	if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_63(int iParam0, int iParam1)
{
	return Global_114963.f_19156[iParam1 /*271*/].f_3[iParam0 /*12*/].f_3;
}

int func_64(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 > 2)
	{
		return 0;
	}
	return Global_114963.f_1995[iParam0 /*121*/][iParam1 /*10*/].f_8;
}

int func_65(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = (iVar0 + (STATS::STAT_GET_NUMBER_OF_DAYS(iParam0) * 86400));
	iVar0 = (iVar0 + STATS::STAT_GET_NUMBER_OF_HOURS(iParam0) * 3600);
	iVar0 = (iVar0 + STATS::STAT_GET_NUMBER_OF_MINUTES(iParam0) * 60);
	iVar0 = (iVar0 + STATS::STAT_GET_NUMBER_OF_SECONDS(iParam0));
	return iVar0;
}

int func_66(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = (iVar0 + STATS::STAT_GET_NUMBER_OF_DAYS(iParam0) * 1440);
	iVar0 = (iVar0 + STATS::STAT_GET_NUMBER_OF_HOURS(iParam0) * 60);
	iVar0 = (iVar0 + STATS::STAT_GET_NUMBER_OF_MINUTES(iParam0));
	return iVar0;
}

var func_67(float fParam0)
{
	if (func_47())
	{
		if (func_68() < Global_262145.f_13227)
		{
			if (*fParam0 + (IntToFloat(func_68()) * Global_262145.f_13226)) <= IntToFloat(Global_262145.f_13236)
			{
				*fParam0 = (*fParam0 + (IntToFloat(func_68()) * Global_262145.f_13226));
			}
		}
		return *fParam0;
	}
	return *fParam0;
}

int func_68()
{
	if (func_51(1))
	{
		return Global_1845298[func_69() /*881*/].f_198.f_6;
	}
	return 0;
}

int func_69()
{
	return Global_1892925[PLAYER::PLAYER_ID() /*615*/].f_10;
}

float func_70(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	iVar0 = func_71(iParam0, iParam1);
	if (STATS::STAT_GET_FLOAT(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0f;
}

int func_71(int iParam0, var uParam1)
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(1, iParam0, func_6(uParam1));
}

int func_72(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 > iParam2)
	{
		return iParam2;
	}
	else if (iParam0 < iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

int func_73(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 16764)
	{
		iVar0 = func_58(iParam0, iParam1);
		if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

void func_74(int iParam0, int iParam1, var uParam2, var uParam3)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					*uParam2 = joaat("sp0_special_ability_unlocked");
					break;
				
				case 1:
					*uParam2 = joaat("sp0_stamina");
					break;
				
				case 3:
					*uParam2 = joaat("sp0_lung_capacity");
					break;
				
				case 2:
					*uParam2 = joaat("sp0_strength");
					break;
				
				case 4:
					*uParam2 = joaat("sp0_wheelie_ability");
					break;
				
				case 5:
					*uParam2 = joaat("sp0_flying_ability");
					break;
				
				case 6:
					*uParam2 = joaat("sp0_shooting_ability");
					break;
				
				case 7:
					*uParam2 = joaat("sp0_stealth_ability");
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					*uParam2 = joaat("sp1_special_ability_unlocked");
					break;
				
				case 1:
					*uParam2 = joaat("sp1_stamina");
					break;
				
				case 3:
					*uParam2 = joaat("sp1_lung_capacity");
					break;
				
				case 2:
					*uParam2 = joaat("sp1_strength");
					break;
				
				case 4:
					*uParam2 = joaat("sp1_wheelie_ability");
					break;
				
				case 5:
					*uParam2 = joaat("sp1_flying_ability");
					break;
				
				case 6:
					*uParam2 = joaat("sp1_shooting_ability");
					break;
				
				case 7:
					*uParam2 = joaat("sp1_stealth_ability");
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					*uParam2 = joaat("sp2_special_ability_unlocked");
					break;
				
				case 1:
					*uParam2 = joaat("sp2_stamina");
					break;
				
				case 3:
					*uParam2 = joaat("sp2_lung_capacity");
					break;
				
				case 2:
					*uParam2 = joaat("sp2_strength");
					break;
				
				case 4:
					*uParam2 = joaat("sp2_wheelie_ability");
					break;
				
				case 5:
					*uParam2 = joaat("sp2_flying_ability");
					break;
				
				case 6:
					*uParam2 = joaat("sp2_shooting_ability");
					break;
				
				case 7:
					*uParam2 = joaat("sp2_stealth_ability");
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
}

int func_75()
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return Global_99939.f_44 == 1;
	}
	return 0;
}

bool func_76(int iParam0)
{
	return iParam0 < 3;
}

void func_77(int iParam0, int iParam1)
{
	int iVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	
	if (((iParam0 != 0 || iParam0 != 1) || iParam0 != 2) || iParam0 != 3)
	{
		return;
	}
	func_74(iParam0, iParam1, &iVar2, &iVar3);
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = func_73(iVar3, -1);
	}
	else
	{
		STATS::STAT_GET_INT(iVar2, &iVar0, -1);
	}
	switch (iParam1)
	{
		case 2:
			fVar1 = (0.8f + (0.4f * (SYSTEM::TO_FLOAT(iVar0) / 100f)));
			PLAYER::SET_PLAYER_MELEE_WEAPON_DAMAGE_MODIFIER(PLAYER::PLAYER_ID(), fVar1, true);
			break;
		
		case 7:
			if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("armenian3")) != 0 || SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("trevor3")) != 0)
			{
				Global_99744 = 1;
			}
			else
			{
				fVar1 = (1f - (SYSTEM::TO_FLOAT(iVar0) / 100f));
				PLAYER::SET_PLAYER_NOISE_MULTIPLIER(PLAYER::PLAYER_ID(), fVar1);
				PLAYER::SET_PLAYER_SNEAKING_NOISE_MULTIPLIER(PLAYER::PLAYER_ID(), fVar1);
				PLAYER::SET_PLAYER_STEALTH_PERCEPTION_MODIFIER(PLAYER::PLAYER_ID(), fVar1);
			}
			break;
	}
}

int func_78(int iParam0)
{
	if (Global_44921 == 15)
	{
		return 0;
	}
	if (func_79(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_79(int iParam0)
{
	return func_80(iParam0, Global_44921);
}

int func_80(int iParam0, int iParam1)
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

void func_81()
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (((ENTITY::DOES_ENTITY_EXIST(iVar0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false)) && VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1, false) == PLAYER::PLAYER_PED_ID()) && (((VEHICLE::IS_THIS_MODEL_A_CAR(ENTITY::GET_ENTITY_MODEL(iVar0)) || VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(iVar0))) || VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(iVar0))) || VEHICLE::IS_THIS_MODEL_A_QUADBIKE(ENTITY::GET_ENTITY_MODEL(iVar0))))
		{
			iVar1 = 1;
		}
	}
	func_86(&iVar0, &iVar1);
	func_85(&iVar0, &iVar1);
	func_82();
}

void func_82()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!iLocal_98)
	{
		if (iLocal_76 == 3)
		{
			if (Global_2359296[func_84() /*5574*/].f_681.f_7)
			{
				iLocal_95 = func_65(func_58(148, -1));
				Global_2359296[func_84() /*5574*/].f_681.f_7 = 0;
			}
			else
			{
				iLocal_95 = Global_2359296[func_84() /*5574*/].f_681.f_6;
			}
			if (Global_2359296[func_84() /*5574*/].f_681.f_4 == 0)
			{
				Global_2359296[func_84() /*5574*/].f_681.f_4 = NETWORK::GET_CLOUD_TIME_AS_INT();
			}
			iLocal_97 = Global_2359296[func_84() /*5574*/].f_681.f_4;
			iLocal_96 = Global_2359296[func_84() /*5574*/].f_681.f_5;
		}
		else
		{
			if (Global_114963.f_2370.f_539.f_2292[iLocal_76])
			{
				switch (iLocal_76)
				{
					case 0:
						iLocal_95 = func_65(joaat("sp0_total_wheelie_time"));
						break;
					
					case 1:
						iLocal_95 = func_65(joaat("sp1_total_wheelie_time"));
						break;
					
					case 2:
						iLocal_95 = func_65(joaat("sp2_total_wheelie_time"));
						break;
				}
				Global_114963.f_2370.f_539.f_2292[iLocal_76] = 0;
			}
			else
			{
				iLocal_95 = Global_114963.f_2370.f_539.f_2288[iLocal_76];
			}
			if (Global_114963.f_2370.f_539.f_2280[iLocal_76] == 0)
			{
				Global_114963.f_2370.f_539.f_2280[iLocal_76] = NETWORK::GET_CLOUD_TIME_AS_INT();
			}
			iLocal_97 = Global_114963.f_2370.f_539.f_2280[iLocal_76];
			iLocal_96 = Global_114963.f_2370.f_539.f_2284[iLocal_76];
		}
		iLocal_98 = 1;
		iLocal_99 = 1;
	}
	else if ((NETWORK::GET_CLOUD_TIME_AS_INT() - iLocal_97) > 86400)
	{
		iLocal_98 = 0;
		iLocal_99 = 0;
		iLocal_97 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iLocal_96 = 0;
		if (iLocal_76 == 3)
		{
			Global_2359296[func_84() /*5574*/].f_681.f_7 = 1;
		}
		else
		{
			Global_114963.f_2370.f_539.f_2292[iLocal_76] = 1;
		}
	}
	if (iLocal_99)
	{
		switch (iLocal_76)
		{
			case 0:
				iVar0 = func_65(joaat("sp0_total_wheelie_time"));
				break;
			
			case 1:
				iVar0 = func_65(joaat("sp1_total_wheelie_time"));
				break;
			
			case 2:
				iVar0 = func_65(joaat("sp2_total_wheelie_time"));
				break;
			
			case 3:
				iVar0 = func_65(func_58(148, -1));
				break;
		}
		iVar1 = (iVar0 - iLocal_95);
		iVar2 = (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar1) / 15f)) - iLocal_96);
		if (iVar2 > 0)
		{
			func_83(iLocal_76, 4, iVar2);
			iLocal_96 = (iLocal_96 + iVar2);
		}
		if (iVar0 > (iLocal_95 + (CLOCK::GET_MILLISECONDS_PER_GAME_MINUTE() / 1000) * 60))
		{
			iLocal_99 = 0;
		}
	}
	if (iLocal_76 == 3)
	{
		Global_2359296[func_84() /*5574*/].f_681.f_4 = iLocal_97;
		Global_2359296[func_84() /*5574*/].f_681.f_5 = iLocal_96;
	}
	else
	{
		Global_114963.f_2370.f_539.f_2280[iLocal_76] = iLocal_97;
		Global_114963.f_2370.f_539.f_2284[iLocal_76] = iLocal_96;
	}
}

void func_83(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
			Global_114963.f_2370.f_539.f_2247[iParam1 /*4*/][iParam0] = (Global_114963.f_2370.f_539.f_2247[iParam1 /*4*/][iParam0] + iParam2);
			break;
		
		case 3:
			iVar1 = 16764;
			switch (iParam1)
			{
				case 1:
					iVar1 = 72;
					break;
				
				case 3:
					iVar1 = 74;
					break;
				
				case 2:
					iVar1 = 73;
					break;
				
				case 4:
					iVar1 = 75;
					break;
				
				case 5:
					iVar1 = 76;
					break;
				
				case 6:
					iVar1 = 77;
					break;
				
				case 7:
					iVar1 = 78;
					break;
			}
			if (iVar1 != 16764)
			{
				iVar0 = func_73(iVar1, -1);
				iVar0 = (iVar0 + iParam2);
				if (iVar0 > 100)
				{
					iVar0 = 100;
				}
				func_57(iVar1, iVar0, -1, 1);
			}
			break;
	}
}

int func_84()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_85(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iLocal_92)
	{
		bVar0 = true;
		if ((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && *iParam1) && !ENTITY::IS_ENTITY_IN_AIR(*iParam0))
		{
			bVar0 = false;
			if (ENTITY::GET_ENTITY_SPEED(*iParam0) >= 53f)
			{
				func_83(iLocal_76, 4, 2);
				bVar0 = true;
			}
		}
		if (bVar0)
		{
			iLocal_92 = 0;
			iLocal_93 = MISC::GET_GAME_TIMER();
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				iLocal_94 = NETWORK::GET_NETWORK_TIME();
			}
		}
	}
	else if (((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && *iParam1) && ENTITY::GET_ENTITY_SPEED(*iParam0) < 20f) && !ENTITY::IS_ENTITY_IN_AIR(*iParam0))
	{
		if ((!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && (MISC::GET_GAME_TIMER() - iLocal_93) > 10000) || (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::IS_TIME_MORE_THAN(NETWORK::GET_NETWORK_TIME(), NETWORK::GET_TIME_OFFSET(iLocal_94, 10000))))
		{
			iLocal_92 = 1;
		}
	}
}

void func_86(int iParam0, int iParam1)
{
	bool bVar0;
	char cVar1[64];
	
	bVar0 = false;
	if (*iParam1)
	{
		if (iLocal_84)
		{
			if (!ENTITY::IS_ENTITY_IN_AIR(*iParam0))
			{
				if ((!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && (MISC::GET_GAME_TIMER() - iLocal_86) > 1500) || (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::IS_TIME_MORE_THAN(NETWORK::GET_NETWORK_TIME(), NETWORK::GET_TIME_OFFSET(iLocal_87, 1500))))
				{
					iLocal_88 = MISC::GET_GAME_TIMER();
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
					{
						iLocal_89 = NETWORK::GET_NETWORK_TIME();
					}
					iLocal_85 = 1;
				}
				iLocal_84 = 0;
			}
		}
		if (iLocal_85)
		{
			if (!ENTITY::IS_ENTITY_IN_AIR(*iParam0))
			{
				if (VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(*iParam0))
				{
					if ((((!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && (MISC::GET_GAME_TIMER() - iLocal_88) > 20) || (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && (MISC::GET_GAME_TIMER() - iLocal_88) == 0)) || (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::IS_TIME_MORE_THAN(NETWORK::GET_NETWORK_TIME(), NETWORK::GET_TIME_OFFSET(iLocal_89, 20)))) || (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::IS_TIME_EQUAL_TO(NETWORK::GET_NETWORK_TIME(), iLocal_89)))
					{
					}
					else
					{
						func_83(iLocal_76, 4, 1);
					}
					StringCopy(&cVar1, "Player landed on all wheels in ", 64);
					StringIntConCat(&cVar1, (MISC::GET_GAME_TIMER() - iLocal_88), 64);
					StringConCat(&cVar1, "ms", 64);
					bVar0 = true;
				}
			}
			else
			{
				bVar0 = true;
			}
		}
		if (!iLocal_84 && !iLocal_85)
		{
			if ((!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && (MISC::GET_GAME_TIMER() - iLocal_90) > 1000) || (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::IS_TIME_MORE_THAN(NETWORK::GET_NETWORK_TIME(), NETWORK::GET_TIME_OFFSET(iLocal_91, 1000))))
			{
				if (ENTITY::IS_ENTITY_IN_AIR(*iParam0))
				{
					if (!iLocal_84)
					{
						iLocal_86 = MISC::GET_GAME_TIMER();
						if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
						{
							iLocal_87 = NETWORK::GET_NETWORK_TIME();
						}
						iLocal_84 = 1;
					}
				}
			}
		}
	}
	else if (iLocal_84 || iLocal_85)
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		iLocal_90 = MISC::GET_GAME_TIMER();
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			iLocal_91 = NETWORK::GET_NETWORK_TIME();
		}
		iLocal_84 = 0;
		iLocal_85 = 0;
	}
}

bool func_87(int iParam0)
{
	return (Global_114048 && iParam0) != 0;
}

int func_88()
{
	func_89();
	return Global_114963.f_2370.f_539.f_4321;
}

void func_89()
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_91(Global_114963.f_2370.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_90(PLAYER::PLAYER_PED_ID());
			if (func_76(iVar0) && (!func_56(14) || Global_113909))
			{
				if (Global_114963.f_2370.f_539.f_4321 != iVar0 && func_76(Global_114963.f_2370.f_539.f_4321))
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

int func_90(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_91(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_91(int iParam0)
{
	if (func_76(iParam0))
	{
		return func_92(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_92(int iParam0)
{
	return Global_2349[iParam0 /*29*/];
}

void func_93()
{
	char* sVar0;
	int iVar1;
	
	if (iLocal_79)
	{
		if (iLocal_80 != iLocal_76)
		{
			iLocal_79 = 0;
			return;
		}
		sVar0 = "CHAR_DEFAULT";
		switch (iLocal_80)
		{
			case 0:
				sVar0 = "CHAR_MICHAEL";
				break;
			
			case 1:
				sVar0 = "CHAR_FRANKLIN";
				break;
			
			case 2:
				sVar0 = "CHAR_TREVOR";
				break;
			
			case 3:
				iVar1 = func_96(PLAYER::PLAYER_ID());
				if (iVar1 == 0)
				{
					return;
				}
				else
				{
					sVar0 = PED::GET_PEDHEADSHOT_TXD_STRING(iVar1);
				}
				break;
		}
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("PS_UPDATE");
		HUD::ADD_TEXT_COMPONENT_INTEGER(iLocal_83);
		HUD::END_TEXT_COMMAND_THEFEED_POST_STATS(func_95(iLocal_81), func_94(iLocal_81), iLocal_82, (iLocal_83 - iLocal_82), false, sVar0, sVar0);
		iLocal_100 = 1;
		iLocal_101 = MISC::GET_GAME_TIMER() + 5000;
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			iLocal_102 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), 5000);
		}
		iLocal_79 = 0;
	}
}

int func_94(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 23;
			break;
		
		case 1:
			return 2;
			break;
		
		case 3:
			return 24;
			break;
		
		case 2:
			return 25;
			break;
		
		case 4:
			return 14;
			break;
		
		case 5:
			return 27;
			break;
		
		case 6:
			return 17;
			break;
		
		case 7:
			return 28;
			break;
	}
	return -1;
}

char* func_95(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "PSF_SPEC_AB";
			break;
		
		case 1:
			return "PSF_STAMINA";
			break;
		
		case 3:
			return "PSF_LUNG";
			break;
		
		case 2:
			return "PSF_STRENGTH";
			break;
		
		case 4:
			return "PSF_DRIVING";
			break;
		
		case 5:
			return "PSF_FLYING";
			break;
		
		case 6:
			return "PSF_SHOOTING";
			break;
		
		case 7:
			return "PSF_STEALTH";
			break;
	}
	return "ERROR";
}

int func_96(int iParam0)
{
	int iVar0;
	
	iVar0 = func_99(iParam0);
	if (iVar0 == -1)
	{
		func_97(iParam0, 1);
		return 0;
	}
	Global_1690184[iVar0 /*5*/].f_4 = 1;
	return Global_1690184[iVar0 /*5*/].f_2;
}

void func_97(int iParam0, bool bParam1)
{
	if (!func_19(iParam0, 0, 1))
	{
		return;
	}
	if (func_99(iParam0) != -1)
	{
		return;
	}
	if (Global_1690347)
	{
		if (iParam0 == Global_1690347.f_1)
		{
			return;
		}
	}
	if (func_98(iParam0))
	{
		return;
	}
	if (Global_1690385 >= 32)
	{
		return;
	}
	Global_1690352[Global_1690385] = iParam0;
	Global_1690385++;
	if (bParam1)
	{
	}
}

int func_98(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1690385)
	{
		if (Global_1690352[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_99(int iParam0)
{
	int iVar0;
	
	if (!func_19(iParam0, 0, 1))
	{
		return -1;
	}
	if (Global_1690345 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1690345)
	{
		if (Global_1690184[iVar0 /*5*/].f_1 == iParam0)
		{
			if (PED::IS_PEDHEADSHOT_VALID(Global_1690184[iVar0 /*5*/].f_2) && PED::IS_PEDHEADSHOT_READY(Global_1690184[iVar0 /*5*/].f_2))
			{
				return iVar0;
			}
			func_100(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_100(int iParam0)
{
	char cVar0[64];
	char cVar16[64];
	int iVar32;
	int iVar33;
	
	if (iParam0 >= Global_1690345)
	{
		return;
	}
	if (PED::IS_PEDHEADSHOT_VALID(Global_1690184[iParam0 /*5*/].f_2))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
		if (Global_1690184[iParam0 /*5*/].f_2 != 0)
		{
			StringCopy(&cVar16, PED::GET_PEDHEADSHOT_TXD_STRING(Global_1690184[iParam0 /*5*/].f_2), 64);
			HUD::THEFEED_UPDATE_ITEM_TEXTURE(&cVar16, &cVar16, &cVar0, &cVar0);
		}
		PED::UNREGISTER_PEDHEADSHOT(Global_1690184[iParam0 /*5*/].f_2);
	}
	iVar32 = iParam0;
	iVar33 = iVar32 + 1;
	while (iVar33 < Global_1690345)
	{
		Global_1690184[iVar32 /*5*/] = { Global_1690184[iVar33 /*5*/] };
		iVar32++;
		iVar33++;
	}
	func_101(&(Global_1690184[iVar32 /*5*/]));
	Global_1690345 = (Global_1690345 - 1);
}

void func_101(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = func_11();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		uParam0->f_3 = NETWORK::GET_NETWORK_TIME();
	}
}

void func_102()
{
	float fVar0;
	int iVar1;
	
	if (MISC::GET_INDEX_OF_CURRENT_LEVEL() != 1)
	{
		return;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!func_106(PLAYER::PLAYER_ID()))
		{
			return;
		}
		if (func_105() != 0)
		{
			return;
		}
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_105() == 0)
		{
			iLocal_71 = 1;
		}
	}
	else
	{
		iLocal_71 = 0;
	}
	if (!func_104())
	{
		func_103();
	}
	iLocal_73 = 0;
	iLocal_74 = 0;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iLocal_75 = NETWORK::GET_NETWORK_TIME();
	}
	iLocal_90 = MISC::GET_GAME_TIMER();
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iLocal_91 = NETWORK::GET_NETWORK_TIME();
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!BitTest(Global_2359296[func_84() /*5574*/].f_681.f_1274, 2))
		{
			fVar0 = (SYSTEM::TO_FLOAT(func_73(193, -1)) / 20f);
			iVar1 = SYSTEM::FLOOR(fVar0);
			iVar1 = func_72(iVar1, 0, 100);
			func_83(3, 2, iVar1);
			MISC::SET_BIT(&(Global_2359296[func_84() /*5574*/].f_681.f_1274), 2);
		}
	}
	bLocal_77 = true;
	iLocal_72 = 1;
}

void func_103()
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	var uVar6;
	
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = 0;
		while (iVar0 < 8)
		{
			if (iVar0 != 0)
			{
				func_74(3, iVar0, &uVar1, &iVar2);
				func_57(iVar2, func_55(3, iVar0, -1), -1, 1);
			}
			iVar0++;
		}
		func_4(0, 1, -1, 1);
		Global_99743 = 1;
	}
	else
	{
		iVar3 = 0;
		while (iVar3 < 3)
		{
			iVar4 = 0;
			while (iVar4 < 8)
			{
				if (iVar4 != 0)
				{
					func_74(iVar3, iVar4, &iVar5, &uVar6);
					STATS::STAT_SET_INT(iVar5, func_55(iVar3, iVar4, -1), true);
				}
				iVar4++;
			}
			iVar3++;
		}
		Global_114963.f_2370.f_539.f_2387[0] = func_55(0, 0, -1);
		Global_114963.f_2370.f_539.f_2387[1] = func_55(1, 0, -1);
		Global_114963.f_2370.f_539.f_2387[2] = func_55(2, 0, -1);
		Global_114963.f_2370.f_539.f_2354 = 1;
		Global_99743 = 1;
	}
}

int func_104()
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 1;
	}
	return Global_114963.f_2370.f_539.f_2354;
}

int func_105()
{
	return Global_33815;
}

int func_106(int iParam0)
{
	if (!func_50(iParam0))
	{
		return 0;
	}
	return BitTest(Global_2673273.f_1, iParam0);
}

void func_107()
{
	if (iLocal_72 != 0 && iLocal_71 != 2)
	{
		if (iLocal_71 == 0)
		{
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				iLocal_71 = 2;
			}
			if (!func_104())
			{
				iLocal_71 = 2;
			}
		}
		else if (iLocal_71 == 1)
		{
			if ((!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() || !func_106(PLAYER::PLAYER_ID())) || func_105() != 0)
			{
				iLocal_71 = 2;
			}
		}
		if (iLocal_71 == 2)
		{
			iLocal_72 = 2;
		}
	}
}

