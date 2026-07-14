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
	struct<11> Local_79 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_90 = 0;
	struct<3> Local_91[32];
	var uLocal_188 = 0;
	int iLocal_189 = 0;
	int iLocal_190 = 0;
	int iLocal_191 = 0;
	int iLocal_192 = 0;
	int iLocal_193 = 0;
	int iLocal_194 = 0;
	int iLocal_195 = 0;
	int iLocal_196 = 0;
	struct<21> ScriptParam_0 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
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
	iLocal_193 = 20;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && func_74(PLAYER::PLAYER_ID(), 0, 1))
	{
		func_66(ScriptParam_0);
	}
	else
	{
		func_62();
	}
	while (true)
	{
		func_61();
		if (func_53() || func_49(9))
		{
			func_62();
		}
		if (NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION())
		{
			func_62();
		}
		switch (func_48(NETWORK::PARTICIPANT_ID_TO_INT()))
		{
			case 0:
				if (func_47() == 1)
				{
					func_46();
					Local_91[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/] = 1;
				}
				else if (func_47() == 4)
				{
					Local_91[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/] = 3;
				}
				break;
			
			case 1:
				if (func_47() == 1)
				{
					func_44();
				}
				else if (func_47() == 4)
				{
					Local_91[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/] = 3;
				}
				break;
			
			case 3:
				func_42(&(Local_79.f_10));
				if (func_41(&(Local_79.f_10)))
				{
					Local_91[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/] = 4;
				}
				break;
			
			case 2:
				Local_91[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/] = 4;
			
			case 4:
				func_62();
				break;
		}
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			switch (func_47())
			{
				case 0:
					if (func_40())
					{
						if (func_8())
						{
							Local_79.f_0 = 1;
						}
					}
					break;
				
				case 1:
					func_7();
					func_6();
					if (func_1())
					{
						Local_79.f_0 = 4;
					}
					break;
				
				case 4:
					break;
				}
		}
	}
}

int func_1()
{
	if (func_2())
	{
		return 1;
	}
	return 0;
}

int func_2()
{
	if (Local_79.f_9 == 0)
	{
		if (!func_4(Local_79.f_2))
		{
			return 1;
		}
		else if (func_3(Local_79.f_3))
		{
			return 1;
		}
		else
		{
			if (iLocal_196 == 1)
			{
				if (BitTest(Local_79.f_1, 0))
				{
					return 1;
				}
			}
			if (!PED::IS_PED_IN_VEHICLE(NETWORK::NET_TO_PED(Local_79.f_3), NETWORK::NET_TO_VEH(Local_79.f_2), false))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_3(int iParam0)
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iParam0))
	{
		return PED::IS_PED_INJURED(NETWORK::NET_TO_PED(iParam0));
	}
	return 1;
}

int func_4(int iParam0)
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iParam0))
	{
		return !func_5(NETWORK::NET_TO_VEH(iParam0));
	}
	return 0;
}

int func_5(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (ENTITY::IS_ENTITY_DEAD(iParam0, false))
		{
			return 1;
		}
		else if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
		{
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_6()
{
	switch (Local_79.f_9)
	{
		case 0:
			break;
		
		case 1:
			break;
	}
}

void func_7()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iLocal_195 == 0)
	{
		iLocal_196 = 0;
		MISC::SET_BIT(&(Local_79.f_1), false);
	}
	if (func_4(Local_79.f_2))
	{
		iVar0 = 1;
	}
	if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_195)))
	{
		iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_195));
		iVar2 = PLAYER::GET_PLAYER_PED(iVar1);
		if (func_74(iVar1, 1, 1))
		{
			if (BitTest(Local_79.f_1, 0))
			{
				if (iVar0 == 1)
				{
					if (ENTITY::IS_ENTITY_AT_ENTITY(iVar2, NETWORK::NET_TO_VEH(Local_79.f_2), 250f, 250f, 250f, false, true, 0))
					{
						MISC::CLEAR_BIT(&(Local_79.f_1), false);
					}
				}
				else
				{
					MISC::CLEAR_BIT(&(Local_79.f_1), false);
				}
			}
		}
	}
	iLocal_195++;
	if (iLocal_195 == NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		iLocal_195 = 0;
		iLocal_196 = 1;
	}
}

int func_8()
{
	if (NETWORK::CAN_REGISTER_MISSION_ENTITIES(1, 1, 0, 0))
	{
		if (func_39(Local_79.f_4) && func_39(Local_79.f_5))
		{
			if (func_12() && func_9())
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_9()
{
	int iVar0;
	
	if ((!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_79.f_3) && func_39(Local_79.f_5)) && NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_79.f_2))
	{
		if (func_4(Local_79.f_2))
		{
			if (func_11(&(Local_79.f_3), Local_79.f_2, 22, Local_79.f_5, -1, 1, 1, 1))
			{
				PED::SET_PED_RANDOM_COMPONENT_VARIATION(NETWORK::NET_TO_PED(Local_79.f_3), 0);
				if (func_10())
				{
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(NETWORK::NET_TO_PED(Local_79.f_3), Global_1837389);
				}
				else
				{
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(NETWORK::NET_TO_PED(Local_79.f_3), Global_1837392);
				}
				PED::SET_PED_KEEP_TASK(NETWORK::NET_TO_PED(Local_79.f_3), true);
				if (func_10())
				{
					iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 10);
					if (iVar0 < 5)
					{
						WEAPON::GIVE_DELAYED_WEAPON_TO_PED(NETWORK::NET_TO_PED(Local_79.f_3), joaat("weapon_pistol"), 25000, func_10());
					}
					else if (iVar0 > 6)
					{
						WEAPON::GIVE_DELAYED_WEAPON_TO_PED(NETWORK::NET_TO_PED(Local_79.f_3), joaat("weapon_microsmg"), 25000, func_10());
					}
					else
					{
						WEAPON::GIVE_DELAYED_WEAPON_TO_PED(NETWORK::NET_TO_PED(Local_79.f_3), joaat("weapon_pumpshotgun"), 25000, func_10());
					}
				}
				iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 10);
				if (iVar0 == 0 || iVar0 == 1)
				{
					PED::SET_PED_COMBAT_ABILITY(NETWORK::NET_TO_PED(Local_79.f_3), 0);
				}
				else if ((iVar0 == 2 || iVar0 == 3) || iVar0 == 4)
				{
					PED::SET_PED_COMBAT_ABILITY(NETWORK::NET_TO_PED(Local_79.f_3), 2);
				}
				else
				{
					PED::SET_PED_COMBAT_ABILITY(NETWORK::NET_TO_PED(Local_79.f_3), 1);
				}
				iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
				if (iVar0 == 0)
				{
					PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_79.f_3), 5, true);
				}
				else if (iVar0 == 1)
				{
					PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_79.f_3), 17, true);
				}
				else if (iVar0 == 2)
				{
					PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_79.f_3), 13, true);
				}
				if (func_10())
				{
					PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_79.f_3), 20, true);
				}
				if (func_10())
				{
					PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_79.f_3), 2, true);
				}
				iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
				if (iVar0 == 0)
				{
					PED::SET_PED_COMBAT_MOVEMENT(NETWORK::NET_TO_PED(Local_79.f_3), 2);
				}
				else if (iVar0 == 1)
				{
					PED::SET_PED_COMBAT_MOVEMENT(NETWORK::NET_TO_PED(Local_79.f_3), 1);
				}
				else if (iVar0 == 2)
				{
					PED::SET_PED_COMBAT_MOVEMENT(NETWORK::NET_TO_PED(Local_79.f_3), 3);
				}
				PED::SET_PED_ALLOW_MINOR_REACTIONS_AS_MISSION_PED(NETWORK::NET_TO_PED(Local_79.f_3), true);
				PED::SET_PED_GET_OUT_UPSIDE_DOWN_VEHICLE(NETWORK::NET_TO_PED(Local_79.f_3), true);
				PED::SET_PED_CONFIG_FLAG(NETWORK::NET_TO_PED(Local_79.f_3), 29, true);
				PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(NETWORK::NET_TO_PED(Local_79.f_3), 3);
				ENTITY::SET_ENTITY_HEALTH(NETWORK::NET_TO_PED(Local_79.f_3), SYSTEM::ROUND((200f * Global_262145.f_156)), 0, 0);
				AUDIO::SET_VEHICLE_RADIO_LOUD(NETWORK::NET_TO_VEH(Local_79.f_2), true);
				VEHICLE::SET_DISABLE_PRETEND_OCCUPANTS(NETWORK::NET_TO_VEH(Local_79.f_2), true);
				func_46();
				TASK::TASK_PERFORM_SEQUENCE(NETWORK::NET_TO_PED(Local_79.f_3), iLocal_189);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_79.f_5);
			}
		}
	}
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_79.f_3))
	{
		return 0;
	}
	return 1;
}

