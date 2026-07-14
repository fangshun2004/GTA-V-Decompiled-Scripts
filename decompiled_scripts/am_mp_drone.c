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
	struct<12> ScriptParam_0 = { 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
		func_573(ScriptParam_0);
	}
	else
	{
		func_541(0);
	}
	while (true)
	{
		func_540();
		if (func_532())
		{
			func_541(0);
		}
		if (func_527())
		{
			func_541(0);
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
	if (!func_526(6))
	{
		func_525();
		func_524();
		func_523();
		func_519();
		func_518();
	}
	func_515();
	func_513();
	func_509();
	func_506();
	if (func_526(0))
	{
		func_454();
	}
	else if (func_526(1))
	{
		if (!func_453())
		{
			func_446();
			func_426();
		}
		else
		{
			func_425(1);
			func_424(7);
		}
	}
	else if (func_526(2))
	{
		func_417();
	}
	else if (func_526(3))
	{
		func_409();
	}
	else if (func_526(4))
	{
		func_408();
		func_407();
		func_405();
		func_404();
		func_403(&Local_231);
		func_402(&Local_231);
		func_401();
		func_391();
		func_387();
		func_369();
		func_367();
		func_321();
		func_320();
		func_306();
		func_417();
		func_303();
		if (func_296(0))
		{
			func_295();
			return;
		}
		func_291();
		func_285();
		func_273(0);
		func_257();
		func_246();
		func_237();
		func_206();
		func_199();
		func_197();
		func_120();
		func_104();
		func_102();
		func_101();
	}
	else if (func_526(5))
	{
		func_42();
	}
	else if (func_526(7))
	{
		func_35();
	}
	if (!func_526(4) && !func_526(6))
	{
		func_27();
	}
	func_5();
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
	bool bVar0;
	
	bVar0 = PLAYER::INT_TO_PLAYERINDEX(Local_231.f_47);
	if (PLAYER::PLAYER_ID() != bVar0)
	{
		if (func_26(bVar0, 1, 1))
		{
			if (func_24(func_25()))
			{
				if (BitTest(Local_231.f_7, Local_231.f_47))
				{
					if (!NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(bVar0) && !NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT_ON_SCRIPT(bVar0, "AM_MP_DRONE", 0))
					{
						MISC::CLEAR_BIT(&(Local_231.f_7), Local_231.f_47);
					}
				}
				if (func_15(bVar0, 0))
				{
					if ((!BitTest(Local_231.f_7, Local_231.f_47) && func_10(bVar0)) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_231.f_163))
					{
						func_7(bVar0, 1);
						NETWORK::SET_NETWORK_ID_ALWAYS_EXISTS_FOR_PLAYER(Local_231.f_163, bVar0, true);
						MISC::SET_BIT(&(Local_231.f_7), Local_231.f_47);
					}
				}
				else if ((SYSTEM::VDIST2(func_6(bVar0), Local_231.f_154) > 504100f && !func_526(1)) && !func_526(3))
				{
					if (BitTest(Local_231.f_7, Local_231.f_47))
					{
						func_7(bVar0, 0);
						NETWORK::SET_NETWORK_ID_ALWAYS_EXISTS_FOR_PLAYER(Local_231.f_163, bVar0, false);
						MISC::CLEAR_BIT(&(Local_231.f_7), Local_231.f_47);
						MISC::CLEAR_BIT(&(Local_231.f_8), Local_231.f_47);
					}
				}
			}
			else if (func_15(bVar0, 1) && func_10(bVar0))
			{
				if (!BitTest(Local_231.f_8, Local_231.f_47))
				{
					func_7(bVar0, 1);
					MISC::SET_BIT(&(Local_231.f_8), Local_231.f_47);
				}
			}
			else if (BitTest(Local_231.f_8, Local_231.f_47))
			{
				func_7(bVar0, 0);
				MISC::CLEAR_BIT(&(Local_231.f_8), Local_231.f_47);
				MISC::CLEAR_BIT(&(Local_231.f_7), Local_231.f_47);
			}
		}
	}
}

Vector3 func_6(bool bParam0)
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(bParam0), false);
}

void func_7(bool bParam0, int iParam1)
{
	struct<4> Var0;
	int iVar4;
	
	Var0.f_0 = 1982590640;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_3 = iParam1;
	iVar4 = func_8(bParam0);
	if (!iVar4 == 0)
	{
		SCRIPT::_SEND_TU_SCRIPT_EVENT_NEW(1, &Var0, 4, iVar4, Var0.f_0);
	}
}

var func_8(bool bParam0)
{
	var uVar0;
	
	if (func_9(bParam0))
	{
		MISC::SET_BIT(&uVar0, bParam0);
	}
	return uVar0;
}

int func_9(int iParam0)
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

int func_10(bool bParam0)
{
	if (func_14(bParam0, 1, 1))
	{
		return 0;
	}
	if (func_12(bParam0))
	{
		return 0;
	}
	if (func_11(bParam0))
	{
		return 0;
	}
	return 1;
}

int func_11(bool bParam0)
{
	if (BitTest(Global_1845298[bParam0 /*881*/].f_260.f_37, 14))
	{
		return 1;
	}
	if (BitTest(Global_1845298[bParam0 /*881*/].f_260.f_37, 11))
	{
		return 1;
	}
	return 0;
}

int func_12(bool bParam0)
{
	if (bParam0 != func_13() && func_26(bParam0, 1, 1))
	{
		return BitTest(Global_2658293[bParam0 /*468*/].f_325, 3);
	}
	return 0;
}

int func_13()
{
	return -1;
}

int func_14(bool bParam0, bool bParam1, bool bParam2)
{
	if (bParam0 == func_13())
	{
		return 0;
	}
	if (BitTest(Global_1845298[bParam0 /*881*/].f_260.f_37, 0))
	{
		return 1;
	}
	if (bParam1)
	{
		if (BitTest(Global_1845298[bParam0 /*881*/].f_260.f_37, 1))
		{
			return 1;
		}
	}
	if (bParam2)
	{
		if (Global_2658293[bParam0 /*468*/].f_325.f_8 != -1)
		{
			return 1;
		}
	}
	return 0;
}

int func_15(bool bParam0, bool bParam1)
{
	struct<3> Var0;
	
	if (func_14(bParam0, 1, 1))
	{
		return 0;
	}
	if (func_12(bParam0))
	{
		return 0;
	}
	if (func_11(bParam0))
	{
		return 0;
	}
	if (func_22(2) && func_18(PLAYER::PLAYER_ID()) == 2)
	{
		return 0;
	}
	Var0 = { func_6(bParam0) };
	if (bParam1)
	{
		if (func_17())
		{
			if (func_24(func_16()))
			{
				if (SYSTEM::VDIST2(Var0, ENTITY::GET_ENTITY_COORDS(func_16(), true)) < 490000f)
				{
					return 1;
				}
			}
		}
	}
	else if (SYSTEM::VDIST2(Var0, Local_231.f_154) < 490000f)
	{
		return 1;
	}
	return 0;
}

int func_16()
{
	if (Global_1845138 != func_13())
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_1673954))
		{
			return Global_1673954;
		}
		if (ENTITY::DOES_ENTITY_EXIST(Global_1969858[Global_1845138]))
		{
			return Global_1969858[Global_1845138];
		}
	}
	return -1;
}

bool func_17()
{
	return BitTest(Global_1964670.f_2, 8);
}

int func_18(bool bParam0)
{
	switch (func_21(bParam0))
	{
		case 329:
		case 330:
		case 331:
		case 332:
		case 333:
			return func_19(bParam0);
		
		default:
	}
	return -1;
}

int func_19(bool bParam0)
{
	if (func_20(bParam0, 0))
	{
		return Global_1892925[bParam0 /*615*/].f_10.f_183;
	}
	return -1;
}

int func_20(int iParam0, int iParam1)
{
	if (func_9(iParam0))
	{
		if (Global_1892925[iParam0 /*615*/].f_10.f_34 != -1 || (iParam1 && Global_1892925[iParam0 /*615*/].f_10.f_33 != -1))
		{
			return 1;
		}
	}
	return 0;
}

int func_21(bool bParam0)
{
	if (func_9(bParam0))
	{
		if (func_20(bParam0, 0))
		{
			return Global_1892925[bParam0 /*615*/].f_10.f_34;
		}
	}
	return -1;
}

var func_22(int iParam0)
{
	return func_23(&(Global_2673273.f_194), iParam0);
}

var func_23(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = uParam1;
	iVar1 = (iVar0 / 32);
	iVar2 = (iVar0 % 32);
	return BitTest((*uParam0)[iVar1], iVar2);
}

int func_24(int iParam0)
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

int func_25()
{
	if (PLAYER::PLAYER_ID() != -1)
	{
		return Global_1964670.f_25;
	}
	return -1;
}

int func_26(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = bParam0;
	if (iVar0 != -1)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(bParam0))
		{
			if (bParam1)
			{
				if (!PLAYER::IS_PLAYER_PLAYING(bParam0))
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

void func_27()
{
	int iVar0;
	
	if (Local_231.f_160)
	{
		if (func_34(&(Local_231.f_253)))
		{
			if (func_33())
			{
				iVar0 = Global_262145.f_24938;
			}
			else if (func_32() || func_31())
			{
				iVar0 = 4000;
			}
			else
			{
				iVar0 = Global_262145.f_24323;
			}
			if (func_29(&(Local_231.f_253), iVar0, 0))
			{
				func_28(&(Local_231.f_253));
				Local_231.f_18 = 100;
				MISC::CLEAR_BIT(&(Local_231.f_5), 4);
				MISC::CLEAR_BIT(&(Local_231.f_5), 3);
				MISC::CLEAR_BIT(&(Local_231.f_5), 24);
				MISC::CLEAR_BIT(&Global_1964670, 29);
				Local_231.f_160 = 0;
			}
		}
	}
}

void func_28(var uParam0)
{
	uParam0->f_1 = 0;
}

int func_29(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_30(uParam0, bParam2, 0);
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

void func_30(var uParam0, bool bParam1, bool bParam2)
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

bool func_31()
{
	return BitTest(Global_1964670.f_2, 11);
}

var func_32()
{
	return BitTest(Global_1964670.f_2, 10);
}

bool func_33()
{
	return BitTest(Global_1964670.f_2, 2);
}

bool func_34(var uParam0)
{
	return uParam0->f_1;
}

void func_35()
{
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_231.f_163))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_231.f_163))
		{
			if (!func_36())
			{
				func_541(1);
			}
			else
			{
				func_541(0);
			}
		}
		else
		{
			NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_231.f_163);
		}
	}
	else if (!func_36())
	{
		func_541(1);
	}
	else
	{
		func_541(0);
	}
}

int func_36()
{
	if (func_41())
	{
		return 1;
	}
	if (func_40())
	{
		return 1;
	}
	if (func_39() && func_37(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	return 0;
}

int func_37(bool bParam0)
{
	if (bParam0 != func_13())
	{
		if (func_26(bParam0, 1, 1))
		{
			if (Global_2658293[bParam0 /*468*/].f_325.f_8 != -1)
			{
				return func_38(Global_2658293[bParam0 /*468*/].f_325.f_8) == 17;
			}
		}
	}
	return 0;
}

int func_38(int iParam0)
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

bool func_39()
{
	return BitTest(Global_1964670.f_2, 5);
}

bool func_40()
{
	return BitTest(Global_1964670, 24);
}

bool func_41()
{
	return BitTest(Global_1964670, 16);
}

void func_42()
{
	int iVar0;
	
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
	HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
	PAD::DISABLE_CONTROL_ACTION(0, 199, true);
	PAD::DISABLE_CONTROL_ACTION(0, 200, true);
	func_100();
	func_98();
	func_91(1);
	if (!BitTest(Local_231.f_5, 1))
	{
		if (!func_90())
		{
			if (!func_57() && !func_56())
			{
				if ((func_55() || func_33()) || func_54())
				{
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
				}
			}
		}
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_231.f_163))
		{
			ENTITY::SET_ENTITY_HAS_GRAVITY(NETWORK::NET_TO_OBJ(Local_231.f_163), true);
		}
		if (AUDIO::HAS_SOUND_FINISHED(Local_231.f_36))
		{
			Local_231.f_36 = AUDIO::GET_SOUND_ID();
			AUDIO::PLAY_SOUND_FRONTEND(Local_231.f_36, "HUD_Static_Loop", Local_231.f_161, true);
		}
		if (!func_53())
		{
			PAD::SET_CONTROL_SHAKE(0, 300, 100);
			GRAPHICS::SET_TIMECYCLE_MODIFIER(func_52());
			MISC::SET_BIT(&(Local_231.f_6), false);
		}
		MISC::SET_BIT(&(Local_231.f_5), true);
	}
	else if (!func_34(&(Local_231.f_249)))
	{
		func_30(&(Local_231.f_249), 0, 0);
	}
	else
	{
		iVar0 = 1000;
		if (func_51())
		{
			iVar0 = 500;
		}
		else if (func_17() && func_50())
		{
			iVar0 = 150;
		}
		if (func_29(&(Local_231.f_249), iVar0, 0) || func_53())
		{
			if (Local_231.f_40 == -1)
			{
				if (AUDIO::HAS_SOUND_FINISHED(Local_231.f_40))
				{
					Local_231.f_40 = AUDIO::GET_SOUND_ID();
					AUDIO::PLAY_SOUND_FRONTEND(Local_231.f_40, "HUD_Disconnect", Local_231.f_161, true);
				}
			}
			func_425(1);
			func_424(7);
			if ((NETWORK::NETWORK_IS_ACTIVITY_SESSION() || func_47(0)) && (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("fm_mission_controller_2020")) != 0 || SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(-635282018) != 0))
			{
				func_45(1);
				func_44(0);
				func_43(0);
			}
		}
	}
}

void func_43(bool bParam0)
{
	if (bParam0)
	{
		if (!BitTest(Global_1964670.f_2, 10))
		{
			Global_1964670.f_2 = 0;
			MISC::SET_BIT(&(Global_1964670.f_2), 10);
		}
	}
	else if (BitTest(Global_1964670.f_2, 10))
	{
		MISC::CLEAR_BIT(&(Global_1964670.f_2), 10);
	}
}

void func_44(bool bParam0)
{
	if (bParam0)
	{
		if (!BitTest(Global_1964670.f_2, 11))
		{
			Global_1964670.f_2 = 0;
			MISC::SET_BIT(&(Global_1964670.f_2), 11);
		}
	}
	else if (BitTest(Global_1964670.f_2, 11))
	{
		MISC::CLEAR_BIT(&(Global_1964670.f_2), 11);
	}
}

void func_45(bool bParam0)
{
	if (bParam0)
	{
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(MISC::GET_HASH_KEY("AM_MP_DRONE")) > 0)
		{
			if (!func_46())
			{
				MISC::SET_BIT(&Global_1964670, false);
			}
		}
	}
	else if (func_46())
	{
		MISC::CLEAR_BIT(&Global_1964670, false);
	}
}

bool func_46()
{
	return BitTest(Global_1964670, 0);
}

int func_47(int iParam0)
{
	if (iParam0 && Global_1575066)
	{
		if (func_48())
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

int func_48()
{
	if (func_49())
	{
		return 1;
	}
	return Global_1575069;
	return 0;
}

int func_49()
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

bool func_50()
{
	return Global_2733190.f_389;
}

bool func_51()
{
	return BitTest(Global_1964670.f_2, 4);
}

char* func_52()
{
	if (func_17())
	{
		return "MissileOutOfRange";
	}
	return "RemixDrone";
}

bool func_53()
{
	return BitTest(Global_1964670, 20);
}

bool func_54()
{
	return BitTest(Global_1964670.f_2, 3);
}

bool func_55()
{
	return BitTest(Global_1964670, 11);
}

bool func_56()
{
	return Global_2709090;
}

int func_57()
{
	if ((func_89(PLAYER::PLAYER_ID(), 0) && Global_1579264 == 1) && func_58())
	{
		return 1;
	}
	return 0;
}

int func_58()
{
	char* sVar0;
	
	if ((Global_1579264 != -1 || Global_1579270 != -1) || Global_1579273 != -1)
	{
		sVar0 = "anim@scripted@submarine@ig28_submarine_turret_control@male@";
		if (func_81(PLAYER::PLAYER_PED_ID()))
		{
			sVar0 = "anim@scripted@submarine@ig28_submarine_turret_control@heeled@";
		}
		if ((((((((ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "enter", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "enter_left", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "exit", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "exit_left", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), sVar0, "enter_left", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), sVar0, "enter", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), sVar0, "exit", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), sVar0, "exit_left", 3)) || func_79(PLAYER::PLAYER_PED_ID(), joaat("script_task_go_straight_to_coord")))
		{
			return 0;
		}
		if (((((((((!ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "base", 3) && !ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "computer_enter", 3)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "computer_exit", 3)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "COMPUTER_idle", 3)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "COMPUTER_idle_control", 3)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "COMPUTER_enter_control", 3)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), sVar0, "base", 3)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), sVar0, "idle_a", 3)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), sVar0, "idle_b", 3)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), sVar0, "idle_c", 3))
		{
			return 0;
		}
		if (func_59())
		{
			return 0;
		}
	}
	return 1;
}

int func_59()
{
	bool bVar0;
	
	if (func_78(PLAYER::PLAYER_ID()))
	{
		bVar0 = func_77(PLAYER::PLAYER_ID());
		if (func_26(bVar0, 0, 1))
		{
			if ((((((func_12(bVar0) && func_38(func_76(bVar0)) == 4) && ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(bVar0))) && !PED::IS_PED_INJURED(PLAYER::GET_PLAYER_PED(bVar0))) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::GET_PLAYER_PED(bVar0), false)) && ENTITY::DOES_ENTITY_EXIST(PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(bVar0), false))) && func_75(PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(bVar0), false)))
			{
				return 1;
			}
			if (!func_74(Global_4718592.f_132931))
			{
				if (func_78(bVar0))
				{
					if (func_73(bVar0))
					{
						return 1;
					}
					else if (func_12(PLAYER::PLAYER_ID()) || func_72())
					{
						return 1;
					}
				}
			}
		}
	}
	if (func_71(8))
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
	if (func_70(PLAYER::PLAYER_ID()) && BitTest(Global_1575013, 12))
	{
		return 1;
	}
	if (func_69(PLAYER::PLAYER_ID()))
	{
		bVar0 = func_68(PLAYER::PLAYER_ID());
		if (func_26(bVar0, 0, 1))
		{
			if ((((((func_12(bVar0) && func_38(func_76(bVar0)) == 9) && ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(bVar0))) && !PED::IS_PED_INJURED(PLAYER::GET_PLAYER_PED(bVar0))) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::GET_PLAYER_PED(bVar0), false)) && ENTITY::DOES_ENTITY_EXIST(PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(bVar0), false))) && ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(bVar0), false)) == joaat("avenger"))
			{
				return 1;
			}
			if (func_67(bVar0))
			{
				return 1;
			}
			else if (func_66(bVar0))
			{
				return 1;
			}
			else if (func_12(PLAYER::PLAYER_ID()) || func_72())
			{
				return 1;
			}
		}
	}
	if (func_89(PLAYER::PLAYER_ID(), 0))
	{
		bVar0 = func_65(PLAYER::PLAYER_ID());
		if (func_26(bVar0, 0, 1))
		{
			if ((func_12(bVar0) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::GET_PLAYER_PED(bVar0), false)) && VEHICLE::IS_VEHICLE_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(bVar0), false), joaat("terbyte")))
			{
				return 1;
			}
			else if ((func_64(bVar0) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::GET_PLAYER_PED(bVar0), false)) && VEHICLE::IS_VEHICLE_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(bVar0), false), joaat("terbyte")))
			{
				return 1;
			}
			else if (func_63(bVar0))
			{
				return 1;
			}
			else if (func_62(bVar0))
			{
				return 1;
			}
			else if (func_12(PLAYER::PLAYER_ID()) || func_72())
			{
				return 1;
			}
		}
	}
	if (func_61(PLAYER::PLAYER_ID()))
	{
		if (PLAYER::PLAYER_ID() != func_13())
		{
			bVar0 = Global_2658293[PLAYER::PLAYER_ID() /*468*/].f_325.f_11;
			if (func_26(bVar0, 0, 1))
			{
				if (func_12(PLAYER::PLAYER_ID()) || func_72())
				{
					return 1;
				}
			}
		}
	}
	if (func_69(PLAYER::PLAYER_ID()) || func_70(PLAYER::PLAYER_ID()))
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
	if (func_60(3))
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

bool func_60(int iParam0)
{
	return Global_262145.f_4708[iParam0] == Global_4718592.f_132931;
}

int func_61(bool bParam0)
{
	if (bParam0 != func_13())
	{
		if (func_26(bParam0, 1, 1))
		{
			if (Global_2658293[bParam0 /*468*/].f_325.f_8 != -1 && Global_2658293[bParam0 /*468*/].f_325.f_11 != func_13())
			{
				return func_38(Global_2658293[bParam0 /*468*/].f_325.f_8) == 20;
			}
		}
	}
	return 0;
}

int func_62(bool bParam0)
{
	if (bParam0 != func_13())
	{
		return BitTest(Global_2658293[bParam0 /*468*/].f_325.f_7, 15);
	}
	return 0;
}

int func_63(bool bParam0)
{
	if (bParam0 != func_13())
	{
		return BitTest(Global_2658293[bParam0 /*468*/].f_325.f_3, 4);
	}
	return 0;
}

int func_64(bool bParam0)
{
	if (bParam0 != func_13())
	{
		return BitTest(Global_2658293[bParam0 /*468*/].f_325.f_7, 19);
	}
	return 0;
}

bool func_65(bool bParam0)
{
	if (bParam0 == func_13())
	{
		return bParam0;
	}
	return Global_2658293[bParam0 /*468*/].f_325.f_11;
}

int func_66(bool bParam0)
{
	if (bParam0 != func_13())
	{
		return BitTest(Global_2658293[bParam0 /*468*/].f_325.f_6, 16);
	}
	return 0;
}

int func_67(bool bParam0)
{
	if (bParam0 != func_13())
	{
		return BitTest(Global_2658293[bParam0 /*468*/].f_325.f_2, 6);
	}
	return 0;
}

bool func_68(bool bParam0)
{
	if (bParam0 == func_13())
	{
		return bParam0;
	}
	return Global_2658293[bParam0 /*468*/].f_325.f_11;
}

int func_69(bool bParam0)
{
	if (bParam0 != func_13())
	{
		if (func_26(bParam0, 1, 1))
		{
			if (Global_2658293[bParam0 /*468*/].f_325.f_8 != -1 && Global_2658293[bParam0 /*468*/].f_325.f_11 != func_13())
			{
				return func_38(Global_2658293[bParam0 /*468*/].f_325.f_8) == 8;
			}
		}
	}
	return 0;
}

int func_70(bool bParam0)
{
	if (bParam0 != func_13())
	{
		if (func_26(bParam0, 1, 1))
		{
			if (Global_2658293[bParam0 /*468*/].f_325.f_8 != -1)
			{
				return func_38(Global_2658293[bParam0 /*468*/].f_325.f_8) == 10;
			}
		}
	}
	return 0;
}

bool func_71(int iParam0)
{
	return Global_4718592.f_197292 >= iParam0;
}

var func_72()
{
	return BitTest(Global_1950702, 6);
}

int func_73(bool bParam0)
{
	if (bParam0 != func_13())
	{
		return BitTest(Global_2658293[bParam0 /*468*/].f_325, 6);
	}
	return 0;
}

bool func_74(int iParam0)
{
	return Global_262145.f_4699[4] == iParam0;
}

int func_75(int iParam0)
{
	if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("hauler2") || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("phantom3"))
	{
		return 1;
	}
	return 0;
}

int func_76(bool bParam0)
{
	if (bParam0 != func_13() && func_26(bParam0, 1, 1))
	{
		return Global_2658293[bParam0 /*468*/].f_325.f_18;
	}
	return -1;
}

bool func_77(bool bParam0)
{
	if (bParam0 == func_13())
	{
		return bParam0;
	}
	return Global_2658293[bParam0 /*468*/].f_325.f_11;
}

int func_78(bool bParam0)
{
	if (bParam0 != func_13())
	{
		if (func_26(bParam0, 1, 1))
		{
			if (Global_2658293[bParam0 /*468*/].f_325.f_8 != -1 && Global_2658293[bParam0 /*468*/].f_325.f_11 != func_13())
			{
				return func_38(Global_2658293[bParam0 /*468*/].f_325.f_8) == 5;
			}
		}
	}
	return 0;
}

int func_79(int iParam0, int iParam1)
{
	if (func_80(iParam0))
	{
		if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1) == 1 || TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_80(int iParam0)
{
	if (func_24(iParam0))
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_81(int iParam0)
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
		iVar1 = func_87(iParam0, 6);
		if (iVar1 >= 256)
		{
			iVar2 = func_83(iVar0, iVar1, 6, 4);
			iVar3 = func_82(iVar2);
		}
		if (((((((((((((iVar1 >= 0 && iVar1 <= 15) || (iVar1 >= 96 && iVar1 <= 111)) || (iVar1 >= 112 && iVar1 <= 127)) || (iVar1 >= 128 && iVar1 <= 143)) || (iVar1 >= 192 && iVar1 <= 207)) || (iVar1 >= 224 && iVar1 <= 239)) || iVar3 == 0) || iVar3 == 6) || iVar3 == 7) || iVar3 == 8) || iVar3 == 12) || iVar3 == 14) || (iVar2 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("high_heels"), 0)))
		{
			return 1;
		}
	}
	return 0;
}

int func_82(int iParam0)
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

int func_83(int iParam0, int iParam1, int iParam2, int iParam3)
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
		iVar17 = (iParam1 - func_86(iParam0));
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
		iVar36 = (iParam1 - func_84(iParam0, func_85(iParam2)));
		if (iVar36 < 0)
		{
			return -1;
		}
		if ((iParam0 == Global_80270.f_26[iParam2] && iParam1 == Global_80270[iParam2]) && Global_80270.f_13[iParam2] != 0)
		{
			return Global_80270.f_13[iParam2];
		}
		iVar37 = FILES::SETUP_SHOP_PED_APPAREL_QUERY_TU(iParam3, 11, -1, false, -1, func_85(iParam2));
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

int func_84(int iParam0, int iParam1)
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

int func_85(int iParam0)
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

int func_86(int iParam0)
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

int func_87(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (((iParam1 == 12 || iParam1 == 13) || iParam1 == 14) || PED::IS_PED_INJURED(iParam0))
	{
		return -99;
	}
	iVar0 = func_85(iParam1);
	iVar1 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, iVar0);
	iVar2 = PED::GET_PED_TEXTURE_VARIATION(iParam0, iVar0);
	return func_88(iParam0, iVar1, iVar2, iParam1);
}

int func_88(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = func_85(iParam3);
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

int func_89(bool bParam0, bool bParam1)
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
	if (bParam0 != func_13())
	{
		if (func_26(bParam0, 1, 1))
		{
			if (Global_2658293[bParam0 /*468*/].f_325.f_8 != -1 && Global_2658293[bParam0 /*468*/].f_325.f_11 != func_13())
			{
				return func_38(Global_2658293[bParam0 /*468*/].f_325.f_8) == 12;
			}
		}
	}
	return 0;
}

bool func_90()
{
	return BitTest(Global_1964670, 28);
}

void func_91(int iParam0)
{
	if (func_97())
	{
		return;
	}
	if (!Global_21649.f_1 == 1)
	{
		if (func_96(0))
		{
			func_92(iParam0);
		}
		MISC::SET_BIT(&Global_9503, 2);
	}
}

void func_92(int iParam0)
{
	if (func_97())
	{
		return;
	}
	if (Global_21882)
	{
		if (func_95())
		{
			func_94(1, 1);
		}
		else
		{
			func_94(0, 0);
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
	if (!func_93())
	{
		Global_21649.f_1 = 3;
	}
}

int func_93()
{
	if (Global_21649.f_1 == 1 || Global_21649.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_94(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_96(0))
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

bool func_95()
{
	return BitTest(Global_1964670, 5);
}

int func_96(int iParam0)
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

bool func_97()
{
	return BitTest(Global_1964670, 19);
}

void func_98()
{
	RECORDING::REPLAY_PREVENT_RECORDING_THIS_FRAME();
	func_99();
}

void func_99()
{
	Global_24430.f_134 = 1;
}

void func_100()
{
	Global_1574849 = 1;
}

void func_101()
{
	if (func_39())
	{
		if (func_40())
		{
			if (func_24(PLAYER::PLAYER_PED_ID()))
			{
				PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 124, true);
			}
		}
	}
}

void func_102()
{
	char* sVar0;
	
	if (!func_103())
	{
		return;
	}
	sVar0 = "scr_xs_props";
	STREAMING::REQUEST_NAMED_PTFX_ASSET(sVar0);
	if (STREAMING::HAS_NAMED_PTFX_ASSET_LOADED(sVar0))
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_231.f_163))
		{
			if (!GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(Local_231.f_178[PLAYER::PLAYER_ID()]))
			{
				GRAPHICS::USE_PARTICLE_FX_ASSET(sVar0);
				if (func_51())
				{
					Local_231.f_178[PLAYER::PLAYER_ID()] = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_xs_guided_missile_trail", NETWORK::NET_TO_OBJ(Local_231.f_163), 0f, 0f, 0f, 0f, 0f, 0f, 1f, false, false, false);
				}
				else
				{
					Local_231.f_178[PLAYER::PLAYER_ID()] = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_xs_guided_missile_trail", NETWORK::NET_TO_OBJ(Local_231.f_163), 0f, 0.25f, 0f, 0f, 0f, 0f, 3f, false, false, false);
				}
			}
		}
	}
}

int func_103()
{
	if (func_51())
	{
		return 1;
	}
	if (func_17())
	{
		return 1;
	}
	return 0;
}

void func_104()
{
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_231.f_163))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Local_231.f_165))
		{
			STREAMING::REQUEST_MODEL(func_119());
			if (STREAMING::HAS_MODEL_LOADED(func_119()))
			{
				if (!BitTest(Local_231.f_5, 6))
				{
					if (func_113(NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(false, 0) + 1, 0, 1))
					{
						NETWORK::RESERVE_NETWORK_MISSION_PEDS(NETWORK::GET_NUM_CREATED_MISSION_PEDS(false) + 1);
						MISC::SET_BIT(&(Local_231.f_5), 6);
					}
				}
				else if (NETWORK::CAN_REGISTER_MISSION_PEDS(1))
				{
					Local_231.f_165 = PED::CREATE_PED(26, func_119(), Local_231.f_154, ENTITY::GET_ENTITY_HEADING(NETWORK::NET_TO_OBJ(Local_231.f_163)), false, false);
					ENTITY::SET_ENTITY_INVINCIBLE(Local_231.f_165, true, 0);
					ENTITY::SET_ENTITY_VISIBLE(Local_231.f_165, false, false);
					ENTITY::SET_ENTITY_HAS_GRAVITY(Local_231.f_165, false);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_231.f_165, true);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_119());
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
		else if (func_24(Local_231.f_165))
		{
			if (ENTITY::IS_ENTITY_VISIBLE(Local_231.f_165))
			{
				ENTITY::SET_ENTITY_VISIBLE(Local_231.f_165, false, false);
			}
			if (!func_110(PLAYER::PLAYER_ID()) && !func_107(PLAYER::PLAYER_ID()))
			{
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
				{
					func_106(Global_1837398);
				}
			}
			else if ((Global_1964670.f_7 == -1 || Global_1964670.f_7 == 0) || Global_1964670.f_7 == Global_1837387)
			{
				func_106(Global_1837398);
			}
			if (PED::GET_PED_RELATIONSHIP_GROUP_DEFAULT_HASH(Local_231.f_165) != func_105())
			{
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_231.f_165, func_105());
			}
			if (!ENTITY::IS_ENTITY_ATTACHED(Local_231.f_165))
			{
				ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_231.f_165, NETWORK::NET_TO_OBJ(Local_231.f_163), -1, 0f, 0f, -0.25f, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
				ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(Local_231.f_165, false, false);
			}
		}
	}
}

int func_105()
{
	if (Global_1964670.f_7 != -1 && Global_1964670.f_7 != 0)
	{
		return Global_1964670.f_7;
	}
	return Global_1837398;
}

void func_106(int iParam0)
{
	if (Global_1964670.f_7 != iParam0)
	{
		Global_1964670.f_7 = iParam0;
	}
}

int func_107(bool bParam0)
{
	if (func_109(bParam0) == 236 || func_109(bParam0) == 150)
	{
		return func_108(bParam0);
	}
	return 0;
}

int func_108(var uParam0)
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 != -1)
	{
		return BitTest(Global_1892925[iVar0 /*615*/].f_1, 7);
	}
	return 0;
}

int func_109(var uParam0)
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 != -1)
	{
		return Global_1892925[iVar0 /*615*/];
	}
	return -1;
}

int func_110(bool bParam0)
{
	if (bParam0 == PLAYER::PLAYER_ID())
	{
		if (func_112(8))
		{
			return 1;
		}
		if (Global_2733190.f_5975.f_1 > 0)
		{
			return 1;
		}
	}
	return func_111(bParam0, 20);
}

var func_111(int iParam0, int iParam1)
{
	return BitTest(Global_1892925[iParam0 /*615*/].f_10.f_4, iParam1);
}

bool func_112(int iParam0)
{
	return BitTest(Global_2733190.f_5964, iParam0);
}

bool func_113(int iParam0, bool bParam1, bool bParam2)
{
	return func_114(2, iParam0, 1, bParam1, bParam2);
}

int func_114(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (!BitTest(Global_1690407, 0))
	{
		return 0;
	}
	if ((bParam2 && !bParam3) && iParam1 <= (func_118(iParam0) - func_117(iParam0, 0)))
	{
		return 1;
	}
	else
	{
		if (bParam3)
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_117(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_118(iParam0) - func_116(iParam0));
		}
		else
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_117(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_118(iParam0) - func_117(iParam0, 1));
		}
		if (!bParam4 && Global_1845298[PLAYER::PLAYER_ID() /*881*/] != 3)
		{
			iVar1 = (iVar1 - func_115(iParam0));
		}
		if (iVar0 < iVar1)
		{
			return 1;
		}
	}
	return 0;
}

int func_115(int iParam0)
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

int func_116(int iParam0)
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

int func_117(int iParam0, bool bParam1)
{
	bool bVar0;
	
	bVar0 = PLAYER::PLAYER_ID();
	switch (iParam0)
	{
		case 0:
			if (!NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
			{
				return Global_2658293[bVar0 /*468*/].f_223;
			}
			else
			{
				return NETWORK::GET_NUM_RESERVED_MISSION_PEDS(!bParam1, 0);
			}
			break;
		
		case 1:
			if (!NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
			{
				return Global_2658293[bVar0 /*468*/].f_224;
			}
			else
			{
				return NETWORK::GET_NUM_RESERVED_MISSION_VEHICLES(!bParam1, 0);
			}
			break;
		
		case 2:
			if (!NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
			{
				return Global_2658293[bVar0 /*468*/].f_225;
			}
			else
			{
				return NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(!bParam1, 0);
			}
			break;
	}
	return 0;
}

int func_118(int iParam0)
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

int func_119()
{
	return joaat("g_m_m_chigoon_01");
}

void func_120()
{
	if (func_196())
	{
		return;
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_231.f_163) && !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_OBJ(Local_231.f_163), false))
	{
		if (CAM::DOES_CAM_EXIST(Local_231.f_173) && CAM::IS_CAM_RENDERING(Local_231.f_173))
		{
			if (!func_103())
			{
				func_186();
				func_152();
			}
			else
			{
				func_133();
				func_123();
			}
			RECORDING::REPLAY_DISABLE_CAMERA_MOVEMENT_THIS_FRAME();
			func_122(1);
			func_121(2);
		}
	}
}

void func_121(int iParam0)
{
	Global_1576389 = iParam0;
}

void func_122(int iParam0)
{
	Global_1679116.f_1163 = iParam0;
}

void func_123()
{
	int iVar0;
	
	if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Local_231.f_174))
	{
		if (func_17())
		{
			Local_231.f_174 = func_132();
		}
		else
		{
			Local_231.f_174 = func_131();
		}
		return;
	}
	iVar0 = func_25();
	if (iVar0 < 0 || !func_24(iVar0))
	{
		return;
	}
	if (func_17())
	{
		func_127();
	}
	func_126(Local_231.f_174, 0);
	func_125(Local_231.f_174, 3, 3, 3);
	func_124(Local_231.f_174, 0f, 0f, 0f, 0f, (ENTITY::GET_ENTITY_HEADING(iVar0) + 180f));
	GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(1);
	GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(Local_231.f_174, 255, 255, 255, 0, 0);
}

