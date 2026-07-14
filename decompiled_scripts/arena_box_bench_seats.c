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
	float fLocal_38 = 0f;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	float fLocal_42 = 0f;
	float fLocal_43 = 0f;
	var uLocal_44 = 0;
	int iLocal_45 = 0;
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
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	var uLocal_60 = 0;
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
	var uLocal_121 = -1;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	struct<282> Local_129 = { 20, 0, 0, 0, 0, 0, 0, 0, 1061158912, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1061158912, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1061158912, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1061158912, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1061158912, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1061158912, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1061158912, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1061158912, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1061158912, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1061158912, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1061158912, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1061158912, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1061158912, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1061158912, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1061158912, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1061158912, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1061158912, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1061158912, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1061158912, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1061158912, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_411 = -1;
	var uLocal_412 = 0;
	var uLocal_413 = 0;
	var uLocal_414 = 0;
	var uLocal_415 = 0;
	var uLocal_416 = -1;
	var uLocal_417 = -1;
	var uLocal_418 = -1;
	var uLocal_419 = 0;
	var uLocal_420 = 0;
	var uLocal_421 = 0;
	var uLocal_422 = 0;
	var uLocal_423 = 0;
	var uLocal_424 = 0;
	var uLocal_425 = 0;
	var uLocal_426 = 0;
	var uLocal_427 = 0;
	var uLocal_428 = 0;
	struct<15> Local_429 = { 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10 } ;
	var uLocal_444 = 0;
	var uLocal_445 = 0;
	var uLocal_446 = 0;
	var uLocal_447 = 0;
	var uLocal_448 = 0;
	var uLocal_449 = 0;
	var uLocal_450 = 0;
	var uLocal_451 = 0;
	var uLocal_452 = 0;
	var uLocal_453 = 0;
	struct<2> Local_454[32];
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
	fLocal_38 = 0f;
	fLocal_42 = -0.0375f;
	fLocal_43 = 0.17f;
	iLocal_45 = 3;
	fLocal_48 = 80f;
	fLocal_49 = 140f;
	fLocal_50 = 180f;
	iLocal_56 = 1;
	iLocal_57 = 65;
	iLocal_58 = 49;
	iLocal_59 = 64;
	fLocal_80 = ((0.05f + 0.275f) - 0.01f);
	fLocal_82 = 0f;
	if (func_166())
	{
		while (!func_156())
		{
			SYSTEM::WAIT(0);
			func_64(&Local_129, &Local_429);
			func_51();
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
			{
				func_41(&Local_129, &Local_429);
				func_40();
			}
		}
	}
	func_1();
}

void func_1()
{
	func_3(&Local_129, &Local_429);
	Global_2709092 = 0;
	func_2();
}

void func_2()
{
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_3(var uParam0, var uParam1)
{
	int iVar0;
	
	if (func_39(&(uParam0->f_281), 15))
	{
		func_38();
		MISC::CLEAR_BIT(&Global_2709095, 8);
		func_37(&(uParam0->f_281), 15);
	}
	func_35(&(uParam0->f_281.f_6));
	func_30(uParam0, 1);
	if (uParam0->f_281.f_5 > 2)
	{
		if (uParam0->f_281.f_2 >= 0 && uParam0->f_281.f_2 < 10)
		{
			if (((ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(uParam1->f_14[uParam0->f_281.f_2])) && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(uParam1->f_14[uParam0->f_281.f_2]))
			{
				if (ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(NETWORK::NET_TO_OBJ(uParam1->f_14[uParam0->f_281.f_2]), PLAYER::PLAYER_PED_ID()))
				{
					ENTITY::DETACH_ENTITY(NETWORK::NET_TO_OBJ(uParam1->f_14[uParam0->f_281.f_2]), false, true);
					func_29(&(uParam1->f_14[uParam0->f_281.f_2]));
				}
			}
		}
		if ((!BitTest(Global_1971473, 7) && !BitTest(Global_1971473, 3)) && !func_27(PLAYER::PLAYER_ID()))
		{
			func_26(-1);
			func_25(-1);
		}
		Global_2709093 = 0;
		MISC::CLEAR_BIT(&Global_2709095, 6);
		iVar0 = NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(uParam0->f_281.f_1);
		if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iVar0))
		{
			NETWORK::NETWORK_STOP_SYNCHRONISED_SCENE(uParam0->f_281.f_1);
		}
		if ((uParam0->f_281.f_9 == 1 && !STREAMING::IS_NEW_LOAD_SCENE_ACTIVE()) && func_23())
		{
			func_5(PLAYER::PLAYER_ID(), 1, 0, 0);
		}
		func_4();
	}
}

void func_4()
{
	if (Global_2673273.f_1023.f_10)
	{
		Global_2673273.f_1023.f_10 = 0;
	}
}

void func_5(int iParam0, bool bParam1, int iParam2, int iParam3)
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
	if (func_22())
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
		if (!func_23())
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
				else if (bVar14 || ((!func_18(PLAYER::PLAYER_ID(), 0) && !func_17()) && !func_16(PLAYER::PLAYER_ID())))
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
					func_13(0, 0, 0);
					if (bVar25)
					{
						STREAMING::CLEAR_FOCUS();
					}
				}
				if (!func_12(iVar27) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(iVar27))
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
					func_11();
					func_10();
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
				if (!func_12(iVar27) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(iVar27))
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
					if (func_9(Global_4718592.f_197291))
					{
						ENTITY::FREEZE_ENTITY_POSITION(iVar27, true);
					}
				}
				if (func_6(1))
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

int func_6(int iParam0)
{
	if (iParam0 && Global_1575066)
	{
		if (func_7())
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

int func_7()
{
	if (func_8())
	{
		return 1;
	}
	return Global_1575069;
	return 0;
}

int func_8()
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

bool func_9(int iParam0)
{
	return iParam0 == 17;
}

void func_10()
{
	struct<3> Var0;
	
	Global_2673273.f_1101 = 0;
	Global_2673273.f_1102 = 0;
	Global_2673273.f_1103 = { 9999.9f, 9999.9f, 9999.9f };
	Global_2673273.f_1108 = -1;
	Global_2673273.f_1109 = 0;
	Global_2635562.f_2995 = { Var0 };
}

void func_11()
{
	Global_2635562.f_703 = 0;
	Global_2635562.f_3038 = 0;
	Global_2635562.f_516 = 0;
	Global_2635562.f_607 = 0;
	Global_2658293[PLAYER::PLAYER_ID() /*468*/].f_221 = 0;
	Global_2635562.f_2993 = 0;
}

int func_12(int iParam0)
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

void func_13(bool bParam0, int iParam1, int iParam2)
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
				func_15();
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
		if (func_18(PLAYER::PLAYER_ID(), 0))
		{
			NETWORK::NETWORK_SET_IN_SPECTATOR_MODE_EXTENDED(bParam0, iParam1, true);
		}
		else
		{
			NETWORK::NETWORK_SET_IN_SPECTATOR_MODE(bParam0, iParam1);
		}
		HUD::SET_MINIMAP_IN_SPECTATOR_MODE(bParam0, iParam1);
		func_14(joaat("mpply_is_char_spectating"), bParam0);
	}
}

void func_14(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_BOOL(iVar0, bParam1, true);
	}
}

void func_15()
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

int func_16(int iParam0)
{
	if (func_18(iParam0, 0))
	{
		return 1;
	}
	if (func_17())
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

bool func_17()
{
	return BitTest(Global_2621446, 3);
}

bool func_18(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (!func_21(iParam0))
	{
		return 0;
	}
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_19(-1, 0) == 8;
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

int func_19(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_20();
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

int func_20()
{
	return Global_1574928;
}

int func_21(var uParam0)
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

int func_22()
{
	if (BitTest(Global_1845298[PLAYER::PLAYER_ID() /*881*/].f_879, 2) && !Global_2686119.f_2847.f_220 == -1)
	{
		return 1;
	}
	return 0;
}

int func_23()
{
	if (func_24() == 0)
	{
		return 1;
	}
	return 0;
}

int func_24()
{
	return Global_1574635.f_18;
}

void func_25(int iParam0)
{
	Global_2697100 = iParam0;
}

void func_26(int iParam0)
{
	Global_2697102 = iParam0;
	Global_1845298[PLAYER::PLAYER_ID() /*881*/].f_875 = iParam0;
}

int func_27(bool bParam0)
{
	if (bParam0 != func_28())
	{
		return BitTest(Global_1845298[bParam0 /*881*/].f_260.f_376, 29);
	}
	return 0;
}

int func_28()
{
	return -1;
}

void func_29(var uParam0)
{
	int iVar0;
	
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
	{
		if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(*uParam0))
		{
		}
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(*uParam0))
	{
		iVar0 = NETWORK::NET_TO_ENT(*uParam0);
		ENTITY::DELETE_ENTITY(&iVar0);
	}
}

void func_30(var uParam0, int iParam1)
{
	if (func_31())
	{
		HUD::CLEAR_HELP(true);
	}
	if (iParam1 && uParam0->f_281.f_6 != -1)
	{
		func_35(&(uParam0->f_281.f_6));
		uParam0->f_281.f_6 = -1;
	}
}

int func_31()
{
	if ((BitTest(Global_4718592.f_33, 23) && !BitTest(Global_1971474, 13)) && !BitTest(Global_1971474, 19))
	{
		return 0;
	}
	if ((BitTest(Global_4718592.f_31, 25) && !BitTest(Global_1971474, 15)) && !BitTest(Global_1971474, 19))
	{
		return 0;
	}
	if ((((((((((((func_34("MPOFSEAT_PCEXIT") || func_34("MPOFSEAT_EXIT")) || func_34("ARENA_SEAT")) || func_34("ARENA_SEAT_PC")) || func_33("ARENA_SEAT1", Global_262145.f_26297, Global_262145.f_26298)) || func_33("ARENA_SEAT_PC1", Global_262145.f_26297, Global_262145.f_26298)) || func_32("ARENA_SEAT2", Global_262145.f_26297)) || func_32("ARENA_SEAT_PC2", Global_262145.f_26297)) || func_32("ARENA_SEAT3", Global_262145.f_26298)) || func_32("ARENA_SEAT_PC3", Global_262145.f_26298)) || func_34("ARENA_SEAT4")) || func_34("ARENA_SEAT_PC4")) || func_34("ARENA_SEAT_EX"))
	{
		return 1;
	}
	return 0;
}

bool func_32(char* sParam0, int iParam1)
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

bool func_33(char* sParam0, int iParam1, int iParam2)
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

bool func_34(char* sParam0)
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_35(var uParam0)
{
	int iVar0;
	
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = func_36(*uParam0);
	if (iVar0 == -1)
	{
		*uParam0 = -1;
		return;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_45696[iVar0 /*32*/])
		{
			Global_45696[iVar0 /*32*/].f_7 = 1;
			*uParam0 = -1;
			return;
		}
	}
	*uParam0 = -1;
}

int func_36(int iParam0)
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_45696[iVar0 /*32*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_37(int* iParam0, bool bParam1)
{
	MISC::CLEAR_BIT(iParam0, iParam1);
}

void func_38()
{
	PAD::SHUTDOWN_PC_SCRIPTED_CONTROLS();
}

bool func_39(var uParam0, int iParam1)
{
	return BitTest(*uParam0, iParam1);
}

void func_40()
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	bVar0 = false;
	while (bVar0 < 32)
	{
		iVar1 = 0;
		bVar2 = PLAYER::INT_TO_PLAYERINDEX(bVar0);
		if (bVar2 != func_28() && NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(bVar2))
		{
			if (BitTest(Local_454[bVar2 /*2*/], 0))
			{
				if (!BitTest(Local_429.f_13, bVar2))
				{
					if (Local_454[bVar2 /*2*/].f_1 != 0)
					{
						if (BitTest(Local_454[bVar2 /*2*/].f_1, 0))
						{
							iVar3 = 0;
							while (iVar3 < 10)
							{
								if (Local_429.f_2[iVar3] < 0)
								{
									Local_429.f_2[iVar3] = bVar2;
									MISC::SET_BIT(&(Local_429.f_13), bVar2);
								}
								else
								{
									iVar3++;
								}
							}
						}
						else
						{
							iVar4 = 0;
							while (iVar4 < 10)
							{
								if (BitTest(Local_454[bVar2 /*2*/].f_1, iVar4 + 1))
								{
									Local_429.f_2[iVar4] = bVar2;
									MISC::SET_BIT(&(Local_429.f_13), bVar2);
								}
								else
								{
									iVar4++;
								}
							}
						}
					}
				}
			}
			else
			{
				iVar1 = 1;
			}
		}
		else
		{
			iVar1 = 1;
		}
		if (iVar1 && bVar2 != PLAYER::PLAYER_ID())
		{
			if (BitTest(Local_429.f_13, bVar0))
			{
				iVar5 = 0;
				while (iVar5 < 10)
				{
					if (Local_429.f_2[iVar5] == bVar0)
					{
						if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_429.f_14[iVar5]))
						{
							if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_429.f_14[iVar5]))
							{
								Local_429.f_2[iVar5] = -1;
								func_29(&(Local_429.f_14[iVar5]));
								MISC::CLEAR_BIT(&(Local_429.f_13), bVar0);
							}
							else
							{
								NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_429.f_14[iVar5]);
							}
							else
							{
								Jump @393; //curOff = 369
								Local_429.f_2[iVar5] = -1;
								MISC::CLEAR_BIT(&(Local_429.f_13), bVar0);
								iVar5++;
							}
							bVar0++;
						}