int func_10()
{
	if (BitTest(MISC::GET_RANDOM_INT_IN_RANGE(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

int func_11(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7)
{
	if (!NETWORK::CAN_REGISTER_MISSION_PEDS(1))
	{
		return 0;
	}
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iParam1))
	{
		return 0;
	}
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(NETWORK::NET_TO_VEH(iParam1), false))
	{
		return 0;
	}
	*uParam0 = NETWORK::PED_TO_NET(PED::CREATE_PED_INSIDE_VEHICLE(NETWORK::NET_TO_VEH(iParam1), iParam2, iParam3, iParam4, bParam6, bParam5));
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
	{
		ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(NETWORK::NET_TO_PED(*uParam0), bParam7);
		if (NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(NETWORK::NET_TO_PED(*uParam0)))
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

int func_12()
{
	struct<3> Var0;
	float fVar3;
	
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_79.f_2))
	{
		if (func_39(Local_79.f_4))
		{
			if (func_16(&Var0, &fVar3))
			{
				if (func_13(&(Local_79.f_2), Local_79.f_4, Var0, fVar3, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0))
				{
					VEHICLE::SET_VEHICLE_ENGINE_ON(NETWORK::NET_TO_VEH(Local_79.f_2), true, true, false);
					VEHICLE::SET_VEHICLE_IS_WANTED(NETWORK::NET_TO_VEH(Local_79.f_2), true);
					VEHICLE::SET_VEHICLE_IS_STOLEN(NETWORK::NET_TO_VEH(Local_79.f_2), true);
					AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(NETWORK::NET_TO_VEH(Local_79.f_2), "JOYRIDER_GROUP", 0f);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_79.f_4);
				}
			}
		}
	}
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_79.f_2))
	{
		return 0;
	}
	return 1;
}

int func_13(var uParam0, int iParam1, struct<3> Param2, float fParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14, bool bParam15)
{
	float fVar0;
	int iVar1;
	
	if (!STREAMING::IS_MODEL_VALID(iParam1))
	{
		return 0;
	}
	if (!NETWORK::CAN_REGISTER_MISSION_VEHICLES(1))
	{
		return 0;
	}
	fVar0 = 1.5f;
	if (iParam1 == joaat("bombushka") || iParam1 == 858355070)
	{
		fVar0 = 20f;
	}
	if (bParam11)
	{
		MISC::CLEAR_AREA_OF_VEHICLES(Param2, fVar0, false, false, false, false, false, false, 0);
	}
	iVar1 = VEHICLE::CREATE_VEHICLE(iParam1, Param2, fParam5, bParam7, bParam6, bParam14);
	if (ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		*uParam0 = NETWORK::VEH_TO_NET(iVar1);
		Global_2733190.f_5620 = iVar1;
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
		{
			if (bParam15)
			{
				NETWORK::NETWORK_SET_ENTITY_ONLY_EXISTS_FOR_PARTICIPANTS(iVar1, true);
			}
			ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iVar1, bParam10);
			if (NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(iVar1))
			{
				if (bParam8)
				{
					NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, true);
				}
				else
				{
					NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, false);
				}
				if (bParam13)
				{
					NETWORK::SET_NETWORK_ID_ALWAYS_EXISTS_FOR_PLAYER(*uParam0, PLAYER::PLAYER_ID(), true);
				}
			}
			VEHICLE::SET_VEHICLE_IS_STOLEN(iVar1, bParam9);
			VEHICLE::SET_CLEAR_FREEZE_WAITING_ON_COLLISION_ONCE_PLAYER_ENTERS(iVar1, true);
			if (bParam12)
			{
				VEHICLE::SET_CAR_BOOT_OPEN(iVar1);
				VEHICLE::SET_VEHICLE_DOOR_CONTROL(iVar1, 5, 5, 1f);
			}
			func_14(Param2, fParam5, iParam1, iVar1);
			return 1;
		}
	}
	return 0;
}

void func_14(struct<3> Param0, float fParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	if (func_15(PLAYER::PLAYER_ID(), Param0, iParam4) > -1)
	{
		if ((Global_2635562.f_3233[1 /*6*/].f_5 == iParam5 && Global_2635562.f_3233[1 /*6*/].f_4 == iParam4) && SYSTEM::VDIST(Global_2635562.f_3233[1 /*6*/], Param0) < 0.5f)
		{
			return;
		}
		iVar0 = 0;
		while (iVar0 < 2)
		{
			if (iVar0 < 1)
			{
				Global_2635562.f_3233[iVar0 /*6*/] = { Global_2635562.f_3233[iVar0 + 1 /*6*/] };
			}
			iVar0++;
		}
		Global_2635562.f_3233[1 /*6*/] = { Param0 };
		Global_2635562.f_3233[1 /*6*/].f_3 = fParam3;
		Global_2635562.f_3233[1 /*6*/].f_4 = iParam4;
		Global_2635562.f_3233[1 /*6*/].f_5 = iParam5;
	}
}