void func_124(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5)
{
	fParam2 = ((fParam2 - fParam3) / (fParam4 - fParam3));
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_ALT_FOV_HEADING");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fParam2);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fParam5);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_125(int iParam0, int iParam1, int iParam2, int iParam3)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_WEAPON_VALUES");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_126(int iParam0, bool bParam1)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_ZOOM_VISIBLE");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bParam1);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_127()
{
	int iVar0;
	float fVar1;
	
	iVar0 = 1;
	if (func_17())
	{
		iVar0 = 10;
	}
	fVar1 = Local_231.f_124;
	if (fVar1 >= (func_130() - IntToFloat((50 * iVar0))))
	{
		if (AUDIO::HAS_SOUND_FINISHED(Local_231.f_39))
		{
			Local_231.f_39 = AUDIO::GET_SOUND_ID();
			AUDIO::PLAY_SOUND_FRONTEND(Local_231.f_39, "Out_Of_Bounds_Alarm_Loop", Local_231.f_161, true);
		}
		if (fVar1 >= (func_130() - IntToFloat((50 * iVar0))) && fVar1 < (func_130() - IntToFloat((45 * iVar0))))
		{
			func_129("SET_WARNING_IS_VISIBLE", 1);
			func_128(0.1f);
		}
		else if (fVar1 >= (func_130() - IntToFloat((45 * iVar0))) && fVar1 < (func_130() - IntToFloat((40 * iVar0))))
		{
			func_129("SET_WARNING_IS_VISIBLE", 1);
			func_128(0.2f);
		}
		else if (fVar1 >= (func_130() - IntToFloat((40 * iVar0))) && fVar1 < (func_130() - IntToFloat((35 * iVar0))))
		{
			func_129("SET_WARNING_IS_VISIBLE", 1);
			func_128(0.3f);
		}
		else if (fVar1 >= (func_130() - IntToFloat((35 * iVar0))) && fVar1 < (func_130() - IntToFloat((30 * iVar0))))
		{
			func_129("SET_WARNING_IS_VISIBLE", 1);
			func_128(0.4f);
		}
		else if (fVar1 >= (func_130() - IntToFloat((30 * iVar0))) && fVar1 < (func_130() - IntToFloat((25 * iVar0))))
		{
			func_129("SET_WARNING_IS_VISIBLE", 1);
			func_128(0.5f);
		}
		else if (fVar1 >= (func_130() - IntToFloat((25 * iVar0))) && fVar1 < (func_130() - IntToFloat((20 * iVar0))))
		{
			func_129("SET_WARNING_IS_VISIBLE", 1);
			func_128(0.6f);
		}
		else if (fVar1 >= (func_130() - IntToFloat((20 * iVar0))) && fVar1 < (func_130() - IntToFloat((15 * iVar0))))
		{
			func_129("SET_WARNING_IS_VISIBLE", 1);
			func_128(0.7f);
		}
		else if (fVar1 >= (func_130() - IntToFloat((15 * iVar0))) && fVar1 < (func_130() - IntToFloat((10 * iVar0))))
		{
			func_129("SET_WARNING_IS_VISIBLE", 1);
			func_128(0.8f);
		}
		else if (fVar1 >= (func_130() - IntToFloat((10 * iVar0))) && fVar1 < (func_130() - IntToFloat((5 * iVar0))))
		{
			func_129("SET_WARNING_IS_VISIBLE", 1);
			func_128(0.9f);
		}
		else if (fVar1 >= (func_130() - IntToFloat((5 * iVar0))) && fVar1 < func_130())
		{
			func_129("SET_WARNING_IS_VISIBLE", 1);
			func_128(1f);
		}
	}
	else
	{
		func_129("SET_WARNING_IS_VISIBLE", 0);
		if (!AUDIO::HAS_SOUND_FINISHED(Local_231.f_39))
		{
			AUDIO::STOP_SOUND(Local_231.f_39);
			AUDIO::RELEASE_SOUND_ID(Local_231.f_39);
			Local_231.f_39 = -1;
		}
	}
}

void func_128(float fParam0)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Local_231.f_174, "SET_WARNING_FLASH_RATE");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fParam0);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_129(char* sParam0, bool bParam1)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Local_231.f_174, sParam0);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bParam1);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

float func_130()
{
	if (Global_1964670.f_13 == 0f)
	{
		return Global_262145.f_24331;
	}
	return Global_1964670.f_13;
}

int func_131()
{
	char* sVar0;
	
	sVar0 = "";
	switch (Global_4718592.f_189798)
	{
		case 1:
			sVar0 = "ARENA_GUN_CAM_APOCALYPSE";
			break;
		
		case 2:
			sVar0 = "ARENA_GUN_CAM_SCIFI";
			break;
		
		case 3:
			sVar0 = "ARENA_GUN_CAM_CONSUMER";
			break;
		
		default:
			sVar0 = "INVALID_THEME";
			break;
	}
	return GRAPHICS::REQUEST_SCALEFORM_MOVIE(sVar0);
}

int func_132()
{
	char* sVar0;
	
	sVar0 = "SUBMARINE_MISSILES";
	return GRAPHICS::REQUEST_SCALEFORM_MOVIE(sVar0);
}

void func_133()
{
	if (func_17())
	{
		if (!func_151())
		{
			return;
		}
	}
	if (!BitTest(Local_231.f_5, 16))
	{
		if (func_149(0, -1, 0))
		{
			func_148(-1);
			func_147(20, "DRONE_SPACE", -1);
			func_147(21, "DRONE_POSITION", -1);
			if (func_51())
			{
				if (!PAD::IS_USING_KEYBOARD_AND_MOUSE(0))
				{
					func_146(208, "DRONE_SPEEDU", -1, 0);
					func_146(207, "DRONE_SLOWD", -1, 0);
				}
				else
				{
					func_146(209, "DRONE_SPEEDU", -1, 0);
					func_146(210, "DRONE_SLOWD", -1, 0);
				}
			}
			func_146(75, "MOVE_DRONE_RE", -1, 0);
			MISC::SET_BIT(&(Local_231.f_5), 16);
		}
	}
	else
	{
		func_134(0, -1, 0, 1, 0, 0, 1, 1, 0);
	}
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(0))
	{
		if (!BitTest(Local_231.f_5, 17))
		{
			MISC::SET_BIT(&(Local_231.f_5), 17);
			MISC::CLEAR_BIT(&(Local_231.f_5), 16);
		}
	}
	else if (BitTest(Local_231.f_5, 17))
	{
		MISC::CLEAR_BIT(&(Local_231.f_5), 17);
		MISC::CLEAR_BIT(&(Local_231.f_5), 16);
	}
}

void func_134(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (!func_145(&iVar0, 0, iParam1))
	{
		return;
	}
	iParam0 = iParam0;
	if (iParam3 && !func_142(bParam4, bParam8))
	{
		return;
	}
	if (func_140())
	{
		return;
	}
	if (NETWORK::NETWORK_TEXT_CHAT_IS_TYPING())
	{
		return;
	}
	if (iParam7 == 0)
	{
		if (func_137(PLAYER::PLAYER_ID(), 0))
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
					func_136(&(Global_24569.f_5328[iVar1 /*16*/]));
					iVar2 = iVar1 + 1;
					while (iVar2 < 14 && MISC::GET_HASH_KEY(&(Global_24569.f_5553[iVar2 /*4*/])) == MISC::GET_HASH_KEY("PREV"))
					{
						func_136(&(Global_24569.f_5328[iVar2 /*16*/]));
						iVar2++;
					}
					if (Global_24569.f_5610[iVar1] == -1)
					{
						func_135(&(Global_24569.f_5553[iVar1 /*4*/]));
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
				func_136(&Global_4521274);
				if (Global_4521274.f_20 == -1)
				{
					func_135(&(Global_4521274.f_16));
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

void func_135(char* sParam0)
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

void func_136(char* sParam0)
{
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_PLAYER_NAME_STRING(sParam0);
}

bool func_137(bool bParam0, int iParam1)
{
	bool bVar0;
	
	if (!func_9(bParam0))
	{
		return 0;
	}
	if (bParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_138(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1845298[bParam0 /*881*/].f_198 == 8;
	}
	if (iParam1 == 1)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(bParam0))
		{
			bVar0 = PLAYER::GET_PLAYER_TEAM(bParam0) == 8;
		}
	}
	return bVar0;
}

int func_138(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_139();
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

int func_139()
{
	return Global_1574928;
}

int func_140()
{
	struct<3> Var0;
	
	if (Global_21649.f_1 > 3)
	{
		return 1;
	}
	if (func_141())
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

int func_141()
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_142(bool bParam0, bool bParam1)
{
	if (Global_2673273.f_1762.f_701 != 0)
	{
		return 1;
	}
	if ((((((((!CAM::IS_SCREEN_FADED_IN() || (func_144(8, -1) && func_143() != 65)) || (HUD::GET_PAUSE_MENU_STATE() != 0 && !bParam1)) || (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && !bParam0)) || NETWORK::IS_COMMERCE_STORE_OPEN()) || Global_80598) || Global_24569.f_9243) || HUD::IS_WARNING_MESSAGE_ACTIVE()) || Global_102538.f_1514)
	{
		return 0;
	}
	return 1;
}

int func_143()
{
	return Global_1575022;
}

var func_144(int iParam0, int iParam1)
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

int func_145(var uParam0, bool bParam1, int iParam2)
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

void func_146(int iParam0, char* sParam1, int iParam2, bool bParam3)
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

void func_147(int iParam0, char* sParam1, int iParam2)
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

void func_148(int iParam0)
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
		if (!func_145(&iVar1, 0, iParam0))
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

bool func_149(char* sParam0, int iParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	if (!func_145(&iVar0, 1, iParam1))
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
	bVar2 = func_150(&(Global_24569.f_6263[iVar0 /*10*/]));
	if (!bVar1 || !bVar2)
	{
	}
	return (bVar1 && bVar2);
}

bool func_150(var uParam0)
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

bool func_151()
{
	return BitTest(Local_231.f_6, 6);
}

void func_152()
{
	if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Local_231.f_174))
	{
		Local_231.f_174 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("DRONE_CAM");
		return;
	}
	if ((func_54() || func_97()) || func_184(0))
	{
		func_129("SET_DETONATE_METER_IS_VISIBLE", 0);
	}
	else
	{
		func_129("SET_DETONATE_METER_IS_VISIBLE", 1);
	}
	if ((func_54() || func_97()) || func_33())
	{
		func_129("SET_SHOCK_METER_IS_VISIBLE", 0);
	}
	else
	{
		func_129("SET_SHOCK_METER_IS_VISIBLE", 1);
	}
	if (func_31())
	{
		func_129("SET_MG_METER_IS_VISIBLE", 1);
	}
	else
	{
		func_129("SET_MG_METER_IS_VISIBLE", 0);
	}
	if (func_33())
	{
		func_129("SET_EMP_METER_IS_VISIBLE", 1);
	}
	else
	{
		func_129("SET_EMP_METER_IS_VISIBLE", 0);
	}
	if (!func_54() && !func_97())
	{
		func_129("SET_RETICLE_IS_VISIBLE", 1);
	}
	else
	{
		func_129("SET_RETICLE_IS_VISIBLE", 0);
	}
	func_129("SET_HEADING_METER_IS_VISIBLE", 1);
	func_129("SET_ZOOM_METER_IS_VISIBLE", 1);
	if (((!func_54() && !func_97()) && !func_33()) && func_183())
	{
		func_129("SET_BOOST_METER_IS_VISIBLE", 1);
	}
	else
	{
		func_129("SET_BOOST_METER_IS_VISIBLE", 0);
	}
	if (func_182())
	{
		func_129("SET_TRANQUILIZE_METER_IS_VISIBLE", 1);
	}
	else
	{
		func_129("SET_TRANQUILIZE_METER_IS_VISIBLE", 0);
	}
	func_129("SET_MISSILE_METER_IS_VISIBLE", 0);
	func_129("SET_BOTTOM_LEFT_CORNER_IS_VISIBLE", 0);
	if (func_21(PLAYER::PLAYER_ID()) == 240)
	{
		if (Local_231.f_124 >= (func_130() - 50f) || Local_231.f_125 >= IntToFloat((Global_262145.f_24330 - 50)))
		{
			func_129("SET_SOUND_WAVE_IS_VISIBLE", 0);
			func_181();
			if (BitTest(Local_231.f_5, 13))
			{
				MISC::CLEAR_BIT(&(Local_231.f_5), 13);
			}
		}
		else
		{
			func_177(func_178());
			if (!BitTest(Local_231.f_5, 13))
			{
				func_129("SET_SOUND_WAVE_IS_VISIBLE", 1);
				MISC::SET_BIT(&(Local_231.f_5), 13);
			}
		}
	}
	else
	{
		func_129("SET_SOUND_WAVE_IS_VISIBLE", 0);
		func_181();
	}
	func_129("SET_INFO_LIST_IS_VISIBLE", 0);
	if (!func_54() && !func_97())
	{
		if (!func_33())
		{
			func_176(Local_231.f_18);
		}
		else
		{
			func_175(Local_231.f_18);
		}
		if (!func_184(0))
		{
			func_174(Local_231.f_19);
		}
	}
	if (func_182())
	{
		func_173(Local_231.f_24);
	}
	if (func_172() > 0f)
	{
		func_170();
	}
	if (func_183())
	{
		func_169(Local_231.f_20);
	}
	func_168(0, "DRONE_ZOOM_1");
	func_168(1, "");
	func_168(2, "DRONE_ZOOM_2");
	func_168(3, "");
	func_168(4, "DRONE_ZOOM_3");
	func_166();
	func_164();
	func_162();
	func_161(SYSTEM::ROUND((ENTITY::GET_ENTITY_HEADING(NETWORK::NET_TO_OBJ(Local_231.f_163)) + 180f)));
	if (func_21(PLAYER::PLAYER_ID()) == 240)
	{
		func_160(func_178());
	}
	if (func_159())
	{
		func_154();
	}
	else if (func_33() || func_54())
	{
		func_153();
	}
	else if (func_40())
	{
		func_127();
	}
	GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(1);
	GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(Local_231.f_174, 255, 255, 255, 0, 0);
}

void func_153()
{
	if (Local_231.f_154.f_2 >= (func_130() - 20f))
	{
		if (AUDIO::HAS_SOUND_FINISHED(Local_231.f_39))
		{
			Local_231.f_39 = AUDIO::GET_SOUND_ID();
			AUDIO::PLAY_SOUND_FRONTEND(Local_231.f_39, "Out_Of_Bounds_Alarm_Loop", Local_231.f_161, true);
		}
		if (Local_231.f_154.f_2 >= (func_130() - 20f) && Local_231.f_154.f_2 < (func_130() - 16f))
		{
			func_129("SET_WARNING_IS_VISIBLE", 1);
			func_128(0.1f);
		}
		else if (Local_231.f_154.f_2 >= (func_130() - 16f) && Local_231.f_154.f_2 < (func_130() - 13f))
		{
			func_129("SET_WARNING_IS_VISIBLE", 1);
			func_128(0.2f);
		}
		else if (Local_231.f_154.f_2 >= (func_130() - 13f) && Local_231.f_154.f_2 < (func_130() - 10f))
		{
			func_129("SET_WARNING_IS_VISIBLE", 1);
			func_128(0.3f);
		}
		else if (Local_231.f_154.f_2 >= (func_130() - 10f) && Local_231.f_154.f_2 < (func_130() - 8f))
		{
			func_129("SET_WARNING_IS_VISIBLE", 1);
			func_128(0.4f);
		}
		else if (Local_231.f_154.f_2 >= (func_130() - 8f) && Local_231.f_154.f_2 < (func_130() - 6f))
		{
			func_129("SET_WARNING_IS_VISIBLE", 1);
			func_128(0.5f);
		}
		else if (Local_231.f_154.f_2 >= (func_130() - 6f) && Local_231.f_154.f_2 < (func_130() - 4f))
		{
			func_129("SET_WARNING_IS_VISIBLE", 1);
			func_128(0.6f);
		}
		else if (Local_231.f_154.f_2 >= (func_130() - 4f) && Local_231.f_154.f_2 < (func_130() - 3f))
		{
			func_129("SET_WARNING_IS_VISIBLE", 1);
			func_128(0.7f);
		}
		else if (Local_231.f_154.f_2 >= (func_130() - 3f) && Local_231.f_154.f_2 < (func_130() - 2f))
		{
			func_129("SET_WARNING_IS_VISIBLE", 1);
			func_128(0.8f);
		}
		else if (Local_231.f_154.f_2 >= (func_130() - 2f) && Local_231.f_154.f_2 < (func_130() - 1f))
		{
			func_129("SET_WARNING_IS_VISIBLE", 1);
			func_128(0.9f);
		}
		else if (Local_231.f_154.f_2 >= (func_130() - 1f) && Local_231.f_154.f_2 < func_130())
		{
			func_129("SET_WARNING_IS_VISIBLE", 1);
			func_128(1f);
		}
	}
	else
	{
		func_129("SET_WARNING_IS_VISIBLE", 0);
		if (!AUDIO::HAS_SOUND_FINISHED(Local_231.f_39))
		{
			AUDIO::STOP_SOUND(Local_231.f_39);
			AUDIO::RELEASE_SOUND_ID(Local_231.f_39);
			Local_231.f_39 = -1;
		}
	}
}

void func_154()
{
	if (Local_231.f_124 >= (func_130() - 50f) || Local_231.f_125 >= IntToFloat((Global_262145.f_24330 - 50)))
	{
		func_155();
		if (AUDIO::HAS_SOUND_FINISHED(Local_231.f_39))
		{
			Local_231.f_39 = AUDIO::GET_SOUND_ID();
			AUDIO::PLAY_SOUND_FRONTEND(Local_231.f_39, "Out_Of_Bounds_Alarm_Loop", Local_231.f_161, true);
		}
		if ((Local_231.f_124 >= (func_130() - 50f) && Local_231.f_124 < (func_130() - 45f)) || (Local_231.f_125 >= IntToFloat((Global_262145.f_24330 - 50)) && Local_231.f_125 < IntToFloat((Global_262145.f_24330 - 45))))
		{
			func_129("SET_WARNING_IS_VISIBLE", 1);
			func_128(0.1f);
		}
		else if ((Local_231.f_124 >= (func_130() - 45f) && Local_231.f_124 < (func_130() - 40f)) || (Local_231.f_125 >= IntToFloat((Global_262145.f_24330 - 45)) && Local_231.f_125 < IntToFloat((Global_262145.f_24330 - 40))))
		{
			func_129("SET_WARNING_IS_VISIBLE", 1);
			func_128(0.2f);
		}
		else if ((Local_231.f_124 >= (func_130() - 40f) && Local_231.f_124 < (func_130() - 35f)) || (Local_231.f_125 >= IntToFloat((Global_262145.f_24330 - 40)) && Local_231.f_125 < IntToFloat((Global_262145.f_24330 - 35))))
		{
			func_129("SET_WARNING_IS_VISIBLE", 1);
			func_128(0.3f);
		}
		else if ((Local_231.f_124 >= (func_130() - 35f) && Local_231.f_124 < (func_130() - 30f)) || (Local_231.f_125 >= IntToFloat((Global_262145.f_24330 - 35)) && Local_231.f_125 < IntToFloat((Global_262145.f_24330 - 30))))
		{
			func_129("SET_WARNING_IS_VISIBLE", 1);
			func_128(0.4f);
		}
		else if ((Local_231.f_124 >= (func_130() - 30f) && Local_231.f_124 < (func_130() - 25f)) || (Local_231.f_125 >= IntToFloat((Global_262145.f_24330 - 30)) && Local_231.f_125 < IntToFloat((Global_262145.f_24330 - 25))))
		{
			func_129("SET_WARNING_IS_VISIBLE", 1);
			func_128(0.5f);
		}
		else if ((Local_231.f_124 >= (func_130() - 25f) && Local_231.f_124 < (func_130() - 20f)) || (Local_231.f_125 >= IntToFloat((Global_262145.f_24330 - 25)) && Local_231.f_125 < IntToFloat((Global_262145.f_24330 - 20))))
		{
			func_129("SET_WARNING_IS_VISIBLE", 1);
			func_128(0.6f);
		}
		else if ((Local_231.f_124 >= (func_130() - 20f) && Local_231.f_124 < (func_130() - 15f)) || (Local_231.f_125 >= IntToFloat((Global_262145.f_24330 - 20)) && Local_231.f_125 < IntToFloat((Global_262145.f_24330 - 15))))
		{
			func_129("SET_WARNING_IS_VISIBLE", 1);
			func_128(0.7f);
		}
		else if ((Local_231.f_124 >= (func_130() - 15f) && Local_231.f_124 < (func_130() - 10f)) || (Local_231.f_125 >= IntToFloat((Global_262145.f_24330 - 15)) && Local_231.f_125 < IntToFloat((Global_262145.f_24330 - 10))))
		{
			func_129("SET_WARNING_IS_VISIBLE", 1);
			func_128(0.8f);
		}
		else if ((Local_231.f_124 >= (func_130() - 10f) && Local_231.f_124 < (func_130() - 5f)) || (Local_231.f_125 >= IntToFloat((Global_262145.f_24330 - 10)) && Local_231.f_125 < IntToFloat((Global_262145.f_24330 - 5))))
		{
			func_129("SET_WARNING_IS_VISIBLE", 1);
			func_128(0.9f);
		}
		else if ((Local_231.f_124 >= (func_130() - 5f) && Local_231.f_124 < func_130()) || (Local_231.f_125 >= IntToFloat((Global_262145.f_24330 - 5)) && Local_231.f_125 < IntToFloat(Global_262145.f_24330)))
		{
			func_129("SET_WARNING_IS_VISIBLE", 1);
			func_128(1f);
		}
	}
	else
	{
		func_129("SET_WARNING_IS_VISIBLE", 0);
		if (!AUDIO::HAS_SOUND_FINISHED(Local_231.f_39))
		{
			AUDIO::STOP_SOUND(Local_231.f_39);
			AUDIO::RELEASE_SOUND_ID(Local_231.f_39);
			Local_231.f_39 = -1;
		}
	}
}

void func_155()
{
	int iVar0;
	
	if (CAM::IS_SCREEN_FADED_IN() && !BitTest(Global_1950702.f_3, 15))
	{
		if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
		{
			iVar0 = func_158(22045, -1);
			if (iVar0 < 4)
			{
				func_157("HACK_DRONE_DIS", -1);
				iVar0++;
				func_156(22045, iVar0, -1);
				MISC::SET_BIT(&(Global_1950702.f_3), 15);
			}
		}
	}
}

void func_156(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == -1)
	{
		iParam2 = func_139();
	}
	if (iParam1 < 0)
	{
		iParam1 = 255;
	}
	STATS::SET_PACKED_STAT_INT_CODE(iParam0, iParam1, iParam2);
}

void func_157(char* sParam0, int iParam1)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam1);
}

int func_158(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = func_139();
	}
	return STATS::GET_PACKED_STAT_INT_CODE(iParam0, iParam1);
}

bool func_159()
{
	return BitTest(Global_1964670.f_2, 1);
}

void func_160(float fParam0)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Local_231.f_174, "ATTENUATE_SOUND_WAVE");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fParam0);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_161(int iParam0)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Local_231.f_174, "SET_HEADING");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam0);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_162()
{
	if (func_33())
	{
		if (BitTest(Local_231.f_5, 11) && !Local_231.f_160)
		{
			func_163(1);
		}
		else
		{
			func_163(0);
		}
	}
	else if ((BitTest(Local_231.f_5, 11) || BitTest(Local_231.f_5, 23)) || BitTest(Local_231.f_6, 7))
	{
		func_163(1);
	}
	else
	{
		func_163(0);
	}
}

void func_163(bool bParam0)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Local_231.f_174, "SET_RETICLE_ON_TARGET");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bParam0);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_164()
{
	if (BitTest(Local_231.f_5, 4) || (BitTest(Local_231.f_5, 3) && func_33()))
	{
		if (Local_231.f_18 == 100)
		{
			func_165(1);
		}
		else if (Local_231.f_18 != 0 && Local_231.f_18 != 100)
		{
			func_165(2);
		}
	}
	else
	{
		func_165(0);
	}
}

void func_165(int iParam0)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Local_231.f_174, "SET_RETICLE_STATE");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam0);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_166()
{
	switch (Local_231.f_27)
	{
		case 0:
			func_167(0);
			break;
		
		case 1:
			func_167(2);
			break;
		
		case 2:
			func_167(4);
			break;
	}
}

void func_167(int iParam0)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Local_231.f_174, "SET_ZOOM");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam0);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_168(int iParam0, char* sParam1)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Local_231.f_174, "SET_ZOOM_LABEL");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam0);
	func_135(sParam1);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_169(int iParam0)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Local_231.f_174, "SET_BOOST_PERCENTAGE");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam0);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_170()
{
	int iVar0;
	
	if (func_171() <= 0f)
	{
		iVar0 = Local_231.f_25;
	}
	else
	{
		iVar0 = SYSTEM::ROUND(((Global_1964670.f_10 / Global_1964670.f_11) * 100f));
	}
	iVar0 = (100 - iVar0);
	if (iVar0 <= 0)
	{
		iVar0 = 100;
	}
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Local_231.f_174, "SET_MG_PERCENTAGE");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

float func_171()
{
	return Global_1964670.f_10;
}

float func_172()
{
	return Global_1964670.f_11;
}

void func_173(int iParam0)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Local_231.f_174, "SET_TRANQUILIZE_PERCENTAGE");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam0);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_174(int iParam0)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Local_231.f_174, "SET_DETONATE_PERCENTAGE");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam0);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_175(int iParam0)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Local_231.f_174, "SET_EMP_PERCENTAGE");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam0);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_176(int iParam0)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Local_231.f_174, "SET_SHOCK_PERCENTAGE");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam0);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_177(float fParam0)
{
	if (AUDIO::HAS_SOUND_FINISHED(Local_231.f_46))
	{
		Local_231.f_46 = AUDIO::GET_SOUND_ID();
		AUDIO::PLAY_SOUND_FRONTEND(Local_231.f_46, "Scanner_Loop", "DLC_BTL_Target_Pursuit_Sounds", true);
		AUDIO::SET_VARIABLE_ON_SOUND(Local_231.f_46, "signalstrength", fParam0);
	}
	else
	{
		AUDIO::SET_VARIABLE_ON_SOUND(Local_231.f_46, "signalstrength", fParam0);
	}
}

float func_178()
{
	float fVar0;
	
	if (func_21(PLAYER::PLAYER_ID()) == 240)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_231.f_163) && !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_OBJ(Local_231.f_163), false))
		{
			fVar0 = func_179(NETWORK::NET_TO_OBJ(Local_231.f_163), func_180(), 1);
			if (fVar0 >= 200f)
			{
				return 0f;
			}
			else if (fVar0 >= 180f && fVar0 < 200f)
			{
				return 0.1f;
			}
			else if (fVar0 >= 160f && fVar0 < 180f)
			{
				return 0.2f;
			}
			else if (fVar0 >= 140f && fVar0 < 160f)
			{
				return 0.3f;
			}
			else if (fVar0 >= 120f && fVar0 < 140f)
			{
				return 0.4f;
			}
			else if (fVar0 >= 100f && fVar0 < 120f)
			{
				return 0.5f;
			}
			else if (fVar0 >= 80f && fVar0 < 100f)
			{
				return 0.6f;
			}
			else if (fVar0 >= 60f && fVar0 < 80f)
			{
				return 0.7f;
			}
			else if (fVar0 >= 40f && fVar0 < 60f)
			{
				return 0.8f;
			}
			else if (fVar0 >= 20f && fVar0 < 40f)
			{
				return 0.9f;
			}
			else if (fVar0 <= 20f)
			{
				return 1f;
			}
		}
	}
	return 0f;
}

float func_179(int iParam0, struct<3> Param1, bool bParam4)
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

Vector3 func_180()
{
	if (func_21(PLAYER::PLAYER_ID()) == 240)
	{
		return Global_1970015;
	}
	return 0f, 0f, 0f;
}

void func_181()
{
	if (!AUDIO::HAS_SOUND_FINISHED(Local_231.f_46))
	{
		AUDIO::STOP_SOUND(Local_231.f_46);
		AUDIO::RELEASE_SOUND_ID(Local_231.f_46);
		Local_231.f_46 = -1;
	}
}

bool func_182()
{
	return BitTest(Global_1964670.f_2, 6);
}

int func_183()
{
	if ((func_182() || func_32()) || func_31())
	{
		if (INTERIOR::IS_VALID_INTERIOR(Global_1964670.f_30))
		{
			return 0;
		}
	}
	return 1;
}

int func_184(bool bParam0)
{
	if (func_159())
	{
		if (bParam0)
		{
			if (BitTest(Local_231.f_5, 4))
			{
				return 1;
			}
		}
	}
	if ((func_182() || func_32()) || func_31())
	{
		return 1;
	}
	if (func_185())
	{
		return 1;
	}
	return 0;
}

bool func_185()
{
	return BitTest(Global_1964670, 27);
}

void func_186()
{
	int iVar0;
	int iVar1;
	
	if (func_97())
	{
		return;
	}
	if (!BitTest(Local_231.f_5, 16))
	{
		if (func_149(0, -1, 0))
		{
			func_148(-1);
			func_147(21, "DRONE_MOVE", -1);
			func_147(20, "DRONE_POSITION", -1);
			if (!PAD::IS_USING_KEYBOARD_AND_MOUSE(0))
			{
				func_146(210, "CELL_284", -1, 0);
				if ((!func_54() && !func_33()) && func_183())
				{
					func_146(209, "BOOST_DRONE_E", -1, 0);
				}
				func_146(208, "MOVE_DRONE_UP", -1, 0);
				func_146(207, "MOVE_DRONE_DO", -1, 0);
			}
			else
			{
				func_147(29, "CELL_284", -1);
				if ((!func_54() && !func_33()) && func_183())
				{
					func_146(203, "BOOST_DRONE_E", -1, 0);
				}
				func_146(209, "MOVE_DRONE_UP", -1, 0);
				func_146(210, "MOVE_DRONE_DO", -1, 0);
			}
			if (!func_54())
			{
				iVar0 = 206;
				if (PAD::IS_USING_KEYBOARD_AND_MOUSE(0))
				{
					iVar0 = 237;
				}
				if (func_33())
				{
					func_146(iVar0, "MOVE_DRONE_EM", -1, 0);
				}
				else
				{
					func_146(iVar0, "MOVE_DRONE_ST", -1, 0);
				}
				iVar1 = 205;
				if (PAD::IS_USING_KEYBOARD_AND_MOUSE(0))
				{
					iVar1 = 238;
				}
				if (func_172() > 0f)
				{
					func_146(iVar1, "MFH_DRONE_AM0", -1, 0);
				}
				else if (!func_184(0))
				{
					func_146(iVar1, "MOVE_DRONE_EX", -1, 0);
				}
				else if (func_193())
				{
					func_146(iVar1, "MOVE_DRONE_TRG", -1, 0);
				}
			}
			if (!func_33())
			{
				if ((((((func_192(0) || func_192(1)) || func_191()) || RECORDING::IS_REPLAY_RECORDING()) || func_187(PLAYER::PLAYER_ID())) || func_32()) || func_31())
				{
				}
				else
				{
					func_146(201, "DRONE_PHOTO", -1, 0);
				}
			}
			func_146(80, "MOVE_DRONE_RE", -1, 0);
			MISC::SET_BIT(&(Local_231.f_5), 16);
		}
	}
	else
	{
		func_134(0, -1, 0, 1, 0, 0, 1, 1, 0);
	}
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(0))
	{
		if (!BitTest(Local_231.f_5, 17))
		{
			MISC::SET_BIT(&(Local_231.f_5), 17);
			MISC::CLEAR_BIT(&(Local_231.f_5), 16);
		}
	}
	else if (BitTest(Local_231.f_5, 17))
	{
		MISC::CLEAR_BIT(&(Local_231.f_5), 17);
		MISC::CLEAR_BIT(&(Local_231.f_5), 16);
	}
}

int func_187(bool bParam0)
{
	if (func_190(func_21(bParam0)))
	{
		if (func_189() != func_13())
		{
			if (func_188() == func_189())
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_188()
{
	return Global_1892925[PLAYER::PLAYER_ID() /*615*/].f_10.f_36;
}

bool func_189()
{
	return Global_1892925[PLAYER::PLAYER_ID() /*615*/].f_10;
}

int func_190(int iParam0)
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

int func_191()
{
	return Global_24430.f_135;
	return 0;
}

bool func_192(bool bParam0)
{
	if (bParam0)
	{
		return (Global_24430.f_4 && Global_24430.f_104 == 4);
	}
	return Global_24430.f_4;
}

int func_193()
{
	if (func_195())
	{
		return 0;
	}
	if (func_194() <= 0)
	{
		return 0;
	}
	if (func_182())
	{
		return 1;
	}
	return 0;
}

int func_194()
{
	return Global_1964670.f_9;
}

int func_195()
{
	if (func_172() > 0f)
	{
		return 1;
	}
	return 0;
}

bool func_196()
{
	return BitTest(Global_1964670, 7);
}

void func_197()
{
	int iVar0;
	
	if (!func_198())
	{
		return;
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_231.f_163) && !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_OBJ(Local_231.f_163), false))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_231.f_163))
		{
			if ((CAM::DOES_CAM_EXIST(Local_231.f_173) && CAM::IS_CAM_RENDERING(Local_231.f_173)) && !func_97())
			{
				iVar0 = 80;
				if (func_103())
				{
					iVar0 = 75;
				}
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

int func_198()
{
	if (func_17())
	{
		if (!func_151())
		{
			return 0;
		}
	}
	return 1;
}

void func_199()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if ((func_205() || !func_187(PLAYER::PLAYER_ID())) || !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	iVar0 = func_204(1);
	func_203(iVar0);
	iVar1 = func_204(0);
	iVar2 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(Local_231.f_145, 2f, iVar1, false, false, false);
	if (ENTITY::DOES_ENTITY_EXIST(iVar2) && iVar2 != Local_231.f_166)
	{
		if (WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(iVar2, joaat("weapon_stungun"), 0) || ENTITY::GET_ENTITY_HEALTH(iVar2) == 999)
		{
			if (!BitTest(Local_231.f_5, 26))
			{
				func_202(func_189(), 1, 1, 0);
				MISC::SET_BIT(&(Local_231.f_5), 26);
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_231.f_166))
	{
		if (WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(Local_231.f_166, joaat("weapon_stungun"), 0) || ENTITY::GET_ENTITY_HEALTH(Local_231.f_166) == 999)
		{
			if (!BitTest(Local_231.f_5, 26))
			{
				func_202(func_189(), 1, 1, 0);
				MISC::SET_BIT(&(Local_231.f_5), 26);
			}
		}
	}
	if (BitTest(Local_231.f_5, 26))
	{
		iVar3 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(Local_231.f_145, 2f, iVar0, false, false, false);
		if (ENTITY::DOES_ENTITY_EXIST(iVar3))
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_231.f_166))
			{
				ENTITY::SET_ENTITY_VISIBLE(Local_231.f_166, false, false);
			}
			if (ENTITY::DOES_ENTITY_EXIST(iVar2))
			{
				ENTITY::SET_ENTITY_VISIBLE(iVar2, false, false);
			}
			func_200(1);
		}
	}
}

void func_200(bool bParam0)
{
	if (bParam0)
	{
		if (!func_201())
		{
			MISC::SET_BIT(&Global_1964670, true);
		}
	}
	else if (func_201())
	{
		MISC::CLEAR_BIT(&Global_1964670, true);
	}
}

bool func_201()
{
	return BitTest(Global_1964670, 1);
}

