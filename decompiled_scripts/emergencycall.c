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
	char* sLocal_37 = NULL;
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
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	struct<3> Local_62 = { 0, 0, 0 } ;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
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
	sLocal_37 = "NULL";
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
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(11))
	{
		iLocal_60 = 5;
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			switch (iLocal_60)
			{
				case 0:
					func_10();
					break;
				
				case 1:
					break;
				
				case 2:
					func_9();
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
					{
						if (MISC::CREATE_INCIDENT_WITH_ENTITY(7, PLAYER::PLAYER_PED_ID(), 2, 3f, &iLocal_66, 0, 0))
						{
							iLocal_65 = MISC::GET_GAME_TIMER();
							iLocal_60 = 5;
						}
					}
					else if (MISC::CREATE_INCIDENT(7, Local_62, 2, 3f, &iLocal_66, 0, 0))
					{
						iLocal_65 = MISC::GET_GAME_TIMER();
						iLocal_60 = 5;
					}
					break;
				
				case 3:
					func_9();
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
					{
						if ((func_8(PLAYER::PLAYER_ID(), 0) && func_4(PLAYER::PLAYER_ID()) == 5) && Global_1969957)
						{
							if (Global_1969958 == 0)
							{
								Global_1969958 = 1;
							}
							iLocal_60 = 5;
						}
						else if (MISC::CREATE_INCIDENT_WITH_ENTITY(5, PLAYER::PLAYER_PED_ID(), 2, 3f, &iLocal_66, 0, 0))
						{
							iLocal_65 = MISC::GET_GAME_TIMER();
							iLocal_60 = 5;
						}
					}
					else if (MISC::CREATE_INCIDENT(5, Local_62, 2, 3f, &iLocal_66, 0, 0))
					{
						iLocal_65 = MISC::GET_GAME_TIMER();
						iLocal_60 = 5;
					}
					break;
				
				case 4:
					func_9();
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
					{
						if (MISC::CREATE_INCIDENT_WITH_ENTITY(3, PLAYER::PLAYER_PED_ID(), 4, 3f, &iLocal_66, 0, 0))
						{
							iLocal_65 = MISC::GET_GAME_TIMER();
							iLocal_60 = 5;
						}
					}
					else if (MISC::CREATE_INCIDENT(3, Local_62, 4, 3f, &iLocal_66, 0, 0))
					{
						if (Global_98958.f_358 == MISC::GET_HASH_KEY("AGENCY_PREP_1") || (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(MISC::GET_HASH_KEY("agency_prep1")) > 0 && func_3(0)))
						{
							Global_98958.f_358 = MISC::GET_HASH_KEY("AHP1_TRUCKCALLED");
						}
						else if (func_2(67) && !func_2(68))
						{
							Global_98888 = 1;
						}
						iLocal_65 = MISC::GET_GAME_TIMER();
						iLocal_60 = 5;
					}
					break;
				
				case 5:
					if (MISC::GET_GAME_TIMER() > (iLocal_65 + 60000) || !MISC::IS_INCIDENT_VALID(iLocal_66))
					{
						func_1();
					}
					else if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
					{
						if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
						{
							if (MISC::IS_INCIDENT_VALID(iLocal_66))
							{
								MISC::DELETE_INCIDENT(iLocal_66);
							}
						}
					}
					break;
				}
		}
	}
}

void func_1()
{
	iLocal_60 = 0;
	iLocal_61 = 0;
	SCRIPT::TERMINATE_THIS_THREAD();
}

int func_2(int iParam0)
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_114963.f_9094.f_330[iParam0 /*6*/];
}

int func_3(bool bParam0)
{
	if (!bParam0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return BitTest(Global_80586, 0);
}

int func_4(int iParam0)
{
	if (func_6(iParam0) == 233)
	{
		return func_5(iParam0);
	}
	return -1;
}

int func_5(int iParam0)
{
	if (func_8(iParam0, 0))
	{
		return Global_1892925[iParam0 /*615*/].f_10.f_183;
	}
	return -1;
}

int func_6(int iParam0)
{
	if (func_7(iParam0))
	{
		if (func_8(iParam0, 0))
		{
			return Global_1892925[iParam0 /*615*/].f_10.f_34;
		}
	}
	return -1;
}

int func_7(var uParam0)
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

int func_8(int iParam0, int iParam1)
{
	if (func_7(iParam0))
	{
		if (Global_1892925[iParam0 /*615*/].f_10.f_34 != -1 || (iParam1 && Global_1892925[iParam0 /*615*/].f_10.f_33 != -1))
		{
			return 1;
		}
	}
	return 0;
}

void func_9()
{
	if (MISC::GET_GAME_TIMER() > iLocal_65 + 30000)
	{
		iLocal_60 = 5;
	}
}

void func_10()
{
	var uVar0;
	
	switch (iLocal_61)
	{
		case 0:
			iLocal_61 = 1;
			iLocal_65 = MISC::GET_GAME_TIMER();
			break;
		
		case 1:
			while (!func_20())
			{
				SYSTEM::WAIT(0);
				if (func_19() == 3)
				{
					iLocal_60 = 3;
				}
				if (func_19() == 4)
				{
					iLocal_60 = 4;
				}
				if (func_19() == 5)
				{
					iLocal_60 = 2;
				}
				if (MISC::GET_GAME_TIMER() > iLocal_65 + 30000)
				{
					iLocal_65 = MISC::GET_GAME_TIMER();
					func_13(0);
				}
			}
			if (iLocal_60 == 0)
			{
				iLocal_60 = 5;
			}
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				func_11(PLAYER::PLAYER_PED_ID(), &Local_62, &uVar0);
			}
			iLocal_65 = MISC::GET_GAME_TIMER();
			break;
	}
}

