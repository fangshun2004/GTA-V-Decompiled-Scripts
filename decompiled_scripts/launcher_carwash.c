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
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	char* sLocal_38 = NULL;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	float fLocal_41 = 0f;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	float fLocal_45 = 0f;
	float fLocal_46 = 0f;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	float fLocal_50 = 0f;
	float fLocal_51 = 0f;
	float fLocal_52 = 0f;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	int iLocal_55 = 0;
	var uLocal_56 = 0;
	struct<24> Local_57[2];
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
	var uLocal_118 = -1;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	bool bLocal_123 = 0;
	struct<3> Local_124[2];
	var uLocal_131[2] = { 0, 0 };
	int iLocal_134[2] = { 0, 0 };
	struct<2> ScriptParam_0 = { 0, 5 } ;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = 0;
	var uScriptParam_7 = 0;
	var uScriptParam_8 = 0;
	var uScriptParam_9 = 0;
	var uScriptParam_10 = 0;
	var uScriptParam_11 = 0;
	var uScriptParam_12 = 0;
	var uScriptParam_13 = 0;
	var uScriptParam_14 = 0;
	var uScriptParam_15 = 0;
	var uScriptParam_16 = 0;
	var uScriptParam_17 = 5;
	var uScriptParam_18 = 0;
	var uScriptParam_19 = 0;
	var uScriptParam_20 = 0;
	var uScriptParam_21 = 0;
	var uScriptParam_22 = 0;
#endregion

void __EntryFunction__()
{
	bool bVar0;
	int iVar1;
	struct<3> Var2;
	int iVar5;
	
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
	fLocal_41 = 0f;
	fLocal_45 = -0.0375f;
	fLocal_46 = 0.17f;
	fLocal_50 = 80f;
	fLocal_51 = 140f;
	fLocal_52 = 180f;
	iLocal_55 = 3;
	Var2 = { ScriptParam_0.f_1[0 /*3*/] };
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("launcher_carwash")) > 1)
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
		MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	}
	else if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(99))
	{
		func_79();
	}
	if (Global_2883694)
	{
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(-949873222) == 0)
		{
			SCRIPT::REQUEST_SCRIPT_WITH_NAME_HASH(-949873222);
			while (!SCRIPT::HAS_SCRIPT_WITH_NAME_HASH_LOADED(-949873222))
			{
				SYSTEM::WAIT(0);
			}
			SYSTEM::START_NEW_SCRIPT_WITH_NAME_HASH_AND_ARGS(-949873222, &ScriptParam_0, 23, 1424);
		}
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	if (func_78(PLAYER::PLAYER_PED_ID()))
	{
	}
	func_70();
	while (true)
	{
		func_78(PLAYER::PLAYER_PED_ID());
		if (func_69(PLAYER::PLAYER_PED_ID(), Var2, 0) > (100f + 20f))
		{
			func_79();
		}
		bVar0 = false;
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar1 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			bVar0 = (func_65(iVar1) || func_64(iVar1));
			bLocal_123 = VEHICLE::DOES_VEHICLE_HAVE_ROOF(iVar1);
			func_63(bLocal_123);
		}
		iVar5 = 0;
		while (iVar5 < Local_57.f_0)
		{
			func_62(iVar5);
			iVar5++;
		}
		if (func_1(&Local_57, &uLocal_106, bVar0, 0, 1, 1424))
		{
			func_79();
		}
		SYSTEM::WAIT(0);
	}
}

