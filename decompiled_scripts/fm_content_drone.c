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
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	float fLocal_40 = 0f;
	float fLocal_41 = 0f;
	float fLocal_42 = 0f;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	float fLocal_45 = 0f;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	float fLocal_49 = 0f;
	float fLocal_50 = 0f;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	int iLocal_53 = 0;
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
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	float fLocal_80 = 0f;
	var uLocal_81 = 0;
	float fLocal_82 = 0f;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
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
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	var uLocal_130 = 0;
	var uLocal_131 = 0;
	var uLocal_132 = 0;
	struct<3> Local_133[32];
	var uLocal_230 = 0;
	struct<357> Local_231 = { 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1069547520, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_588 = 0;
	var uLocal_589 = 0;
	var uLocal_590 = 0;
	var uLocal_591 = 0;
	var uLocal_592 = 0;
	struct<4> Local_593 = { 0, 0, 0, 0 } ;
	struct<10> Local_597 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_607 = 0;
	bool bLocal_608 = 0;
	bool bLocal_609 = 0;
	struct<16> ScriptParam_0 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	fLocal_40 = 80f;
	fLocal_41 = 140f;
	fLocal_42 = 180f;
	fLocal_45 = 0f;
	fLocal_49 = -0.0375f;
	fLocal_50 = 0.17f;
	iLocal_53 = 3;
	iLocal_57 = 1;
	iLocal_58 = 65;
	iLocal_59 = 49;
	iLocal_60 = 64;
	fLocal_80 = ((0.05f + 0.275f) - 0.01f);
	fLocal_82 = 0f;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_448(ScriptParam_0);
	}
	else
	{
		func_402(0);
	}
	func_397(1, 1);
	while (true)
	{
		func_396();
		if (func_383())
		{
			func_402(0);
		}
		func_2();
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			func_1();
		}
	}
}

void func_1()
{
}

void func_2()
{
	bLocal_608 = func_376(&bLocal_609);
	func_375();
	func_370();
	func_368();
	func_366();
	switch (func_365())
	{
		case 0:
			func_364(1);
			break;
		
		case 1:
			if (!func_362())
			{
				func_349();
				if (func_321())
				{
					func_364(4);
				}
			}
			else
			{
				func_319(1);
				func_364(7);
			}
			break;
		
		case 4:
			func_318();
			func_317(&Local_231);
			func_316(&Local_231);
			func_315();
			func_301();
			func_292();
			func_290();
			func_267();
			if (bLocal_608)
			{
				if (bLocal_609)
				{
					func_262(0);
					func_261();
					func_220();
				}
				return;
			}
			func_213();
			func_199(0);
			func_181();
			func_170();
			func_156();
			func_154();
			func_220();
			func_138();
			func_96();
			func_62();
			func_60();
			break;
		
		case 5:
			func_9();
			break;
		
		case 7:
			func_5();
			break;
	}
	func_4();
	func_3();
}

void func_3()
{
	Local_231.f_47++;
	if (Local_231.f_47 >= 32)
	{
		Local_231.f_47 = 0;
	}
}

void func_4()
{
	if (Local_231.f_47 != -1)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_133[Local_231.f_47 /*3*/].f_2))
		{
			if (Global_1912667[PLAYER::PLAYER_ID() /*318*/].f_68[Local_231.f_47] != NETWORK::NET_TO_OBJ(Local_133[Local_231.f_47 /*3*/].f_2))
			{
				Global_1912667[PLAYER::PLAYER_ID() /*318*/].f_68[Local_231.f_47] = NETWORK::NET_TO_OBJ(Local_133[Local_231.f_47 /*3*/].f_2);
			}
		}
	}
}

void func_5()
{
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_231.f_163))
	{
		if (func_7(Local_231.f_163))
		{
			if (!func_6())
			{
				func_402(1);
			}
			else
			{
				func_402(0);
			}
		}
	}
	else if (!func_6())
	{
		func_402(1);
	}
	else
	{
		func_402(0);
	}
}

int func_6()
{
	return 1;
}

int func_7(int iParam0)
{
	if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(iParam0) || (!NETWORK::IS_NETWORK_ID_OWNED_BY_PARTICIPANT(iParam0) && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()))
	{
		if (func_8(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_8(int iParam0)
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iParam0))
	{
		NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(iParam0);
		return NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(iParam0);
	}
	return 0;
}

void func_9()
{
	int iVar0;
	
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
	HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
	PAD::DISABLE_CONTROL_ACTION(0, 199, true);
	PAD::DISABLE_CONTROL_ACTION(0, 200, true);
	func_261();
	func_58();
	func_262(1);
	if (!BitTest(Local_231.f_5, 1))
	{
		if (!func_57())
		{
			if (!func_19() && !func_18())
			{
				if ((func_17() || func_16()) || func_15())
				{
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
				}
			}
		}
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_231.f_163))
		{
			ENTITY::SET_ENTITY_HAS_GRAVITY(NETWORK::NET_TO_OBJ(Local_231.f_163), true);
		}
		if (!BitTest(Global_1964670.f_4, 24))
		{
			if (AUDIO::HAS_SOUND_FINISHED(Local_231.f_36))
			{
				Local_231.f_36 = AUDIO::GET_SOUND_ID();
				AUDIO::PLAY_SOUND_FRONTEND(Local_231.f_36, "HUD_Static_Loop", Local_231.f_161, true);
			}
		}
		if (!func_14())
		{
			PAD::SET_CONTROL_SHAKE(0, 300, 100);
			if (!BitTest(Global_1964670.f_4, 17))
			{
				GRAPHICS::SET_TIMECYCLE_MODIFIER(func_13());
				MISC::SET_BIT(&(Local_231.f_6), 0);
			}
		}
		MISC::SET_BIT(&(Local_231.f_5), 1);
	}
	else if (!func_12(&(Local_231.f_249)))
	{
		func_11(&(Local_231.f_249), 0, 0);
	}
	else
	{
		iVar0 = 1000;
		if (func_10(&(Local_231.f_249), iVar0, 0) || func_14())
		{
			if (!BitTest(Global_1964670.f_4, 24))
			{
				if (Local_231.f_40 == -1)
				{
					if (AUDIO::HAS_SOUND_FINISHED(Local_231.f_40))
					{
						Local_231.f_40 = AUDIO::GET_SOUND_ID();
						AUDIO::PLAY_SOUND_FRONTEND(Local_231.f_40, "HUD_Disconnect", Local_231.f_161, true);
					}
				}
			}
			func_319(1);
			func_364(7);
		}
	}
}

int func_10(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_11(uParam0, bParam2, 0);
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam2)
	{
		if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_11(var uParam0, bool bParam1, bool bParam2)
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

bool func_12(var uParam0)
{
	return uParam0->f_1;
}

char* func_13()
{
	return "RemixDrone";
}

bool func_14()
{
	return BitTest(Global_1964670, 20);
}

var func_15()
{
	return BitTest(Global_1964670.f_2, 3);
}

bool func_16()
{
	return BitTest(Global_1964670.f_2, 2);
}

var func_17()
{
	return BitTest(Global_1964670, 11);
}

bool func_18()
{
	return Global_2709090;
}

int func_19()
{
	if ((func_56(PLAYER::PLAYER_ID(), 0) && Global_1579264 == 1) && func_20())
	{
		return 1;
	}
	return 0;
}

int func_20()
{
	char* sVar0;
	
	if ((Global_1579264 != -1 || Global_1579270 != -1) || Global_1579273 != -1)
	{
		sVar0 = "anim@scripted@submarine@ig28_submarine_turret_control@male@";
		if (func_48(PLAYER::PLAYER_PED_ID()))
		{
			sVar0 = "anim@scripted@submarine@ig28_submarine_turret_control@heeled@";
		}
		if ((((((((ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "enter", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "enter_left", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "exit", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "exit_left", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), sVar0, "enter_left", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), sVar0, "enter", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), sVar0, "exit", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), sVar0, "exit_left", 3)) || func_45(PLAYER::PLAYER_PED_ID(), joaat("script_task_go_straight_to_coord")))
		{
			return 0;
		}
		if (((((((((!ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "base", 3) && !ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "computer_enter", 3)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "computer_exit", 3)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "COMPUTER_idle", 3)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "COMPUTER_idle_control", 3)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "COMPUTER_enter_control", 3)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), sVar0, "base", 3)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), sVar0, "idle_a", 3)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), sVar0, "idle_b", 3)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), sVar0, "idle_c", 3))
		{
			return 0;
		}
		if (func_21())
		{
			return 0;
		}
	}
	return 1;
}

int func_21()
{
	int iVar0;
	
	if (func_44(PLAYER::PLAYER_ID()))
	{
		iVar0 = func_43(PLAYER::PLAYER_ID());
		if (func_42(iVar0, 0, 1))
		{
			if ((((((func_41(iVar0) && func_39(func_40(iVar0)) == 4) && ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iVar0))) && !PED::IS_PED_INJURED(PLAYER::GET_PLAYER_PED(iVar0))) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::GET_PLAYER_PED(iVar0), false)) && ENTITY::DOES_ENTITY_EXIST(PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(iVar0), false))) && func_38(PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(iVar0), false)))
			{
				return 1;
			}
			if (!func_37(Global_4718592.f_132931))
			{
				if (func_44(iVar0))
				{
					if (func_36(iVar0))
					{
						return 1;
					}
					else if (func_41(PLAYER::PLAYER_ID()) || func_35())
					{
						return 1;
					}
				}
			}
		}
	}
	if (func_34(8))
	{
		if (Global_1574983)
		{
			return 1;
		}
	}
	else if (Global_1964705)
	{
		return 1;
	}
	if (func_33(PLAYER::PLAYER_ID()) && BitTest(Global_1575013, 12))
	{
		return 1;
	}
	if (func_32(PLAYER::PLAYER_ID()))
	{
		iVar0 = func_31(PLAYER::PLAYER_ID());
		if (func_42(iVar0, 0, 1))
		{
			if ((((((func_41(iVar0) && func_39(func_40(iVar0)) == 9) && ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iVar0))) && !PED::IS_PED_INJURED(PLAYER::GET_PLAYER_PED(iVar0))) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::GET_PLAYER_PED(iVar0), false)) && ENTITY::DOES_ENTITY_EXIST(PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(iVar0), false))) && ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(iVar0), false)) == joaat("avenger"))
			{
				return 1;
			}
			if (func_30(iVar0))
			{
				return 1;
			}
			else if (func_29(iVar0))
			{
				return 1;
			}
			else if (func_41(PLAYER::PLAYER_ID()) || func_35())
			{
				return 1;
			}
		}
	}
	if (func_56(PLAYER::PLAYER_ID(), 0))
	{
		iVar0 = func_28(PLAYER::PLAYER_ID());
		if (func_42(iVar0, 0, 1))
		{
			if ((func_41(iVar0) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::GET_PLAYER_PED(iVar0), false)) && VEHICLE::IS_VEHICLE_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(iVar0), false), joaat("terbyte")))
			{
				return 1;
			}
			else if ((func_27(iVar0) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::GET_PLAYER_PED(iVar0), false)) && VEHICLE::IS_VEHICLE_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(iVar0), false), joaat("terbyte")))
			{
				return 1;
			}
			else if (func_26(iVar0))
			{
				return 1;
			}
			else if (func_25(iVar0))
			{
				return 1;
			}
			else if (func_41(PLAYER::PLAYER_ID()) || func_35())
			{
				return 1;
			}
		}
	}
	if (func_24(PLAYER::PLAYER_ID()))
	{
		if (PLAYER::PLAYER_ID() != func_23())
		{
			iVar0 = Global_2658293[PLAYER::PLAYER_ID() /*468*/].f_325.f_11;
			if (func_42(iVar0, 0, 1))
			{
				if (func_41(PLAYER::PLAYER_ID()) || func_35())
				{
					return 1;
				}
			}
		}
	}
	if (func_32(PLAYER::PLAYER_ID()) || func_33(PLAYER::PLAYER_ID()))
	{
		switch (Global_1579270)
		{
			case 1:
				if (Global_262145.f_22829)
				{
					return 1;
				}
				break;
			
			case 2:
				if (Global_262145.f_22830)
				{
					return 1;
				}
				break;
			
			case 3:
				if (Global_262145.f_22831)
				{
					return 1;
				}
				break;
			}
	}
	if (Global_1579268 == 1)
	{
		return 1;
	}
	if (func_22(3))
	{
		if (Global_1835554 == 186)
		{
			if (Global_1836787 != 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_22(int iParam0)
{
	return Global_262145.f_4708[iParam0] == Global_4718592.f_132931;
}

int func_23()
{
	return -1;
}

int func_24(int iParam0)
{
	if (iParam0 != func_23())
	{
		if (func_42(iParam0, 1, 1))
		{
			if (Global_2658293[iParam0 /*468*/].f_325.f_8 != -1 && Global_2658293[iParam0 /*468*/].f_325.f_11 != func_23())
			{
				return func_39(Global_2658293[iParam0 /*468*/].f_325.f_8) == 20;
			}
		}
	}
	return 0;
}

int func_25(int iParam0)
{
	if (iParam0 != func_23())
	{
		return BitTest(Global_2658293[iParam0 /*468*/].f_325.f_7, 15);
	}
	return 0;
}

int func_26(int iParam0)
{
	if (iParam0 != func_23())
	{
		return BitTest(Global_2658293[iParam0 /*468*/].f_325.f_3, 4);
	}
	return 0;
}

int func_27(int iParam0)
{
	if (iParam0 != func_23())
	{
		return BitTest(Global_2658293[iParam0 /*468*/].f_325.f_7, 19);
	}
	return 0;
}

int func_28(int iParam0)
{
	if (iParam0 == func_23())
	{
		return iParam0;
	}
	return Global_2658293[iParam0 /*468*/].f_325.f_11;
}

int func_29(int iParam0)
{
	if (iParam0 != func_23())
	{
		return BitTest(Global_2658293[iParam0 /*468*/].f_325.f_6, 16);
	}
	return 0;
}

int func_30(int iParam0)
{
	if (iParam0 != func_23())
	{
		return BitTest(Global_2658293[iParam0 /*468*/].f_325.f_2, 6);
	}
	return 0;
}

int func_31(int iParam0)
{
	if (iParam0 == func_23())
	{
		return iParam0;
	}
	return Global_2658293[iParam0 /*468*/].f_325.f_11;
}

int func_32(int iParam0)
{
	if (iParam0 != func_23())
	{
		if (func_42(iParam0, 1, 1))
		{
			if (Global_2658293[iParam0 /*468*/].f_325.f_8 != -1 && Global_2658293[iParam0 /*468*/].f_325.f_11 != func_23())
			{
				return func_39(Global_2658293[iParam0 /*468*/].f_325.f_8) == 8;
			}
		}
	}
	return 0;
}

int func_33(int iParam0)
{
	if (iParam0 != func_23())
	{
		if (func_42(iParam0, 1, 1))
		{
			if (Global_2658293[iParam0 /*468*/].f_325.f_8 != -1)
			{
				return func_39(Global_2658293[iParam0 /*468*/].f_325.f_8) == 10;
			}
		}
	}
	return 0;
}

bool func_34(int iParam0)
{
	return Global_4718592.f_197292 >= iParam0;
}

var func_35()
{
	return BitTest(Global_1950702, 6);
}

int func_36(int iParam0)
{
	if (iParam0 != func_23())
	{
		return BitTest(Global_2658293[iParam0 /*468*/].f_325, 6);
	}
	return 0;
}

bool func_37(int iParam0)
{
	return Global_262145.f_4699[4] == iParam0;
}

int func_38(int iParam0)
{
	if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("hauler2") || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("phantom3"))
	{
		return 1;
	}
	return 0;
}

int func_39(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
			return 0;
			break;
		
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
			return 1;
			break;
		
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
			return 2;
			break;
		
		case 43:
		case 42:
		case 44:
		case 45:
		case 46:
		case 47:
		case 48:
		case 49:
		case 50:
		case 51:
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
		case 59:
		case 98:
		case 99:
		case 100:
		case 112:
		case 113:
		case 114:
		case 115:
		case 119:
		case 116:
		case 118:
		case 120:
		case 121:
		case 126:
		case 127:
		case 134:
		case 135:
		case 136:
		case 137:
		case 138:
		case 139:
		case 140:
		case 141:
		case 142:
		case 143:
		case 144:
			return 3;
			break;
		
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case 79:
		case 80:
			return 4;
			break;
		
		case 81:
			return 5;
			break;
		
		case 82:
			return 6;
			break;
		
		case 83:
		case 84:
		case 85:
		case 86:
		case 87:
			return 7;
			break;
		
		case 88:
			return 8;
			break;
		
		case 89:
		case 90:
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
			return 9;
			break;
		
		case 101:
			return 10;
			break;
		
		case 102:
		case 103:
		case 104:
		case 105:
		case 106:
		case 107:
		case 108:
		case 109:
		case 110:
		case 111:
			return 11;
			break;
		
		case 117:
			return 12;
			break;
		
		case 122:
			return 13;
			break;
		
		case 123:
			return 14;
			break;
		
		case 124:
			return 15;
			break;
		
		case 125:
			return 16;
			break;
		
		case 128:
		case 129:
		case 130:
		case 131:
		case 132:
		case 133:
			return 17;
			break;
		
		case 145:
			return 18;
			break;
		
		case 146:
			return 19;
			break;
		
		case 147:
			return 20;
			break;
		
		case 148:
			return 21;
			break;
		
		case 149:
		case 151:
		case 153:
		case 152:
		case 150:
			return 22;
			break;
		
		case 154:
			return 23;
			break;
		
		case 155:
		case 156:
		case 157:
		case 158:
			return 24;
			break;
		
		case 159:
			return 25;
			break;
		
		case 160:
			return 26;
			break;
		
		case 161:
			return 27;
			break;
		
		case 162:
		case 163:
		case 164:
		case 165:
		case 166:
			return 28;
			break;
		
		case 167:
		case 168:
		case 169:
		case 170:
		case 171:
			return 29;
			break;
		
		case 172:
			return 30;
			break;
		
		case 173:
			return 31;
			break;
		
		case 174:
		case 175:
		case 176:
			return 32;
			break;
		
		case 177:
		case 178:
		case 179:
			return 33;
			break;
	}
	return -1;
}

int func_40(int iParam0)
{
	if (iParam0 != func_23() && func_42(iParam0, 1, 1))
	{
		return Global_2658293[iParam0 /*468*/].f_325.f_18;
	}
	return -1;
}

int func_41(int iParam0)
{
	if (iParam0 != func_23() && func_42(iParam0, 1, 1))
	{
		return BitTest(Global_2658293[iParam0 /*468*/].f_325, 3);
	}
	return 0;
}

int func_42(int iParam0, bool bParam1, bool bParam2)
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

int func_43(int iParam0)
{
	if (iParam0 == func_23())
	{
		return iParam0;
	}
	return Global_2658293[iParam0 /*468*/].f_325.f_11;
}

int func_44(int iParam0)
{
	if (iParam0 != func_23())
	{
		if (func_42(iParam0, 1, 1))
		{
			if (Global_2658293[iParam0 /*468*/].f_325.f_8 != -1 && Global_2658293[iParam0 /*468*/].f_325.f_11 != func_23())
			{
				return func_39(Global_2658293[iParam0 /*468*/].f_325.f_8) == 5;
			}
		}
	}
	return 0;
}

int func_45(int iParam0, int iParam1)
{
	if (func_46(iParam0))
	{
		if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1) == 1 || TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_46(int iParam0)
{
	if (func_47(iParam0))
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_47(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
		{
			return 1;
		}
	}
	return 0;
}

int func_48(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	iVar2 = -1;
	iVar3 = -1;
	if (iVar0 == joaat("mp_f_freemode_01"))
	{
		iVar1 = func_54(iParam0, 6);
		if (iVar1 >= 256)
		{
			iVar2 = func_50(iVar0, iVar1, 6, 4);
			iVar3 = func_49(iVar2);
		}
		if (((((((((((((iVar1 >= 0 && iVar1 <= 15) || (iVar1 >= 96 && iVar1 <= 111)) || (iVar1 >= 112 && iVar1 <= 127)) || (iVar1 >= 128 && iVar1 <= 143)) || (iVar1 >= 192 && iVar1 <= 207)) || (iVar1 >= 224 && iVar1 <= 239)) || iVar3 == 0) || iVar3 == 6) || iVar3 == 7) || iVar3 == 8) || iVar3 == 12) || iVar3 == 14) || (iVar2 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("high_heels"), 0)))
		{
			return 1;
		}
	}
	return 0;
}

int func_49(int iParam0)
{
	int iVar0;
	
	iVar0 = -1;
	if (iParam0 == 0)
	{
		return iVar0;
	}
	if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("draw_0"), 0))
	{
		iVar0 = 0;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("draw_1"), 0))
	{
		iVar0 = 1;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("draw_2"), 0))
	{
		iVar0 = 2;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("draw_3"), 0))
	{
		iVar0 = 3;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("draw_4"), 0))
	{
		iVar0 = 4;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("draw_5"), 0))
	{
		iVar0 = 5;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("draw_6"), 0))
	{
		iVar0 = 6;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("draw_7"), 0))
	{
		iVar0 = 7;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("draw_8"), 0))
	{
		iVar0 = 8;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("draw_9"), 0))
	{
		iVar0 = 9;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("draw_10"), 0))
	{
		iVar0 = 10;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("draw_11"), 0))
	{
		iVar0 = 11;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("draw_12"), 0))
	{
		iVar0 = 12;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("draw_13"), 0))
	{
		iVar0 = 13;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("draw_14"), 0))
	{
		iVar0 = 14;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("draw_15"), 0))
	{
		iVar0 = 15;
	}
	return iVar0;
}

int func_50(int iParam0, int iParam1, int iParam2, int iParam3)
{
	struct<2> Var0;
	int iVar17;
	int iVar18;
	struct<2> Var19;
	int iVar36;
	int iVar37;
	
	if (iParam2 == 12)
	{
	}
	else if (iParam2 == 13)
	{
	}
	else if (iParam2 == 14)
	{
		FILES::INIT_SHOP_PED_PROP(&Var0);
		iVar17 = (iParam1 - func_53(iParam0));
		if (iVar17 < 0)
		{
			return -1;
		}
		iVar18 = FILES::SETUP_SHOP_PED_APPAREL_QUERY_TU(iParam3, 11, -1, true, -1, -1);
		if (iVar18 <= iVar17)
		{
			return -1;
		}
		FILES::GET_SHOP_PED_QUERY_PROP(iVar17, &Var0);
		return Var0.f_1;
	}
	else
	{
		FILES::INIT_SHOP_PED_COMPONENT(&Var19);
		iVar36 = (iParam1 - func_51(iParam0, func_52(iParam2)));
		if (iVar36 < 0)
		{
			return -1;
		}
		if ((iParam0 == Global_80270.f_26[iParam2] && iParam1 == Global_80270[iParam2]) && Global_80270.f_13[iParam2] != 0)
		{
			return Global_80270.f_13[iParam2];
		}
		iVar37 = FILES::SETUP_SHOP_PED_APPAREL_QUERY_TU(iParam3, 11, -1, false, -1, func_52(iParam2));
		if (iVar37 <= iVar36)
		{
			return -1;
		}
		FILES::GET_SHOP_PED_QUERY_COMPONENT(iVar36, &Var19);
		Global_80270.f_13[iParam2] = Var19.f_1;
		Global_80270[iParam2] = iParam1;
		Global_80270.f_26[iParam2] = iParam0;
		return Var19.f_1;
	}
	return -1;
}

int func_51(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 0:
					return 7;
					break;
				
				case 1:
					return 5;
					break;
				
				case 2:
					return 6;
					break;
				
				case 3:
					return 181;
					break;
				
				case 4:
					return 113;
					break;
				
				case 5:
					return 14;
					break;
				
				case 6:
					return 99;
					break;
				
				case 7:
					return 1;
					break;
				
				case 8:
					return 24;
					break;
				
				case 9:
					return 20;
					break;
				
				case 10:
					return 48;
					break;
				
				case 11:
					return 45;
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 5;
					break;
				
				case 2:
					return 21;
					break;
				
				case 3:
					return 318;
					break;
				
				case 4:
					return 117;
					break;
				
				case 5:
					return 7;
					break;
				
				case 6:
					return 134;
					break;
				
				case 7:
					return 1;
					break;
				
				case 8:
					return 77;
					break;
				
				case 9:
					return 12;
					break;
				
				case 10:
					return 53;
					break;
				
				case 11:
					return 63;
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 0:
					return 7;
					break;
				
				case 1:
					return 6;
					break;
				
				case 2:
					return 9;
					break;
				
				case 3:
					return 242;
					break;
				
				case 4:
					return 104;
					break;
				
				case 5:
					return 7;
					break;
				
				case 6:
					return 84;
					break;
				
				case 7:
					return 1;
					break;
				
				case 8:
					return 18;
					break;
				
				case 9:
					return 17;
					break;
				
				case 10:
					return 33;
					break;
				
				case 11:
					return 1;
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 26;
					break;
				
				case 2:
					return 91;
					break;
				
				case 3:
					return 16;
					break;
				
				case 4:
					return 256;
					break;
				
				case 5:
					return 9;
					break;
				
				case 6:
					return 256;
					break;
				
				case 7:
					return 92;
					break;
				
				case 8:
					return 241;
					break;
				
				case 9:
					return 46;
					break;
				
				case 10:
					return 7;
					break;
				
				case 11:
					return 237;
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 26;
					break;
				
				case 2:
					return 92;
					break;
				
				case 3:
					return 16;
					break;
				
				case 4:
					return 256;
					break;
				
				case 5:
					return 9;
					break;
				
				case 6:
					return 256;
					break;
				
				case 7:
					return 55;
					break;
				
				case 8:
					return 136;
					break;
				
				case 9:
					return 36;
					break;
				
				case 10:
					return 6;
					break;
				
				case 11:
					return 256;
					break;
			}
			break;
	}
	return -99;
}

int func_52(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 2:
			return 2;
			break;
		
		case 3:
			return 3;
			break;
		
		case 4:
			return 4;
			break;
		
		case 6:
			return 6;
			break;
		
		case 5:
			return 5;
			break;
		
		case 8:
			return 8;
			break;
		
		case 9:
			return 9;
			break;
		
		case 10:
			return 10;
			break;
		
		case 1:
			return 1;
			break;
		
		case 7:
			return 7;
			break;
		
		case 11:
			return 11;
			break;
	}
	return 0;
}

int func_53(int iParam0)
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			return 113;
			break;
		
		case joaat("player_one"):
			return 175;
			break;
		
		case joaat("player_two"):
			return 155;
			break;
	}
	switch (iParam0)
	{
		case joaat("mp_m_freemode_01"):
			return 327;
			break;
		
		case joaat("mp_f_freemode_01"):
			return 327;
			break;
	}
	return -99;
}

int func_54(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (((iParam1 == 12 || iParam1 == 13) || iParam1 == 14) || PED::IS_PED_INJURED(iParam0))
	{
		return -99;
	}
	iVar0 = func_52(iParam1);
	iVar1 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, iVar0);
	iVar2 = PED::GET_PED_TEXTURE_VARIATION(iParam0, iVar0);
	return func_55(iParam0, iVar1, iVar2, iParam1);
}

int func_55(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = func_52(iParam3);
	iVar1 = PED::GET_NUMBER_OF_PED_DRAWABLE_VARIATIONS(iParam0, iVar0);
	iVar3 = 0;
	while (iVar3 <= (iVar1 - 1))
	{
		if (iVar3 != iParam1)
		{
			iVar2 = (iVar2 + PED::GET_NUMBER_OF_PED_TEXTURE_VARIATIONS(iParam0, iVar0, iVar3));
		}
		else
		{
			iVar2 = (iVar2 + iParam2);
			return iVar2;
		}
		iVar3++;
	}
	return -99;
}

int func_56(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (bParam1)
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("terbyte"))
			{
				return 1;
			}
		}
	}
	if (iParam0 != func_23())
	{
		if (func_42(iParam0, 1, 1))
		{
			if (Global_2658293[iParam0 /*468*/].f_325.f_8 != -1 && Global_2658293[iParam0 /*468*/].f_325.f_11 != func_23())
			{
				return func_39(Global_2658293[iParam0 /*468*/].f_325.f_8) == 12;
			}
		}
	}
	return 0;
}

bool func_57()
{
	return BitTest(Global_1964670, 28);
}

void func_58()
{
	RECORDING::REPLAY_PREVENT_RECORDING_THIS_FRAME();
	func_59();
}

void func_59()
{
	Global_24430.f_134 = 1;
}

void func_60()
{
	int iVar0;
	struct<3> Var1;
	
	if (!BitTest(Global_1964670.f_4, 18))
	{
		return;
	}
	if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_231.f_163))
	{
		return;
	}
	iVar0 = NETWORK::NET_TO_ENT(Local_231.f_163);
	if (!func_47(iVar0))
	{
		return;
	}
	Var1 = { ENTITY::GET_ENTITY_COORDS(iVar0, true) };
	if (MISC::IS_BULLET_IN_AREA(Var1, 0.2f, false))
	{
		Local_231.f_121++;
		if (Local_231.f_121 >= 20)
		{
			func_61(&(Local_231.f_249));
			func_319(1);
			func_364(5);
			Local_231.f_121 = 0;
		}
	}
}

void func_61(var uParam0)
{
	uParam0->f_1 = 0;
}