int func_15(int iParam0, struct<3> Param1, int iParam4)
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	
	iVar0 = iParam0;
	if (iVar0 > -1)
	{
		iVar1 = 0;
		while (iVar1 < 2)
		{
			if (Global_2649161.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4 == iParam4)
			{
				Var2 = { Param1 };
				if (MISC::ABSF((Global_2649161.f_461[iVar0 /*11*/][iVar1 /*5*/].f_2 - Var2.f_2)) < 2f)
				{
					Var2.f_2 = Global_2649161.f_461[iVar0 /*11*/][iVar1 /*5*/].f_2;
				}
				if (SYSTEM::VDIST(Global_2649161.f_461[iVar0 /*11*/][iVar1 /*5*/], Var2) < 0.5f)
				{
					return iVar1;
				}
			}
			iVar1++;
		}
	}
	return -1;
}

bool func_16(int iParam0, float* fParam1)
{
	bool bVar0;
	int iVar1;
	var uVar2;
	
	if (!bVar0)
	{
		if (VEHICLE::GENERATE_VEHICLE_CREATION_POS_FROM_PATHS(&(Local_79.f_6), iParam0, &uVar2, 0f, 180f, 40f, 0, 1, 1))
		{
			PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_WITH_HEADING(*iParam0, 1, iParam0, fParam1, &iVar1, 4, 3f, 0f);
			if (iVar1 >= 1 || ZONE::GET_HASH_OF_MAP_AREA_AT_COORDS(*iParam0) == joaat("City"))
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(-1367.557f, -3220.598f, 12.9448f, Local_79.f_6, true) >= 600f && MISC::GET_DISTANCE_BETWEEN_COORDS(750f, -3200f, 6f, Local_79.f_6, true) >= 700f)
				{
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_38(PLAYER::PLAYER_ID()), *iParam0, true) <= (250f - 50f))
					{
						if (iLocal_194 <= 5)
						{
							if (func_17(*iParam0, 1086324736, 1065353216, 1065353216, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
							{
								bVar0 = true;
							}
						}
						else
						{
							Local_79.f_0 = 4;
						}
					}
				}
			}
		}
	}
	if (!bVar0)
	{
		iLocal_193 += 4;
		if (iLocal_193 >= 80)
		{
			iLocal_193 = 20;
			iLocal_194++;
		}
	}
	return bVar0;
}

int func_17(struct<3> Param0, float fParam3, float fParam4, float fParam5, float fParam6, int iParam7, bool bParam8, int iParam9, float fParam10, bool bParam11, int iParam12, bool bParam13, float fParam14, bool bParam15, float fParam16, bool bParam17, bool bParam18)
{
	Global_2635562.f_2 = 0;
	if (fParam3 > 0f)
	{
		if (VEHICLE::IS_ANY_VEHICLE_NEAR_POINT(Param0, fParam3))
		{
			return 0;
		}
	}
	if (fParam4 > 0f)
	{
		if (PED::IS_ANY_PED_NEAR_POINT(Param0.f_0, Param0.f_1, (Param0.f_2 + 1f), fParam4) || PED::IS_ANY_PED_NEAR_POINT(Param0, fParam4))
		{
			return 0;
		}
	}
	if (fParam5 > 0f)
	{
		if (OBJECT::IS_ANY_OBJECT_NEAR_POINT(Param0, fParam5, bParam18))
		{
			return 0;
		}
	}
	Global_2635562.f_2++;
	if (bParam13)
	{
		if (FIRE::GET_NUMBER_OF_FIRES_IN_RANGE(Param0, 2.5f) > 0)
		{
			return 0;
		}
	}
	Global_2635562.f_2++;
	if (fParam14 > 0f)
	{
		if (func_31(Param0, fParam14, 1, 1, bParam15, bParam17, bParam11, bParam15, 0))
		{
			return 0;
		}
	}
	Global_2635562.f_2++;
	if (bParam8)
	{
		if (fParam6 > 0f)
		{
			if (func_18(Param0, fParam6, iParam7, iParam9, fParam10, bParam11, iParam12, fParam16, bParam17))
			{
				return 0;
			}
		}
	}
	Global_2635562.f_2++;
	return 1;
}

int func_18(struct<3> Param0, float fParam3, int iParam4, int iParam5, float fParam6, bool bParam7, int iParam8, float fParam9, bool bParam10)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam4 && !bParam7)
	{
		if (func_74(PLAYER::PLAYER_ID(), 1, 1))
		{
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
				fVar2 = fParam6;
				if (fParam9 > 0f)
				{
					fVar2 = fParam9;
				}
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_24(PLAYER::PLAYER_ID()), Param0, true) <= (fVar2 + fParam3))
				{
					if (CAM::IS_SPHERE_VISIBLE(Param0, fParam3))
					{
						return 1;
					}
				}
			}
		}
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if (func_74(iVar1, 1, 1))
		{
			if (!func_20(iVar1, 0) && NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), iVar1))
			{
				if (iParam4 == 1 || (iParam4 == 0 && iVar1 != PLAYER::PLAYER_ID()))
				{
					if ((func_19(iVar1) || !bParam10) && !Global_2658293[iVar1 /*468*/].f_274)
					{
						fVar2 = fParam6;
						if (fParam9 > 0f)
						{
							if (!PLAYER::GET_PLAYER_TEAM(iVar1) == -1)
							{
								if (PLAYER::GET_PLAYER_TEAM(iVar1) == PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()))
								{
									fVar2 = fParam9;
								}
							}
						}
						if (!bParam7)
						{
							if ((iParam5 || (iParam5 == 0 && PLAYER::GET_PLAYER_TEAM(iVar1) != PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()))) || PLAYER::GET_PLAYER_TEAM(iVar1) == -1)
							{
								if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_24(iVar1), Param0, true) <= (fVar2 + fParam3))
								{
									if (NETWORK::IS_SPHERE_VISIBLE_TO_PLAYER(iVar1, Param0, fParam3))
									{
										return 1;
									}
								}
							}
						}
						else if (PLAYER::GET_PLAYER_TEAM(iVar1) != iParam8 || PLAYER::GET_PLAYER_TEAM(iVar1) == -1)
						{
							if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_24(iVar1), Param0, true) <= (fVar2 + fParam3))
							{
								if (NETWORK::IS_SPHERE_VISIBLE_TO_PLAYER(iVar1, Param0, fParam3))
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_19(int iParam0)
{
	if (ENTITY::IS_ENTITY_VISIBLE_TO_SCRIPT(PLAYER::GET_PLAYER_PED(iParam0)) || Global_2658293[iParam0 /*468*/].f_259)
	{
		return 1;
	}
	return 0;
}

bool func_20(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (!func_23(iParam0))
	{
		return 0;
	}
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_21(-1, 0) == 8;
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

int func_21(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_22();
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

int func_22()
{
	return Global_1574928;
}

int func_23(var uParam0)
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

Vector3 func_24(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((func_30() && Global_1845298[iVar0 /*881*/].f_862) && !func_29(Global_1845298[iVar0 /*881*/].f_863))
	{
		return Global_1845298[iVar0 /*881*/].f_863;
	}
	if ((NETWORK::NETWORK_IS_ACTIVITY_SESSION() || func_26(0)) && func_25())
	{
		return CAM::GET_FINAL_RENDERED_CAM_COORD();
	}
	return func_38(iParam0);
}

var func_25()
{
	return BitTest(Global_1964670, 5);
}

int func_26(int iParam0)
{
	if (iParam0 && Global_1575066)
	{
		if (func_27())
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

int func_27()
{
	if (func_28())
	{
		return 1;
	}
	return Global_1575069;
	return 0;
}

int func_28()
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

int func_29(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

var func_30()
{
	return Global_2685152.f_20;
}

int func_31(struct<3> Param0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, int iParam8, var uParam9, int iParam10)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam8 == 1 && PLAYER::PLAYER_ID() != iVar1) || iParam8 == 0)
		{
			if (func_74(iVar1, bParam4, bParam5))
			{
				if (iParam10 || NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), iVar1))
				{
					if (!bParam7 || (!PED::IS_PED_INJURED(PLAYER::GET_PLAYER_PED(iVar1)) && func_19(iVar1)))
					{
						if ((!bParam6 || (bParam6 == 1 && PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) != PLAYER::GET_PLAYER_TEAM(iVar1))) || PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1)
						{
							if (((PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1 && uParam9) && bParam6) && func_32(iVar1))
							{
							}
							else if (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iVar1)))
							{
								if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_38(iVar1), Param0, true) < fParam3)
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_32(int iParam0)
{
	if (func_37(PLAYER::PLAYER_ID(), iParam0))
	{
		return 1;
	}
	Global_2708615 = { func_36(iParam0) };
	if (NETWORK::NETWORK_IS_FRIEND(&Global_2708615))
	{
		return 1;
	}
	if (func_33(PLAYER::PLAYER_ID(), iParam0))
	{
		return 1;
	}
	return 0;
}

int func_33(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_34(iParam0);
	if (func_23(iVar0))
	{
		if (iVar0 == func_34(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_34(int iParam0)
{
	if (func_23(iParam0))
	{
		return Global_1892925[iParam0 /*615*/].f_10;
	}
	return func_35();
}

int func_35()
{
	return -1;
}

struct<13> func_36(int iParam0)
{
	struct<13> Var0;
	
	NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0, 13);
	return Var0;
}

int func_37(int iParam0, int iParam1)
{
	if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
	{
		Global_2708615 = { func_36(iParam0) };
		Global_2708628 = { func_36(iParam1) };
		if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Global_2708615))
		{
			if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Global_2708628))
			{
				NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2708545, 35, &Global_2708615);
				NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2708580, 35, &Global_2708628);
				if (Global_2708545 == Global_2708580)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

Vector3 func_38(int iParam0)
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), false);
}

bool func_39(int iParam0)
{
	if (iParam0 == 0)
	{
		return 1;
	}
	STREAMING::REQUEST_MODEL(iParam0);
	return STREAMING::HAS_MODEL_LOADED(iParam0);
}

bool func_40()
{
	if (!BitTest(uLocal_188, 1))
	{
		if (PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE(func_38(PLAYER::PLAYER_ID()), iLocal_192, &(Local_79.f_6), 4, 3f, 0f))
		{
			MISC::SET_BIT(&uLocal_188, true);
		}
		else
		{
			iLocal_192++;
		}
	}
	return BitTest(uLocal_188, 1);
}

int func_41(var uParam0)
{
	if (uParam0->f_1)
	{
		if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0)) >= 1000)
		{
			return 1;
		}
	}
	return 0;
}