int func_1(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)
{
	int iVar0;
	
	if (uParam1->f_10)
	{
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < *iParam0)
		{
			func_57(iParam0[iVar0 /*24*/]);
			iVar0++;
		}
	}
	switch (uParam1->f_13)
	{
		case 0:
			iVar0 = 0;
			if (func_50(uParam1->f_16))
			{
				iVar0 = 0;
				while (iVar0 < *iParam0)
				{
					if (func_47(iParam0[iVar0 /*24*/]) && (*iParam0)[iVar0 /*24*/])
					{
						uParam1->f_12 = iVar0;
						if ((iParam0[iVar0 /*24*/])->f_7 || (MISC::GET_MISSION_FLAG() && uParam1->f_16 == 0))
						{
							func_46(uParam1, 6);
						}
						else if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
						{
							func_46(uParam1, 8);
						}
						else if (bParam2)
						{
							func_46(uParam1, 3);
						}
						else if ((iParam0[iVar0 /*24*/])->f_8)
						{
							func_46(uParam1, 2);
						}
						else if (func_34() < (iParam0[uParam1->f_12 /*24*/])->f_9)
						{
							func_46(uParam1, 1);
						}
						else if (func_29())
						{
							func_46(uParam1, 7);
						}
						else
						{
							func_46(uParam1, 4);
						}
					}
					iVar0++;
				}
			}
			else
			{
				func_28(uParam1);
			}
			break;
		
		case 2:
			if (!uParam1->f_9)
			{
				func_26(uParam1, uParam1->f_6);
			}
			if (func_22(iParam0[uParam1->f_12 /*24*/]) || (iParam0[iVar0 /*24*/])->f_8 == 0)
			{
				func_46(uParam1, 0);
				return 0;
			}
			break;
		
		case 1:
			if (!uParam1->f_9)
			{
				func_17(uParam1, uParam1->f_2, (iParam0[uParam1->f_12 /*24*/])->f_9);
			}
			if (func_22(iParam0[uParam1->f_12 /*24*/]) || func_34() >= (iParam0[uParam1->f_12 /*24*/])->f_9)
			{
				func_46(uParam1, 0);
				return 0;
			}
			break;
		
		case 6:
			if (!uParam1->f_9)
			{
				func_26(uParam1, uParam1->f_1);
			}
			if (func_22(iParam0[uParam1->f_12 /*24*/]) || !func_50(uParam1->f_16))
			{
				func_46(uParam1, 0);
				return 0;
			}
			break;
		
		case 3:
			if (!uParam1->f_9)
			{
				func_26(uParam1, uParam1->f_3);
			}
			if ((func_22(iParam0[uParam1->f_12 /*24*/]) || bParam2 == 0) || !func_50(uParam1->f_16))
			{
				func_46(uParam1, 0);
				return 0;
			}
			break;
		
		case 7:
			if (!uParam1->f_9)
			{
				func_26(uParam1, uParam1->f_5);
			}
			if (func_22(iParam0[uParam1->f_12 /*24*/]) || !func_50(uParam1->f_16))
			{
				func_46(uParam1, 0);
				return 0;
			}
			break;
		
		case 8:
			if (!uParam1->f_9)
			{
				func_26(uParam1, uParam1->f_4);
			}
			if (func_22(iParam0[uParam1->f_12 /*24*/]) || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
			{
				func_46(uParam1, 0);
				return 0;
			}
			break;
		
		case 9:
			if (!uParam1->f_9)
			{
				if (func_16())
				{
					func_26(uParam1, uParam1->f_7);
				}
				else
				{
					func_26(uParam1, uParam1->f_8);
				}
			}
			if (func_22(iParam0[uParam1->f_12 /*24*/]) || func_13(iParam0[uParam1->f_12 /*24*/]))
			{
				func_46(uParam1, 0);
				return 0;
			}
			break;
		
		case 4:
			PAD::SET_INPUT_EXCLUSIVE(2, 51);
			PAD::DISABLE_CONTROL_ACTION(0, 101, true);
			func_12();
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
			{
				func_46(uParam1, 8);
				return 0;
			}
			if ((iParam0[uParam1->f_12 /*24*/])->f_8)
			{
				func_46(uParam1, 2);
				return 0;
			}
			if (func_22(iParam0[uParam1->f_12 /*24*/]) || !func_50(uParam1->f_16))
			{
				func_46(uParam1, 0);
				return 0;
			}
			if (Global_77397)
			{
				return 0;
			}
			if (func_9(1))
			{
				return 0;
			}
			if ((iParam0[uParam1->f_12 /*24*/])->f_6 == 1)
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) || func_8(PLAYER::PLAYER_PED_ID(), 0) != -1)
				{
					func_46(uParam1, 0);
					return 0;
				}
			}
			if ((iParam0[uParam1->f_12 /*24*/])->f_7 || (MISC::GET_MISSION_FLAG() && uParam1->f_16 == 0))
			{
				func_46(uParam1, 6);
				return 0;
			}
			if (func_29())
			{
				func_46(uParam1, 7);
				return 0;
			}
			if (func_34() < (iParam0[uParam1->f_12 /*24*/])->f_9)
			{
				func_46(uParam1, 1);
				return 0;
			}
			if (!uParam1->f_9)
			{
				if (MISC::GET_HASH_KEY((iParam0[uParam1->f_12 /*24*/])->f_5) == MISC::GET_HASH_KEY("Carwash1") && func_5(PLAYER::PLAYER_ID()))
				{
					func_26(uParam1, "CWASH_RIDEHLP2");
				}
				else
				{
					func_17(uParam1, *uParam1, (iParam0[uParam1->f_12 /*24*/])->f_9);
				}
			}
			if ((iParam0[uParam1->f_12 /*24*/])->f_6 == 1)
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
			}
			if (HUD::IS_PAUSE_MENU_ACTIVE() || PLAYER::IS_SYSTEM_UI_BEING_DISPLAYED())
			{
				return 0;
			}
			if (PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID()))
			{
				if ((PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_JUMPING(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_JUMPING_OUT_OF_VEHICLE(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if ((PED::IS_PED_RUNNING_RAGDOLL_TASK(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || TASK::IS_PED_GETTING_UP(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (PED::IS_PED_CLIMBING(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (PED::IS_PED_DUCKING(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_SWIMMING(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) > 0.05f)
				{
					return 0;
				}
			}
			if (PAD::IS_CONTROL_JUST_PRESSED(2, 51) && uParam1->f_9 == 1)
			{
				if (!func_13(iParam0[uParam1->f_12 /*24*/]))
				{
					func_46(uParam1, 9);
				}
				else
				{
					func_46(uParam1, 5);
				}
			}
			break;
		
		case 5:
			func_28(uParam1);
			(iParam0[uParam1->f_12 /*24*/])->f_8 = 0;
			if (!bParam4)
			{
				func_46(uParam1, 0);
				return 1;
			}
			HUD::CLEAR_HELP(true);
			MISC::CLEAR_AREA_OF_PROJECTILES(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 20f, 0);
			if (!MISC::IS_STRING_NULL_OR_EMPTY((iParam0[uParam1->f_12 /*24*/])->f_5))
			{
				SCRIPT::REQUEST_SCRIPT((iParam0[uParam1->f_12 /*24*/])->f_5);
				while (!SCRIPT::HAS_SCRIPT_LOADED((iParam0[uParam1->f_12 /*24*/])->f_5))
				{
					func_12();
					if (func_78(PLAYER::PLAYER_PED_ID()))
					{
						if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !Global_80337)
						{
							func_2(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 2f, 1, 1056964608, 0, 1, 0);
							VEHICLE::SET_VEHICLE_BRAKE_LIGHTS(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false);
						}
					}
					PAD::SET_INPUT_EXCLUSIVE(2, 51);
					SCRIPT::REQUEST_SCRIPT((iParam0[uParam1->f_12 /*24*/])->f_5);
					PAD::DISABLE_CONTROL_ACTION(0, 101, true);
					PAD::DISABLE_CONTROL_ACTION(0, 75, true);
					PAD::DISABLE_CONTROL_ACTION(0, 23, true);
					SYSTEM::WAIT(0);
				}
				if (bParam3)
				{
					CAM::DO_SCREEN_FADE_OUT(250);
				}
				if (SCRIPT::HAS_SCRIPT_LOADED((iParam0[uParam1->f_12 /*24*/])->f_5))
				{
					if (bParam3)
					{
						while (!CAM::IS_SCREEN_FADED_OUT())
						{
							if (func_78(PLAYER::PLAYER_PED_ID()))
							{
								if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !Global_80337)
								{
									func_2(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 2f, 1, 1056964608, 0, 1, 0);
									VEHICLE::SET_VEHICLE_BRAKE_LIGHTS(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false);
								}
							}
							PAD::SET_INPUT_EXCLUSIVE(2, 51);
							PAD::DISABLE_CONTROL_ACTION(0, 101, true);
							PAD::DISABLE_CONTROL_ACTION(0, 75, true);
							PAD::DISABLE_CONTROL_ACTION(0, 23, true);
							func_12();
							SYSTEM::WAIT(0);
						}
					}
					SYSTEM::START_NEW_SCRIPT((iParam0[uParam1->f_12 /*24*/])->f_5, iParam5);
					SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED((iParam0[uParam1->f_12 /*24*/])->f_5);
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_2(int iParam0, float fParam1, int iParam2, float fParam3, bool bParam4, bool bParam5, bool bParam6)
{
	func_4(bParam5, bParam6);
	func_3(iParam0);
	if ((MISC::GET_GAME_TIMER() - Global_30) > 500)
	{
		VEHICLE::BRING_VEHICLE_TO_HALT(iParam0, fParam1, iParam2, bParam4);
	}
	Global_30 = MISC::GET_GAME_TIMER();
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		if (MISC::ABSF(ENTITY::GET_ENTITY_SPEED(iParam0)) <= fParam3)
		{
			return 1;
		}
	}
	return 0;
}

void func_3(int iParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		if (VEHICLE::GET_HAS_ROCKET_BOOST(iParam0))
		{
			if (VEHICLE::IS_ROCKET_BOOST_ACTIVE(iParam0))
			{
				VEHICLE::SET_ROCKET_BOOST_ACTIVE(iParam0, false);
			}
		}
	}
}

void func_4(bool bParam0, bool bParam1)
{
	PAD::DISABLE_CONTROL_ACTION(0, 71, true);
	PAD::DISABLE_CONTROL_ACTION(0, 72, true);
	PAD::DISABLE_CONTROL_ACTION(0, 76, true);
	PAD::DISABLE_CONTROL_ACTION(0, 73, true);
	PAD::DISABLE_CONTROL_ACTION(0, 59, true);
	PAD::DISABLE_CONTROL_ACTION(0, 60, true);
	if (bParam0)
	{
		PAD::DISABLE_CONTROL_ACTION(0, 75, true);
	}
	PAD::DISABLE_CONTROL_ACTION(0, 80, true);
	if (!bParam1)
	{
		PAD::DISABLE_CONTROL_ACTION(0, 69, true);
		PAD::DISABLE_CONTROL_ACTION(0, 70, true);
		PAD::DISABLE_CONTROL_ACTION(0, 68, true);
	}
	PAD::DISABLE_CONTROL_ACTION(0, 74, true);
	PAD::DISABLE_CONTROL_ACTION(0, 86, true);
	PAD::DISABLE_CONTROL_ACTION(0, 81, true);
	PAD::DISABLE_CONTROL_ACTION(0, 82, true);
	PAD::DISABLE_CONTROL_ACTION(0, 138, true);
	PAD::DISABLE_CONTROL_ACTION(0, 136, true);
	PAD::DISABLE_CONTROL_ACTION(0, 114, true);
	PAD::DISABLE_CONTROL_ACTION(0, 107, true);
	PAD::DISABLE_CONTROL_ACTION(0, 110, true);
	PAD::DISABLE_CONTROL_ACTION(0, 89, true);
	PAD::DISABLE_CONTROL_ACTION(0, 89, true);
	PAD::DISABLE_CONTROL_ACTION(0, 87, true);
	PAD::DISABLE_CONTROL_ACTION(0, 88, true);
	PAD::DISABLE_CONTROL_ACTION(0, 113, true);
	PAD::DISABLE_CONTROL_ACTION(0, 115, true);
	PAD::DISABLE_CONTROL_ACTION(0, 116, true);
	PAD::DISABLE_CONTROL_ACTION(0, 117, true);
	PAD::DISABLE_CONTROL_ACTION(0, 118, true);
	PAD::DISABLE_CONTROL_ACTION(0, 119, true);
	PAD::DISABLE_CONTROL_ACTION(0, 389, true);
	PAD::DISABLE_CONTROL_ACTION(0, 131, true);
	PAD::DISABLE_CONTROL_ACTION(0, 132, true);
	PAD::DISABLE_CONTROL_ACTION(0, 123, true);
	PAD::DISABLE_CONTROL_ACTION(0, 126, true);
	PAD::DISABLE_CONTROL_ACTION(0, 129, true);
	PAD::DISABLE_CONTROL_ACTION(0, 130, true);
	PAD::DISABLE_CONTROL_ACTION(0, 133, true);
	PAD::DISABLE_CONTROL_ACTION(0, 134, true);
	CAM::DISABLE_CINEMATIC_SLOW_MO_THIS_UPDATE();
}

int func_5(int iParam0)
{
	return func_6(iParam0, 1);
}

int func_6(int iParam0, int iParam1)
{
	if (iParam1 != 0)
	{
		if (iParam0 != func_7())
		{
			return BitTest(Global_1882652[iParam0 /*321*/].f_158.f_27, iParam1);
		}
	}
	return 0;
}

int func_7()
{
	return -1;
}

int func_8(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, bParam1))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(iParam0, bParam1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				iVar1 = VEHICLE::GET_VEHICLE_MODEL_NUMBER_OF_SEATS(ENTITY::GET_ENTITY_MODEL(iVar0));
				if (iVar1 == 1)
				{
					iVar3 = -1;
					return iVar3;
				}
				iVar2 = 0;
				while (iVar2 < iVar1)
				{
					iVar3 = (iVar2 - 1);
					if (!VEHICLE::IS_VEHICLE_SEAT_FREE(iVar0, iVar3, false))
					{
						if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, iVar3, false) == iParam0)
						{
							return iVar3;
						}
					}
					iVar2++;
				}
			}
		}
	}
	return iVar3;
}

int func_9(bool bParam0)
{
	if (bParam0)
	{
		if (func_11())
		{
			return 1;
		}
	}
	if (func_10(14))
	{
		return 1;
	}
	return 0;
}

bool func_10(int iParam0)
{
	return Global_44921 == iParam0;
}

int func_11()
{
	if (Global_113903)
	{
		return 1;
	}
	if (!func_10(14) && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("director_mode")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_12()
{
	Global_24430.f_6 = 1;
}

int func_13(var uParam0)
{
	struct<3> Var0;
	int iVar3;
	int iVar4;
	
	iVar4 = PLAYER::PLAYER_PED_ID();
	if (uParam0->f_15 == 360f)
	{
		return 1;
	}
	if (func_15(uParam0->f_12))
	{
		return 1;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar3 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (func_78(iVar3))
		{
			Var0 = { ENTITY::GET_ENTITY_ROTATION(iVar3, 2) };
			if (Var0.f_1 > 45f || Var0.f_1 < -45f)
			{
				return 0;
			}
			iVar4 = iVar3;
		}
	}
	Var0 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iVar4) };
	if (func_14(uParam0->f_12, Var0) > SYSTEM::COS(uParam0->f_15))
	{
		return 1;
	}
	return 0;
}

float func_14(struct<2> Param0, var uParam2, struct<2> Param3, var uParam5)
{
	return ((Param0.f_0 * Param3.f_0) + (Param0.f_1 * Param3.f_1));
}

int func_15(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

bool func_16()
{
	int iVar0;
	
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		return ENTITY::IS_ENTITY_UPRIGHT(iVar0, 90f);
	}
	return ENTITY::IS_ENTITY_UPRIGHT(PLAYER::PLAYER_PED_ID(), 90f);
}

int func_17(var uParam0, char* sParam1, int iParam2)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return 0;
	}
	if (func_19(uParam0) || !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
	{
		HUD::CLEAR_HELP(true);
		func_18(sParam1, iParam2);
		uParam0->f_14 = sParam1;
		uParam0->f_15 = iParam2;
		uParam0->f_9 = 1;
		return 1;
	}
	return 0;
}

void func_18(char* sParam0, int iParam1)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, true, true, -1);
}

