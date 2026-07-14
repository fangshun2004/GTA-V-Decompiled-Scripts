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
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	char* sLocal_38 = NULL;
	float fLocal_39 = 0f;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	float fLocal_43 = 0f;
	float fLocal_44 = 0f;
	var uLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	char cLocal_55[24] = "";
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	char cLocal_61[24] = "";
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	char cLocal_67[64] = "";
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	char cLocal_83[24] = "";
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	char* sLocal_89 = NULL;
	char cLocal_90[24] = "";
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	char* sLocal_96 = NULL;
	char* sLocal_97 = NULL;
	char* sLocal_98 = NULL;
	bool bLocal_99 = 0;
	bool bLocal_100 = 0;
	bool bLocal_101 = 0;
	char cLocal_102[24] = "";
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	char* sLocal_108 = NULL;
	int iLocal_109 = 0;
	int iLocal_110 = 0;
	int iLocal_111 = 0;
	int iLocal_112 = 0;
	int iLocal_113 = 0;
	int iLocal_114 = 0;
	int iLocal_115 = 0;
	int iLocal_116 = 0;
	int iLocal_117 = 0;
	int iLocal_118 = 0;
	int iLocal_119 = 0;
	int iLocal_120 = 0;
	int iLocal_121 = 0;
	int iLocal_122 = 0;
	int iLocal_123 = 0;
	int iLocal_124 = 0;
	int iLocal_125 = 0;
	int iLocal_126 = 0;
	int iLocal_127 = 0;
	var uLocal_128[30] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_159[30] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_190[30] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_221[30] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_252 = 0;
	int iLocal_253 = 0;
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
	sLocal_38 = "NULL";
	fLocal_39 = 0f;
	fLocal_43 = -0.0375f;
	fLocal_44 = 0.17f;
	iLocal_51 = 5000;
	iLocal_52 = 5000;
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	while (true)
	{
		SYSTEM::WAIT(0);
		if (BitTest(Global_9503, 1))
		{
			if (!BitTest(Global_9502, 20))
			{
				if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
				{
					if (Global_21637)
					{
						func_132(Global_21630, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
						if (Global_21592)
						{
							func_132(Global_21630, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
						}
					}
					else
					{
						func_132(Global_21630, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
					}
					MISC::CLEAR_BIT(&Global_9503, 1);
				}
			}
		}
		if (BitTest(Global_21889, 0))
		{
			if (!func_131())
			{
				if (!BitTest(Global_21889, 1))
				{
					MISC::SET_BIT(&Global_21889, 1);
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
					{
						iLocal_123 = NETWORK::GET_NETWORK_TIME();
					}
					else
					{
						iLocal_119 = MISC::GET_GAME_TIMER();
					}
				}
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					iLocal_125 = NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), iLocal_123);
				}
				else
				{
					iLocal_120 = MISC::GET_GAME_TIMER();
					iLocal_125 = (iLocal_120 - iLocal_119);
				}
				if (iLocal_125 < 3000)
				{
					if (func_123(&Global_22477, &Global_23093, &Global_23013, Global_23026, Global_24008, Global_24009, 0))
					{
						Global_21889 = 0;
					}
				}
				else
				{
					Global_21889 = 0;
				}
			}
		}
		if ((((!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !BitTest(Global_4718592.f_18, 4)) && !func_122()) && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("fm_mission_controller_2020")) == 0) && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(-635282018) == 0)
		{
			if (Global_23023 != 0)
			{
				if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand")) == 0)
				{
					func_121();
				}
			}
		}
		if (iLocal_49 == 1)
		{
			func_117();
		}
		switch (Global_23023)
		{
			case 0:
				break;
			
			case 1:
				if (Global_23029)
				{
					if (Global_23019 == 0)
					{
						func_115();
					}
					else
					{
						func_114();
						func_115();
					}
				}
				else if (Global_23019 == 0)
				{
					func_100();
				}
				else
				{
					func_114();
					func_82();
				}
				break;
			
			case 2:
				func_76();
				break;
			
			case 3:
				func_72();
				break;
			
			case 4:
				if (Global_23029)
				{
					if (Global_23031)
					{
						func_71();
					}
					else
					{
						func_7();
					}
				}
				else
				{
					func_5();
				}
				break;
			
			case 5:
				func_4();
				break;
			
			case 6:
				func_1();
				break;
			
			default:
				break;
		}
	}
}

void func_1()
{
	Global_23033 = 0;
	Global_21648 = 0;
	func_2();
}

void func_2()
{
	Global_2883585 = 0;
	Global_2883586 = 0;
	Global_23034 = 0;
	Global_23035 = 0;
	Global_23036 = 0;
	Global_23037 = 0;
	Global_22312.f_161 = -99;
	Global_22312.f_162 = { 0f, 0f, 0f };
	Global_23027 = 0;
	Global_23028 = 0;
	Global_23070 = 0;
	Global_23071 = 0;
	Global_23074 = 0;
	Global_23076 = 0;
	Global_23075 = 0;
	Global_23078 = 0;
	Global_23077 = 0;
	Global_24040 = 0;
	Global_23080 = 0;
	if (Global_21649.f_1 == 10)
	{
	}
	else if (BitTest(Global_9502, 11))
	{
		func_3();
	}
	Global_23029 = 0;
	Global_23030 = 0;
	Global_23031 = 0;
	Global_23032 = 0;
	Global_24014 = 0;
	Global_24013 = 0;
	Global_24020 = 0;
	Global_24019 = 0;
	Global_24016 = 0;
	Global_24015 = 0;
	Global_24017 = 0;
	Global_24018 = 0;
	Global_23019 = 0;
	Global_23020 = 0;
	Global_23021 = 0;
	Global_23022 = 0;
	Global_23281 = 0;
	Global_24044 = 5000;
	Global_21632 = 0;
	MISC::CLEAR_BIT(&Global_9502, 20);
	MISC::CLEAR_BIT(&Global_9502, 24);
	MISC::CLEAR_BIT(&Global_9503, 23);
	MISC::CLEAR_BIT(&Global_9504, 0);
	MISC::CLEAR_BIT(&Global_9503, 9);
	MISC::CLEAR_BIT(&Global_9503, 31);
	MISC::CLEAR_BIT(&Global_9503, 17);
	MISC::CLEAR_BIT(&Global_9504, 5);
	Global_24007 = 0;
	Global_24006 = 0;
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		Global_23023 = 4;
	}
	else
	{
		Global_23023 = 0;
		Global_24034 = 0;
		Global_24045 = MISC::GET_GAME_TIMER();
	}
}

void func_3()
{
	if (!Global_80337)
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (BitTest(Global_9502, 11))
			{
				if (!Global_21592)
				{
					TASK::TASK_USE_MOBILE_PHONE(PLAYER::PLAYER_PED_ID(), false, 1);
				}
				if (Global_80337)
				{
					PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 244, true);
					PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 243, true);
					PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 242, true);
				}
				MISC::CLEAR_BIT(&Global_9502, 11);
			}
		}
	}
}

void func_4()
{
	Global_23033 = 0;
	Global_21648 = 0;
	func_2();
}

void func_5()
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (PED::IS_PED_SWIMMING_UNDER_WATER(PLAYER::PLAYER_PED_ID()))
		{
			if (Global_23079 == 0)
			{
				func_6();
			}
		}
	}
	if (iLocal_50 == 1)
	{
		func_6();
		func_6();
	}
	if (Global_24015 == 0)
	{
		if (iLocal_48 == 0)
		{
			if (Global_24034 == 1)
			{
				AUDIO::PAUSE_SCRIPTED_CONVERSATION(true);
				iLocal_48 = 1;
			}
		}
		else if (Global_24034 == 0)
		{
			AUDIO::RESTART_SCRIPTED_CONVERSATION();
			iLocal_48 = 0;
		}
	}
	else if (Global_24017 > 0)
	{
		iLocal_54 = MISC::GET_GAME_TIMER();
		if ((iLocal_54 - iLocal_53) > Global_24017)
		{
			AUDIO::START_PRELOADED_CONVERSATION();
			Global_24015 = 0;
		}
	}
	if (Global_24034 == 0)
	{
		if (!AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
		{
			Global_23023 = 6;
		}
	}
}

void func_6()
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_24034 = 0;
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		Global_23023 = 6;
	}
}