void func_41(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	struct<3> Var5;
	
	STREAMING::REQUEST_ANIM_DICT(func_48());
	if (!STREAMING::HAS_ANIM_DICT_LOADED(func_48()))
	{
		return;
	}
	if (*uParam1)
	{
		if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(uParam1->f_14[uParam0->f_281.f_4]))
		{
			iVar0 = joaat("xs_prop_arena_tablet_drone_01");
			STREAMING::REQUEST_MODEL(iVar0);
			if (!STREAMING::HAS_MODEL_LOADED(iVar0))
			{
				return;
			}
			if (func_42(NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(false, 1) + 1, 0, 1))
			{
				if (!BitTest(uParam1->f_1, uParam0->f_281.f_4))
				{
					NETWORK::RESERVE_LOCAL_NETWORK_MISSION_OBJECTS(NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(false, 1) + 1);
					MISC::SET_BIT(&(uParam1->f_1), uParam0->f_281.f_4);
				}
				else if (NETWORK::CAN_REGISTER_MISSION_OBJECTS(1))
				{
					Var2 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION(func_48(), "enter_tablet", (uParam0[uParam0->f_281.f_4 /*14*/])->f_8, (uParam0[uParam0->f_281.f_4 /*14*/])->f_8.f_3, 0f, 2) };
					Var5 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION(func_48(), "enter_tablet", (uParam0[uParam0->f_281.f_4 /*14*/])->f_8, (uParam0[uParam0->f_281.f_4 /*14*/])->f_8.f_3, 0f, 2) };
					iVar1 = OBJECT::CREATE_OBJECT(iVar0, Var2, true, true, false);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
					ENTITY::SET_ENTITY_CAN_BE_DAMAGED(iVar1, false);
					ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iVar1, Var2, false, false, true);
					ENTITY::SET_ENTITY_ROTATION(iVar1, Var5, 2, true);
					ENTITY::FREEZE_ENTITY_POSITION(iVar1, true);
					uParam1->f_14[uParam0->f_281.f_4] = NETWORK::OBJ_TO_NET(iVar1);
				}
			}
		}
		uParam0->f_281.f_4++;
		if (uParam0->f_281.f_4 >= 10)
		{
			uParam0->f_281.f_4 = 0;
		}
	}
}

bool func_42(int iParam0, bool bParam1, bool bParam2)
{
	return func_43(2, iParam0, 1, bParam1, bParam2);
}

int func_43(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (!BitTest(Global_1690407, 0))
	{
		return 0;
	}
	if ((bParam2 && !bParam3) && iParam1 <= (func_47(iParam0) - func_46(iParam0, 0)))
	{
		return 1;
	}
	else
	{
		if (bParam3)
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_46(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_47(iParam0) - func_45(iParam0));
		}
		else
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_46(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_47(iParam0) - func_46(iParam0, 1));
		}
		if (!bParam4 && Global_1845298[PLAYER::PLAYER_ID() /*881*/] != 3)
		{
			iVar1 = (iVar1 - func_44(iParam0));
		}
		if (iVar0 < iVar1)
		{
			return 1;
		}
	}
	return 0;
}

int func_44(int iParam0)
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

int func_45(int iParam0)
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

int func_46(int iParam0, bool bParam1)
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

int func_47(int iParam0)
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

char* func_48()
{
	if (func_49())
	{
		return "anim@arena@amb@seat_drone_tablet@female@";
	}
	return "anim@arena@amb@seat_drone_tablet@male@";
}

bool func_49()
{
	return func_50(PLAYER::PLAYER_ID());
}

int func_50(int iParam0)
{
	if (ENTITY::GET_ENTITY_MODEL(PLAYER::GET_PLAYER_PED(iParam0)) == joaat("mp_f_freemode_01"))
	{
		return 1;
	}
	return 0;
}

void func_51()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Local_429.f_0)
	{
		iVar0 = 1;
		iVar1 = 0;
		while (iVar1 < 10)
		{
			if (Local_429.f_2[iVar1] == -1 || Local_429.f_2[iVar1] == PLAYER::PLAYER_ID())
			{
				iVar0 = 0;
				if (Local_429.f_2[iVar1] == -1)
				{
					if ((iVar1 <= 7 && func_61()) && func_57())
					{
						ENTITY::CREATE_MODEL_HIDE(func_56(iVar1), 0.5f, joaat("xs_prop_x18_vip_greeenlight"), true);
					}
					else
					{
						ENTITY::REMOVE_MODEL_HIDE(func_56(iVar1), 0.5f, joaat("xs_prop_x18_vip_greeenlight"), false);
					}
				}
				else
				{
					ENTITY::CREATE_MODEL_HIDE(func_56(iVar1), 0.5f, joaat("xs_prop_x18_vip_greeenlight"), true);
				}
			}
			else
			{
				ENTITY::CREATE_MODEL_HIDE(func_56(iVar1), 0.5f, joaat("xs_prop_x18_vip_greeenlight"), true);
			}
			iVar1++;
		}
		Global_2709092 = iVar0;
	}
	else
	{
		Global_2709092 = 0;
	}
	if (Local_129.f_281.f_5 == 4)
	{
		if (!BitTest(Local_454[PLAYER::PLAYER_ID() /*2*/], 0))
		{
			MISC::SET_BIT(&(Local_454[PLAYER::PLAYER_ID() /*2*/]), false);
			if (func_55())
			{
				MISC::SET_BIT(&(Local_454[PLAYER::PLAYER_ID() /*2*/].f_1), false);
			}
			else if (Local_129.f_281.f_9 == 1)
			{
				MISC::SET_BIT(&(Local_454[PLAYER::PLAYER_ID() /*2*/].f_1), Local_129.f_281.f_2 + 1);
			}
		}
		else if (BitTest(Local_429.f_13, PLAYER::PLAYER_ID()))
		{
			if (func_54() < 0)
			{
				iVar2 = 0;
				while (iVar2 < 10)
				{
					if (Local_429.f_2[iVar2] == PLAYER::PLAYER_ID())
					{
						func_26(iVar2);
					}
					iVar2++;
				}
			}
		}
	}
	else if ((!BitTest(Global_1971473, 7) && !BitTest(Global_1971473, 3)) && !func_27(PLAYER::PLAYER_ID()))
	{
		if (func_55())
		{
			if (func_53() && CAM::IS_SCREEN_FADED_IN())
			{
				func_52(0);
			}
		}
		if (BitTest(Local_454[PLAYER::PLAYER_ID() /*2*/], 0))
		{
			if (!func_53() && func_54() < 0)
			{
				if (func_55())
				{
					func_52(0);
				}
				MISC::CLEAR_BIT(&(Local_454[PLAYER::PLAYER_ID() /*2*/]), false);
				Local_454[PLAYER::PLAYER_ID() /*2*/].f_1 = 0;
			}
		}
	}
}

void func_52(int iParam0)
{
	Global_2709091 = iParam0;
}

int func_53()
{
	if (Global_2697100 >= 0)
	{
		return 1;
	}
	return 0;
}

int func_54()
{
	return Global_2697102;
}

bool func_55()
{
	return Global_2709091;
}

Vector3 func_56(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 2800.331f, -3922.829f, 181.4558f;
		
		case 1:
			return 2799.301f, -3922.829f, 181.4558f;
		
		case 2:
			return 2798.268f, -3922.829f, 181.4558f;
		
		case 3:
			return 2797.243f, -3922.829f, 181.4558f;
		
		case 4:
			return 2796.213f, -3922.829f, 181.4558f;
		
		case 5:
			return 2795.178f, -3922.829f, 181.4558f;
		
		case 6:
			return 2794.153f, -3922.829f, 181.4558f;
		
		case 7:
			return 2793.123f, -3922.829f, 181.4558f;
		
		case 8:
			return 2792.087f, -3922.829f, 181.4558f;
		
		case 9:
			return 2791.061f, -3922.829f, 181.4558f;
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_57()
{
	int iVar0;
	int iVar1;
	
	if (func_60() && !func_59())
	{
		return 1;
	}
	if (BitTest(Global_4718592.f_31, 25) || BitTest(Global_4718592.f_33, 23))
	{
		if (func_58())
		{
			return 1;
		}
	}
	iVar0 = PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID());
	if (iVar0 > 4 || iVar0 < 0)
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
	return 0;
}

bool func_58()
{
	return BitTest(Global_1845298[PLAYER::PLAYER_ID() /*881*/].f_36.f_18, 14);
}

bool func_59()
{
	return Global_1574976;
}

var func_60()
{
	return (BitTest(Global_4718592.f_31, 12) && BitTest(Global_1971473, 0));
}

int func_61()
{
	if (func_63() && !func_62())
	{
		return 0;
	}
	if (BitTest(Global_4718592.f_33, 16))
	{
		return 1;
	}
	return 0;
}

int func_62()
{
	if (Global_4718592.f_133517 == 1 || Global_4718592.f_133517 == 2)
	{
		return 1;
	}
	return 0;
}

var func_63()
{
	return BitTest(Global_4718592.f_189724, 12);
}