void func_11(int iParam0, var* uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar7;
	struct<3> Var10;
	float fVar13;
	float fVar14;
	float fVar15;
	float fVar16;
	float fVar17;
	float fVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	var uVar22;
	struct<3> Var25;
	var uVar28;
	
	fVar18 = 5f;
	iVar0 = 1;
	iVar19 = 0;
	while (iVar19 < 2)
	{
		switch (iVar19)
		{
			case 0:
				PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_WITH_HEADING(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), iVar0, uParam1, &fVar16, &iVar1, 5, 3f, 0f);
				PATHFIND::GET_CLOSEST_ROAD(*uParam1, 1f, 1, &uVar4, &uVar7, &uVar2, &uVar3, &fVar13, false);
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), -3044.66f, 596.43f, 6.58f, true) < 25f)
				{
					*uParam1 = { -3031.38f, 605.32f, 6.86f };
				}
				Var10 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) - ENTITY::GET_ENTITY_COORDS(iParam0, true) };
				fVar14 = MISC::GET_HEADING_FROM_VECTOR_2D(Var10.f_0, Var10.f_1);
				fVar15 = (fVar16 + 180f);
				if (fVar15 > 360f)
				{
					fVar15 = (fVar15 - 360f);
				}
				if (func_12(fVar14, fVar16, 90f))
				{
					*uParam2 = fVar16;
				}
				else
				{
					*uParam2 = fVar15;
				}
				if (fVar13 < 0f)
				{
					fVar17 = 0f;
				}
				else if (PATHFIND::GET_VEHICLE_NODE_IS_SWITCHED_OFF(PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_ID(*uParam1, 1, 1, 3f, 0f)))
				{
					fVar17 = 0f;
				}
				else
				{
					fVar17 = (fVar18 * SYSTEM::TO_FLOAT((iVar1 / 2)));
					if (fVar17 == 0f)
					{
						fVar17 = (fVar17 + fVar18);
					}
					if (iVar1 == 5)
					{
						fVar17 = (fVar17 + fVar18);
					}
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), 294f, -895f, 28f, true) < 25f || MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), -713.01f, -819.64f, 22.63f, true) < 25f)
					{
						fVar17 = (fVar17 + 5f);
					}
					else
					{
						fVar17 = (fVar17 + 3.75f);
					}
					fVar17 = (fVar17 + (fVar13 / 2f));
				}
				if (SYSTEM::VDIST(OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(*uParam1, *uParam2, fVar17, 0f, 0f), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) > SYSTEM::VDIST(OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(*uParam1, *uParam2, -fVar17, 0f, 0f), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)))
				{
					fVar17 = -fVar17;
				}
				*uParam1 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(*uParam1, *uParam2, fVar17, 0f, 0f) };
				iVar20 = SHAPETEST::START_SHAPE_TEST_CAPSULE(*uParam1 + FtoV((uParam1->f_2 + 4.5f)), *uParam1 + Vector(4.5f, 0.5f, 0.5f), 2.5f, 1, 0, 4);
				iVar19++;
				break;
			
			case 1:
				if (iVar0 <= 2)
				{
					if (SHAPETEST::GET_SHAPE_TEST_RESULT(iVar20, &iVar21, &Var25, &uVar22, &uVar28) == 2)
					{
						if (iVar21 != 0)
						{
							if (Var25.f_2 > (uParam1->f_2 + 8.5f))
							{
								iVar19++;
							}
							else
							{
								iVar0++;
								iVar19 = 0;
							}
						}
						else
						{
							iVar19++;
						}
					}
				}
				else
				{
					iVar19++;
				}
				break;
			
			case 2:
				break;
		}
	}
}

int func_12(float fParam0, float fParam1, float fParam2)
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

void func_13(int iParam0)
{
	if (func_18())
	{
		return;
	}
	if (Global_21882)
	{
		if (func_17())
		{
			func_15(1, 1);
		}
		else
		{
			func_15(0, 0);
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
	if (!func_14())
	{
		Global_21649.f_1 = 3;
	}
}

int func_14()
{
	if (Global_21649.f_1 == 1 || Global_21649.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_15(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_16(0))
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

int func_16(int iParam0)
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

bool func_17()
{
	return BitTest(Global_1964670, 5);
}

bool func_18()
{
	return BitTest(Global_1964670, 19);
}

int func_19()
{
	return Global_24040;
}

int func_20()
{
	if (Global_23023 == 0)
	{
		return 1;
	}
	return 0;
}