void func_7()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
	{
		if (!BitTest(Global_9502, 11))
		{
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					if (Global_80337 == 0)
					{
						func_69();
					}
				}
			}
		}
		else if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
			{
				if (Global_80337 == 0)
				{
					func_3();
				}
			}
		}
	}
	if (Global_80337 == 0)
	{
		func_68();
	}
	if (iLocal_50 == 1)
	{
		func_63(0);
	}
	if (iLocal_48 == 0)
	{
		if (Global_24034 == 1)
		{
			if (Global_24035 == 1)
			{
				AUDIO::PAUSE_SCRIPTED_CONVERSATION(true);
				iLocal_48 = 1;
				Global_24035 = 0;
			}
		}
	}
	else if (Global_24034 == 0)
	{
		if (Global_24035 == 1)
		{
			AUDIO::RESTART_SCRIPTED_CONVERSATION();
			iLocal_48 = 0;
			Global_24035 = 0;
		}
	}
	if (Global_23076 == 0)
	{
		if (!Global_23036)
		{
			if (!BitTest(Global_9503, 31))
			{
				if (!BitTest(Global_9503, 27))
				{
					if (func_62())
					{
						if (Global_21649.f_1 > 6)
						{
							MISC::SET_BIT(&Global_9503, 24);
							MISC::SET_BIT(&Global_9503, 27);
							MISC::CLEAR_BIT(&Global_9503, 26);
							MISC::CLEAR_BIT(&Global_9503, 25);
						}
					}
				}
			}
		}
	}
	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING() == 0 && Global_23036 == 0)
	{
		if (Global_23076 == 1)
		{
			MISC::SET_BIT(&Global_9503, 23);
		}
		else
		{
			MISC::CLEAR_BIT(&Global_9503, 23);
		}
		if (Global_23080)
		{
			if (Global_23076 == 0)
			{
				Global_22642 = { Global_23081 };
				Global_23099 = { Global_23087 };
				Global_23033 = 0;
				Global_24040 = 6;
				func_61();
				return;
			}
		}
		if (!Global_23078)
		{
			while (Global_23076 == 1)
			{
				SYSTEM::WAIT(0);
				if (Global_21649.f_1 < 6)
				{
					Global_23076 = 0;
				}
				else
				{
					if (iLocal_47 == 0)
					{
						func_60();
						if (Global_23078)
						{
							iLocal_47 = 1;
							Global_24038 = 1;
							func_132(Global_21630, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(4), -1f, -1f, &Global_23165, &(Global_2349[Global_8817 /*29*/].f_7), &(Global_2349[Global_8817 /*29*/].f_3), &(Global_2349[Global_8817 /*29*/].f_3), 0);
							func_59(Global_21630, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
							if (Global_21637)
							{
								func_132(Global_21630, "SET_SOFT_KEYS", 2f, 1f, 17f, -1f, -1f, "CELL_604", 0, 0, 0, 0);
								func_132(Global_21630, "SET_SOFT_KEYS", 1f, 1f, 18f, -1f, -1f, "CELL_602", 0, 0, 0, 0);
								MISC::SET_BIT(&Global_9502, 17);
								func_132(Global_21630, "SET_SOFT_KEYS", 3f, 1f, 19f, -1f, -1f, "CELL_603", 0, 0, 0, 0);
							}
							else
							{
								func_132(Global_21630, "SET_SOFT_KEYS", 2f, 1f, 17f, -1f, -1f, 0, 0, 0, 0, 0);
								func_132(Global_21630, "SET_SOFT_KEYS", 1f, 1f, 18f, -1f, -1f, 0, 0, 0, 0, 0);
								MISC::SET_BIT(&Global_9502, 17);
								func_132(Global_21630, "SET_SOFT_KEYS", 3f, 1f, 19f, -1f, -1f, 0, 0, 0, 0, 0);
							}
						}
						else
						{
							iLocal_47 = 1;
							Global_24036 = 1;
							if (func_58(Global_8817, Global_21649) == 0)
							{
								func_132(Global_21630, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(4), -1f, -1f, &Global_23165, "CELL_300", &(Global_118[Global_8817 /*10*/].f_4), "CELL_195", 0);
								func_59(Global_21630, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
							}
							else
							{
								func_132(Global_21630, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(4), -1f, -1f, &Global_23165, &(Global_2349[Global_8817 /*29*/].f_7), &(Global_2349[Global_8817 /*29*/].f_3), &(Global_2349[Global_8817 /*29*/].f_3), 0);
								func_59(Global_21630, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
							}
							if (Global_21637)
							{
								func_132(Global_21630, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, "CELL_212", 0, 0, 0, 0);
								func_132(Global_21630, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, "CELL_213", 0, 0, 0, 0);
							}
							else
							{
								func_132(Global_21630, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
								func_132(Global_21630, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, 0, 0, 0, 0, 0);
							}
							func_132(Global_21630, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
							MISC::CLEAR_BIT(&Global_9502, 17);
						}
					}
					if (func_57(2, Global_21618, 0))
					{
						func_55();
						Global_21575 = 0.19f;
						Global_23076 = 0;
						func_53();
						if (Global_23078)
						{
							Global_22642 = { Global_23159 };
							Global_24040 = 5;
						}
						else if (Global_23021 > 0)
						{
							Global_23281 = 1;
							Global_23023 = 0;
							Global_24044 = 0;
							if (BitTest(Global_9503, 9))
							{
								iVar0 = 0;
								while (iVar0 < Global_24007 + 1)
								{
									uLocal_128[iVar0] = func_52(&(Global_23282[iVar0 /*6*/]));
									uLocal_159[iVar0] = func_52(&(Global_23644[iVar0 /*6*/]));
									iVar0++;
								}
								func_51(Global_24007, &Global_22312, Global_8817, &Global_23099, &uLocal_128, &uLocal_159, 9, 0, 0, 0, 0);
							}
							else if (Global_23021 == 2)
							{
								func_33(&Global_22312, Global_8817, &Global_23099, &(Global_23177[0 /*6*/]), &(Global_23229[0 /*6*/]), &(Global_23177[1 /*6*/]), &(Global_23229[1 /*6*/]), 9, 0, 0, 0, 0);
							}
							Global_24040 = 1;
							Global_24036 = 0;
							Global_24038 = 0;
							Global_23033 = 0;
							func_31();
							return;
						}
						else
						{
							Global_22642 = { Global_23117 };
							Global_24040 = 1;
						}
						Global_24036 = 0;
						Global_24038 = 0;
						Global_23033 = 0;
						func_31();
						func_61();
						return;
					}
					if (func_57(2, Global_21619, 0) || BitTest(Global_9502, 24))
					{
						func_55();
						Global_21575 = 0.19f;
						Global_23076 = 0;
						func_53();
						if (Global_23078)
						{
							Global_22642 = { Global_23153 };
							Global_24040 = 4;
						}
						else if (Global_23021 > 0)
						{
							Global_23281 = 1;
							Global_23023 = 0;
							Global_24044 = 0;
							if (BitTest(Global_9503, 9))
							{
								iVar1 = 0;
								while (iVar1 < Global_24006 + 1)
								{
									uLocal_190[iVar1] = func_52(&(Global_23463[iVar1 /*6*/]));
									uLocal_221[iVar1] = func_52(&(Global_23825[iVar1 /*6*/]));
									iVar1++;
								}
								func_51(Global_24006, &Global_22312, Global_8817, &Global_23099, &uLocal_190, &uLocal_221, 9, 0, 0, 0, 0);
							}
							else if (Global_23021 == 2)
							{
								func_33(&Global_22312, Global_8817, &Global_23099, &(Global_23190[0 /*6*/]), &(Global_23242[0 /*6*/]), &(Global_23190[1 /*6*/]), &(Global_23242[1 /*6*/]), 9, 0, 0, 0, 0);
							}
							Global_24040 = 2;
							Global_24036 = 0;
							Global_24038 = 0;
							Global_23033 = 0;
							func_31();
							return;
						}
						else
						{
							Global_22642 = { Global_23123 };
							Global_24040 = 2;
						}
						Global_24036 = 0;
						Global_24038 = 0;
						Global_23033 = 0;
						func_31();
						func_61();
						return;
					}
					if (func_57(2, Global_21621, 0))
					{
						if (Global_23078)
						{
							Global_21575 = 0.19f;
							Global_23076 = 0;
							func_53();
							func_55();
							Global_22642 = { Global_23147 };
							Global_24040 = 3;
							Global_24036 = 0;
							Global_24038 = 0;
							Global_23033 = 0;
							func_31();
							func_61();
							return;
						}
					}
				}
			}
		}
		else
		{
			while (Global_23076)
			{
				SYSTEM::WAIT(0);
				if (Global_21649.f_1 < 6)
				{
					Global_23076 = 0;
				}
				else
				{
					if (iLocal_47 == 0)
					{
						func_60();
						func_59(Global_21630, "SET_DATA_SLOT_EMPTY", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_132(Global_21630, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(18), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(0), -1f, -1f, "CELL_603", 0, 0, 0, 0);
						func_132(Global_21630, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(18), SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(0), -1f, -1f, "CELL_602", 0, 0, 0, 0);
						func_132(Global_21630, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(18), SYSTEM::TO_FLOAT(2), SYSTEM::TO_FLOAT(0), -1f, -1f, "CELL_604", 0, 0, 0, 0);
						func_59(Global_21630, "DISPLAY_VIEW", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_30(Global_21630, "SET_HEADER", "CELL_601", 0, 0, 0, 0);
						if (Global_21637)
						{
							func_132(Global_21630, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
						}
						else
						{
							func_132(Global_21630, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
						}
						func_132(Global_21630, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
						MISC::CLEAR_BIT(&Global_9502, 17);
						iLocal_252 = 0;
						iLocal_47 = 1;
					}
					func_24();
					if (func_57(2, Global_21618, 0))
					{
						func_55();
						Global_23076 = 0;
						func_53();
						GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21630, "GET_CURRENT_SELECTION");
						iLocal_253 = GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
						while (!GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(iLocal_253))
						{
							SYSTEM::WAIT(0);
						}
						iVar2 = GRAPHICS::GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_INT(iLocal_253);
						switch (iVar2)
						{
							case 0:
								Global_22642 = { Global_23153 };
								Global_24040 = 4;
								break;
							
							case 1:
								Global_22642 = { Global_23147 };
								Global_24040 = 3;
								break;
							
							case 2:
								Global_22642 = { Global_23159 };
								Global_24040 = 5;
								break;
						}
						Global_24036 = 0;
						Global_24038 = 0;
						Global_23033 = 0;
						func_31();
						func_61();
						return;
					}
					if (func_57(2, Global_21619, 0))
					{
						Global_23076 = 0;
						func_53();
					}
				}
			}
		}
		if (Global_23024 == 0)
		{
			AUDIO::STOP_SCRIPTED_CONVERSATION(false);
			SYSTEM::SETTIMERA(0);
			while (SYSTEM::TIMERA() < 900 && Global_21649.f_1 == 9)
			{
				SYSTEM::WAIT(0);
			}
			Global_23023 = 6;
		}
		if (!Global_1574994)
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "Hang_Up", &Global_21638, true);
		}
		func_23();
		Global_21649.f_1 = Global_21651;
		func_8();
	}
	else if (Global_21882 == 0)
	{
		if (func_57(2, Global_21617, 0))
		{
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
				{
					if (BitTest(Global_9502, 20))
					{
					}
					else
					{
						Global_21627 = 1;
						func_53();
						AUDIO::STOP_SCRIPTED_CONVERSATION(false);
						Global_23072 = 1;
						Global_23073 = 1;
						Global_23023 = 6;
						func_23();
						Global_21649.f_1 = Global_21651;
						func_8();
					}
				}
			}
		}
	}
}

void func_8()
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
			func_59(Global_21630, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_21(Global_10124);
			if (Global_10124 == 1)
			{
				func_59(Global_21630, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_21653), -1082130432, -1082130432, -1082130432);
				Global_21629 = Global_21653;
			}
			else
			{
				func_59(Global_21630, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_21654), -1082130432, -1082130432, -1082130432);
				Global_21629 = Global_21654;
			}
			if (Global_21637)
			{
				func_132(Global_21630, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
				func_132(Global_21630, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
			}
			else
			{
				func_132(Global_21630, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
				func_132(Global_21630, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_21884 == 0)
			{
				func_132(Global_21630, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				MISC::CLEAR_BIT(&Global_9502, 17);
			}
			else if (Global_80337)
			{
				func_132(Global_21630, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				MISC::CLEAR_BIT(&Global_9502, 17);
			}
			else
			{
				if (Global_21883 == 1)
				{
					if (Global_21637)
					{
						func_132(Global_21630, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
					}
					else
					{
						func_132(Global_21630, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else if (Global_21637)
				{
					func_132(Global_21630, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
				}
				else
				{
					func_132(Global_21630, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				MISC::SET_BIT(&Global_9502, 17);
			}
			if (Global_80337)
			{
				Global_21629 = Global_21653;
				if (func_16() && BitTest(Global_9504, 9))
				{
					func_11(0);
				}
				func_59(Global_21630, "DISPLAY_VIEW", 4f, SYSTEM::TO_FLOAT(Global_21629), -1082130432, -1082130432, -1082130432);
				func_59(Global_21630, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_21629), -1082130432, -1082130432, -1082130432);
			}
			break;
		
		case 7:
			break;
		
		case 10:
			func_59(Global_21630, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_132(Global_21630, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_132(Global_21630, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			MISC::CLEAR_BIT(&Global_9502, 17);
			if (BitTest(Global_9502, 20))
			{
				func_132(Global_21630, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_21637)
			{
				func_132(Global_21630, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_21592)
				{
					func_132(Global_21630, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_132(Global_21630, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			break;
		
		case 9:
			if (Global_21648 == 1)
			{
				func_10();
				func_59(Global_21630, "SET_THEME", SYSTEM::TO_FLOAT(Global_114963.f_14060[Global_21649 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				if (Global_23036)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21630, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(4);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_CONDFON");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_23038);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					func_9("CELL_300");
					func_9("CELL_217");
					func_9("CELL_217");
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				else if (func_58(Global_8817, Global_21649) == 0)
				{
					func_132(Global_21630, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(2), -1f, -1f, &(Global_118[Global_8817 /*10*/].f_4), "CELL_300", "CELL_217", "CELL_195", 0);
				}
				else
				{
					func_132(Global_21630, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(2), -1f, -1f, &(Global_2349[Global_8817 /*29*/].f_3), &(Global_2349[Global_8817 /*29*/].f_7), "CELL_217", &(Global_2349[Global_8817 /*29*/].f_3), 0);
				}
				func_59(Global_21630, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			else if (Global_23023 == 4 || Global_23023 == 3)
			{
				func_59(Global_21630, "SET_THEME", SYSTEM::TO_FLOAT(Global_114963.f_14060[Global_21649 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				func_10();
				if (Global_23036)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21630, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(4);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_CONDFON");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_23038);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					func_9("CELL_300");
					func_9("CELL_219");
					func_9("CELL_219");
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
					if (func_58(Global_8817, Global_21649) == 0)
					{
						func_59(Global_21630, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_132(Global_21630, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(3), -1f, -1f, &(Global_118[Global_8817 /*10*/].f_4), "CELL_300", &cVar0, "CELL_195", 0);
					}
					else
					{
						func_59(Global_21630, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_132(Global_21630, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(3), -1f, -1f, &(Global_2349[Global_8817 /*29*/].f_3), &(Global_2349[Global_8817 /*29*/].f_7), &cVar0, &(Global_2349[Global_8817 /*29*/].f_3), 0);
					}
				}
				func_59(Global_21630, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			func_31();
			break;
		
		default:
			break;
	}
}

void func_9(char* sParam0)
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

void func_10()
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

void func_11(bool bParam0)
{
	int iVar0;
	
	MISC::SET_BIT(&Global_9504, 9);
	if (bParam0)
	{
		func_59(Global_21630, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
	}
	func_15();
	func_14();
	iVar0 = 0;
	while (iVar0 < 9)
	{
		Global_10050[iVar0] = 0;
		Global_10087[iVar0] = 0;
		iVar0++;
	}
	func_12(10, "CELL_16", 0, "appSettings", 24);
	if (bParam0)
	{
		func_59(Global_21630, "DISPLAY_VIEW", 4f, SYSTEM::TO_FLOAT(Global_21629), -1082130432, -1082130432, -1082130432);
		func_59(Global_21630, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_21629), -1082130432, -1082130432, -1082130432);
	}
}

void func_12(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4)
{
	func_13(iParam0, sParam1, iParam2, sParam3, iParam4, 1, 1, 0, 0);
	Global_10087[iParam2] = 1;
	Global_10050[iParam2] = iParam0;
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21630, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_9509[iParam0 /*15*/].f_4);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_9509[iParam0 /*15*/].f_10);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
	func_9(&(Global_9509[iParam0 /*15*/]));
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(255);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_13(int iParam0, char* sParam1, var uParam2, char* sParam3, var uParam4, int iParam5, int iParam6, int iParam7, int iParam8)
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

void func_14()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		Global_10087[iVar0] = 0;
		iVar0++;
	}
}

void func_15()
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
		func_9(&(Global_9509[10 /*15*/]));
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(225);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		iVar0++;
	}
	func_59(Global_21630, "DISPLAY_VIEW", 4f, SYSTEM::TO_FLOAT(0), -1082130432, -1082130432, -1082130432);
	func_59(Global_21630, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(0), -1082130432, -1082130432, -1082130432);
}

int func_16()
{
	if (func_17())
	{
		return 1;
	}
	return 0;
}

bool func_17()
{
	return (func_18() && !NETWORK::NETWORK_IS_ACTIVITY_SESSION());
}

bool func_18()
{
	return func_19(9539, -1);
}

bool func_19(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = func_20();
	}
	return STATS::GET_PACKED_STAT_BOOL_CODE(iParam0, iParam1);
}

int func_20()
{
	return Global_1574928;
}

void func_21(int iParam0)
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
	func_14();
	iVar0 = 0;
	while (iVar0 < 9)
	{
		iVar1 = 0;
		if (func_22(14))
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
								func_9(&(Global_9509[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar2);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							if (Global_2697067)
							{
								if (iVar1 == 14)
								{
									func_132(Global_21630, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_9509[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_24086), -1f, &(Global_9509[iVar1 /*15*/]), 0, 0, 0, 0);
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
								func_132(Global_21630, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_9509[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_24092), -1f, &(Global_9509[iVar1 /*15*/]), 0, 0, 0, 0);
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
									func_132(Global_21630, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_9509[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar4), -1f, &(Global_9509[iVar1 /*15*/]), 0, 0, 0, 0);
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
									func_132(Global_21630, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_9509[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar6), -1f, &(Global_9509[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_132(Global_21630, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_9509[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_24086), -1f, &(Global_9509[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21630, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_9509[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_9(&(Global_9509[iVar1 /*15*/]));
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
								func_9(&(Global_9509[iVar1 /*15*/]));
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
								func_9(&(Global_9509[iVar1 /*15*/]));
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
								func_9(&(Global_9509[iVar1 /*15*/]));
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
								func_9(&(Global_9509[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(42);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (Global_9509[iVar1 /*15*/].f_10 == 57 && iVar1 == 24)
							{
								iVar9 = 0;
								iVar9 = Global_1882061.f_1;
								func_132(Global_21630, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_9509[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar9), -1f, &(Global_9509[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_132(Global_21630, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_9509[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(0), -1f, &(Global_9509[iVar1 /*15*/]), 0, 0, 0, 0);
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

bool func_22(int iParam0)
{
	return Global_44921 == iParam0;
}

void func_23()
{
	if (Global_21649.f_1 == 1 || Global_21649.f_1 == 0)
	{
		return;
	}
	switch (Global_21651)
	{
		case 5:
			Global_21651 = 6;
			break;
		
		case 6:
			if (BitTest(Global_9503, 5))
			{
				Global_21651 = 6;
				MISC::CLEAR_BIT(&Global_9503, 5);
			}
			else
			{
				Global_21651 = 3;
			}
			break;
		
		case 7:
			Global_21651 = 3;
			break;
		
		case 3:
			if (BitTest(Global_9503, 5))
			{
				Global_21651 = 6;
				MISC::CLEAR_BIT(&Global_9503, 5);
			}
			else
			{
				Global_21651 = 3;
			}
			break;
		
		default:
			Global_21651 = 3;
			break;
	}
}

void func_24()
{
	if (iLocal_252)
	{
		if (SYSTEM::TIMERA() > 50)
		{
			iLocal_252 = 0;
		}
	}
	if (iLocal_252 == 0)
	{
		if (func_57(2, Global_21625, 0) || PAD::IS_CONTROL_JUST_PRESSED(2, 181))
		{
			func_28();
			iLocal_252 = 1;
			SYSTEM::SETTIMERA(0);
		}
		if (func_57(2, Global_21626, 0) || PAD::IS_CONTROL_JUST_PRESSED(2, 180))
		{
			func_25();
			iLocal_252 = 1;
			SYSTEM::SETTIMERA(0);
		}
	}
}

void func_25()
{
	func_59(Global_21630, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(3), -1082130432, -1082130432, -1082130432, -1082130432);
	AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_21638, true);
	func_26();
}

void func_26()
{
	if (func_27())
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

int func_27()
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

void func_28()
{
	func_59(Global_21630, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(1), -1082130432, -1082130432, -1082130432, -1082130432);
	AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_21638, true);
	func_29();
}

void func_29()
{
	if (func_27())
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

void func_30(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, sParam1);
	func_9(sParam2);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
	{
		func_9(sParam3);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
	{
		func_9(sParam4);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam5))
	{
		func_9(sParam5);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam6))
	{
		func_9(sParam6);
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_31()
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_21630))
	{
		func_32();
		if (Global_21648 == 1)
		{
			if (Global_21637)
			{
				func_132(Global_21630, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, "CELL_203", 0, 0, 0, 0);
			}
			else
			{
				func_132(Global_21630, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_23070)
			{
				func_132(Global_21630, "SET_SOFT_KEYS", 3f, 0f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (BitTest(Global_9502, 20))
			{
				func_132(Global_21630, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_21637)
			{
				func_132(Global_21630, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_204", 0, 0, 0, 0);
			}
			else
			{
				func_132(Global_21630, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			func_132(Global_21630, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			MISC::CLEAR_BIT(&Global_9502, 17);
		}
		else
		{
			func_132(Global_21630, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_132(Global_21630, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			MISC::CLEAR_BIT(&Global_9502, 17);
			if (BitTest(Global_9502, 20))
			{
				func_132(Global_21630, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_21637)
			{
				func_132(Global_21630, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_21592)
				{
					func_132(Global_21630, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_132(Global_21630, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
		}
	}
}

void func_32()
{
	if (Global_80337)
	{
		func_132(Global_21630, "SET_SOFT_KEYS", 1f, 0f, 9f, -1f, -1f, 0, 0, 0, 0, 0);
		MISC::CLEAR_BIT(&Global_9502, 17);
	}
}

int func_33(var uParam0, int iParam1, char* sParam2, var uParam3, var uParam4, var uParam5, var uParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11)
{
	var uVar0;
	var uVar11;
	
	func_50(uParam0, iParam1, sParam2, iParam9, iParam10, 0);
	func_49();
	if (iParam8 == 1)
	{
		Global_23035 = 1;
	}
	else
	{
		Global_23035 = 0;
	}
	uVar0 = 10;
	uVar11 = 10;
	func_47(2, &uVar0, &uVar11, uParam3, uParam4, uParam5, uParam6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	return func_34(&uVar0, &uVar11, iParam7, bParam11);
}

int func_34(var uParam0, var uParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	Global_23024 = 0;
	if (Global_23023 == 0 || Global_23025 == 2)
	{
		if (Global_23023 != 0)
		{
			if (iParam2 > Global_23025)
			{
				if (bParam3 == 0)
				{
					AUDIO::STOP_SCRIPTED_CONVERSATION(false);
					Global_21649.f_1 = 3;
					Global_23023 = 0;
					Global_23024 = 1;
					Global_23076 = 0;
					Global_23019 = 0;
					Global_23020 = 0;
				}
				else
				{
					func_121();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
		{
			return 0;
		}
		if (func_46(8, -1))
		{
			return 0;
		}
		Global_23099 = { Global_23093 };
		func_45();
		Global_22312 = { Global_22477 };
		Global_23029 = Global_23030;
		Global_23036 = Global_23037;
		Global_2883586 = Global_2883585;
		Global_23038 = { Global_23054 };
		Global_23031 = Global_23032;
		Global_24013 = Global_24014;
		Global_24021 = { Global_24027 };
		Global_24019 = Global_24020;
		Global_24015 = Global_24016;
		Global_24017 = Global_24018;
		Global_22642.f_368 = Global_24010;
		Global_22642.f_369 = Global_24011;
		Global_22642.f_370 = Global_24012;
		Global_23019 = Global_23020;
		Global_23021 = Global_23022;
		if (Global_23281 == 0)
		{
			Global_23177[0 /*6*/] = { Global_23203[0 /*6*/] };
			Global_23177[1 /*6*/] = { Global_23203[1 /*6*/] };
			Global_23229[0 /*6*/] = { Global_23255[0 /*6*/] };
			Global_23229[1 /*6*/] = { Global_23255[1 /*6*/] };
			Global_23190[0 /*6*/] = { Global_23216[0 /*6*/] };
			Global_23190[1 /*6*/] = { Global_23216[1 /*6*/] };
			Global_23242[0 /*6*/] = { Global_23268[0 /*6*/] };
			Global_23242[1 /*6*/] = { Global_23268[1 /*6*/] };
		}
		if (Global_23029)
		{
			MISC::CLEAR_BIT(&Global_9502, 20);
			MISC::CLEAR_BIT(&Global_9503, 17);
			MISC::CLEAR_BIT(&Global_9504, 0);
			if (bParam3)
			{
				func_38();
				if (Global_10324[Global_21649 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam2 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_21649.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_21615 == 1)
			{
				return 0;
			}
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (func_37())
				{
					return 0;
				}
				if (PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (PED::IS_PED_IN_PARACHUTE_FREE_FALL(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (WEAPON::GET_IS_PED_GADGET_EQUIPPED(PLAYER::PLAYER_PED_ID(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_80337)
				{
					if (Global_23281 == 0)
					{
						if (ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID()))
						{
							return 0;
						}
						if (PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()))
						{
							return 0;
						}
						if (PED::IS_PED_PLANTING_BOMB(PLAYER::PLAYER_PED_ID()))
						{
							return 0;
						}
						if (PLAYER::IS_SPECIAL_ABILITY_ACTIVE(PLAYER::PLAYER_ID(), 0))
						{
							return 0;
						}
					}
				}
			}
			if (func_36())
			{
				return 0;
			}
			else
			{
				switch (Global_21649.f_1)
				{
					case 7:
						return 0;
						break;
					
					case 8:
						return 0;
						break;
					
					case 9:
						break;
					
					case 10:
						break;
					
					default:
						break;
					}
			}
			func_35();
			Global_23033 = bParam3;
		}
		Global_23025 = iParam2;
		if (Global_23019 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_23019)
			{
				StringCopy(&(Global_22642.f_6[iVar0 /*6*/]), (*uParam0)[iVar0], 24);
				StringCopy(&(Global_22642.f_187[iVar0 /*6*/]), (*uParam1)[iVar0], 24);
				iVar0++;
			}
		}
		Global_21889 = 0;
		func_61();
		return 1;
	}
	if (Global_23023 == 5)
	{
		return 0;
	}
	if (iParam2 < Global_23025 || iParam2 == Global_23025)
	{
		return 0;
	}
	if (iParam2 == 2)
	{
	}
	else
	{
		func_121();
	}
	return 0;
}

void func_35()
{
	Global_23076 = Global_23075;
	Global_23070 = Global_23071;
	Global_23117 = { Global_23105 };
	Global_23123 = { Global_23111 };
	Global_23078 = Global_23077;
	Global_23147 = { Global_23129 };
	Global_23153 = { Global_23135 };
	Global_23159 = { Global_23141 };
	Global_23165 = { Global_23171 };
	Global_8817 = Global_8818;
	Global_8819 = Global_8820;
	Global_23034 = Global_23035;
	Global_23036 = Global_23037;
	Global_23038 = { Global_23054 };
	Global_23027 = Global_23028;
	Global_24039 = 0;
	Global_23072 = 0;
	Global_23073 = 0;
	MISC::CLEAR_BIT(&Global_9503, 16);
}

int func_36()
{
	if (Global_21649.f_1 == 1 || Global_21649.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_37()
{
	int iVar0;
	int iVar1;
	
	if (Global_80337)
	{
		iVar0 = 0;
		WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar1, true);
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (CAM::IS_AIM_CAM_ACTIVE() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (PED::GET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 78, true))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_38()
{
	if (func_22(14))
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
			if (func_41(iVar0) && (!func_22(14) || Global_113909))
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
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_22312[iVar0 /*10*/] = 0;
		StringCopy(&(Global_22312[iVar0 /*10*/].f_1), "", 24);
		Global_22312[iVar0 /*10*/].f_7 = 0;
		Global_22312[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_22312.f_161 = -99;
	Global_22312.f_162 = { 0f, 0f, 0f };
}

bool func_46(int iParam0, int iParam1)
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

void func_47(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16)
{
	func_48(iParam0);
	(*uParam1)[0] = uParam3;
	(*uParam2)[0] = uParam4;
	(*uParam1)[1] = uParam5;
	(*uParam2)[1] = uParam6;
	(*uParam1)[2] = iParam7;
	(*uParam2)[2] = iParam8;
	(*uParam1)[3] = iParam9;
	(*uParam2)[3] = iParam10;
	(*uParam1)[4] = iParam11;
	(*uParam2)[4] = iParam12;
	(*uParam1)[5] = iParam13;
	(*uParam2)[5] = iParam14;
	(*uParam1)[6] = iParam15;
	(*uParam2)[6] = iParam16;
}

void func_48(var uParam0)
{
	Global_23020 = uParam0;
	Global_23030 = 1;
	Global_23037 = 0;
	Global_23032 = 0;
	Global_24014 = 0;
	Global_24020 = 0;
	Global_2883585 = 0;
}

void func_49()
{
	Global_23071 = 0;
	Global_23030 = 1;
	Global_23037 = 0;
	Global_23032 = 0;
	Global_24014 = 0;
	Global_24016 = 0;
	Global_23037 = 0;
	Global_24020 = 0;
	Global_23028 = 0;
	Global_23075 = 0;
	Global_23077 = 0;
	Global_2883585 = 0;
}

void func_50(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Global_22477 = { *uParam0 };
	Global_8818 = iParam1;
	StringCopy(&Global_23093, sParam2, 24);
	Global_24012 = iParam5;
	if (iParam3 == 0)
	{
		Global_24010 = 1;
		Global_24008 = 0;
	}
	else
	{
		Global_24010 = 0;
		Global_24008 = 1;
	}
	if (iParam4 == 0)
	{
		Global_24011 = 1;
		Global_24009 = 0;
	}
	else
	{
		Global_24011 = 0;
		Global_24009 = 1;
	}
}

int func_51(var uParam0, var uParam1, int iParam2, char* sParam3, var uParam4, var uParam5, int iParam6, int iParam7, int iParam8, int iParam9, bool bParam10)
{
	func_50(uParam1, iParam2, sParam3, iParam8, iParam9, 0);
	func_49();
	if (iParam7 == 1)
	{
		Global_23035 = 1;
	}
	else
	{
		Global_23035 = 0;
	}
	func_48(uParam0);
	return func_34(uParam4, uParam5, iParam6, bParam10);
}

var func_52(var uParam0)
{
	return uParam0;
}

void func_53()
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Accept", &Global_21638, true);
		func_54();
	}
}

void func_54()
{
	if (func_27())
	{
		MOBILE::CELL_SET_INPUT(5);
	}
}

void func_55()
{
	if (func_56())
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				if (!Global_21592)
				{
					if (!BitTest(Global_9502, 11))
					{
						func_69();
					}
				}
			}
		}
	}
}

int func_56()
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
		if (func_22(14))
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

int func_57(int iParam0, int iParam1, int iParam2)
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

int func_58(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_2349[iParam0 /*29*/].f_24[iParam1];
}

void func_59(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
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

void func_60()
{
	if (func_56())
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				if (!Global_21592)
				{
					if (BitTest(Global_9502, 11))
					{
						func_3();
					}
				}
			}
		}
	}
}

void func_61()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_21891[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	AUDIO::STOP_SCRIPTED_CONVERSATION(false);
	Global_23023 = 1;
}

int func_62()
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iLocal_125 = NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), iLocal_124);
	}
	else
	{
		iLocal_122 = MISC::GET_GAME_TIMER();
		iLocal_125 = (iLocal_122 - iLocal_121);
	}
	return 0;
}

void func_63(int iParam0)
{
	if (func_67())
	{
		return;
	}
	if (Global_21882)
	{
		if (func_66())
		{
			func_64(1, 1);
		}
		else
		{
			func_64(0, 0);
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
	if (!func_36())
	{
		Global_21649.f_1 = 3;
	}
}

void func_64(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_65(0))
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

int func_65(int iParam0)
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

bool func_66()
{
	return BitTest(Global_1964670, 5);
}

bool func_67()
{
	return BitTest(Global_1964670, 19);
}

void func_68()
{
	if (func_57(2, Global_21626, 0))
	{
		if (Global_24034 == 0)
		{
			if (Global_23029)
			{
				if (BitTest(Global_9503, 17))
				{
				}
				else
				{
					AUDIO::SKIP_TO_NEXT_SCRIPTED_CONVERSATION_LINE();
				}
			}
		}
	}
}

void func_69()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 0;
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (func_70() && PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), false))
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

int func_70()
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

void func_71()
{
	if (Global_80337 == 0)
	{
		func_68();
	}
	if (iLocal_50 == 1)
	{
		func_63(0);
	}
	if (iLocal_47 == 0)
	{
		iLocal_47 = 1;
		Global_24036 = 1;
		if (func_58(Global_8817, Global_21649) == 0)
		{
			func_132(Global_21630, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(4), -1f, -1f, &Global_23165, "CELL_300", "CELL_195", "CELL_195", 0);
			func_59(Global_21630, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
		}
		else
		{
			func_132(Global_21630, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(4), -1f, -1f, &Global_23165, &(Global_2349[Global_8817 /*29*/].f_7), &(Global_2349[Global_8817 /*29*/].f_3), &(Global_2349[Global_8817 /*29*/].f_3), 0);
			func_59(Global_21630, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
		}
		Global_21575 = 0.2f;
		if (Global_21637)
		{
			func_132(Global_21630, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, "CELL_212", 0, 0, 0, 0);
			func_132(Global_21630, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, "CELL_213", 0, 0, 0, 0);
		}
		else
		{
			func_132(Global_21630, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
			func_132(Global_21630, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, 0, 0, 0, 0, 0);
		}
		func_132(Global_21630, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
		MISC::CLEAR_BIT(&Global_9502, 17);
	}
	if (Global_23076 == 1)
	{
		if (Global_21649.f_1 < 6)
		{
			Global_23076 = 0;
		}
		else
		{
			if (Global_21589 == 0)
			{
				if (func_57(2, Global_21618, 0))
				{
					Global_21575 = 0.19f;
					Global_23076 = 0;
					func_53();
					Global_24041 = 1;
					iLocal_49 = 1;
				}
			}
			if (func_57(2, Global_21619, 0))
			{
				Global_21575 = 0.19f;
				Global_23076 = 0;
				func_53();
				Global_24041 = 2;
			}
		}
	}
	else if (Global_24041 == 2)
	{
		if (Global_23024 == 0)
		{
			AUDIO::STOP_SCRIPTED_CONVERSATION(false);
			Global_23023 = 6;
		}
		func_23();
		Global_21649.f_1 = Global_21651;
		func_8();
	}
	else if (!AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
	{
		iLocal_49 = 0;
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		Global_23023 = 6;
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Hang_Up", &Global_21638, true);
		func_23();
		Global_21649.f_1 = Global_21651;
		func_8();
	}
}

void func_72()
{
	if (Global_21890 == 1)
	{
		if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
		{
			if (AUDIO::GET_IS_PRELOADED_CONVERSATION_READY())
			{
				Global_21890 = 0;
			}
		}
		if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			Global_21890 = 0;
			AUDIO::STOP_SCRIPTED_CONVERSATION(false);
			Global_23023 = 6;
		}
	}
	if (SYSTEM::TIMERB() > iLocal_52)
	{
		if (Global_21890 == 1)
		{
			Global_21890 = 0;
		}
	}
	if (SYSTEM::TIMERA() < Global_24044 || Global_21890 == 1)
	{
		if (func_57(2, Global_21617, 0))
		{
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
				{
					if (BitTest(Global_9502, 20))
					{
					}
					else
					{
						Global_21627 = 1;
						func_53();
						AUDIO::STOP_SCRIPTED_CONVERSATION(false);
						Global_23072 = 1;
						Global_23023 = 6;
						MISC::CLEAR_BIT(&Global_9502, 27);
						if (!Global_23034)
						{
							MISC::SET_BIT(&Global_9503, 5);
						}
						func_23();
						Global_21649.f_1 = Global_21651;
						func_8();
					}
				}
			}
		}
	}
	else
	{
		MISC::CLEAR_BIT(&Global_9502, 27);
		Global_23023 = 4;
		Global_23080 = 0;
		func_75();
		func_74();
		if (!Global_23036)
		{
			if (Global_24040 == 0)
			{
				if (!BitTest(Global_9504, 5))
				{
					AUDIO::START_PRELOADED_CONVERSATION();
				}
				MISC::CLEAR_BIT(&Global_9504, 5);
			}
			else
			{
				AUDIO::START_SCRIPT_PHONE_CONVERSATION(Global_22642.f_368, Global_22642.f_369);
			}
		}
		func_73();
	}
}

void func_73()
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iLocal_124 = NETWORK::GET_NETWORK_TIME();
	}
	else
	{
		iLocal_121 = MISC::GET_GAME_TIMER();
	}
}

void func_74()
{
	if (Global_23036)
	{
		if (Global_80337)
		{
			if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_21630))
			{
				if (!MISC::IS_PC_VERSION())
				{
					func_132(Global_21630, "SET_SOFT_KEYS", 1f, 1f, 8f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
					MISC::SET_BIT(&(Global_2733190.f_918), 15);
				}
			}
		}
	}
}

void func_75()
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_21630))
	{
		if (!Global_23031)
		{
			func_132(Global_21630, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_132(Global_21630, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			MISC::CLEAR_BIT(&Global_9502, 17);
			if (BitTest(Global_9502, 20))
			{
				func_132(Global_21630, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_21637)
			{
				func_132(Global_21630, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_21592)
				{
					func_132(Global_21630, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_132(Global_21630, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_23036)
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21630, "SET_DATA_SLOT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(4);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_CONDFON");
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_23038);
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				func_9("CELL_300");
				func_9("CELL_219");
				func_9("CELL_219");
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
			else if (func_58(Global_8817, Global_21649) == 0)
			{
				func_132(Global_21630, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(3), -1f, -1f, &(Global_118[Global_8817 /*10*/].f_4), "CELL_300", "CELL_219", "CELL_195", 0);
			}
			else
			{
				func_132(Global_21630, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(3), -1f, -1f, &(Global_2349[Global_8817 /*29*/].f_3), &(Global_2349[Global_8817 /*29*/].f_7), "CELL_219", &(Global_2349[Global_8817 /*29*/].f_3), 0);
			}
		}
		func_59(Global_21630, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
	}
}

void func_76()
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iLocal_126 = NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), iLocal_112);
		iLocal_127 = NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), iLocal_115);
	}
	else
	{
		iLocal_111 = MISC::GET_GAME_TIMER();
		iLocal_126 = (iLocal_111 - iLocal_110);
		iLocal_114 = MISC::GET_GAME_TIMER();
		iLocal_127 = (iLocal_114 - iLocal_113);
	}
	if (Global_23070 == 1)
	{
		if (func_56())
		{
			if (iLocal_126 > 4000)
			{
				if (BitTest(Global_9502, 14))
				{
					if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_21630))
					{
						func_53();
						Global_21648 = 2;
						func_75();
						func_74();
					}
				}
			}
		}
		else if (iLocal_126 > 2000)
		{
			if (BitTest(Global_9502, 14))
			{
				if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_21630))
				{
					func_53();
					Global_21648 = 2;
					func_75();
					func_74();
				}
			}
		}
	}
	if (iLocal_127 > 10000)
	{
		Global_21648 = 3;
	}
	if (Global_21648 == 2)
	{
		iLocal_47 = 0;
		Global_23023 = 4;
		func_69();
		Global_23080 = 0;
		func_75();
		func_74();
		if (!Global_23036)
		{
			if (Global_24040 == 0)
			{
				AUDIO::START_PRELOADED_CONVERSATION();
			}
			else
			{
				AUDIO::START_SCRIPT_PHONE_CONVERSATION(Global_22642.f_368, Global_22642.f_369);
			}
		}
		func_73();
		Global_24039 = 0;
	}
	if (Global_23070 == 0)
	{
		if (Global_21648 == 3)
		{
			if (Global_23036)
			{
				func_78();
				func_63(0);
			}
			else
			{
				func_77();
				Global_24039 = 1;
				AUDIO::STOP_SCRIPTED_CONVERSATION(false);
				Global_23023 = 6;
				func_23();
				Global_21649.f_1 = Global_21651;
				func_8();
			}
		}
	}
	else if (Global_21648 == 3)
	{
	}
}

void func_77()
{
}

void func_78()
{
	Global_2739179.f_2 = 1;
	Global_2739179.f_38 = 1;
	if (NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		if (NETWORK::NETWORK_SESSION_IS_IN_VOICE_SESSION())
		{
			while (NETWORK::NETWORK_SESSION_IS_VOICE_SESSION_BUSY())
			{
				SYSTEM::WAIT(0);
			}
			NETWORK::NETWORK_SESSION_VOICE_LEAVE();
			Global_2739179 = 0;
			Global_2739179.f_2 = 0;
		}
		else if (func_81(Global_2739179.f_20))
		{
			if (NETWORK::NETWORK_IS_FRIEND(&(Global_2739179.f_20)))
			{
				if (!NETWORK::NETWORK_IS_FRIEND_HANDLE_ONLINE(&(Global_2739179.f_20)))
				{
					func_79();
				}
			}
		}
		else
		{
			func_79();
		}
	}
	else
	{
		func_79();
	}
	if (Global_2739179.f_37)
	{
		func_63(0);
	}
	Global_2739179.f_37 = 0;
	Global_2739179.f_3 = 0;
}

void func_79()
{
	Global_2739179.f_1 = 0;
	Global_2739179 = 0;
	Global_2739179.f_2 = 0;
	Global_2739179.f_33 = -1;
	Global_2739179.f_34 = -1;
	StringCopy(&(Global_2739179.f_4), "", 64);
	StringCopy(&(Global_2739179.f_39[0 /*16*/]), "", 64);
	Global_2739179.f_38 = 0;
	Global_2739179.f_56 = 0;
	Global_2739179.f_57 = 0;
	Global_2739179.f_58 = -2;
	Global_2739179.f_3 = 0;
	func_80(&(Global_2739179.f_20));
}

void func_80(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 0;
}

bool func_81(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	return NETWORK::NETWORK_IS_HANDLE_VALID(&uParam0, 13);
}

void func_82()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	int iVar12;
	int iVar13;
	
	iLocal_109 = 0;
	iVar0 = 1;
	iVar1 = 1;
	iVar2 = 0;
	iLocal_46 = 0;
	iLocal_48 = 0;
	while (iLocal_109 < Global_23019)
	{
		func_99();
		func_98();
		func_97();
		iVar13 = 0;
		while (iVar2 < 70 && iLocal_46 == 0)
		{
			cLocal_61 = { Global_22642.f_6[iLocal_109 /*6*/] };
			StringConCat(&cLocal_61, "A", 24);
			Global_21891[iVar2 /*6*/] = { Global_22642.f_6[iLocal_109 /*6*/] };
			StringConCat(&(Global_21891[iVar2 /*6*/]), "_", 24);
			StringIntConCat(&(Global_21891[iVar2 /*6*/]), iVar1, 24);
			cLocal_55 = { Global_21891[iVar2 /*6*/] };
			StringConCat(&cLocal_55, "A", 24);
			if (HUD::DOES_TEXT_LABEL_EXIST(&cLocal_55))
			{
				StringCopy(&cLocal_67, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&cLocal_55), 64);
				iVar3 = func_96(iVar13);
				iVar4 = func_95(iVar13);
				iVar5 = func_93(iVar13);
				bLocal_99 = func_92();
				bLocal_100 = func_91();
				bLocal_101 = func_90();
				bVar6 = func_89(iVar13);
				bVar7 = func_88(iVar13);
				bVar8 = func_87(iVar13);
				iVar12 = func_86(iVar13);
				bVar9 = func_85(iVar13);
				bVar10 = func_84(iVar13);
				bVar11 = func_83(iVar13);
				if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_21891[iVar2 /*6*/])))
				{
					if (MISC::ARE_STRINGS_EQUAL(&(Global_21891[iVar2 /*6*/]), &(Global_22642.f_187[iLocal_109 /*6*/])))
					{
						if (iVar3 > 36 || iVar4 > 36)
						{
						}
						AUDIO::ADD_LINE_TO_CONVERSATION(iVar3, &cLocal_67, &(Global_21891[iVar2 /*6*/]), iVar4, iVar5, false, bVar6, bVar7, bVar8, iVar12, bVar9, bVar10, bVar11);
					}
				}
				iVar1 = (iVar1 + iVar0);
			}
			else if (HUD::DOES_TEXT_LABEL_EXIST(&cLocal_61))
			{
				StringCopy(&cLocal_67, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&cLocal_61), 64);
				iVar3 = func_96(0);
				iVar4 = func_95(0);
				iVar5 = func_93(0);
				bLocal_99 = func_92();
				bLocal_100 = func_91();
				bLocal_101 = func_90();
				bVar6 = func_89(0);
				bVar7 = func_88(0);
				bVar8 = func_87(0);
				iVar12 = func_86(0);
				bVar9 = func_85(0);
				bVar10 = func_84(0);
				bVar11 = func_83(0);
				AUDIO::ADD_LINE_TO_CONVERSATION(iVar3, &cLocal_67, &(Global_22642.f_6[iLocal_109 /*6*/]), iVar4, iVar5, true, bVar6, bVar7, bVar8, iVar12, bVar9, bVar10, bVar11);
				StringCopy(&(Global_21891[iVar2 /*6*/]), "END", 24);
				iLocal_46 = 1;
			}
			else
			{
				StringCopy(&(Global_21891[iVar2 /*6*/]), "END", 24);
				iLocal_46 = 1;
			}
			iVar2++;
			iVar13++;
			if (iVar2 == 70)
			{
			}
		}
		iLocal_109++;
		iLocal_46 = 0;
		iVar1 = 1;
		iVar13 = 0;
		iVar2 = 0;
	}
	if (Global_23029 == 0)
	{
		AUDIO::SET_CONVERSATION_AUDIO_CONTROLLED_BY_ANIM(bLocal_100);
		AUDIO::SET_CONVERSATION_AUDIO_PLACEHOLDER(bLocal_101);
		AUDIO::START_SCRIPT_CONVERSATION(Global_22642.f_368, Global_22642.f_369, Global_22642.f_370, bLocal_99);
		Global_23023 = 4;
	}
}

int func_83(int iParam0)
{
	char* sVar0;
	
	sVar0 = HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME(HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&cLocal_102), iParam0 * 7 + 6, iParam0 * 7 + 7);
	if (MISC::ARE_STRINGS_EQUAL(sVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_84(int iParam0)
{
	char* sVar0;
	
	sVar0 = HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME(HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&cLocal_102), iParam0 * 7 + 5, iParam0 * 7 + 6);
	if (MISC::ARE_STRINGS_EQUAL(sVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_85(int iParam0)
{
	char* sVar0;
	
	sVar0 = HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME(HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&cLocal_102), iParam0 * 7 + 4, iParam0 * 7 + 5);
	if (MISC::ARE_STRINGS_EQUAL(sVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_86(int iParam0)
{
	char* sVar0;
	
	sVar0 = HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME(HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&cLocal_102), iParam0 * 7 + 3, iParam0 * 7 + 4);
	if (MISC::ARE_STRINGS_EQUAL(sVar0, "0"))
	{
		return 1;
	}
	if (MISC::ARE_STRINGS_EQUAL(sVar0, "1"))
	{
		return 1;
	}
	if (MISC::ARE_STRINGS_EQUAL(sVar0, "2"))
	{
		return 2;
	}
	if (MISC::ARE_STRINGS_EQUAL(sVar0, "3"))
	{
		return 3;
	}
	if (MISC::ARE_STRINGS_EQUAL(sVar0, "4"))
	{
		return 0;
	}
	return 0;
}

int func_87(int iParam0)
{
	char* sVar0;
	
	sVar0 = HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME(HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&cLocal_102), iParam0 * 7 + 2, iParam0 * 7 + 3);
	if (MISC::ARE_STRINGS_EQUAL(sVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_88(int iParam0)
{
	char* sVar0;
	
	sVar0 = HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME(HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&cLocal_102), iParam0 * 7 + 1, iParam0 * 7 + 2);
	if (MISC::ARE_STRINGS_EQUAL(sVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_89(int iParam0)
{
	char* sVar0;
	
	sVar0 = HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME(HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&cLocal_102), iParam0 * 7, iParam0 * 7 + 1);
	if (MISC::ARE_STRINGS_EQUAL(sVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_90()
{
	char* sVar0;
	
	sVar0 = HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME(HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&cLocal_90), 2, 3);
	if (MISC::ARE_STRINGS_EQUAL(sVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_91()
{
	char* sVar0;
	
	sVar0 = HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME(HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&cLocal_90), 1, 2);
	if (MISC::ARE_STRINGS_EQUAL(sVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_92()
{
	char* sVar0;
	
	sVar0 = HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME(HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&cLocal_90), 0, 1);
	if (MISC::ARE_STRINGS_EQUAL(sVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_93(int iParam0)
{
	char* sVar0;
	
	sVar0 = HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME(HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&cLocal_83), iParam0 * 3 + 2, iParam0 * 3 + 3);
	return func_94(sVar0);
}

int func_94(char* sParam0)
{
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "0"))
	{
		return 0;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "1"))
	{
		return 1;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "2"))
	{
		return 2;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "3"))
	{
		return 3;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "4"))
	{
		return 4;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "5"))
	{
		return 5;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "6"))
	{
		return 6;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "7"))
	{
		return 7;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "8"))
	{
		return 8;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "9"))
	{
		return 9;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "A"))
	{
		return 10;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "B"))
	{
		return 11;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "C"))
	{
		return 12;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "D"))
	{
		return 13;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "E"))
	{
		return 14;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "F"))
	{
		return 15;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "G"))
	{
		return 16;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "H"))
	{
		return 17;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "I"))
	{
		return 18;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "J"))
	{
		return 19;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "K"))
	{
		return 20;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "L"))
	{
		return 21;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "M"))
	{
		return 22;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "N"))
	{
		return 23;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "O"))
	{
		return 24;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "P"))
	{
		return 25;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "Q"))
	{
		return 26;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "R"))
	{
		return 27;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "S"))
	{
		return 28;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "T"))
	{
		return 29;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "U"))
	{
		return 30;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "V"))
	{
		return 31;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "W"))
	{
		return 32;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "X"))
	{
		return 33;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "Y"))
	{
		return 34;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "Z"))
	{
		return 35;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "z"))
	{
		return -1;
	}
	return -1;
}

int func_95(int iParam0)
{
	char* sVar0;
	
	sVar0 = HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME(HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&cLocal_83), iParam0 * 3 + 1, iParam0 * 3 + 2);
	return func_94(sVar0);
}

int func_96(int iParam0)
{
	char* sVar0;
	
	sVar0 = HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME(HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&cLocal_83), iParam0 * 3, iParam0 * 3 + 1);
	return func_94(sVar0);
}

void func_97()
{
	cLocal_102 = { Global_22642.f_6[iLocal_109 /*6*/] };
	StringConCat(&cLocal_102, "LF", 24);
	if (HUD::DOES_TEXT_LABEL_EXIST(&cLocal_102))
	{
		sLocal_108 = HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&cLocal_102);
		if (MISC::IS_STRING_NULL(sLocal_108))
		{
		}
	}
}

void func_98()
{
	cLocal_90 = { Global_22642.f_6[iLocal_109 /*6*/] };
	StringConCat(&cLocal_90, "IF", 24);
	if (HUD::DOES_TEXT_LABEL_EXIST(&cLocal_90))
	{
		sLocal_96 = HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME(HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&cLocal_90), 0, 1);
		if (MISC::IS_STRING_NULL(sLocal_96))
		{
		}
		sLocal_97 = HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME(HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&cLocal_90), 1, 2);
		if (MISC::IS_STRING_NULL(sLocal_97))
		{
		}
		sLocal_98 = HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME(HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&cLocal_90), 2, 3);
		if (MISC::IS_STRING_NULL(sLocal_98))
		{
		}
	}
}

void func_99()
{
	cLocal_83 = { Global_22642.f_6[iLocal_109 /*6*/] };
	StringConCat(&cLocal_83, "SL", 24);
	if (HUD::DOES_TEXT_LABEL_EXIST(&cLocal_83))
	{
		sLocal_89 = HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&cLocal_83);
		if (MISC::IS_STRING_NULL(sLocal_89))
		{
		}
	}
}

void func_100()
{
	func_101();
	AUDIO::SET_CONVERSATION_AUDIO_CONTROLLED_BY_ANIM(bLocal_100);
	AUDIO::SET_CONVERSATION_AUDIO_PLACEHOLDER(bLocal_101);
	if (Global_24015)
	{
		AUDIO::PRELOAD_SCRIPT_CONVERSATION(Global_22642.f_368, Global_22642.f_369, Global_22642.f_370, bLocal_99);
		iLocal_53 = MISC::GET_GAME_TIMER();
	}
	else
	{
		AUDIO::START_SCRIPT_CONVERSATION(Global_22642.f_368, Global_22642.f_369, Global_22642.f_370, bLocal_99);
	}
	Global_23023 = 4;
}

void func_101()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	
	iVar0 = 1;
	iVar1 = 1;
	iVar2 = 0;
	iLocal_46 = 0;
	iLocal_48 = 0;
	iLocal_50 = 0;
	if (HUD::DOES_TEXT_BLOCK_EXIST(&Global_23099))
	{
		if (MISC::ARE_STRINGS_EQUAL(&Global_23099, "CT_AUD"))
		{
			Global_2883586 = 1;
		}
		iVar13 = 0;
		if (func_113() || func_112())
		{
			if (Global_1835550 == 1)
			{
				iVar13 = 1;
			}
			else
			{
				iVar13 = 2;
			}
		}
		iVar14 = 0;
		if (Global_80337 || func_109(0))
		{
			if (Global_1835550 == 0)
			{
				iVar14 = 1;
			}
		}
		else if (!func_107())
		{
			iVar14 = 1;
		}
		if (func_106(MISC::GET_HASH_KEY(&Global_23099)))
		{
			iVar14 = 0;
			Global_2883586 = 0;
			iVar13 = 1;
		}
		if (((Global_23025 < 5 || Global_23025 == 10) || Global_23025 == 12) || Global_23025 == 13)
		{
			if ((iVar14 == 1 || Global_2883586 == 1) || iVar13 == 2)
			{
				HUD::REQUEST_ADDITIONAL_TEXT(&Global_23099, 7);
				while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(7))
				{
					SYSTEM::WAIT(0);
				}
			}
			else
			{
				HUD::REQUEST_ADDITIONAL_TEXT_FOR_DLC(&Global_23099, 15);
				while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(15))
				{
					SYSTEM::WAIT(0);
				}
			}
		}
		else if ((iVar14 == 1 || Global_2883586 == 1) || iVar13 == 2)
		{
			HUD::REQUEST_ADDITIONAL_TEXT(&Global_23099, 6);
			while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(6))
			{
				SYSTEM::WAIT(0);
			}
		}
		else if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("fm_mission_controller_2020")) == 0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(-635282018) == 0)
		{
			HUD::REQUEST_ADDITIONAL_TEXT_FOR_DLC(&Global_23099, 14);
			while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(14))
			{
				SYSTEM::WAIT(0);
			}
		}
	}
	else
	{
		iLocal_50 = 1;
		return;
	}
	AUDIO::CREATE_NEW_SCRIPTED_CONVERSATION();
	func_105();
	func_104();
	func_103();
	func_102();
	Global_24033 = 0;
	while (iVar2 < 70 && iLocal_46 == 0)
	{
		cLocal_61 = { Global_22642 };
		StringConCat(&cLocal_61, "A", 24);
		Global_21891[iVar2 /*6*/] = { Global_22642 };
		StringConCat(&(Global_21891[iVar2 /*6*/]), "_", 24);
		StringIntConCat(&(Global_21891[iVar2 /*6*/]), iVar1, 24);
		cLocal_55 = { Global_21891[iVar2 /*6*/] };
		StringConCat(&cLocal_55, "A", 24);
		if (HUD::DOES_TEXT_LABEL_EXIST(&cLocal_55))
		{
			StringCopy(&cLocal_67, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&cLocal_55), 64);
			iVar3 = func_96(iVar2);
			if (iVar3 == 9)
			{
				if (Global_4525111 == 0)
				{
				}
			}
			iVar4 = func_95(iVar2);
			iVar5 = func_93(iVar2);
			bLocal_99 = func_92();
			bLocal_100 = func_91();
			bLocal_101 = func_90();
			bVar6 = func_89(iVar2);
			bVar7 = func_88(iVar2);
			bVar8 = func_87(iVar2);
			iVar12 = func_86(iVar2);
			bVar9 = func_85(iVar2);
			bVar10 = func_84(iVar2);
			bVar11 = func_83(iVar2);
			if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_21891[iVar2 /*6*/])))
			{
				if (Global_24013 == 0 && Global_24019 == 0)
				{
					if (iVar3 > 36 || iVar4 > 36)
					{
					}
					AUDIO::ADD_LINE_TO_CONVERSATION(iVar3, &cLocal_67, &(Global_21891[iVar2 /*6*/]), iVar4, iVar5, false, bVar6, bVar7, bVar8, iVar12, bVar9, bVar10, bVar11);
				}
				else if (MISC::ARE_STRINGS_EQUAL(&(Global_21891[iVar2 /*6*/]), &Global_24021))
				{
					if (iVar3 > 36 || iVar4 > 36)
					{
					}
					AUDIO::ADD_LINE_TO_CONVERSATION(iVar3, &cLocal_67, &(Global_21891[iVar2 /*6*/]), iVar4, iVar5, false, bVar6, bVar7, bVar8, iVar12, bVar9, bVar10, bVar11);
					Global_24033 = iVar2;
					if (Global_24019 == 1)
					{
						Global_24019 = 0;
					}
				}
			}
			else if (Global_24019 == 0 && Global_24013 == 0)
			{
				AUDIO::ADD_LINE_TO_CONVERSATION(iVar3, &cLocal_67, &cLocal_67, iVar4, iVar5, false, bVar6, bVar7, bVar8, iVar12, bVar9, bVar10, bVar11);
			}
			iVar1 = (iVar1 + iVar0);
		}
		else
		{
			if (HUD::DOES_TEXT_LABEL_EXIST(&cLocal_61))
			{
				StringCopy(&cLocal_67, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&cLocal_61), 64);
				iVar3 = func_96(iVar2);
				iVar4 = func_95(iVar2);
				iVar5 = func_93(iVar2);
				bLocal_99 = func_92();
				bLocal_100 = func_91();
				bLocal_101 = func_90();
				bVar6 = func_89(iVar2);
				bVar7 = func_88(iVar2);
				bVar8 = func_87(iVar2);
				iVar12 = func_86(iVar2);
				bVar9 = func_85(iVar2);
				bVar10 = func_84(iVar2);
				bVar11 = func_83(iVar2);
				AUDIO::ADD_LINE_TO_CONVERSATION(iVar3, &cLocal_67, &Global_22642, iVar4, iVar5, true, bVar6, bVar7, bVar8, iVar12, bVar9, bVar10, bVar11);
			}
			iLocal_46 = 1;
		}
		iVar2++;
		if (iVar2 == 70)
		{
		}
	}
}

void func_102()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		if (Global_22312[iVar0 /*10*/].f_7 == 1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_22312[iVar0 /*10*/]) || Global_22312[iVar0 /*10*/] == 0)
			{
				AUDIO::ADD_PED_TO_CONVERSATION(iVar0, Global_22312[iVar0 /*10*/], &(Global_22312[iVar0 /*10*/].f_1));
			}
			if (Global_22312.f_161 == iVar0)
			{
				if ((Global_22312.f_162 != 0f && Global_22312.f_162.f_1 != 0f) && Global_22312.f_162.f_2 != 0f)
				{
					SYSTEM::WAIT(0);
					AUDIO::SET_POSITION_FOR_NULL_CONV_PED(Global_22312.f_161, Global_22312.f_162);
				}
			}
		}
		iVar0++;
	}
	if (Global_4525111 == 1)
	{
		Global_4525111 = 0;
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 <= 19)
		{
			if (Global_4524930[iVar0 /*9*/].f_7 == 1)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Global_4524930[iVar0 /*9*/]) || Global_4524930[iVar0 /*9*/] == 0)
				{
					AUDIO::ADD_PED_TO_CONVERSATION(Global_4524930[iVar0 /*9*/].f_8, Global_4524930[iVar0 /*9*/], &(Global_4524930[iVar0 /*9*/].f_1));
				}
			}
			iVar0++;
		}
	}
}