void func_64(var uParam0, int iParam1)
{
	char* sVar0;
	char* sVar16;
	int iVar20;
	int iVar21;
	struct<3> Var22;
	struct<3> Var25;
	bool bVar28;
	int iVar29;
	struct<3> Var30;
	float fVar33;
	float fVar34;
	float fVar35;
	struct<3> Var36;
	int iVar39;
	int iVar40;
	struct<3> Var41;
	struct<3> Var44;
	int iVar47;
	int iVar48;
	struct<3> Var49;
	struct<3> Var52;
	
	func_153(uParam0);
	func_151(uParam0);
	func_139(uParam0);
	switch (uParam0->f_281.f_5)
	{
		case 0:
			func_37(&(uParam0->f_281), 11);
			func_138(uParam0, 1);
			break;
		
		case 1:
			if (func_137(uParam0))
			{
				uParam0->f_281.f_7 = MISC::GET_GAME_TIMER();
				func_138(uParam0, 2);
			}
			else if (func_55())
			{
				uParam0->f_281.f_7 = MISC::GET_GAME_TIMER();
				func_138(uParam0, 2);
			}
			break;
		
		case 2:
			if ((func_136(PLAYER::PLAYER_PED_ID(), uParam0[uParam0->f_281.f_2 /*14*/]) && func_135(PLAYER::PLAYER_PED_ID(), (uParam0[uParam0->f_281.f_2 /*14*/])->f_8.f_3)) && !func_55())
			{
				if ((((((func_134(uParam0) || Global_1935401) || func_132(uParam0)) || !func_131(uParam0)) || ((uParam0->f_281.f_2 < 10 && iParam1->f_2[uParam0->f_281.f_2] != -1) && iParam1->f_2[uParam0->f_281.f_2] != PLAYER::PLAYER_ID())) || ((uParam0->f_281.f_2 <= 7 && func_61()) && func_57())) || (uParam0->f_281.f_2 < 10 && Global_262145.f_26294))
				{
					if (!Global_1935401 && ((uParam0->f_281.f_2 < 10 && iParam1->f_2[uParam0->f_281.f_2] != -1) && iParam1->f_2[uParam0->f_281.f_2] != PLAYER::PLAYER_ID()))
					{
						iVar21 = PLAYER::GET_PLAYER_PED(iParam1->f_2[uParam0->f_281.f_2]);
						if (ENTITY::DOES_ENTITY_EXIST(iVar21) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(iVar21, 2797.988f, -3954.898f, 181.0005f, 2797.949f, -3930.85f, 187.4114f, 30f, false, true, 0))
						{
							if (uParam0->f_281.f_6 == -1)
							{
								func_130(&(uParam0->f_281.f_6), 4, "ARENA_SEAT_FULL", 0, PLAYER::GET_PLAYER_NAME(iParam1->f_2[uParam0->f_281.f_2]), 0, 1);
							}
						}
						else
						{
							func_30(uParam0, 1);
							func_138(uParam0, 1);
						}
					}
					else if ((uParam0->f_281.f_2 <= 7 && func_61()) && func_57())
					{
						if (uParam0->f_281.f_6 == -1)
						{
							func_130(&(uParam0->f_281.f_6), 4, "ARENA_SEAT_NO", 0, 0, 0, 0);
						}
					}
					else
					{
						func_30(uParam0, 1);
						func_138(uParam0, 1);
					}
				}
				else if (uParam0->f_281.f_6 == -1)
				{
					if ((MISC::GET_GAME_TIMER() - uParam0->f_281.f_7) > 150)
					{
						if (uParam0->f_281.f_2 <= 9)
						{
							func_130(&(uParam0->f_281.f_6), 4, "AR_SEAT_PRMPT", 0, 0, 0, 0);
						}
						else
						{
							func_130(&(uParam0->f_281.f_6), 4, "MPJAC_SIT", 0, 0, 0, 0);
						}
					}
				}
				else if (PAD::IS_CONTROL_JUST_PRESSED(0, 51))
				{
					func_35(&(uParam0->f_281.f_6));
					func_127(uParam0);
					if (uParam0->f_281.f_9 == 1)
					{
						func_5(PLAYER::PLAYER_ID(), 0, 256, 0);
						func_138(uParam0, 4);
					}
					else
					{
						func_138(uParam0, 3);
					}
				}
			}
			else if (func_55())
			{
				func_35(&(uParam0->f_281.f_6));
				func_138(uParam0, 4);
			}
			else
			{
				func_30(uParam0, 1);
				func_138(uParam0, 1);
			}
			break;
		
		case 4:
			if (func_54() >= 0)
			{
				if (func_55())
				{
					uParam0->f_281.f_2 = func_54();
					if (ENTITY::IS_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID()))
					{
						NETWORK::NETWORK_FADE_OUT_ENTITY(PLAYER::PLAYER_PED_ID(), false, true);
					}
					func_126(&(uParam0->f_281), 14);
				}
				func_127(uParam0);
				func_138(uParam0, 3);
			}
			if (!func_55())
			{
				if ((uParam0->f_281.f_2 < 10 && iParam1->f_2[uParam0->f_281.f_2] != -1) && iParam1->f_2[uParam0->f_281.f_2] != PLAYER::PLAYER_ID())
				{
					func_30(uParam0, 1);
					if (uParam0->f_281.f_9 == 1)
					{
						func_5(PLAYER::PLAYER_ID(), 1, 0, 0);
					}
					func_4();
					func_138(uParam0, 1);
				}
			}
			break;
		
		case 3:
			func_125(uParam0, &sVar0);
			if (uParam0->f_281.f_9 == 1)
			{
				if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(iParam1->f_14[uParam0->f_281.f_2]))
				{
					return;
				}
				if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(iParam1->f_14[uParam0->f_281.f_2]))
				{
					NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(iParam1->f_14[uParam0->f_281.f_2]);
				}
			}
			STREAMING::REQUEST_ANIM_DICT(&sVar0);
			if (STREAMING::HAS_ANIM_DICT_LOADED(&sVar0))
			{
				func_124();
				func_138(uParam0, 5);
			}
			break;
		
		case 5:
			func_125(uParam0, &sVar0);
			func_123(uParam0, &sVar16, 0);
			Var22 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION(&sVar0, &sVar16, func_122(uParam0), func_121(uParam0), 0f, 2) };
			Var25 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION(&sVar0, &sVar16, func_122(uParam0), func_121(uParam0), 0f, 2) };
			if (func_39(&(uParam0->f_281), 14))
			{
				bVar28 = true;
				if (func_120() >= 0)
				{
					bVar28 = false;
				}
				if (func_109(Var22, Var25.f_2, 0, 0, 0, 0, 1, bVar28, 1, 0, 0) && Global_2709094)
				{
					func_138(uParam0, 6);
				}
				else if (!Global_2709094)
				{
				}
			}
			else if (Global_2709094)
			{
				if (uParam0->f_281.f_9 == 1)
				{
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(iParam1->f_14[uParam0->f_281.f_2]) && !NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(iParam1->f_14[uParam0->f_281.f_2]))
					{
						NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(iParam1->f_14[uParam0->f_281.f_2]);
					}
				}
				TASK::TASK_GO_STRAIGHT_TO_COORD(PLAYER::PLAYER_PED_ID(), Var22, 1f, 500, Var25.f_2, 0.05f);
				func_26(uParam0->f_281.f_2);
				func_138(uParam0, 6);
			}
			else if (!Global_2709094)
			{
			}
			break;
		
		case 6:
			if (uParam0->f_281.f_9 == 1)
			{
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(iParam1->f_14[uParam0->f_281.f_2]) && !NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(iParam1->f_14[uParam0->f_281.f_2]))
				{
					NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(iParam1->f_14[uParam0->f_281.f_2]);
				}
			}
			func_125(uParam0, &sVar0);
			func_123(uParam0, &sVar16, 0);
			iVar29 = TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("script_task_go_straight_to_coord"));
			Var30 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION(&sVar0, &sVar16, func_122(uParam0), func_121(uParam0), 0f, 2) };
			fVar33 = Var30.f_2;
			if (((iVar29 != 1 && iVar29 != 0) || func_108(ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()), fVar33, 5f)) || func_39(&(uParam0->f_281), 14))
			{
				fVar34 = 1f;
				fVar35 = 0f;
				Var36 = { func_122(uParam0) };
				if (func_39(&(uParam0->f_281), 14))
				{
					fVar34 = 2f;
					fVar35 = 0.9f;
				}
				uParam0->f_281.f_1 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(Var36, func_121(uParam0), 2, true, false, 1f, fVar35, fVar34);
				NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), uParam0->f_281.f_1, &sVar0, &sVar16, 2f, -1000f, 13, 16, 1000f, 0);
				NETWORK::NETWORK_START_SYNCHRONISED_SCENE(uParam0->f_281.f_1);
				uParam0->f_281.f_9.f_4 = MISC::GET_GAME_TIMER();
				func_126(&(uParam0->f_281), 8);
				func_138(uParam0, 7);
			}
			break;
		
		case 7:
			if (uParam0->f_281.f_9 == 1)
			{
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(iParam1->f_14[uParam0->f_281.f_2]) && !NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(iParam1->f_14[uParam0->f_281.f_2]))
				{
					NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(iParam1->f_14[uParam0->f_281.f_2]);
				}
			}
			if (func_39(&(uParam0->f_281), 10))
			{
				func_37(&(uParam0->f_281), 10);
				if (uParam0->f_281.f_2 >= 0 && uParam0->f_281.f_2 < 10)
				{
					AUDIO::PLAY_SOUND_FROM_ENTITY(iVar39, "Exit_Menu", NETWORK::NET_TO_OBJ(iParam1->f_14[uParam0->f_281.f_2]), "DLC_AW_Spectator_Tablet_Sounds", true, 0);
				}
				func_107(uParam0);
			}
			func_67(uParam0, iParam1);
			iVar20 = NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(uParam0->f_281.f_1);
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iVar20))
			{
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iVar20) >= 1f)
				{
					if (!Global_2709093)
					{
						if (!ENTITY::IS_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID()) && !NETWORK::NETWORK_IS_ENTITY_FADING(PLAYER::PLAYER_PED_ID()))
						{
							if (Global_1574975)
							{
								NETWORK::NETWORK_FADE_IN_ENTITY(PLAYER::PLAYER_PED_ID(), true, 1);
							}
						}
					}
					if (!func_53())
					{
						if (uParam0->f_281.f_9 == 1)
						{
							if (uParam0->f_281.f_2 >= 0 && uParam0->f_281.f_2 < 10)
							{
								AUDIO::PLAY_SOUND_FROM_ENTITY(iVar40, "Enter_Menu", NETWORK::NET_TO_OBJ(iParam1->f_14[uParam0->f_281.f_2]), "DLC_AW_Spectator_Tablet_Sounds", true, 0);
							}
							func_25(uParam0->f_281.f_2);
						}
						else
						{
							func_25(uParam0->f_281.f_2 + 20);
						}
						Global_2709093 = 1;
					}
					else
					{
						Global_2709093 = 1;
					}
					func_65(uParam0, 0);
					func_125(uParam0, &sVar0);
					func_123(uParam0, &sVar16, 0);
					uParam0->f_281.f_1 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_122(uParam0), func_121(uParam0), 2, true, false, 1f, 0f, 1f);
					NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), uParam0->f_281.f_1, &sVar0, &sVar16, 4f, -1.5f, 13, 16, 1000f, 0);
					NETWORK::NETWORK_START_SYNCHRONISED_SCENE(uParam0->f_281.f_1);
					func_126(&(uParam0->f_281), 8);
					func_126(&(uParam0->f_281), 11);
				}
				else
				{
					if (uParam0->f_281.f_9 == 1 && (ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), 1374875855) || PED::GET_SYNCHRONIZED_SCENE_PHASE(iVar20) > 0.25f))
					{
						if ((NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(iParam1->f_14[uParam0->f_281.f_2]) && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(iParam1->f_14[uParam0->f_281.f_2])) && !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_OBJ(iParam1->f_14[uParam0->f_281.f_2]), false))
						{
							if (!ENTITY::IS_ENTITY_ATTACHED(NETWORK::NET_TO_OBJ(iParam1->f_14[uParam0->f_281.f_2])))
							{
								ENTITY::ATTACH_ENTITY_TO_ENTITY(NETWORK::NET_TO_OBJ(iParam1->f_14[uParam0->f_281.f_2]), PLAYER::PLAYER_PED_ID(), PED::GET_PED_BONE_INDEX(PLAYER::PLAYER_PED_ID(), 28422), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
							}
						}
					}
					func_37(&(uParam0->f_281), 8);
				}
			}
			else if (!func_39(&(uParam0->f_281), 8) && uParam0->f_281.f_5 == 7)
			{
				if (uParam0->f_281.f_9 == 1 && uParam0->f_281.f_2 >= 0)
				{
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(iParam1->f_14[uParam0->f_281.f_2]) && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(iParam1->f_14[uParam0->f_281.f_2]))
					{
						if (ENTITY::IS_ENTITY_ATTACHED(NETWORK::NET_TO_OBJ(iParam1->f_14[uParam0->f_281.f_2])))
						{
							ENTITY::DETACH_ENTITY(NETWORK::NET_TO_OBJ(iParam1->f_14[uParam0->f_281.f_2]), false, true);
						}
						func_29(&(iParam1->f_14[uParam0->f_281.f_2]));
					}
				}
				func_138(uParam0, 9);
			}
			break;
		
		case 8:
			if (uParam0->f_281.f_9 == 1)
			{
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(iParam1->f_14[uParam0->f_281.f_2]) && !NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(iParam1->f_14[uParam0->f_281.f_2]))
				{
					NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(iParam1->f_14[uParam0->f_281.f_2]);
				}
			}
			NETWORK::NETWORK_STOP_SYNCHRONISED_SCENE(uParam0->f_281.f_1);
			if (uParam0->f_281.f_9 == 1 && uParam0->f_281.f_2 >= 0)
			{
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(iParam1->f_14[uParam0->f_281.f_2]) && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(iParam1->f_14[uParam0->f_281.f_2]))
				{
					if (ENTITY::IS_ENTITY_ATTACHED(NETWORK::NET_TO_OBJ(iParam1->f_14[uParam0->f_281.f_2])))
					{
						ENTITY::DETACH_ENTITY(NETWORK::NET_TO_OBJ(iParam1->f_14[uParam0->f_281.f_2]), false, true);
					}
					Var41 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION(func_48(), "enter_tablet", (uParam0[uParam0->f_281.f_2 /*14*/])->f_8, (uParam0[uParam0->f_281.f_2 /*14*/])->f_8.f_3, 0f, 2) };
					Var44 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION(func_48(), "enter_tablet", (uParam0[uParam0->f_281.f_2 /*14*/])->f_8, (uParam0[uParam0->f_281.f_2 /*14*/])->f_8.f_3, 0f, 2) };
					ENTITY::SET_ENTITY_COORDS_NO_OFFSET(NETWORK::NET_TO_OBJ(iParam1->f_14[uParam0->f_281.f_2]), Var41, false, false, true);
					ENTITY::SET_ENTITY_ROTATION(NETWORK::NET_TO_OBJ(iParam1->f_14[uParam0->f_281.f_2]), Var44, 2, true);
					ENTITY::FREEZE_ENTITY_POSITION(NETWORK::NET_TO_OBJ(iParam1->f_14[uParam0->f_281.f_2]), true);
				}
			}
			func_138(uParam0, 9);
			break;
		
		case 9:
			if (func_39(&(uParam0->f_281), 15))
			{
				func_38();
				MISC::CLEAR_BIT(&Global_2709095, 8);
				func_37(&(uParam0->f_281), 15);
			}
			if (uParam0->f_281.f_9 == 1)
			{
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(iParam1->f_14[uParam0->f_281.f_2]) && !NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(iParam1->f_14[uParam0->f_281.f_2]))
				{
					NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(iParam1->f_14[uParam0->f_281.f_2]);
				}
			}
			iVar47 = NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(uParam0->f_281.f_1);
			iVar48 = TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("script_task_synchronized_scene"));
			if (iVar48 == 0 || iVar48 == 1)
			{
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iVar47))
				{
					if ((PED::GET_SYNCHRONIZED_SCENE_PHASE(iVar47) >= 0.7f || ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), 364629851)) || ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), 2116425869))
					{
						NETWORK::NETWORK_STOP_SYNCHRONISED_SCENE(uParam0->f_281.f_1);
						if ((!BitTest(Global_1971473, 7) && !BitTest(Global_1971473, 3)) && !func_27(PLAYER::PLAYER_ID()))
						{
							func_26(-1);
							func_25(-1);
						}
						Global_2709093 = 0;
						MISC::CLEAR_BIT(&Global_2709095, 6);
						func_30(uParam0, 1);
						func_37(&(uParam0->f_281), 14);
						if (uParam0->f_281.f_9 == 1 && uParam0->f_281.f_2 >= 0)
						{
							if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(iParam1->f_14[uParam0->f_281.f_2]) && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(iParam1->f_14[uParam0->f_281.f_2]))
							{
								if (ENTITY::IS_ENTITY_ATTACHED(NETWORK::NET_TO_OBJ(iParam1->f_14[uParam0->f_281.f_2])))
								{
									ENTITY::DETACH_ENTITY(NETWORK::NET_TO_OBJ(iParam1->f_14[uParam0->f_281.f_2]), false, true);
								}
								Var49 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION(func_48(), "enter_tablet", (uParam0[uParam0->f_281.f_2 /*14*/])->f_8, (uParam0[uParam0->f_281.f_2 /*14*/])->f_8.f_3, 0f, 2) };
								Var52 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION(func_48(), "enter_tablet", (uParam0[uParam0->f_281.f_2 /*14*/])->f_8, (uParam0[uParam0->f_281.f_2 /*14*/])->f_8.f_3, 0f, 2) };
								ENTITY::SET_ENTITY_COORDS_NO_OFFSET(NETWORK::NET_TO_OBJ(iParam1->f_14[uParam0->f_281.f_2]), Var49, false, false, true);
								ENTITY::SET_ENTITY_ROTATION(NETWORK::NET_TO_OBJ(iParam1->f_14[uParam0->f_281.f_2]), Var52, 2, true);
								ENTITY::FREEZE_ENTITY_POSITION(NETWORK::NET_TO_OBJ(iParam1->f_14[uParam0->f_281.f_2]), true);
							}
						}
						if (!STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
						{
							if (uParam0->f_281.f_9 == 1)
							{
								func_5(PLAYER::PLAYER_ID(), 1, 0, 0);
							}
						}
						func_4();
						func_138(uParam0, 0);
					}
					else if (ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), -641050666))
					{
						if (uParam0->f_281.f_9 == 1)
						{
							if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(iParam1->f_14[uParam0->f_281.f_2]) && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(iParam1->f_14[uParam0->f_281.f_2]))
							{
								if (ENTITY::IS_ENTITY_ATTACHED(NETWORK::NET_TO_OBJ(iParam1->f_14[uParam0->f_281.f_2])))
								{
									ENTITY::DETACH_ENTITY(NETWORK::NET_TO_OBJ(iParam1->f_14[uParam0->f_281.f_2]), false, true);
								}
							}
						}
					}
				}
			}
			else
			{
				if (uParam0->f_281.f_9 == 1 && uParam0->f_281.f_2 >= 0)
				{
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(iParam1->f_14[uParam0->f_281.f_2]) && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(iParam1->f_14[uParam0->f_281.f_2]))
					{
						if (ENTITY::IS_ENTITY_ATTACHED(NETWORK::NET_TO_OBJ(iParam1->f_14[uParam0->f_281.f_2])))
						{
							ENTITY::DETACH_ENTITY(NETWORK::NET_TO_OBJ(iParam1->f_14[uParam0->f_281.f_2]), false, true);
						}
						func_29(&(iParam1->f_14[uParam0->f_281.f_2]));
					}
				}
				if ((!BitTest(Global_1971473, 7) && !BitTest(Global_1971473, 3)) && !func_27(PLAYER::PLAYER_ID()))
				{
					func_26(-1);
					func_25(-1);
				}
				Global_2709093 = 0;
				MISC::CLEAR_BIT(&Global_2709095, 6);
				func_30(uParam0, 1);
				func_37(&(uParam0->f_281), 14);
				if (!STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
				{
					if (uParam0->f_281.f_9 == 1)
					{
						func_5(PLAYER::PLAYER_ID(), 1, 0, 0);
					}
				}
				func_4();
				func_138(uParam0, 0);
			}
			break;
	}
}