void func_42(var uParam0)
{
	if (!uParam0->f_1)
	{
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			func_43(uParam0, 0, 0);
		}
	}
}

void func_43(var uParam0, bool bParam1, bool bParam2)
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

void func_44()
{
	switch (Local_91[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2)
	{
		case 0:
			func_46();
			func_45();
			if (Local_79.f_9 > 0)
			{
				Local_91[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2 = 1;
			}
			break;
		
		case 1:
			func_62();
			break;
	}
}

void func_45()
{
	int iVar0;
	float fVar1;
	
	if (!BitTest(Local_91[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_1, 0))
	{
		if (func_4(Local_79.f_2) && !func_3(Local_79.f_3))
		{
			iVar0 = ENTITY::GET_ENTITY_HEALTH(NETWORK::NET_TO_VEH(Local_79.f_2));
			fVar1 = ENTITY::GET_ENTITY_SPEED(NETWORK::NET_TO_VEH(Local_79.f_2));
			if (iVar0 < 200)
			{
				func_46();
				TASK::TASK_PERFORM_SEQUENCE(NETWORK::NET_TO_PED(Local_79.f_3), iLocal_191);
				MISC::SET_BIT(&(Local_91[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_1), false);
			}
			else if (fVar1 < 3f)
			{
				if ((((ENTITY::IS_ENTITY_UPSIDEDOWN(NETWORK::NET_TO_VEH(Local_79.f_2)) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(NETWORK::NET_TO_VEH(Local_79.f_2), 3, 10000)) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(NETWORK::NET_TO_VEH(Local_79.f_2), 1, 10000)) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(NETWORK::NET_TO_VEH(Local_79.f_2), 0, 10000)) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(NETWORK::NET_TO_VEH(Local_79.f_2), 2, 10000))
				{
					func_46();
					TASK::TASK_PERFORM_SEQUENCE(NETWORK::NET_TO_PED(Local_79.f_3), iLocal_190);
					MISC::SET_BIT(&(Local_91[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_1), false);
				}
			}
		}
	}
}

void func_46()
{
	if (!BitTest(uLocal_188, 0))
	{
		if (func_4(Local_79.f_2))
		{
			TASK::OPEN_SEQUENCE_TASK(&iLocal_189);
			TASK::TASK_VEHICLE_MISSION_COORS_TARGET(0, NETWORK::NET_TO_VEH(Local_79.f_2), Local_79.f_6, 14, 30f, 786468, 15f, 1f, false);
			TASK::TASK_VEHICLE_DRIVE_WANDER(0, NETWORK::NET_TO_VEH(Local_79.f_2), 30f, 786468);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_189);
			TASK::OPEN_SEQUENCE_TASK(&iLocal_190);
			TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 1);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_190);
			TASK::OPEN_SEQUENCE_TASK(&iLocal_191);
			TASK::TASK_VEHICLE_MISSION_COORS_TARGET(0, NETWORK::NET_TO_VEH(Local_79.f_2), Local_79.f_6, 5, 30f, 786468, 99999f, 1f, false);
			TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 1);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_191);
			MISC::SET_BIT(&uLocal_188, false);
		}
	}
}

int func_47()
{
	return Local_79.f_0;
}

int func_48(int iParam0)
{
	return Local_91[iParam0 /*3*/];
}

bool func_49(int iParam0)
{
	return !func_50(iParam0);
}