void func_103()
{
	cLocal_102 = { Global_22642 };
	StringConCat(&cLocal_102, "LF", 24);
	if (HUD::DOES_TEXT_LABEL_EXIST(&cLocal_102))
	{
		sLocal_108 = HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&cLocal_102);
		if (MISC::IS_STRING_NULL(sLocal_108))
		{
		}
	}
}

void func_104()
{
	cLocal_90 = { Global_22642 };
	StringConCat(&cLocal_90, "IF", 24);
	if (HUD::DOES_TEXT_LABEL_EXIST(&cLocal_90))
	{
		sLocal_96 = HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME(HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&cLocal_90), 0, 1);
		if (MISC::IS_STRING_NULL(sLocal_96))
		{
		}
		sLocal_97 = HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME(HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&cLocal_90), 1, 2);
		if (MISC::IS_STRING_NULL(sLocal_97))
		{
		}
		sLocal_98 = HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME(HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&cLocal_90), 2, 3);
		if (MISC::IS_STRING_NULL(sLocal_98))
		{
		}
	}
}

void func_105()
{
	cLocal_83 = { Global_22642 };
	StringConCat(&cLocal_83, "SL", 24);
	if (HUD::DOES_TEXT_LABEL_EXIST(&cLocal_83))
	{
		sLocal_89 = HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&cLocal_83);
		if (MISC::IS_STRING_NULL(sLocal_89))
		{
		}
	}
}