int func_19(var uParam0)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_14))
	{
		return 0;
	}
	if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
	{
		return 0;
	}
	if (MISC::ARE_STRINGS_EQUAL(*uParam0, uParam0->f_14) || MISC::ARE_STRINGS_EQUAL(uParam0->f_2, uParam0->f_14))
	{
		return func_21(uParam0->f_14, uParam0->f_15);
	}
	return func_20(uParam0->f_14);
}

bool func_20(char* sParam0)
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

bool func_21(char* sParam0, int iParam1)
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

bool func_22(var uParam0)
{
	struct<8> Var0;
	
	Var0 = 2;
	if (uParam0->f_6 == 0)
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			return 1;
		}
	}
	else if (uParam0->f_6 == 1)
	{
		if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			return 1;
		}
		if (func_8(PLAYER::PLAYER_PED_ID(), 0) != -1)
		{
			return 1;
		}
	}
	if (uParam0->f_11 == 0)
	{
		return !func_25(PLAYER::PLAYER_PED_ID(), uParam0->f_1, (uParam0->f_10 + 2f), 1);
	}
	Var0 = { func_23(uParam0->f_16, 2f) };
	return !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Var0[0 /*3*/], Var0[1 /*3*/], Var0.f_7, false, true, 0);
}

struct<8> func_23(struct<8> Param0, float fParam8)
{
	struct<8> Var0;
	struct<3> Var8;
	