void func_202(bool bParam0, int iParam1, int iParam2, int iParam3)
{
	struct<6> Var0;
	int iVar6;
	
	Var0.f_0 = -171282281;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_3 = iParam1;
	Var0.f_4 = iParam2;
	Var0.f_5 = iParam3;
	iVar6 = 0;
	if (bParam0 != func_13())
	{
		MISC::SET_BIT(&iVar6, bParam0);
	}
	if (!iVar6 == 0)
	{
		SCRIPT::_SEND_TU_SCRIPT_EVENT_NEW(1, &Var0, 6, iVar6, Var0.f_0);
	}
}

bool func_203(int iParam0)
{
	if (iParam0 == 0)
	{
		return 1;
	}
	STREAMING::REQUEST_MODEL(iParam0);
	return STREAMING::HAS_MODEL_LOADED(iParam0);
}

int func_204(bool bParam0)
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

var func_205()
{
	return BitTest(Global_1964670, 14);
}

void func_206()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if ((BitTest(Local_231.f_5, 1) || func_222()) || func_221())
	{
		Local_231.f_18 = 0;
		Local_231.f_19 = 0;
		if (!BitTest(Local_231.f_5, 10))
		{
			MISC::SET_BIT(&(Local_231.f_5), 10);
		}
		return;
	}
	if (!func_221())
	{
		if (BitTest(Local_231.f_5, 10))
		{
			Local_231.f_18 = 100;
			MISC::CLEAR_BIT(&(Local_231.f_5), 10);
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
					iVar0 = 206;
					if (PAD::IS_USING_KEYBOARD_AND_MOUSE(0))
					{
						iVar0 = 237;
					}
					if ((((PAD::IS_CONTROL_JUST_RELEASED(2, iVar0) || PAD::IS_DISABLED_CONTROL_JUST_RELEASED(2, iVar0)) && !BitTest(Local_231.f_5, 5)) && !BitTest(Local_231.f_5, 24)) && !func_97())
					{
						MISC::SET_BIT(&Global_1964670, 29);
						MISC::SET_BIT(&(Local_231.f_5), 24);
						if (BitTest(Local_231.f_5, 11) || BitTest(Local_231.f_5, 23))
						{
							Local_231.f_29++;
						}
					}
					if (func_33() && !func_185())
					{
						func_218();
					}
					else
					{
						func_217();
					}
				}
				else if (func_34(&(Local_231.f_253)))
				{
					if (func_185())
					{
						iVar1 = 3000;
					}
					else if (func_33())
					{
						iVar1 = Global_262145.f_24938;
					}
					else if (func_32() || func_31())
					{
						iVar1 = 4000;
					}
					else
					{
						iVar1 = Global_262145.f_24323;
					}
					if (func_29(&(Local_231.f_253), iVar1, 0))
					{
						func_28(&(Local_231.f_253));
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
						MISC::CLEAR_BIT(&(Local_231.f_5), 24);
						MISC::CLEAR_BIT(&Global_1964670, 29);
						Local_231.f_160 = 0;
					}
					else
					{
						iVar2 = (100 * MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Local_231.f_253)));
						Local_231.f_18 = (iVar2 / iVar1);
						if (!func_33())
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
				func_215();
				func_212();
				func_207();
			}
		}
		else
		{
			NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_231.f_163);
		}
	}
}

void func_207()
{
	int iVar0;
	bool bVar1;
	struct<3> Var2;
	struct<3> Var5;
	struct<3> Var8;
	struct<3> Var11;
	struct<3> Var14;
	int iVar17;
	
	if (!func_195())
	{
		return;
	}
	if (func_171() <= 0f)
	{
		func_210();
		return;
	}
	STREAMING::REQUEST_NAMED_PTFX_ASSET("scr_ie_vv");
	if (!STREAMING::HAS_NAMED_PTFX_ASSET_LOADED("scr_ie_vv"))
	{
		return;
	}
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(0))
	{
		iVar0 = 238;
	}
	else
	{
		iVar0 = 205;
	}
	if (PAD::IS_CONTROL_PRESSED(2, iVar0) || PAD::IS_DISABLED_CONTROL_PRESSED(2, iVar0))
	{
		bVar1 = true;
		Global_1964670.f_10 = (Global_1964670.f_10 - MISC::GET_FRAME_TIME());
	}
	else
	{
		Global_1964670.f_10 = (Global_1964670.f_10 + (MISC::GET_FRAME_TIME() / 2f));
		if (Global_1964670.f_10 >= func_172())
		{
			Global_1964670.f_10 = func_172();
		}
	}
	if (!BitTest(Local_231.f_6, 9))
	{
		if (!BitTest(Local_231.f_6, 8))
		{
			if (bVar1)
			{
				MISC::SET_BIT(&(Local_231.f_6), 8);
			}
		}
		else
		{
			Var2 = { CAM::GET_FINAL_RENDERED_CAM_COORD() };
			Var5 = { CAM::GET_FINAL_RENDERED_CAM_ROT(2) };
			Var8 = { (-SYSTEM::SIN(Var5.f_2) * SYSTEM::COS(Var5.f_0)), (SYSTEM::COS(Var5.f_2) * SYSTEM::COS(Var5.f_0)), SYSTEM::SIN(Var5.f_0) };
			Var11 = { 10f, 10f, 10f };
			Var14 = { Var2 + Var8 * Var11 };
			iVar17 = 30;
			if (BitTest(Local_231.f_5, 23))
			{
				iVar17 = Global_262145.f_24325;
			}
			GRAPHICS::USE_PARTICLE_FX_ASSET("scr_ie_vv");
			GRAPHICS::START_NETWORKED_PARTICLE_FX_NON_LOOPED_ON_ENTITY("scr_ie_vv_muzzle_flash", NETWORK::NET_TO_OBJ(Local_231.f_163), 0f, -0.25f, -0.1f, 180f, 0f, 0f, 0.7f, false, false, false);
			MISC::SHOOT_SINGLE_BULLET_BETWEEN_COORDS_IGNORE_ENTITY_NEW(Local_231.f_154 + Vector(0f, 0f, 0f), Var14, iVar17, true, joaat("weapon_assaultsmg"), PLAYER::PLAYER_PED_ID(), true, true, -1f, NETWORK::NET_TO_OBJ(Local_231.f_163), true, false, 0, true, 0, 1, 1);
			PAD::SET_CONTROL_SHAKE(0, 300, SYSTEM::ROUND((150f * Local_231.f_135)));
			AUDIO::PLAY_SOUND_FROM_COORD(-1, "Gun_Fire", Local_231.f_154, Local_231.f_161, true, 0, false);
			MISC::SET_BIT(&(Local_231.f_6), 9);
			func_30(&(Local_231.f_263), 0, 0);
		}
	}
	else
	{
		func_208();
	}
}

void func_208()
{
	int iVar0;
	int iVar1;
	
	if (func_34(&(Local_231.f_263)))
	{
		iVar0 = 100;
		if (func_209(Local_231.f_263, iVar0, 0))
		{
			MISC::CLEAR_BIT(&(Local_231.f_6), 9);
			MISC::CLEAR_BIT(&(Local_231.f_6), 8);
			func_28(&(Local_231.f_263));
		}
		else
		{
			iVar1 = (100 * MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Local_231.f_263)));
			Local_231.f_25 = (iVar1 / iVar0);
		}
	}
	else
	{
		func_30(&(Local_231.f_263), 0, 0);
	}
}

int func_209(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	if (iParam2 == -1)
	{
		return 1;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam3)
	{
		if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), iParam0)) >= iParam2)
		{
			return 1;
		}
	}
	else if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), iParam0)) >= iParam2)
	{
		return 1;
	}
	return 0;
}

void func_210()
{
	int iVar0;
	int iVar1;
	
	if (func_34(&(Local_231.f_263)))
	{
		iVar0 = SYSTEM::ROUND(((func_172() * 1.5f) * 1000f));
		if (func_209(Local_231.f_263, iVar0, 0))
		{
			MISC::CLEAR_BIT(&(Local_231.f_6), 9);
			MISC::CLEAR_BIT(&(Local_231.f_6), 8);
			func_28(&(Local_231.f_263));
			func_211(func_172());
		}
		else
		{
			iVar1 = (100 * MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Local_231.f_263)));
			Local_231.f_25 = (iVar1 / iVar0);
		}
	}
	else
	{
		func_30(&(Local_231.f_263), 0, 0);
	}
}

void func_211(float fParam0)
{
	if (Global_1964670.f_10 != fParam0)
	{
		Global_1964670.f_10 = fParam0;
	}
}

void func_212()
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var4;
	struct<3> Var7;
	struct<3> Var10;
	struct<3> Var13;
	int iVar16;
	
	if (func_193())
	{
		if (PAD::IS_USING_KEYBOARD_AND_MOUSE(0))
		{
			iVar0 = 238;
		}
		else
		{
			iVar0 = 205;
		}
		if (!BitTest(Local_231.f_6, 5))
		{
			if (!BitTest(Local_231.f_6, 4))
			{
				if (PAD::IS_CONTROL_JUST_RELEASED(2, iVar0) || PAD::IS_DISABLED_CONTROL_JUST_RELEASED(2, iVar0))
				{
					MISC::SET_BIT(&(Local_231.f_6), 4);
				}
			}
			else if (Local_231.f_13 == 1)
			{
				if (Local_231.f_248 == 2)
				{
					Var1 = { CAM::GET_FINAL_RENDERED_CAM_COORD() };
					Var4 = { CAM::GET_FINAL_RENDERED_CAM_ROT(2) };
					Var7 = { (-SYSTEM::SIN(Var4.f_2) * SYSTEM::COS(Var4.f_0)), (SYSTEM::COS(Var4.f_2) * SYSTEM::COS(Var4.f_0)), SYSTEM::SIN(Var4.f_0) };
					Var10 = { 10f, 10f, 10f };
					Var13 = { Var1 + Var7 * Var10 };
					iVar16 = Global_262145.f_24324;
					if (BitTest(Local_231.f_5, 23))
					{
						iVar16 = Global_262145.f_24325;
					}
					MISC::SHOOT_SINGLE_BULLET_BETWEEN_COORDS_IGNORE_ENTITY_NEW(Local_231.f_154 + Vector(0f, 0f, 0f), Var13, iVar16, true, joaat("weapon_tranquilizer"), PLAYER::PLAYER_PED_ID(), true, true, -1f, NETWORK::NET_TO_OBJ(Local_231.f_163), false, false, 0, true, 0, 0, 0);
					Local_231.f_24 = 100;
					PAD::SET_CONTROL_SHAKE(0, 300, SYSTEM::ROUND((150f * Local_231.f_135)));
					if (AUDIO::HAS_SOUND_FINISHED(Local_231.f_83))
					{
						Local_231.f_83 = AUDIO::GET_SOUND_ID();
						AUDIO::PLAY_SOUND_FROM_ENTITY(Local_231.f_83, "Remote_Perspective_Fire", NETWORK::NET_TO_OBJ(Local_231.f_163), "DLC_H3_Drone_Tranq_Weapon_Sounds", true, 0);
					}
					AUDIO::PLAY_SOUND_FRONTEND(-1, "Pilot_Perspective_Fire", "DLC_H3_Drone_Tranq_Weapon_Sounds", true);
					if (BitTest(Local_231.f_5, 11) || BitTest(Local_231.f_5, 23))
					{
						Local_231.f_31++;
					}
					func_214((func_194() - 1));
					if (func_194() <= 0)
					{
						Local_231.f_24 = 0;
						MISC::CLEAR_BIT(&(Local_231.f_5), 16);
					}
					MISC::SET_BIT(&(Local_231.f_6), 5);
					func_30(&(Local_231.f_261), 0, 0);
				}
			}
		}
		else
		{
			func_213();
		}
	}
}

void func_213()
{
	int iVar0;
	int iVar1;
	
	if (func_194() > 0)
	{
		if (func_34(&(Local_231.f_261)))
		{
			iVar0 = Global_262145.f_24323;
			if (func_29(&(Local_231.f_261), iVar0, 0))
			{
				MISC::CLEAR_BIT(&(Local_231.f_6), 5);
				MISC::CLEAR_BIT(&(Local_231.f_6), 4);
				func_28(&(Local_231.f_261));
				Local_231.f_24 = 100;
				if (AUDIO::HAS_SOUND_FINISHED(Local_231.f_37))
				{
					AUDIO::STOP_SOUND(Local_231.f_37);
					AUDIO::RELEASE_SOUND_ID(Local_231.f_37);
					Local_231.f_37 = -1;
				}
			}
			else
			{
				iVar1 = (100 * MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Local_231.f_261)));
				Local_231.f_24 = (iVar1 / iVar0);
			}
		}
	}
}

void func_214(int iParam0)
{
	if (Global_1964670.f_9 != iParam0)
	{
		Global_1964670.f_9 = iParam0;
	}
}

void func_215()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	
	Local_231.f_356.f_4 = 2;
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(0))
	{
		Local_231.f_356.f_5 = 238;
	}
	else
	{
		Local_231.f_356.f_5 = 205;
	}
	iVar0 = Global_262145.f_24326;
	if (!BitTest(Local_231.f_5, 31))
	{
		Local_231.f_22 = 100;
	}
	if (func_33())
	{
		iVar0 = (iVar0 / 2);
		if (BitTest(Local_231.f_6, 1))
		{
			Local_231.f_21 = ((Local_231.f_23 * (Global_262145.f_24326 / 2)) / 100);
			Local_231.f_21 = ((Global_262145.f_24326 / 2) - Local_231.f_21);
			MISC::CLEAR_BIT(&(Local_231.f_6), true);
		}
		if (BitTest(Local_231.f_5, 31))
		{
			iVar0 = Local_231.f_21;
		}
	}
	else
	{
		Local_231.f_22 = 100;
	}
	if (!func_184(1))
	{
		if (!func_97() && func_216(&(Local_231.f_356), 1, iVar0, 0))
		{
			if (AUDIO::HAS_SOUND_FINISHED(Local_231.f_38))
			{
				Local_231.f_38 = AUDIO::GET_SOUND_ID();
				AUDIO::PLAY_SOUND_FROM_ENTITY(Local_231.f_38, "Destroyed", NETWORK::NET_TO_OBJ(Local_231.f_163), Local_231.f_161, true, 0);
			}
			HUD::THEFEED_SHOW();
			iVar1 = 0;
			if (func_33())
			{
				iVar1 = 69;
			}
			FIRE::ADD_OWNED_EXPLOSION(PLAYER::PLAYER_PED_ID(), Local_231.f_154, iVar1, 0.5f, true, false, 1f);
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) < 1)
			{
				PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, false);
				PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
			}
			PAD::SET_CONTROL_SHAKE(0, 300, SYSTEM::ROUND((200f * Local_231.f_135)));
			MISC::SET_BIT(&(Local_231.f_5), 2);
		}
	}
	if (func_34(&(Local_231.f_356)))
	{
		PAD::SET_CONTROL_SHAKE(0, 300, 20);
		if (!BitTest(Local_231.f_5, 5))
		{
			MISC::SET_BIT(&(Local_231.f_5), 5);
		}
		func_28(&(Local_231.f_279));
		if (!func_29(&(Local_231.f_356), iVar0, 0))
		{
			iVar2 = (Local_231.f_22 * MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Local_231.f_356)));
			if (!func_33())
			{
				Local_231.f_19 = (iVar2 / iVar0);
			}
			else if (!BitTest(Local_231.f_5, 31))
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
	else if (BitTest(Local_231.f_5, 5))
	{
		MISC::CLEAR_BIT(&(Local_231.f_5), 5);
		if (!func_33())
		{
			Local_231.f_19 = 0;
		}
		else
		{
			MISC::SET_BIT(&(Local_231.f_5), 31);
			Local_231.f_22 = (100 - Local_231.f_19);
			Local_231.f_21 = (iVar0 - MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Local_231.f_356)));
			Local_231.f_23 = Local_231.f_19;
			func_28(&(Local_231.f_279));
		}
		if (Local_231.f_35 != -1)
		{
			AUDIO::STOP_SOUND(Local_231.f_35);
			AUDIO::RELEASE_SOUND_ID(Local_231.f_35);
			Local_231.f_35 = -1;
		}
	}
	else if (func_33())
	{
		if (Local_231.f_19 > 0)
		{
			if (Local_231.f_19 <= 2)
			{
				Local_231.f_19 = 0;
			}
			if (!func_34(&(Local_231.f_279)))
			{
				func_30(&(Local_231.f_279), 0, 0);
			}
			else
			{
				iVar3 = Global_262145.f_24326;
				if (!func_29(&(Local_231.f_279), iVar3, 0))
				{
					fVar4 = ((100f - IntToFloat(Local_231.f_22)) / SYSTEM::TO_FLOAT((iVar3 / MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Local_231.f_279)))));
					Local_231.f_19 = (Local_231.f_19 - SYSTEM::ROUND(fVar4));
					Local_231.f_23 = Local_231.f_19;
					Local_231.f_22 = (100 - Local_231.f_19);
					MISC::SET_BIT(&(Local_231.f_6), true);
				}
				else
				{
					Local_231.f_19 = 0;
				}
			}
		}
		else
		{
			func_28(&(Local_231.f_356));
			MISC::CLEAR_BIT(&(Local_231.f_5), 31);
			MISC::CLEAR_BIT(&(Local_231.f_6), true);
		}
	}
}

int func_216(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	if (PAD::IS_CONTROL_PRESSED(uParam0->f_4, uParam0->f_5) || (PAD::IS_DISABLED_CONTROL_PRESSED(uParam0->f_4, uParam0->f_5) && iParam1))
	{
		if (!bParam3 || func_29(&(uParam0->f_2), 500, 0))
		{
			if (!func_34(uParam0))
			{
				func_30(uParam0, 0, 0);
			}
			else if (func_29(uParam0, iParam2, 0))
			{
				func_28(uParam0);
				func_28(&(uParam0->f_2));
				return 1;
			}
		}
	}
	else
	{
		func_28(uParam0);
		func_28(&(uParam0->f_2));
	}
	return 0;
}

void func_217()
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	struct<3> Var9;
	struct<3> Var12;
	int iVar15;
	
	if (BitTest(Local_231.f_5, 24))
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
				if (func_182())
				{
					iVar15 = 1;
				}
				else if (func_32() || func_31())
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
				func_30(&(Local_231.f_253), 0, 0);
			}
		}
	}
}

void func_218()
{
	if ((BitTest(Local_231.f_5, 24) && !BitTest(Local_231.f_5, 3)) && !Local_231.f_160)
	{
		if (STREAMING::HAS_NAMED_PTFX_ASSET_LOADED("scr_xs_dr"))
		{
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_231.f_163))
			{
				GRAPHICS::USE_PARTICLE_FX_ASSET("scr_xs_dr");
				GRAPHICS::START_NETWORKED_PARTICLE_FX_NON_LOOPED_ON_ENTITY("scr_xs_dr_emp", NETWORK::NET_TO_OBJ(Local_231.f_163), 0f, -0.5f, 0f, 0f, 0f, 0f, 3f, false, false, false);
			}
		}
		Local_231.f_18 = 100;
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
		func_219(ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_OBJ(Local_231.f_163), true), 0);
		MISC::SET_BIT(&(Local_231.f_5), 3);
		Local_231.f_160 = 1;
		func_30(&(Local_231.f_253), 0, 0);
	}
}

void func_219(struct<3> Param0, bool bParam3)
{
	struct<7> Var0;
	
	Var0.f_0 = 1872545935;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_3 = { Param0 };
	Var0.f_6 = bParam3;
	if (!bParam3)
	{
		if (!func_220(1, 1) == 0)
		{
			SCRIPT::_SEND_TU_SCRIPT_EVENT_NEW(1, &Var0, 7, func_220(1, 1), Var0.f_0);
		}
	}
	else if (Global_1964670.f_26 != func_13())
	{
		SCRIPT::_SEND_TU_SCRIPT_EVENT_NEW(1, &Var0, 7, func_8(Global_1964670.f_26), Var0.f_0);
	}
}

int func_220(int iParam0, bool bParam1)
{
	var uVar0;
	bool bVar1;
	bool bVar2;
	
	bVar1 = false;
	while (bVar1 < 32)
	{
		bVar2 = PLAYER::INT_TO_PLAYERINDEX(bVar1);
		if (func_26(bVar2, 0, 0))
		{
			if (bVar2 != PLAYER::PLAYER_ID() || iParam0)
			{
				if (bParam1)
				{
					MISC::SET_BIT(&uVar0, bVar1);
				}
				else if (!func_137(bVar2, 0))
				{
					MISC::SET_BIT(&uVar0, bVar1);
				}
			}
		}
		bVar1++;
	}
	return uVar0;
}

bool func_221()
{
	return BitTest(Global_1964670, 8);
}

int func_222()
{
	if ((NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_231.f_163) && ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_OBJ(Local_231.f_163), false)) && !BitTest(Local_231.f_5, 2))
	{
		return 1;
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_231.f_163))
	{
		if (func_187(PLAYER::PLAYER_ID()) && BitTest(Global_2731782, 0))
		{
		}
		else if (func_236())
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
		if (ENTITY::IS_ENTITY_IN_WATER(NETWORK::NET_TO_OBJ(Local_231.f_163)) || func_235(NETWORK::NET_TO_ENT(Local_231.f_163), 0))
		{
			if (BitTest(Local_231.f_5, 29))
			{
				Local_231.f_28 = 3;
				return 1;
			}
		}
	}
	if (func_233(PLAYER::PLAYER_ID()))
	{
		Local_231.f_28 = 0;
		return 1;
	}
	if (Global_1950702.f_5363 != -1)
	{
		Local_231.f_28 = 0;
		return 1;
	}
	if (func_159())
	{
		if (Global_1845137 != func_13())
		{
			if (func_63(Global_1845137) || func_62(Global_1845137))
			{
				Local_231.f_28 = 0;
				return 1;
			}
		}
	}
	if (func_232())
	{
		Local_231.f_28 = 1;
		return 1;
	}
	if (func_231(PLAYER::PLAYER_ID()))
	{
		Local_231.f_28 = 0;
		return 1;
	}
	if (func_230())
	{
		Local_231.f_28 = 0;
		return 1;
	}
	if (func_229())
	{
		Local_231.f_28 = 0;
		return 1;
	}
	if (func_41())
	{
		Local_231.f_28 = 0;
		return 1;
	}
	if (func_53())
	{
		Local_231.f_28 = 0;
		return 1;
	}
	if (func_227(PLAYER::PLAYER_ID(), 1))
	{
		if (func_225(func_189()) == 1)
		{
			return 1;
		}
	}
	if (func_40())
	{
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
		if (func_179(PLAYER::PLAYER_PED_ID(), Local_231.f_157, 1) > 2f)
		{
			Local_231.f_28 = 7;
			return 1;
		}
	}
	if (func_224())
	{
		return 1;
	}
	if (func_17())
	{
		if (func_50())
		{
			return 1;
		}
		if (func_223("AIRDEF_WARN"))
		{
			if (func_29(&(Local_231.f_352), 2000, 0))
			{
				return 1;
			}
		}
		else
		{
			func_28(&(Local_231.f_352));
		}
	}
	return 0;
}

bool func_223(char* sParam0)
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

int func_224()
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

int func_225(int iParam0)
{
	if (func_21(iParam0) == 374)
	{
		return func_226(iParam0, 374);
	}
	return -1;
}

int func_226(int iParam0, int iParam1)
{
	if (func_21(iParam0) == iParam1)
	{
		return func_19(iParam0);
	}
	return -1;
}

int func_227(bool bParam0, bool bParam1)
{
	if (!func_9(bParam0))
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_228(bParam0))
		{
			return 0;
		}
	}
	return func_9(Global_1892925[bParam0 /*615*/].f_10);
}

int func_228(int iParam0)
{
	if (func_9(iParam0))
	{
		if (func_9(Global_1892925[iParam0 /*615*/].f_10))
		{
			return Global_1892925[iParam0 /*615*/].f_10 == iParam0;
		}
	}
	return 0;
}

bool func_229()
{
	return Global_99770;
}

bool func_230()
{
	return BitTest(Global_1964670, 9);
}

int func_231(bool bParam0)
{
	int iVar0;
	
	iVar0 = bParam0;
	if (iVar0 != -1)
	{
		if (Global_1892925[iVar0 /*615*/].f_8)
		{
			return 1;
		}
	}
	return 0;
}

int func_232()
{
	struct<3> Var0;
	
	if (Local_231.f_17 == joaat("v_faceoffice"))
	{
		if (func_24(NETWORK::NET_TO_OBJ(Local_231.f_163)))
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
		if (func_24(NETWORK::NET_TO_OBJ(Local_231.f_163)))
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

int func_233(bool bParam0)
{
	if (bParam0 != func_13() && func_26(bParam0, 1, 1))
	{
		if (func_12(bParam0) && !func_234(bParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_234(bool bParam0)
{
	if (bParam0 != func_13() && func_26(bParam0, 1, 1))
	{
		return BitTest(Global_2658293[bParam0 /*468*/].f_325, 4);
	}
	return 0;
}

int func_235(int iParam0, int iParam1)
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

bool func_236()
{
	return BitTest(Global_1964670, 15);
}

void func_237()
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
	int iVar27;
	
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
					if (func_33())
					{
						Var12 = { Global_262145.f_24939, Global_262145.f_24939, Global_262145.f_24939 };
					}
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
							if (BitTest(Local_231.f_5, 11) && !func_33())
							{
								MISC::CLEAR_BIT(&(Local_231.f_5), 11);
							}
							MISC::CLEAR_BIT(&(Local_231.f_5), 23);
							MISC::CLEAR_BIT(&(Local_231.f_6), 7);
							func_245();
						}
						else
						{
							Local_231.f_14 = 2;
							if (ENTITY::DOES_ENTITY_EXIST(iVar25))
							{
								if (ENTITY::IS_ENTITY_A_PED(iVar25))
								{
									if (!ENTITY::IS_ENTITY_DEAD(iVar25, false))
									{
										if (PED::IS_PED_A_PLAYER(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar25)))
										{
											if (func_243(PLAYER::PLAYER_ID(), NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar25))))
											{
												bVar26 = true;
											}
										}
										else
										{
											if (!BitTest(Local_231.f_5, 23))
											{
												MISC::SET_BIT(&(Local_231.f_5), 23);
												if (BitTest(Local_231.f_5, 11) && !func_33())
												{
													MISC::CLEAR_BIT(&(Local_231.f_5), 11);
												}
											}
											if (!func_110(PLAYER::PLAYER_ID()) && !func_107(PLAYER::PLAYER_ID()))
											{
												if ((func_242(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar25)) || func_241(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar25))) || func_240(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar25)))
												{
													func_106(Global_1837398);
													func_239(&(Local_231.f_265), 0, 0);
												}
												else
												{
													func_245();
												}
											}
										}
										if ((((!BitTest(Local_231.f_5, 11) && !bVar26) && func_24(Global_1964670.f_28)) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(Global_1964670.f_28, iVar25, 511)) && (PED::IS_PED_A_PLAYER(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar25)) && PLAYER::PLAYER_PED_ID() != ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar25)))
										{
											MISC::SET_BIT(&(Local_231.f_5), 11);
											if (BitTest(Local_231.f_5, 23))
											{
												MISC::CLEAR_BIT(&(Local_231.f_5), 23);
											}
										}
									}
								}
								else
								{
									iVar27 = func_238(iVar25);
									if (((iVar27 > -1 && iVar27 < Global_4980736.f_7125) && ENTITY::IS_ENTITY_AN_OBJECT(iVar25)) && BitTest(Global_4980736.f_7128[iVar27 /*668*/].f_353, 0))
									{
										MISC::SET_BIT(&(Local_231.f_6), 7);
									}
									if (!func_33())
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
									func_245();
								}
							}
							else
							{
								func_245();
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

int func_238(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return -1;
	}
	iVar0 = -1;
	if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MC_EntityID", 3))
	{
		if (DECORATOR::DECOR_EXIST_ON(iParam0, "MC_EntityID"))
		{
			iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "MC_EntityID");
		}
	}
	return iVar0;
}

void func_239(var uParam0, bool bParam1, bool bParam2)
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

int func_240(int iParam0)
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

int func_241(int iParam0)
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

int func_242(int iParam0)
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

