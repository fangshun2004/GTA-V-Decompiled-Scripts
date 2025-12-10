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
	char* sLocal_16 = NULL;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	float fLocal_21 = 0f;
	float fLocal_22 = 0f;
	float fLocal_23 = 0f;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	int iLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	float fLocal_61 = 0f;
	var uLocal_62 = 0;
	float fLocal_63 = 0f;
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
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
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
	struct<3> Local_110[32];
	var uLocal_207 = 0;
	struct<271> Local_208 = { 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 1069547520, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_479 = 0;
	var uLocal_480 = 0;
	var uLocal_481 = 0;
	var uLocal_482 = 0;
	var uLocal_483 = 0;
	var uLocal_484 = 0;
	var uLocal_485 = 0;
	var uLocal_486 = 0;
	var uLocal_487 = 0;
	var uLocal_488 = 0;
	var uLocal_489 = 0;
	var uLocal_490 = 0;
	var uLocal_491 = 0;
	var uLocal_492 = 0;
	var uLocal_493 = 0;
	var uLocal_494 = 32;
	var uLocal_495 = 0;
	var uLocal_496 = 0;
	var uLocal_497 = 0;
	var uLocal_498 = 0;
	var uLocal_499 = 0;
	var uLocal_500 = 0;
	var uLocal_501 = 0;
	var uLocal_502 = 0;
	var uLocal_503 = 0;
	var uLocal_504 = 0;
	var uLocal_505 = 0;
	var uLocal_506 = 0;
	var uLocal_507 = 0;
	var uLocal_508 = 0;
	var uLocal_509 = 0;
	var uLocal_510 = 0;
	var uLocal_511 = 0;
	var uLocal_512 = 0;
	var uLocal_513 = 0;
	var uLocal_514 = 0;
	var uLocal_515 = 0;
	var uLocal_516 = 0;
	var uLocal_517 = 0;
	var uLocal_518 = 0;
	var uLocal_519 = 0;
	var uLocal_520 = 0;
	var uLocal_521 = 0;
	var uLocal_522 = 0;
	var uLocal_523 = 0;
	var uLocal_524 = 0;
	var uLocal_525 = 0;
	var uLocal_526 = 0;
	var uLocal_527 = 0;
	var uLocal_528 = 0;
	var uLocal_529 = 0;
	var uLocal_530 = 0;
	var uLocal_531 = 0;
	var uLocal_532 = 0;
	var uLocal_533 = 0;
	var uLocal_534 = 0;
	var uLocal_535 = 0;
	var uLocal_536 = 0;
	var uLocal_537 = 0;
	var uLocal_538 = 0;
	var uLocal_539 = 0;
	var uLocal_540 = 0;
	var uLocal_541 = 0;
	var uLocal_542 = 0;
	var uLocal_543 = 0;
	var uLocal_544 = 0;
	var uLocal_545 = 0;
	var uLocal_546 = 0;
	var uLocal_547 = 0;
	var uLocal_548 = 0;
	var uLocal_549 = 0;
	var uLocal_550 = 0;
	var uLocal_551 = 0;
	var uLocal_552 = 0;
	var uLocal_553 = 0;
	var uLocal_554 = 0;
	var uLocal_555 = 0;
	var uLocal_556 = 0;
	var uLocal_557 = 0;
	var uLocal_558 = 0;
	var uLocal_559 = 0;
	var uLocal_560 = 0;
	var uLocal_561 = 0;
	var uLocal_562 = 0;
	var uLocal_563 = 0;
	var uLocal_564 = 0;
	var uLocal_565 = 0;
	var uLocal_566 = 0;
	struct<4> Local_567 = { 0, 0, 0, 0 } ;
	struct<10> Local_571 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_581 = 0;
	bool bLocal_582 = 0;
	bool bLocal_583 = 0;
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
	fLocal_12 = 0.001f;
	iLocal_15 = -1;
	sLocal_16 = "NULL";
	fLocal_21 = 80f;
	fLocal_22 = 140f;
	fLocal_23 = 180f;
	fLocal_26 = 0f;
	fLocal_30 = -0.0375f;
	fLocal_31 = 0.17f;
	iLocal_34 = 3;
	iLocal_38 = 1;
	iLocal_39 = 65;
	iLocal_40 = 49;
	iLocal_41 = 64;
	fLocal_61 = ((0.05f + 0.275f) - 0.01f);
	fLocal_63 = 0f;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_409(ScriptParam_0);
	}
	else
	{
		func_363(0);
	}
	func_358(1, 1);
	while (true)
	{
		func_357();
		if (func_344())
		{
			func_363(0);
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
	bLocal_582 = func_337(&bLocal_583);
	func_336();
	func_331();
	func_329();
	func_327();
	switch (func_326())
	{
		case 0:
			func_325(1);
			break;
		
		case 1:
			if (!func_323())
			{
				func_310();
				if (func_286())
				{
					func_325(4);
				}
			}
			else
			{
				func_284(1);
				func_325(7);
			}
			break;
		
		case 4:
			func_283();
			func_282(&Local_208);
			func_281(&Local_208);
			func_280();
			func_265();
			func_256();
			func_254();
			func_238();
			if (bLocal_582)
			{
				if (bLocal_583)
				{
					func_232(0);
					func_231();
					func_194();
				}
				return;
			}
			func_187();
			func_157(0);
			func_139();
			func_129();
			func_114();
			func_113();
			func_194();
			func_97();
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
	Local_208.f_47++;
	if (Local_208.f_47 >= 32)
	{
		Local_208.f_47 = 0;
	}
}

void func_4()
{
	if (Local_208.f_47 != -1)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110[Local_208.f_47 /*3*/].f_2))
		{
			if (Global_1912395[PLAYER::PLAYER_ID() /*315*/].f_68[Local_208.f_47] != NETWORK::NET_TO_OBJ(Local_110[Local_208.f_47 /*3*/].f_2))
			{
				Global_1912395[PLAYER::PLAYER_ID() /*315*/].f_68[Local_208.f_47] = NETWORK::NET_TO_OBJ(Local_110[Local_208.f_47 /*3*/].f_2);
			}
		}
	}
}

void func_5()
{
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_208.f_162))
	{
		if (func_7(Local_208.f_162))
		{
			if (!func_6())
			{
				func_363(1);
			}
			else
			{
				func_363(0);
			}
		}
	}
	else if (!func_6())
	{
		func_363(1);
	}
	else
	{
		func_363(0);
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
	func_231();
	func_58();
	func_232(1);
	if (!BitTest(Local_208.f_5, 1))
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
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_208.f_162))
		{
			ENTITY::SET_ENTITY_HAS_GRAVITY(NETWORK::NET_TO_OBJ(Local_208.f_162), true);
		}
		if (AUDIO::HAS_SOUND_FINISHED(Local_208.f_36))
		{
			Local_208.f_36 = AUDIO::GET_SOUND_ID();
			AUDIO::PLAY_SOUND_FRONTEND(Local_208.f_36, "HUD_Static_Loop", Local_208.f_160, true);
		}
		if (!func_14())
		{
			PAD::SET_CONTROL_SHAKE(0, 300, 100);
			GRAPHICS::SET_TIMECYCLE_MODIFIER(func_13());
			MISC::SET_BIT(&(Local_208.f_6), 0);
		}
		MISC::SET_BIT(&(Local_208.f_5), 1);
	}
	else if (!func_12(&(Local_208.f_248)))
	{
		func_11(&(Local_208.f_248), 0, 0);
	}
	else
	{
		iVar0 = 1000;
		if (func_10(&(Local_208.f_248), iVar0, 0) || func_14())
		{
			if (Local_208.f_40 == -1)
			{
				if (AUDIO::HAS_SOUND_FINISHED(Local_208.f_40))
				{
					Local_208.f_40 = AUDIO::GET_SOUND_ID();
					AUDIO::PLAY_SOUND_FRONTEND(Local_208.f_40, "HUD_Disconnect", Local_208.f_160, true);
				}
			}
			func_284(1);
			func_325(7);
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
	return BitTest(Global_1964145, 20);
}

var func_15()
{
	return BitTest(Global_1964145.f_2, 3);
}

bool func_16()
{
	return BitTest(Global_1964145.f_2, 2);
}

var func_17()
{
	return BitTest(Global_1964145, 11);
}

bool func_18()
{
	return Global_2708979;
}

int func_19()
{
	if ((func_56(PLAYER::PLAYER_ID(), 0) && Global_1579258 == 1) && func_20())
	{
		return 1;
	}
	return 0;
}

int func_20()
{
	char* sVar0;
	
	if ((Global_1579258 != -1 || Global_1579264 != -1) || Global_1579267 != -1)
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
			if (!func_37(Global_4718592.f_132500))
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
		if (Global_1574982)
		{
			return 1;
		}
	}
	else if (Global_1964177)
	{
		return 1;
	}
	if (func_33(PLAYER::PLAYER_ID()) && BitTest(Global_1575012, 12))
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
			iVar0 = Global_2658291[PLAYER::PLAYER_ID() /*468*/].f_325.f_11;
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
		switch (Global_1579264)
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
	if (Global_1579262 == 1)
	{
		return 1;
	}
	if (func_22(3))
	{
		if (Global_1835510 == 186)
		{
			if (Global_1836740 != 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_22(int iParam0)
{
	return Global_262145.f_4708[iParam0] == Global_4718592.f_132500;
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
			if (Global_2658291[iParam0 /*468*/].f_325.f_8 != -1 && Global_2658291[iParam0 /*468*/].f_325.f_11 != func_23())
			{
				return func_39(Global_2658291[iParam0 /*468*/].f_325.f_8) == 20;
			}
		}
	}
	return 0;
}

int func_25(int iParam0)
{
	if (iParam0 != func_23())
	{
		return BitTest(Global_2658291[iParam0 /*468*/].f_325.f_7, 15);
	}
	return 0;
}

int func_26(int iParam0)
{
	if (iParam0 != func_23())
	{
		return BitTest(Global_2658291[iParam0 /*468*/].f_325.f_3, 4);
	}
	return 0;
}

int func_27(int iParam0)
{
	if (iParam0 != func_23())
	{
		return BitTest(Global_2658291[iParam0 /*468*/].f_325.f_7, 19);
	}
	return 0;
}

int func_28(int iParam0)
{
	if (iParam0 == func_23())
	{
		return iParam0;
	}
	return Global_2658291[iParam0 /*468*/].f_325.f_11;
}

int func_29(int iParam0)
{
	if (iParam0 != func_23())
	{
		return BitTest(Global_2658291[iParam0 /*468*/].f_325.f_6, 16);
	}
	return 0;
}

int func_30(int iParam0)
{
	if (iParam0 != func_23())
	{
		return BitTest(Global_2658291[iParam0 /*468*/].f_325.f_2, 6);
	}
	return 0;
}

int func_31(int iParam0)
{
	if (iParam0 == func_23())
	{
		return iParam0;
	}
	return Global_2658291[iParam0 /*468*/].f_325.f_11;
}

int func_32(int iParam0)
{
	if (iParam0 != func_23())
	{
		if (func_42(iParam0, 1, 1))
		{
			if (Global_2658291[iParam0 /*468*/].f_325.f_8 != -1 && Global_2658291[iParam0 /*468*/].f_325.f_11 != func_23())
			{
				return func_39(Global_2658291[iParam0 /*468*/].f_325.f_8) == 8;
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
			if (Global_2658291[iParam0 /*468*/].f_325.f_8 != -1)
			{
				return func_39(Global_2658291[iParam0 /*468*/].f_325.f_8) == 10;
			}
		}
	}
	return 0;
}

bool func_34(int iParam0)
{
	return Global_4718592.f_192778 >= iParam0;
}

var func_35()
{
	return BitTest(Global_1950198, 6);
}

int func_36(int iParam0)
{
	if (iParam0 != func_23())
	{
		return BitTest(Global_2658291[iParam0 /*468*/].f_325, 6);
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
		return Global_2658291[iParam0 /*468*/].f_325.f_18;
	}
	return -1;
}

int func_41(int iParam0)
{
	if (iParam0 != func_23() && func_42(iParam0, 1, 1))
	{
		return BitTest(Global_2658291[iParam0 /*468*/].f_325, 3);
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
				if (iVar0 == Global_2673271.f_3)
				{
					return Global_2673271.f_2;
				}
				else if (Global_2658291[iVar0 /*468*/] != 4)
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
	return Global_2658291[iParam0 /*468*/].f_325.f_11;
}

int func_44(int iParam0)
{
	if (iParam0 != func_23())
	{
		if (func_42(iParam0, 1, 1))
		{
			if (Global_2658291[iParam0 /*468*/].f_325.f_8 != -1 && Global_2658291[iParam0 /*468*/].f_325.f_11 != func_23())
			{
				return func_39(Global_2658291[iParam0 /*468*/].f_325.f_8) == 5;
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
		if ((iParam0 == Global_80213.f_26[iParam2] && iParam1 == Global_80213[iParam2]) && Global_80213.f_13[iParam2] != 0)
		{
			return Global_80213.f_13[iParam2];
		}
		iVar37 = FILES::SETUP_SHOP_PED_APPAREL_QUERY_TU(iParam3, 11, -1, false, -1, func_52(iParam2));
		if (iVar37 <= iVar36)
		{
			return -1;
		}
		FILES::GET_SHOP_PED_QUERY_COMPONENT(iVar36, &Var19);
		Global_80213.f_13[iParam2] = Var19.f_1;
		Global_80213[iParam2] = iParam1;
		Global_80213.f_26[iParam2] = iParam0;
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
			if (Global_2658291[iParam0 /*468*/].f_325.f_8 != -1 && Global_2658291[iParam0 /*468*/].f_325.f_11 != func_23())
			{
				return func_39(Global_2658291[iParam0 /*468*/].f_325.f_8) == 12;
			}
		}
	}
	return 0;
}

bool func_57()
{
	return BitTest(Global_1964145, 28);
}

void func_58()
{
	RECORDING::REPLAY_PREVENT_RECORDING_THIS_FRAME();
	func_59();
}

void func_59()
{
	Global_24390.f_134 = 1;
}

void func_60()
{
	if (Local_567.f_2 == 0)
	{
		return;
	}
	if (!func_96() && !func_94())
	{
		return;
	}
	if (func_93())
	{
		return;
	}
	if (!func_92() && !func_90())
	{
		return;
	}
	if (func_85())
	{
		if (func_80())
		{
			if (func_68())
			{
				func_67();
				func_65(1);
				MISC::CLEAR_BIT(&Local_571, 0);
			}
		}
	}
	else
	{
		func_64();
		func_61();
	}
}

void func_61()
{
	if (func_12(&(Local_571.f_5)))
	{
		func_63(&(Local_571.f_5));
	}
	if (func_12(&(Local_571.f_9)))
	{
		func_63(&(Local_571.f_9));
	}
	if (func_12(&(Local_571.f_7)))
	{
		func_63(&(Local_571.f_7));
	}
	func_62();
}

void func_62()
{
	if (Local_571.f_1 != -1)
	{
		AUDIO::STOP_SOUND(Local_571.f_1);
		AUDIO::RELEASE_SOUND_ID(Local_571.f_1);
		Local_571.f_1 = -1;
	}
}

void func_63(var uParam0)
{
	uParam0->f_1 = 0;
}

void func_64()
{
	MISC::CLEAR_BIT(&(Local_208.f_5), 5);
}

void func_65(bool bParam0)
{
	if (bParam0)
	{
		if (!func_66())
		{
			MISC::SET_BIT(&Global_1964145, 30);
		}
	}
	else if (func_66())
	{
		MISC::CLEAR_BIT(&Global_1964145, 30);
	}
}

bool func_66()
{
	return BitTest(Global_1964145, 30);
}

void func_67()
{
	MISC::SET_BIT(&(Local_208.f_5), 24);
}

int func_68()
{
	func_73(0, 18);
	func_62();
	func_71();
	if (func_69())
	{
		return 1;
	}
	return 0;
}

int func_69()
{
	if (!func_12(&(Local_571.f_7)))
	{
		func_11(&(Local_571.f_7), 0, 0);
	}
	else if (func_70(&(Local_571.f_7), 0, 0) >= 3000)
	{
		return 1;
	}
	return 0;
}

int func_70(var uParam0, bool bParam1, bool bParam2)
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

void func_71()
{
	if (Local_571.f_2 == -1)
	{
		Local_571.f_2 = AUDIO::GET_SOUND_ID();
		AUDIO::PLAY_SOUND_FRONTEND(Local_571.f_2, "Drone_Scan_Complete", func_72(), false);
	}
}

char* func_72()
{
	return "DLC_24-2_Penthouse_Robbery_Sounds";
}

void func_73(bool bParam0, int iParam1)
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
	else
	{
		StringCopy(&Var21, "VEX_TARACQ", 16);
	}
	GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(1);
	Var13 = { ENTITY::GET_ENTITY_COORDS(Global_1964145.f_26, false) };
	switch (Local_567.f_1)
	{
		case 1:
			func_47(Local_567.f_0);
			Var10 = { ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(Local_567.f_0, Local_567.f_3) };
			break;
		
		case 2:
			MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(Local_567.f_0), &Var25, &Var28);
			Var4 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_567.f_0, 0f, Var25.f_1, 0f) };
			Var7 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_567.f_0, 0f, Var28.f_1, 0f) };
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
	fVar0 = func_79();
	fVar1 = (0.024f * fVar0);
	HUD::GET_HUD_COLOUR(iParam1, &iVar16, &iVar17, &iVar18, &iVar19);
	GRAPHICS::DRAW_SPRITE("helicopterhud", "hud_outline", 0f, 0f, (fVar1 * 1.5f), fVar1, 0f, iVar16, iVar17, iVar18, iVar19, false, 0);
	if (bParam0)
	{
		func_77(func_70(&(Local_571.f_5), 0, 0), fVar1, 0f, 0f, iVar16, iVar17, iVar18);
		if (!func_12(&(Local_571.f_9)))
		{
			func_11(&(Local_571.f_9), 0, 0);
		}
		else
		{
			iVar20 = func_70(&(Local_571.f_9), 0, 0);
		}
	}
	if (bParam0)
	{
		if ((((((((iVar20 <= 500 || (iVar20 >= 1000 && iVar20 <= 1500)) || (iVar20 >= 2000 && iVar20 <= 2500)) || (iVar20 >= 3000 && iVar20 <= 3500)) || (iVar20 >= 4000 && iVar20 <= 4500)) || (iVar20 >= 5000 && iVar20 <= 5500)) || (iVar20 >= 6000 && iVar20 <= 6500)) || (iVar20 >= 7000 && iVar20 <= 7500)) || (iVar20 >= 8000 && iVar20 <= 8500))
		{
			func_74(Var21, ((-0.7f * fVar1) + (fVar1 * 0.04f)), ((fVar1 / 2f) + 0.005f), iVar16, iVar17, iVar18, (fVar0 + 0.2f), 1);
		}
	}
	else
	{
		func_74(Var21, ((-0.7f * fVar1) + (fVar1 * 0.04f)), ((fVar1 / 2f) + 0.005f), iVar16, iVar17, iVar18, (fVar0 + 0.2f), 1);
	}
	GRAPHICS::CLEAR_DRAW_ORIGIN();
}

void func_74(char* sParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, float fParam4, float fParam5, int iParam6, int iParam7, int iParam8, float fParam9, int iParam10)
{
	func_76(iParam6, iParam7, iParam8, fParam9, iParam10);
	func_75(fParam4, fParam5, &sParam0, 0);
}

void func_75(float fParam0, float fParam1, char* sParam2, int iParam3)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, iParam3);
}

void func_76(int iParam0, int iParam1, int iParam2, float fParam3, int iParam4)
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

void func_77(int iParam0, float fParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6)
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
				func_78((fParam2 - (fParam1 * 0.65f)), ((fParam3 + ((fParam1 * 0.9f) / 2f)) - ((fParam1 * 0.9f) * fVar1)), ((fParam1 * 0.85f) * 1.5f), ((fVar1 - fVar2) * (fParam1 * 0.9f)), iParam4, iParam5, iParam6, iVar3);
			}
			iVar0++;
		}
	}
}

void func_78(float fParam0, float fParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	GRAPHICS::DRAW_RECT((fParam0 + (fParam2 * 0.5f)), (fParam1 + (fParam3 * 0.5f)), fParam2, fParam3, iParam4, iParam5, iParam6, iParam7, false);
}