	Var0 = 2;
	Var8 = { func_24(Param0[1 /*3*/] - Param0[0 /*3*/]) * Vector(fParam8, fParam8, fParam8) };
	Var0[0 /*3*/] = { Param0[0 /*3*/] - Var8 };
	Var0[1 /*3*/] = { Param0[1 /*3*/] + Var8 };
	Var0.f_7 = (Param0.f_7 + (fParam8 * 2f));
	return Var0;
}

Vector3 func_24(struct<3> Param0)
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

bool func_25(int iParam0, struct<3> Param1, float fParam4, bool bParam5)
{
	return SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam0, bParam5), Param1) <= (fParam4 * fParam4);
}

int func_26(var uParam0, char* sParam1)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return 0;
	}
	if (func_19(uParam0) || !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
	{
		HUD::CLEAR_HELP(true);
		func_27(sParam1);
		uParam0->f_14 = sParam1;
		uParam0->f_15 = 0;
		uParam0->f_9 = 1;
		return 1;
	}
	return 0;
}

void func_27(char* sParam0)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, true, true, -1);
}

void func_28(var uParam0)
{
	if (func_19(uParam0))
	{
		HUD::CLEAR_HELP(true);
	}
	uParam0->f_14 = 0;
	uParam0->f_15 = 0;
	if (uParam0->f_9 == 1)
	{
		uParam0->f_9 = 0;
	}
}

bool func_29()
{
	int iVar0;
	
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		return 0;
	}
	iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
	if (FIRE::IS_ENTITY_ON_FIRE(iVar0))
	{
		return 1;
	}
	if (func_33(iVar0))
	{
		return 1;
	}
	if (func_30(iVar0, 3))
	{
		return 1;
	}
	return !VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false);
}

int func_30(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_31(iParam0))
	{
		iVar0 = 0;
		if (VEHICLE::IS_VEHICLE_TYRE_BURST(iParam0, 0, false) && VEHICLE::IS_VEHICLE_TYRE_BURST(iParam0, 1, false))
		{
			return 1;
		}
		if (VEHICLE::IS_VEHICLE_TYRE_BURST(iParam0, 4, false) && VEHICLE::IS_VEHICLE_TYRE_BURST(iParam0, 5, false))
		{
			return 1;
		}
		if (VEHICLE::IS_VEHICLE_TYRE_BURST(iParam0, 0, false))
		{
			iVar0++;
		}
		if (VEHICLE::IS_VEHICLE_TYRE_BURST(iParam0, 1, false))
		{
			iVar0++;
		}
		if (VEHICLE::IS_VEHICLE_TYRE_BURST(iParam0, 4, false))
		{
			iVar0++;
		}
		if (VEHICLE::IS_VEHICLE_TYRE_BURST(iParam0, 5, false))
		{
			iVar0++;
		}
		if (iVar0 >= iParam1)
		{
			return 1;
		}
	}
	return 0;
}

