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
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	float fLocal_47 = 0f;
	float fLocal_48 = 0f;
	float fLocal_49 = 0f;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	int iLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 10;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
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
	int iLocal_96 = 4;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 3;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	struct<3> Local_105[5];
	struct<8> Local_121[5];
	int iLocal_162 = 0;
	struct<9> ScriptParam_0 = { 4, 0, 0, 0, 0, 3, 0, 0, 0 } ;
#endregion

void __EntryFunction__()
{
	struct<3> Var0;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
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
	fLocal_47 = 80f;
	fLocal_48 = 140f;
	fLocal_49 = 180f;
	iLocal_52 = 3;
	iLocal_96 = { ScriptParam_0 };
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(19))
	{
		func_20();
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		func_19();
	}
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = 200;
	iVar6 = MISC::GET_GAME_TIMER();
	while (true)
	{
		if (!func_9())
		{
			func_20();
		}
		if ((MISC::GET_GAME_TIMER() - iVar6) > 100)
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false) };
				if (func_8(iLocal_96[iVar3]))
				{
					if (SYSTEM::VDIST2(Var0, ENTITY::GET_ENTITY_COORDS(iLocal_96[iVar3], false)) >= IntToFloat((iVar5 * iVar5)) && ENTITY::IS_ENTITY_OCCLUDED(iLocal_96[iVar3]))
					{
						func_7(&(Local_121[iVar3 /*8*/]), 0);
						func_6(&(iLocal_96[iVar3]), 1, 0, 1);
					}
					else
					{
						func_5(iLocal_96[iVar3], &(Local_121[iVar3 /*8*/]), -1, 0, 0, 0, -1082130432, 0, -1, -1, 1, 0, 0, 1, 0);
					}
				}
				else if (ENTITY::DOES_ENTITY_EXIST(iLocal_96[iVar3]))
				{
					func_6(&(iLocal_96[iVar3]), 1, 0, 1);
				}
				if (func_3(iLocal_96.f_5[iVar4]))
				{
					if (SYSTEM::VDIST2(Var0, Local_105[iVar4 /*3*/]) >= IntToFloat((iVar5 * iVar5)))
					{
						if (ENTITY::IS_ENTITY_OCCLUDED(iLocal_96.f_5[iVar4]) || PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_96.f_5[iVar4], false))
						{
							func_2(&(iLocal_96.f_5[iVar4]));
						}
					}
				}
				else if (ENTITY::DOES_ENTITY_EXIST(iLocal_96.f_5[iVar4]))
				{
					func_2(&(iLocal_96.f_5[iVar4]));
				}
				iVar3++;
				if (iVar3 == iLocal_96)
				{
					iVar3 = 0;
				}
				iVar4++;
				if (iVar4 == iLocal_96.f_5)
				{
					iVar4 = 0;
				}
				if (func_1())
				{
					func_20();
				}
			}
			iVar6 = MISC::GET_GAME_TIMER();
		}
		SYSTEM::WAIT(0);
	}
}

int func_1()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (iLocal_96.f_5 - 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_96.f_5[iVar0]))
		{
			return 0;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (iLocal_96 - 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_96[iVar0]))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

void func_2(int* iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		ENTITY::IS_ENTITY_DEAD(*iParam0, false);
		if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(*iParam0) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(*iParam0, true))
		{
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(iParam0);
		}
	}
}