void func_62()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_95())
	{
		return;
	}
	if ((BitTest(Local_231.f_5, 1) || func_80()) || func_79())
	{
		Local_231.f_18 = 0;
		Local_231.f_19 = 0;
		if (!BitTest(Local_231.f_6, 7))
		{
			MISC::SET_BIT(&(Local_231.f_6), 7);
		}
		return;
	}
	if (!func_79())
	{
		if (BitTest(Local_231.f_6, 7))
		{
			Local_231.f_18 = 100;
			MISC::CLEAR_BIT(&(Local_231.f_6), 7);
		}
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_231.f_163) && !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_OBJ(Local_231.f_163), false))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_231.f_163))
		{
			if ((CAM::DOES_CAM_EXIST(Local_231.f_173) && CAM::IS_CAM_RENDERING(Local_231.f_173)) && !BitTest(Local_231.f_5, 2))
			{
				if ((!BitTest(Local_231.f_5, 4) && !BitTest(Local_231.f_5, 3)) && !Local_231.f_160)
				{
					iVar0 = func_78(PAD::IS_USING_KEYBOARD_AND_MOUSE(0));
					if ((((PAD::IS_CONTROL_JUST_RELEASED(2, iVar0) || PAD::IS_DISABLED_CONTROL_JUST_RELEASED(2, iVar0)) && !BitTest(Local_231.f_6, 8)) && !BitTest(Local_231.f_6, 9)) && !func_77())
					{
						MISC::SET_BIT(&Global_1964670, 29);
						MISC::SET_BIT(&(Local_231.f_6), 9);
						if (BitTest(Local_231.f_5, 11) || BitTest(Local_231.f_5, 23))
						{
							Local_231.f_29++;
						}
					}
					func_73();
				}
				else if (func_12(&(Local_231.f_253)))
				{
					iVar1 = 3000;
					if (func_67(PLAYER::PLAYER_ID()) == 1)
					{
						iVar1 = 2000;
					}
					if (func_10(&(Local_231.f_253), iVar1, 0))
					{
						func_61(&(Local_231.f_253));
						Local_231.f_18 = 100;
						if (Local_231.f_34 != -1)
						{
							AUDIO::STOP_SOUND(Local_231.f_34);
							AUDIO::RELEASE_SOUND_ID(Local_231.f_34);
							Local_231.f_34 = -1;
						}
						if (AUDIO::HAS_SOUND_FINISHED(Local_231.f_37))
						{
							AUDIO::STOP_SOUND(Local_231.f_37);
							AUDIO::RELEASE_SOUND_ID(Local_231.f_37);
							Local_231.f_37 = -1;
						}
						MISC::CLEAR_BIT(&(Local_231.f_5), 4);
						MISC::CLEAR_BIT(&(Local_231.f_5), 3);
						MISC::CLEAR_BIT(&(Local_231.f_6), 9);
						MISC::CLEAR_BIT(&Global_1964670, 29);
						Local_231.f_160 = 0;
					}
					else
					{
						iVar2 = (100 * MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Local_231.f_253)));
						Local_231.f_18 = (iVar2 / iVar1);
						if (!func_16())
						{
							if (AUDIO::HAS_SOUND_FINISHED(Local_231.f_34))
							{
								Local_231.f_34 = AUDIO::GET_SOUND_ID();
								AUDIO::PLAY_SOUND_FRONTEND(Local_231.f_34, "HUD_Shock_Recharge", Local_231.f_161, true);
								AUDIO::SET_VARIABLE_ON_SOUND(Local_231.f_34, "Time", (IntToFloat(iVar1) / 1000f));
							}
						}
					}
				}
				func_63();
			}
		}
		else
		{
			NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_231.f_163);
		}
	}
}

void func_63()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	
	if (!func_66())
	{
		if (Local_231.f_19 > 0)
		{
			Local_231.f_19 = 0;
			func_61(&(Local_231.f_356));
			func_61(&(Local_231.f_279));
			MISC::CLEAR_BIT(&(Local_231.f_6), 10);
			MISC::CLEAR_BIT(&(Local_231.f_6), 1);
			MISC::CLEAR_BIT(&(Local_231.f_6), 11);
		}
		return;
	}
	Local_231.f_356.f_4 = 2;
	Local_231.f_356.f_5 = func_65();
	iVar0 = Global_262145.f_24326;
	if (!BitTest(Local_231.f_6, 10))
	{
		Local_231.f_22 = 100;
	}
	iVar0 = (iVar0 / 2);
	if (BitTest(Local_231.f_6, 1))
	{
		Local_231.f_21 = ((Local_231.f_23 * (Global_262145.f_24326 / 2)) / 100);
		Local_231.f_21 = ((Global_262145.f_24326 / 2) - Local_231.f_21);
		MISC::CLEAR_BIT(&(Local_231.f_6), 1);
	}
	if (BitTest(Local_231.f_6, 10))
	{
		iVar0 = Local_231.f_21;
	}
	if (!func_77() && func_64(&(Local_231.f_356), 1, iVar0, 0))
	{
		if (AUDIO::HAS_SOUND_FINISHED(Local_231.f_38))
		{
			Local_231.f_38 = AUDIO::GET_SOUND_ID();
			AUDIO::PLAY_SOUND_FROM_ENTITY(Local_231.f_38, "Destroyed", NETWORK::NET_TO_OBJ(Local_231.f_163), Local_231.f_161, true, 0);
		}
		HUD::THEFEED_SHOW();
		if (!BitTest(Global_1964670.f_4, 21))
		{
			iVar1 = 69;
			FIRE::ADD_OWNED_EXPLOSION(PLAYER::PLAYER_PED_ID(), Local_231.f_154, iVar1, 0.5f, true, false, 1f);
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) < 1)
			{
				PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, false);
				PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
			}
			PAD::SET_CONTROL_SHAKE(0, 300, SYSTEM::ROUND((200f * Local_231.f_135)));
		}
		MISC::SET_BIT(&(Local_231.f_5), 2);
		MISC::SET_BIT(&(Global_1964670.f_4), 20);
	}
	if (func_12(&(Local_231.f_356)))
	{
		PAD::SET_CONTROL_SHAKE(0, 300, 20);
		if (!BitTest(Local_231.f_6, 11))
		{
			MISC::SET_BIT(&(Local_231.f_6), 11);
		}
		func_61(&(Local_231.f_279));
		if (!func_10(&(Local_231.f_356), iVar0, 0))
		{
			iVar2 = (Local_231.f_22 * MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Local_231.f_356)));
			if (!BitTest(Local_231.f_6, 10))
			{
				Local_231.f_19 = (iVar2 / iVar0);
			}
			else
			{
				Local_231.f_19 = (Local_231.f_23 + (iVar2 / iVar0));
			}
			if (AUDIO::HAS_SOUND_FINISHED(Local_231.f_35))
			{
				Local_231.f_35 = AUDIO::GET_SOUND_ID();
				AUDIO::PLAY_SOUND_FRONTEND(Local_231.f_35, "HUD_Detonate_Charge", Local_231.f_161, true);
			}
		}
	}
	else if (BitTest(Local_231.f_6, 11))
	{
		MISC::CLEAR_BIT(&(Local_231.f_6), 11);
		MISC::SET_BIT(&(Local_231.f_6), 10);
		Local_231.f_22 = (100 - Local_231.f_19);
		Local_231.f_21 = (iVar0 - MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Local_231.f_356)));
		Local_231.f_23 = Local_231.f_19;
		func_61(&(Local_231.f_279));
		if (Local_231.f_35 != -1)
		{
			AUDIO::STOP_SOUND(Local_231.f_35);
			AUDIO::RELEASE_SOUND_ID(Local_231.f_35);
			Local_231.f_35 = -1;
		}
	}
	else if (Local_231.f_19 > 0)
	{
		if (Local_231.f_19 <= 2)
		{
			Local_231.f_19 = 0;
		}
		if (!func_12(&(Local_231.f_279)))
		{
			func_11(&(Local_231.f_279), 0, 0);
		}
		else
		{
			iVar3 = Global_262145.f_24326;
			if (!func_10(&(Local_231.f_279), iVar3, 0))
			{
				fVar4 = ((100f - IntToFloat(Local_231.f_22)) / SYSTEM::TO_FLOAT((iVar3 / MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Local_231.f_279)))));
				Local_231.f_19 = (Local_231.f_19 - SYSTEM::ROUND(fVar4));
				Local_231.f_23 = Local_231.f_19;
				Local_231.f_22 = (100 - Local_231.f_19);
				MISC::SET_BIT(&(Local_231.f_6), 1);
			}
			else
			{
				Local_231.f_19 = 0;
			}
		}
	}
	else
	{
		func_61(&(Local_231.f_356));
		MISC::CLEAR_BIT(&(Local_231.f_6), 10);
		MISC::CLEAR_BIT(&(Local_231.f_6), 1);
	}
}

int func_64(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	if (PAD::IS_CONTROL_PRESSED(uParam0->f_4, uParam0->f_5) || (PAD::IS_DISABLED_CONTROL_PRESSED(uParam0->f_4, uParam0->f_5) && iParam1))
	{
		if (!bParam3 || func_10(&(uParam0->f_2), 500, 0))
		{
			if (!func_12(uParam0))
			{
				func_11(uParam0, 0, 0);
			}
			else if (func_10(uParam0, iParam2, 0))
			{
				func_61(uParam0);
				func_61(&(uParam0->f_2));
				return 1;
			}
		}
	}
	else
	{
		func_61(uParam0);
		func_61(&(uParam0->f_2));
	}
	return 0;
}

int func_65()
{
	return 203;
}

bool func_66()
{
	return BitTest(Global_1964670.f_4, 10);
}

int func_67(int iParam0)
{
	if (func_72(iParam0) == 374)
	{
		return func_68(iParam0, 374);
	}
	return -1;
}

int func_68(int iParam0, int iParam1)
{
	if (func_72(iParam0) == iParam1)
	{
		return func_69(iParam0);
	}
	return -1;
}

int func_69(int iParam0)
{
	if (func_70(iParam0, 0))
	{
		return Global_1892925[iParam0 /*615*/].f_10.f_183;
	}
	return -1;
}

int func_70(int iParam0, int iParam1)
{
	if (func_71(iParam0))
	{
		if (Global_1892925[iParam0 /*615*/].f_10.f_34 != -1 || (iParam1 && Global_1892925[iParam0 /*615*/].f_10.f_33 != -1))
		{
			return 1;
		}
	}
	return 0;
}

int func_71(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
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

int func_72(int iParam0)
{
	if (func_71(iParam0))
	{
		if (func_70(iParam0, 0))
		{
			return Global_1892925[iParam0 /*615*/].f_10.f_34;
		}
	}
	return -1;
}

void func_73()
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	struct<3> Var9;
	struct<3> Var12;
	int iVar15;
	
	if (BitTest(Local_231.f_6, 9))
	{
		if (Local_231.f_13 == 1)
		{
			if (Local_231.f_248 == 2)
			{
				Var0 = { CAM::GET_FINAL_RENDERED_CAM_COORD() };
				Var3 = { CAM::GET_FINAL_RENDERED_CAM_ROT(2) };
				Var6 = { (-SYSTEM::SIN(Var3.f_2) * SYSTEM::COS(Var3.f_0)), (SYSTEM::COS(Var3.f_2) * SYSTEM::COS(Var3.f_0)), SYSTEM::SIN(Var3.f_0) };
				Var9 = { 10f, 10f, 10f };
				Var12 = { Var0 + Var6 * Var9 };
				iVar15 = Global_262145.f_24324;
				if (BitTest(Local_231.f_5, 23))
				{
					iVar15 = Global_262145.f_24325;
				}
				if (func_76())
				{
					iVar15 = 1;
				}
				else if (func_75() || func_74())
				{
					iVar15 = Global_262145.f_24325;
				}
				MISC::SHOOT_SINGLE_BULLET_BETWEEN_COORDS_IGNORE_ENTITY_NEW(Local_231.f_154 + Vector(0f, 0f, 0f), Var12, iVar15, true, joaat("weapon_stungun"), PLAYER::PLAYER_PED_ID(), true, true, -1f, NETWORK::NET_TO_OBJ(Local_231.f_163), false, false, 0, true, 0, 0, 0);
				Local_231.f_18 = 100;
				Local_231.f_19 = 0;
				PAD::SET_CONTROL_SHAKE(0, 300, SYSTEM::ROUND((150f * Local_231.f_135)));
				if (AUDIO::HAS_SOUND_FINISHED(Local_231.f_37))
				{
					Local_231.f_37 = AUDIO::GET_SOUND_ID();
					AUDIO::PLAY_SOUND_FROM_ENTITY(Local_231.f_37, "Shock_Fire", NETWORK::NET_TO_OBJ(Local_231.f_163), Local_231.f_161, true, 0);
				}
				if (Local_231.f_35 != -1)
				{
					AUDIO::STOP_SOUND(Local_231.f_35);
					AUDIO::RELEASE_SOUND_ID(Local_231.f_35);
					Local_231.f_35 = -1;
				}
				MISC::SET_BIT(&(Local_231.f_5), 4);
				func_11(&(Local_231.f_253), 0, 0);
			}
		}
	}
}

var func_74()
{
	return BitTest(Global_1964670.f_2, 11);
}

var func_75()
{
	return BitTest(Global_1964670.f_2, 10);
}

bool func_76()
{
	return BitTest(Global_1964670.f_2, 6);
}

bool func_77()
{
	return BitTest(Global_1964670, 19);
}

int func_78(bool bParam0)
{
	if (bParam0)
	{
		return 237;
	}
	return 205;
}

bool func_79()
{
	return BitTest(Global_1964670, 8);
}

int func_80()
{
	if ((NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_231.f_163) && ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_OBJ(Local_231.f_163), false)) && !BitTest(Local_231.f_5, 2))
	{
		return 1;
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_231.f_163))
	{
		if (func_91(PLAYER::PLAYER_ID()) && BitTest(Global_2731782, 0))
		{
		}
		else if (func_90())
		{
			if (ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(NETWORK::NET_TO_OBJ(Local_231.f_163)) || ENTITY::GET_LAST_MATERIAL_HIT_BY_ENTITY(NETWORK::NET_TO_OBJ(Local_231.f_163)) != 0)
			{
				Local_231.f_28 = 1;
				return 1;
			}
		}
	}
	if (BitTest(Local_231.f_5, 2))
	{
		Local_231.f_28 = 4;
		return 1;
	}
	if (BitTest(Local_231.f_5, 9))
	{
		Local_231.f_28 = 1;
		return 1;
	}
	if (BitTest(Local_231.f_5, 7))
	{
		Local_231.f_28 = 0;
		return 1;
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_231.f_163))
	{
		if (ENTITY::IS_ENTITY_IN_WATER(NETWORK::NET_TO_OBJ(Local_231.f_163)) || func_89(NETWORK::NET_TO_ENT(Local_231.f_163), 0))
		{
			if (BitTest(Local_231.f_5, 29))
			{
				Local_231.f_28 = 3;
				return 1;
			}
		}
	}
	if (func_87(PLAYER::PLAYER_ID()))
	{
		Local_231.f_28 = 0;
		return 1;
	}
	if (Global_1950702.f_5363 != -1)
	{
		Local_231.f_28 = 0;
		return 1;
	}
	if (func_86())
	{
		Local_231.f_28 = 1;
		return 1;
	}
	if (func_85(PLAYER::PLAYER_ID()))
	{
		Local_231.f_28 = 0;
		return 1;
	}
	if (func_84())
	{
		Local_231.f_28 = 0;
		return 1;
	}
	if (func_83())
	{
		Local_231.f_28 = 0;
		return 1;
	}
	if (func_82())
	{
		Local_231.f_28 = 0;
		return 1;
	}
	if (func_14())
	{
		Local_231.f_28 = 0;
		return 1;
	}
	if (PED::IS_PED_DEAD_OR_DYING(PLAYER::PLAYER_PED_ID(), true))
	{
		Local_231.f_28 = 6;
		return 1;
	}
	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_HURT(PLAYER::PLAYER_PED_ID()))
	{
		Local_231.f_28 = 6;
		return 1;
	}
	if (func_81())
	{
		return 1;
	}
	return 0;
}

int func_81()
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0 = { -90000f, -90000f, -1600f };
	Var3 = { 90000f, 90000f, 2600f };
	if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_231.f_163))
	{
		return 0;
	}
	if (!ENTITY::IS_ENTITY_IN_AREA(NETWORK::NET_TO_OBJ(Local_231.f_163), Var0, Var3, false, true, 0))
	{
		return 1;
	}
	return 0;
}

bool func_82()
{
	return BitTest(Global_1964670, 16);
}

bool func_83()
{
	return Global_99770;
}

bool func_84()
{
	return BitTest(Global_1964670, 9);
}

int func_85(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (Global_1892925[iVar0 /*615*/].f_8)
		{
			return 1;
		}
	}
	return 0;
}

int func_86()
{
	struct<3> Var0;
	
	if (Local_231.f_17 == joaat("v_faceoffice"))
	{
		if (func_47(NETWORK::NET_TO_OBJ(Local_231.f_163)))
		{
			if (INTERIOR::GET_ROOM_KEY_FROM_ENTITY(NETWORK::NET_TO_OBJ(Local_231.f_163)) == joaat("GtaMloRoom001"))
			{
				Var0 = { ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_OBJ(Local_231.f_163), true) };
				if (Var0.f_2 >= 47f)
				{
					return 1;
				}
			}
		}
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_231.f_163))
	{
		if (func_47(NETWORK::NET_TO_OBJ(Local_231.f_163)))
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(NETWORK::NET_TO_OBJ(Local_231.f_163), -1071.258f, -242.5484f, 48.02133f, -1069.456f, -245.9234f, 43.87983f, 3f, false, true, 0))
			{
				return 1;
			}
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(NETWORK::NET_TO_OBJ(Local_231.f_163), 2494.398f, -276.2f, -69.09f, 2494.342f, -277.4824f, -67.98756f, 0.7f, false, true, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_87(int iParam0)
{
	if (iParam0 != func_23() && func_42(iParam0, 1, 1))
	{
		if (func_41(iParam0) && !func_88(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_88(int iParam0)
{
	if (iParam0 != func_23() && func_42(iParam0, 1, 1))
	{
		return BitTest(Global_2658293[iParam0 /*468*/].f_325, 4);
	}
	return 0;
}

int func_89(int iParam0, int iParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0, false) || iParam1)
		{
			if (ENTITY::IS_ENTITY_IN_WATER(iParam0))
			{
				if (ENTITY::GET_ENTITY_SUBMERGED_LEVEL(iParam0) >= 0.7f)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_90()
{
	return BitTest(Global_1964670, 15);
}

int func_91(int iParam0)
{
	if (func_94(func_72(iParam0)))
	{
		if (func_93() != func_23())
		{
			if (func_92() == func_93())
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_92()
{
	return Global_1892925[PLAYER::PLAYER_ID() /*615*/].f_10.f_36;
}

int func_93()
{
	return Global_1892925[PLAYER::PLAYER_ID() /*615*/].f_10;
}

int func_94(int iParam0)
{
	switch (iParam0)
	{
		case 241:
		case 248:
			return 1;
		
		default:
	}
	return 0;
}

bool func_95()
{
	return BitTest(Global_1964670.f_4, 3);
}

void func_96()
{
	if (!func_137(Local_593.f_2))
	{
		return;
	}
	if (!func_136() && !func_133())
	{
		return;
	}
	if (func_132())
	{
		return;
	}
	if (!func_131() && !func_129())
	{
		return;
	}
	if (func_124())
	{
		if (func_119())
		{
			if (func_104())
			{
				if (func_103())
				{
					func_102();
					func_100(1);
				}
				MISC::CLEAR_BIT(&Local_597, 0);
				if (BitTest(Global_1964670.f_4, 6))
				{
					MISC::SET_BIT(&(Global_1964670.f_4), 8);
					func_99();
					func_97();
				}
			}
		}
	}
	else
	{
		func_99();
		func_97();
	}
}

void func_97()
{
	if (func_12(&(Local_597.f_5)))
	{
		func_61(&(Local_597.f_5));
	}
	if (func_12(&(Local_597.f_9)))
	{
		func_61(&(Local_597.f_9));
	}
	if (func_12(&(Local_597.f_7)))
	{
		func_61(&(Local_597.f_7));
	}
	func_98();
}

void func_98()
{
	if (Local_597.f_1 != -1)
	{
		AUDIO::STOP_SOUND(Local_597.f_1);
		AUDIO::RELEASE_SOUND_ID(Local_597.f_1);
		Local_597.f_1 = -1;
	}
}

void func_99()
{
	MISC::CLEAR_BIT(&(Global_1964670.f_4), 12);
}

void func_100(bool bParam0)
{
	if (bParam0)
	{
		if (!func_101())
		{
			MISC::SET_BIT(&Global_1964670, 30);
		}
	}
	else if (func_101())
	{
		MISC::CLEAR_BIT(&Global_1964670, 30);
	}
}

bool func_101()
{
	return BitTest(Global_1964670, 30);
}

void func_102()
{
	MISC::SET_BIT(&(Local_231.f_5), 24);
}

int func_103()
{
	if (BitTest(Global_1964670.f_4, 6))
	{
		return BitTest(Global_1964670.f_4, 5);
	}
	return 1;
}

int func_104()
{
	func_110(0, func_118());
	func_98();
	func_108(func_103());
	if (func_105())
	{
		return 1;
	}
	return 0;
}

int func_105()
{
	if (!func_12(&(Local_597.f_7)))
	{
		func_11(&(Local_597.f_7), 0, 0);
	}
	else if (func_107(&(Local_597.f_7), 0, 0) >= func_106())
	{
		return 1;
	}
	return 0;
}

int func_106()
{
	return Global_1964670.f_6;
}

int func_107(var uParam0, bool bParam1, bool bParam2)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam1)
	{
		if (!bParam2)
		{
			return NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0);
		}
		else
		{
			return NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME_ACCURATE(), *uParam0);
		}
	}
	return NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), *uParam0);
}

void func_108(bool bParam0)
{
	if (Local_597.f_2 == -1)
	{
		Local_597.f_2 = AUDIO::GET_SOUND_ID();
		AUDIO::PLAY_SOUND_FRONTEND(Local_597.f_2, "Drone_Scan_Complete", func_109(), false);
	}
}

char* func_109()
{
	return "DLC_24-2_Penthouse_Robbery_Sounds";
}

void func_110(bool bParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	struct<3> Var4;
	struct<3> Var7;
	struct<3> Var10;
	struct<3> Var13;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	struct<4> Var21;
	struct<2> Var25;
	struct<2> Var28;
	
	if (bParam0)
	{
		StringCopy(&Var21, "VEX_SCAN", 16);
	}
	else if (func_103())
	{
		StringCopy(&Var21, "VEX_TARACQ", 16);
	}
	else
	{
		StringCopy(&Var21, "VEX_TARINV", 16);
	}
	GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(1);
	Var13 = { ENTITY::GET_ENTITY_COORDS(Global_1964670.f_28, false) };
	switch (Local_593.f_1)
	{
		case 3:
			func_47(func_117());
			Var10 = { ENTITY::GET_ENTITY_COORDS(func_117(), true) };
			Var10.f_2 = (Var10.f_2 + 1.25f);
			break;
		
		case 1:
			func_47(func_117());
			Var10 = { ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(func_117(), Local_593.f_3) };
			break;
		
		case 2:
			MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(func_117()), &Var25, &Var28);
			Var4 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(func_117(), 0f, Var25.f_1, 0f) };
			Var7 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(func_117(), 0f, Var28.f_1, 0f) };
			fVar2 = MISC::GET_DISTANCE_BETWEEN_COORDS(Var13, Var4, true);
			fVar3 = MISC::GET_DISTANCE_BETWEEN_COORDS(Var13, Var7, true);
			if (fVar2 < fVar3)
			{
				Var10 = { Var4 };
			}
			else
			{
				Var10 = { Var7 };
			}
			Var10.f_2 = (Var10.f_2 - 0.15f);
			break;
	}
	GRAPHICS::SET_DRAW_ORIGIN(Var10, false);
	fVar0 = func_116();
	fVar1 = (0.024f * fVar0);
	HUD::GET_HUD_COLOUR(iParam1, &iVar16, &iVar17, &iVar18, &iVar19);
	GRAPHICS::DRAW_SPRITE("helicopterhud", "hud_outline", 0f, 0f, (fVar1 * 1.5f), fVar1, 0f, iVar16, iVar17, iVar18, iVar19, false, 0);
	if (bParam0)
	{
		func_114(func_107(&(Local_597.f_5), 0, 0), fVar1, 0f, 0f, iVar16, iVar17, iVar18);
		if (!func_12(&(Local_597.f_9)))
		{
			func_11(&(Local_597.f_9), 0, 0);
		}
		else
		{
			iVar20 = func_107(&(Local_597.f_9), 0, 0);
		}
	}
	if (bParam0)
	{
		if ((((((((iVar20 <= 500 || (iVar20 >= 1000 && iVar20 <= 1500)) || (iVar20 >= 2000 && iVar20 <= 2500)) || (iVar20 >= 3000 && iVar20 <= 3500)) || (iVar20 >= 4000 && iVar20 <= 4500)) || (iVar20 >= 5000 && iVar20 <= 5500)) || (iVar20 >= 6000 && iVar20 <= 6500)) || (iVar20 >= 7000 && iVar20 <= 7500)) || (iVar20 >= 8000 && iVar20 <= 8500))
		{
			func_111(Var21, ((-0.7f * fVar1) + (fVar1 * 0.04f)), ((fVar1 / 2f) + 0.005f), iVar16, iVar17, iVar18, (fVar0 + 0.2f), 1);
		}
	}
	else
	{
		func_111(Var21, ((-0.7f * fVar1) + (fVar1 * 0.04f)), ((fVar1 / 2f) + 0.005f), iVar16, iVar17, iVar18, (fVar0 + 0.2f), 1);
	}
	GRAPHICS::CLEAR_DRAW_ORIGIN();
}

void func_111(char* sParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, float fParam4, float fParam5, int iParam6, int iParam7, int iParam8, float fParam9, int iParam10)
{
	func_113(iParam6, iParam7, iParam8, fParam9, iParam10);
	func_112(fParam4, fParam5, &sParam0, 0);
}

void func_112(float fParam0, float fParam1, char* sParam2, int iParam3)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, iParam3);
}

void func_113(int iParam0, int iParam1, int iParam2, float fParam3, int iParam4)
{
	float fVar0;
	
	fVar0 = 0.3f;
	if (iParam4 == 1)
	{
		if (fParam3 < 0.6f)
		{
			fParam3 = 0.6f;
		}
		if (fParam3 > 1f)
		{
			fParam3 = 1f;
		}
	}
	HUD::SET_TEXT_SCALE((fVar0 * fParam3), (fVar0 * fParam3));
	HUD::SET_TEXT_COLOUR(iParam0, iParam1, iParam2, 200);
	HUD::SET_TEXT_DROPSHADOW(0, 0, 0, 0, 0);
	HUD::SET_TEXT_WRAP(-2f, 2f);
	HUD::SET_TEXT_FONT(0);
}

void func_114(int iParam0, float fParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	if (iParam0 <= 6000)
	{
		iVar0 = 0;
		while (iVar0 <= 9)
		{
			fVar1 = ((SYSTEM::TO_FLOAT(iParam0) / SYSTEM::TO_FLOAT(6000)) - (SYSTEM::TO_FLOAT(iVar0) * 0.04f));
			if (fVar1 > 0f)
			{
				fVar2 = ((SYSTEM::TO_FLOAT(iParam0) / SYSTEM::TO_FLOAT(6000)) - (IntToFloat(iVar0 + 1) * 0.04f));
				if (fVar2 < 0f)
				{
					fVar2 = 0f;
				}
				iVar3 = (200 - (20 * iVar0));
				func_115((fParam2 - (fParam1 * 0.65f)), ((fParam3 + ((fParam1 * 0.9f) / 2f)) - ((fParam1 * 0.9f) * fVar1)), ((fParam1 * 0.85f) * 1.5f), ((fVar1 - fVar2) * (fParam1 * 0.9f)), iParam4, iParam5, iParam6, iVar3);
			}
			iVar0++;
		}
	}
}

void func_115(float fParam0, float fParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	GRAPHICS::DRAW_RECT((fParam0 + (fParam2 * 0.5f)), (fParam1 + (fParam3 * 0.5f)), fParam2, fParam3, iParam4, iParam5, iParam6, iParam7, false);
}

float func_116()
{
	float fVar0;
	struct<3> Var1;
	struct<3> Var4;
	float fVar7;
	
	Var1 = { ENTITY::GET_ENTITY_COORDS(func_117(), false) };
	Var4 = { ENTITY::GET_ENTITY_COORDS(Global_1964670.f_28, true) };
	fVar7 = MISC::GET_DISTANCE_BETWEEN_COORDS(Var1, Var4, true);
	fVar0 = (1000f / (CAM::GET_GAMEPLAY_CAM_FOV() * fVar7));
	if (fVar0 < 3f)
	{
		fVar0 = 3f;
	}
	if (fVar0 > 3.2f)
	{
		fVar0 = 3.2f;
	}
	return fVar0;
}

int func_117()
{
	if (func_47(Global_1964670.f_29))
	{
		return Global_1964670.f_29;
	}
	return Local_593.f_0;
}

int func_118()
{
	if (func_103())
	{
		return 18;
	}
	return 6;
}

int func_119()
{
	if (func_123())
	{
		if (!BitTest(Local_597.f_0, 0))
		{
			MISC::SET_BIT(&Local_597, 0);
		}
		return 1;
	}
	else
	{
		func_110(1, 1);
		func_120();
	}
	return 0;
}

void func_120()
{
	float fVar0;
	
	if (Local_597.f_1 == -1)
	{
		func_122(&(Local_597.f_1), "Drone_Scan_Loop", func_109(), 0);
	}
	else if (func_12(&(Local_597.f_9)))
	{
		fVar0 = SYSTEM::TO_FLOAT(func_107(&(Local_597.f_9), 0, 0));
		fVar0 = (fVar0 / 10000f);
		func_121(&fVar0, 0f, 1f);
		AUDIO::SET_VARIABLE_ON_SOUND(Local_597.f_1, "Scan_Progress", fVar0);
	}
}

void func_121(float fParam0, float fParam1, float fParam2)
{
	if (*fParam0 < fParam1)
	{
		*fParam0 = fParam1;
	}
	else if (*fParam0 > fParam2)
	{
		*fParam0 = fParam2;
	}
}

int func_122(var uParam0, char* sParam1, char* sParam2, bool bParam3)
{
	if (*uParam0 == -1)
	{
		*uParam0 = AUDIO::GET_SOUND_ID();
		AUDIO::PLAY_SOUND_FRONTEND(*uParam0, sParam1, sParam2, bParam3);
		return 1;
	}
	return 0;
}

int func_123()
{
	if (!func_12(&(Local_597.f_5)))
	{
		func_11(&(Local_597.f_5), 0, 0);
	}
	else if (func_107(&(Local_597.f_5), 0, 0) >= 6000)
	{
		return 1;
	}
	return 0;
}