int func_31(int iParam0)
{
	if (func_32(iParam0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
		{
			if (!FIRE::IS_ENTITY_ON_FIRE(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_32(int iParam0)
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

int func_33(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (ENTITY::IS_ENTITY_DEAD(iParam0, false))
		{
			return 1;
		}
		else if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
		{
			if (!FIRE::IS_ENTITY_ON_FIRE(iParam0))
			{
				return 1;
			}
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_34()
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return func_42(PLAYER::PLAYER_ID());
	}
	switch (func_36())
	{
		case 2:
			return func_35(2);
		
		case 0:
			return func_35(0);
		
		case 1:
			return func_35(1);
		
		default:
	}
	return 0;
}

var func_35(int iParam0)
{
	return Global_62237[iParam0];
}

int func_36()
{
	func_37();
	return Global_114963.f_2370.f_539.f_4321;
}

void func_37()
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_40(Global_114963.f_2370.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_39(PLAYER::PLAYER_PED_ID());
			if (func_38(iVar0) && (!func_10(14) || Global_113909))
			{
				if (Global_114963.f_2370.f_539.f_4321 != iVar0 && func_38(Global_114963.f_2370.f_539.f_4321))
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

bool func_38(int iParam0)
{
	return iParam0 < 3;
}

int func_39(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_40(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_40(int iParam0)
{
	if (func_38(iParam0))
	{
		return func_41(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_41(int iParam0)
{
	return Global_2349[iParam0 /*29*/];
}

var func_42(int iParam0)
{
	var uVar0;
	
	uVar0 = func_43(iParam0);
	return uVar0;
}

int func_43(int iParam0)
{
	if (iParam0 > -1)
	{
		if (iParam0 == PLAYER::PLAYER_ID())
		{
			return MONEY::NETWORK_GET_VC_WALLET_BALANCE(-1);
		}
		else if (func_44(iParam0))
		{
			return Global_1845298[iParam0 /*881*/].f_198.f_3;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_44(int iParam0)
{
	if (!func_45(iParam0))
	{
		return 0;
	}
	return BitTest(Global_2673273.f_1, iParam0);
}

int func_45(var uParam0)
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

void func_46(var uParam0, int iParam1)
{
	uParam0->f_13 = iParam1;
	func_28(uParam0);
}

bool func_47(var uParam0)
{
	func_78(PLAYER::PLAYER_PED_ID());
	if (*uParam0 == 0)
	{
		return 0;
	}
	if (func_49(0))
	{
		return 0;
	}
	if (func_48())
	{
		return 0;
	}
	if (uParam0->f_6 == 0)
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			return 0;
		}
	}
	else if (uParam0->f_6 == 1)
	{
		if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			return 0;
		}
		if (func_8(PLAYER::PLAYER_PED_ID(), 0) != -1)
		{
			return 0;
		}
	}
	if (uParam0->f_11 == 1)
	{
		return ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), uParam0->f_16[0 /*3*/], uParam0->f_16[1 /*3*/], uParam0->f_16.f_7, false, true, 0);
	}
	return func_25(PLAYER::PLAYER_PED_ID(), uParam0->f_1, uParam0->f_10, 1);
}

bool func_48()
{
	return MISC::GET_GAME_TIMER() <= Global_24569.f_6481 + 100;
}

bool func_49(bool bParam0)
{
	if (bParam0)
	{
		return (Global_24430.f_4 && Global_24430.f_104 == 4);
	}
	return Global_24430.f_4;
}

int func_50(int iParam0)
{
	if (iParam0 == 0)
	{
		if (func_56())
		{
			return 0;
		}
	}
	if ((((((HUD::IS_PAUSE_MENU_ACTIVE() || PLAYER::IS_SYSTEM_UI_BEING_DISPLAYED()) || func_48()) || Global_65057) || func_49(0)) || func_55(0)) || func_51(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	return 1;
}

int func_51(int iParam0)
{
	if (func_54(iParam0))
	{
		return 1;
	}
	if (func_52(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_52(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_53(iParam0, 9);
	}
	return 0;
}

var func_53(int iParam0, int iParam1)
{
	return BitTest(Global_1892925[iParam0 /*615*/].f_10.f_4, iParam1);
}

int func_54(var uParam0)
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 != -1)
	{
		return BitTest(Global_1892925[iVar0 /*615*/].f_1, 0);
	}
	return 0;
}

int func_55(int iParam0)
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

int func_56()
{
	if (Global_44921 == 15)
	{
		return 0;
	}
	return 1;
}

void func_57(var uParam0)
{
	if (uParam0->f_11 == 1)
	{
		func_59(&(uParam0->f_16), 255, 100, 0, 100);
	}
	else
	{
		func_58(uParam0->f_1, uParam0->f_10, 0, 0, 255, 255, 32);
	}
}

void func_58(struct<3> Param0, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	int iVar0;
	float fVar1;
	struct<3> Var2;
	struct<3> Var5;
	float fVar8;
	
	fVar1 = (360f / SYSTEM::TO_FLOAT(iParam8));
	Var2 = { Param0 };
	Var5 = { Param0 };
	fVar8 = 0f;
	Var2 = { Param0 };
	Var2.f_0 = (Var2.f_0 + (SYSTEM::SIN((fVar8 - fVar1)) * fParam3));
	Var2.f_1 = (Var2.f_1 + (SYSTEM::COS((fVar8 - fVar1)) * fParam3));
	iVar0 = 0;
	while (iVar0 <= iParam8)
	{
		Var5 = { Param0 };
		Var5.f_0 = (Var5.f_0 + (SYSTEM::SIN(fVar8) * fParam3));
		Var5.f_1 = (Var5.f_1 + (SYSTEM::COS(fVar8) * fParam3));
		GRAPHICS::DRAW_DEBUG_LINE(Var2, Var5, iParam4, iParam5, iParam6, iParam7);
		Var2 = { Var5 };
		fVar8 = (fVar8 + fVar1);
		iVar0++;
	}
}

void func_59(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	func_60(*(uParam0[0 /*3*/]), *(uParam0[1 /*3*/]), uParam0->f_7, iParam1, iParam2, iParam3, iParam4);
}

void func_60(struct<3> Param0, struct<3> Param3, float fParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	struct<3> Var7;
	struct<3> Var10;
	struct<3> Var13[8];
	int iVar38;
	
	if (fParam6 == 0f)
	{
		return;
	}
	Var0 = { func_24(Param3 - Param0) };
	Var3 = { func_61(Var0, 0f, 0f, 1f) };
	fVar6 = (fParam6 / 2f);
	Var7 = { Param0 };
	Var10 = { Param3 };
	Var10.f_2 = Param0.f_2;
	Var13[0 /*3*/] = { Var7 - Var3 * Vector(fVar6, fVar6, fVar6) };
	Var13[1 /*3*/] = { Var7 + Var3 * Vector(fVar6, fVar6, fVar6) };
	Var13[2 /*3*/] = { Var10 + Var3 * Vector(fVar6, fVar6, fVar6) };
	Var13[3 /*3*/] = { Var10 - Var3 * Vector(fVar6, fVar6, fVar6) };
	GRAPHICS::DRAW_DEBUG_LINE(Var13[0 /*3*/], Var13[1 /*3*/], iParam7, iParam8, iParam9, iParam10);
	GRAPHICS::DRAW_DEBUG_LINE(Var13[1 /*3*/], Var13[2 /*3*/], iParam7, iParam8, iParam9, iParam10);
	GRAPHICS::DRAW_DEBUG_LINE(Var13[2 /*3*/], Var13[3 /*3*/], iParam7, iParam8, iParam9, iParam10);
	GRAPHICS::DRAW_DEBUG_LINE(Var13[3 /*3*/], Var13[0 /*3*/], iParam7, iParam8, iParam9, iParam10);
	iVar38 = 0;
	while (iVar38 <= 3)
	{
		Var13[(4 + iVar38) /*3*/] = { Var13[iVar38 /*3*/] };
		Var13[(4 + iVar38) /*3*/].f_2 = Param3.f_2;
		iVar38++;
	}
	GRAPHICS::DRAW_DEBUG_LINE(Var13[4 /*3*/], Var13[5 /*3*/], iParam7, iParam8, iParam9, iParam10);
	GRAPHICS::DRAW_DEBUG_LINE(Var13[5 /*3*/], Var13[6 /*3*/], iParam7, iParam8, iParam9, iParam10);
	GRAPHICS::DRAW_DEBUG_LINE(Var13[6 /*3*/], Var13[7 /*3*/], iParam7, iParam8, iParam9, iParam10);
	GRAPHICS::DRAW_DEBUG_LINE(Var13[7 /*3*/], Var13[4 /*3*/], iParam7, iParam8, iParam9, iParam10);
	GRAPHICS::DRAW_DEBUG_LINE(Var13[0 /*3*/], Var13[4 /*3*/], iParam7, iParam8, iParam9, iParam10);
	GRAPHICS::DRAW_DEBUG_LINE(Var13[1 /*3*/], Var13[5 /*3*/], iParam7, iParam8, iParam9, iParam10);
	GRAPHICS::DRAW_DEBUG_LINE(Var13[2 /*3*/], Var13[6 /*3*/], iParam7, iParam8, iParam9, iParam10);
	GRAPHICS::DRAW_DEBUG_LINE(Var13[3 /*3*/], Var13[7 /*3*/], iParam7, iParam8, iParam9, iParam10);
}

Vector3 func_61(struct<3> Param0, struct<3> Param3)
{
	return ((Param0.f_1 * Param3.f_2) - (Param0.f_2 * Param3.f_1)), ((Param0.f_2 * Param3.f_0) - (Param0.f_0 * Param3.f_2)), ((Param0.f_0 * Param3.f_1) - (Param0.f_1 * Param3.f_0));
}

void func_62(int iParam0)
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar5;
	int iVar8;
	
	if (!func_47(&(Local_57[iParam0 /*24*/])))
	{
		Local_57[iParam0 /*24*/].f_8 = 0;
		iLocal_134[iParam0] = 0;
		return;
	}
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		Local_57[iParam0 /*24*/].f_8 = 0;
		iLocal_134[iParam0] = 0;
		return;
	}
	if (iLocal_134[iParam0] == 0)
	{
		if (MISC::GET_GAME_TIMER() > uLocal_131[iParam0])
		{
			iLocal_134[iParam0] = SHAPETEST::START_SHAPE_TEST_SWEPT_SPHERE(Local_124[iParam0 /*3*/], Local_124[iParam0 /*3*/] + Vector(1f, 0f, 0f), 2f, 2, PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 4);
		}
	}
	else
	{
		iVar0 = SHAPETEST::GET_SHAPE_TEST_RESULT(iLocal_134[iParam0], &iVar8, &uVar2, &uVar5, &iVar1);
		if (iVar0 == 2)
		{
			Local_57[iParam0 /*24*/].f_8 = 0;
			if (iVar8 > 0)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iVar1))
				{
					if (ENTITY::IS_ENTITY_A_VEHICLE(iVar1))
					{
						Local_57[iParam0 /*24*/].f_8 = 1;
					}
				}
			}
			iLocal_134[iParam0] = 0;
		}
		if (iVar0 == 0)
		{
			iLocal_134[iParam0] = 0;
		}
		uLocal_131[iParam0] = MISC::GET_GAME_TIMER() + 250;
	}
}

void func_63(bool bParam0)
{
	if (bParam0)
	{
	}
}

int func_64(int iParam0)
{
	if (!VEHICLE::IS_THIS_MODEL_A_CAR(ENTITY::GET_ENTITY_MODEL(iParam0)))
	{
		return 1;
	}
	if (VEHICLE::IS_VEHICLE_DOOR_DAMAGED(iParam0, 0))
	{
		return 1;
	}
	if (VEHICLE::IS_VEHICLE_DOOR_DAMAGED(iParam0, 1))
	{
		return 1;
	}
	if (VEHICLE::IS_VEHICLE_DOOR_DAMAGED(iParam0, 2))
	{
		return 1;
	}
	if (VEHICLE::IS_VEHICLE_DOOR_DAMAGED(iParam0, 3))
	{
		return 1;
	}
	if (VEHICLE::IS_VEHICLE_A_CONVERTIBLE(iParam0, true))
	{
		if (VEHICLE::GET_CONVERTIBLE_ROOF_STATE(iParam0) == 6)
		{
			return 1;
		}
	}
	return 0;
}

int func_65(int iParam0)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!func_32(iParam0))
	{
		return 0;
	}
	if (!VEHICLE::DOES_VEHICLE_HAVE_ROOF(iParam0))
	{
		return 1;
	}
	if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TRAILER(iParam0))
	{
		return 1;
	}
	if (!VEHICLE::IS_THIS_MODEL_A_CAR(ENTITY::GET_ENTITY_MODEL(iParam0)))
	{
		return 1;
	}
	if (FIRE::IS_ENTITY_ON_FIRE(iParam0))
	{
		return 1;
	}
	if (func_68(iParam0, 1))
	{
		return 1;
	}
	if (func_66(iParam0))
	{
		return 1;
	}
	MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(iParam0), &Var0, &Var3);
	if (ENTITY::GET_ENTITY_MODEL(iParam0) != joaat("zeno"))
	{
		if (MISC::ABSF((Var3.f_0 - Var0.f_0)) > 3.4f)
		{
			return 1;
		}
	}
	if (MISC::ABSF((Var3.f_2 - Var0.f_2)) > 2.9f)
	{
		return 1;
	}
	if (Global_80337)
	{
		if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0))
		{
			return 0;
		}
	}
	if (VEHICLE::IS_VEHICLE_A_CONVERTIBLE(iParam0, true) && !VEHICLE::DOES_VEHICLE_HAVE_ROOF(iParam0))
	{
		return 1;
	}
	if (!VEHICLE::IS_VEHICLE_A_CONVERTIBLE(iParam0, true) && !VEHICLE::DOES_VEHICLE_HAVE_ROOF(iParam0))
	{
		return 1;
	}
	if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("btype") || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("btype3"))
	{
		if (((((func_32(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, 3, false)) || func_32(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, 4, false))) || func_32(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, 5, false))) || func_32(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, 6, false))) || func_32(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, 7, false))) || func_32(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, 8, false)))
		{
			return 1;
		}
	}
	return 0;
}

