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
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
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
	func_4(21);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(18))
	{
		if (PLAYER::GET_CAUSE_OF_MOST_RECENT_FORCE_CLEANUP() == 16)
		{
			func_3(21);
		}
		func_2();
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("docks_setup")) == 0)
		{
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					iLocal_45 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
				}
				else
				{
					iLocal_45 = 0;
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_45))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_45, false))
				{
					if (VEHICLE::IS_VEHICLE_MODEL(iLocal_45, joaat("handler")))
					{
						PAD::SET_INPUT_EXCLUSIVE(0, 51);
						if (!VEHICLE::IS_ANY_ENTITY_ATTACHED_TO_HANDLER_FRAME(iLocal_45))
						{
							if (iLocal_49 == 0)
							{
								if (!ENTITY::DOES_ENTITY_EXIST(iLocal_46) || (ENTITY::DOES_ENTITY_EXIST(iLocal_46) && OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(ENTITY::GET_ENTITY_COORDS(iLocal_45, true), 15f, joaat("prop_contr_03b_ld"), true, false, true) != iLocal_46))
								{
									iLocal_46 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(ENTITY::GET_ENTITY_COORDS(iLocal_45, true), 15f, joaat("prop_contr_03b_ld"), true, false, true);
								}
								if (ENTITY::DOES_ENTITY_EXIST(iLocal_46))
								{
									if (func_1(&iLocal_47, 1000))
									{
										if (VEHICLE::IS_HANDLER_FRAME_LINED_UP_WITH_CONTAINER(iLocal_45, iLocal_46))
										{
											if (PAD::IS_CONTROL_JUST_PRESSED(0, 51))
											{
												VEHICLE::ATTACH_CONTAINER_TO_HANDLER_FRAME_WHEN_LINED_UP(iLocal_45, iLocal_46);
												iLocal_48 = 1;
												iLocal_49 = 1;
											}
										}
									}
								}
							}
						}
						else
						{
							if (iLocal_48 == 1)
							{
								iLocal_47 = MISC::GET_GAME_TIMER();
								iLocal_48 = 0;
								iLocal_49 = 0;
							}
							if (PAD::IS_CONTROL_JUST_PRESSED(0, 51))
							{
							}
						}
					}
				}
			}
		}
	}
}

int func_1(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = MISC::GET_GAME_TIMER();
	if ((iVar0 - *uParam0) > iParam1)
	{
		return 1;
	}
	return 0;
}

void func_2()
{
	SCRIPT::TERMINATE_THIS_THREAD();
}

int func_3(int iParam0)
{
	int iVar0;
	bool bVar1;
	
	if (iParam0 <= 31)
	{
		iVar0 = 9;
		bVar1 = iParam0;
	}
	else
	{
		iVar0 = 10;
		bVar1 = (iParam0 - 32);
	}
	if (BitTest(Global_114963.f_9094.f_99.f_219[iVar0], bVar1))
	{
		MISC::CLEAR_BIT(&(Global_114963.f_9094.f_99.f_219[iVar0]), bVar1);
		return 1;
	}
	return 0;
}

int func_4(int iParam0)
{
	int iVar0;
	bool bVar1;
	
	if (iParam0 <= 31)
	{
		iVar0 = 9;
		bVar1 = iParam0;
	}
	else
	{
		iVar0 = 10;
		bVar1 = (iParam0 - 32);
	}
	if (BitTest(Global_114963.f_9094.f_99.f_219[iVar0], bVar1))
	{
		return 0;
	}
	MISC::SET_BIT(&(Global_114963.f_9094.f_99.f_219[iVar0]), bVar1);
	return 1;
}