int func_50(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			break;
		
		case 1:
			break;
		
		case 2:
			break;
		
		case 3:
			break;
		
		case 4:
			if (Global_262145.f_7275)
			{
				return 0;
			}
			if (func_52(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			if (BitTest(Global_1845298[PLAYER::PLAYER_ID() /*881*/].f_260.f_37, 0) || BitTest(Global_1845298[PLAYER::PLAYER_ID() /*881*/].f_260.f_37, 1))
			{
				return 0;
			}
			break;
		
		case 5:
			if (Global_262145.f_7276)
			{
				return 0;
			}
			if (func_52(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			if (BitTest(Global_1845298[PLAYER::PLAYER_ID() /*881*/].f_260.f_37, 0) || BitTest(Global_1845298[PLAYER::PLAYER_ID() /*881*/].f_260.f_37, 1))
			{
				return 0;
			}
			break;
		
		case 6:
			if (Global_262145.f_7277)
			{
				return 0;
			}
			break;
		
		case 7:
			break;
		
		case 8:
			break;
		
		case 9:
			if (Global_262145.f_7278)
			{
				return 0;
			}
			if (func_52(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			if (BitTest(Global_1845298[PLAYER::PLAYER_ID() /*881*/].f_260.f_37, 0) || BitTest(Global_1845298[PLAYER::PLAYER_ID() /*881*/].f_260.f_37, 1))
			{
				return 0;
			}
			break;
		
		case 15:
			if (func_51(4))
			{
				return 0;
			}
			if (func_52(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			if (BitTest(Global_1845298[PLAYER::PLAYER_ID() /*881*/].f_260.f_37, 0) || BitTest(Global_1845298[PLAYER::PLAYER_ID() /*881*/].f_260.f_37, 1))
			{
				return 0;
			}
			break;
		
		case 17:
			if (func_51(4))
			{
				return 0;
			}
			if (func_52(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			if (BitTest(Global_1845298[PLAYER::PLAYER_ID() /*881*/].f_260.f_37, 0) || BitTest(Global_1845298[PLAYER::PLAYER_ID() /*881*/].f_260.f_37, 1))
			{
				return 0;
			}
			break;
		
		case 16:
			if (func_51(4))
			{
				return 0;
			}
			if (func_52(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			if (BitTest(Global_1845298[PLAYER::PLAYER_ID() /*881*/].f_260.f_37, 0) || BitTest(Global_1845298[PLAYER::PLAYER_ID() /*881*/].f_260.f_37, 1))
			{
				return 0;
			}
			break;
		
		case 18:
		case 21:
		case 22:
		case 23:
			if (func_51(4))
			{
				return 0;
			}
			if (func_52(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			if (BitTest(Global_1845298[PLAYER::PLAYER_ID() /*881*/].f_260.f_37, 0) || BitTest(Global_1845298[PLAYER::PLAYER_ID() /*881*/].f_260.f_37, 1))
			{
				return 0;
			}
			break;
		
		case 19:
			if (func_51(4))
			{
				return 0;
			}
			if (func_52(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			break;
		
		case 20:
			if (func_51(4))
			{
				return 0;
			}
			if (func_52(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			break;
		
		case 10:
			break;
		
		case 11:
			break;
		
		case 12:
			break;
	}
	return 1;
}

int func_51(bool bParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_74(PLAYER::INT_TO_PLAYERINDEX(iVar0), 0, 1))
		{
			if (BitTest(Global_2658293[iVar0 /*468*/].f_222, bParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_52(int iParam0, int iParam1)
{
	return BitTest(Global_2658293[iParam0 /*468*/].f_222, iParam1);
}

int func_53()
{
	if (Global_1575066 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 1;
		}
	}
	if (func_60())
	{
		return 1;
	}
	if (Global_2699678)
	{
		return 1;
	}
	if (func_59())
	{
		return 1;
	}
	if (func_58(159))
	{
		if (!func_57())
		{
			return 1;
		}
	}
	if (func_58(157))
	{
		return 1;
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return 1;
	}
	if (func_54() != 0)
	{
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(func_54()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_54()
{
	switch (func_56())
	{
		case 0:
			return func_55();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_55()
{
	switch (Global_2699787)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_56()
{
	return Global_33815;
}

bool func_57()
{
	return Global_2685152.f_726;
}

int func_58(int iParam0)
{
	if (SCRIPT::GET_EVENT_EXISTS(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_59()
{
	return Global_2697072;
}

bool func_60()
{
	return Global_2685152.f_721;
}

void func_61()
{
	SYSTEM::WAIT(0);
}

void func_62()
{
	func_65();
	if (func_47() == 4 && Local_79.f_4 != 0)
	{
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_79.f_4, false);
	}
	if (func_4(Local_79.f_2))
	{
		AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(NETWORK::NET_TO_VEH(Local_79.f_2), 0f);
	}
	AUDIO::STOP_AUDIO_SCENE("JOYRIDER_RADIO_SCENE");
	func_64(9, 0);
	func_63();
}

void func_63()
{
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_64(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!BitTest(Global_2658293[PLAYER::PLAYER_ID() /*468*/].f_222, bParam0))
		{
			MISC::SET_BIT(&(Global_2658293[PLAYER::PLAYER_ID() /*468*/].f_222), bParam0);
		}
	}
	else if (BitTest(Global_2658293[PLAYER::PLAYER_ID() /*468*/].f_222, bParam0))
	{
		MISC::CLEAR_BIT(&(Global_2658293[PLAYER::PLAYER_ID() /*468*/].f_222), bParam0);
	}
}

void func_65()
{
	TASK::CLEAR_SEQUENCE_TASK(&iLocal_189);
}

void func_66(struct<21> Param0)
{
	int iVar0;
	
	func_70(func_71(Param0.f_0), Param0);
	NETWORK::RESERVE_NETWORK_MISSION_PEDS(1);
	NETWORK::RESERVE_NETWORK_MISSION_VEHICLES(1);
	func_69(0, -1, 0);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_79, 12, 0);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_91, 97, 0);
	if (!func_68())
	{
		func_62();
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			if (Global_2733190.f_3575 == 0)
			{
				iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 7);
				switch (iVar0)
				{
					case 0:
						Local_79.f_4 = joaat("stingergt");
						break;
					
					case 1:
						Local_79.f_4 = joaat("entityxf");
						break;
					
					case 2:
						Local_79.f_4 = joaat("feltzer2");
						break;
					
					case 3:
						Local_79.f_4 = joaat("monroe");
						break;
					
					case 4:
						Local_79.f_4 = joaat("cogcabrio");
						break;
					
					case 5:
						Local_79.f_4 = joaat("superd");
						break;
					
					case 6:
						Local_79.f_4 = joaat("infernus");
						break;
				}
			}
			else
			{
				Local_79.f_4 = Global_2733190.f_3575;
				Global_2733190.f_3575 = 0;
			}
			VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_79.f_4, true);
			Local_79.f_5 = func_67(1);
		}
		func_64(9, 1);
		AUDIO::START_AUDIO_SCENE("JOYRIDER_RADIO_SCENE");
		Local_91[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/] = 0;
	}
	else
	{
		func_62();
	}
}

int func_67(bool bParam0)
{
	int iVar0;
	
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 32);
	if (bParam0)
	{
		switch (iVar0)
		{
			case 0:
				return joaat("a_m_m_eastsa_01");
			
			case 1:
				return joaat("a_m_m_bevhills_01");
			
			case 2:
				return joaat("a_m_m_bevhills_02");
			
			case 3:
				return joaat("a_m_m_business_01");
			
			case 4:
				return joaat("a_m_m_malibu_01");
			
			case 5:
				return joaat("a_m_m_eastsa_02");
			
			case 6:
				return joaat("a_m_m_hillbilly_01");
			
			case 7:
				return joaat("a_m_m_hillbilly_02");
			
			case 8:
				return joaat("a_m_m_og_boss_01");
			
			case 9:
				return joaat("a_m_m_stlat_02");
			
			case 10:
				return joaat("a_m_y_beachvesp_01");
			
			case 11:
				return joaat("a_m_y_epsilon_01");
			
			case 12:
				return joaat("a_m_m_prolhost_01");
			
			case 13:
				return joaat("a_m_m_salton_01");
			
			case 14:
				return joaat("a_m_m_skater_01");
			
			case 15:
				return joaat("a_m_y_skater_02");
			
			case 16:
				return joaat("a_m_y_methhead_01");
			
			case 17:
				return joaat("a_m_m_skidrow_01");
			
			case 18:
				return joaat("a_m_m_soucent_01");
			
			case 19:
				return joaat("a_m_m_soucent_02");
			
			case 20:
				return joaat("a_m_m_soucent_03");
			
			case 21:
				return joaat("a_m_y_genstreet_02");
			
			case 22:
				return joaat("a_m_y_roadcyc_01");
			
			case 23:
				return joaat("a_m_m_afriamer_01");
			
			case 24:
				return joaat("a_m_m_beach_01");
			
			case 25:
				return joaat("a_m_m_farmer_01");
			
			case 26:
				return joaat("a_m_m_fatlatin_01");
			
			case 27:
				return joaat("a_m_m_genfat_01");
			
			case 28:
				return joaat("a_m_m_indian_01");
			
			case 29:
				return joaat("a_m_m_ktown_01");
			
			case 30:
				return joaat("a_m_m_socenlat_01");
			
			case 31:
				return joaat("a_m_m_mexlabor_01");
			
			default:
		}
	}
	else
	{
		switch (iVar0)
		{
			case 0:
				return joaat("a_f_m_bevhills_01");
			
			case 1:
				return joaat("a_f_m_bevhills_02");
			
			case 2:
				return joaat("a_f_m_beach_01");
			
			case 3:
				return joaat("a_f_m_ktown_02");
			
			case 4:
				return joaat("a_f_m_prolhost_01");
			
			case 5:
				return joaat("a_f_m_bodybuild_01");
			
			case 6:
				return joaat("a_f_m_business_02");
			
			case 7:
				return joaat("a_f_m_downtown_01");
			
			case 8:
				return joaat("a_f_m_eastsa_01");
			
			case 9:
				return joaat("a_f_m_eastsa_02");
			
			case 10:
				return joaat("a_f_m_fatwhite_01");
			
			case 11:
				return joaat("a_f_m_ktown_01");
			
			case 12:
				return joaat("a_f_m_ktown_02");
			
			case 13:
				return joaat("a_f_m_salton_01");
			
			case 14:
				return joaat("a_f_m_skidrow_01");
			
			case 15:
				return joaat("a_f_m_soucent_01");
			
			case 16:
				return joaat("a_f_m_soucent_02");
			
			case 17:
				return joaat("a_f_m_soucentmc_01");
			
			case 18:
				return joaat("a_f_m_tramp_01");
			
			case 19:
				return joaat("a_f_m_trampbeac_01");
			
			case 20:
				return joaat("a_f_y_yoga_01");
			
			case 21:
				return joaat("a_f_y_vinewood_02");
			
			case 22:
				return joaat("a_f_y_vinewood_03");
			
			case 23:
				return joaat("a_f_y_vinewood_04");
			
			case 24:
				return joaat("a_f_y_tennis_01");
			
			case 25:
				return joaat("a_f_y_tourist_01");
			
			case 26:
				return joaat("a_f_y_hipster_01");
			
			case 27:
				return joaat("a_f_y_golfer_01");
			
			case 28:
				return joaat("a_f_y_fitness_01");
			
			case 29:
				return joaat("a_f_y_scdressy_01");
			
			case 30:
				return joaat("a_f_y_epsilon_01");
			
			case 31:
				return joaat("a_f_y_hiker_01");
			
			default:
		}
	}
	return joaat("a_f_m_bevhills_01");
}

int func_68()
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
		if (func_60())
		{
			return 0;
		}
		if (func_58(157))
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

int func_69(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_63();
			}
			else
			{
				return 0;
			}
		}
		if (!func_26(0))
		{
			if (iParam0 == 0)
			{
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (!bParam2)
					{
						func_63();
					}
					else
					{
						return 0;
					}
				}
				if (func_60())
				{
					if (!bParam2)
					{
						func_63();
					}
					else
					{
						return 0;
					}
				}
				if (func_58(157))
				{
					if (!bParam2)
					{
						func_63();
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
					func_63();
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
				func_63();
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
			func_63();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_70(int iParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20, var uParam21)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_63();
	}
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(iParam0, false, Param1.f_16);
}

int func_71(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return 2;
		
		case 1:
			return 32;
		
		case 32:
			return 32;
		
		case 33:
			return 32;
		
		case 34:
			return 32;
		
		case 35:
			return 32;
		
		case 36:
			return 32;
		
		case 37:
			return 32;
		
		case 38:
			return 32;
		
		case 39:
			return 32;
		
		case 40:
			return 32;
		
		case 41:
			return 32;
		
		case 42:
			return 32;
		
		case 43:
			return 32;
		
		case 44:
			return 32;
		
		case 45:
			return 32;
		
		case 46:
			return 32;
		
		case 47:
			return 32;
		
		case 48:
			return 32;
		
		case 49:
			return 32;
		
		case 50:
			return 4;
		
		case 51:
			return 32;
		
		case 52:
			return 32;
		
		case 53:
			return 32;
		
		case 54:
			return 32;
		
		case 55:
			return 32;
		
		case 56:
			return 32;
		
		case 57:
			return 32;
		
		case 58:
			return 32;
		
		case 59:
			return 32;
		
		case 60:
			return 32;
		
		case 61:
			return 32;
		
		case 62:
			return 32;
		
		case 63:
			return 32;
		
		case 64:
			return 4;
		
		case 65:
			return 32;
		
		case 66:
			return 4;
		
		case 67:
			return 4;
		
		case 68:
			return 32;
		
		case 69:
			return 32;
		
		case 70:
			return 4;
		
		case 71:
			return 32;
		
		case 72:
			return 32;
		
		case 73:
		case 74:
			return 4;
		
		case 75:
			return 32;
		
		case 76:
			return 32;
		
		case 77:
			return 32;
		
		case 78:
			return 32;
		
		case 79:
			return 32;
		
		case 80:
			return 32;
		
		case 81:
			return 32;
		
		case 82:
			return 32;
		
		case 84:
			return 32;
		
		case 83:
			return 32;
		
		case 85:
			return 32;
		
		case 86:
			return 8;
		
		case 87:
			return 32;
		
		case 88:
			return 32;
		
		case 89:
			return 32;
		
		case 90:
			return 32;
		
		case 91:
			return 8;
		
		case 92:
			return 32;
		
		case 93:
			return 8;
		
		case 94:
			return 8;
		
		case 102:
			return 8;
		
		case 95:
			return 8;
		
		case 96:
			return 32;
		
		case 97:
			return 32;
		
		case 98:
			return 32;
		
		case 99:
			return 8;
		
		case 100:
			return 32;
		
		case 101:
			return 32;
		
		case 103:
			return 32;
		
		case 104:
			return 32;
		
		case 105:
			return 32;
		
		case 106:
			return 8;
		
		case 107:
			return 8;
		
		case 108:
			return 8;
		
		case 109:
			return 8;
		
		case 110:
			return 8;
		
		case 111:
			return 8;
		
		case 112:
			return 8;
		
		case 113:
			return 8;
		
		case 114:
			return 32;
		
		case 115:
			return 8;
		
		case 116:
			return 8;
		
		case 117:
			return 8;
		
		case 118:
			return 8;
		
		case 119:
			return 32;
		
		case 120:
			return 32;
		
		case 121:
			return 32;
		
		case 122:
			return 32;
		
		case 123:
			return 8;
		
		case 124:
			return 8;
		
		case 125:
			return 8;
		
		case 126:
			return 8;
		
		case 12:
			return 32;
		
		case 4:
			return 16;
		
		case 13:
			return 32;
		
		case 5:
			return 16;
		
		case 6:
			return 2;
		
		case 8:
			return 2;
		
		case 9:
			return 2;
		
		case 7:
			return 16;
		
		case 10:
			return 2;
		
		case 11:
			return 4;
		
		case 15:
			return 32;
		
		case 16:
			return 32;
		
		case 27:
			return 2;
		
		case 25:
			return 2;
		
		case 26:
			return 2;
		
		case 18:
			return 32;
		
		case 28:
			return 32;
		
		case 29:
			return 2;
		
		case 30:
			return 32;
		
		case 31:
			return 32;
		
		case 17:
			return 2;
		
		case 228:
			return 32;
		
		case 229:
			return 32;
		
		case 19:
			return 32;
		
		case 22:
			return 32;
		
		case 23:
			return 32;
		
		case 24:
			return 32;
		
		case 20:
			return 2;
		
		case 0:
			return 0;
		
		case 21:
			return 32;
		
		case 240:
			return 32;
		
		case 241:
			return 32;
		
		case 230:
			return 32;
		
		case 231:
			return 32;
		
		case 235:
			return 32;
		
		case 233:
			return 32;
		
		case 234:
			return 32;
		
		case 238:
			return 32;
		
		case 239:
			return 32;
		
		case 236:
			return 32;
		
		case 237:
			return 32;
		
		case 242:
			return 32;
		
		case 243:
			return 32;
		
		case 244:
			return 32;
		
		case 245:
			return 32;
		
		case 246:
			return 2;
		
		case 251:
			return 1;
		
		case 247:
			return 2;
		
		case 248:
			return 4;
		
		case 249:
			return 2;
		
		case 250:
			return 2;
		
		case 232:
			return 1;
		
		case 252:
			return 2;
		
		case 253:
		case 254:
		case 255:
		case 256:
		case 257:
		case 258:
			return 0;
		
		case 276:
			return 1;
		
		case 259:
			return 4;
		
		case 262:
			return 4;
		
		case 263:
			return 1;
		
		case 264:
			return 1;
		
		case 272:
			return 1;
		
		case 266:
			return 2;
		
		case 273:
			return 1;
		
		case 267:
			return 1;
		
		case 265:
			return 2;
		
		case 268:
			return 8;
		
		case 269:
			return 8;
		
		case 270:
			return 8;
		
		case 271:
			return 8;
		
		case 274:
			return 1;
		
		case 275:
			return 2;
		
		case 142:
			return 8;
		
		case 148:
			return 1;
		
		case 170:
			return 1;
		
		case 179:
			return 1;
		
		case 196:
			return 1;
		
		case 206:
			return 32;
		
		case 260:
			return 16;
		
		case 261:
			return 32;
		
		default:
	}
	switch (func_72(func_73(iParam0, 1)))
	{
		case 0:
			return 8;
		
		case 1:
			return 32;
		
		case 2:
			return 32;
		
		default:
	}
	return 0;
}

int func_72(int iParam0)
{
	switch (iParam0)
	{
		case 150:
			return 1;
		
		case 24:
			return 2;
		
		case 26:
			return 2;
		
		case 256:
			return 0;
		
		case 258:
			return 0;
		
		case 259:
			return 2;
		
		case 271:
			return 0;
		
		case 273:
			return 2;
		
		case 276:
			return 0;
		
		case 277:
			return 0;
		
		case 262:
			return 0;
		
		case 263:
			return 0;
		
		case 264:
			return 0;
		
		case 269:
			return 2;
		
		case 270:
			return 2;
		
		case 275:
			return 2;
		
		case 268:
			return 2;
		
		case 286:
			return 2;
		
		case 267:
			return 0;
		
		case 266:
			return 2;
		
		case 287:
			return 2;
		
		case 289:
			return 2;
		
		case 147:
			return 2;
		
		case 291:
			return 0;
		
		case 292:
			return 0;
		
		case 293:
			return 0;
		
		case 294:
			return 0;
		
		case 295:
			return 0;
		
		case 296:
			return 0;
		
		case 297:
			return 0;
		
		case 298:
			return 0;
		
		case 299:
			return 0;
		
		case 300:
			return 0;
		
		case 301:
			return 0;
		
		case 288:
			return 2;
		
		case 290:
			return 2;
		
		case 304:
			return 0;
		
		case 305:
			return 0;
		
		case 306:
			return 0;
		
		case 307:
			return 0;
		
		case 308:
			return 0;
		
		case 309:
			return 0;
		
		case 310:
			return 2;
		
		case 311:
			return 2;
		
		case 312:
			return 2;
		
		case 320:
			return 2;
		
		case 313:
			return 2;
		
		case 314:
			return 0;
		
		case 315:
			return 0;
		
		case 316:
			return 0;
		
		case 317:
			return 0;
		
		case 318:
			return 0;
		
		case 322:
			return 0;
		
		case 323:
			return 2;
		
		case 324:
			return 0;
		
		case 325:
			return 0;
		
		case 326:
			return 0;
		
		case 327:
			return 0;
		
		case 328:
			return 0;
		
		case 329:
			return 0;
		
		case 330:
			return 0;
		
		case 331:
			return 0;
		
		case 332:
			return 0;
		
		case 333:
			return 0;
		
		case 337:
			return 0;
		
		case 338:
			return 0;
		
		case 339:
			return 0;
		
		case 340:
			return 0;
		
		case 343:
			return 0;
		
		case 344:
			return 0;
		
		case 345:
			return 0;
		
		case 346:
			return 0;
		
		case 347:
			return 0;
		
		case 348:
			return 0;
		
		case 349:
			return 0;
		
		case 350:
			return 0;
		
		case 351:
			return 0;
		
		case 353:
			return 2;
		
		case 354:
			return 0;
		
		case 355:
			return 0;
		
		case 356:
			return 0;
		
		case 357:
			return 0;
		
		case 358:
			return 0;
		
		case 359:
			return 0;
		
		case 360:
			return 0;
		
		case 361:
			return 0;
		
		case 362:
			return 0;
		
		case 363:
			return 0;
		
		case 364:
			return 0;
		
		case 365:
			return 2;
		
		case 366:
			return 2;
		
		case 367:
			return 2;
		
		case 368:
			return 0;
		
		case 372:
			return 0;
		
		case 373:
			return 0;
		
		case 374:
			return 0;
		
		case 375:
			return 0;
		
		case 376:
			return 0;
		
		default:
	}
	return -1;
}

int func_73(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 246:
			return 15;
		
		case 253:
			return 8;
		
		case 247:
			return 14;
		
		case 251:
			return 122;
		
		case 254:
			return 1;
		
		case 252:
			return 5;
		
		case 255:
			return 6;
		
		case 248:
			return 11;
		
		case 256:
			return 0;
		
		case 257:
			return 2;
		
		case 249:
			return 13;
		
		case 258:
			return 3;
		
		case 250:
			return 12;
		
		case 49:
			return 148;
		
		case 52:
			return 151;
		
		case 53:
			return 152;
		
		case 54:
			return 157;
		
		case 55:
			return 153;
		
		case 56:
			return 154;
		
		case 57:
			return 155;
		
		case 58:
			return 159;
		
		case 51:
			return 162;
		
		case 60:
			return 142;
		
		case 62:
			return 160;
		
		case 63:
			return 164;
		
		case 64:
			return 163;
		
		case 65:
			return 166;
		
		case 66:
			return 167;
		
		case 67:
			return 168;
		
		case 68:
			return 169;
		
		case 69:
			return 170;
		
		case 70:
			return 171;
		
		case 71:
			return 172;
		
		case 72:
			return 173;
		
		case 73:
			return 178;
		
		case 74:
			return 188;
		
		case 75:
			return 214;
		
		case 76:
			return 215;
		
		case 77:
			return 216;
		
		case 78:
			return 217;
		
		case 79:
			return 218;
		
		case 80:
			return 219;
		
		case 81:
			return 220;
		
		case 82:
			return 221;
		
		case 84:
			return 179;
		
		case 83:
			return 189;
		
		case 85:
			return 180;
		
		case 87:
			return 182;
		
		case 88:
			return 183;
		
		case 89:
			return 185;
		
		case 90:
			return 186;
		
		case 91:
			return 190;
		
		case 92:
			return 191;
		
		case 93:
			return 192;
		
		case 94:
			return 193;
		
		case 102:
			return 205;
		
		case 95:
			return 194;
		
		case 96:
			return 197;
		
		case 97:
			return 198;
		
		case 99:
			return 199;
		
		case 100:
			return 200;
		
		case 101:
			return 201;
		
		case 103:
			return 207;
		
		case 104:
			return 208;
		
		case 105:
			return 209;
		
		case 106:
			return 210;
		
		case 98:
			return 195;
		
		case 107:
			return 225;
		
		case 108:
			return 226;
		
		case 109:
			return 227;
		
		case 110:
			return 229;
		
		case 111:
			return 230;
		
		case 113:
			return 233;
		
		case 115:
			return 237;
		
		case 116:
			return 238;
		
		case 117:
			return 239;
		
		case 118:
			return 240;
		
		case 119:
			return 241;
		
		case 120:
			return 242;
		
		case 121:
			return 244;
		
		case 122:
			return 248;
		
		case 123:
			return 249;
		
		case 124:
			return 250;
		
		case 125:
			return 243;
		
		case 126:
			return 158;
		
		case 86:
			return 181;
		
		case 127:
			return 150;
		
		case 128:
			return 24;
		
		case 129:
			return 26;
		
		case 130:
			return 256;
		
		case 131:
			return 258;
		
		case 133:
			return 259;
		
		case 134:
			return 271;
		
		case 135:
			return 273;
		
		case 136:
			return 276;
		
		case 137:
			return 277;
		
		case 138:
			return 262;
		
		case 139:
			return 263;
		
		case 140:
			return 264;
		
		case 141:
			return 268;
		
		case 143:
			return 269;
		
		case 144:
			return 270;
		
		case 145:
			return 275;
		
		case 146:
			return 286;
		
		case 148:
			return 267;
		
		case 147:
			return 266;
		
		case 151:
			return 147;
		
		case 149:
			return 287;
		
		case 152:
			return 291;
		
		case 153:
			return 292;
		
		case 154:
			return 293;
		
		case 155:
			return 294;
		
		case 156:
			return 295;
		
		case 157:
			return 296;
		
		case 158:
			return 297;
		
		case 159:
			return 298;
		
		case 160:
			return 299;
		
		case 161:
			return 300;
		
		case 162:
			return 301;
		
		case 163:
			return 288;
		
		case 164:
			return 290;
		
		case 165:
			return 304;
		
		case 166:
			return 305;
		
		case 167:
			return 306;
		
		case 168:
			return 307;
		
		case 169:
			return 308;
		
		case 170:
			return 309;
		
		case 171:
			return 310;
		
		case 172:
			return 311;
		
		case 173:
			return 312;
		
		case 174:
			return 313;
		
		case 175:
			return 314;
		
		case 176:
			return 315;
		
		case 177:
			return 316;
		
		case 178:
			return 317;
		
		case 179:
			return 318;
		
		case 180:
			return 320;
		
		case 181:
			return 322;
		
		case 182:
			return 323;
		
		case 183:
			return 324;
		
		case 184:
			return 325;
		
		case 185:
			return 326;
		
		case 186:
			return 327;
		
		case 187:
			return 328;
		
		case 188:
			return 329;
		
		case 189:
			return 330;
		
		case 190:
			return 331;
		
		case 191:
			return 332;
		
		case 192:
			return 333;
		
		case 193:
			return 337;
		
		case 194:
			return 338;
		
		case 195:
			return 339;
		
		case 196:
			return 340;
		
		case 197:
			return 343;
		
		case 198:
			return 344;
		
		case 199:
			return 345;
		
		case 200:
			return 346;
		
		case 201:
			return 347;
		
		case 202:
			return 348;
		
		case 203:
			return 349;
		
		case 204:
			return 350;
		
		case 205:
			return 351;
		
		case 206:
			return 352;
		
		case 207:
			return 353;
		
		case 208:
			return 354;
		
		case 209:
			return 355;
		
		case 210:
			return 356;
		
		case 211:
			return 357;
		
		case 212:
			return 358;
		
		case 213:
			return 359;
		
		case 214:
			return 360;
		
		case 215:
			return 361;
		
		case 216:
			return 362;
		
		case 217:
			return 363;
		
		case 218:
			return 364;
		
		case 219:
			return 365;
		
		case 220:
			return 366;
		
		case 221:
			return 367;
		
		case 222:
			return 368;
		
		case 223:
			return 372;
		
		case 224:
			return 373;
		
		case 225:
			return 374;
		
		case 226:
			return 375;
		
		case 227:
			return 376;
		
		default:
	}
	if (bParam1)
	{
	}
	return 379;
}

int func_74(int iParam0, bool bParam1, bool bParam2)
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