void func_65(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (bParam1)
	{
		iVar1 = func_66(uParam0);
		if (iVar1 != uParam0->f_281.f_9.f_1)
		{
			if (iVar1 == 0)
			{
				iVar0 = (11 + uParam0->f_281.f_9.f_1);
			}
			else
			{
				iVar0 = (6 + iVar1);
			}
		}
		else
		{
			iVar0 = uParam0->f_281.f_9.f_2;
		}
		iVar1 = uParam0->f_281.f_9.f_1;
	}
	else if (uParam0->f_281.f_9.f_2 == 5)
	{
		iVar1 = uParam0->f_281.f_9.f_1;
		iVar2 = 3;
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar2);
		if (iVar0 == uParam0->f_281.f_9.f_3)
		{
			iVar0 = (iVar0 + 1 % iVar2);
		}
	}
	else
	{
		if (uParam0->f_281.f_9.f_2 > 6)
		{
			iVar1 = func_66(uParam0);
			uParam0->f_281.f_9.f_4 = MISC::GET_GAME_TIMER();
		}
		else
		{
			iVar1 = uParam0->f_281.f_9.f_1;
		}
		if ((MISC::GET_GAME_TIMER() - uParam0->f_281.f_9.f_4) >= 90000)
		{
			iVar1 = func_66(uParam0);
			if (iVar1 != uParam0->f_281.f_9.f_1)
			{
				if (iVar1 == 0)
				{
					iVar0 = (11 + uParam0->f_281.f_9.f_1);
				}
				else
				{
					iVar0 = (6 + iVar1);
				}
			}
			iVar1 = uParam0->f_281.f_9.f_1;
		}
		else
		{
			iVar0 = 5;
		}
	}
	uParam0->f_281.f_9.f_3 = uParam0->f_281.f_9.f_2;
	uParam0->f_281.f_9.f_2 = iVar0;
	uParam0->f_281.f_9.f_1 = iVar1;
}

int func_66(var uParam0)
{
	return uParam0->f_281.f_9.f_1;
}