int func_124()
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	
	if (!ENTITY::DOES_ENTITY_EXIST(func_117()))
	{
		return 0;
	}
	if (!func_47(Global_1964670.f_28))
	{
		return 0;
	}
	if (!BitTest(Local_597.f_0, 0))
	{
		fVar4 = 4f;
		if (Local_231.f_27 == 1)
		{
			fVar4 = 7f;
		}
		else if (Local_231.f_27 == 2)
		{
			fVar4 = 10f;
		}
		if (func_128(Global_1964670.f_28, func_117(), 1) > fVar4)
		{
			return 0;
		}
		if (!BitTest(Global_1964670.f_4, 4))
		{
			if (!GRAPHICS::GET_SCREEN_COORD_FROM_WORLD_COORD(ENTITY::GET_ENTITY_COORDS(func_117(), false), &fVar0, &fVar1))
			{
				return 0;
			}
			func_127(fVar0, fVar1, &fVar2, &fVar3);
			if (!func_126(fVar2, fVar3, 5f))
			{
				return 0;
			}
			if (func_125())
			{
				if (!func_12(&(Local_597.f_3)))
				{
					func_11(&(Local_597.f_3), 1, 0);
				}
				else if (func_10(&(Local_597.f_3), 1500, 1))
				{
					return 0;
				}
			}
			else if (func_12(&(Local_597.f_3)))
			{
				func_61(&(Local_597.f_3));
			}
		}
	}
	return 1;
}

int func_125()
{
	switch (Local_593.f_1)
	{
		case 1:
			if (Local_593.f_3 == PED::GET_PED_BONE_INDEX(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(func_117()), 31086))
			{
				if (!ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(func_117(), Global_1964670.f_25))
				{
					return 1;
				}
			}
			break;
		
		case 3:
			if (!ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(Global_1964670.f_28, func_117(), 17))
			{
				return 1;
			}
			break;
	}
	if (!ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(Global_1964670.f_28, func_117(), 283))
	{
		return 1;
	}
	return 0;
}

int func_126(float fParam0, float fParam1, float fParam2)
{
	if (fParam0 <= fParam2 && fParam1 <= fParam2)
	{
		return 1;
	}
	return 0;
}

float func_127(float fParam0, float fParam1, var uParam2, var uParam3)
{
	float fVar0;
	float fVar1;
	
	if (fParam0 <= 0.5f)
	{
		fVar0 = (0.5f - fParam0);
	}
	else
	{
		fVar0 = (fParam0 - 0.5f);
	}
	if (fParam1 <= 0.5f)
	{
		fVar1 = (0.5f - fParam1);
	}
	else
	{
		fVar1 = (fParam1 - 0.5f);
	}
	*uParam2 = fVar0;
	*uParam3 = fVar1;
	return (fVar0 + fVar1);
}

float func_128(int iParam0, int iParam1, bool bParam2)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
	}
	else
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, false) };
	}
	if (!ENTITY::IS_ENTITY_DEAD(iParam1, false))
	{
		Var3 = { ENTITY::GET_ENTITY_COORDS(iParam1, true) };
	}
	else
	{
		Var3 = { ENTITY::GET_ENTITY_COORDS(iParam1, false) };
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Var3, bParam2);
}

int func_129()
{
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("helicopterhud", false);
	if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("helicopterhud"))
	{
		return 0;
	}
	func_130();
	return 1;
}

void func_130()
{
	MISC::SET_BIT(&(Local_231.f_5), 10);
}

bool func_131()
{
	return BitTest(Local_231.f_5, 10);
}

bool func_132()
{
	return BitTest(Local_231.f_5, 24);
}

int func_133()
{
	int iVar0;
	
	iVar0 = func_135();
	if (PAD::IS_CONTROL_JUST_PRESSED(2, iVar0) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, iVar0))
	{
		func_134();
		return 1;
	}
	return 0;
}

void func_134()
{
	MISC::SET_BIT(&(Global_1964670.f_4), 12);
}

int func_135()
{
	return 206;
}

bool func_136()
{
	return BitTest(Global_1964670.f_4, 12);
}

int func_137(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (BitTest(Global_1964670.f_4, 14))
	{
		return 0;
	}
	return 1;
}

void func_138()
{
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_231.f_163))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Local_231.f_165))
		{
			STREAMING::REQUEST_MODEL(func_153());
			if (STREAMING::HAS_MODEL_LOADED(func_153()))
			{
				if (!BitTest(Local_231.f_5, 6))
				{
					if (func_147(NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(false, 0) + 1, 0, 1))
					{
						NETWORK::RESERVE_NETWORK_MISSION_PEDS(NETWORK::GET_NUM_CREATED_MISSION_PEDS(false) + 1);
						MISC::SET_BIT(&(Local_231.f_5), 6);
					}
				}
				else if (NETWORK::CAN_REGISTER_MISSION_PEDS(1))
				{
					Local_231.f_165 = PED::CREATE_PED(26, func_153(), Local_231.f_154, ENTITY::GET_ENTITY_HEADING(NETWORK::NET_TO_OBJ(Local_231.f_163)), false, false);
					ENTITY::SET_ENTITY_INVINCIBLE(Local_231.f_165, true, 0);
					ENTITY::SET_ENTITY_VISIBLE(Local_231.f_165, false, false);
					ENTITY::SET_ENTITY_HAS_GRAVITY(Local_231.f_165, false);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_231.f_165, true);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_153());
					PED::SET_PED_CONFIG_FLAG(Local_231.f_165, 118, false);
					PED::SET_PED_CONFIG_FLAG(Local_231.f_165, 108, true);
					PED::SET_PED_CONFIG_FLAG(Local_231.f_165, 208, true);
					ENTITY::SET_ENTITY_PROOFS(Local_231.f_165, true, true, true, true, true, false, false, false);
					ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_231.f_165, NETWORK::NET_TO_OBJ(Local_231.f_163), -1, 0f, 0f, -0.25f, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
					ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(Local_231.f_165, false, false);
					Global_1964670.f_28 = Local_231.f_165;
				}
			}
		}
		else if (func_47(Local_231.f_165))
		{
			if (ENTITY::IS_ENTITY_VISIBLE(Local_231.f_165))
			{
				ENTITY::SET_ENTITY_VISIBLE(Local_231.f_165, false, false);
			}
			if (!func_144(PLAYER::PLAYER_ID()) && !func_141(PLAYER::PLAYER_ID()))
			{
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
				{
					func_140(Global_1837398);
				}
			}
			else if ((Global_1964670.f_7 == -1 || Global_1964670.f_7 == 0) || Global_1964670.f_7 == Global_1837387)
			{
				func_140(Global_1837398);
			}
			if (PED::GET_PED_RELATIONSHIP_GROUP_DEFAULT_HASH(Local_231.f_165) != func_139())
			{
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_231.f_165, func_139());
			}
			if (!ENTITY::IS_ENTITY_ATTACHED(Local_231.f_165))
			{
				ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_231.f_165, NETWORK::NET_TO_OBJ(Local_231.f_163), -1, 0f, 0f, -0.25f, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
				ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(Local_231.f_165, false, false);
			}
		}
	}
}

int func_139()
{
	if (Global_1964670.f_7 != -1 && Global_1964670.f_7 != 0)
	{
		return Global_1964670.f_7;
	}
	return Global_1837398;
}

void func_140(int iParam0)
{
	if (Global_1964670.f_7 != iParam0)
	{
		Global_1964670.f_7 = iParam0;
	}
}

int func_141(int iParam0)
{
	if (func_143(iParam0) == 236 || func_143(iParam0) == 150)
	{
		return func_142(iParam0);
	}
	return 0;
}

int func_142(var uParam0)
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 != -1)
	{
		return BitTest(Global_1892925[iVar0 /*615*/].f_1, 7);
	}
	return 0;
}

int func_143(var uParam0)
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 != -1)
	{
		return Global_1892925[iVar0 /*615*/];
	}
	return -1;
}

int func_144(int iParam0)
{
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		if (func_146(8))
		{
			return 1;
		}
		if (Global_2733190.f_5975.f_1 > 0)
		{
			return 1;
		}
	}
	return func_145(iParam0, 20);
}

var func_145(int iParam0, int iParam1)
{
	return BitTest(Global_1892925[iParam0 /*615*/].f_10.f_4, iParam1);
}

bool func_146(int iParam0)
{
	return BitTest(Global_2733190.f_5964, iParam0);
}

bool func_147(int iParam0, bool bParam1, bool bParam2)
{
	return func_148(2, iParam0, 1, bParam1, bParam2);
}

int func_148(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (!BitTest(Global_1690407, 0))
	{
		return 0;
	}
	if ((bParam2 && !bParam3) && iParam1 <= (func_152(iParam0) - func_151(iParam0, 0)))
	{
		return 1;
	}
	else
	{
		if (bParam3)
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_151(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_152(iParam0) - func_150(iParam0));
		}
		else
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_151(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_152(iParam0) - func_151(iParam0, 1));
		}
		if (!bParam4 && Global_1845298[PLAYER::PLAYER_ID() /*881*/] != 3)
		{
			iVar1 = (iVar1 - func_149(iParam0));
		}
		if (iVar0 < iVar1)
		{
			return 1;
		}
	}
	return 0;
}

int func_149(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 10;
			break;
		
		case 1:
			return 10;
			break;
		
		case 2:
			return 10;
			break;
	}
	return 0;
}

int func_150(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_1690407.f_1;
			break;
		
		case 1:
			return Global_1690407.f_2;
			break;
		
		case 2:
			return Global_1690407.f_3;
			break;
	}
	return 0;
}

int func_151(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = PLAYER::PLAYER_ID();
	switch (iParam0)
	{
		case 0:
			if (!NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
			{
				return Global_2658293[iVar0 /*468*/].f_223;
			}
			else
			{
				return NETWORK::GET_NUM_RESERVED_MISSION_PEDS(!bParam1, 0);
			}
			break;
		
		case 1:
			if (!NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
			{
				return Global_2658293[iVar0 /*468*/].f_224;
			}
			else
			{
				return NETWORK::GET_NUM_RESERVED_MISSION_VEHICLES(!bParam1, 0);
			}
			break;
		
		case 2:
			if (!NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
			{
				return Global_2658293[iVar0 /*468*/].f_225;
			}
			else
			{
				return NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(!bParam1, 0);
			}
			break;
	}
	return 0;
}

int func_152(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_1690415;
			break;
		
		case 1:
			return Global_1690416;
			break;
		
		case 2:
			return Global_1690417;
			break;
	}
	return 0;
}

int func_153()
{
	return joaat("g_m_m_chigoon_01");
}

void func_154()
{
	int iVar0;
	
	if (!func_155())
	{
		return;
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_231.f_163) && !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_OBJ(Local_231.f_163), false))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_231.f_163))
		{
			if (CAM::DOES_CAM_EXIST(Local_231.f_173) && CAM::IS_CAM_RENDERING(Local_231.f_173))
			{
				iVar0 = 80;
				if (PAD::IS_CONTROL_JUST_PRESSED(2, iVar0) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, iVar0))
				{
					if (!BitTest(Local_231.f_5, 7))
					{
						MISC::SET_BIT(&(Local_231.f_5), 7);
					}
				}
			}
		}
	}
}

int func_155()
{
	if (BitTest(Global_1964670.f_4, 13))
	{
		return 0;
	}
	return 1;
}

void func_156()
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	struct<3> Var9;
	struct<3> Var12;
	struct<3> Var15;
	int iVar18;
	var uVar19;
	struct<3> Var22;
	int iVar25;
	bool bVar26;
	bool bVar27;
	
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_231.f_163) && !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_OBJ(Local_231.f_163), false))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_231.f_163))
		{
			Var0 = { Local_231.f_154 };
			switch (Local_231.f_13)
			{
				case 0:
					Var3 = { CAM::GET_FINAL_RENDERED_CAM_COORD() };
					Var6 = { CAM::GET_FINAL_RENDERED_CAM_ROT(2) };
					Var9 = { (-SYSTEM::SIN(Var6.f_2) * SYSTEM::COS(Var6.f_0)), (SYSTEM::COS(Var6.f_2) * SYSTEM::COS(Var6.f_0)), SYSTEM::SIN(Var6.f_0) };
					Var12 = { 10f, 10f, 10f };
					Var15 = { Var3 + Var9 * Var12 };
					Var0 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Local_231.f_154, ENTITY::GET_ENTITY_HEADING(NETWORK::NET_TO_OBJ(Local_231.f_163)), 0f, -0.1f, 0f) };
					Local_231.f_171 = SHAPETEST::START_SHAPE_TEST_LOS_PROBE(Var0, Var15, 123, NETWORK::NET_TO_OBJ(Local_231.f_163), 7);
					if (Local_231.f_171 != 0)
					{
						Local_231.f_13 = 1;
					}
					break;
				
				case 1:
					Local_231.f_248 = SHAPETEST::GET_SHAPE_TEST_RESULT(Local_231.f_171, &iVar18, &Var22, &uVar19, &iVar25);
					if (Local_231.f_248 == 2)
					{
						if (iVar18 == 0)
						{
							Local_231.f_14 = 1;
							Var22 = { 0f, 0f, 0f };
							if (BitTest(Local_231.f_5, 11) && !func_16())
							{
								MISC::CLEAR_BIT(&(Local_231.f_5), 11);
							}
							if (BitTest(Local_231.f_5, 23))
							{
								MISC::CLEAR_BIT(&(Local_231.f_5), 23);
							}
							func_169();
						}
						else
						{
							Local_231.f_14 = 2;
							if (ENTITY::DOES_ENTITY_EXIST(iVar25))
							{
								if (ENTITY::IS_ENTITY_A_PED(iVar25))
								{
									if (PED::IS_PED_A_PLAYER(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar25)))
									{
										if (func_167(PLAYER::PLAYER_ID(), NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar25))))
										{
											bVar26 = true;
										}
									}
									else
									{
										if (!BitTest(Local_231.f_5, 23))
										{
											MISC::SET_BIT(&(Local_231.f_5), 23);
											bVar27 = true;
											if (BitTest(Local_231.f_5, 11))
											{
												MISC::CLEAR_BIT(&(Local_231.f_5), 11);
											}
										}
										if (BitTest(Local_231.f_5, 23))
										{
											if (ENTITY::DOES_ENTITY_EXIST(Local_593.f_0) && iVar25 == Local_593.f_0)
											{
												if (!BitTest(Local_231.f_5, 31))
												{
													func_166();
													func_165();
													bVar27 = false;
												}
											}
											else if (BitTest(Local_231.f_5, 31))
											{
												func_162();
											}
										}
										else if (BitTest(Local_231.f_5, 31))
										{
											func_162();
										}
										if (bVar27)
										{
											func_161();
										}
										if (!func_144(PLAYER::PLAYER_ID()) && !func_141(PLAYER::PLAYER_ID()))
										{
											if ((func_160(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar25)) || func_159(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar25))) || func_158(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar25)))
											{
												func_140(Global_1837398);
												func_157(&(Local_231.f_265), 0, 0);
											}
											else
											{
												func_169();
											}
										}
									}
									if ((((!BitTest(Local_231.f_5, 11) && !bVar26) && func_47(Global_1964670.f_28)) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(Global_1964670.f_28, iVar25, 511)) && (PED::IS_PED_A_PLAYER(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar25)) && PLAYER::PLAYER_PED_ID() != ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar25)))
									{
										MISC::SET_BIT(&(Local_231.f_5), 11);
										if (BitTest(Local_231.f_5, 23))
										{
											MISC::CLEAR_BIT(&(Local_231.f_5), 23);
										}
										if (BitTest(Local_231.f_5, 31))
										{
											func_162();
										}
									}
								}
								else
								{
									if (!func_16())
									{
										if (BitTest(Local_231.f_5, 11))
										{
											MISC::CLEAR_BIT(&(Local_231.f_5), 11);
										}
									}
									if (BitTest(Local_231.f_5, 23))
									{
										MISC::CLEAR_BIT(&(Local_231.f_5), 23);
									}
									if (BitTest(Local_231.f_5, 31))
									{
										func_162();
									}
									func_169();
								}
							}
							else
							{
								func_169();
							}
							Local_231.f_171 = 0;
							Local_231.f_13 = 0;
						}
					}
					else if (Local_231.f_248 == 0)
					{
						Local_231.f_13 = 0;
					}
					break;
			}
		}
		else
		{
			NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_231.f_163);
		}
	}
}

void func_157(var uParam0, bool bParam1, bool bParam2)
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

int func_158(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (PED::GET_PED_RELATIONSHIP_GROUP_DEFAULT_HASH(iParam0) == -183807561)
		{
			return 1;
		}
	}
	return 0;
}

int func_159(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if ((((((((((((PED::GET_PED_TYPE(iParam0) == 7 || PED::GET_PED_TYPE(iParam0) == 8) || PED::GET_PED_TYPE(iParam0) == 9) || PED::GET_PED_TYPE(iParam0) == 10) || PED::GET_PED_TYPE(iParam0) == 11) || PED::GET_PED_TYPE(iParam0) == 12) || PED::GET_PED_TYPE(iParam0) == 13) || PED::GET_PED_TYPE(iParam0) == 14) || PED::GET_PED_TYPE(iParam0) == 15) || PED::GET_PED_TYPE(iParam0) == 16) || PED::GET_PED_TYPE(iParam0) == 17) || PED::GET_PED_TYPE(iParam0) == 18) || PED::GET_PED_TYPE(iParam0) == 19)
		{
			return 1;
		}
	}
	return 0;
}

int func_160(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if ((((PED::GET_PED_TYPE(iParam0) == 6 || PED::GET_PED_TYPE(iParam0) == 29) || PED::GET_PED_TYPE(iParam0) == 27) || PED::GET_PED_RELATIONSHIP_GROUP_DEFAULT_HASH(iParam0) == joaat("army")) || PED::GET_PED_RELATIONSHIP_GROUP_DEFAULT_HASH(iParam0) == joaat("COP"))
		{
			return 1;
		}
	}
	return 0;
}

void func_161()
{
	AUDIO::PLAY_SOUND_FRONTEND(-1, "Drone_Scan_Wrong_Ped", func_109(), false);
}

void func_162()
{
	MISC::CLEAR_BIT(&(Local_231.f_5), 31);
	func_163(0);
}

void func_163(bool bParam0)
{
	if (bParam0)
	{
		if (!func_164())
		{
			MISC::SET_BIT(&Global_1964670, 31);
		}
	}
	else if (func_164())
	{
		MISC::CLEAR_BIT(&Global_1964670, 31);
	}
}

bool func_164()
{
	return BitTest(Global_1964670, 31);
}

void func_165()
{
	AUDIO::PLAY_SOUND_FRONTEND(-1, "Drone_Scan_Right_Ped", func_109(), false);
}

void func_166()
{
	MISC::SET_BIT(&(Local_231.f_5), 31);
	func_163(1);
}

int func_167(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_168(iParam0);
	if (func_71(iVar0))
	{
		if (iVar0 == func_168(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_168(int iParam0)
{
	if (func_71(iParam0))
	{
		return Global_1892925[iParam0 /*615*/].f_10;
	}
	return func_23();
}

void func_169()
{
	if (func_12(&(Local_231.f_265)))
	{
		if (func_10(&(Local_231.f_265), 60000, 0))
		{
			func_61(&(Local_231.f_265));
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) <= 0)
			{
				func_140(Global_1837387);
			}
		}
	}
}

void func_170()
{
	int iVar0;
	float fVar1;
	struct<3> Var2;
	struct<3> Var5;
	int iVar8;
	var uVar9;
	struct<3> Var12;
	int iVar15;
	int iVar16;
	int iVar17;
	
	if (BitTest(Local_231.f_120, 0) || BitTest(Global_1964670.f_4, 7))
	{
		return;
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_231.f_163) && !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_OBJ(Local_231.f_163), false))
	{
		if (NETWORK::IS_ENTITY_IN_GHOST_COLLISION(NETWORK::NET_TO_OBJ(Local_231.f_163)))
		{
			return;
		}
		if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_231.f_163))
		{
			switch (Local_231.f_11)
			{
				case 0:
					fVar1 = (func_175(Local_231.f_244) * 1.5f);
					Var2 = { Local_231.f_154 };
					Var5 = { Local_231.f_154 };
					Local_231.f_170 = SHAPETEST::START_SHAPE_TEST_CAPSULE(Var2, Var5, fVar1, 511, NETWORK::NET_TO_OBJ(Local_231.f_163), 4);
					if (Local_231.f_170 != 0)
					{
						Local_231.f_11 = 1;
					}
					break;
				
				case 1:
					iVar16 = SHAPETEST::GET_SHAPE_TEST_RESULT(Local_231.f_170, &iVar8, &Var12, &uVar9, &iVar15);
					if (iVar16 == 2)
					{
						if (iVar8 == 0)
						{
							Local_231.f_12 = 1;
							Var12 = { 0f, 0f, 0f };
						}
						else
						{
							if (ENTITY::DOES_ENTITY_EXIST(iVar15))
							{
								if (ENTITY::IS_ENTITY_A_VEHICLE(iVar15))
								{
									if (!ENTITY::IS_ENTITY_DEAD(iVar15, false) && ENTITY::GET_ENTITY_MODEL(iVar15) != Local_231.f_244)
									{
										if (ENTITY::GET_ENTITY_SPEED(iVar15) > 0.5f || func_171(ENTITY::GET_ENTITY_MODEL(iVar15)))
										{
											if (!BitTest(Local_231.f_5, 9))
											{
												MISC::SET_BIT(&(Local_231.f_5), 9);
											}
										}
									}
								}
								else if (ENTITY::IS_ENTITY_A_PED(iVar15))
								{
									if (!ENTITY::IS_ENTITY_DEAD(iVar15, false))
									{
										if (!PED::IS_PED_A_PLAYER(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar15)))
										{
											if (Local_231.f_30 == 0)
											{
												iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
												if (iVar0 == 0)
												{
													iVar17 = 85;
												}
												else if (iVar0 == 1)
												{
													iVar17 = 90;
												}
												else
												{
													iVar17 = 79;
												}
												Local_231.f_30 = EVENT::ADD_SHOCKING_EVENT_AT_POSITION(iVar17, Local_231.f_154, 5000f);
												func_157(&(Local_231.f_271), 0, 0);
											}
										}
									}
								}
							}
							Local_231.f_12 = 2;
							PAD::SET_CONTROL_SHAKE(0, 300, 50);
							Local_231.f_170 = 0;
							Local_231.f_11 = 0;
						}
					}
					else if (iVar16 == 0)
					{
						Local_231.f_11 = 0;
					}
					break;
			}
			if (Local_231.f_30 != 0)
			{
				if (func_12(&(Local_231.f_271)))
				{
					if (func_10(&(Local_231.f_271), 5000, 0))
					{
						EVENT::REMOVE_SHOCKING_EVENT(Local_231.f_30);
						func_61(&(Local_231.f_271));
						Local_231.f_30 = 0;
					}
				}
			}
		}
		else
		{
			NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_231.f_163);
		}
	}
}