int func_243(bool bParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = func_244(bParam0);
	if (func_9(iVar0))
	{
		if (iVar0 == func_244(bParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_244(bool bParam0)
{
	if (func_9(bParam0))
	{
		return Global_1892925[bParam0 /*615*/].f_10;
	}
	return func_13();
}

void func_245()
{
	if (func_34(&(Local_231.f_265)))
	{
		if (func_29(&(Local_231.f_265), 60000, 0))
		{
			func_28(&(Local_231.f_265));
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) <= 0)
			{
				func_106(Global_1837387);
			}
		}
	}
}

void func_246()
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var4;
	struct<3> Var7;
	struct<3> Var10;
	float fVar13;
	struct<3> Var14;
	struct<3> Var17;
	int iVar20;
	var uVar21;
	struct<3> Var24;
	int iVar27;
	int iVar28;
	int iVar29;
	
	if (((func_51() || func_33()) || func_54()) || func_17())
	{
		if (!BitTest(Local_231.f_5, 29))
		{
			return;
		}
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
					if ((func_33() || func_54()) || func_51())
					{
						fVar13 = 0.3f;
					}
					else if (func_17())
					{
						fVar13 = 0.65f;
					}
					else
					{
						fVar13 = (func_251(Local_231.f_244) * 1.5f);
					}
					if (func_103())
					{
						Var14 = { Local_231.f_154 };
						Var1 = { CAM::GET_FINAL_RENDERED_CAM_COORD() };
						Var4 = { CAM::GET_FINAL_RENDERED_CAM_ROT(2) };
						Var7 = { (-SYSTEM::SIN(Var4.f_2) * SYSTEM::COS(Var4.f_0)), (SYSTEM::COS(Var4.f_2) * SYSTEM::COS(Var4.f_0)), SYSTEM::SIN(Var4.f_0) };
						Var10 = { 0.9f, 0.9f, 0.9f };
						if (func_17())
						{
							Var10 = { 1.9f, 1.9f, 1.9f };
						}
						Var17 = { Var1 + Var7 * Var10 };
					}
					else
					{
						Var14 = { Local_231.f_154 };
						Var17 = { Local_231.f_154 };
					}
					Local_231.f_170 = SHAPETEST::START_SHAPE_TEST_CAPSULE(Var14, Var17, fVar13, 511, NETWORK::NET_TO_OBJ(Local_231.f_163), 4);
					if (Local_231.f_170 != 0)
					{
						Local_231.f_11 = 1;
					}
					break;
				
				case 1:
					iVar28 = SHAPETEST::GET_SHAPE_TEST_RESULT(Local_231.f_170, &iVar20, &Var24, &uVar21, &iVar27);
					if (iVar28 == 2)
					{
						if (iVar20 == 0)
						{
							Local_231.f_12 = 1;
							Var24 = { 0f, 0f, 0f };
						}
						else
						{
							if (ENTITY::DOES_ENTITY_EXIST(iVar27))
							{
								if (ENTITY::IS_ENTITY_A_VEHICLE(iVar27))
								{
									if (!ENTITY::IS_ENTITY_DEAD(iVar27, false) && ENTITY::GET_ENTITY_MODEL(iVar27) != Local_231.f_244)
									{
										if (ENTITY::GET_ENTITY_SPEED(iVar27) > 0.5f || func_247(ENTITY::GET_ENTITY_MODEL(iVar27)))
										{
											if (!BitTest(Local_231.f_5, 9))
											{
												MISC::SET_BIT(&(Local_231.f_5), 9);
											}
										}
									}
								}
								else if (ENTITY::IS_ENTITY_A_PED(iVar27))
								{
									if (!ENTITY::IS_ENTITY_DEAD(iVar27, false))
									{
										if (!PED::IS_PED_A_PLAYER(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar27)))
										{
											if (Local_231.f_30 == 0)
											{
												iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
												if (iVar0 == 0)
												{
													iVar29 = 85;
												}
												else if (iVar0 == 1)
												{
													iVar29 = 90;
												}
												else
												{
													iVar29 = 79;
												}
												Local_231.f_30 = EVENT::ADD_SHOCKING_EVENT_AT_POSITION(iVar29, Local_231.f_154, 5000f);
												func_239(&(Local_231.f_271), 0, 0);
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
					else if (iVar28 == 0)
					{
						Local_231.f_11 = 0;
					}
					break;
			}
			if (Local_231.f_30 != 0)
			{
				if (func_34(&(Local_231.f_271)))
				{
					if (func_29(&(Local_231.f_271), 5000, 0))
					{
						EVENT::REMOVE_SHOCKING_EVENT(Local_231.f_30);
						func_28(&(Local_231.f_271));
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

int func_247(int iParam0)
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
	if (func_248(iParam0))
	{
		return 1;
	}
	if (VEHICLE::IS_THIS_MODEL_A_HELI(iParam0) || VEHICLE::IS_THIS_MODEL_A_PLANE(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_248(int iParam0)
{
	if (func_250(iParam0, 1) && !func_249(iParam0))
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

int func_249(int iParam0)
{
	switch (iParam0)
	{
		case 707880171:
			return 1;
			break;
	}
	return 0;
}

int func_250(int iParam0, int iParam1)
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
	if (func_249(iParam0))
	{
		return 1;
	}
	return 0;
}

float func_251(int iParam0)
{
	struct<3> Var0;
	struct<3> Var3;
	
	func_252(iParam0, &Var0, &Var3, 1086324736, 1080033280, 1077936128);
	return MISC::ABSF((Var0.f_2 - Var3.f_2));
}

void func_252(int iParam0, var* uParam1, var* uParam2, float fParam3, float fParam4, float fParam5)
{
	int iVar0;
	
	if (STREAMING::IS_MODEL_VALID(iParam0))
	{
		MISC::GET_MODEL_DIMENSIONS(iParam0, uParam1, uParam2);
	}
	else
	{
		iVar0 = func_255(iParam0);
		if (iVar0 != 0)
		{
			func_253(iVar0, uParam1, uParam2, 1086324736, 1080033280, 1077936128);
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

void func_253(int iParam0, var* uParam1, var* uParam2, float fParam3, float fParam4, float fParam5)
{
	int iVar0;
	
	func_254(iParam0, &Global_1576486);
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

void func_254(int iParam0, var uParam1)
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

int func_255(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = iVar0;
		if (func_256(iVar1) == iParam0)
		{
			return iVar1;
		}
		iVar0++;
	}
	return 0;
}

int func_256(int iParam0)
{
	int iVar0;
	
	iVar0 = (1000 + iParam0);
	return iVar0;
}

void func_257()
{
	int iVar0;
	
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_231.f_163))
	{
		if (func_24(NETWORK::NET_TO_OBJ(Local_231.f_163)))
		{
			iVar0 = func_260(NETWORK::NET_TO_OBJ(Local_231.f_163));
			if (iVar0 != -1)
			{
				if (!func_259(&(Global_1835555.f_404), iVar0) && !func_259(&(Global_1892925[PLAYER::PLAYER_ID() /*615*/].f_542), iVar0))
				{
					func_258(1);
				}
			}
		}
	}
}

void func_258(bool bParam0)
{
	if (bParam0)
	{
		if (func_95())
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

bool func_259(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam1 / 32);
	iVar1 = (iParam1 % 32);
	return BitTest((*uParam0)[iVar0], iVar1);
}

int func_260(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		iVar0 = func_264(iParam0);
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
				func_261(iVar3);
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

void func_261(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (Global_1956258[iVar0] == 0)
	{
		Global_1956258[iVar0] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(func_263(iParam0), func_262(iParam0));
	}
}

char* func_262(int iParam0)
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

Vector3 func_263(int iParam0)
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

int func_264(int iParam0)
{
	if (func_271(iParam0))
	{
		return 15;
	}
	if (func_269(iParam0))
	{
		return 28;
	}
	if (func_267(iParam0))
	{
		return 36;
	}
	if (func_266(iParam0))
	{
		return 23;
	}
	if (func_265(iParam0))
	{
		return 33;
	}
	return -1;
}

int func_265(int iParam0)
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

int func_266(int iParam0)
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

bool func_267(int iParam0)
{
	return ((!ENTITY::IS_ENTITY_DEAD(iParam0, false) && ENTITY::IS_ENTITY_AT_COORD(iParam0, 3042.596f, -4667.915f, 34.26143f, 250f, 300f, 40f, false, true, 0)) || func_268());
}

int func_268()
{
	if (!CAM::IS_SCREEN_FADED_OUT())
	{
		if (SYSTEM::VDIST2(func_6(PLAYER::PLAYER_ID()), 3042.596f, -4667.915f, 34.26143f) <= 25600f)
		{
			if (CAM::IS_SPHERE_VISIBLE(3042.596f, -4667.915f, 34.26143f, 50f))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_269(int iParam0)
{
	return ((!ENTITY::IS_ENTITY_DEAD(iParam0, false) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -2016.6f, -1039.867f, -3.801932f, -2129.956f, -1003.351f, 22.18234f, 15.75f, false, true, 0)) || func_270());
}

int func_270()
{
	struct<3> Var0;
	
	if (!CAM::IS_SCREEN_FADED_OUT())
	{
		Var0 = { -2073.541f, -1021.104f, 14.99213f };
		if (SYSTEM::VDIST2(func_6(PLAYER::PLAYER_ID()), Var0) <= 25600f)
		{
			if (CAM::IS_SPHERE_VISIBLE(Var0, 60f))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_271(int iParam0)
{
	return ((!ENTITY::IS_ENTITY_DEAD(iParam0, false) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Vector(-3.801932f, -1039.867f, -2016.6f) + Vector(0f, 7773.967f, 654.731f), Vector(22.18234f, -1003.351f, -2129.956f) + Vector(0f, 7773.967f, 654.731f), 15.75f, false, true, 0)) || func_272());
}

int func_272()
{
	struct<3> Var0;
	
	if (!CAM::IS_SCREEN_FADED_OUT())
	{
		Var0 = { Vector(-3.801932f, -1039.867f, -2016.6f) + Vector(0f, 7773.967f, 654.731f) };
		if (SYSTEM::VDIST2(func_6(PLAYER::PLAYER_ID()), Var0) <= 25600f)
		{
			if (CAM::IS_SPHERE_VISIBLE(Var0, 50f))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_273(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (func_51())
	{
		return;
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_231.f_163))
	{
		if (CAM::DOES_CAM_EXIST(Local_231.f_173) && CAM::IS_CAM_ACTIVE(Local_231.f_173))
		{
			if (CAM::IS_CAM_RENDERING(Local_231.f_173) || iParam0)
			{
				if (!func_97())
				{
					func_91(0);
				}
				func_284(1);
				if ((!func_283() || BitTest(Local_231.f_5, 1)) || func_222())
				{
					HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
				}
				else
				{
					HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
					HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
					HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
					func_100();
					func_281(1);
					iVar0 = INTERIOR::GET_INTERIOR_FROM_ENTITY(NETWORK::NET_TO_ENT(Local_231.f_163));
					if (INTERIOR::IS_VALID_INTERIOR(iVar0))
					{
						Global_1964670.f_30 = iVar0;
						if (!BitTest(Local_231.f_5, 8))
						{
							Local_231.f_127 = func_280(INTERIOR::GET_INTERIOR_HEADING(iVar0));
							INTERIOR::GET_INTERIOR_LOCATION_AND_NAMEHASH(iVar0, &(Local_231.f_151), &(Local_231.f_17));
							MISC::SET_BIT(&(Local_231.f_5), 8);
						}
						iVar1 = 0;
						if (func_279(Local_231.f_154.f_2, 43f, 48.7f))
						{
							iVar1 = 1;
						}
						if (Global_1964670.f_14 == -1f)
						{
							HUD::SET_RADAR_ZOOM_PRECISE(1f);
						}
						else
						{
							HUD::SET_RADAR_ZOOM_PRECISE(Global_1964670.f_14);
						}
						if ((!func_187(PLAYER::PLAYER_ID()) && !func_276(PLAYER::PLAYER_ID())) && !func_17())
						{
							if (!func_275())
							{
								func_274(1);
							}
						}
						if (!func_17())
						{
							HUD::SET_BIGMAP_ACTIVE(false, false);
						}
						HUD::SET_RADAR_AS_INTERIOR_THIS_FRAME(Local_231.f_17, Local_231.f_151, Local_231.f_151.f_1, SYSTEM::FLOOR(Local_231.f_127), iVar1);
					}
					else
					{
						Local_231.f_17 = -1;
						if (Global_1964670.f_14 == -1f)
						{
							HUD::SET_RADAR_ZOOM_PRECISE(0f);
						}
						else
						{
							HUD::SET_RADAR_ZOOM_PRECISE(Global_1964670.f_14);
						}
						if (!func_275() && !func_17())
						{
							func_274(1);
						}
						if (!func_17())
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

void func_274(int iParam0)
{
	Global_2699717 = iParam0;
}

bool func_275()
{
	return Global_2699717;
}

int func_276(bool bParam0)
{
	if (func_278(bParam0))
	{
		return 1;
	}
	if (func_277(bParam0))
	{
		return 1;
	}
	return 0;
}

int func_277(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_111(iParam0, 9);
	}
	return 0;
}

int func_278(var uParam0)
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 != -1)
	{
		return BitTest(Global_1892925[iVar0 /*615*/].f_1, 0);
	}
	return 0;
}

int func_279(float fParam0, float fParam1, float fParam2)
{
	if (fParam0 >= fParam1 && fParam0 < fParam2)
	{
		return 1;
	}
	return 0;
}

float func_280(float fParam0)
{
	return (fParam0 * 57.29578f);
}

void func_281(bool bParam0)
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
		func_282(iVar0);
		iVar0++;
	}
}

void func_282(int iParam0)
{
	Global_102538.f_217[iParam0] = 1;
	Global_102538.f_216 = 1;
}

bool func_283()
{
	return BitTest(Global_1964670, 4);
}

void func_284(int iParam0)
{
	if (Global_2733190.f_3751 != iParam0)
	{
		Global_2733190.f_3751 = iParam0;
	}
}

void func_285()
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
	
	if ((BitTest(Local_231.f_5, 1) || func_222()) || func_103())
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
			if (func_39())
			{
				fVar1 = 10f;
			}
			fVar6 = (30f * SYSTEM::TIMESTEP());
			func_290();
			PAD::ALLOW_ALTERNATIVE_SCRIPT_CONTROLS_LAYOUT(2);
			func_289(&(Local_231[0]), &(Local_231[1]), &(Local_231[2]), &(Local_231[3]), 0, 0);
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
			if (func_29(&(Local_231.f_283), 750, 0))
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
					func_239(&(Local_231.f_283), 0, 0);
				}
			}
			if (bVar7 && !func_288())
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
				if ((fVar4 != 0f || Local_231[0] != 0) && !func_97())
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
			else if (((Local_231[0] != 0 || Local_231[1] != 0) && !func_288()) && !func_97())
			{
				Var21 = { ENTITY::GET_ENTITY_ROTATION(NETWORK::NET_TO_OBJ(Local_231.f_163), 2) };
				if (func_288())
				{
					if (func_287())
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
					if ((Local_231[0] == 0 && !func_97()) || func_288())
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
			else if (!func_287() && !func_288())
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
					uVar36 = func_286(-(((fVar35 * 0.05f) * fVar6) * (fVar0 - 25f)));
					uVar37 = func_286(-(((fVar34 * 0.05f) * fVar6) * (fVar0 - 25f)));
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

float func_286(float fParam0)
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

bool func_287()
{
	return BitTest(Local_231.f_5, 22);
}

bool func_288()
{
	return BitTest(Local_231.f_5, 21);
}

void func_289(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)
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

void func_290()
{
	if (func_159())
	{
		switch (Local_231.f_27)
		{
			case 0:
				Local_231.f_131 = 90f;
				Local_231.f_130 = 90f;
				break;
			
			case 1:
				Local_231.f_131 = 75f;
				Local_231.f_130 = 75f;
				break;
			
			case 2:
				Local_231.f_131 = 45f;
				Local_231.f_130 = 45f;
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

void func_291()
{
	int iVar0;
	int iVar1;
	
	if (func_89(PLAYER::PLAYER_ID(), 0))
	{
		iVar0 = func_204(0);
		Local_231.f_145 = { func_294(&Local_231) };
		if (!ENTITY::DOES_ENTITY_EXIST(Local_231.f_166))
		{
			if (!func_293(Local_231.f_145))
			{
				if (func_203(iVar0))
				{
					Local_231.f_166 = OBJECT::CREATE_OBJECT(iVar0, Local_231.f_145, false, false, true);
					ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_231.f_166, Local_231.f_145, false, false, true);
					ENTITY::SET_ENTITY_COLLISION(Local_231.f_166, true, false);
					ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_231.f_166, true, 1);
					ENTITY::SET_ENTITY_RECORDS_COLLISIONS(Local_231.f_166, true);
					ENTITY::SET_ENTITY_HEADING(Local_231.f_166, func_292());
					ENTITY::FREEZE_ENTITY_POSITION(Local_231.f_166, true);
					ENTITY::SET_ENTITY_VISIBLE(Local_231.f_166, false, false);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
				}
			}
		}
		else
		{
			iVar1 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(Local_231.f_145, 2f, iVar0, false, false, false);
			if (ENTITY::DOES_ENTITY_EXIST(iVar1) && iVar1 != Local_231.f_166)
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1))
				{
					ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(iVar1, false, false);
					ENTITY::FREEZE_ENTITY_POSITION(iVar1, true);
					ENTITY::SET_ENTITY_VISIBLE(iVar1, true, false);
				}
				else
				{
					NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(iVar1);
				}
			}
		}
	}
	else
	{
		Local_231.f_145 = { func_294(&Local_231) };
	}
}

float func_292()
{
	if (Global_1964670.f_12 != 0f)
	{
		return Global_1964670.f_12;
	}
	return 0f;
}

int func_293(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

Vector3 func_294(var uParam0)
{
	if (!func_293(Global_1964670.f_15))
	{
		return Global_1964670.f_15;
	}
	else
	{
		return uParam0->f_145;
	}
	return 0f, 0f, 0f;
}

void func_295()
{
	if (Local_231.f_35 != -1)
	{
		AUDIO::STOP_SOUND(Local_231.f_35);
		AUDIO::RELEASE_SOUND_ID(Local_231.f_35);
		Local_231.f_35 = -1;
	}
}

int func_296(bool bParam0)
{
	if (HUD::IS_PAUSE_MENU_ACTIVE() || NETWORK::IS_COMMERCE_STORE_OPEN())
	{
		return 1;
	}
	if (NETWORK::NETWORK_TEXT_CHAT_IS_TYPING())
	{
		return 1;
	}
	if (func_196())
	{
		return 1;
	}
	if (func_301(PLAYER::PLAYER_ID()) && !func_300())
	{
		return 1;
	}
	if (func_187(PLAYER::PLAYER_ID()))
	{
		if (BitTest(Global_2731782, 0))
		{
			return 1;
		}
	}
	if (Global_1935401 || Global_1574974)
	{
		func_299(1);
		return 1;
	}
	if (((func_297(0) || func_192(1)) || func_191()) && !bParam0)
	{
		func_91(0);
		func_100();
		func_120();
		return 1;
	}
	return 0;
}

int func_297(bool bParam0)
{
	if (PAD::GET_ALLOW_MOVEMENT_WHILE_ZOOMED())
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (func_298(PLAYER::PLAYER_PED_ID()))
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

int func_298(int iParam0)
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

void func_299(bool bParam0)
{
	if (bParam0)
	{
		if (!func_53())
		{
			MISC::SET_BIT(&Global_1964670, 20);
		}
	}
	else if (func_53())
	{
		MISC::CLEAR_BIT(&Global_1964670, 20);
	}
}

bool func_300()
{
	return (BitTest(Global_4718592.f_31, 12) && BitTest(Global_1971473, 0));
}

int func_301(bool bParam0)
{
	if (func_137(bParam0, 0))
	{
		return 1;
	}
	if (func_302())
	{
		if (bParam0 == PLAYER::PLAYER_ID())
		{
			return 1;
		}
	}
	if (BitTest(Global_2658293[bParam0 /*468*/].f_203, 2))
	{
		return 1;
	}
	return 0;
}

bool func_302()
{
	return BitTest(Global_2621446, 3);
}

void func_303()
{
	float fVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	int iVar6;
	float fVar7;
	int iVar8;
	int iVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	float fVar14;
	struct<3> Var15;
	struct<3> Var18;
	float fVar21;
	struct<3> Var22;
	float fVar25;
	float fVar26;
	float fVar27;
	float fVar28;
	struct<3> Var29;
	struct<3> Var32;
	float fVar35;
	float fVar36;
	var uVar37;
	var uVar38;
	struct<3> Var39;
	var uVar42;
	
	if (!func_103() || func_222())
	{
		return;
	}
	if (func_51() && func_296(0))
	{
		return;
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_231.f_163) && !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_OBJ(Local_231.f_163), false))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_231.f_163))
		{
			fVar0 = 40f;
			fVar1 = 30f;
			fVar2 = 30f;
			iVar3 = 1;
			fVar4 = ENTITY::GET_ENTITY_ROLL(NETWORK::NET_TO_OBJ(Local_231.f_163));
			fVar5 = ENTITY::GET_ENTITY_PITCH(NETWORK::NET_TO_OBJ(Local_231.f_163));
			iVar6 = 1;
			if (func_17())
			{
				if (func_296(1))
				{
					iVar6 = 0;
				}
			}
			else if (func_296(0))
			{
				iVar6 = 0;
			}
			if (func_17())
			{
				if (!func_151())
				{
					iVar6 = 0;
				}
				fVar2 = 80f;
			}
			fVar7 = (30f * MISC::GET_FRAME_TIME());
			func_290();
			PAD::ALLOW_ALTERNATIVE_SCRIPT_CONTROLS_LAYOUT(2);
			func_289(&(Local_231[0]), &(Local_231[1]), &(Local_231[2]), &(Local_231[3]), 0, 0);
			if (PAD::IS_USING_KEYBOARD_AND_MOUSE(0))
			{
				iVar3 = 2;
				if (func_17())
				{
					iVar3 = 3;
				}
				Local_231[2] = (Local_231[2] * iVar3);
				Local_231[3] = (Local_231[3] * iVar3);
			}
			if (PAD::IS_LOOK_INVERTED())
			{
				Local_231[3] = (Local_231[3] * -1);
				Local_231[1] = (Local_231[1] * -1);
			}
			if (Local_231[3] != 0 && Local_231[2] != 0)
			{
				iVar8 = func_305(MISC::ABSI(Local_231[3]), MISC::ABSI(Local_231[2]));
				Local_231.f_133 = (1f / (127f / IntToFloat(iVar8)));
			}
			else if (Local_231[1] != 0 && Local_231[0] != 0)
			{
				iVar9 = func_305(MISC::ABSI(Local_231[1]), MISC::ABSI(Local_231[0]));
				Local_231.f_133 = (1f / (127f / IntToFloat(iVar9)));
			}
			else if (Local_231[3] != 0)
			{
				Local_231.f_133 = (1f / (127f / IntToFloat(Local_231[3])));
			}
			else if (Local_231[2] != 0)
			{
				Local_231.f_133 = (1f / (127f / IntToFloat(Local_231[2])));
			}
			else if (Local_231[1] != 0)
			{
				Local_231.f_133 = (1f / (127f / IntToFloat(Local_231[1])));
			}
			else if (Local_231[0] != 0)
			{
				Local_231.f_133 = (1f / (127f / IntToFloat(Local_231[0])));
			}
			else
			{
				Local_231.f_133 = 0f;
			}
			if (iVar6 && ((Local_231[2] != 0 || Local_231[3] != 0) || (Local_231[0] != 0 || Local_231[1] != 0)))
			{
				if (Local_231[2] != 0)
				{
					fVar10 = (1f / (127f / IntToFloat(Local_231[2])));
				}
				else if (Local_231[0] != 0)
				{
					fVar10 = (1f / (127f / IntToFloat(Local_231[0])));
				}
				else
				{
					fVar10 = 0f;
				}
				if (Local_231[3] != 0)
				{
					fVar11 = (1f / (127f / IntToFloat(Local_231[3])));
				}
				else if (Local_231[1] != 0)
				{
					fVar11 = (1f / (127f / IntToFloat(Local_231[1])));
				}
				else
				{
					fVar11 = 0f;
				}
				Var15 = { ENTITY::GET_ENTITY_ROTATION(NETWORK::NET_TO_OBJ(Local_231.f_163), 2) };
				fVar12 = (((fVar11 * 0.05f) * fVar7) * Local_231.f_134);
				fVar13 = -(((fVar10 * 0.05f) * fVar7) * Local_231.f_134);
				if ((fVar4 != 0f || Local_231[2] != 0) || Local_231[0] != 0)
				{
					if (Local_231[2] != 0)
					{
						fVar21 = (1f / (127f / IntToFloat(Local_231[2])));
						fVar14 = -(((fVar21 * 0.05f) * fVar7) * (fVar0 - 25f));
					}
					else if (Local_231[0] != 0)
					{
						fVar21 = (1f / (127f / IntToFloat(Local_231[0])));
						fVar14 = -(((fVar21 * 0.05f) * fVar7) * (fVar0 - 25f));
					}
					else
					{
						if (fVar4 > 0.1f || fVar4 < -0.1f)
						{
							if (fVar4 > 0f)
							{
								fVar21 = -1f;
							}
							else
							{
								fVar21 = 1f;
							}
						}
						if (Var15.f_1 != 0f)
						{
							if (Var15.f_1 < 2f && Var15.f_1 > 0f)
							{
								fVar21 = 0.0001f;
							}
							else if (Var15.f_1 > -2f && Var15.f_1 < 0f)
							{
								fVar21 = -0.0001f;
							}
						}
						else
						{
							fVar21 = 0f;
						}
						fVar14 = -(((fVar21 * 0.05f) * fVar7) * (fVar0 - 25f));
					}
				}
				else
				{
					fVar14 = 0f;
				}
				Var18 = { Vector(fVar13, fVar14, fVar12) + Var15 };
				if (fVar4 != 0f)
				{
					if (Local_231[2] == 0 && Local_231[0] == 0)
					{
						if (Var18.f_1 > fVar1)
						{
							Var18.f_1 = fVar1;
						}
						else if (Var18.f_1 < -fVar1)
						{
							Var18.f_1 = -fVar1;
						}
					}
					else if (Var18.f_1 > fVar1)
					{
						Var18.f_1 = fVar1;
					}
					else if (Var18.f_1 < -fVar1)
					{
						Var18.f_1 = -fVar1;
					}
				}
				if (Var18.f_0 > fVar2)
				{
					Var18.f_0 = fVar2;
				}
				else if (Var18.f_0 < -fVar2)
				{
					Var18.f_0 = -fVar2;
				}
				if (!BitTest(Local_231.f_5, 12))
				{
					MISC::SET_BIT(&(Local_231.f_5), 12);
				}
				ENTITY::SET_ENTITY_ROTATION(NETWORK::NET_TO_OBJ(Local_231.f_163), Vector(0f, 0f, 0f) + Vector(Var18.f_2, Var18.f_1, Var18.f_0), 2, true);
			}
			else if (iVar6 && (((Local_231[2] != 0 || Local_231[3] != 0) || Local_231[0] != 0) || Local_231[1] != 0))
			{
				Var22 = { ENTITY::GET_ENTITY_ROTATION(NETWORK::NET_TO_OBJ(Local_231.f_163), 2) };
				if (func_288())
				{
					if (func_287())
					{
						fVar26 = -1f;
					}
				}
				else
				{
					if (Local_231[2] != 0)
					{
						fVar25 = (1f / (127f / IntToFloat(Local_231[2])));
					}
					else if (Local_231[0] != 0)
					{
						fVar25 = (1f / (127f / IntToFloat(Local_231[0])));
					}
					else
					{
						fVar25 = 0f;
					}
					if (Local_231[3] != 0)
					{
						fVar26 = (1f / (127f / IntToFloat(Local_231[3])));
					}
					else if (Local_231[1] != 0)
					{
						fVar26 = (1f / (127f / IntToFloat(Local_231[1])));
					}
					else
					{
						fVar26 = 0f;
					}
				}
				fVar27 = -(((fVar26 * 0.05f) * fVar7) * fVar0);
				fVar28 = -(((fVar25 * 0.05f) * fVar7) * fVar0);
				if (fVar4 != 0f)
				{
					if (Local_231[2] == 0 && Local_231[0] == 0)
					{
						if (fVar4 > 1f || fVar4 < -1f)
						{
							if (fVar4 > 0f)
							{
								fVar25 = -1f;
							}
							else
							{
								fVar25 = 1f;
							}
						}
						if (Var22.f_1 < 2f && Var22.f_1 > 0f)
						{
							fVar25 = 0.0001f;
						}
						else if (Var22.f_1 > -2f && Var22.f_1 < 0f)
						{
							fVar25 = -0.0001f;
						}
						fVar28 = -(((fVar25 * 0.05f) * fVar7) * (fVar0 - 25f));
					}
				}
				Var29 = { Vector(0f, fVar28, fVar27) + Var22 };
				if (Var29.f_1 > fVar1)
				{
					Var29.f_1 = fVar1;
				}
				else if (Var29.f_1 < -fVar1)
				{
					Var29.f_1 = -fVar1;
				}
				if (Var29.f_0 > fVar2)
				{
					Var29.f_0 = fVar2;
				}
				else if (Var29.f_0 < -fVar2)
				{
					Var29.f_0 = -fVar2;
				}
				if (BitTest(Local_231.f_5, 12))
				{
					MISC::CLEAR_BIT(&(Local_231.f_5), 12);
				}
				ENTITY::SET_ENTITY_ROTATION(NETWORK::NET_TO_OBJ(Local_231.f_163), Vector(0f, 0f, 0f) + Vector(Var22.f_2, Var29.f_1, Var29.f_0), 2, true);
			}
			else
			{
				Var32 = { ENTITY::GET_ENTITY_ROTATION(NETWORK::NET_TO_OBJ(Local_231.f_163), 2) };
				if (fVar4 != 0f || fVar5 != 0f)
				{
					if (Var32.f_1 != 0f)
					{
						if (Var32.f_1 < 0f)
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
					if (fVar5 != 0f)
					{
						if (Var32.f_0 < 0f)
						{
							fVar36 = -1f;
						}
						else
						{
							fVar36 = 1f;
						}
					}
					else
					{
						fVar36 = 0f;
					}
					if (Var32.f_1 != 0f)
					{
						if (Var32.f_1 < 2f && Var32.f_1 > 0f)
						{
							fVar35 = 0.0001f;
						}
						else if (Var32.f_1 > -2f && Var32.f_1 < 0f)
						{
							fVar35 = -0.0001f;
						}
					}
					else
					{
						fVar35 = 0f;
					}
					if (Var32.f_0 != 0f)
					{
						if (Var32.f_0 < 2f && Var32.f_0 > 0f)
						{
							fVar36 = 0.0001f;
						}
						else if (Var32.f_0 > -2f && Var32.f_0 < 0f)
						{
							fVar36 = -0.0001f;
						}
					}
					else
					{
						fVar36 = 0f;
					}
					uVar37 = func_286(-(((fVar36 * 0.05f) * fVar7) * (fVar0 - 25f)));
					uVar38 = func_286(-(((fVar35 * 0.05f) * fVar7) * (fVar0 - 25f)));
					Var39 = { Vector(0f, uVar38, uVar37) + Var32 };
					if (BitTest(Local_231.f_5, 12))
					{
						Var39.f_0 = Var32.f_0;
					}
					uVar42 = Var32.f_2;
					if (func_17())
					{
						if (!func_151())
						{
							uVar42 = Local_231.f_118;
							Var39.f_1 = 0f;
						}
					}
					ENTITY::SET_ENTITY_ROTATION(NETWORK::NET_TO_OBJ(Local_231.f_163), Vector(0f, 0f, 0f) + Vector(uVar42, Var39.f_1, Var39.f_0), 2, true);
					if (func_17())
					{
						if (MISC::ABSF(fVar4) < 2.5f && MISC::ABSF(fVar5) < 2.5f)
						{
							func_304(1);
						}
					}
				}
				else if (func_17())
				{
					func_304(1);
				}
			}
		}
		else
		{
			NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_231.f_163);
		}
	}
}

void func_304(bool bParam0)
{
	if (!bParam0)
	{
		if (BitTest(Local_231.f_6, 6))
		{
			MISC::CLEAR_BIT(&(Local_231.f_6), 6);
		}
	}
	else if (!BitTest(Local_231.f_6, 6))
	{
		MISC::SET_BIT(&(Local_231.f_6), 6);
	}
}

int func_305(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

void func_306()
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	if (func_51())
	{
		return;
	}
	if (func_283())
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_231.f_163))
		{
			if (!HUD::DOES_BLIP_EXIST(Local_231.f_175))
			{
				Local_231.f_175 = func_319(Local_231.f_154, 0);
				HUD::SET_BLIP_SPRITE(Local_231.f_175, func_318());
				if (func_39() && !HUD::DOES_BLIP_EXIST(Local_231.f_176))
				{
					Local_231.f_176 = func_315(PLAYER::PLAYER_PED_ID(), 0, 0);
					HUD::SET_BLIP_SPRITE(Local_231.f_176, 6);
					HUD::SHOW_HEIGHT_ON_BLIP(Local_231.f_176, false);
					HUD::SET_BLIP_SCALE(Local_231.f_176, 0.7f);
					HUD::SET_BLIP_PRIORITY(Local_231.f_176, (13 - 1));
					if (func_314(PLAYER::PLAYER_ID()) != -1)
					{
						func_310(&(Local_231.f_176), func_312(func_314(PLAYER::PLAYER_ID())));
					}
					else
					{
						func_310(&(Local_231.f_176), func_309());
					}
					HUD::SET_BLIP_HIDDEN_ON_LEGEND(Local_231.f_176, true);
				}
			}
			else
			{
				fVar0 = func_308(Local_231.f_128);
				fVar1 = Local_231.f_154;
				fVar2 = Local_231.f_154.f_1;
				HUD::SET_BLIP_DISPLAY(Local_231.f_175, 2);
				HUD::SET_BLIP_COORDS(Local_231.f_175, Local_231.f_154);
				if (((func_33() || func_54()) && HUD::IS_PAUSE_MENU_ACTIVE()) && (NETWORK::NETWORK_IS_ACTIVITY_SESSION() || func_47(0)))
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
				HUD::LOCK_MINIMAP_POSITION(fVar1, fVar2);
				HUD::SET_BLIP_ROTATION(Local_231.f_175, SYSTEM::ROUND(fVar0));
				HUD::SET_BLIP_SCALE(Local_231.f_175, 1f);
				HUD::SET_BLIP_PRIORITY(Local_231.f_175, 9);
				HUD::LOCK_MINIMAP_ANGLE(SYSTEM::ROUND(fVar0));
				if (HUD::DOES_BLIP_EXIST(Local_231.f_176))
				{
					HUD::SET_BLIP_ROTATION(Local_231.f_176, func_307(PLAYER::PLAYER_PED_ID()));
				}
			}
		}
	}
}

int func_307(int iParam0)
{
	float fVar0;
	
	fVar0 = ENTITY::GET_ENTITY_HEADING_FROM_EULERS(iParam0);
	return SYSTEM::ROUND(fVar0);
}

float func_308(float fParam0)
{
	if (fParam0 > 180f)
	{
		return (fParam0 - 180f);
	}
	return (fParam0 + 180f);
}

int func_309()
{
	return 10;
}

void func_310(var uParam0, int iParam1)
{
	int iVar0;
	
	if (HUD::DOES_BLIP_EXIST(*uParam0))
	{
		iVar0 = func_311(iParam1);
		HUD::SET_BLIP_COLOUR(*uParam0, iVar0);
	}
}

int func_311(int iParam0)
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

int func_312(int iParam0)
{
	int iVar0;
	
	if (iParam0 > -1)
	{
		iVar0 = func_313(iParam0);
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

var func_313(int iParam0)
{
	return Global_2649161.f_818.f_44[iParam0 /*2*/].f_1;
}

int func_314(bool bParam0)
{
	if (func_9(bParam0))
	{
		if (func_227(bParam0, 1))
		{
			return Global_2649161.f_818.f_11[func_244(bParam0)];
		}
	}
	return -1;
}

int func_315(int iParam0, bool bParam1, bool bParam2)
{
	return func_316(iParam0, !bParam1, bParam2);
}

int func_316(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = HUD::ADD_BLIP_FOR_ENTITY(iParam0);
	if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
	{
		HUD::SET_BLIP_SCALE(iVar0, func_317(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
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
		HUD::SET_BLIP_SCALE(iVar0, func_317(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
		HUD::SET_BLIP_AS_FRIENDLY(iVar0, bParam1);
	}
	else if (ENTITY::IS_ENTITY_AN_OBJECT(iParam0))
	{
		HUD::SET_BLIP_SCALE(iVar0, func_317(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
	}
	return iVar0;
}

float func_317(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

int func_318()
{
	if (func_17())
	{
		return 548;
	}
	return 627;
}

int func_319(struct<3> Param0, bool bParam3)
{
	int iVar0;
	
	iVar0 = HUD::ADD_BLIP_FOR_COORD(Param0);
	HUD::SET_BLIP_SCALE(iVar0, func_317(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
	HUD::SET_BLIP_ROUTE(iVar0, bParam3);
	return iVar0;
}

void func_320()
{
	if (func_51())
	{
		if (Local_231.f_154.f_2 >= (func_130() - 20f))
		{
			if (AUDIO::HAS_SOUND_FINISHED(Local_231.f_39))
			{
				Local_231.f_39 = AUDIO::GET_SOUND_ID();
				AUDIO::PLAY_SOUND_FRONTEND(Local_231.f_39, "Out_Of_Bounds_Alarm_Loop", Local_231.f_161, true);
			}
		}
		else if (!AUDIO::HAS_SOUND_FINISHED(Local_231.f_39))
		{
			AUDIO::STOP_SOUND(Local_231.f_39);
			AUDIO::RELEASE_SOUND_ID(Local_231.f_39);
			Local_231.f_39 = -1;
		}
	}
}

void func_321()
{
	if (((func_54() || func_159()) || func_39()) || func_182())
	{
		switch (Local_231.f_246)
		{
			case 0:
				func_344();
				break;
			
			case 1:
				func_331();
				break;
			
			case 2:
				func_329();
				break;
			
			case 3:
				func_322();
				break;
			}
	}
}

void func_322()
{
	func_92(1);
	if (!func_328())
	{
		CAM::DO_SCREEN_FADE_IN(500);
	}
	func_326(0);
	func_324(0);
	func_323(0);
}

void func_323(int iParam0)
{
	if (Local_231.f_246 != iParam0)
	{
		Local_231.f_246 = iParam0;
	}
}

void func_324(bool bParam0)
{
	if (bParam0)
	{
		if (!func_325())
		{
			MISC::SET_BIT(&Global_1964670, 17);
		}
	}
	else if (func_325())
	{
		MISC::CLEAR_BIT(&Global_1964670, 17);
	}
}

bool func_325()
{
	return BitTest(Global_1964670, 17);
}

void func_326(bool bParam0)
{
	if (bParam0)
	{
		if (!func_327())
		{
			MISC::SET_BIT(&Global_1964670, 18);
		}
	}
	else if (func_327())
	{
		MISC::CLEAR_BIT(&Global_1964670, 18);
	}
}

bool func_327()
{
	return BitTest(Global_1964670, 18);
}

bool func_328()
{
	return Global_1950702.f_765;
}

void func_329()
{
	if (func_327() || HUD::IS_PAUSE_MENU_ACTIVE())
	{
		func_92(1);
		func_330(0);
		MISC::CLEAR_BIT(&(Local_231.f_5), 16);
		func_323(3);
	}
}

void func_330(bool bParam0)
{
	if (bParam0)
	{
		if (!func_97())
		{
			MISC::SET_BIT(&Global_1964670, 19);
		}
	}
	else if (func_97())
	{
		MISC::CLEAR_BIT(&Global_1964670, 19);
	}
}

void func_331()
{
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		if (func_29(&(Local_231.f_273), 3000, 0))
		{
			if (func_343())
			{
				if (BitTest(Global_4524923, 2) || func_29(&(Local_231.f_277), 8000, 0))
				{
					if (!BitTest(Global_4524923, 2))
					{
					}
					CAM::DO_SCREEN_FADE_IN(500);
					func_332(PLAYER::PLAYER_ID(), 1, 0, 0);
					func_28(&(Local_231.f_273));
					func_28(&(Local_231.f_277));
					func_323(2);
				}
			}
			else if (func_29(&(Local_231.f_277), 15000, 0))
			{
				func_28(&(Local_231.f_273));
				func_28(&(Local_231.f_277));
				func_92(1);
				func_330(0);
				MISC::CLEAR_BIT(&(Local_231.f_5), 16);
				func_323(3);
			}
		}
	}
}

void func_332(bool bParam0, bool bParam1, int iParam2, int iParam3)
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
	if (func_342())
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
		PLAYER::SET_PLAYER_CONTROL(bParam0, bParam1, iVar0);
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
		if (!func_340())
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
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(bParam0) && (PLAYER::IS_PLAYER_PLAYING(bParam0) || iParam3 == 1))
		{
			if (iParam3 && ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYER_PED(bParam0), false))
			{
				return;
			}
			iVar27 = PLAYER::GET_PLAYER_PED(bParam0);
			if (!bVar20)
			{
				if ((bVar19 && bParam1 == 0) && NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					NETWORK::FADE_OUT_LOCAL_PLAYER(true);
				}
				else if (bVar14 || ((!func_137(PLAYER::PLAYER_ID(), 0) && !func_302()) && !func_301(PLAYER::PLAYER_ID())))
				{
					ENTITY::SET_ENTITY_VISIBLE(iVar27, !bVar14, false);
				}
				if (!bVar14)
				{
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bVar19)
					{
						NETWORK::FADE_OUT_LOCAL_PLAYER(false);
					}
					Global_2658293[bParam0 /*468*/].f_258 = 0;
				}
			}
			if (bParam1)
			{
				if (bVar1)
				{
					func_337(0, 0, 0);
					if (bVar25)
					{
						STREAMING::CLEAR_FOCUS();
					}
				}
				if (!func_336(iVar27) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(iVar27))
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
				PLAYER::SET_PLAYER_INVINCIBLE(bParam0, false);
				PLAYER::SET_PLAYER_INVINCIBLE_BUT_HAS_REACTIONS(bParam0, false);
				if (PED::HAS_PED_HEAD_BLEND_FINISHED(iVar27) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(iVar27))
				{
					PED::FINALIZE_HEAD_BLEND(iVar27);
				}
				PED::SET_PED_CAN_RAGDOLL(iVar27, true);
				if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) == 0)
				{
					func_335();
					func_334();
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
				Global_2658293[bParam0 /*468*/].f_259 = 0;
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
				if (!func_336(iVar27) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(iVar27))
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
					if (func_333(Global_4718592.f_197291))
					{
						ENTITY::FREEZE_ENTITY_POSITION(iVar27, true);
					}
				}
				if (func_47(1))
				{
					bVar10 = false;
				}
				if (bVar10)
				{
					PLAYER::SET_PLAYER_INVINCIBLE(bParam0, false);
				}
				else
				{
					PLAYER::SET_PLAYER_INVINCIBLE(bParam0, true);
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
			PLAYER::SET_PLAYER_CONTROL(bParam0, bParam1, iVar28);
		}
	}
}

bool func_333(int iParam0)
{
	return iParam0 == 17;
}

void func_334()
{
	struct<3> Var0;
	
	Global_2673273.f_1101 = 0;
	Global_2673273.f_1102 = 0;
	Global_2673273.f_1103 = { 9999.9f, 9999.9f, 9999.9f };
	Global_2673273.f_1108 = -1;
	Global_2673273.f_1109 = 0;
	Global_2635562.f_2995 = { Var0 };
}

void func_335()
{
	Global_2635562.f_703 = 0;
	Global_2635562.f_3038 = 0;
	Global_2635562.f_516 = 0;
	Global_2635562.f_607 = 0;
	Global_2658293[PLAYER::PLAYER_ID() /*468*/].f_221 = 0;
	Global_2635562.f_2993 = 0;
}

int func_336(int iParam0)
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

void func_337(bool bParam0, int iParam1, int iParam2)
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
				func_339();
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
				MISC::SET_BIT(&(Global_2621446.f_67), true);
			}
		}
		if (func_137(PLAYER::PLAYER_ID(), 0))
		{
			NETWORK::NETWORK_SET_IN_SPECTATOR_MODE_EXTENDED(bParam0, iParam1, true);
		}
		else
		{
			NETWORK::NETWORK_SET_IN_SPECTATOR_MODE(bParam0, iParam1);
		}
		HUD::SET_MINIMAP_IN_SPECTATOR_MODE(bParam0, iParam1);
		func_338(joaat("mpply_is_char_spectating"), bParam0);
	}
}

void func_338(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_BOOL(iVar0, bParam1, true);
	}
}

void func_339()
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
			MISC::SET_BIT(&(Global_2621446.f_67), false);
		}
	}
}

int func_340()
{
	if (func_341() == 0)
	{
		return 1;
	}
	return 0;
}

int func_341()
{
	return Global_1574635.f_18;
}

int func_342()
{
	if (BitTest(Global_1845298[PLAYER::PLAYER_ID() /*881*/].f_879, 2) && !Global_2686119.f_2847.f_220 == -1)
	{
		return 1;
	}
	return 0;
}

int func_343()
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("appcamera")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_344()
{
	if (func_366())
	{
		if (PAD::IS_CONTROL_JUST_RELEASED(2, 201) || PAD::IS_DISABLED_CONTROL_JUST_RELEASED(2, 201))
		{
			if (!func_343())
			{
				if (CAM::IS_SCREEN_FADED_IN())
				{
					func_330(1);
					func_148(-1);
					func_332(PLAYER::PLAYER_ID(), 0, 512, 0);
					CAM::DO_SCREEN_FADE_OUT(500);
					func_364(1, -1);
					func_345(3, 1, 1, 0);
					func_30(&(Local_231.f_273), 0, 0);
					func_30(&(Local_231.f_277), 0, 0);
					func_323(1);
				}
			}
		}
	}
}

int func_345(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (Global_80337)
	{
		if (((iParam0 != 17 && iParam0 != 3) && iParam0 != 24) && iParam0 != 1)
		{
			return 0;
		}
		if (!BitTest(Global_4524923, 14))
		{
			if (iParam0 == 17)
			{
				MISC::SET_BIT(&Global_4524923, 14);
				MISC::SET_BIT(&Global_4524923, 16);
			}
			if (iParam0 == 3)
			{
				MISC::SET_BIT(&Global_4524923, 14);
				MISC::SET_BIT(&Global_4524923, 15);
			}
			if (iParam0 == 24)
			{
				MISC::SET_BIT(&Global_4524923, 14);
				MISC::SET_BIT(&Global_4524923, 27);
			}
			if (iParam0 == 1)
			{
				MISC::SET_BIT(&Global_4524923, 14);
				MISC::SET_BIT(&Global_4524923, 29);
			}
		}
		if (Global_9509[iParam0 /*15*/].f_9 == 0)
		{
			func_357();
		}
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_9509[iParam0 /*15*/].f_9) > 0)
		{
			MISC::CLEAR_BIT(&Global_4524923, 14);
			MISC::CLEAR_BIT(&Global_4524923, 16);
			MISC::CLEAR_BIT(&Global_4524923, 15);
			MISC::CLEAR_BIT(&Global_4524923, 27);
			MISC::CLEAR_BIT(&Global_4524923, 29);
			return 1;
		}
		else
		{
			return 0;
		}
	}
	func_350();
	if (Global_21649.f_1 == 9)
	{
		return 0;
	}
	if (iParam2 == 0)
	{
		if (func_96(0) == 1)
		{
			return 0;
		}
	}
	if (Global_21615 == 1)
	{
		return 0;
	}
	if (Global_21649.f_1 == 7)
	{
		return 0;
	}
	if (iParam1 == 1)
	{
	}
	if (!SCRIPT::IS_THREAD_ACTIVE(Global_21646))
	{
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand")) == 0)
		{
			if (Global_21649.f_1 < 4)
			{
				func_349("cellphone_flashhand");
				if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand")) == 0)
				{
					Global_21646 = SYSTEM::START_NEW_SCRIPT("cellphone_flashhand", 1424);
				}
				SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("cellphone_flashhand");
			}
		}
	}
	while (!Global_21631)
	{
		SYSTEM::WAIT(0);
	}
	func_357();
	func_346();
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_9509[iParam0 /*15*/].f_9) == 0)
	{
		Global_10125 = 0;
		Global_21649.f_1 = 7;
		func_349(&(Global_9509[iParam0 /*15*/].f_5));
		if (bParam3)
		{
			if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_9509[iParam0 /*15*/].f_9) == 0)
			{
				Global_21647 = SYSTEM::START_NEW_SCRIPT(&(Global_9509[iParam0 /*15*/].f_5), 4000);
			}
		}
		else if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_9509[iParam0 /*15*/].f_9) == 0)
		{
			Global_21647 = SYSTEM::START_NEW_SCRIPT(&(Global_9509[iParam0 /*15*/].f_5), 2600);
		}
		SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED(&(Global_9509[iParam0 /*15*/].f_5));
		return 1;
	}
	return 1;
}

void func_346()
{
	if (Global_80337 == 0)
	{
		Global_9509[14 /*15*/].f_4 = -99;
		Global_9509[4 /*15*/].f_4 = -99;
		if (Global_2697067)
		{
			if (func_348(14))
			{
				func_347(2, "CELL_2", 2, "appInternet", 6, 1, 1, 0, 0);
				func_347(14, "CELL_29", 7, "appMPJobListNEW", 12, 1, 1, 0, 0);
			}
			else
			{
				func_347(14, "CELL_29", 2, "appMPJobListNEW", 12, 1, 1, 0, 0);
			}
		}
		else
		{
			func_347(4, "CELL_23", 2, "appChecklist", 39, 1, 1, 0, 0);
		}
	}
}

void func_347(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	StringCopy(&(Global_9509[iParam0 /*15*/]), sParam1, 16);
	Global_9509[iParam0 /*15*/].f_4 = iParam2;
	StringCopy(&(Global_9509[iParam0 /*15*/].f_5), sParam3, 16);
	Global_9509[iParam0 /*15*/].f_9 = MISC::GET_HASH_KEY(sParam3);
	Global_9509[iParam0 /*15*/].f_10 = iParam4;
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

bool func_348(int iParam0)
{
	return Global_44921 == iParam0;
}

void func_349(char* sParam0)
{
	SCRIPT::REQUEST_SCRIPT(sParam0);
	while (!SCRIPT::HAS_SCRIPT_LOADED(sParam0))
	{
		SYSTEM::WAIT(0);
	}
}

void func_350()
{
	if (func_348(14))
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
		Global_21649 = func_351();
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

var func_351()
{
	func_352();
	return Global_114963.f_2370.f_539.f_4321;
}

void func_352()
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_355(Global_114963.f_2370.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_354(PLAYER::PLAYER_PED_ID());
			if (func_353(iVar0) && (!func_348(14) || Global_113909))
			{
				if (Global_114963.f_2370.f_539.f_4321 != iVar0 && func_353(Global_114963.f_2370.f_539.f_4321))
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

bool func_353(int iParam0)
{
	return iParam0 < 3;
}

int func_354(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_355(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_355(int iParam0)
{
	if (func_353(iParam0))
	{
		return func_356(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_356(int iParam0)
{
	return Global_2349[iParam0 /*29*/];
}

void func_357()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 35)
	{
		Global_9509[iVar0 /*15*/].f_4 = -99;
		iVar0++;
	}
	if (Global_80337 == 0)
	{
		iVar1 = 0;
		while (iVar2 < 161)
		{
			if (func_363(iVar2, Global_21649) == 1)
			{
				iVar1 = 1;
			}
			iVar2++;
		}
		func_347(7, "CELL_5", 0, "appEmail", 4, 1, 1, 0, 0);
		func_347(1, "CELL_1", 1, "appTextMessage", 2, 1, 1, 0, 0);
		func_347(4, "CELL_23", 2, "appChecklist", 39, 1, 1, 0, 0);
		if ((Global_44921 == 15 && func_362(0) == 0) && Global_9507 == 0)
		{
			func_347(20, "CELL_32", 3, "appSettings", 43, 1, 1, 0, 0);
			Global_21885 = 0;
			Global_9508 = 255;
		}
		else
		{
			func_347(20, "CELL_32", 3, "appSettings", 43, 1, 1, 0, 0);
			Global_21885 = 1;
			Global_9508 = 42;
		}
		if (iVar1 == 1)
		{
			func_347(0, "CELL_0", 4, "appContacts", 27, 1, 1, 0, 0);
		}
		else
		{
			func_347(0, "CELL_0", 4, "appContacts", 5, 1, 1, 0, 0);
		}
		func_347(10, "CELL_16", 5, "appSettings", 24, 1, 1, 0, 0);
		func_347(3, "CELL_7", 6, "appCamera", 1, 1, 1, 0, 0);
		func_347(2, "CELL_2", 7, "appInternet", 6, 1, 1, 0, 0);
		if (Global_114963.f_14060.f_89 == 1)
		{
			func_347(17, "CELL_28", 8, "appTrackify", 42, 1, 1, 0, 0);
		}
		if (Global_114963.f_14060.f_88 == 1)
		{
			func_347(16, "CELL_25", 0, "appContacts", 40, 2, 1, 0, 0);
		}
		func_347(26, "CELL_14", -99, "appContacts", 17, 2, 1, 0, 0);
		func_347(9, "CELL_13", -99, "appContacts", 13, 2, 1, 0, 0);
		func_347(11, "CELL_14", -99, "appContacts", 8, 2, 1, 0, 0);
		func_347(28, "CELL_15", -99, "appContacts", 17, 2, 1, 0, 0);
		func_347(29, "CELL_15", -99, "appContacts", 17, 2, 1, 0, 0);
		func_347(30, "CELL_15", -99, "appSettings", 17, 2, 1, 0, 0);
		func_347(31, "CELL_15", -99, "appContacts", 17, 2, 1, 0, 0);
		func_347(32, "CELL_15", -99, "appContacts", 17, 2, 1, 0, 0);
		func_347(33, "CELL_15", -99, "appSettings", 17, 2, 1, 0, 0);
	}
	else
	{
		func_347(7, "CELL_5", 0, "appMPEmail", 4, 1, 1, 0, 0);
		func_347(21, "CELL_37", 3, "AppJIPMP", 14, 1, 1, 0, 0);
		if (func_359())
		{
			func_347(23, "CELL_HACKER_ROB", 5, "appHackerDen", 62, 1, 1, 0, 0);
		}
		else
		{
			func_347(10, "CELL_16", 5, "appSettings", 24, 1, 1, 0, 0);
		}
		func_347(1, "CELL_1", 1, "appTextMessage", 2, 1, 1, 0, 0);
		func_347(3, "CELL_7", 6, "appCamera", 1, 1, 1, 0, 0);
		func_347(2, "CELL_2", 7, "appInternet", 6, 1, 1, 0, 0);
		func_347(14, "CELL_29", 4, "appMPJobListNEW", 12, 1, 1, 0, 0);
		func_347(0, "CELL_0", 2, "appContacts", 5, 1, 1, 0, 0);
		if (BitTest(Global_4524923, 4))
		{
			func_347(17, "CELL_28", 8, "appTrackify", 42, 1, 1, 0, 0);
		}
		func_347(13, "CELL_35", -99, "appMPCopBackup", 39, 1, 1, 0, 0);
		func_347(13, "CELL_20", -99, "appMPCopBackup", 16, 1, 1, 0, 0);
		func_347(15, "CELL_18", -99, "appContacts", 8, 1, 1, 0, 0);
		func_347(9, "CELL_13", -99, "appContacts", 13, 2, 1, 0, 0);
		func_347(5, "CELL_4", -99, "appContacts", 12, 2, 1, 0, 0);
		func_347(24, "CELL_15", 0, "appContacts", 17, 2, 1, 0, 0);
		func_347(25, "CELL_15", 1, "appContacts", 17, 2, 1, 0, 0);
		func_347(26, "CELL_15", 2, "appContacts", 17, 2, 1, 0, 0);
		func_347(27, "CELL_15", 3, "appContacts", 17, 2, 1, 0, 0);
		func_347(28, "CELL_15", 4, "appContacts", 17, 2, 1, 0, 0);
		func_347(29, "CELL_15", 5, "appContacts", 17, 2, 1, 0, 0);
		func_347(30, "CELL_15", 6, "appContacts", 17, 2, 1, 0, 0);
		func_347(31, "CELL_15", 7, "appContacts", 17, 2, 1, 0, 0);
		func_347(32, "CELL_15", 8, "appContacts", 17, 2, 1, 0, 0);
		func_347(33, "CELL_15", 9, "appContacts", 17, 2, 1, 0, 0);
		func_347(34, "CELL_15", 10, "appContacts", 17, 2, 1, 0, 0);
		if (!BitTest(Global_4524923, 4))
		{
			if (Global_1836231)
			{
				func_347(24, "CELL_CIRCBREAK", 8, "AppVLSI", 54, 1, 1, 0, 0);
			}
			else if (BitTest(Global_4524923, 20))
			{
				func_347(24, "CELL_SIGHTS", 8, "AppSettings", 59, 1, 1, 0, 0);
			}
			else if (BitTest(Global_4524923, 22))
			{
				func_347(24, "CELL_EXTRACT", 8, "AppExtraction", 58, 1, 1, 0, 0);
			}
			else if (BitTest(Global_4524923, 26))
			{
				if (func_358())
				{
					func_347(24, "CELL_0", -99, "appContacts", 5, 1, 1, 0, 0);
				}
				else
				{
					func_347(24, "CELL_SECHACK", 8, "AppSecuroHack", 57, 1, 1, 0, 0);
				}
			}
		}
		if ((((BitTest(Global_4524923, 4) == 0 && Global_1836231 == 0) && BitTest(Global_4524923, 20) == 0) && BitTest(Global_4524923, 22) == 0) && BitTest(Global_4524923, 26) == 0)
		{
			if (func_358())
			{
				func_347(24, "CELL_0", -99, "appContacts", 5, 1, 1, 0, 0);
			}
			else
			{
				func_347(24, "CELL_BOSSAGE", 8, "appMPBossAgency", 57, 1, 1, 0, 0);
			}
		}
	}
}

int func_358()
{
	if (Global_80337)
	{
		if (Global_1836641 || Global_1836642 == 1)
		{
			return 1;
		}
	}
	return 0;
}

bool func_359()
{
	return (func_360() && !NETWORK::NETWORK_IS_ACTIVITY_SESSION());
}

bool func_360()
{
	return func_361(9539, -1);
}

bool func_361(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = func_139();
	}
	return STATS::GET_PACKED_STAT_BOOL_CODE(iParam0, iParam1);
}

int func_362(bool bParam0)
{
	if (!bParam0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return BitTest(Global_80586, 0);
}

int func_363(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_2349[iParam0 /*29*/].f_19[iParam1];
}

void func_364(bool bParam0, int iParam1)
{
	int iVar0;
	
	if (!func_145(&iVar0, 0, iParam1))
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
		func_365(&(Global_24569.f_6263[iVar0 /*10*/]));
		Global_24569.f_6324[iVar0] = 0;
	}
	else
	{
		Global_24569.f_6324[iVar0] = 0;
	}
	GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("Shared");
}

void func_365(int* iParam0)
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

int func_366()
{
	if (func_97())
	{
		return 0;
	}
	if (HUD::IS_PAUSE_MENU_ACTIVE())
	{
		return 0;
	}
	if ((func_192(0) || func_191()) || RECORDING::IS_REPLAY_RECORDING())
	{
		func_28(&(Local_231.f_281));
		func_30(&(Local_231.f_281), 0, 0);
		MISC::CLEAR_BIT(&(Local_231.f_5), 16);
		func_120();
		return 0;
	}
	else if (func_34(&(Local_231.f_281)))
	{
		if (!func_29(&(Local_231.f_281), 2000, 0))
		{
			return 0;
		}
		else
		{
			MISC::CLEAR_BIT(&(Local_231.f_5), 16);
			func_28(&(Local_231.f_281));
		}
	}
	if (func_187(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	return 1;
}

void func_367()
{
	if (func_368())
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
	if (BitTest(Global_1964670, 2))
	{
		MISC::CLEAR_BIT(&Global_1964670, 2);
		ENTITY::FREEZE_ENTITY_POSITION(Global_1964670.f_25, false);
		ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(Global_1964670.f_25, false);
	}
}

int func_368()
{
	if (func_187(PLAYER::PLAYER_ID()))
	{
		if (BitTest(Global_2731782, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_369()
{
	int iVar0;
	
	if (func_103())
	{
		Global_1964670.f_1 = 0;
	}
	if (func_378() || func_222())
	{
		if (!func_34(&(Local_231.f_251)))
		{
			func_30(&(Local_231.f_251), 0, 0);
		}
		else if (func_29(&(Local_231.f_251), Global_1964670.f_1, 0) || func_222())
		{
			func_28(&(Local_231.f_249));
			if (func_103())
			{
				if (func_24(PLAYER::PLAYER_PED_ID()))
				{
					FIRE::ADD_OWNED_EXPLOSION(PLAYER::PLAYER_PED_ID(), func_377(), func_376(), func_375(), true, false, 1f);
				}
				else
				{
					FIRE::ADD_EXPLOSION(func_377(), func_376(), func_375(), true, false, 1f, false);
				}
				PAD::SET_CONTROL_SHAKE(0, 300, SYSTEM::ROUND((200f * Local_231.f_135)));
				NETWORK::SET_NETWORK_ID_CAN_MIGRATE(Local_231.f_163, true);
				STREAMING::CLEAR_FOCUS();
				iVar0 = NETWORK::NET_TO_OBJ(Local_231.f_163);
				OBJECT::DELETE_OBJECT(&iVar0);
				MISC::SET_BIT(&(Local_231.f_6), 2);
			}
			if (func_40())
			{
				func_374(1);
				if (Local_231.f_28 == 0)
				{
					func_372(6, 0, 0);
				}
				else
				{
					func_372(5, 0, 0);
				}
			}
			if ((((NETWORK::NETWORK_IS_ACTIVITY_SESSION() || func_47(0)) && !BitTest(Local_231.f_5, 7)) && !BitTest(Global_1964670.f_4, 1)) && func_71(11))
			{
				MISC::SET_BIT(&(Global_1964670.f_4), false);
				func_370(PLAYER::PLAYER_ID(), func_13(), 0);
				MISC::SET_BIT(&(Global_1964670.f_4), true);
			}
			func_425(1);
			func_424(5);
		}
	}
	else if (func_34(&(Local_231.f_251)))
	{
		func_239(&(Local_231.f_251), 0, 0);
	}
}

void func_370(bool bParam0, bool bParam1, int iParam2)
{
	struct<6> Var0;
	int iVar6;
	
	Var0.f_0 = -2124500184;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_3 = bParam0;
	Var0.f_4 = bParam1;
	Var0.f_5 = iParam2;
	iVar6 = func_371(1);
	if (!iVar6 == 0)
	{
		SCRIPT::_SEND_TU_SCRIPT_EVENT_NEW(1, &Var0, 6, iVar6, Var0.f_0);
	}
}

var func_371(int iParam0)
{
	var uVar0;
	int iVar1;
	bool bVar2;
	
	iVar1 = 0;
	while (iVar1 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1)))
		{
			bVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1));
			if (func_26(bVar2, 0, 0))
			{
				if (bVar2 != PLAYER::PLAYER_ID() || iParam0)
				{
					MISC::SET_BIT(&uVar0, bVar2);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

void func_372(int iParam0, bool bParam1, bool bParam2)
{
	char cVar0[64];
	int iVar16;
	float fVar17;
	float fVar18;
	
	StringCopy(&cVar0, func_373(iParam0), 64);
	iVar16 = 5;
	if (bParam1)
	{
		iVar16 = 69;
	}
	fVar17 = 8f;
	fVar18 = -8f;
	Local_231.f_81 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(Local_231.f_157, 0f, 0f, Local_231.f_122, 2, bParam2, bParam1, 1f, 0f, 1f);
	NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), Local_231.f_81, Local_231.f_162, &cVar0, fVar17, fVar18, iVar16, 0, 1000f, 0);
	if (iParam0 == 0)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_231.f_163))
		{
			StringConCat(&cVar0, "_DRONE", 64);
			NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_ENT(Local_231.f_163), Local_231.f_81, Local_231.f_162, &cVar0, fVar17, fVar18, 8);
		}
	}
	StringCopy(&cVar0, func_373(iParam0), 64);
	StringConCat(&cVar0, "_PHONE", 64);
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_231.f_164))
	{
		ENTITY::PLAY_ENTITY_ANIM(NETWORK::NET_TO_ENT(Local_231.f_164), &cVar0, Local_231.f_162, fVar17, bParam1, bParam2, false, 0f, 0);
		ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(NETWORK::NET_TO_ENT(Local_231.f_164));
	}
	NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_231.f_81);
}

char* func_373(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "ENTER";
		
		case 1:
			return "BASE";
		
		case 2:
			return "USE_01";
		
		case 3:
			return "USE_02";
		
		case 4:
			return "USE_03";
		
		case 5:
			return "FAIL";
		
		case 6:
			return "EXIT";
		
		default:
	}
	return "";
}

void func_374(bool bParam0)
{
	int iVar0;
	
	iVar0 = NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(iVar0);
	if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iVar0))
	{
		PED::DETACH_SYNCHRONIZED_SCENE(iVar0);
		NETWORK::NETWORK_STOP_SYNCHRONISED_SCENE(iVar0);
		iVar0 = -1;
	}
	else if (bParam0)
	{
		if (func_24(PLAYER::PLAYER_PED_ID()))
		{
			TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
		}
	}
}

float func_375()
{
	if (func_17())
	{
		return 1f;
	}
	return 0.5f;
}

int func_376()
{
	if (func_17())
	{
		return 81;
	}
	return 72;
}

Vector3 func_377()
{
	if (func_17())
	{
		return CAM::GET_CAM_COORD(Local_231.f_173);
	}
	return Local_231.f_154;
}

int func_378()
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
	if (func_386())
	{
		Local_231.f_28 = 5;
		return 1;
	}
	if (func_159() && func_380())
	{
		Local_231.f_28 = 5;
		return 1;
	}
	if (func_40() || func_17())
	{
		if (func_380())
		{
			Local_231.f_28 = 5;
			return 1;
		}
	}
	if (BitTest(Local_231.f_5, 2))
	{
		Local_231.f_28 = 4;
		return 1;
	}
	if (func_201())
	{
		if (!func_34(&(Local_231.f_259)))
		{
			func_30(&(Local_231.f_259), 0, 0);
		}
		else if (func_29(&(Local_231.f_259), 3000, 0))
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
		if (ENTITY::IS_ENTITY_IN_WATER(NETWORK::NET_TO_OBJ(Local_231.f_163)) || func_235(NETWORK::NET_TO_ENT(Local_231.f_163), 0))
		{
			if (BitTest(Local_231.f_5, 29))
			{
				Local_231.f_28 = 3;
				return 1;
			}
		}
	}
	if (!func_159() && !func_379())
	{
		if (Local_231.f_154.f_2 >= func_130())
		{
			Local_231.f_28 = 5;
			return 1;
		}
	}
	return 0;
}

bool func_379()
{
	return BitTest(Global_1964670.f_2, 0);
}

int func_380()
{
	struct<3> Var0;
	int iVar3;
	
	if (func_385())
	{
		return 0;
	}
	if (func_26(PLAYER::PLAYER_ID(), 1, 1))
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_231.f_163) && !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_OBJ(Local_231.f_163), false))
		{
			if (func_159())
			{
				if (ENTITY::DOES_ENTITY_EXIST(func_384()) && !ENTITY::IS_ENTITY_DEAD(func_384(), false))
				{
					Var0 = { ENTITY::GET_ENTITY_COORDS(func_384(), true) };
				}
			}
			else if (func_39())
			{
				if (!func_40())
				{
					iVar3 = func_381(Global_2658293[PLAYER::PLAYER_ID() /*468*/].f_325.f_11);
					switch (iVar3)
					{
						case 128:
							Var0 = { -245.64f, 6210.96f, 35.94f };
							break;
						
						case 129:
							Var0 = { 1695.88f, 4783.87f, 47.02f };
							break;
						
						case 130:
							Var0 = { -115.15f, -1771.65f, 38.86f };
							break;
						
						case 131:
							Var0 = { -600.96f, 280.47f, 87.04f };
							break;
						
						case 132:
							Var0 = { -1269.72f, -304.09f, 40f };
							break;
						
						case 133:
							Var0 = { 758.46f, -814.57f, 30.3f };
							break;
					}
				}
				else
				{
					Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
				}
			}
			else if (func_17())
			{
				if (func_24(func_16()))
				{
					Var0 = { ENTITY::GET_ENTITY_COORDS(func_16(), true) };
				}
			}
			else
			{
				Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
			}
			if (func_24(NETWORK::NET_TO_OBJ(Local_231.f_163)))
			{
				Local_231.f_124 = func_179(NETWORK::NET_TO_OBJ(Local_231.f_163), Var0, 1);
				if (Local_231.f_124 > func_130())
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_381(int iParam0)
{
	int iVar0;
	
	if (iParam0 != func_13())
	{
		iVar0 = func_383(iParam0);
		if (iVar0 != 0)
		{
			return func_382(iVar0);
		}
	}
	return -1;
}

int func_382(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 128;
		
		case 2:
			return 129;
		
		case 3:
			return 130;
		
		case 4:
			return 131;
		
		case 5:
			return 132;
		
		case 6:
			return 133;
		
		default:
	}
	return -1;
}

int func_383(int iParam0)
{
	if (iParam0 != func_13())
	{
		return Global_1845298[iParam0 /*881*/].f_260.f_439;
	}
	return 0;
}

int func_384()
{
	if (Global_1845137 != func_13())
	{
		if (!func_63(Global_1845137) && !func_62(Global_1845137))
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_1673946))
			{
				return Global_1673946;
			}
			if (ENTITY::DOES_ENTITY_EXIST(Global_1969792[Global_1845137]))
			{
				return Global_1969792[Global_1845137];
			}
		}
	}
	return -1;
}