float func_79()
{
	float fVar0;
	struct<3> Var1;
	struct<3> Var4;
	float fVar7;
	
	Var1 = { ENTITY::GET_ENTITY_COORDS(Local_567.f_0, false) };
	Var4 = { ENTITY::GET_ENTITY_COORDS(Global_1964145.f_26, true) };
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

int func_80()
{
	if (func_84())
	{
		if (!BitTest(Local_571.f_0, 0))
		{
			MISC::SET_BIT(&Local_571, 0);
		}
		return 1;
	}
	else
	{
		func_73(1, 1);
		func_81();
	}
	return 0;
}

void func_81()
{
	float fVar0;
	
	if (Local_571.f_1 == -1)
	{
		func_83(&(Local_571.f_1), "Drone_Scan_Loop", func_72(), 0);
	}
	else if (func_12(&(Local_571.f_9)))
	{
		fVar0 = SYSTEM::TO_FLOAT(func_70(&(Local_571.f_9), 0, 0));
		fVar0 = (fVar0 / 10000f);
		func_82(&fVar0, 0f, 1f);
		AUDIO::SET_VARIABLE_ON_SOUND(Local_571.f_1, "Scan_Progress", fVar0);
	}
}

void func_82(float fParam0, float fParam1, float fParam2)
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

int func_83(var uParam0, char* sParam1, char* sParam2, bool bParam3)
{
	if (*uParam0 == -1)
	{
		*uParam0 = AUDIO::GET_SOUND_ID();
		AUDIO::PLAY_SOUND_FRONTEND(*uParam0, sParam1, sParam2, bParam3);
		return 1;
	}
	return 0;
}

int func_84()
{
	if (!func_12(&(Local_571.f_5)))
	{
		func_11(&(Local_571.f_5), 0, 0);
	}
	else if (func_70(&(Local_571.f_5), 0, 0) >= 6000)
	{
		return 1;
	}
	return 0;
}

int func_85()
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	
	if (!ENTITY::DOES_ENTITY_EXIST(Local_567.f_0))
	{
		return 0;
	}
	if (!func_47(Global_1964145.f_26))
	{
		return 0;
	}
	if (!BitTest(Local_571.f_0, 0))
	{
		fVar4 = 4f;
		if (Local_208.f_27 == 1)
		{
			fVar4 = 7f;
		}
		else if (Local_208.f_27 == 2)
		{
			fVar4 = 10f;
		}
		if (func_89(Global_1964145.f_26, Local_567.f_0, 1) > fVar4)
		{
			return 0;
		}
		if (!GRAPHICS::GET_SCREEN_COORD_FROM_WORLD_COORD(ENTITY::GET_ENTITY_COORDS(Local_567.f_0, false), &fVar0, &fVar1))
		{
			return 0;
		}
		func_88(fVar0, fVar1, &fVar2, &fVar3);
		if (!func_87(fVar2, fVar3, 1050253722))
		{
			return 0;
		}
		if (func_86())
		{
			if (!func_12(&(Local_571.f_3)))
			{
				func_11(&(Local_571.f_3), 1, 0);
			}
			else if (func_10(&(Local_571.f_3), 1500, 1))
			{
				return 0;
			}
		}
		else if (func_12(&(Local_571.f_3)))
		{
			func_63(&(Local_571.f_3));
		}
	}
	return 1;
}

int func_86()
{
	switch (Local_567.f_1)
	{
		case 1:
			if (Local_567.f_3 == PED::GET_PED_BONE_INDEX(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Local_567.f_0), 31086))
			{
				if (!ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(Local_567.f_0, Global_1964145.f_23))
				{
					return 1;
				}
			}
			break;
	}
	if (!ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(Global_1964145.f_26, Local_567.f_0, 283))
	{
		return 1;
	}
	return 0;
}

int func_87(float fParam0, float fParam1, float fParam2)
{
	if (fParam0 <= fParam2 && fParam1 <= fParam2)
	{
		return 1;
	}
	return 0;
}

float func_88(float fParam0, float fParam1, var uParam2, var uParam3)
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

float func_89(int iParam0, int iParam1, bool bParam2)
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

int func_90()
{
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("helicopterhud", false);
	if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("helicopterhud"))
	{
		return 0;
	}
	func_91();
	return 1;
}

void func_91()
{
	MISC::SET_BIT(&(Local_208.f_5), 10);
}

bool func_92()
{
	return BitTest(Local_208.f_5, 10);
}

bool func_93()
{
	return BitTest(Local_208.f_5, 24);
}

int func_94()
{
	int iVar0;
	
	iVar0 = 206;
	if (PAD::IS_CONTROL_JUST_PRESSED(2, iVar0) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, iVar0))
	{
		func_95();
		return 1;
	}
	return 0;
}

void func_95()
{
	MISC::SET_BIT(&(Local_208.f_5), 5);
}

bool func_96()
{
	return BitTest(Local_208.f_5, 5);
}

void func_97()
{
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_208.f_162))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Local_208.f_164))
		{
			STREAMING::REQUEST_MODEL(func_112());
			if (STREAMING::HAS_MODEL_LOADED(func_112()))
			{
				if (!BitTest(Local_208.f_5, 6))
				{
					if (func_106(NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(false, 0) + 1, 0, 1))
					{
						NETWORK::RESERVE_NETWORK_MISSION_PEDS(NETWORK::GET_NUM_CREATED_MISSION_PEDS(false) + 1);
						MISC::SET_BIT(&(Local_208.f_5), 6);
					}
				}
				else if (NETWORK::CAN_REGISTER_MISSION_PEDS(1))
				{
					Local_208.f_164 = PED::CREATE_PED(26, func_112(), Local_208.f_153, ENTITY::GET_ENTITY_HEADING(NETWORK::NET_TO_OBJ(Local_208.f_162)), false, false);
					ENTITY::SET_ENTITY_INVINCIBLE(Local_208.f_164, true, 0);
					ENTITY::SET_ENTITY_VISIBLE(Local_208.f_164, false, false);
					ENTITY::SET_ENTITY_HAS_GRAVITY(Local_208.f_164, false);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_208.f_164, true);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_112());
					PED::SET_PED_CONFIG_FLAG(Local_208.f_164, 118, false);
					PED::SET_PED_CONFIG_FLAG(Local_208.f_164, 108, true);
					PED::SET_PED_CONFIG_FLAG(Local_208.f_164, 208, true);
					ENTITY::SET_ENTITY_PROOFS(Local_208.f_164, true, true, true, true, true, false, false, false);
					ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_208.f_164, NETWORK::NET_TO_OBJ(Local_208.f_162), -1, 0f, 0f, -0.25f, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
					ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(Local_208.f_164, false, false);
					Global_1964145.f_26 = Local_208.f_164;
				}
			}
		}
		else if (func_47(Local_208.f_164))
		{
			if (ENTITY::IS_ENTITY_VISIBLE(Local_208.f_164))
			{
				ENTITY::SET_ENTITY_VISIBLE(Local_208.f_164, false, false);
			}
			if (!func_103(PLAYER::PLAYER_ID()) && !func_100(PLAYER::PLAYER_ID()))
			{
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
				{
					func_99(Global_1837351);
				}
			}
			else if ((Global_1964145.f_5 == -1 || Global_1964145.f_5 == 0) || Global_1964145.f_5 == Global_1837340)
			{
				func_99(Global_1837351);
			}
			if (PED::GET_PED_RELATIONSHIP_GROUP_DEFAULT_HASH(Local_208.f_164) != func_98())
			{
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_208.f_164, func_98());
			}
			if (!ENTITY::IS_ENTITY_ATTACHED(Local_208.f_164))
			{
				ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_208.f_164, NETWORK::NET_TO_OBJ(Local_208.f_162), -1, 0f, 0f, -0.25f, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
				ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(Local_208.f_164, false, false);
			}
		}
	}
}

int func_98()
{
	if (Global_1964145.f_5 != -1 && Global_1964145.f_5 != 0)
	{
		return Global_1964145.f_5;
	}
	return Global_1837351;
}

void func_99(int iParam0)
{
	if (Global_1964145.f_5 != iParam0)
	{
		Global_1964145.f_5 = iParam0;
	}
}

int func_100(int iParam0)
{
	if (func_102(iParam0) == 236 || func_102(iParam0) == 150)
	{
		return func_101(iParam0);
	}
	return 0;
}

int func_101(var uParam0)
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 != -1)
	{
		return BitTest(Global_1892653[iVar0 /*615*/].f_1, 7);
	}
	return 0;
}

int func_102(var uParam0)
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 != -1)
	{
		return Global_1892653[iVar0 /*615*/];
	}
	return -1;
}

int func_103(int iParam0)
{
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		if (func_105(8))
		{
			return 1;
		}
		if (Global_2733002.f_5971.f_1 > 0)
		{
			return 1;
		}
	}
	return func_104(iParam0, 20);
}

var func_104(int iParam0, int iParam1)
{
	return BitTest(Global_1892653[iParam0 /*615*/].f_10.f_4, iParam1);
}

bool func_105(int iParam0)
{
	return BitTest(Global_2733002.f_5960, iParam0);
}

bool func_106(int iParam0, bool bParam1, bool bParam2)
{
	return func_107(2, iParam0, 1, bParam1, bParam2);
}

int func_107(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (!BitTest(Global_1690394, 0))
	{
		return 0;
	}
	if ((bParam2 && !bParam3) && iParam1 <= (func_111(iParam0) - func_110(iParam0, 0)))
	{
		return 1;
	}
	else
	{
		if (bParam3)
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_110(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_111(iParam0) - func_109(iParam0));
		}
		else
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_110(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_111(iParam0) - func_110(iParam0, 1));
		}
		if (!bParam4 && Global_1845250[PLAYER::PLAYER_ID() /*880*/] != 3)
		{
			iVar1 = (iVar1 - func_108(iParam0));
		}
		if (iVar0 < iVar1)
		{
			return 1;
		}
	}
	return 0;
}

int func_108(int iParam0)
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

int func_109(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_1690394.f_1;
			break;
		
		case 1:
			return Global_1690394.f_2;
			break;
		
		case 2:
			return Global_1690394.f_3;
			break;
	}
	return 0;
}

int func_110(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = PLAYER::PLAYER_ID();
	switch (iParam0)
	{
		case 0:
			if (!NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
			{
				return Global_2658291[iVar0 /*468*/].f_223;
			}
			else
			{
				return NETWORK::GET_NUM_RESERVED_MISSION_PEDS(!bParam1, 0);
			}
			break;
		
		case 1:
			if (!NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
			{
				return Global_2658291[iVar0 /*468*/].f_224;
			}
			else
			{
				return NETWORK::GET_NUM_RESERVED_MISSION_VEHICLES(!bParam1, 0);
			}
			break;
		
		case 2:
			if (!NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
			{
				return Global_2658291[iVar0 /*468*/].f_225;
			}
			else
			{
				return NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(!bParam1, 0);
			}
			break;
	}
	return 0;
}

int func_111(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_1690402;
			break;
		
		case 1:
			return Global_1690403;
			break;
		
		case 2:
			return Global_1690404;
			break;
	}
	return 0;
}

int func_112()
{
	return joaat("g_m_m_chigoon_01");
}

void func_113()
{
	int iVar0;
	
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_208.f_162) && !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_OBJ(Local_208.f_162), false))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_208.f_162))
		{
			if (CAM::DOES_CAM_EXIST(Local_208.f_172) && CAM::IS_CAM_RENDERING(Local_208.f_172))
			{
				iVar0 = 80;
				if (PAD::IS_CONTROL_JUST_PRESSED(2, iVar0) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, iVar0))
				{
					if (!BitTest(Local_208.f_5, 7))
					{
						MISC::SET_BIT(&(Local_208.f_5), 7);
					}
				}
			}
		}
	}
}

void func_114()
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
	
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_208.f_162) && !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_OBJ(Local_208.f_162), false))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_208.f_162))
		{
			Var0 = { Local_208.f_153 };
			switch (Local_208.f_13)
			{
				case 0:
					Var3 = { CAM::GET_FINAL_RENDERED_CAM_COORD() };
					Var6 = { CAM::GET_FINAL_RENDERED_CAM_ROT(2) };
					Var9 = { (-SYSTEM::SIN(Var6.f_2) * SYSTEM::COS(Var6.f_0)), (SYSTEM::COS(Var6.f_2) * SYSTEM::COS(Var6.f_0)), SYSTEM::SIN(Var6.f_0) };
					Var12 = { 10f, 10f, 10f };
					Var15 = { Var3 + Var9 * Var12 };
					Var0 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Local_208.f_153, ENTITY::GET_ENTITY_HEADING(NETWORK::NET_TO_OBJ(Local_208.f_162)), 0f, -0.1f, 0f) };
					Local_208.f_170 = SHAPETEST::START_SHAPE_TEST_LOS_PROBE(Var0, Var15, 123, NETWORK::NET_TO_OBJ(Local_208.f_162), 7);
					if (Local_208.f_170 != 0)
					{
						Local_208.f_13 = 1;
					}
					break;
				
				case 1:
					Local_208.f_247 = SHAPETEST::GET_SHAPE_TEST_RESULT(Local_208.f_170, &iVar18, &Var22, &uVar19, &iVar25);
					if (Local_208.f_247 == 2)
					{
						if (iVar18 == 0)
						{
							Local_208.f_14 = 1;
							Var22 = { 0f, 0f, 0f };
							if (BitTest(Local_208.f_5, 11) && !func_16())
							{
								MISC::CLEAR_BIT(&(Local_208.f_5), 11);
							}
							if (BitTest(Local_208.f_5, 23))
							{
								MISC::CLEAR_BIT(&(Local_208.f_5), 23);
							}
							func_128();
						}
						else
						{
							Local_208.f_14 = 2;
							if (ENTITY::DOES_ENTITY_EXIST(iVar25))
							{
								if (ENTITY::IS_ENTITY_A_PED(iVar25))
								{
									if (PED::IS_PED_A_PLAYER(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar25)))
									{
										if (func_125(PLAYER::PLAYER_ID(), NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar25))))
										{
											bVar26 = true;
										}
									}
									else
									{
										if (!BitTest(Local_208.f_5, 23))
										{
											MISC::SET_BIT(&(Local_208.f_5), 23);
											bVar27 = true;
											if (BitTest(Local_208.f_5, 11))
											{
												MISC::CLEAR_BIT(&(Local_208.f_5), 11);
											}
										}
										if (BitTest(Local_208.f_5, 23))
										{
											if (ENTITY::DOES_ENTITY_EXIST(Local_567.f_0) && iVar25 == Local_567.f_0)
											{
												if (!BitTest(Local_208.f_5, 31))
												{
													func_124();
													func_123();
													bVar27 = false;
												}
											}
											else if (BitTest(Local_208.f_5, 31))
											{
												func_120();
											}
										}
										else if (BitTest(Local_208.f_5, 31))
										{
											func_120();
										}
										if (bVar27)
										{
											func_119();
										}
										if (!func_103(PLAYER::PLAYER_ID()) && !func_100(PLAYER::PLAYER_ID()))
										{
											if ((func_118(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar25)) || func_117(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar25))) || func_116(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar25)))
											{
												func_99(Global_1837351);
												func_115(&(Local_208.f_264), 0, 0);
											}
											else
											{
												func_128();
											}
										}
									}
									if ((((!BitTest(Local_208.f_5, 11) && !bVar26) && func_47(Global_1964145.f_26)) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(Global_1964145.f_26, iVar25, 511)) && (PED::IS_PED_A_PLAYER(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar25)) && PLAYER::PLAYER_PED_ID() != ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar25)))
									{
										MISC::SET_BIT(&(Local_208.f_5), 11);
										if (BitTest(Local_208.f_5, 23))
										{
											MISC::CLEAR_BIT(&(Local_208.f_5), 23);
										}
										if (BitTest(Local_208.f_5, 31))
										{
											func_120();
										}
									}
								}
								else
								{
									if (!func_16())
									{
										if (BitTest(Local_208.f_5, 11))
										{
											MISC::CLEAR_BIT(&(Local_208.f_5), 11);
										}
									}
									if (BitTest(Local_208.f_5, 23))
									{
										MISC::CLEAR_BIT(&(Local_208.f_5), 23);
									}
									if (BitTest(Local_208.f_5, 31))
									{
										func_120();
									}
									func_128();
								}
							}
							else
							{
								func_128();
							}
							Local_208.f_170 = 0;
							Local_208.f_13 = 0;
						}
					}
					else if (Local_208.f_247 == 0)
					{
						Local_208.f_13 = 0;
					}
					break;
			}
		}
		else
		{
			NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_208.f_162);
		}
	}
}

void func_115(var uParam0, bool bParam1, bool bParam2)
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

int func_116(int iParam0)
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

int func_117(int iParam0)
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

int func_118(int iParam0)
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

void func_119()
{
	AUDIO::PLAY_SOUND_FRONTEND(-1, "Drone_Scan_Wrong_Ped", func_72(), false);
}

void func_120()
{
	MISC::CLEAR_BIT(&(Local_208.f_5), 31);
	func_121(0);
}

void func_121(bool bParam0)
{
	if (bParam0)
	{
		if (!func_122())
		{
			MISC::SET_BIT(&Global_1964145, 31);
		}
	}
	else if (func_122())
	{
		MISC::CLEAR_BIT(&Global_1964145, 31);
	}
}

bool func_122()
{
	return BitTest(Global_1964145, 31);
}

void func_123()
{
	AUDIO::PLAY_SOUND_FRONTEND(-1, "Drone_Scan_Right_Ped", func_72(), false);
}

void func_124()
{
	MISC::SET_BIT(&(Local_208.f_5), 31);
	func_121(1);
}

int func_125(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_127(iParam0);
	if (func_126(iVar0))
	{
		if (iVar0 == func_127(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_126(int iParam0)
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

int func_127(int iParam0)
{
	if (func_126(iParam0))
	{
		return Global_1892653[iParam0 /*615*/].f_10;
	}
	return func_23();
}

void func_128()
{
	if (func_12(&(Local_208.f_264)))
	{
		if (func_10(&(Local_208.f_264), 60000, 0))
		{
			func_63(&(Local_208.f_264));
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) <= 0)
			{
				func_99(Global_1837340);
			}
		}
	}
}

void func_129()
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
	
	if (BitTest(Local_208.f_120, 0))
	{
		return;
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_208.f_162) && !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_OBJ(Local_208.f_162), false))
	{
		if (NETWORK::IS_ENTITY_IN_GHOST_COLLISION(NETWORK::NET_TO_OBJ(Local_208.f_162)))
		{
			return;
		}
		if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_208.f_162))
		{
			switch (Local_208.f_11)
			{
				case 0:
					fVar1 = (func_133(Local_208.f_243) * 1.5f);
					Var2 = { Local_208.f_153 };
					Var5 = { Local_208.f_153 };
					Local_208.f_169 = SHAPETEST::START_SHAPE_TEST_CAPSULE(Var2, Var5, fVar1, 511, NETWORK::NET_TO_OBJ(Local_208.f_162), 4);
					if (Local_208.f_169 != 0)
					{
						Local_208.f_11 = 1;
					}
					break;
				
				case 1:
					iVar16 = SHAPETEST::GET_SHAPE_TEST_RESULT(Local_208.f_169, &iVar8, &Var12, &uVar9, &iVar15);
					if (iVar16 == 2)
					{
						if (iVar8 == 0)
						{
							Local_208.f_12 = 1;
							Var12 = { 0f, 0f, 0f };
						}
						else
						{
							if (ENTITY::DOES_ENTITY_EXIST(iVar15))
							{
								if (ENTITY::IS_ENTITY_A_VEHICLE(iVar15))
								{
									if (!ENTITY::IS_ENTITY_DEAD(iVar15, false) && ENTITY::GET_ENTITY_MODEL(iVar15) != Local_208.f_243)
									{
										if (ENTITY::GET_ENTITY_SPEED(iVar15) > 0.5f || func_130(ENTITY::GET_ENTITY_MODEL(iVar15)))
										{
											if (!BitTest(Local_208.f_5, 9))
											{
												MISC::SET_BIT(&(Local_208.f_5), 9);
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
											if (Local_208.f_30 == 0)
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
												Local_208.f_30 = EVENT::ADD_SHOCKING_EVENT_AT_POSITION(iVar17, Local_208.f_153, 5000f);
												func_115(&(Local_208.f_270), 0, 0);
											}
										}
									}
								}
							}
							Local_208.f_12 = 2;
							PAD::SET_CONTROL_SHAKE(0, 300, 50);
							Local_208.f_169 = 0;
							Local_208.f_11 = 0;
						}
					}
					else if (iVar16 == 0)
					{
						Local_208.f_11 = 0;
					}
					break;
			}
			if (Local_208.f_30 != 0)
			{
				if (func_12(&(Local_208.f_270)))
				{
					if (func_10(&(Local_208.f_270), 5000, 0))
					{
						EVENT::REMOVE_SHOCKING_EVENT(Local_208.f_30);
						func_63(&(Local_208.f_270));
						Local_208.f_30 = 0;
					}
				}
			}
		}
		else
		{
			NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_208.f_162);
		}
	}
}