int func_171(int iParam0)
{
	switch (iParam0)
	{
		case joaat("chernobog"):
		case joaat("dune4"):
		case joaat("dune5"):
		case joaat("skylift"):
		case joaat("taco"):
			return 1;
			break;
	}
	if (func_172(iParam0))
	{
		return 1;
	}
	if (VEHICLE::IS_THIS_MODEL_A_HELI(iParam0) || VEHICLE::IS_THIS_MODEL_A_PLANE(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_172(int iParam0)
{
	if (func_174(iParam0, 1) && !func_173(iParam0))
	{
		return 1;
	}
	switch (iParam0)
	{
		case 1891140410:
			return 1;
			break;
	}
	return 0;
}

int func_173(int iParam0)
{
	switch (iParam0)
	{
		case 707880171:
			return 1;
			break;
	}
	return 0;
}

int func_174(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("faction2"):
		case joaat("buccaneer2"):
		case joaat("chino2"):
		case joaat("moonbeam2"):
		case joaat("primo2"):
		case joaat("voodoo"):
			return 1;
			break;
		
		case joaat("tenf2"):
		case joaat("weevil2"):
		case joaat("brioso3"):
		case joaat("sentinel4"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("sabregt2"):
			if (!Global_262145.f_14790)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("tornado5"):
			if (!Global_262145.f_14791)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("virgo2"):
			if (!Global_262145.f_14789)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("minivan2"):
			if (!Global_262145.f_14792)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("slamvan3"):
			if (!Global_262145.f_14794)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("faction3"):
			if (!Global_262145.f_14793)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("sultanrs"):
		case joaat("banshee2"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("comet3"):
			if (Global_262145.f_19037)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("diablous2"):
			if (Global_262145.f_19039)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("fcr2"):
			if (Global_262145.f_19043)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("elegy"):
			if (Global_262145.f_19040)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("nero2"):
			if (Global_262145.f_19047)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("italigtb2"):
			if (Global_262145.f_19045)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("specter2"):
			if (Global_262145.f_19050)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("technical3"):
			if (Global_262145.f_20923)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("insurgent3"):
			if (Global_262145.f_20924)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("slamvan4"):
		case joaat("slamvan5"):
		case joaat("slamvan6"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("issi4"):
		case joaat("issi5"):
		case joaat("issi6"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("impaler2"):
		case joaat("impaler3"):
		case joaat("impaler4"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("deathbike"):
		case joaat("deathbike2"):
		case joaat("deathbike3"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("monster3"):
		case joaat("monster4"):
		case joaat("monster5"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("dominator4"):
		case joaat("dominator5"):
		case joaat("dominator6"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("bruiser"):
		case joaat("bruiser2"):
		case joaat("bruiser3"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("youga3"):
		case joaat("gauntlet5"):
		case joaat("yosemite3"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("manana2"):
		case joaat("peyote3"):
		case joaat("glendale2"):
			return 1;
			break;
	}
	if (func_173(iParam0))
	{
		return 1;
	}
	return 0;
}

float func_175(int iParam0)
{
	struct<3> Var0;
	struct<3> Var3;
	
	func_176(iParam0, &Var0, &Var3, 1086324736, 1080033280, 1077936128);
	return MISC::ABSF((Var0.f_2 - Var3.f_2));
}

void func_176(int iParam0, var* uParam1, var* uParam2, float fParam3, float fParam4, float fParam5)
{
	int iVar0;
	
	if (STREAMING::IS_MODEL_VALID(iParam0))
	{
		MISC::GET_MODEL_DIMENSIONS(iParam0, uParam1, uParam2);
	}
	else
	{
		iVar0 = func_179(iParam0);
		if (iVar0 != 0)
		{
			func_177(iVar0, uParam1, uParam2, 1086324736, 1080033280, 1077936128);
			return;
		}
	}
	if (SYSTEM::VMAG(*uParam1) <= 0.01f || SYSTEM::VMAG(*uParam2) <= 0.01f)
	{
		if (iParam0 == joaat("kosatka"))
		{
			if (fParam4 < 20.7f)
			{
				fParam4 = 20.7f;
			}
			if (fParam3 < 137.2f)
			{
				fParam3 = 137.2f;
			}
			if (fParam5 < 21.1f)
			{
				fParam5 = 21.1f;
			}
		}
		*uParam1 = (0f - (fParam4 * 0.5f));
		*uParam2 = (0f + (fParam4 * 0.5f));
		uParam1->f_1 = (0f - (fParam3 * 0.5f));
		uParam2->f_1 = (0f + (fParam3 * 0.5f));
		uParam1->f_2 = (0f - (fParam5 * 0.5f));
		uParam2->f_2 = (0f + (fParam5 * 0.5f));
	}
}

void func_177(int iParam0, var* uParam1, var* uParam2, float fParam3, float fParam4, float fParam5)
{
	int iVar0;
	
	func_178(iParam0, &Global_1576486);
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (STREAMING::IS_MODEL_VALID(Global_1576486[iVar0]))
		{
			MISC::GET_MODEL_DIMENSIONS(Global_1576486[iVar0], &(Global_1576490[iVar0 /*3*/]), &(Global_1576497[iVar0 /*3*/]));
		}
		if (SYSTEM::VMAG(Global_1576490[iVar0 /*3*/]) <= 0.01f || SYSTEM::VMAG(Global_1576497[iVar0 /*3*/]) <= 0.01f)
		{
			Global_1576490[iVar0 /*3*/] = (0f - (fParam4 * 0.5f));
			Global_1576497[iVar0 /*3*/] = (0f + (fParam4 * 0.5f));
			Global_1576490[iVar0 /*3*/].f_1 = (0f - (fParam3 * 0.5f));
			Global_1576497[iVar0 /*3*/].f_1 = (0f + (fParam3 * 0.5f));
			Global_1576490[iVar0 /*3*/].f_2 = (0f - (fParam5 * 0.5f));
			Global_1576497[iVar0 /*3*/].f_2 = (0f + (fParam5 * 0.5f));
		}
		Global_1576504[iVar0] = (Global_1576497[iVar0 /*3*/] - Global_1576490[iVar0 /*3*/]);
		Global_1576507[iVar0] = (Global_1576497[iVar0 /*3*/].f_1 - Global_1576490[iVar0 /*3*/].f_1);
		Global_1576510[iVar0] = (Global_1576497[iVar0 /*3*/].f_2 - Global_1576490[iVar0 /*3*/].f_2);
		if (Global_1576504[iVar0] > Global_1576513)
		{
			Global_1576513 = Global_1576504[iVar0];
		}
		if (Global_1576510[iVar0] > Global_1576514)
		{
			Global_1576514 = Global_1576510[iVar0];
		}
		iVar0++;
	}
	Global_1576515 = (Global_1576513 * -0.5f);
	Global_1576518 = (Global_1576513 * 0.5f);
	Global_1576515.f_1 = ((((0.5f * Global_1576507[0]) + Global_1576507[1]) + Global_1576486.f_3) * -1f);
	Global_1576518.f_1 = (0.5f * Global_1576507[0]);
	Global_1576515.f_2 = (Global_1576510[0] * -0.5f);
	Global_1576518.f_2 = (Global_1576510[0] * 0.5f);
	*uParam1 = { Global_1576515 };
	*uParam2 = { Global_1576518 };
}

void func_178(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 1:
			(*uParam1)[0] = joaat("hauler2");
			(*uParam1)[1] = joaat("trailerlarge");
			uParam1->f_3 = -2.6f;
			break;
		
		case 2:
			(*uParam1)[0] = joaat("phantom3");
			(*uParam1)[1] = joaat("trailerlarge");
			uParam1->f_3 = -2.6f;
			break;
		
		case 3:
			(*uParam1)[0] = joaat("nightshark");
			(*uParam1)[1] = joaat("trailersmall2");
			uParam1->f_3 = 0.5f;
			break;
	}
}

int func_179(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = iVar0;
		if (func_180(iVar1) == iParam0)
		{
			return iVar1;
		}
		iVar0++;
	}
	return 0;
}

int func_180(int iParam0)
{
	int iVar0;
	
	iVar0 = (1000 + iParam0);
	return iVar0;
}

void func_181()
{
	int iVar0;
	
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_231.f_163))
	{
		if (func_47(NETWORK::NET_TO_OBJ(Local_231.f_163)))
		{
			iVar0 = func_185(NETWORK::NET_TO_OBJ(Local_231.f_163));
			if (iVar0 != -1)
			{
				if (!func_184(&(Global_1835555.f_404), iVar0) && !func_184(&(Global_1892925[PLAYER::PLAYER_ID() /*615*/].f_542), iVar0))
				{
					func_182(1);
				}
			}
		}
	}
}

void func_182(bool bParam0)
{
	if (bParam0)
	{
		if (func_183())
		{
			if (!BitTest(Global_1964670, 9))
			{
				MISC::SET_BIT(&Global_1964670, 9);
			}
		}
	}
	else if (BitTest(Global_1964670, 9))
	{
		MISC::CLEAR_BIT(&Global_1964670, 9);
	}
}

bool func_183()
{
	return BitTest(Global_1964670, 5);
}

bool func_184(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam1 / 32);
	iVar1 = (iParam1 % 32);
	return BitTest((*uParam0)[iVar0], iVar1);
}

int func_185(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		iVar0 = func_189(iParam0);
		if (iVar0 != -1)
		{
			return iVar0;
		}
		iVar1 = INTERIOR::GET_INTERIOR_FROM_ENTITY(iParam0);
		if (iVar1 != 0)
		{
			iVar2 = 0;
			while (iVar2 < 43)
			{
				iVar3 = iVar2;
				func_186(iVar3);
				if (Global_1956258[iVar2] == iVar1)
				{
					return iVar3;
				}
				iVar2++;
			}
		}
	}
	return -1;
}

void func_186(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (Global_1956258[iVar0] == 0)
	{
		Global_1956258[iVar0] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(func_188(iParam0), func_187(iParam0));
	}
}

char* func_187(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "bkr_biker_dlc_int_03";
		
		case 0:
			return "hei_heist_police_dlc";
		
		case 2:
			return "v_genbank";
		
		case 3:
			return "v_genbank";
		
		case 4:
			return "v_genbank";
		
		case 5:
			return "v_genbank";
		
		case 6:
			return "v_bank4";
		
		case 7:
			return "v_genbank";
		
		case 8:
			return "hei_generic_bank_dlc";
		
		case 9:
			return "v_rockclub";
		
		case 10:
			return "v_factory1";
		
		case 11:
			return "v_factory2";
		
		case 12:
			return "v_factory3";
		
		case 13:
			return "v_factory4";
		
		case 14:
			return "v_farmhouse";
		
		case 15:
			return "gr_gta_milo_bridge";
		
		case 16:
			return "v_recycle";
		
		case 17:
			return "v_lab";
		
		case 18:
			return "v_garagem";
		
		case 19:
			return "v_studio_lo";
		
		case 20:
			return "v_apart_midspaz";
		
		case 21:
			return "v_sheriff";
		
		case 22:
			return "v_sheriff2";
		
		case 23:
			return "dt1_03_carpark";
		
		case 24:
			return "v_carshowroom";
		
		case 27:
			return "v_faceoffice";
		
		case 25:
			return "v_abattoir";
		
		case 26:
			return "V_JEWEL2";
		
		case 28:
			return "smboat";
		
		case 29:
			return "vb_33_garage";
		
		case 30:
			return "v_chopshop";
		
		case 31:
			return "v_methlab";
		
		case 32:
			return "v_office_lobby";
		
		case 33:
			return "v_lab";
		
		case 34:
			return "v_foundry";
		
		case 35:
			return "v_refit";
		
		case 36:
			return "hei_int_mph_carrierhang3";
		
		case 37:
			return "hei_int_mph_carrierhang2";
		
		case 38:
			return "hei_int_mph_carrierhang1";
		
		case 39:
			return "hei_int_mph_carrierupper";
		
		case 40:
			return "hei_int_mph_carriercontrol1";
		
		case 41:
			return "hei_int_mph_carriercontrol2";
		
		case 42:
			return "ch3_01_trlr_int";
		
		default:
	}
	return "";
}

Vector3 func_188(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 983.2747f, -99.3188f, 73.8454f;
		
		case 0:
			return 443.2281f, -984.0744f, 29.6896f;
		
		case 2:
			return -1216.762f, -333.0008f, 36.8508f;
		
		case 3:
			return 145.4168f, -1039.277f, 28.4379f;
		
		case 4:
			return 309.7465f, -277.6442f, 53.2346f;
		
		case 5:
			return -355.4359f, -48.5326f, 48.1064f;
		
		case 6:
			return -109.4503f, 6467.768f, 30.4388f;
		
		case 7:
			return 1179.745f, 2706.985f, 37.1578f;
		
		case 8:
			return -2962.591f, 478.238f, 14.7669f;
		
		case 9:
			return -556.5089f, 286.3181f, 81.1763f;
		
		case 10:
			return -76.6618f, 6222.191f, 32.2412f;
		
		case 11:
			return -100.7106f, 6205.7f, 30.0499f;
		
		case 12:
			return -125.6972f, 6172.923f, 30.0499f;
		
		case 13:
			return -162.4785f, 6155.384f, 30.0499f;
		
		case 14:
			return 2449.785f, 4983.825f, 45.8106f;
		
		case 15:
			return -1426.362f, 6754.506f, 11.7821f;
		
		case 16:
			return -583.2097f, -1599.302f, 26.3052f;
		
		case 17:
			return 3522.845f, 3707.965f, 19.9918f;
		
		case 18:
			return 630f, 4750f, -60f;
		
		case 19:
			return 600f, 4750f, -60f;
		
		case 20:
			return 575f, 4750f, -60f;
		
		case 21:
			return 1853.625f, 3687.826f, 33.2671f;
		
		case 22:
			return -447.5651f, 6013.988f, 30.7164f;
		
		case 23:
			return -28.1023f, -688.8687f, 34.4437f;
		
		case 24:
			return -40.2938f, -1097.321f, 25.4223f;
		
		case 27:
			return -1074.853f, -250.3996f, 36.7388f;
		
		case 25:
			return 982.233f, -2160.382f, 28.4761f;
		
		case 26:
			return -630.4205f, -236.7843f, 37.057f;
		
		case 28:
			return -2032f, -1035f, 5f;
		
		case 29:
			return -1078.561f, -1678.615f, 3.5752f;
		
		case 30:
			return 479.88f, -1318.57f, 28.2f;
		
		case 31:
			return 1392.512f, 3603.185f, 38.5f;
		
		case 32:
			return 105.4557f, -745.4835f, 44.7548f;
		
		case 33:
			return 3522.845f, 3707.965f, 19.9918f;
		
		case 34:
			return 1087.195f, -1988.445f, 28.649f;
		
		case 35:
			return -583.1606f, -282.3967f, 35.394f;
		
		case 36:
			return 3053.565f, -4653.67f, 5.0773f;
		
		case 37:
			return 3058.002f, -4700.8f, 5.0773f;
		
		case 38:
			return 3080.619f, -4772.69f, 5.0773f;
		
		case 39:
			return 3088.469f, -4708.33f, 20.567f;
		
		case 40:
			return 3085.222f, -4690.66f, 26.2522f;
		
		case 41:
			return 3092.459f, -4711.389f, 26.2657f;
		
		case 42:
			return 2329.242f, 2571.494f, 45.6772f;
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_189(int iParam0)
{
	if (func_197(iParam0))
	{
		return 15;
	}
	if (func_195(iParam0))
	{
		return 28;
	}
	if (func_192(iParam0))
	{
		return 36;
	}
	if (func_191(iParam0))
	{
		return 23;
	}
	if (func_190(iParam0))
	{
		return 33;
	}
	return -1;
}

int func_190(int iParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		if ((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 3833.558f, 3666.702f, -20.91209f, 3818.202f, 3654.002f, -26.37315f, 12.25f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 3765.784f, 3661.946f, -15.33658f, 3823.827f, 3654.624f, -24.84368f, 13.75f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 3519.188f, 3724.821f, -0.487321f, 3767.179f, 3661.705f, -32.33569f, 115f, false, true, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_191(int iParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, true), -16.2669f, -685.4531f, 31.3381f, true) <= 80f)
		{
			if ((((((ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, -73.06738f, -689.2972f, 31.96555f, -68.41993f, -676.6198f, 36.63721f, 4.25f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, 25.07854f, -664.3469f, 30.40673f, 14.14475f, -690.1883f, 38.61758f, 16f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, -18.7689f, -659.366f, 30.79917f, -15.31378f, -703.7052f, 38.08809f, 54.5f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, 9.119493f, -710.9459f, 30.83068f, -39.76558f, -693.0358f, 38.08809f, 24.25f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, -69.84457f, -683.3396f, 30.70474f, -39.69342f, -690.2305f, 36.58809f, 17.25f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, -43.32302f, -693.9668f, 30.58809f, -72.39151f, -683.4483f, 39.48361f, 20f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, -39.63783f, -686.181f, 30.58809f, -39.30408f, -662.2571f, 39.48083f, 20f, false, true, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_192(int iParam0)
{
	return ((!ENTITY::IS_ENTITY_DEAD(iParam0, false) && ENTITY::IS_ENTITY_AT_COORD(iParam0, 3042.596f, -4667.915f, 34.26143f, 250f, 300f, 40f, false, true, 0)) || func_193());
}

int func_193()
{
	if (!CAM::IS_SCREEN_FADED_OUT())
	{
		if (SYSTEM::VDIST2(func_194(PLAYER::PLAYER_ID()), 3042.596f, -4667.915f, 34.26143f) <= 25600f)
		{
			if (CAM::IS_SPHERE_VISIBLE(3042.596f, -4667.915f, 34.26143f, 50f))
			{
				return 1;
			}
		}
	}
	return 0;
}

Vector3 func_194(int iParam0)
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), false);
}

bool func_195(int iParam0)
{
	return ((!ENTITY::IS_ENTITY_DEAD(iParam0, false) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -2016.6f, -1039.867f, -3.801932f, -2129.956f, -1003.351f, 22.18234f, 15.75f, false, true, 0)) || func_196());
}

int func_196()
{
	struct<3> Var0;
	
	if (!CAM::IS_SCREEN_FADED_OUT())
	{
		Var0 = { -2073.541f, -1021.104f, 14.99213f };
		if (SYSTEM::VDIST2(func_194(PLAYER::PLAYER_ID()), Var0) <= 25600f)
		{
			if (CAM::IS_SPHERE_VISIBLE(Var0, 60f))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_197(int iParam0)
{
	return ((!ENTITY::IS_ENTITY_DEAD(iParam0, false) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Vector(-3.801932f, -1039.867f, -2016.6f) + Vector(0f, 7773.967f, 654.731f), Vector(22.18234f, -1003.351f, -2129.956f) + Vector(0f, 7773.967f, 654.731f), 15.75f, false, true, 0)) || func_198());
}

int func_198()
{
	struct<3> Var0;
	
	if (!CAM::IS_SCREEN_FADED_OUT())
	{
		Var0 = { Vector(-3.801932f, -1039.867f, -2016.6f) + Vector(0f, 7773.967f, 654.731f) };
		if (SYSTEM::VDIST2(func_194(PLAYER::PLAYER_ID()), Var0) <= 25600f)
		{
			if (CAM::IS_SPHERE_VISIBLE(Var0, 50f))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_199(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_231.f_163))
	{
		if (CAM::DOES_CAM_EXIST(Local_231.f_173) && CAM::IS_CAM_ACTIVE(Local_231.f_173))
		{
			if (CAM::IS_CAM_RENDERING(Local_231.f_173) || iParam0)
			{
				func_262(0);
				func_212(1);
				if ((!func_211() || BitTest(Local_231.f_5, 1)) || func_80())
				{
					HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
				}
				else
				{
					HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
					HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
					HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
					func_261();
					func_209(1);
					iVar0 = INTERIOR::GET_INTERIOR_FROM_ENTITY(NETWORK::NET_TO_ENT(Local_231.f_163));
					if (INTERIOR::IS_VALID_INTERIOR(iVar0))
					{
						Global_1964670.f_30 = iVar0;
						if (!BitTest(Local_231.f_5, 8))
						{
							Local_231.f_127 = func_208(INTERIOR::GET_INTERIOR_HEADING(iVar0));
							INTERIOR::GET_INTERIOR_LOCATION_AND_NAMEHASH(iVar0, &(Local_231.f_151), &(Local_231.f_17));
							MISC::SET_BIT(&(Local_231.f_5), 8);
						}
						iVar1 = 0;
						if (func_207(Local_231.f_154.f_2, 43f, 48.7f))
						{
							iVar1 = 1;
						}
						if (!func_206())
						{
							if (Global_1964670.f_14 == -1f)
							{
								HUD::SET_RADAR_ZOOM_PRECISE(1f);
							}
							else
							{
								HUD::SET_RADAR_ZOOM_PRECISE(Global_1964670.f_14);
							}
						}
						if ((!func_91(PLAYER::PLAYER_ID()) && !func_203(PLAYER::PLAYER_ID())) && !func_202())
						{
							if (!func_201())
							{
								func_200(1);
							}
						}
						if (!func_202())
						{
							HUD::SET_BIGMAP_ACTIVE(false, false);
						}
						if (!BitTest(Global_1964670.f_4, 19))
						{
							HUD::SET_RADAR_AS_INTERIOR_THIS_FRAME(Local_231.f_17, Local_231.f_151, Local_231.f_151.f_1, SYSTEM::FLOOR(Local_231.f_127), iVar1);
						}
					}
					else
					{
						Local_231.f_17 = -1;
						if (!func_206())
						{
							if (Global_1964670.f_14 == -1f)
							{
								HUD::SET_RADAR_ZOOM_PRECISE(0f);
							}
							else
							{
								HUD::SET_RADAR_ZOOM_PRECISE(Global_1964670.f_14);
							}
						}
						if (!func_201() && !func_202())
						{
							func_200(1);
						}
						if (!func_202())
						{
							HUD::SET_BIGMAP_ACTIVE(false, false);
						}
						Global_1964670.f_30 = -1;
						if (BitTest(Local_231.f_5, 8))
						{
							MISC::CLEAR_BIT(&(Local_231.f_5), 8);
						}
					}
				}
			}
		}
	}
}

void func_200(int iParam0)
{
	Global_2699717 = iParam0;
}

bool func_201()
{
	return Global_2699717;
}

bool func_202()
{
	return BitTest(Global_1964670.f_2, 8);
}

int func_203(int iParam0)
{
	if (func_205(iParam0))
	{
		return 1;
	}
	if (func_204(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_204(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_145(iParam0, 9);
	}
	return 0;
}

int func_205(var uParam0)
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 != -1)
	{
		return BitTest(Global_1892925[iVar0 /*615*/].f_1, 0);
	}
	return 0;
}

bool func_206()
{
	return Global_1950690;
}

int func_207(float fParam0, float fParam1, float fParam2)
{
	if (fParam0 >= fParam1 && fParam0 < fParam2)
	{
		return 1;
	}
	return 0;
}

float func_208(float fParam0)
{
	return (fParam0 * 57.29578f);
}

void func_209(bool bParam0)
{
	int iVar0;
	
	if (bParam0)
	{
		Global_102538.f_8 = 1;
	}
	else
	{
		Global_102538.f_8 = 0;
	}
	iVar0 = 0;
	while (iVar0 < 65)
	{
		func_210(iVar0);
		iVar0++;
	}
}

void func_210(int iParam0)
{
	Global_102538.f_217[iParam0] = 1;
	Global_102538.f_216 = 1;
}

bool func_211()
{
	return BitTest(Global_1964670, 4);
}

void func_212(int iParam0)
{
	if (Global_2733190.f_3751 != iParam0)
	{
		Global_2733190.f_3751 = iParam0;
	}
}

void func_213()
{
	float fVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	bool bVar7;
	bool bVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	struct<3> Var14;
	struct<3> Var17;
	float fVar20;
	struct<3> Var21;
	float fVar24;
	float fVar25;
	float fVar26;
	float fVar27;
	struct<3> Var28;
	struct<3> Var31;
	float fVar34;
	float fVar35;
	var uVar36;
	var uVar37;
	struct<3> Var38;
	
	if (BitTest(Local_231.f_5, 1) || func_80())
	{
		return;
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_231.f_163) && !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_OBJ(Local_231.f_163), false))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_231.f_163))
		{
			fVar0 = 40f;
			fVar1 = 19f;
			fVar2 = 14f;
			iVar3 = 1;
			fVar4 = ENTITY::GET_ENTITY_ROLL(NETWORK::NET_TO_OBJ(Local_231.f_163));
			fVar5 = ENTITY::GET_ENTITY_PITCH(NETWORK::NET_TO_OBJ(Local_231.f_163));
			if (func_219())
			{
				fVar1 = 10f;
			}
			fVar6 = (30f * SYSTEM::TIMESTEP());
			func_218();
			PAD::ALLOW_ALTERNATIVE_SCRIPT_CONTROLS_LAYOUT(2);
			func_217(&(Local_231[0]), &(Local_231[1]), &(Local_231[2]), &(Local_231[3]), 0, 0);
			if (PAD::IS_USING_KEYBOARD_AND_MOUSE(0))
			{
				iVar3 = 5;
				Local_231[2] = (Local_231[2] * iVar3);
				Local_231[3] = (Local_231[3] * iVar3);
			}
			if (PAD::IS_LOOK_INVERTED())
			{
				Local_231[3] = (Local_231[3] * -1);
			}
			if (func_10(&(Local_231.f_283), 750, 0))
			{
				if (!PAD::IS_USING_KEYBOARD_AND_MOUSE(0))
				{
					bVar7 = PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, 210);
				}
				else
				{
					bVar7 = (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, 241) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, 242));
					if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, 241))
					{
						bVar8 = true;
					}
				}
				if (bVar7)
				{
					func_157(&(Local_231.f_283), 0, 0);
				}
			}
			if (bVar7 && !func_216())
			{
				if (!PAD::IS_USING_KEYBOARD_AND_MOUSE(0))
				{
					Local_231.f_27++;
				}
				else if (bVar8)
				{
					Local_231.f_27 = (Local_231.f_27 - 1);
				}
				else
				{
					Local_231.f_27++;
				}
				if (AUDIO::HAS_SOUND_FINISHED(Local_231.f_41))
				{
					Local_231.f_41 = AUDIO::GET_SOUND_ID();
					AUDIO::PLAY_SOUND_FRONTEND(Local_231.f_41, "HUD_Zoom_Change", Local_231.f_161, true);
				}
				if (Local_231.f_27 > 2)
				{
					Local_231.f_27 = 0;
				}
				else if (Local_231.f_27 < 0)
				{
					Local_231.f_27 = 2;
				}
			}
			else if (AUDIO::HAS_SOUND_FINISHED(Local_231.f_41))
			{
				AUDIO::STOP_SOUND(Local_231.f_41);
				AUDIO::RELEASE_SOUND_ID(Local_231.f_41);
				Local_231.f_41 = -1;
			}
			Local_231.f_132 = (Local_231.f_132 + (((Local_231.f_130 - Local_231.f_132) * 0.06f) * fVar6));
			CAM::SET_CAM_FOV(Local_231.f_173, Local_231.f_132);
			if (Local_231[2] != 0 || Local_231[3] != 0)
			{
				if (Local_231[2] != 0)
				{
					fVar9 = (1f / (127f / IntToFloat(Local_231[2])));
				}
				else
				{
					fVar9 = 0f;
				}
				if (Local_231[3] != 0)
				{
					fVar10 = (1f / (127f / IntToFloat(Local_231[3])));
				}
				else
				{
					fVar10 = 0f;
				}
				Var14 = { ENTITY::GET_ENTITY_ROTATION(NETWORK::NET_TO_OBJ(Local_231.f_163), 2) };
				fVar11 = (((fVar10 * 0.05f) * fVar6) * Local_231.f_134);
				fVar12 = -(((fVar9 * 0.05f) * fVar6) * Local_231.f_134);
				if (fVar4 != 0f || Local_231[0] != 0)
				{
					if (Local_231[0] != 0)
					{
						fVar20 = (1f / (127f / IntToFloat(Local_231[0])));
						fVar13 = -(((fVar20 * 0.05f) * fVar6) * (fVar0 - 25f));
					}
					else
					{
						if (fVar4 > 0.1f || fVar4 < -0.1f)
						{
							if (fVar4 > 0f)
							{
								fVar20 = -1f;
							}
							else
							{
								fVar20 = 1f;
							}
						}
						if (Var14.f_1 != 0f)
						{
							if (Var14.f_1 < 1.5f && Var14.f_1 > 0f)
							{
								fVar20 = 0.001f;
							}
							else if (Var14.f_1 > -1.5f && Var14.f_1 < 0f)
							{
								fVar20 = -0.001f;
							}
						}
						else
						{
							fVar20 = 0f;
						}
						fVar13 = -(((fVar20 * 0.05f) * fVar6) * (fVar0 - 25f));
					}
				}
				else
				{
					fVar13 = 0f;
				}
				Var17 = { Vector(fVar12, fVar13, fVar11) + Var14 };
				if (fVar4 != 0f)
				{
					if (Local_231[0] == 0)
					{
						if (Var17.f_1 > fVar1)
						{
							Var17.f_1 = fVar1;
						}
						else if (Var17.f_1 < -fVar1)
						{
							Var17.f_1 = -fVar1;
						}
					}
					else if (Var17.f_1 > fVar1)
					{
						Var17.f_1 = fVar1;
					}
					else if (Var17.f_1 < -fVar1)
					{
						Var17.f_1 = -fVar1;
					}
				}
				if (Var17.f_0 > fVar2)
				{
					Var17.f_0 = fVar2;
				}
				else if (Var17.f_0 < -fVar2)
				{
					Var17.f_0 = -fVar2;
				}
				if (!BitTest(Local_231.f_5, 12))
				{
					MISC::SET_BIT(&(Local_231.f_5), 12);
				}
				ENTITY::SET_ENTITY_ROTATION(NETWORK::NET_TO_OBJ(Local_231.f_163), Vector(0f, 0f, 0f) + Vector(Var17.f_2, Var17.f_1, Var17.f_0), 2, true);
			}
			else if ((Local_231[0] != 0 || Local_231[1] != 0) && !func_216())
			{
				Var21 = { ENTITY::GET_ENTITY_ROTATION(NETWORK::NET_TO_OBJ(Local_231.f_163), 2) };
				if (func_216())
				{
					if (func_215())
					{
						fVar25 = -1f;
						Local_231.f_133 = fVar25;
					}
				}
				else
				{
					if (Local_231[0] != 0)
					{
						fVar24 = (1f / (127f / IntToFloat(Local_231[0])));
						Local_231.f_133 = fVar24;
					}
					else
					{
						fVar24 = 0f;
					}
					if (Local_231[1] != 0)
					{
						fVar25 = (1f / (127f / IntToFloat(Local_231[1])));
						Local_231.f_133 = fVar24;
					}
					else
					{
						fVar25 = 0f;
					}
				}
				fVar26 = -(((fVar25 * 0.05f) * fVar6) * fVar0);
				fVar27 = -(((fVar24 * 0.05f) * fVar6) * fVar0);
				if (fVar4 != 0f)
				{
					if (Local_231[0] == 0 || func_216())
					{
						if (fVar4 > 1f || fVar4 < -1f)
						{
							if (fVar4 > 0f)
							{
								fVar24 = -1f;
							}
							else
							{
								fVar24 = 1f;
							}
						}
						if (Var21.f_1 < 1.5f && Var21.f_1 > 0f)
						{
							fVar24 = 0.001f;
						}
						else if (Var21.f_1 > -1.5f && Var21.f_1 < 0f)
						{
							fVar24 = -0.001f;
						}
						fVar27 = -(((fVar24 * 0.05f) * fVar6) * (fVar0 - 25f));
					}
				}
				Var28 = { Vector(0f, fVar27, fVar26) + Var21 };
				if (Var28.f_1 > fVar1)
				{
					Var28.f_1 = fVar1;
				}
				else if (Var28.f_1 < -fVar1)
				{
					Var28.f_1 = -fVar1;
				}
				if (Var28.f_0 > fVar2)
				{
					Var28.f_0 = fVar2;
				}
				else if (Var28.f_0 < -fVar2)
				{
					Var28.f_0 = -fVar2;
				}
				if (BitTest(Local_231.f_5, 12))
				{
					MISC::CLEAR_BIT(&(Local_231.f_5), 12);
				}
				ENTITY::SET_ENTITY_ROTATION(NETWORK::NET_TO_OBJ(Local_231.f_163), Vector(0f, 0f, 0f) + Vector(Var21.f_2, Var28.f_1, Var28.f_0), 2, true);
			}
			else if (!func_215() && !func_216())
			{
				Local_231.f_133 = 0f;
				Var31 = { ENTITY::GET_ENTITY_ROTATION(NETWORK::NET_TO_OBJ(Local_231.f_163), 2) };
				if (fVar4 != 0f || fVar5 != 0f)
				{
					if (Var31.f_1 != 0f)
					{
						if (Var31.f_1 < 0f)
						{
							fVar34 = -1f;
						}
						else
						{
							fVar34 = 1f;
						}
					}
					else
					{
						fVar34 = 0f;
					}
					if (fVar5 != 0f)
					{
						if (Var31.f_0 < 0f)
						{
							fVar35 = -1f;
						}
						else
						{
							fVar35 = 1f;
						}
					}
					else
					{
						fVar35 = 0f;
					}
					if (Var31.f_1 != 0f)
					{
						if (Var31.f_1 < 1.5f && Var31.f_1 > 0f)
						{
							fVar34 = 0.001f;
						}
						else if (Var31.f_1 > -1.5f && Var31.f_1 < 0f)
						{
							fVar34 = -0.001f;
						}
					}
					else
					{
						fVar34 = 0f;
					}
					if (Var31.f_0 != 0f)
					{
						if (Var31.f_0 < 1.5f && Var31.f_0 > 0f)
						{
							fVar35 = 0.001f;
						}
						else if (Var31.f_0 > -1.5f && Var31.f_0 < 0f)
						{
							fVar35 = -0.001f;
						}
					}
					else
					{
						fVar35 = 0f;
					}
					uVar36 = func_214(-(((fVar35 * 0.05f) * fVar6) * (fVar0 - 25f)));
					uVar37 = func_214(-(((fVar34 * 0.05f) * fVar6) * (fVar0 - 25f)));
					Var38 = { Vector(0f, uVar37, uVar36) + Var31 };
					if (BitTest(Local_231.f_5, 12))
					{
						Var38.f_0 = Var31.f_0;
					}
					ENTITY::SET_ENTITY_ROTATION(NETWORK::NET_TO_OBJ(Local_231.f_163), Vector(0f, 0f, 0f) + Vector(Var31.f_2, Var38.f_1, Var38.f_0), 2, true);
				}
			}
		}
		else
		{
			NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_231.f_163);
		}
	}
}

float func_214(float fParam0)
{
	while (fParam0 > 180f)
	{
		fParam0 = (fParam0 - 360f);
	}
	while (fParam0 < -180f)
	{
		fParam0 = (fParam0 + 360f);
	}
	return fParam0;
}

bool func_215()
{
	return BitTest(Local_231.f_5, 22);
}

bool func_216()
{
	return BitTest(Local_231.f_5, 21);
}

void func_217(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)
{
	*uParam0 = SYSTEM::FLOOR((PAD::GET_CONTROL_UNBOUND_NORMAL(2, 218) * 127f));
	*uParam1 = SYSTEM::FLOOR((PAD::GET_CONTROL_UNBOUND_NORMAL(2, 219) * 127f));
	*uParam2 = SYSTEM::FLOOR((PAD::GET_CONTROL_UNBOUND_NORMAL(2, 220) * 127f));
	*uParam3 = SYSTEM::FLOOR((PAD::GET_CONTROL_UNBOUND_NORMAL(2, 221) * 127f));
	if (bParam4)
	{
		if (!PAD::IS_CONTROL_ENABLED(2, 218))
		{
			*uParam0 = SYSTEM::FLOOR((PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(2, 218) * 127f));
		}
		if (!PAD::IS_CONTROL_ENABLED(2, 219))
		{
			*uParam1 = SYSTEM::FLOOR((PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(2, 219) * 127f));
		}
		if (!PAD::IS_CONTROL_ENABLED(2, 220))
		{
			*uParam2 = SYSTEM::FLOOR((PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(2, 220) * 127f));
		}
		if (!PAD::IS_CONTROL_ENABLED(2, 221))
		{
			*uParam3 = SYSTEM::FLOOR((PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(2, 221) * 127f));
		}
	}
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2))
	{
		if (bParam5)
		{
			if (PAD::IS_LOOK_INVERTED())
			{
				*uParam3 = (*uParam3 * -1);
			}
			if (PAD::IS_MOUSE_LOOK_INVERTED())
			{
				*uParam3 = (*uParam3 * -1);
			}
		}
	}
}

void func_218()
{
	if (Local_593.f_2 == 1)
	{
		switch (Local_231.f_27)
		{
			case 0:
				Local_231.f_131 = 90f;
				Local_231.f_130 = 90f;
				break;
			
			case 1:
				Local_231.f_131 = 60f;
				Local_231.f_130 = 60f;
				break;
			
			case 2:
				Local_231.f_131 = 30f;
				Local_231.f_130 = 30f;
				break;
		}
	}
	else
	{
		switch (Local_231.f_27)
		{
			case 0:
				Local_231.f_131 = 90f;
				Local_231.f_130 = 90f;
				break;
			
			case 1:
				Local_231.f_131 = 80f;
				Local_231.f_130 = 80f;
				break;
			
			case 2:
				Local_231.f_131 = 70f;
				Local_231.f_130 = 70f;
				break;
			}
	}
}

bool func_219()
{
	return BitTest(Global_1964670.f_2, 5);
}

void func_220()
{
	if (func_260())
	{
		return;
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_231.f_163) && !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_OBJ(Local_231.f_163), false))
	{
		if (CAM::DOES_CAM_EXIST(Local_231.f_173) && CAM::IS_CAM_RENDERING(Local_231.f_173))
		{
			func_243();
			func_223();
			RECORDING::REPLAY_DISABLE_CAMERA_MOVEMENT_THIS_FRAME();
			func_222(1);
			func_221(2);
		}
	}
}

void func_221(int iParam0)
{
	Global_1576389 = iParam0;
}

void func_222(int iParam0)
{
	Global_1679116.f_1163 = iParam0;
}