int func_3(int iParam0)
{
	if (func_4(iParam0))
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

int func_4(int iParam0)
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

int func_5(int iParam0, var uParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, float fParam6, char* sParam7, int iParam8, int iParam9, bool bParam10, int iParam11, int iParam12, bool bParam13, int iParam14)
{
	bool bVar0;
	int iVar1;
	
	if (iParam3 == 0)
	{
		iParam3 = PLAYER::GET_PLAYER_INDEX();
	}
	if (fParam6 < 0f)
	{
		fParam6 = 100f;
	}
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (!HUD::DOES_PED_HAVE_AI_BLIP(iParam0))
		{
			bVar0 = true;
			if (PED::IS_PED_IN_FLYING_VEHICLE(iParam0) && iParam11)
			{
				bVar0 = false;
			}
			if (bVar0)
			{
				if (iParam8 == -1)
				{
					HUD::SET_PED_HAS_AI_BLIP(iParam0, true);
				}
				else
				{
					HUD::SET_PED_HAS_AI_BLIP_WITH_COLOUR(iParam0, true, iParam8);
				}
				uParam1->f_7 = iParam0;
				HUD::SET_PED_AI_BLIP_GANG_ID(iParam0, iParam2);
				HUD::SET_PED_AI_BLIP_NOTICE_RANGE(iParam0, fParam6);
				if (HUD::DOES_BLIP_EXIST(*uParam1))
				{
					HUD::SET_BLIP_PRIORITY(*uParam1, 7);
				}
			}
		}
		if (iParam9 != -1)
		{
			if (bParam13)
			{
				HUD::SET_PED_AI_BLIP_SPRITE(iParam0, iParam9);
			}
			else
			{
				iVar1 = HUD::GET_AI_PED_PED_BLIP_INDEX(iParam0);
				if (HUD::DOES_BLIP_EXIST(iVar1) && HUD::GET_BLIP_SPRITE(iVar1) != iParam9)
				{
					HUD::SET_PED_AI_BLIP_SPRITE(iParam0, iParam9);
				}
			}
		}
		HUD::SET_PED_AI_BLIP_FORCED_ON(iParam0, bParam4);
		HUD::SET_PED_AI_BLIP_HAS_CONE(iParam0, bParam5);
		*uParam1 = HUD::GET_AI_PED_PED_BLIP_INDEX(iParam0);
		if (!iParam9 == -1 || iParam12)
		{
			if (HUD::DOES_BLIP_EXIST(*uParam1))
			{
				if (!iParam8 == -1)
				{
					HUD::SET_BLIP_COLOUR(*uParam1, iParam8);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam7))
				{
					HUD::BEGIN_TEXT_COMMAND_SET_BLIP_NAME("STRING");
					if (bParam10)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam7);
					}
					else
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam7);
					}
					HUD::END_TEXT_COMMAND_SET_BLIP_NAME(*uParam1);
				}
				HUD::SET_BLIP_PRIORITY(*uParam1, 7);
			}
		}
		if (!BitTest(uParam1->f_6, 2))
		{
			if (HUD::DOES_BLIP_EXIST(*uParam1))
			{
				MISC::SET_BIT(&(uParam1->f_6), 2);
			}
		}
		if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
		{
			uParam1->f_1 = HUD::GET_AI_PED_VEHICLE_BLIP_INDEX(iParam0);
			if (!BitTest(uParam1->f_6, 3))
			{
				if (HUD::DOES_BLIP_EXIST(uParam1->f_1))
				{
					if (!iParam8 == -1)
					{
						HUD::SET_BLIP_COLOUR(uParam1->f_1, iParam8);
					}
					if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam7))
					{
						HUD::BEGIN_TEXT_COMMAND_SET_BLIP_NAME("STRING");
						if (bParam10)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam7);
						}
						else
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam7);
						}
						HUD::END_TEXT_COMMAND_SET_BLIP_NAME(uParam1->f_1);
					}
					HUD::SET_BLIP_PRIORITY(uParam1->f_1, 7);
					MISC::SET_BIT(&(uParam1->f_6), 3);
				}
			}
			else if (!HUD::DOES_BLIP_EXIST(uParam1->f_1))
			{
				uParam1->f_1 = 0;
				MISC::CLEAR_BIT(&(uParam1->f_6), 3);
			}
		}
		else if (HUD::DOES_BLIP_EXIST(uParam1->f_1))
		{
			uParam1->f_1 = 0;
			MISC::CLEAR_BIT(&(uParam1->f_6), 3);
		}
		else if ((iParam14 && iParam9 == 41) && HUD::DOES_BLIP_EXIST(*uParam1))
		{
			HUD::SET_BLIP_SCALE(*uParam1, 0.4f);
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_6(int* iParam0, bool bParam1, int iParam2, int iParam3)
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (!PED::IS_PED_INJURED(*iParam0))
		{
			ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(*iParam0, false, 1);
			if (iParam3 == 0)
			{
				TASK::CLEAR_PED_SECONDARY_TASK(*iParam0);
			}
			PED::SET_PED_KEEP_TASK(*iParam0, bParam1);
			if (iParam2 == 1)
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, false);
			}
		}
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(iParam0);
	}
}