int func_130(int iParam0)
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
	if (func_131(iParam0))
	{
		return 1;
	}
	if (VEHICLE::IS_THIS_MODEL_A_HELI(iParam0) || VEHICLE::IS_THIS_MODEL_A_PLANE(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_131(int iParam0)
{
	if (func_132(iParam0, 1))
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

int func_132(int iParam0, int iParam1)
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
			return 1;
			break;
	}
	return 0;
}

float func_133(int iParam0)
{
	struct<3> Var0;
	struct<3> Var3;
	
	func_134(iParam0, &Var0, &Var3, 1086324736, 1080033280, 1077936128);
	return MISC::ABSF((Var0.f_2 - Var3.f_2));
}

void func_134(int iParam0, var* uParam1, var* uParam2, float fParam3, float fParam4, float fParam5)
{
	int iVar0;
	
	if (STREAMING::IS_MODEL_VALID(iParam0))
	{
		MISC::GET_MODEL_DIMENSIONS(iParam0, uParam1, uParam2);
	}
	else
	{
		iVar0 = func_137(iParam0);
		if (iVar0 != 0)
		{
			func_135(iVar0, uParam1, uParam2, 1086324736, 1080033280, 1077936128);
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

void func_135(int iParam0, var* uParam1, var* uParam2, float fParam3, float fParam4, float fParam5)
{
	int iVar0;
	
	func_136(iParam0, &Global_1576480);
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (STREAMING::IS_MODEL_VALID(Global_1576480[iVar0]))
		{
			MISC::GET_MODEL_DIMENSIONS(Global_1576480[iVar0], &(Global_1576484[iVar0 /*3*/]), &(Global_1576491[iVar0 /*3*/]));
		}
		if (SYSTEM::VMAG(Global_1576484[iVar0 /*3*/]) <= 0.01f || SYSTEM::VMAG(Global_1576491[iVar0 /*3*/]) <= 0.01f)
		{
			Global_1576484[iVar0 /*3*/] = (0f - (fParam4 * 0.5f));
			Global_1576491[iVar0 /*3*/] = (0f + (fParam4 * 0.5f));
			Global_1576484[iVar0 /*3*/].f_1 = (0f - (fParam3 * 0.5f));
			Global_1576491[iVar0 /*3*/].f_1 = (0f + (fParam3 * 0.5f));
			Global_1576484[iVar0 /*3*/].f_2 = (0f - (fParam5 * 0.5f));
			Global_1576491[iVar0 /*3*/].f_2 = (0f + (fParam5 * 0.5f));
		}
		Global_1576498[iVar0] = (Global_1576491[iVar0 /*3*/] - Global_1576484[iVar0 /*3*/]);
		Global_1576501[iVar0] = (Global_1576491[iVar0 /*3*/].f_1 - Global_1576484[iVar0 /*3*/].f_1);
		Global_1576504[iVar0] = (Global_1576491[iVar0 /*3*/].f_2 - Global_1576484[iVar0 /*3*/].f_2);
		if (Global_1576498[iVar0] > Global_1576507)
		{
			Global_1576507 = Global_1576498[iVar0];
		}
		if (Global_1576504[iVar0] > Global_1576508)
		{
			Global_1576508 = Global_1576504[iVar0];
		}
		iVar0++;
	}
	Global_1576509 = (Global_1576507 * -0.5f);
	Global_1576512 = (Global_1576507 * 0.5f);
	Global_1576509.f_1 = ((((0.5f * Global_1576501[0]) + Global_1576501[1]) + Global_1576480.f_3) * -1f);
	Global_1576512.f_1 = (0.5f * Global_1576501[0]);
	Global_1576509.f_2 = (Global_1576504[0] * -0.5f);
	Global_1576512.f_2 = (Global_1576504[0] * 0.5f);
	*uParam1 = { Global_1576509 };
	*uParam2 = { Global_1576512 };
}

void func_136(int iParam0, var uParam1)
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

int func_137(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = iVar0;
		if (func_138(iVar1) == iParam0)
		{
			return iVar1;
		}
		iVar0++;
	}
	return 0;
}

int func_138(int iParam0)
{
	int iVar0;
	
	iVar0 = (1000 + iParam0);
	return iVar0;
}

void func_139()
{
	int iVar0;
	
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_208.f_162))
	{
		if (func_47(NETWORK::NET_TO_OBJ(Local_208.f_162)))
		{
			iVar0 = func_143(NETWORK::NET_TO_OBJ(Local_208.f_162));
			if (iVar0 != -1)
			{
				if (!func_142(&(Global_1835511.f_404), iVar0) && !func_142(&(Global_1892653[PLAYER::PLAYER_ID() /*615*/].f_542), iVar0))
				{
					func_140(1);
				}
			}
		}
	}
}

void func_140(bool bParam0)
{
	if (bParam0)
	{
		if (func_141())
		{
			if (!BitTest(Global_1964145, 9))
			{
				MISC::SET_BIT(&Global_1964145, 9);
			}
		}
	}
	else if (BitTest(Global_1964145, 9))
	{
		MISC::CLEAR_BIT(&Global_1964145, 9);
	}
}

bool func_141()
{
	return BitTest(Global_1964145, 5);
}

bool func_142(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam1 / 32);
	iVar1 = (iParam1 % 32);
	return BitTest((*uParam0)[iVar0], iVar1);
}

int func_143(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		iVar0 = func_147(iParam0);
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
				func_144(iVar3);
				if (Global_1955751[iVar2] == iVar1)
				{
					return iVar3;
				}
				iVar2++;
			}
		}
	}
	return -1;
}

void func_144(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (Global_1955751[iVar0] == 0)
	{
		Global_1955751[iVar0] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(func_146(iParam0), func_145(iParam0));
	}
}

char* func_145(int iParam0)
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

Vector3 func_146(int iParam0)
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

int func_147(int iParam0)
{
	if (func_155(iParam0))
	{
		return 15;
	}
	if (func_153(iParam0))
	{
		return 28;
	}
	if (func_150(iParam0))
	{
		return 36;
	}
	if (func_149(iParam0))
	{
		return 23;
	}
	if (func_148(iParam0))
	{
		return 33;
	}
	return -1;
}

int func_148(int iParam0)
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

int func_149(int iParam0)
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

bool func_150(int iParam0)
{
	return ((!ENTITY::IS_ENTITY_DEAD(iParam0, false) && ENTITY::IS_ENTITY_AT_COORD(iParam0, 3042.596f, -4667.915f, 34.26143f, 250f, 300f, 40f, false, true, 0)) || func_151());
}

int func_151()
{
	if (!CAM::IS_SCREEN_FADED_OUT())
	{
		if (SYSTEM::VDIST2(func_152(PLAYER::PLAYER_ID()), 3042.596f, -4667.915f, 34.26143f) <= 25600f)
		{
			if (CAM::IS_SPHERE_VISIBLE(3042.596f, -4667.915f, 34.26143f, 50f))
			{
				return 1;
			}
		}
	}
	return 0;
}

Vector3 func_152(int iParam0)
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), false);
}

bool func_153(int iParam0)
{
	return ((!ENTITY::IS_ENTITY_DEAD(iParam0, false) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -2016.6f, -1039.867f, -3.801932f, -2129.956f, -1003.351f, 22.18234f, 15.75f, false, true, 0)) || func_154());
}

int func_154()
{
	struct<3> Var0;
	
	if (!CAM::IS_SCREEN_FADED_OUT())
	{
		Var0 = { -2073.541f, -1021.104f, 14.99213f };
		if (SYSTEM::VDIST2(func_152(PLAYER::PLAYER_ID()), Var0) <= 25600f)
		{
			if (CAM::IS_SPHERE_VISIBLE(Var0, 60f))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_155(int iParam0)
{
	return ((!ENTITY::IS_ENTITY_DEAD(iParam0, false) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Vector(-3.801932f, -1039.867f, -2016.6f) + Vector(0f, 7773.967f, 654.731f), Vector(22.18234f, -1003.351f, -2129.956f) + Vector(0f, 7773.967f, 654.731f), 15.75f, false, true, 0)) || func_156());
}

int func_156()
{
	struct<3> Var0;
	
	if (!CAM::IS_SCREEN_FADED_OUT())
	{
		Var0 = { Vector(-3.801932f, -1039.867f, -2016.6f) + Vector(0f, 7773.967f, 654.731f) };
		if (SYSTEM::VDIST2(func_152(PLAYER::PLAYER_ID()), Var0) <= 25600f)
		{
			if (CAM::IS_SPHERE_VISIBLE(Var0, 50f))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_157(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_208.f_162))
	{
		if (CAM::DOES_CAM_EXIST(Local_208.f_172) && CAM::IS_CAM_ACTIVE(Local_208.f_172))
		{
			if (CAM::IS_CAM_RENDERING(Local_208.f_172) || iParam0)
			{
				func_232(0);
				func_186(1);
				if ((!func_185() || BitTest(Local_208.f_5, 1)) || func_174())
				{
					HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
				}
				else
				{
					HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
					HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
					HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
					func_231();
					func_172(1);
					iVar0 = INTERIOR::GET_INTERIOR_FROM_ENTITY(NETWORK::NET_TO_ENT(Local_208.f_162));
					if (INTERIOR::IS_VALID_INTERIOR(iVar0))
					{
						Global_1964145.f_27 = iVar0;
						if (!BitTest(Local_208.f_5, 8))
						{
							Local_208.f_126 = func_171(INTERIOR::GET_INTERIOR_HEADING(iVar0));
							INTERIOR::GET_INTERIOR_LOCATION_AND_NAMEHASH(iVar0, &(Local_208.f_150), &(Local_208.f_17));
							MISC::SET_BIT(&(Local_208.f_5), 8);
						}
						iVar1 = 0;
						if (func_170(Local_208.f_153.f_2, 43f, 48.7f))
						{
							iVar1 = 1;
						}
						if (Global_1964145.f_12 == -1f)
						{
							HUD::SET_RADAR_ZOOM_PRECISE(1f);
						}
						else
						{
							HUD::SET_RADAR_ZOOM_PRECISE(Global_1964145.f_12);
						}
						if ((!func_164(PLAYER::PLAYER_ID()) && !func_161(PLAYER::PLAYER_ID())) && !func_160())
						{
							if (!func_159())
							{
								func_158(1);
							}
						}
						if (!func_160())
						{
							HUD::SET_BIGMAP_ACTIVE(false, false);
						}
						HUD::SET_RADAR_AS_INTERIOR_THIS_FRAME(Local_208.f_17, Local_208.f_150, Local_208.f_150.f_1, SYSTEM::FLOOR(Local_208.f_126), iVar1);
					}
					else
					{
						Local_208.f_17 = -1;
						if (Global_1964145.f_12 == -1f)
						{
							HUD::SET_RADAR_ZOOM_PRECISE(0f);
						}
						else
						{
							HUD::SET_RADAR_ZOOM_PRECISE(Global_1964145.f_12);
						}
						if (!func_159() && !func_160())
						{
							func_158(1);
						}
						if (!func_160())
						{
							HUD::SET_BIGMAP_ACTIVE(false, false);
						}
						Global_1964145.f_27 = -1;
						if (BitTest(Local_208.f_5, 8))
						{
							MISC::CLEAR_BIT(&(Local_208.f_5), 8);
						}
					}
				}
			}
		}
	}
}

void func_158(int iParam0)
{
	Global_2699606 = iParam0;
}

bool func_159()
{
	return Global_2699606;
}

bool func_160()
{
	return BitTest(Global_1964145.f_2, 8);
}

int func_161(int iParam0)
{
	if (func_163(iParam0))
	{
		return 1;
	}
	if (func_162(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_162(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_104(iParam0, 9);
	}
	return 0;
}

int func_163(var uParam0)
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 != -1)
	{
		return BitTest(Global_1892653[iVar0 /*615*/].f_1, 0);
	}
	return 0;
}

int func_164(int iParam0)
{
	if (func_167(func_168(iParam0)))
	{
		if (func_166() != func_23())
		{
			if (func_165() == func_166())
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_165()
{
	return Global_1892653[PLAYER::PLAYER_ID() /*615*/].f_10.f_36;
}

int func_166()
{
	return Global_1892653[PLAYER::PLAYER_ID() /*615*/].f_10;
}

int func_167(int iParam0)
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

int func_168(int iParam0)
{
	if (func_126(iParam0))
	{
		if (func_169(iParam0, 0))
		{
			return Global_1892653[iParam0 /*615*/].f_10.f_34;
		}
	}
	return -1;
}

int func_169(int iParam0, int iParam1)
{
	if (func_126(iParam0))
	{
		if (Global_1892653[iParam0 /*615*/].f_10.f_34 != -1 || (iParam1 && Global_1892653[iParam0 /*615*/].f_10.f_33 != -1))
		{
			return 1;
		}
	}
	return 0;
}

int func_170(float fParam0, float fParam1, float fParam2)
{
	if (fParam0 >= fParam1 && fParam0 < fParam2)
	{
		return 1;
	}
	return 0;
}

float func_171(float fParam0)
{
	return (fParam0 * 57.29578f);
}

void func_172(bool bParam0)
{
	int iVar0;
	
	if (bParam0)
	{
		Global_102481.f_8 = 1;
	}
	else
	{
		Global_102481.f_8 = 0;
	}
	iVar0 = 0;
	while (iVar0 < 65)
	{
		func_173(iVar0);
		iVar0++;
	}
}

void func_173(int iParam0)
{
	Global_102481.f_217[iParam0] = 1;
	Global_102481.f_216 = 1;
}

int func_174()
{
	if ((NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_208.f_162) && ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_OBJ(Local_208.f_162), false)) && !BitTest(Local_208.f_5, 2))
	{
		return 1;
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_208.f_162))
	{
		if (func_164(PLAYER::PLAYER_ID()) && BitTest(Global_2731604, 0))
		{
		}
		else if (func_184())
		{
			if (ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(NETWORK::NET_TO_OBJ(Local_208.f_162)) || ENTITY::GET_LAST_MATERIAL_HIT_BY_ENTITY(NETWORK::NET_TO_OBJ(Local_208.f_162)) != 0)
			{
				Local_208.f_28 = 1;
				return 1;
			}
		}
	}
	if (BitTest(Local_208.f_5, 2))
	{
		Local_208.f_28 = 4;
		return 1;
	}
	if (BitTest(Local_208.f_5, 9))
	{
		Local_208.f_28 = 1;
		return 1;
	}
	if (BitTest(Local_208.f_5, 7))
	{
		Local_208.f_28 = 0;
		return 1;
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_208.f_162))
	{
		if (ENTITY::IS_ENTITY_IN_WATER(NETWORK::NET_TO_OBJ(Local_208.f_162)) || func_183(NETWORK::NET_TO_ENT(Local_208.f_162), 0))
		{
			if (BitTest(Local_208.f_5, 29))
			{
				Local_208.f_28 = 3;
				return 1;
			}
		}
	}
	if (func_181(PLAYER::PLAYER_ID()))
	{
		Local_208.f_28 = 0;
		return 1;
	}
	if (Global_1950198.f_5362 != -1)
	{
		Local_208.f_28 = 0;
		return 1;
	}
	if (func_180())
	{
		Local_208.f_28 = 1;
		return 1;
	}
	if (func_179(PLAYER::PLAYER_ID()))
	{
		Local_208.f_28 = 0;
		return 1;
	}
	if (func_178())
	{
		Local_208.f_28 = 0;
		return 1;
	}
	if (func_177())
	{
		Local_208.f_28 = 0;
		return 1;
	}
	if (func_176())
	{
		Local_208.f_28 = 0;
		return 1;
	}
	if (func_14())
	{
		Local_208.f_28 = 0;
		return 1;
	}
	if (PED::IS_PED_DEAD_OR_DYING(PLAYER::PLAYER_PED_ID(), true))
	{
		Local_208.f_28 = 6;
		return 1;
	}
	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_HURT(PLAYER::PLAYER_PED_ID()))
	{
		Local_208.f_28 = 6;
		return 1;
	}
	if (func_175())
	{
		return 1;
	}
	return 0;
}

int func_175()
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0 = { -90000f, -90000f, -1600f };
	Var3 = { 90000f, 90000f, 2600f };
	if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_208.f_162))
	{
		return 0;
	}
	if (!ENTITY::IS_ENTITY_IN_AREA(NETWORK::NET_TO_OBJ(Local_208.f_162), Var0, Var3, false, true, 0))
	{
		return 1;
	}
	return 0;
}

bool func_176()
{
	return BitTest(Global_1964145, 16);
}

bool func_177()
{
	return Global_99713;
}

bool func_178()
{
	return BitTest(Global_1964145, 9);
}

int func_179(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (Global_1892653[iVar0 /*615*/].f_8)
		{
			return 1;
		}
	}
	return 0;
}