void func_67(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	
	if ((BitTest(Global_1971473, 7) || BitTest(Global_1971473, 3)) || func_27(PLAYER::PLAYER_ID()))
	{
		if (uParam0->f_281.f_5 == 7 && CAM::IS_SCREEN_FADED_OUT())
		{
			func_3(uParam0, uParam1);
			func_138(uParam0, 9);
		}
	}
	if (func_39(&(uParam0->f_281), 13))
	{
		iVar0 = func_99(&(uParam0->f_281.f_17));
		if (iVar0 == 1)
		{
			if (uParam0->f_281.f_2 >= 0 && uParam0->f_281.f_2 < 10)
			{
				AUDIO::PLAY_SOUND_FROM_ENTITY(iVar1, "Select_Turret", NETWORK::NET_TO_OBJ(uParam1->f_14[uParam0->f_281.f_2]), "DLC_AW_Spectator_Tablet_Sounds", true, 0);
			}
			MISC::SET_BIT(&Global_1971473, 9);
			func_37(&(uParam0->f_281), 13);
		}
		else if (iVar0 == 2)
		{
			if (!BitTest(Global_2709095, 7))
			{
				MISC::SET_BIT(&Global_2709095, 7);
			}
			AUDIO::PLAY_SOUND_FRONTEND(-1, "ERROR", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
			func_37(&(uParam0->f_281), 13);
		}
	}
	if (uParam0->f_281.f_5 == 7)
	{
		if (PAD::HAVE_CONTROLS_CHANGED(2))
		{
			func_30(uParam0, 1);
		}
		if (ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), -1322051853))
		{
			func_30(uParam0, 1);
			if (func_39(&(uParam0->f_281), 15))
			{
				func_38();
				MISC::CLEAR_BIT(&Global_2709095, 8);
				func_37(&(uParam0->f_281), 15);
			}
		}
		else if ((((((((((((((((((((((func_39(&(uParam0->f_281), 13) || !Global_1574975) || (!BitTest(Global_1971473, 23) && !func_98())) || Global_2712176) || Global_2712181) || BitTest(Global_1964670, 13)) || BitTest(Global_1971473, 14)) || BitTest(Global_1964670, 9)) || BitTest(Global_2709095, 0)) || BitTest(Global_1971473, 6)) || BitTest(Global_1971473, 7)) || BitTest(Global_1971473, 8)) || BitTest(Global_1971473, 9)) || BitTest(Global_1971473, 2)) || BitTest(Global_1971473, 3)) || BitTest(Global_1971473, 4)) || BitTest(Global_1971473, 5)) || func_27(PLAYER::PLAYER_ID())) || func_55()) || PAD::IS_DISABLED_CONTROL_PRESSED(2, 19)) || !CAM::IS_SCREEN_FADED_IN()) || func_95(PLAYER::PLAYER_ID())) || Global_2709116 != 0)
		{
			func_30(uParam0, 1);
			if (!BitTest(Global_1971473, 23))
			{
				if (!func_39(&(uParam0->f_281), 15) && Global_2709116 == 0)
				{
					func_94("ARENA SPECTATOR BOX TABLETS");
					MISC::SET_BIT(&Global_2709095, 8);
					func_126(&(uParam0->f_281), 15);
				}
			}
			else if (func_39(&(uParam0->f_281), 15))
			{
				func_38();
				MISC::CLEAR_BIT(&Global_2709095, 8);
				func_37(&(uParam0->f_281), 15);
			}
		}
		else if (func_93(uParam0))
		{
			func_30(uParam0, 1);
			if (func_39(&(uParam0->f_281), 15))
			{
				func_38();
				MISC::CLEAR_BIT(&Global_2709095, 8);
				func_37(&(uParam0->f_281), 15);
			}
		}
		else
		{
			if (!func_39(&(uParam0->f_281), 15))
			{
				func_94("ARENA SPECTATOR BOX TABLETS");
				MISC::SET_BIT(&Global_2709095, 8);
				func_126(&(uParam0->f_281), 15);
			}
			PAD::ALLOW_ALTERNATIVE_SCRIPT_CONTROLS_LAYOUT(2);
			PAD::DISABLE_CONTROL_ACTION(0, 24, true);
			PAD::DISABLE_CONTROL_ACTION(0, 294, true);
			PAD::DISABLE_CONTROL_ACTION(0, 142, true);
			PAD::DISABLE_CONTROL_ACTION(0, 141, true);
			PAD::DISABLE_CONTROL_ACTION(0, 140, true);
			PAD::DISABLE_CONTROL_ACTION(0, 300, true);
			PAD::DISABLE_CONTROL_ACTION(0, 301, true);
			PAD::DISABLE_CONTROL_ACTION(0, 143, true);
			PAD::DISABLE_CONTROL_ACTION(2, 200, true);
			bVar2 = false;
			if (func_92())
			{
				bVar2 = true;
			}
			if (func_32("ARENA_VIP_CASH1", Global_262145.f_26297))
			{
				MISC::CLEAR_BIT(&Global_2709095, 5);
			}
			if (func_32("ARENA_VIP_CASH2", Global_262145.f_26298))
			{
				MISC::CLEAR_BIT(&Global_2709095, 4);
			}
			if (func_34("ARENA_VIP_ABIL"))
			{
				MISC::CLEAR_BIT(&Global_2709095, 7);
			}
			if (BitTest(Global_2709095, 4) && uParam0->f_281.f_6 == -1)
			{
				func_91("ARENA_VIP_CASH2", Global_262145.f_26298, 2000);
			}
			if (BitTest(Global_2709095, 5) && uParam0->f_281.f_6 == -1)
			{
				func_91("ARENA_VIP_CASH1", Global_262145.f_26297, 2000);
			}
			if (BitTest(Global_2709095, 7) && uParam0->f_281.f_6 == -1)
			{
				func_90("ARENA_VIP_ABIL", 2000);
			}
			if ((BitTest(Global_2709095, 4) || BitTest(Global_2709095, 5)) || BitTest(Global_2709095, 7))
			{
				func_30(uParam0, 1);
			}
			if ((((((((!HUD::IS_PAUSE_MENU_ACTIVE() && !Global_1935401) && !func_39(&(uParam0->f_281), 0)) && !func_39(&(uParam0->f_281), 4)) && !func_89()) && !func_87(1)) && uParam0->f_281.f_9.f_2 != 3) && !HUD::IS_WARNING_MESSAGE_ACTIVE()) && !func_86())
			{
				if (bVar2)
				{
					if (func_61() && !func_57())
					{
						if (((((func_33("ARENA_SEAT_PC1", Global_262145.f_26297, Global_262145.f_26298) || func_32("ARENA_SEAT_PC2", Global_262145.f_26297)) || func_32("ARENA_SEAT_PC3", Global_262145.f_26298)) || func_33("ARENA_SEAT1", Global_262145.f_26297, Global_262145.f_26298)) || func_32("ARENA_SEAT2", Global_262145.f_26297)) || func_32("ARENA_SEAT3", Global_262145.f_26298))
						{
							func_30(uParam0, 1);
						}
					}
					else if (func_34("ARENA_SEAT_PC") || func_34("ARENA_SEAT"))
					{
						func_30(uParam0, 1);
					}
				}
				if ((((((!func_31() && !BitTest(Global_2709095, 4)) && !BitTest(Global_2709095, 5)) && !BitTest(Global_2709095, 7)) && !func_32("ARENA_VIP_CASH1", Global_262145.f_26297)) && !func_32("ARENA_VIP_CASH2", Global_262145.f_26298)) && !func_34("ARENA_VIP_ABIL"))
				{
					if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2))
					{
						if (bVar2)
						{
							if (func_61() && !func_57())
							{
								if ((func_33("ARENA_SEAT_PC1", Global_262145.f_26297, Global_262145.f_26298) || func_32("ARENA_SEAT_PC2", Global_262145.f_26297)) || func_32("ARENA_SEAT_PC3", Global_262145.f_26298))
								{
									func_30(uParam0, 1);
								}
								func_130(&(uParam0->f_281.f_6), 4, "ARENA_SEAT_PC", 0, 0, 0, 0);
							}
							else
							{
								if (func_34("ARENA_SEAT_PC"))
								{
									func_30(uParam0, 1);
								}
								if (!BitTest(Global_2709095, 2) && !BitTest(Global_2709095, 3))
								{
									func_85("ARENA_SEAT_PC1", Global_262145.f_26297, Global_262145.f_26298);
								}
								else if (BitTest(Global_2709095, 2) && !BitTest(Global_2709095, 3))
								{
									func_91("ARENA_SEAT_PC2", Global_262145.f_26297, -1);
								}
								else if (!BitTest(Global_2709095, 2) && BitTest(Global_2709095, 3))
								{
									func_91("ARENA_SEAT_PC3", Global_262145.f_26298, -1);
								}
								else
								{
									func_130(&(uParam0->f_281.f_6), 4, "ARENA_SEAT_PC4", 0, 0, 0, 0);
								}
							}
						}
						else
						{
							func_130(&(uParam0->f_281.f_6), 4, "ARENA_SEAT_EX", 0, 0, 0, 0);
						}
					}
					else if (bVar2)
					{
						if (func_61() && !func_57())
						{
							if ((func_33("ARENA_SEAT1", Global_262145.f_26297, Global_262145.f_26298) || func_32("ARENA_SEAT2", Global_262145.f_26297)) || func_32("ARENA_SEAT3", Global_262145.f_26298))
							{
								func_30(uParam0, 1);
							}
							func_130(&(uParam0->f_281.f_6), 4, "ARENA_SEAT", 0, 0, 0, 0);
						}
						else
						{
							if (func_34("ARENA_SEAT"))
							{
								func_30(uParam0, 1);
							}
							if (!BitTest(Global_2709095, 2) && !BitTest(Global_2709095, 3))
							{
								func_85("ARENA_SEAT1", Global_262145.f_26297, Global_262145.f_26298);
							}
							else if (BitTest(Global_2709095, 2) && !BitTest(Global_2709095, 3))
							{
								func_91("ARENA_SEAT2", Global_262145.f_26297, -1);
							}
							else if (!BitTest(Global_2709095, 2) && BitTest(Global_2709095, 3))
							{
								func_91("ARENA_SEAT3", Global_262145.f_26298, -1);
							}
							else
							{
								func_130(&(uParam0->f_281.f_6), 4, "ARENA_SEAT4", 0, 0, 0, 0);
							}
						}
					}
					else
					{
						func_130(&(uParam0->f_281.f_6), 4, "ARENA_SEAT_EX", 0, 0, 0, 0);
					}
				}
				if (uParam0->f_281.f_5 == 7)
				{
					if (func_61() && !func_57())
					{
						if (((((((((PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 235) && !PAD::IS_CONTROL_JUST_PRESSED(2, 223)) && !PAD::IS_CONTROL_JUST_PRESSED(2, 225)) && !PAD::IS_CONTROL_JUST_PRESSED(2, 224)) && !PAD::IS_CONTROL_JUST_PRESSED(2, 222)) && !BitTest(Global_1971473, 6)) && !BitTest(Global_1971473, 7)) && !BitTest(Global_1971473, 8)) && !BitTest(Global_1971473, 9)) && !func_27(PLAYER::PLAYER_ID()))
						{
							if (uParam0->f_281.f_2 >= 0 && uParam0->f_281.f_2 < 10)
							{
								AUDIO::PLAY_SOUND_FROM_ENTITY(iVar3, "Exit_Menu", NETWORK::NET_TO_OBJ(uParam1->f_14[uParam0->f_281.f_2]), "DLC_AW_Spectator_Tablet_Sounds", true, 0);
							}
							func_107(uParam0);
						}
						if ((((((((((PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 223) && !PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 235)) && !PAD::IS_CONTROL_JUST_PRESSED(2, 225)) && !PAD::IS_CONTROL_JUST_PRESSED(2, 224)) && !PAD::IS_CONTROL_JUST_PRESSED(2, 222)) && !BitTest(Global_1971473, 6)) && !BitTest(Global_1971473, 7)) && !BitTest(Global_1971473, 8)) && !BitTest(Global_1971473, 9)) && !func_27(PLAYER::PLAYER_ID())) && bVar2)
						{
							if (func_84())
							{
								func_30(uParam0, 1);
								MISC::SET_BIT(&Global_1971473, 6);
								if (uParam0->f_281.f_2 >= 0 && uParam0->f_281.f_2 < 10)
								{
									AUDIO::PLAY_SOUND_FROM_ENTITY(iVar4, "Select_Drone", NETWORK::NET_TO_OBJ(uParam1->f_14[uParam0->f_281.f_2]), "DLC_AW_Spectator_Tablet_Sounds", true, 0);
								}
							}
							else
							{
								if (!BitTest(Global_2709095, 7))
								{
									MISC::SET_BIT(&Global_2709095, 7);
								}
								AUDIO::PLAY_SOUND_FRONTEND(-1, "ERROR", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
							}
						}
						if ((((((((((PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 225) && !PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 235)) && !PAD::IS_CONTROL_JUST_PRESSED(2, 223)) && !PAD::IS_CONTROL_JUST_PRESSED(2, 224)) && !PAD::IS_CONTROL_JUST_PRESSED(2, 222)) && !BitTest(Global_1971473, 6)) && !BitTest(Global_1971473, 7)) && !BitTest(Global_1971473, 8)) && !BitTest(Global_1971473, 9)) && !func_27(PLAYER::PLAYER_ID())) && bVar2)
						{
							if (func_83())
							{
								func_30(uParam0, 1);
								MISC::SET_BIT(&Global_1971473, 7);
								if (uParam0->f_281.f_2 >= 0 && uParam0->f_281.f_2 < 10)
								{
									AUDIO::PLAY_SOUND_FROM_ENTITY(iVar5, "Select_RC_Car", NETWORK::NET_TO_OBJ(uParam1->f_14[uParam0->f_281.f_2]), "DLC_AW_Spectator_Tablet_Sounds", true, 0);
								}
							}
							else
							{
								if (!BitTest(Global_2709095, 7))
								{
									MISC::SET_BIT(&Global_2709095, 7);
								}
								AUDIO::PLAY_SOUND_FRONTEND(-1, "ERROR", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
							}
						}
						if ((((((((((PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 224) && !PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 235)) && !PAD::IS_CONTROL_JUST_PRESSED(2, 223)) && !PAD::IS_CONTROL_JUST_PRESSED(2, 225)) && !PAD::IS_CONTROL_JUST_PRESSED(2, 222)) && !BitTest(Global_1971473, 6)) && !BitTest(Global_1971473, 7)) && !BitTest(Global_1971473, 8)) && !BitTest(Global_1971473, 9)) && !func_27(PLAYER::PLAYER_ID())) && bVar2)
						{
							if (func_80())
							{
								func_30(uParam0, 1);
								MISC::SET_BIT(&Global_1971473, 8);
								if (uParam0->f_281.f_2 >= 0 && uParam0->f_281.f_2 < 10)
								{
									AUDIO::PLAY_SOUND_FROM_ENTITY(iVar6, "Select_Trap_Cam", NETWORK::NET_TO_OBJ(uParam1->f_14[uParam0->f_281.f_2]), "DLC_AW_Spectator_Tablet_Sounds", true, 0);
								}
							}
							else
							{
								if (!BitTest(Global_2709095, 7))
								{
									MISC::SET_BIT(&Global_2709095, 7);
								}
								AUDIO::PLAY_SOUND_FRONTEND(-1, "ERROR", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
							}
						}
						if ((((((((((PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 222) && !PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 235)) && !PAD::IS_CONTROL_JUST_PRESSED(2, 223)) && !PAD::IS_CONTROL_JUST_PRESSED(2, 225)) && !PAD::IS_CONTROL_JUST_PRESSED(2, 224)) && !BitTest(Global_1971473, 6)) && !BitTest(Global_1971473, 7)) && !BitTest(Global_1971473, 8)) && !BitTest(Global_1971473, 9)) && !func_27(PLAYER::PLAYER_ID())) && bVar2)
						{
							if (func_79())
							{
								func_30(uParam0, 1);
								if (func_39(&(uParam0->f_281), 15))
								{
									func_38();
									MISC::CLEAR_BIT(&Global_2709095, 8);
									func_37(&(uParam0->f_281), 15);
								}
								func_126(&(uParam0->f_281), 13);
							}
							else
							{
								if (!BitTest(Global_2709095, 7))
								{
									MISC::SET_BIT(&Global_2709095, 7);
								}
								AUDIO::PLAY_SOUND_FRONTEND(-1, "ERROR", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
							}
						}
					}
					else
					{
						if (((PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 235) && !PAD::IS_CONTROL_JUST_PRESSED(2, 224)) && !Global_2712181) && !Global_2712176)
						{
							if (uParam0->f_281.f_2 >= 0 && uParam0->f_281.f_2 < 10)
							{
								AUDIO::PLAY_SOUND_FROM_ENTITY(iVar7, "Exit_Menu", NETWORK::NET_TO_OBJ(uParam1->f_14[uParam0->f_281.f_2]), "DLC_AW_Spectator_Tablet_Sounds", true, 0);
							}
							func_107(uParam0);
						}
						if ((((PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 223) && !PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 235)) && !PAD::IS_CONTROL_JUST_PRESSED(2, 224)) && bVar2) && !Global_262145.f_26295)
						{
							if (MONEY::NETWORK_CAN_SPEND_MONEY(Global_262145.f_26297, false, false, true, -1, 0) || BitTest(Global_2709095, 3))
							{
								func_30(uParam0, 1);
								Global_2712181 = 1;
								Global_2712176 = 1;
								if (uParam0->f_281.f_2 >= 0 && uParam0->f_281.f_2 < 10)
								{
									AUDIO::PLAY_SOUND_FROM_ENTITY(iVar8, "Select_Live_Stream", NETWORK::NET_TO_OBJ(uParam1->f_14[uParam0->f_281.f_2]), "DLC_AW_Spectator_Tablet_Sounds", true, 0);
								}
								func_77(73, -1);
								func_74();
								func_68();
							}
							else if (!BitTest(Global_2709095, 5))
							{
								MISC::SET_BIT(&Global_2709095, 5);
							}
						}
					}
				}
			}
		}
	}
	func_37(&(uParam0->f_281), 9);
}

void func_68()
{
	func_69(7986, -1);
}

void func_69(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_72(iParam0, func_73(iParam1));
	iVar0++;
	func_70(iParam0, iVar0, iParam1, 1);
}

void func_70(int iParam0, int iParam1, var uParam2, bool bParam3)
{
	int iVar0;
	
	if (iParam0 != 16764)
	{
		iVar0 = func_71(iParam0, uParam2);
		if (iVar0 != 0)
		{
			STATS::STAT_SET_INT(iVar0, iParam1, bParam3);
		}
	}
}

int func_71(int iParam0, var uParam1)
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(0, iParam0, func_73(uParam1));
}

int func_72(int iParam0, var uParam1)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 16764)
	{
		iVar0 = func_71(iParam0, uParam1);
		if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_73(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_20();
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

void func_74()
{
	int iVar0;
	
	iVar0 = func_75(73, -1);
	if (iVar0 >= 50)
	{
		MISC::SET_BIT(&(Global_1845298[PLAYER::PLAYER_ID() /*881*/].f_260.f_383.f_3), 13);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_1845298[PLAYER::PLAYER_ID() /*881*/].f_260.f_383.f_3), 13);
	}
}

int func_75(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	iVar0 = func_76(iParam0, iParam1);
	if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_76(int iParam0, var uParam1)
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(8, iParam0, func_73(uParam1));
}

void func_77(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_75(iParam0, func_73(iParam1));
	iVar0++;
	func_78(iParam0, iVar0, iParam1);
}

void func_78(int iParam0, int iParam1, var uParam2)
{
	int iVar0;
	
	iVar0 = func_76(iParam0, uParam2);
	STATS::STAT_SET_INT(iVar0, iParam1, true);
}

int func_79()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	bVar0 = false;
	iVar1 = PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID());
	if (iVar1 > 4 || iVar1 < 0)
	{
		iVar1 = 0;
	}
	iVar2 = Global_1058150.f_14[iVar1];
	if (iVar2 < 17)
	{
		if (BitTest(Global_4718592.f_3838[iVar1 /*26988*/].f_8630[iVar2], 26))
		{
			bVar0 = true;
		}
	}
	if (BitTest(Global_4718592.f_33, 4) && !bVar0)
	{
		return 1;
	}
	return 0;
}

int func_80()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	if (!func_81())
	{
		return 0;
	}
	bVar0 = false;
	iVar1 = PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID());
	if (iVar1 > 4 || iVar1 < 0)
	{
		iVar1 = 0;
	}
	iVar2 = Global_1058150.f_14[iVar1];
	if (iVar2 < 17)
	{
		if (BitTest(Global_4718592.f_3838[iVar1 /*26988*/].f_8630[iVar2], 25))
		{
			bVar0 = true;
		}
	}
	if (BitTest(Global_4718592.f_33, 1) && !bVar0)
	{
		return 1;
	}
	return 0;
}

int func_81()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_4980736.f_51387 - 1))
	{
		if (!func_82(Global_4980736.f_51389[iVar0 /*271*/]))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_82(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

int func_83()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	bVar0 = false;
	iVar1 = PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID());
	if (iVar1 > 4 || iVar1 < 0)
	{
		iVar1 = 0;
	}
	iVar2 = Global_1058150.f_14[iVar1];
	if (iVar2 < 17)
	{
		if (BitTest(Global_4718592.f_3838[iVar1 /*26988*/].f_8630[iVar2], 24))
		{
			bVar0 = true;
		}
	}
	if (BitTest(Global_4718592.f_31, 14) && !bVar0)
	{
		return 1;
	}
	return 0;
}