bool func_385()
{
	return BitTest(Global_1964670, 6);
}

int func_386()
{
	float fVar0;
	int iVar1;
	
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_231.f_163) && !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_OBJ(Local_231.f_163), false))
	{
		iVar1 = Global_262145.f_24330;
		if (func_17())
		{
			iVar1 *= 10;
		}
		if (MISC::GET_GROUND_Z_FOR_3D_COORD(Local_231.f_154, &fVar0, true, false))
		{
			Local_231.f_125 = (Local_231.f_154.f_2 - fVar0);
			if (Local_231.f_125 > IntToFloat(iVar1))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_387()
{
	struct<3> Var0;
	int iVar3;
	int iVar4;
	bool bVar5;
	bool bVar6;
	int iVar7;
	
	if (!func_103())
	{
		return;
	}
	if ((NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_231.f_163) && !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_OBJ(Local_231.f_163), false)) && CAM::DOES_CAM_EXIST(Local_231.f_173))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_231.f_163))
		{
			if (BitTest(Local_231.f_5, 1) || func_222())
			{
				return;
			}
			Var0 = { func_388(func_389()) };
			bVar5 = false;
			bVar6 = true;
			iVar7 = 0;
			if (func_17())
			{
				bVar5 = true;
				bVar6 = false;
				iVar7 = 0;
			}
			if (func_51())
			{
				if (!PAD::IS_USING_KEYBOARD_AND_MOUSE(0))
				{
					if (PAD::GET_CONTROL_UNBOUND_NORMAL(2, 208) != 0f)
					{
						iVar3 = 1;
					}
					if (PAD::GET_CONTROL_UNBOUND_NORMAL(2, 207) != 0f)
					{
						iVar4 = 1;
					}
				}
				else
				{
					if (PAD::GET_CONTROL_UNBOUND_NORMAL(2, 209) != 0f)
					{
						iVar3 = 1;
					}
					if (PAD::GET_CONTROL_UNBOUND_NORMAL(2, 210) != 0f)
					{
						iVar4 = 1;
					}
				}
			}
			if (iVar3 && !func_296(bVar5))
			{
				Local_231.f_123 = 140f;
			}
			else if (iVar4 && !func_296(bVar5))
			{
				Local_231.f_123 = 60f;
			}
			else if (!func_17())
			{
				Local_231.f_123 = 100f;
			}
			ENTITY::APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(NETWORK::NET_TO_OBJ(Local_231.f_163), iVar7, Var0 * Vector(-Local_231.f_123, -Local_231.f_123, -Local_231.f_123), false, true, bVar6, false);
		}
		else
		{
			NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_231.f_163);
		}
	}
}

Vector3 func_388(struct<3> Param0)
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

Vector3 func_389()
{
	struct<3> Var0;
	
	Var0 = { 0f, 1f, 0f };
	func_390(&Var0);
	return Var0;
}

void func_390(var uParam0)
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

void func_391()
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
	
	if (func_103())
	{
		return;
	}
	if ((NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_231.f_163) && !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_OBJ(Local_231.f_163), false)) && CAM::DOES_CAM_EXIST(Local_231.f_173))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_231.f_163))
		{
			fVar0 = 0f;
			if (!func_54() && !func_33())
			{
				if (!func_288())
				{
					if (func_34(&(Local_231.f_257)))
					{
						iVar1 = func_400((func_32() || func_31()), 2000, Global_262145.f_24328);
						if (func_33())
						{
							iVar1 = (iVar1 / 3);
						}
						if (!func_29(&(Local_231.f_257), iVar1, 0))
						{
							iVar2 = (100 * MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Local_231.f_257)));
							Local_231.f_20 = (iVar2 / iVar1);
						}
						else
						{
							if (func_24(Local_231.f_165))
							{
								ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_231.f_165, NETWORK::NET_TO_OBJ(Local_231.f_163), -1, 0f, 0f, -0.25f, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
							}
							Local_231.f_20 = 100;
							func_28(&(Local_231.f_257));
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
					if ((((bVar3 && Local_231.f_20 == 100) && !func_296(0)) && !func_97()) && func_183())
					{
						fVar0 = 120f;
						if (func_33())
						{
							fVar0 = 110f;
						}
						else if (func_39())
						{
							fVar0 = 49f;
						}
						if (IntToFloat(Local_231[1]) != 0f)
						{
							func_399(1);
						}
						else
						{
							func_399(0);
						}
						GRAPHICS::ANIMPOSTFX_PLAY("RaceTurbo", 0, false);
						func_30(&(Local_231.f_255), 0, 0);
						func_398(1);
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
					if (func_33())
					{
						fVar0 = 115f;
					}
					else if (func_39())
					{
						fVar0 = 49f;
					}
					if (CAM::DOES_CAM_EXIST(Local_231.f_173))
					{
						if (!CAM::IS_CAM_SHAKING(Local_231.f_173))
						{
							CAM::SHAKE_CAM(Local_231.f_173, "DRONE_BOOST_SHAKE", 1f);
							CAM::SET_CAM_SHAKE_AMPLITUDE(Local_231.f_173, 0.15f);
						}
					}
					if (func_34(&(Local_231.f_255)))
					{
						if (func_29(&(Local_231.f_255), func_400((func_32() || func_31()), 2000, Global_262145.f_24327), 0))
						{
							Local_231.f_20 = 0;
							func_399(0);
							func_398(0);
							func_28(&(Local_231.f_257));
							func_30(&(Local_231.f_257), 0, 0);
							CAM::STOP_CAM_SHAKING(Local_231.f_173, true);
							PAD::STOP_CONTROL_SHAKE(0);
							GRAPHICS::ANIMPOSTFX_STOP("RaceTurbo");
							func_28(&(Local_231.f_255));
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
							fVar4 = (100f / (SYSTEM::TO_FLOAT(func_400((func_32() || func_31()), 2000, Global_262145.f_24327)) / IntToFloat(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Local_231.f_255))));
							Local_231.f_20 = (100 - SYSTEM::ROUND(fVar4));
							PAD::SET_CONTROL_SHAKE(0, func_400((func_32() || func_31()), 2000, Global_262145.f_24327), SYSTEM::ROUND((255f * Local_231.f_135)));
						}
					}
				}
			}
			Var5 = { Local_231.f_154 };
			if (BitTest(Local_231.f_5, 1) || func_222())
			{
				return;
			}
			Var8 = { func_388(func_389()) };
			Var11 = { func_388(func_397(func_389())) };
			MISC::GET_GROUND_Z_FOR_3D_COORD(Var5, &fVar14, true, false);
			if (!func_396())
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
			if (((iVar16 && func_395()) && !func_97()) || (func_288() && !func_287()))
			{
				fVar20 = Local_231.f_123;
				if (func_182())
				{
					fVar20 = 5f;
				}
				if (func_54() || func_33())
				{
					fVar19 = 10f;
				}
				if (func_288() && !func_287())
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
				fVar18 = func_394(fVar18, -149f, 149f);
				Var21 = { Var11 * Vector(fVar18, fVar18, fVar18) };
				if (Var21.f_2 > 149f)
				{
					Var21.f_2 = 149f;
				}
				ENTITY::APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(NETWORK::NET_TO_OBJ(Local_231.f_163), 0, Var21, false, true, true, false);
			}
			else if (((iVar17 && !func_97()) && func_395()) && !func_296(0))
			{
				if (func_54() || func_33())
				{
					fVar25 = 10f;
				}
				if (!PAD::IS_USING_KEYBOARD_AND_MOUSE(0))
				{
					fVar24 = ((Local_231.f_123 + fVar25) / (1f / PAD::GET_CONTROL_UNBOUND_NORMAL(2, 207)));
				}
				else
				{
					fVar24 = ((Local_231.f_123 + fVar25) / (1f / PAD::GET_CONTROL_UNBOUND_NORMAL(2, 210)));
				}
				fVar24 = func_394(fVar24, -149f, 149f);
				ENTITY::APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(NETWORK::NET_TO_OBJ(Local_231.f_163), 0, Var11 * Vector(-fVar24, -fVar24, -fVar24), false, true, true, false);
			}
			if (((Local_231[1] > 0 && !func_288()) && !func_296(0)) && !func_97())
			{
				fVar28 = func_393();
				fVar26 = (Local_231.f_123 / (127f / IntToFloat(Local_231[1])));
				fVar27 = (fVar28 / (127f / IntToFloat(Local_231[1])));
				fVar26 = func_394(fVar26, -149f, 149f);
				ENTITY::APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(NETWORK::NET_TO_OBJ(Local_231.f_163), 0, Var8 * Vector(fVar26, fVar26, fVar26), false, true, true, false);
				ENTITY::APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(NETWORK::NET_TO_OBJ(Local_231.f_163), 0, 0f, 0f, fVar27, false, true, true, false);
			}
			else if ((((Local_231[1] < 0 && !func_288()) && !func_296(0)) && !func_97()) || (func_288() && func_287()))
			{
				if (func_288() && func_287())
				{
					fVar31 = 50f;
					if (func_33())
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
					fVar31 = func_393();
					if (func_33())
					{
						fVar29 = (Local_231.f_123 / (127f / IntToFloat(Local_231[1])));
					}
					else
					{
						fVar29 = ((Local_231.f_123 + fVar0) / (127f / IntToFloat(Local_231[1])));
					}
					fVar30 = (fVar31 / (127f / IntToFloat(Local_231[1])));
				}
				fVar29 = func_394(fVar29, -149f, 149f);
				if (func_33())
				{
					if (!func_287())
					{
						ENTITY::APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(NETWORK::NET_TO_OBJ(Local_231.f_163), 0, 0f, 0f, -fVar30, false, true, true, false);
						ENTITY::APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(NETWORK::NET_TO_OBJ(Local_231.f_163), 0, Var8 * Vector(fVar29, fVar29, fVar29), false, true, true, false);
					}
					else
					{
						ENTITY::APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(NETWORK::NET_TO_OBJ(Local_231.f_163), 0, 0f, 0f, 41f, false, true, true, false);
						ENTITY::APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(NETWORK::NET_TO_OBJ(Local_231.f_163), 0, 0f, -149f, 0f, false, true, true, false);
					}
				}
				else
				{
					ENTITY::APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(NETWORK::NET_TO_OBJ(Local_231.f_163), 0, 0f, 0f, -fVar30, false, true, true, false);
					ENTITY::APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(NETWORK::NET_TO_OBJ(Local_231.f_163), 0, Var8 * Vector(fVar29, fVar29, fVar29), false, true, true, false);
				}
			}
			Var32 = { func_392(Var8, Var11) };
			if ((!func_288() && !func_296(0)) && !func_97())
			{
				if (Local_231[0] > 0)
				{
					fVar35 = -(Local_231.f_123 / (127f / IntToFloat(Local_231[0])));
					fVar36 = (8f / (127f / IntToFloat(Local_231[0])));
					fVar35 = func_394(fVar35, -149f, 149f);
					ENTITY::APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(NETWORK::NET_TO_OBJ(Local_231.f_163), 0, Var32 * Vector(fVar35, fVar35, fVar35), false, true, true, false);
					ENTITY::APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(NETWORK::NET_TO_OBJ(Local_231.f_163), 0, 0f, 0f, fVar36, false, true, true, false);
				}
				else if (Local_231[0] < 0)
				{
					fVar37 = -(Local_231.f_123 / (127f / IntToFloat(Local_231[0])));
					fVar38 = (8f / (127f / IntToFloat(Local_231[0])));
					fVar37 = func_394(fVar37, -149f, 149f);
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

Vector3 func_392(struct<3> Param0, struct<3> Param3)
{
	return ((Param0.f_1 * Param3.f_2) - (Param0.f_2 * Param3.f_1)), ((Param0.f_2 * Param3.f_0) - (Param0.f_0 * Param3.f_2)), ((Param0.f_0 * Param3.f_1) - (Param0.f_1 * Param3.f_0));
}

float func_393()
{
	if (func_33() || func_54())
	{
		return 40f;
	}
	else if ((func_39() || func_32()) || func_31())
	{
		return 30f;
	}
	else if (func_182())
	{
		return 2.5f;
	}
	return 6.4f;
}

float func_394(float fParam0, float fParam1, float fParam2)
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

int func_395()
{
	if (func_296(0))
	{
		return 0;
	}
	if (func_288() && !func_287())
	{
		return 0;
	}
	return 1;
}

bool func_396()
{
	return BitTest(Global_1964670, 2);
}

Vector3 func_397(struct<2> Param0, var uParam2)
{
	struct<3> Var0;
	
	Var0 = { SYSTEM::SIN(Param0.f_1), (-SYSTEM::SIN(Param0.f_0) * SYSTEM::COS(Param0.f_1)), (SYSTEM::COS(Param0.f_0) * SYSTEM::COS(Param0.f_1)) };
	return Var0;
}

void func_398(bool bParam0)
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

void func_399(bool bParam0)
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

int func_400(bool bParam0, int iParam1, var uParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return uParam2;
}

void func_401()
{
	float fVar0;
	float fVar1;
	
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_231.f_163))
	{
		if (!ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_VEH(Local_231.f_163), false))
		{
			if ((func_33() || func_54()) || func_51())
			{
				fVar0 = -323.1f;
				fVar1 = -1970.9f;
			}
			else
			{
				fVar0 = Local_231.f_154;
				fVar1 = Local_231.f_154.f_1;
			}
			HUD::SET_FAKE_PAUSEMAP_PLAYER_POSITION_THIS_FRAME(fVar0, fVar1);
			HUD::SET_FAKE_GPS_PLAYER_POSITION_THIS_FRAME(fVar0, fVar1, 0);
			if (!INTERIOR::IS_VALID_INTERIOR(Global_1964670.f_30) && !func_51())
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

void func_402(var uParam0)
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

void func_403(var uParam0)
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

void func_404()
{
	if (func_26(PLAYER::PLAYER_ID(), 1, 1))
	{
		PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 450, true);
	}
}

void func_405()
{
	bool bVar0;
	
	if (func_33())
	{
		bVar0 = PLAYER::INT_TO_PLAYERINDEX(Local_231.f_47);
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_231.f_163) && func_26(bVar0, 1, 1))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::GET_PLAYER_PED(bVar0), false))
			{
				if (func_406(NETWORK::NET_TO_OBJ(Local_231.f_163), PLAYER::GET_PLAYER_PED(bVar0), Global_262145.f_24939, 1))
				{
					if (!func_243(PLAYER::PLAYER_ID(), bVar0))
					{
						if (PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) != PLAYER::GET_PLAYER_TEAM(bVar0) || PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1)
						{
							MISC::SET_BIT(&(Local_231.f_5), 11);
							return;
						}
					}
				}
			}
		}
		MISC::CLEAR_BIT(&(Local_231.f_5), 11);
	}
}