void func_7(int* iParam0, bool bParam1)
{
	bool bVar0;
	struct<8> Var1;
	
	if (HUD::DOES_BLIP_EXIST(*iParam0))
	{
		HUD::REMOVE_BLIP(iParam0);
		bVar0 = true;
	}
	if (HUD::DOES_BLIP_EXIST(iParam0->f_1) && !bParam1)
	{
		HUD::REMOVE_BLIP(&(iParam0->f_1));
		bVar0 = true;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_7))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_7, false))
		{
			if (HUD::DOES_PED_HAVE_AI_BLIP(iParam0->f_7))
			{
				HUD::SET_PED_HAS_AI_BLIP(iParam0->f_7, false);
			}
		}
		bVar0 = true;
	}
	if (bVar0)
	{
		*iParam0 = { Var1 };
	}
}

int func_8(int iParam0)
{
	if (func_4(iParam0))
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_9()
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("bailbond2")) == 0)
	{
		if (!func_17(4))
		{
			return 0;
		}
	}
	if (Global_99381 == 1)
	{
		return 0;
	}
	if (CUTSCENE::IS_CUTSCENE_PLAYING())
	{
		return 0;
	}
	if (Global_33818)
	{
		return 0;
	}
	if (func_10() != 2)
	{
		return 0;
	}
	return 1;
}

int func_10()
{
	func_11();
	return Global_114963.f_2370.f_539.f_4321;
}

void func_11()
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_15(Global_114963.f_2370.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_14(PLAYER::PLAYER_PED_ID());
			if (func_13(iVar0) && (!func_12(14) || Global_113909))
			{
				if (Global_114963.f_2370.f_539.f_4321 != iVar0 && func_13(Global_114963.f_2370.f_539.f_4321))
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

bool func_12(int iParam0)
{
	return Global_44921 == iParam0;
}

bool func_13(int iParam0)
{
	return iParam0 < 3;
}

int func_14(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_15(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_15(int iParam0)
{
	if (func_13(iParam0))
	{
		return func_16(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_16(int iParam0)
{
	return Global_2349[iParam0 /*29*/];
}

bool func_17(int iParam0)
{
	return func_18(iParam0, Global_44921);
}

int func_18(int iParam0, int iParam1)
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

void func_19()
{
	int iVar0;
	
	PED::ADD_RELATIONSHIP_GROUP("ENEMIES", &iLocal_162);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, joaat("player"), iLocal_162);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_162, joaat("player"));
	iVar0 = 0;
	while (iVar0 <= (iLocal_96.f_5 - 1))
	{
		if (func_3(iLocal_96.f_5[iVar0]))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_96.f_5[iVar0], true, true);
			Local_105[iVar0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(iLocal_96.f_5[iVar0], false) };
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (iLocal_96 - 1))
	{
		if (func_8(iLocal_96[iVar0]))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_96[iVar0], true, true);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_96[iVar0], iLocal_162);
			func_5(iLocal_96[iVar0], &(Local_121[iVar0 /*8*/]), -1, 0, 0, 0, -1082130432, 0, -1, -1, 1, 0, 0, 1, 0);
		}
		iVar0++;
	}
}

void func_20()
{
	int iVar0;
	
	PED::CLEAR_RELATIONSHIP_BETWEEN_GROUPS(5, joaat("player"), iLocal_162);
	PED::CLEAR_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_162, joaat("player"));
	iVar0 = 0;
	while (iVar0 <= (iLocal_96 - 1))
	{
		func_7(&(Local_121[iVar0 /*8*/]), 0);
		func_6(&(iLocal_96[iVar0]), 1, 0, 1);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (iLocal_96.f_5 - 1))
	{
		func_2(&(iLocal_96.f_5[iVar0]));
		iVar0++;
	}
	SCRIPT::TERMINATE_THIS_THREAD();
}