void func_223()
{
	if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Local_231.f_174))
	{
		Local_231.f_174 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("DRONE_CAM");
		return;
	}
	func_242("SET_DETONATE_METER_IS_VISIBLE", func_66());
	func_242("SET_SHOCK_METER_IS_VISIBLE", func_241());
	func_242("SET_EMP_METER_IS_VISIBLE", 0);
	func_242("SET_RETICLE_IS_VISIBLE", 1);
	func_242("SET_HEADING_METER_IS_VISIBLE", 0);
	func_242("SET_ZOOM_METER_IS_VISIBLE", 1);
	if (func_240())
	{
		func_242("SET_BOOST_METER_IS_VISIBLE", 1);
	}
	else
	{
		func_242("SET_BOOST_METER_IS_VISIBLE", 0);
	}
	func_242("SET_TRANQUILIZE_METER_IS_VISIBLE", 0);
	func_242("SET_MISSILE_METER_IS_VISIBLE", 0);
	func_242("SET_BOTTOM_LEFT_CORNER_IS_VISIBLE", 0);
	func_242("SET_SOUND_WAVE_IS_VISIBLE", 0);
	func_242("SET_INFO_LIST_IS_VISIBLE", 0);
	if (func_241())
	{
		func_239(Local_231.f_18);
	}
	if (func_66())
	{
		func_238(Local_231.f_19);
	}
	if (func_240())
	{
		func_237(Local_231.f_20);
	}
	func_235(0, "DRONE_ZOOM_1");
	func_235(1, "");
	func_235(2, "DRONE_ZOOM_2");
	func_235(3, "");
	func_235(4, "DRONE_ZOOM_3");
	func_233();
	func_232(Global_1964670.f_5);
	func_230(func_231());
	func_228();
	func_227(SYSTEM::ROUND((ENTITY::GET_ENTITY_HEADING(NETWORK::NET_TO_OBJ(Local_231.f_163)) + 180f)));
	func_224();
	GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(1);
	GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(Local_231.f_174, 255, 255, 255, 0, 0);
}

void func_224()
{
	int iVar0;
	float fVar1;
	
	iVar0 = 1;
	fVar1 = Local_231.f_124;
	if (fVar1 >= (func_226() - IntToFloat((50 * iVar0))))
	{
		if (AUDIO::HAS_SOUND_FINISHED(Local_231.f_39))
		{
			Local_231.f_39 = AUDIO::GET_SOUND_ID();
			AUDIO::PLAY_SOUND_FRONTEND(Local_231.f_39, "Out_Of_Bounds_Alarm_Loop", Local_231.f_161, true);
		}
		if (fVar1 >= (func_226() - IntToFloat((50 * iVar0))) && fVar1 < (func_226() - IntToFloat((45 * iVar0))))
		{
			func_242("SET_WARNING_IS_VISIBLE", 1);
			func_225(0.1f);
		}
		else if (fVar1 >= (func_226() - IntToFloat((45 * iVar0))) && fVar1 < (func_226() - IntToFloat((40 * iVar0))))
		{
			func_242("SET_WARNING_IS_VISIBLE", 1);
			func_225(0.2f);
		}
		else if (fVar1 >= (func_226() - IntToFloat((40 * iVar0))) && fVar1 < (func_226() - IntToFloat((35 * iVar0))))
		{
			func_242("SET_WARNING_IS_VISIBLE", 1);
			func_225(0.3f);
		}
		else if (fVar1 >= (func_226() - IntToFloat((35 * iVar0))) && fVar1 < (func_226() - IntToFloat((30 * iVar0))))
		{
			func_242("SET_WARNING_IS_VISIBLE", 1);
			func_225(0.4f);
		}
		else if (fVar1 >= (func_226() - IntToFloat((30 * iVar0))) && fVar1 < (func_226() - IntToFloat((25 * iVar0))))
		{
			func_242("SET_WARNING_IS_VISIBLE", 1);
			func_225(0.5f);
		}
		else if (fVar1 >= (func_226() - IntToFloat((25 * iVar0))) && fVar1 < (func_226() - IntToFloat((20 * iVar0))))
		{
			func_242("SET_WARNING_IS_VISIBLE", 1);
			func_225(0.6f);
		}
		else if (fVar1 >= (func_226() - IntToFloat((20 * iVar0))) && fVar1 < (func_226() - IntToFloat((15 * iVar0))))
		{
			func_242("SET_WARNING_IS_VISIBLE", 1);
			func_225(0.7f);
		}
		else if (fVar1 >= (func_226() - IntToFloat((15 * iVar0))) && fVar1 < (func_226() - IntToFloat((10 * iVar0))))
		{
			func_242("SET_WARNING_IS_VISIBLE", 1);
			func_225(0.8f);
		}
		else if (fVar1 >= (func_226() - IntToFloat((10 * iVar0))) && fVar1 < (func_226() - IntToFloat((5 * iVar0))))
		{
			func_242("SET_WARNING_IS_VISIBLE", 1);
			func_225(0.9f);
		}
		else if (fVar1 >= (func_226() - IntToFloat((5 * iVar0))) && fVar1 < func_226())
		{
			func_242("SET_WARNING_IS_VISIBLE", 1);
			func_225(1f);
		}
	}
	else
	{
		func_242("SET_WARNING_IS_VISIBLE", 0);
		if (!AUDIO::HAS_SOUND_FINISHED(Local_231.f_39))
		{
			AUDIO::STOP_SOUND(Local_231.f_39);
			AUDIO::RELEASE_SOUND_ID(Local_231.f_39);
			Local_231.f_39 = -1;
		}
	}
}

void func_225(float fParam0)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Local_231.f_174, "SET_WARNING_FLASH_RATE");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fParam0);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

float func_226()
{
	if (Global_1964670.f_13 == 0f)
	{
		return Global_262145.f_24331;
	}
	return Global_1964670.f_13;
}

void func_227(int iParam0)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Local_231.f_174, "SET_HEADING");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam0);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_228()
{
	if (BitTest(Local_231.f_5, 31))
	{
		func_229(1, 18);
	}
	else if (BitTest(Local_231.f_5, 23))
	{
		func_229(1, 6);
	}
	else
	{
		func_229(1, 1);
	}
}

void func_229(bool bParam0, int iParam1)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Local_231.f_174, "SET_RETICLE_ON_TARGET");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bParam0);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_230(bool bParam0)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Local_231.f_174, "SET_RETICLE_OUTER_LINES_VISIBLE");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bParam0);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

bool func_231()
{
	return BitTest(Global_1964670.f_4, 15);
}

void func_232(int iParam0)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Local_231.f_174, "SET_RETICLE_STATE");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam0);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_233()
{
	switch (Local_231.f_27)
	{
		case 0:
			func_234(0);
			break;
		
		case 1:
			func_234(2);
			break;
		
		case 2:
			func_234(4);
			break;
	}
}

void func_234(int iParam0)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Local_231.f_174, "SET_ZOOM");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam0);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_235(int iParam0, char* sParam1)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Local_231.f_174, "SET_ZOOM_LABEL");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam0);
	func_236(sParam1);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_236(char* sParam0)
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

void func_237(int iParam0)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Local_231.f_174, "SET_BOOST_PERCENTAGE");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam0);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_238(int iParam0)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Local_231.f_174, "SET_DETONATE_PERCENTAGE");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam0);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_239(int iParam0)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Local_231.f_174, "SET_SHOCK_PERCENTAGE");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam0);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

bool func_240()
{
	return BitTest(Global_1964670.f_4, 9);
}

bool func_241()
{
	return func_95();
}

void func_242(char* sParam0, bool bParam1)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Local_231.f_174, sParam0);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bParam1);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_243()
{
	if (!BitTest(Global_1964670.f_4, 11))
	{
		if (func_258(0, -1, 0))
		{
			func_257(-1);
			func_256(21, "DRONE_MOVE", -1);
			func_256(20, "DRONE_POSITION", -1);
			if (!PAD::IS_USING_KEYBOARD_AND_MOUSE(0))
			{
				func_255(210, "CELL_284", -1, 0);
				if (func_240())
				{
					func_255(209, "BOOST_DRONE_E", -1, 0);
				}
				if (func_137(Local_593.f_2))
				{
					func_255(func_135(), "FMC_DRONE_SCN", -1, 0);
				}
				if (func_95())
				{
					func_255(func_78(0), "MOVE_DRONE_ST", -1, 0);
				}
				func_255(208, "MOVE_DRONE_UP", -1, 0);
				func_255(207, "MOVE_DRONE_DO", -1, 0);
			}
			else
			{
				func_256(29, "CELL_284", -1);
				if (func_240())
				{
					func_255(203, "BOOST_DRONE_E", -1, 0);
				}
				if (func_137(Local_593.f_2))
				{
					func_255(func_135(), "FMC_DRONE_SCN", -1, 0);
				}
				if (func_95())
				{
					func_255(func_78(1), "MOVE_DRONE_ST", -1, 0);
				}
				func_255(209, "MOVE_DRONE_UP", -1, 0);
				func_255(210, "MOVE_DRONE_DO", -1, 0);
			}
			if (func_66())
			{
				func_255(func_65(), "MOVE_DRONE_EX", -1, 0);
			}
			if (func_155())
			{
				func_255(80, "MOVE_DRONE_RE", -1, 0);
			}
			MISC::SET_BIT(&(Global_1964670.f_4), 11);
		}
	}
	else
	{
		func_244(0, -1, 0, 1, 0, 0, 1, 1, 0);
	}
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(0))
	{
		if (!BitTest(Local_231.f_5, 17))
		{
			MISC::SET_BIT(&(Local_231.f_5), 17);
			MISC::CLEAR_BIT(&(Global_1964670.f_4), 11);
		}
	}
	else if (BitTest(Local_231.f_5, 17))
	{
		MISC::CLEAR_BIT(&(Local_231.f_5), 17);
		MISC::CLEAR_BIT(&(Global_1964670.f_4), 11);
	}
}

void func_244(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (!func_254(&iVar0, 0, iParam1))
	{
		return;
	}
	iParam0 = iParam0;
	if (iParam3 && !func_251(bParam4, bParam8))
	{
		return;
	}
	if (func_249())
	{
		return;
	}
	if (NETWORK::NETWORK_TEXT_CHAT_IS_TYPING())
	{
		return;
	}
	if (iParam7 == 0)
	{
		if (func_246(PLAYER::PLAYER_ID(), 0))
		{
			return;
		}
	}
	if (MISC::IS_PC_VERSION())
	{
		if (MISC::UPDATE_ONSCREEN_KEYBOARD() == 0 || NETWORK::NETWORK_TEXT_CHAT_IS_TYPING())
		{
			return;
		}
	}
	if (Global_24569.f_5326 != 0)
	{
		if (PAD::HAVE_CONTROLS_CHANGED(2))
		{
			iVar1 = 0;
			while (iVar1 < Global_24569.f_5326)
			{
				if (Global_24569.f_5625[iVar1] != 402)
				{
					StringCopy(&(Global_24569.f_5328[iVar1 /*16*/]), PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2, Global_24569.f_5625[iVar1], true), 64);
				}
				else if (Global_24569.f_5640[iVar1] != 32)
				{
					StringCopy(&(Global_24569.f_5328[iVar1 /*16*/]), PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(2, Global_24569.f_5640[iVar1], true), 64);
				}
				iVar1++;
			}
			Global_24569.f_5327 = 0;
		}
		if (!Global_24569.f_5327)
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_24569.f_6263[iVar0 /*10*/], "CLEAR_ALL");
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_24569.f_6263[iVar0 /*10*/], "SET_MAX_WIDTH");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT((1f - (Global_24569.f_5684 / 100f)));
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			if (MISC::IS_PC_VERSION())
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_24569.f_6263[iVar0 /*10*/], "TOGGLE_MOUSE_BUTTONS");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
			iVar1 = 0;
			while (iVar1 < Global_24569.f_5326)
			{
				if (MISC::GET_HASH_KEY(&(Global_24569.f_5553[iVar1 /*4*/])) != MISC::GET_HASH_KEY("PREV"))
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_24569.f_6263[iVar0 /*10*/], "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar1);
					func_245(&(Global_24569.f_5328[iVar1 /*16*/]));
					iVar2 = iVar1 + 1;
					while (iVar2 < 14 && MISC::GET_HASH_KEY(&(Global_24569.f_5553[iVar2 /*4*/])) == MISC::GET_HASH_KEY("PREV"))
					{
						func_245(&(Global_24569.f_5328[iVar2 /*16*/]));
						iVar2++;
					}
					if (Global_24569.f_5610[iVar1] == -1)
					{
						func_236(&(Global_24569.f_5553[iVar1 /*4*/]));
					}
					else
					{
						iVar3 = Global_24569.f_5610[iVar1];
						if (iParam2 >= 0)
						{
							iVar3 = iParam2;
						}
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_24569.f_5553[iVar1 /*4*/]));
						if (bParam5)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iVar3, 70);
						}
						else
						{
							HUD::ADD_TEXT_COMPONENT_INTEGER(iVar3);
						}
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					}
					if (MISC::IS_PC_VERSION())
					{
						if (Global_24569.f_5625[iVar1] != 402 && BitTest(Global_24569.f_5655, iVar1))
						{
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_24569.f_5625[iVar1]);
						}
						else
						{
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(402);
						}
					}
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				iVar1++;
			}
			if (MISC::GET_HASH_KEY(&(Global_4521274.f_16)) != MISC::GET_HASH_KEY(""))
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_24569.f_6263[iVar0 /*10*/], "SET_DATA_SLOT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_24569.f_5326);
				func_245(&Global_4521274);
				if (Global_4521274.f_20 == -1)
				{
					func_236(&(Global_4521274.f_16));
				}
				else
				{
					iVar4 = Global_24569.f_5610[iVar1];
					if (iParam2 >= 0)
					{
						iVar4 = iParam2;
					}
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_4521274.f_16));
					if (bParam5)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iVar4, 70);
					}
					else
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(iVar4);
					}
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_24569.f_6263[iVar0 /*10*/], "SET_BACKGROUND_COLOUR");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(80);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_24569.f_6263[iVar0 /*10*/], "DRAW_INSTRUCTIONAL_BUTTONS");
			if (Global_24569.f_5685)
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
			}
			else
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			}
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			Global_24569.f_5327 = 1;
		}
		iVar1 = 0;
		while (iVar1 < Global_24569.f_5326)
		{
			if (Global_24569.f_5610[iVar1] != -1)
			{
				if (iParam2 > 0)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_24569.f_6263[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar1);
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_24569.f_5553[iVar1 /*4*/]));
					if (bParam5)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam2, 70);
					}
					else
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
					}
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
			}
			iVar1++;
		}
		if (Global_4521274.f_20 != -1)
		{
			if (iParam2 > 0)
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_24569.f_6263[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar1);
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_4521274.f_16));
				if (bParam5)
				{
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam2, 70);
				}
				else
				{
					HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
				}
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
		}
		GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 66);
		GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(0f, 0f, 0f, 0f);
		if (bParam6)
		{
			if (!Global_24569.f_9244)
			{
				HUD::SET_HUD_COMPONENT_POSITION(15, 0f, -0.0375f);
				Global_24569.f_9244 = 1;
			}
		}
		else if (Global_24569.f_9244)
		{
			HUD::RESET_HUD_COMPONENT_VALUES(15);
			Global_24569.f_9244 = 0;
		}
		GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
		if (Global_24569.f_5658)
		{
			GRAPHICS::SET_SCRIPT_GFX_ALIGN(82, 66);
			GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(0f, 0f, 0f, 0f);
			GRAPHICS::DRAW_SCALEFORM_MOVIE(Global_24569.f_6263[iVar0 /*10*/], Global_24569.f_5656, Global_24569.f_5657, 1f, 1f, 255, 255, 255, 255, 0);
			GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
		}
		else
		{
			GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(Global_24569.f_6263[iVar0 /*10*/], 255, 255, 255, 255, 0);
		}
	}
}

void func_245(char* sParam0)
{
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_PLAYER_NAME_STRING(sParam0);
}

bool func_246(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (!func_71(iParam0))
	{
		return 0;
	}
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_247(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1845298[iParam0 /*881*/].f_198 == 8;
	}
	if (iParam1 == 1)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
		{
			bVar0 = PLAYER::GET_PLAYER_TEAM(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_247(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_248();
	}
	if (Global_1575075[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1574922[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_248()
{
	return Global_1574928;
}

int func_249()
{
	struct<3> Var0;
	
	if (Global_21649.f_1 > 3)
	{
		return 1;
	}
	if (func_250())
	{
		Var0 = { 0f, -500f, 0f };
		MOBILE::GET_MOBILE_PHONE_POSITION(&Var0);
		if (Global_21594 == 0)
		{
			if (Var0.f_1 > -119f)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else if (Var0.f_1 > -101f)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_250()
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_251(bool bParam0, bool bParam1)
{
	if (Global_2673273.f_1762.f_701 != 0)
	{
		return 1;
	}
	if ((((((((!CAM::IS_SCREEN_FADED_IN() || (func_253(8, -1) && func_252() != 65)) || (HUD::GET_PAUSE_MENU_STATE() != 0 && !bParam1)) || (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && !bParam0)) || NETWORK::IS_COMMERCE_STORE_OPEN()) || Global_80598) || Global_24569.f_9243) || HUD::IS_WARNING_MESSAGE_ACTIVE()) || Global_102538.f_1514)
	{
		return 0;
	}
	return 1;
}

int func_252()
{
	return Global_1575022;
}

var func_253(int iParam0, int iParam1)
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

int func_254(var uParam0, bool bParam1, int iParam2)
{
	char cVar0[64];
	int iVar16;
	int iVar17;
	int iVar18;
	
	if (iParam2 == -1)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
		{
			iParam2 = NETWORK::NETWORK_GET_INSTANCE_ID_OF_THIS_SCRIPT();
		}
	}
	StringCopy(&cVar0, SCRIPT::GET_THIS_SCRIPT_NAME(), 64);
	StringIntConCat(&cVar0, iParam2, 64);
	iVar16 = MISC::GET_HASH_KEY(&cVar0);
	iVar18 = -1;
	iVar17 = 0;
	while (iVar17 < 6)
	{
		if (Global_24569.f_6324[iVar17] == iVar16)
		{
			*uParam0 = iVar17;
			return 1;
		}
		else if (Global_24569.f_6324[iVar17] == 0)
		{
			iVar18 = iVar17;
		}
		iVar17++;
	}
	if (bParam1)
	{
		if (iVar18 != -1)
		{
			Global_24569.f_6324[iVar18] = iVar16;
			*uParam0 = iVar18;
			return 1;
		}
	}
	return 0;
}

void func_255(int iParam0, char* sParam1, int iParam2, bool bParam3)
{
	char* sVar0;
	
	sVar0 = PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2, iParam0, true);
	if (Global_24569.f_5326 >= 14)
	{
		StringCopy(&Global_4521274, sVar0, 64);
		StringCopy(&(Global_4521274.f_16), sParam1, 16);
		Global_4521274.f_20 = iParam2;
		return;
		return;
	}
	if (!bParam3)
	{
		MISC::SET_BIT(&(Global_24569.f_5655), Global_24569.f_5326);
	}
	StringCopy(&(Global_24569.f_5328[Global_24569.f_5326 /*16*/]), sVar0, 64);
	StringCopy(&(Global_24569.f_5553[Global_24569.f_5326 /*4*/]), sParam1, 16);
	Global_24569.f_5610[Global_24569.f_5326] = iParam2;
	Global_24569.f_5625[Global_24569.f_5326] = iParam0;
	Global_24569.f_5640[Global_24569.f_5326] = 32;
	Global_24569.f_5326++;
}

void func_256(int iParam0, char* sParam1, int iParam2)
{
	char* sVar0;
	
	sVar0 = PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(2, iParam0, true);
	if (Global_24569.f_5326 >= 14)
	{
		StringCopy(&Global_4521274, sVar0, 64);
		StringCopy(&(Global_4521274.f_16), sParam1, 16);
		Global_4521274.f_20 = iParam2;
		return;
		return;
	}
	MISC::CLEAR_BIT(&(Global_24569.f_5655), Global_24569.f_5326);
	StringCopy(&(Global_24569.f_5328[Global_24569.f_5326 /*16*/]), sVar0, 64);
	StringCopy(&(Global_24569.f_5553[Global_24569.f_5326 /*4*/]), sParam1, 16);
	Global_24569.f_5610[Global_24569.f_5326] = iParam2;
	Global_24569.f_5625[Global_24569.f_5326] = 402;
	Global_24569.f_5640[Global_24569.f_5326] = iParam0;
	Global_24569.f_5326++;
}

void func_257(int iParam0)
{
	int iVar0;
	int iVar1;
	
	Global_24569.f_5326 = 0;
	Global_24569.f_5327 = 0;
	iVar0 = 0;
	while (iVar0 < 14)
	{
		StringCopy(&(Global_24569.f_5553[iVar0 /*4*/]), "", 16);
		Global_24569.f_5610[iVar0] = -1;
		Global_24569.f_5625[iVar0] = 402;
		Global_24569.f_5640[iVar0] = 32;
		iVar0++;
	}
	Global_24569.f_5655 = 0;
	StringCopy(&(Global_4521274.f_16), "", 16);
	Global_4521274.f_20 = -1;
	if (MISC::IS_PC_VERSION())
	{
		if (!func_254(&iVar1, 0, iParam0))
		{
			return;
		}
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_24569.f_6263[iVar1 /*10*/]))
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_24569.f_6263[iVar1 /*10*/], "TOGGLE_MOUSE_BUTTONS");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
	}
}

bool func_258(char* sParam0, int iParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	if (!func_254(&iVar0, 1, iParam1))
	{
		return 0;
	}
	bVar1 = true;
	StringCopy(&(Global_24569.f_6238[iVar0 /*4*/]), sParam0, 16);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_24569.f_6238[iVar0 /*4*/])))
	{
		HUD::REQUEST_ADDITIONAL_TEXT(&(Global_24569.f_6238[iVar0 /*4*/]), 9);
		Global_24569.f_6231[iVar0] = 1;
		if (!HUD::HAS_THIS_ADDITIONAL_TEXT_LOADED(&(Global_24569.f_6238[iVar0 /*4*/]), 9))
		{
			bVar1 = false;
		}
	}
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("CommonMenu", false);
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("Shared", true);
	if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("Shared"))
	{
		bVar1 = false;
	}
	Global_24569.f_6217[iVar0] = 1;
	if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("CommonMenu"))
	{
		bVar1 = false;
	}
	if (bParam2)
	{
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPShopSale", false);
		Global_24569.f_6224[iVar0] = 1;
		if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPShopSale"))
		{
			bVar1 = false;
		}
	}
	bVar2 = false;
	StringCopy(&(Global_24569.f_6263[iVar0 /*10*/].f_1), "instructional_buttons", 24);
	bVar2 = func_259(&(Global_24569.f_6263[iVar0 /*10*/]));
	if (!bVar1 || !bVar2)
	{
	}
	return (bVar1 && bVar2);
}

bool func_259(var uParam0)
{
	switch (uParam0->f_9)
	{
		case 0:
			if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
			{
				*uParam0 = GRAPHICS::REQUEST_SCALEFORM_MOVIE(&(uParam0->f_1));
				uParam0->f_9 = 1;
				if (uParam0->f_7)
				{
					if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
					{
						uParam0->f_8 = MISC::GET_GAME_TIMER();
						uParam0->f_9 = 2;
					}
				}
			}
			else
			{
				uParam0->f_8 = MISC::GET_GAME_TIMER();
				uParam0->f_9 = 2;
			}
			break;
		
		case 1:
			if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
			{
				uParam0->f_8 = MISC::GET_GAME_TIMER();
				uParam0->f_9 = 2;
			}
			break;
		
		case 2:
			if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
			{
				uParam0->f_9 = 0;
			}
			break;
	}
	return uParam0->f_9 == 2;
}

bool func_260()
{
	return BitTest(Global_1964670, 7);
}

void func_261()
{
	Global_1574849 = 1;
}

void func_262(int iParam0)
{
	if (func_77())
	{
		return;
	}
	if (!Global_21649.f_1 == 1)
	{
		if (func_266(0))
		{
			func_263(iParam0);
		}
		MISC::SET_BIT(&Global_9503, 2);
	}
}

void func_263(int iParam0)
{
	if (func_77())
	{
		return;
	}
	if (Global_21882)
	{
		if (func_183())
		{
			func_265(1, 1);
		}
		else
		{
			func_265(0, 0);
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
	if (!func_264())
	{
		Global_21649.f_1 = 3;
	}
}

int func_264()
{
	if (Global_21649.f_1 == 1 || Global_21649.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_265(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_266(0))
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

int func_266(int iParam0)
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

void func_267()
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	if (func_289())
	{
		if (func_211())
		{
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_231.f_163))
			{
				if (!HUD::DOES_BLIP_EXIST(Local_231.f_175))
				{
					Local_231.f_175 = func_288(Local_231.f_154, 0);
					HUD::SET_BLIP_SPRITE(Local_231.f_175, func_287());
					if (func_219() && !HUD::DOES_BLIP_EXIST(Local_231.f_176))
					{
						Local_231.f_176 = func_284(PLAYER::PLAYER_PED_ID(), 0, 0);
						HUD::SET_BLIP_SPRITE(Local_231.f_176, 6);
						HUD::SHOW_HEIGHT_ON_BLIP(Local_231.f_176, false);
						HUD::SET_BLIP_SCALE(Local_231.f_176, 0.7f);
						HUD::SET_BLIP_PRIORITY(Local_231.f_176, (13 - 1));
						if (func_281(PLAYER::PLAYER_ID()) != -1)
						{
							func_277(&(Local_231.f_176), func_279(func_281(PLAYER::PLAYER_ID())));
						}
						else
						{
							func_277(&(Local_231.f_176), func_276());
						}
						HUD::SET_BLIP_HIDDEN_ON_LEGEND(Local_231.f_176, true);
					}
				}
				else
				{
					fVar0 = func_275(Local_231.f_128);
					fVar1 = Local_231.f_154;
					fVar2 = Local_231.f_154.f_1;
					HUD::SET_BLIP_DISPLAY(Local_231.f_175, 2);
					HUD::SET_BLIP_COORDS(Local_231.f_175, Local_231.f_154);
					if (((func_16() || func_15()) && HUD::IS_PAUSE_MENU_ACTIVE()) && NETWORK::NETWORK_IS_ACTIVITY_SESSION())
					{
						if (!HUD::IS_PAUSEMAP_IN_INTERIOR_MODE())
						{
							fVar1 = -323.1f;
							fVar2 = -1970.9f;
							HUD::SET_BLIP_COORDS(Local_231.f_175, fVar1, fVar2, 0f);
							HUD::SET_FAKE_PAUSEMAP_PLAYER_POSITION_THIS_FRAME(fVar1, fVar2);
							HUD::HIDE_MINIMAP_INTERIOR_MAP_THIS_FRAME();
						}
					}
					func_270();
					HUD::LOCK_MINIMAP_POSITION(fVar1, fVar2);
					HUD::SET_BLIP_ROTATION(Local_231.f_175, SYSTEM::ROUND(fVar0));
					HUD::SET_BLIP_SCALE(Local_231.f_175, 1f);
					HUD::SET_BLIP_PRIORITY(Local_231.f_175, 9);
					HUD::LOCK_MINIMAP_ANGLE(SYSTEM::ROUND(fVar0));
					if (HUD::DOES_BLIP_EXIST(Local_231.f_176))
					{
						HUD::SET_BLIP_ROTATION(Local_231.f_176, func_269(PLAYER::PLAYER_PED_ID()));
					}
				}
			}
		}
	}
	else
	{
		func_268();
	}
}

void func_268()
{
	if (HUD::DOES_BLIP_EXIST(Local_231.f_175))
	{
		HUD::REMOVE_BLIP(&(Local_231.f_175));
	}
}

int func_269(int iParam0)
{
	float fVar0;
	
	fVar0 = ENTITY::GET_ENTITY_HEADING_FROM_EULERS(iParam0);
	return SYSTEM::ROUND(fVar0);
}

void func_270()
{
	float fVar0;
	float fVar1;
	
	if (func_67(func_93()) == 1)
	{
		if (func_274() && INTERIOR::IS_VALID_INTERIOR(Global_1964670.f_30))
		{
			switch (func_271(func_93()))
			{
				case 3:
					fVar0 = -1230.18f;
					fVar1 = -343.605f;
					break;
				
				case 4:
					fVar0 = -203.814f;
					fVar1 = -848.612f;
					break;
				
				case 5:
					fVar0 = -818.306f;
					fVar1 = -712.065f;
					break;
			}
			HUD::SET_BLIP_COORDS(Local_231.f_175, fVar0, fVar1, 0f);
		}
	}
}

int func_271(int iParam0)
{
	if (func_72(iParam0) == 374)
	{
		return func_272(iParam0, 374);
	}
	return -1;
}

int func_272(int iParam0, int iParam1)
{
	if (func_72(iParam0) == iParam1)
	{
		return func_273(iParam0);
	}
	return -1;
}

int func_273(int iParam0)
{
	if (func_70(iParam0, 0))
	{
		return Global_1892925[iParam0 /*615*/].f_10.f_194;
	}
	return -1;
}

int func_274()
{
	if (HUD::IS_PAUSE_MENU_ACTIVE())
	{
		if (!HUD::IS_PAUSEMAP_IN_INTERIOR_MODE())
		{
			return 1;
		}
	}
	return 0;
}

float func_275(float fParam0)
{
	if (fParam0 > 180f)
	{
		return (fParam0 - 180f);
	}
	return (fParam0 + 180f);
}

int func_276()
{
	return 10;
}

void func_277(var uParam0, int iParam1)
{
	int iVar0;
	
	if (HUD::DOES_BLIP_EXIST(*uParam0))
	{
		iVar0 = func_278(iParam1);
		HUD::SET_BLIP_COLOUR(*uParam0, iVar0);
	}
}

int func_278(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	switch (iParam0)
	{
		case 1:
			return 4;
		
		case 0:
			return 4;
		
		case 6:
			return 59;
		
		case 18:
			return 2;
		
		case 13:
			return 5;
		
		case 116:
			return 38;
		
		case 28:
			return 6;
		
		case 29:
			return 7;
		
		case 30:
			return 8;
		
		case 31:
			return 9;
		
		case 32:
			return 10;
		
		case 33:
			return 11;
		
		case 34:
			return 12;
		
		case 35:
			return 13;
		
		case 36:
			return 14;
		
		case 37:
			return 15;
		
		case 38:
			return 16;
		
		case 39:
			return 17;
		
		case 40:
			return 18;
		
		case 41:
			return 19;
		
		case 42:
			return 20;
		
		case 43:
			return 21;
		
		case 44:
			return 22;
		
		case 45:
			return 23;
		
		case 46:
			return 24;
		
		case 47:
			return 25;
		
		case 48:
			return 26;
		
		case 49:
			return 27;
		
		case 50:
			return 28;
		
		case 51:
			return 29;
		
		case 52:
			return 30;
		
		case 53:
			return 31;
		
		case 54:
			return 32;
		
		case 55:
			return 33;
		
		case 56:
			return 34;
		
		case 57:
			return 35;
		
		case 58:
			return 36;
		
		case 59:
			return 37;
		
		case 9:
			return 57;
		
		case 10:
			return 53;
		
		case 118:
			return 57;
		
		case 14:
			return 56;
		
		case 3:
			return 55;
		
		case 21:
			return 50;
		
		case 15:
			return 51;
		
		case 20:
			return 52;
		
		case 11:
			return 54;
		
		case 23:
			return 58;
		
		case 12:
			return 60;
		
		case 24:
			return 61;
		
		case 4:
			return 62;
		
		default:
	}
	HUD::GET_HUD_COLOUR(iParam0, &iVar0, &iVar1, &iVar2, &iVar3);
	return ((((iVar0 * 16777216) + (iVar1 * 65536)) + iVar2 * 256) + iVar3);
	return 0;
}

int func_279(int iParam0)
{
	int iVar0;
	
	if (iParam0 > -1)
	{
		iVar0 = func_280(iParam0);
		switch (iVar0)
		{
			case 0:
				return 192;
			
			case 1:
				return 193;
			
			case 2:
				return 194;
			
			case 3:
				return 195;
			
			case 4:
				return 196;
			
			case 5:
				return 197;
			
			case 6:
				return 198;
			
			case 7:
				return 199;
			
			case 8:
				return 200;
			
			case 9:
				return 201;
			
			case 10:
				return 202;
			
			case 11:
				return 203;
			
			case 12:
				return 204;
			
			case 13:
				return 205;
			
			case 14:
				return 206;
			}
		
		default:
	}
	return 1;
}

var func_280(int iParam0)
{
	return Global_2649161.f_818.f_44[iParam0 /*2*/].f_1;
}

int func_281(int iParam0)
{
	if (func_71(iParam0))
	{
		if (func_282(iParam0, 1))
		{
			return Global_2649161.f_818.f_11[func_168(iParam0)];
		}
	}
	return -1;
}

int func_282(int iParam0, bool bParam1)
{
	if (!func_71(iParam0))
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_283(iParam0))
		{
			return 0;
		}
	}
	return func_71(Global_1892925[iParam0 /*615*/].f_10);
}