int func_106(int iParam0)
{
	switch (iParam0)
	{
		case joaat("apcutau"):
		case joaat("apair"):
		case joaat("apcalau"):
		case joaat("pbpau"):
		case joaat("pbbau"):
		case joaat("expowau"):
		case joaat("excalau"):
		case joaat("excpaau"):
		case joaat("exhelau"):
		case joaat("bplesau"):
		case joaat("bpmalau"):
		case joaat("lowreau"):
		case 1566303118:
		case 1220013368:
		case 71115730:
		case -251854137:
		case -243052328:
		case -1417718107:
		case joaat("impaaud"):
		case joaat("imdunau"):
		case joaat("imruiau"):
		case joaat("immecau"):
		case joaat("imarmau"):
		case joaat("imblzau"):
		case joaat("imphaau"):
		case joaat("imtecau"):
		case joaat("imvolau"):
		case joaat("imwasau"):
		case joaat("gnrcaud"):
		case joaat("gnrweau"):
		case joaat("grapcau"):
		case joaat("grhalau"):
		case joaat("grdunau"):
		case joaat("grmocau"):
		case joaat("groppau"):
		case joaat("grop2au"):
		case joaat("grtamau"):
		case joaat("grtrsau"):
		case joaat("smgcaud"):
		case joaat("smgfzau"):
		case joaat("iaafiau"):
		case joaat("iaamoau"):
		case joaat("iaasfau"):
		case joaat("iaadeau"):
		case joaat("silprau"):
		case joaat("subbmau"):
		case joaat("subfiau"):
		case joaat("subfoau"):
		case joaat("subosau"):
		case joaat("subcaau"):
		case joaat("xmfmaud"):
		case joaat("tufin"):
		case joaat("subriau"):
		case joaat("silbcau"):
		case joaat("silspau"):
		case joaat("siltaau"):
		case joaat("silfiau"):
		case joaat("h2cutau"):
		case joaat("batfmau"):
		case joaat("lazfmau"):
		case joaat("paifmau"):
		case joaat("arintau"):
		case joaat("arannau"):
		case joaat("arasau"):
		case 1931750438:
		case joaat("cagtau"):
		case joaat("ctomau"):
		case joaat("caspaud"):
		case joaat("cas1aud"):
		case joaat("cas2aud"):
		case joaat("cas3aud"):
		case joaat("cas4aud"):
		case joaat("cas5aud"):
		case joaat("cas6aud"):
		case joaat("casuiau"):
		case joaat("casinau"):
		case 365230037:
		case joaat("casbkau"):
		case joaat("hs3faau"):
		case joaat("hs3prau"):
		case joaat("hs3cwau"):
		case joaat("hs3leau"):
		case -342942601:
		case joaat("hs3ceau"):
		case joaat("hs3reau"):
		case joaat("hs3fiau"):
		case joaat("hs3mnau"):
		case joaat("hs3vnau"):
		case joaat("ccycaud"):
			return 1;
		
		default:
	}
	switch (iParam0)
	{
		case 1971768146:
		case joaat("hs4paau"):
		case -519616352:
		case 718322585:
		case joaat("hs4edau"):
		case joaat("hs4bpau"):
		case joaat("hs4moau"):
		case joaat("hs4piau"):
		case joaat("hs4fiau"):
		case joaat("h4scpau"):
		case joaat("hs4faud"):
		case joaat("hs4csau"):
		case joaat("hs4psau"):
		case joaat("tnssaud"):
		case joaat("tnmmaud"):
		case joaat("tnrpaud"):
		case joaat("tnfudau"):
		case joaat("tnfmcau"):
		case joaat("tnfiaau"):
		case joaat("tnfftau"):
		case joaat("tnfboau"):
		case joaat("tnfflau"):
		case joaat("tnfbkau"):
		case joaat("tnfmhau"):
		case joaat("tnfbbau"):
		case joaat("tncutau"):
		case joaat("tnheaud"):
		case joaat("tnaraud"):
		case joaat("tumsaud"):
		case joaat("tncsbau"):
		case joaat("lowcaau"):
		case joaat("lcau"):
		case joaat("fxdl0au"):
		case joaat("fxdl1au"):
		case joaat("fxdl2au"):
		case joaat("fxdl3au"):
		case joaat("fxdl4au"):
		case joaat("fxdl5au"):
		case joaat("fxflaud"):
		case joaat("fxfraud"):
		case joaat("fximaud"):
		case joaat("fxlmaud"):
		case joaat("fxbaaud"):
		case joaat("fxfaaud"):
		case joaat("fxcutau"):
		case joaat("fxigaud"):
		case -1018917633:
		case 1332392277:
		case -1889985881:
		case -1536828534:
		case -580715848:
		case -947428706:
		case -790967848:
		case 1475512972:
		case -9119060:
		case 1748914928:
		case -105714609:
		case -1463539315:
		case 1194496889:
		case -147438928:
		case 494169967:
		case 549653660:
		case 39587133:
		case 1013082963:
		case 952237143:
		case 1073149438:
		case 391502992:
		case -1192647115:
		case 1657711155:
		case 1404758415:
		case -675588129:
		case -1333870039:
		case -266249619:
		case 1616674547:
		case -1250679862:
		case -158239083:
		case -1990606476:
		case 979781164:
		case 438323893:
		case -959327640:
		case 690539531:
		case -1415949907:
		case -664409440:
		case 1563674548:
		case 384471949:
		case 505411200:
		case 1293627226:
		case 41616433:
		case -1447946034:
		case -1219032008:
		case 1035385642:
		case 1835084155:
		case -1402743508:
		case -705242143:
		case -701364348:
		case 65148540:
		case -2014413289:
		case 918679880:
		case 1312667164:
		case 1526675260:
		case 1211110589:
		case 1269670038:
		case 1692871935:
		case -90893584:
		case -2011752699:
		case 1990037697:
		case 349249063:
		case -1398692094:
		case -1257187312:
		case -574963840:
		case -528969183:
		case -1953444711:
		case -20633169:
		case 970669097:
		case -1055931712:
		case 628035369:
		case 1533580315:
		case 1497733042:
		case -439597935:
		case -1631955389:
		case 1812234530:
		case -641922311:
		case -446323518:
		case 610923147:
		case -816503446:
		case 1031298094:
		case 538011501:
		case -18813066:
		case -1789859163:
		case -964674556:
		case 351113158:
		case 1064503054:
		case 1867351787:
		case -1540493332:
		case -1323542839:
		case -1536616058:
		case -543498493:
		case -1528130358:
		case -1920403702:
			return 1;
		
		default:
	}
	switch (iParam0)
	{
		case 1963111590:
		case 893382214:
		case 1828935909:
		case 1141665097:
		case 939417880:
		case 69987100:
		case -388053593:
		case 2137344685:
		case -1842069509:
		case -1138191436:
		case 45597590:
		case -1897880679:
		case 725490003:
		case 691071954:
			return 1;
		
		default:
	}
	switch (iParam0)
	{
		case 1700614160:
		case -1144188720:
		case 18964112:
		case 1710003796:
		case -117207971:
		case -1233112183:
		case -422294248:
			return 1;
		
		default:
	}
	return 0;
}