int func_180()
{
	struct<3> Var0;
	
	if (Local_208.f_17 == joaat("v_faceoffice"))
	{
		if (func_47(NETWORK::NET_TO_OBJ(Local_208.f_162)))
		{
			if (INTERIOR::GET_ROOM_KEY_FROM_ENTITY(NETWORK::NET_TO_OBJ(Local_208.f_162)) == joaat("GtaMloRoom001"))
			{
				Var0 = { ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_OBJ(Local_208.f_162), true) };
				if (Var0.f_2 >= 47f)
				{
					return 1;
				}
			}
		}
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_208.f_162))
	{
		if (func_47(NETWORK::NET_TO_OBJ(Local_208.f_162)))
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(NETWORK::NET_TO_OBJ(Local_208.f_162), -1071.258f, -242.5484f, 48.02133f, -1069.456f, -245.9234f, 43.87983f, 3f, false, true, 0))
			{
				return 1;
			}
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(NETWORK::NET_TO_OBJ(Local_208.f_162), 2494.398f, -276.2f, -69.09f, 2494.342f, -277.4824f, -67.98756f, 0.7f, false, true, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_181(int iParam0)
{
	if (iParam0 != func_23() && func_42(iParam0, 1, 1))
	{
		if (func_41(iParam0) && !func_182(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_182(int iParam0)
{
	if (iParam0 != func_23() && func_42(iParam0, 1, 1))
	{
		return BitTest(Global_2658291[iParam0 /*468*/].f_325, 4);
	}
	return 0;
}

int func_183(int iParam0, int iParam1)
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

bool func_184()
{
	return BitTest(Global_1964145, 15);
}

bool func_185()
{
	return BitTest(Global_1964145, 4);
}

void func_186(int iParam0)
{
	if (Global_2733002.f_3751 != iParam0)
	{
		Global_2733002.f_3751 = iParam0;
	}
}

void func_187()
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
	
	if (BitTest(Local_208.f_5, 1) || func_174())
	{
		return;
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_208.f_162) && !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_OBJ(Local_208.f_162), false))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_208.f_162))
		{
			fVar0 = 40f;
			fVar1 = 19f;
			fVar2 = 14f;
			iVar3 = 1;
			fVar4 = ENTITY::GET_ENTITY_ROLL(NETWORK::NET_TO_OBJ(Local_208.f_162));
			fVar5 = ENTITY::GET_ENTITY_PITCH(NETWORK::NET_TO_OBJ(Local_208.f_162));
			if (func_193())
			{
				fVar1 = 10f;
			}
			fVar6 = (30f * SYSTEM::TIMESTEP());
			func_192();
			PAD::ALLOW_ALTERNATIVE_SCRIPT_CONTROLS_LAYOUT(2);
			func_191(&(Local_208[0]), &(Local_208[1]), &(Local_208[2]), &(Local_208[3]), 0, 0);
			if (PAD::IS_USING_KEYBOARD_AND_MOUSE(0))
			{
				iVar3 = 5;
				Local_208[2] = (Local_208[2] * iVar3);
				Local_208[3] = (Local_208[3] * iVar3);
			}
			if (PAD::IS_LOOK_INVERTED())
			{
				Local_208[3] = (Local_208[3] * -1);
			}
			if (func_10(&(Local_208.f_282), 750, 0))
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
					func_115(&(Local_208.f_282), 0, 0);
				}
			}
			if (bVar7 && !func_190())
			{
				if (!PAD::IS_USING_KEYBOARD_AND_MOUSE(0))
				{
					Local_208.f_27++;
				}
				else if (bVar8)
				{
					Local_208.f_27 = (Local_208.f_27 - 1);
				}
				else
				{
					Local_208.f_27++;
				}
				if (AUDIO::HAS_SOUND_FINISHED(Local_208.f_41))
				{
					Local_208.f_41 = AUDIO::GET_SOUND_ID();
					AUDIO::PLAY_SOUND_FRONTEND(Local_208.f_41, "HUD_Zoom_Change", Local_208.f_160, true);
				}
				if (Local_208.f_27 > 2)
				{
					Local_208.f_27 = 0;
				}
				else if (Local_208.f_27 < 0)
				{
					Local_208.f_27 = 2;
				}
			}
			else if (AUDIO::HAS_SOUND_FINISHED(Local_208.f_41))
			{
				AUDIO::STOP_SOUND(Local_208.f_41);
				AUDIO::RELEASE_SOUND_ID(Local_208.f_41);
				Local_208.f_41 = -1;
			}
			Local_208.f_131 = (Local_208.f_131 + (((Local_208.f_129 - Local_208.f_131) * 0.06f) * fVar6));
			CAM::SET_CAM_FOV(Local_208.f_172, Local_208.f_131);
			if (Local_208[2] != 0 || Local_208[3] != 0)
			{
				if (Local_208[2] != 0)
				{
					fVar9 = (1f / (127f / IntToFloat(Local_208[2])));
				}
				else
				{
					fVar9 = 0f;
				}
				if (Local_208[3] != 0)
				{
					fVar10 = (1f / (127f / IntToFloat(Local_208[3])));
				}
				else
				{
					fVar10 = 0f;
				}
				Var14 = { ENTITY::GET_ENTITY_ROTATION(NETWORK::NET_TO_OBJ(Local_208.f_162), 2) };
				fVar11 = (((fVar10 * 0.05f) * fVar6) * Local_208.f_133);
				fVar12 = -(((fVar9 * 0.05f) * fVar6) * Local_208.f_133);
				if (fVar4 != 0f || Local_208[0] != 0)
				{
					if (Local_208[0] != 0)
					{
						fVar20 = (1f / (127f / IntToFloat(Local_208[0])));
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
					if (Local_208[0] == 0)
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
				if (!BitTest(Local_208.f_5, 12))
				{
					MISC::SET_BIT(&(Local_208.f_5), 12);
				}
				ENTITY::SET_ENTITY_ROTATION(NETWORK::NET_TO_OBJ(Local_208.f_162), Vector(0f, 0f, 0f) + Vector(Var17.f_2, Var17.f_1, Var17.f_0), 2, true);
			}
			else if ((Local_208[0] != 0 || Local_208[1] != 0) && !func_190())
			{
				Var21 = { ENTITY::GET_ENTITY_ROTATION(NETWORK::NET_TO_OBJ(Local_208.f_162), 2) };
				if (func_190())
				{
					if (func_189())
					{
						fVar25 = -1f;
						Local_208.f_132 = fVar25;
					}
				}
				else
				{
					if (Local_208[0] != 0)
					{
						fVar24 = (1f / (127f / IntToFloat(Local_208[0])));
						Local_208.f_132 = fVar24;
					}
					else
					{
						fVar24 = 0f;
					}
					if (Local_208[1] != 0)
					{
						fVar25 = (1f / (127f / IntToFloat(Local_208[1])));
						Local_208.f_132 = fVar24;
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
					if (Local_208[0] == 0 || func_190())
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
				if (BitTest(Local_208.f_5, 12))
				{
					MISC::CLEAR_BIT(&(Local_208.f_5), 12);
				}
				ENTITY::SET_ENTITY_ROTATION(NETWORK::NET_TO_OBJ(Local_208.f_162), Vector(0f, 0f, 0f) + Vector(Var21.f_2, Var28.f_1, Var28.f_0), 2, true);
			}
			else if (!func_189() && !func_190())
			{
				Local_208.f_132 = 0f;
				Var31 = { ENTITY::GET_ENTITY_ROTATION(NETWORK::NET_TO_OBJ(Local_208.f_162), 2) };
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
					uVar36 = func_188(-(((fVar35 * 0.05f) * fVar6) * (fVar0 - 25f)));
					uVar37 = func_188(-(((fVar34 * 0.05f) * fVar6) * (fVar0 - 25f)));
					Var38 = { Vector(0f, uVar37, uVar36) + Var31 };
					if (BitTest(Local_208.f_5, 12))
					{
						Var38.f_0 = Var31.f_0;
					}
					ENTITY::SET_ENTITY_ROTATION(NETWORK::NET_TO_OBJ(Local_208.f_162), Vector(0f, 0f, 0f) + Vector(Var31.f_2, Var38.f_1, Var38.f_0), 2, true);
				}
			}
		}
		else
		{
			NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_208.f_162);
		}
	}
}

float func_188(float fParam0)
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

bool func_189()
{
	return BitTest(Local_208.f_5, 22);
}

bool func_190()
{
	return BitTest(Local_208.f_5, 21);
}

void func_191(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)
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

void func_192()
{
	if (Local_567.f_2 == 1)
	{
		switch (Local_208.f_27)
		{
			case 0:
				Local_208.f_130 = 90f;
				Local_208.f_129 = 90f;
				break;
			
			case 1:
				Local_208.f_130 = 60f;
				Local_208.f_129 = 60f;
				break;
			
			case 2:
				Local_208.f_130 = 30f;
				Local_208.f_129 = 30f;
				break;
		}
	}
	else
	{
		switch (Local_208.f_27)
		{
			case 0:
				Local_208.f_130 = 90f;
				Local_208.f_129 = 90f;
				break;
			
			case 1:
				Local_208.f_130 = 80f;
				Local_208.f_129 = 80f;
				break;
			
			case 2:
				Local_208.f_130 = 70f;
				Local_208.f_129 = 70f;
				break;
			}
	}
}

bool func_193()
{
	return BitTest(Global_1964145.f_2, 5);
}

void func_194()
{
	if (func_230())
	{
		return;
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_208.f_162) && !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_OBJ(Local_208.f_162), false))
	{
		if (CAM::DOES_CAM_EXIST(Local_208.f_172) && CAM::IS_CAM_RENDERING(Local_208.f_172))
		{
			func_213();
			func_197();
			RECORDING::REPLAY_DISABLE_CAMERA_MOVEMENT_THIS_FRAME();
			func_196(1);
			func_195(2);
		}
	}
}

void func_195(int iParam0)
{
	Global_1576384 = iParam0;
}

void func_196(int iParam0)
{
	Global_1679103.f_1163 = iParam0;
}

void func_197()
{
	if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Local_208.f_173))
	{
		Local_208.f_173 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("DRONE_CAM");
		return;
	}
	func_212("SET_DETONATE_METER_IS_VISIBLE", 0);
	func_212("SET_SHOCK_METER_IS_VISIBLE", 0);
	func_212("SET_EMP_METER_IS_VISIBLE", 0);
	func_212("SET_RETICLE_IS_VISIBLE", 1);
	func_212("SET_HEADING_METER_IS_VISIBLE", 0);
	func_212("SET_ZOOM_METER_IS_VISIBLE", 1);
	if (func_211())
	{
		func_212("SET_BOOST_METER_IS_VISIBLE", 1);
	}
	else
	{
		func_212("SET_BOOST_METER_IS_VISIBLE", 0);
	}
	func_212("SET_TRANQUILIZE_METER_IS_VISIBLE", 0);
	func_212("SET_MISSILE_METER_IS_VISIBLE", 0);
	func_212("SET_BOTTOM_LEFT_CORNER_IS_VISIBLE", 0);
	func_212("SET_SOUND_WAVE_IS_VISIBLE", 0);
	func_212("SET_INFO_LIST_IS_VISIBLE", 0);
	if (func_211())
	{
		func_210(Local_208.f_20);
	}
	func_208(0, "DRONE_ZOOM_1");
	func_208(1, "");
	func_208(2, "DRONE_ZOOM_2");
	func_208(3, "");
	func_208(4, "DRONE_ZOOM_3");
	func_206();
	func_205(0);
	func_204(0);
	func_202();
	func_201(SYSTEM::ROUND((ENTITY::GET_ENTITY_HEADING(NETWORK::NET_TO_OBJ(Local_208.f_162)) + 180f)));
	func_198();
	GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(1);
	GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(Local_208.f_173, 255, 255, 255, 0, 0);
}

void func_198()
{
	int iVar0;
	float fVar1;
	
	iVar0 = 1;
	fVar1 = Local_208.f_123;
	if (fVar1 >= (func_200() - IntToFloat((50 * iVar0))))
	{
		if (AUDIO::HAS_SOUND_FINISHED(Local_208.f_39))
		{
			Local_208.f_39 = AUDIO::GET_SOUND_ID();
			AUDIO::PLAY_SOUND_FRONTEND(Local_208.f_39, "Out_Of_Bounds_Alarm_Loop", Local_208.f_160, true);
		}
		if (fVar1 >= (func_200() - IntToFloat((50 * iVar0))) && fVar1 < (func_200() - IntToFloat((45 * iVar0))))
		{
			func_212("SET_WARNING_IS_VISIBLE", 1);
			func_199(0.1f);
		}
		else if (fVar1 >= (func_200() - IntToFloat((45 * iVar0))) && fVar1 < (func_200() - IntToFloat((40 * iVar0))))
		{
			func_212("SET_WARNING_IS_VISIBLE", 1);
			func_199(0.2f);
		}
		else if (fVar1 >= (func_200() - IntToFloat((40 * iVar0))) && fVar1 < (func_200() - IntToFloat((35 * iVar0))))
		{
			func_212("SET_WARNING_IS_VISIBLE", 1);
			func_199(0.3f);
		}
		else if (fVar1 >= (func_200() - IntToFloat((35 * iVar0))) && fVar1 < (func_200() - IntToFloat((30 * iVar0))))
		{
			func_212("SET_WARNING_IS_VISIBLE", 1);
			func_199(0.4f);
		}
		else if (fVar1 >= (func_200() - IntToFloat((30 * iVar0))) && fVar1 < (func_200() - IntToFloat((25 * iVar0))))
		{
			func_212("SET_WARNING_IS_VISIBLE", 1);
			func_199(0.5f);
		}
		else if (fVar1 >= (func_200() - IntToFloat((25 * iVar0))) && fVar1 < (func_200() - IntToFloat((20 * iVar0))))
		{
			func_212("SET_WARNING_IS_VISIBLE", 1);
			func_199(0.6f);
		}
		else if (fVar1 >= (func_200() - IntToFloat((20 * iVar0))) && fVar1 < (func_200() - IntToFloat((15 * iVar0))))
		{
			func_212("SET_WARNING_IS_VISIBLE", 1);
			func_199(0.7f);
		}
		else if (fVar1 >= (func_200() - IntToFloat((15 * iVar0))) && fVar1 < (func_200() - IntToFloat((10 * iVar0))))
		{
			func_212("SET_WARNING_IS_VISIBLE", 1);
			func_199(0.8f);
		}
		else if (fVar1 >= (func_200() - IntToFloat((10 * iVar0))) && fVar1 < (func_200() - IntToFloat((5 * iVar0))))
		{
			func_212("SET_WARNING_IS_VISIBLE", 1);
			func_199(0.9f);
		}
		else if (fVar1 >= (func_200() - IntToFloat((5 * iVar0))) && fVar1 < func_200())
		{
			func_212("SET_WARNING_IS_VISIBLE", 1);
			func_199(1f);
		}
	}
	else
	{
		func_212("SET_WARNING_IS_VISIBLE", 0);
		if (!AUDIO::HAS_SOUND_FINISHED(Local_208.f_39))
		{
			AUDIO::STOP_SOUND(Local_208.f_39);
			AUDIO::RELEASE_SOUND_ID(Local_208.f_39);
			Local_208.f_39 = -1;
		}
	}
}

void func_199(float fParam0)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Local_208.f_173, "SET_WARNING_FLASH_RATE");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fParam0);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

float func_200()
{
	if (Global_1964145.f_11 == 0f)
	{
		return Global_262145.f_24331;
	}
	return Global_1964145.f_11;
}

void func_201(int iParam0)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Local_208.f_173, "SET_HEADING");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam0);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_202()
{
	if (BitTest(Local_208.f_5, 31))
	{
		func_203(1, 18);
	}
	else if (BitTest(Local_208.f_5, 23))
	{
		func_203(1, 6);
	}
	else
	{
		func_203(1, 1);
	}
}

void func_203(bool bParam0, int iParam1)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Local_208.f_173, "SET_RETICLE_ON_TARGET");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bParam0);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_204(bool bParam0)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Local_208.f_173, "SET_RETICLE_OUTER_LINES_VISIBLE");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bParam0);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_205(int iParam0)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Local_208.f_173, "SET_RETICLE_STATE");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam0);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_206()
{
	switch (Local_208.f_27)
	{
		case 0:
			func_207(0);
			break;
		
		case 1:
			func_207(2);
			break;
		
		case 2:
			func_207(4);
			break;
	}
}

void func_207(int iParam0)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Local_208.f_173, "SET_ZOOM");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam0);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_208(int iParam0, char* sParam1)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Local_208.f_173, "SET_ZOOM_LABEL");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam0);
	func_209(sParam1);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_209(char* sParam0)
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

void func_210(int iParam0)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Local_208.f_173, "SET_BOOST_PERCENTAGE");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam0);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

bool func_211()
{
	return BitTest(Local_208.f_120, 2);
}

void func_212(char* sParam0, bool bParam1)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Local_208.f_173, sParam0);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bParam1);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_213()
{
	if (!BitTest(Local_208.f_5, 16))
	{
		if (func_228(0, -1, 0))
		{
			func_227(-1);
			func_226(21, "DRONE_MOVE", -1);
			func_226(20, "DRONE_POSITION", -1);
			if (!PAD::IS_USING_KEYBOARD_AND_MOUSE(0))
			{
				func_225(210, "CELL_284", -1, 0);
				if (BitTest(Local_208.f_120, 2))
				{
					func_225(209, "BOOST_DRONE_E", -1, 0);
				}
				if (Local_567.f_2 != 0)
				{
					func_225(206, "FMC_DRONE_SCN", -1, 0);
				}
				func_225(208, "MOVE_DRONE_UP", -1, 0);
				func_225(207, "MOVE_DRONE_DO", -1, 0);
			}
			else
			{
				func_226(29, "CELL_284", -1);
				if (BitTest(Local_208.f_120, 2))
				{
					func_225(203, "BOOST_DRONE_E", -1, 0);
				}
				if (Local_567.f_2 != 0)
				{
					func_225(206, "FMC_DRONE_SCN", -1, 0);
				}
				func_225(209, "MOVE_DRONE_UP", -1, 0);
				func_225(210, "MOVE_DRONE_DO", -1, 0);
			}
			func_225(80, "MOVE_DRONE_RE", -1, 0);
			MISC::SET_BIT(&(Local_208.f_5), 16);
		}
	}
	else
	{
		func_214(0, -1, 0, 1, 0, 0, 1, 1, 0);
	}
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(0))
	{
		if (!BitTest(Local_208.f_5, 17))
		{
			MISC::SET_BIT(&(Local_208.f_5), 17);
			MISC::CLEAR_BIT(&(Local_208.f_5), 16);
		}
	}
	else if (BitTest(Local_208.f_5, 17))
	{
		MISC::CLEAR_BIT(&(Local_208.f_5), 17);
		MISC::CLEAR_BIT(&(Local_208.f_5), 16);
	}
}

void func_214(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (!func_224(&iVar0, 0, iParam1))
	{
		return;
	}
	iParam0 = iParam0;
	if (iParam3 && !func_221(bParam4, bParam8))
	{
		return;
	}
	if (func_219())
	{
		return;
	}
	if (NETWORK::NETWORK_TEXT_CHAT_IS_TYPING())
	{
		return;
	}
	if (iParam7 == 0)
	{
		if (func_216(PLAYER::PLAYER_ID(), 0))
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
	if (Global_24529.f_5326 != 0)
	{
		if (PAD::HAVE_CONTROLS_CHANGED(2))
		{
			iVar1 = 0;
			while (iVar1 < Global_24529.f_5326)
			{
				if (Global_24529.f_5625[iVar1] != 402)
				{
					StringCopy(&(Global_24529.f_5328[iVar1 /*16*/]), PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2, Global_24529.f_5625[iVar1], true), 64);
				}
				else if (Global_24529.f_5640[iVar1] != 32)
				{
					StringCopy(&(Global_24529.f_5328[iVar1 /*16*/]), PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(2, Global_24529.f_5640[iVar1], true), 64);
				}
				iVar1++;
			}
			Global_24529.f_5327 = 0;
		}
		if (!Global_24529.f_5327)
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_24529.f_6263[iVar0 /*10*/], "CLEAR_ALL");
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_24529.f_6263[iVar0 /*10*/], "SET_MAX_WIDTH");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT((1f - (Global_24529.f_5684 / 100f)));
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			if (MISC::IS_PC_VERSION())
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_24529.f_6263[iVar0 /*10*/], "TOGGLE_MOUSE_BUTTONS");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
			iVar1 = 0;
			while (iVar1 < Global_24529.f_5326)
			{
				if (MISC::GET_HASH_KEY(&(Global_24529.f_5553[iVar1 /*4*/])) != MISC::GET_HASH_KEY("PREV"))
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_24529.f_6263[iVar0 /*10*/], "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar1);
					func_215(&(Global_24529.f_5328[iVar1 /*16*/]));
					iVar2 = iVar1 + 1;
					while (iVar2 < 14 && MISC::GET_HASH_KEY(&(Global_24529.f_5553[iVar2 /*4*/])) == MISC::GET_HASH_KEY("PREV"))
					{
						func_215(&(Global_24529.f_5328[iVar2 /*16*/]));
						iVar2++;
					}
					if (Global_24529.f_5610[iVar1] == -1)
					{
						func_209(&(Global_24529.f_5553[iVar1 /*4*/]));
					}
					else
					{
						iVar3 = Global_24529.f_5610[iVar1];
						if (iParam2 >= 0)
						{
							iVar3 = iParam2;
						}
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_24529.f_5553[iVar1 /*4*/]));
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
						if (Global_24529.f_5625[iVar1] != 402 && BitTest(Global_24529.f_5655, iVar1))
						{
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_24529.f_5625[iVar1]);
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
			if (MISC::GET_HASH_KEY(&(Global_4521195.f_16)) != MISC::GET_HASH_KEY(""))
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_24529.f_6263[iVar0 /*10*/], "SET_DATA_SLOT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_24529.f_5326);
				func_215(&Global_4521195);
				if (Global_4521195.f_20 == -1)
				{
					func_209(&(Global_4521195.f_16));
				}
				else
				{
					iVar4 = Global_24529.f_5610[iVar1];
					if (iParam2 >= 0)
					{
						iVar4 = iParam2;
					}
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_4521195.f_16));
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
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_24529.f_6263[iVar0 /*10*/], "SET_BACKGROUND_COLOUR");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(80);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_24529.f_6263[iVar0 /*10*/], "DRAW_INSTRUCTIONAL_BUTTONS");
			if (Global_24529.f_5685)
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
			}
			else
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			}
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			Global_24529.f_5327 = 1;
		}
		iVar1 = 0;
		while (iVar1 < Global_24529.f_5326)
		{
			if (Global_24529.f_5610[iVar1] != -1)
			{
				if (iParam2 > 0)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_24529.f_6263[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar1);
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_24529.f_5553[iVar1 /*4*/]));
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
		if (Global_4521195.f_20 != -1)
		{
			if (iParam2 > 0)
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_24529.f_6263[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar1);
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_4521195.f_16));
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
			if (!Global_24529.f_9244)
			{
				HUD::SET_HUD_COMPONENT_POSITION(15, 0f, -0.0375f);
				Global_24529.f_9244 = 1;
			}
		}
		else if (Global_24529.f_9244)
		{
			HUD::RESET_HUD_COMPONENT_VALUES(15);
			Global_24529.f_9244 = 0;
		}
		GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
		if (Global_24529.f_5658)
		{
			GRAPHICS::SET_SCRIPT_GFX_ALIGN(82, 66);
			GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(0f, 0f, 0f, 0f);
			GRAPHICS::DRAW_SCALEFORM_MOVIE(Global_24529.f_6263[iVar0 /*10*/], Global_24529.f_5656, Global_24529.f_5657, 1f, 1f, 255, 255, 255, 255, 0);
			GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
		}
		else
		{
			GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(Global_24529.f_6263[iVar0 /*10*/], 255, 255, 255, 255, 0);
		}
	}
}