bool func_406(int iParam0, int iParam1, float fParam2, bool bParam3)
{
	return SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam0, bParam3), ENTITY::GET_ENTITY_COORDS(iParam1, bParam3)) <= (fParam2 * fParam2);
}

void func_407()
{
	int iVar0;
	
	if (((((func_51() || func_33()) || func_54()) || func_17()) || func_32()) || func_31())
	{
		iVar0 = 1000;
		if (func_33() || func_54())
		{
			iVar0 = 7000;
		}
		else if (func_17())
		{
			iVar0 = 1100;
		}
		if (!BitTest(Local_231.f_5, 29))
		{
			if (CAM::DOES_CAM_EXIST(Local_231.f_173) && CAM::IS_CAM_RENDERING(Local_231.f_173))
			{
				if (func_24(func_25()))
				{
					if (func_29(&(Local_231.f_275), iVar0, 0))
					{
						ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(func_25(), false, false);
						ENTITY::SET_ENTITY_COLLISION(func_25(), true, false);
						PHYSICS::SET_DISABLE_FRAG_DAMAGE(Global_1964670.f_25, true);
						PHYSICS::SET_DISABLE_BREAKING(Global_1964670.f_25, true);
						MISC::SET_BIT(&(Local_231.f_5), 29);
					}
				}
			}
		}
	}
}

void func_408()
{
	if (!func_17() || PLAYER::PLAYER_ID() == func_13())
	{
		return;
	}
	if (func_29(&(Local_231.f_287[PLAYER::PLAYER_ID() /*2*/]), 2500, 0))
	{
		if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(Local_231.f_211[PLAYER::PLAYER_ID()]))
		{
			GRAPHICS::STOP_PARTICLE_FX_LOOPED(Local_231.f_211[PLAYER::PLAYER_ID()], false);
		}
		func_28(&(Local_231.f_287[PLAYER::PLAYER_ID() /*2*/]));
	}
}

void func_409()
{
	char* sVar0;
	char* sVar1;
	int iVar2;
	
	sVar0 = "scr_ih_sub";
	STREAMING::REQUEST_NAMED_PTFX_ASSET(sVar0);
	if (STREAMING::HAS_NAMED_PTFX_ASSET_LOADED(sVar0))
	{
		if (func_24(func_16()) && PLAYER::PLAYER_ID() != func_13())
		{
			if (!GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(Local_231.f_211[PLAYER::PLAYER_ID()]))
			{
				GRAPHICS::USE_PARTICLE_FX_ASSET(sVar0);
				sVar1 = func_416(PLAYER::PLAYER_ID());
				iVar2 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(func_16(), sVar1);
				Local_231.f_211[PLAYER::PLAYER_ID()] = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY_BONE("scr_ih_sub_missile_launch", func_16(), func_415(PLAYER::PLAYER_ID()), 0f, 0f, 0f, iVar2, 5f, false, false, false);
			}
			else
			{
				func_30(&(Local_231.f_287[PLAYER::PLAYER_ID() /*2*/]), 0, 0);
			}
			if (func_34(&(Local_231.f_287[PLAYER::PLAYER_ID() /*2*/])))
			{
				if (func_29(&(Local_231.f_287[PLAYER::PLAYER_ID() /*2*/]), 1000, 0))
				{
					GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(Local_231.f_211[PLAYER::PLAYER_ID()], "flame", 0.15f, false);
					func_411();
					func_303();
					func_387();
					if (!ENTITY::IS_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_231.f_163)))
					{
						ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_231.f_163), true, false);
					}
					func_410();
					if (AUDIO::HAS_SOUND_FINISHED(Local_231.f_42))
					{
						Local_231.f_42 = AUDIO::GET_SOUND_ID();
						AUDIO::PLAY_SOUND_FRONTEND(Local_231.f_42, "HUD_Startup", Local_231.f_161, true);
					}
					func_306();
					func_123();
					func_273(1);
					GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
					GRAPHICS::SET_TIMECYCLE_MODIFIER("IslandPeriscope");
					CAM::RENDER_SCRIPT_CAMS(true, false, 0, true, true, 0);
					Local_231.f_177 = NETWORK::GET_NETWORK_TIME();
					ENTITY::SET_ENTITY_INVINCIBLE(NETWORK::NET_TO_OBJ(Local_231.f_163), false, 0);
					func_424(4);
				}
			}
		}
		else
		{
			func_425(1);
			func_424(7);
		}
	}
}

void func_410()
{
	if (func_159() || func_40())
	{
		if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("DLC_BTL_Hacker_Drone_HUD_Scene"))
		{
			AUDIO::START_AUDIO_SCENE("DLC_BTL_Hacker_Drone_HUD_Scene");
		}
	}
	else if (func_33())
	{
		if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("DLC_Arena_Battle_Drone_HUD_Scene"))
		{
			AUDIO::START_AUDIO_SCENE("DLC_Arena_Battle_Drone_HUD_Scene");
		}
	}
	else if (func_54())
	{
		if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("DLC_Arena_Spectator_Drone_HUD_Scene"))
		{
			AUDIO::START_AUDIO_SCENE("DLC_Arena_Spectator_Drone_HUD_Scene");
		}
	}
	else if (func_51())
	{
		if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("dlc_aw_arena_piloted_missile_scene"))
		{
			AUDIO::START_AUDIO_SCENE("dlc_aw_arena_piloted_missile_scene");
		}
	}
	else if (func_17())
	{
		if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("dlc_hei4_submarine_guided_missile_Scene"))
		{
			AUDIO::START_AUDIO_SCENE("dlc_hei4_submarine_guided_missile_Scene");
		}
	}
}

void func_411()
{
	int iVar0;
	char* sVar1;
	struct<3> Var2;
	struct<3> Var5;
	struct<3> Var8;
	struct<3> Var11;
	
	sVar1 = func_416(PLAYER::PLAYER_ID());
	if (Global_1579273 == 1)
	{
		iVar0 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(func_16(), sVar1);
		Var2 = { ENTITY::GET_ENTITY_BONE_POSTION(func_16(), iVar0) };
		Local_231.f_148 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Var2, ENTITY::GET_ENTITY_HEADING(func_16()), 0f, 0f, -2.6f) };
	}
	else if (Global_1579273 == 2)
	{
		iVar0 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(func_16(), sVar1);
		Var2 = { ENTITY::GET_ENTITY_BONE_POSTION(func_16(), iVar0) };
		Local_231.f_148 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Var2, ENTITY::GET_ENTITY_HEADING(func_16()), 0f, 0f, -2.6f) };
	}
	Var5 = { ENTITY::GET_ENTITY_ROTATION(func_16(), 2) };
	ENTITY::SET_ENTITY_COORDS(NETWORK::NET_TO_OBJ(Local_231.f_163), Local_231.f_148, true, false, false, true);
	func_413(Local_231.f_148, (Var5.f_0 + 90f), 180f, 0f);
	Var8 = { ENTITY::GET_ENTITY_COORDS(func_16(), true) };
	Var11 = { 0f, 0f, 0f };
	Local_231.f_118 = func_412(Var11, Var8);
	ENTITY::SET_ENTITY_HEADING(NETWORK::NET_TO_OBJ(Local_231.f_163), Local_231.f_118);
	ENTITY::SET_ENTITY_ROTATION(NETWORK::NET_TO_OBJ(Local_231.f_163), (Var5.f_0 - 90f), 0f, Local_231.f_118, 2, true);
	if (AUDIO::HAS_SOUND_FINISHED(Local_231.f_117))
	{
		Local_231.f_117 = AUDIO::GET_SOUND_ID();
		AUDIO::PLAY_SOUND_FROM_ENTITY(Local_231.f_117, "Missile_Launch", NETWORK::NET_TO_OBJ(Local_231.f_163), Local_231.f_161, true, 0);
	}
}

float func_412(struct<2> Param0, var uParam2, struct<2> Param3, var uParam5)
{
	return MISC::GET_HEADING_FROM_VECTOR_2D((Param3.f_0 - Param0.f_0), (Param3.f_1 - Param0.f_1));
}

void func_413(struct<3> Param0, struct<3> Param3)
{
	if (!func_414(Global_1964670.f_18, Param0, 0))
	{
		Global_1964670.f_18 = { Param0 };
		Param3 = { Param3 + Vector(0f, -180f, 180f) };
		Global_1964670.f_21 = { Param3 };
	}
}

bool func_414(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

Vector3 func_415(bool bParam0)
{
	if (Local_231.f_84[bParam0] > 4)
	{
		return 0f, 0f, 1.5f;
	}
	return 0f, 0f, 1.5f;
}

char* func_416(bool bParam0)
{
	if (bParam0 == func_13())
	{
		return "";
	}
	switch (Local_231.f_84[bParam0])
	{
		case 1:
			return "sub_hatch1";
		
		case 2:
			return "sub_hatch2";
		
		case 3:
			return "sub_hatch3";
		
		case 4:
			return "sub_hatch4";
		
		case 5:
			return "sub_hatch5";
		
		case 6:
			return "sub_hatch6";
		
		case 7:
			return "sub_hatch7";
		
		case 8:
			return "sub_hatch8";
		
		default:
	}
	return "sub_hatch4";
}

void func_417()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (func_423() || !func_40())
	{
		return;
	}
	switch (Local_231.f_82)
	{
		case 0:
			if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_231.f_164))
			{
				iVar0 = joaat("ch_prop_ch_phone_ing_01a");
				if (func_203(iVar0))
				{
					if (func_113(NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(false, 1) + 1, 0, 1))
					{
						if (!BitTest(Local_231.f_6, 3))
						{
							NETWORK::RESERVE_LOCAL_NETWORK_MISSION_OBJECTS(NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(false, 1) + 1);
							MISC::SET_BIT(&(Local_231.f_6), 3);
						}
						if (NETWORK::CAN_REGISTER_MISSION_OBJECTS(1))
						{
							if (func_422(&(Local_231.f_164), iVar0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 0, 1, 1, 0, 0, 0, 1, 0))
							{
								NETWORK::SET_NETWORK_ID_ALWAYS_EXISTS_FOR_PLAYER(Local_231.f_164, PLAYER::PLAYER_ID(), true);
								iVar1 = PED::GET_PED_BONE_INDEX(PLAYER::PLAYER_PED_ID(), 28422);
								ENTITY::ATTACH_ENTITY_TO_ENTITY(NETWORK::NET_TO_OBJ(Local_231.f_164), PLAYER::PLAYER_PED_ID(), iVar1, 0f, 0f, 0f, 0f, 0f, 0f, true, true, false, false, 2, true, 0);
								STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
							}
						}
					}
				}
			}
			else
			{
				Local_231.f_82 = 1;
			}
			break;
		
		case 1:
			if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("script_task_go_straight_to_coord")) != 0 && TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("script_task_go_straight_to_coord")) != 1)
			{
				func_372(0, 0, 0);
				Local_231.f_82 = 2;
			}
			break;
		
		case 2:
			if (func_421(0, "CREATE"))
			{
				func_403(&Local_231);
				if (func_420(Local_231.f_164))
				{
					if (!ENTITY::IS_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_231.f_164)))
					{
						ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_231.f_164), true, false);
					}
				}
				if (func_420(Local_231.f_163))
				{
					if (!ENTITY::IS_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_231.f_163)))
					{
						ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_231.f_163), true, false);
						ENTITY::SET_ENTITY_VISIBLE(Local_231.f_167, false, false);
					}
				}
			}
			if (func_418(1))
			{
				ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_231.f_167, NETWORK::NET_TO_OBJ(Local_231.f_163), -1, 0f, 0f, -0.8f, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
				ENTITY::SET_ENTITY_VISIBLE(Local_231.f_167, false, false);
				ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(NETWORK::NET_TO_ENT(Local_231.f_163));
				OBJECT::PLAY_OBJECT_AUTO_START_ANIM(NETWORK::NET_TO_OBJ(Local_231.f_163));
				func_306();
				func_152();
				func_273(1);
				func_285();
				func_391();
				func_410();
				if (AUDIO::HAS_SOUND_FINISHED(Local_231.f_42))
				{
					Local_231.f_42 = AUDIO::GET_SOUND_ID();
					AUDIO::PLAY_SOUND_FRONTEND(Local_231.f_42, "HUD_Startup", Local_231.f_161, true);
				}
				CAM::RENDER_SCRIPT_CAMS(true, false, 0, true, true, 0);
				Local_231.f_177 = NETWORK::GET_NETWORK_TIME();
				func_424(4);
				func_372(1, 1, 0);
				Local_231.f_82 = 3;
			}
			break;
		
		case 3:
			if (func_418(0))
			{
				iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
				switch (iVar2)
				{
					case 0:
						func_372(2, 0, 0);
						Local_231.f_247 = 2;
						break;
					
					case 1:
						func_372(3, 0, 0);
						Local_231.f_247 = 3;
						break;
					
					case 2:
						func_372(4, 0, 0);
						Local_231.f_247 = 4;
						break;
				}
				Local_231.f_82 = 4;
			}
			break;
		
		case 4:
			if (func_418(0))
			{
				func_372(1, 1, 0);
				Local_231.f_82 = 3;
			}
			break;
	}
}

int func_418(bool bParam0)
{
	int iVar0;
	float fVar1;
	int iVar2;
	
	iVar0 = PLAYER::PLAYER_PED_ID();
	if (func_24(iVar0))
	{
		fVar1 = func_419();
		iVar2 = NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(Local_231.f_81);
		if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iVar2) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iVar2) >= fVar1)
		{
			if (bParam0)
			{
				func_374(0);
			}
			return 1;
		}
	}
	return 0;
}

float func_419()
{
	return 0.95f;
}

int func_420(int iParam0)
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iParam0))
	{
		NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(iParam0);
		return NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(iParam0);
	}
	return 0;
}

int func_421(int iParam0, char* sParam1)
{
	int iVar0;
	
	iVar0 = NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(Local_231.f_81);
	if (iVar0 != -1)
	{
		if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iVar0))
		{
			if ((ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), MISC::GET_HASH_KEY(sParam1)) || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_OBJ(Local_231.f_164), MISC::GET_HASH_KEY(sParam1))) || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_OBJ(Local_231.f_163), MISC::GET_HASH_KEY(sParam1)))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_422(var uParam0, int iParam1, struct<3> Param2, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12)
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

bool func_423()
{
	return BitTest(Global_1964670, 13);
}

void func_424(int iParam0)
{
	if (Local_231.f_245 != iParam0)
	{
		Local_231.f_245 = iParam0;
	}
}

void func_425(bool bParam0)
{
	if (bParam0)
	{
		if (!func_423())
		{
			MISC::SET_BIT(&Global_1964670, 13);
		}
	}
	else if (func_423())
	{
		MISC::CLEAR_BIT(&Global_1964670, 13);
	}
}

void func_426()
{
	struct<3> Var0;
	
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_231.f_163))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_231.f_163))
		{
			if (!CAM::DOES_CAM_EXIST(Local_231.f_173) && BitTest(Local_231.f_5, 0))
			{
				if (func_440())
				{
					if (func_379())
					{
						func_332(PLAYER::PLAYER_ID(), 0, 33280, 0);
					}
					else if (!func_51())
					{
						func_332(PLAYER::PLAYER_ID(), 0, 512, 0);
					}
					if (!func_439())
					{
						HUD::THEFEED_HIDE();
					}
					else
					{
						HUD::THEFEED_SHOW();
					}
					Local_231.f_173 = CAM::CREATE_CAMERA(26379945, true);
					CAM::SET_CAM_FOV(Local_231.f_173, Local_231.f_129);
					CAM::SET_CAM_NEAR_CLIP(Local_231.f_173, 0.01f);
					CAM::SET_CAM_NEAR_DOF(Local_231.f_173, 0.01f);
					GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
					if (func_51())
					{
						GRAPHICS::SET_TIMECYCLE_MODIFIER("eyeinthesky");
					}
					Var0 = { func_438() };
					CAM::HARD_ATTACH_CAM_TO_ENTITY(Local_231.f_173, NETWORK::NET_TO_OBJ(Local_231.f_163), 0f, 0f, 180f, Var0, true);
					if (func_51())
					{
						CAM::SET_CAM_ROT(Local_231.f_173, func_437() - Vector(0f, -180f, 180f), 2);
					}
					PED::SET_POP_CONTROL_SPHERE_THIS_FRAME(Local_231.f_154, 75f, 75f);
					STREAMING::SET_FOCUS_POS_AND_VEL(Local_231.f_154, CAM::GET_CAM_ROT(Local_231.f_173, 2));
					if (!func_17())
					{
						ENTITY::SET_ENTITY_INVINCIBLE(NETWORK::NET_TO_OBJ(Local_231.f_163), false, 0);
					}
					if (!func_379())
					{
						if (STREAMING::IS_NEW_LOAD_SCENE_LOADED())
						{
							STREAMING::NEW_LOAD_SCENE_STOP();
						}
					}
					if (!func_40() && !func_17())
					{
						func_410();
						if (AUDIO::HAS_SOUND_FINISHED(Local_231.f_42))
						{
							Local_231.f_42 = AUDIO::GET_SOUND_ID();
							AUDIO::PLAY_SOUND_FRONTEND(Local_231.f_42, "HUD_Startup", Local_231.f_161, true);
						}
						func_306();
						if (func_103())
						{
							func_123();
						}
						else
						{
							func_152();
						}
						func_273(1);
						func_285();
						func_391();
						CAM::RENDER_SCRIPT_CAMS(true, false, 0, true, true, 0);
						Local_231.f_177 = NETWORK::GET_NETWORK_TIME();
					}
					func_434(1);
					func_433(1);
					func_431(158);
					MISC::SET_BIT(&(Local_133[PLAYER::PLAYER_ID() /*3*/]), false);
					if (!func_40() && !func_17())
					{
						if (func_32() || func_31())
						{
							if (func_430(Local_231.f_36) && !AUDIO::HAS_SOUND_FINISHED(Local_231.f_36))
							{
								AUDIO::STOP_SOUND(Local_231.f_36);
								AUDIO::RELEASE_SOUND_ID(Local_231.f_36);
								Local_231.f_36 = -1;
							}
						}
						func_424(4);
					}
					else if (func_17())
					{
						func_424(3);
					}
					else
					{
						Local_231.f_157 = { func_6(PLAYER::PLAYER_ID()) };
						MISC::GET_GROUND_Z_FOR_3D_COORD(Local_231.f_157, &(Local_231.f_157.f_2), false, false);
						Local_231.f_122 = ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID());
						func_429();
						Local_231.f_157 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Local_231.f_157, Local_231.f_122, -0.0695723f, 0.177497f, 0f) };
						func_424(2);
					}
					func_427(1);
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
}

void func_427(bool bParam0)
{
	int iVar0;
	
	iVar0 = Global_1912667[PLAYER::PLAYER_ID() /*318*/].f_101;
	func_428((6 + iVar0), bParam0);
}

void func_428(int iParam0, bool bParam1)
{
	int iVar0;
	var uVar1;
	bool bVar2;
	
	iVar0 = (iParam0 / 32);
	if (iVar0 >= 3)
	{
		return;
	}
	uVar1 = Global_1882652[PLAYER::PLAYER_ID() /*321*/].f_317[iVar0];
	bVar2 = (iParam0 % 32);
	if (bParam1 && BitTest(uVar1, bVar2))
	{
		return;
	}
	if (!bParam1 && !BitTest(uVar1, bVar2))
	{
		return;
	}
	if (bParam1)
	{
		MISC::SET_BIT(&uVar1, bVar2);
	}
	else
	{
		MISC::CLEAR_BIT(&uVar1, bVar2);
	}
	Global_1882652[PLAYER::PLAYER_ID() /*321*/].f_317[iVar0] = uVar1;
}

void func_429()
{
	int iVar0;
	
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar0, true);
		if (!(iVar0 == joaat("weapon_unarmed") || iVar0 == joaat("object")))
		{
			WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), true);
		}
	}
}

int func_430(int iParam0)
{
	if (iParam0 >= 0)
	{
		return 1;
	}
	return 0;
}

void func_431(int iParam0)
{
	int iVar0;
	
	if (Global_262145.f_9173)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_2359296[func_432() /*5574*/].f_681.f_4248[iVar0 /*3*/] == iParam0)
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

int func_432()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_433(bool bParam0)
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

void func_434(bool bParam0)
{
	if (bParam0)
	{
		if (!func_95())
		{
			MISC::SET_BIT(&Global_1964670, 5);
		}
	}
	else
	{
		if (func_95())
		{
			MISC::CLEAR_BIT(&Global_1964670, 5);
		}
		func_435(0);
	}
}

void func_435(bool bParam0)
{
	if (bParam0)
	{
		if (!func_436())
		{
			MISC::SET_BIT(&Global_1964670, 12);
		}
	}
	else if (func_436())
	{
		MISC::CLEAR_BIT(&Global_1964670, 12);
	}
}

bool func_436()
{
	return BitTest(Global_1964670, 12);
}

Vector3 func_437()
{
	return Global_1964670.f_21;
}

Vector3 func_438()
{
	if (func_31())
	{
		return 0f, -0.2f, -0.02f;
	}
	else if (func_33() || func_54())
	{
		return 0f, -0.099f, -0.02f;
	}
	else if (func_51())
	{
		return 0f, -0.9f, 0f;
	}
	else if ((func_39() || func_182()) || func_32())
	{
		return 0f, -0.038f, -0.006f;
	}
	else if (func_17())
	{
		return 0f, -5.48f, 0f;
	}
	return 0f, -0.038f, -0.004f;
}

bool func_439()
{
	return BitTest(Global_1964670, 10);
}

int func_440()
{
	if (func_55() && !func_57())
	{
		return 1;
	}
	if (func_444())
	{
		return 1;
	}
	if (func_443())
	{
		return 1;
	}
	if (func_57() && func_442())
	{
		return 1;
	}
	if (func_441() && func_442())
	{
		return 1;
	}
	if (!func_89(PLAYER::PLAYER_ID(), 0) && !func_328())
	{
		return 1;
	}
	return 0;
}

int func_441()
{
	if (func_61(PLAYER::PLAYER_ID()) && func_58())
	{
		if (Global_1579273 == 2 || Global_1579273 == 1)
		{
			return 1;
		}
	}
	return 0;
}

int func_442()
{
	if (Global_1579264 != -1 || Global_1579270 != -1)
	{
		if (((ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "COMPUTER_idle", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "COMPUTER_idle_control", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "COMPUTER_enter_control", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "COMPUTER_enter", 3))
		{
			return 1;
		}
		if (func_59())
		{
			return 0;
		}
	}
	return 0;
}

int func_443()
{
	return 0;
}

int func_444()
{
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		return 0;
	}
	if (func_57() || func_445())
	{
		return 0;
	}
	if (func_443())
	{
		return 0;
	}
	return 1;
}

int func_445()
{
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1421.593f, -3011.17f, -80.24994f, -1423.142f, -3012.295f, -77.74994f, 2f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1419.463f, -3009.145f, -80.49994f, -1420.684f, -3010.617f, -77.99994f, 2f, false, true, 0))
	{
		return 1;
	}
	return 0;
}

void func_446()
{
	int iVar0;
	struct<3> Var1;
	bool bVar4;
	float fVar5;
	
	iVar0 = joaat("blazer5");
	if (func_203(Local_231.f_244) && func_203(iVar0))
	{
		if (!BitTest(Local_231.f_5, 0))
		{
			if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_231.f_163))
			{
				if (!func_379())
				{
					if (func_159())
					{
						if (func_24(func_384()))
						{
							Var1 = { ENTITY::GET_ENTITY_COORDS(func_384(), true) };
						}
					}
					else
					{
						Var1 = { Local_231.f_142 };
					}
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
					else if (STREAMING::IS_NEW_LOAD_SCENE_LOADED())
					{
						if (!BitTest(Local_231.f_5, 19))
						{
							if (func_452())
							{
								if (func_449())
								{
									MISC::SET_BIT(&(Local_231.f_5), 19);
								}
							}
							else
							{
								if (!func_293(func_448()))
								{
									Local_231.f_142 = { func_448() };
								}
								MISC::SET_BIT(&(Local_231.f_5), 19);
								if (func_17())
								{
									Local_231.f_142.f_2 = (Local_231.f_142.f_2 + 1000f);
								}
							}
						}
					}
				}
				if (BitTest(Local_231.f_5, 19) || func_379())
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
					else if (func_113(NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(false, 1) + 1, 0, 1))
					{
						if (!BitTest(Local_231.f_5, 30))
						{
							NETWORK::RESERVE_LOCAL_NETWORK_MISSION_OBJECTS(NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(false, 1) + 1);
							MISC::SET_BIT(&(Local_231.f_5), 30);
						}
						if (NETWORK::CAN_REGISTER_MISSION_OBJECTS(1))
						{
							bVar4 = func_447();
							if (func_40())
							{
								Local_231.f_157 = { func_6(PLAYER::PLAYER_ID()) };
								MISC::GET_GROUND_Z_FOR_3D_COORD(Local_231.f_157, &(Local_231.f_157.f_2), false, false);
								Local_231.f_142 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION(Local_231.f_162, "ENTER", Local_231.f_157, ENTITY::GET_ENTITY_ROTATION(PLAYER::PLAYER_PED_ID(), 2), 0f, 2) };
							}
							if (func_422(&(Local_231.f_163), Local_231.f_244, Local_231.f_142, 0, 1, 1, 1, 1, 0, bVar4, 0))
							{
								Global_1964670.f_25 = NETWORK::NET_TO_OBJ(Local_231.f_163);
								ENTITY::SET_ENTITY_INVINCIBLE(NETWORK::NET_TO_OBJ(Local_231.f_163), true, 0);
								if (func_159())
								{
									if (func_24(func_384()))
									{
										ENTITY::SET_ENTITY_ROTATION(func_25(), ENTITY::GET_ENTITY_ROTATION(func_384(), 2), 2, true);
										fVar5 = (ENTITY::GET_ENTITY_HEADING(func_384()) + 180f);
									}
								}
								Global_2658293[PLAYER::PLAYER_ID() /*468*/].f_434 = { Local_231.f_142 };
								Global_2658293[PLAYER::PLAYER_ID() /*468*/].f_437 = fVar5;
								Local_133[PLAYER::PLAYER_ID() /*3*/].f_2 = Local_231.f_163;
								NETWORK::SET_NETWORK_ID_ALWAYS_EXISTS_FOR_PLAYER(Local_231.f_163, PLAYER::PLAYER_ID(), true);
								INTERIOR::FORCE_ACTIVATING_TRACKING_ON_ENTITY(NETWORK::NET_TO_ENT(Local_231.f_163), 1);
								ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(NETWORK::NET_TO_ENT(Local_231.f_163), true, 1);
								ENTITY::SET_ENTITY_COORDS_NO_OFFSET(func_25(), Local_231.f_142, false, false, true);
								ENTITY::SET_ENTITY_HEADING(func_25(), fVar5);
								NETWORK::SET_ENTITY_GHOSTED_FOR_GHOST_PLAYERS(func_25(), true);
								if (!func_293(func_437()))
								{
									ENTITY::SET_ENTITY_ROTATION(func_25(), func_437(), 2, true);
								}
								if (func_51() || func_17())
								{
									ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(func_25(), false, false);
								}
								NETWORK::NETWORK_USE_HIGH_PRECISION_BLENDING(Local_231.f_163, true);
								if (func_187(PLAYER::PLAYER_ID()) || func_31())
								{
									ENTITY::SET_ENTITY_HEALTH(func_25(), Global_262145.f_24329 * 5, 0, 0);
								}
								else if (func_17())
								{
									ENTITY::SET_ENTITY_HEALTH(func_25(), 1, 0, 0);
									NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(Local_231.f_163, true);
									ENTITY::SET_ENTITY_LOD_DIST(NETWORK::NET_TO_ENT(Local_231.f_163), 700);
								}
								else
								{
									ENTITY::SET_ENTITY_HEALTH(func_25(), Global_262145.f_24329, 0, 0);
								}
								NETWORK::SET_NETWORK_ID_CAN_MIGRATE(Local_231.f_163, false);
								ENTITY::SET_ENTITY_RECORDS_COLLISIONS(NETWORK::NET_TO_ENT(Local_231.f_163), true);
								PED::SET_POP_CONTROL_SPHERE_THIS_FRAME(Local_231.f_142, 100f, 200f);
								STREAMING::SET_FOCUS_POS_AND_VEL(ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_ENT(Local_231.f_163), true), ENTITY::GET_ENTITY_ROTATION(NETWORK::NET_TO_ENT(Local_231.f_163), 2));
								STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_231.f_244);
								STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
							}
						}
					}
				}
			}
			else
			{
				ENTITY::SET_ENTITY_HAS_GRAVITY(NETWORK::NET_TO_OBJ(Local_231.f_163), false);
				if (func_24(Local_231.f_167))
				{
					if (func_24(NETWORK::NET_TO_ENT(Local_231.f_163)))
					{
						ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_231.f_167, NETWORK::NET_TO_OBJ(Local_231.f_163), -1, 0f, 0f, -0.8f, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
						MISC::SET_BIT(&(Local_231.f_5), false);
					}
				}
			}
		}
	}
}

int func_447()
{
	if (func_40())
	{
		return 1;
	}
	if (func_17())
	{
		return 1;
	}
	return 0;
}

Vector3 func_448()
{
	return Global_1964670.f_18;
}

int func_449()
{
	if (Local_231.f_16 == 0)
	{
		if (!BitTest(Local_231.f_5, 14))
		{
			if ((!func_187(PLAYER::PLAYER_ID()) && func_159()) && func_24(func_384()))
			{
				Local_231.f_142 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(ENTITY::GET_ENTITY_COORDS(func_384(), true), ENTITY::GET_ENTITY_HEADING(func_384()), -0.7f, 1.6f, 4f) };
				MISC::SET_BIT(&(Local_231.f_5), 14);
			}
			else
			{
				if (func_159() && func_24(func_384()))
				{
					Local_231.f_142 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(ENTITY::GET_ENTITY_COORDS(func_384(), true), ENTITY::GET_ENTITY_HEADING(func_384()), -0.7f, 1.6f, 4f) };
				}
				Local_231.f_142 = MISC::GET_RANDOM_FLOAT_IN_RANGE((Local_231.f_142 - 1.5f), (Local_231.f_142 + 1.5f));
				Local_231.f_142.f_1 = MISC::GET_RANDOM_FLOAT_IN_RANGE((Local_231.f_142.f_1 - 1.5f), (Local_231.f_142.f_1 + 1.5f));
				Local_231.f_142.f_2 = MISC::GET_RANDOM_FLOAT_IN_RANGE((Local_231.f_142.f_2 + 0.5f), (Local_231.f_142.f_2 + 1.5f));
				if (!func_451(Local_231.f_142))
				{
					MISC::SET_BIT(&(Local_231.f_5), 14);
				}
			}
		}
		else if (BitTest(Local_231.f_5, 15))
		{
			Local_231.f_142 = MISC::GET_RANDOM_FLOAT_IN_RANGE((Local_231.f_142 - 1.5f), (Local_231.f_142 + 1.5f));
			Local_231.f_142.f_1 = MISC::GET_RANDOM_FLOAT_IN_RANGE((Local_231.f_142.f_1 - 1.5f), (Local_231.f_142.f_1 + 1.5f));
			Local_231.f_142.f_2 = MISC::GET_RANDOM_FLOAT_IN_RANGE((Local_231.f_142.f_2 + 0.5f), (Local_231.f_142.f_2 + 1.5f));
			if (!func_451(Local_231.f_142))
			{
				MISC::CLEAR_BIT(&(Local_231.f_5), 15);
			}
		}
		func_450(Local_231.f_142);
	}
	else if (Local_231.f_16 == 1 && !func_451(Local_231.f_142))
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