int func_84()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	bVar0 = false;
	iVar1 = PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID());
	if (iVar1 > 4 || iVar1 < 0)
	{
		iVar1 = 0;
	}
	iVar2 = Global_1058150.f_14[iVar1];
	if (iVar2 < 17)
	{
		if (BitTest(Global_4718592.f_3838[iVar1 /*26988*/].f_8630[iVar2], 23))
		{
			bVar0 = true;
		}
	}
	if (BitTest(Global_4718592.f_31, 13) && !bVar0)
	{
		return 1;
	}
	return 0;
}

void func_85(char* sParam0, int iParam1, int iParam2)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, -1);
}

bool func_86()
{
	return MISC::GET_GAME_TIMER() <= Global_24569.f_6481 + 100;
}

int func_87(bool bParam0)
{
	if (PAD::GET_ALLOW_MOVEMENT_WHILE_ZOOMED())
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (func_88(PLAYER::PLAYER_PED_ID()))
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

int func_88(int iParam0)
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

int func_89()
{
	if (Global_2673273.f_1023.f_5 == -1)
	{
		return 0;
	}
	return 1;
}

void func_90(char* sParam0, int iParam1)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam1);
}

void func_91(char* sParam0, int iParam1, int iParam2)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam2);
}

int func_92()
{
	if (Global_2697100 >= 0 && Global_2697100 < 10)
	{
		return 1;
	}
	return 0;
}

bool func_93(var uParam0)
{
	return func_39(&(uParam0->f_281), 9);
}

void func_94(char* sParam0)
{
	PAD::INIT_PC_SCRIPTED_CONTROLS(sParam0);
}

bool func_95(int iParam0)
{
	return func_96(iParam0) != 0;
}

int func_96(int iParam0)
{
	if (iParam0 == PLAYER::PLAYER_ID() && !func_97())
	{
		return Global_2709122.f_1;
	}
	return Global_2649161.f_1166[iParam0 /*3*/].f_1;
}

int func_97()
{
	if (((Global_2709125 != 0 && Global_2709125 == Global_2709126) && Global_2709114 != 3) && Global_2709114 != 1)
	{
		return 0;
	}
	return 1;
}

int func_98()
{
	if (((((func_34("ARENA_SEAT_GM0") || func_34("ARENA_SEAT_GM1")) || func_34("TAGTM_HELP_2O")) || func_34("TAGTM_HELP_2P")) || func_34("TAGTM_HELP_2Pi")) || func_34("TAGTM_HELP_2G"))
	{
		return 1;
	}
	return 0;
}

int func_99(var uParam0)
{
	int iVar0;
	
	if (*uParam0 == 0)
	{
		*uParam0 = func_105(1, 0, 0, 1, 1);
	}
	iVar0 = func_104(*uParam0);
	if (iVar0 == 1)
	{
		*uParam0 = 0;
	}
	else if (iVar0 != 0)
	{
		*uParam0 = 0;
		func_100(0, -1, -1);
	}
	return iVar0;
}

int func_100(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 != 0 && Global_2709119.f_1 != iParam0)
	{
		return 0;
	}
	if (iParam1 != -1 && Global_2709119.f_2 != iParam1)
	{
		return 0;
	}
	if (iParam2 != -1 && Global_2709119 != iParam2)
	{
		return 0;
	}
	if (func_103())
	{
		return 0;
	}
	func_102();
	func_101(3);
	Global_2709119.f_1 = 0;
	Global_2709119.f_2 = -1;
	Global_2709119 = -1;
	Global_2709115 = 0;
	Global_2709117 = 0;
	Global_2709125 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	Global_2709118 = 1;
	return 1;
}

void func_101(int iParam0)
{
	Global_2709114 = iParam0;
}

void func_102()
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("turret_cam_script")) > 0)
	{
		Global_2709127 = 1;
	}
}

bool func_103()
{
	return (Global_2709114 == 3 || Global_2709114 == 0);
}

int func_104(int iParam0)
{
	if (Global_2709125 == iParam0)
	{
		if (Global_2709114 == 2)
		{
			if (Global_2709125 == Global_2709126)
			{
				return 1;
			}
			else
			{
				return 2;
			}
		}
		else if (Global_2709114 == 0)
		{
			return 2;
		}
	}
	else
	{
		return 2;
	}
	return 0;
}

var func_105(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	struct<3> Var0;
	
	Var0.f_2 = -1;
	Var0.f_1 = iParam0;
	Var0.f_2 = iParam1;
	Var0.f_0 = iParam2;
	func_101(1);
	Global_2709119 = { Var0 };
	Global_2709115 = iParam3;
	Global_2709125 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	Global_2709117 = 0;
	func_106(&Global_2709117, 0, !bParam4);
	Global_2709118 = 1;
	return Global_2709125;
}

void func_106(int* iParam0, bool bParam1, bool bParam2)
{
	if (bParam2)
	{
		MISC::SET_BIT(iParam0, iParam1);
	}
	else
	{
		MISC::CLEAR_BIT(iParam0, bParam1);
	}
}

void func_107(var uParam0)
{
	char* sVar0;
	
	uParam0->f_281.f_1 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_122(uParam0), func_121(uParam0), 2, true, false, 1f, 0f, 1f);
	func_125(uParam0, &sVar0);
	NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), uParam0->f_281.f_1, &sVar0, "exit", 4f, -4f, 13, 16, 1000f, 0);
	NETWORK::NETWORK_START_SYNCHRONISED_SCENE(uParam0->f_281.f_1);
	func_35(&(uParam0->f_281.f_6));
	MISC::SET_BIT(&Global_2709095, 6);
	func_37(&(uParam0->f_281), 14);
	func_138(uParam0, 9);
}

int func_108(float fParam0, float fParam1, float fParam2)
{
	float fVar0;
	float fVar1;
	
	fVar1 = (fParam1 - fParam2);
	if (fVar1 < 0f)
	{
		fVar1 = (fVar1 + 360f);
	}
	fVar0 = (fParam1 + fParam2);
	if (fVar0 >= 360f)
	{
		fVar0 = (fVar0 - 360f);
	}
	if (fVar0 < 0f)
	{
		fVar0 = (fVar0 + 360f);
	}
	if (fVar0 > fVar1)
	{
		if (fParam0 < fVar0 && fParam0 > fVar1)
		{
			return 1;
		}
	}
	else if (fParam0 < fVar0 || fParam0 > fVar1)
	{
		return 1;
	}
	return 0;
}

int func_109(struct<3> Param0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, float fParam12)
{
	int iVar0;
	struct<3> Var1;
	float fVar4;
	
	Global_24430.f_6 = 1;
	if (Global_2673273.f_1101 && Global_2673273.f_1109)
	{
		func_117(0, bParam9);
		return 1;
	}
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && !bParam9)
	{
		if (Global_2673273.f_1101)
		{
			func_117(0, bParam9);
		}
		return 0;
	}
	if ((STREAMING::IS_NEW_LOAD_SCENE_ACTIVE() && !bParam9) && !PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
	{
		return 0;
	}
	if (!func_6(0))
	{
		if (func_116(PLAYER::PLAYER_ID(), 1, 0) && !(func_60() || func_115()))
		{
			if (((bParam9 && func_114(PLAYER::PLAYER_ID(), 1, 0)) && STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS()) && Global_2658293[PLAYER::PLAYER_ID() /*468*/].f_236 == 1)
			{
			}
			else if (func_113() == 28)
			{
			}
			else
			{
				return 0;
			}
		}
	}
	if (fParam3 < 0f)
	{
		fParam3 = (fParam3 + 360f);
	}
	if (fParam3 >= 360f)
	{
		fParam3 = (fParam3 + -360f);
	}
	if (!Global_2673273.f_1101 && !bParam11)
	{
		Var1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false) };
		if ((MISC::ABSF((Var1.f_0 - Param0.f_0)) < 0.2f && MISC::ABSF((Var1.f_1 - Param0.f_1)) < 0.2f) && MISC::ABSF((Var1.f_2 - Param0.f_2)) < 1.2f)
		{
			fVar4 = (fParam3 - ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()));
			if (fVar4 > 180f)
			{
				fVar4 = (fVar4 + -360f);
			}
			if (fVar4 < -180f)
			{
				fVar4 = (fVar4 + 360f);
			}
			if (MISC::ABSF(fVar4) < 1f)
			{
				Global_2673273.f_1101 = 0;
				Global_2673273.f_1102 = 0;
				if (PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
				{
					PLAYER::STOP_PLAYER_TELEPORT();
				}
				return 1;
			}
		}
	}
	if (((!Param0.f_0 == Global_2673273.f_1103 || !Param0.f_1 == Global_2673273.f_1103.f_1) || !Param0.f_2 == Global_2673273.f_1103.f_2) || !fParam3 == Global_2673273.f_1106)
	{
		if (Global_2673273.f_1101 == 1)
		{
			if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2673273.f_1107) < func_112(0))
			{
				return 0;
			}
			PLAYER::STOP_PLAYER_TELEPORT();
			Global_2673273.f_1102 = 1;
		}
		else
		{
			Global_2673273.f_1102 = 0;
		}
		Global_2673273.f_1103 = { Param0 };
		Global_2673273.f_1106 = fParam3;
		Global_2673273.f_1101 = 0;
	}
	if (bParam4)
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
			if (ENTITY::DOES_ENTITY_EXIST(iVar0) && ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("kosatka"))
			{
				bParam4 = false;
			}
		}
	}
	if (!Global_2673273.f_1101 && !PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
	{
		if (bParam4)
		{
			bParam5 = false;
		}
		bParam7 = bParam7;
		if (bParam7)
		{
		}
		if (bParam5)
		{
		}
		if (bParam8)
		{
		}
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			if (!BitTest(Global_102538.f_1442[44], 16))
			{
				func_111(0);
			}
			if (!WEAPON::GET_CURRENT_PED_VEHICLE_WEAPON(PLAYER::PLAYER_PED_ID(), &(Global_2635562.f_503)))
			{
				Global_2635562.f_503 = 0;
			}
		}
		if (bParam4)
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				iVar0 = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
				if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TRAILER(iVar0))
				{
					Global_2673273.f_1108 = 0;
				}
			}
		}
		if (Global_2673273.f_1108 > -1)
		{
			Global_2673273.f_1107 = NETWORK::GET_NETWORK_TIME();
			Global_2673273.f_1101 = 1;
		}
		else
		{
			if (bParam9)
			{
				if (bParam4)
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						iVar0 = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
						if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
						{
							ENTITY::SET_ENTITY_COORDS(iVar0, Param0, false, true, true, true);
							ENTITY::SET_ENTITY_HEADING(iVar0, fParam3);
							if (fParam12 != 0f)
							{
								ENTITY::SET_ENTITY_ROTATION(iVar0, fParam12, 0f, fParam3, 2, true);
							}
						}
						else
						{
							NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(iVar0);
						}
					}
					else
					{
						ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Param0, false, false, false, true);
						ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), fParam3);
					}
				}
				else
				{
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Param0, false, false, false, true);
					ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), fParam3);
				}
				func_117(bParam6, bParam9);
				return 1;
			}
			else
			{
				STREAMING::CLEAR_FOCUS();
				PLAYER::START_PLAYER_TELEPORT(PLAYER::PLAYER_ID(), Param0, fParam3, bParam4, bParam10, false);
			}
			Global_2673273.f_1107 = NETWORK::GET_NETWORK_TIME();
			Global_2673273.f_1101 = 1;
		}
	}
	if (Global_2673273.f_1101)
	{
		Global_24430.f_6 = 1;
		Global_2673273.f_1107 = NETWORK::GET_NETWORK_TIME();
		if (Global_2673273.f_1108 > -1)
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				iVar0 = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
			}
			if (func_110(&(Global_2673273.f_1108), Param0, fParam3, iVar0))
			{
				func_117(bParam6, bParam9);
				return 1;
			}
		}
		else
		{
			if (bParam9)
			{
				if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), Global_2673273.f_1103) < 2f)
				{
					if (PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
					{
						PLAYER::STOP_PLAYER_TELEPORT();
					}
					func_117(bParam6, bParam9);
					return 1;
				}
			}
			if (!PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
			{
				if (fParam12 != 0f)
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						iVar0 = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
						ENTITY::SET_ENTITY_ROTATION(iVar0, fParam12, 0f, fParam3, 2, true);
						Global_2673273.f_1109 = 1;
						return 0;
					}
				}
				func_117(bParam6, bParam9);
				return 1;
			}
		}
	}
	return 0;
}

int func_110(var uParam0, struct<3> Param1, float fParam4, int iParam5)
{
	if (ENTITY::DOES_ENTITY_EXIST(Global_2673273.f_1110) && !ENTITY::IS_ENTITY_DEAD(Global_2673273.f_1110, false))
	{
		NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(Global_2673273.f_1110);
	}
	switch (*uParam0)
	{
		case 0:
			Global_2673273.f_1110 = iParam5;
			NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(Global_2673273.f_1110);
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(Global_2673273.f_1110))
			{
				if (!ENTITY::IS_ENTITY_DEAD(Global_2673273.f_1110, false))
				{
					ENTITY::SET_ENTITY_HEADING(Global_2673273.f_1110, fParam4);
					ENTITY::SET_ENTITY_COORDS(Global_2673273.f_1110, Param1, false, true, true, true);
					return 1;
				}
			}
			break;
	}
	return 0;
}