int func_66(int iParam0)
{
	int iVar0;
	
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	if (func_67(iVar0))
	{
		return 1;
	}
	if (iVar0 == joaat("regina"))
	{
		if (VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, 2))
		{
			return 1;
		}
		if (VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, 3) && VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, 4))
		{
			return 1;
		}
	}
	if (iVar0 == joaat("banshee") && VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, 1))
	{
		return 1;
	}
	if (iVar0 == joaat("peyote") && VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, 1))
	{
		return 1;
	}
	if (iVar0 == joaat("coquette") && !VEHICLE::DOES_VEHICLE_HAVE_ROOF(iParam0))
	{
		return 1;
	}
	if (iVar0 == 621456687 && !VEHICLE::DOES_VEHICLE_HAVE_ROOF(iParam0))
	{
		return 1;
	}
	if (iVar0 == joaat("manana") && VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, 1))
	{
		return 1;
	}
	if (iVar0 == joaat("mesa") && !VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, 1))
	{
		return 1;
	}
	if (iVar0 == joaat("voltic") && VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, 1))
	{
		return 1;
	}
	if (iVar0 == joaat("bobcatxl") && !VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, 1))
	{
		return 1;
	}
	if (iVar0 == joaat("ruiner"))
	{
		if (VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, 3) && !VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, 7))
		{
			return 0;
		}
		return 1;
	}
	if (iVar0 == joaat("yosemite3"))
	{
		if (VEHICLE::GET_VEHICLE_MOD(iParam0, 5) == 4)
		{
			return 1;
		}
	}
	if ((iVar0 == joaat("rt3000") || iVar0 == 1730644782) && VEHICLE::GET_VEHICLE_MOD(iParam0, 10) == 3)
	{
		return 1;
	}
	if (iVar0 == joaat("brioso3"))
	{
		switch (VEHICLE::GET_VEHICLE_MOD(iParam0, 10))
		{
			case 1:
			case 4:
			case 7:
			case 10:
				return 1;
			}
		
		default:
	}
	if ((iVar0 == joaat("zr350") || iVar0 == joaat("driftzr350")) && VEHICLE::GET_VEHICLE_MOD(iParam0, 0) > 10)
	{
		return 1;
	}
	if (iVar0 == joaat("krieger") && VEHICLE::GET_VEHICLE_MOD(iParam0, 0) > 0)
	{
		return 1;
	}
	if ((iVar0 == joaat("entity3") && VEHICLE::GET_VEHICLE_MOD(iParam0, 10) >= 0) && VEHICLE::GET_VEHICLE_MOD(iParam0, 10) <= 4)
	{
		return 1;
	}
	if (iVar0 == 893780296 && !VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, 1))
	{
		return 1;
	}
	if (iVar0 == joaat("boor") && VEHICLE::GET_VEHICLE_MOD(iParam0, 10) == 0)
	{
		return 1;
	}
	if (iVar0 == -1444856003)
	{
		return 1;
	}
	if (iVar0 == -1958428933 && !VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, 1))
	{
		return 1;
	}
	return 0;
}