void func_450(struct<3> Param0)
{
	int iVar0;
	float fVar1;
	int iVar2;
	var uVar3;
	struct<3> Var6;
	var uVar9;
	int iVar10;
	
	switch (Local_231.f_15)
	{
		case 0:
			if (func_159())
			{
				if (func_24(func_384()))
				{
					iVar0 = func_384();
				}
			}
			if (func_33() || func_54())
			{
				fVar1 = func_251(Local_231.f_244);
			}
			else
			{
				fVar1 = (func_251(Local_231.f_244) * 11f);
			}
			Local_231.f_172 = SHAPETEST::START_SHAPE_TEST_CAPSULE(Param0, Param0, fVar1, 511, iVar0, 4);
			if (Local_231.f_172 != 0)
			{
				Local_231.f_15 = 1;
			}
			break;
		
		case 1:
			iVar10 = SHAPETEST::GET_SHAPE_TEST_RESULT(Local_231.f_172, &iVar2, &Var6, &uVar3, &uVar9);
			if (iVar10 == 2)
			{
				if (iVar2 == 0)
				{
					Local_231.f_16 = 1;
					Var6 = { 0f, 0f, 0f };
				}
				else
				{
					Local_231.f_16 = 2;
					Local_231.f_172 = 0;
					Local_231.f_15 = 0;
				}
			}
			else if (iVar10 == 0)
			{
				Local_231.f_15 = 0;
			}
			break;
	}
}

int func_451(struct<3> Param0)
{
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -1036.27f, -228.704f, 53.76435f, -1096.765f, -258.69f, 35.77808f, 20f, false, true))
	{
		return 1;
	}
	return 0;
}

int func_452()
{
	if (func_159())
	{
		return 1;
	}
	if (func_39() && !func_40())
	{
		return 1;
	}
	return 0;
}

int func_453()
{
	if (func_328())
	{
		return Global_1950702.f_766 == 0;
	}
	return 0;
}

void func_454()
{
	if (func_26(PLAYER::PLAYER_ID(), 1, 1))
	{
		Local_231.f_145 = { func_294(&Local_231) };
		if (!func_293(func_448()))
		{
			Local_231.f_142 = { func_448() };
		}
		else
		{
			Local_231.f_142 = { func_6(PLAYER::PLAYER_ID()) };
			Local_231.f_142 = { Local_231.f_142, Local_231.f_142.f_1, (Local_231.f_142.f_2 + 1.5f) };
		}
		if (func_32() || func_31())
		{
			if (!func_430(Local_231.f_36) || AUDIO::HAS_SOUND_FINISHED(Local_231.f_36))
			{
				Local_231.f_36 = AUDIO::GET_SOUND_ID();
				AUDIO::PLAY_SOUND_FRONTEND(Local_231.f_36, "HUD_Static_Loop", Local_231.f_161, true);
			}
		}
		if (func_89(PLAYER::PLAYER_ID(), 0))
		{
			func_505(1);
		}
		if (func_89(PLAYER::PLAYER_ID(), 0))
		{
			func_502();
		}
		else if (((func_500(PLAYER::PLAYER_ID()) == 2 || func_500(PLAYER::PLAYER_ID()) == 1) && !BitTest(Global_1971473, 6)) && !BitTest(Global_1971474, 0))
		{
			if (BitTest(Global_2709217, 0))
			{
				func_499(1);
				func_490(0, 0);
				func_489();
				func_435(1);
				func_424(1);
			}
		}
		else if ((func_56() && func_485()) && !BitTest(Global_1971473, 6))
		{
			func_470();
		}
		else if (BitTest(Global_1971473, 6) && BitTest(Global_1971474, 0))
		{
			func_490(0, 0);
			func_435(1);
			func_424(1);
		}
		else if (func_17())
		{
			func_456();
		}
		else if (func_40() && !func_455())
		{
			HUD::CLEAR_HELP(true);
			func_157("PIM_DRONAMOS", -1);
			func_332(PLAYER::PLAYER_ID(), 1, 0, 0);
			func_424(7);
		}
		else if (func_293(Local_231.f_139))
		{
			Local_231.f_160 = 0;
			func_435(1);
			func_424(1);
		}
	}
}

bool func_455()
{
	return BitTest(Global_1964670, 23);
}

void func_456()
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var4;
	
	if ((func_441() && !func_469()) && !func_460())
	{
		if (PAD::IS_CONTROL_PRESSED(2, 201) || PAD::IS_DISABLED_CONTROL_PRESSED(2, 201))
		{
			if (Global_1579273 == 1)
			{
				Local_231.f_84[PLAYER::PLAYER_ID()] = MISC::GET_RANDOM_INT_IN_RANGE(1, 5);
			}
			else
			{
				Local_231.f_84[PLAYER::PLAYER_ID()] = MISC::GET_RANDOM_INT_IN_RANGE(5, 9);
			}
			if (Global_1579273 == 1)
			{
				iVar0 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(func_16(), func_416(PLAYER::PLAYER_ID()));
				Var1 = { ENTITY::GET_ENTITY_BONE_POSTION(func_16(), iVar0) };
				Local_231.f_148 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Var1, ENTITY::GET_ENTITY_HEADING(func_16()), 0f, 0f, -2.6f) };
			}
			else if (Global_1579273 == 2)
			{
				iVar0 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(func_16(), func_416(PLAYER::PLAYER_ID()));
				Var1 = { ENTITY::GET_ENTITY_BONE_POSTION(func_16(), iVar0) };
				Local_231.f_148 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Var1, ENTITY::GET_ENTITY_HEADING(func_16()), 0f, 0f, -2.6f) };
			}
			Var4 = { ENTITY::GET_ENTITY_ROTATION(func_16(), 2) };
			func_413(Local_231.f_148, (Var4.f_0 + 90f), 180f, Var4.f_2);
			func_435(1);
			func_459(Local_231.f_84[PLAYER::PLAYER_ID()]);
			func_424(1);
			func_458();
			func_457();
			HUD::CLEAR_HELP(true);
		}
	}
	else if (!func_24(func_16()))
	{
	}
	if (func_469())
	{
		if (func_223("MP_SUBSEAT_2"))
		{
			HUD::CLEAR_HELP(true);
		}
	}
}

void func_457()
{
	Global_2733190.f_384++;
}

void func_458()
{
	Global_2733190.f_384 = 0;
	Global_2733190.f_384.f_1 = 0;
}

void func_459(var uParam0)
{
	struct<4> Var0;
	int iVar4;
	
	Var0.f_0 = 1799415011;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_3 = uParam0;
	iVar4 = func_220(0, 1);
	if (iVar4 != 0)
	{
		SCRIPT::_SEND_TU_SCRIPT_EVENT_NEW(1, &Var0, 4, iVar4, Var0.f_0);
	}
}

int func_460()
{
	struct<3> Var0;
	int iVar3;
	
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1420.915f, -3009.132f, -79.99994f, -1421.98f, -3009.121f, -77.74994f, 1f, false, true, 0))
	{
		return 1;
	}
	if (!func_24(PLAYER::PLAYER_PED_ID()) && BitTest(Global_1964670.f_2, 2))
	{
		return 1;
	}
	if (func_468())
	{
		return 1;
	}
	if (func_467())
	{
		return 1;
	}
	if (HUD::IS_PAUSE_MENU_ACTIVE())
	{
		return 1;
	}
	if (func_328())
	{
		return 1;
	}
	if (func_89(PLAYER::PLAYER_ID(), 0))
	{
		if (func_63(Global_1845137) || func_62(Global_1845137))
		{
			return 1;
		}
		if (func_227(PLAYER::PLAYER_ID(), 1))
		{
			if (func_225(func_189()) == 1)
			{
				return 1;
			}
		}
	}
	if (func_159())
	{
		if (func_466())
		{
			if (func_465())
			{
				return 1;
			}
			if (BitTest(Local_231.f_5, 28))
			{
				return 1;
			}
		}
	}
	if (func_17())
	{
		if ((func_464() && Global_1579273 == 1) || (func_463() && Global_1579273 == 2))
		{
			return 1;
		}
		if (BitTest(Local_231.f_5, 28))
		{
			return 1;
		}
		if (!func_24(func_16()))
		{
			return 1;
		}
		Var0 = { ENTITY::GET_ENTITY_COORDS(func_16(), true) };
		if (Var0.f_2 <= -3f)
		{
			return 1;
		}
		iVar3 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(func_16(), -1, false);
		if (func_24(iVar3))
		{
			if (PED::IS_PED_A_PLAYER(iVar3))
			{
				if (func_231(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar3)))
				{
					return 1;
				}
			}
		}
	}
	if (func_231(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	if (func_96(0))
	{
		return 1;
	}
	if (func_343())
	{
		return 1;
	}
	if (func_159())
	{
		if (func_55())
		{
			if (func_26(PLAYER::PLAYER_ID(), 1, 1))
			{
				if (func_179(PLAYER::PLAYER_PED_ID(), -1422.188f, -3015.926f, -80.1554f, 1) < 1.5f)
				{
					return 1;
				}
				if (func_462())
				{
					return 1;
				}
			}
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true) || func_461(PLAYER::PLAYER_PED_ID(), 1))
			{
				return 1;
			}
		}
	}
	if (func_229())
	{
		return 1;
	}
	if (Global_262145.f_24338)
	{
		return 1;
	}
	if (BitTest(Local_231.f_5, 27))
	{
		return 1;
	}
	if (func_89(PLAYER::PLAYER_ID(), 0))
	{
		if (func_24(func_384()))
		{
			if ((ENTITY::IS_ENTITY_IN_ANGLED_AREA(func_384(), -136.1614f, 4617.176f, 124.5134f, -490.3058f, 4924.749f, 159.0677f, 19.5f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(func_384(), 908.465f, 34.85726f, 79.35429f, 926.4139f, 64.37743f, 87.99218f, 19f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(func_384(), 946.8937f, -6.119501f, 77.90774f, 962.0698f, -5.454865f, 88.65581f, 10.75f, false, true, 0))
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	if (Global_1579268)
	{
		return 1;
	}
	if (Global_2712181)
	{
		return 1;
	}
	if (Global_2712176)
	{
		return 1;
	}
	return 0;
}

int func_461(int iParam0, int iParam1)
{
	if (iParam1 && (!ENTITY::DOES_ENTITY_EXIST(iParam0) || ENTITY::IS_ENTITY_DEAD(iParam0, false)))
	{
		return 0;
	}
	if (TASK::GET_IS_TASK_ACTIVE(iParam0, 2))
	{
		return 1;
	}
	if (PED::GET_VEHICLE_PED_IS_TRYING_TO_ENTER(iParam0) != 0 || PED::GET_VEHICLE_PED_IS_ENTERING(iParam0) != 0)
	{
		return 1;
	}
	return 0;
}

int func_462()
{
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1420.588f, -3013.374f, -79.99994f, -1421.918f, -3012.804f, -77.99994f, 0.675f, false, true, 0))
	{
		return 1;
	}
	return 0;
}

int func_463()
{
	if (PLAYER::PLAYER_ID() == func_13())
	{
		return 0;
	}
	if (Global_2658293[PLAYER::PLAYER_ID() /*468*/].f_325.f_11 != func_13() && PLAYER::PLAYER_ID() != func_13())
	{
		return BitTest(Global_1845298[Global_2658293[PLAYER::PLAYER_ID() /*468*/].f_325.f_11 /*881*/].f_260.f_490, 2);
	}
	return 0;
}

int func_464()
{
	if (PLAYER::PLAYER_ID() == func_13())
	{
		return 0;
	}
	if (Global_2658293[PLAYER::PLAYER_ID() /*468*/].f_325.f_11 != func_13() && PLAYER::PLAYER_ID() != func_13())
	{
		return BitTest(Global_1845298[Global_2658293[PLAYER::PLAYER_ID() /*468*/].f_325.f_11 /*881*/].f_260.f_490, 1);
	}
	return 0;
}

int func_465()
{
	if (Global_2658293[PLAYER::PLAYER_ID() /*468*/].f_325.f_11 != func_13() && PLAYER::PLAYER_ID() != func_13())
	{
		return BitTest(Global_1845298[Global_2658293[PLAYER::PLAYER_ID() /*468*/].f_325.f_11 /*881*/].f_260.f_376, 20);
	}
	return 0;
}

int func_466()
{
	if (func_187(PLAYER::PLAYER_ID()) && Global_1964670.f_8 == -1)
	{
		return 0;
	}
	return 1;
}

int func_467()
{
	if (Global_2673273.f_1023.f_5 == -1)
	{
		return 0;
	}
	return 1;
}

bool func_468()
{
	return MISC::GET_GAME_TIMER() <= Global_24569.f_6481 + 100;
}

int func_469()
{
	char* sVar0;
	
	sVar0 = "anim@scripted@submarine@ig28_submarine_turret_control@male@";
	if (func_81(PLAYER::PLAYER_PED_ID()))
	{
		sVar0 = "anim@scripted@submarine@ig28_submarine_turret_control@heeled@";
	}
	if ((((((((ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "enter", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "enter_left", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "exit", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "exit_left", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), sVar0, "enter_left", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), sVar0, "enter", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), sVar0, "exit", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), sVar0, "exit_left", 3)) || func_79(PLAYER::PLAYER_PED_ID(), joaat("script_task_go_straight_to_coord")))
	{
		return 1;
	}
	return 0;
}

void func_470()
{
	struct<3> Var0;
	int iVar3;
	
	if (!func_460())
	{
		if ((((((func_484() || func_483()) && !Global_1935401) && func_485()) && !BitTest(Global_2709095, 6)) && Global_1574975) && !(func_484() && Global_262145.f_26296))
		{
			if ((((((PAD::IS_CONTROL_JUST_PRESSED(2, 224) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 224)) && !PAD::IS_CONTROL_JUST_PRESSED(2, 223)) && !PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 223)) && !PAD::IS_CONTROL_JUST_PRESSED(2, 235)) && !PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 235)) && !PAD::IS_DISABLED_CONTROL_PRESSED(2, 19))
			{
				if (MONEY::NETWORK_CAN_SPEND_MONEY(Global_262145.f_26298, false, false, true, -1, 0) || BitTest(Global_2709095, 2))
				{
					MISC::SET_BIT(&Global_2709095, false);
					func_490(0, 0);
					func_435(1);
					func_424(1);
					func_478();
					func_476(73, -1);
					func_472();
					Var0 = { func_471() };
					func_413(Var0, 0f, 0f, 0f);
					if (func_484())
					{
						AUDIO::PLAY_SOUND_FROM_ENTITY(iVar3, "Select_Spec_Drone", PLAYER::PLAYER_PED_ID(), "DLC_AW_Spectator_Tablet_Sounds", true, 0);
					}
				}
				else if (!BitTest(Global_2709095, 4))
				{
					MISC::SET_BIT(&Global_2709095, 4);
				}
			}
		}
	}
}

Vector3 func_471()
{
	float fVar0;
	float fVar1;
	float fVar2;
	struct<3> Var3;
	
	fVar0 = 0f;
	fVar1 = 6f;
	fVar2 = 6f;
	Var3 = { 2800f, -3800.2f, 170f };
	if ((Global_4718592.f_189798.f_1 == 3 || Global_4718592.f_189798.f_1 == 3) || Global_4718592.f_189798.f_1 == 3)
	{
		Var3.f_1 = -3860f;
	}
	fVar1 = (fVar1 * IntToFloat(NETWORK::PARTICIPANT_ID_TO_INT()));
	fVar2 = (fVar2 * IntToFloat((NETWORK::PARTICIPANT_ID_TO_INT() / 8)));
	fVar1 = (fVar1 - (8f * fVar2));
	return OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Var3, fVar0, fVar1, fVar2, 0f);
}

void func_472()
{
	int iVar0;
	
	iVar0 = func_473(73, -1);
	if (iVar0 >= 50)
	{
		MISC::SET_BIT(&(Global_1845298[PLAYER::PLAYER_ID() /*881*/].f_260.f_383.f_3), 13);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_1845298[PLAYER::PLAYER_ID() /*881*/].f_260.f_383.f_3), 13);
	}
}

int func_473(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	iVar0 = func_474(iParam0, iParam1);
	if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_474(int iParam0, var uParam1)
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(8, iParam0, func_475(uParam1));
}

int func_475(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_139();
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

void func_476(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_473(iParam0, func_475(iParam1));
	iVar0++;
	func_477(iParam0, iVar0, iParam1);
}

void func_477(int iParam0, int iParam1, var uParam2)
{
	int iVar0;
	
	iVar0 = func_474(iParam0, uParam2);
	STATS::STAT_SET_INT(iVar0, iParam1, true);
}

void func_478()
{
	func_479(7985, -1);
}

void func_479(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_482(iParam0, func_475(iParam1));
	iVar0++;
	func_480(iParam0, iVar0, iParam1, 1);
}

void func_480(int iParam0, int iParam1, var uParam2, bool bParam3)
{
	int iVar0;
	
	if (iParam0 != 16764)
	{
		iVar0 = func_481(iParam0, uParam2);
		if (iVar0 != 0)
		{
			STATS::STAT_SET_INT(iVar0, iParam1, bParam3);
		}
	}
}

int func_481(int iParam0, var uParam1)
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(0, iParam0, func_475(uParam1));
}

int func_482(int iParam0, var uParam1)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 16764)
	{
		iVar0 = func_481(iParam0, uParam1);
		if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

var func_483()
{
	return Global_2697101;
}

int func_484()
{
	if (Global_2697100 >= 0 && Global_2697100 < 10)
	{
		return 1;
	}
	return 0;
}

int func_485()
{
	int iVar0;
	int iVar1;
	
	if (func_488() && !func_487())
	{
		return 1;
	}
	iVar0 = PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID());
	if (iVar0 >= 4 || iVar0 < 0)
	{
		iVar0 = 0;
	}
	iVar1 = Global_1058150.f_14[iVar0];
	if (iVar1 < 17)
	{
		if ((((BitTest(Global_4718592.f_3838[iVar0 /*26988*/].f_8630[iVar1], 23) && BitTest(Global_4718592.f_3838[iVar0 /*26988*/].f_8630[iVar1], 24)) && BitTest(Global_4718592.f_3838[iVar0 /*26988*/].f_8630[iVar1], 25)) && BitTest(Global_4718592.f_3838[iVar0 /*26988*/].f_8630[iVar1], 26)) && BitTest(Global_4718592.f_33, 16))
		{
			return 1;
		}
	}
	if (!BitTest(Global_4718592.f_33, 16))
	{
		return 1;
	}
	else if (func_483() || func_486(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	return 0;
}

var func_486(bool bParam0)
{
	return BitTest(Global_1845298[bParam0 /*881*/].f_36.f_18, 14);
}

int func_487()
{
	if (Global_4718592.f_133517 == 1 || Global_4718592.f_133517 == 2)
	{
		return 1;
	}
	return 0;
}

var func_488()
{
	return BitTest(Global_4718592.f_189724, 12);
}

void func_489()
{
	MISC::CLEAR_BIT(&Global_2709217, false);
}

void func_490(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	Local_231.f_123 = Global_262145.f_24332;
	Local_231.f_134 = 40f;
	if (func_185())
	{
		Local_231.f_123 = 200f;
		Local_231.f_134 = 90f;
	}
	else if (func_54() || func_33())
	{
		Local_231.f_123 = (Local_231.f_123 * 4.5f);
	}
	else if (func_51())
	{
		Local_231.f_123 = 100f;
		Local_231.f_134 = 26f;
	}
	else if (func_39())
	{
		Local_231.f_123 = 100f;
		Local_231.f_134 = 70f;
	}
	else if (func_182())
	{
		Local_231.f_123 = 10f;
		Local_231.f_134 = 35f;
	}
	else if (func_32() || func_31())
	{
		Local_231.f_123 = 70f;
		Local_231.f_134 = 70f;
	}
	else if (func_17())
	{
		Local_231.f_123 = 149f;
		Local_231.f_134 = 16f;
	}
	if (func_31())
	{
		Local_231.f_244 = 479173390;
		func_498(5f);
		func_211(func_172());
	}
	else if (func_54())
	{
		Local_231.f_244 = joaat("xs_prop_arena_drone_01");
	}
	else if (func_33())
	{
		Local_231.f_244 = joaat("xs_prop_arena_drone_02");
	}
	else if (func_51())
	{
		Local_231.f_244 = joaat("xs_prop_arena_airmissile_01a");
		func_497(1);
	}
	else if (func_39())
	{
		if (!func_40())
		{
			iVar0 = func_496(PLAYER::PLAYER_ID());
			switch (iVar0)
			{
				case 37:
					Local_231.f_244 = joaat("ch_prop_arcade_drone_01d");
					break;
				
				case 38:
					Local_231.f_244 = joaat("ch_prop_arcade_drone_01a");
					break;
				
				case 39:
					Local_231.f_244 = joaat("ch_prop_arcade_drone_01c");
					break;
				
				case 40:
					Local_231.f_244 = joaat("ch_prop_arcade_drone_01b");
					break;
			}
		}
		else
		{
			Local_231.f_244 = joaat("ch_prop_casino_drone_01a");
		}
	}
	else if (func_182() || func_32())
	{
		Local_231.f_244 = joaat("ch_prop_casino_drone_01a");
	}
	else if (func_17())
	{
		Local_231.f_244 = joaat("h4_prop_h4_airmissile_01a");
		func_497(1);
	}
	else
	{
		Local_231.f_244 = joaat("ba_prop_battle_drone_quad");
	}
	if (bParam1)
	{
		Local_231.f_142 = { Local_231.f_148 };
	}
	Global_1964670.f_1 = 1500;
	MISC::CLEAR_BIT(&(Global_1964670.f_4), false);
	MISC::CLEAR_BIT(&(Global_1964670.f_4), true);
	func_495();
	func_494(1);
	func_493(1);
	if (func_54() || func_103())
	{
		func_492(1);
	}
	else if (func_33())
	{
		func_492(0);
	}
	if (func_40())
	{
		Local_231.f_162 = "ANIM_HEIST@HS3F@IG4_DRONE@MALE@";
		STREAMING::REQUEST_ANIM_DICT(Local_231.f_162);
	}
	if (func_33())
	{
		STREAMING::REQUEST_NAMED_PTFX_ASSET("scr_xs_dr");
	}
	if (func_40())
	{
		func_491(Global_262145.f_28403);
	}
	else if (func_39() && !func_40())
	{
		func_491(Global_262145.f_28404);
	}
	else if (func_17())
	{
		func_491(SYSTEM::TO_FLOAT(Global_262145.f_29725));
		iVar1 = 0;
		while (iVar1 <= 31)
		{
			Local_231.f_48[iVar1] = -1;
			iVar1++;
		}
	}
	else if (!func_159() && !func_379())
	{
		func_491(200f);
	}
	func_106(Global_1837387);
	if (bParam0)
	{
	}
}

void func_491(float fParam0)
{
	if (Global_1964670.f_13 != fParam0)
	{
		Global_1964670.f_13 = fParam0;
	}
}

void func_492(bool bParam0)
{
	if (bParam0)
	{
		if (!func_221())
		{
			MISC::SET_BIT(&Global_1964670, 8);
		}
	}
	else if (func_221())
	{
		MISC::CLEAR_BIT(&Global_1964670, 8);
	}
}

void func_493(bool bParam0)
{
	if (bParam0)
	{
		if (!func_396())
		{
			MISC::SET_BIT(&Global_1964670, 2);
		}
	}
	else if (func_396())
	{
		MISC::CLEAR_BIT(&Global_1964670, 2);
	}
}

void func_494(bool bParam0)
{
	if (bParam0)
	{
		if (!func_283())
		{
			MISC::SET_BIT(&Global_1964670, 4);
		}
	}
	else if (func_283())
	{
		MISC::CLEAR_BIT(&Global_1964670, 4);
	}
}

void func_495()
{
	if (!Local_231.f_160)
	{
		Local_231.f_18 = 100;
	}
	if (func_182())
	{
		Local_231.f_24 = 100;
	}
	Local_231.f_19 = 0;
	Local_231.f_20 = 100;
	Local_231.f_129 = 90f;
	Local_231.f_132 = 90f;
	if (!func_103())
	{
		Local_231.f_174 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("DRONE_CAM");
	}
	else if (func_17())
	{
		Local_231.f_174 = func_132();
	}
	else
	{
		Local_231.f_174 = func_131();
	}
	if (func_32() || func_31())
	{
		Local_231.f_161 = "GTAO_Drone_Sounds";
	}
	else if (func_54())
	{
		Local_231.f_161 = "DLC_Arena_Drone_Sounds";
	}
	else if (func_33())
	{
		Local_231.f_161 = "DLC_Arena_Battle_Drone_Sounds";
	}
	else if (func_51())
	{
		Local_231.f_161 = "DLC_Arena_Piloted_Missile_Sounds";
	}
	else if (func_17())
	{
		Local_231.f_161 = "DLC_H4_Piloted_Missile_Sounds";
	}
	else
	{
		Local_231.f_161 = "DLC_BTL_Drone_Sounds";
	}
}

int func_496(bool bParam0)
{
	if (bParam0 != func_13())
	{
		return Global_2658293[bParam0 /*468*/].f_441.f_1;
	}
	return -1;
}

void func_497(bool bParam0)
{
	if (bParam0)
	{
		if (!func_236())
		{
			MISC::SET_BIT(&Global_1964670, 15);
		}
	}
	else if (func_236())
	{
		MISC::CLEAR_BIT(&Global_1964670, 15);
	}
}

void func_498(float fParam0)
{
	if (Global_1964670.f_11 != fParam0)
	{
		Global_1964670.f_11 = fParam0;
	}
}

void func_499(bool bParam0)
{
	if (bParam0)
	{
		if (!BitTest(Global_1964670.f_2, 4))
		{
			Global_1964670.f_2 = 0;
			MISC::SET_BIT(&(Global_1964670.f_2), 4);
		}
	}
	else if (BitTest(Global_1964670.f_2, 4))
	{
		MISC::CLEAR_BIT(&(Global_1964670.f_2), 4);
	}
}

int func_500(bool bParam0)
{
	if (bParam0 == PLAYER::PLAYER_ID() && !func_501())
	{
		return Global_2709122.f_1;
	}
	return Global_2649161.f_1166[bParam0 /*3*/].f_1;
}

int func_501()
{
	if (((Global_2709125 != 0 && Global_2709125 == Global_2709126) && Global_2709114 != 3) && Global_2709114 != 1)
	{
		return 0;
	}
	return 1;
}

void func_502()
{
	if (!func_460())
	{
		if (func_57())
		{
			if (func_444())
			{
				if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() && !HUD::IS_HELP_MESSAGE_ON_SCREEN())
				{
					func_504("DRONE_TRIG");
				}
			}
			else if (func_223("DRONE_TRIG"))
			{
				HUD::CLEAR_HELP(true);
			}
			if (func_57() || func_443())
			{
				if (PAD::IS_CONTROL_JUST_RELEASED(2, 176) || PAD::IS_DISABLED_CONTROL_JUST_RELEASED(2, 176))
				{
					func_435(1);
					func_424(1);
					HUD::CLEAR_HELP(true);
				}
			}
			else if (func_223("DRONE_TRIG"))
			{
				if ((PAD::IS_CONTROL_JUST_RELEASED(2, 51) || PAD::IS_DISABLED_CONTROL_JUST_RELEASED(2, 51)) || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					Local_231.f_160 = 0;
					func_435(1);
					func_424(1);
					HUD::CLEAR_HELP(true);
				}
			}
		}
		else if ((func_55() && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1420.684f, -3010.617f, -77.99994f, -1423.142f, -3012.295f, -77.74994f, 2f, false, true, 0)) && func_444())
		{
			if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() && !HUD::IS_HELP_MESSAGE_ON_SCREEN())
			{
				func_504("DRONE_TRIG");
			}
			if (func_223("DRONE_TRIG"))
			{
				if (PAD::IS_CONTROL_JUST_RELEASED(2, 51) || PAD::IS_DISABLED_CONTROL_JUST_RELEASED(2, 51))
				{
					Local_231.f_160 = 0;
					func_435(1);
					func_424(1);
					HUD::CLEAR_HELP(true);
				}
			}
		}
		else if (func_223("DRONE_TRIG"))
		{
			HUD::CLEAR_HELP(true);
		}
		if (func_503() || func_57())
		{
			if (func_223("DRONE_TRIG"))
			{
				HUD::CLEAR_HELP(true);
			}
		}
	}
	else if (func_223("DRONE_TRIG"))
	{
		HUD::CLEAR_HELP(true);
	}
}

int func_503()
{
	if ((((ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "enter", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "enter_left", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "exit", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "exit_left", 3)) || func_79(PLAYER::PLAYER_PED_ID(), joaat("script_task_go_straight_to_coord")))
	{
		return 1;
	}
	if ((ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "base", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "computer_enter", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "computer_exit", 3))
	{
		return 1;
	}
	return 0;
}

void func_504(char* sParam0)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, true, true, -1);
}

void func_505(bool bParam0)
{
	if (bParam0)
	{
		if (!BitTest(Global_1964670.f_2, 1))
		{
			Global_1964670.f_2 = 0;
			MISC::SET_BIT(&(Global_1964670.f_2), true);
		}
	}
	else if (BitTest(Global_1964670.f_2, 1))
	{
		MISC::CLEAR_BIT(&(Global_1964670.f_2), true);
	}
}

void func_506()
{
	char* sVar0;
	
	if (Local_231.f_47 == -1)
	{
		return;
	}
	if (!func_508(Local_231.f_47) && !func_507(Local_231.f_47))
	{
		return;
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_133[Local_231.f_47 /*3*/].f_2))
	{
		sVar0 = "scr_xs_props";
		STREAMING::REQUEST_NAMED_PTFX_ASSET(sVar0);
		if (STREAMING::HAS_NAMED_PTFX_ASSET_LOADED(sVar0))
		{
			if (!GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(Local_231.f_178[Local_231.f_47]))
			{
				GRAPHICS::USE_PARTICLE_FX_ASSET(sVar0);
				if (func_508(Local_231.f_47))
				{
					Local_231.f_178[Local_231.f_47] = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_xs_guided_missile_trail", NETWORK::NET_TO_OBJ(Local_133[Local_231.f_47 /*3*/].f_2), 0f, 0f, 0f, 0f, 0f, 0f, 1f, false, false, false);
				}
				else
				{
					Local_231.f_178[Local_231.f_47] = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_xs_guided_missile_trail", NETWORK::NET_TO_OBJ(Local_133[Local_231.f_47 /*3*/].f_2), 0f, 0.25f, 0f, 0f, 0f, 0f, 3f, false, false, false);
				}
			}
		}
	}
	else if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(Local_231.f_178[Local_231.f_47]))
	{
		GRAPHICS::STOP_PARTICLE_FX_LOOPED(Local_231.f_178[Local_231.f_47], false);
	}
}

int func_507(int iParam0)
{
	if (iParam0 != func_13())
	{
		if (Local_133[iParam0 /*3*/].f_1 == 8)
		{
			return 1;
		}
	}
	return 0;
}

int func_508(int iParam0)
{
	if (iParam0 != func_13())
	{
		if (Local_133[iParam0 /*3*/].f_1 == 4)
		{
			return 1;
		}
	}
	return 0;
}

void func_509()
{
	if (!func_526(6) && !func_512())
	{
		return;
	}
	if (Local_231.f_47 != -1)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_133[Local_231.f_47 /*3*/].f_2) && func_24(NETWORK::NET_TO_OBJ(Local_133[Local_231.f_47 /*3*/].f_2)))
		{
			if (func_511(Local_231.f_47))
			{
				Local_231.f_161 = "DLC_Arena_Drone_Sounds";
			}
			else if (func_510(Local_231.f_47))
			{
				Local_231.f_161 = "DLC_Arena_Battle_Drone_Sounds";
			}
			else if (func_508(Local_231.f_47))
			{
				Local_231.f_161 = "DLC_Arena_Piloted_Missile_Sounds";
			}
			else if (func_507(Local_231.f_47))
			{
				Local_231.f_161 = "DLC_H4_Piloted_Missile_Sounds";
			}
			else
			{
				Local_231.f_161 = "DLC_BTL_Drone_Sounds";
			}
			if (Local_231.f_48[Local_231.f_47] == -1)
			{
				Local_231.f_48[Local_231.f_47] = AUDIO::GET_SOUND_ID();
				AUDIO::PLAY_SOUND_FROM_ENTITY(Local_231.f_48[Local_231.f_47], "Flight_Loop", NETWORK::NET_TO_OBJ(Local_133[Local_231.f_47 /*3*/].f_2), Local_231.f_161, false, 0);
				AUDIO::SET_VARIABLE_ON_SOUND(Local_231.f_48[Local_231.f_47], "DroneRotationalSpeed", 1f);
			}
			else
			{
				AUDIO::SET_VARIABLE_ON_SOUND(Local_231.f_48[Local_231.f_47], "DroneRotationalSpeed", 1f);
			}
		}
		else if (Local_231.f_48[Local_231.f_47] != -1)
		{
			AUDIO::STOP_SOUND(Local_231.f_48[Local_231.f_47]);
			AUDIO::RELEASE_SOUND_ID(Local_231.f_48[Local_231.f_47]);
			Local_231.f_48[Local_231.f_47] = -1;
		}
	}
}

int func_510(int iParam0)
{
	if (iParam0 != func_13())
	{
		if (Local_133[iParam0 /*3*/].f_1 == 2)
		{
			return 1;
		}
	}
	return 0;
}

int func_511(int iParam0)
{
	if (iParam0 != func_13())
	{
		if (Local_133[iParam0 /*3*/].f_1 == 3)
		{
			return 1;
		}
	}
	return 0;
}

bool func_512()
{
	return BitTest(Global_1950702.f_7, 14);
}

void func_513()
{
	bool bVar0;
	int iVar1;
	char* sVar2;
	char* sVar3;
	int iVar4;
	
	if (Local_231.f_47 == -1)
	{
		return;
	}
	bVar0 = Local_231.f_47;
	if (!func_26(bVar0, 1, 1))
	{
		return;
	}
	if (!func_526(6) && !func_512())
	{
		return;
	}
	if (BitTest(Local_231.f_119, Local_231.f_47))
	{
		iVar1 = func_514(Global_2658293[Local_231.f_47 /*468*/].f_325.f_11);
		if (!func_24(iVar1))
		{
			return;
		}
		sVar2 = "scr_ih_sub";
		STREAMING::REQUEST_NAMED_PTFX_ASSET(sVar2);
		if (STREAMING::HAS_NAMED_PTFX_ASSET_LOADED(sVar2))
		{
			if (!GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(Local_231.f_211[bVar0]))
			{
				GRAPHICS::USE_PARTICLE_FX_ASSET(sVar2);
				sVar3 = func_416(bVar0);
				iVar4 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar1, sVar3);
				Local_231.f_211[bVar0] = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY_BONE("scr_ih_sub_missile_launch", iVar1, func_415(bVar0), 0f, 0f, 0f, iVar4, 5f, false, false, false);
			}
			else if (!func_34(&(Local_231.f_287[bVar0 /*2*/])))
			{
				func_30(&(Local_231.f_287[bVar0 /*2*/]), 0, 0);
				GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(Local_231.f_211[bVar0], "flame", 0.15f, false);
			}
			if (func_34(&(Local_231.f_287[bVar0 /*2*/])))
			{
				if (func_29(&(Local_231.f_287[bVar0 /*2*/]), 3000, 0))
				{
					if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(Local_231.f_211[bVar0]))
					{
						GRAPHICS::STOP_PARTICLE_FX_LOOPED(Local_231.f_211[bVar0], false);
					}
					func_28(&(Local_231.f_287[bVar0 /*2*/]));
					MISC::CLEAR_BIT(&(Local_231.f_119), Local_231.f_47);
				}
				else if (func_29(&(Local_231.f_287[bVar0 /*2*/]), 2000, 0))
				{
					GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(Local_231.f_211[bVar0], "flame", 0f, false);
				}
			}
		}
	}
}

int func_514(int iParam0)
{
	if (iParam0 != func_13())
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_1969858[iParam0]))
		{
			return Global_1969858[iParam0];
		}
	}
	return -1;
}

void func_515()
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
				if (!func_526(6))
				{
					func_517(iVar0);
				}
				break;
			
			case 174:
				SCRIPT::GET_EVENT_DATA(1, iVar0, &iVar2, 3);
				switch (iVar2)
				{
					case 1799415011:
						if (Global_1690419.f_923)
						{
							return;
						}
						func_516(iVar0);
						break;
				}
				break;
		}
		iVar0++;
	}
}

void func_516(int iParam0)
{
	struct<4> Var0;
	
	if (!func_526(6) && !func_512())
	{
		return;
	}
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 4))
	{
		if (Var0.f_1 != func_13())
		{
			Local_231.f_84[Var0.f_1] = Var0.f_3;
			MISC::SET_BIT(&(Local_231.f_119), Var0.f_1);
		}
	}
}