void func_111(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_2635562.f_2994;
	if ((AUDIO::AUDIO_IS_SCRIPTED_MUSIC_PLAYING() && Global_2635562.f_2992 == 0) && iParam0 == 0)
	{
		iVar0 = 255;
	}
	if (!iVar0 == Global_2635562.f_2991)
	{
		if (!AUDIO::IS_RADIO_RETUNING())
		{
			Global_2635562.f_2991 = iVar0;
		}
	}
}

int func_112(bool bParam0)
{
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		return 10000;
	}
	if (bParam0)
	{
		return 5000;
	}
	return 1000;
}

int func_113()
{
	return Global_1575022;
}

int func_114(int iParam0, bool bParam1, bool bParam2)
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

bool func_115()
{
	return ((BitTest(Global_4718592.f_31, 12) && BitTest(Global_1971473, 12)) && Global_1971472 == 8);
}

int func_116(int iParam0, bool bParam1, int iParam2)
{
	if (Global_2658293[iParam0 /*468*/].f_236 == 99)
	{
		if ((iParam2 && Global_2658293[iParam0 /*468*/].f_239 == 0) || iParam2 == 0)
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (Global_2658293[iParam0 /*468*/].f_236 == 13)
		{
			return 0;
		}
	}
	return 1;
}

void func_117(bool bParam0, bool bParam1)
{
	if (!bParam0)
	{
		CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
	}
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		PED::CLEAR_PED_WETNESS(PLAYER::PLAYER_PED_ID());
	}
	if (!bParam1)
	{
		STREAMING::CLEAR_FOCUS();
	}
	if (PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
	{
		PLAYER::STOP_PLAYER_TELEPORT();
	}
	func_10();
	if (!BitTest(Global_1845298[PLAYER::PLAYER_ID() /*881*/].f_260.f_37, 14) && !func_119())
	{
		func_118();
	}
}

void func_118()
{
	Global_2739529.f_92 = 1;
}

int func_119()
{
	if (!NETWORK::NETWORK_IS_ACTIVITY_SESSION() && !func_6(0))
	{
		return 0;
	}
	if (BitTest(Global_4718592.f_206690[0 /*24*/].f_17, 0))
	{
		return 1;
	}
	return 0;
}

int func_120()
{
	return Global_2697100;
}

Vector3 func_121(var uParam0)
{
	return (uParam0[uParam0->f_281.f_2 /*14*/])->f_8.f_3;
}

Vector3 func_122(var uParam0)
{
	return (uParam0[uParam0->f_281.f_2 /*14*/])->f_8;
}

void func_123(var uParam0, char* sParam1, bool bParam2)
{
	switch (uParam0->f_281.f_9)
	{
		case 0:
			switch (uParam0->f_281.f_9.f_2)
			{
				case 0:
					StringCopy(sParam1, "IDLE_A", 16);
					break;
				
				case 1:
					StringCopy(sParam1, "IDLE_B", 16);
					break;
				
				case 2:
					StringCopy(sParam1, "IDLE_C", 16);
					break;
				
				case 3:
					StringCopy(sParam1, "ENTER", 16);
					break;
				
				case 5:
					StringCopy(sParam1, "BASE", 16);
					break;
				
				case 4:
					StringCopy(sParam1, "EXIT", 16);
					break;
				
				case 7:
					StringCopy(sParam1, "A_TO_B", 16);
					break;
				
				case 8:
					StringCopy(sParam1, "B_TO_C", 16);
					break;
				
				case 9:
					StringCopy(sParam1, "C_TO_D", 16);
					break;
				
				case 10:
					StringCopy(sParam1, "D_TO_E", 16);
					break;
				
				case 12:
					StringCopy(sParam1, "B_TO_E", 16);
					break;
				
				case 13:
					StringCopy(sParam1, "C_TO_A", 16);
					break;
				
				case 14:
					StringCopy(sParam1, "D_TO_A", 16);
					break;
				
				case 15:
					StringCopy(sParam1, "E_TO_A", 16);
					break;
				
				default:
					StringCopy(sParam1, "invalid_clip", 16);
					break;
			}
			break;
		
		case 1:
			switch (uParam0->f_281.f_9.f_2)
			{
				case 0:
					StringCopy(sParam1, "IDLE_A", 16);
					break;
				
				case 1:
					StringCopy(sParam1, "IDLE_B", 16);
					break;
				
				case 2:
					StringCopy(sParam1, "IDLE_C", 16);
					break;
				
				case 3:
					StringCopy(sParam1, "ENTER", 16);
					break;
				
				case 5:
					StringCopy(sParam1, "BASE", 16);
					break;
				
				case 4:
					StringCopy(sParam1, "EXIT", 16);
					break;
				
				case 7:
					StringCopy(sParam1, "A_TO_B", 16);
					break;
				
				case 8:
					StringCopy(sParam1, "B_TO_C", 16);
					break;
				
				case 9:
					StringCopy(sParam1, "C_TO_D", 16);
					break;
				
				case 10:
					StringCopy(sParam1, "D_TO_E", 16);
					break;
				
				case 12:
					StringCopy(sParam1, "B_TO_E", 16);
					break;
				
				case 13:
					StringCopy(sParam1, "C_TO_A", 16);
					break;
				
				case 14:
					StringCopy(sParam1, "D_TO_A", 16);
					break;
				
				case 15:
					StringCopy(sParam1, "E_TO_A", 16);
					break;
				
				default:
					StringCopy(sParam1, "invalid_clip", 16);
					break;
			}
			break;
	}
	if (bParam2)
	{
		StringConCat(sParam1, "_TABLET", 16);
	}
}

void func_124()
{
	if (!Global_2673273.f_1023.f_10)
	{
		Global_2673273.f_1023.f_10 = 1;
	}
}

void func_125(var uParam0, char* sParam1)
{
	switch (uParam0->f_281.f_9)
	{
		case 0:
			StringCopy(sParam1, "ANIM@AMB@FACILITY@BRIEFING_ROOM@SEATING", 64);
			break;
		
		case 1:
			StringCopy(sParam1, "ANIM@ARENA@AMB@SEAT_DRONE_TABLET", 64);
			break;
	}
	if (func_49())
	{
		StringConCat(sParam1, "@FEMALE", 64);
	}
	else
	{
		StringConCat(sParam1, "@MALE", 64);
	}
	switch (uParam0->f_281.f_9)
	{
		case 0:
			switch (uParam0->f_281.f_9.f_1)
			{
				case 0:
					StringConCat(sParam1, "@VAR_A@", 64);
					break;
				
				case 1:
					StringConCat(sParam1, "@VAR_B@", 64);
					break;
				
				case 2:
					StringConCat(sParam1, "@VAR_C@", 64);
					break;
				
				case 3:
					StringConCat(sParam1, "@VAR_D@", 64);
					break;
				
				case 4:
					StringConCat(sParam1, "@VAR_E@", 64);
					break;
			}
			break;
		
		case 1:
			switch (uParam0->f_281.f_9.f_1)
			{
				case 0:
					StringConCat(sParam1, "@", 64);
					break;
			}
			break;
	}
}

void func_126(int* iParam0, bool bParam1)
{
	MISC::SET_BIT(iParam0, iParam1);
}

void func_127(var uParam0)
{
	uParam0->f_281.f_9 = func_129((*uParam0)[uParam0->f_281.f_2 /*14*/]);
	uParam0->f_281.f_9.f_1 = func_128(uParam0);
	uParam0->f_281.f_9.f_2 = 3;
	uParam0->f_281.f_9.f_3 = 3;
}

int func_128(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_281.f_9 == 0)
	{
		if (func_49())
		{
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
			switch (iVar0)
			{
				case 0:
					return 0;
				
				case 1:
					return 3;
				
				case 2:
					return 4;
				
				default:
			}
		}
		else
		{
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
			switch (iVar0)
			{
				case 0:
					return 0;
				
				case 1:
					return 2;
				
				case 2:
					return 3;
				}
			}
		
		default:
	}
	return 0;
}

int func_129(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 0;
		
		case 2:
			return 1;
		
		default:
	}
	return 0;
}

void func_130(var uParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, int iParam6)
{
	int iVar0;
	
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("context_controller")) < 1)
	{
	}
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		if (!*uParam0 == -1)
		{
			func_35(uParam0);
		}
		return;
	}
	if (!*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (!Global_45696[iVar0 /*32*/])
		{
			Global_45696[iVar0 /*32*/] = 1;
			Global_45696[iVar0 /*32*/].f_1 = Global_45897;
			Global_45897++;
			Global_45696[iVar0 /*32*/].f_4 = 0;
			Global_45696[iVar0 /*32*/].f_29 = 0;
			Global_45696[iVar0 /*32*/].f_5 = 0;
			Global_45696[iVar0 /*32*/].f_2 = iParam1;
			StringCopy(&(Global_45696[iVar0 /*32*/].f_8), sParam2, 16);
			Global_45696[iVar0 /*32*/].f_6 = iParam3;
			Global_45696[iVar0 /*32*/].f_31 = SCRIPT::GET_ID_OF_THIS_THREAD();
			Global_45696[iVar0 /*32*/].f_7 = 0;
			Global_45696[iVar0 /*32*/].f_3 = iParam5;
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
			{
				Global_45696[iVar0 /*32*/].f_12 = 1;
				StringCopy(&(Global_45696[iVar0 /*32*/].f_13), sParam4, 64);
				Global_45696[iVar0 /*32*/].f_30 = iParam6;
			}
			else
			{
				Global_45696[iVar0 /*32*/].f_12 = 0;
				Global_45696[iVar0 /*32*/].f_30 = 0;
			}
			*uParam0 = Global_45696[iVar0 /*32*/].f_1;
			return;
		}
		iVar0++;
	}
}

bool func_131(var uParam0)
{
	Stack.Push(!func_39(&(uParam0->f_281), 5));
	Stack.Push(uParam0[uParam0->f_281.f_2 /*14*/]);
	Stack.Push(uParam0->f_281.f_2);
	Call_Loc(uParam0->f_281.f_14);
	return (StackVal || StackVal);
}

int func_132(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0));
			if (iVar1 != PLAYER::PLAYER_ID() && func_114(iVar1, 1, 1))
			{
				if (func_136(PLAYER::GET_PLAYER_PED(iVar1), uParam0[uParam0->f_281.f_2 /*14*/]) || func_133(iVar1) == uParam0->f_281.f_2)
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_133(int iParam0)
{
	if (iParam0 != func_28())
	{
		return Global_1845298[iParam0 /*881*/].f_875;
	}
	return -1;
}

bool func_134(var uParam0)
{
	if (((BitTest(Global_1971473, 6) || BitTest(Global_1971473, 7)) || BitTest(Global_1971473, 8)) || BitTest(Global_1971473, 9))
	{
		return 1;
	}
	return uParam0->f_281 & 31 > 0;
}

int func_135(int iParam0, struct<3> Param1)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (func_108(ENTITY::GET_ENTITY_HEADING(iParam0), (Param1.f_2 - 180f), 90f))
		{
			return 1;
		}
	}
	return 0;
}

bool func_136(int iParam0, var uParam1)
{
	return ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, uParam1->f_1, uParam1->f_1.f_3, uParam1->f_1.f_6, false, true, 0);
}

int func_137(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (func_136(PLAYER::PLAYER_PED_ID(), uParam0[uParam0->f_281.f_2 /*14*/]) && func_135(PLAYER::PLAYER_PED_ID(), (uParam0[uParam0->f_281.f_2 /*14*/])->f_8.f_3))
		{
			return 1;
		}
		else
		{
			uParam0->f_281.f_2 = (uParam0->f_281.f_2 + 1 % 20);
		}
		iVar0++;
	}
	return 0;
}

void func_138(var uParam0, int iParam1)
{
	uParam0->f_281.f_5 = iParam1;
}

void func_139(var uParam0)
{
	int iVar0;
	
	if (BitTest(Global_1971473, 7))
	{
		func_145(1);
	}
	switch (uParam0->f_281.f_5)
	{
		case 5:
		case 9:
			func_145(1);
		
		case 7:
			CAM::INVALIDATE_IDLE_CAM();
			HUD::HUD_FORCE_WEAPON_WHEEL(false);
			HUD::DISPLAY_AMMO_THIS_FRAME(false);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(19);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(2);
			HUD::HUD_SUPPRESS_WEAPON_WHEEL_RESULTS_THIS_FRAME();
			if (!func_144())
			{
				func_143();
			}
			if (WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar0, true) && iVar0 != joaat("weapon_unarmed"))
			{
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), true);
			}
			PAD::DISABLE_CONTROL_ACTION(0, 37, true);
			func_141(1);
			func_140();
			break;
	}
}

void func_140()
{
	Global_24430.f_6 = 1;
}

void func_141(bool bParam0)
{
	if (bParam0)
	{
		if (func_142())
		{
			Global_2685152.f_44 = 1;
		}
	}
	else
	{
		Global_2685152.f_44 = 0;
	}
}