int func_67(int iParam0)
{
	if (!VEHICLE::IS_THIS_MODEL_A_CAR(iParam0))
	{
		return 1;
	}
	switch (iParam0)
	{
		case joaat("ambulance"):
		case joaat("armytrailer"):
		case joaat("airtug"):
		case joaat("bifta"):
		case joaat("bison2"):
		case joaat("bison3"):
		case joaat("bodhi2"):
		case joaat("boxville"):
		case joaat("boxville2"):
		case joaat("boxville3"):
		case joaat("bulldozer"):
		case joaat("caddy"):
		case joaat("caddy2"):
		case joaat("caddy3"):
		case joaat("cutter"):
		case joaat("dilettante2"):
		case joaat("dubsta3"):
		case joaat("dump"):
		case joaat("dune"):
		case joaat("dloader"):
		case joaat("forklift"):
		case joaat("guardian"):
		case joaat("graintrailer"):
		case joaat("handler"):
		case joaat("insurgent"):
		case joaat("insurgent2"):
		case joaat("kalahari"):
		case joaat("mesa3"):
		case joaat("mixer"):
		case joaat("mixer2"):
		case joaat("mower"):
		case joaat("packer"):
		case joaat("pbus"):
		case joaat("ratloader"):
		case joaat("rentalbus"):
		case joaat("rhino"):
		case joaat("ripley"):
		case joaat("riot"):
		case joaat("sadler"):
		case joaat("sadler2"):
		case joaat("sandking"):
		case joaat("sandking2"):
		case joaat("scrap"):
		case joaat("stockade"):
		case joaat("stockade3"):
		case joaat("technical"):
		case joaat("tractor"):
		case joaat("tractor2"):
		case joaat("tornado4"):
		case joaat("tourbus"):
		case joaat("limo2"):
		case joaat("raptor"):
		case joaat("ratloader2"):
		case joaat("dune3"):
		case joaat("dune4"):
		case joaat("dune5"):
		case joaat("vigilante"):
		case joaat("deluxo"):
		case joaat("caracara"):
		case joaat("scramjet"):
		case joaat("menacer"):
		case joaat("caracara2"):
		case joaat("locust"):
		case joaat("jugular"):
		case joaat("zorrusso"):
		case joaat("formula"):
		case joaat("everon"):
		case joaat("zhaba"):
		case joaat("outlaw"):
		case joaat("vagrant"):
		case joaat("formula2"):
		case joaat("minitank"):
		case joaat("peyote3"):
		case joaat("youga3"):
		case joaat("openwheel1"):
		case joaat("openwheel2"):
		case joaat("winky"):
		case joaat("slamtruck"):
		case joaat("veto"):
		case joaat("veto2"):
		case joaat("squaddie"):
		case joaat("comet7"):
		case joaat("sm722"):
		case joaat("draugur"):
		case joaat("ratel"):
		case joaat("l35"):
		case joaat("vigero3"):
		case joaat("terminus"):
		case -1321131184:
		case -1948949064:
		case -938068410:
		case -1647260751:
			return 1;
			break;
	}
	return 0;
}