void func_215(char* sParam0)
{
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_PLAYER_NAME_STRING(sParam0);
}

bool func_216(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (!func_126(iParam0))
	{
		return 0;
	}
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_217(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1845250[iParam0 /*880*/].f_198 == 8;
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

int func_217(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_218();
	}
	if (Global_1575070[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1574921[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_218()
{
	return Global_1574927;
}

int func_219()
{
	struct<3> Var0;
	
	if (Global_21610.f_1 > 3)
	{
		return 1;
	}
	if (func_220())
	{
		Var0 = { 0f, -500f, 0f };
		MOBILE::GET_MOBILE_PHONE_POSITION(&Var0);
		if (Global_21555 == 0)
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

int func_220()
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_221(bool bParam0, bool bParam1)
{
	if (Global_2673271.f_1762.f_701 != 0)
	{
		return 1;
	}
	if ((((((((!CAM::IS_SCREEN_FADED_IN() || (func_223(8, -1) && func_222() != 65)) || (HUD::GET_PAUSE_MENU_STATE() != 0 && !bParam1)) || (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && !bParam0)) || NETWORK::IS_COMMERCE_STORE_OPEN()) || Global_80541) || Global_24529.f_9243) || HUD::IS_WARNING_MESSAGE_ACTIVE()) || Global_102481.f_1514)
	{
		return 0;
	}
	return 1;
}

int func_222()
{
	return Global_1575018;
}

var func_223(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1677542.f_203[iParam1];
			}
			break;
	}
	return BitTest(Global_1677542.f_1048, iParam0);
}

int func_224(var uParam0, bool bParam1, int iParam2)
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
		if (Global_24529.f_6324[iVar17] == iVar16)
		{
			*uParam0 = iVar17;
			return 1;
		}
		else if (Global_24529.f_6324[iVar17] == 0)
		{
			iVar18 = iVar17;
		}
		iVar17++;
	}
	if (bParam1)
	{
		if (iVar18 != -1)
		{
			Global_24529.f_6324[iVar18] = iVar16;
			*uParam0 = iVar18;
			return 1;
		}
	}
	return 0;
}

void func_225(int iParam0, char* sParam1, int iParam2, bool bParam3)
{
	char* sVar0;
	
	sVar0 = PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2, iParam0, true);
	if (Global_24529.f_5326 >= 14)
	{
		StringCopy(&Global_4521195, sVar0, 64);
		StringCopy(&(Global_4521195.f_16), sParam1, 16);
		Global_4521195.f_20 = iParam2;
		return;
		return;
	}
	if (!bParam3)
	{
		MISC::SET_BIT(&(Global_24529.f_5655), Global_24529.f_5326);
	}
	StringCopy(&(Global_24529.f_5328[Global_24529.f_5326 /*16*/]), sVar0, 64);
	StringCopy(&(Global_24529.f_5553[Global_24529.f_5326 /*4*/]), sParam1, 16);
	Global_24529.f_5610[Global_24529.f_5326] = iParam2;
	Global_24529.f_5625[Global_24529.f_5326] = iParam0;
	Global_24529.f_5640[Global_24529.f_5326] = 32;
	Global_24529.f_5326++;
}

void func_226(int iParam0, char* sParam1, int iParam2)
{
	char* sVar0;
	
	sVar0 = PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(2, iParam0, true);
	if (Global_24529.f_5326 >= 14)
	{
		StringCopy(&Global_4521195, sVar0, 64);
		StringCopy(&(Global_4521195.f_16), sParam1, 16);
		Global_4521195.f_20 = iParam2;
		return;
		return;
	}
	MISC::CLEAR_BIT(&(Global_24529.f_5655), Global_24529.f_5326);
	StringCopy(&(Global_24529.f_5328[Global_24529.f_5326 /*16*/]), sVar0, 64);
	StringCopy(&(Global_24529.f_5553[Global_24529.f_5326 /*4*/]), sParam1, 16);
	Global_24529.f_5610[Global_24529.f_5326] = iParam2;
	Global_24529.f_5625[Global_24529.f_5326] = 402;
	Global_24529.f_5640[Global_24529.f_5326] = iParam0;
	Global_24529.f_5326++;
}

void func_227(int iParam0)
{
	int iVar0;
	int iVar1;
	
	Global_24529.f_5326 = 0;
	Global_24529.f_5327 = 0;
	iVar0 = 0;
	while (iVar0 < 14)
	{
		StringCopy(&(Global_24529.f_5553[iVar0 /*4*/]), "", 16);
		Global_24529.f_5610[iVar0] = -1;
		Global_24529.f_5625[iVar0] = 402;
		Global_24529.f_5640[iVar0] = 32;
		iVar0++;
	}
	Global_24529.f_5655 = 0;
	StringCopy(&(Global_4521195.f_16), "", 16);
	Global_4521195.f_20 = -1;
	if (MISC::IS_PC_VERSION())
	{
		if (!func_224(&iVar1, 0, iParam0))
		{
			return;
		}
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_24529.f_6263[iVar1 /*10*/]))
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_24529.f_6263[iVar1 /*10*/], "TOGGLE_MOUSE_BUTTONS");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
	}
}

bool func_228(char* sParam0, int iParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	if (!func_224(&iVar0, 1, iParam1))
	{
		return 0;
	}
	bVar1 = true;
	StringCopy(&(Global_24529.f_6238[iVar0 /*4*/]), sParam0, 16);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_24529.f_6238[iVar0 /*4*/])))
	{
		HUD::REQUEST_ADDITIONAL_TEXT(&(Global_24529.f_6238[iVar0 /*4*/]), 9);
		Global_24529.f_6231[iVar0] = 1;
		if (!HUD::HAS_THIS_ADDITIONAL_TEXT_LOADED(&(Global_24529.f_6238[iVar0 /*4*/]), 9))
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
	Global_24529.f_6217[iVar0] = 1;
	if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("CommonMenu"))
	{
		bVar1 = false;
	}
	if (bParam2)
	{
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPShopSale", false);
		Global_24529.f_6224[iVar0] = 1;
		if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPShopSale"))
		{
			bVar1 = false;
		}
	}
	bVar2 = false;
	StringCopy(&(Global_24529.f_6263[iVar0 /*10*/].f_1), "instructional_buttons", 24);
	bVar2 = func_229(&(Global_24529.f_6263[iVar0 /*10*/]));
	if (!bVar1 || !bVar2)
	{
	}
	return (bVar1 && bVar2);
}

bool func_229(var uParam0)
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

bool func_230()
{
	return BitTest(Global_1964145, 7);
}

void func_231()
{
	Global_1574848 = 1;
}

void func_232(int iParam0)
{
	if (func_237())
	{
		return;
	}
	if (!Global_21610.f_1 == 1)
	{
		if (func_236(0))
		{
			func_233(iParam0);
		}
		MISC::SET_BIT(&Global_9464, 2);
	}
}

void func_233(int iParam0)
{
	if (func_237())
	{
		return;
	}
	if (Global_21842)
	{
		if (func_141())
		{
			func_235(1, 1);
		}
		else
		{
			func_235(0, 0);
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
	if (!func_234())
	{
		Global_21610.f_1 = 3;
	}
}

int func_234()
{
	if (Global_21610.f_1 == 1 || Global_21610.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_235(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_236(0))
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

int func_236(int iParam0)
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

bool func_237()
{
	return BitTest(Global_1964145, 19);
}

void func_238()
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	if (func_185())
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_208.f_162))
		{
			if (!HUD::DOES_BLIP_EXIST(Local_208.f_174))
			{
				Local_208.f_174 = func_253(Local_208.f_153, 0);
				HUD::SET_BLIP_SPRITE(Local_208.f_174, func_252());
				if (func_193() && !HUD::DOES_BLIP_EXIST(Local_208.f_175))
				{
					Local_208.f_175 = func_249(PLAYER::PLAYER_PED_ID(), 0, 0);
					HUD::SET_BLIP_SPRITE(Local_208.f_175, 6);
					HUD::SHOW_HEIGHT_ON_BLIP(Local_208.f_175, false);
					HUD::SET_BLIP_SCALE(Local_208.f_175, 0.7f);
					HUD::SET_BLIP_PRIORITY(Local_208.f_175, (13 - 1));
					if (func_246(PLAYER::PLAYER_ID()) != -1)
					{
						func_242(&(Local_208.f_175), func_244(func_246(PLAYER::PLAYER_ID())));
					}
					else
					{
						func_242(&(Local_208.f_175), func_241());
					}
					HUD::SET_BLIP_HIDDEN_ON_LEGEND(Local_208.f_175, true);
				}
			}
			else
			{
				fVar0 = func_240(Local_208.f_127);
				fVar1 = Local_208.f_153;
				fVar2 = Local_208.f_153.f_1;
				HUD::SET_BLIP_DISPLAY(Local_208.f_174, 2);
				HUD::SET_BLIP_COORDS(Local_208.f_174, Local_208.f_153);
				if (((func_16() || func_15()) && HUD::IS_PAUSE_MENU_ACTIVE()) && NETWORK::NETWORK_IS_ACTIVITY_SESSION())
				{
					if (!HUD::IS_PAUSEMAP_IN_INTERIOR_MODE())
					{
						fVar1 = -323.1f;
						fVar2 = -1970.9f;
						HUD::SET_BLIP_COORDS(Local_208.f_174, fVar1, fVar2, 0f);
						HUD::SET_FAKE_PAUSEMAP_PLAYER_POSITION_THIS_FRAME(fVar1, fVar2);
						HUD::HIDE_MINIMAP_INTERIOR_MAP_THIS_FRAME();
					}
				}
				HUD::LOCK_MINIMAP_POSITION(fVar1, fVar2);
				HUD::SET_BLIP_ROTATION(Local_208.f_174, SYSTEM::ROUND(fVar0));
				HUD::SET_BLIP_SCALE(Local_208.f_174, 1f);
				HUD::SET_BLIP_PRIORITY(Local_208.f_174, 9);
				HUD::LOCK_MINIMAP_ANGLE(SYSTEM::ROUND(fVar0));
				if (HUD::DOES_BLIP_EXIST(Local_208.f_175))
				{
					HUD::SET_BLIP_ROTATION(Local_208.f_175, func_239(PLAYER::PLAYER_PED_ID()));
				}
			}
		}
	}
}

int func_239(int iParam0)
{
	float fVar0;
	
	fVar0 = ENTITY::GET_ENTITY_HEADING_FROM_EULERS(iParam0);
	return SYSTEM::ROUND(fVar0);
}

float func_240(float fParam0)
{
	if (fParam0 > 180f)
	{
		return (fParam0 - 180f);
	}
	return (fParam0 + 180f);
}

int func_241()
{
	return 10;
}

void func_242(var uParam0, int iParam1)
{
	int iVar0;
	
	if (HUD::DOES_BLIP_EXIST(*uParam0))
	{
		iVar0 = func_243(iParam1);
		HUD::SET_BLIP_COLOUR(*uParam0, iVar0);
	}
}

int func_243(int iParam0)
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

int func_244(int iParam0)
{
	int iVar0;
	
	if (iParam0 > -1)
	{
		iVar0 = func_245(iParam0);
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

var func_245(int iParam0)
{
	return Global_2649159.f_818.f_44[iParam0 /*2*/].f_1;
}

int func_246(int iParam0)
{
	if (func_126(iParam0))
	{
		if (func_247(iParam0, 1))
		{
			return Global_2649159.f_818.f_11[func_127(iParam0)];
		}
	}
	return -1;
}

int func_247(int iParam0, bool bParam1)
{
	if (!func_126(iParam0))
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_248(iParam0))
		{
			return 0;
		}
	}
	return func_126(Global_1892653[iParam0 /*615*/].f_10);
}

int func_248(int iParam0)
{
	if (func_126(iParam0))
	{
		if (func_126(Global_1892653[iParam0 /*615*/].f_10))
		{
			return Global_1892653[iParam0 /*615*/].f_10 == iParam0;
		}
	}
	return 0;
}

int func_249(int iParam0, bool bParam1, bool bParam2)
{
	return func_250(iParam0, !bParam1, bParam2);
}

int func_250(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = HUD::ADD_BLIP_FOR_ENTITY(iParam0);
	if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
	{
		HUD::SET_BLIP_SCALE(iVar0, func_251(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
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
		HUD::SET_BLIP_SCALE(iVar0, func_251(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
		HUD::SET_BLIP_AS_FRIENDLY(iVar0, bParam1);
	}
	else if (ENTITY::IS_ENTITY_AN_OBJECT(iParam0))
	{
		HUD::SET_BLIP_SCALE(iVar0, func_251(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
	}
	return iVar0;
}

float func_251(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

int func_252()
{
	return 627;
}

int func_253(struct<3> Param0, bool bParam3)
{
	int iVar0;
	
	iVar0 = HUD::ADD_BLIP_FOR_COORD(Param0);
	HUD::SET_BLIP_SCALE(iVar0, func_251(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
	HUD::SET_BLIP_ROUTE(iVar0, bParam3);
	return iVar0;
}

void func_254()
{
	if (func_255())
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_208.f_162) && !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_OBJ(Local_208.f_162), false))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_208.f_162))
			{
				if (!BitTest(Local_208.f_5, 25))
				{
					ENTITY::FREEZE_ENTITY_POSITION(NETWORK::NET_TO_OBJ(Local_208.f_162), true);
					MISC::SET_BIT(&(Local_208.f_5), 25);
				}
			}
			else
			{
				NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_208.f_162);
			}
		}
	}
	else if (BitTest(Local_208.f_5, 25))
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_208.f_162) && !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_OBJ(Local_208.f_162), false))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_208.f_162))
			{
				ENTITY::FREEZE_ENTITY_POSITION(NETWORK::NET_TO_OBJ(Local_208.f_162), false);
				MISC::CLEAR_BIT(&(Local_208.f_5), 25);
			}
			else
			{
				NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_208.f_162);
			}
		}
	}
}