void func_517(int iParam0)
{
	struct<6> Var0;
	
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
							if (((NETWORK::NETWORK_IS_ACTIVITY_SESSION() || func_47(0)) && func_71(11)) && !BitTest(Global_1964670.f_4, 1))
							{
								func_370(PLAYER::PLAYER_ID(), NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0.f_1)), 0);
								MISC::SET_BIT(&(Global_1964670.f_4), true);
							}
						}
					}
				}
				if ((((NETWORK::NETWORK_IS_ACTIVITY_SESSION() || func_47(0)) && func_71(11)) && Var0.f_5) && !BitTest(Global_1964670.f_4, 1))
				{
					MISC::SET_BIT(&(Global_1964670.f_4), false);
					if (Var0.f_0 == Var0.f_1 || ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0.f_1) == PLAYER::PLAYER_PED_ID())
					{
						func_370(PLAYER::PLAYER_ID(), PLAYER::PLAYER_ID(), 0);
						MISC::SET_BIT(&(Global_1964670.f_4), true);
					}
					else
					{
						func_370(PLAYER::PLAYER_ID(), func_13(), 1);
						MISC::SET_BIT(&(Global_1964670.f_4), true);
					}
				}
			}
		}
	}
}

void func_518()
{
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_231.f_163))
	{
		if (!ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_VEH(Local_231.f_163), false))
		{
			Local_231.f_154 = { ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(Local_231.f_163), true) };
			Local_231.f_128 = ENTITY::GET_ENTITY_HEADING(NETWORK::NET_TO_VEH(Local_231.f_163));
			if (!func_34(&(Local_231.f_267)))
			{
				func_30(&(Local_231.f_267), 0, 0);
			}
			else if (func_29(&(Local_231.f_267), 1000, 0))
			{
				if (!func_414(Global_2658293[PLAYER::PLAYER_ID() /*468*/].f_434, Local_231.f_154, 0))
				{
					Global_2658293[PLAYER::PLAYER_ID() /*468*/].f_434 = { Local_231.f_154 };
				}
				if (Global_2658293[PLAYER::PLAYER_ID() /*468*/].f_437 != ENTITY::GET_ENTITY_HEADING(NETWORK::NET_TO_VEH(Local_231.f_163)))
				{
					Global_2658293[PLAYER::PLAYER_ID() /*468*/].f_437 = ENTITY::GET_ENTITY_HEADING(NETWORK::NET_TO_VEH(Local_231.f_163));
				}
				func_28(&(Local_231.f_267));
			}
		}
	}
	if (func_24(Local_231.f_167))
	{
		if (ENTITY::IS_ENTITY_VISIBLE(Local_231.f_167))
		{
			ENTITY::SET_ENTITY_VISIBLE(Local_231.f_167, false, false);
		}
	}
	if (func_24(Local_231.f_165))
	{
		if (ENTITY::IS_ENTITY_VISIBLE(Local_231.f_165))
		{
			ENTITY::SET_ENTITY_VISIBLE(Local_231.f_165, false, false);
		}
	}
}

void func_519()
{
	if (func_526(4))
	{
		if ((((func_159() || func_33()) || func_54()) || (func_39() && !func_40())) || func_17())
		{
			if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
			{
				func_332(PLAYER::PLAYER_ID(), 1, 0, 0);
			}
		}
		PAD::DISABLE_CONTROL_ACTION(0, 37, false);
		if (func_17())
		{
			func_522();
		}
		if (!func_51())
		{
			func_520();
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
			if (func_17())
			{
				PAD::ENABLE_CONTROL_ACTION(2, 20, true);
			}
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

void func_520()
{
	func_521();
}

void func_521()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 402)
	{
		PAD::DISABLE_CONTROL_ACTION(0, iVar0, true);
		iVar0++;
	}
}

void func_522()
{
	Global_24430.f_6 = 1;
}

void func_523()
{
	if (BitTest(Local_231.f_5, 28))
	{
		if (!func_34(&(Local_231.f_269)))
		{
			func_30(&(Local_231.f_269), 0, 0);
		}
		else if (func_29(&(Local_231.f_269), 5000, 0))
		{
			MISC::CLEAR_BIT(&(Local_231.f_5), 28);
			func_28(&(Local_231.f_269));
		}
	}
}

void func_524()
{
	bool bVar0;
	
	if (BitTest(Local_231.f_5, 27))
	{
		if (Global_2658293[PLAYER::PLAYER_ID() /*468*/].f_325.f_11 != func_13())
		{
			bVar0 = Global_2658293[PLAYER::PLAYER_ID() /*468*/].f_325.f_11;
		}
		else if (Global_1845137 != func_13())
		{
			bVar0 = Global_1845137;
		}
		else if (func_227(PLAYER::PLAYER_ID(), 0))
		{
			if (func_189() != func_13())
			{
				bVar0 = func_189();
			}
		}
		if (bVar0 != func_13())
		{
			if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(bVar0))
			{
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					func_202(bVar0, 0, 1, 0);
					MISC::CLEAR_BIT(&(Local_231.f_5), 27);
				}
			}
		}
	}
}

void func_525()
{
	struct<3> Var0;
	
	if (func_159())
	{
		if (func_526(1))
		{
			if (func_24(func_384()))
			{
				Var0 = { ENTITY::GET_ENTITY_COORDS(func_384(), true) };
				PED::SET_POP_CONTROL_SPHERE_THIS_FRAME(Var0, 200f, 200f);
				PED::SET_SCENARIO_PEDS_SPAWN_IN_SPHERE_AREA(Local_231.f_154, 60f, 30);
			}
		}
	}
	if (func_526(1) || func_526(4))
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_231.f_163))
		{
			if (CAM::DOES_CAM_EXIST(Local_231.f_173) && CAM::IS_CAM_RENDERING(Local_231.f_173))
			{
				if (func_526(4))
				{
					if (!func_293(Local_231.f_154))
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

bool func_526(int iParam0)
{
	return Local_231.f_245 == iParam0;
}

int func_527()
{
	if (func_46())
	{
		return 1;
	}
	if (!func_340())
	{
		return 1;
	}
	if (PLAYER::PLAYER_ID() != func_13())
	{
		if (!func_531())
		{
			if (func_301(PLAYER::PLAYER_ID()) && !func_300())
			{
				return 1;
			}
		}
	}
	if (!func_24(PLAYER::PLAYER_PED_ID()) && BitTest(Global_1964670.f_2, 2))
	{
		return 1;
	}
	if (func_233(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	if (func_11(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	if (func_531())
	{
		if (func_530())
		{
			return 1;
		}
		if (func_14(PLAYER::PLAYER_ID(), 1, 1))
		{
			return 1;
		}
		if (func_56())
		{
			return 1;
		}
		if (!func_529() && !func_528())
		{
			if (func_29(&(Local_231.f_285), 10000, 0))
			{
				return 1;
			}
		}
		else
		{
			func_28(&(Local_231.f_285));
		}
	}
	return 0;
}

int func_528()
{
	if (Global_1964670.f_27 != func_13())
	{
		if (Global_2658293[Global_1964670.f_27 /*468*/].f_325.f_11 != func_13())
		{
			if (func_24(Global_1969858[Global_2658293[Global_1964670.f_27 /*468*/].f_325.f_11]))
			{
				if (func_26(PLAYER::PLAYER_ID(), 1, 1))
				{
					if (SYSTEM::VDIST2(func_6(PLAYER::PLAYER_ID()), ENTITY::GET_ENTITY_COORDS(Global_1969858[Global_2658293[Global_1964670.f_27 /*468*/].f_325.f_11], true)) < 490000f)
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_529()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			if (BitTest(Local_133[iVar0 /*3*/], 0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_530()
{
	return BitTest(Global_1964670, 22);
}

bool func_531()
{
	return BitTest(Global_1964670.f_2, 9);
}

int func_532()
{
	if (Global_1575066 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 1;
		}
	}
	if (func_539())
	{
		return 1;
	}
	if (Global_2699678)
	{
		return 1;
	}
	if (func_538())
	{
		return 1;
	}
	if (func_537(159))
	{
		if (!func_536())
		{
			return 1;
		}
	}
	if (func_537(157))
	{
		return 1;
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return 1;
	}
	if (func_533() != 0)
	{
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(func_533()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_533()
{
	switch (func_535())
	{
		case 0:
			return func_534();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_534()
{
	switch (Global_2699787)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_535()
{
	return Global_33815;
}

bool func_536()
{
	return Global_2685152.f_726;
}

int func_537(int iParam0)
{
	if (SCRIPT::GET_EVENT_EXISTS(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_538()
{
	return Global_2697072;
}

bool func_539()
{
	return Global_2685152.f_721;
}

void func_540()
{
	SYSTEM::WAIT(0);
}

void func_541(bool bParam0)
{
	func_427(0);
	if (!func_531())
	{
		func_548(bParam0);
	}
	else
	{
		func_542();
	}
}

void func_542()
{
	Global_1964670.f_27 = func_13();
	func_28(&(Local_231.f_285));
	func_547(0);
	func_546(0);
	func_545(0);
	func_544(0);
	func_543();
}

void func_543()
{
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_544(bool bParam0)
{
	if (bParam0)
	{
		if (!BitTest(Global_1964670.f_2, 9))
		{
			Global_1964670.f_2 = 0;
			MISC::SET_BIT(&(Global_1964670.f_2), 9);
		}
	}
	else if (BitTest(Global_1964670.f_2, 9))
	{
		MISC::CLEAR_BIT(&(Global_1964670.f_2), 9);
	}
}

void func_545(bool bParam0)
{
	if (bParam0)
	{
		if (!BitTest(Global_1964670, 21))
		{
			MISC::SET_BIT(&Global_1964670, 21);
		}
	}
	else if (BitTest(Global_1964670, 21))
	{
		MISC::CLEAR_BIT(&Global_1964670, 21);
	}
}

void func_546(bool bParam0)
{
	if (bParam0)
	{
		if (!BitTest(Global_1964670, 22))
		{
			MISC::SET_BIT(&Global_1964670, 22);
		}
	}
	else if (BitTest(Global_1964670, 22))
	{
		MISC::CLEAR_BIT(&Global_1964670, 22);
	}
}

void func_547(bool bParam0)
{
	if (bParam0)
	{
		if (!BitTest(Global_1845298[PLAYER::PLAYER_ID() /*881*/].f_260.f_318, 31))
		{
			MISC::SET_BIT(&(Global_1845298[PLAYER::PLAYER_ID() /*881*/].f_260.f_318), 31);
		}
	}
	else if (BitTest(Global_1845298[PLAYER::PLAYER_ID() /*881*/].f_260.f_318, 31))
	{
		MISC::CLEAR_BIT(&(Global_1845298[PLAYER::PLAYER_ID() /*881*/].f_260.f_318), 31);
	}
}

void func_548(bool bParam0)
{
	int iVar0;
	struct<8> Var1;
	var uVar10;
	int iVar11;
	bool bVar12;
	int iVar13;
	struct<8> Var14;
	
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_231.f_163))
	{
		NETWORK::SET_NETWORK_ID_CAN_MIGRATE(Local_231.f_163, true);
		if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_231.f_163))
		{
			if (!BitTest(Local_231.f_6, 2))
			{
				if (func_103())
				{
					if (func_24(PLAYER::PLAYER_PED_ID()))
					{
						FIRE::ADD_OWNED_EXPLOSION(PLAYER::PLAYER_PED_ID(), func_377(), func_376(), func_375(), true, false, 1f);
					}
					else
					{
						FIRE::ADD_EXPLOSION(func_377(), func_376(), func_375(), true, false, 1f, false);
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
	if (func_39() && !func_40())
	{
		Var1 = -1;
		Var1.f_6 = 1073741824;
		Var1.f_7 = -1073741824;
		Var1.f_3 = 0;
		Var1.f_4 = 0;
		func_572(&Var1, 11);
	}
	if (func_223("DRONE_TRIG"))
	{
		HUD::CLEAR_HELP(true);
	}
	if (func_24(Local_231.f_165))
	{
		uVar10 = Local_231.f_165;
		PED::DELETE_PED(&uVar10);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_231.f_166))
	{
		OBJECT::DELETE_OBJECT(&(Local_231.f_166));
	}
	if (HUD::DOES_BLIP_EXIST(Local_231.f_175))
	{
		HUD::REMOVE_BLIP(&(Local_231.f_175));
	}
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
	if (func_275())
	{
		func_274(0);
	}
	func_569();
	func_364(1, -1);
	func_568();
	if (func_40())
	{
		func_374(0);
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_231.f_164))
	{
		iVar11 = NETWORK::NET_TO_OBJ(Local_231.f_164);
		OBJECT::DELETE_OBJECT(&iVar11);
	}
	if (!bParam0)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(Local_231.f_162))
		{
			STREAMING::REMOVE_ANIM_DICT(Local_231.f_162);
		}
		func_567(0);
	}
	func_284(0);
	if ((func_565() && (!func_301(PLAYER::PLAYER_ID()) || func_300())) && Global_1950702.f_5363 == -1)
	{
		func_332(PLAYER::PLAYER_ID(), 1, 0, 0);
		ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
	}
	Local_231.f_124 = 0f;
	Local_231.f_125 = 0f;
	Local_231.f_12 = 0;
	Local_231.f_14 = 0;
	Local_231.f_10 = 0;
	Local_231.f_16 = 0;
	func_28(&(Local_231.f_249));
	func_28(&(Local_231.f_251));
	if (!Local_231.f_160)
	{
		func_28(&(Local_231.f_253));
	}
	func_28(&(Local_231.f_257));
	func_28(&(Local_231.f_255));
	func_28(&(Local_231.f_259));
	func_28(&(Local_231.f_265));
	func_28(&(Local_231.f_271));
	func_28(&(Local_231.f_269));
	func_28(&(Local_231.f_267));
	func_28(&(Local_231.f_273));
	func_28(&(Local_231.f_275));
	func_28(&(Local_231.f_277));
	func_28(&(Local_231.f_281));
	func_28(&(Local_231.f_283));
	func_28(&(Local_231.f_261));
	func_28(&(Local_231.f_352));
	if (PLAYER::PLAYER_ID() != func_13())
	{
		func_28(&(Local_231.f_287[PLAYER::PLAYER_ID() /*2*/]));
	}
	MISC::CLEAR_BIT(&(Global_1964670.f_4), false);
	MISC::CLEAR_BIT(&(Global_1964670.f_4), true);
	Local_231.f_30 = 0;
	Local_231.f_5 = 0;
	Local_231.f_6 = 0;
	Global_1964670.f_7 = -1;
	func_564(-1f);
	func_491(0f);
	func_281(0);
	func_494(0);
	func_45(0);
	func_492(0);
	func_258(0);
	func_563(0);
	func_200(0);
	func_562(0);
	func_561(0);
	func_560(0);
	func_559(0);
	func_558(0);
	func_92(1);
	func_326(0);
	func_324(0);
	func_330(0);
	func_497(0);
	MISC::CLEAR_BIT(&Global_1964670, 29);
	func_413(0f, 0f, 0f, 0f, 0f, 0f);
	func_557();
	Global_1964670.f_30 = -1;
	MISC::CLEAR_BIT(&Global_2709095, false);
	MISC::CLEAR_BIT(&Global_1971474, false);
	func_424(0);
	if (!func_556(0))
	{
		func_322();
	}
	if (func_95())
	{
		func_129("SET_WARNING_IS_VISIBLE", 0);
		if (func_159() || func_17())
		{
			if (Global_2658293[PLAYER::PLAYER_ID() /*468*/].f_325.f_11 != func_13() && NETWORK::NETWORK_IS_PLAYER_ACTIVE(Global_2658293[PLAYER::PLAYER_ID() /*468*/].f_325.f_11))
			{
				bVar12 = Global_2658293[PLAYER::PLAYER_ID() /*468*/].f_325.f_11;
			}
			else if ((func_159() && Global_1845137 != func_13()) && NETWORK::NETWORK_IS_PLAYER_ACTIVE(Global_1845137))
			{
				bVar12 = Global_1845137;
			}
			else if ((func_17() && Global_1845138 != func_13()) && NETWORK::NETWORK_IS_PLAYER_ACTIVE(Global_1845138))
			{
				bVar12 = Global_1845138;
			}
			else if (func_227(PLAYER::PLAYER_ID(), 0))
			{
				if (func_189() != func_13() && NETWORK::NETWORK_IS_PLAYER_ACTIVE(func_189()))
				{
					bVar12 = func_189();
				}
			}
			if (bVar12 != func_13())
			{
				if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(bVar12) && NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (func_159())
					{
						func_202(bVar12, 0, 1, 0);
					}
					else if (func_17())
					{
						func_202(bVar12, 0, 8, Global_1579273);
					}
					MISC::SET_BIT(&(Local_231.f_5), 28);
				}
				else
				{
					MISC::SET_BIT(&(Local_231.f_5), 27);
				}
			}
			else
			{
				MISC::SET_BIT(&(Local_231.f_5), 27);
			}
		}
		else if (func_39() || func_182())
		{
			func_28(&Global_1964632);
			func_555(300000);
			func_554(1);
			MISC::SET_BIT(&(Local_231.f_5), 28);
		}
		func_434(0);
		func_433(0);
		MISC::CLEAR_BIT(&(Local_133[PLAYER::PLAYER_ID() /*3*/]), false);
		iVar13 = MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Local_231.f_177));
		if (((func_39() || func_182()) || func_32()) || func_31())
		{
			Var14.f_7 = Global_786547;
			Var14.f_1 = Global_786547.f_1;
			if (NETWORK::NETWORK_IS_ACTIVITY_SESSION() || func_47(0))
			{
				Var14.f_0 = Global_4718592.f_132931;
			}
			else
			{
				Var14.f_0 = func_553(PLAYER::PLAYER_ID());
			}
			Var14.f_6 = 1;
			Var14.f_4 = Local_231.f_29;
			Var14.f_5 = Local_231.f_31;
			Var14.f_3 = iVar13;
			Var14.f_2 = Local_231.f_28;
			STATS::PLAYSTATS_HEIST3_DRONE(&Var14);
		}
		else
		{
			STATS::PLAYSTATS_DRONE_USAGE(iVar13, Local_231.f_28, Local_231.f_29);
		}
		if (func_17())
		{
			func_551(2, func_552());
		}
	}
	func_550();
	func_435(0);
	func_299(0);
	func_214(0);
	func_211(0f);
	func_498(0f);
	GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(Local_231.f_174));
	if (func_204(1) != 0)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_204(1));
	}
	if (func_204(0) != 0)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_204(0));
	}
	func_425(0);
	func_364(1, -1);
	Local_231.f_28 = 0;
	Local_231.f_29 = 0;
	Local_231.f_31 = 0;
	EVENT::REMOVE_SHOCKING_EVENT(Local_231.f_30);
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(Local_231.f_178[PLAYER::PLAYER_ID()]))
	{
		GRAPHICS::STOP_PARTICLE_FX_LOOPED(Local_231.f_178[PLAYER::PLAYER_ID()], false);
	}
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(Local_231.f_211[PLAYER::PLAYER_ID()]))
	{
		GRAPHICS::STOP_PARTICLE_FX_LOOPED(Local_231.f_211[PLAYER::PLAYER_ID()], false);
	}
	if (!bParam0)
	{
		if (!func_187(PLAYER::PLAYER_ID()))
		{
			func_549(0f, 0f, 0f, 0f);
		}
		Global_1964670.f_2 = 0;
		func_543();
	}
	else
	{
		func_490(0, 1);
	}
}

void func_549(struct<3> Param0, float fParam3)
{
	if (!func_414(Global_1964670.f_15, Param0, 0))
	{
		Global_1964670.f_15 = { Param0 };
		Global_1964670.f_12 = fParam3;
	}
}

void func_550()
{
	int iVar0;
	
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
	if (!AUDIO::HAS_SOUND_FINISHED(Local_231.f_34))
	{
		AUDIO::STOP_SOUND(Local_231.f_34);
		AUDIO::RELEASE_SOUND_ID(Local_231.f_34);
		Local_231.f_34 = -1;
	}
	if (!AUDIO::HAS_SOUND_FINISHED(Local_231.f_35))
	{
		AUDIO::STOP_SOUND(Local_231.f_35);
		AUDIO::RELEASE_SOUND_ID(Local_231.f_35);
		Local_231.f_35 = -1;
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
	if (!AUDIO::HAS_SOUND_FINISHED(Local_231.f_38))
	{
		AUDIO::STOP_SOUND(Local_231.f_38);
		AUDIO::RELEASE_SOUND_ID(Local_231.f_38);
		Local_231.f_38 = -1;
	}
	if (!AUDIO::HAS_SOUND_FINISHED(Local_231.f_37))
	{
		AUDIO::STOP_SOUND(Local_231.f_37);
		AUDIO::RELEASE_SOUND_ID(Local_231.f_37);
		Local_231.f_37 = -1;
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
	if (!AUDIO::HAS_SOUND_FINISHED(Local_231.f_83))
	{
		AUDIO::STOP_SOUND(Local_231.f_83);
		AUDIO::RELEASE_SOUND_ID(Local_231.f_83);
		Local_231.f_83 = -1;
	}
	if (!AUDIO::HAS_SOUND_FINISHED(Local_231.f_117))
	{
		AUDIO::STOP_SOUND(Local_231.f_117);
		AUDIO::RELEASE_SOUND_ID(Local_231.f_117);
		Local_231.f_117 = -1;
	}
	if (func_531())
	{
		iVar0 = 0;
		while (iVar0 <= 31)
		{
			if (Local_231.f_48[iVar0] != -1)
			{
				AUDIO::STOP_SOUND(Local_231.f_48[iVar0]);
				AUDIO::RELEASE_SOUND_ID(Local_231.f_48[iVar0]);
				Local_231.f_48[iVar0] = -1;
			}
			iVar0++;
		}
	}
	func_181();
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("DLC_BTL_Hacker_Drone_HUD_Scene"))
	{
		AUDIO::STOP_AUDIO_SCENE("DLC_BTL_Hacker_Drone_HUD_Scene");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("dlc_aw_arena_piloted_missile_scene"))
	{
		AUDIO::STOP_AUDIO_SCENE("dlc_aw_arena_piloted_missile_scene");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("DLC_Arena_Battle_Drone_HUD_Scene"))
	{
		AUDIO::STOP_AUDIO_SCENE("DLC_Arena_Battle_Drone_HUD_Scene");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("DLC_Arena_Spectator_Drone_HUD_Scene"))
	{
		AUDIO::STOP_AUDIO_SCENE("DLC_Arena_Spectator_Drone_HUD_Scene");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("dlc_hei4_submarine_guided_missile_Scene"))
	{
		AUDIO::STOP_AUDIO_SCENE("dlc_hei4_submarine_guided_missile_Scene");
	}
}

void func_551(int iParam0, int iParam1)
{
	if (Global_2733190.f_384 > 0 || Global_2733190.f_384.f_1 > 0)
	{
		STATS::PLAYSTATS_SUB_WEAP(iParam0, iParam1, Global_2733190.f_384, Global_2733190.f_384.f_1);
	}
	func_458();
}

bool func_552()
{
	return Global_1845138 == PLAYER::PLAYER_ID();
}

int func_553(bool bParam0)
{
	if (func_21(bParam0) == 243)
	{
		return func_19(bParam0);
	}
	return -1;
}

void func_554(bool bParam0)
{
	if (bParam0)
	{
		if (!BitTest(Global_1845298[PLAYER::PLAYER_ID() /*881*/].f_260.f_376, 20))
		{
			MISC::SET_BIT(&(Global_1845298[PLAYER::PLAYER_ID() /*881*/].f_260.f_376), 20);
		}
	}
	else if (BitTest(Global_1845298[PLAYER::PLAYER_ID() /*881*/].f_260.f_376, 20))
	{
		MISC::CLEAR_BIT(&(Global_1845298[PLAYER::PLAYER_ID() /*881*/].f_260.f_376), 20);
	}
}

void func_555(int iParam0)
{
	if (Global_1964670.f_8 != iParam0)
	{
		Global_1964670.f_8 = iParam0;
	}
}

bool func_556(int iParam0)
{
	return Local_231.f_246 == iParam0;
}

void func_557()
{
	if (func_196())
	{
		MISC::CLEAR_BIT(&Global_1964670, 7);
	}
}

void func_558(bool bParam0)
{
	if (bParam0)
	{
		if (func_95())
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

void func_559(bool bParam0)
{
	if (bParam0)
	{
		if (!func_46())
		{
			MISC::SET_BIT(&Global_1964670, 6);
		}
	}
	else if (func_46())
	{
		MISC::CLEAR_BIT(&Global_1964670, 6);
	}
}

void func_560(bool bParam0)
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

void func_561(bool bParam0)
{
	if (bParam0)
	{
		if (!func_90())
		{
			MISC::SET_BIT(&Global_1964670, 28);
		}
	}
	else if (func_90())
	{
		MISC::CLEAR_BIT(&Global_1964670, 28);
	}
}

void func_562(bool bParam0)
{
	if (bParam0)
	{
		if (!func_185())
		{
			MISC::SET_BIT(&Global_1964670, 27);
		}
	}
	else if (func_185())
	{
		MISC::CLEAR_BIT(&Global_1964670, 27);
	}
}

void func_563(bool bParam0)
{
	if (bParam0)
	{
		if (!func_439())
		{
			MISC::SET_BIT(&Global_1964670, 10);
		}
	}
	else if (func_439())
	{
		MISC::CLEAR_BIT(&Global_1964670, 10);
	}
}

void func_564(float fParam0)
{
	if (Global_1964670.f_14 != fParam0)
	{
		Global_1964670.f_14 = fParam0;
	}
}

int func_565()
{
	if (!func_340())
	{
		return 0;
	}
	if (func_12(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (!func_95())
	{
		return 0;
	}
	if (func_103())
	{
		return 0;
	}
	if (func_185() && (!func_566(0) || !func_9(func_189())))
	{
		return 0;
	}
	return 1;
}

bool func_566(bool bParam0)
{
	return func_227(PLAYER::PLAYER_ID(), bParam0);
}

void func_567(bool bParam0)
{
	if (bParam0)
	{
		if (!func_40())
		{
			MISC::SET_BIT(&Global_1964670, 24);
		}
	}
	else if (func_40())
	{
		MISC::CLEAR_BIT(&Global_1964670, 24);
	}
}

void func_568()
{
	if (CAM::DOES_CAM_EXIST(Local_231.f_173))
	{
		CAM::DESTROY_CAM(Local_231.f_173, false);
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
		if (!func_53() || BitTest(Local_231.f_6, 0))
		{
			GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
		}
	}
}

void func_569()
{
	if (CAM::DOES_CAM_EXIST(Local_231.f_173))
	{
		if (func_571(PLAYER::PLAYER_ID()))
		{
			func_570(0);
		}
	}
}

void func_570(bool bParam0)
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

int func_571(bool bParam0)
{
	if (bParam0 != func_13())
	{
		if (func_26(bParam0, 1, 1))
		{
			return Global_2658293[bParam0 /*468*/].f_325.f_8 != -1;
		}
		else if ((Global_1575095 && bParam0 == PLAYER::PLAYER_ID()) && func_26(bParam0, 1, 0))
		{
			return Global_2658293[bParam0 /*468*/].f_325.f_8 != -1;
		}
	}
	return 0;
}

void func_572(var uParam0, int iParam1)
{
	struct<9> Var0;
	bool bVar9;
	bool bVar10;
	int iVar11;
	
	Var0.f_6 = 1073741824;
	Var0.f_7 = -1073741824;
	Var0.f_0 = 66206781;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_3 = iParam1;
	Var0.f_4 = uParam0->f_3;
	Var0.f_5 = uParam0->f_4;
	Var0.f_6 = uParam0->f_6;
	Var0.f_7 = uParam0->f_7;
	Var0.f_8 = uParam0->f_8;
	bVar9 = false;
	if (iParam1 == 11)
	{
		if (BitTest(Global_2658293[PLAYER::PLAYER_ID() /*468*/].f_441, 1))
		{
			MISC::CLEAR_BIT(&(Global_2658293[PLAYER::PLAYER_ID() /*468*/].f_441), true);
			bVar9 = true;
		}
	}
	uParam0->f_5 = 0;
	if (!func_34(&(uParam0->f_1)))
	{
		func_30(&(uParam0->f_1), 0, 0);
	}
	bVar10 = true;
	if (*uParam0 == iParam1 && !bVar9)
	{
		if (func_34(&(uParam0->f_1)) && !func_29(&(uParam0->f_1), 1000, 0))
		{
			bVar10 = false;
		}
		else
		{
			func_28(&(uParam0->f_1));
		}
	}
	else
	{
		*uParam0 = iParam1;
		func_28(&(uParam0->f_1));
	}
	if (bVar10)
	{
		iVar11 = func_8(PLAYER::PLAYER_ID());
		if (iVar11 != -1)
		{
			SCRIPT::_SEND_TU_SCRIPT_EVENT_NEW(1, &Var0, 9, iVar11, Var0.f_0);
			uParam0->f_5 = 1;
		}
	}
}

void func_573(struct<9> Param0, var uParam9, var uParam10, var uParam11)
{
	float fVar0;
	
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(32, false, Param0.f_0);
	func_582(0, -1, 0);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&uLocal_230, 1, 0);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_133, 97, 0);
	if (!func_581())
	{
		func_541(0);
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!func_531())
		{
			Local_231.f_139 = { Param0.f_2 };
			switch (Param0.f_1)
			{
				case 1:
					if (ENTITY::DOES_ENTITY_EXIST(func_384()) && !ENTITY::IS_ENTITY_DEAD(func_384(), false))
					{
						Local_231.f_148 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(ENTITY::GET_ENTITY_COORDS(func_384(), true), ENTITY::GET_ENTITY_HEADING(func_384()), 0f, 1.6f, 2.9f) };
						Local_231.f_142 = { Local_231.f_148 };
					}
					func_505(1);
					Local_133[PLAYER::PLAYER_ID() /*3*/].f_1 = 1;
					Global_1912667[PLAYER::PLAYER_ID() /*318*/].f_101 = 1;
					break;
				
				case 2:
					func_580(1);
					Local_231.f_148 = { Param0.f_5 };
					Local_133[PLAYER::PLAYER_ID() /*3*/].f_1 = 2;
					Global_1912667[PLAYER::PLAYER_ID() /*318*/].f_101 = 2;
					break;
				
				case 3:
					func_579(1);
					Local_231.f_148 = { Param0.f_5 };
					Local_133[PLAYER::PLAYER_ID() /*3*/].f_1 = 3;
					Global_1912667[PLAYER::PLAYER_ID() /*318*/].f_101 = 3;
					break;
				
				case 4:
					func_499(1);
					Local_231.f_148 = { Param0.f_5 };
					Local_133[PLAYER::PLAYER_ID() /*3*/].f_1 = 4;
					Global_1912667[PLAYER::PLAYER_ID() /*318*/].f_101 = 4;
					break;
				
				case 5:
					func_578(1);
					Local_231.f_148 = { Param0.f_5 };
					Local_133[PLAYER::PLAYER_ID() /*3*/].f_1 = 5;
					Global_1912667[PLAYER::PLAYER_ID() /*318*/].f_101 = 5;
					break;
				
				case 6:
					func_577(1);
					Local_231.f_148 = { Param0.f_5 };
					Local_133[PLAYER::PLAYER_ID() /*3*/].f_1 = 6;
					Global_1912667[PLAYER::PLAYER_ID() /*318*/].f_101 = 6;
					break;
				
				case 8:
					func_576(1);
					Local_231.f_148 = { Param0.f_5 };
					Local_133[PLAYER::PLAYER_ID() /*3*/].f_1 = 8;
					Global_1912667[PLAYER::PLAYER_ID() /*318*/].f_101 = 8;
					break;
				
				case 9:
					func_544(1);
					Local_133[PLAYER::PLAYER_ID() /*3*/].f_1 = 9;
					Global_1912667[PLAYER::PLAYER_ID() /*318*/].f_101 = 9;
					break;
				
				case 10:
					func_43(1);
					Local_231.f_148 = { Param0.f_5 };
					fVar0 = func_292();
					Local_133[PLAYER::PLAYER_ID() /*3*/].f_1 = 10;
					Global_1912667[PLAYER::PLAYER_ID() /*318*/].f_101 = 10;
					break;
				
				case 12:
					func_44(1);
					Local_231.f_148 = { Param0.f_5 };
					fVar0 = func_292();
					Local_133[PLAYER::PLAYER_ID() /*3*/].f_1 = 12;
					Global_1912667[PLAYER::PLAYER_ID() /*318*/].f_101 = 12;
					break;
				
				default:
					func_575(1);
					Local_231.f_148 = { Param0.f_5 };
					break;
			}
			Local_231.f_145 = { Param0.f_8 };
			if (func_293(func_448()))
			{
				func_413(Local_231.f_148, 0f, 0f, fVar0);
			}
		}
	}
	else
	{
		func_541(0);
	}
	if (!func_531())
	{
		func_490(1, 1);
	}
	else
	{
		func_574();
	}
}

void func_574()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		Local_231.f_48[iVar0] = -1;
		iVar0++;
	}
	func_424(6);
}

void func_575(bool bParam0)
{
	if (bParam0)
	{
		if (!BitTest(Global_1964670.f_2, 0))
		{
			Global_1964670.f_2 = 0;
			MISC::SET_BIT(&(Global_1964670.f_2), false);
		}
	}
	else if (BitTest(Global_1964670.f_2, 0))
	{
		MISC::CLEAR_BIT(&(Global_1964670.f_2), false);
	}
}

void func_576(bool bParam0)
{
	if (bParam0)
	{
		if (!BitTest(Global_1964670.f_2, 8))
		{
			Global_1964670.f_2 = 0;
			MISC::SET_BIT(&(Global_1964670.f_2), 8);
		}
	}
	else if (BitTest(Global_1964670.f_2, 8))
	{
		MISC::CLEAR_BIT(&(Global_1964670.f_2), 8);
	}
}

void func_577(bool bParam0)
{
	if (bParam0)
	{
		if (!BitTest(Global_1964670.f_2, 6))
		{
			Global_1964670.f_2 = 0;
			MISC::SET_BIT(&(Global_1964670.f_2), 6);
		}
	}
	else if (BitTest(Global_1964670.f_2, 6))
	{
		MISC::CLEAR_BIT(&(Global_1964670.f_2), 6);
	}
}

void func_578(bool bParam0)
{
	if (bParam0)
	{
		if (!BitTest(Global_1964670.f_2, 5))
		{
			Global_1964670.f_2 = 0;
			MISC::SET_BIT(&(Global_1964670.f_2), 5);
		}
	}
	else if (BitTest(Global_1964670.f_2, 5))
	{
		MISC::CLEAR_BIT(&(Global_1964670.f_2), 5);
	}
}

void func_579(bool bParam0)
{
	if (bParam0)
	{
		if (!BitTest(Global_1964670.f_2, 3))
		{
			Global_1964670.f_2 = 0;
			MISC::SET_BIT(&(Global_1964670.f_2), 3);
		}
	}
	else if (BitTest(Global_1964670.f_2, 3))
	{
		MISC::CLEAR_BIT(&(Global_1964670.f_2), 3);
	}
}

void func_580(bool bParam0)
{
	if (bParam0)
	{
		if (!BitTest(Global_1964670.f_2, 2))
		{
			Global_1964670.f_2 = 0;
			MISC::SET_BIT(&(Global_1964670.f_2), 2);
		}
	}
	else if (BitTest(Global_1964670.f_2, 2))
	{
		MISC::CLEAR_BIT(&(Global_1964670.f_2), 2);
	}
}

int func_581()
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
		if (func_539())
		{
			return 0;
		}
		if (func_537(157))
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

int func_582(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_543();
			}
			else
			{
				return 0;
			}
		}
		if (!func_47(0))
		{
			if (iParam0 == 0)
			{
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (!bParam2)
					{
						func_543();
					}
					else
					{
						return 0;
					}
				}
				if (func_539())
				{
					if (!bParam2)
					{
						func_543();
					}
					else
					{
						return 0;
					}
				}
				if (func_537(157))
				{
					if (!bParam2)
					{
						func_543();
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
					func_543();
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
				func_543();
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
			func_543();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