int func_283(int iParam0)
{
	if (func_71(iParam0))
	{
		if (func_71(Global_1892925[iParam0 /*615*/].f_10))
		{
			return Global_1892925[iParam0 /*615*/].f_10 == iParam0;
		}
	}
	return 0;
}

int func_284(int iParam0, bool bParam1, bool bParam2)
{
	return func_285(iParam0, !bParam1, bParam2);
}

int func_285(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = HUD::ADD_BLIP_FOR_ENTITY(iParam0);
	if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
	{
		HUD::SET_BLIP_SCALE(iVar0, func_286(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
		if (!bParam2)
		{
			HUD::SET_BLIP_AS_FRIENDLY(iVar0, bParam1);
		}
		else
		{
			HUD::SET_BLIP_COLOUR(iVar0, 2);
		}
	}
	else if (ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		HUD::SET_BLIP_SCALE(iVar0, func_286(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
		HUD::SET_BLIP_AS_FRIENDLY(iVar0, bParam1);
	}
	else if (ENTITY::IS_ENTITY_AN_OBJECT(iParam0))
	{
		HUD::SET_BLIP_SCALE(iVar0, func_286(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
	}
	return iVar0;
}

float func_286(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

int func_287()
{
	return 627;
}

int func_288(struct<3> Param0, bool bParam3)
{
	int iVar0;
	
	iVar0 = HUD::ADD_BLIP_FOR_COORD(Param0);
	HUD::SET_BLIP_SCALE(iVar0, func_286(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
	HUD::SET_BLIP_ROUTE(iVar0, bParam3);
	return iVar0;
}

int func_289()
{
	return 1;
}

void func_290()
{
	if (func_291())
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_231.f_163) && !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_OBJ(Local_231.f_163), false))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_231.f_163))
			{
				if (!BitTest(Local_231.f_5, 25))
				{
					ENTITY::FREEZE_ENTITY_POSITION(NETWORK::NET_TO_OBJ(Local_231.f_163), true);
					MISC::SET_BIT(&(Local_231.f_5), 25);
				}
			}
			else
			{
				NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_231.f_163);
			}
		}
	}
	else if (BitTest(Local_231.f_5, 25))
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_231.f_163) && !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_OBJ(Local_231.f_163), false))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_231.f_163))
			{
				ENTITY::FREEZE_ENTITY_POSITION(NETWORK::NET_TO_OBJ(Local_231.f_163), false);
				MISC::CLEAR_BIT(&(Local_231.f_5), 25);
			}
			else
			{
				NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_231.f_163);
			}
		}
	}
}

int func_291()
{
	if (func_91(PLAYER::PLAYER_ID()))
	{
		if (BitTest(Global_2731782, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_292()
{
	if (func_293() || func_80())
	{
		if (!func_12(&(Local_231.f_251)))
		{
			func_11(&(Local_231.f_251), 0, 0);
		}
		else if (func_10(&(Local_231.f_251), Global_1964670.f_1, 0) || func_80())
		{
			func_61(&(Local_231.f_249));
			func_319(1);
			func_364(5);
		}
	}
	else if (func_12(&(Local_231.f_251)))
	{
		func_157(&(Local_231.f_251), 0, 0);
	}
}

int func_293()
{
	if ((NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_231.f_163) && ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_OBJ(Local_231.f_163), false)) && !BitTest(Local_231.f_5, 2))
	{
		return 1;
	}
	if (Local_231.f_12 == 2)
	{
		Local_231.f_28 = 1;
		return 1;
	}
	if (BitTest(Local_231.f_5, 1))
	{
		return 1;
	}
	if (func_300())
	{
		Local_231.f_28 = 5;
		return 1;
	}
	if (func_297())
	{
		Local_231.f_28 = 5;
		return 1;
	}
	if (BitTest(Local_231.f_5, 2))
	{
		Local_231.f_28 = 4;
		return 1;
	}
	if (func_296())
	{
		if (!func_12(&(Local_231.f_259)))
		{
			func_11(&(Local_231.f_259), 0, 0);
		}
		else if (func_10(&(Local_231.f_259), 3000, 0))
		{
			Local_231.f_28 = 0;
			return 1;
		}
	}
	if (BitTest(Local_231.f_5, 7))
	{
		Local_231.f_28 = 0;
		return 1;
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_231.f_163))
	{
		if (ENTITY::IS_ENTITY_IN_WATER(NETWORK::NET_TO_OBJ(Local_231.f_163)) || func_89(NETWORK::NET_TO_ENT(Local_231.f_163), 0))
		{
			if (BitTest(Local_231.f_5, 29))
			{
				Local_231.f_28 = 3;
				return 1;
			}
		}
	}
	if (!func_295() && !func_294())
	{
		if (Local_231.f_154.f_2 >= func_226())
		{
			Local_231.f_28 = 5;
			return 1;
		}
	}
	return 0;
}

bool func_294()
{
	return BitTest(Global_1964670.f_2, 0);
}

bool func_295()
{
	return BitTest(Global_1964670.f_2, 1);
}

bool func_296()
{
	return BitTest(Global_1964670, 1);
}

int func_297()
{
	struct<3> Var0;
	
	if (func_299())
	{
		return 0;
	}
	if (func_42(PLAYER::PLAYER_ID(), 1, 1))
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_231.f_163) && !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_OBJ(Local_231.f_163), false))
		{
			Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
			if (func_47(NETWORK::NET_TO_OBJ(Local_231.f_163)))
			{
				Local_231.f_124 = func_298(NETWORK::NET_TO_OBJ(Local_231.f_163), Var0, 1);
				if (Local_231.f_124 > func_226())
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

float func_298(int iParam0, struct<3> Param1, bool bParam4)
{
	struct<3> Var0;
	
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
	}
	else
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, false) };
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Param1, bParam4);
}

bool func_299()
{
	return BitTest(Global_1964670, 6);
}

int func_300()
{
	float fVar0;
	
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_231.f_163) && !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_OBJ(Local_231.f_163), false))
	{
		if (MISC::GET_GROUND_Z_FOR_3D_COORD(Local_231.f_154, &fVar0, true, false))
		{
			Local_231.f_125 = (Local_231.f_154.f_2 - fVar0);
			if (Local_231.f_125 > IntToFloat(Global_262145.f_24330))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_301()
{
	float fVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	float fVar4;
	struct<3> Var5;
	struct<3> Var8;
	struct<3> Var11;
	float fVar14;
	float fVar15;
	int iVar16;
	int iVar17;
	float fVar18;
	float fVar19;
	float fVar20;
	struct<3> Var21;
	float fVar24;
	float fVar25;
	float fVar26;
	float fVar27;
	float fVar28;
	float fVar29;
	float fVar30;
	float fVar31;
	struct<3> Var32;
	float fVar35;
	float fVar36;
	float fVar37;
	float fVar38;
	
	if ((NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_231.f_163) && !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_OBJ(Local_231.f_163), false)) && CAM::DOES_CAM_EXIST(Local_231.f_173))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_231.f_163))
		{
			fVar0 = 0f;
			if (func_240())
			{
				if (!func_216())
				{
					if (func_12(&(Local_231.f_257)))
					{
						iVar1 = func_314();
						if (!func_10(&(Local_231.f_257), iVar1, 0))
						{
							iVar2 = (100 * MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Local_231.f_257)));
							Local_231.f_20 = (iVar2 / iVar1);
						}
						else
						{
							if (func_47(Local_231.f_165))
							{
								ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_231.f_165, NETWORK::NET_TO_OBJ(Local_231.f_163), -1, 0f, 0f, -0.25f, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
							}
							Local_231.f_20 = 100;
							func_61(&(Local_231.f_257));
							if (!AUDIO::HAS_SOUND_FINISHED(Local_231.f_45))
							{
								AUDIO::STOP_SOUND(Local_231.f_45);
								AUDIO::RELEASE_SOUND_ID(Local_231.f_45);
								Local_231.f_45 = -1;
							}
						}
					}
					if (!PAD::IS_USING_KEYBOARD_AND_MOUSE(0))
					{
						bVar3 = PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, 209);
					}
					else
					{
						bVar3 = PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, 203);
					}
					if (((bVar3 && Local_231.f_20 == 100) && !bLocal_608) && func_240())
					{
						fVar0 = 120f;
						if (IntToFloat(Local_231[1]) != 0f)
						{
							func_313(1);
						}
						else
						{
							func_313(0);
						}
						GRAPHICS::ANIMPOSTFX_PLAY("RaceTurbo", 0, false);
						func_11(&(Local_231.f_255), 0, 0);
						func_312(1);
						if (AUDIO::HAS_SOUND_FINISHED(Local_231.f_44))
						{
							Local_231.f_44 = AUDIO::GET_SOUND_ID();
							AUDIO::PLAY_SOUND_FRONTEND(Local_231.f_44, "HUD_Boost_Loop", Local_231.f_161, true);
						}
					}
				}
				else
				{
					fVar0 = 120f;
					if (CAM::DOES_CAM_EXIST(Local_231.f_173))
					{
						if (!CAM::IS_CAM_SHAKING(Local_231.f_173))
						{
							CAM::SHAKE_CAM(Local_231.f_173, "DRONE_BOOST_SHAKE", 1f);
							CAM::SET_CAM_SHAKE_AMPLITUDE(Local_231.f_173, 0.15f);
						}
					}
					if (func_12(&(Local_231.f_255)))
					{
						if (func_10(&(Local_231.f_255), func_311((func_75() || func_74()), 2000, Global_262145.f_24327), 0))
						{
							Local_231.f_20 = 0;
							func_313(0);
							func_312(0);
							func_61(&(Local_231.f_257));
							func_11(&(Local_231.f_257), 0, 0);
							CAM::STOP_CAM_SHAKING(Local_231.f_173, true);
							PAD::STOP_CONTROL_SHAKE(0);
							GRAPHICS::ANIMPOSTFX_STOP("RaceTurbo");
							func_61(&(Local_231.f_255));
							if (!AUDIO::HAS_SOUND_FINISHED(Local_231.f_44))
							{
								AUDIO::STOP_SOUND(Local_231.f_44);
								AUDIO::RELEASE_SOUND_ID(Local_231.f_44);
								Local_231.f_44 = -1;
							}
							if (AUDIO::HAS_SOUND_FINISHED(Local_231.f_45))
							{
								Local_231.f_45 = AUDIO::GET_SOUND_ID();
								AUDIO::PLAY_SOUND_FRONTEND(Local_231.f_45, "HUD_Boost_Recharge_Loop", Local_231.f_161, true);
							}
						}
						else
						{
							fVar4 = (100f / (SYSTEM::TO_FLOAT(func_311((func_75() || func_74()), 2000, Global_262145.f_24327)) / IntToFloat(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Local_231.f_255))));
							Local_231.f_20 = (100 - SYSTEM::ROUND(fVar4));
							PAD::SET_CONTROL_SHAKE(0, func_311((func_75() || func_74()), 2000, Global_262145.f_24327), SYSTEM::ROUND((255f * Local_231.f_135)));
						}
					}
				}
			}
			Var5 = { Local_231.f_154 };
			if (BitTest(Local_231.f_5, 1) || func_80())
			{
				return;
			}
			Var8 = { func_308(func_309()) };
			Var11 = { func_308(func_307(func_309())) };
			MISC::GET_GROUND_Z_FOR_3D_COORD(Var5, &fVar14, true, false);
			if (!func_306())
			{
				if (Local_231.f_10 == 2 || (Var5.f_2 - fVar14) < 2f)
				{
					fVar15 = 24f;
					if (Local_231[1] != 0)
					{
						PAD::DISABLE_CONTROL_ACTION(2, 207, true);
					}
					if (PAD::GET_CONTROL_UNBOUND_NORMAL(2, 207) != 0f || Local_231[1] != 0)
					{
						if ((Var5.f_2 - fVar14) < 0.5f || PAD::GET_CONTROL_UNBOUND_NORMAL(2, 207) != 0f)
						{
							fVar15 = 24f;
						}
						else
						{
							fVar15 = 10f;
						}
					}
					else
					{
						fVar15 = 3f;
					}
					ENTITY::APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(NETWORK::NET_TO_OBJ(Local_231.f_163), 0, 0f, 0f, fVar15, false, true, true, false);
				}
			}
			if (PAD::IS_USING_KEYBOARD_AND_MOUSE(0))
			{
				if (Local_231[2] >= 127)
				{
					Local_231[2] = 127;
				}
				else if (Local_231[2] <= -127)
				{
					Local_231[2] = -127;
				}
				if (Local_231[0] >= 127)
				{
					Local_231[0] = 127;
				}
				else if (Local_231[0] <= -127)
				{
					Local_231[0] = -127;
				}
			}
			if (!PAD::IS_USING_KEYBOARD_AND_MOUSE(0))
			{
				if (PAD::GET_CONTROL_UNBOUND_NORMAL(2, 208) != 0f)
				{
					iVar16 = 1;
				}
				if (PAD::GET_CONTROL_UNBOUND_NORMAL(2, 207) != 0f)
				{
					iVar17 = 1;
				}
			}
			else
			{
				if (PAD::GET_CONTROL_UNBOUND_NORMAL(2, 209) != 0f)
				{
					iVar16 = 1;
				}
				if (PAD::GET_CONTROL_UNBOUND_NORMAL(2, 210) != 0f)
				{
					iVar17 = 1;
				}
			}
			if ((iVar16 && func_305()) || (func_216() && !func_215()))
			{
				fVar20 = Local_231.f_123;
				if (func_216() && !func_215())
				{
					if (!PAD::IS_USING_KEYBOARD_AND_MOUSE(0))
					{
						fVar18 = ((fVar20 + fVar0) / (1f / PAD::GET_CONTROL_UNBOUND_NORMAL(2, 208)));
					}
					else
					{
						fVar18 = ((fVar20 + fVar0) / (1f / PAD::GET_CONTROL_UNBOUND_NORMAL(2, 209)));
					}
				}
				else if (!PAD::IS_USING_KEYBOARD_AND_MOUSE(0))
				{
					fVar18 = ((fVar20 + fVar19) / (1f / PAD::GET_CONTROL_UNBOUND_NORMAL(2, 208)));
				}
				else
				{
					fVar18 = ((fVar20 + fVar19) / (1f / PAD::GET_CONTROL_UNBOUND_NORMAL(2, 209)));
				}
				fVar18 = func_304(fVar18, -149f, 149f);
				Var21 = { Var11 * Vector(fVar18, fVar18, fVar18) };
				if (Var21.f_2 > 149f)
				{
					Var21.f_2 = 149f;
				}
				ENTITY::APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(NETWORK::NET_TO_OBJ(Local_231.f_163), 0, Var21, false, true, true, false);
			}
			else if ((iVar17 && func_305()) && !bLocal_608)
			{
				if (!PAD::IS_USING_KEYBOARD_AND_MOUSE(0))
				{
					fVar24 = ((Local_231.f_123 + fVar25) / (1f / PAD::GET_CONTROL_UNBOUND_NORMAL(2, 207)));
				}
				else
				{
					fVar24 = ((Local_231.f_123 + fVar25) / (1f / PAD::GET_CONTROL_UNBOUND_NORMAL(2, 210)));
				}
				fVar24 = func_304(fVar24, -149f, 149f);
				ENTITY::APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(NETWORK::NET_TO_OBJ(Local_231.f_163), 0, Var11 * Vector(-fVar24, -fVar24, -fVar24), false, true, true, false);
			}
			if ((Local_231[1] > 0 && !func_216()) && !bLocal_608)
			{
				fVar28 = func_303();
				fVar26 = (Local_231.f_123 / (127f / IntToFloat(Local_231[1])));
				fVar27 = (fVar28 / (127f / IntToFloat(Local_231[1])));
				fVar26 = func_304(fVar26, -149f, 149f);
				ENTITY::APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(NETWORK::NET_TO_OBJ(Local_231.f_163), 0, Var8 * Vector(fVar26, fVar26, fVar26), false, true, true, false);
				ENTITY::APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(NETWORK::NET_TO_OBJ(Local_231.f_163), 0, 0f, 0f, fVar27, false, true, true, false);
			}
			else if (((Local_231[1] < 0 && !func_216()) && !bLocal_608) || (func_216() && func_215()))
			{
				if (func_216() && func_215())
				{
					fVar31 = 50f;
					if (func_16())
					{
						fVar29 = (Local_231.f_123 / -1f);
					}
					else
					{
						fVar29 = ((Local_231.f_123 + fVar0) / -1f);
					}
					fVar30 = (fVar31 / -1f);
				}
				else
				{
					fVar31 = func_303();
					fVar29 = ((Local_231.f_123 + fVar0) / (127f / IntToFloat(Local_231[1])));
					fVar30 = (fVar31 / (127f / IntToFloat(Local_231[1])));
				}
				fVar29 = func_304(fVar29, -149f, 149f);
				ENTITY::APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(NETWORK::NET_TO_OBJ(Local_231.f_163), 0, 0f, 0f, -fVar30, false, true, true, false);
				ENTITY::APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(NETWORK::NET_TO_OBJ(Local_231.f_163), 0, Var8 * Vector(fVar29, fVar29, fVar29), false, true, true, false);
			}
			Var32 = { func_302(Var8, Var11) };
			if (!func_216() && !bLocal_608)
			{
				if (Local_231[0] > 0)
				{
					fVar35 = -(Local_231.f_123 / (127f / IntToFloat(Local_231[0])));
					fVar36 = (8f / (127f / IntToFloat(Local_231[0])));
					fVar35 = func_304(fVar35, -149f, 149f);
					ENTITY::APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(NETWORK::NET_TO_OBJ(Local_231.f_163), 0, Var32 * Vector(fVar35, fVar35, fVar35), false, true, true, false);
					ENTITY::APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(NETWORK::NET_TO_OBJ(Local_231.f_163), 0, 0f, 0f, fVar36, false, true, true, false);
				}
				else if (Local_231[0] < 0)
				{
					fVar37 = -(Local_231.f_123 / (127f / IntToFloat(Local_231[0])));
					fVar38 = (8f / (127f / IntToFloat(Local_231[0])));
					fVar37 = func_304(fVar37, -149f, 149f);
					ENTITY::APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(NETWORK::NET_TO_OBJ(Local_231.f_163), 0, Var32 * Vector(fVar37, fVar37, fVar37), false, true, true, false);
					ENTITY::APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(NETWORK::NET_TO_OBJ(Local_231.f_163), 0, 0f, 0f, -fVar38, false, true, true, false);
				}
			}
		}
		else
		{
			NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_231.f_163);
		}
	}
}

Vector3 func_302(struct<3> Param0, struct<3> Param3)
{
	return ((Param0.f_1 * Param3.f_2) - (Param0.f_2 * Param3.f_1)), ((Param0.f_2 * Param3.f_0) - (Param0.f_0 * Param3.f_2)), ((Param0.f_0 * Param3.f_1) - (Param0.f_1 * Param3.f_0));
}

float func_303()
{
	return 6.4f;
}

float func_304(float fParam0, float fParam1, float fParam2)
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

int func_305()
{
	if (bLocal_608)
	{
		return 0;
	}
	if (func_216() && !func_215())
	{
		return 0;
	}
	return 1;
}

bool func_306()
{
	return BitTest(Global_1964670, 2);
}

Vector3 func_307(struct<2> Param0, var uParam2)
{
	struct<3> Var0;
	
	Var0 = { SYSTEM::SIN(Param0.f_1), (-SYSTEM::SIN(Param0.f_0) * SYSTEM::COS(Param0.f_1)), (SYSTEM::COS(Param0.f_0) * SYSTEM::COS(Param0.f_1)) };
	return Var0;
}

Vector3 func_308(struct<3> Param0)
{
	float fVar0;
	float fVar1;
	
	fVar0 = SYSTEM::VMAG(Param0);
	if (fVar0 != 0f)
	{
		fVar1 = (1f / fVar0);
		Param0 = { Param0 * Vector(fVar1, fVar1, fVar1) };
	}
	else
	{
		Param0.f_0 = 0f;
		Param0.f_1 = 0f;
		Param0.f_2 = 0f;
	}
	return Param0;
}

Vector3 func_309()
{
	struct<3> Var0;
	
	Var0 = { 0f, 1f, 0f };
	func_310(&Var0);
	return Var0;
}

void func_310(var uParam0)
{
	float fVar0;
	float fVar1;
	struct<3> Var2;
	
	fVar0 = SYSTEM::COS(0f);
	fVar1 = SYSTEM::SIN(0f);
	Var2.f_0 = *uParam0;
	Var2.f_1 = ((fVar0 * uParam0->f_1) - (fVar1 * uParam0->f_2));
	Var2.f_2 = ((fVar1 * uParam0->f_1) + (fVar0 * uParam0->f_2));
	*uParam0 = { Var2 };
	fVar0 = SYSTEM::COS(0f);
	fVar1 = SYSTEM::SIN(0f);
	Var2.f_0 = ((fVar0 * *uParam0) + (fVar1 * uParam0->f_2));
	Var2.f_1 = uParam0->f_1;
	Var2.f_2 = ((fVar0 * uParam0->f_2) - (fVar1 * *uParam0));
	*uParam0 = { Var2 };
	fVar0 = SYSTEM::COS(0f);
	fVar1 = SYSTEM::SIN(0f);
	Var2.f_0 = ((fVar0 * *uParam0) - (fVar1 * uParam0->f_1));
	Var2.f_1 = ((fVar1 * *uParam0) + (fVar0 * uParam0->f_1));
	Var2.f_2 = uParam0->f_2;
	*uParam0 = { Var2 };
}

int func_311(bool bParam0, int iParam1, var uParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return uParam2;
}

void func_312(bool bParam0)
{
	if (bParam0)
	{
		if (!BitTest(Local_231.f_5, 21))
		{
			MISC::SET_BIT(&(Local_231.f_5), 21);
		}
	}
	else if (BitTest(Local_231.f_5, 21))
	{
		MISC::CLEAR_BIT(&(Local_231.f_5), 21);
	}
}

void func_313(bool bParam0)
{
	if (bParam0)
	{
		if (!BitTest(Local_231.f_5, 22))
		{
			MISC::SET_BIT(&(Local_231.f_5), 22);
		}
	}
	else if (BitTest(Local_231.f_5, 22))
	{
		MISC::CLEAR_BIT(&(Local_231.f_5), 22);
	}
}

int func_314()
{
	if (func_70(PLAYER::PLAYER_ID(), 0))
	{
		return 5000;
	}
	return func_311((func_75() || func_74()), 2000, Global_262145.f_24328);
}

void func_315()
{
	if (func_67(func_93()) == 1 && INTERIOR::IS_VALID_INTERIOR(Global_1964670.f_30))
	{
		return;
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_231.f_163))
	{
		if (!ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_VEH(Local_231.f_163), false))
		{
			HUD::SET_FAKE_PAUSEMAP_PLAYER_POSITION_THIS_FRAME(Local_231.f_154, Local_231.f_154.f_1);
			HUD::SET_FAKE_GPS_PLAYER_POSITION_THIS_FRAME(Local_231.f_154, Local_231.f_154.f_1, 0);
			if (!INTERIOR::IS_VALID_INTERIOR(Global_1964670.f_30))
			{
				if (!BitTest(Local_231.f_5, 8))
				{
					HUD::HIDE_MINIMAP_INTERIOR_MAP_THIS_FRAME();
				}
				HUD::SET_RADAR_AS_EXTERIOR_THIS_FRAME();
			}
		}
	}
}

void func_316(var uParam0)
{
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(uParam0->f_163))
	{
		if (AUDIO::HAS_SOUND_FINISHED(uParam0->f_43) && uParam0->f_43 == -1)
		{
			uParam0->f_43 = AUDIO::GET_SOUND_ID();
			AUDIO::PLAY_SOUND_FRONTEND(uParam0->f_43, "HUD_Loop", uParam0->f_161, true);
		}
	}
}

void func_317(var uParam0)
{
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(uParam0->f_163))
	{
		if (AUDIO::HAS_SOUND_FINISHED(uParam0->f_33))
		{
			uParam0->f_33 = AUDIO::GET_SOUND_ID();
			AUDIO::PLAY_SOUND_FROM_ENTITY(uParam0->f_33, "Flight_Loop", NETWORK::NET_TO_OBJ(uParam0->f_163), uParam0->f_161, false, 0);
			AUDIO::SET_VARIABLE_ON_SOUND(uParam0->f_33, "DroneRotationalSpeed", uParam0->f_133);
		}
		else
		{
			AUDIO::SET_VARIABLE_ON_SOUND(uParam0->f_33, "DroneRotationalSpeed", uParam0->f_133);
		}
		if (AUDIO::HAS_SOUND_FINISHED(uParam0->f_42))
		{
			AUDIO::RELEASE_SOUND_ID(uParam0->f_42);
			uParam0->f_42 = -1;
		}
	}
}

void func_318()
{
	if (func_42(PLAYER::PLAYER_ID(), 1, 1))
	{
		PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 450, true);
		if (BitTest(Local_231.f_120, 1))
		{
			PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 124, true);
		}
	}
}

void func_319(bool bParam0)
{
	if (bParam0)
	{
		if (!func_320())
		{
			MISC::SET_BIT(&Global_1964670, 13);
		}
	}
	else if (func_320())
	{
		MISC::CLEAR_BIT(&Global_1964670, 13);
	}
}

bool func_320()
{
	return BitTest(Global_1964670, 13);
}

int func_321()
{
	struct<3> Var0;
	
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_231.f_163))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_231.f_163))
		{
			if (!CAM::DOES_CAM_EXIST(Local_231.f_173) && BitTest(Local_231.f_5, 0))
			{
				if (func_348())
				{
					if (func_294())
					{
						func_332(PLAYER::PLAYER_ID(), 0, 33280, 0);
					}
					else
					{
						func_332(PLAYER::PLAYER_ID(), 0, 512, 0);
					}
					HUD::THEFEED_SHOW();
					Local_231.f_173 = CAM::CREATE_CAMERA(26379945, true);
					CAM::SET_CAM_FOV(Local_231.f_173, Local_231.f_129);
					CAM::SET_CAM_NEAR_CLIP(Local_231.f_173, 0.01f);
					CAM::SET_CAM_NEAR_DOF(Local_231.f_173, 0.01f);
					if (!BitTest(Global_1964670.f_4, 17))
					{
						GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
					}
					Var0 = { func_331() };
					CAM::HARD_ATTACH_CAM_TO_ENTITY(Local_231.f_173, NETWORK::NET_TO_OBJ(Local_231.f_163), 0f, 0f, 180f, Var0, true);
					PED::SET_POP_CONTROL_SPHERE_THIS_FRAME(Local_231.f_154, 75f, 75f);
					STREAMING::SET_FOCUS_POS_AND_VEL(Local_231.f_154, CAM::GET_CAM_ROT(Local_231.f_173, 2));
					ENTITY::SET_ENTITY_INVINCIBLE(NETWORK::NET_TO_OBJ(Local_231.f_163), true, 0);
					if (!func_294())
					{
						if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE() && STREAMING::IS_NEW_LOAD_SCENE_LOADED())
						{
							STREAMING::NEW_LOAD_SCENE_STOP();
						}
					}
					func_329();
					if (AUDIO::HAS_SOUND_FINISHED(Local_231.f_42))
					{
						Local_231.f_42 = AUDIO::GET_SOUND_ID();
						AUDIO::PLAY_SOUND_FRONTEND(Local_231.f_42, "HUD_Startup", Local_231.f_161, true);
					}
					func_267();
					func_223();
					func_199(1);
					func_213();
					func_301();
					CAM::RENDER_SCRIPT_CAMS(true, false, 0, true, true, 0);
					Local_231.f_177 = NETWORK::GET_NETWORK_TIME();
					func_327(0);
					func_326(1);
					func_325(1);
					func_323(158);
					MISC::SET_BIT(&(Local_133[PLAYER::PLAYER_ID() /*3*/]), 0);
					func_322(1);
					return 1;
				}
				else if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
				}
			}
			else
			{
				if (CAM::DOES_CAM_EXIST(Local_231.f_173))
				{
				}
				if (!BitTest(Local_231.f_5, 0))
				{
				}
			}
		}
		else
		{
			NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_231.f_163);
		}
	}
	return 0;
}

void func_322(bool bParam0)
{
	if (bParam0)
	{
		MISC::SET_BIT(&(Global_1964670.f_4), 16);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_1964670.f_4), 16);
	}
}