int func_255()
{
	if (func_164(PLAYER::PLAYER_ID()))
	{
		if (BitTest(Global_2731604, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_256()
{
	if (func_257() || func_174())
	{
		if (!func_12(&(Local_208.f_250)))
		{
			func_11(&(Local_208.f_250), 0, 0);
		}
		else if (func_10(&(Local_208.f_250), Global_1964145.f_1, 0) || func_174())
		{
			func_63(&(Local_208.f_248));
			func_284(1);
			func_325(5);
		}
	}
	else if (func_12(&(Local_208.f_250)))
	{
		func_115(&(Local_208.f_250), 0, 0);
	}
}

int func_257()
{
	if ((NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_208.f_162) && ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_OBJ(Local_208.f_162), false)) && !BitTest(Local_208.f_5, 2))
	{
		return 1;
	}
	if (Local_208.f_12 == 2)
	{
		Local_208.f_28 = 1;
		return 1;
	}
	if (BitTest(Local_208.f_5, 1))
	{
		return 1;
	}
	if (func_264())
	{
		Local_208.f_28 = 5;
		return 1;
	}
	if (func_261())
	{
		Local_208.f_28 = 5;
		return 1;
	}
	if (BitTest(Local_208.f_5, 2))
	{
		Local_208.f_28 = 4;
		return 1;
	}
	if (func_260())
	{
		if (!func_12(&(Local_208.f_258)))
		{
			func_11(&(Local_208.f_258), 0, 0);
		}
		else if (func_10(&(Local_208.f_258), 3000, 0))
		{
			Local_208.f_28 = 0;
			return 1;
		}
	}
	if (BitTest(Local_208.f_5, 7))
	{
		Local_208.f_28 = 0;
		return 1;
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_208.f_162))
	{
		if (ENTITY::IS_ENTITY_IN_WATER(NETWORK::NET_TO_OBJ(Local_208.f_162)) || func_183(NETWORK::NET_TO_ENT(Local_208.f_162), 0))
		{
			if (BitTest(Local_208.f_5, 29))
			{
				Local_208.f_28 = 3;
				return 1;
			}
		}
	}
	if (!func_259() && !func_258())
	{
		if (Local_208.f_153.f_2 >= func_200())
		{
			Local_208.f_28 = 5;
			return 1;
		}
	}
	return 0;
}

bool func_258()
{
	return BitTest(Global_1964145.f_2, 0);
}

bool func_259()
{
	return BitTest(Global_1964145.f_2, 1);
}

bool func_260()
{
	return BitTest(Global_1964145, 1);
}

int func_261()
{
	struct<3> Var0;
	
	if (func_263())
	{
		return 0;
	}
	if (func_42(PLAYER::PLAYER_ID(), 1, 1))
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_208.f_162) && !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_OBJ(Local_208.f_162), false))
		{
			Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
			if (func_47(NETWORK::NET_TO_OBJ(Local_208.f_162)))
			{
				Local_208.f_123 = func_262(NETWORK::NET_TO_OBJ(Local_208.f_162), Var0, 1);
				if (Local_208.f_123 > func_200())
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

float func_262(int iParam0, struct<3> Param1, bool bParam4)
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

bool func_263()
{
	return BitTest(Global_1964145, 6);
}

int func_264()
{
	float fVar0;
	
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_208.f_162) && !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_OBJ(Local_208.f_162), false))
	{
		if (MISC::GET_GROUND_Z_FOR_3D_COORD(Local_208.f_153, &fVar0, true, false))
		{
			Local_208.f_124 = (Local_208.f_153.f_2 - fVar0);
			if (Local_208.f_124 > IntToFloat(Global_262145.f_24330))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_265()
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
	
	if ((NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_208.f_162) && !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_OBJ(Local_208.f_162), false)) && CAM::DOES_CAM_EXIST(Local_208.f_172))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_208.f_162))
		{
			fVar0 = 0f;
			if (BitTest(Local_208.f_120, 2))
			{
				if (!func_190())
				{
					if (func_12(&(Local_208.f_256)))
					{
						iVar1 = func_277((func_279() || func_278()), 2000, Global_262145.f_24328);
						if (!func_10(&(Local_208.f_256), iVar1, 0))
						{
							iVar2 = (100 * MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Local_208.f_256)));
							Local_208.f_20 = (iVar2 / iVar1);
						}
						else
						{
							if (func_47(Local_208.f_164))
							{
								ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_208.f_164, NETWORK::NET_TO_OBJ(Local_208.f_162), -1, 0f, 0f, -0.25f, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
							}
							Local_208.f_20 = 100;
							func_63(&(Local_208.f_256));
							if (!AUDIO::HAS_SOUND_FINISHED(Local_208.f_45))
							{
								AUDIO::STOP_SOUND(Local_208.f_45);
								AUDIO::RELEASE_SOUND_ID(Local_208.f_45);
								Local_208.f_45 = -1;
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
					if (((bVar3 && Local_208.f_20 == 100) && !bLocal_582) && func_211())
					{
						fVar0 = 120f;
						if (IntToFloat(Local_208[1]) != 0f)
						{
							func_276(1);
						}
						else
						{
							func_276(0);
						}
						GRAPHICS::ANIMPOSTFX_PLAY("RaceTurbo", 0, false);
						func_11(&(Local_208.f_254), 0, 0);
						func_275(1);
						if (AUDIO::HAS_SOUND_FINISHED(Local_208.f_44))
						{
							Local_208.f_44 = AUDIO::GET_SOUND_ID();
							AUDIO::PLAY_SOUND_FRONTEND(Local_208.f_44, "HUD_Boost_Loop", Local_208.f_160, true);
						}
					}
				}
				else
				{
					fVar0 = 120f;
					if (CAM::DOES_CAM_EXIST(Local_208.f_172))
					{
						if (!CAM::IS_CAM_SHAKING(Local_208.f_172))
						{
							CAM::SHAKE_CAM(Local_208.f_172, "DRONE_BOOST_SHAKE", 1f);
							CAM::SET_CAM_SHAKE_AMPLITUDE(Local_208.f_172, 0.15f);
						}
					}
					if (func_12(&(Local_208.f_254)))
					{
						if (func_10(&(Local_208.f_254), func_277((func_279() || func_278()), 2000, Global_262145.f_24327), 0))
						{
							Local_208.f_20 = 0;
							func_276(0);
							func_275(0);
							func_63(&(Local_208.f_256));
							func_11(&(Local_208.f_256), 0, 0);
							CAM::STOP_CAM_SHAKING(Local_208.f_172, true);
							PAD::STOP_CONTROL_SHAKE(0);
							GRAPHICS::ANIMPOSTFX_STOP("RaceTurbo");
							func_63(&(Local_208.f_254));
							if (!AUDIO::HAS_SOUND_FINISHED(Local_208.f_44))
							{
								AUDIO::STOP_SOUND(Local_208.f_44);
								AUDIO::RELEASE_SOUND_ID(Local_208.f_44);
								Local_208.f_44 = -1;
							}
							if (AUDIO::HAS_SOUND_FINISHED(Local_208.f_45))
							{
								Local_208.f_45 = AUDIO::GET_SOUND_ID();
								AUDIO::PLAY_SOUND_FRONTEND(Local_208.f_45, "HUD_Boost_Recharge_Loop", Local_208.f_160, true);
							}
						}
						else
						{
							fVar4 = (100f / (SYSTEM::TO_FLOAT(func_277((func_279() || func_278()), 2000, Global_262145.f_24327)) / IntToFloat(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Local_208.f_254))));
							Local_208.f_20 = (100 - SYSTEM::ROUND(fVar4));
							PAD::SET_CONTROL_SHAKE(0, func_277((func_279() || func_278()), 2000, Global_262145.f_24327), SYSTEM::ROUND((255f * Local_208.f_134)));
						}
					}
				}
			}
			Var5 = { Local_208.f_153 };
			if (BitTest(Local_208.f_5, 1) || func_174())
			{
				return;
			}
			Var8 = { func_272(func_273()) };
			Var11 = { func_272(func_271(func_273())) };
			MISC::GET_GROUND_Z_FOR_3D_COORD(Var5, &fVar14, true, false);
			if (!func_270())
			{
				if (Local_208.f_10 == 2 || (Var5.f_2 - fVar14) < 2f)
				{
					fVar15 = 24f;
					if (Local_208[1] != 0)
					{
						PAD::DISABLE_CONTROL_ACTION(2, 207, true);
					}
					if (PAD::GET_CONTROL_UNBOUND_NORMAL(2, 207) != 0f || Local_208[1] != 0)
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
					ENTITY::APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(NETWORK::NET_TO_OBJ(Local_208.f_162), 0, 0f, 0f, fVar15, false, true, true, false);
				}
			}
			if (PAD::IS_USING_KEYBOARD_AND_MOUSE(0))
			{
				if (Local_208[2] >= 127)
				{
					Local_208[2] = 127;
				}
				else if (Local_208[2] <= -127)
				{
					Local_208[2] = -127;
				}
				if (Local_208[0] >= 127)
				{
					Local_208[0] = 127;
				}
				else if (Local_208[0] <= -127)
				{
					Local_208[0] = -127;
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
			if ((iVar16 && func_269()) || (func_190() && !func_189()))
			{
				fVar20 = Local_208.f_122;
				if (func_190() && !func_189())
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
				fVar18 = func_268(fVar18, -149f, 149f);
				Var21 = { Var11 * Vector(fVar18, fVar18, fVar18) };
				if (Var21.f_2 > 149f)
				{
					Var21.f_2 = 149f;
				}
				ENTITY::APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(NETWORK::NET_TO_OBJ(Local_208.f_162), 0, Var21, false, true, true, false);
			}
			else if ((iVar17 && func_269()) && !bLocal_582)
			{
				if (!PAD::IS_USING_KEYBOARD_AND_MOUSE(0))
				{
					fVar24 = ((Local_208.f_122 + fVar25) / (1f / PAD::GET_CONTROL_UNBOUND_NORMAL(2, 207)));
				}
				else
				{
					fVar24 = ((Local_208.f_122 + fVar25) / (1f / PAD::GET_CONTROL_UNBOUND_NORMAL(2, 210)));
				}
				fVar24 = func_268(fVar24, -149f, 149f);
				ENTITY::APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(NETWORK::NET_TO_OBJ(Local_208.f_162), 0, Var11 * Vector(-fVar24, -fVar24, -fVar24), false, true, true, false);
			}
			if ((Local_208[1] > 0 && !func_190()) && !bLocal_582)
			{
				fVar28 = func_267();
				fVar26 = (Local_208.f_122 / (127f / IntToFloat(Local_208[1])));
				fVar27 = (fVar28 / (127f / IntToFloat(Local_208[1])));
				fVar26 = func_268(fVar26, -149f, 149f);
				ENTITY::APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(NETWORK::NET_TO_OBJ(Local_208.f_162), 0, Var8 * Vector(fVar26, fVar26, fVar26), false, true, true, false);
				ENTITY::APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(NETWORK::NET_TO_OBJ(Local_208.f_162), 0, 0f, 0f, fVar27, false, true, true, false);
			}
			else if (((Local_208[1] < 0 && !func_190()) && !bLocal_582) || (func_190() && func_189()))
			{
				if (func_190() && func_189())
				{
					fVar31 = 50f;
					if (func_16())
					{
						fVar29 = (Local_208.f_122 / -1f);
					}
					else
					{
						fVar29 = ((Local_208.f_122 + fVar0) / -1f);
					}
					fVar30 = (fVar31 / -1f);
				}
				else
				{
					fVar31 = func_267();
					fVar29 = ((Local_208.f_122 + fVar0) / (127f / IntToFloat(Local_208[1])));
					fVar30 = (fVar31 / (127f / IntToFloat(Local_208[1])));
				}
				fVar29 = func_268(fVar29, -149f, 149f);
				ENTITY::APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(NETWORK::NET_TO_OBJ(Local_208.f_162), 0, 0f, 0f, -fVar30, false, true, true, false);
				ENTITY::APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(NETWORK::NET_TO_OBJ(Local_208.f_162), 0, Var8 * Vector(fVar29, fVar29, fVar29), false, true, true, false);
			}
			Var32 = { func_266(Var8, Var11) };
			if (!func_190() && !bLocal_582)
			{
				if (Local_208[0] > 0)
				{
					fVar35 = -(Local_208.f_122 / (127f / IntToFloat(Local_208[0])));
					fVar36 = (8f / (127f / IntToFloat(Local_208[0])));
					fVar35 = func_268(fVar35, -149f, 149f);
					ENTITY::APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(NETWORK::NET_TO_OBJ(Local_208.f_162), 0, Var32 * Vector(fVar35, fVar35, fVar35), false, true, true, false);
					ENTITY::APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(NETWORK::NET_TO_OBJ(Local_208.f_162), 0, 0f, 0f, fVar36, false, true, true, false);
				}
				else if (Local_208[0] < 0)
				{
					fVar37 = -(Local_208.f_122 / (127f / IntToFloat(Local_208[0])));
					fVar38 = (8f / (127f / IntToFloat(Local_208[0])));
					fVar37 = func_268(fVar37, -149f, 149f);
					ENTITY::APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(NETWORK::NET_TO_OBJ(Local_208.f_162), 0, Var32 * Vector(fVar37, fVar37, fVar37), false, true, true, false);
					ENTITY::APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(NETWORK::NET_TO_OBJ(Local_208.f_162), 0, 0f, 0f, -fVar38, false, true, true, false);
				}
			}
		}
		else
		{
			NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_208.f_162);
		}
	}
}

Vector3 func_266(struct<3> Param0, struct<3> Param3)
{
	return ((Param0.f_1 * Param3.f_2) - (Param0.f_2 * Param3.f_1)), ((Param0.f_2 * Param3.f_0) - (Param0.f_0 * Param3.f_2)), ((Param0.f_0 * Param3.f_1) - (Param0.f_1 * Param3.f_0));
}

float func_267()
{
	return 6.4f;
}

float func_268(float fParam0, float fParam1, float fParam2)
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

int func_269()
{
	if (bLocal_582)
	{
		return 0;
	}
	if (func_190() && !func_189())
	{
		return 0;
	}
	return 1;
}

bool func_270()
{
	return BitTest(Global_1964145, 2);
}

Vector3 func_271(struct<2> Param0, var uParam2)
{
	struct<3> Var0;
	
	Var0 = { SYSTEM::SIN(Param0.f_1), (-SYSTEM::SIN(Param0.f_0) * SYSTEM::COS(Param0.f_1)), (SYSTEM::COS(Param0.f_0) * SYSTEM::COS(Param0.f_1)) };
	return Var0;
}

Vector3 func_272(struct<3> Param0)
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

Vector3 func_273()
{
	struct<3> Var0;
	
	Var0 = { 0f, 1f, 0f };
	func_274(&Var0);
	return Var0;
}

void func_274(var uParam0)
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

void func_275(bool bParam0)
{
	if (bParam0)
	{
		if (!BitTest(Local_208.f_5, 21))
		{
			MISC::SET_BIT(&(Local_208.f_5), 21);
		}
	}
	else if (BitTest(Local_208.f_5, 21))
	{
		MISC::CLEAR_BIT(&(Local_208.f_5), 21);
	}
}

void func_276(bool bParam0)
{
	if (bParam0)
	{
		if (!BitTest(Local_208.f_5, 22))
		{
			MISC::SET_BIT(&(Local_208.f_5), 22);
		}
	}
	else if (BitTest(Local_208.f_5, 22))
	{
		MISC::CLEAR_BIT(&(Local_208.f_5), 22);
	}
}

int func_277(bool bParam0, int iParam1, var uParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return uParam2;
}

var func_278()
{
	return BitTest(Global_1964145.f_2, 11);
}

var func_279()
{
	return BitTest(Global_1964145.f_2, 10);
}

void func_280()
{
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_208.f_162))
	{
		if (!ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_VEH(Local_208.f_162), false))
		{
			HUD::SET_FAKE_PAUSEMAP_PLAYER_POSITION_THIS_FRAME(Local_208.f_153, Local_208.f_153.f_1);
			HUD::SET_FAKE_GPS_PLAYER_POSITION_THIS_FRAME(Local_208.f_153, Local_208.f_153.f_1, 0);
			if (!INTERIOR::IS_VALID_INTERIOR(Global_1964145.f_27))
			{
				if (!BitTest(Local_208.f_5, 8))
				{
					HUD::HIDE_MINIMAP_INTERIOR_MAP_THIS_FRAME();
				}
				HUD::SET_RADAR_AS_EXTERIOR_THIS_FRAME();
			}
		}
	}
}

void func_281(var uParam0)
{
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(uParam0->f_162))
	{
		if (AUDIO::HAS_SOUND_FINISHED(uParam0->f_43) && uParam0->f_43 == -1)
		{
			uParam0->f_43 = AUDIO::GET_SOUND_ID();
			AUDIO::PLAY_SOUND_FRONTEND(uParam0->f_43, "HUD_Loop", uParam0->f_160, true);
		}
	}
}

void func_282(var uParam0)
{
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(uParam0->f_162))
	{
		if (AUDIO::HAS_SOUND_FINISHED(uParam0->f_33))
		{
			uParam0->f_33 = AUDIO::GET_SOUND_ID();
			AUDIO::PLAY_SOUND_FROM_ENTITY(uParam0->f_33, "Flight_Loop", NETWORK::NET_TO_OBJ(uParam0->f_162), uParam0->f_160, false, 0);
			AUDIO::SET_VARIABLE_ON_SOUND(uParam0->f_33, "DroneRotationalSpeed", uParam0->f_132);
		}
		else
		{
			AUDIO::SET_VARIABLE_ON_SOUND(uParam0->f_33, "DroneRotationalSpeed", uParam0->f_132);
		}
		if (AUDIO::HAS_SOUND_FINISHED(uParam0->f_42))
		{
			AUDIO::RELEASE_SOUND_ID(uParam0->f_42);
			uParam0->f_42 = -1;
		}
	}
}

void func_283()
{
	if (func_42(PLAYER::PLAYER_ID(), 1, 1))
	{
		PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 450, true);
		if (BitTest(Local_208.f_120, 1))
		{
			PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 124, true);
		}
	}
}

void func_284(bool bParam0)
{
	if (bParam0)
	{
		if (!func_285())
		{
			MISC::SET_BIT(&Global_1964145, 13);
		}
	}
	else if (func_285())
	{
		MISC::CLEAR_BIT(&Global_1964145, 13);
	}
}

bool func_285()
{
	return BitTest(Global_1964145, 13);
}

int func_286()
{
	struct<3> Var0;
	
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_208.f_162))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_208.f_162))
		{
			if (!CAM::DOES_CAM_EXIST(Local_208.f_172) && BitTest(Local_208.f_5, 0))
			{
				if (func_309())
				{
					if (func_258())
					{
						func_296(PLAYER::PLAYER_ID(), 0, 33280, 0);
					}
					else
					{
						func_296(PLAYER::PLAYER_ID(), 0, 512, 0);
					}
					HUD::THEFEED_SHOW();
					Local_208.f_172 = CAM::CREATE_CAMERA(26379945, true);
					CAM::SET_CAM_FOV(Local_208.f_172, Local_208.f_128);
					CAM::SET_CAM_NEAR_CLIP(Local_208.f_172, 0.01f);
					CAM::SET_CAM_NEAR_DOF(Local_208.f_172, 0.01f);
					GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
					Var0 = { func_295() };
					CAM::HARD_ATTACH_CAM_TO_ENTITY(Local_208.f_172, NETWORK::NET_TO_OBJ(Local_208.f_162), 0f, 0f, 180f, Var0, true);
					PED::SET_POP_CONTROL_SPHERE_THIS_FRAME(Local_208.f_153, 75f, 75f);
					STREAMING::SET_FOCUS_POS_AND_VEL(Local_208.f_153, CAM::GET_CAM_ROT(Local_208.f_172, 2));
					ENTITY::SET_ENTITY_INVINCIBLE(NETWORK::NET_TO_OBJ(Local_208.f_162), true, 0);
					if (!func_258())
					{
						if (STREAMING::IS_NEW_LOAD_SCENE_LOADED())
						{
							STREAMING::NEW_LOAD_SCENE_STOP();
						}
					}
					func_293();
					if (AUDIO::HAS_SOUND_FINISHED(Local_208.f_42))
					{
						Local_208.f_42 = AUDIO::GET_SOUND_ID();
						AUDIO::PLAY_SOUND_FRONTEND(Local_208.f_42, "HUD_Startup", Local_208.f_160, true);
					}
					func_238();
					func_197();
					func_157(1);
					func_187();
					func_265();
					CAM::RENDER_SCRIPT_CAMS(true, false, 0, true, true, 0);
					Local_208.f_176 = NETWORK::GET_NETWORK_TIME();
					func_291(0);
					func_290(1);
					func_289(1);
					func_287(158);
					MISC::SET_BIT(&(Local_110[PLAYER::PLAYER_ID() /*3*/]), 0);
					return 1;
				}
				else if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
				}
			}
			else
			{
				if (CAM::DOES_CAM_EXIST(Local_208.f_172))
				{
				}
				if (!BitTest(Local_208.f_5, 0))
				{
				}
			}
		}
		else
		{
			NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_208.f_162);
		}
	}
	return 0;
}

void func_287(int iParam0)
{
	int iVar0;
	
	if (Global_262145.f_9173)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_2359296[func_288() /*5574*/].f_681.f_4248[iVar0 /*3*/] == iParam0)
		{
			if (Global_1574745.f_1[iVar0] == -1)
			{
				Global_1574745.f_1[iVar0] = iParam0;
				Global_1574745 = 1;
				return;
			}
		}
		iVar0++;
	}
}

int func_288()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_289(bool bParam0)
{
	if (bParam0)
	{
		if (!BitTest(Global_1845250[PLAYER::PLAYER_ID() /*880*/].f_260.f_376, 26))
		{
			MISC::SET_BIT(&(Global_1845250[PLAYER::PLAYER_ID() /*880*/].f_260.f_376), 26);
		}
	}
	else if (BitTest(Global_1845250[PLAYER::PLAYER_ID() /*880*/].f_260.f_376, 26))
	{
		MISC::CLEAR_BIT(&(Global_1845250[PLAYER::PLAYER_ID() /*880*/].f_260.f_376), 26);
	}
}

void func_290(bool bParam0)
{
	if (bParam0)
	{
		if (!func_141())
		{
			MISC::SET_BIT(&Global_1964145, 5);
		}
	}
	else
	{
		if (func_141())
		{
			MISC::CLEAR_BIT(&Global_1964145, 5);
		}
		func_291(0);
	}
}

void func_291(bool bParam0)
{
	if (bParam0)
	{
		if (!func_292())
		{
			MISC::SET_BIT(&Global_1964145, 12);
		}
	}
	else if (func_292())
	{
		MISC::CLEAR_BIT(&Global_1964145, 12);
	}
}

bool func_292()
{
	return BitTest(Global_1964145, 12);
}

void func_293()
{
	if (!AUDIO::IS_AUDIO_SCENE_ACTIVE(func_294()))
	{
		AUDIO::START_AUDIO_SCENE(func_294());
	}
}

char* func_294()
{
	return "GTAO_Hacker_Drone_HUD_Medium_Drone_Scene";
}

Vector3 func_295()
{
	return 0f, -0.038f, -0.004f;
}

void func_296(int iParam0, bool bParam1, int iParam2, int iParam3)
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
	if (func_308())
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
		if (!func_306())
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
				else if (bVar14 || ((!func_216(PLAYER::PLAYER_ID(), 0) && !func_305()) && !func_304(PLAYER::PLAYER_ID())))
				{
					ENTITY::SET_ENTITY_VISIBLE(iVar27, !bVar14, false);
				}
				if (!bVar14)
				{
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bVar19)
					{
						NETWORK::FADE_OUT_LOCAL_PLAYER(false);
					}
					Global_2658291[iParam0 /*468*/].f_258 = 0;
				}
			}
			if (bParam1)
			{
				if (bVar1)
				{
					func_301(0, 0, 0);
					if (bVar25)
					{
						STREAMING::CLEAR_FOCUS();
					}
				}
				if (!func_300(iVar27) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(iVar27))
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
					func_299();
					func_298();
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
				Global_2658291[iParam0 /*468*/].f_259 = 0;
				if (!bVar24)
				{
					bVar3 = true;
				}
				if (Global_2698347)
				{
					GRAPHICS::TOGGLE_PAUSED_RENDERPHASES(true);
					GRAPHICS::TOGGLE_PAUSED_RENDERPHASES(true);
					Global_2698347 = 0;
				}
				if (Global_2635562.f_2982)
				{
					Global_2635562.f_2982 = 0;
				}
			}
			else
			{
				if (!func_300(iVar27) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(iVar27))
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
					if (func_297(Global_4718592.f_192777))
					{
						ENTITY::FREEZE_ENTITY_POSITION(iVar27, true);
					}
				}
				if (Global_1575062)
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

bool func_297(int iParam0)
{
	return iParam0 == 17;
}

void func_298()
{
	struct<3> Var0;
	
	Global_2673271.f_1101 = 0;
	Global_2673271.f_1102 = 0;
	Global_2673271.f_1103 = { 9999.9f, 9999.9f, 9999.9f };
	Global_2673271.f_1108 = -1;
	Global_2673271.f_1109 = 0;
	Global_2635562.f_2993 = { Var0 };
}

void func_299()
{
	Global_2635562.f_703 = 0;
	Global_2635562.f_3036 = 0;
	Global_2635562.f_516 = 0;
	Global_2635562.f_607 = 0;
	Global_2658291[PLAYER::PLAYER_ID() /*468*/].f_221 = 0;
	Global_2635562.f_2991 = 0;
}

int func_300(int iParam0)
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

void func_301(bool bParam0, int iParam1, int iParam2)
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
				func_303();
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
		if (func_216(PLAYER::PLAYER_ID(), 0))
		{
			NETWORK::NETWORK_SET_IN_SPECTATOR_MODE_EXTENDED(bParam0, iParam1, true);
		}
		else
		{
			NETWORK::NETWORK_SET_IN_SPECTATOR_MODE(bParam0, iParam1);
		}
		HUD::SET_MINIMAP_IN_SPECTATOR_MODE(bParam0, iParam1);
		func_302(joaat("mpply_is_char_spectating"), bParam0);
	}
}