int func_107()
{
	if (Global_2883694)
	{
		if (func_22(0))
		{
			if (Global_3407872 || func_108(0))
			{
				return 1;
			}
		}
	}
	if (Global_2883693)
	{
		if (func_22(0))
		{
			if (Global_3932160 || func_108(0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_108(bool bParam0)
{
	if (!bParam0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return BitTest(Global_80586, 0);
}

int func_109(int iParam0)
{
	if (iParam0 && Global_1575066)
	{
		if (func_110())
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	return Global_1575066;
}

int func_110()
{
	if (func_111())
	{
		return 1;
	}
	return Global_1575069;
	return 0;
}

int func_111()
{
	if (Global_1575066 || Global_1575073)
	{
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("fm_deathmatch_controler")) != 0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_112()
{
	return (MISC::IS_DURANGO_VERSION() || MISC::IS_SCARLETT_VERSION());
}

bool func_113()
{
	return (MISC::IS_ORBIS_VERSION() || MISC::IS_PROSPERO_VERSION());
}

void func_114()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	if (func_113() || func_112())
	{
		if (Global_1835550 == 1)
		{
			iVar0 = 1;
		}
		else
		{
			iVar0 = 2;
		}
	}
	iVar1 = 0;
	if (Global_80337)
	{
		if (Global_1835550 == 0)
		{
			iVar1 = 1;
		}
	}
	else if (!func_107())
	{
		iVar1 = 1;
	}
	if (HUD::DOES_TEXT_BLOCK_EXIST(&Global_23099))
	{
		if (MISC::ARE_STRINGS_EQUAL(&Global_23099, "CT_AUD"))
		{
			Global_2883586 = 1;
		}
	}
	if (func_106(MISC::GET_HASH_KEY(&Global_23099)))
	{
		iVar1 = 0;
		Global_2883586 = 0;
		iVar0 = 1;
	}
	if (((Global_23025 < 5 || Global_23025 == 10) || Global_23025 == 12) || Global_23025 == 13)
	{
		if ((iVar1 == 1 || Global_2883586 == 1) || iVar0 == 2)
		{
			HUD::REQUEST_ADDITIONAL_TEXT(&Global_23099, 7);
			while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(7))
			{
				SYSTEM::WAIT(0);
			}
		}
		else
		{
			HUD::REQUEST_ADDITIONAL_TEXT_FOR_DLC(&Global_23099, 15);
			while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(15))
			{
				SYSTEM::WAIT(0);
			}
		}
	}
	else if ((iVar1 == 1 || Global_2883586 == 1) || iVar0 == 2)
	{
		HUD::REQUEST_ADDITIONAL_TEXT(&Global_23099, 6);
		while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(6))
		{
			SYSTEM::WAIT(0);
		}
	}
	else
	{
		HUD::REQUEST_ADDITIONAL_TEXT_FOR_DLC(&Global_23099, 14);
		while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(14))
		{
			SYSTEM::WAIT(0);
		}
	}
	AUDIO::CREATE_NEW_SCRIPTED_CONVERSATION();
	func_102();
}

void func_115()
{
	while (Global_21632 == 1 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand")) > 0)
	{
		SYSTEM::WAIT(0);
	}
	Global_21632 = 0;
	if (BitTest(Global_9502, 20))
	{
		MISC::SET_BIT(&Global_9503, 1);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_9503, 1);
	}
	Global_21633 = 0;
	if (Global_23019 == 0)
	{
		if (!Global_23036)
		{
			func_101();
		}
	}
	else
	{
		func_82();
	}
	Global_21890 = 0;
	if (Global_23033)
	{
		if (Global_24040 == 0)
		{
			if (Global_23036 == 0)
			{
				iLocal_51 = 5000;
				AUDIO::PRELOAD_SCRIPT_PHONE_CONVERSATION(Global_22642.f_368, Global_22642.f_369);
			}
			else
			{
				iLocal_51 = 0;
			}
		}
		else
		{
			iLocal_51 = 0;
		}
		Global_21890 = 1;
		SYSTEM::SETTIMERB(0);
		while ((Global_21890 == 1 && Global_23023 == 1) && SYSTEM::TIMERB() < iLocal_51)
		{
			SYSTEM::WAIT(0);
			if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				Global_21890 = 0;
				AUDIO::STOP_SCRIPTED_CONVERSATION(false);
				Global_23023 = 6;
			}
			if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
			{
				if (AUDIO::GET_IS_PRELOADED_CONVERSATION_READY())
				{
					Global_21890 = 0;
				}
			}
		}
		if (SYSTEM::TIMERB() > iLocal_51)
		{
		}
		if (Global_23023 != 1)
		{
		}
		if (Global_21890 == 0)
		{
		}
	}
	Global_21890 = 0;
	if (((Global_21649.f_1 == 1 || Global_21649.f_1 == 0) || Global_23023 != 1) || Global_21615 == 1)
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		Global_23023 = 6;
	}
	else
	{
		if (Global_23031)
		{
			Global_24041 = 0;
			iLocal_49 = 0;
		}
		if (Global_23033 == 0)
		{
			if (Global_23074 == 0)
			{
				Global_21651 = Global_21649.f_1;
				Global_23074 = 1;
			}
			iLocal_47 = 0;
			if (Global_24040 == 0)
			{
				AUDIO::PRELOAD_SCRIPT_PHONE_CONVERSATION(Global_22642.f_368, Global_22642.f_369);
				SYSTEM::WAIT(0);
				Global_23023 = 3;
				Global_21890 = 1;
				SYSTEM::SETTIMERB(0);
				MISC::SET_BIT(&Global_9502, 27);
				SYSTEM::SETTIMERA(0);
			}
			else
			{
				Global_21890 = 0;
				Global_23023 = 4;
			}
			Global_21648 = 0;
			if (Global_23034 == 1)
			{
				if (Global_21649.f_1 == 10)
				{
				}
				if (!Global_21649.f_1 == 9)
				{
					if (Global_21649.f_1 > 4)
					{
						if (Global_21632 == 0)
						{
							Global_21649.f_1 = 9;
							func_8();
						}
					}
					else
					{
						Global_21649.f_1 = 4;
					}
				}
				else
				{
					func_8();
				}
			}
			else
			{
				while (Global_21649.f_1 == 4)
				{
					SYSTEM::WAIT(0);
					if (Global_21890 == 1)
					{
						if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
						{
							if (AUDIO::GET_IS_PRELOADED_CONVERSATION_READY())
							{
								Global_21890 = 0;
							}
						}
					}
				}
				if (Global_21649.f_1 == 6)
				{
				}
				if (Global_21649.f_1 == 10)
				{
				}
				if (Global_21649.f_1 == 3)
				{
					AUDIO::STOP_SCRIPTED_CONVERSATION(false);
					Global_23023 = 6;
					Global_21633 = 1;
					return;
				}
				Global_21649.f_1 = 9;
				func_8();
			}
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				iLocal_118 = NETWORK::GET_NETWORK_TIME();
			}
			else
			{
				iLocal_116 = MISC::GET_GAME_TIMER();
			}
			while (Global_21649.f_1 != 9 && Global_21632 == 0)
			{
				SYSTEM::WAIT(0);
				if (Global_21890 == 1)
				{
					if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
					{
						if (AUDIO::GET_IS_PRELOADED_CONVERSATION_READY())
						{
							Global_21890 = 0;
						}
					}
				}
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					iLocal_125 = NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), iLocal_118);
				}
				else
				{
					iLocal_117 = MISC::GET_GAME_TIMER();
					iLocal_125 = (iLocal_117 - iLocal_116);
				}
				if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand")) == 0)
				{
					if (iLocal_125 > 15000)
					{
						Global_24039 = 1;
						Global_21632 = 1;
					}
				}
			}
			if (!BitTest(Global_9502, 11))
			{
				if (func_56() == 0)
				{
					func_69();
				}
			}
			if (Global_21632 == 0)
			{
				if (!Global_24040 == 0)
				{
					Global_23080 = 0;
					func_75();
					func_74();
					if (!Global_23036)
					{
						if (Global_24040 == 0)
						{
							AUDIO::START_PRELOADED_CONVERSATION();
						}
						else
						{
							AUDIO::START_SCRIPT_PHONE_CONVERSATION(Global_22642.f_368, Global_22642.f_369);
						}
					}
					func_73();
				}
			}
			else
			{
				func_116();
				Global_21633 = 1;
			}
		}
		else
		{
			Global_21648 = 1;
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					if (Global_21649.f_1 == 3)
					{
					}
				}
				else
				{
					MISC::CLEAR_BIT(&Global_9503, 21);
				}
			}
			if (Global_23074 == 0)
			{
				Global_21651 = Global_21649.f_1;
				Global_23074 = 1;
			}
			if (Global_21649.f_1 == 3)
			{
				Global_21649.f_1 = 4;
			}
			else
			{
				while (Global_21649.f_1 == 4)
				{
					SYSTEM::WAIT(0);
				}
				if (Global_21649.f_1 == 6)
				{
				}
				Global_21649.f_1 = 9;
				func_8();
			}
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				iLocal_118 = NETWORK::GET_NETWORK_TIME();
			}
			else
			{
				iLocal_116 = MISC::GET_GAME_TIMER();
			}
			while (Global_21649.f_1 != 9 && Global_21632 == 0)
			{
				SYSTEM::WAIT(0);
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					iLocal_125 = NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), iLocal_118);
				}
				else
				{
					iLocal_117 = MISC::GET_GAME_TIMER();
					iLocal_125 = (iLocal_117 - iLocal_116);
				}
				if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand")) == 0)
				{
					if (iLocal_125 > 20000)
					{
						Global_24039 = 1;
						Global_21632 = 1;
						MISC::CLEAR_BIT(&Global_9503, 21);
					}
				}
			}
			if (Global_21632 == 0)
			{
				Global_23023 = 2;
			}
			else
			{
				func_116();
				Global_21633 = 1;
			}
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				iLocal_112 = NETWORK::GET_NETWORK_TIME();
				iLocal_115 = NETWORK::GET_NETWORK_TIME();
			}
			else
			{
				iLocal_110 = MISC::GET_GAME_TIMER();
				iLocal_113 = MISC::GET_GAME_TIMER();
			}
		}
	}
}