void func_323(int iParam0)
{
	int iVar0;
	
	if (Global_262145.f_9173)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_2359296[func_324() /*5574*/].f_681.f_4248[iVar0 /*3*/] == iParam0)
		{
			if (Global_1574746.f_1[iVar0] == -1)
			{
				Global_1574746.f_1[iVar0] = iParam0;
				Global_1574746 = 1;
				return;
			}
		}
		iVar0++;
	}
}

int func_324()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_325(bool bParam0)
{
	if (bParam0)
	{
		if (!BitTest(Global_1845298[PLAYER::PLAYER_ID() /*881*/].f_260.f_376, 26))
		{
			MISC::SET_BIT(&(Global_1845298[PLAYER::PLAYER_ID() /*881*/].f_260.f_376), 26);
		}
	}
	else if (BitTest(Global_1845298[PLAYER::PLAYER_ID() /*881*/].f_260.f_376, 26))
	{
		MISC::CLEAR_BIT(&(Global_1845298[PLAYER::PLAYER_ID() /*881*/].f_260.f_376), 26);
	}
}

void func_326(bool bParam0)
{
	if (bParam0)
	{
		if (!func_183())
		{
			MISC::SET_BIT(&Global_1964670, 5);
		}
	}
	else
	{
		if (func_183())
		{
			MISC::CLEAR_BIT(&Global_1964670, 5);
		}
		func_327(0);
	}
}

void func_327(bool bParam0)
{
	if (bParam0)
	{
		if (!func_328())
		{
			MISC::SET_BIT(&Global_1964670, 12);
		}
	}
	else if (func_328())
	{
		MISC::CLEAR_BIT(&Global_1964670, 12);
	}
}

bool func_328()
{
	return BitTest(Global_1964670, 12);
}

void func_329()
{
	if (!AUDIO::IS_AUDIO_SCENE_ACTIVE(func_330()))
	{
		AUDIO::START_AUDIO_SCENE(func_330());
	}
}

char* func_330()
{
	return "GTAO_Hacker_Drone_HUD_Medium_Drone_Scene";
}

Vector3 func_331()
{
	return 0f, -0.038f, -0.004f;
}

void func_332(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	bool bVar13;
	bool bVar14;
	bool bVar15;
	bool bVar16;
	bool bVar17;
	bool bVar18;
	bool bVar19;
	bool bVar20;
	bool bVar21;
	bool bVar22;
	bool bVar23;
	bool bVar24;
	bool bVar25;
	bool bVar26;
	int iVar27;
	int iVar28;
	
	if (bParam1)
	{
		if (SCRIPT::GET_NO_LOADING_SCREEN())
		{
			SCRIPT::SET_NO_LOADING_SCREEN(false);
		}
	}
	if (func_347())
	{
		if (bParam1)
		{
			return;
		}
		else
		{
			iParam3 = 1;
		}
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = iParam2;
		PLAYER::SET_PLAYER_CONTROL(iParam0, bParam1, iVar0);
	}
	else
	{
		bVar1 = true;
		bVar2 = iParam2 & 2 != false;
		bVar3 = iParam2 & 4 != false;
		bVar4 = iParam2 & 8 != false;
		bVar5 = iParam2 & 16 != false;
		bVar6 = iParam2 & 32 != false;
		bVar7 = iParam2 & 64 != false;
		bVar8 = iParam2 & 128 != false;
		bVar9 = iParam2 & 256 != false;
		bVar10 = iParam2 & 512 != false;
		bVar11 = iParam2 & 1024 != false;
		bVar12 = iParam2 & 2048 != false;
		bVar13 = iParam2 & 4096 != false;
		bVar14 = iParam2 & 8192 != false;
		bVar15 = iParam2 & 16384 != false;
		bVar16 = iParam2 & 32768 != false;
		bVar17 = iParam2 & 65536 != false;
		bVar18 = iParam2 & 131072 != false;
		bVar19 = iParam2 & 262144 != false;
		bVar20 = iParam2 & 524288 != false;
		bVar21 = iParam2 & 1048576 != false;
		bVar22 = iParam2 & 2097152 != false;
		bVar23 = iParam2 & 4194304 != false;
		bVar24 = iParam2 & 8388608 != false;
		bVar25 = iParam2 & 16777216 != false;
		if (iParam2 & 33554432 != 0 || NETWORK::NETWORK_IS_ACTIVITY_SESSION())
		{
			bVar1 = false;
		}
		if (!func_345())
		{
			bVar26 = false;
			if (bParam1 == 1)
			{
				bVar26 = true;
			}
			if (bVar16 == 0 && !bVar21)
			{
				bVar26 = true;
			}
			if (bVar10 == 1)
			{
				bVar26 = true;
			}
			if (bVar26)
			{
				return;
			}
		}
		if (bVar18)
		{
		}
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0) && (PLAYER::IS_PLAYER_PLAYING(iParam0) || iParam3 == 1))
		{
			if (iParam3 && ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYER_PED(iParam0), false))
			{
				return;
			}
			iVar27 = PLAYER::GET_PLAYER_PED(iParam0);
			if (!bVar20)
			{
				if ((bVar19 && bParam1 == 0) && NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					NETWORK::FADE_OUT_LOCAL_PLAYER(true);
				}
				else if (bVar14 || ((!func_246(PLAYER::PLAYER_ID(), 0) && !func_344()) && !func_343(PLAYER::PLAYER_ID())))
				{
					ENTITY::SET_ENTITY_VISIBLE(iVar27, !bVar14, false);
				}
				if (!bVar14)
				{
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bVar19)
					{
						NETWORK::FADE_OUT_LOCAL_PLAYER(false);
					}
					Global_2658293[iParam0 /*468*/].f_258 = 0;
				}
			}
			if (bParam1)
			{
				if (bVar1)
				{
					func_340(0, 0, 0);
					if (bVar25)
					{
						STREAMING::CLEAR_FOCUS();
					}
				}
				if (!func_339(iVar27) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(iVar27))
				{
					if (!bVar22)
					{
						ENTITY::SET_ENTITY_COLLISION(iVar27, true, false);
					}
				}
				if (!ENTITY::IS_ENTITY_ATTACHED(iVar27))
				{
					if (!bVar21)
					{
						ENTITY::FREEZE_ENTITY_POSITION(iVar27, false);
					}
					ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iVar27, true);
				}
				else if (!bVar21)
				{
					ENTITY::FREEZE_ENTITY_POSITION(iVar27, false);
				}
				PED::SET_PED_CAN_BE_TARGETTED(iVar27, true);
				PLAYER::SET_PLAYER_INVINCIBLE(iParam0, false);
				PLAYER::SET_PLAYER_INVINCIBLE_BUT_HAS_REACTIONS(iParam0, false);
				if (PED::HAS_PED_HEAD_BLEND_FINISHED(iVar27) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(iVar27))
				{
					PED::FINALIZE_HEAD_BLEND(iVar27);
				}
				PED::SET_PED_CAN_RAGDOLL(iVar27, true);
				if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) == 0)
				{
					func_338();
					func_337();
				}
				if (PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
				{
					if (!bVar23)
					{
					}
				}
				if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
				{
				}
				Global_2658293[iParam0 /*468*/].f_259 = 0;
				if (!bVar24)
				{
					bVar3 = true;
				}
				if (Global_2698455)
				{
					GRAPHICS::TOGGLE_PAUSED_RENDERPHASES(true);
					GRAPHICS::TOGGLE_PAUSED_RENDERPHASES(true);
					Global_2698455 = 0;
				}
				if (Global_2635562.f_2984)
				{
					Global_2635562.f_2984 = 0;
				}
			}
			else
			{
				if (!func_339(iVar27) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(iVar27))
				{
					if (!bVar22)
					{
						ENTITY::SET_ENTITY_COLLISION(iVar27, !bVar15, false);
					}
					if (!ENTITY::IS_ENTITY_ATTACHED(iVar27))
					{
						if (!bVar21)
						{
							ENTITY::FREEZE_ENTITY_POSITION(iVar27, bVar16);
						}
						if (!bVar16)
						{
							ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iVar27, true);
						}
					}
					if (func_336(Global_4718592.f_197291))
					{
						ENTITY::FREEZE_ENTITY_POSITION(iVar27, true);
					}
				}
				if (func_333(1))
				{
					bVar10 = false;
				}
				if (bVar10)
				{
					PLAYER::SET_PLAYER_INVINCIBLE(iParam0, false);
				}
				else
				{
					PLAYER::SET_PLAYER_INVINCIBLE(iParam0, true);
				}
				PED::SET_PED_CAN_BE_TARGETTED(iVar27, bVar17);
				if (bVar3)
				{
					if (!PED::IS_PED_FATALLY_INJURED(iVar27) && !PED::IS_PED_IN_ANY_VEHICLE(iVar27, false))
					{
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(iVar27);
					}
				}
			}
			iVar28 = 0;
			if (bVar2)
			{
				iVar28 |= 2;
			}
			if (bVar3)
			{
				iVar28 |= 4;
			}
			if (bVar4)
			{
				iVar28 |= 8;
			}
			if (bVar5)
			{
				iVar28 |= 16;
			}
			if (bVar6)
			{
				iVar28 |= 32;
			}
			if (bVar7)
			{
				iVar28 |= 64;
			}
			if (bVar8)
			{
				iVar28 |= 128;
			}
			if (bVar9)
			{
				iVar28 |= 256;
			}
			if (bVar10)
			{
				iVar28 |= 512;
			}
			if (bVar11)
			{
				iVar28 |= 1024;
			}
			if (bVar12)
			{
				iVar28 |= 2048;
			}
			if (bVar13)
			{
				iVar28 |= 4096;
			}
			PLAYER::SET_PLAYER_CONTROL(iParam0, bParam1, iVar28);
		}
	}
}

int func_333(int iParam0)
{
	if (iParam0 && Global_1575066)
	{
		if (func_334())
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

int func_334()
{
	if (func_335())
	{
		return 1;
	}
	return Global_1575069;
	return 0;
}

int func_335()
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

bool func_336(int iParam0)
{
	return iParam0 == 17;
}

void func_337()
{
	struct<3> Var0;
	
	Global_2673273.f_1101 = 0;
	Global_2673273.f_1102 = 0;
	Global_2673273.f_1103 = { 9999.9f, 9999.9f, 9999.9f };
	Global_2673273.f_1108 = -1;
	Global_2673273.f_1109 = 0;
	Global_2635562.f_2995 = { Var0 };
}

void func_338()
{
	Global_2635562.f_703 = 0;
	Global_2635562.f_3038 = 0;
	Global_2635562.f_516 = 0;
	Global_2635562.f_607 = 0;
	Global_2658293[PLAYER::PLAYER_ID() /*468*/].f_221 = 0;
	Global_2635562.f_2993 = 0;
}

int func_339(int iParam0)
{
	int iVar0;
	
	if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, true))
	{
		return 1;
	}
	else
	{
		iVar0 = TASK::GET_SCRIPT_TASK_STATUS(iParam0, joaat("script_task_enter_vehicle"));
		if (iVar0 == 0)
		{
			return 1;
		}
	}
	return 0;
}

void func_340(bool bParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::IS_ENTITY_DEAD(iParam1, false))
	{
	}
	if (bParam0 == 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1))
		{
			if (PED::IS_PED_A_PLAYER(iParam1))
			{
				if (!NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam1)))
				{
					iVar0 = 1;
				}
			}
		}
	}
	if (iVar0 == 0)
	{
		if (iParam2 == 1)
		{
			if (bParam0 == 1)
			{
				func_342();
			}
			else if (!BitTest(Global_2621446.f_67, 1))
			{
				if (BitTest(Global_2621446.f_67, 2))
				{
					iVar1 = 0;
					while (iVar1 < 8)
					{
						CAM::SET_CAM_VIEW_MODE_FOR_CONTEXT(iVar1, Global_2621446.f_58[iVar1]);
						iVar1++;
					}
				}
				MISC::SET_BIT(&(Global_2621446.f_67), 1);
			}
		}
		if (func_246(PLAYER::PLAYER_ID(), 0))
		{
			NETWORK::NETWORK_SET_IN_SPECTATOR_MODE_EXTENDED(bParam0, iParam1, true);
		}
		else
		{
			NETWORK::NETWORK_SET_IN_SPECTATOR_MODE(bParam0, iParam1);
		}
		HUD::SET_MINIMAP_IN_SPECTATOR_MODE(bParam0, iParam1);
		func_341(joaat("mpply_is_char_spectating"), bParam0);
	}
}

void func_341(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_BOOL(iVar0, bParam1, true);
	}
}

void func_342()
{
	int iVar0;
	
	if (!NETWORK::NETWORK_IS_IN_SPECTATOR_MODE())
	{
		if (!BitTest(Global_2621446.f_67, 2))
		{
			iVar0 = 0;
			while (iVar0 < 8)
			{
				Global_2621446.f_58[iVar0] = CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(iVar0);
				iVar0++;
			}
			MISC::SET_BIT(&(Global_2621446.f_67), 2);
			MISC::SET_BIT(&(Global_2621446.f_67), 0);
		}
	}
}

int func_343(int iParam0)
{
	if (func_246(iParam0, 0))
	{
		return 1;
	}
	if (func_344())
	{
		if (iParam0 == PLAYER::PLAYER_ID())
		{
			return 1;
		}
	}
	if (BitTest(Global_2658293[iParam0 /*468*/].f_203, 2))
	{
		return 1;
	}
	return 0;
}

bool func_344()
{
	return BitTest(Global_2621446, 3);
}

int func_345()
{
	if (func_346() == 0)
	{
		return 1;
	}
	return 0;
}

int func_346()
{
	return Global_1574635.f_18;
}

int func_347()
{
	if (BitTest(Global_1845298[PLAYER::PLAYER_ID() /*881*/].f_879, 2) && !Global_2686119.f_2847.f_220 == -1)
	{
		return 1;
	}
	return 0;
}

int func_348()
{
	return 1;
}

void func_349()
{
	int iVar0;
	struct<3> Var1;
	bool bVar4;
	float fVar5;
	
	iVar0 = func_361();
	if (func_360(Local_231.f_244) && func_360(iVar0))
	{
		if (!BitTest(Local_231.f_5, 0))
		{
			if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_231.f_163))
			{
				if (!func_294())
				{
					Var1 = { Local_231.f_142 };
					if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
					{
						func_332(PLAYER::PLAYER_ID(), 0, 512, 0);
					}
					if (!BitTest(Local_231.f_5, 18))
					{
						if (STREAMING::NEW_LOAD_SCENE_START_SPHERE(Var1, 100f, 1))
						{
							MISC::SET_BIT(&(Local_231.f_5), 18);
						}
					}
					else if ((!STREAMING::IS_NEW_LOAD_SCENE_ACTIVE() || STREAMING::IS_NEW_LOAD_SCENE_LOADED()) || func_10(&(Local_231.f_354), 7500, 0))
					{
						if (!BitTest(Local_231.f_5, 19))
						{
							if (func_359())
							{
								if (func_356())
								{
									func_61(&(Local_231.f_354));
									MISC::SET_BIT(&(Local_231.f_5), 19);
								}
							}
							else
							{
								if (!func_354(func_355()))
								{
									Local_231.f_142 = { func_355() };
								}
								MISC::SET_BIT(&(Local_231.f_5), 19);
								func_61(&(Local_231.f_354));
							}
						}
					}
				}
				if (BitTest(Local_231.f_5, 19) || func_294())
				{
					if (!BitTest(Local_231.f_5, 20))
					{
						Local_231.f_167 = VEHICLE::CREATE_VEHICLE(iVar0, Local_231.f_142, 0f, false, false, false);
						ENTITY::SET_ENTITY_INVINCIBLE(Local_231.f_167, true, 0);
						ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_231.f_167, Local_231.f_142, false, false, true);
						ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(Local_231.f_167, false, false);
						ENTITY::SET_ENTITY_VISIBLE(Local_231.f_167, false, false);
						MISC::SET_BIT(&(Local_231.f_5), 20);
					}
					else if (func_147(NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(false, 1) + 1, 0, 1))
					{
						if (!BitTest(Local_231.f_5, 30))
						{
							NETWORK::RESERVE_LOCAL_NETWORK_MISSION_OBJECTS(NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(false, 1) + 1);
							MISC::SET_BIT(&(Local_231.f_5), 30);
						}
						if (NETWORK::CAN_REGISTER_MISSION_OBJECTS(1))
						{
							bVar4 = func_353();
							if (func_352(&(Local_231.f_163), Local_231.f_244, Local_231.f_142, 0, 1, 1, 1, 1, 0, bVar4, 0))
							{
								fVar5 = func_351(Local_231.f_145, Local_231.f_142);
								Global_1964670.f_25 = NETWORK::NET_TO_OBJ(Local_231.f_163);
								ENTITY::SET_ENTITY_INVINCIBLE(NETWORK::NET_TO_OBJ(Local_231.f_163), true, 0);
								Global_2658293[PLAYER::PLAYER_ID() /*468*/].f_434 = { Local_231.f_142 };
								Global_2658293[PLAYER::PLAYER_ID() /*468*/].f_437 = fVar5;
								Local_133[PLAYER::PLAYER_ID() /*3*/].f_2 = Local_231.f_163;
								NETWORK::SET_NETWORK_ID_ALWAYS_EXISTS_FOR_PLAYER(Local_231.f_163, PLAYER::PLAYER_ID(), true);
								INTERIOR::FORCE_ACTIVATING_TRACKING_ON_ENTITY(NETWORK::NET_TO_ENT(Local_231.f_163), 1);
								ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(NETWORK::NET_TO_ENT(Local_231.f_163), true, 1);
								ENTITY::SET_ENTITY_COORDS_NO_OFFSET(func_350(), Local_231.f_142, false, false, true);
								ENTITY::SET_ENTITY_HEADING(func_350(), fVar5);
								NETWORK::SET_ENTITY_GHOSTED_FOR_GHOST_PLAYERS(func_350(), true);
								ENTITY::SET_ENTITY_ROTATION(func_350(), 0f, 0f, fVar5, 2, true);
								NETWORK::NETWORK_USE_HIGH_PRECISION_BLENDING(Local_231.f_163, true);
								ENTITY::SET_ENTITY_HEALTH(func_350(), Global_262145.f_24329, 0, 0);
								NETWORK::SET_NETWORK_ID_CAN_MIGRATE(Local_231.f_163, false);
								ENTITY::SET_ENTITY_RECORDS_COLLISIONS(NETWORK::NET_TO_ENT(Local_231.f_163), true);
								PED::SET_POP_CONTROL_SPHERE_THIS_FRAME(Local_231.f_142, 100f, 200f);
								STREAMING::SET_FOCUS_POS_AND_VEL(ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_ENT(Local_231.f_163), true), ENTITY::GET_ENTITY_ROTATION(NETWORK::NET_TO_ENT(Local_231.f_163), 2));
								STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_231.f_244);
								STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
								if (BitTest(Global_1964670.f_4, 22))
								{
									NETWORK::SET_ENTITY_VISIBLE_IN_CUTSCENE(NETWORK::NET_TO_ENT(Local_231.f_163), true, true);
								}
							}
						}
					}
				}
			}
			else
			{
				ENTITY::SET_ENTITY_HAS_GRAVITY(NETWORK::NET_TO_OBJ(Local_231.f_163), false);
				if (func_47(Local_231.f_167))
				{
					if (func_47(NETWORK::NET_TO_ENT(Local_231.f_163)))
					{
						ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_231.f_167, NETWORK::NET_TO_OBJ(Local_231.f_163), -1, 0f, 0f, -0.8f, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
						MISC::SET_BIT(&(Local_231.f_5), 0);
					}
				}
			}
		}
	}
}

int func_350()
{
	if (PLAYER::PLAYER_ID() != -1)
	{
		return Global_1964670.f_25;
	}
	return -1;
}

float func_351(struct<2> Param0, var uParam2, struct<2> Param3, var uParam5)
{
	return MISC::GET_HEADING_FROM_VECTOR_2D((Param3.f_0 - Param0.f_0), (Param3.f_1 - Param0.f_1));
}

int func_352(var uParam0, int iParam1, struct<3> Param2, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12)
{
	if (!NETWORK::CAN_REGISTER_MISSION_OBJECTS(1))
	{
		return 0;
	}
	if (bParam9)
	{
		*uParam0 = NETWORK::OBJ_TO_NET(OBJECT::CREATE_OBJECT_NO_OFFSET(iParam1, Param2, bParam6, bParam5, bParam7, iParam12));
	}
	else
	{
		*uParam0 = NETWORK::OBJ_TO_NET(OBJECT::CREATE_OBJECT(iParam1, Param2, bParam6, bParam5, bParam7));
	}
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
	{
		ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(NETWORK::NET_TO_OBJ(*uParam0), bParam8);
		if (bParam10)
		{
			NETWORK::NETWORK_SET_ENTITY_ONLY_EXISTS_FOR_PARTICIPANTS(NETWORK::NET_TO_OBJ(*uParam0), true);
		}
		if (bParam11)
		{
			ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(*uParam0), false, false);
		}
		if (NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(NETWORK::NET_TO_OBJ(*uParam0)))
		{
			if (bParam5)
			{
				NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, true);
			}
		}
		return 1;
	}
	return 0;
}

int func_353()
{
	return 0;
}

int func_354(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

Vector3 func_355()
{
	return Global_1964670.f_18;
}

int func_356()
{
	if (Local_231.f_16 == 0)
	{
		if (!BitTest(Local_231.f_5, 14))
		{
			Local_231.f_142 = MISC::GET_RANDOM_FLOAT_IN_RANGE((Local_231.f_142 - 1.5f), (Local_231.f_142 + 1.5f));
			Local_231.f_142.f_1 = MISC::GET_RANDOM_FLOAT_IN_RANGE((Local_231.f_142.f_1 - 1.5f), (Local_231.f_142.f_1 + 1.5f));
			Local_231.f_142.f_2 = MISC::GET_RANDOM_FLOAT_IN_RANGE((Local_231.f_142.f_2 + 0.5f), (Local_231.f_142.f_2 + 1.5f));
			if (!func_358(Local_231.f_142))
			{
				MISC::SET_BIT(&(Local_231.f_5), 14);
			}
		}
		else if (BitTest(Local_231.f_5, 15))
		{
			Local_231.f_142 = MISC::GET_RANDOM_FLOAT_IN_RANGE((Local_231.f_142 - 1.5f), (Local_231.f_142 + 1.5f));
			Local_231.f_142.f_1 = MISC::GET_RANDOM_FLOAT_IN_RANGE((Local_231.f_142.f_1 - 1.5f), (Local_231.f_142.f_1 + 1.5f));
			Local_231.f_142.f_2 = MISC::GET_RANDOM_FLOAT_IN_RANGE((Local_231.f_142.f_2 + 0.5f), (Local_231.f_142.f_2 + 1.5f));
			if (!func_358(Local_231.f_142))
			{
				MISC::CLEAR_BIT(&(Local_231.f_5), 15);
			}
		}
		func_357(Local_231.f_142);
	}
	else if (Local_231.f_16 == 1 && !func_358(Local_231.f_142))
	{
		return 1;
	}
	else
	{
		Local_231.f_16 = 0;
		MISC::SET_BIT(&(Local_231.f_5), 15);
	}
	return 0;
}

void func_357(struct<3> Param0)
{
	int iVar0;
	var uVar1;
	struct<3> Var4;
	var uVar7;
	int iVar8;
	
	switch (Local_231.f_15)
	{
		case 0:
			Local_231.f_172 = SHAPETEST::START_SHAPE_TEST_CAPSULE(Param0, Param0, (func_175(Local_231.f_244) * 11f), 511, 0, 4);
			if (Local_231.f_172 != 0)
			{
				Local_231.f_15 = 1;
			}
			break;
		
		case 1:
			iVar8 = SHAPETEST::GET_SHAPE_TEST_RESULT(Local_231.f_172, &iVar0, &Var4, &uVar1, &uVar7);
			if (iVar8 == 2)
			{
				if (iVar0 == 0)
				{
					Local_231.f_16 = 1;
					Var4 = { 0f, 0f, 0f };
				}
				else
				{
					Local_231.f_16 = 2;
					Local_231.f_172 = 0;
					Local_231.f_15 = 0;
				}
			}
			else if (iVar8 == 0)
			{
				Local_231.f_15 = 0;
			}
			break;
	}
}

int func_358(struct<3> Param0)
{
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -1036.27f, -228.704f, 53.76435f, -1096.765f, -258.69f, 35.77808f, 20f, false, true))
	{
		return 1;
	}
	return 0;
}

int func_359()
{
	return 0;
}

bool func_360(int iParam0)
{
	if (iParam0 == 0)
	{
		return 1;
	}
	STREAMING::REQUEST_MODEL(iParam0);
	return STREAMING::HAS_MODEL_LOADED(iParam0);
}

int func_361()
{
	return joaat("blazer5");
}

int func_362()
{
	if (func_363())
	{
		return Global_1950702.f_766 == 0;
	}
	return 0;
}

bool func_363()
{
	return Global_1950702.f_765;
}

void func_364(int iParam0)
{
	if (Local_231.f_245 != iParam0)
	{
		Local_231.f_245 = iParam0;
	}
}

int func_365()
{
	return Local_231.f_245;
}

void func_366()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < SCRIPT::GET_NUMBER_OF_EVENTS(1))
	{
		iVar1 = SCRIPT::GET_EVENT_AT_INDEX(1, iVar0);
		switch (iVar1)
		{
			case 186:
				func_367(iVar0);
				break;
			
			case 174:
				SCRIPT::GET_EVENT_DATA(1, iVar0, &iVar2, 3);
				switch (iVar2)
				{
					case 1799415011:
						break;
				}
				break;
		}
		iVar0++;
	}
}

void func_367(int iParam0)
{
	struct<2> Var0;
	
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_231.f_163))
	{
		if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 13))
		{
			if (ENTITY::DOES_ENTITY_EXIST(Var0.f_0) && NETWORK::NET_TO_ENT(Local_231.f_163) == Var0.f_0)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Var0.f_1))
				{
					if (ENTITY::IS_ENTITY_A_PED(Var0.f_1))
					{
						if (PED::IS_PED_A_PLAYER(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0.f_1)) && PLAYER::PLAYER_PED_ID() != ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0.f_1))
						{
							Local_231.f_28 = 2;
						}
					}
				}
			}
		}
	}
}

void func_368()
{
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_231.f_163))
	{
		if (!ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_VEH(Local_231.f_163), false))
		{
			Local_231.f_154 = { ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(Local_231.f_163), true) };
			Local_231.f_128 = ENTITY::GET_ENTITY_HEADING(NETWORK::NET_TO_VEH(Local_231.f_163));
			if (!func_12(&(Local_231.f_267)))
			{
				func_11(&(Local_231.f_267), 0, 0);
			}
			else if (func_10(&(Local_231.f_267), 1000, 0))
			{
				if (!func_369(Global_2658293[PLAYER::PLAYER_ID() /*468*/].f_434, Local_231.f_154, 0))
				{
					Global_2658293[PLAYER::PLAYER_ID() /*468*/].f_434 = { Local_231.f_154 };
				}
				if (Global_2658293[PLAYER::PLAYER_ID() /*468*/].f_437 != ENTITY::GET_ENTITY_HEADING(NETWORK::NET_TO_VEH(Local_231.f_163)))
				{
					Global_2658293[PLAYER::PLAYER_ID() /*468*/].f_437 = ENTITY::GET_ENTITY_HEADING(NETWORK::NET_TO_VEH(Local_231.f_163));
				}
				func_61(&(Local_231.f_267));
			}
		}
	}
	if (func_47(Local_231.f_167))
	{
		if (ENTITY::IS_ENTITY_VISIBLE(Local_231.f_167))
		{
			ENTITY::SET_ENTITY_VISIBLE(Local_231.f_167, false, false);
		}
	}
	if (func_47(Local_231.f_165))
	{
		if (ENTITY::IS_ENTITY_VISIBLE(Local_231.f_165))
		{
			ENTITY::SET_ENTITY_VISIBLE(Local_231.f_165, false, false);
		}
	}
}

bool func_369(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

void func_370()
{
	if (func_374(4))
	{
		PAD::DISABLE_CONTROL_ACTION(0, 37, false);
		if (!func_373())
		{
			func_371();
			PAD::ENABLE_CONTROL_ACTION(0, 19, true);
			PAD::ENABLE_CONTROL_ACTION(0, 166, true);
			PAD::ENABLE_CONTROL_ACTION(0, 167, true);
			PAD::ENABLE_CONTROL_ACTION(0, 168, true);
			PAD::ENABLE_CONTROL_ACTION(0, 169, true);
			PAD::ENABLE_CONTROL_ACTION(2, 218, true);
			PAD::ENABLE_CONTROL_ACTION(2, 219, true);
			PAD::ENABLE_CONTROL_ACTION(2, 220, true);
			PAD::ENABLE_CONTROL_ACTION(2, 221, true);
			PAD::ENABLE_CONTROL_ACTION(2, 205, true);
			PAD::ENABLE_CONTROL_ACTION(2, 206, true);
			PAD::ENABLE_CONTROL_ACTION(2, 207, true);
			PAD::ENABLE_CONTROL_ACTION(2, 208, true);
			PAD::ENABLE_CONTROL_ACTION(2, 209, true);
			PAD::ENABLE_CONTROL_ACTION(2, 210, true);
			PAD::ENABLE_CONTROL_ACTION(2, 202, true);
			PAD::ENABLE_CONTROL_ACTION(2, 51, true);
			PAD::ENABLE_CONTROL_ACTION(2, 190, true);
			PAD::ENABLE_CONTROL_ACTION(2, 189, true);
			PAD::ENABLE_CONTROL_ACTION(2, 188, true);
			PAD::ENABLE_CONTROL_ACTION(2, 187, true);
			PAD::ENABLE_CONTROL_ACTION(2, 201, true);
			PAD::ENABLE_CONTROL_ACTION(2, 199, true);
			PAD::ENABLE_CONTROL_ACTION(2, 200, true);
			if (PAD::IS_USING_KEYBOARD_AND_MOUSE(0))
			{
				PAD::ENABLE_CONTROL_ACTION(0, 238, true);
				PAD::ENABLE_CONTROL_ACTION(0, 237, true);
				PAD::ENABLE_CONTROL_ACTION(2, 235, true);
				PAD::ENABLE_CONTROL_ACTION(2, 234, true);
				PAD::ENABLE_CONTROL_ACTION(2, 1, true);
				PAD::ENABLE_CONTROL_ACTION(2, 174, true);
				PAD::ENABLE_CONTROL_ACTION(2, 175, true);
				PAD::ENABLE_CONTROL_ACTION(0, 174, true);
				PAD::ENABLE_CONTROL_ACTION(0, 175, true);
				PAD::ENABLE_CONTROL_ACTION(0, 245, true);
				PAD::ENABLE_CONTROL_ACTION(0, 246, true);
				PAD::ENABLE_CONTROL_ACTION(0, 247, true);
				PAD::ENABLE_CONTROL_ACTION(0, 248, true);
			}
			if (HUD::IS_PAUSE_MENU_ACTIVE())
			{
				PAD::ENABLE_CONTROL_ACTION(0, 201, true);
				PAD::ENABLE_CONTROL_ACTION(0, 202, true);
				PAD::ENABLE_CONTROL_ACTION(0, 188, true);
				PAD::ENABLE_CONTROL_ACTION(0, 187, true);
				PAD::ENABLE_CONTROL_ACTION(0, 189, true);
				PAD::ENABLE_CONTROL_ACTION(2, 195, true);
				PAD::ENABLE_CONTROL_ACTION(2, 196, true);
				PAD::ENABLE_CONTROL_ACTION(2, 198, true);
				PAD::ENABLE_CONTROL_ACTION(2, 197, true);
				PAD::ENABLE_CONTROL_ACTION(2, 217, true);
			}
			PAD::ENABLE_CONTROL_ACTION(2, 20, true);
		}
	}
}

void func_371()
{
	func_372();
}

void func_372()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 402)
	{
		PAD::DISABLE_CONTROL_ACTION(0, iVar0, true);
		iVar0++;
	}
}