int func_68(int iParam0, bool bParam1)
{
	if (Global_80337)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0) && (!bParam1 || VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false)))
		{
			if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("TestDrive", 2))
			{
				if (DECORATOR::DECOR_EXIST_ON(iParam0, "TestDrive"))
				{
					return DECORATOR::DECOR_GET_BOOL(iParam0, "TestDrive");
				}
			}
		}
	}
	return 0;
}

float func_69(int iParam0, struct<3> Param1, bool bParam4)
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

void func_70()
{
	func_76(&(Local_57[0 /*24*/]), 1, "Carwash1", func_77(156), 15, "", 0, 4f);
	func_76(&(Local_57[1 /*24*/]), 1, "Carwash2", func_77(157), 15, "", 0, 4f);
	func_74(&(Local_57[0 /*24*/]), -1f, 0f, 0f, 360f);
	func_74(&(Local_57[1 /*24*/]), 0f, -1f, 0f, 360f);
	func_71(&uLocal_106, 0);
	Local_124[0 /*3*/] = { 47.6f, -1392f, 29.4f };
	Local_124[1 /*3*/] = { -700f, -925.3f, 19f };
}

void func_71(var uParam0, int iParam1)
{
	*uParam0 = "CWASH_RIDEHLP";
	uParam0->f_1 = "";
	uParam0->f_3 = "CWASH_NOWAY";
	uParam0->f_4 = "CWASH_WANTED";
	uParam0->f_5 = "CWASH_CARBROKE";
	uParam0->f_6 = "CWASH_BLOCKED";
	uParam0->f_7 = "CWASH_WRONGWAY";
	uParam0->f_8 = "CWASH_UPSIDEDO";
	uParam0->f_16 = iParam1;
	if (!Global_80337)
	{
		uParam0->f_2 = "CWASH_NOMONEY";
		return;
	}
	if (MISC::IS_PS3_VERSION() || func_73())
	{
		uParam0->f_2 = "CWASH_POOR_PSN";
	}
	else if (MISC::IS_XBOX360_VERSION() || func_72())
	{
		uParam0->f_2 = "CWASH_POOR_XBX";
	}
	else
	{
		uParam0->f_2 = "CWASH_POOR_STD";
	}
}

bool func_72()
{
	return (MISC::IS_DURANGO_VERSION() || MISC::IS_SCARLETT_VERSION());
}

bool func_73()
{
	return (MISC::IS_ORBIS_VERSION() || MISC::IS_PROSPERO_VERSION());
}

void func_74(var uParam0, struct<3> Param1, float fParam4)
{
	uParam0->f_12 = { func_24(Param1 * Vector(5f, 5f, 5f)) };
	uParam0->f_15 = func_75(fParam4, 0f, 360f);
}

float func_75(float fParam0, float fParam1, float fParam2)
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

void func_76(var uParam0, int iParam1, char* sParam2, struct<3> Param3, int iParam6, char* sParam7, int iParam8, float fParam9)
{
	uParam0->f_5 = sParam2;
	uParam0->f_1 = { Param3 };
	uParam0->f_4 = sParam7;
	uParam0->f_9 = iParam6;
	uParam0->f_7 = iParam8;
	uParam0->f_6 = iParam1;
	uParam0->f_11 = 0;
	*uParam0 = 1;
	uParam0->f_12 = { 0f, 0f, 0f };
	uParam0->f_15 = 360f;
	if (iParam1 == 0)
	{
		uParam0->f_10 = 2.75f;
	}
	else
	{
		uParam0->f_10 = (2.75f * 2f);
	}
	if (fParam9 > 0f)
	{
		uParam0->f_10 = fParam9;
	}
}

Vector3 func_77(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	return Global_34195[iVar0 /*23*/][0 /*3*/];
}

bool func_78(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	return !ENTITY::IS_ENTITY_DEAD(iParam0, false);
}

void func_79()
{
	func_80(&Local_57);
	func_28(&uLocal_106);
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_80(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_81(uParam0[iVar0 /*24*/]);
		iVar0++;
	}
}

void func_81(var uParam0)
{
	*uParam0 = 0;
}