void func_116()
{
	Global_21889 = 0;
	func_121();
}

void func_117()
{
	float fVar0;
	
	fVar0 = func_118(Global_21602[Global_21594 /*3*/], Global_21595[Global_21594 /*3*/], Global_21609, Global_21580, 350f, 0);
	if (fVar0 >= 1f)
	{
		if (Global_24037 == 0)
		{
			HUD::DISPLAY_RADAR(true);
		}
		iLocal_49 = 0;
	}
}

float func_118(struct<3> Param0, struct<3> Param3, struct<3> Param6, struct<3> Param9, float fParam12, bool bParam13)
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
	if (func_56() && Global_4525202 == 0)
	{
		return 2f;
	}
	if (iLocal_35 == 0)
	{
		iLocal_35 = MISC::GET_GAME_TIMER();
	}
	fVar3 = func_120((SYSTEM::TO_FLOAT((MISC::GET_GAME_TIMER() - iLocal_35)) / fParam12), 0f, 1f);
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
		Global_21577 = { func_119(Param0, Param3, fVar4) };
		Global_21580 = { func_119(Param6, Param9, fVar4) };
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

Vector3 func_119(struct<3> Param0, struct<3> Param3, float fParam6)
{
	return Param0 + Param3 - Param0 * Vector(fParam6, fParam6, fParam6);
}