void func_302(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_BOOL(iVar0, bParam1, true);
	}
}

void func_303()
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

int func_304(int iParam0)
{
	if (func_216(iParam0, 0))
	{
		return 1;
	}
	if (func_305())
	{
		if (iParam0 == PLAYER::PLAYER_ID())
		{
			return 1;
		}
	}
	if (BitTest(Global_2658291[iParam0 /*468*/].f_203, 2))
	{
		return 1;
	}
	return 0;
}

bool func_305()
{
	return BitTest(Global_2621446, 3);
}

int func_306()
{
	if (func_307() == 0)
	{
		return 1;
	}
	return 0;
}

int func_307()
{
	return Global_1574634.f_18;
}

int func_308()
{
	if (BitTest(Global_1845250[PLAYER::PLAYER_ID() /*880*/].f_879, 2) && !Global_2686090.f_2847.f_220 == -1)
	{
		return 1;
	}
	return 0;
}

int func_309()
{
	return 1;
}

void func_310()
{
	int iVar0;
	struct<3> Var1;
	bool bVar4;
	float fVar5;
	
	iVar0 = func_322();
	if (func_321(Local_208.f_243) && func_321(iVar0))
	{
		if (!BitTest(Local_208.f_5, 0))
		{
			if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_208.f_162))
			{
				if (!func_258())
				{
					Var1 = { Local_208.f_141 };
					if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
					{
						func_296(PLAYER::PLAYER_ID(), 0, 512, 0);
					}
					if (!BitTest(Local_208.f_5, 18))
					{
						if (STREAMING::NEW_LOAD_SCENE_START_SPHERE(Var1, 100f, 1))
						{
							MISC::SET_BIT(&(Local_208.f_5), 18);
						}
					}
					else if (STREAMING::IS_NEW_LOAD_SCENE_LOADED())
					{
						if (!BitTest(Local_208.f_5, 19))
						{
							if (func_320())
							{
								if (func_317())
								{
									MISC::SET_BIT(&(Local_208.f_5), 19);
								}
							}
							else
							{
								if (!func_315(func_316()))
								{
									Local_208.f_141 = { func_316() };
								}
								MISC::SET_BIT(&(Local_208.f_5), 19);
							}
						}
					}
				}
				if (BitTest(Local_208.f_5, 19) || func_258())
				{
					if (!BitTest(Local_208.f_5, 20))
					{
						Local_208.f_166 = VEHICLE::CREATE_VEHICLE(iVar0, Local_208.f_141, 0f, false, false, false);
						ENTITY::SET_ENTITY_INVINCIBLE(Local_208.f_166, true, 0);
						ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_208.f_166, Local_208.f_141, false, false, true);
						ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(Local_208.f_166, false, false);
						ENTITY::SET_ENTITY_VISIBLE(Local_208.f_166, false, false);
						MISC::SET_BIT(&(Local_208.f_5), 20);
					}
					else if (func_106(NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(false, 1) + 1, 0, 1))
					{
						if (!BitTest(Local_208.f_5, 30))
						{
							NETWORK::RESERVE_LOCAL_NETWORK_MISSION_OBJECTS(NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(false, 1) + 1);
							MISC::SET_BIT(&(Local_208.f_5), 30);
						}
						if (NETWORK::CAN_REGISTER_MISSION_OBJECTS(1))
						{
							bVar4 = func_314();
							if (func_313(&(Local_208.f_162), Local_208.f_243, Local_208.f_141, 0, 1, 1, 1, 1, 0, bVar4, 0))
							{
								fVar5 = func_312(Local_208.f_144, Local_208.f_141);
								Global_1964145.f_23 = NETWORK::NET_TO_OBJ(Local_208.f_162);
								ENTITY::SET_ENTITY_INVINCIBLE(NETWORK::NET_TO_OBJ(Local_208.f_162), true, 0);
								Global_2658291[PLAYER::PLAYER_ID() /*468*/].f_434 = { Local_208.f_141 };
								Global_2658291[PLAYER::PLAYER_ID() /*468*/].f_437 = fVar5;
								Local_110[PLAYER::PLAYER_ID() /*3*/].f_2 = Local_208.f_162;
								NETWORK::SET_NETWORK_ID_ALWAYS_EXISTS_FOR_PLAYER(Local_208.f_162, PLAYER::PLAYER_ID(), true);
								INTERIOR::FORCE_ACTIVATING_TRACKING_ON_ENTITY(NETWORK::NET_TO_ENT(Local_208.f_162), 1);
								ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(NETWORK::NET_TO_ENT(Local_208.f_162), true, 1);
								ENTITY::SET_ENTITY_COORDS_NO_OFFSET(func_311(), Local_208.f_141, false, false, true);
								ENTITY::SET_ENTITY_HEADING(func_311(), fVar5);
								NETWORK::SET_ENTITY_GHOSTED_FOR_GHOST_PLAYERS(func_311(), true);
								ENTITY::SET_ENTITY_ROTATION(func_311(), 0f, 0f, fVar5, 2, true);
								NETWORK::NETWORK_USE_HIGH_PRECISION_BLENDING(Local_208.f_162, true);
								ENTITY::SET_ENTITY_HEALTH(func_311(), Global_262145.f_24329, 0, 0);
								NETWORK::SET_NETWORK_ID_CAN_MIGRATE(Local_208.f_162, false);
								ENTITY::SET_ENTITY_RECORDS_COLLISIONS(NETWORK::NET_TO_ENT(Local_208.f_162), true);
								PED::SET_POP_CONTROL_SPHERE_THIS_FRAME(Local_208.f_141, 100f, 200f);
								STREAMING::SET_FOCUS_POS_AND_VEL(ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_ENT(Local_208.f_162), true), ENTITY::GET_ENTITY_ROTATION(NETWORK::NET_TO_ENT(Local_208.f_162), 2));
								STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_208.f_243);
								STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
							}
						}
					}
				}
			}
			else
			{
				ENTITY::SET_ENTITY_HAS_GRAVITY(NETWORK::NET_TO_OBJ(Local_208.f_162), false);
				if (func_47(Local_208.f_166))
				{
					if (func_47(NETWORK::NET_TO_ENT(Local_208.f_162)))
					{
						ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_208.f_166, NETWORK::NET_TO_OBJ(Local_208.f_162), -1, 0f, 0f, -0.8f, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
						MISC::SET_BIT(&(Local_208.f_5), 0);
					}
				}
			}
		}
	}
}

int func_311()
{
	if (PLAYER::PLAYER_ID() != -1)
	{
		return Global_1964145.f_23;
	}
	return -1;
}

float func_312(struct<2> Param0, var uParam2, struct<2> Param3, var uParam5)
{
	return MISC::GET_HEADING_FROM_VECTOR_2D((Param3.f_0 - Param0.f_0), (Param3.f_1 - Param0.f_1));
}

int func_313(var uParam0, int iParam1, struct<3> Param2, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12)
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

int func_314()
{
	return 0;
}

int func_315(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

Vector3 func_316()
{
	return Global_1964145.f_16;
}

int func_317()
{
	if (Local_208.f_16 == 0)
	{
		if (!BitTest(Local_208.f_5, 14))
		{
			Local_208.f_141 = MISC::GET_RANDOM_FLOAT_IN_RANGE((Local_208.f_141 - 1.5f), (Local_208.f_141 + 1.5f));
			Local_208.f_141.f_1 = MISC::GET_RANDOM_FLOAT_IN_RANGE((Local_208.f_141.f_1 - 1.5f), (Local_208.f_141.f_1 + 1.5f));
			Local_208.f_141.f_2 = MISC::GET_RANDOM_FLOAT_IN_RANGE((Local_208.f_141.f_2 + 0.5f), (Local_208.f_141.f_2 + 1.5f));
			if (!func_319(Local_208.f_141))
			{
				MISC::SET_BIT(&(Local_208.f_5), 14);
			}
		}
		else if (BitTest(Local_208.f_5, 15))
		{
			Local_208.f_141 = MISC::GET_RANDOM_FLOAT_IN_RANGE((Local_208.f_141 - 1.5f), (Local_208.f_141 + 1.5f));
			Local_208.f_141.f_1 = MISC::GET_RANDOM_FLOAT_IN_RANGE((Local_208.f_141.f_1 - 1.5f), (Local_208.f_141.f_1 + 1.5f));
			Local_208.f_141.f_2 = MISC::GET_RANDOM_FLOAT_IN_RANGE((Local_208.f_141.f_2 + 0.5f), (Local_208.f_141.f_2 + 1.5f));
			if (!func_319(Local_208.f_141))
			{
				MISC::CLEAR_BIT(&(Local_208.f_5), 15);
			}
		}
		func_318(Local_208.f_141);
	}
	else if (Local_208.f_16 == 1 && !func_319(Local_208.f_141))
	{
		return 1;
	}
	else
	{
		Local_208.f_16 = 0;
		MISC::SET_BIT(&(Local_208.f_5), 15);
	}
	return 0;
}

void func_318(struct<3> Param0)
{
	int iVar0;
	var uVar1;
	struct<3> Var4;
	var uVar7;
	int iVar8;
	
	switch (Local_208.f_15)
	{
		case 0:
			Local_208.f_171 = SHAPETEST::START_SHAPE_TEST_CAPSULE(Param0, Param0, (func_133(Local_208.f_243) * 11f), 511, 0, 4);
			if (Local_208.f_171 != 0)
			{
				Local_208.f_15 = 1;
			}
			break;
		
		case 1:
			iVar8 = SHAPETEST::GET_SHAPE_TEST_RESULT(Local_208.f_171, &iVar0, &Var4, &uVar1, &uVar7);
			if (iVar8 == 2)
			{
				if (iVar0 == 0)
				{
					Local_208.f_16 = 1;
					Var4 = { 0f, 0f, 0f };
				}
				else
				{
					Local_208.f_16 = 2;
					Local_208.f_171 = 0;
					Local_208.f_15 = 0;
				}
			}
			else if (iVar8 == 0)
			{
				Local_208.f_15 = 0;
			}
			break;
	}
}

int func_319(struct<3> Param0)
{
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -1036.27f, -228.704f, 53.76435f, -1096.765f, -258.69f, 35.77808f, 20f, false, true))
	{
		return 1;
	}
	return 0;
}

int func_320()
{
	return 0;
}

bool func_321(int iParam0)
{
	if (iParam0 == 0)
	{
		return 1;
	}
	STREAMING::REQUEST_MODEL(iParam0);
	return STREAMING::HAS_MODEL_LOADED(iParam0);
}

int func_322()
{
	return joaat("blazer5");
}

int func_323()
{
	if (func_324())
	{
		return Global_1950198.f_765 == 0;
	}
	return 0;
}

bool func_324()
{
	return Global_1950198.f_764;
}

void func_325(int iParam0)
{
	if (Local_208.f_244 != iParam0)
	{
		Local_208.f_244 = iParam0;
	}
}

int func_326()
{
	return Local_208.f_244;
}

void func_327()
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
				func_328(iVar0);
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

void func_328(int iParam0)
{
	struct<2> Var0;
	
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_208.f_162))
	{
		if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 13))
		{
			if (ENTITY::DOES_ENTITY_EXIST(Var0.f_0) && NETWORK::NET_TO_ENT(Local_208.f_162) == Var0.f_0)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Var0.f_1))
				{
					if (ENTITY::IS_ENTITY_A_PED(Var0.f_1))
					{
						if (PED::IS_PED_A_PLAYER(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0.f_1)) && PLAYER::PLAYER_PED_ID() != ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0.f_1))
						{
							Local_208.f_28 = 2;
						}
					}
				}
			}
		}
	}
}

void func_329()
{
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_208.f_162))
	{
		if (!ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_VEH(Local_208.f_162), false))
		{
			Local_208.f_153 = { ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(Local_208.f_162), true) };
			Local_208.f_127 = ENTITY::GET_ENTITY_HEADING(NETWORK::NET_TO_VEH(Local_208.f_162));
			if (!func_12(&(Local_208.f_266)))
			{
				func_11(&(Local_208.f_266), 0, 0);
			}
			else if (func_10(&(Local_208.f_266), 1000, 0))
			{
				if (!func_330(Global_2658291[PLAYER::PLAYER_ID() /*468*/].f_434, Local_208.f_153, 0))
				{
					Global_2658291[PLAYER::PLAYER_ID() /*468*/].f_434 = { Local_208.f_153 };
				}
				if (Global_2658291[PLAYER::PLAYER_ID() /*468*/].f_437 != ENTITY::GET_ENTITY_HEADING(NETWORK::NET_TO_VEH(Local_208.f_162)))
				{
					Global_2658291[PLAYER::PLAYER_ID() /*468*/].f_437 = ENTITY::GET_ENTITY_HEADING(NETWORK::NET_TO_VEH(Local_208.f_162));
				}
				func_63(&(Local_208.f_266));
			}
		}
	}
	if (func_47(Local_208.f_166))
	{
		if (ENTITY::IS_ENTITY_VISIBLE(Local_208.f_166))
		{
			ENTITY::SET_ENTITY_VISIBLE(Local_208.f_166, false, false);
		}
	}
	if (func_47(Local_208.f_164))
	{
		if (ENTITY::IS_ENTITY_VISIBLE(Local_208.f_164))
		{
			ENTITY::SET_ENTITY_VISIBLE(Local_208.f_164, false, false);
		}
	}
}

bool func_330(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

void func_331()
{
	if (func_335(4))
	{
		PAD::DISABLE_CONTROL_ACTION(0, 37, false);
		if (!func_334())
		{
			func_332();
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
		}
	}
}

void func_332()
{
	func_333();
}

void func_333()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 402)
	{
		PAD::DISABLE_CONTROL_ACTION(0, iVar0, true);
		iVar0++;
	}
}

bool func_334()
{
	return BitTest(Global_1964145.f_2, 4);
}

bool func_335(int iParam0)
{
	return Local_208.f_244 == iParam0;
}

void func_336()
{
	if (func_335(1) || func_335(4))
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_208.f_162))
		{
			if (CAM::DOES_CAM_EXIST(Local_208.f_172) && CAM::IS_CAM_RENDERING(Local_208.f_172))
			{
				if (func_335(4))
				{
					if (!func_315(Local_208.f_153))
					{
						PED::SET_POP_CONTROL_SPHERE_THIS_FRAME(Local_208.f_153, 60f, 200f);
						INTERIOR::ACTIVATE_INTERIOR_GROUPS_USING_CAMERA();
						STREAMING::SET_FOCUS_POS_AND_VEL(Local_208.f_153, ENTITY::GET_ENTITY_VELOCITY(NETWORK::NET_TO_OBJ(Local_208.f_162)));
						if ((MISC::GET_FRAME_COUNT() % 120) == 0)
						{
							PED::SET_SCENARIO_PEDS_SPAWN_IN_SPHERE_AREA(Local_208.f_153, 60f, 30);
						}
					}
				}
			}
		}
	}
}

int func_337(var uParam0)
{
	if (HUD::IS_PAUSE_MENU_ACTIVE() || NETWORK::IS_COMMERCE_STORE_OPEN())
	{
		return 1;
	}
	if (NETWORK::NETWORK_TEXT_CHAT_IS_TYPING())
	{
		return 1;
	}
	if (func_230())
	{
		return 1;
	}
	if (func_304(PLAYER::PLAYER_ID()) && !func_343())
	{
		return 1;
	}
	if (func_164(PLAYER::PLAYER_ID()))
	{
		if (BitTest(Global_2731604, 0))
		{
			return 1;
		}
	}
	if (Global_1935009 || Global_1574973)
	{
		func_342(1);
		return 1;
	}
	if ((func_340(0) || func_339(1)) || func_338())
	{
		*uParam0 = 1;
		return 1;
	}
	return 0;
}

int func_338()
{
	return Global_24390.f_135;
	return 0;
}

bool func_339(bool bParam0)
{
	if (bParam0)
	{
		return (Global_24390.f_4 && Global_24390.f_104 == 4);
	}
	return Global_24390.f_4;
}

int func_340(bool bParam0)
{
	if (PAD::GET_ALLOW_MOVEMENT_WHILE_ZOOMED())
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (func_341(PLAYER::PLAYER_PED_ID()))
			{
				if (PAD::IS_CONTROL_PRESSED(0, 25) || PAD::IS_CONTROL_PRESSED(0, 68))
				{
					return 0;
				}
			}
		}
	}
	if (Global_24390.f_130)
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

int func_341(int iParam0)
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

void func_342(bool bParam0)
{
	if (bParam0)
	{
		if (!func_14())
		{
			MISC::SET_BIT(&Global_1964145, 20);
		}
	}
	else if (func_14())
	{
		MISC::CLEAR_BIT(&Global_1964145, 20);
	}
}

bool func_343()
{
	return (BitTest(Global_4718592.f_31, 12) && BitTest(Global_1970942, 0));
}

int func_344()
{
	if (func_349())
	{
		return 1;
	}
	if (func_345())
	{
		return 1;
	}
	return 0;
}