bool func_373()
{
	return BitTest(Global_1964670.f_2, 4);
}

bool func_374(int iParam0)
{
	return Local_231.f_245 == iParam0;
}

void func_375()
{
	if (func_374(1) || func_374(4))
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_231.f_163))
		{
			if (CAM::DOES_CAM_EXIST(Local_231.f_173) && CAM::IS_CAM_RENDERING(Local_231.f_173))
			{
				if (func_374(4))
				{
					if (!func_354(Local_231.f_154))
					{
						PED::SET_POP_CONTROL_SPHERE_THIS_FRAME(Local_231.f_154, 60f, 200f);
						INTERIOR::ACTIVATE_INTERIOR_GROUPS_USING_CAMERA();
						STREAMING::SET_FOCUS_POS_AND_VEL(Local_231.f_154, ENTITY::GET_ENTITY_VELOCITY(NETWORK::NET_TO_OBJ(Local_231.f_163)));
						if ((MISC::GET_FRAME_COUNT() % 120) == 0)
						{
							PED::SET_SCENARIO_PEDS_SPAWN_IN_SPHERE_AREA(Local_231.f_154, 60f, 30);
						}
					}
				}
			}
		}
	}
}

int func_376(var uParam0)
{
	if (HUD::IS_PAUSE_MENU_ACTIVE() || NETWORK::IS_COMMERCE_STORE_OPEN())
	{
		return 1;
	}
	if (NETWORK::NETWORK_TEXT_CHAT_IS_TYPING())
	{
		return 1;
	}
	if (func_260())
	{
		return 1;
	}
	if (func_343(PLAYER::PLAYER_ID()) && !func_382())
	{
		return 1;
	}
	if (func_91(PLAYER::PLAYER_ID()))
	{
		if (BitTest(Global_2731782, 0))
		{
			return 1;
		}
	}
	if (Global_1935401 || Global_1574974)
	{
		func_381(1);
		return 1;
	}
	if ((func_379(0) || func_378(1)) || func_377())
	{
		*uParam0 = 1;
		return 1;
	}
	return 0;
}

int func_377()
{
	return Global_24430.f_135;
	return 0;
}

bool func_378(bool bParam0)
{
	if (bParam0)
	{
		return (Global_24430.f_4 && Global_24430.f_104 == 4);
	}
	return Global_24430.f_4;
}

int func_379(bool bParam0)
{
	if (PAD::GET_ALLOW_MOVEMENT_WHILE_ZOOMED())
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (func_380(PLAYER::PLAYER_PED_ID()))
			{
				if (PAD::IS_CONTROL_PRESSED(0, 25) || PAD::IS_CONTROL_PRESSED(0, 68))
				{
					return 0;
				}
			}
		}
	}
	if (Global_24430.f_130)
	{
		return 0;
	}
	if (PAD::IS_CONTROL_PRESSED(0, 19) || (!bParam0 && PAD::IS_DISABLED_CONTROL_PRESSED(0, 19)))
	{
		return 1;
	}
	if (MISC::IS_PC_VERSION())
	{
		if (((PAD::IS_CONTROL_PRESSED(0, 166) || PAD::IS_CONTROL_PRESSED(0, 167)) || PAD::IS_CONTROL_PRESSED(0, 168)) || PAD::IS_CONTROL_PRESSED(0, 169))
		{
			return 1;
		}
		if (!bParam0)
		{
			if (((PAD::IS_DISABLED_CONTROL_PRESSED(0, 166) || PAD::IS_DISABLED_CONTROL_PRESSED(0, 167)) || PAD::IS_DISABLED_CONTROL_PRESSED(0, 168)) || PAD::IS_DISABLED_CONTROL_PRESSED(0, 169))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_380(int iParam0)
{
	int iVar0;
	
	if (CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE())
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, true);
			if (((iVar0 == joaat("weapon_sniperrifle") || iVar0 == joaat("weapon_heavysniper")) || iVar0 == joaat("weapon_marksmanrifle")) || iVar0 == joaat("weapon_heavysniper_mk2"))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_381(bool bParam0)
{
	if (bParam0)
	{
		if (!func_14())
		{
			MISC::SET_BIT(&Global_1964670, 20);
		}
	}
	else if (func_14())
	{
		MISC::CLEAR_BIT(&Global_1964670, 20);
	}
}

bool func_382()
{
	return (BitTest(Global_4718592.f_31, 12) && BitTest(Global_1971473, 0));
}

int func_383()
{
	if (func_388())
	{
		return 1;
	}
	if (func_384())
	{
		return 1;
	}
	return 0;
}

int func_384()
{
	if (func_387())
	{
		return 1;
	}
	if (!func_345())
	{
		return 1;
	}
	if (PLAYER::PLAYER_ID() != func_23())
	{
		if (!func_386())
		{
			if (func_343(PLAYER::PLAYER_ID()) && !func_382())
			{
				return 1;
			}
		}
	}
	if (!func_47(PLAYER::PLAYER_PED_ID()) && BitTest(Global_1964670.f_2, 2))
	{
		return 1;
	}
	if (func_87(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	if (func_385(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	return 0;
}

int func_385(int iParam0)
{
	if (BitTest(Global_1845298[iParam0 /*881*/].f_260.f_37, 14))
	{
		return 1;
	}
	if (BitTest(Global_1845298[iParam0 /*881*/].f_260.f_37, 11))
	{
		return 1;
	}
	return 0;
}

bool func_386()
{
	return BitTest(Global_1964670.f_2, 9);
}

bool func_387()
{
	return BitTest(Global_1964670, 0);
}

int func_388()
{
	if (Global_1575066 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 1;
		}
	}
	if (func_395())
	{
		return 1;
	}
	if (Global_2699678)
	{
		return 1;
	}
	if (func_394())
	{
		return 1;
	}
	if (func_393(159))
	{
		if (!func_392())
		{
			return 1;
		}
	}
	if (func_393(157))
	{
		return 1;
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return 1;
	}
	if (func_389() != 0)
	{
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(func_389()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_389()
{
	switch (func_391())
	{
		case 0:
			return func_390();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_390()
{
	switch (Global_2699787)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_391()
{
	return Global_33815;
}

bool func_392()
{
	return Global_2685152.f_726;
}

int func_393(int iParam0)
{
	if (SCRIPT::GET_EVENT_EXISTS(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_394()
{
	return Global_2697072;
}

bool func_395()
{
	return Global_2685152.f_721;
}

void func_396()
{
	SYSTEM::WAIT(0);
}

void func_397(bool bParam0, bool bParam1)
{
	func_100(0);
	if (bParam1)
	{
		Local_231.f_142 = { Local_231.f_148 };
	}
	func_401();
	func_400(1);
	Local_231.f_20 = 100;
	func_399(1);
	func_398(Global_262145.f_28403);
	func_140(Global_1837387);
	if (bParam0)
	{
	}
}

void func_398(float fParam0)
{
	if (Global_1964670.f_13 != fParam0)
	{
		Global_1964670.f_13 = fParam0;
	}
}

void func_399(bool bParam0)
{
	if (bParam0)
	{
		if (!func_306())
		{
			MISC::SET_BIT(&Global_1964670, 2);
		}
	}
	else if (func_306())
	{
		MISC::CLEAR_BIT(&Global_1964670, 2);
	}
}

void func_400(bool bParam0)
{
	if (bParam0)
	{
		if (!func_211())
		{
			MISC::SET_BIT(&Global_1964670, 4);
		}
	}
	else if (func_211())
	{
		MISC::CLEAR_BIT(&Global_1964670, 4);
	}
}

void func_401()
{
	Local_231.f_123 = 70f;
	Local_231.f_134 = 40f;
	Local_231.f_244 = joaat("ba_prop_battle_drone_quad");
	Global_1964670.f_1 = 1500;
	Local_231.f_129 = 90f;
	Local_231.f_132 = 90f;
	Local_231.f_174 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("DRONE_CAM");
	Local_231.f_161 = "GTAO_Drone_Sounds";
}

void func_402(bool bParam0)
{
	int iVar0;
	var uVar1;
	int iVar2;
	
	MISC::CLEAR_BIT(&(Global_1964670.f_4), 11);
	MISC::CLEAR_BIT(&(Global_1964670.f_4), 12);
	MISC::CLEAR_BIT(&(Global_1964670.f_4), 20);
	Local_231.f_121 = 0;
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_231.f_163))
	{
		NETWORK::SET_NETWORK_ID_CAN_MIGRATE(Local_231.f_163, true);
		if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_231.f_163))
		{
			if (!BitTest(Local_231.f_6, 2))
			{
				if (func_447())
				{
					if (func_47(PLAYER::PLAYER_PED_ID()))
					{
						FIRE::ADD_OWNED_EXPLOSION(PLAYER::PLAYER_PED_ID(), func_446(), func_445(), func_444(), true, false, 1f);
					}
					else
					{
						FIRE::ADD_EXPLOSION(func_446(), func_445(), func_444(), true, false, 1f, false);
					}
					PAD::SET_CONTROL_SHAKE(0, 300, SYSTEM::ROUND((200f * Local_231.f_135)));
					MISC::SET_BIT(&(Local_231.f_6), 2);
				}
			}
			STREAMING::CLEAR_FOCUS();
			iVar0 = NETWORK::NET_TO_OBJ(Local_231.f_163);
			NETWORK::NETWORK_FADE_OUT_ENTITY(iVar0, false, true);
			OBJECT::DELETE_OBJECT(&iVar0);
		}
		else
		{
			NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_231.f_163);
			return;
		}
	}
	if (func_443("DRONE_TRIG"))
	{
		HUD::CLEAR_HELP(true);
	}
	if (func_47(Local_231.f_165))
	{
		uVar1 = Local_231.f_165;
		PED::DELETE_PED(&uVar1);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_231.f_166))
	{
		OBJECT::DELETE_OBJECT(&(Local_231.f_166));
	}
	func_268();
	if (HUD::DOES_BLIP_EXIST(Local_231.f_176))
	{
		HUD::REMOVE_BLIP(&(Local_231.f_176));
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_231.f_167))
	{
		VEHICLE::DELETE_VEHICLE(&(Local_231.f_167));
	}
	HUD::THEFEED_SHOW();
	HUD::UNLOCK_MINIMAP_ANGLE();
	HUD::UNLOCK_MINIMAP_POSITION();
	HUD::SET_RADAR_ZOOM_PRECISE(0f);
	if (func_201())
	{
		func_200(0);
	}
	func_440();
	func_438(1, -1);
	func_437();
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_231.f_164))
	{
		iVar2 = NETWORK::NET_TO_OBJ(Local_231.f_164);
		OBJECT::DELETE_OBJECT(&iVar2);
	}
	if (!bParam0)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(Local_231.f_162))
		{
			STREAMING::REMOVE_ANIM_DICT(Local_231.f_162);
		}
		func_435(0);
	}
	func_212(0);
	if (func_433() && (!func_343(PLAYER::PLAYER_ID()) || func_382()))
	{
		if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
		{
			STREAMING::NEW_LOAD_SCENE_STOP();
		}
		func_332(PLAYER::PLAYER_ID(), 1, 0, 0);
		ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
	}
	Local_231.f_124 = 0f;
	Local_231.f_125 = 0f;
	Local_231.f_12 = 0;
	Local_231.f_14 = 0;
	Local_231.f_10 = 0;
	Local_231.f_16 = 0;
	func_61(&(Local_231.f_249));
	func_61(&(Local_231.f_251));
	if (!Local_231.f_160)
	{
		func_61(&(Local_231.f_253));
	}
	func_61(&(Local_231.f_257));
	func_61(&(Local_231.f_255));
	func_61(&(Local_231.f_259));
	func_61(&(Local_231.f_265));
	func_61(&(Local_231.f_271));
	func_61(&(Local_231.f_269));
	func_61(&(Local_231.f_267));
	func_61(&(Local_231.f_273));
	func_61(&(Local_231.f_275));
	func_61(&(Local_231.f_277));
	func_61(&(Local_231.f_281));
	func_61(&(Local_231.f_283));
	func_61(&(Local_231.f_261));
	func_61(&(Local_231.f_352));
	if (PLAYER::PLAYER_ID() != func_23())
	{
		func_61(&(Local_231.f_287[PLAYER::PLAYER_ID() /*2*/]));
	}
	Local_231.f_30 = 0;
	Local_231.f_5 = 0;
	Local_231.f_6 = 0;
	Global_1964670.f_7 = -1;
	func_432(-1f);
	func_398(0f);
	func_209(0);
	func_400(0);
	func_431(0);
	func_430(0);
	func_182(0);
	func_428(0);
	func_427(0);
	func_425(0);
	func_424(0);
	func_423(0);
	func_422(0);
	func_421(0);
	func_263(1);
	func_419(0);
	func_417(0);
	func_416(0);
	func_415(0);
	MISC::CLEAR_BIT(&Global_1964670, 29);
	func_163(0);
	func_414(0f, 0f, 0f, 0f, 0f, 0f);
	func_413();
	Global_1964670.f_30 = -1;
	MISC::CLEAR_BIT(&Global_2709095, 0);
	MISC::CLEAR_BIT(&Global_1971474, 0);
	func_364(0);
	if (func_131())
	{
		GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("helicopterhud");
		func_412();
	}
	if (func_183())
	{
		func_242("SET_WARNING_IS_VISIBLE", 0);
		func_326(0);
		func_325(0);
		MISC::CLEAR_BIT(&(Local_133[PLAYER::PLAYER_ID() /*3*/]), 0);
		func_322(0);
	}
	func_409();
	func_327(0);
	func_381(0);
	func_408(0);
	func_407(0f);
	func_406(0f);
	GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(Local_231.f_174));
	if (func_405(1) != 0)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_405(1));
	}
	if (func_405(0) != 0)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_405(0));
	}
	func_319(0);
	func_438(1, -1);
	Local_231.f_28 = 0;
	Local_231.f_29 = 0;
	Local_231.f_31 = 0;
	EVENT::REMOVE_SHOCKING_EVENT(Local_231.f_30);
	if (!bParam0)
	{
		if (!func_91(PLAYER::PLAYER_ID()))
		{
			func_404(0f, 0f, 0f, 0f);
		}
		Global_1964670.f_2 = 0;
		func_403();
	}
	else
	{
		func_397(0, 1);
	}
}

void func_403()
{
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_404(struct<3> Param0, float fParam3)
{
	if (!func_369(Global_1964670.f_15, Param0, 0))
	{
		Global_1964670.f_15 = { Param0 };
		Global_1964670.f_12 = fParam3;
	}
}

int func_405(bool bParam0)
{
	if (!bParam0)
	{
		if (Global_1964670.f_24 != 0)
		{
			return Global_1964670.f_24;
		}
		else
		{
			return joaat("ba_prop_battle_secpanel");
		}
	}
	else
	{
		return joaat("ba_prop_battle_secpanel_dam");
	}
	return 0;
}

void func_406(float fParam0)
{
	if (Global_1964670.f_11 != fParam0)
	{
		Global_1964670.f_11 = fParam0;
	}
}

void func_407(float fParam0)
{
	if (Global_1964670.f_10 != fParam0)
	{
		Global_1964670.f_10 = fParam0;
	}
}

void func_408(int iParam0)
{
	if (Global_1964670.f_9 != iParam0)
	{
		Global_1964670.f_9 = iParam0;
	}
}

void func_409()
{
	if (!AUDIO::HAS_SOUND_FINISHED(Local_231.f_43))
	{
		AUDIO::STOP_SOUND(Local_231.f_43);
		AUDIO::RELEASE_SOUND_ID(Local_231.f_43);
		Local_231.f_43 = -1;
	}
	if (!AUDIO::HAS_SOUND_FINISHED(Local_231.f_32))
	{
		AUDIO::STOP_SOUND(Local_231.f_32);
		AUDIO::RELEASE_SOUND_ID(Local_231.f_32);
		Local_231.f_32 = -1;
	}
	if (!AUDIO::HAS_SOUND_FINISHED(Local_231.f_33))
	{
		AUDIO::STOP_SOUND(Local_231.f_33);
		AUDIO::RELEASE_SOUND_ID(Local_231.f_33);
		Local_231.f_33 = -1;
	}
	if (!AUDIO::HAS_SOUND_FINISHED(Local_231.f_36))
	{
		AUDIO::STOP_SOUND(Local_231.f_36);
		AUDIO::RELEASE_SOUND_ID(Local_231.f_36);
		Local_231.f_36 = -1;
	}
	if (!AUDIO::HAS_SOUND_FINISHED(Local_231.f_42))
	{
		AUDIO::STOP_SOUND(Local_231.f_42);
		AUDIO::RELEASE_SOUND_ID(Local_231.f_42);
		Local_231.f_42 = -1;
	}
	if (!AUDIO::HAS_SOUND_FINISHED(Local_231.f_41))
	{
		AUDIO::STOP_SOUND(Local_231.f_41);
		AUDIO::RELEASE_SOUND_ID(Local_231.f_41);
		Local_231.f_41 = -1;
	}
	if (!AUDIO::HAS_SOUND_FINISHED(Local_231.f_40))
	{
		AUDIO::STOP_SOUND(Local_231.f_40);
		AUDIO::RELEASE_SOUND_ID(Local_231.f_40);
		Local_231.f_40 = -1;
	}
	if (!AUDIO::HAS_SOUND_FINISHED(Local_231.f_39))
	{
		AUDIO::STOP_SOUND(Local_231.f_39);
		AUDIO::RELEASE_SOUND_ID(Local_231.f_39);
		Local_231.f_39 = -1;
	}
	if (!AUDIO::HAS_SOUND_FINISHED(Local_231.f_44))
	{
		AUDIO::STOP_SOUND(Local_231.f_44);
		AUDIO::RELEASE_SOUND_ID(Local_231.f_44);
		Local_231.f_44 = -1;
	}
	if (!AUDIO::HAS_SOUND_FINISHED(Local_231.f_45))
	{
		AUDIO::STOP_SOUND(Local_231.f_45);
		AUDIO::RELEASE_SOUND_ID(Local_231.f_45);
		Local_231.f_45 = -1;
	}
	func_411();
	func_98();
	func_410();
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE(func_330()))
	{
		AUDIO::STOP_AUDIO_SCENE(func_330());
	}
}

void func_410()
{
	if (Local_597.f_2 != -1)
	{
		AUDIO::STOP_SOUND(Local_597.f_2);
		AUDIO::RELEASE_SOUND_ID(Local_597.f_2);
		Local_597.f_2 = -1;
	}
}

void func_411()
{
	if (!AUDIO::HAS_SOUND_FINISHED(Local_231.f_46))
	{
		AUDIO::STOP_SOUND(Local_231.f_46);
		AUDIO::RELEASE_SOUND_ID(Local_231.f_46);
		Local_231.f_46 = -1;
	}
}

void func_412()
{
	MISC::CLEAR_BIT(&(Local_231.f_5), 10);
}

void func_413()
{
	if (func_260())
	{
		MISC::CLEAR_BIT(&Global_1964670, 7);
	}
}

void func_414(struct<3> Param0, struct<3> Param3)
{
	if (!func_369(Global_1964670.f_18, Param0, 0))
	{
		Global_1964670.f_18 = { Param0 };
		Param3 = { Param3 + Vector(0f, -180f, 180f) };
		Global_1964670.f_21 = { Param3 };
	}
}

void func_415(bool bParam0)
{
	if (bParam0)
	{
		if (!func_90())
		{
			MISC::SET_BIT(&Global_1964670, 15);
		}
	}
	else if (func_90())
	{
		MISC::CLEAR_BIT(&Global_1964670, 15);
	}
}

void func_416(bool bParam0)
{
	if (bParam0)
	{
		if (!func_77())
		{
			MISC::SET_BIT(&Global_1964670, 19);
		}
	}
	else if (func_77())
	{
		MISC::CLEAR_BIT(&Global_1964670, 19);
	}
}

void func_417(bool bParam0)
{
	if (bParam0)
	{
		if (!func_418())
		{
			MISC::SET_BIT(&Global_1964670, 17);
		}
	}
	else if (func_418())
	{
		MISC::CLEAR_BIT(&Global_1964670, 17);
	}
}

bool func_418()
{
	return BitTest(Global_1964670, 17);
}

void func_419(bool bParam0)
{
	if (bParam0)
	{
		if (!func_420())
		{
			MISC::SET_BIT(&Global_1964670, 18);
		}
	}
	else if (func_420())
	{
		MISC::CLEAR_BIT(&Global_1964670, 18);
	}
}

bool func_420()
{
	return BitTest(Global_1964670, 18);
}

void func_421(bool bParam0)
{
	if (bParam0)
	{
		if (func_183())
		{
			if (!BitTest(Global_1964670, 16))
			{
				MISC::SET_BIT(&Global_1964670, 16);
			}
		}
	}
	else if (BitTest(Global_1964670, 16))
	{
		MISC::CLEAR_BIT(&Global_1964670, 16);
	}
}

void func_422(bool bParam0)
{
	if (bParam0)
	{
		if (!func_387())
		{
			MISC::SET_BIT(&Global_1964670, 6);
		}
	}
	else if (func_387())
	{
		MISC::CLEAR_BIT(&Global_1964670, 6);
	}
}

void func_423(bool bParam0)
{
	if (bParam0)
	{
		if (!BitTest(Global_1964670, 3))
		{
			MISC::SET_BIT(&Global_1964670, 3);
		}
	}
	else if (BitTest(Global_1964670, 3))
	{
		MISC::CLEAR_BIT(&Global_1964670, 3);
	}
}

void func_424(bool bParam0)
{
	if (bParam0)
	{
		if (!func_57())
		{
			MISC::SET_BIT(&Global_1964670, 28);
		}
	}
	else if (func_57())
	{
		MISC::CLEAR_BIT(&Global_1964670, 28);
	}
}

void func_425(bool bParam0)
{
	if (bParam0)
	{
		if (!func_426())
		{
			MISC::SET_BIT(&Global_1964670, 27);
		}
	}
	else if (func_426())
	{
		MISC::CLEAR_BIT(&Global_1964670, 27);
	}
}

bool func_426()
{
	return BitTest(Global_1964670, 27);
}

void func_427(bool bParam0)
{
	if (bParam0)
	{
		if (!func_296())
		{
			MISC::SET_BIT(&Global_1964670, 1);
		}
	}
	else if (func_296())
	{
		MISC::CLEAR_BIT(&Global_1964670, 1);
	}
}

void func_428(bool bParam0)
{
	if (bParam0)
	{
		if (!func_429())
		{
			MISC::SET_BIT(&Global_1964670, 10);
		}
	}
	else if (func_429())
	{
		MISC::CLEAR_BIT(&Global_1964670, 10);
	}
}

bool func_429()
{
	return BitTest(Global_1964670, 10);
}

void func_430(bool bParam0)
{
	if (bParam0)
	{
		if (!func_79())
		{
			MISC::SET_BIT(&Global_1964670, 8);
		}
	}
	else if (func_79())
	{
		MISC::CLEAR_BIT(&Global_1964670, 8);
	}
}

void func_431(bool bParam0)
{
	if (bParam0)
	{
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(MISC::GET_HASH_KEY("AM_MP_DRONE")) > 0)
		{
			if (!func_387())
			{
				MISC::SET_BIT(&Global_1964670, 0);
			}
		}
	}
	else if (func_387())
	{
		MISC::CLEAR_BIT(&Global_1964670, 0);
	}
}

void func_432(float fParam0)
{
	if (Global_1964670.f_14 != fParam0)
	{
		Global_1964670.f_14 = fParam0;
	}
}

int func_433()
{
	if (!func_345())
	{
		return 0;
	}
	if (func_41(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (!func_183())
	{
		return 0;
	}
	if (func_434())
	{
		return 0;
	}
	return 1;
}

bool func_434()
{
	return Global_2673273.f_1101;
}

void func_435(bool bParam0)
{
	if (bParam0)
	{
		if (!func_436())
		{
			MISC::SET_BIT(&Global_1964670, 24);
		}
	}
	else if (func_436())
	{
		MISC::CLEAR_BIT(&Global_1964670, 24);
	}
}

bool func_436()
{
	return BitTest(Global_1964670, 24);
}

void func_437()
{
	if (CAM::DOES_CAM_EXIST(Local_231.f_173))
	{
		CAM::DESTROY_CAM(Local_231.f_173, false);
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
		if (!func_14() || BitTest(Local_231.f_6, 0))
		{
			GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
		}
	}
}

void func_438(bool bParam0, int iParam1)
{
	int iVar0;
	
	if (!func_254(&iVar0, 0, iParam1))
	{
		return;
	}
	if (Global_24569.f_9244)
	{
		HUD::RESET_HUD_COMPONENT_VALUES(15);
		Global_24569.f_9244 = 0;
	}
	HUD::THEFEED_SET_SCRIPTED_MENU_HEIGHT(0f);
	if (Global_24569.f_6231[iVar0])
	{
		HUD::CLEAR_ADDITIONAL_TEXT(9, false);
		Global_24569.f_6231[iVar0] = 0;
	}
	if (Global_24569.f_6217[iVar0])
	{
		GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("CommonMenu");
		Global_24569.f_6217[iVar0] = 0;
	}
	if (Global_24569.f_6224[iVar0])
	{
		GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("MPShopSale");
		Global_24569.f_6224[iVar0] = 0;
	}
	if (bParam0)
	{
		func_439(&(Global_24569.f_6263[iVar0 /*10*/]));
		Global_24569.f_6324[iVar0] = 0;
	}
	else
	{
		Global_24569.f_6324[iVar0] = 0;
	}
	GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("Shared");
}

void func_439(int* iParam0)
{
	if (iParam0->f_9 != 0)
	{
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
		{
			GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(iParam0);
		}
		*iParam0 = 0;
		iParam0->f_9 = 0;
	}
}

void func_440()
{
	if (CAM::DOES_CAM_EXIST(Local_231.f_173))
	{
		if (func_442(PLAYER::PLAYER_ID()))
		{
			func_441(0);
		}
	}
}

void func_441(bool bParam0)
{
	if (bParam0)
	{
		Global_1950702.f_4220 = bParam0;
	}
	if (!Global_1950702.f_4219)
	{
		Global_1950702.f_4219 = 1;
	}
}

int func_442(int iParam0)
{
	if (iParam0 != func_23())
	{
		if (func_42(iParam0, 1, 1))
		{
			return Global_2658293[iParam0 /*468*/].f_325.f_8 != -1;
		}
		else if ((Global_1575095 && iParam0 == PLAYER::PLAYER_ID()) && func_42(iParam0, 1, 0))
		{
			return Global_2658293[iParam0 /*468*/].f_325.f_8 != -1;
		}
	}
	return 0;
}

bool func_443(char* sParam0)
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

float func_444()
{
	return 0.5f;
}

int func_445()
{
	return 72;
}

Vector3 func_446()
{
	return Local_231.f_154;
}

int func_447()
{
	if (func_373())
	{
		return 1;
	}
	if (func_202())
	{
		return 1;
	}
	return 0;
}

int func_448(struct<15> Param0, var uParam15)
{
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(32, false, Param0.f_0);
	func_450(0, -1, 0);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&uLocal_230, 1, 0);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_133, 97, 0);
	if (!func_449())
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		Local_231.f_139 = { Param0.f_2 };
		Local_231.f_148 = { Param0.f_5 };
		Local_133[PLAYER::PLAYER_ID() /*3*/].f_1 = Param0.f_1;
		Global_1912667[PLAYER::PLAYER_ID() /*318*/].f_101 = Param0.f_1;
		Local_231.f_145 = { Param0.f_8 };
		Local_593.f_0 = Param0.f_11;
		Local_593.f_1 = Param0.f_12;
		Local_593.f_2 = Param0.f_13;
		Local_593.f_3 = Param0.f_14;
		if (func_354(func_355()))
		{
			func_414(Local_231.f_148, 0f, 0f, 0f);
		}
	}
	else
	{
		return 0;
	}
	return 1;
}

int func_449()
{
	int iVar0;
	
	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 0;
		}
		if (NETWORK::NETWORK_HAS_RECEIVED_HOST_BROADCAST_DATA())
		{
			return 1;
		}
		if (func_395())
		{
			return 0;
		}
		if (func_393(157))
		{
			return 0;
		}
		if (iVar0 >= 3600)
		{
			return 0;
		}
		SYSTEM::WAIT(0);
	}
	return 0;
}

int func_450(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_403();
			}
			else
			{
				return 0;
			}
		}
		if (!func_333(0))
		{
			if (iParam0 == 0)
			{
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (!bParam2)
					{
						func_403();
					}
					else
					{
						return 0;
					}
				}
				if (func_395())
				{
					if (!bParam2)
					{
						func_403();
					}
					else
					{
						return 0;
					}
				}
				if (func_393(157))
				{
					if (!bParam2)
					{
						func_403();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!NETWORK::NETWORK_IS_IN_SESSION())
			{
				if (!bParam2)
				{
					func_403();
				}
				else
				{
					return 0;
				}
			}
		}
		SYSTEM::WAIT(0);
		iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	}
	if (iParam1 > -1)
	{
		Global_1574669 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (!bParam2)
			{
				func_403();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!NETWORK::NETWORK_IS_IN_SESSION())
	{
		if (!bParam2)
		{
			func_403();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