float func_120(float fParam0, float fParam1, float fParam2)
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

void func_121()
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_24034 = 0;
	if ((AUDIO::IS_MOBILE_PHONE_CALL_ONGOING() || Global_21649.f_1 == 9) || Global_21648 == 1)
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		Global_23023 = 6;
		Global_21649.f_1 = 3;
		return;
	}
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(true);
		Global_23023 = 6;
		return;
	}
}

bool func_122()
{
	return BitTest(Global_4718592.f_189724, 12);
}

bool func_123(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_50(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_23030 = 0;
	Global_23032 = 0;
	Global_23037 = 0;
	Global_24014 = 0;
	Global_24016 = 0;
	Global_24020 = 0;
	Global_2883585 = 0;
	return func_124(sParam2, iParam3, 0);
}

int func_124(char* sParam0, int iParam1, bool bParam2)
{
	Global_23024 = 0;
	if (Global_23023 == 0 || Global_23025 == 2)
	{
		if (Global_23023 != 0)
		{
			if (iParam1 > Global_23025)
			{
				if (Global_23030 == 0)
				{
					AUDIO::STOP_SCRIPTED_CONVERSATION(false);
					Global_21649.f_1 = 3;
					Global_23023 = 0;
					Global_23024 = 1;
					Global_23076 = 0;
					Global_23019 = 0;
					Global_23020 = 0;
					Global_23034 = 0;
					Global_23033 = 0;
					Global_21648 = 0;
				}
				else
				{
					func_121();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
		{
			return 0;
		}
		if (func_46(8, -1))
		{
			return 0;
		}
		Global_23099 = { Global_23093 };
		func_45();
		Global_22312 = { Global_22477 };
		Global_23029 = Global_23030;
		Global_23036 = Global_23037;
		Global_2883586 = Global_2883585;
		Global_23038 = { Global_23054 };
		Global_23031 = Global_23032;
		Global_24013 = Global_24014;
		Global_24021 = { Global_24027 };
		Global_24015 = Global_24016;
		Global_24017 = Global_24018;
		Global_24019 = Global_24020;
		Global_22642.f_370 = Global_24012;
		Global_22642.f_368 = Global_24010;
		Global_22642.f_369 = Global_24011;
		Global_23019 = Global_23020;
		if (Global_23029)
		{
			MISC::CLEAR_BIT(&Global_9502, 20);
			MISC::CLEAR_BIT(&Global_9503, 17);
			MISC::CLEAR_BIT(&Global_9504, 0);
			if (bParam2)
			{
				func_38();
				if (Global_10324[Global_21649 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_21649.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_21615 == 1)
			{
				return 0;
			}
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (func_37())
				{
					return 0;
				}
				if (TASK::IS_PED_SPRINTING(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (PED::IS_PED_IN_PARACHUTE_FREE_FALL(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (WEAPON::GET_IS_PED_GADGET_EQUIPPED(PLAYER::PLAYER_PED_ID(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_80337)
				{
					if (ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID()))
					{
						return 0;
					}
					if (PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()))
					{
						return 0;
					}
					if (PED::IS_PED_PLANTING_BOMB(PLAYER::PLAYER_PED_ID()))
					{
						return 0;
					}
					if (PLAYER::IS_SPECIAL_ABILITY_ACTIVE(PLAYER::PLAYER_ID(), 0))
					{
						return 0;
					}
				}
			}
			if (func_36())
			{
				return 0;
			}
			else
			{
				switch (Global_21649.f_1)
				{
					case 7:
						return 0;
						break;
					
					case 8:
						return 0;
						break;
					
					case 9:
						break;
					
					case 10:
						break;
					
					default:
						break;
				}
				if (BitTest(Global_9502, 9))
				{
					return 0;
				}
			}
			func_35();
			Global_23033 = bParam2;
		}
		Global_23025 = iParam1;
		StringCopy(&Global_22642, sParam0, 24);
		Global_21889 = 0;
		func_61();
		func_125();
		return 1;
	}
	if (Global_23023 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_23025 || iParam1 == Global_23025)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_121();
	}
	return 0;
}

void func_125()
{
	if (!func_126())
	{
		return;
	}
	if (Global_23029)
	{
		MemCopy(&(Global_1979099.f_1), {Global_22642}, 4);
		Global_1979099 = Global_8817;
		Global_1979099.f_6 = Global_23033;
	}
}

int func_126()
{
	if (!Global_262145.f_28486)
	{
		return 0;
	}
	if (!Global_80337)
	{
		return 0;
	}
	if (PLAYER::PLAYER_ID() == func_130())
	{
		return 0;
	}
	if (func_127(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (BitTest(Global_1892925[PLAYER::PLAYER_ID() /*615*/].f_1, 7))
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 0;
	}
	return 1;
}

int func_127(int iParam0)
{
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		if (func_129(8))
		{
			return 1;
		}
		if (Global_2733190.f_5975.f_1 > 0)
		{
			return 1;
		}
	}
	return func_128(iParam0, 20);
}

var func_128(int iParam0, int iParam1)
{
	return BitTest(Global_1892925[iParam0 /*615*/].f_10.f_4, iParam1);
}

bool func_129(int iParam0)
{
	return BitTest(Global_2733190.f_5964, iParam0);
}

int func_130()
{
	return -1;
}

int func_131()
{
	if (Global_23023 != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return 1;
	}
	return 0;
}

void func_132(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)
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