int func_345()
{
	if (func_348())
	{
		return 1;
	}
	if (!func_306())
	{
		return 1;
	}
	if (PLAYER::PLAYER_ID() != func_23())
	{
		if (!func_347())
		{
			if (func_304(PLAYER::PLAYER_ID()) && !func_343())
			{
				return 1;
			}
		}
	}
	if (!func_47(PLAYER::PLAYER_PED_ID()) && BitTest(Global_1964145.f_2, 2))
	{
		return 1;
	}
	if (func_181(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	if (func_346(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	return 0;
}

int func_346(int iParam0)
{
	if (BitTest(Global_1845250[iParam0 /*880*/].f_260.f_37, 14))
	{
		return 1;
	}
	if (BitTest(Global_1845250[iParam0 /*880*/].f_260.f_37, 11))
	{
		return 1;
	}
	return 0;
}

bool func_347()
{
	return BitTest(Global_1964145.f_2, 9);
}

bool func_348()
{
	return BitTest(Global_1964145, 0);
}

int func_349()
{
	if (Global_1575062 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 1;
		}
	}
	if (func_356())
	{
		return 1;
	}
	if (Global_2699567)
	{
		return 1;
	}
	if (func_355())
	{
		return 1;
	}
	if (func_354(159))
	{
		if (!func_353())
		{
			return 1;
		}
	}
	if (func_354(157))
	{
		return 1;
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return 1;
	}
	if (func_350() != 0)
	{
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(func_350()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_350()
{
	switch (func_352())
	{
		case 0:
			return func_351();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_351()
{
	switch (Global_2699676)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_352()
{
	return Global_33775;
}

bool func_353()
{
	return Global_2685150.f_700;
}

int func_354(int iParam0)
{
	if (SCRIPT::GET_EVENT_EXISTS(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_355()
{
	return Global_2696964;
}

bool func_356()
{
	return Global_2685150.f_695;
}

void func_357()
{
	SYSTEM::WAIT(0);
}

void func_358(bool bParam0, bool bParam1)
{
	func_65(0);
	if (bParam1)
	{
		Local_208.f_141 = { Local_208.f_147 };
	}
	func_362();
	func_361(1);
	func_360(1);
	func_359(Global_262145.f_28402);
	func_99(Global_1837340);
	if (bParam0)
	{
	}
}

void func_359(float fParam0)
{
	if (Global_1964145.f_11 != fParam0)
	{
		Global_1964145.f_11 = fParam0;
	}
}

void func_360(bool bParam0)
{
	if (bParam0)
	{
		if (!func_270())
		{
			MISC::SET_BIT(&Global_1964145, 2);
		}
	}
	else if (func_270())
	{
		MISC::CLEAR_BIT(&Global_1964145, 2);
	}
}

void func_361(bool bParam0)
{
	if (bParam0)
	{
		if (!func_185())
		{
			MISC::SET_BIT(&Global_1964145, 4);
		}
	}
	else if (func_185())
	{
		MISC::CLEAR_BIT(&Global_1964145, 4);
	}
}

void func_362()
{
	Local_208.f_122 = 70f;
	Local_208.f_133 = 40f;
	Local_208.f_243 = joaat("ba_prop_battle_drone_quad");
	Global_1964145.f_1 = 1500;
	Local_208.f_128 = 90f;
	Local_208.f_131 = 90f;
	Local_208.f_173 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("DRONE_CAM");
	Local_208.f_160 = "GTAO_Drone_Sounds";
}

void func_363(bool bParam0)
{
	int iVar0;
	var uVar1;
	int iVar2;
	
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_208.f_162))
	{
		NETWORK::SET_NETWORK_ID_CAN_MIGRATE(Local_208.f_162, true);
		if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_208.f_162))
		{
			if (!BitTest(Local_208.f_6, 2))
			{
				if (func_408())
				{
					if (func_47(PLAYER::PLAYER_PED_ID()))
					{
						FIRE::ADD_OWNED_EXPLOSION(PLAYER::PLAYER_PED_ID(), func_407(), func_406(), func_405(), true, false, 1f);
					}
					else
					{
						FIRE::ADD_EXPLOSION(func_407(), func_406(), func_405(), true, false, 1f, false);
					}
					PAD::SET_CONTROL_SHAKE(0, 300, SYSTEM::ROUND((200f * Local_208.f_134)));
					MISC::SET_BIT(&(Local_208.f_6), 2);
				}
			}
			STREAMING::CLEAR_FOCUS();
			iVar0 = NETWORK::NET_TO_OBJ(Local_208.f_162);
			NETWORK::NETWORK_FADE_OUT_ENTITY(iVar0, false, true);
			OBJECT::DELETE_OBJECT(&iVar0);
		}
		else
		{
			NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_208.f_162);
			return;
		}
	}
	if (func_404("DRONE_TRIG"))
	{
		HUD::CLEAR_HELP(true);
	}
	if (func_47(Local_208.f_164))
	{
		uVar1 = Local_208.f_164;
		PED::DELETE_PED(&uVar1);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_208.f_165))
	{
		OBJECT::DELETE_OBJECT(&(Local_208.f_165));
	}
	if (HUD::DOES_BLIP_EXIST(Local_208.f_174))
	{
		HUD::REMOVE_BLIP(&(Local_208.f_174));
	}
	if (HUD::DOES_BLIP_EXIST(Local_208.f_175))
	{
		HUD::REMOVE_BLIP(&(Local_208.f_175));
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_208.f_166))
	{
		VEHICLE::DELETE_VEHICLE(&(Local_208.f_166));
	}
	HUD::THEFEED_SHOW();
	HUD::UNLOCK_MINIMAP_ANGLE();
	HUD::UNLOCK_MINIMAP_POSITION();
	HUD::SET_RADAR_ZOOM_PRECISE(0f);
	if (func_159())
	{
		func_158(0);
	}
	func_401();
	func_399(1, -1);
	func_398();
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_208.f_163))
	{
		iVar2 = NETWORK::NET_TO_OBJ(Local_208.f_163);
		OBJECT::DELETE_OBJECT(&iVar2);
	}
	if (!bParam0)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(Local_208.f_161))
		{
			STREAMING::REMOVE_ANIM_DICT(Local_208.f_161);
		}
		func_396(0);
	}
	func_186(0);
	if (func_395() && (!func_304(PLAYER::PLAYER_ID()) || func_343()))
	{
		func_296(PLAYER::PLAYER_ID(), 1, 0, 0);
		ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
	}
	Local_208.f_123 = 0f;
	Local_208.f_124 = 0f;
	Local_208.f_12 = 0;
	Local_208.f_14 = 0;
	Local_208.f_10 = 0;
	Local_208.f_16 = 0;
	func_63(&(Local_208.f_248));
	func_63(&(Local_208.f_250));
	if (!Local_208.f_159)
	{
		func_63(&(Local_208.f_252));
	}
	func_63(&(Local_208.f_256));
	func_63(&(Local_208.f_254));
	func_63(&(Local_208.f_258));
	func_63(&(Local_208.f_264));
	func_63(&(Local_208.f_270));
	func_63(&(Local_208.f_268));
	func_63(&(Local_208.f_266));
	func_63(&(Local_208.f_272));
	func_63(&(Local_208.f_274));
	func_63(&(Local_208.f_276));
	func_63(&(Local_208.f_280));
	func_63(&(Local_208.f_282));
	func_63(&(Local_208.f_260));
	func_63(&(Local_208.f_351));
	if (PLAYER::PLAYER_ID() != func_23())
	{
		func_63(&(Local_208.f_286[PLAYER::PLAYER_ID() /*2*/]));
	}
	Local_208.f_30 = 0;
	Local_208.f_5 = 0;
	Local_208.f_6 = 0;
	Global_1964145.f_5 = -1;
	func_394(-1f);
	func_359(0f);
	func_172(0);
	func_361(0);
	func_393(0);
	func_391(0);
	func_140(0);
	func_389(0);
	func_388(0);
	func_386(0);
	func_385(0);
	func_384(0);
	func_383(0);
	func_382(0);
	func_233(1);
	func_380(0);
	func_378(0);
	func_377(0);
	func_376(0);
	MISC::CLEAR_BIT(&Global_1964145, 29);
	func_121(0);
	func_375(0f, 0f, 0f, 0f, 0f, 0f);
	func_374();
	Global_1964145.f_27 = -1;
	MISC::CLEAR_BIT(&Global_2708984, 0);
	MISC::CLEAR_BIT(&Global_1970943, 0);
	func_325(0);
	if (func_92())
	{
		GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("helicopterhud");
		func_373();
	}
	if (func_141())
	{
		func_212("SET_WARNING_IS_VISIBLE", 0);
		func_290(0);
		func_289(0);
		MISC::CLEAR_BIT(&(Local_110[PLAYER::PLAYER_ID() /*3*/]), 0);
	}
	func_370();
	func_291(0);
	func_342(0);
	func_369(0);
	func_368(0f);
	func_367(0f);
	GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(Local_208.f_173));
	if (func_366(1) != 0)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_366(1));
	}
	if (func_366(0) != 0)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_366(0));
	}
	func_284(0);
	func_399(1, -1);
	Local_208.f_28 = 0;
	Local_208.f_29 = 0;
	Local_208.f_31 = 0;
	EVENT::REMOVE_SHOCKING_EVENT(Local_208.f_30);
	if (!bParam0)
	{
		if (!func_164(PLAYER::PLAYER_ID()))
		{
			func_365(0f, 0f, 0f, 0f);
		}
		Global_1964145.f_2 = 0;
		func_364();
	}
	else
	{
		func_358(0, 1);
	}
}

void func_364()
{
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_365(struct<3> Param0, float fParam3)
{
	if (!func_330(Global_1964145.f_13, Param0, 0))
	{
		Global_1964145.f_13 = { Param0 };
		Global_1964145.f_10 = fParam3;
	}
}

int func_366(bool bParam0)
{
	if (!bParam0)
	{
		if (Global_1964145.f_22 != 0)
		{
			return Global_1964145.f_22;
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

void func_367(float fParam0)
{
	if (Global_1964145.f_9 != fParam0)
	{
		Global_1964145.f_9 = fParam0;
	}
}

void func_368(float fParam0)
{
	if (Global_1964145.f_8 != fParam0)
	{
		Global_1964145.f_8 = fParam0;
	}
}

void func_369(int iParam0)
{
	if (Global_1964145.f_7 != iParam0)
	{
		Global_1964145.f_7 = iParam0;
	}
}

void func_370()
{
	if (!AUDIO::HAS_SOUND_FINISHED(Local_208.f_43))
	{
		AUDIO::STOP_SOUND(Local_208.f_43);
		AUDIO::RELEASE_SOUND_ID(Local_208.f_43);
		Local_208.f_43 = -1;
	}
	if (!AUDIO::HAS_SOUND_FINISHED(Local_208.f_32))
	{
		AUDIO::STOP_SOUND(Local_208.f_32);
		AUDIO::RELEASE_SOUND_ID(Local_208.f_32);
		Local_208.f_32 = -1;
	}
	if (!AUDIO::HAS_SOUND_FINISHED(Local_208.f_33))
	{
		AUDIO::STOP_SOUND(Local_208.f_33);
		AUDIO::RELEASE_SOUND_ID(Local_208.f_33);
		Local_208.f_33 = -1;
	}
	if (!AUDIO::HAS_SOUND_FINISHED(Local_208.f_36))
	{
		AUDIO::STOP_SOUND(Local_208.f_36);
		AUDIO::RELEASE_SOUND_ID(Local_208.f_36);
		Local_208.f_36 = -1;
	}
	if (!AUDIO::HAS_SOUND_FINISHED(Local_208.f_42))
	{
		AUDIO::STOP_SOUND(Local_208.f_42);
		AUDIO::RELEASE_SOUND_ID(Local_208.f_42);
		Local_208.f_42 = -1;
	}
	if (!AUDIO::HAS_SOUND_FINISHED(Local_208.f_41))
	{
		AUDIO::STOP_SOUND(Local_208.f_41);
		AUDIO::RELEASE_SOUND_ID(Local_208.f_41);
		Local_208.f_41 = -1;
	}
	if (!AUDIO::HAS_SOUND_FINISHED(Local_208.f_40))
	{
		AUDIO::STOP_SOUND(Local_208.f_40);
		AUDIO::RELEASE_SOUND_ID(Local_208.f_40);
		Local_208.f_40 = -1;
	}
	if (!AUDIO::HAS_SOUND_FINISHED(Local_208.f_39))
	{
		AUDIO::STOP_SOUND(Local_208.f_39);
		AUDIO::RELEASE_SOUND_ID(Local_208.f_39);
		Local_208.f_39 = -1;
	}
	if (!AUDIO::HAS_SOUND_FINISHED(Local_208.f_44))
	{
		AUDIO::STOP_SOUND(Local_208.f_44);
		AUDIO::RELEASE_SOUND_ID(Local_208.f_44);
		Local_208.f_44 = -1;
	}
	if (!AUDIO::HAS_SOUND_FINISHED(Local_208.f_45))
	{
		AUDIO::STOP_SOUND(Local_208.f_45);
		AUDIO::RELEASE_SOUND_ID(Local_208.f_45);
		Local_208.f_45 = -1;
	}
	func_372();
	func_62();
	func_371();
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE(func_294()))
	{
		AUDIO::STOP_AUDIO_SCENE(func_294());
	}
}

void func_371()
{
	if (Local_571.f_2 != -1)
	{
		AUDIO::STOP_SOUND(Local_571.f_2);
		AUDIO::RELEASE_SOUND_ID(Local_571.f_2);
		Local_571.f_2 = -1;
	}
}

void func_372()
{
	if (!AUDIO::HAS_SOUND_FINISHED(Local_208.f_46))
	{
		AUDIO::STOP_SOUND(Local_208.f_46);
		AUDIO::RELEASE_SOUND_ID(Local_208.f_46);
		Local_208.f_46 = -1;
	}
}

void func_373()
{
	MISC::CLEAR_BIT(&(Local_208.f_5), 10);
}

void func_374()
{
	if (func_230())
	{
		MISC::CLEAR_BIT(&Global_1964145, 7);
	}
}

void func_375(struct<3> Param0, struct<3> Param3)
{
	if (!func_330(Global_1964145.f_16, Param0, 0))
	{
		Global_1964145.f_16 = { Param0 };
		Param3 = { Param3 + Vector(0f, -180f, 180f) };
		Global_1964145.f_19 = { Param3 };
	}
}

void func_376(bool bParam0)
{
	if (bParam0)
	{
		if (!func_184())
		{
			MISC::SET_BIT(&Global_1964145, 15);
		}
	}
	else if (func_184())
	{
		MISC::CLEAR_BIT(&Global_1964145, 15);
	}
}

void func_377(bool bParam0)
{
	if (bParam0)
	{
		if (!func_237())
		{
			MISC::SET_BIT(&Global_1964145, 19);
		}
	}
	else if (func_237())
	{
		MISC::CLEAR_BIT(&Global_1964145, 19);
	}
}

void func_378(bool bParam0)
{
	if (bParam0)
	{
		if (!func_379())
		{
			MISC::SET_BIT(&Global_1964145, 17);
		}
	}
	else if (func_379())
	{
		MISC::CLEAR_BIT(&Global_1964145, 17);
	}
}

bool func_379()
{
	return BitTest(Global_1964145, 17);
}

void func_380(bool bParam0)
{
	if (bParam0)
	{
		if (!func_381())
		{
			MISC::SET_BIT(&Global_1964145, 18);
		}
	}
	else if (func_381())
	{
		MISC::CLEAR_BIT(&Global_1964145, 18);
	}
}

bool func_381()
{
	return BitTest(Global_1964145, 18);
}

void func_382(bool bParam0)
{
	if (bParam0)
	{
		if (func_141())
		{
			if (!BitTest(Global_1964145, 16))
			{
				MISC::SET_BIT(&Global_1964145, 16);
			}
		}
	}
	else if (BitTest(Global_1964145, 16))
	{
		MISC::CLEAR_BIT(&Global_1964145, 16);
	}
}

void func_383(bool bParam0)
{
	if (bParam0)
	{
		if (!func_348())
		{
			MISC::SET_BIT(&Global_1964145, 6);
		}
	}
	else if (func_348())
	{
		MISC::CLEAR_BIT(&Global_1964145, 6);
	}
}

void func_384(bool bParam0)
{
	if (bParam0)
	{
		if (!BitTest(Global_1964145, 3))
		{
			MISC::SET_BIT(&Global_1964145, 3);
		}
	}
	else if (BitTest(Global_1964145, 3))
	{
		MISC::CLEAR_BIT(&Global_1964145, 3);
	}
}

void func_385(bool bParam0)
{
	if (bParam0)
	{
		if (!func_57())
		{
			MISC::SET_BIT(&Global_1964145, 28);
		}
	}
	else if (func_57())
	{
		MISC::CLEAR_BIT(&Global_1964145, 28);
	}
}

void func_386(bool bParam0)
{
	if (bParam0)
	{
		if (!func_387())
		{
			MISC::SET_BIT(&Global_1964145, 27);
		}
	}
	else if (func_387())
	{
		MISC::CLEAR_BIT(&Global_1964145, 27);
	}
}

bool func_387()
{
	return BitTest(Global_1964145, 27);
}

void func_388(bool bParam0)
{
	if (bParam0)
	{
		if (!func_260())
		{
			MISC::SET_BIT(&Global_1964145, 1);
		}
	}
	else if (func_260())
	{
		MISC::CLEAR_BIT(&Global_1964145, 1);
	}
}

void func_389(bool bParam0)
{
	if (bParam0)
	{
		if (!func_390())
		{
			MISC::SET_BIT(&Global_1964145, 10);
		}
	}
	else if (func_390())
	{
		MISC::CLEAR_BIT(&Global_1964145, 10);
	}
}

bool func_390()
{
	return BitTest(Global_1964145, 10);
}

void func_391(bool bParam0)
{
	if (bParam0)
	{
		if (!func_392())
		{
			MISC::SET_BIT(&Global_1964145, 8);
		}
	}
	else if (func_392())
	{
		MISC::CLEAR_BIT(&Global_1964145, 8);
	}
}

bool func_392()
{
	return BitTest(Global_1964145, 8);
}

void func_393(bool bParam0)
{
	if (bParam0)
	{
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(MISC::GET_HASH_KEY("AM_MP_DRONE")) > 0)
		{
			if (!func_348())
			{
				MISC::SET_BIT(&Global_1964145, 0);
			}
		}
	}
	else if (func_348())
	{
		MISC::CLEAR_BIT(&Global_1964145, 0);
	}
}

void func_394(float fParam0)
{
	if (Global_1964145.f_12 != fParam0)
	{
		Global_1964145.f_12 = fParam0;
	}
}

int func_395()
{
	if (!func_306())
	{
		return 0;
	}
	if (func_41(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (!func_141())
	{
		return 0;
	}
	return 1;
}

void func_396(bool bParam0)
{
	if (bParam0)
	{
		if (!func_397())
		{
			MISC::SET_BIT(&Global_1964145, 24);
		}
	}
	else if (func_397())
	{
		MISC::CLEAR_BIT(&Global_1964145, 24);
	}
}

bool func_397()
{
	return BitTest(Global_1964145, 24);
}

void func_398()
{
	if (CAM::DOES_CAM_EXIST(Local_208.f_172))
	{
		CAM::DESTROY_CAM(Local_208.f_172, false);
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
		if (!func_14() || BitTest(Local_208.f_6, 0))
		{
			GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
		}
	}
}

void func_399(bool bParam0, int iParam1)
{
	int iVar0;
	
	if (!func_224(&iVar0, 0, iParam1))
	{
		return;
	}
	if (Global_24529.f_9244)
	{
		HUD::RESET_HUD_COMPONENT_VALUES(15);
		Global_24529.f_9244 = 0;
	}
	HUD::THEFEED_SET_SCRIPTED_MENU_HEIGHT(0f);
	if (Global_24529.f_6231[iVar0])
	{
		HUD::CLEAR_ADDITIONAL_TEXT(9, false);
		Global_24529.f_6231[iVar0] = 0;
	}
	if (Global_24529.f_6217[iVar0])
	{
		GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("CommonMenu");
		Global_24529.f_6217[iVar0] = 0;
	}
	if (Global_24529.f_6224[iVar0])
	{
		GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("MPShopSale");
		Global_24529.f_6224[iVar0] = 0;
	}
	if (bParam0)
	{
		func_400(&(Global_24529.f_6263[iVar0 /*10*/]));
		Global_24529.f_6324[iVar0] = 0;
	}
	else
	{
		Global_24529.f_6324[iVar0] = 0;
	}
	GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("Shared");
}

void func_400(int* iParam0)
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

void func_401()
{
	if (CAM::DOES_CAM_EXIST(Local_208.f_172))
	{
		if (func_403(PLAYER::PLAYER_ID()))
		{
			func_402(0);
		}
	}
}

void func_402(bool bParam0)
{
	if (bParam0)
	{
		Global_1950198.f_4219 = bParam0;
	}
	if (!Global_1950198.f_4218)
	{
		Global_1950198.f_4218 = 1;
	}
}

int func_403(int iParam0)
{
	if (iParam0 != func_23())
	{
		if (func_42(iParam0, 1, 1))
		{
			return Global_2658291[iParam0 /*468*/].f_325.f_8 != -1;
		}
		else if ((Global_1575090 && iParam0 == PLAYER::PLAYER_ID()) && func_42(iParam0, 1, 0))
		{
			return Global_2658291[iParam0 /*468*/].f_325.f_8 != -1;
		}
	}
	return 0;
}

bool func_404(char* sParam0)
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

float func_405()
{
	return 0.5f;
}

int func_406()
{
	return 72;
}

Vector3 func_407()
{
	return Local_208.f_153;
}

int func_408()
{
	if (func_334())
	{
		return 1;
	}
	if (func_160())
	{
		return 1;
	}
	return 0;
}

int func_409(struct<15> Param0, var uParam15)
{
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(32, false, Param0.f_0);
	func_411(0, -1, 0);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&uLocal_207, 1, 0);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_110, 97, 0);
	if (!func_410())
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		Local_208.f_138 = { Param0.f_2 };
		Local_208.f_147 = { Param0.f_5 };
		Local_110[PLAYER::PLAYER_ID() /*3*/].f_1 = Param0.f_1;
		Global_1912395[PLAYER::PLAYER_ID() /*315*/].f_101 = Param0.f_1;
		Local_208.f_144 = { Param0.f_8 };
		Local_567.f_0 = Param0.f_11;
		Local_567.f_1 = Param0.f_12;
		Local_567.f_2 = Param0.f_13;
		Local_567.f_3 = Param0.f_14;
		if (func_315(func_316()))
		{
			func_375(Local_208.f_147, 0f, 0f, 0f);
		}
	}
	else
	{
		return 0;
	}
	return 1;
}

int func_410()
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
		if (func_356())
		{
			return 0;
		}
		if (func_354(157))
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

int func_411(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_364();
			}
			else
			{
				return 0;
			}
		}
		if (!func_412(0))
		{
			if (iParam0 == 0)
			{
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (!bParam2)
					{
						func_364();
					}
					else
					{
						return 0;
					}
				}
				if (func_356())
				{
					if (!bParam2)
					{
						func_364();
					}
					else
					{
						return 0;
					}
				}
				if (func_354(157))
				{
					if (!bParam2)
					{
						func_364();
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
					func_364();
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
		Global_1574668 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (!bParam2)
			{
				func_364();
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
			func_364();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_412(bool bParam0)
{
	if (bParam0)
	{
	}
	return Global_1575062;
}