bool func_142()
{
	return BitTest(Global_2685152.f_2, 11);
}

void func_143()
{
	MISC::SET_BIT(&Global_9503, 4);
}

bool func_144()
{
	return BitTest(Global_1964670, 19);
}

void func_145(int iParam0)
{
	if (func_144())
	{
		return;
	}
	if (!Global_21649.f_1 == 1)
	{
		if (func_150(0))
		{
			func_146(iParam0);
		}
		MISC::SET_BIT(&Global_9503, 2);
	}
}

void func_146(int iParam0)
{
	if (func_144())
	{
		return;
	}
	if (Global_21882)
	{
		if (func_149())
		{
			func_148(1, 1);
		}
		else
		{
			func_148(0, 0);
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
	if (!func_147())
	{
		Global_21649.f_1 = 3;
	}
}

int func_147()
{
	if (Global_21649.f_1 == 1 || Global_21649.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_148(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_150(0))
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

bool func_149()
{
	return BitTest(Global_1964670, 5);
}

int func_150(int iParam0)
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

void func_151(var uParam0)
{
	if (uParam0->f_281.f_5 == 7)
	{
	}
	else if (uParam0->f_281.f_5 > 5)
	{
		CAM::SET_GAMEPLAY_CAM_IGNORE_ENTITY_COLLISION_THIS_UPDATE(PLAYER::PLAYER_PED_ID());
		PED::SET_PED_CAPSULE(PLAYER::PLAYER_PED_ID(), func_152());
		uParam0->f_281.f_8 = MISC::GET_FRAME_COUNT();
	}
	else if ((MISC::GET_FRAME_COUNT() - uParam0->f_281.f_8) < 5)
	{
		PED::SET_PED_CAPSULE(PLAYER::PLAYER_PED_ID(), func_152());
	}
}

float func_152()
{
	return 0.13f;
}

void func_153(var uParam0)
{
	func_154(&(uParam0->f_281), 4, func_155());
	func_154(&(uParam0->f_281), 1, ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false));
	func_154(&(uParam0->f_281), 3, PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true));
	func_154(&(uParam0->f_281), 0, func_150(0));
	func_154(&(uParam0->f_281), 2, TASK::IS_PED_RUNNING(PLAYER::PLAYER_PED_ID()));
}

void func_154(int* iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam1;
	if (bParam2)
	{
		MISC::SET_BIT(iParam0, iVar0);
	}
	else
	{
		MISC::CLEAR_BIT(iParam0, bVar0);
	}
}

bool func_155()
{
	return Global_77397;
}

int func_156()
{
	if ((((!func_165() && !func_55()) && !BitTest(Global_1971473, 7)) && !BitTest(Global_1971473, 3)) && !func_27(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	if (BitTest(Global_1971473, 11) && CAM::IS_SCREEN_FADED_OUT())
	{
		return 1;
	}
	if (func_157())
	{
		return 1;
	}
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(MISC::GET_HASH_KEY("AM_MP_ARENA_BOX")) <= 0)
	{
		return 1;
	}
	if (!Global_2709089)
	{
		return 1;
	}
	return 0;
}

int func_157()
{
	if (Global_1575066 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 1;
		}
	}
	if (func_164())
	{
		return 1;
	}
	if (Global_2699678)
	{
		return 1;
	}
	if (func_163())
	{
		return 1;
	}
	if (func_162(159))
	{
		if (!func_161())
		{
			return 1;
		}
	}
	if (func_162(157))
	{
		return 1;
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return 1;
	}
	if (func_158() != 0)
	{
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(func_158()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_158()
{
	switch (func_160())
	{
		case 0:
			return func_159();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_159()
{
	switch (Global_2699787)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_160()
{
	return Global_33815;
}

bool func_161()
{
	return Global_2685152.f_726;
}

int func_162(int iParam0)
{
	if (SCRIPT::GET_EVENT_EXISTS(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_163()
{
	return Global_2697072;
}

bool func_164()
{
	return Global_2685152.f_721;
}

int func_165()
{
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 2797.988f, -3943.898f, 181.0005f, 2797.949f, -3919.85f, 187.4114f, 30f, false, true, 0))
	{
		return 1;
	}
	return 0;
}

int func_166()
{
	int iVar0;
	
	if (NETWORK::NETWORK_IS_SCRIPT_ACTIVE("arena_box_bench_seats", -1, true, 0))
	{
		return 0;
	}
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(32, false, -1);
	func_174(0, -1, 0);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_429, 25, 0);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_454, 65, 0);
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	func_173();
	func_167();
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		if (!Local_429.f_0)
		{
			iVar0 = 0;
			while (iVar0 < 10)
			{
				Local_429.f_2[iVar0] = -1;
				iVar0++;
			}
			Local_429.f_0 = 1;
		}
	}
	return 1;
}

void func_167()
{
	func_168(0, &Local_129, 0, 2);
	func_168(1, &Local_129, 1, 2);
	func_168(2, &Local_129, 2, 2);
	func_168(3, &Local_129, 3, 2);
	func_168(4, &Local_129, 4, 2);
	func_168(5, &Local_129, 5, 2);
	func_168(6, &Local_129, 6, 2);
	func_168(7, &Local_129, 7, 2);
	func_168(8, &Local_129, 8, 2);
	func_168(9, &Local_129, 9, 2);
	func_168(10, &Local_129, 10, 1);
	func_168(11, &Local_129, 11, 1);
	func_168(12, &Local_129, 12, 1);
	func_168(13, &Local_129, 13, 1);
	func_168(14, &Local_129, 14, 1);
	func_168(15, &Local_129, 15, 1);
	func_168(16, &Local_129, 16, 1);
	func_168(17, &Local_129, 17, 1);
	func_168(18, &Local_129, 18, 1);
	func_168(19, &Local_129, 19, 1);
}

void func_168(int iParam0, var uParam1, int iParam2, int iParam3)
{
	struct<3> Var0;
	float fVar3;
	
	func_172(iParam0, &Var0, &fVar3);
	(*uParam1)[iParam2 /*14*/] = iParam3;
	(uParam1[iParam2 /*14*/])->f_8 = { Var0 };
	(uParam1[iParam2 /*14*/])->f_8.f_3 = { 0f, 0f, fVar3 };
	(uParam1[iParam2 /*14*/])->f_1 = { func_170(func_171(), (fVar3 - 180f)) + Var0 };
	(uParam1[iParam2 /*14*/])->f_1.f_3 = { func_170(func_169(), (fVar3 - 180f)) + Var0 };
	(uParam1[iParam2 /*14*/])->f_1.f_6 = 1.25f;
}

Vector3 func_169()
{
	return 0.5f, -0.5f, 2f;
}

Vector3 func_170(struct<3> Param0, float fParam3)
{
	struct<3> Var0;
	float fVar3;
	float fVar4;
	
	fVar3 = SYSTEM::SIN(fParam3);
	fVar4 = SYSTEM::COS(fParam3);
	Var0.f_0 = ((Param0.f_0 * fVar4) - (Param0.f_1 * fVar3));
	Var0.f_1 = ((Param0.f_0 * fVar3) + (Param0.f_1 * fVar4));
	Var0.f_2 = Param0.f_2;
	return Var0;
}

Vector3 func_171()
{
	return -0.5f, -0.5f, 0f;
}

void func_172(int iParam0, var uParam1, var uParam2)
{
	if (func_49())
	{
		switch (iParam0)
		{
			case 0:
				*uParam1 = { 2799.885f, -3923.084f, 181.5353f };
				*uParam2 = 0f;
				break;
			
			case 1:
				*uParam1 = { 2798.857f, -3923.084f, 181.5353f };
				*uParam2 = 0f;
				break;
			
			case 2:
				*uParam1 = { 2797.821f, -3923.084f, 181.5353f };
				*uParam2 = 0f;
				break;
			
			case 3:
				*uParam1 = { 2796.794f, -3923.084f, 181.5353f };
				*uParam2 = 0f;
				break;
			
			case 4:
				*uParam1 = { 2795.764f, -3923.084f, 181.5353f };
				*uParam2 = 0f;
				break;
			
			case 5:
				*uParam1 = { 2794.729f, -3923.084f, 181.5353f };
				*uParam2 = 0f;
				break;
			
			case 6:
				*uParam1 = { 2793.706f, -3923.084f, 181.5353f };
				*uParam2 = 0f;
				break;
			
			case 7:
				*uParam1 = { 2792.677f, -3923.084f, 181.5353f };
				*uParam2 = 0f;
				break;
			
			case 8:
				*uParam1 = { 2791.638f, -3923.084f, 181.5353f };
				*uParam2 = 0f;
				break;
			
			case 9:
				*uParam1 = { 2790.611f, -3923.084f, 181.5353f };
				*uParam2 = 0f;
				break;
			
			case 10:
				*uParam1 = { 2799.913f, -3924.579f, 182.4198f };
				*uParam2 = 0f;
				break;
			
			case 11:
				*uParam1 = { 2798.89f, -3924.579f, 182.4198f };
				*uParam2 = 0f;
				break;
			
			case 12:
				*uParam1 = { 2797.817f, -3924.579f, 182.4198f };
				*uParam2 = 0f;
				break;
			
			case 13:
				*uParam1 = { 2796.821f, -3924.579f, 182.4198f };
				*uParam2 = 0f;
				break;
			
			case 14:
				*uParam1 = { 2795.784f, -3924.579f, 182.4198f };
				*uParam2 = 0f;
				break;
			
			case 15:
				*uParam1 = { 2794.75f, -3924.579f, 182.4198f };
				*uParam2 = 0f;
				break;
			
			case 16:
				*uParam1 = { 2793.711f, -3924.579f, 182.4198f };
				*uParam2 = 0f;
				break;
			
			case 17:
				*uParam1 = { 2792.696f, -3924.579f, 182.4198f };
				*uParam2 = 0f;
				break;
			
			case 18:
				*uParam1 = { 2791.635f, -3924.579f, 182.4198f };
				*uParam2 = 0f;
				break;
			
			case 19:
				*uParam1 = { 2790.644f, -3924.579f, 182.4198f };
				*uParam2 = 0f;
				break;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				*uParam1 = { 2799.864f, -3923.084f, 181.5353f };
				*uParam2 = 0f;
				break;
			
			case 1:
				*uParam1 = { 2798.837f, -3923.084f, 181.5353f };
				*uParam2 = 0f;
				break;
			
			case 2:
				*uParam1 = { 2797.8f, -3923.084f, 181.5353f };
				*uParam2 = 0f;
				break;
			
			case 3:
				*uParam1 = { 2796.774f, -3923.084f, 181.5353f };
				*uParam2 = 0f;
				break;
			
			case 4:
				*uParam1 = { 2795.744f, -3923.084f, 181.5353f };
				*uParam2 = 0f;
				break;
			
			case 5:
				*uParam1 = { 2794.708f, -3923.084f, 181.5353f };
				*uParam2 = 0f;
				break;
			
			case 6:
				*uParam1 = { 2793.685f, -3923.084f, 181.5353f };
				*uParam2 = 0f;
				break;
			
			case 7:
				*uParam1 = { 2792.657f, -3923.084f, 181.5353f };
				*uParam2 = 0f;
				break;
			
			case 8:
				*uParam1 = { 2791.618f, -3923.084f, 181.5353f };
				*uParam2 = 0f;
				break;
			
			case 9:
				*uParam1 = { 2790.59f, -3923.084f, 181.5353f };
				*uParam2 = 0f;
				break;
			
			case 10:
				*uParam1 = { 2799.913f, -3924.579f, 182.4198f };
				*uParam2 = 0f;
				break;
			
			case 11:
				*uParam1 = { 2798.89f, -3924.579f, 182.4198f };
				*uParam2 = 0f;
				break;
			
			case 12:
				*uParam1 = { 2797.817f, -3924.579f, 182.4198f };
				*uParam2 = 0f;
				break;
			
			case 13:
				*uParam1 = { 2796.821f, -3924.579f, 182.4198f };
				*uParam2 = 0f;
				break;
			
			case 14:
				*uParam1 = { 2795.784f, -3924.579f, 182.4198f };
				*uParam2 = 0f;
				break;
			
			case 15:
				*uParam1 = { 2794.75f, -3924.579f, 182.4198f };
				*uParam2 = 0f;
				break;
			
			case 16:
				*uParam1 = { 2793.711f, -3924.579f, 182.4198f };
				*uParam2 = 0f;
				break;
			
			case 17:
				*uParam1 = { 2792.696f, -3924.579f, 182.4198f };
				*uParam2 = 0f;
				break;
			
			case 18:
				*uParam1 = { 2791.635f, -3924.579f, 182.4198f };
				*uParam2 = 0f;
				break;
			
			case 19:
				*uParam1 = { 2790.644f, -3924.579f, 182.4198f };
				*uParam2 = 0f;
				break;
			}
	}
}

void func_173()
{
}

int func_174(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_2();
			}
			else
			{
				return 0;
			}
		}
		if (!func_6(0))
		{
			if (iParam0 == 0)
			{
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (!bParam2)
					{
						func_2();
					}
					else
					{
						return 0;
					}
				}
				if (func_164())
				{
					if (!bParam2)
					{
						func_2();
					}
					else
					{
						return 0;
					}
				}
				if (func_162(157))
				{
					if (!bParam2)
					{
						func_2();
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
					func_2();
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
				func_2();
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
			func_2();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

