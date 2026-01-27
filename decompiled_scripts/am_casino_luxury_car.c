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
	struct<7> Local_96 = { 0, 0, 1, 0, 0, 0, 0 } ;
	var uLocal_103 = 0;
	struct<4> Local_104[8];
	int iLocal_137[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_146[1] = { 0 };
	var uLocal_148 = 0;
	struct<4> Local_149 = { 0, 0, 0, 0 } ;
	int iLocal_153 = 0;
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
		if (func_357(PLAYER::PLAYER_ID(), 0, 1))
		{
			if (!func_353(ScriptParam_0))
			{
				func_347();
			}
		}
		else
		{
			func_347();
		}
	}
	else
	{
		func_347();
	}
	while (true)
	{
		func_346();
		if (func_339())
		{
			func_347();
		}
		if (func_338(1))
		{
			func_347();
		}
		func_335();
		switch (func_334(NETWORK::PARTICIPANT_ID()))
		{
			case 0:
				if (func_333() == 1 && func_331())
				{
					func_330(1);
				}
				break;
			
			case 1:
				switch (func_333())
				{
					case 1:
						func_287();
						break;
					
					case 2:
						func_330(2);
						break;
				}
				break;
			
			case 2:
				func_347();
				break;
		}
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			switch (func_333())
			{
				case 0:
					if (func_23())
					{
						func_22(1);
					}
					break;
				
				case 1:
					func_1();
					break;
				
				case 2:
					func_347();
					break;
				}
		}
	}
}

void func_1()
{
	if (func_21() > 0)
	{
		func_14();
		func_4();
	}
	switch (func_21())
	{
		case 0:
			func_3(1);
			break;
		
		case 1:
			if (func_2() == 0)
			{
			}
			else
			{
				func_3(3);
			}
			break;
		
		case 3:
			func_22(2);
			break;
	}
}

int func_2()
{
	return Local_96.f_4;
}

void func_3(int iParam0)
{
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return;
	}
	Local_96.f_1 = iParam0;
}

void func_4()
{
	if (func_2() != 0)
	{
		return;
	}
	if (!func_13(PLAYER::PLAYER_ID()))
	{
		func_12(4);
	}
	if (func_11(1))
	{
		func_12(2);
		return;
	}
	if (func_11(5))
	{
		func_12(3);
		return;
	}
	if (!func_7())
	{
		if (func_5(PLAYER::PLAYER_ID()))
		{
			func_12(3);
		}
		else
		{
			func_12(1);
		}
		return;
	}
}

bool func_5(int iParam0)
{
	return func_6(iParam0, 12);
}

var func_6(int iParam0, int iParam1)
{
	return BitTest(Global_1892653[iParam0 /*615*/].f_10.f_6, iParam1);
}

bool func_7()
{
	return func_8(func_10());
}

int func_8(int iParam0)
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iParam0))
	{
		return !func_9(NETWORK::NET_TO_VEH(iParam0));
	}
	return 0;
}

int func_9(int iParam0)
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

int func_10()
{
	return Local_96.f_6;
}

bool func_11(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return BitTest(Local_96.f_2[iVar0], iVar1);
}

void func_12(int iParam0)
{
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return;
	}
	Local_96.f_4 = iParam0;
}

bool func_13(int iParam0)
{
	return func_6(iParam0, 10);
}

void func_14()
{
	if (func_20() > 0)
	{
		if (func_20() != 5)
		{
			if (!func_7())
			{
				func_19(5);
			}
		}
	}
	switch (func_20())
	{
		case 0:
			func_19(1);
			break;
		
		case 1:
			if (func_5(func_18()))
			{
				func_15(func_16(func_17(), 1, 0, 0), 0, 0f, 0, 0, 0, -1);
				func_19(2);
			}
			break;
		
		case 2:
			if (func_11(3))
			{
				func_19(3);
			}
			break;
		
		case 3:
			if (func_11(4))
			{
				func_19(4);
			}
			break;
		
		case 4:
			break;
		
		case 5:
			break;
	}
}

void func_15(int iParam0, int iParam1, float fParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	struct<10> Var0;
	
	Var0.f_0 = -503325966;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_8 = iParam6;
	Var0.f_5 = iParam1;
	Var0.f_6 = iParam4;
	Var0.f_3 = fParam2;
	Var0.f_4 = iParam3;
	Var0.f_7 = iParam5;
	Var0.f_9 = MISC::GET_FRAME_COUNT();
	if (!iParam0 == 0)
	{
		SCRIPT::_SEND_TU_SCRIPT_EVENT_NEW(1, &Var0, 10, iParam0, Var0.f_0);
	}
}

int func_16(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	var uVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	
	bVar1 = false;
	while (bVar1 < 32)
	{
		iVar3 = PLAYER::INT_TO_PLAYERINDEX(bVar1);
		if (func_357(iVar3, 1, 0))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::GET_PLAYER_PED(iVar3), bParam3))
			{
				if (!PLAYER::IS_REMOTE_PLAYER_IN_NON_CLONED_VEHICLE(iVar3))
				{
					iVar2 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(iVar3), bParam3);
					if (iVar2 == iParam0)
					{
						if (PLAYER::GET_PLAYER_TEAM(iVar3) == PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) || !bParam2)
						{
							if (iVar3 != PLAYER::PLAYER_ID() || iParam1)
							{
								MISC::SET_BIT(&uVar0, bVar1);
							}
						}
					}
				}
			}
		}
		bVar1++;
	}
	return uVar0;
}

int func_17()
{
	return NETWORK::NET_TO_VEH(func_10());
}

int func_18()
{
	return Local_96.f_5;
}

void func_19(int iParam0)
{
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return;
	}
	Local_96.f_6.f_1 = iParam0;
}

int func_20()
{
	return Local_96.f_6.f_1;
}

int func_21()
{
	return Local_96.f_1;
}

void func_22(int iParam0)
{
	Local_96.f_0 = iParam0;
}

int func_23()
{
	if (!func_11(0))
	{
		func_286(PLAYER::PLAYER_ID());
		func_285(0);
	}
	if (!func_24())
	{
		return 0;
	}
	return 1;
}

int func_24()
{
	int iVar0;
	struct<104> Var1;
	int iVar105;
	
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(func_10()))
	{
		return 1;
	}
	if (!func_338(0))
	{
		if (func_127(func_284(PLAYER::PLAYER_ID()), &Local_149, &(Local_149.f_3)))
		{
			func_126(0);
		}
	}
	if (func_124(func_125()) && func_338(0))
	{
		MISC::CLEAR_AREA(Local_149, 5f, true, false, false, false);
		if (func_121(&(Local_96.f_6), func_125(), Local_149, Local_149.f_3, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0))
		{
			iVar0 = func_17();
			VEHICLE::SET_VEHICLE_DIRT_LEVEL(iVar0, 0f);
			func_120(iVar0);
			ENTITY::SET_PICK_UP_BY_CARGOBOB_DISABLED(iVar0, true);
			Var1 = { func_119() };
			func_25(iVar0, &Var1, 0, 1, 0);
			if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3))
			{
				if (DECORATOR::DECOR_EXIST_ON(iVar0, "MPBitset"))
				{
					iVar105 = DECORATOR::DECOR_GET_INT(iVar0, "MPBitset");
				}
				MISC::SET_BIT(&iVar105, 11);
				DECORATOR::DECOR_SET_INT(iVar0, "MPBitset", iVar105);
			}
			if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("Not_Allow_As_Saved_Veh", 3))
			{
				DECORATOR::DECOR_SET_INT(iVar0, "Not_Allow_As_Saved_Veh", 1);
			}
			VEHICLE::SET_DONT_ALLOW_PLAYER_TO_ENTER_VEHICLE_IF_LOCKED_FOR_PLAYER(iVar0, true);
			VEHICLE::SET_VEHICLE_RESPECTS_LOCKS_WHEN_HAS_DRIVER(iVar0, true);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_125());
			return 1;
		}
	}
	return 0;
}

void func_25(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	float fVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		if ((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0)) || !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
			if (PLAYER::PLAYER_ID() != func_118())
			{
				uParam1->f_100 = PLAYER::PLAYER_ID();
			}
			if (uParam1->f_70 == 0)
			{
				uParam1->f_70 = 1;
			}
			func_91(iParam0, uParam1, bParam2, bParam3);
			if (uParam1->f_102 != 0)
			{
				if (uParam1->f_102 == 2)
				{
					VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(iParam0, true);
					VEHICLE::SET_DRIFT_TYRES(iParam0, false);
				}
				else if (uParam1->f_102 == 1)
				{
					VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(iParam0, false);
					VEHICLE::SET_DRIFT_TYRES(iParam0, false);
				}
				else if (uParam1->f_102 == 3)
				{
					VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(iParam0, true);
					VEHICLE::SET_DRIFT_TYRES(iParam0, true);
				}
			}
			func_86(iParam0, uParam1);
			if (ENTITY::GET_ENTITY_MODEL(iParam0) == 858355070)
			{
				unk_0xDD8A2D3337F04196(iParam0, 0);
			}
			if (!uParam1->f_78 == -1 && uParam1->f_9[14] == -1)
			{
				AUDIO::OVERRIDE_VEH_HORN(iParam0, true, uParam1->f_78);
			}
			if (!uParam1->f_79 == -1)
			{
				AUDIO::SET_VEHICLE_HORN_SOUND_INDEX(iParam0, uParam1->f_79);
			}
			if (func_85(uParam1->f_66, &fVar1) && uParam1->f_80 != fVar1)
			{
				uParam1->f_80 = fVar1;
			}
			VEHICLE::SET_VEHICLE_ENVEFF_SCALE(iParam0, uParam1->f_80);
			if (uParam1->f_97 >= 0)
			{
				VEHICLE::SET_VEHICLE_EXTRA_COLOUR_5(iParam0, uParam1->f_97);
			}
			if (uParam1->f_99 >= 0)
			{
				VEHICLE::SET_VEHICLE_EXTRA_COLOUR_6(iParam0, uParam1->f_99);
			}
			if (func_84(iParam0))
			{
				func_78(iParam0, func_81(uParam1->f_74, uParam1->f_75, uParam1->f_76));
			}
			if (VEHICLE::GET_VEHICLE_LIVERY2_COUNT(iParam0) > 1 && uParam1->f_98 >= 0)
			{
				VEHICLE::SET_VEHICLE_LIVERY2(iParam0, uParam1->f_98);
			}
			if (BitTest(uParam1->f_95, 0))
			{
				func_48(iParam0, &(uParam1->f_81));
			}
			if ((!func_38(4) && !bParam4) && !NETWORK::NETWORK_IS_ACTIVITY_SESSION())
			{
				func_31(iParam0);
			}
			if (func_30(iVar0))
			{
				switch (uParam1->f_9[5])
				{
					case 0:
						VEHICLE::REMOVE_VEHICLE_MOD(iParam0, 16);
						break;
					
					case 1:
						VEHICLE::REMOVE_VEHICLE_MOD(iParam0, 16);
						if ((VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("scarab")) || VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("scarab2"))) || VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("scarab3")))
						{
							VEHICLE::SET_VEHICLE_MOD(iParam0, 16, 0, false);
						}
						else
						{
							VEHICLE::SET_VEHICLE_MOD(iParam0, 16, 2, false);
						}
						break;
					
					case 2:
						VEHICLE::REMOVE_VEHICLE_MOD(iParam0, 16);
						if ((VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("scarab")) || VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("scarab2"))) || VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("scarab3")))
						{
							VEHICLE::SET_VEHICLE_MOD(iParam0, 16, 1, false);
						}
						else
						{
							VEHICLE::SET_VEHICLE_MOD(iParam0, 16, 3, false);
						}
						break;
					
					case 3:
						VEHICLE::REMOVE_VEHICLE_MOD(iParam0, 16);
						if ((VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("scarab")) || VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("scarab2"))) || VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("scarab3")))
						{
							VEHICLE::SET_VEHICLE_MOD(iParam0, 16, 2, false);
						}
						else
						{
							VEHICLE::SET_VEHICLE_MOD(iParam0, 16, 4, false);
						}
						break;
					
					default:
						if (uParam1->f_9[5] != -1)
						{
							VEHICLE::REMOVE_VEHICLE_MOD(iParam0, 16);
							if ((VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("scarab")) || VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("scarab2"))) || VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("scarab3")))
							{
								VEHICLE::SET_VEHICLE_MOD(iParam0, 16, 2, false);
							}
							else
							{
								VEHICLE::SET_VEHICLE_MOD(iParam0, 16, 4, false);
							}
						}
						break;
					}
			}
			if (func_27(ENTITY::GET_ENTITY_MODEL(iParam0)))
			{
				switch (uParam1->f_9[5])
				{
					case 1:
						VEHICLE::SET_VEHICLE_EXPLODES_ON_HIGH_EXPLOSION_DAMAGE(iParam0, false);
						VEHICLE::SET_VEHICLE_STRONG(iParam0, true);
						if (uParam1->f_9[16] == 5)
						{
							VEHICLE::SET_VEHICLE_DAMAGE_SCALE(iParam0, (Global_262145.f_21543 + 0.05f));
						}
						else
						{
							VEHICLE::SET_VEHICLE_DAMAGE_SCALE(iParam0, Global_262145.f_21543);
						}
						VEHICLE::SET_VEHICLE_EXPLODES_ON_EXPLOSION_DAMAGE_AT_ZERO_BODY_HEALTH(iParam0, true);
						break;
					
					default:
						VEHICLE::SET_VEHICLE_EXPLODES_ON_HIGH_EXPLOSION_DAMAGE(iParam0, false);
						VEHICLE::SET_VEHICLE_DAMAGE_SCALE(iParam0, 1f);
						VEHICLE::SET_VEHICLE_EXPLODES_ON_EXPLOSION_DAMAGE_AT_ZERO_BODY_HEALTH(iParam0, true);
						break;
					}
			}
			switch (uParam1->f_94)
			{
				case 0:
					break;
				
				case 1:
					if (BitTest(uParam1->f_95, 1) && BitTest(uParam1->f_95, 2))
					{
						if (BitTest(uParam1->f_95, 3))
						{
						}
					}
					else if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("Player_Vehicle", 3))
					{
						DECORATOR::DECOR_SET_INT(iParam0, "Player_Vehicle", -1);
					}
					break;
				
				case 2:
					if (BitTest(uParam1->f_95, 1) && BitTest(uParam1->f_95, 2))
					{
						if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("Veh_Modded_By_Player", 3))
						{
							DECORATOR::DECOR_SET_INT(iParam0, "Veh_Modded_By_Player", NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(PLAYER::PLAYER_ID()));
						}
					}
					else if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("Veh_Modded_By_Player", 3))
					{
						if (func_26(uParam1->f_81) && NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(&(uParam1->f_81)))
						{
							DECORATOR::DECOR_SET_INT(iParam0, "Veh_Modded_By_Player", NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&(uParam1->f_81))));
						}
						else
						{
							DECORATOR::DECOR_SET_INT(iParam0, "Veh_Modded_By_Player", -1);
						}
					}
					break;
				
				case 3:
					break;
				
				case 4:
					break;
				}
		}
	}
}

bool func_26(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	return NETWORK::NETWORK_IS_HANDLE_VALID(&uParam0, 13);
}

bool func_27(int iParam0)
{
	switch (iParam0)
	{
		case -1321131184:
			return 1;
			break;
	}
	return (func_29(iParam0) && !func_28(iParam0));
}

int func_28(int iParam0)
{
	switch (iParam0)
	{
		case joaat("coureur"):
		case joaat("monstrociti"):
		case joaat("turismo3"):
		case joaat("baller8"):
		case 1121330119:
			return 1;
			break;
	}
	return 0;
}

int func_29(int iParam0)
{
	switch (iParam0)
	{
		case joaat("deity"):
		case joaat("granger2"):
		case joaat("buffalo4"):
		case joaat("jubilee"):
		case joaat("patriot3"):
		case joaat("champion"):
		case joaat("greenwood"):
		case joaat("omnisegt"):
		case joaat("virtue"):
		case joaat("r300"):
		case joaat("stingertt"):
		case joaat("buffalo5"):
		case joaat("coureur"):
		case joaat("monstrociti"):
		case joaat("aleutian"):
		case joaat("turismo3"):
		case joaat("baller8"):
		case joaat("terminus"):
		case 1121330119:
		case -946047670:
			return 1;
			break;
	}
	return 0;
}

int func_30(int iParam0)
{
	switch (iParam0)
	{
		case joaat("pounder2"):
		case joaat("mule4"):
		case joaat("speedo4"):
		case joaat("speedo5"):
		case joaat("imperator"):
		case joaat("deathbike"):
		case joaat("cerberus"):
		case joaat("bruiser"):
		case joaat("dominator4"):
		case joaat("zr380"):
		case joaat("issi4"):
		case joaat("imperator2"):
		case joaat("deathbike2"):
		case joaat("cerberus2"):
		case joaat("bruiser2"):
		case joaat("dominator5"):
		case joaat("zr3802"):
		case joaat("issi5"):
		case joaat("imperator3"):
		case joaat("deathbike3"):
		case joaat("cerberus3"):
		case joaat("bruiser3"):
		case joaat("dominator6"):
		case joaat("zr3803"):
		case joaat("issi6"):
		case joaat("impaler2"):
		case joaat("impaler3"):
		case joaat("impaler4"):
		case joaat("slamvan4"):
		case joaat("slamvan5"):
		case joaat("slamvan6"):
		case joaat("monster3"):
		case joaat("monster4"):
		case joaat("monster5"):
		case joaat("scarab"):
		case joaat("scarab2"):
		case joaat("scarab3"):
		case joaat("brutus"):
		case joaat("brutus2"):
		case joaat("brutus3"):
			return 1;
			break;
	}
	return 0;
}

void func_31(int iParam0)
{
	struct<3> Var0;
	
	if (Global_262145.f_19988)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0))
		{
			if (NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(iParam0))
			{
				Var0.f_0 = ENTITY::GET_ENTITY_MODEL(iParam0);
				Var0.f_1 = MISC::GET_HASH_KEY(VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0));
				if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("RandomID", 3))
				{
					if (!DECORATOR::DECOR_EXIST_ON(iParam0, "RandomID"))
					{
						Var0.f_2 = MISC::GET_RANDOM_INT_IN_RANGE(0, 65535);
						DECORATOR::DECOR_SET_INT(iParam0, "RandomID", Var0.f_2);
					}
					else
					{
						Var0.f_2 = DECORATOR::DECOR_GET_INT(iParam0, "RandomID");
					}
				}
				func_32(Var0);
			}
		}
	}
}

void func_32(struct<3> Param0)
{
	struct<4> Var0;
	
	Var0.f_0 = -1251853784;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_3 = Param0.f_0;
	Var0.f_3.f_1 = Param0.f_1;
	Var0.f_3.f_2 = Param0.f_2;
	SCRIPT::_SEND_TU_SCRIPT_EVENT_NEW(1, &Var0, 6, func_33(1, 1), Var0.f_0);
}

var func_33(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar1);
		if (func_357(iVar2, 0, 0))
		{
			if (iVar2 != PLAYER::PLAYER_ID() || iParam0)
			{
				if (bParam1)
				{
					MISC::SET_BIT(&uVar0, bVar1);
				}
				else if (!func_34(iVar2, 0))
				{
					MISC::SET_BIT(&uVar0, bVar1);
				}
			}
		}
		bVar1++;
	}
	return uVar0;
}

bool func_34(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (!func_37(iParam0))
	{
		return 0;
	}
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_35(-1, 0) == 8;
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

int func_35(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_36();
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

int func_36()
{
	return Global_1574927;
}

int func_37(var uParam0)
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

int func_38(int iParam0)
{
	int iVar0;
	
	if (func_47())
	{
		iVar0 = 0;
		while (iVar0 < 65)
		{
			if (func_46(iVar0) == iParam0)
			{
				if (func_39(iVar0))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

bool func_39(int iParam0)
{
	return func_40(iParam0, 6, 1);
}

int func_40(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	if (bParam2)
	{
		return BitTest(Global_102481.f_1442[iParam0], iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_45() == 0)
		{
			return BitTest(func_41(func_44(iParam0), -1), iParam1);
		}
	}
	else
	{
		return BitTest(Global_114904.f_668[iParam0], iParam1);
	}
	return 0;
}

int func_41(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 16715)
	{
		iVar0 = func_42(iParam0, iParam1);
		if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_42(int iParam0, var uParam1)
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(0, iParam0, func_43(uParam1));
}

int func_43(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_36();
		if (iVar1 > -1)
		{
			Global_2741298 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2741298 = 1;
		}
	}
	return iVar0;
}

int func_44(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 828;
			break;
		
		case 1:
			return 829;
			break;
		
		case 2:
			return 830;
			break;
		
		case 3:
			return 831;
			break;
		
		case 4:
			return 832;
			break;
		
		case 5:
			return 833;
			break;
		
		case 6:
			return 834;
			break;
		
		case 7:
			return 835;
			break;
		
		case 8:
			return 836;
			break;
		
		case 9:
			return 837;
			break;
		
		case 10:
			return 838;
			break;
		
		case 11:
			return 839;
			break;
		
		case 12:
			return 840;
			break;
		
		case 13:
			return 841;
			break;
		
		case 14:
			return 842;
			break;
		
		case 15:
			return 844;
			break;
		
		case 16:
			return 845;
			break;
		
		case 17:
			return 846;
			break;
		
		case 18:
			return 847;
			break;
		
		case 19:
			return 848;
			break;
		
		case 20:
			return 849;
			break;
		
		case 21:
			return 850;
			break;
		
		case 22:
			return 851;
			break;
		
		case 23:
			return 852;
			break;
		
		case 24:
			return 853;
			break;
		
		case 25:
			return 854;
			break;
		
		case 26:
			return 855;
			break;
		
		case 27:
			return 856;
			break;
		
		case 28:
			return 857;
			break;
		
		case 29:
			return 858;
			break;
		
		case 30:
			return 859;
			break;
		
		case 31:
			return 860;
			break;
		
		case 32:
			return 861;
			break;
		
		case 33:
			return 862;
			break;
		
		case 34:
			return 863;
			break;
		
		case 35:
			return 864;
			break;
		
		case 36:
			return 865;
			break;
		
		case 37:
			return 866;
			break;
		
		case 38:
			return 867;
			break;
		
		case 39:
			return 868;
			break;
		
		case 40:
			return 872;
			break;
		
		case 41:
			return 873;
			break;
		
		case 42:
			return 874;
			break;
		
		case 43:
			return 875;
			break;
		
		case 44:
			return 14766;
			break;
		
		case 45:
			return 3811;
			break;
		
		case 46:
			return 5386;
			break;
		
		case 47:
			return 6158;
			break;
		
		case 48:
			return 7235;
			break;
		
		case 49:
			return 7881;
			break;
		
		case 52:
			return 8917;
			break;
		
		case 50:
			return 8268;
			break;
		
		case 51:
			return 8270;
			break;
		
		case 53:
			return 9557;
			break;
		
		case 54:
			return 9633;
			break;
		
		case 55:
			return 9848;
			break;
		
		case 56:
			return 9917;
			break;
		
		case 57:
			return 9919;
			break;
		
		case 58:
			return 11435;
			break;
		
		case 59:
			return 11846;
			break;
		
		case 60:
			return 11903;
			break;
		
		case 61:
			return 12447;
			break;
		
		case 62:
			return 14262;
			break;
		
		case 63:
			return 14263;
			break;
		
		case 64:
			return 14264;
			break;
		
		default:
			break;
	}
	return 16715;
}

int func_45()
{
	return Global_33775;
}

int func_46(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return 6;
			break;
		
		case 0:
			return 0;
			break;
		
		case 1:
			return 0;
			break;
		
		case 2:
			return 0;
			break;
		
		case 3:
			return 0;
			break;
		
		case 4:
			return 0;
			break;
		
		case 5:
			return 0;
			break;
		
		case 6:
			return 0;
			break;
		
		case 50:
			return 0;
			break;
		
		case 7:
			return 1;
			break;
		
		case 8:
			return 1;
			break;
		
		case 9:
			return 1;
			break;
		
		case 10:
			return 1;
			break;
		
		case 11:
			return 1;
			break;
		
		case 12:
			return 1;
			break;
		
		case 13:
			return 1;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
			return 1;
			break;
		
		case 16:
			return 1;
			break;
		
		case 17:
			return 1;
			break;
		
		case 18:
			return 1;
			break;
		
		case 19:
			return 1;
			break;
		
		case 20:
			return 1;
			break;
		
		case 21:
			return 1;
			break;
		
		case 22:
			return 2;
			break;
		
		case 23:
			return 2;
			break;
		
		case 24:
			return 2;
			break;
		
		case 25:
			return 2;
			break;
		
		case 26:
			return 2;
			break;
		
		case 27:
			return 2;
			break;
		
		case 28:
			return 3;
			break;
		
		case 29:
			return 3;
			break;
		
		case 30:
			return 3;
			break;
		
		case 31:
			return 3;
			break;
		
		case 32:
			return 3;
			break;
		
		case 33:
			return 3;
			break;
		
		case 34:
			return 3;
			break;
		
		case 35:
			return 3;
			break;
		
		case 36:
			return 3;
			break;
		
		case 37:
			return 3;
			break;
		
		case 38:
			return 3;
			break;
		
		case 39:
			return 4;
			break;
		
		case 40:
			return 4;
			break;
		
		case 41:
			return 4;
			break;
		
		case 42:
			return 4;
			break;
		
		case 43:
			return 4;
			break;
		
		case 44:
			return 4;
			break;
		
		case 45:
			return 5;
			break;
		
		case 46:
			return 3;
			break;
		
		case 47:
			return 3;
			break;
		
		case 48:
			return 3;
			break;
		
		case 49:
			return 3;
			break;
		
		case 52:
			return 3;
			break;
		
		case 51:
			return 1;
			break;
		
		case 53:
			return 3;
			break;
		
		case 54:
			return 2;
			break;
		
		case 55:
			return 1;
			break;
		
		case 56:
			return 3;
			break;
		
		case 57:
			return 1;
			break;
		
		case 58:
			return 3;
			break;
		
		case 59:
			return 3;
			break;
		
		case 60:
			return 3;
			break;
		
		case 61:
			return 3;
			break;
		
		case 62:
			return 0;
			break;
		
		case 63:
			return 2;
			break;
		
		case 64:
			return 3;
			break;
	}
	return 6;
}

bool func_47()
{
	return Global_102481.f_418 > 0;
}

int func_48(int iParam0, var* uParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_58(iParam0, uParam1))
	{
		return 1;
	}
	iVar0 = 0;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		iVar0 = GRAPHICS::GET_VEHICLE_CREW_EMBLEM_REQUEST_STATE(iParam0, 0);
	}
	if (iVar0 == 0)
	{
		if (!func_56(iParam0))
		{
			iVar1 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(uParam1);
			if (func_51(&iParam0, iVar1))
			{
			}
			else
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	else if (iVar0 >= 3)
	{
		return 1;
	}
	else if (func_49(iParam0))
	{
	}
	return 0;
}

int func_49(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = 0;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		iVar0 = GRAPHICS::GET_VEHICLE_CREW_EMBLEM_REQUEST_STATE(iParam0, 0);
	}
	if (iVar0 == 1 || iVar0 == 2)
	{
		if (iVar0 == 1)
		{
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				iVar1 = NETWORK::GET_NETWORK_TIME();
			}
			else
			{
				iVar1 = MISC::GET_GAME_TIMER();
			}
			iVar2 = MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(iVar1, Global_1576399));
			iVar3 = 20000;
			if (Global_1836707)
			{
				iVar3 = 2000;
			}
			if (iVar2 > iVar3)
			{
				GRAPHICS::ABORT_VEHICLE_CREW_EMBLEM_REQUEST(iParam0);
				func_50(iParam0);
				return 0;
			}
		}
		return 1;
	}
	return 0;
}

void func_50(int iParam0)
{
	int iVar0;
	
	if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
		{
			if (DECORATOR::DECOR_EXIST_ON(iParam0, "MPBitset"))
			{
				iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "MPBitset");
			}
		}
	}
	if (!BitTest(iVar0, 16))
	{
		MISC::SET_BIT(&iVar0, 16);
		DECORATOR::DECOR_SET_INT(iParam0, "MPBitset", iVar0);
	}
}

int func_51(int iParam0, int iParam1)
{
	func_55();
	if (Global_1574634.f_18 != 0 || VEHICLE::GET_VEHICLE_IS_DUMMY(*iParam0))
	{
		Global_1950086.f_11 = VEHICLE::GET_FAKE_SUSPENSION_LOWERING_AMOUNT(*iParam0);
		if (Global_1950086.f_11 < 0f)
		{
			Global_1950086.f_11 = 0f;
		}
	}
	func_53(*iParam0, &Global_1950086, &(Global_1950086.f_1), &(Global_1950086.f_4), &(Global_1950086.f_7), &(Global_1950086.f_10));
	Global_1950086.f_1.f_2 = (Global_1950086.f_1.f_2 - Global_1950086.f_11);
	if (Global_1950086.f_4.f_2 < 0f)
	{
		Global_1950086.f_12 = 1;
	}
	Global_1950086.f_13 = 200;
	if (ENTITY::GET_ENTITY_MODEL(*iParam0) == joaat("windsor") || ENTITY::GET_ENTITY_MODEL(*iParam0) == joaat("comet4"))
	{
		Global_1950086.f_13 = 255;
	}
	if (Global_1950086.f_12)
	{
		if (func_52(iParam0, iParam1, Global_1950086, Global_1950086.f_1, Global_1950086.f_4, Global_1950086.f_7, Global_1950086.f_10, 0, Global_1950086.f_13))
		{
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				Global_1576399 = NETWORK::GET_NETWORK_TIME();
			}
			else
			{
				Global_1576399 = MISC::GET_GAME_TIMER();
			}
			return 1;
		}
	}
	else
	{
		Global_1950086.f_14 = { Global_1950086.f_1 };
		Global_1950086.f_14 = (Global_1950086.f_14 * -1f);
		Global_1950086.f_17 = { Global_1950086.f_4 };
		Global_1950086.f_17 = (Global_1950086.f_17 * -1f);
		Global_1950086.f_20 = { Global_1950086.f_7 };
		Global_1950086.f_20.f_1 = (Global_1950086.f_20.f_1 * -1f);
		Global_1950086.f_20.f_2 = (Global_1950086.f_20.f_2 * -1f);
		if (!GRAPHICS::DOES_VEHICLE_HAVE_CREW_EMBLEM(*iParam0, 0))
		{
			Global_1950086.f_23 = GRAPHICS::GET_VEHICLE_CREW_EMBLEM_REQUEST_STATE(*iParam0, 0);
		}
		else
		{
			Global_1950086.f_23 = 3;
		}
		Global_1950086.f_24 = GRAPHICS::GET_VEHICLE_CREW_EMBLEM_REQUEST_STATE(*iParam0, 1);
		if (!GRAPHICS::DOES_VEHICLE_HAVE_CREW_EMBLEM(*iParam0, 1))
		{
			Global_1950086.f_24 = GRAPHICS::GET_VEHICLE_CREW_EMBLEM_REQUEST_STATE(*iParam0, 1);
		}
		else
		{
			Global_1950086.f_24 = 3;
		}
		if (((Global_1950086.f_23 == 0 && func_52(iParam0, iParam1, Global_1950086, Global_1950086.f_1, Global_1950086.f_4, Global_1950086.f_7, Global_1950086.f_10, 0, Global_1950086.f_13)) || Global_1950086.f_23 != 0) && ((Global_1950086.f_24 == 0 && func_52(iParam0, iParam1, Global_1950086, Global_1950086.f_14, Global_1950086.f_17, Global_1950086.f_20, Global_1950086.f_10, 1, Global_1950086.f_13)) || Global_1950086.f_24 != 0))
		{
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				Global_1576399 = NETWORK::GET_NETWORK_TIME();
			}
			else
			{
				Global_1576399 = MISC::GET_GAME_TIMER();
			}
			return 1;
		}
	}
	return 0;
}

bool func_52(var uParam0, int iParam1, int iParam2, struct<3> Param3, struct<3> Param6, struct<3> Param9, float fParam12, int iParam13, int iParam14)
{
	return GRAPHICS::ADD_VEHICLE_CREW_EMBLEM(*uParam0, PLAYER::GET_PLAYER_PED(iParam1), iParam2, Param3, Param6, Param9, fParam12, iParam13, iParam14);
}

int func_53(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		return 0;
	}
	*uParam1 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iParam0, "chassis_dummy");
	if (((!func_54(Global_1950112, 0f, 0f, 0f, 0) && !func_54(Global_1950115, 0f, 0f, 0f, 0)) && !func_54(Global_1950118, 0f, 0f, 0f, 0)) && !Global_1950121 == 0f)
	{
		*uParam2 = { Global_1950112 };
		*uParam3 = { Global_1950115 };
		*uParam4 = { Global_1950118 };
		*uParam5 = Global_1950121;
		return 1;
	}
	switch (ENTITY::GET_ENTITY_MODEL(iParam0))
	{
		case joaat("dominator"):
			*uParam1 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iParam0, "chassis_dummy");
			*uParam2 = { 0f, 1.4f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("feltzer2"):
			*uParam1 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iParam0, "chassis_dummy");
			*uParam2 = { 0f, 1.4f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("adder"):
			*uParam2 = { 0f, 1.54f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("akuma"):
			*uParam2 = { 0f, 0.06f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.18f;
			break;
		
		case joaat("asea"):
			*uParam2 = { 0f, 1.5f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("asterope"):
			*uParam2 = { 0f, 1.7f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("bagger"):
			*uParam2 = { -1f, 0.16f, 0.283f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.09f;
			break;
		
		case joaat("baller"):
			*uParam2 = { 0f, 1.4f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("baller2"):
			*uParam2 = { 0f, 1.55f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("banshee"):
			*uParam2 = { 0f, 0.94f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("bati"):
			*uParam2 = { 0f, 0.2f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.15f;
			break;
		
		case joaat("bati2"):
			*uParam2 = { 0f, 0.2f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.15f;
			break;
		
		case joaat("bfinjection"):
			*uParam2 = { -1f, 0.08f, 0.19f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("bison"):
			*uParam2 = { 0f, 1.99f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("bjxl"):
			*uParam2 = { 0f, 1.2f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("blista"):
			*uParam2 = { 0f, 1.49f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.29f;
			break;
		
		case joaat("bobcatxl"):
			*uParam2 = { 0f, 1.68f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.65f;
			break;
		
		case joaat("bodhi2"):
			*uParam2 = { 0f, 1.95f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("buccaneer"):
			*uParam2 = { 0f, 2.01f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.37f;
			break;
		
		case joaat("buffalo"):
			*uParam2 = { 0f, 1.6f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("buffalo2"):
			*uParam2 = { 0f, 2.24f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.2f;
			break;
		
		case joaat("bullet"):
			*uParam2 = { -1.57f, 0.07f, 0.16f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("carbonrs"):
			*uParam2 = { 0f, 0.09f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.18f;
			break;
		
		case joaat("carbonizzare"):
			*uParam2 = { 0f, 1.45f, 1f };
			*uParam3 = { 0f, -0.11f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("cavalcade"):
			*uParam2 = { 0f, 1.51f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.55f;
			break;
		
		case joaat("cavalcade2"):
			*uParam2 = { 0f, 1.59f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("cheetah"):
			*uParam2 = { -1.61f, 0.26f, 0.17f };
			*uParam3 = { 0.9f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("cogcabrio"):
			*uParam2 = { 0f, 1.42f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("comet2"):
			*uParam2 = { 0f, 1.35f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("coquette"):
			*uParam2 = { 0f, 0.96f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.22f;
			break;
		
		case joaat("daemon"):
			*uParam2 = { 0f, 0.06f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.15f;
			break;
		
		case joaat("dilettante"):
			*uParam2 = { 0f, 1.59f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("dloader"):
			*uParam2 = { 0f, 1.52f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("double"):
			*uParam2 = { 0f, 0.08f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.2f;
			break;
		
		case joaat("dubsta"):
			*uParam2 = { -1.71f, 0.31f, 0.27f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("dubsta2"):
			*uParam2 = { 0f, 1.4f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.75f;
			break;
		
		case joaat("elegy2"):
			*uParam2 = { 0f, 1.14f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("emperor"):
			*uParam2 = { 0f, 1.31f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("emperor2"):
			*uParam2 = { 0f, 1.31f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("entityxf"):
			*uParam2 = { -1.52f, 0.41f, 0.15f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("exemplar"):
			*uParam2 = { 0f, 1.32f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("f620"):
			*uParam2 = { 0f, 1.28f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("faggio2"):
			*uParam2 = { -1f, -0.48f, -0.11f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.15f;
			break;
		
		case joaat("felon"):
			*uParam2 = { 0f, 1.24f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("felon2"):
			*uParam2 = { 0f, 1.24f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("fq2"):
			*uParam2 = { 0f, 1.4f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("fugitive"):
			*uParam2 = { 0f, 1.62f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("fusilade"):
			*uParam2 = { 0f, 0.98f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.2f;
			break;
		
		case -1289225626:
		case joaat("futo"):
			*uParam2 = { 0f, 1.28f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("gauntlet"):
			*uParam2 = { 0f, 1.735f, 1.05f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.33f;
			break;
		
		case joaat("granger"):
			*uParam2 = { 0f, 2.07f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("gresley"):
			*uParam2 = { 0f, 1.75f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("habanero"):
			*uParam2 = { 0f, 1.69f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("hexer"):
			*uParam2 = { 0f, -0.46f, 1f };
			*uParam3 = { 0f, 1f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.14f;
			break;
		
		case joaat("hotknife"):
			*uParam2 = { -1.43f, -0.14f, 0.18f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("infernus"):
			*uParam2 = { -1f, 0.33f, 0.08f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0.06f };
			*uParam5 = 0.25f;
			break;
		
		case joaat("ingot"):
			*uParam2 = { 0f, 1.58f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("intruder"):
			*uParam2 = { 0f, 1.623f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("issi2"):
			*uParam2 = { 0f, 1.21f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("jackal"):
			*uParam2 = { 0f, 1.36f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("jb700"):
			*uParam2 = { 0f, 1.2f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.37f;
			break;
		
		case joaat("khamelion"):
			*uParam2 = { 0f, 1.46f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.475f;
			break;
		
		case joaat("landstalker"):
			*uParam2 = { 0f, 1.83f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("manana"):
			*uParam2 = { 0f, 0.86f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.37f;
			break;
		
		case joaat("mesa"):
			*uParam2 = { 0f, 1.47f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("mesa3"):
			*uParam2 = { 0f, 1.47f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("minivan"):
			*uParam2 = { 0f, 1.95f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("monroe"):
			*uParam2 = { 0f, 1.23f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.43f;
			break;
		
		case joaat("nemesis"):
			*uParam2 = { 0f, 0.14f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.1f;
			break;
		
		case joaat("ninef"):
			*uParam2 = { 0f, 1.7f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("ninef2"):
			*uParam2 = { 0f, 1.7f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("oracle"):
			*uParam2 = { 0f, 1.6f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("oracle2"):
			*uParam2 = { 0f, 1.7f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("patriot"):
			*uParam2 = { 0f, 1.75f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("pcj"):
			*uParam2 = { 0f, 0.02f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.15f;
			break;
		
		case joaat("penumbra"):
			*uParam2 = { 0f, 1.46f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("peyote"):
			*uParam2 = { -1f, -0.36f, 0.2125f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("phoenix"):
			*uParam2 = { 0f, 1.833f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.44f;
			break;
		
		case joaat("picador"):
			*uParam2 = { 0f, 1.43f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.425f;
			break;
		
		case joaat("prairie"):
			*uParam2 = { 0f, 1.41f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.31f;
			break;
		
		case joaat("premier"):
			*uParam2 = { 0f, 1.6f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("primo"):
			*uParam2 = { 0f, 1.62f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("radi"):
			*uParam2 = { 0f, 1.74f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("rancherxl"):
			*uParam2 = { 0f, 1.54f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("rapidgt"):
			*uParam2 = { 0f, 1.263f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("rapidgt2"):
			*uParam2 = { 0f, 1.263f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("ratloader"):
			*uParam2 = { -1.78f, 0.52f, 0.52f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("rebel"):
			*uParam2 = { -1.22f, 0.6f, 0.44f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("rebel2"):
			*uParam2 = { 0f, 1.623f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("regina"):
			*uParam2 = { 0f, 1.473f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("rocoto"):
			*uParam2 = { 0f, 1.623f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("romero"):
			*uParam2 = { 0f, 1.83f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("ruffian"):
			*uParam2 = { 0f, -0.02f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.19f;
			break;
		
		case joaat("ruiner"):
			*uParam2 = { 0f, 1.34f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("sabregt"):
			*uParam2 = { -1f, 0f, 0.14f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0.015f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("sadler"):
			*uParam2 = { 0f, 2.26f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("sandking"):
			*uParam2 = { 0f, 2.496f, 1.55f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("sandking2"):
			*uParam2 = { 0f, 2.286f, 1.55f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("schafter2"):
			*uParam2 = { 0f, 1.56f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.28f;
			break;
		
		case joaat("schwarzer"):
			*uParam2 = { 0f, 1.43f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.28f;
			break;
		
		case joaat("seminole"):
			*uParam2 = { 0f, 1.45f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("sentinel"):
		case -1006198950:
			*uParam2 = { 0f, 1.4f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("sentinel2"):
			*uParam2 = { 0f, 1.52f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("serrano"):
			*uParam2 = { 0f, 1.68f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.49f;
			break;
		
		case joaat("stanier"):
			*uParam2 = { 0f, 1.55f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("stinger"):
			*uParam2 = { 0f, 1.3f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("stingergt"):
			*uParam2 = { -1f, -0.17f, 0.12f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("stratum"):
			*uParam2 = { 0f, 1.52f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("sultan"):
			*uParam2 = { 0f, 1.77f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.33f;
			break;
		
		case joaat("superd"):
			*uParam2 = { 0f, 1.62f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("surano"):
			*uParam2 = { 0f, 1.38f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("surfer"):
			*uParam2 = { 0f, 2.48f, 0.26f };
			*uParam3 = { 0f, -1f, -0.212f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.32f;
			break;
		
		case joaat("surfer2"):
			*uParam2 = { 0f, 2.48f, 0.26f };
			*uParam3 = { 0f, -1f, -0.212f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.32f;
			break;
		
		case joaat("surge"):
			*uParam2 = { 0f, 1.69f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("tailgater"):
			*uParam2 = { 0f, 1.783f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("tornado"):
			*uParam2 = { -1.23f, 0.11f, -0.21f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("tornado2"):
			*uParam2 = { 0f, 1.44f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("tornado3"):
			*uParam2 = { 0f, 1.44f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("vacca"):
			*uParam2 = { 0f, 1.76f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("vader"):
			*uParam2 = { 0f, 0.08f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.15f;
			break;
		
		case joaat("vigero"):
			*uParam2 = { -1f, 0.11f, -0.15f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("voltic"):
			*uParam2 = { 0f, 1.763f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.29f;
			break;
		
		case joaat("voodoo2"):
			*uParam2 = { 0f, 1.48f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("washington"):
			*uParam2 = { 0f, 1.61f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("youga"):
			*uParam2 = { 0f, 2.352f, 1.003f };
			*uParam3 = { 0f, -1f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.175f;
			break;
		
		case joaat("zion"):
			*uParam2 = { 0f, 1.48f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("zion2"):
			*uParam2 = { 0f, 1.48f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("ztype"):
			*uParam2 = { -0.96f, -0.69f, 0.35f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		default:
			*uParam2 = { -1f, 0f, 0.295f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, 0f, -1f };
			*uParam5 = 0.5f;
			break;
	}
	switch (ENTITY::GET_ENTITY_MODEL(iParam0))
	{
		case joaat("kalahari"):
			*uParam2 = { -1f, 0.18f, 0.1f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("paradise"):
			*uParam2 = { 0f, 2.23f, 1f };
			*uParam3 = { 0f, -0.22f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("alpha"):
			*uParam2 = { -1f, 0.18f, -0.05f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("huntley"):
			*uParam2 = { 0f, 1.52f, 0.99f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("zentorno"):
			*uParam2 = { -1.24f, 0.3f, -0.07f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("jester"):
			*uParam2 = { -1f, 0.17f, 0.22f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0.05f };
			*uParam5 = 0.33f;
			break;
		
		case joaat("massacro"):
			*uParam2 = { 0f, 1.37f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.33f;
			break;
		
		case joaat("turismor"):
			*uParam2 = { -1f, 0.3f, 0.27f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("thrust"):
			*uParam2 = { -1f, 0.405f, 0.4625f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.1625f;
			break;
		
		case joaat("btype"):
			*uParam2 = { 0f, 1.143f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.7125f;
			break;
		
		case joaat("rhapsody"):
			*uParam2 = { -1f, -0.47f, -0.25f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.2625f;
			break;
		
		case joaat("glendale"):
			*uParam2 = { 0f, 1.683f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.775f;
			break;
		
		case joaat("warrener"):
			*uParam2 = { 0f, 1.623f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.775f;
			break;
		
		case joaat("blade"):
			*uParam2 = { -1f, 0.445f, 0.2075f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.325f;
			break;
		
		case joaat("panto"):
			*uParam2 = { -1f, 0f, 0.335f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("dubsta3"):
			*uParam2 = { -1f, 0.34f, 0.2975f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("pigalle"):
			*uParam2 = { 0f, 1.623f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("coquette2"):
			*uParam2 = { -1f, -0.1775f, 0.195f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("innovation"):
			*uParam2 = { 0f, 0.15f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.18f;
			break;
		
		case joaat("hakuchou"):
			*uParam2 = { 0f, 0.27f, 0.845f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.16f;
			break;
		
		case joaat("furoregt"):
			*uParam2 = { -1f, 0f, 0.2075f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("ratloader2"):
			*uParam2 = { -1.78f, 0.52f, 0.52f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("slamvan"):
			*uParam2 = { -1f, 0.275f, 0.195f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("dukes2"):
			*uParam2 = { -1f, 0f, 0f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.375f;
			break;
		
		case joaat("dukes"):
			*uParam2 = { -1f, 0f, 0.0375f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3875f;
			break;
		
		case joaat("stalion"):
			*uParam2 = { -1f, 0f, 0.0925f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4375f;
			break;
		
		case joaat("blista2"):
			*uParam2 = { -1f, 0.5325f, 0.245f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.2875f;
			break;
		
		case joaat("casco"):
			*uParam2 = { 0f, 0.94f, 1.03f };
			*uParam3 = { 0f, -0.03f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("enduro"):
			*uParam2 = { 0f, -0.17f, 1f };
			*uParam3 = { 0f, 0.34f, -0.786f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.15f;
			break;
		
		case joaat("gburrito2"):
			*uParam2 = { 0f, 2.32f, 0.94f };
			*uParam3 = { 0f, -0.182f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("guardian"):
			*uParam2 = { -1.94f, 1.07f, 0.38f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("kuruma"):
		case joaat("kuruma2"):
			*uParam2 = { -1f, 0.2475f, -0.175f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.435f;
			break;
		
		case joaat("lectro"):
			*uParam2 = { 0f, 0.3f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.09f;
			break;
		
		case joaat("feltzer3"):
			*uParam1 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iParam0, "chassis_dummy");
			*uParam2 = { 0f, 1.597f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("osiris"):
			*uParam2 = { -1f, 0.27f, -0.03f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("virgo"):
			*uParam2 = { -1.05f, 0f, 0.075f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("windsor"):
			*uParam2 = { -1.2f, -0.39f, 0.12f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.55f;
			break;
		
		case joaat("brawler"):
			*uParam2 = { -1f, -0.21f, 0f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("chino"):
			*uParam2 = { -1.05f, 0f, 0.075f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("coquette3"):
			*uParam2 = { -1f, -0.1775f, 0.195f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("t20"):
			*uParam2 = { -1f, 0.4f, -0.12f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.2f;
			break;
		
		case joaat("vindicator"):
			*uParam2 = { -1f, 0.21f, 0.24f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("faction"):
			*uParam2 = { -1f, 0f, 0.15f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("faction2"):
			*uParam2 = { -1f, 0f, 0.15f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("buccaneer2"):
			*uParam2 = { 0f, 2.01f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.37f;
			break;
		
		case joaat("chino2"):
			*uParam2 = { -1.05f, 0f, 0.075f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("moonbeam"):
			*uParam2 = { 0f, 1.713f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("moonbeam2"):
			*uParam2 = { 0f, 1.713f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("primo2"):
			*uParam2 = { -1f, 0.42f, 0f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("voodoo"):
			*uParam2 = { -1.12f, 0f, 0f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("faction3"):
			*uParam2 = { -1f, 0f, 0.5f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("sabregt2"):
			*uParam2 = { -1f, 0f, 0.14f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0.015f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("tornado5"):
			*uParam2 = { -1f, 0.15f, -0.09f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("virgo2"):
			*uParam2 = { -1f, 0f, 0.1225f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.375f;
			break;
		
		case joaat("virgo3"):
			*uParam2 = { -1f, 0f, 0.1225f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.375f;
			break;
		
		case joaat("minivan2"):
			*uParam2 = { 0f, 1.95f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("slamvan3"):
			*uParam2 = { -1f, 0.275f, 0.195f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("btype2"):
			*uParam2 = { -1f, -0.1f, 0.4f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("lurcher"):
			*uParam2 = { -1f, 0f, 0.3f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("baller3"):
			*uParam2 = { 0f, 1.4f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("baller4"):
			*uParam2 = { 0f, 1.4f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("baller5"):
			*uParam2 = { 0f, 1.4f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("baller6"):
			*uParam2 = { 0f, 1.4f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("cog55"):
			*uParam2 = { -1f, 0.37f, 0.13f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("cog552"):
			*uParam2 = { -1f, 0.37f, 0.13f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("cognoscenti"):
			*uParam2 = { -1f, 0.37f, 0.13f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("cognoscenti2"):
			*uParam2 = { -1f, 0.37f, 0.13f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("mamba"):
			*uParam2 = { -1f, -0.18f, 0.21f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("nightshade"):
			*uParam2 = { -1f, -0.2f, 0.17f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("schafter3"):
			*uParam2 = { 0f, 1.56f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.28f;
			break;
		
		case joaat("schafter4"):
			*uParam2 = { 0f, 1.56f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.28f;
			break;
		
		case joaat("schafter5"):
			*uParam2 = { 0f, 1.56f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.28f;
			break;
		
		case joaat("schafter6"):
			*uParam2 = { 0f, 1.56f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.28f;
			break;
		
		case joaat("verlierer2"):
			*uParam2 = { -1f, -0.21f, 0.03f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("tampa"):
			*uParam2 = { -1f, 0f, 0.12f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("banshee2"):
			*uParam2 = { -1f, -0.4f, 0.075f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("sultanrs"):
			*uParam2 = { 0f, 1.77f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.33f;
			break;
		
		case joaat("btype3"):
			*uParam2 = { -1f, -0.1f, 0.4f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("bestiagts"):
			*uParam2 = { -1f, -0.06f, 0.4f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("seven70"):
			*uParam2 = { -1f, -0.21f, 0.25f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("fmj"):
			*uParam2 = { -1f, -0.06f, 0.21f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("pfister811"):
			*uParam2 = { -1f, 0.06f, 0.25f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("prototipo"):
			*uParam2 = { -1f, 0.3f, 0.27f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("reaper"):
			*uParam2 = { -1f, 0.48f, 0f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("rumpo3"):
			*uParam2 = { 0f, 2.103f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("windsor2"):
			*uParam2 = { -1.2f, 0.03f, 0.24f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.55f;
			break;
		
		case joaat("xls"):
			*uParam2 = { -1f, 0.36f, -0.15f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("xls2"):
			*uParam2 = { -1f, 0.36f, -0.15f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("brioso"):
			*uParam2 = { -1f, -0.06f, 0.565f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("contender"):
			*uParam2 = { 0f, 2.33f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("le7b"):
			*uParam2 = { -1f, -0.12f, 0.235f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("omnis"):
			*uParam2 = { -1f, 0.03f, 0.18f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("tropos"):
			*uParam2 = { -1f, 0f, 0.24f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("avarus"):
			*uParam2 = { -1f, 0.27f, 0.25f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.1f;
			break;
		
		case joaat("daemon2"):
			*uParam2 = { -1f, 0.27f, 0.29f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.1f;
			break;
		
		case joaat("defiler"):
			*uParam2 = { -1f, 0f, 0.34f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.125f;
			break;
		
		case joaat("esskey"):
			*uParam2 = { -1f, 0.335f, 0.31f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.09f;
			break;
		
		case joaat("hakuchou2"):
			*uParam2 = { 0f, 0.27f, 0.845f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.15f;
			break;
		
		case joaat("nightblade"):
			*uParam2 = { 0f, -0.133f, 0.61f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.125f;
			break;
		
		case joaat("ratbike"):
			*uParam2 = { -1f, 0.31f, 0.24f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.1f;
			break;
		
		case joaat("shotaro"):
			*uParam2 = { -1f, 0.06f, 0.325f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.1f;
			break;
		
		case joaat("zombiea"):
			*uParam2 = { -1f, 0.3f, 0.25f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.1f;
			break;
		
		case joaat("zombieb"):
			*uParam2 = { -1f, 0.2f, 0.25f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.1f;
			break;
		
		case joaat("vortex"):
			*uParam2 = { -1f, 0.18f, 0.37f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.095f;
			break;
		
		case joaat("tornado6"):
			*uParam2 = { -1f, -0.03f, -0.24f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("youga2"):
			*uParam2 = { 0f, 2.352f, 0.253f };
			*uParam3 = { 0f, -1f, -0.256f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.175f;
			break;
		
		case joaat("wolfsbane"):
			*uParam2 = { -1f, 0.33f, 0.24f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.1f;
			break;
		
		case joaat("faggio3"):
			*uParam2 = { -1f, -0.54f, -0.11f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.15f;
			break;
		
		case joaat("faggio"):
			*uParam2 = { -0.9875f, -0.0175f, -0.01f };
			*uParam3 = { 0.8975f, -0.26f, -0.0725f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.1625f;
			break;
		
		case joaat("comet3"):
			*uParam2 = { -1f, 0f, 0.295f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("diablous"):
			*uParam2 = { -1f, 0.006f, 0.382f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.1f;
			break;
		
		case joaat("diablous2"):
			*uParam2 = { -1f, 0.225f, 0.541f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.1f;
			break;
		
		case joaat("elegy"):
			*uParam2 = { 0f, 1.14f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("fcr"):
			*uParam2 = { -1f, 0.234f, 0.376f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.1f;
			break;
		
		case joaat("fcr2"):
			*uParam2 = { -1f, 0.234f, 0.376f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.1f;
			break;
		
		case joaat("italigtb"):
			*uParam2 = { -1f, -0.024f, 0.187f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.25f;
			break;
		
		case joaat("italigtb2"):
			*uParam2 = { -1f, -0.024f, 0.187f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.25f;
			break;
		
		case joaat("nero"):
			*uParam2 = { -1f, 0.237f, 0.09f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.25f;
			break;
		
		case joaat("nero2"):
			*uParam2 = { -1f, 0.237f, 0.09f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.25f;
			break;
		
		case joaat("penetrator"):
			*uParam2 = { -1f, 0.153f, 0.295f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("ruiner2"):
			*uParam2 = { 0.363f, 1.34f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("ruiner3"):
			*uParam2 = { 0.363f, 1.34f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("specter"):
			*uParam2 = { -1f, -0.273f, -0.02f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.2f;
			break;
		
		case joaat("specter2"):
			*uParam2 = { -1f, -0.273f, 0.286f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.2f;
			break;
		
		case joaat("technical2"):
			*uParam2 = { 0f, 1.623f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("tempesta"):
			*uParam2 = { -1f, 0f, 0.253f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.25f;
			break;
		
		case joaat("voltic2"):
			*uParam2 = { 0f, 1.763f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.29f;
			break;
		
		case joaat("infernus2"):
			*uParam2 = { -1f, 0.33f, 0.06f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0.06f };
			*uParam5 = 0.2f;
			break;
		
		case joaat("ruston"):
			*uParam2 = { -1f, -0.273f, 0.084f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.15f;
			break;
		
		case joaat("turismo2"):
			*uParam2 = { -1f, 0.159f, -0.193f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.25f;
			break;
		
		case joaat("ardent"):
			*uParam2 = { -1f, 0.309f, 0.276f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.2f;
			break;
		
		case 471399650:
		case joaat("cheetah2"):
			*uParam2 = { -1f, 0.159f, -0.127f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.25f;
			break;
		
		case joaat("halftrack"):
			*uParam2 = { -1f, 0.501f, 0.531f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("nightshark"):
			*uParam2 = { -1.5f, 0.42f, 0.584f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("oppressor"):
			*uParam2 = { -1f, 0.306f, 0.355f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.08f;
			break;
		
		case joaat("tampa3"):
			*uParam2 = { 0f, 1.515f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.275f;
			break;
		
		case joaat("technical3"):
			*uParam2 = { 0f, 1.623f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.43f;
			break;
		
		case joaat("torero"):
			*uParam2 = { -1f, 0.201f, 0.114f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("vagner"):
			*uParam2 = { -1.5f, 0.906f, 0.071f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.1f;
			break;
		
		case joaat("xa21"):
			*uParam2 = { -1f, 0.441f, 0.13f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.25f;
			break;
		
		case joaat("phantom3"):
			*uParam2 = { -1.3f, 2.045f, 0.802f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("hauler2"):
			*uParam2 = { -1.627f, 2.456f, 0.745f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("cyclone"):
			*uParam2 = { -1f, 0.186f, 0.382f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.2f;
			break;
		
		case joaat("visione"):
			*uParam2 = { -1f, 0.432f, 0.031f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.15f;
			break;
		
		case joaat("vigilante"):
			*uParam2 = { -1f, 0.232f, 0.24f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.175f;
			break;
		
		case joaat("retinue"):
			*uParam2 = { -1f, -0.018f, 0.253f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("rapidgt3"):
			*uParam2 = { 0f, 1.972f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.18f;
			break;
		
		case joaat("avenger"):
		case joaat("avenger3"):
			*uParam2 = { -2.02f, 6.45f, -0.716f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("deluxo"):
			*uParam2 = { -1f, -0.291f, 0.247f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.2f;
			break;
		
		case joaat("stromberg"):
			*uParam2 = { -1f, 0.23f, 0.247f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.2f;
			break;
		
		case joaat("riot2"):
			*uParam2 = { -1.891f, 2.144f, 0.657f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("chernobog"):
			*uParam2 = { -2.127f, 5.413f, 1.132f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.34f;
			break;
		
		case joaat("khanjali"):
			*uParam2 = { -0.897f, 1.391f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("barrage"):
			*uParam2 = { -1.51f, 0.71f, 0.451f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.25f;
			break;
		
		case joaat("comet4"):
			*uParam2 = { -1f, 0.298f, 0.257f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.36f;
			break;
		
		case joaat("neon"):
			*uParam2 = { -1f, 0.181f, -0.066f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("streiter"):
			*uParam2 = { -1f, 0.301f, 0.295f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("sentinel3"):
			*uParam2 = { 0f, 1.52f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("yosemite"):
			*uParam2 = { -1f, 0.252f, 0.201f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("sc1"):
			*uParam2 = { -1f, 0.616f, -0.131f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.25f;
			break;
		
		case joaat("autarch"):
			*uParam2 = { -1f, 0f, 0.116f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.25f;
			break;
		
		case joaat("gt500"):
			*uParam2 = { -1f, 0f, 0f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.25f;
			break;
		
		case joaat("hustler"):
			*uParam2 = { -1f, -0.228f, 0.321f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("revolter"):
			*uParam2 = { -1f, 0.203f, 0.126f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("pariah"):
			*uParam2 = { -1f, -0.126f, 0.208f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("raiden"):
			*uParam2 = { -1f, 0.252f, -0.095f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("savestra"):
			*uParam2 = { -1f, 0f, 0.25f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("riata"):
			*uParam2 = { -1.3f, 0.18f, 0.511f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("hermes"):
			*uParam2 = { -1f, -0.134f, 0.158f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("comet5"):
			*uParam2 = { -1f, 0.002f, 0.031f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("z190"):
			*uParam2 = { -1f, -0.175f, 0.242f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("viseris"):
			*uParam2 = { -1f, 0f, 0.244f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.275f;
			break;
		
		case joaat("kamacho"):
			*uParam2 = { 0f, 1.623f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
	}
	switch (ENTITY::GET_ENTITY_MODEL(iParam0))
	{
		case joaat("gb200"):
			*uParam2 = { -1f, 0f, 0.407f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.225f;
			break;
		
		case joaat("fagaloa"):
			*uParam2 = { -1f, 0f, 0.225f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("ellie"):
			*uParam2 = { -1f, 0.441f, -0.128f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("issi3"):
			*uParam2 = { -1f, 0.195f, 0.246f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("michelli"):
			*uParam2 = { -1f, 0f, 0.0805f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("flashgt"):
			*uParam2 = { 0f, 1.592f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.25f;
			break;
		
		case joaat("hotring"):
			*uParam2 = { -1f, 0f, 0f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("tezeract"):
			*uParam2 = { -1f, 0.679f, 0.514f };
			*uParam3 = { 1f, 0f, -0.75f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.175f;
			break;
		
		case joaat("tyrant"):
			*uParam2 = { -1.588f, 0.315f, 0.337f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("dominator3"):
			*uParam2 = { -1f, 0f, 0.221f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("taipan"):
			*uParam2 = { -1f, 0f, 0.219f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("entity2"):
			*uParam2 = { -1.52f, 0.41f, 0.15f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case -362690998:
		case joaat("jester3"):
			*uParam2 = { -1f, 0f, 0.297f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case -1466692365:
		case joaat("cheburek"):
			*uParam2 = { -1f, 0.393f, 0.162f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.375f;
			break;
		
		case joaat("caracara"):
			*uParam2 = { -1f, 1.266f, 0.4115f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("speedo4"):
		case joaat("speedo5"):
			*uParam2 = { -1.5f, 0.833f, 0.391f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.2f;
			break;
		
		case joaat("mule4"):
			*uParam2 = { -1.125f, 2.691f, 0.318f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("pounder2"):
			*uParam2 = { -1.5f, 1.853f, 0.779f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.38f;
			break;
		
		case joaat("swinger"):
			*uParam2 = { -1f, 0.195f, 0.105f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("menacer"):
			*uParam2 = { -1.73f, 0.159f, 0.61f };
			*uParam3 = { 1f, 0.12f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("scramjet"):
			*uParam2 = { -1f, -0.188f, 0f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.25f;
			break;
		
		case joaat("patriot2"):
			*uParam2 = { -1.213f, 1.546f, 0.511f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("stafford"):
			*uParam2 = { -1f, 0.036f, 0.096f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("freecrawler"):
			*uParam2 = { -1f, 0.249f, 0.511f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("oppressor2"):
			*uParam2 = { -1f, 0.306f, 0.355f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.08f;
			break;
		
		case joaat("terbyte"):
			*uParam2 = { -1.73f, 3.397f, 0.724f };
			*uParam3 = { 1f, 0.12f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.25f;
			break;
		
		case joaat("bruiser"):
			*uParam2 = { 0f, 2.12f, 1.241f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0.084f };
			*uParam5 = 0.775f;
			break;
		
		case joaat("bruiser2"):
			*uParam2 = { 0f, 2.12f, 1.241f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0.084f };
			*uParam5 = 0.775f;
			break;
		
		case joaat("bruiser3"):
			*uParam2 = { 0f, 2.12f, 1.241f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0.084f };
			*uParam5 = 0.775f;
			break;
		
		case joaat("brutus"):
			*uParam2 = { -1f, 0.446f, 0.247f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("brutus2"):
			*uParam2 = { -1f, 0.446f, 0.247f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("brutus3"):
			*uParam2 = { -1f, 0.446f, 0.247f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("cerberus"):
			*uParam2 = { -1.432f, 1.443f, 1.292f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("cerberus2"):
			*uParam2 = { -1.432f, 1.443f, 1.292f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("cerberus3"):
			*uParam2 = { -1.432f, 1.443f, 1.292f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("clique"):
			*uParam2 = { -1f, 0.167f, 0.159f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("deveste"):
			*uParam2 = { -1.5f, 1.066f, 0.13f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.15f;
			break;
		
		case joaat("deviant"):
			*uParam2 = { -1f, 0.111f, 0.123f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("dominator4"):
			*uParam2 = { -1f, 0f, 0.417f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("dominator5"):
			*uParam2 = { -1f, 0f, 0.417f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("dominator6"):
			*uParam2 = { -1f, 0f, 0.417f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("impaler"):
			*uParam2 = { -1f, 0f, 0.137f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("impaler2"):
			*uParam2 = { -1f, 0f, 0.137f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("impaler3"):
			*uParam2 = { -1f, 0f, 0.137f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("impaler4"):
			*uParam2 = { -1f, 0f, 0.137f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("imperator"):
			*uParam2 = { -1f, 0f, 0.295f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("imperator2"):
			*uParam2 = { -1f, 0f, 0.295f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("imperator3"):
			*uParam2 = { -1f, 0f, 0.295f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("issi4"):
			*uParam2 = { -1f, 0.195f, 0.246f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("issi5"):
			*uParam2 = { -1f, 0.195f, 0.246f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("issi6"):
			*uParam2 = { -1f, 0.195f, 0.246f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("italigto"):
			*uParam2 = { -1f, -0.091f, 0.207f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.25f;
			break;
		
		case joaat("monster3"):
			*uParam2 = { -1.78f, 0.445f, 0.81f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("monster4"):
			*uParam2 = { -1.78f, 0.445f, 0.81f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("monster5"):
			*uParam2 = { -1.78f, 0.445f, 0.81f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("schlagen"):
			*uParam2 = { -1f, -0.105f, 0.262f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("slamvan4"):
			*uParam2 = { -1f, 0.152f, 0.537f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("slamvan5"):
			*uParam2 = { -1f, 0.152f, 0.537f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("slamvan6"):
			*uParam2 = { -1f, 0.152f, 0.537f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("toros"):
			*uParam2 = { -1f, 0.415f, 0.394f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("tulip"):
			*uParam2 = { -1f, 0.171f, 0.223f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("vamos"):
			*uParam2 = { -1f, 0f, 0.163f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("zr380"):
			*uParam2 = { -1f, 0f, 0.286f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("zr3802"):
			*uParam2 = { -1f, 0f, 0.286f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("zr3803"):
			*uParam2 = { -1f, 0f, 0.286f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("caracara2"):
			*uParam2 = { -1f, 0.687f, 0.4115f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("drafter"):
			*uParam2 = { -1.045f, 0.15f, 0.09f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("dynasty"):
			*uParam2 = { -1f, 0.12f, 0.334f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("emerus"):
			*uParam2 = { -1f, 0.372f, 0.439f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.1f;
			break;
		
		case joaat("gauntlet3"):
			*uParam2 = { -1f, 0f, 0.222f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.33f;
			break;
		
		case -361348193:
		case joaat("gauntlet4"):
			*uParam2 = { -1f, 0f, 0.222f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.33f;
			break;
		
		case joaat("hellion"):
			*uParam2 = { -1f, 0.27f, 0.246f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("issi7"):
			*uParam2 = { -1f, 0.195f, -0.063f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("jugular"):
			*uParam2 = { -1f, 0.213f, 0.213f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("krieger"):
			*uParam2 = { -1f, 0.576f, -0.123f };
			*uParam3 = { 0.997f, -0.105f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.25f;
			break;
		
		case joaat("locust"):
			*uParam2 = { -1f, -0.207f, 0.042f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.2f;
			break;
		
		case joaat("nebula"):
		case 1690421418:
			*uParam2 = { -1f, 0.012f, 0.147f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("neo"):
			*uParam2 = { -1f, 0.216f, 0.216f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("novak"):
			*uParam2 = { -1f, 0.24f, 0.255f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("paragon"):
			*uParam2 = { -1f, 0f, 0.156f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("paragon2"):
			*uParam2 = { -1f, 0f, 0.156f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("peyote2"):
			*uParam2 = { -1f, -0.36f, 0.2125f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("s80"):
			*uParam2 = { -1f, 0.357f, 0.256f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.2f;
			break;
		
		case joaat("thrax"):
			*uParam2 = { -1f, 0.426f, 0.339f };
			*uParam3 = { 1f, 0.06f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("zion3"):
			*uParam2 = { -1f, 0.108f, 0.234f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.25f;
			break;
		
		case joaat("zorrusso"):
			*uParam2 = { -1f, 0.273f, -0.06f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.25f;
			break;
		
		case joaat("slamvan2"):
			*uParam2 = { -1f, 0.35f, 0.456f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.25f;
			break;
		
		case joaat("rebla"):
			*uParam2 = { 0f, 1.9002f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("asbo"):
			*uParam2 = { -1f, 0.104f, 0.339f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("sugoi"):
			*uParam2 = { -1f, 0.104f, 0.223f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("komoda"):
			*uParam2 = { -1f, 0.104f, 0.155f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("vstr"):
			*uParam2 = { -1f, 0.104f, 0.155f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("sultan2"):
			*uParam2 = { -1f, 0.313f, 0.16f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("kanjo"):
			*uParam2 = { -1f, 0.313f, 0.16f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("jb7002"):
			*uParam2 = { 0f, 1.2f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.37f;
			break;
		
		case joaat("yosemite2"):
			*uParam2 = { -1f, 0.252f, 0.201f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("retinue2"):
			*uParam2 = { -1f, -0.018f, 0.253f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("furia"):
			*uParam2 = { -1f, 0.0965f, 0.149f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("everon"):
			*uParam2 = { 0f, 2.019f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("imorgon"):
			*uParam2 = { -1.5f, 0.42f, -0.2f };
			*uParam3 = { 1f, -0.0997f, 0.0415f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("zhaba"):
			*uParam2 = { -1.202f, 0.034f, 0.6635f };
			*uParam3 = { 1f, -0.002f, 0f };
			*uParam4 = { 0f, -0.7398f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("gauntlet5"):
			*uParam2 = { -1.5f, 0.379f, 0.297f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.24f;
			break;
		
		case joaat("dukes3"):
			*uParam2 = { -1f, 0f, 0f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.375f;
			break;
		
		case joaat("manana2"):
			*uParam2 = { -1.76f, 0.105f, 0.009f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.22f;
			break;
		
		case joaat("club"):
			*uParam2 = { 0f, 1.252f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.31f;
			break;
		
		case joaat("glendale2"):
			*uParam2 = { 0f, 2.135f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.205f;
			break;
		
		case joaat("youga3"):
			*uParam2 = { 0f, 2.352f, 0.3f };
			*uParam3 = { 0f, -1f, -0.256f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.135f;
			break;
		
		case joaat("yosemite3"):
			*uParam2 = { -1f, 0.252f, 0.203f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.21f;
			break;
		
		case joaat("seminole2"):
			*uParam2 = { 0f, 1.654f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.25f;
			break;
		
		case joaat("penumbra2"):
			*uParam2 = { -1.08f, 0.28f, -0.093f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("landstalker2"):
			*uParam2 = { -1.64f, 0.7f, 0f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("coquette4"):
			*uParam2 = { -1f, -0.021f, 0.273f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.25f;
			break;
		
		case joaat("tigon"):
			*uParam2 = { -1f, 0.156f, 0.099f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("peyote3"):
			*uParam2 = { -1.5f, -0.36f, 0.2125f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("brioso2"):
			*uParam2 = { -1f, 0.275f, 0.215f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("slamtruck"):
			*uParam2 = { -1f, 1.454f, 0.485f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("italirsx"):
			*uParam2 = { -1f, 0.109f, 0.129f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("toreador"):
			*uParam2 = { -1f, 0.194f, 0.342f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.15f;
			break;
		
		case joaat("weevil"):
			*uParam2 = { -1f, 0.111f, 0.168f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("zr350"):
			*uParam2 = { 0f, 1.632f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.19f;
			break;
		
		case joaat("calico"):
			*uParam2 = { -1f, 0.497f, 0.212f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("jester4"):
			*uParam2 = { -1f, 0f, 0.181f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("comet6"):
			*uParam2 = { -1f, 0.205f, 0.074f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("warrener2"):
			*uParam2 = { -1f, 0.408f, 0.295f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("remus"):
			*uParam2 = { -1f, 0.204f, 0.357f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("vectre"):
			*uParam2 = { -1f, 0.249f, 0.164f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("dominator7"):
			*uParam2 = { -1f, 0.253f, 0.142f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("cypher"):
		case 258105345:
			*uParam2 = { -1f, 0.223f, 0.185f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case 1730644782:
		case joaat("rt3000"):
			*uParam2 = { -1f, 0f, 0.189f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("sultan3"):
			*uParam2 = { -1f, 0.42f, 0.309f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.23f;
			break;
		
		case joaat("tailgater2"):
			*uParam2 = { -1f, 0.337f, 0.283f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("previon"):
			*uParam2 = { -1f, 0.14f, -0.155f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("dominator8"):
			*uParam2 = { -1f, 0.153f, -0.006f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("futo2"):
			*uParam2 = { -1f, 0.318f, -0.013f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("euros"):
			*uParam2 = { -1f, 0.101f, 0.187f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("growler"):
			*uParam2 = { -1f, 0.151f, 0.149f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("cinquemila"):
			*uParam2 = { -1f, 0.533f, 0.197f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("champion"):
			*uParam2 = { -1f, 0.076f, 0.122f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("granger2"):
			*uParam2 = { -1f, 0.461f, 0.264f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("deity"):
			*uParam2 = { -1f, 0.279f, 0.235f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("buffalo4"):
			*uParam2 = { -1f, 0.251f, 0.149f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("baller7"):
			*uParam2 = { -1.194f, 0.182f, 0f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("zeno"):
			*uParam2 = { -1.194f, 0.409f, 0.199f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.22f;
			break;
		
		case joaat("comet7"):
			*uParam2 = { -1f, 0.05f, 0.187f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("astron"):
			*uParam2 = { -1f, 0.249f, 0.39f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("patriot3"):
			*uParam2 = { -1.2f, 0.474f, 0.335f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.23f;
			break;
		
		case joaat("jubilee"):
			*uParam2 = { -1.037f, 0.438f, 0.31f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("shinobi"):
			*uParam2 = { 0f, 0.306f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.045f;
			break;
		
		case joaat("reever"):
			*uParam2 = { -1f, 0.292f, 0.29f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.1f;
			break;
		
		case joaat("iwagen"):
			*uParam2 = { -1f, 0.387f, 0.209f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("brioso3"):
			*uParam2 = { -1f, 0.15f, 0.2f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("corsita"):
			*uParam2 = { -1f, 0.1f, 0.22f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("greenwood"):
			*uParam2 = { -1f, 0.2f, 0.138f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("kanjosj"):
			*uParam2 = { -1f, 0.1f, 0.26f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("postlude"):
			*uParam2 = { -1f, 0f, 0.28f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("rhinehart"):
			*uParam2 = { 0f, 1.317f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.33f;
			break;
		
		case joaat("tenf"):
			*uParam2 = { -1f, 0.74f, 0.19f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.28f;
			break;
		
		case joaat("tenf2"):
			*uParam2 = { -1f, 0.74f, 0.19f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.28f;
			break;
		
		case joaat("torero2"):
			*uParam2 = { -1f, 0f, 0.22f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("vigero2"):
			*uParam2 = { -1f, -0.07f, 0.3f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("weevil2"):
			*uParam2 = { -1f, 0.07f, 0.13f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("draugur"):
			*uParam2 = { -1f, 0.5f, 0.48f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("ruiner4"):
			*uParam2 = { -1f, 0.5f, 0.182f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.28f;
			break;
		
		case joaat("sentinel4"):
		case -986656474:
			*uParam2 = { -1f, 0.147f, 0.239f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("sm722"):
			*uParam2 = { -1f, -0.4f, 0.18f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("omnisegt"):
			*uParam2 = { 0f, 1.462f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.29f;
			break;
		
		case joaat("powersurge"):
			*uParam2 = { -1f, 0.3f, 0.37f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.1f;
			break;
		
		case joaat("entity3"):
			*uParam2 = { -1f, 0.5f, 0.225f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.25f;
			break;
		
		case joaat("manchez3"):
			*uParam2 = { -1f, 0.066f, 0.329f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.1f;
			break;
		
		case joaat("surfer3"):
			*uParam2 = { -1f, 1.19f, 0.18f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("boor"):
			*uParam2 = { -1f, 0.25f, 0.4f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("eudora"):
			*uParam2 = { 0f, 1.623f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.7f;
			break;
		
		case joaat("tulip2"):
			*uParam2 = { -1f, 0f, 0.22f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("r300"):
			*uParam2 = { -1f, 0f, 0.22f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("virtue"):
			*uParam2 = { -1f, 0f, 0.22f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("issi8"):
			*uParam2 = { -1f, 0.3f, 0f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("broadway"):
			*uParam2 = { -1f, -0.4f, 0.375f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("panthere"):
			*uParam2 = { -1f, 0.069f, 0.13f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("tahoma"):
			*uParam2 = { -1f, -0.253f, 0.39f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("everon2"):
			*uParam2 = { -1f, 0.101f, 0.227f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.6f;
			break;
	}
	switch (ENTITY::GET_ENTITY_MODEL(iParam0))
	{
		case joaat("l35"):
			*uParam2 = { -1f, 0.2f, 0.43f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("brigham"):
			*uParam2 = { -0.003f, 2.764f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.2f;
			break;
		
		case joaat("gauntlet6"):
			*uParam2 = { -1.5f, 0.4f, 0.1f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.24f;
			break;
		
		case joaat("stingertt"):
			*uParam2 = { 0f, 1.623f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.25f;
			break;
		
		case joaat("buffalo5"):
			*uParam2 = { 0f, 1.5f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("ratel"):
			*uParam2 = { -1f, 0.128f, 0.212f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.42f;
			break;
		
		case joaat("clique2"):
			*uParam2 = { -1f, 0.088f, 0.438f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.28f;
			break;
		
		case joaat("coureur"):
			*uParam2 = { -1f, 0f, 0.295f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("monstrociti"):
			*uParam2 = { -1f, 0f, 0.295f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("driftfr36"):
			*uParam2 = { -1f, 0.1f, 0.026f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.44f;
			break;
		
		case joaat("driftyosemite"):
			*uParam2 = { -1f, 0.252f, 0.201f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("driftremus"):
			*uParam2 = { -1f, 0.204f, 0.357f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("drifteuros"):
			*uParam2 = { -1f, 0.101f, 0.187f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("driftfuto"):
			*uParam2 = { -1f, 0.318f, -0.013f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("driftjester"):
			*uParam2 = { -1f, 0f, 0.181f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("driftzr350"):
			*uParam2 = { 0f, 1.632f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.19f;
			break;
		
		case joaat("aleutian"):
			*uParam2 = { 0f, 2.1f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("dominator9"):
		case -855850193:
			*uParam2 = { -1f, 0f, 0.295f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("fr36"):
			*uParam2 = { -1f, 0.1f, 0.026f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.44f;
			break;
		
		case joaat("cavalcade3"):
			*uParam2 = { -1.6f, 0.585f, 0.3f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("impaler5"):
			*uParam2 = { -1f, 0.16f, 0.295f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.43f;
			break;
		
		case joaat("asterope2"):
			*uParam2 = { -1f, 0.15f, 0.075f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.46f;
			break;
		
		case joaat("dorado"):
			*uParam2 = { -1f, 0.229f, 0.37f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.36f;
			break;
		
		case joaat("impaler6"):
			*uParam2 = { -1f, 0.216f, 0.124f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.41f;
			break;
		
		case joaat("vivanite"):
			*uParam2 = { -1f, 0.475f, 0.05f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case -1240172147:
		case -143587026:
			*uParam2 = { 0f, 1.141f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.25f;
			break;
		
		case 1249425552:
			*uParam2 = { -1f, 0.16f, 0.295f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.43f;
			break;
		
		case 1307736079:
			*uParam2 = { -1f, 0.315f, 0.1587f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0.0455f };
			*uParam5 = 0.4f;
			break;
		
		case 1452003510:
			*uParam2 = { -1f, 0.216f, 0.124f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.41f;
			break;
		
		case -223461503:
			*uParam2 = { -1f, -0.0897f, 0f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.2375f;
			break;
		
		case 1121330119:
			*uParam2 = { -1f, 0f, 0.2702f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.43f;
			break;
		
		case 1579902654:
		case -939601823:
			*uParam2 = { -1f, 0f, 0.0653f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case -1896488056:
			*uParam2 = { -1.229f, 0.6f, 0.361f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case -999594302:
			*uParam2 = { 0f, 1.71f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case 1881415402:
			*uParam2 = { -1f, 0.175f, 0.22f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case -1958428933:
			*uParam2 = { -1f, 0f, 0.075f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case -946047670:
			*uParam2 = { -1f, 0f, 0.175f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case 1968807591:
			*uParam2 = { 0f, 1.0569f, 1f };
			*uParam3 = { 0f, -0.5995f, -1f };
			*uParam4 = { -0.4071f, 0f, 0f };
			*uParam5 = 0.2f;
			break;
		
		case 1992041063:
		case 457814204:
			*uParam2 = { -1f, 0.2073f, 0.1513f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0.0285f };
			*uParam5 = 0.365f;
			break;
		
		case -660007725:
		case 1484920335:
		case 127317925:
			*uParam2 = { 0f, 1.4f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.335f;
			break;
		
		case 1534326199:
			*uParam2 = { 0f, 1.4f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.335f;
			break;
		
		case -973016778:
			*uParam2 = { -1f, 0.2805f, 0.262f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.445f;
			break;
		
		case -1585673997:
			*uParam2 = { -1f, -0.138f, 0.152f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.28f;
			break;
		
		case 1580292663:
		case -401558446:
			*uParam2 = { -1f, 0.126f, 0.1025f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.2575f;
			break;
		
		case -1982433631:
		case 691148275:
			*uParam2 = { -1f, 0.15f, 0.386f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case 687627128:
			*uParam2 = { -1f, 0.1692f, -0.005f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.1525f;
			break;
		
		case -1508420500:
			*uParam2 = { -1f, 0.1117f, 0.2103f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.2775f;
			break;
		
		case 554408685:
			*uParam2 = { -1f, 0.49f, 0.525f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case 1761301369:
			*uParam2 = { -1f, 0f, 0.11f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case -1101107018:
			*uParam2 = { -1f, 0.355f, 0.205f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case 893780296:
			*uParam2 = { -1.0113f, -0.1503f, 0.139f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.405f;
			break;
		
		case -402415705:
		case -1555091703:
			*uParam2 = { 1f, 0.93f, 0.54f };
			*uParam3 = { -1f, 0f, 0f };
			*uParam4 = { 0f, 1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case -358638792:
			*uParam2 = { 0f, 1.6402f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case -938068410:
			*uParam2 = { -0.9362f, 0.2907f, 0.4678f };
			*uParam3 = { 0.495f, 0.3753f, -0.521f };
			*uParam4 = { 0.1125f, -0.6432f, -0.0953f };
			*uParam5 = 0.455f;
			break;
		
		case -1778998583:
			*uParam2 = { -1f, 0.43f, 0.12f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case 1380582820:
			*uParam2 = { -1f, 0.2f, 0.284f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.43f;
			break;
		
		case -1007324375:
			*uParam2 = { -1f, -0.06f, 0.41f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.1f;
			break;
		
		case 1596736441:
			*uParam2 = { -1f, 0f, 0.12f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
	}
	return 1;
}

bool func_54(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

void func_55()
{
	Global_1950086 = 0;
	Global_1950086.f_1 = { 0f, 0f, 0f };
	Global_1950086.f_4 = { 0f, 0f, 0f };
	Global_1950086.f_7 = { 0f, 0f, 0f };
	Global_1950086.f_10 = 0f;
	Global_1950086.f_11 = 0f;
	Global_1950086.f_12 = 0;
	Global_1950086.f_13 = 0;
	Global_1950086.f_14 = { 0f, 0f, 0f };
	Global_1950086.f_17 = { 0f, 0f, 0f };
	Global_1950086.f_20 = { 0f, 0f, 0f };
	Global_1950086.f_23 = 0;
	Global_1950086.f_24 = 0;
}

int func_56(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		if (GRAPHICS::DOES_VEHICLE_HAVE_CREW_EMBLEM(iParam0, 0) || func_57(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_57(int iParam0)
{
	int iVar0;
	
	if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
		{
			if (DECORATOR::DECOR_EXIST_ON(iParam0, "MPBitset"))
			{
				iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "MPBitset");
				return BitTest(iVar0, 16);
			}
		}
	}
	return 0;
}

int func_58(int iParam0, var* uParam1)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	
	if (NETWORK::NETWORK_IS_HANDLE_VALID(uParam1, 13) && NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(uParam1))
	{
		iVar0 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(uParam1);
	}
	else
	{
		iVar0 = func_118();
	}
	bVar1 = false;
	if (iVar0 == PLAYER::PLAYER_ID())
	{
		if (func_70(15, 0))
		{
			bVar1 = true;
		}
		else if (func_66(1))
		{
			bVar1 = true;
		}
	}
	else
	{
		bVar1 = true;
	}
	if (((!bVar1 && ENTITY::DOES_ENTITY_EXIST(iParam0)) && !ENTITY::IS_ENTITY_DEAD(iParam0, false)) && ((NETWORK::NETWORK_IS_HANDLE_VALID(uParam1, 13) && NETWORK::NETWORK_CLAN_SERVICE_IS_VALID()) && NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(uParam1)))
	{
		iVar2 = Global_2359296[func_65() /*5574*/].f_681.f_2;
		if (iVar2 > -1 && iVar2 < 607)
		{
			if (BitTest(Global_1583765[iVar2 /*143*/].f_104, 8))
			{
				bVar1 = true;
			}
		}
	}
	if (((((((!(ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0, false)) || !NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0)) || !NETWORK::NETWORK_CHECK_USER_CONTENT_PRIVILEGES(0, -1, true)) || !((NETWORK::NETWORK_IS_HANDLE_VALID(uParam1, 13) && NETWORK::NETWORK_CLAN_SERVICE_IS_VALID()) && NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(uParam1))) || iVar0 == func_118()) || !func_357(iVar0, 0, 0)) || !bVar1) || func_59(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_59(int iParam0)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 1;
	}
	if (func_61(PLAYER::PLAYER_ID()) == 3)
	{
		if (func_60(iParam0) != -1)
		{
			return 1;
		}
	}
	if (Global_1950111)
	{
		return 1;
	}
	switch (ENTITY::GET_ENTITY_MODEL(iParam0))
	{
		case joaat("sanchez"):
		case joaat("sanchez2"):
		case joaat("blazer"):
		case joaat("blazer3"):
		case joaat("surfer"):
		case joaat("surfer2"):
		case joaat("bifta"):
		case joaat("sovereign"):
		case joaat("hexer"):
		case joaat("dune"):
		case joaat("dune2"):
		case joaat("dune4"):
		case joaat("dune5"):
		case joaat("insurgent"):
		case joaat("insurgent2"):
		case joaat("blista3"):
		case joaat("stalion2"):
		case joaat("gauntlet2"):
		case joaat("dominator2"):
		case joaat("buffalo3"):
		case joaat("massacro2"):
		case joaat("jester2"):
		case joaat("omnis"):
		case joaat("bf400"):
		case joaat("tropos"):
		case joaat("brioso"):
		case joaat("trophytruck"):
		case joaat("trophytruck2"):
		case joaat("cliffhanger"):
		case joaat("tampa2"):
		case joaat("gargoyle"):
		case joaat("deathbike"):
		case joaat("deathbike2"):
		case joaat("deathbike3"):
		case joaat("le7b"):
		case joaat("tyrus"):
		case joaat("lynx"):
		case joaat("sheava"):
		case joaat("chimera"):
		case joaat("sanctus"):
		case joaat("blazer4"):
		case joaat("manchez"):
		case joaat("raptor"):
		case joaat("blazer5"):
		case joaat("stryder"):
		case joaat("formula"):
		case joaat("formula2"):
		case joaat("minitank"):
		case joaat("outlaw"):
		case joaat("vagrant"):
		case joaat("openwheel1"):
		case joaat("openwheel2"):
		case joaat("manchez2"):
		case joaat("squaddie"):
		case joaat("winky"):
		case joaat("veto"):
		case joaat("veto2"):
		case joaat("verus"):
		case joaat("lm87"):
		case joaat("gp1"):
		case joaat("apc"):
		case joaat("dune3"):
		case joaat("insurgent3"):
		case joaat("trailerlarge"):
		case joaat("trailersmall2"):
		case joaat("phantom3"):
		case joaat("hauler2"):
		case joaat("thruster"):
		case joaat("terbyte"):
		case joaat("rcbandito"):
		case joaat("scarab"):
		case joaat("scarab2"):
		case joaat("scarab3"):
		case joaat("rrocket"):
		case joaat("blazer2"):
		case joaat("burrito2"):
		case joaat("ignus"):
		case joaat("draugur"):
		case joaat("brickade2"):
		case joaat("journey2"):
		case joaat("stingertt"):
		case joaat("drifttampa"):
		case joaat("turismo3"):
		case joaat("polgauntlet"):
		case joaat("police5"):
		case joaat("police4"):
		case joaat("baller8"):
		case joaat("vigero3"):
		case joaat("terminus"):
		case 1249425552:
		case 1452003510:
		case 1737348074:
		case -1628000569:
		case -773802025:
		case -1321131184:
		case 2042703219:
		case -1948949064:
		case 1891140410:
		case -1921512137:
		case 1966698497:
		case 287906327:
		case 617517171:
		case -1007324375:
			return 1;
			break;
		
		case joaat("youga"):
		case joaat("youga2"):
			if (VEHICLE::GET_VEHICLE_MOD(iParam0, 7) != -1)
			{
				return 1;
			}
			break;
		
		case joaat("surano"):
			if (VEHICLE::GET_VEHICLE_MOD(iParam0, 5) == 1)
			{
				return 1;
			}
			break;
		
		case joaat("club"):
			if ((VEHICLE::GET_VEHICLE_MOD(iParam0, 7) == 0 || VEHICLE::GET_VEHICLE_MOD(iParam0, 7) == 1) || VEHICLE::GET_VEHICLE_MOD(iParam0, 7) == 7)
			{
				return 1;
			}
			break;
		
		case joaat("yosemite3"):
			if ((VEHICLE::GET_VEHICLE_MOD(iParam0, 45) == 4 || VEHICLE::GET_VEHICLE_MOD(iParam0, 45) == 5) || VEHICLE::GET_VEHICLE_MOD(iParam0, 45) == 6)
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_60(int iParam0)
{
	if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("FMDeliverableID", 3))
	{
		if (DECORATOR::DECOR_EXIST_ON(iParam0, "FMDeliverableID"))
		{
			return DECORATOR::DECOR_GET_INT(iParam0, "FMDeliverableID");
		}
	}
	return -1;
}

int func_61(int iParam0)
{
	if (func_64(iParam0) == 233)
	{
		return func_62(iParam0);
	}
	return -1;
}

int func_62(int iParam0)
{
	if (func_63(iParam0, 0))
	{
		return Global_1892653[iParam0 /*615*/].f_10.f_183;
	}
	return -1;
}

int func_63(int iParam0, int iParam1)
{
	if (func_37(iParam0))
	{
		if (Global_1892653[iParam0 /*615*/].f_10.f_34 != -1 || (iParam1 && Global_1892653[iParam0 /*615*/].f_10.f_33 != -1))
		{
			return 1;
		}
	}
	return 0;
}

int func_64(int iParam0)
{
	if (func_37(iParam0))
	{
		if (func_63(iParam0, 0))
		{
			return Global_1892653[iParam0 /*615*/].f_10.f_34;
		}
	}
	return -1;
}

int func_65()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

bool func_66(bool bParam0)
{
	return func_67(PLAYER::PLAYER_ID(), bParam0);
}

int func_67(int iParam0, bool bParam1)
{
	return func_68(iParam0, bParam1, 1);
}

int func_68(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (!func_37(iParam0))
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_69(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_1892653[iParam0 /*615*/].f_10;
	if (func_37(iVar0) && Global_1892653[iVar0 /*615*/].f_10.f_433 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_69(int iParam0, int iParam1)
{
	if (func_37(iParam0))
	{
		if (func_37(Global_1892653[iParam0 /*615*/].f_10))
		{
			if (Global_1892653[iParam0 /*615*/].f_10 == iParam0 && Global_1892653[iParam0 /*615*/].f_10.f_433 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_70(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1;
	
	if (bParam1)
	{
		if (iParam0 == 15)
		{
			return 1;
		}
	}
	if (func_75(PLAYER::PLAYER_ID()))
	{
		switch (iParam0)
		{
			case 4:
			case 5:
			case 12:
			case 15:
				return 1;
				break;
			}
	}
	uVar0 = func_72(iParam0);
	iVar1 = iParam0;
	return BitTest(uVar0, func_71(iVar1));
}

int func_71(int iParam0)
{
	return (iParam0 % 32);
}

var func_72(int iParam0)
{
	var uVar0;
	
	uVar0 = func_41(func_73(iParam0), -1);
	return uVar0;
}

int func_73(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	iVar1 = func_74(iVar0);
	switch (iVar1)
	{
		case 0:
			return 1291;
			break;
	}
	return 1291;
}

int func_74(int iParam0)
{
	return (iParam0 / 32);
}

int func_75(int iParam0)
{
	if (iParam0 != func_118())
	{
		if (func_76(iParam0) && Global_2658291[iParam0 /*468*/].f_325.f_11 == iParam0)
		{
			return 1;
		}
	}
	return 0;
}

int func_76(int iParam0)
{
	if (iParam0 != func_118())
	{
		if (func_357(iParam0, 1, 1))
		{
			if (Global_2658291[iParam0 /*468*/].f_325.f_8 != -1)
			{
				return func_77(Global_2658291[iParam0 /*468*/].f_325.f_8) == 22;
			}
		}
	}
	return 0;
}

int func_77(int iParam0)
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

void func_78(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_80(iParam1);
	func_79(iVar1, &iVar0);
	VEHICLE::SET_VEHICLE_EXTRA_COLOUR_6(iParam0, iVar0);
}

bool func_79(int iParam0, var uParam1)
{
	*uParam1 = -1;
	switch (iParam0)
	{
		case 0:
			*uParam1 = 4;
			break;
		
		case 1:
			*uParam1 = 5;
			break;
		
		case 2:
			*uParam1 = 6;
			break;
		
		case 3:
			*uParam1 = 7;
			break;
		
		case 4:
			*uParam1 = 111;
			break;
		
		case 5:
			*uParam1 = 112;
			break;
		
		case 6:
			*uParam1 = 107;
			break;
		
		case 7:
			*uParam1 = 104;
			break;
		
		case 8:
			*uParam1 = 98;
			break;
		
		case 9:
			*uParam1 = 100;
			break;
		
		case 10:
			*uParam1 = 102;
			break;
		
		case 11:
			*uParam1 = 99;
			break;
		
		case 12:
			*uParam1 = 105;
			break;
		
		case 13:
			*uParam1 = 106;
			break;
		
		case 14:
			*uParam1 = 37;
			break;
		
		case 15:
			*uParam1 = 90;
			break;
		
		case 16:
			*uParam1 = 88;
			break;
		
		case 17:
			*uParam1 = 89;
			break;
		
		case 18:
			*uParam1 = 91;
			break;
		
		case 19:
			*uParam1 = 38;
			break;
		
		case 20:
			*uParam1 = 138;
			break;
		
		case 21:
			*uParam1 = 36;
			break;
		
		case 22:
			*uParam1 = 27;
			break;
		
		case 23:
			*uParam1 = 28;
			break;
		
		case 24:
			*uParam1 = 29;
			break;
		
		case 25:
			*uParam1 = 150;
			break;
		
		case 26:
			*uParam1 = 30;
			break;
		
		case 27:
			*uParam1 = 31;
			break;
		
		case 28:
			*uParam1 = 32;
			break;
		
		case 29:
			*uParam1 = 35;
			break;
		
		case 30:
			*uParam1 = 135;
			break;
		
		case 31:
			*uParam1 = 137;
			break;
		
		case 32:
			*uParam1 = 136;
			break;
		
		case 33:
			*uParam1 = 71;
			break;
		
		case 34:
			*uParam1 = 145;
			break;
		
		case 35:
			*uParam1 = 63;
			break;
		
		case 36:
			*uParam1 = 64;
			break;
		
		case 37:
			*uParam1 = 65;
			break;
		
		case 38:
			*uParam1 = 66;
			break;
		
		case 39:
			*uParam1 = 67;
			break;
		
		case 40:
			*uParam1 = 68;
			break;
		
		case 41:
			*uParam1 = 69;
			break;
		
		case 42:
			*uParam1 = 73;
			break;
		
		case 43:
			*uParam1 = 70;
			break;
		
		case 44:
			*uParam1 = 74;
			break;
		
		case 45:
			*uParam1 = 51;
			break;
		
		case 46:
			*uParam1 = 53;
			break;
		
		case 47:
			*uParam1 = 54;
			break;
		
		case 48:
			*uParam1 = 92;
			break;
	}
	return *uParam1 != -1;
}

int func_80(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		
		case 1:
			return 36;
		
		case 2:
			return 35;
		
		case 3:
			return 46;
		
		case 4:
			return 48;
		
		case 5:
			return 16;
		
		case 6:
			return 14;
		
		case 7:
			return 19;
		
		case 8:
			return 22;
		
		case 9:
			return 31;
		
		case 10:
			return 30;
		
		case 11:
			return 33;
		
		case 12:
			return 34;
		
		default:
	}
	return 0;
}

int func_81(int iParam0, int iParam1, int iParam2)
{
	if ((iParam0 == 222 && iParam1 == 222) && iParam2 == 255)
	{
		return 0;
	}
	if ((iParam0 == 2 && iParam1 == 21) && iParam2 == 255)
	{
		return 1;
	}
	if ((iParam0 == 3 && iParam1 == 83) && iParam2 == 255)
	{
		return 2;
	}
	if ((iParam0 == 0 && iParam1 == 255) && iParam2 == 140)
	{
		return 3;
	}
	if ((iParam0 == 94 && iParam1 == 255) && iParam2 == 1)
	{
		return 4;
	}
	if ((iParam0 == 255 && iParam1 == 255) && iParam2 == 0)
	{
		return 5;
	}
	if ((iParam0 == 255 && iParam1 == 150) && iParam2 == 5)
	{
		return 6;
	}
	if ((iParam0 == 255 && iParam1 == 62) && iParam2 == 0)
	{
		return 7;
	}
	if ((iParam0 == 255 && iParam1 == 1) && iParam2 == 1)
	{
		return 8;
	}
	if ((iParam0 == 255 && iParam1 == 50) && iParam2 == 100)
	{
		return 9;
	}
	if ((iParam0 == 255 && iParam1 == 5) && iParam2 == 190)
	{
		return 10;
	}
	if ((iParam0 == 35 && iParam1 == 1) && iParam2 == 255)
	{
		return 11;
	}
	if ((iParam0 == 15 && iParam1 == 3) && iParam2 == 255)
	{
		return 12;
	}
	if ((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && func_82()) && Global_1576247)
	{
		if ((iParam0 == Global_1576248 && iParam1 == Global_1576249) && iParam2 == Global_1576250)
		{
			return 13;
		}
	}
	return 0;
}

int func_82()
{
	struct<13> Var0;
	
	if (PLAYER::IS_PLAYER_ONLINE())
	{
		if ((NETWORK::NETWORK_IS_SIGNED_ONLINE() && NETWORK::NETWORK_IS_SIGNED_IN()) && NETWORK::NETWORK_HAS_SOCIAL_CLUB_ACCOUNT())
		{
			Var0 = { func_83() };
			if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID() && NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Var0))
			{
				return 1;
			}
		}
	}
	return 0;
}

struct<13> func_83()
{
	struct<13> Var0;
	
	NETWORK::NETWORK_GET_LOCAL_HANDLE(&Var0, 13);
	return Var0;
}

int func_84(int iParam0)
{
	switch (ENTITY::GET_ENTITY_MODEL(iParam0))
	{
		case joaat("deathbike2"):
			return 1;
			break;
	}
	return 0;
}

bool func_85(int iParam0, var uParam1)
{
	*uParam1 = -1f;
	switch (iParam0)
	{
		case joaat("dune5"):
			*uParam1 = 1f;
			break;
		
		case joaat("boxville5"):
			*uParam1 = 1f;
			break;
		
		case joaat("wastelander"):
			*uParam1 = 1f;
			break;
		
		case joaat("alphaz1"):
			*uParam1 = 0.2f;
			break;
		
		case joaat("bombushka"):
			*uParam1 = 0.15f;
			break;
		
		case joaat("howard"):
			*uParam1 = 0.3f;
			break;
		
		case joaat("hunter"):
			*uParam1 = 0.5f;
			break;
		
		case joaat("microlight"):
			*uParam1 = 0.3f;
			break;
		
		case joaat("mogul"):
			*uParam1 = 0.4f;
			break;
		
		case joaat("molotok"):
			*uParam1 = 0.3f;
			break;
		
		case joaat("nokota"):
			*uParam1 = 0.4f;
			break;
		
		case joaat("pyro"):
			*uParam1 = 0.4f;
			break;
		
		case joaat("rogue"):
			*uParam1 = 0.4f;
			break;
		
		case joaat("seabreeze"):
			*uParam1 = 0.3f;
			break;
		
		case joaat("starling"):
			*uParam1 = 0.5f;
			break;
		
		case joaat("tula"):
			*uParam1 = 0.15f;
			break;
		
		case joaat("khanjali"):
			*uParam1 = 0.6f;
			break;
		
		case joaat("bruiser"):
			*uParam1 = 1f;
			break;
		
		case joaat("bruiser2"):
			*uParam1 = 1f;
			break;
		
		case joaat("bruiser3"):
			*uParam1 = 1f;
			break;
		
		case joaat("brutus"):
			*uParam1 = 1f;
			break;
		
		case joaat("brutus2"):
			*uParam1 = 1f;
			break;
		
		case joaat("brutus3"):
			*uParam1 = 1f;
			break;
		
		case joaat("cerberus"):
			*uParam1 = 1f;
			break;
		
		case joaat("cerberus2"):
			*uParam1 = 1f;
			break;
		
		case joaat("cerberus3"):
			*uParam1 = 1f;
			break;
		
		case joaat("deathbike"):
			*uParam1 = 1f;
			break;
		
		case joaat("deathbike2"):
			*uParam1 = 1f;
			break;
		
		case joaat("deathbike3"):
			*uParam1 = 1f;
			break;
		
		case joaat("dominator4"):
			*uParam1 = 1f;
			break;
		
		case joaat("dominator5"):
			*uParam1 = 1f;
			break;
		
		case joaat("dominator6"):
			*uParam1 = 1f;
			break;
		
		case joaat("impaler2"):
			*uParam1 = 1f;
			break;
		
		case joaat("impaler3"):
			*uParam1 = 1f;
			break;
		
		case joaat("impaler4"):
			*uParam1 = 1f;
			break;
		
		case joaat("imperator"):
			*uParam1 = 1f;
			break;
		
		case joaat("imperator2"):
			*uParam1 = 1f;
			break;
		
		case joaat("imperator3"):
			*uParam1 = 1f;
			break;
		
		case joaat("issi4"):
			*uParam1 = 1f;
			break;
		
		case joaat("issi5"):
			*uParam1 = 1f;
			break;
		
		case joaat("issi6"):
			*uParam1 = 1f;
			break;
		
		case joaat("monster3"):
			*uParam1 = 1f;
			break;
		
		case joaat("monster4"):
			*uParam1 = 1f;
			break;
		
		case joaat("monster5"):
			*uParam1 = 1f;
			break;
		
		case joaat("scarab"):
			*uParam1 = 1f;
			break;
		
		case joaat("scarab2"):
			*uParam1 = 1f;
			break;
		
		case joaat("scarab3"):
			*uParam1 = 1f;
			break;
		
		case joaat("slamvan4"):
			*uParam1 = 1f;
			break;
		
		case joaat("slamvan5"):
			*uParam1 = 1f;
			break;
		
		case joaat("slamvan6"):
			*uParam1 = 1f;
			break;
		
		case joaat("zr380"):
			*uParam1 = 1f;
			break;
		
		case joaat("zr3802"):
			*uParam1 = 1f;
			break;
		
		case joaat("zr3803"):
			*uParam1 = 1f;
			break;
	}
	return *uParam1 != -1f;
}

void func_86(int iParam0, var uParam1)
{
	if (func_29(ENTITY::GET_ENTITY_MODEL(iParam0)))
	{
		if (uParam1->f_9[44] == 2)
		{
			VEHICLE::SET_VEHICLE_ALLOW_HOMING_MISSLE_LOCKON_SYNCED(iParam0, false, true);
		}
		else
		{
			VEHICLE::SET_VEHICLE_ALLOW_HOMING_MISSLE_LOCKON_SYNCED(iParam0, true, true);
		}
	}
	if (func_90(ENTITY::GET_ENTITY_MODEL(iParam0)))
	{
		if (BitTest(uParam1->f_103, 0) || func_89(ENTITY::GET_ENTITY_MODEL(iParam0)))
		{
			VEHICLE::SET_VEHICLE_ALLOW_HOMING_MISSLE_LOCKON_SYNCED(iParam0, false, true);
			func_88(iParam0);
		}
		else
		{
			VEHICLE::SET_VEHICLE_ALLOW_HOMING_MISSLE_LOCKON_SYNCED(iParam0, true, true);
			func_87(iParam0);
		}
	}
}

void func_87(int iParam0)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MLJ", 2))
		{
			if (DECORATOR::DECOR_EXIST_ON(iParam0, "MLJ"))
			{
				if (DECORATOR::DECOR_REMOVE(iParam0, "MLJ"))
				{
				}
			}
		}
	}
}

void func_88(int iParam0)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MLJ", 2))
		{
			if (!DECORATOR::DECOR_EXIST_ON(iParam0, "MLJ"))
			{
				if (DECORATOR::DECOR_SET_BOOL(iParam0, "MLJ", true))
				{
				}
			}
		}
	}
}

int func_89(int iParam0)
{
	switch (iParam0)
	{
		case 1484920335:
		case 471399650:
			return 1;
			break;
	}
	return 0;
}

int func_90(int iParam0)
{
	if (!Global_80280 || !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 0;
	}
	switch (iParam0)
	{
		case joaat("feltzer3"):
			return BitTest(Global_262145.f_36224, 0);
		
		case joaat("comet5"):
			return BitTest(Global_262145.f_36224, 1);
		
		case joaat("bati2"):
			return BitTest(Global_262145.f_36224, 2);
		
		case joaat("stingergt"):
			return BitTest(Global_262145.f_36224, 3);
		
		case joaat("sanchez"):
			return BitTest(Global_262145.f_36224, 4);
		
		case joaat("sanchez2"):
			return BitTest(Global_262145.f_36224, 5);
		
		case joaat("infernus"):
			return BitTest(Global_262145.f_36224, 6);
		
		case joaat("cog55"):
			return BitTest(Global_262145.f_36224, 7);
		
		case joaat("ninef"):
			return BitTest(Global_262145.f_36224, 8);
		
		case joaat("ninef2"):
			return BitTest(Global_262145.f_36224, 9);
		
		case joaat("cheburek"):
		case -1466692365:
			return BitTest(Global_262145.f_36224, 10);
		
		case joaat("savestra"):
			return BitTest(Global_262145.f_36224, 11);
		
		case joaat("xa21"):
			return BitTest(Global_262145.f_36224, 12);
		
		case joaat("s80"):
			return BitTest(Global_262145.f_36224, 13);
		
		case joaat("double"):
			return BitTest(Global_262145.f_36224, 14);
		
		case joaat("buffalo2"):
			return BitTest(Global_262145.f_36224, 15);
		
		case joaat("ztype"):
			return BitTest(Global_262145.f_36224, 16);
		
		case joaat("cog552"):
			return BitTest(Global_262145.f_36224, 17);
		
		case joaat("baller5"):
			return BitTest(Global_262145.f_36224, 18);
		
		case joaat("bati"):
			return BitTest(Global_262145.f_36224, 19);
		
		case joaat("polgauntlet"):
			return BitTest(Global_262145.f_36224, 20);
		
		case 1737348074:
			return BitTest(Global_262145.f_36224, 21);
		
		case joaat("weevil2"):
			return BitTest(Global_262145.f_36224, 22);
		
		case joaat("zentorno"):
			return BitTest(Global_262145.f_36224, 23);
		
		case joaat("jester4"):
		case joaat("driftjester"):
			return BitTest(Global_262145.f_36224, 24);
		
		case joaat("le7b"):
			return BitTest(Global_262145.f_36224, 25);
		
		case joaat("dukes2"):
			return BitTest(Global_262145.f_36224, 26);
		
		case joaat("eudora"):
			return BitTest(Global_262145.f_36224, 27);
		
		case joaat("broadway"):
			return BitTest(Global_262145.f_36224, 28);
		
		case joaat("caracara2"):
			return BitTest(Global_262145.f_36224, 29);
		
		case joaat("comet7"):
			return BitTest(Global_262145.f_36224, 30);
		
		case joaat("futo2"):
		case joaat("driftfuto"):
			return BitTest(Global_262145.f_36225, 0);
		
		case joaat("manchez2"):
			return BitTest(Global_262145.f_36225, 1);
		
		case joaat("zombieb"):
			return BitTest(Global_262145.f_36225, 2);
		
		case joaat("shotaro"):
			return BitTest(Global_262145.f_36225, 3);
		
		case -223461503:
			return BitTest(Global_262145.f_36225, 4);
		
		case joaat("police5"):
			return BitTest(Global_262145.f_36225, 5);
		
		case 1249425552:
			return BitTest(Global_262145.f_36225, 6);
		
		case 1452003510:
			return BitTest(Global_262145.f_36225, 7);
		
		case joaat("rumpo3"):
			return BitTest(Global_262145.f_36225, 8);
		
		case -361348193:
		case joaat("gauntlet4"):
			return BitTest(Global_262145.f_36225, 9);
		
		case joaat("comet6"):
			return BitTest(Global_262145.f_36225, 10);
		
		case joaat("krieger"):
			return BitTest(Global_262145.f_36225, 11);
		
		case joaat("vigero2"):
			return BitTest(Global_262145.f_36225, 12);
		
		case -1948949064:
			return BitTest(Global_262145.f_36225, 13);
		
		case -1321131184:
			return BitTest(Global_262145.f_36225, 14);
		
		case 2042703219:
			return BitTest(Global_262145.f_36225, 15);
		
		case 1891140410:
			return BitTest(Global_262145.f_36225, 16);
		
		case joaat("zorrusso"):
			return BitTest(Global_262145.f_36225, 17);
		
		case joaat("tigon"):
			return BitTest(Global_262145.f_36225, 18);
		
		case joaat("cyclone"):
			return BitTest(Global_262145.f_36225, 19);
		
		case joaat("neo"):
			return BitTest(Global_262145.f_36225, 20);
		
		case joaat("locust"):
			return BitTest(Global_262145.f_36225, 21);
		
		case 1484920335:
			return BitTest(Global_262145.f_36225, 22);
		
		case 457814204:
		case 1992041063:
			return BitTest(Global_262145.f_36225, 23);
		
		case joaat("jb7002"):
			return BitTest(Global_262145.f_36225, 24);
		
		case 127317925:
			return BitTest(Global_262145.f_36225, 25);
		
		case 1534326199:
			return BitTest(Global_262145.f_36225, 26);
		
		case -973016778:
			return BitTest(Global_262145.f_36225, 27);
		
		case -660007725:
			return BitTest(Global_262145.f_36225, 28);
		
		case 471399650:
			return BitTest(Global_262145.f_36225, 29);
		
		case joaat("hellion"):
			return BitTest(Global_262145.f_36548, 0);
		
		case joaat("schafter4"):
			return BitTest(Global_262145.f_36548, 1);
		
		case joaat("schafter6"):
			return BitTest(Global_262145.f_36548, 2);
		
		case joaat("xls2"):
			return BitTest(Global_262145.f_36548, 3);
		
		case joaat("raiden"):
			return BitTest(Global_262145.f_36548, 4);
		
		case joaat("akuma"):
			return BitTest(Global_262145.f_36548, 5);
		
		case joaat("sheava"):
			return BitTest(Global_262145.f_36548, 6);
		
		case joaat("paragon"):
			return BitTest(Global_262145.f_36548, 7);
		
		case joaat("viseris"):
			return BitTest(Global_262145.f_36548, 8);
		
		case joaat("imorgon"):
			return BitTest(Global_262145.f_36548, 9);
		
		case joaat("pfister811"):
			return BitTest(Global_262145.f_36548, 10);
		
		case joaat("comet2"):
			return BitTest(Global_262145.f_36548, 11);
		
		case joaat("torero"):
			return BitTest(Global_262145.f_36548, 12);
		
		case joaat("tyrus"):
			return BitTest(Global_262145.f_36548, 13);
		
		case joaat("hakuchou"):
			return BitTest(Global_262145.f_36548, 14);
		
		case joaat("sc1"):
			return BitTest(Global_262145.f_36548, 15);
		
		case joaat("stanier"):
			return BitTest(Global_262145.f_36548, 16);
		
		case joaat("zion3"):
			return BitTest(Global_262145.f_36548, 17);
		
		case joaat("cognoscenti2"):
			return BitTest(Global_262145.f_36548, 18);
		
		case joaat("deviant"):
			return BitTest(Global_262145.f_36548, 19);
		
		case joaat("contender"):
			return BitTest(Global_262145.f_36548, 20);
		
		case joaat("revolter"):
			return BitTest(Global_262145.f_36548, 21);
		
		case joaat("gp1"):
			return BitTest(Global_262145.f_36548, 22);
		
		case joaat("hermes"):
			return BitTest(Global_262145.f_36548, 23);
		
		case joaat("swinger"):
			return BitTest(Global_262145.f_36548, 24);
		
		case joaat("police4"):
			return BitTest(Global_262145.f_36548, 25);
		
		case -773802025:
			return BitTest(Global_262145.f_36548, 26);
		
		case -1628000569:
			return BitTest(Global_262145.f_36548, 27);
		
		case joaat("jugular"):
			return BitTest(Global_262145.f_36548, 28);
		
		case joaat("tenf"):
			return BitTest(Global_262145.f_36548, 29);
		
		case joaat("tenf2"):
			return BitTest(Global_262145.f_36548, 30);
		
		case joaat("baller6"):
			return BitTest(Global_262145.f_36549, 0);
		
		case joaat("deveste"):
			return BitTest(Global_262145.f_36549, 1);
		
		case joaat("torero2"):
			return BitTest(Global_262145.f_36549, 2);
		
		case joaat("entity3"):
			return BitTest(Global_262145.f_36549, 3);
		
		case joaat("hakuchou2"):
			return BitTest(Global_262145.f_36549, 4);
		
		case joaat("calico"):
			return BitTest(Global_262145.f_36549, 5);
		
		case joaat("dominator8"):
			return BitTest(Global_262145.f_36549, 6);
		
		case joaat("dominator7"):
			return BitTest(Global_262145.f_36549, 7);
		
		case joaat("euros"):
			return BitTest(Global_262145.f_36549, 8);
		
		case joaat("vstr"):
			return BitTest(Global_262145.f_36549, 9);
		
		case joaat("dominator"):
			return BitTest(Global_262145.f_36549, 10);
		
		case joaat("reever"):
			return BitTest(Global_262145.f_36549, 11);
		
		case joaat("remus"):
			return BitTest(Global_262145.f_36549, 12);
		
		case joaat("impaler6"):
			return BitTest(Global_262145.f_36549, 13);
		
		case joaat("dubsta3"):
			return BitTest(Global_262145.f_36549, 14);
		
		case joaat("shinobi"):
			return BitTest(Global_262145.f_36549, 15);
		
		case joaat("kuruma"):
			return BitTest(Global_262145.f_36549, 16);
		
		case joaat("cognoscenti"):
			return BitTest(Global_262145.f_36549, 17);
		
		case joaat("xls"):
			return BitTest(Global_262145.f_36549, 18);
		
		case 554408685:
			return BitTest(Global_262145.f_36549, 19);
		
		case 1966698497:
			return BitTest(Global_262145.f_36549, 20);
		
		case -1508420500:
			return BitTest(Global_262145.f_36549, 21);
		
		case -1921512137:
			return BitTest(Global_262145.f_36549, 22);
		
		case -1101107018:
			return BitTest(Global_262145.f_36549, 23);
		
		case -1585673997:
			return BitTest(Global_262145.f_36549, 24);
		
		case 691148275:
			return BitTest(Global_262145.f_36549, 25);
		
		case -1982433631:
			return BitTest(Global_262145.f_36549, 26);
		
		case 687627128:
			return BitTest(Global_262145.f_36549, 27);
		
		case 1761301369:
			return BitTest(Global_262145.f_36549, 28);
		
		case -401558446:
		case 1580292663:
			return BitTest(Global_262145.f_36549, 29);
		
		case joaat("conada"):
			return BitTest(Global_262145.f_37038, 0);
		
		case joaat("alphaz1"):
			return BitTest(Global_262145.f_37038, 1);
		
		case -352682313:
			return BitTest(Global_262145.f_37038, 2);
		
		case joaat("howard"):
			return BitTest(Global_262145.f_37038, 3);
		
		case joaat("cargobob"):
			return BitTest(Global_262145.f_37038, 4);
		
		case joaat("cargobob2"):
			return BitTest(Global_262145.f_37038, 5);
		
		case joaat("swift2"):
			return BitTest(Global_262145.f_37038, 6);
		
		case joaat("dodo"):
			return BitTest(Global_262145.f_37038, 7);
		
		case joaat("volatus"):
			return BitTest(Global_262145.f_37038, 8);
		
		case joaat("maverick"):
			return BitTest(Global_262145.f_37038, 9);
		
		case joaat("supervolito"):
			return BitTest(Global_262145.f_37038, 10);
		
		case joaat("supervolito2"):
			return BitTest(Global_262145.f_37038, 11);
		
		case joaat("luxor2"):
			return BitTest(Global_262145.f_37038, 12);
		
		case joaat("luxor"):
			return BitTest(Global_262145.f_37038, 13);
		
		case joaat("besra"):
			return BitTest(Global_262145.f_37038, 14);
		
		case joaat("futo"):
			return BitTest(Global_262145.f_37038, 15);
		
		case joaat("schafter3"):
			return BitTest(Global_262145.f_37038, 16);
		
		case joaat("schafter5"):
			return BitTest(Global_262145.f_37038, 17);
		
		case joaat("ignus"):
			return BitTest(Global_262145.f_37038, 18);
		
		case joaat("manchez"):
			return BitTest(Global_262145.f_37038, 19);
		
		case joaat("bf400"):
			return BitTest(Global_262145.f_37038, 20);
		
		case joaat("baller4"):
			return BitTest(Global_262145.f_37038, 21);
		
		case joaat("ardent"):
			return BitTest(Global_262145.f_37038, 22);
		
		case joaat("elegy2"):
			return BitTest(Global_262145.f_37038, 23);
		
		case joaat("vortex"):
			return BitTest(Global_262145.f_37038, 24);
		
		case joaat("komoda"):
			return BitTest(Global_262145.f_37038, 25);
		
		case 1968807591:
			return BitTest(Global_262145.f_37038, 26);
		
		case joaat("cavalcade3"):
			return BitTest(Global_262145.f_37038, 27);
		
		case joaat("btype"):
			return BitTest(Global_262145.f_37038, 28);
		
		case joaat("btype3"):
			return BitTest(Global_262145.f_37038, 29);
		
		case joaat("mesa3"):
			return BitTest(Global_262145.f_37038, 30);
		
		case joaat("raptor"):
			return BitTest(Global_262145.f_37039, 0);
		
		case joaat("gauntlet"):
			return BitTest(Global_262145.f_37039, 1);
		
		case joaat("bodhi2"):
			return BitTest(Global_262145.f_37039, 2);
		
		case joaat("brawler"):
			return BitTest(Global_262145.f_37039, 3);
		
		case joaat("massacro"):
			return BitTest(Global_262145.f_37039, 4);
		
		case joaat("massacro2"):
			return BitTest(Global_262145.f_37039, 5);
		
		case joaat("cheetah"):
			return BitTest(Global_262145.f_37039, 6);
		
		case joaat("hexer"):
			return BitTest(Global_262145.f_37039, 7);
		
		case joaat("vacca"):
			return BitTest(Global_262145.f_37039, 8);
		
		case joaat("patriot"):
			return BitTest(Global_262145.f_37039, 9);
		
		case joaat("blazer"):
			return BitTest(Global_262145.f_37039, 10);
		
		case joaat("bullet"):
			return BitTest(Global_262145.f_37039, 11);
		
		case joaat("fmj"):
			return BitTest(Global_262145.f_37039, 12);
		
		case joaat("peyote2"):
			return BitTest(Global_262145.f_37039, 13);
		
		case joaat("bagger"):
			return BitTest(Global_262145.f_37039, 14);
		
		case joaat("issi2"):
			return BitTest(Global_262145.f_37039, 15);
		
		case joaat("issi7"):
			return BitTest(Global_262145.f_37039, 16);
		
		case joaat("sentinel2"):
			return BitTest(Global_262145.f_37039, 17);
		
		case 1881415402:
			return BitTest(Global_262145.f_37039, 18);
		
		case 893780296:
			return BitTest(Global_262145.f_37039, 19);
		
		case 1596736441:
			return BitTest(Global_262145.f_37039, 20);
		
		case 1380582820:
			return BitTest(Global_262145.f_37039, 21);
		
		case -938068410:
			return BitTest(Global_262145.f_37039, 22);
		
		case -1778998583:
			return BitTest(Global_262145.f_37039, 23);
		
		case -358638792:
			return BitTest(Global_262145.f_37039, 24);
		
		case -1555091703:
		case -402415705:
			return BitTest(Global_262145.f_37039, 25);
		
		case 617517171:
			return BitTest(Global_262145.f_37039, 26);
		
		case 287906327:
			return BitTest(Global_262145.f_37039, 27);
		
		case -1007324375:
			return BitTest(Global_262145.f_37039, 28);
		
		default:
	}
	return 0;
}

void func_91(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		if (uParam1->f_66 != 0)
		{
		}
		if (!func_116(iParam0))
		{
			if (MISC::GET_HASH_KEY(&(uParam1->f_1)) != 0)
			{
				VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(iParam0, &(uParam1->f_1));
			}
			if (*uParam1 >= 0 && *uParam1 < VEHICLE::GET_NUMBER_OF_VEHICLE_NUMBER_PLATES())
			{
				VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(iParam0, *uParam1);
			}
		}
		if (uParam1->f_66 == joaat("sovereign"))
		{
			uParam1->f_5 = 111;
			uParam1->f_6 = 111;
			uParam1->f_7 = 111;
		}
		else if (uParam1->f_66 == joaat("casco"))
		{
			iVar0 = 1;
			if (BitTest(uParam1->f_77, func_115(iVar0 + 1)))
			{
			}
			else
			{
				MISC::SET_BIT(&(uParam1->f_77), func_115(iVar0 + 1));
			}
		}
		else if (uParam1->f_66 == joaat("sandking") || uParam1->f_66 == joaat("sandking2"))
		{
			iVar1 = 1;
			if (BitTest(uParam1->f_77, func_115(iVar1 + 1)))
			{
			}
			else
			{
				MISC::SET_BIT(&(uParam1->f_77), func_115(iVar1 + 1));
			}
		}
		else if (uParam1->f_66 == joaat("formula") || uParam1->f_66 == joaat("formula2"))
		{
			iVar2 = 1;
			while (iVar2 <= 9)
			{
				if (BitTest(uParam1->f_77, func_115(iVar2)))
				{
				}
				else
				{
					MISC::SET_BIT(&(uParam1->f_77), func_115(iVar2));
				}
				iVar2++;
			}
		}
		else if (uParam1->f_66 == joaat("openwheel1"))
		{
			iVar3 = 1;
			while (iVar3 <= 6)
			{
				if (BitTest(uParam1->f_77, func_115(iVar3)))
				{
				}
				else
				{
					MISC::SET_BIT(&(uParam1->f_77), func_115(iVar3));
				}
				iVar3++;
			}
		}
		else if (uParam1->f_66 == joaat("openwheel2"))
		{
			iVar4 = 1;
			while (iVar4 <= 11)
			{
				if (iVar4 != 9 && iVar4 != 10)
				{
					if (BitTest(uParam1->f_77, func_115(iVar4)))
					{
					}
					else
					{
						MISC::SET_BIT(&(uParam1->f_77), func_115(iVar4));
					}
				}
				iVar4++;
			}
		}
		else if (uParam1->f_66 == joaat("surfer3"))
		{
			iVar5 = 1;
			while (iVar5 <= 2)
			{
				if (BitTest(uParam1->f_77, func_115(iVar5)))
				{
				}
				else
				{
					MISC::SET_BIT(&(uParam1->f_77), func_115(iVar5));
				}
				iVar5++;
			}
		}
		else if (uParam1->f_66 == joaat("dinghy5"))
		{
			if (BitTest(uParam1->f_77, func_115(4)))
			{
			}
			else
			{
				MISC::SET_BIT(&(uParam1->f_77), func_115(4));
			}
		}
		else if (uParam1->f_66 == joaat("coquette4"))
		{
			if (VEHICLE::GET_VEHICLE_MOD(iParam0, 10) != 0)
			{
				MISC::SET_BIT(&(uParam1->f_77), false);
			}
		}
		else if (uParam1->f_66 == joaat("yosemite2"))
		{
			MISC::SET_BIT(&(uParam1->f_77), func_115(1));
		}
		else if (uParam1->f_66 == joaat("driftyosemite"))
		{
			MISC::SET_BIT(&(uParam1->f_77), func_115(1));
		}
		else if (uParam1->f_66 == joaat("hotknife"))
		{
			iVar6 = 1;
			while (iVar6 <= 2)
			{
				if (BitTest(uParam1->f_77, func_115(iVar6)))
				{
				}
				else
				{
					MISC::SET_BIT(&(uParam1->f_77), func_115(iVar6));
				}
				iVar6++;
			}
		}
		if (uParam1->f_66 == joaat("nightshark"))
		{
			VEHICLE::SET_DONT_PROCESS_VEHICLE_GLASS(iParam0, false);
			if (VEHICLE::GET_VEHICLE_MOD(iParam0, 5) != -1)
			{
				VEHICLE::SET_DONT_PROCESS_VEHICLE_GLASS(iParam0, true);
			}
		}
		if (BitTest(uParam1->f_77, 13))
		{
			VEHICLE::SET_VEHICLE_CUSTOM_PRIMARY_COLOUR(iParam0, uParam1->f_71, uParam1->f_72, uParam1->f_73);
		}
		else
		{
			VEHICLE::CLEAR_VEHICLE_CUSTOM_PRIMARY_COLOUR(iParam0);
		}
		if (BitTest(uParam1->f_77, 12))
		{
			VEHICLE::SET_VEHICLE_CUSTOM_SECONDARY_COLOUR(iParam0, uParam1->f_71, uParam1->f_72, uParam1->f_73);
		}
		else
		{
			VEHICLE::CLEAR_VEHICLE_CUSTOM_SECONDARY_COLOUR(iParam0);
		}
		if (uParam1->f_5 != -1 && uParam1->f_6 != -1)
		{
			if (func_113(uParam1->f_5) || func_113(uParam1->f_6))
			{
			}
			else
			{
				VEHICLE::SET_VEHICLE_COLOURS(iParam0, uParam1->f_5, uParam1->f_6);
			}
		}
		if (uParam1->f_7 < 0)
		{
			uParam1->f_7 = 0;
		}
		if (uParam1->f_8 < 0)
		{
			uParam1->f_8 = 0;
		}
		VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iParam0, uParam1->f_7, uParam1->f_8);
		if (((BitTest(uParam1->f_77, 15) || func_112(iParam0)) || (((uParam1->f_62 == 0 && uParam1->f_63 == 0) && uParam1->f_64 == 0) && uParam1->f_9[20] > 0)) && func_111())
		{
			uParam1->f_62 = 0;
			uParam1->f_63 = 0;
			uParam1->f_64 = 0;
		}
		else if ((uParam1->f_62 == 0 && uParam1->f_63 == 0) && uParam1->f_64 == 0)
		{
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
		}
		VEHICLE::SET_VEHICLE_TYRE_SMOKE_COLOR(iParam0, uParam1->f_62, uParam1->f_63, uParam1->f_64);
		if (uParam1->f_65 == -1 && !func_110(uParam1->f_66))
		{
			VEHICLE::SET_VEHICLE_WINDOW_TINT(iParam0, 0);
		}
		else
		{
			VEHICLE::SET_VEHICLE_WINDOW_TINT(iParam0, 0);
			VEHICLE::SET_VEHICLE_WINDOW_TINT(iParam0, uParam1->f_65);
		}
		if (BitTest(uParam1->f_77, 9))
		{
			VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(iParam0, false);
			VEHICLE::SET_DRIFT_TYRES(iParam0, false);
		}
		if (bParam2)
		{
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(iParam0, uParam1->f_70);
		}
		VEHICLE::SET_VEHICLE_NEON_COLOUR(iParam0, uParam1->f_74, uParam1->f_75, uParam1->f_76);
		VEHICLE::SET_VEHICLE_NEON_ENABLED(iParam0, 2, BitTest(uParam1->f_77, 28));
		VEHICLE::SET_VEHICLE_NEON_ENABLED(iParam0, 3, BitTest(uParam1->f_77, 29));
		VEHICLE::SET_VEHICLE_NEON_ENABLED(iParam0, 0, BitTest(uParam1->f_77, 30));
		VEHICLE::SET_VEHICLE_NEON_ENABLED(iParam0, 1, BitTest(uParam1->f_77, 31));
		VEHICLE::SET_VEHICLE_IS_STOLEN(iParam0, BitTest(uParam1->f_77, 10));
		if (VEHICLE::GET_VEHICLE_LIVERY_COUNT(iParam0) > 1 && uParam1->f_67 >= 0)
		{
			VEHICLE::SET_VEHICLE_LIVERY(iParam0, uParam1->f_67);
		}
		if (uParam1->f_69 > -1 && uParam1->f_69 < 255)
		{
			if (!VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(iParam0)))
			{
				if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(iParam0)))
				{
					if (uParam1->f_69 == 6)
					{
						func_109(iParam0, uParam1->f_69);
					}
				}
				else
				{
					func_109(iParam0, uParam1->f_69);
				}
			}
		}
		if (VEHICLE::IS_VEHICLE_A_CONVERTIBLE(iParam0, false))
		{
			if ((uParam1->f_68 == 0 || uParam1->f_68 == 3) || uParam1->f_68 == 5)
			{
				VEHICLE::RAISE_CONVERTIBLE_ROOF(iParam0, true);
			}
			else
			{
				VEHICLE::LOWER_CONVERTIBLE_ROOF(iParam0, true);
			}
		}
		if (bParam3)
		{
			func_100(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		}
		if (!VEHICLE::IS_THIS_MODEL_A_HELI(uParam1->f_66) && !VEHICLE::IS_THIS_MODEL_A_BOAT(uParam1->f_66))
		{
			iVar7 = 0;
			while (iVar7 <= 11)
			{
				if (BitTest(uParam1->f_77, func_115(iVar7 + 1)))
				{
					if (!VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, iVar7 + 1))
					{
						VEHICLE::SET_VEHICLE_EXTRA(iParam0, iVar7 + 1, false);
					}
				}
				else if (VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, iVar7 + 1))
				{
					VEHICLE::SET_VEHICLE_EXTRA(iParam0, iVar7 + 1, true);
				}
				iVar7++;
			}
		}
		if ((ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("sheava") || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("omnis")) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("le7b"))
		{
			if (VEHICLE::GET_VEHICLE_MOD(iParam0, 0) == -1)
			{
				VEHICLE::SET_VEHICLE_EXTRA(iParam0, 1, false);
			}
		}
		if ((((func_94() && VEHICLE::IS_THIS_MODEL_A_PLANE(uParam1->f_66)) && VEHICLE::GET_VEHICLE_HAS_LANDING_GEAR(iParam0)) && !VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("avenger"))) && !VEHICLE::IS_VEHICLE_MODEL(iParam0, func_93(1)))
		{
			if (!BitTest(uParam1->f_77, 23))
			{
				if (!BitTest(uParam1->f_77, 22) && func_92(iParam0, 5f))
				{
					VEHICLE::CONTROL_LANDING_GEAR(iParam0, 3);
				}
				else
				{
					VEHICLE::CONTROL_LANDING_GEAR(iParam0, 2);
				}
			}
			else
			{
				VEHICLE::CONTROL_LANDING_GEAR(iParam0, 4);
			}
		}
		if (BitTest(uParam1->f_77, 27))
		{
			DECORATOR::DECOR_SET_BOOL(iParam0, "IgnoredByQuickSave", true);
		}
		else
		{
			DECORATOR::DECOR_SET_BOOL(iParam0, "IgnoredByQuickSave", false);
		}
	}
}

int func_92(int iParam0, float fParam1)
{
	struct<3> Var0;
	float fVar3;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, false) };
		if (MISC::GET_GROUND_Z_FOR_3D_COORD(Var0, &fVar3, false, false))
		{
			if (MISC::ABSF((Var0.f_2 - fVar3)) > fParam1)
			{
				return 1;
			}
		}
		else if (Var0.f_2 > (PATHFIND::GET_APPROX_FLOOR_FOR_POINT(Var0.f_0, Var0.f_1) + fParam1))
		{
			return 1;
		}
		else if (Var0.f_2 > 300f)
		{
			return 1;
		}
	}
	return 0;
}

int func_93(bool bParam0)
{
	if (bParam0)
	{
		return joaat("avenger3");
	}
	return joaat("avenger");
}

int func_94()
{
	if ((((Global_4718592.f_121628 == 6 || Global_4718592.f_121628 == 7) || Global_4718592.f_121628 == 18) || Global_4718592.f_121628 == 19) && Global_4718592.f_2 == 20)
	{
		return 0;
	}
	if (func_98(7))
	{
		if (func_96(Global_2673271.f_4.f_16) || func_95(Global_2673271.f_4.f_16))
		{
			return 0;
		}
	}
	return 1;
}

int func_95(var uParam0)
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 != -1)
	{
		return Global_1882572[iVar0 /*315*/].f_82.f_75 != 0;
	}
	return 0;
}

int func_96(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_97(iParam0, 9);
	}
	return 0;
}

var func_97(int iParam0, int iParam1)
{
	return BitTest(Global_1892653[iParam0 /*615*/].f_10.f_4, iParam1);
}

bool func_98(int iParam0)
{
	return func_99(&(Global_2673271.f_194), iParam0);
}

var func_99(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = uParam1;
	iVar1 = (iVar0 / 32);
	iVar2 = (iVar0 % 32);
	return BitTest((*uParam0)[iVar1], iVar2);
}

int func_100(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, false))
	{
		return 0;
	}
	if (VEHICLE::GET_NUM_MOD_KITS(*iParam0) == 0)
	{
		return 0;
	}
	VEHICLE::SET_VEHICLE_MOD_KIT(*iParam0, 0);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if ((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21)
		{
			VEHICLE::TOGGLE_VEHICLE_MOD(*iParam0, iVar1, (*uParam1)[iVar0] > 0);
		}
		else if (iVar1 == 22)
		{
			if ((*uParam1)[iVar0] > 0)
			{
				VEHICLE::TOGGLE_VEHICLE_MOD(*iParam0, iVar1, true);
				if ((*uParam1)[iVar0] == 1)
				{
					VEHICLE::SET_VEHICLE_XENON_LIGHT_COLOR_INDEX(*iParam0, 255);
				}
				else
				{
					VEHICLE::SET_VEHICLE_XENON_LIGHT_COLOR_INDEX(*iParam0, ((*uParam1)[iVar0] - 2));
				}
			}
			else
			{
				VEHICLE::TOGGLE_VEHICLE_MOD(*iParam0, iVar1, false);
			}
		}
		else if (VEHICLE::GET_VEHICLE_MOD(*iParam0, iVar1) != ((*uParam1)[iVar0] - 1))
		{
			VEHICLE::REMOVE_VEHICLE_MOD(*iParam0, iVar1);
			if ((*uParam1)[iVar0] > 0)
			{
				if (iVar1 == 23)
				{
					VEHICLE::SET_VEHICLE_MOD(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), (*uParam2)[0] > 0);
				}
				else if (iVar1 == 24)
				{
					VEHICLE::SET_VEHICLE_MOD(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), (*uParam2)[1] > 0);
				}
				else if (func_107(*iParam0, iVar1, ((*uParam1)[iVar0] - 1)))
				{
				}
				else
				{
					VEHICLE::SET_VEHICLE_MOD(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), false);
				}
			}
		}
		iVar0++;
	}
	if (func_105(ENTITY::GET_ENTITY_MODEL(*iParam0)) && VEHICLE::GET_VEHICLE_MOD(*iParam0, 24) != func_103(*iParam0, ((*uParam1)[38] - 1)))
	{
		VEHICLE::SET_VEHICLE_MOD(*iParam0, 24, func_103(*iParam0, ((*uParam1)[38] - 1)), false);
	}
	func_102(iParam0);
	if (func_101(*iParam0))
	{
		VEHICLE::SET_VEHICLE_STRONG(*iParam0, true);
		VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(*iParam0, true);
	}
	return 1;
}

int func_101(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	char cVar3[32];
	
	if ((ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false)) && VEHICLE::GET_NUM_MOD_KITS(iParam0) > 0)
	{
		VEHICLE::SET_VEHICLE_MOD_KIT(iParam0, 0);
		iVar0 = 0;
		while (iVar0 < 49)
		{
			iVar1 = iVar0;
			if (((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21) || iVar1 == 22)
			{
			}
			else if (VEHICLE::GET_VEHICLE_MOD(iParam0, iVar1) != -1)
			{
				StringCopy(&cVar3, VEHICLE::GET_MOD_TEXT_LABEL(iParam0, iVar1, VEHICLE::GET_VEHICLE_MOD(iParam0, iVar1)), 32);
				iVar2 = MISC::GET_HASH_KEY(&cVar3);
				if (iVar2 != 0)
				{
					if (iVar2 == MISC::GET_HASH_KEY("MNU_CAGE") || iVar2 == MISC::GET_HASH_KEY("SABRE_CAG"))
					{
						return 1;
					}
				}
			}
			iVar0++;
		}
	}
	return 0;
}

void func_102(var uParam0)
{
	switch (ENTITY::GET_ENTITY_MODEL(*uParam0))
	{
		case joaat("starling"):
			if (VEHICLE::GET_VEHICLE_MOD(*uParam0, 4) == 0)
			{
				VEHICLE::SET_VEHICLE_MOD(*uParam0, 13, 0, false);
			}
			else
			{
				VEHICLE::REMOVE_VEHICLE_MOD(*uParam0, 13);
			}
			break;
		
		case joaat("slamtruck"):
			VEHICLE::SET_VEHICLE_MOD(*uParam0, 24, 3, false);
			break;
		
		default:
			break;
	}
}

int func_103(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		switch (ENTITY::GET_ENTITY_MODEL(iParam0))
		{
			case joaat("tornado5"):
				switch (iParam1)
				{
					case 0:
						return 0;
						break;
					
					case 1:
						return 1;
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
					
					case 5:
						return 4;
						break;
				}
				break;
			
			case joaat("faction3"):
				return 3;
				break;
		}
		iVar0 = func_104(iParam0, 38) + 1;
		iVar1 = func_104(iParam0, 24) + 1;
		fVar2 = (SYSTEM::TO_FLOAT(iParam1 + 1) / SYSTEM::TO_FLOAT(iVar0));
		iVar3 = (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar1) * fVar2)) - 1);
		if (iVar3 < 0)
		{
			iVar3 = 0;
		}
		if (iVar3 >= iVar0)
		{
			iVar3 = (iVar0 - 1);
		}
		return iVar3;
	}
	return 0;
}

int func_104(int iParam0, int iParam1)
{
	int iVar0;
	
	if ((STREAMING::IS_MODEL_VALID(Global_153799) && VEHICLE::IS_VEHICLE_MODEL(iParam0, Global_153799)) && Global_153800 == iParam1)
	{
		return Global_153801;
	}
	iVar0 = (VEHICLE::GET_NUM_VEHICLE_MODS(iParam0, iParam1) - 1);
	while (iVar0 >= 0 && func_107(iParam0, iParam1, iVar0))
	{
		iVar0 = (iVar0 - 1);
	}
	return iVar0;
}

int func_105(int iParam0)
{
	if (func_106(iParam0, 1))
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

int func_106(int iParam0, int iParam1)
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

int func_107(int iParam0, int iParam1, int iParam2)
{
	if (!func_108() && VEHICLE::IS_VEHICLE_MOD_GEN9_EXCLUSIVE(iParam0, iParam1, iParam2))
	{
		return 1;
	}
	return 0;
}

int func_108()
{
	return 0;
}

void func_109(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (VEHICLE::GET_NUM_MOD_KITS(iParam0) > 0)
	{
		VEHICLE::SET_VEHICLE_MOD_KIT(iParam0, 0);
		iVar0 = VEHICLE::GET_VEHICLE_MOD(iParam0, 24);
		iVar1 = VEHICLE::GET_VEHICLE_MOD_VARIATION(iParam0, 24);
		VEHICLE::SET_VEHICLE_WHEEL_TYPE(iParam0, iParam1);
		if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("tornado6") || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("peyote2"))
		{
			return;
		}
		if (iVar0 == -1)
		{
			VEHICLE::REMOVE_VEHICLE_MOD(iParam0, 24);
		}
		else
		{
			VEHICLE::SET_VEHICLE_MOD(iParam0, 24, iVar0, iVar1 == 1);
		}
	}
}

int func_110(int iParam0)
{
	switch (iParam0)
	{
		case joaat("granger"):
		case joaat("visione"):
			return 1;
		
		default:
	}
	return 0;
}

bool func_111()
{
	return DLC::IS_DLC_PRESENT(joaat("mpindependence"));
}

int func_112(int iParam0)
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
		{
			if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3))
			{
				if (DECORATOR::DECOR_EXIST_ON(iParam0, "MPBitset"))
				{
					iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "MPBitset");
				}
				return BitTest(iVar0, 4);
			}
		}
	}
	return 0;
}

int func_113(int iParam0)
{
	if (!func_108() && func_114(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_114(int iParam0)
{
	switch (iParam0)
	{
		case 161:
		case 164:
		case 170:
		case 171:
		case 183:
		case 191:
		case 199:
		case 209:
		case 216:
		case 218:
			return 1;
			break;
	}
	return 0;
}

int func_115(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 0;
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			return 2;
			break;
		
		case 4:
			return 3;
			break;
		
		case 5:
			return 4;
			break;
		
		case 6:
			return 5;
			break;
		
		case 7:
			return 6;
			break;
		
		case 8:
			return 7;
			break;
		
		case 9:
			return 8;
			break;
		
		case 10:
			return 24;
			break;
		
		case 11:
			return 25;
			break;
		
		case 12:
			return 26;
			break;
	}
	return 0;
}

int func_116(int iParam0)
{
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (!func_117(PLAYER::PLAYER_ID(), -1))
		{
			iParam0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		return 0;
	}
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		return 0;
	}
	if (func_61(PLAYER::PLAYER_ID()) == 3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
		{
			if (func_60(iParam0) != -1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_117(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_357(iParam0, 1, 1))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::GET_PLAYER_PED(iParam0), false))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(iParam0), false);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
			{
				if (PLAYER::PLAYER_PED_ID() == VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, iParam1, false))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_118()
{
	return -1;
}

struct<104> func_119()
{
	struct<104> Var0;
	
	Var0.f_9 = 49;
	Var0.f_59 = 2;
	Var0.f_78 = -1;
	Var0.f_79 = -1;
	Var0.f_96 = -1;
	Var0.f_97 = 1;
	Var0.f_99 = 132;
	Var0.f_100 = -1;
	Var0.f_66 = func_125();
	switch (Var0.f_66)
	{
		case joaat("cogcabrio"):
			Var0.f_5 = 141;
			Var0.f_6 = 1;
			Var0.f_7 = 70;
			Var0.f_8 = 82;
			Var0.f_97 = 1;
			Var0.f_99 = 132;
			Var0.f_98 = 0;
			Var0.f_65 = 1;
			Var0.f_69 = 7;
			Var0.f_62 = 255;
			Var0.f_63 = 255;
			Var0.f_64 = 255;
			Var0.f_74 = 255;
			Var0.f_76 = 255;
			Var0.f_67 = 0;
			MISC::SET_BIT(&(Var0.f_77), 9);
			Var0.f_9[15] = 4;
			Var0.f_9[23] = 3;
			break;
		
		case joaat("windsor"):
			Var0.f_5 = 9;
			Var0.f_6 = 5;
			Var0.f_7 = 7;
			Var0.f_8 = 156;
			Var0.f_97 = 1;
			Var0.f_99 = 132;
			Var0.f_98 = 0;
			Var0.f_65 = 2;
			Var0.f_69 = 3;
			Var0.f_62 = 255;
			Var0.f_63 = 255;
			Var0.f_64 = 255;
			Var0.f_74 = 255;
			Var0.f_76 = 255;
			Var0.f_67 = 0;
			MISC::SET_BIT(&(Var0.f_77), 9);
			Var0.f_9[23] = 32;
			break;
		
		case joaat("fugitive"):
			Var0.f_5 = 147;
			Var0.f_7 = 4;
			Var0.f_8 = 156;
			Var0.f_97 = 1;
			Var0.f_99 = 132;
			Var0.f_98 = 0;
			Var0.f_65 = 1;
			Var0.f_62 = 255;
			Var0.f_63 = 255;
			Var0.f_64 = 255;
			Var0.f_74 = 255;
			Var0.f_76 = 255;
			Var0.f_67 = 0;
			MISC::SET_BIT(&(Var0.f_77), 26);
			MISC::SET_BIT(&(Var0.f_77), 9);
			Var0.f_9[23] = 41;
			break;
		
		case joaat("superd"):
			Var0.f_5 = 62;
			Var0.f_6 = 1;
			Var0.f_7 = 70;
			Var0.f_8 = 156;
			Var0.f_97 = 1;
			Var0.f_99 = 132;
			Var0.f_98 = 0;
			Var0.f_65 = 3;
			Var0.f_62 = 255;
			Var0.f_63 = 255;
			Var0.f_64 = 255;
			Var0.f_74 = 255;
			Var0.f_76 = 255;
			Var0.f_67 = 0;
			MISC::SET_BIT(&(Var0.f_77), 9);
			Var0.f_9[23] = 24;
			break;
		
		case joaat("dubsta2"):
			Var0.f_5 = 13;
			Var0.f_6 = 12;
			Var0.f_8 = 156;
			Var0.f_97 = 1;
			Var0.f_99 = 132;
			Var0.f_98 = 0;
			Var0.f_65 = 1;
			Var0.f_69 = 3;
			Var0.f_62 = 255;
			Var0.f_63 = 255;
			Var0.f_64 = 255;
			Var0.f_74 = 255;
			Var0.f_76 = 255;
			Var0.f_67 = 0;
			MISC::SET_BIT(&(Var0.f_77), 9);
			Var0.f_9[10] = 2;
			Var0.f_9[15] = 4;
			Var0.f_9[22] = 1;
			break;
		
		case joaat("feltzer2"):
			Var0.f_5 = 50;
			Var0.f_6 = 28;
			Var0.f_7 = 92;
			Var0.f_8 = 156;
			Var0.f_97 = 1;
			Var0.f_99 = 132;
			Var0.f_98 = 0;
			Var0.f_65 = 3;
			Var0.f_69 = 7;
			Var0.f_62 = 255;
			Var0.f_63 = 255;
			Var0.f_64 = 255;
			Var0.f_74 = 255;
			Var0.f_76 = 255;
			Var0.f_67 = 0;
			MISC::SET_BIT(&(Var0.f_77), 9);
			Var0.f_9[0] = 1;
			Var0.f_9[15] = 4;
			Var0.f_9[23] = 20;
			break;
	}
	return Var0;
}

void func_120(int iParam0)
{
	if (!Global_262145.f_4373)
	{
		VEHICLE::SET_ALLOW_RAMMING_SOOP_OR_RAMP(iParam0, 0);
	}
}

int func_121(var uParam0, int iParam1, struct<3> Param2, float fParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14, bool bParam15)
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
		Global_2733002.f_5620 = iVar1;
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
			func_122(Param2, fParam5, iParam1, iVar1);
			return 1;
		}
	}
	return 0;
}

void func_122(struct<3> Param0, float fParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	if (func_123(PLAYER::PLAYER_ID(), Param0, iParam4) > -1)
	{
		if ((Global_2635562.f_3231[1 /*6*/].f_5 == iParam5 && Global_2635562.f_3231[1 /*6*/].f_4 == iParam4) && SYSTEM::VDIST(Global_2635562.f_3231[1 /*6*/], Param0) < 0.5f)
		{
			return;
		}
		iVar0 = 0;
		while (iVar0 < 2)
		{
			if (iVar0 < 1)
			{
				Global_2635562.f_3231[iVar0 /*6*/] = { Global_2635562.f_3231[iVar0 + 1 /*6*/] };
			}
			iVar0++;
		}
		Global_2635562.f_3231[1 /*6*/] = { Param0 };
		Global_2635562.f_3231[1 /*6*/].f_3 = fParam3;
		Global_2635562.f_3231[1 /*6*/].f_4 = iParam4;
		Global_2635562.f_3231[1 /*6*/].f_5 = iParam5;
	}
}

int func_123(int iParam0, struct<3> Param1, int iParam4)
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
			if (Global_2649159.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4 == iParam4)
			{
				Var2 = { Param1 };
				if (MISC::ABSF((Global_2649159.f_461[iVar0 /*11*/][iVar1 /*5*/].f_2 - Var2.f_2)) < 2f)
				{
					Var2.f_2 = Global_2649159.f_461[iVar0 /*11*/][iVar1 /*5*/].f_2;
				}
				if (SYSTEM::VDIST(Global_2649159.f_461[iVar0 /*11*/][iVar1 /*5*/], Var2) < 0.5f)
				{
					return iVar1;
				}
			}
			iVar1++;
		}
	}
	return -1;
}

bool func_124(int iParam0)
{
	if (iParam0 == 0)
	{
		return 1;
	}
	STREAMING::REQUEST_MODEL(iParam0);
	return STREAMING::HAS_MODEL_LOADED(iParam0);
}

int func_125()
{
	return Global_1892653[func_18() /*615*/].f_10.f_308;
}

void func_126(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::SET_BIT(&(uLocal_146[iVar0]), iVar1);
}

int func_127(struct<3> Param0, var uParam3, var uParam4)
{
	struct<31> Var0;
	
	Var0.f_4 = 1125515264;
	Var0.f_5 = 1;
	Var0.f_6 = 1;
	Var0.f_8 = 1082130432;
	Var0.f_9 = 1176255488;
	Var0.f_10 = 1;
	Var0.f_13 = 1;
	Var0.f_15 = 2;
	Var0.f_22 = 2;
	Var0.f_25 = 1;
	Var0.f_26 = 1;
	Var0.f_29 = 1123024896;
	Var0.f_30 = 1;
	Var0.f_0 = func_283();
	Var0.f_4 = 1000f;
	Var0.f_27 = 1;
	if (func_128(Param0, 0f, 0f, 0f, func_125(), 1, uParam3, uParam4, &Var0))
	{
		return 1;
	}
	return 0;
}

int func_128(struct<3> Param0, struct<3> Param3, int iParam6, int iParam7, var uParam8, var uParam9, var uParam10)
{
	bool bVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	struct<61> Var5;
	struct<61> Var66;
	
	bVar0 = false;
	if (uParam10->f_14)
	{
		if (uParam10->f_25)
		{
			uParam10->f_25 = 0;
		}
	}
	if (!func_281())
	{
		return 0;
	}
	if (func_280() && !func_279())
	{
		if (!Global_2635562.f_677 == 0)
		{
			Global_2635562.f_677 = 0;
			func_278();
			func_277();
		}
	}
	if (!SCRIPT::GET_ID_OF_THIS_THREAD() == Global_2635562.f_676)
	{
		if (!Global_2635562.f_677 == 0)
		{
			if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2635562.f_680) < func_276(0))
			{
				return 0;
			}
			else
			{
				Global_2635562.f_677 = 0;
			}
		}
	}
	else
	{
		if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2635562.f_678) > 30000)
		{
			Global_2635562.f_677 = 0;
		}
		if (!Global_2635562.f_677 == 0)
		{
			if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2635562.f_680) > func_276(1))
			{
				Global_2635562.f_677 = 0;
			}
		}
	}
	if (uParam10->f_6)
	{
		if (func_270(Param0))
		{
			if (func_269(&Param0, 1))
			{
			}
		}
	}
	if (!Global_2635562.f_677 == 0)
	{
		if (SYSTEM::VDIST(Global_2635562.f_696, Param0) > 50f)
		{
			return 0;
		}
		if (Global_2635562.f_699 != iParam6)
		{
			return 0;
		}
	}
	PATHFIND::REQUEST_PATH_NODES_IN_AREA_THIS_FRAME((Param0.f_0 - 100f), (Param0.f_1 - 100f), (Param0.f_0 + 100f), (Param0.f_1 + 100f));
	if (Global_2635562.f_677 == 0)
	{
		Global_2635562.f_683 = 0;
		Global_2635562.f_678 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		Global_2635562.f_676 = SCRIPT::GET_ID_OF_THIS_THREAD();
		Global_2635562.f_680 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		Global_2635562.f_696 = { Param0 };
		Global_2635562.f_699 = iParam6;
		Global_2635562.f_682 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		func_268();
		func_278();
		if (!uParam10->f_27 || ((((((((((func_267(Param0, 1, 1133903872) && !uParam10->f_28) && !Global_2733002.f_590) && !Global_2733002.f_577) && !Global_2733002.f_585) && !Global_2733002.f_591) && !Global_2733002.f_613) && !Global_2733002.f_625) && !Global_2733002.f_592) && !Global_2733002.f_647) && !BitTest(Global_2733002.f_594, 1)))
		{
			func_247(Param0, iParam6);
		}
		if (func_232(Param0))
		{
			func_247(Param0, iParam6);
		}
		if (BitTest(Global_2733002.f_593, 3))
		{
			func_277();
			if (!BitTest(Global_2733002.f_593, 2))
			{
				func_230(iParam6);
			}
			if (BitTest(Global_2733002.f_593, 1))
			{
				func_226(iParam6);
			}
		}
		else if (BitTest(Global_2733002.f_593, 4))
		{
			func_277();
			if (!BitTest(Global_2733002.f_593, 2))
			{
				func_225();
			}
			if (BitTest(Global_2733002.f_593, 1))
			{
				func_223();
			}
		}
		Global_2635562.f_677 = 2;
	}
	switch (Global_2635562.f_677)
	{
		case 2:
			if (PATHFIND::ARE_NODES_LOADED_FOR_AREA((Param0.f_0 - 100f), (Param0.f_1 - 100f), (Param0.f_0 + 100f), (Param0.f_1 + 100f)))
			{
				Global_2635562.f_684 = { Param0 };
				Global_2635562.f_687 = 0f;
				if ((Global_2733002.f_590 || BitTest(Global_2733002.f_594, 1)) || BitTest(Global_2733002.f_594, 4))
				{
					fVar2 = 10f;
					fVar3 = 5f;
					fVar4 = 5f;
				}
				else
				{
					fVar2 = 4f;
					fVar3 = 1f;
					fVar4 = 1f;
				}
				if (((uParam10->f_3 && func_213(Param0, fVar2, fVar3, fVar4, 1f, 0, 0, 0, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0)) && !uParam10->f_7) && !func_211(Param0, *uParam9, iParam6, PLAYER::PLAYER_ID(), 0))
				{
					Global_2635562.f_684 = { Param0 };
					Global_2635562.f_687 = *uParam9;
				}
				else
				{
					Var5.f_6 = 1082130432;
					Var5.f_7 = 1176255488;
					Var5.f_8 = 1;
					Var5.f_10 = 1;
					Var5.f_13 = 1;
					Var5.f_15 = 1;
					Var5.f_16 = 1;
					Var5.f_31 = 1;
					Var5.f_34 = joaat("tailgater");
					Var5.f_38 = 2;
					Var5.f_45 = 2;
					Var5.f_49 = 1123024896;
					Var5.f_53 = 999;
					Var5.f_54 = 1176256410;
					Var5.f_55 = 1;
					Var5.f_56 = 1;
					Var5.f_57 = 1;
					Var5.f_9 = iParam7;
					Var5.f_3 = 7f;
					Var5.f_10 = uParam10->f_5;
					Var5.f_4 = *uParam10;
					Var5.f_13 = uParam10->f_1;
					Var5.f_14 = uParam10->f_2;
					Var5.f_5 = uParam10->f_4;
					Var5.f_15 = uParam10->f_6;
					Var5.f_11 = uParam10->f_7;
					Var5.f_6 = uParam10->f_8;
					Var5.f_7 = uParam10->f_9;
					Var5.f_16 = uParam10->f_10;
					Var5.f_17 = uParam10->f_11;
					Var5 = { Param3 };
					Var5.f_12 = 1;
					Var5.f_34 = iParam6;
					Var5.f_31 = uParam10->f_13;
					if (uParam10->f_32 && Global_2635562.f_683 > 0)
					{
						Var5.f_30 = 0;
						Var5.f_29 = 1;
					}
					else
					{
						Var5.f_30 = uParam10->f_30;
						Var5.f_29 = uParam10->f_31;
					}
					Var5.f_48 = uParam10->f_14;
					Var5.f_56 = uParam10->f_25;
					Var5.f_57 = uParam10->f_26;
					Var5.f_49 = uParam10->f_29;
					Var5.f_59 = uParam10->f_33;
					Var5.f_60 = uParam10->f_34;
					iVar1 = 0;
					while (iVar1 < 2)
					{
						Var5.f_38[iVar1 /*3*/] = { uParam10->f_15[iVar1 /*3*/] };
						Var5.f_45[iVar1] = uParam10->f_22[iVar1];
						iVar1++;
					}
					if (!BitTest(Global_2739712, 0))
					{
						if (func_210(Global_2635562.f_684))
						{
							Global_2635562.f_684 = { 270.6082f, -2781.597f, 5.0207f };
						}
					}
					func_154(&(Global_2635562.f_684), &(Global_2635562.f_687), &Var5);
				}
				func_152(Global_2635562.f_684, Global_2635562.f_687, iParam6, &(Global_2635562.f_674));
				Global_2635562.f_672 = 0;
				Global_2635562.f_673 = 0;
				Global_2635562.f_683++;
				Global_2635562.f_679 = NETWORK::GET_NETWORK_TIME_ACCURATE();
				Global_2635562.f_678 = NETWORK::GET_NETWORK_TIME_ACCURATE();
				Global_2635562.f_677 = 3;
			}
			break;
		
		case 3:
			if (Global_2635562.f_672)
			{
				if (Global_2635562.f_674 == Global_2635562.f_675)
				{
					if (Global_2635562.f_673)
					{
						if (uParam10->f_12 && !uParam10->f_11)
						{
							if (func_151(Global_2635562.f_684, Global_2635562.f_687, iParam6, 1, 1036831949))
							{
								Global_2635562.f_677 = 4;
								Global_2635562.f_701 = NETWORK::GET_NETWORK_TIME_ACCURATE();
							}
							else
							{
								bVar0 = true;
							}
						}
						else
						{
							bVar0 = true;
						}
					}
					else
					{
						func_149(Global_2635562.f_684, 0);
						func_148(-1);
					}
				}
				else
				{
					Global_2635562.f_672 = 0;
					Global_2635562.f_673 = 0;
				}
			}
			else if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2635562.f_679) > 3000)
			{
				func_148(-1);
			}
			break;
		
		case 4:
			if (uParam10->f_12 && !uParam10->f_11)
			{
				if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2635562.f_701) < 10000)
				{
					if (NETWORK::NETWORK_ENTITY_AREA_DOES_EXIST(Global_2635562.f_700))
					{
						if (NETWORK::NETWORK_ENTITY_AREA_HAVE_ALL_REPLIED(Global_2635562.f_700))
						{
							if (!NETWORK::NETWORK_ENTITY_AREA_IS_OCCUPIED(Global_2635562.f_700))
							{
								if (func_147(Global_2635562.f_684, Global_2635562.f_687, iParam6, PLAYER::PLAYER_ID(), 0) || func_130(Global_2635562.f_684, Global_2635562.f_687, iParam6, 1, 0, 0, 0, 1, 0))
								{
									func_149(Global_2635562.f_684, 0);
									func_148(-1);
								}
								else
								{
									bVar0 = true;
								}
							}
							else
							{
								func_149(Global_2635562.f_684, 0);
								func_148(-1);
							}
						}
					}
					else
					{
						func_148(-1);
					}
				}
				else
				{
					func_148(1);
				}
			}
			else
			{
				bVar0 = true;
			}
			break;
		
		case 5:
			Global_2635562.f_684 = { Param0 };
			Global_2635562.f_687 = 0f;
			Var66.f_6 = 1082130432;
			Var66.f_7 = 1176255488;
			Var66.f_8 = 1;
			Var66.f_10 = 1;
			Var66.f_13 = 1;
			Var66.f_15 = 1;
			Var66.f_16 = 1;
			Var66.f_31 = 1;
			Var66.f_34 = joaat("tailgater");
			Var66.f_38 = 2;
			Var66.f_45 = 2;
			Var66.f_49 = 1123024896;
			Var66.f_53 = 999;
			Var66.f_54 = 1176256410;
			Var66.f_55 = 1;
			Var66.f_56 = 1;
			Var66.f_57 = 1;
			Var66.f_9 = iParam7;
			Var66.f_3 = 3.5f;
			Var66.f_10 = uParam10->f_5;
			Var66.f_4 = *uParam10;
			Var66.f_12 = 1;
			Var66.f_13 = 0;
			Var66.f_15 = uParam10->f_6;
			Var66.f_11 = uParam10->f_7;
			Var66.f_6 = uParam10->f_8;
			Var66.f_7 = uParam10->f_9;
			Var66 = { Param3 };
			Var66.f_34 = iParam6;
			Var66.f_31 = uParam10->f_13;
			Var66.f_30 = 1;
			Var66.f_48 = uParam10->f_14;
			Var66.f_56 = uParam10->f_25;
			Var66.f_57 = uParam10->f_26;
			Var66.f_30 = uParam10->f_30;
			Var66.f_29 = uParam10->f_31;
			Var66.f_59 = uParam10->f_33;
			Var66.f_60 = uParam10->f_34;
			iVar1 = 0;
			while (iVar1 < 2)
			{
				Var66.f_38[iVar1 /*3*/] = { uParam10->f_15[iVar1 /*3*/] };
				Var66.f_45[iVar1] = uParam10->f_22[iVar1];
				iVar1++;
			}
			Var66.f_49 = uParam10->f_29;
			func_154(&(Global_2635562.f_684), &(Global_2635562.f_687), &Var66);
			Global_2635562.f_677 = 6;
			break;
		
		case 6:
			bVar0 = true;
			break;
	}
	Global_2635562.f_696 = { Param0 };
	Global_2635562.f_699 = iParam6;
	Global_2635562.f_680 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	if (bVar0)
	{
		Global_2635562.f_517 = 0;
		*uParam8 = { Global_2635562.f_684 };
		*uParam9 = Global_2635562.f_687;
		func_129(1);
		return 1;
	}
	return 0;
}

void func_129(bool bParam0)
{
	Global_2635562.f_677 = 0;
	func_268();
	func_278();
	if (bParam0)
	{
		func_277();
	}
}

int func_130(struct<3> Param0, float fParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, int iParam10)
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	struct<3> Var5;
	float fVar8;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam9 == 1 && PLAYER::PLAYER_ID() != iVar1) || iParam9 == 0)
		{
			if (func_357(iVar1, bParam5, bParam6))
			{
				if (NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), iVar1))
				{
					if (!bParam8 || (!PED::IS_PED_INJURED(PLAYER::GET_PLAYER_PED(iVar1)) && func_146(iVar1)))
					{
						if ((!bParam7 || (bParam7 == 1 && PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) != PLAYER::GET_PLAYER_TEAM(iVar1))) || PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1)
						{
							if (((PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1 && iParam10) && bParam7) && func_141(iVar1))
							{
							}
							else if (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iVar1)))
							{
								fVar2 = 0.1f;
								if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::GET_PLAYER_PED(iVar1), false))
								{
									iVar3 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(iVar1), false);
									if (ENTITY::DOES_ENTITY_EXIST(iVar3) && !ENTITY::IS_ENTITY_DEAD(iVar3, false))
									{
										iVar4 = ENTITY::GET_ENTITY_MODEL(iVar3);
										Var5 = { ENTITY::GET_ENTITY_COORDS(iVar3, false) };
										fVar8 = ENTITY::GET_ENTITY_HEADING(iVar3);
										if (func_140(Param0, fParam3, iParam4, Var5, fVar8, iVar4, 0))
										{
											return 1;
										}
									}
									else
									{
										fVar2 = 5f;
									}
								}
								if (func_131(func_284(iVar1), Param0, fParam3, iParam4, fVar2))
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

int func_131(struct<3> Param0, struct<3> Param3, float fParam6, int iParam7, float fParam8)
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	
	if (SYSTEM::VDIST(Param0, Param3) < func_139(iParam7, 1008981770))
	{
		func_132(Param3, fParam6, iParam7, &Var0, &Var3, &fVar6, fParam8);
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, Var0, Var3, fVar6, false, true))
		{
			return 1;
		}
	}
	return 0;
}

void func_132(struct<3> Param0, float fParam3, int iParam4, var uParam5, var uParam6, var uParam7, float fParam8)
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	struct<3> Var9;
	struct<3> Var12;
	
	Var0 = { 0f, 1f, 0f };
	func_138(&Var0, 0f, 0f, fParam3);
	Var0 = { Var0 / FtoV(SYSTEM::VMAG(Var0)) };
	func_133(iParam4, &Var3, &Var6, 1086324736, 1080033280, 1077936128);
	Var9 = { Param0 + Var0 * FtoV((Var6.f_1 + fParam8)) };
	Var9.f_2 = (Var9.f_2 - ((0.5f * MISC::ABSF((Var6.f_2 - Var3.f_2))) + fParam8));
	Var12 = { Param0 - Var0 * FtoV(((Var3.f_1 * -1f) + fParam8)) };
	Var12.f_2 = (Var12.f_2 + ((0.5f * MISC::ABSF((Var6.f_2 - Var3.f_2))) + fParam8));
	*uParam5 = { Var9 };
	*uParam6 = { Var12 };
	*uParam7 = MISC::ABSF((Var6.f_0 - Var3.f_0));
}

void func_133(int iParam0, var* uParam1, var* uParam2, float fParam3, float fParam4, float fParam5)
{
	int iVar0;
	
	if (STREAMING::IS_MODEL_VALID(iParam0))
	{
		MISC::GET_MODEL_DIMENSIONS(iParam0, uParam1, uParam2);
	}
	else
	{
		iVar0 = func_136(iParam0);
		if (iVar0 != 0)
		{
			func_134(iVar0, uParam1, uParam2, 1086324736, 1080033280, 1077936128);
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

void func_134(int iParam0, var* uParam1, var* uParam2, float fParam3, float fParam4, float fParam5)
{
	int iVar0;
	
	func_135(iParam0, &Global_1576480);
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

void func_135(int iParam0, var uParam1)
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

int func_136(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = iVar0;
		if (func_137(iVar1) == iParam0)
		{
			return iVar1;
		}
		iVar0++;
	}
	return 0;
}

int func_137(int iParam0)
{
	int iVar0;
	
	iVar0 = (1000 + iParam0);
	return iVar0;
}

void func_138(var uParam0, struct<3> Param1)
{
	float fVar0;
	float fVar1;
	struct<3> Var2;
	
	fVar0 = SYSTEM::COS(Param1.f_0);
	fVar1 = SYSTEM::SIN(Param1.f_0);
	Var2.f_0 = *uParam0;
	Var2.f_1 = ((fVar0 * uParam0->f_1) - (fVar1 * uParam0->f_2));
	Var2.f_2 = ((fVar1 * uParam0->f_1) + (fVar0 * uParam0->f_2));
	*uParam0 = { Var2 };
	fVar0 = SYSTEM::COS(Param1.f_1);
	fVar1 = SYSTEM::SIN(Param1.f_1);
	Var2.f_0 = ((fVar0 * *uParam0) + (fVar1 * uParam0->f_2));
	Var2.f_1 = uParam0->f_1;
	Var2.f_2 = ((fVar0 * uParam0->f_2) - (fVar1 * *uParam0));
	*uParam0 = { Var2 };
	fVar0 = SYSTEM::COS(Param1.f_2);
	fVar1 = SYSTEM::SIN(Param1.f_2);
	Var2.f_0 = ((fVar0 * *uParam0) - (fVar1 * uParam0->f_1));
	Var2.f_1 = ((fVar1 * *uParam0) + (fVar0 * uParam0->f_1));
	Var2.f_2 = uParam0->f_2;
	*uParam0 = { Var2 };
}

float func_139(int iParam0, float fParam1)
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	float fVar9;
	
	if (iParam0 == 0)
	{
		return 5f;
	}
	func_133(iParam0, &Var0, &Var3, 1086324736, 1080033280, 1077936128);
	Var6 = { Var3 - Var0 };
	fVar9 = (SYSTEM::SQRT(((((Var6.f_0 * 0.5f) * (Var6.f_0 * 0.5f)) + ((Var6.f_1 * 0.5f) * (Var6.f_1 * 0.5f))) + ((Var6.f_2 * 0.5f) * (Var6.f_2 * 0.5f)))) + fParam1);
	return fVar9;
}

int func_140(struct<3> Param0, float fParam3, int iParam4, struct<3> Param5, float fParam8, int iParam9, int iParam10)
{
	if (func_131(Param0, Param5, fParam8, iParam9, 1036831949))
	{
		return 1;
	}
	func_132(Param0, fParam3, iParam4, &Global_1982442, &(Global_1982442.f_3), &(Global_1982442.f_6), 1036831949);
	func_132(Param5, fParam8, iParam9, &(Global_1982442.f_7), &(Global_1982442.f_10), &(Global_1982442.f_13), 1036831949);
	if (MISC::GET_POINT_AREA_OVERLAP(Global_1982442, Global_1982442.f_3, Global_1982442.f_6, Global_1982442.f_7, Global_1982442.f_10, Global_1982442.f_13))
	{
		return 1;
	}
	return 0;
}

int func_141(int iParam0)
{
	if (func_145(PLAYER::PLAYER_ID(), iParam0))
	{
		return 1;
	}
	Global_2708504 = { func_144(iParam0) };
	if (NETWORK::NETWORK_IS_FRIEND(&Global_2708504))
	{
		return 1;
	}
	if (func_142(PLAYER::PLAYER_ID(), iParam0))
	{
		return 1;
	}
	return 0;
}

int func_142(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_143(iParam0);
	if (func_37(iVar0))
	{
		if (iVar0 == func_143(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_143(int iParam0)
{
	if (func_37(iParam0))
	{
		return Global_1892653[iParam0 /*615*/].f_10;
	}
	return func_118();
}

struct<13> func_144(int iParam0)
{
	struct<13> Var0;
	
	NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0, 13);
	return Var0;
}

int func_145(int iParam0, int iParam1)
{
	if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
	{
		Global_2708504 = { func_144(iParam0) };
		Global_2708517 = { func_144(iParam1) };
		if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Global_2708504))
		{
			if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Global_2708517))
			{
				NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2708434, 35, &Global_2708504);
				NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2708469, 35, &Global_2708517);
				if (Global_2708434 == Global_2708469)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_146(int iParam0)
{
	if (ENTITY::IS_ENTITY_VISIBLE_TO_SCRIPT(PLAYER::GET_PLAYER_PED(iParam0)) || Global_2658291[iParam0 /*468*/].f_259)
	{
		return 1;
	}
	return 0;
}

int func_147(struct<3> Param0, float fParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam5 == iVar0 || iParam6 == 1)
		{
			iVar1 = iVar0;
			if (func_357(iVar1, 0, 1) && func_357(iParam5, 0, 1))
			{
				if (Global_2649159.f_261[iVar0])
				{
					if (func_131(Global_2649159.f_131[iVar0 /*3*/], Param0, fParam3, iParam4, 1036831949))
					{
						return 1;
					}
				}
				else if (func_131(func_284(iVar1), Param0, fParam3, iParam4, 1036831949))
				{
					return 1;
				}
			}
			else if (Global_2649159.f_261[iVar0])
			{
				if (func_131(Global_2649159.f_131[iVar0 /*3*/], Param0, fParam3, iParam4, 1036831949))
				{
					return 1;
				}
			}
			else if (func_357(iVar1, 0, 0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iVar1)))
				{
					if (func_131(func_284(iVar1), Param0, fParam3, iParam4, 1036831949))
					{
						return 1;
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

void func_148(int iParam0)
{
	if (Global_2635562.f_683 < 20 && NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2635562.f_682) < 30000)
	{
		if (iParam0 == -1 || (iParam0 > -1 && Global_2635562.f_683 < iParam0))
		{
			Global_2635562.f_677 = 2;
		}
		else
		{
			Global_2635562.f_677 = 5;
		}
	}
	else
	{
		Global_2635562.f_677 = 5;
	}
}

void func_149(struct<3> Param0, int iParam3)
{
	struct<3> Var0;
	
	if (iParam3 == 0 && func_150(Param0, 0.01f))
	{
		return;
	}
	if (iParam3 < 30 && SYSTEM::VMAG(Param0) > 0f)
	{
		Var0 = { Global_2635562.f_3038[iParam3 /*3*/] };
		Global_2635562.f_3038[iParam3 /*3*/] = { Param0 };
		func_149(Var0, iParam3 + 1);
	}
}

int func_150(struct<3> Param0, float fParam3)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 30)
	{
		if (SYSTEM::VDIST(Param0, Global_2635562.f_3038[iVar0 /*3*/]) < fParam3)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_151(struct<3> Param0, float fParam3, int iParam4, bool bParam5, float fParam6)
{
	struct<3> Var0;
	struct<3> Var3;
	var uVar6;
	int iVar7;
	float fVar8;
	
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return 0;
	}
	else
	{
		func_278();
		iVar7 = 0;
		while (iVar7 < 3)
		{
			if (Global_2635562.f_688[iVar7] == -1 && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
			{
				func_132(Param0, fParam3, iParam4, &Var0, &Var3, &uVar6, fParam6);
				if (bParam5)
				{
					fVar8 = MISC::ABSF((Var0.f_2 - Var3.f_2));
					Var0.f_2 = (Var0.f_2 + ((fVar8 * 0.5f) - 2f));
					Var3.f_2 = (Var3.f_2 + (fVar8 * 0.5f));
				}
				Global_2635562.f_688[iVar7] = NETWORK::NETWORK_ADD_CLIENT_ENTITY_ANGLED_AREA(Var0, Var3, fParam6);
				Global_2635562.f_692[iVar7] = SCRIPT::GET_ID_OF_THIS_THREAD();
				Global_2635562.f_700 = Global_2635562.f_688[iVar7];
				return 1;
			}
			iVar7++;
		}
	}
	return 0;
}

void func_152(struct<3> Param0, var uParam3, int iParam4, var uParam5)
{
	struct<9> Var0;
	
	*uParam5 = func_153(&Param0, &uParam3, &iParam4);
	Var0.f_0 = 323285304;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_3 = { Param0 };
	Var0.f_6 = uParam3;
	Var0.f_7 = iParam4;
	Var0.f_8 = *uParam5;
	SCRIPT::_SEND_TU_SCRIPT_EVENT_NEW(1, &Var0, 9, func_33(1, 1), Var0.f_0);
}

int func_153(var uParam0, var uParam1, var uParam2)
{
	char cVar0[64];
	int iVar16;
	
	StringCopy(&cVar0, "", 64);
	StringIntConCat(&cVar0, SYSTEM::ROUND(*uParam0), 64);
	StringIntConCat(&cVar0, SYSTEM::ROUND(uParam0->f_1), 64);
	StringIntConCat(&cVar0, SYSTEM::ROUND(uParam0->f_2), 64);
	StringIntConCat(&cVar0, SYSTEM::ROUND(*uParam1), 64);
	StringIntConCat(&cVar0, *uParam2, 64);
	iVar16 = MISC::GET_HASH_KEY(&cVar0);
	return iVar16;
}

void func_154(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	
	iVar0 = 0;
	if (Global_2635562.f_2055 > 0)
	{
		iVar0 = 0;
		while (func_205(uParam0, uParam1, uParam2) == 0 && iVar0 < 2)
		{
			iVar0++;
		}
		if (iVar0 == 2)
		{
			uParam2->f_33 = 0;
		}
		else
		{
			return;
		}
	}
	iVar0 = 0;
	while (func_155(uParam0, uParam1, uParam2) == 0 && iVar0 < 6)
	{
		iVar0++;
	}
}

int func_155(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	struct<3> Var1;
	float* fVar4;
	int iVar5;
	var uVar6;
	var uVar7;
	int iVar8;
	int iVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	float fVar13;
	float fVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	bool bVar18;
	int iVar19;
	bool bVar20;
	int iVar21;
	float fVar22;
	int iVar23;
	int iVar24;
	float fVar25;
	int iVar26;
	struct<3> Var27;
	var uVar30;
	struct<3> Var31;
	float* fVar34;
	bool bVar35;
	
	iVar0 = 0;
	if (!SYSTEM::VMAG(uParam2->f_35) > 0f)
	{
		uParam2->f_35 = { *uParam0 };
	}
	if (uParam2->f_15)
	{
		if (func_201(uParam2->f_35, uParam0, &(uParam2->f_38), &(uParam2->f_45), 1, 1))
		{
			uParam2->f_6 = 9999.9f;
			uParam2->f_7 = 9999.9f;
		}
	}
	if (uParam2->f_51)
	{
		uParam2->f_6 = 9999.9f;
	}
	if (uParam2->f_48)
	{
		if (func_196(uParam0, 1))
		{
		}
	}
	if (uParam0->f_2 < -80f)
	{
		uParam2->f_6 = 9999.9f;
		uParam2->f_7 = 9999.9f;
	}
	iVar5 = 0;
	bVar10 = true;
	if (uParam2->f_11)
	{
		iVar5 += 2;
		iVar5++;
		bVar10 = false;
	}
	else if (uParam2->f_10 == 0 || (uParam2->f_33 > 0 && uParam2->f_16))
	{
		iVar5++;
		bVar10 = false;
	}
	iVar5 += 4;
	fVar13 = 3f;
	fVar14 = 5f;
	switch (uParam2->f_33)
	{
		case 0:
			fVar13 = 3f;
			fVar14 = 5f;
			break;
		
		case 1:
			fVar13 = 2.75f;
			fVar14 = 7.5f;
			break;
		
		default:
			fVar13 = 2.5f;
			fVar14 = 10f;
			break;
	}
	iVar15 = 0;
	Global_2643675.f_162 = 0;
	Global_2643675.f_163 = 0;
	Global_2643675.f_164 = -99;
	Global_2643675.f_165 = { 0f, 0f, 0f };
	iVar16 = 0;
	while (iVar16 < 40)
	{
		Global_2643675[iVar16 /*3*/] = { 0f, 0f, 0f };
		Global_2643675.f_121[iVar16] = 0f;
		iVar16++;
	}
	iVar17 = 1;
	if (func_136(uParam2->f_34) != 0)
	{
		iVar17 = 3;
		uParam2->f_6 = 9999.9f;
		uParam2->f_7 = 9999.9f;
		uParam2->f_18 = 0;
	}
	while (true)
	{
		iVar8 = PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_ID_WITH_HEADING(*uParam0, (iVar0 * iVar17), &fVar4, &iVar9, iVar5, fVar13, fVar14);
		if (PATHFIND::IS_VEHICLE_NODE_ID_VALID(iVar8))
		{
			PATHFIND::GET_VEHICLE_NODE_POSITION(iVar8, &Var1);
			bVar12 = false;
			if (Global_2643675.f_164 == iVar8)
			{
				bVar12 = true;
			}
			Global_2643675.f_165 = { Var1 };
			if (((uParam2->f_10 || uParam2->f_33 > 0) || !PATHFIND::GET_VEHICLE_NODE_IS_SWITCHED_OFF(iVar8)) || PATHFIND::GET_VEHICLE_NODE_IS_GPS_ALLOWED(iVar8))
			{
				PATHFIND::GET_VEHICLE_NODE_PROPERTIES(Var1, &uVar6, &uVar7);
				if (SYSTEM::VDIST(Var1, uParam2->f_35) > uParam2->f_4)
				{
					if (!func_189(&Var1, 0))
					{
						if ((uParam2->f_13 || uVar7 & 64 == 0) || uParam2->f_33 == 1)
						{
							if (uParam2->f_14 || uVar7 & 16 == 0)
							{
								if ((uVar7 & 128 == 0 && uVar7 & 256 == 0) && uVar7 & 512 == 0)
								{
									if (!func_186(Var1))
									{
										Var1 = { func_181(Var1, &fVar4, iVar9, uParam2->f_9, *uParam2, bVar10, uParam2->f_11, uParam2->f_34, &bVar11, bVar12, 1, uParam2->f_51, uParam2->f_60) };
										if (SYSTEM::VMAG(Var1) > 0f)
										{
											if (!func_180(Var1, 5f))
											{
												if (Var1.f_2 >= (uParam2->f_35.f_2 - uParam2->f_7) || uParam2->f_33 >= 2)
												{
													if (Var1.f_2 <= (uParam2->f_35.f_2 + uParam2->f_6) || uParam2->f_33 >= 2)
													{
														if (func_176(Var1, uParam2))
														{
															if ((uParam2->f_48 && !func_196(&Var1, 0)) || uParam2->f_48 == 0)
															{
																bVar18 = true;
																if (!bVar12)
																{
																	if (bVar11)
																	{
																		iVar0 = (iVar0 + -1);
																		bVar18 = false;
																	}
																}
																if (SYSTEM::VMAG(Var1) > 0f)
																{
																	if (((uParam2->f_5 > 0f && SYSTEM::VDIST(Var1.f_0, Var1.f_1, 0f, uParam2->f_35, uParam2->f_35.f_1, 0f) < uParam2->f_5) || uParam2->f_5 <= 0f) || uParam2->f_33 >= 2)
																	{
																		if ((uParam2->f_12 && !func_175(Var1, fVar4, uParam2->f_34, PLAYER::PLAYER_ID(), 0, uParam2->f_56)) || !uParam2->f_12)
																		{
																			if (!uParam2->f_15 || !func_201(uParam2->f_35, &Var1, &(uParam2->f_38), &(uParam2->f_45), 0, 1))
																			{
																				if (uParam2->f_8)
																				{
																					iVar19 = uParam2->f_31;
																					bVar20 = true;
																					iVar21 = 1;
																					fVar22 = uParam2->f_49;
																					if (!uParam2->f_55)
																					{
																						iVar19 = 0;
																						bVar20 = false;
																						iVar21 = 0;
																						fVar22 = 1f;
																					}
																					else if (uParam2->f_17)
																					{
																						iVar19 = 0;
																						bVar20 = false;
																						iVar21 = 0;
																						if (uParam2->f_33 == 1)
																						{
																							fVar22 = (fVar22 * 0.375f);
																						}
																					}
																					else
																					{
																						bVar20 = true;
																						iVar21 = 1;
																						if (uParam2->f_28)
																						{
																							if (uParam2->f_33 == 1)
																							{
																								fVar22 = (fVar22 * 0.375f);
																							}
																						}
																					}
																					iVar23 = 0;
																					if (!func_174(Var1, fVar4, uParam2->f_34))
																					{
																						if (uParam2->f_3 > 7f)
																						{
																							if (func_213(Var1, 6f, 1f, 1f, 5f, iVar19, bVar20, iVar21, fVar22, uParam2->f_58, -1, 1, uParam2->f_3, 0, 0, 0, 0))
																							{
																								iVar23 = 1;
																							}
																						}
																						else if (func_213(Var1, 6f, 1f, 1f, 5f, iVar19, bVar20, iVar21, fVar22, uParam2->f_58, -1, 1, 0f, 0, 0, 0, 0) && !func_130(Var1, fVar4, uParam2->f_34, 1, 1, 0, 0, 0, 0))
																						{
																							iVar23 = 1;
																						}
																					}
																					if (iVar23 || uParam2->f_33 >= 2)
																					{
																						if (((uParam2->f_29 || uParam2->f_30) || uParam2->f_52) || uParam2->f_33 >= 2)
																						{
																							fVar25 = 0f;
																							if (uParam2->f_52)
																							{
																								iVar24 = func_164(Var1, uParam2->f_54, &fVar25);
																							}
																							if (!uParam2->f_52 || (uParam2->f_52 && iVar24 <= uParam2->f_53))
																							{
																								if (uParam2->f_52)
																								{
																									if (iVar24 < uParam2->f_53)
																									{
																										iVar16 = 0;
																										while (iVar16 < Global_2643675.f_162)
																										{
																											Global_2643675[iVar16 /*3*/] = { 0f, 0f, 0f };
																											Global_2643675.f_121[iVar16] = 0f;
																											iVar16++;
																										}
																										Global_2643675.f_162 = 0;
																										uParam2->f_53 = iVar24;
																									}
																								}
																								if (uParam2->f_30)
																								{
																									if (Global_2643675.f_162 == 0)
																									{
																										Global_2643675[0 /*3*/] = { Var1 };
																										Global_2643675.f_121[0] = fVar4;
																									}
																									else
																									{
																										iVar16 = 0;
																										while (iVar16 < Global_2643675.f_162 + 1)
																										{
																											if (iVar16 < 40)
																											{
																												if (SYSTEM::VDIST2(Var1, uParam2->f_35) < SYSTEM::VDIST2(Global_2643675[iVar16 /*3*/], uParam2->f_35))
																												{
																													func_163(Var1, fVar4, iVar16);
																													iVar16 = Global_2643675.f_162 + 1;
																												}
																											}
																											iVar16++;
																										}
																									}
																									Global_2643675.f_162++;
																									if (Global_2643675.f_162 >= 5)
																									{
																										if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
																										{
																											iVar0 = 100;
																										}
																										else if (Global_2643675.f_162 == 40)
																										{
																											iVar0 = 100;
																										}
																									}
																								}
																								else
																								{
																									Global_2643675[Global_2643675.f_162 /*3*/] = { Var1 };
																									Global_2643675.f_121[Global_2643675.f_162] = fVar4;
																									Global_2643675.f_162++;
																									if (func_176(Var1, uParam2))
																									{
																										Global_2643675.f_163++;
																									}
																									if (Global_2643675.f_162 >= 10)
																									{
																										if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
																										{
																											iVar0 = 100;
																										}
																										else if (Global_2643675.f_162 == 40)
																										{
																											iVar0 = 100;
																										}
																									}
																								}
																							}
																						}
																						else
																						{
																							*uParam0 = { Var1 };
																							*uParam1 = fVar4;
																							return 1;
																						}
																					}
																					else if (bVar18)
																					{
																						iVar0++;
																					}
																				}
																				else
																				{
																					*uParam0 = { Var1 };
																					*uParam1 = fVar4;
																					return 1;
																				}
																			}
																		}
																		else
																		{
																			iVar15++;
																		}
																	}
																	else
																	{
																		iVar0 = 100;
																	}
																}
															}
															else
															{
																iVar0++;
															}
														}
														else if (!uParam2->f_32)
														{
															iVar0 = 100;
														}
													}
													else
													{
														iVar0++;
													}
												}
												else
												{
													iVar0++;
												}
											}
										}
									}
									else
									{
										iVar0++;
									}
								}
							}
							else
							{
								iVar0++;
							}
						}
						else
						{
							iVar0++;
						}
					}
					else
					{
						iVar15++;
					}
				}
				else
				{
					iVar15++;
				}
			}
			iVar0++;
			if (iVar0 >= (40 + iVar15) || iVar0 >= 100)
			{
				if (Global_2643675.f_162 > 0 && ((uParam2->f_29 || uParam2->f_30) || uParam2->f_33 >= 2))
				{
					if (uParam2->f_30)
					{
						*uParam0 = { Global_2643675[0 /*3*/] };
						*uParam1 = Global_2643675.f_121[0];
						return 1;
					}
					else
					{
						if (Global_2643675.f_163 > 0 && !Global_2643675.f_163 == Global_2643675.f_162)
						{
							func_161(0, uParam2);
						}
						iVar26 = MISC::GET_RANDOM_INT_IN_RANGE(0, Global_2643675.f_162);
						if (uParam2->f_18 && uParam2->f_30)
						{
							iVar26 = 0;
						}
						Var27 = { Global_2643675[0 /*3*/] };
						uVar30 = Global_2643675.f_121[0];
						Global_2643675[0 /*3*/] = { Global_2643675[iVar26 /*3*/] };
						Global_2643675.f_121[0] = Global_2643675.f_121[iVar26];
						Global_2643675[iVar26 /*3*/] = { Var27 };
						Global_2643675.f_121[iVar26] = uVar30;
						*uParam0 = { Global_2643675[0 /*3*/] };
						*uParam1 = Global_2643675.f_121[0];
						return 1;
					}
				}
				else
				{
					uParam2->f_33++;
					if (uParam2->f_33 < 3)
					{
						return 0;
					}
					else
					{
						func_160(iVar15, *uParam0, &iVar0, &Var1, &fVar4, uParam2, bVar10, iVar9, iVar5, fVar13, fVar14, bVar11);
						Var31 = { Var1 };
						fVar34 = fVar4;
						if (!uParam2->f_50)
						{
							bVar35 = true;
						}
						else
						{
							bVar35 = false;
						}
						if (func_201(uParam2->f_35, &Var31, &(uParam2->f_38), &(uParam2->f_45), bVar35, 1) || func_196(&Var31, bVar35))
						{
							if (!uParam2->f_50)
							{
								uParam2->f_33 = 0;
								uParam2->f_50 = 1;
								*uParam0 = { Var31 };
								*uParam1 = fVar34;
								uParam2->f_6 = 9999.9f;
								uParam2->f_7 = 9999.9f;
								return 0;
							}
							else
							{
								*uParam0 = { Var31 };
								*uParam1 = fVar34;
								return 1;
							}
						}
						else
						{
							*uParam0 = { Var31 };
							*uParam1 = fVar34;
							return 1;
						}
					}
				}
			}
		}
		else
		{
			uParam2->f_33++;
			if (uParam2->f_33 < 3)
			{
				return 0;
			}
			else
			{
				func_156(&Global_1574205, uParam0, uParam1, *uParam0);
				if (uParam2->f_11)
				{
					uParam2->f_27 = 1;
				}
				return 1;
			}
		}
		Global_2643675.f_164 = iVar8;
	}
	return 0;
}

void func_156(var uParam0, var uParam1, var uParam2, struct<3> Param3)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	
	fVar0 = 1E+09f;
	iVar3 = -1;
	iVar2 = 0;
	while (iVar2 < *uParam0)
	{
		fVar1 = SYSTEM::VDIST(*(uParam0[iVar2 /*4*/]), Param3);
		if (fVar1 < fVar0)
		{
			if (!func_157(*(uParam0[iVar2 /*4*/]), 5f, PLAYER::PLAYER_ID(), 0, 0))
			{
				fVar0 = fVar1;
				iVar3 = iVar2;
			}
		}
		iVar2++;
	}
	if (!iVar3 == -1)
	{
		*uParam1 = { *(uParam0[iVar3 /*4*/]) };
		*uParam2 = (uParam0[iVar3 /*4*/])->f_3;
	}
}

int func_157(struct<3> Param0, float fParam3, int iParam4, int iParam5, int iParam6)
{
	if (func_159(Param0, fParam3, iParam4, iParam5, 0) || func_158(Param0, iParam4, iParam6))
	{
		return 1;
	}
	return 0;
}

int func_158(struct<3> Param0, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam3 == iVar0 || iParam4 == 1)
		{
			iVar2 = iVar0;
			iVar1 = 0;
			while (iVar1 < 2)
			{
				if (!Global_2649159.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4 == 0)
				{
					if (func_131(Param0, Global_2649159.f_461[iVar0 /*11*/][iVar1 /*5*/], Global_2649159.f_461[iVar0 /*11*/][iVar1 /*5*/].f_3, Global_2649159.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4, 1036831949))
					{
						if (func_357(iVar2, 0, 1) && func_357(iParam3, 0, 1))
						{
							return 1;
						}
						else
						{
							return 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_159(struct<3> Param0, float fParam3, int iParam4, int iParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam4 == iVar0 || iParam5 == 1)
		{
			iVar1 = iVar0;
			bVar2 = false;
			if (bParam6)
			{
				if (func_357(iVar1, 0, 1) && func_357(iParam4, 0, 1))
				{
					if (PLAYER::GET_PLAYER_TEAM(iVar1) == PLAYER::GET_PLAYER_TEAM(iParam4))
					{
						bVar2 = true;
					}
				}
			}
			if (!bVar2)
			{
				if (func_357(iVar1, 0, 1) && func_357(iParam4, 0, 1))
				{
					if (Global_2649159.f_261[iVar0])
					{
						if (SYSTEM::VDIST(Global_2649159.f_131[iVar0 /*3*/], Param0) < fParam3)
						{
							return 1;
						}
					}
					else if (SYSTEM::VDIST(func_284(iVar1), Param0) < 1f)
					{
						return 1;
					}
				}
				else if (Global_2649159.f_261[iVar0])
				{
					if (SYSTEM::VDIST(Global_2649159.f_131[iVar0 /*3*/], Param0) < fParam3)
					{
						return 1;
					}
				}
				else if (func_357(iVar1, 0, 1))
				{
					if (SYSTEM::VDIST(func_284(iVar1), Param0) < 1f)
					{
						return 1;
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

void func_160(int iParam0, struct<3> Param1, int iParam4, var* uParam5, float* fParam6, var uParam7, bool bParam8, int iParam9, int iParam10, float fParam11, float fParam12, bool bParam13)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 30)
	{
		*iParam4 = MISC::GET_RANDOM_INT_IN_RANGE((1 + iParam0), (40 + iParam0));
		if (PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_WITH_HEADING(Param1, *iParam4, uParam5, fParam6, &iParam9, iParam10, fParam11, fParam12))
		{
			if (SYSTEM::VMAG(*uParam5) > 0f)
			{
				*uParam5 = { func_181(*uParam5, fParam6, iParam9, uParam7->f_9, *uParam7, bParam8, uParam7->f_11, uParam7->f_34, &bParam13, 0, 0, uParam7->f_51, uParam7->f_60) };
				if (!func_186(*uParam5))
				{
					iVar0 = 999;
					return;
				}
			}
		}
		iVar0++;
	}
}

void func_161(int iParam0, var uParam1)
{
	if (!func_176(Global_2643675[iParam0 /*3*/], uParam1))
	{
		Global_2643675.f_162 = (Global_2643675.f_162 - 1);
		func_162(iParam0);
		if (Global_2643675.f_162 > Global_2643675.f_163)
		{
			func_161(iParam0, uParam1);
		}
	}
	else if (iParam0 < 39)
	{
		func_161(iParam0 + 1, uParam1);
	}
}

void func_162(int iParam0)
{
	while (iParam0 < 39)
	{
		if (iParam0 < 39)
		{
			Global_2643675[iParam0 /*3*/] = { Global_2643675[iParam0 + 1 /*3*/] };
			Global_2643675.f_121[iParam0] = Global_2643675.f_121[iParam0 + 1];
		}
		iParam0++;
	}
}

void func_163(struct<3> Param0, float fParam3, int iParam4)
{
	struct<3> Var0;
	var uVar3;
	
	Var0 = { Global_2643675[iParam4 /*3*/] };
	uVar3 = Global_2643675.f_121[iParam4];
	Global_2643675[iParam4 /*3*/] = { Param0 };
	Global_2643675.f_121[iParam4] = fParam3;
	if (iParam4 <= Global_2643675.f_162 && iParam4 < 39)
	{
		if (SYSTEM::VMAG(Var0) > 0f)
		{
			func_163(Var0, uVar3, iParam4 + 1);
		}
	}
}

int func_164(struct<3> Param0, float fParam3, float fParam4)
{
	int iVar0;
	struct<3> Var1;
	int iVar4;
	int iVar5;
	float fVar6;
	float fVar7;
	
	fVar6 = 99999.9f;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar5 = iVar0;
		if (func_165(iVar5))
		{
			Var1 = { func_284(iVar5) };
			fVar7 = SYSTEM::VDIST(Param0, Var1);
			if (fVar7 < fParam3)
			{
				if (fVar7 < fVar6)
				{
					fVar6 = fVar7;
				}
				iVar4++;
			}
		}
		iVar0++;
	}
	*fParam4 = fVar6;
	return iVar4;
}

int func_165(int iParam0)
{
	if (func_357(iParam0, 0, 1))
	{
		if (!func_172(iParam0))
		{
			if (NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), iParam0))
			{
				if (!PLAYER::GET_PLAYER_TEAM(iParam0) == PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()))
				{
					if (func_169(PLAYER::PLAYER_ID(), 1, 0))
					{
						if (!func_166(PLAYER::GET_PLAYER_TEAM(iParam0), PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()), 0, -1))
						{
							return 1;
						}
					}
					else
					{
						return 1;
					}
				}
				else if (PLAYER::GET_PLAYER_TEAM(iParam0) == -1 && PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1)
				{
					if (!func_169(PLAYER::PLAYER_ID(), 1, 0))
					{
						if (!func_141(iParam0))
						{
							return 1;
						}
					}
					else
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_166(int iParam0, int iParam1, int iParam2, int iParam3)
{
	bool bVar0;
	bool bVar1;
	
	if (iParam2 == 1)
	{
		if (iParam0 == iParam1)
		{
			return 1;
		}
		return 0;
	}
	if ((iParam0 > -1 && iParam1 > -1) && iParam0 == iParam1)
	{
		return 1;
	}
	if (((iParam0 > -1 && iParam0 < 4) && iParam1 > -1) && iParam1 < 4)
	{
		bVar0 = Global_1058124.f_14[iParam0];
		if (iParam3 != -1)
		{
			bVar0 = iParam3;
		}
		if (bVar0 < 17 && bVar0 > -1)
		{
			if (BitTest(Global_4718592.f_3605[iParam0 /*26968*/].f_26699, bVar0))
			{
				bVar1 = Global_1058124.f_14[iParam1];
				if (bVar1 < 17 && bVar1 > -1)
				{
					switch (iParam0)
					{
						case 0:
							if (!func_167(iParam0, bVar0, iParam1, bVar1) || !func_167(iParam1, bVar1, iParam0, bVar0))
							{
								return BitTest(Global_4718592.f_3605[iParam0 /*26968*/].f_26701[bVar0], (0 + iParam1));
							}
							break;
						
						case 1:
							if (!func_167(iParam0, bVar0, iParam1, bVar1) || !func_167(iParam1, bVar1, iParam0, bVar0))
							{
								return BitTest(Global_4718592.f_3605[iParam0 /*26968*/].f_26701[bVar0], (4 + iParam1));
							}
							break;
						
						case 2:
							if (!func_167(iParam0, bVar0, iParam1, bVar1) || !func_167(iParam1, bVar1, iParam0, bVar0))
							{
								return BitTest(Global_4718592.f_3605[iParam0 /*26968*/].f_26701[bVar0], (8 + iParam1));
							}
							break;
						
						case 3:
							if (!func_167(iParam0, bVar0, iParam1, bVar1) || !func_167(iParam1, bVar1, iParam0, bVar0))
							{
								return BitTest(Global_4718592.f_3605[iParam0 /*26968*/].f_26701[bVar0], (12 + iParam1));
							}
							break;
						}
					}
				}
			}
	}
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return BitTest(Global_4718592.f_3554, 0);
				
				case 1:
					return BitTest(Global_4718592.f_3554, 1);
				
				case 2:
					return BitTest(Global_4718592.f_3554, 2);
				
				case 3:
					return BitTest(Global_4718592.f_3554, 3);
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return BitTest(Global_4718592.f_3554, 4);
				
				case 1:
					return BitTest(Global_4718592.f_3554, 5);
				
				case 2:
					return BitTest(Global_4718592.f_3554, 6);
				
				case 3:
					return BitTest(Global_4718592.f_3554, 7);
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return BitTest(Global_4718592.f_3554, 8);
				
				case 1:
					return BitTest(Global_4718592.f_3554, 9);
				
				case 2:
					return BitTest(Global_4718592.f_3554, 10);
				
				case 3:
					return BitTest(Global_4718592.f_3554, 11);
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return BitTest(Global_4718592.f_3554, 12);
				
				case 1:
					return BitTest(Global_4718592.f_3554, 13);
				
				case 2:
					return BitTest(Global_4718592.f_3554, 14);
				
				case 3:
					return BitTest(Global_4718592.f_3554, 15);
				
				default:
			}
			break;
	}
	return 0;
}

int func_167(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (iParam0 == iParam2)
	{
		return 1;
	}
	if (!BitTest(Global_4718592.f_3605[iParam0 /*26968*/].f_26700, bParam1))
	{
		return 0;
	}
	if (!BitTest(Global_4718592.f_3605[iParam2 /*26968*/].f_26700, bParam3))
	{
		return 0;
	}
	iVar0 = 1;
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		iVar4 = ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID());
	}
	iVar5 = 0;
	iVar5 = 0;
	while (iVar5 <= 31)
	{
		iVar1 = iVar5;
		if (((!func_357(iVar1, 1, 1) || func_34(iVar1, 0)) || BitTest(Global_2658291[iVar1 /*468*/].f_203, 2)) || func_168(iVar1))
		{
		}
		else if (PLAYER::GET_PLAYER_TEAM(iVar1) != iParam2)
		{
		}
		else
		{
			iVar2 = PLAYER::GET_PLAYER_PED(iVar1);
			if (PED::IS_PED_INJURED(iVar2))
			{
			}
			else
			{
				iVar3 = ENTITY::GET_ENTITY_MODEL(iVar2);
				if (iVar4 == joaat("mp_f_freemode_01") || iVar4 == joaat("mp_m_freemode_01"))
				{
					if (iVar3 == joaat("mp_f_freemode_01") || iVar3 == joaat("mp_m_freemode_01"))
					{
						return 1;
					}
					else
					{
						return 0;
					}
				}
				else if (iVar4 != iVar3)
				{
					return 0;
				}
			}
		}
		iVar5++;
	}
	return iVar0;
}

var func_168(int iParam0)
{
	return BitTest(Global_1845250[iParam0 /*880*/].f_36.f_18, 14);
}

int func_169(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (func_170(iParam0))
		{
			return 1;
		}
	}
	if (!bParam2)
	{
	}
	if (Global_1845250[iParam0 /*880*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_170(int iParam0)
{
	return func_171(iParam0);
}

var func_171(int iParam0)
{
	return BitTest(Global_1845250[iParam0 /*880*/].f_11.f_1, 0);
}

int func_172(int iParam0)
{
	if (func_34(iParam0, 0))
	{
		return 1;
	}
	if (func_173())
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

bool func_173()
{
	return BitTest(Global_2621446, 3);
}

int func_174(struct<3> Param0, float fParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var3;
	float fVar6;
	
	iVar0 = 1;
	iVar0 += 2;
	iVar0 += 4;
	iVar0 += 8;
	iVar0 += 16;
	iVar0 += 32;
	iVar0 += 64;
	iVar0 = (iVar0 + 131076);
	iVar1 = VEHICLE::GET_CLOSEST_VEHICLE(Param0, 30f, 0, iVar0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar1) && !ENTITY::IS_ENTITY_DEAD(iVar1, false))
	{
		iVar2 = ENTITY::GET_ENTITY_MODEL(iVar1);
		Var3 = { ENTITY::GET_ENTITY_COORDS(iVar1, false) };
		fVar6 = ENTITY::GET_ENTITY_HEADING(iVar1);
		if (func_140(Param0, fParam3, iParam4, Var3, fVar6, iVar2, 0))
		{
			return 1;
		}
	}
	iVar0 += 4096;
	iVar0 += 8192;
	iVar0 += 16384;
	iVar1 = VEHICLE::GET_CLOSEST_VEHICLE(Param0, 30f, 0, iVar0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar1) && !ENTITY::IS_ENTITY_DEAD(iVar1, false))
	{
		iVar2 = ENTITY::GET_ENTITY_MODEL(iVar1);
		Var3 = { ENTITY::GET_ENTITY_COORDS(iVar1, false) };
		fVar6 = ENTITY::GET_ENTITY_HEADING(iVar1);
		if (func_140(Param0, fParam3, iParam4, Var3, fVar6, iVar2, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_175(struct<3> Param0, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	if (func_147(Param0, fParam3, iParam4, iParam5, iParam6) || func_211(Param0, fParam3, iParam4, iParam5, iParam7))
	{
		return 1;
	}
	return 0;
}

int func_176(struct<3> Param0, var uParam3)
{
	if (uParam3->f_18)
	{
		switch (uParam3->f_26)
		{
			case 0:
				if (func_179(Param0, uParam3->f_19, uParam3->f_25, 0, 0))
				{
					return 1;
				}
				break;
			
			case 1:
				if (func_177(Param0, uParam3->f_19, uParam3->f_22, 0, 0))
				{
					return 1;
				}
				break;
			
			case 2:
				if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, uParam3->f_19, uParam3->f_22, uParam3->f_25, false, true))
				{
					return 1;
				}
				break;
		}
		return 0;
	}
	return 1;
}

int func_177(struct<3> Param0, struct<3> Param3, struct<3> Param6, bool bParam9, bool bParam10)
{
	func_178(&Param3, &Param6);
	if (((!Param0.f_0 >= Param3.f_0 || !Param0.f_1 >= Param3.f_1) || !Param0.f_0 <= Param6.f_0) || !Param0.f_1 <= Param6.f_1)
	{
		return 0;
	}
	if (bParam9 && bParam10)
	{
		return 1;
	}
	else if (bParam9)
	{
		if (Param0.f_2 >= Param3.f_2)
		{
			return 1;
		}
	}
	else if (bParam10)
	{
		if (Param0.f_2 <= Param6.f_2)
		{
			return 1;
		}
	}
	else if (Param0.f_2 >= Param3.f_2 && Param0.f_2 <= Param6.f_2)
	{
		return 1;
	}
	return 0;
}

void func_178(var uParam0, var uParam1)
{
	var uVar0;
	
	if (*uParam0 > *uParam1)
	{
		uVar0 = *uParam1;
		*uParam1 = *uParam0;
		*uParam0 = uVar0;
	}
	if (uParam0->f_1 > uParam1->f_1)
	{
		uVar0 = uParam1->f_1;
		uParam1->f_1 = uParam0->f_1;
		uParam0->f_1 = uVar0;
	}
	if (uParam0->f_2 > uParam1->f_2)
	{
		uVar0 = uParam1->f_2;
		uParam1->f_2 = uParam0->f_2;
		uParam0->f_2 = uVar0;
	}
}

bool func_179(struct<3> Param0, struct<3> Param3, float fParam6, bool bParam7, bool bParam8)
{
	if (bParam7 && bParam8)
	{
		Param0.f_2 = 0f;
		Param3.f_2 = 0f;
		return SYSTEM::VDIST(Param0, Param3) < (fParam6 + 0.01f);
	}
	else if (bParam7)
	{
		if (Param0.f_2 > Param3.f_2)
		{
			Param0.f_2 = Param3.f_2;
		}
		return SYSTEM::VDIST(Param0, Param3) < (fParam6 + 0.01f);
	}
	else if (bParam8)
	{
		if (Param0.f_2 < Param3.f_2)
		{
			Param0.f_2 = Param3.f_2;
		}
		return SYSTEM::VDIST(Param0, Param3) < (fParam6 + 0.01f);
	}
	return SYSTEM::VDIST(Param0, Param3) < (fParam6 + 0.01f);
}

int func_180(struct<3> Param0, float fParam3)
{
	int iVar0;
	
	if (func_169(PLAYER::PLAYER_ID(), 1, 0))
	{
		if (Global_5242880 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_5242880)
			{
				if (Global_5242880.f_1[iVar0 /*165*/].f_7 != 0)
				{
					if (func_131(Param0, Global_5242880.f_1[iVar0 /*165*/], Global_5242880.f_1[iVar0 /*165*/].f_6, Global_5242880.f_1[iVar0 /*165*/].f_7, fParam3))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
		if (Global_4980736.f_7062 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_4980736.f_7062)
			{
				if (Global_4980736.f_7065[iVar0 /*648*/].f_16 != 0)
				{
					if (func_131(Param0, Global_4980736.f_7065[iVar0 /*648*/], Global_4980736.f_7065[iVar0 /*648*/].f_3, Global_4980736.f_7065[iVar0 /*648*/].f_16, 0.5f))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
		if (Global_4980736.f_68411 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_4980736.f_68411)
			{
				if (Global_4980736.f_68415[iVar0 /*626*/].f_13 != 0)
				{
					if (func_131(Param0, Global_4980736.f_68415[iVar0 /*626*/], Global_4980736.f_68415[iVar0 /*626*/].f_3, Global_4980736.f_68415[iVar0 /*626*/].f_13, 0.5f))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
		if (Global_1058124.f_273 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_1058124.f_273)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Global_1058124.f_238[iVar0]) && !ENTITY::IS_ENTITY_DEAD(Global_1058124.f_238[iVar0], false))
				{
					if (func_131(Param0, ENTITY::GET_ENTITY_COORDS(Global_1058124.f_238[iVar0], true), ENTITY::GET_ENTITY_HEADING(Global_1058124.f_238[iVar0]), ENTITY::GET_ENTITY_MODEL(Global_1058124.f_238[iVar0]), 0.5f))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
		if (Global_1058124.f_271 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_1058124.f_271)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Global_1058124.f_124[iVar0]) && !ENTITY::IS_ENTITY_DEAD(Global_1058124.f_124[iVar0], false))
				{
					if (func_131(Param0, ENTITY::GET_ENTITY_COORDS(Global_1058124.f_124[iVar0], true), ENTITY::GET_ENTITY_HEADING(Global_1058124.f_124[iVar0]), ENTITY::GET_ENTITY_MODEL(Global_1058124.f_124[iVar0]), 0.5f))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
	}
	return 0;
}

Vector3 func_181(struct<3> Param0, float* fParam3, int iParam4, bool bParam5, struct<3> Param6, bool bParam9, bool bParam10, int iParam11, var uParam12, int iParam13, bool bParam14, bool bParam15, var uParam16)
{
	struct<3> Var0;
	var uVar3;
	var uVar4;
	var uVar5;
	int iVar8;
	int iVar9;
	float fVar10;
	float fVar11;
	bool bVar12;
	bool bVar13;
	float fVar14;
	struct<3> Var15;
	struct<3> Var18;
	struct<3> Var21;
	
	if (bParam15)
	{
		if (SYSTEM::VMAG(Param6) > 0f)
		{
			if (!func_184(Param0, *fParam3, Param6))
			{
				*fParam3 = (*fParam3 + 180f);
			}
		}
		return Param0;
	}
	PATHFIND::GET_VEHICLE_NODE_PROPERTIES(Param0, &uVar3, &uVar4);
	if (uVar4 & 1024 == 0 && !bParam10)
	{
		PATHFIND::GET_CLOSEST_ROAD(Param0, 1f, 1, &uVar5, &uVar5, &iVar8, &iVar9, &fVar10, bParam9);
		if (iVar8 == iVar9)
		{
			*uParam12 = 1;
		}
		if (bParam14)
		{
			if (!uVar4 & 128 == 0)
			{
				return 0f, 0f, 0f;
			}
			if (!uVar4 & 256 == 0)
			{
				return 0f, 0f, 0f;
			}
			if (!uVar4 & 512 == 0)
			{
				return 0f, 0f, 0f;
			}
			if ((iVar8 + iVar9) != iParam4)
			{
				return 0f, 0f, 0f;
			}
			if (VEHICLE::IS_THIS_MODEL_A_HELI(iParam11) && func_183(Param0))
			{
				return 0f, 0f, 0f;
			}
		}
		if (iParam13 && *uParam12)
		{
			*fParam3 = (*fParam3 + 180f);
			if (*fParam3 > 360f)
			{
				*fParam3 = (*fParam3 + -360f);
			}
		}
		if (*fParam3 <= 90f || *fParam3 > 270f)
		{
			bVar12 = true;
		}
		else
		{
			bVar12 = false;
		}
		bVar13 = false;
		if (bVar12)
		{
			if (iVar8 == 0)
			{
				if (bParam14)
				{
					return 0f, 0f, 0f;
				}
			}
			else if (iParam4 == iVar8)
			{
				bVar13 = true;
			}
		}
		else if (iVar9 == 0)
		{
			if (bParam14)
			{
				return 0f, 0f, 0f;
			}
		}
		else if (iParam4 == iVar9)
		{
			bVar13 = true;
		}
		if (fVar10 < 0f)
		{
			fVar11 = 0f;
		}
		else
		{
			if (bVar12)
			{
				if (bVar13)
				{
					fVar11 = (4.2f * (SYSTEM::TO_FLOAT(iVar8) * 0.5f));
				}
				else
				{
					fVar11 = (4.2f * SYSTEM::TO_FLOAT(iVar8));
				}
				if (bVar13)
				{
					if (iVar8 > 2)
					{
						fVar11 = (fVar11 + (IntToFloat((iVar8 - 2)) * 1f));
					}
				}
				else if (iVar8 > 1)
				{
					fVar11 = (fVar11 + (IntToFloat((iVar8 - 1)) * 1f));
				}
			}
			else
			{
				if (bVar13)
				{
					fVar11 = (4.2f * (SYSTEM::TO_FLOAT(iVar9) * 0.5f));
				}
				else
				{
					fVar11 = (4.2f * SYSTEM::TO_FLOAT(iVar9));
				}
				if (bVar13)
				{
					if (iVar9 > 2)
					{
						fVar11 = (fVar11 + (IntToFloat((iVar9 - 2)) * 1f));
					}
				}
				else if (iVar9 > 1)
				{
					fVar11 = (fVar11 + (IntToFloat((iVar9 - 1)) * 1f));
				}
			}
			if (!uVar4 & 64 == 0)
			{
				fVar11 = (fVar11 + (0.95f * fVar10));
			}
			if (!uVar4 & 4 == 0 || !uVar4 & 8 == 0)
			{
				fVar11 = (fVar11 + -0.5f);
			}
			if ((!uVar4 & 32 == 0 && uVar4 & 4 == 0) && uVar4 & 8 == 0)
			{
				fVar11 = (fVar11 + -1f);
			}
			if (!bParam5 || !uVar4 & 8 == 0)
			{
				fVar11 = (fVar11 + (4.2f * -0.5f));
			}
			if (!iParam11 == 0)
			{
				if (uVar4 & 8 != 0)
				{
					fVar14 = func_182(iParam11, 3.5f);
				}
				else
				{
					fVar14 = func_182(iParam11, 1.5f);
				}
				if (fVar14 > 1.8f)
				{
					fVar11 = (fVar11 + ((fVar14 - 1.8f) * -0.5f));
				}
			}
		}
	}
	if (SYSTEM::VMAG(Param6) > 0f)
	{
		if (!func_184(Param0, *fParam3, Param6))
		{
			if ((bParam5 || uParam16) || ((uVar4 & 1024 != 0 || Param0.f_2 == 0f) && bParam10))
			{
				*fParam3 = (*fParam3 + 180f);
			}
			else if (bParam14)
			{
				return 0f, 0f, 0f;
			}
		}
	}
	if (fVar11 < 0f)
	{
		fVar11 = 0f;
	}
	Var0 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Param0, *fParam3, fVar11, 0f, 0f) };
	if (bParam5)
	{
		if (PATHFIND::GET_ROAD_BOUNDARY_USING_HEADING(Param0, *fParam3, &Var15))
		{
			Var18 = { Var15 - Param0 };
			if (!iParam11 == 0)
			{
				Var21 = { Var18 / FtoV(SYSTEM::VMAG(Var18)) };
				if (uVar4 & 8 != 0)
				{
					fVar14 = func_182(iParam11, 3.5f);
				}
				else
				{
					fVar14 = func_182(iParam11, 1.5f);
				}
				Var21 = { Var21 * FtoV((fVar14 * 0.5f)) };
				Var18 = { Var18 - Var21 };
				Var15 = { Param0 + Var18 };
			}
			Var21 = { Var0 - Var15 };
			Var0 = { Var15 };
		}
	}
	return Var0;
}

float func_182(int iParam0, float fParam1)
{
	float fVar0;
	float fVar3;
	float fVar6;
	
	func_133(iParam0, &fVar0, &fVar3, 1086324736, 1080033280, 1077936128);
	fVar6 = (fVar3 - fVar0);
	if (fVar6 < fParam1)
	{
		return fParam1;
	}
	return fVar6;
}

int func_183(struct<3> Param0)
{
	float fVar0;
	
	if (MISC::GET_GROUND_Z_FOR_3D_COORD(Param0.f_0, Param0.f_1, (Param0.f_2 + 500f), &fVar0, false, false))
	{
		fVar0 = (fVar0 - Param0.f_2);
		if (fVar0 > 6f)
		{
			return 1;
		}
	}
	return 0;
}

int func_184(struct<3> Param0, float fParam3, struct<3> Param4)
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0 = { 0f, 1f, 0f };
	func_138(&Var0, 0f, 0f, fParam3);
	Var3 = { Param4 - Param0 };
	if (func_185(Var3, Var0) >= 0f)
	{
		return 1;
	}
	return 0;
}

float func_185(struct<3> Param0, struct<3> Param3)
{
	return (((Param0.f_0 * Param3.f_0) + (Param0.f_1 * Param3.f_1)) + (Param0.f_2 * Param3.f_2));
}

int func_186(struct<3> Param0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_188(Param0);
	iVar0 = 0;
	while (iVar0 < Global_2643375[iVar1])
	{
		if (func_187(Param0, &(Global_2642672[iVar1 /*78*/][iVar0 /*7*/])))
		{
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_2643375[8])
	{
		if (func_187(Param0, &(Global_2642672[8 /*78*/][iVar0 /*7*/])))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_187(struct<3> Param0, var uParam3)
{
	return OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, *uParam3, uParam3->f_3, uParam3->f_6, false, true);
}

int func_188(struct<2> Param0, var uParam2)
{
	if (Param0.f_1 > Global_2642663[0])
	{
		return 0;
	}
	if (Param0.f_1 > Global_2642663[1])
	{
		if (Param0.f_0 < Global_2642667[0])
		{
			return 1;
		}
		else
		{
			return 2;
		}
	}
	if (Param0.f_1 > Global_2642663[2])
	{
		if (Param0.f_0 < Global_2642667[1])
		{
			return 3;
		}
		else if (Param0.f_0 < Global_2642667[2])
		{
			return 4;
		}
		else if (Param0.f_0 < Global_2642667[3])
		{
			return 5;
		}
		else
		{
			return 6;
		}
	}
	return 7;
}

int func_189(var uParam0, bool bParam1)
{
	var uVar0;
	struct<3> Var1;
	float fVar4;
	
	if (func_195(*uParam0))
	{
		if (bParam1)
		{
			Var1 = { *uParam0 };
			fVar4 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.01f, 360f);
			func_194(&Var1, Global_2635562.f_594, Global_2635562.f_597, 1036831949, 0, fVar4);
			if (func_190(Var1, &uVar0) || func_195(Var1))
			{
				Var1 = { *uParam0 };
				func_194(&Var1, Global_2635562.f_594, Global_2635562.f_597, 1036831949, 1, fVar4);
			}
			*uParam0 = { Var1 };
		}
	}
	return 0;
}

int func_190(struct<3> Param0, var uParam3)
{
	int iVar0;
	int iVar1;
	
	if (func_193())
	{
		return 0;
	}
	iVar1 = func_192();
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (Global_2635562.f_369[iVar0 /*12*/].f_9 == 1)
		{
			if (func_191(Param0, &(Global_2635562.f_369[iVar0 /*12*/]), 1008981770, 0, 0))
			{
				*uParam3 = iVar0;
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_191(struct<3> Param0, var uParam3, float fParam4, bool bParam5, bool bParam6)
{
	switch (uParam3->f_10)
	{
		case 0:
			return func_179(Param0, *uParam3, ((uParam3->f_6 + fParam4) + (IntToFloat(Global_2635562.f_3036) * uParam3->f_8)), bParam5, bParam6);
			break;
		
		case 1:
			return func_177(Param0, *uParam3 + Vector((fParam4 * -1f), (fParam4 * -1f), (fParam4 * -1f)), uParam3->f_3 + Vector(fParam4, fParam4, fParam4), bParam5, bParam6);
			break;
		
		case 2:
			if (bParam5 && bParam6)
			{
				return OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, *uParam3, uParam3->f_3, uParam3->f_6, false, false);
			}
			else if (bParam5)
			{
				if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, *uParam3, uParam3->f_3, uParam3->f_6, false, false) && !(Param0.f_2 < uParam3->f_2 && Param0.f_2 < uParam3->f_3.f_2))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			else if (bParam6)
			{
				if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, *uParam3, uParam3->f_3, uParam3->f_6, false, false) && !(Param0.f_2 > uParam3->f_2 && Param0.f_2 > uParam3->f_3.f_2))
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
				return OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, *uParam3, uParam3->f_3, uParam3->f_6, false, true);
			}
			break;
	}
	return 0;
}

int func_192()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (Global_2635562.f_369[iVar0 /*12*/].f_9)
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

bool func_193()
{
	return Global_1950198.f_764;
}

void func_194(var uParam0, struct<3> Param1, float fParam4, float fParam5, bool bParam6, float fParam7)
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0 = { *uParam0 - Param1 };
	Var0.f_2 = 0f;
	if (SYSTEM::VMAG(Var0) > 0f)
	{
		Var0 = { Var0 / FtoV(SYSTEM::VMAG(Var0)) };
	}
	else
	{
		Var0 = { 0f, 1f, 0f };
		if (fParam7 == 0f)
		{
			func_138(&Var0, 0f, 0f, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f));
		}
		else
		{
			func_138(&Var0, 0f, 0f, fParam7);
		}
	}
	Var0 = { Var0 * FtoV((fParam4 + fParam5)) };
	if (!bParam6)
	{
		Var3 = { Param1 + Var0 };
	}
	else
	{
		Var3 = { Param1 - Var0 };
	}
	*uParam0 = Var3.f_0;
	uParam0->f_1 = Var3.f_1;
}

int func_195(struct<3> Param0)
{
	float fVar0;
	
	if (Global_2635562.f_597 > 0f)
	{
		fVar0 = SYSTEM::VDIST(Param0, Global_2635562.f_594);
		if (fVar0 < Global_2635562.f_597)
		{
			return 1;
		}
	}
	return 0;
}

bool func_196(var uParam0, bool bParam1)
{
	bool bVar0;
	
	bVar0 = false;
	if (Global_2635562.f_26.f_18)
	{
		switch (Global_2635562.f_26.f_17)
		{
			case 0:
				if (func_179(*uParam0, Global_2635562.f_26.f_10, Global_2635562.f_26.f_16, 0, 0))
				{
					bVar0 = true;
				}
				break;
			
			case 1:
				if (func_177(*uParam0, Global_2635562.f_26.f_10, Global_2635562.f_26.f_13, 0, 0))
				{
					bVar0 = true;
				}
				break;
			
			case 2:
				if (OBJECT::IS_POINT_IN_ANGLED_AREA(*uParam0, Global_2635562.f_26.f_10, Global_2635562.f_26.f_13, Global_2635562.f_26.f_16, false, true))
				{
					bVar0 = true;
				}
				break;
		}
		if (bVar0)
		{
			if (bParam1)
			{
				*uParam0 = { func_197(*uParam0, Global_2635562.f_26.f_10, Global_2635562.f_26.f_13, Global_2635562.f_26.f_16, Global_2635562.f_26.f_17, 1036831949, 0) };
			}
		}
	}
	return bVar0;
}

Vector3 func_197(struct<3> Param0, struct<3> Param3, struct<3> Param6, float fParam9, int iParam10, float fParam11, bool bParam12)
{
	int iVar0;
	struct<3> Var1;
	
	switch (iParam10)
	{
		case 0:
			func_194(&Param0, Param3, fParam9, fParam11, bParam12, 0);
			break;
		
		case 1:
			func_200(&Param0, Param3, Param6, fParam11, bParam12);
			break;
		
		case 2:
			func_198(&Param0, Param3, Param6, fParam9, fParam11, bParam12);
			break;
	}
	iVar0 = 0;
	while (iVar0 < 40)
	{
		PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE(Param0, iVar0 * 5, &Var1, 1, 0f, 0f);
		switch (iParam10)
		{
			case 0:
				if (!func_179(Var1, Param3, fParam9, 0, 0))
				{
					return Var1;
				}
				break;
			
			case 1:
				if (!func_177(Var1, Param3, Param6, 0, 0))
				{
					return Var1;
				}
				break;
			
			case 2:
				if (!OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, Param3, Param6, fParam9, false, true))
				{
					return Var1;
				}
				break;
		}
		iVar0++;
	}
	return Param0;
}

void func_198(var uParam0, struct<3> Param1, struct<3> Param4, float fParam7, float fParam8, bool bParam9)
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	float fVar9;
	struct<3> Var10;
	struct<3> Var13;
	float fVar16;
	struct<3> Var17;
	struct<3> Var20;
	struct<3> Var23;
	struct<3> Var26;
	struct<3> Var29;
	
	Var0 = { Param4 - Param1 };
	Var0.f_2 = 0f;
	Var3 = { *uParam0 - Param1 };
	Var3.f_2 = 0f;
	Var6 = { func_199(0f, 0f, 1f, Var0) };
	Var6 = { Var6 / FtoV(SYSTEM::VMAG(Var6)) };
	fVar9 = (SYSTEM::VMAG(Var3) * SYSTEM::SIN(MISC::GET_ANGLE_BETWEEN_2D_VECTORS(Var0.f_0, Var0.f_1, Var3.f_0, Var3.f_1)));
	if (fVar9 < (fParam7 * 0.5f))
	{
		if (!bParam9)
		{
			if (func_185(Var6, Var3) >= 0f)
			{
				Var6 = { Var6 * FtoV((((fParam7 * 0.5f) - fVar9) + fParam8)) };
			}
			else
			{
				Var6 = { Var6 * FtoV(((((fParam7 * 0.5f) - fVar9) + fParam8) * -1f)) };
			}
		}
		else if (func_185(Var6, Var3) >= 0f)
		{
			Var6 = { Var6 * FtoV(((((fParam7 * 0.5f) + fVar9) + fParam8) * -1f)) };
		}
		else
		{
			Var6 = { Var6 * FtoV((((fParam7 * 0.5f) + fVar9) + fParam8)) };
		}
		Var10 = { *uParam0 + Var6 };
		fVar16 = SYSTEM::VDIST(Param1.f_0, Param1.f_1, 0f, Param4.f_0, Param4.f_1, 0f);
		Var17 = { Param1 + Param4 / Vector(2f, 2f, 2f) };
		Var17.f_2 = 0f;
		Var6 = { func_199(0f, 0f, 1f, Var0) };
		Var6 = { Var6 / FtoV(SYSTEM::VMAG(Var6)) };
		Var6 = { Var6 * FtoV((fParam7 * 0.5f)) };
		Var20 = { Var17 - Var6 };
		Var23 = { Var17 + Var6 };
		Var26 = { Var23 - Var20 };
		Var26.f_2 = 0f;
		Var29 = { *uParam0 - Var20 };
		Var29.f_2 = 0f;
		Var6 = { func_199(0f, 0f, 1f, Var26) };
		Var6 = { Var6 / FtoV(SYSTEM::VMAG(Var6)) };
		fVar9 = (SYSTEM::VMAG(Var29) * SYSTEM::SIN(MISC::GET_ANGLE_BETWEEN_2D_VECTORS(Var26.f_0, Var26.f_1, Var29.f_0, Var29.f_1)));
		if (!bParam9)
		{
			if (func_185(Var6, Var29) >= 0f)
			{
				Var6 = { Var6 * FtoV((((fVar16 * 0.5f) - fVar9) + fParam8)) };
			}
			else
			{
				Var6 = { Var6 * FtoV(((((fVar16 * 0.5f) - fVar9) + fParam8) * -1f)) };
			}
		}
		else if (func_185(Var6, Var29) >= 0f)
		{
			Var6 = { Var6 * FtoV(((((fVar16 * 0.5f) + fVar9) + fParam8) * -1f)) };
		}
		else
		{
			Var6 = { Var6 * FtoV((((fVar16 * 0.5f) + fVar9) + fParam8)) };
		}
		Var13 = { *uParam0 + Var6 };
		if (SYSTEM::VDIST(Var10, *uParam0, uParam0->f_1, 0f) < SYSTEM::VDIST(Var13, *uParam0, uParam0->f_1, 0f))
		{
			*uParam0 = { Var10 };
		}
		else
		{
			*uParam0 = { Var13 };
		}
	}
}

Vector3 func_199(struct<3> Param0, struct<3> Param3)
{
	return ((Param0.f_1 * Param3.f_2) - (Param0.f_2 * Param3.f_1)), ((Param0.f_2 * Param3.f_0) - (Param0.f_0 * Param3.f_2)), ((Param0.f_0 * Param3.f_1) - (Param0.f_1 * Param3.f_0));
}

void func_200(var uParam0, struct<2> Param1, var uParam3, struct<2> Param4, var uParam6, float fParam7, bool bParam8)
{
	struct<3> Var0;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	
	Var0 = { *uParam0 };
	fVar3 = (*uParam0 - Param1.f_0);
	fVar4 = (*uParam0 - Param4.f_0);
	if (fVar3 < fVar4)
	{
		fVar5 = fVar3;
	}
	else
	{
		fVar5 = fVar4;
	}
	fVar6 = (uParam0->f_1 - Param1.f_1);
	fVar7 = (uParam0->f_1 - Param4.f_1);
	if (fVar6 < fVar7)
	{
		fVar8 = fVar6;
	}
	else
	{
		fVar8 = fVar7;
	}
	Var0 = { *uParam0 };
	if (!bParam8)
	{
		if (fVar5 < fVar8)
		{
			if (fVar3 < fVar4)
			{
				Var0.f_0 = (Param1.f_0 - fParam7);
			}
			else
			{
				Var0.f_0 = (Param4.f_0 + fParam7);
			}
		}
		else if (fVar6 < fVar7)
		{
			Var0.f_1 = (Param1.f_1 - fParam7);
		}
		else
		{
			Var0.f_1 = (Param4.f_1 + fParam7);
		}
	}
	else if (fVar5 < fVar8)
	{
		if (fVar3 < fVar4)
		{
			Var0.f_0 = (Param4.f_0 + fParam7);
		}
		else
		{
			Var0.f_0 = (Param1.f_0 - fParam7);
		}
	}
	else if (fVar6 < fVar7)
	{
		Var0.f_1 = (Param4.f_1 + fParam7);
	}
	else
	{
		Var0.f_1 = (Param1.f_1 - fParam7);
	}
	*uParam0 = { Var0 };
}

int func_201(struct<3> Param0, var uParam3, var uParam4, var uParam5, bool bParam6, bool bParam7)
{
	int iVar0;
	bool bVar1;
	
	if (func_270(Param0))
	{
		if (func_204(uParam3, bParam6, 0, 1, 1))
		{
			if (bParam6)
			{
			}
			return 1;
		}
	}
	if (func_202(uParam3, bParam6, 1))
	{
		if (bParam6)
		{
		}
		return 1;
	}
	if (bParam7)
	{
		if (func_150(*uParam3, 1056964608))
		{
			return 1;
		}
	}
	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < *uParam4)
	{
		if (SYSTEM::VDIST(*uParam3, *(uParam4[iVar0 /*3*/])) < (*uParam5)[iVar0])
		{
			if (bParam6)
			{
				func_194(uParam3, *(uParam4[iVar0 /*3*/]), (*uParam5)[iVar0], 1036831949, 0, 0);
			}
			bVar1 = true;
		}
		iVar0++;
	}
	if (bVar1)
	{
		return 1;
	}
	return 0;
}

int func_202(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	var uVar1;
	struct<3> Var2;
	
	if (func_190(*uParam0, &iVar0))
	{
		if (bParam1)
		{
			Var2 = { *uParam0 };
			func_203(&Var2, &(Global_2635562.f_369[iVar0 /*12*/]), 1036831949, 0, bParam2);
			if (func_190(Var2, &uVar1) || func_195(Var2))
			{
				Var2 = { *uParam0 };
				func_203(&Var2, &(Global_2635562.f_369[iVar0 /*12*/]), 1036831949, 1, bParam2);
			}
			*uParam0 = { Var2 };
		}
		return 1;
	}
	return 0;
}

void func_203(var uParam0, var uParam1, float fParam2, bool bParam3, bool bParam4)
{
	if (bParam4)
	{
		switch (uParam1->f_10)
		{
			case 0:
				*uParam0 = { func_197(*uParam0, *uParam1, 0f, 0f, 0f, (uParam1->f_6 + (IntToFloat(Global_2635562.f_3036) * uParam1->f_8)), 0, fParam2, bParam3) };
				break;
			
			case 1:
				*uParam0 = { func_197(*uParam0, *uParam1, uParam1->f_3, 0f, 1, fParam2, bParam3) };
				break;
			
			case 2:
				*uParam0 = { func_197(*uParam0, *uParam1, uParam1->f_3, uParam1->f_6, 2, fParam2, bParam3) };
				break;
		}
	}
	else
	{
		switch (uParam1->f_10)
		{
			case 0:
				func_194(uParam0, *uParam1, (uParam1->f_6 + (IntToFloat(Global_2635562.f_3036) * uParam1->f_8)), fParam2, bParam3, 0);
				break;
			
			case 1:
				func_200(uParam0, *uParam1, uParam1->f_3, fParam2, bParam3);
				break;
			
			case 2:
				func_198(uParam0, *uParam1, uParam1->f_3, uParam1->f_6, fParam2, bParam3);
				break;
			}
	}
}

int func_204(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	struct<3> Var1;
	
	iVar0 = 0;
	while (iVar0 < 14)
	{
		if (Global_2640828[iVar0 /*17*/].f_9 == 1)
		{
			if (!bParam2 || (bParam2 && Global_2640828[iVar0 /*17*/].f_16))
			{
				if (func_191(*uParam0, &(Global_2640828[iVar0 /*17*/]), 1008981770, bParam4, 0))
				{
					if (bParam1)
					{
						if (Global_2640828[iVar0 /*17*/].f_12)
						{
							*uParam0 = { Global_2640828[iVar0 /*17*/].f_13 };
						}
						else
						{
							Var1 = { *uParam0 };
							func_203(&Var1, &(Global_2640828[iVar0 /*17*/]), 1036831949, 0, bParam3);
							if (func_204(&Var1, 0, 0, 0, 1))
							{
								Var1 = { *uParam0 };
								func_203(&Var1, &(Global_2640828[iVar0 /*17*/]), 1036831949, 1, 0);
							}
							*uParam0 = { Var1 };
						}
					}
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_205(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var3;
	float fVar6;
	int iVar7;
	int iVar8;
	bool bVar9;
	int iVar10;
	float fVar11;
	bool bVar12;
	int iVar13;
	float fVar14;
	struct<3> Var15;
	var uVar18;
	
	if (Global_2635562.f_2055 > 0)
	{
		iVar1 = 0;
		iVar2 = 0;
		if (!SYSTEM::VMAG(uParam2->f_35) > 0f)
		{
			uParam2->f_35 = { *uParam0 };
		}
		if (uParam2->f_15)
		{
			if (func_201(uParam2->f_35, uParam0, &(uParam2->f_38), &(uParam2->f_45), 1, 1))
			{
				uParam2->f_6 = 9999.9f;
				uParam2->f_7 = 9999.9f;
			}
		}
		if (uParam2->f_48)
		{
			if (func_196(uParam0, 1))
			{
				uParam2->f_6 = 9999.9f;
				uParam2->f_7 = 9999.9f;
			}
		}
		if (uParam0->f_2 < -80f)
		{
			uParam2->f_6 = 9999.9f;
			uParam2->f_7 = 9999.9f;
		}
		Global_2643675.f_162 = 0;
		Global_2643675.f_163 = 0;
		iVar7 = 0;
		while (iVar7 < 40)
		{
			Global_2643675[iVar7 /*3*/] = { 0f, 0f, 0f };
			Global_2643675.f_121[iVar7] = 0f;
			iVar7++;
		}
		if (uParam2->f_30)
		{
			func_208(*uParam0);
		}
		else if (uParam2->f_29)
		{
			func_207();
		}
		else
		{
			func_206();
		}
		iVar1 = 0;
		while (iVar1 < Global_2635562.f_2055)
		{
			iVar2 = Global_2635562.f_2461[iVar1];
			if (iVar2 > -1 && iVar2 < 101)
			{
				Var3 = { Global_2635562.f_2056[iVar2 /*4*/] };
				fVar6 = Global_2635562.f_2056[iVar2 /*4*/].f_3;
				if (SYSTEM::VMAG(Var3) > 0f)
				{
					if ((uParam2->f_57 && SYSTEM::VDIST(Var3, uParam2->f_35) > uParam2->f_4) || uParam2->f_57 == 0)
					{
						if ((uParam2->f_5 > 0f && SYSTEM::VDIST(Var3.f_0, Var3.f_1, 0f, uParam2->f_35, uParam2->f_35.f_1, 0f) < uParam2->f_5) || uParam2->f_5 <= 0f)
						{
							if ((uParam2->f_12 && !func_175(Var3, fVar6, uParam2->f_34, PLAYER::PLAYER_ID(), 0, uParam2->f_56)) || !uParam2->f_12)
							{
								if (!uParam2->f_15 || !func_201(uParam2->f_35, &Var3, &(uParam2->f_38), &(uParam2->f_45), 0, 1))
								{
									if (uParam2->f_8)
									{
										iVar8 = uParam2->f_31;
										bVar9 = true;
										iVar10 = 1;
										fVar11 = uParam2->f_49;
										if (!uParam2->f_55)
										{
											iVar8 = 0;
											bVar9 = false;
											iVar10 = 0;
											fVar11 = 1f;
										}
										else if (uParam2->f_17)
										{
											iVar8 = 0;
											bVar9 = false;
											iVar10 = 0;
											if (uParam2->f_33 == 1)
											{
												fVar11 = (fVar11 * 0.375f);
											}
										}
										else
										{
											bVar9 = true;
											iVar10 = 1;
											if (uParam2->f_28)
											{
												if (uParam2->f_33 == 1)
												{
													fVar11 = (fVar11 * 0.375f);
												}
											}
										}
										bVar12 = false;
										if (!func_174(Var3, fVar6, uParam2->f_34))
										{
											if (uParam2->f_3 > 7f)
											{
												if (func_213(Var3, 6f, 1f, 1f, 5f, iVar8, bVar9, iVar10, fVar11, uParam2->f_58, -1, 1, uParam2->f_3, 0, 0, 0, 0))
												{
													bVar12 = true;
												}
											}
											else if (func_213(Var3, 6f, 1f, 1f, 5f, iVar8, bVar9, iVar10, fVar11, uParam2->f_58, -1, 1, 0f, 0, 0, 0, 0) && !func_130(Var3, fVar6, uParam2->f_34, 1, 1, 0, 0, uParam2->f_58, 0))
											{
												bVar12 = true;
											}
										}
										if (bVar12)
										{
											if ((uParam2->f_29 || uParam2->f_30) || uParam2->f_52)
											{
												fVar14 = 0f;
												if (uParam2->f_52)
												{
													iVar13 = func_164(Var3, uParam2->f_54, &fVar14);
												}
												if (!uParam2->f_52 || (uParam2->f_52 && iVar13 <= uParam2->f_53))
												{
													if (uParam2->f_52)
													{
														if (iVar13 < uParam2->f_53)
														{
															iVar7 = 0;
															while (iVar7 < Global_2643675.f_162)
															{
																Global_2643675[iVar7 /*3*/] = { 0f, 0f, 0f };
																Global_2643675.f_121[iVar7] = 0f;
																iVar7++;
															}
															Global_2643675.f_162 = 0;
															uParam2->f_53 = iVar13;
														}
													}
													if (uParam2->f_30)
													{
														if (Global_2643675.f_162 == 0)
														{
															Global_2643675[0 /*3*/] = { Var3 };
															Global_2643675.f_121[0] = fVar6;
														}
														else
														{
															iVar7 = 0;
															while (iVar7 < Global_2643675.f_162 + 1)
															{
																if (iVar7 < 40)
																{
																	if (SYSTEM::VDIST2(Var3, uParam2->f_35) < SYSTEM::VDIST2(Global_2643675[iVar7 /*3*/], uParam2->f_35))
																	{
																		func_163(Var3, fVar6, iVar7);
																		iVar7 = Global_2643675.f_162 + 1;
																	}
																}
																iVar7++;
															}
														}
														Global_2643675.f_162++;
														if (Global_2643675.f_162 >= 5)
														{
															if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
															{
																iVar1 = Global_2635562.f_2055;
															}
															else if (Global_2643675.f_162 == 40)
															{
																iVar1 = Global_2635562.f_2055;
															}
														}
													}
													else
													{
														Global_2643675[Global_2643675.f_162 /*3*/] = { Var3 };
														Global_2643675.f_121[Global_2643675.f_162] = fVar6;
														Global_2643675.f_162++;
														if (Global_2643675.f_162 >= 10)
														{
															if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
															{
																iVar1 = Global_2635562.f_2055;
															}
															else if (Global_2643675.f_162 == 40)
															{
																iVar1 = Global_2635562.f_2055;
															}
														}
													}
												}
											}
											else
											{
												*uParam0 = { Var3 };
												*uParam1 = fVar6;
												return 1;
											}
										}
									}
									else
									{
										*uParam0 = { Var3 };
										*uParam1 = fVar6;
										return 1;
									}
								}
							}
						}
					}
				}
			}
			iVar1++;
		}
		if (Global_2643675.f_162 > 0)
		{
			if (uParam2->f_30)
			{
				*uParam0 = { Global_2643675[0 /*3*/] };
				*uParam1 = Global_2643675.f_121[0];
				return 1;
			}
			else
			{
				if (Global_2643675.f_163 > 0 && !Global_2643675.f_163 == Global_2643675.f_162)
				{
					func_161(0, uParam2);
				}
				iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, Global_2643675.f_162);
				Var15 = { Global_2643675[0 /*3*/] };
				uVar18 = Global_2643675.f_121[0];
				Global_2643675[0 /*3*/] = { Global_2643675[iVar0 /*3*/] };
				Global_2643675.f_121[0] = Global_2643675.f_121[iVar0];
				Global_2643675[iVar0 /*3*/] = { Var15 };
				Global_2643675.f_121[iVar0] = uVar18;
				*uParam0 = { Global_2643675[0 /*3*/] };
				*uParam1 = Global_2643675.f_121[0];
				return 1;
			}
		}
		else
		{
			uParam2->f_33++;
			if (uParam2->f_33 < 2)
			{
				return 0;
			}
			else if (uParam2->f_59 && Global_2635562.f_2055 > 0)
			{
				iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, Global_2635562.f_2055);
				*uParam0 = { Global_2635562.f_2056[iVar0 /*4*/] };
				*uParam1 = Global_2635562.f_2056[iVar0 /*4*/].f_3;
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	return 0;
}

void func_206()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Global_2635562.f_2055)
	{
		Global_2635562.f_2461[iVar0] = iVar0;
		iVar0++;
	}
}

void func_207()
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	iVar0 = 0;
	while (iVar0 < Global_2635562.f_2055)
	{
		Global_2635562.f_2461[iVar0] = iVar0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_2635562.f_2055)
	{
		iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, Global_2635562.f_2055);
		iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(0, Global_2635562.f_2055);
		uVar3 = Global_2635562.f_2461[iVar1];
		Global_2635562.f_2461[iVar1] = Global_2635562.f_2461[iVar2];
		Global_2635562.f_2461[iVar2] = uVar3;
		iVar0++;
	}
}

void func_208(struct<3> Param0)
{
	float fVar0;
	var uVar1;
	int iVar2;
	
	fVar0 = -1f;
	while (iVar2 < Global_2635562.f_2055)
	{
		uVar1 = func_209(Param0, fVar0, &fVar0);
		Global_2635562.f_2461[iVar2] = uVar1;
		iVar2++;
	}
}

int func_209(struct<3> Param0, float fParam3, float fParam4)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	iVar0 = -1;
	fVar1 = 1E+08f;
	iVar3 = 0;
	while (iVar3 < Global_2635562.f_2055)
	{
		fVar2 = SYSTEM::VDIST2(Param0, Global_2635562.f_2056[iVar3 /*4*/]);
		if (fVar2 < fVar1 && fVar2 > fParam3)
		{
			iVar0 = iVar3;
			fVar1 = fVar2;
		}
		iVar3++;
	}
	*fParam4 = fVar1;
	return iVar0;
}

int func_210(struct<3> Param0)
{
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, 220.6841f, -3344.314f, -17.85619f, 213.9592f, -2802.106f, 25.02548f, 240f, false, true))
	{
		return 1;
	}
	return 0;
}

int func_211(struct<3> Param0, float fParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam5 == iVar0 || iParam6 == 1)
		{
			iVar2 = iVar0;
			iVar1 = 0;
			while (iVar1 < 2)
			{
				if (func_212(Param0, iParam4, Global_2649159.f_461[iVar0 /*11*/][iVar1 /*5*/], Global_2649159.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4))
				{
					if (func_140(Param0, fParam3, iParam4, Global_2649159.f_461[iVar0 /*11*/][iVar1 /*5*/], Global_2649159.f_461[iVar0 /*11*/][iVar1 /*5*/].f_3, Global_2649159.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4, 0))
					{
						if (func_357(iVar2, 0, 1) && func_357(iParam5, 0, 1))
						{
							return 1;
						}
						else
						{
							return 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_212(struct<3> Param0, int iParam3, struct<3> Param4, int iParam7)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = func_139(iParam3, 1008981770);
	fVar1 = func_139(iParam7, 1008981770);
	fVar2 = SYSTEM::VDIST(Param0, Param4);
	if (fVar2 < (fVar0 + fVar1))
	{
		return 1;
	}
	return 0;
}

int func_213(struct<3> Param0, float fParam3, float fParam4, float fParam5, float fParam6, int iParam7, bool bParam8, int iParam9, float fParam10, bool bParam11, int iParam12, bool bParam13, float fParam14, bool bParam15, float fParam16, bool bParam17, bool bParam18)
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
		if (func_222(Param0, fParam14, 1, 1, bParam15, bParam17, bParam11, bParam15, 0))
		{
			return 0;
		}
	}
	Global_2635562.f_2++;
	if (bParam8)
	{
		if (fParam6 > 0f)
		{
			if (func_214(Param0, fParam6, iParam7, iParam9, fParam10, bParam11, iParam12, fParam16, bParam17))
			{
				return 0;
			}
		}
	}
	Global_2635562.f_2++;
	return 1;
}

int func_214(struct<3> Param0, float fParam3, int iParam4, int iParam5, float fParam6, bool bParam7, int iParam8, float fParam9, bool bParam10)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam4 && !bParam7)
	{
		if (func_357(PLAYER::PLAYER_ID(), 1, 1))
		{
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
				fVar2 = fParam6;
				if (fParam9 > 0f)
				{
					fVar2 = fParam9;
				}
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_215(PLAYER::PLAYER_ID()), Param0, true) <= (fVar2 + fParam3))
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
		if (func_357(iVar1, 1, 1))
		{
			if (!func_34(iVar1, 0) && NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), iVar1))
			{
				if (iParam4 == 1 || (iParam4 == 0 && iVar1 != PLAYER::PLAYER_ID()))
				{
					if ((func_146(iVar1) || !bParam10) && !Global_2658291[iVar1 /*468*/].f_274)
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
								if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_215(iVar1), Param0, true) <= (fVar2 + fParam3))
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
							if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_215(iVar1), Param0, true) <= (fVar2 + fParam3))
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

Vector3 func_215(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((func_221() && Global_1845250[iVar0 /*880*/].f_862) && !func_220(Global_1845250[iVar0 /*880*/].f_863))
	{
		return Global_1845250[iVar0 /*880*/].f_863;
	}
	if ((NETWORK::NETWORK_IS_ACTIVITY_SESSION() || func_217(0)) && func_216())
	{
		return CAM::GET_FINAL_RENDERED_CAM_COORD();
	}
	return func_284(iParam0);
}

var func_216()
{
	return BitTest(Global_1964145, 5);
}

int func_217(int iParam0)
{
	if (iParam0 && Global_1575062)
	{
		if (func_218())
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	return Global_1575062;
}

int func_218()
{
	if (func_219())
	{
		return 1;
	}
	return Global_1575065;
	return 0;
}

int func_219()
{
	if (Global_1575062 || Global_1575068)
	{
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("fm_deathmatch_controler")) != 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_220(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

var func_221()
{
	return Global_2685150.f_19;
}

int func_222(struct<3> Param0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, int iParam8, var uParam9, int iParam10)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam8 == 1 && PLAYER::PLAYER_ID() != iVar1) || iParam8 == 0)
		{
			if (func_357(iVar1, bParam4, bParam5))
			{
				if (iParam10 || NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), iVar1))
				{
					if (!bParam7 || (!PED::IS_PED_INJURED(PLAYER::GET_PLAYER_PED(iVar1)) && func_146(iVar1)))
					{
						if ((!bParam6 || (bParam6 == 1 && PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) != PLAYER::GET_PLAYER_TEAM(iVar1))) || PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1)
						{
							if (((PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1 && uParam9) && bParam6) && func_141(iVar1))
							{
							}
							else if (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iVar1)))
							{
								if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_284(iVar1), Param0, true) < fParam3)
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

void func_223()
{
	func_224(-692.3094f, -1442.414f, 24f, 288f);
	func_224(-708.6566f, -1492.726f, 24f, 216f);
	func_224(-735.107f, -1411.32f, 24f, 360f);
	func_224(-692.3094f, -1470.226f, 44f, 252f);
	func_224(-708.6566f, -1419.914f, 44f, 324f);
	func_224(-761.5574f, -1492.726f, 24f, 144f);
	func_224(-777.9046f, -1442.414f, 24f, 72f);
	func_224(-735.107f, -1501.32f, 44f, 180f);
	func_224(-777.9046f, -1470.226f, 44f, 108f);
	func_224(-761.5574f, -1419.914f, 44f, 36f);
	func_224(-735.107f, -1386.32f, 54f, 360f);
	func_224(-693.962f, -1399.689f, 34f, 324f);
	func_224(-668.533f, -1434.689f, 54f, 288f);
	func_224(-668.533f, -1477.952f, 34f, 252f);
	func_224(-693.962f, -1512.952f, 54f, 216f);
	func_224(-735.107f, -1526.32f, 34f, 180f);
	func_224(-776.252f, -1512.952f, 54f, 144f);
	func_224(-801.681f, -1477.952f, 34f, 108f);
	func_224(-801.681f, -1434.689f, 54f, 72f);
	func_224(-776.252f, -1399.689f, 34f, 36f);
	func_224(-735.107f, -1431.32f, 69f, 360f);
	func_224(-711.3306f, -1448.595f, 69f, 288f);
	func_224(-720.4124f, -1476.546f, 69f, 216f);
	func_224(-749.8016f, -1476.546f, 69f, 144f);
	func_224(-758.8834f, -1448.595f, 49f, 72f);
	func_224(-696.4671f, -1369.534f, 49f, 336f);
	func_224(-640.6275f, -1466.25f, 49f, 264f);
	func_224(-715.3553f, -1549.244f, 49f, 195.48f);
	func_224(-817.3795f, -1503.82f, 49f, 120f);
	func_224(-805.7059f, -1392.753f, 49f, 48f);
	func_224(-735.0321f, -1346.409f, 64f, 360f);
	func_224(-630.4158f, -1422.417f, 64f, 288f);
	func_224(-670.3758f, -1545.4f, 64f, 216f);
	func_224(-799.6883f, -1545.4f, 64f, 144f);
	func_224(-839.6483f, -1422.417f, 64f, 72f);
}

void func_224(struct<3> Param0, float fParam3)
{
	if (Global_2635562.f_2055 < 101)
	{
		if (SYSTEM::VMAG(Param0) <= 0.01f)
		{
			return;
		}
		Global_2635562.f_2056[Global_2635562.f_2055 /*4*/] = { Param0 };
		Global_2635562.f_2056[Global_2635562.f_2055 /*4*/].f_3 = fParam3;
		Global_2635562.f_2055++;
	}
}

void func_225()
{
	func_224(-746.1063f, -1469.455f, 4.5f, 316.7026f);
	func_224(-724.7337f, -1444.458f, 4.5f, 141.0742f);
	func_224(-762.1299f, -1453.872f, 4.5f, 273.6639f);
	func_224(-721.4189f, -1473.288f, 4.5f, 97.6222f);
	func_224(-746.037f, -1433.329f, 4.5f, 273.6639f);
	func_224(-700.7369f, -1447.703f, 4.5f, 97.6222f);
}

void func_226(int iParam0)
{
	int iVar0;
	
	if (VEHICLE::IS_THIS_MODEL_A_HELI(iParam0))
	{
		func_224(2144.469f, 4819.241f, 60f, 360f);
		func_224(2170.919f, 4810.646f, 80f, 324f);
		func_224(2187.267f, 4788.146f, 60f, 288f);
		func_224(2187.267f, 4760.335f, 80f, 252f);
		func_224(2170.919f, 4737.835f, 60f, 216f);
		func_224(2144.469f, 4729.241f, 80f, 180f);
		func_224(2118.019f, 4737.835f, 60f, 144f);
		func_224(2101.671f, 4760.335f, 80f, 108f);
		func_224(2101.671f, 4788.146f, 60f, 72f);
		func_224(2118.019f, 4810.646f, 80f, 36f);
		func_224(2144.469f, 4844.241f, 90f, 360f);
		func_224(2185.614f, 4830.872f, 70f, 324f);
		func_224(2211.043f, 4795.872f, 90f, 288f);
		func_224(2211.043f, 4752.609f, 70f, 252f);
		func_224(2185.614f, 4717.609f, 90f, 216f);
		func_224(2144.469f, 4704.241f, 70f, 180f);
		func_224(2103.324f, 4717.609f, 90f, 144f);
		func_224(2077.895f, 4752.609f, 70f, 108f);
		func_224(2077.895f, 4795.872f, 90f, 72f);
		func_224(2103.324f, 4830.872f, 70f, 36f);
		func_224(2144.469f, 4799.241f, 105f, 360f);
		func_224(2168.245f, 4781.966f, 105f, 288f);
		func_224(2159.164f, 4754.015f, 105f, 216f);
		func_224(2129.774f, 4754.015f, 105f, 144f);
		func_224(2120.693f, 4781.966f, 45.6935f, 72f);
		func_224(2183.109f, 4861.027f, 85f, 336f);
		func_224(2238.948f, 4764.311f, 85f, 264f);
		func_224(2164.221f, 4681.317f, 85f, 195.48f);
		func_224(2062.197f, 4726.741f, 85f, 120f);
		func_224(2073.87f, 4837.808f, 85f, 48f);
		func_224(2144.544f, 4884.152f, 100f, 360f);
		func_224(2249.16f, 4808.144f, 100f, 288f);
		func_224(2209.2f, 4685.161f, 100f, 216f);
		func_224(2079.888f, 4685.161f, 100f, 144f);
		func_224(2039.928f, 4808.144f, 100f, 72f);
	}
	else
	{
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 65535);
		if (iVar0 & 1 == 1)
		{
			func_229();
			func_228();
			func_227();
		}
		else
		{
			func_228();
			func_229();
			func_227();
		}
	}
}

void func_227()
{
	func_224(1814.033f, 4361.09f, 67.535f, 172.2609f);
	func_224(1814.033f, 4361.09f, 108.5939f, 172.2609f);
	func_224(2185.803f, 4488.299f, 67.535f, -149.5774f);
	func_224(2185.803f, 4488.299f, 108.5939f, -149.5774f);
	func_224(2061.437f, 4270.964f, 77.535f, -179.8978f);
	func_224(2061.437f, 4270.964f, 113.1827f, -179.8978f);
	func_224(2309.389f, 4630.398f, 77.535f, -149.001f);
	func_224(2309.389f, 4630.398f, 113.1827f, -149.001f);
}

void func_228()
{
	func_224(1836.778f, 4668.552f, 67.535f, 115.58f);
	func_224(1810.872f, 4722.671f, 67.535f, 102.24f);
	func_224(1856.208f, 4627.962f, 67.535f, 126f);
	func_224(1875.638f, 4587.373f, 67.535f, 136.08f);
	func_224(1784.966f, 4776.79f, 67.535f, 90.32f);
	func_224(1836.778f, 4668.552f, 100.54f, 115.58f);
	func_224(1810.872f, 4722.671f, 100.54f, 102.24f);
	func_224(1856.208f, 4627.962f, 100.54f, 126f);
	func_224(1875.638f, 4587.373f, 100.54f, 136.08f);
	func_224(1784.966f, 4776.79f, 100.54f, 90.32f);
}

void func_229()
{
	func_224(2250.422f, 4865.229f, 72.8377f, -64.42f);
	func_224(2230.992f, 4905.819f, 73.6707f, -77.4f);
	func_224(2269.851f, 4824.64f, 73.6577f, -51.48f);
	func_224(2211.562f, 4946.408f, 72.2069f, -90.72f);
	func_224(2289.281f, 4784.051f, 73.0896f, -39.96f);
	func_224(2250.422f, 4865.229f, 107.8377f, -64.42f);
	func_224(2230.992f, 4905.819f, 108.6707f, -77.4f);
	func_224(2269.851f, 4824.64f, 107.6577f, -51.48f);
	func_224(2211.562f, 4946.408f, 108.2069f, -90.72f);
	func_224(2289.281f, 4784.051f, 107.0896f, -39.96f);
}

void func_230(int iParam0)
{
	int iVar0;
	
	iVar0 = func_231(iParam0);
	switch (iVar0)
	{
		case 0:
			func_224(2137.409f, 4816.817f, 40.196f, 130.7968f);
			func_224(2034.473f, 4776.724f, 40.1741f, 130.1973f);
			func_224(2006.285f, 4763.084f, 40.1767f, 124.197f);
			func_224(2046.186f, 4752.885f, 40.0805f, 106.3966f);
			func_224(2017.498f, 4739.787f, 40.215f, 102.9966f);
			break;
		
		case 1:
			func_224(2103.224f, 4793.538f, 40.0395f, 112.5981f);
			func_224(2122.274f, 4802.774f, 40.1507f, 114.3981f);
			func_224(2147.737f, 4807.85f, 40.1818f, 101.9978f);
			break;
		
		case 2:
			func_224(2069.784f, 4776.172f, 40.038f, 114.1993f);
			break;
	}
}

int func_231(int iParam0)
{
	switch (iParam0)
	{
		case joaat("microlight"):
		case joaat("havok"):
		case joaat("seabreeze"):
		case joaat("rogue"):
		case joaat("pyro"):
		case joaat("buzzard"):
		case joaat("frogger"):
		case joaat("maverick"):
		case joaat("supervolito"):
		case joaat("supervolito2"):
		case joaat("volatus"):
		case joaat("cuban800"):
		case joaat("besra"):
		case joaat("duster"):
		case joaat("stunt"):
		case joaat("velum"):
		case joaat("velum2"):
		case joaat("vestra"):
		case joaat("lazer"):
		case joaat("alphaz1"):
		case joaat("howard"):
		case joaat("molotok"):
		case joaat("nokota"):
		case joaat("starling"):
		case joaat("seasparrow"):
		case joaat("conada"):
		case joaat("conada2"):
			return 0;
		
		case joaat("hydra"):
		case joaat("dodo"):
		case joaat("mammatus"):
		case joaat("annihilator"):
		case joaat("tula"):
		case joaat("hunter"):
		case joaat("mogul"):
		case joaat("cargobob"):
		case joaat("cargobob2"):
		case joaat("shamal"):
		case joaat("savage"):
		case joaat("luxor"):
		case joaat("luxor2"):
		case joaat("nimbus"):
		case joaat("swift"):
		case joaat("swift2"):
		case joaat("valkyrie"):
		case joaat("akula"):
		case joaat("streamer216"):
		case joaat("raiju"):
		case 84351789:
			return 1;
		
		case joaat("titan"):
		case joaat("skylift"):
		case joaat("miljet"):
		case joaat("bombushka"):
		case joaat("volatol"):
		case joaat("avenger"):
		case joaat("avenger3"):
		case -352682313:
		case 858355070:
			return 2;
		
		case joaat("alkonost"):
			return 3;
		
		default:
	}
	if (iParam0 == joaat("strikeforce"))
	{
		return 1;
	}
	return 0;
}

int func_232(struct<3> Param0)
{
	var uVar0;
	
	if ((Global_2733002.f_590 || BitTest(Global_2733002.f_594, 1)) && func_233(Param0, &uVar0))
	{
		return 1;
	}
	return 0;
}

int func_233(struct<3> Param0, var uParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	*uParam3 = -1;
	iVar2 = func_246(Param0, 0);
	if (!iVar2 == -1)
	{
		iVar0 = 83;
		while (iVar0 <= 87)
		{
			iVar1 = iVar0;
			if (func_234(iVar1))
			{
				if (func_246(Global_1950198.f_781[iVar0 /*3*/], 0) == iVar2)
				{
					*uParam3 = iVar0 + 1000;
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_234(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_245(iParam0);
	if (Global_1845250[PLAYER::PLAYER_ID() /*880*/].f_260.f_304 == iVar0)
	{
		return 1;
	}
	iVar1 = Global_1892653[PLAYER::PLAYER_ID() /*615*/].f_10;
	if (iVar1 != func_118())
	{
		if (Global_1845250[iVar1 /*880*/].f_260.f_304 == iVar0)
		{
			return 1;
		}
	}
	if (func_244() == iParam0)
	{
		return 1;
	}
	if (func_243(PLAYER::PLAYER_ID(), 0) || (func_240(PLAYER::PLAYER_ID()) && func_77(func_239(PLAYER::PLAYER_ID())) == 12))
	{
		return 1;
	}
	if (func_238(PLAYER::PLAYER_ID()) || (func_240(PLAYER::PLAYER_ID()) && func_77(func_239(PLAYER::PLAYER_ID())) == 8))
	{
		return 1;
	}
	if (func_237(PLAYER::PLAYER_ID()) || (func_240(PLAYER::PLAYER_ID()) && func_77(func_239(PLAYER::PLAYER_ID())) == 5))
	{
		return 1;
	}
	if (func_236(PLAYER::PLAYER_ID()) || (func_240(PLAYER::PLAYER_ID()) && func_77(func_239(PLAYER::PLAYER_ID())) == 10))
	{
		return 1;
	}
	if (func_235(PLAYER::PLAYER_ID()) || (func_240(PLAYER::PLAYER_ID()) && func_77(func_239(PLAYER::PLAYER_ID())) == 6))
	{
		return 1;
	}
	return 0;
}

int func_235(int iParam0)
{
	if (iParam0 != func_118())
	{
		if (func_357(iParam0, 1, 1))
		{
			if (Global_2658291[iParam0 /*468*/].f_325.f_8 != -1)
			{
				return func_77(Global_2658291[iParam0 /*468*/].f_325.f_8) == 6;
			}
		}
	}
	return 0;
}

int func_236(int iParam0)
{
	if (iParam0 != func_118())
	{
		if (func_357(iParam0, 1, 1))
		{
			if (Global_2658291[iParam0 /*468*/].f_325.f_8 != -1)
			{
				return func_77(Global_2658291[iParam0 /*468*/].f_325.f_8) == 10;
			}
		}
	}
	return 0;
}

int func_237(int iParam0)
{
	if (iParam0 != func_118())
	{
		if (func_357(iParam0, 1, 1))
		{
			if (Global_2658291[iParam0 /*468*/].f_325.f_8 != -1 && Global_2658291[iParam0 /*468*/].f_325.f_11 != func_118())
			{
				return func_77(Global_2658291[iParam0 /*468*/].f_325.f_8) == 5;
			}
		}
	}
	return 0;
}

int func_238(int iParam0)
{
	if (iParam0 != func_118())
	{
		if (func_357(iParam0, 1, 1))
		{
			if (Global_2658291[iParam0 /*468*/].f_325.f_8 != -1 && Global_2658291[iParam0 /*468*/].f_325.f_11 != func_118())
			{
				return func_77(Global_2658291[iParam0 /*468*/].f_325.f_8) == 8;
			}
		}
	}
	return 0;
}

int func_239(int iParam0)
{
	if (iParam0 != func_118() && func_357(iParam0, 1, 1))
	{
		return Global_2658291[iParam0 /*468*/].f_325.f_18;
	}
	return -1;
}

int func_240(int iParam0)
{
	if (iParam0 != func_118() && func_357(iParam0, 1, 1))
	{
		if (func_242(iParam0) && !func_241(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_241(int iParam0)
{
	if (iParam0 != func_118() && func_357(iParam0, 1, 1))
	{
		return BitTest(Global_2658291[iParam0 /*468*/].f_325, 4);
	}
	return 0;
}

int func_242(int iParam0)
{
	if (iParam0 != func_118() && func_357(iParam0, 1, 1))
	{
		return BitTest(Global_2658291[iParam0 /*468*/].f_325, 3);
	}
	return 0;
}

int func_243(int iParam0, bool bParam1)
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
	if (iParam0 != func_118())
	{
		if (func_357(iParam0, 1, 1))
		{
			if (Global_2658291[iParam0 /*468*/].f_325.f_8 != -1 && Global_2658291[iParam0 /*468*/].f_325.f_11 != func_118())
			{
				return func_77(Global_2658291[iParam0 /*468*/].f_325.f_8) == 12;
			}
		}
	}
	return 0;
}

int func_244()
{
	return Global_2658291[PLAYER::PLAYER_ID() /*468*/].f_325.f_8;
}

int func_245(int iParam0)
{
	switch (iParam0)
	{
		case 83:
			return 1;
			break;
		
		case 84:
			return 2;
			break;
		
		case 85:
			return 3;
			break;
		
		case 86:
			return 4;
			break;
		
		case 87:
			return 5;
			break;
	}
	return 0;
}

int func_246(struct<3> Param0, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 14)
	{
		if (Global_2640828[iVar0 /*17*/].f_9 == 1 || iParam3 == 0)
		{
			if (func_191(Param0, &(Global_2640828[iVar0 /*17*/]), 0.1f, 0, 0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

void func_247(struct<3> Param0, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2[3];
	int iVar6[3];
	
	if (Global_2635562.f_45.f_320)
	{
		return;
	}
	if (!func_266())
	{
		if (iParam3 == 0)
		{
		}
		iVar1 = func_265(Param0);
		if (iVar1 > -1)
		{
			func_277();
			switch (iVar1)
			{
				case 0:
					func_224(-1139.678f, -2694.165f, 12.949f, 283.4298f);
					func_224(-1137.455f, -2690.167f, 12.9448f, 283.0835f);
					func_224(-1135.02f, -2685.912f, 12.9412f, 283.8219f);
					func_224(-1099.898f, -2688.611f, 12.9473f, 295.3925f);
					func_224(-1110.51f, -2693.236f, 12.9595f, 298.84f);
					func_224(-1081.807f, -2690.015f, 12.7567f, 219.1729f);
					func_224(-1075.586f, -2697.09f, 12.7567f, 224.8977f);
					func_224(-1095.133f, -2659.995f, 12.7567f, 190.9326f);
					func_224(-1096.511f, -2649.483f, 12.6066f, 182.7913f);
					break;
				
				case 1:
					func_224(-1411.731f, -533.6462f, 30.2703f, 215.116f);
					func_224(-1416.407f, -527.0309f, 30.6453f, 215.2683f);
					func_224(-1432.146f, -580.9922f, 29.5263f, 118.3858f);
					func_224(-1438.8f, -584.4678f, 29.595f, 118.1207f);
					break;
				
				case 2:
					func_224(-780.5905f, 292.8159f, 84.673f, 97.2697f);
					func_224(-788.6147f, 291.8073f, 84.72f, 97.7348f);
					func_224(-765.572f, 294.4459f, 84.5182f, 93.9327f);
					func_224(-756.9962f, 294.8176f, 84.4061f, 93.9545f);
					break;
				
				case 3:
					func_224(-647.9388f, 40.9257f, 38.9494f, 356.4108f);
					func_224(-647.239f, 49.2068f, 40.7135f, 355.9723f);
					func_224(-620.1517f, 3.6633f, 40.5904f, 98.3813f);
					func_224(-610.5603f, 5.1258f, 41.2404f, 98.696f);
					break;
				
				case 4:
					func_224(-943.2437f, -487.8443f, 35.7504f, 208.6441f);
					func_224(-949.2938f, -476.3759f, 36.0878f, 208.1432f);
					func_224(-955.3208f, -465.3984f, 36.3328f, 206.9198f);
					func_224(-959.5925f, -457.0372f, 36.5226f, 207.7534f);
					break;
				
				case 5:
					func_224(-966.1365f, -401.5364f, 36.6824f, 27.6587f);
					func_224(-934.9108f, -413.4091f, 36.5161f, 118.0149f);
					func_224(-920.2501f, -405.6656f, 36.5869f, 117.2407f);
					func_224(-971.7031f, -390.5213f, 36.7118f, 26.8016f);
					break;
				
				case 6:
					func_224(-58.1347f, -573.486f, 36.5789f, 341.8442f);
					func_224(-64.227f, -590.2214f, 35.1654f, 338.972f);
					func_224(-67.0332f, -599.2827f, 35.1787f, 341.5854f);
					func_224(-71.8651f, -612.8891f, 35.1574f, 339.8537f);
					break;
				
				case 7:
					func_224(-232.1917f, -978.1431f, 28.166f, 160.2115f);
					func_224(-229.6225f, -970.9731f, 28.1636f, 160.2397f);
					func_224(-251.993f, -998.3963f, 28.3747f, 249.3297f);
					func_224(-262.222f, -994.5226f, 29.23f, 249.4673f);
					break;
				
				case 8:
					func_224(151.624f, -1309.343f, 28.2023f, 243.201f);
					func_224(152.7886f, -1305.608f, 28.2023f, 243.9973f);
					func_224(145.8017f, -1287.19f, 28.312f, 120.6275f);
					func_224(142.8935f, -1282.286f, 28.3156f, 120.3024f);
					break;
				
				case 9:
					func_224(-2333.575f, 272.6518f, 168.4671f, 23.0287f);
					func_224(-2322.187f, 277.638f, 168.4671f, 23.4249f);
					func_224(-2316.222f, 279.9105f, 168.4671f, 23.0175f);
					func_224(-2314.396f, 290.9f, 168.4671f, 114.3983f);
					func_224(-2316.81f, 296.424f, 168.4671f, 113.6228f);
					func_224(-2318.572f, 299.2423f, 168.4671f, 293.83f);
					func_224(-2327.902f, 291.6653f, 168.4671f, 294.1158f);
					func_224(-2330.711f, 274.0757f, 168.4671f, 205.2184f);
					func_224(-2345.082f, 277.3852f, 168.4671f, 113.4219f);
					func_224(-2347.777f, 282.6038f, 168.4671f, 292.7772f);
					func_224(-2339.33f, 293.4399f, 168.4671f, 114.2739f);
					func_224(-2352.681f, 294.4205f, 168.4671f, 115.5597f);
					break;
				
				case 10:
					func_263(78);
					break;
				
				case 11:
					func_263(79);
					break;
				
				case 12:
					func_263(82);
					break;
				
				case 13:
					func_263(81);
					break;
				
				case 14:
					func_263(73);
					break;
				
				case 15:
					func_224(382.9244f, 443.8122f, 142.9934f, 78.3408f);
					func_224(391.2023f, 442.4812f, 142.5089f, 82.2125f);
					func_224(400.1477f, 441.0816f, 142.0776f, 83.4259f);
					func_224(414.2964f, 439.2628f, 141.5056f, 80.8689f);
					break;
				
				case 16:
					func_263(75);
					break;
				
				case 17:
					func_263(76);
					break;
				
				case 18:
					func_263(77);
					break;
				
				case 19:
					func_224(-921.9734f, 704.0754f, 150.8142f, 96.5139f);
					func_224(-904.7881f, 708.9782f, 149.8261f, 108.2109f);
					func_224(-931.6637f, 703.693f, 151.369f, 87.7447f);
					func_224(-943.8763f, 704.2332f, 152.0993f, 87.6764f);
					break;
				
				case 20:
					func_263(80);
					break;
				
				case 21:
				case 25:
					func_263(87);
					break;
				
				case 22:
				case 26:
					func_263(88);
					break;
				
				case 23:
				case 27:
					func_263(89);
					break;
				
				case 24:
				case 28:
					func_263(90);
					break;
				
				case 29:
				case 30:
					if (func_262(iParam3))
					{
						func_263(Global_1845250[PLAYER::PLAYER_ID() /*880*/].f_260.f_39);
					}
					break;
				
				case 31:
					func_224(-352.53f, -1836.742f, 21.924f, 274.8f);
					func_224(-336.412f, -1837.341f, 22.497f, 264.6f);
					func_224(-320.707f, -1840.342f, 23.195f, 257.4f);
					func_224(-304.646f, -1843.295f, 24.219f, 261.599f);
					func_224(-288.991f, -1844.123f, 25.228f, 269.599f);
					func_224(-273.031f, -1842.69f, 26.27f, 278.199f);
					func_224(-361.271f, -1814.526f, 21.63f, 96.399f);
					func_224(-343.939f, -1813.331f, 22.368f, 87.999f);
					func_224(-326.881f, -1814.914f, 23.106f, 78.799f);
					func_224(-310.941f, -1818.223f, 23.957f, 78.799f);
					func_224(-294.16f, -1820.207f, 25.092f, 89.199f);
					func_224(-277.392f, -1819.237f, 26.283f, 100.199f);
					func_224(-257.213f, -1838.977f, 27.318f, 285.799f);
					func_224(-261.286f, -1815.615f, 27.439f, 110.399f);
					func_224(-246.086f, -1808.691f, 28.576f, 117.398f);
					func_224(-231.901f, -1800.767f, 28.619f, 119.398f);
					func_224(-199.77f, -1989.34f, 26.62f, 180.997f);
					func_224(-201.159f, -1971.41f, 26.62f, 190.798f);
					func_224(-205.571f, -1954.537f, 26.62f, 199.998f);
					func_224(-197.879f, -1940.822f, 26.62f, 114.998f);
					func_224(-141.311f, -1967.41f, 21.805f, 91.997f);
					func_224(-141.145f, -1977.861f, 21.813f, 91.997f);
					func_224(-140.565f, -1988.289f, 21.815f, 91.997f);
					func_224(-145.045f, -2032.168f, 21.956f, 73.597f);
					func_224(-147.923f, -2041.781f, 21.956f, 73.597f);
					func_224(-185.791f, -1948.005f, 26.62f, 18.596f);
					func_224(-181.155f, -1965.422f, 26.62f, 8.196f);
					func_224(-179.172f, -1984.332f, 26.62f, 1.396f);
					func_224(-225.88f, -1824.637f, 28.897f, 299.596f);
					func_224(-211.722f, -1816.401f, 28.859f, 300.796f);
					func_224(-217.99f, -1792.624f, 28.649f, 119.196f);
					func_224(-203.828f, -1784.264f, 28.678f, 119.996f);
					func_224(-194.254f, -2018.756f, 26.62f, 75f);
					func_224(-186.956f, -2031.369f, 26.62f, 338f);
					func_224(-194.916f, -2047.94f, 26.62f, 329.8f);
					func_224(-205.565f, -2064.553f, 26.62f, 320.2f);
					func_224(-218.606f, -2077.97f, 26.62f, 311.2f);
					func_224(-233.372f, -2089.601f, 26.62f, 304f);
					func_224(-207.822f, -2002.11f, 26.62f, 173.799f);
					func_224(-207.567f, -2027.579f, 26.62f, 158.599f);
					func_224(-215.235f, -2042.272f, 26.62f, 148.999f);
					func_224(-227.643f, -2058.498f, 26.62f, 138.799f);
					func_224(-242.977f, -2071.452f, 26.62f, 125.798f);
					func_224(-256.624f, -2087.982f, 26.62f, 204.198f);
					func_224(-249.549f, -2098.767f, 26.62f, 294.198f);
					func_224(-228.998f, -2048.889f, 26.62f, 141.198f);
					func_224(-176.963f, -2009.239f, 24.519f, 261.597f);
					func_224(-195.128f, -1806.447f, 28.814f, 299.997f);
					func_224(-180.02f, -1797.414f, 28.797f, 299.997f);
					func_224(-165.796f, -1787.672f, 28.788f, 304.597f);
					func_224(-188.124f, -1774.765f, 28.711f, 123.197f);
					func_224(-417.428f, -1836.374f, 19.238f, 121.797f);
					func_224(-430.967f, -1844.844f, 18.468f, 121.797f);
					func_224(-444.94f, -1853.739f, 17.786f, 121.797f);
					break;
				
				case 32:
					func_224(54.0916f, -1417.787f, 28.68f, -134.36f);
					func_224(56.6694f, -1414.956f, 28.6847f, -134.96f);
					break;
			}
		}
		else if (func_258(Param0, &iVar2, &iVar6) || (func_233(Param0, &(iVar2[0])) && (VEHICLE::IS_THIS_MODEL_A_PLANE(iParam3) || VEHICLE::IS_THIS_MODEL_A_HELI(iParam3))))
		{
			func_277();
			iVar0 = 0;
			while (iVar0 < iVar2)
			{
				if (iVar2[iVar0] > 1000)
				{
					iVar2[iVar0] = (iVar2[iVar0] - 1000);
					iVar6[iVar0] = 1;
				}
				if (iVar2[iVar0] >= 83 && iVar2[iVar0] <= 87)
				{
					Global_2635562.f_517 = 1;
				}
				if (!iVar6[iVar0] && func_257(iVar2[iVar0], -1))
				{
					if (func_262(iParam3))
					{
						func_263(iVar2[iVar0]);
					}
				}
				else if (iVar6[iVar0])
				{
					if (((func_256(PLAYER::PLAYER_PED_ID()) || func_254(PLAYER::PLAYER_PED_ID())) && VEHICLE::IS_THIS_MODEL_A_PLANE(iParam3)) || VEHICLE::IS_THIS_MODEL_A_HELI(iParam3))
					{
						if (func_253(iParam3))
						{
							func_252(iVar2[iVar0]);
						}
						else if (func_251(iParam3))
						{
							func_250(iVar2[iVar0]);
							func_252(iVar2[iVar0]);
						}
						else
						{
							func_250(iVar2[iVar0]);
							func_252(iVar2[iVar0]);
						}
					}
					else
					{
						func_248(iVar2[iVar0], iParam3);
					}
				}
				else
				{
					func_263(iVar2[iVar0]);
				}
				iVar0++;
			}
		}
	}
}

void func_248(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 23:
			func_224(434.1898f, 6535.824f, 27.0084f, 66.9998f);
			func_224(434.9146f, 6539.661f, 26.9691f, 66.9998f);
			func_224(435.1928f, 6543.298f, 26.889f, 66.9998f);
			func_224(429.8495f, 6506.581f, 27.1807f, 59.7997f);
			func_224(429.8463f, 6511.11f, 27.0717f, 60.9997f);
			func_224(434.2748f, 6581.816f, 26.1303f, 85.1993f);
			func_224(443.1016f, 6580.717f, 26.0739f, 85.1993f);
			func_224(451.9748f, 6579.937f, 26.0319f, 85.1993f);
			break;
		
		case 26:
			func_224(-148.9694f, 6325.552f, 30.4564f, 224.1983f);
			func_224(-154.9585f, 6331.287f, 30.5809f, 225.7983f);
			func_224(-136.8806f, 6347.622f, 30.4906f, 43.9982f);
			func_224(-142.1459f, 6342.532f, 30.49f, 44.7982f);
			func_224(-136.6504f, 6357.062f, 30.4907f, 43.9982f);
			func_224(-151.1909f, 6358.461f, 30.4907f, 223.398f);
			func_224(-141.4154f, 6365.831f, 30.4907f, 43.3979f);
			func_224(-147.8279f, 6378.042f, 30.5012f, 312.7973f);
			break;
		
		case 24:
			func_224(60.7522f, 6465.807f, 30.3941f, 213.3973f);
			func_224(57.4131f, 6462.55f, 30.3663f, 213.3973f);
			func_224(48.0438f, 6452.668f, 30.3245f, 213.3973f);
			func_224(40.6765f, 6445.235f, 30.3475f, 213.3973f);
			func_224(37.8298f, 6442.521f, 30.3489f, 213.3973f);
			func_224(35.0212f, 6439.866f, 30.3332f, 213.3973f);
			func_224(32.1837f, 6437.21f, 30.2991f, 213.3973f);
			func_224(29.4732f, 6434.526f, 30.3702f, 213.3973f);
			break;
		
		case 25:
			func_224(-377.1927f, 6142.805f, 30.3409f, 315.3965f);
			func_224(-383.3481f, 6136.154f, 30.3752f, 315.3965f);
			func_224(-395.8286f, 6123.635f, 30.2987f, 46.3965f);
			func_224(-389.1636f, 6117.241f, 30.3641f, 46.3965f);
			func_224(-370.6174f, 6129.779f, 30.4414f, 45.7965f);
			func_224(-360.983f, 6130.575f, 30.4401f, 45.7965f);
			func_224(-416.8689f, 6103.411f, 30.3852f, 325.7964f);
			func_224(-420.9229f, 6095.657f, 30.3155f, 334.7964f);
			break;
		
		case 22:
			func_224(45.2181f, 6341.107f, 30.2296f, 14.3964f);
			func_224(41.6057f, 6339.476f, 30.2306f, 14.3964f);
			func_224(39.2508f, 6359.469f, 30.2398f, 207.3965f);
			func_224(36.3203f, 6356.893f, 30.2398f, 207.3965f);
			func_224(51.6043f, 6365.022f, 30.2399f, 33.5965f);
			func_224(65.6465f, 6380.626f, 30.2398f, 212.9964f);
			func_224(24.8587f, 6366.36f, 30.2286f, 32.7965f);
			func_224(19.6254f, 6360.736f, 30.2305f, 32.7965f);
			break;
		
		case 28:
			func_224(94.0245f, 181.2181f, 103.5566f, 160.3953f);
			func_224(91.0039f, 182.2811f, 103.6179f, 160.3953f);
			func_224(68.365f, 148.2105f, 103.5812f, 339.9951f);
			func_224(62.2104f, 150.5185f, 103.6101f, 339.9951f);
			func_224(69.5198f, 186.4278f, 103.9415f, 69.7949f);
			func_224(62.59f, 189.0833f, 103.9981f, 69.7949f);
			func_224(55.6095f, 191.8089f, 104.2827f, 69.7949f);
			func_224(154.7309f, 182.1333f, 104.6903f, 160.1945f);
			break;
		
		case 31:
			func_224(322.4916f, -714.5293f, 28.1574f, 158.5941f);
			func_224(329.5591f, -694.4284f, 28.1656f, 158.5941f);
			func_224(324.565f, -684.3934f, 28.3133f, 247.194f);
			func_224(326.4054f, -679.9403f, 28.3192f, 247.194f);
			func_224(297.1177f, -804.3891f, 28.4859f, 160.594f);
			func_224(288.5461f, -814.6994f, 28.1563f, 163.194f);
			func_224(286.0127f, -821.7357f, 28.3093f, 163.194f);
			func_224(283.6725f, -828.9533f, 28.1247f, 158.994f);
			break;
		
		case 29:
			func_224(-1448.551f, -355.0512f, 43.3715f, 313.3925f);
			func_224(-1454.819f, -359.998f, 42.7885f, 311.3925f);
			func_224(-1462.675f, -360.1352f, 42.9255f, 223.392f);
			func_224(-1447.965f, -368.3028f, 42.5412f, 5.9918f);
			func_224(-1468.678f, -353.4619f, 43.2024f, 217.7916f);
			func_224(-1473.219f, -346.7773f, 43.5318f, 213.9913f);
			func_224(-1490.742f, -420.1957f, 35.9291f, 229.1911f);
			func_224(-1496.003f, -395.7657f, 38.1394f, 45.7909f);
			break;
		
		case 30:
			func_224(-1174.491f, -1381.01f, 3.9253f, 116.5903f);
			func_224(-1183.148f, -1392.559f, 3.6319f, 304.9901f);
			func_224(-1160.964f, -1417.759f, 3.7043f, 65.7899f);
			func_224(-1151.611f, -1411.377f, 3.9411f, 63.5895f);
			func_224(-1167.187f, -1424.07f, 3.4884f, 123.5897f);
			func_224(-1148.22f, -1409.164f, 4.0217f, 63.5895f);
			func_224(-1137.11f, -1372.818f, 3.8993f, 27.5895f);
			func_224(-1140.608f, -1365.747f, 4.0573f, 27.5895f);
			break;
		
		case 27:
			func_224(1414.237f, -1656.344f, 60.2449f, 332.7893f);
			func_224(1416.668f, -1659.933f, 60.6982f, 332.7893f);
			func_224(1419.327f, -1663.972f, 61.2382f, 332.7893f);
			func_224(1421.557f, -1667.367f, 61.7479f, 332.7893f);
			func_224(1423.744f, -1670.853f, 62.3125f, 332.7893f);
			func_224(1412.157f, -1652.746f, 59.9105f, 332.7893f);
			func_224(1426.201f, -1673.598f, 62.7133f, 330.1893f);
			func_224(1435.804f, -1694.73f, 65.0743f, 352.5892f);
			break;
		
		case 33:
			func_224(2810.787f, 4435.92f, 47.5295f, 20.7996f);
			func_224(2808.413f, 4443.922f, 47.3732f, 14.7995f);
			func_224(2806.298f, 4451.786f, 47.1865f, 15.3995f);
			func_224(2803.925f, 4459.858f, 46.9823f, 15.3995f);
			func_224(2801.756f, 4467.755f, 46.8147f, 15.3995f);
			func_224(2893.563f, 4430.258f, 47.338f, 105.9994f);
			func_224(2903.725f, 4425.854f, 47.3523f, 23.1992f);
			func_224(2907.076f, 4418.059f, 47.6301f, 23.1992f);
			break;
		
		case 36:
			func_224(1680.448f, 4821.131f, 41.0599f, 186.399f);
			func_224(1679.76f, 4829.447f, 40.9167f, 186.399f);
			func_224(1678.668f, 4838.03f, 41.0221f, 187.7989f);
			func_224(1677.612f, 4846.028f, 41.0452f, 187.7989f);
			func_224(1675.851f, 4860.434f, 41.0901f, 187.7989f);
			func_224(1674.843f, 4868.343f, 41.0684f, 187.7989f);
			func_224(1673.543f, 4875.752f, 41.0684f, 186.7986f);
			func_224(1672.525f, 4884.972f, 41.0478f, 186.7986f);
			break;
		
		case 34:
			func_224(422.863f, 3583.901f, 32.2386f, 313.5986f);
			func_224(426.6211f, 3583.208f, 32.2386f, 313.5986f);
			func_224(430.466f, 3582.042f, 32.2386f, 313.5986f);
			func_224(434.2751f, 3580.881f, 32.2386f, 313.5986f);
			func_224(438.1525f, 3579.911f, 32.2386f, 313.5986f);
			func_224(442.0173f, 3578.948f, 32.2386f, 313.5986f);
			func_224(420.2694f, 3572.995f, 32.2385f, 353.7984f);
			func_224(424.4825f, 3572.1f, 32.2386f, 348.1984f);
			break;
		
		case 35:
			func_224(627.005f, 2726.019f, 40.7692f, 4.3984f);
			func_224(620.9771f, 2725.759f, 40.7897f, 4.3984f);
			func_224(614.8536f, 2725.355f, 40.8321f, 4.3984f);
			func_224(611.1158f, 2737.387f, 40.9734f, 185.3984f);
			func_224(598.9713f, 2736.261f, 41.0602f, 186.5986f);
			func_224(592.6151f, 2735.886f, 41.0602f, 186.5986f);
			func_224(586.0421f, 2735.9f, 41.0535f, 186.5986f);
			func_224(627.4468f, 2742.742f, 40.8963f, 183.5979f);
			break;
		
		case 32:
			func_224(214.3318f, 2492.26f, 53.9736f, 312.7978f);
			func_224(213.9953f, 2496.666f, 53.8128f, 312.7978f);
			func_224(213.7524f, 2501.251f, 53.5958f, 312.7978f);
			func_224(213.6645f, 2505.908f, 53.3477f, 312.7978f);
			func_224(213.4478f, 2510.734f, 53.1055f, 312.7978f);
			func_224(212.9148f, 2515.268f, 52.9376f, 312.7978f);
			func_224(211.5983f, 2519.216f, 52.6753f, 312.7978f);
			func_224(210.1288f, 2523.187f, 52.3493f, 312.7978f);
			break;
		
		case 38:
			func_224(153.6785f, -2476.192f, 4.9877f, 178.4004f);
			func_224(150.9209f, -2516.979f, 4.9909f, 179.9999f);
			func_224(150.9499f, -2524.965f, 4.9905f, 179.9999f);
			func_224(153.866f, -2467.242f, 4.9877f, 178.4004f);
			func_224(150.8115f, -2533.139f, 4.9895f, 180.0004f);
			func_224(153.8647f, -2433.386f, 5.2336f, 170.2002f);
			func_224(142.7427f, -2536.147f, 5f, 205.0002f);
			func_224(138.8267f, -2535.865f, 5f, 205.0002f);
			break;
		
		case 41:
			func_224(-341.4255f, -2734.451f, 5.0413f, 314.8f);
			func_224(-334.0134f, -2741.43f, 5.0269f, 314.8f);
			func_224(-329.7832f, -2745.604f, 5.0196f, 314.8f);
			func_224(-336.4781f, -2716.139f, 5.0028f, 134.1994f);
			func_224(-334.2752f, -2718.888f, 5.0048f, 135.1992f);
			func_224(-327.6603f, -2725.645f, 5.0103f, 135.1992f);
			func_224(-323.1619f, -2730.345f, 5.0099f, 135.1992f);
			func_224(-316.3481f, -2737.087f, 5.0033f, 135.1992f);
			break;
		
		case 39:
			func_224(-260.5913f, -2615.255f, 5.0502f, 274.5953f);
			func_224(-253.2161f, -2614.896f, 5.0502f, 271.5953f);
			func_224(-245.6569f, -2614.862f, 5.0502f, 271.5953f);
			func_224(-238.214f, -2614.847f, 5.0502f, 271.5953f);
			func_224(-238.013f, -2630.961f, 5.0331f, 271.3949f);
			func_224(-260.9724f, -2631.418f, 5.0355f, 276.9951f);
			func_224(-253.401f, -2631.108f, 5.0319f, 272.195f);
			func_224(-245.5563f, -2631.06f, 5.0323f, 272.195f);
			break;
		
		case 40:
			func_224(653.1188f, -2700.255f, 5.2101f, 24.7971f);
			func_224(656.1305f, -2707.245f, 5.214f, 24.7971f);
			func_224(659.3307f, -2714.378f, 5.2188f, 22.7968f);
			func_224(662.2627f, -2722.228f, 5.2188f, 19.1968f);
			func_224(649.2115f, -2728.359f, 5.1124f, 20.5967f);
			func_224(646.2606f, -2720.833f, 5.1103f, 21.3967f);
			func_224(643.4582f, -2713.846f, 5.1099f, 21.3967f);
			func_224(640.3513f, -2706.571f, 5.108f, 21.3967f);
			break;
		
		case 37:
			func_224(1143.73f, -3105.091f, 4.8989f, 146.1979f);
			func_224(1140.009f, -3104.954f, 4.8985f, 146.1979f);
			func_224(1136.267f, -3104.69f, 4.8969f, 146.1979f);
			func_224(1132.732f, -3104.277f, 4.8944f, 146.1979f);
			func_224(1128.724f, -3104.54f, 4.896f, 146.1979f);
			func_224(1125.106f, -3104.057f, 4.8942f, 146.1979f);
			func_224(1117.8f, -3103.674f, 4.8922f, 146.1979f);
			func_224(1114.015f, -3103.448f, 4.8931f, 146.1979f);
			break;
		
		case 83:
			func_224(-1190.795f, -3371.393f, 12.945f, 348.399f);
			func_224(-1185.634f, -3373.893f, 12.945f, 348.399f);
			func_224(-1114.818f, -3414.185f, 12.945f, 314.199f);
			func_224(-1110.976f, -3416.37f, 12.945f, 314.199f);
			func_224(-1098.621f, -3460.792f, 12.9453f, 329.799f);
			func_224(-1093.31f, -3463.464f, 12.9453f, 329.799f);
			func_224(-1089.433f, -3443.234f, 12.945f, 329.799f);
			func_224(-1084.271f, -3446.31f, 12.945f, 329.799f);
			func_224(-1093.808f, -3452.407f, 12.9451f, 329.799f);
			func_224(-1088.383f, -3455.466f, 12.9451f, 329.799f);
			func_224(-1118.474f, -3411.385f, 12.9451f, 313.199f);
			func_224(-1181.003f, -3375.658f, 12.945f, 346.799f);
			func_224(-1212.071f, -3382.283f, 12.9451f, 328.999f);
			func_224(-1217.708f, -3378.623f, 12.9451f, 328.999f);
			func_224(-1216.986f, -3390.396f, 12.9452f, 328.999f);
			func_224(-1222.566f, -3386.707f, 12.9452f, 328.999f);
			func_224(-1222.06f, -3398.882f, 12.9452f, 328.999f);
			func_224(-1227.698f, -3394.946f, 12.9451f, 328.999f);
			func_224(-1097.517f, -3472.086f, 12.9453f, 328.999f);
			func_224(-1102.951f, -3468.619f, 12.9452f, 328.999f);
			func_224(-1227.253f, -3407.38f, 12.9452f, 328.999f);
			func_224(-1232.836f, -3403.572f, 12.9452f, 328.999f);
			break;
		
		case 84:
			func_224(-1364.879f, -3285.201f, 12.945f, 330.2f);
			func_224(-1359.229f, -3288.52f, 12.945f, 330.2f);
			func_224(-1369.636f, -3293.617f, 12.945f, 330.2f);
			func_224(-1363.881f, -3296.796f, 12.945f, 330.2f);
			func_224(-1432.898f, -3247.702f, 12.945f, 330.2f);
			func_224(-1437.282f, -3255.429f, 12.945f, 330.2f);
			func_224(-1441.623f, -3262.969f, 12.945f, 330.2f);
			func_224(-1443.954f, -3251.006f, 12.945f, 330.2f);
			func_224(-1374.159f, -3301.61f, 12.945f, 330.2f);
			func_224(-1368.508f, -3304.924f, 12.945f, 330.2f);
			func_224(-1359.905f, -3276.118f, 12.9448f, 330.4f);
			func_224(-1354.228f, -3279.63f, 12.9448f, 330.4f);
			func_224(-1406.493f, -3246.223f, 12.9449f, 344.5997f);
			func_224(-1411.058f, -3243.62f, 12.9449f, 344.5997f);
			func_224(-1415.326f, -3241.014f, 12.9449f, 344.5997f);
			func_224(-1419.899f, -3238.116f, 12.9449f, 344.5997f);
			func_224(-1370.986f, -3268.945f, 12.9449f, 322.3996f);
			func_224(-1365.735f, -3272.363f, 12.9449f, 322.3996f);
			func_224(-1373.341f, -3313.206f, 12.9448f, 329.5996f);
			func_224(-1379.091f, -3310.004f, 12.9448f, 330.7996f);
			func_224(-1436.989f, -3228.515f, 12.9449f, 343.9996f);
			func_224(-1444.064f, -3273.751f, 12.945f, 330.7996f);
			break;
		
		case 85:
			func_224(-2060.105f, 3186.159f, 31.81f, 329.599f);
			func_224(-2065.521f, 3189.007f, 31.81f, 150.199f);
			func_224(-2055.006f, 3194.989f, 31.81f, 329.599f);
			func_224(-2060.471f, 3197.816f, 31.81f, 150.199f);
			func_224(-2049.611f, 3204.032f, 31.81f, 329.599f);
			func_224(-2055.048f, 3206.958f, 31.81f, 150.199f);
			func_224(-2049.627f, 3216.253f, 31.81f, 150.199f);
			func_224(-2039.024f, 3222.121f, 31.81f, 329.599f);
			func_224(-2044.17f, 3213.208f, 31.81f, 329.599f);
			func_224(-2044.672f, 3224.638f, 31.81f, 150.199f);
			func_224(-2060.486f, 3165.928f, 31.8103f, 133.9988f);
			func_224(-2055.707f, 3163.053f, 31.8103f, 133.9988f);
			func_224(-2050.911f, 3160.092f, 31.8103f, 133.9988f);
			func_224(-1974.635f, 3137.847f, 31.8103f, 149.5986f);
			func_224(-1970.354f, 3145.22f, 31.8103f, 149.5986f);
			func_224(-1965.709f, 3153.221f, 31.8103f, 149.5986f);
			func_224(-1960.991f, 3161.346f, 31.8103f, 149.5986f);
			func_224(-1983.17f, 3131.33f, 31.8103f, 149.5986f);
			func_224(-1976.614f, 3127.627f, 31.8103f, 149.5986f);
			func_224(-1991.582f, 3127.264f, 31.8103f, 167.7985f);
			func_224(-1995.584f, 3129.369f, 31.8103f, 167.7985f);
			func_224(-1999.335f, 3131.182f, 31.8103f, 167.7985f);
			break;
		
		case 86:
			func_224(-1843.828f, 3085.094f, 31.81f, 165.8f);
			func_224(-1828.571f, 3084.114f, 31.841f, 329.2f);
			func_224(-1823.414f, 3092.762f, 31.843f, 330f);
			func_224(-1819.045f, 3100.435f, 31.845f, 330f);
			func_224(-1833.313f, 3075.722f, 31.838f, 330f);
			func_224(-1847.648f, 3076.8f, 31.835f, 165.8f);
			func_224(-1838.479f, 3078.576f, 31.863f, 150.599f);
			func_224(-1833.605f, 3086.784f, 31.863f, 150.599f);
			func_224(-1828.424f, 3095.617f, 31.863f, 150.599f);
			func_224(-1823.95f, 3102.821f, 31.862f, 150.599f);
			func_224(-1819.284f, 3110.67f, 31.8615f, 150.2f);
			func_224(-1814.545f, 3108.229f, 31.8476f, 330.6f);
			func_224(-1853.939f, 3076.271f, 31.8105f, 176.7996f);
			func_224(-1857.726f, 3078.668f, 31.8105f, 176.7996f);
			func_224(-1861.626f, 3080.777f, 31.8105f, 176.7996f);
			func_224(-1865.584f, 3083.136f, 31.8103f, 176.7996f);
			func_224(-1869.255f, 3085.565f, 31.8103f, 176.7996f);
			func_224(-1913.263f, 3125.342f, 31.8103f, 150.7988f);
			func_224(-1917.546f, 3127.678f, 31.8103f, 150.7988f);
			func_224(-1922.74f, 3130.555f, 31.8103f, 150.7988f);
			func_224(-1927.676f, 3133.413f, 31.8103f, 150.7988f);
			func_224(-1932.418f, 3136.273f, 31.8103f, 150.7988f);
			break;
		
		case 87:
			func_224(-2538.561f, 3303.172f, 31.814f, 296.999f);
			func_224(-2530.309f, 3307.445f, 31.816f, 296.999f);
			func_224(-2521.733f, 3311.833f, 31.817f, 296.999f);
			func_224(-2512.881f, 3316.428f, 31.819f, 296.999f);
			func_224(-2502.952f, 3321.518f, 31.821f, 296.999f);
			func_224(-2542.613f, 3310.728f, 31.814f, 296.999f);
			func_224(-2534.195f, 3314.753f, 31.815f, 296.999f);
			func_224(-2525.635f, 3318.97f, 31.817f, 296.999f);
			func_224(-2516.674f, 3323.545f, 31.819f, 296.999f);
			func_224(-2507.153f, 3328.454f, 31.82f, 296.999f);
			func_224(-2547.689f, 3298.791f, 31.812f, 296.999f);
			func_224(-2551.261f, 3306.304f, 31.8123f, 296.999f);
			func_224(-2497.446f, 3333.296f, 31.821f, 296.999f);
			func_224(-2494.089f, 3326.065f, 31.8218f, 296.999f);
			func_224(-2453.405f, 3255.388f, 31.8276f, 167.1986f);
			func_224(-2449.37f, 3253.417f, 31.8276f, 167.1986f);
			func_224(-2445.49f, 3251.138f, 31.8276f, 167.1986f);
			func_224(-2441.575f, 3248.888f, 31.8276f, 167.1986f);
			func_224(-2437.319f, 3246.554f, 31.8277f, 167.1986f);
			func_224(-2432.723f, 3244.232f, 31.8277f, 167.1986f);
			func_224(-2485.273f, 3330.891f, 31.8239f, 298.1979f);
			func_224(-2488.82f, 3338.365f, 31.8226f, 298.1979f);
			break;
		
		case 89:
			if (Global_1892653[PLAYER::PLAYER_ID() /*615*/].f_10.f_60 == 0)
			{
				func_224(1284.416f, 2890.299f, 45.0276f, 336.3999f);
				func_224(1273.248f, 2901.428f, 45.0426f, 338.3999f);
				func_224(1262.945f, 2911.535f, 43.2959f, 341.9999f);
				func_224(1272.094f, 2873.387f, 45.3443f, 328.5991f);
				func_224(1259.785f, 2892.217f, 45.1126f, 339.9999f);
				func_224(1231.279f, 2910.881f, 43.3085f, 12f);
				func_224(1306.515f, 2839.475f, 46.8947f, 132.3996f);
				func_224(1307.453f, 2825.276f, 45.1566f, 127.1998f);
				func_224(1257.029f, 2872.157f, 45.9766f, 338.5992f);
				func_224(1225.764f, 2930.095f, 41.6173f, 14.7999f);
			}
			else
			{
				func_224(1265.123f, 2836.949f, 47.1021f, 119.9996f);
				func_224(1258.145f, 2831.643f, 46.4503f, 135.7993f);
				func_224(1240.847f, 2828.721f, 46.4388f, 39.5992f);
				func_224(1236.877f, 2835.49f, 46.3491f, 22.9991f);
				func_224(1235.697f, 2843.403f, 46.0231f, 2.7991f);
				func_224(1237.686f, 2850.607f, 45.5261f, 335.5991f);
				func_224(1241.126f, 2858.816f, 45.0176f, 339.7991f);
				func_224(1249.715f, 2810.588f, 47.2648f, 255.1992f);
				func_224(1257.696f, 2808.609f, 47.014f, 266.1992f);
				func_224(1265.577f, 2808.353f, 46.7598f, 277.199f);
				func_224(1273.808f, 2808.484f, 46.3872f, 263.999f);
				func_224(1282.535f, 2807.134f, 45.9705f, 250.7989f);
				func_224(1290.168f, 2803.745f, 45.8005f, 238.7988f);
				func_224(1296.445f, 2798.777f, 46.0903f, 228.9988f);
				func_224(1302.041f, 2792.33f, 45.957f, 221.7987f);
				func_224(1251.389f, 2825.818f, 45.9856f, 119.1982f);
				func_224(1285.48f, 2819.238f, 45.044f, 228.3993f);
				func_224(1293.023f, 2814.164f, 44.8859f, 233.399f);
				func_224(1242.18f, 2814.153f, 47.7108f, 227.3991f);
				func_224(1236.362f, 2819.623f, 47.6845f, 224.399f);
				func_224(1231.532f, 2825.855f, 47.4649f, 210.5992f);
				func_224(1228.177f, 2833.423f, 47.3171f, 197.5993f);
				func_224(1243.095f, 2866.749f, 44.6219f, 353.7992f);
				func_224(1307.346f, 2785.787f, 46.1136f, 219.9997f);
				func_224(1300.752f, 2808.224f, 44.5688f, 228.9997f);
				func_224(1306.571f, 2802.468f, 44.6275f, 224.1992f);
				func_224(1244.465f, 2875.697f, 44.5839f, 353.7992f);
				func_224(1312.441f, 2795.427f, 45.2701f, 218.5991f);
			}
			break;
		
		case 90:
			if (Global_1892653[PLAYER::PLAYER_ID() /*615*/].f_10.f_60 == 0)
			{
				func_224(14.4916f, 2660.726f, 79.0178f, 310.1999f);
				func_224(3.855f, 2672.388f, 78.437f, 319.2f);
				func_224(-7.057f, 2682.247f, 77.472f, 319.2f);
				func_224(-14.041f, 2663.43f, 77.4221f, 319.2f);
				func_224(41.8086f, 2597.059f, 81.3524f, 301.9997f);
				func_224(60.2273f, 2609.745f, 79.5672f, 305.9998f);
				func_224(34.0188f, 2659.723f, 78.9894f, 314.2f);
				func_224(29.4879f, 2675.34f, 76.0202f, 314.2f);
				func_224(19.0088f, 2686.16f, 75.6897f, 314.2f);
				func_224(7.6101f, 2697.113f, 76.2923f, 314.2f);
			}
			else
			{
				func_224(50.6405f, 2633.902f, 79.4503f, 305.1998f);
				func_224(46.2894f, 2639.951f, 79.9122f, 305.1998f);
				func_224(55.3668f, 2627.773f, 79.6363f, 305.1998f);
				func_224(59.9522f, 2620.408f, 80.0499f, 305.1998f);
				func_224(42.1486f, 2646.073f, 80.108f, 305.1998f);
				func_224(68.1481f, 2630.07f, 77.0725f, 305.1998f);
				func_224(62.6048f, 2637.014f, 76.1722f, 305.1998f);
				func_224(57.3543f, 2643.56f, 75.5301f, 305.1998f);
				func_224(52.611f, 2649.698f, 76.1354f, 305.1998f);
				func_224(74.5845f, 2640.475f, 72.602f, 305.1998f);
				func_224(68.5462f, 2646.784f, 71.6298f, 305.1998f);
				func_224(62.426f, 2652.977f, 71.7029f, 305.1998f);
				func_224(79.5597f, 2650.835f, 68.668f, 305.1998f);
				func_224(72.6035f, 2656.857f, 67.3294f, 305.1998f);
				func_224(83.4156f, 2660.237f, 64.3198f, 305.1998f);
				func_224(102.851f, 2688.009f, 51.732f, 224f);
				func_224(109.815f, 2681.012f, 51.112f, 224f);
				func_224(116.355f, 2674.26f, 50.529f, 224f);
				func_224(125.138f, 2665.98f, 49.8f, 224f);
				func_224(132.228f, 2659.865f, 49.26f, 228.4f);
				func_224(139.354f, 2653.536f, 48.737f, 228.4f);
				func_224(88.512f, 2702.995f, 53.042f, 224.199f);
				func_224(81.565f, 2710.357f, 53.67f, 224.199f);
				func_224(75.156f, 2716.981f, 54.223f, 224.199f);
				func_224(68.442f, 2723.806f, 54.775f, 226.199f);
				func_224(61.449f, 2730.606f, 55.308f, 226.199f);
				func_224(53.702f, 2738.167f, 55.855f, 226.199f);
				func_224(91.2443f, 2667.262f, 59.9931f, 314.599f);
			}
			break;
		
		case 91:
			if (Global_1892653[PLAYER::PLAYER_ID() /*615*/].f_10.f_60 == 0)
			{
				func_224(2772.011f, 3889.062f, 42.94f, 145.4f);
				func_224(2785.592f, 3880.409f, 43.695f, 146.199f);
				func_224(2788.387f, 3898.107f, 45.364f, 140.999f);
				func_224(2801.558f, 3912.485f, 44.931f, 131.999f);
				func_224(2805.531f, 3892.253f, 47.01f, 106.399f);
				func_224(2824.791f, 3894.787f, 47.4293f, 105.3989f);
				func_224(2761.739f, 3945.948f, 44.59f, 135.398f);
				func_224(2814.589f, 3930.404f, 44.816f, 134.9978f);
				func_224(2747.627f, 3930.92f, 43.8497f, 138.3978f);
				func_224(2796.312f, 3928.316f, 42.6106f, 134.5979f);
			}
			else
			{
				func_224(2730.174f, 3890.294f, 42.435f, 54.6f);
				func_224(2714.633f, 3918.283f, 42.938f, 16f);
				func_224(2716.533f, 3910.15f, 42.699f, 19.6f);
				func_224(2757.499f, 3874.045f, 42.724f, 64.8f);
				func_224(2747.99f, 3878.676f, 42.561f, 62.8f);
				func_224(2738.337f, 3884.314f, 42.614f, 57.2f);
				func_224(2711.836f, 3926.255f, 42.931f, 21.6f);
				func_224(2707.586f, 3934.558f, 42.984f, 27.6f);
				func_224(2702.361f, 3943.039f, 42.951f, 30.6f);
				func_224(2696.696f, 3951.317f, 43.012f, 34.8f);
				func_224(2766.778f, 3868.911f, 42.822f, 59.8f);
				func_224(2775.397f, 3863.697f, 43.204f, 54.2f);
				func_224(2738.841f, 3869.927f, 42.492f, 242.799f);
				func_224(2746.49f, 3865.861f, 42.808f, 239.599f);
				func_224(2754.829f, 3861.039f, 42.906f, 240.799f);
				func_224(2762.616f, 3856.316f, 42.895f, 240.799f);
				func_224(2770.463f, 3851.383f, 43.216f, 233.199f);
				func_224(2778.129f, 3844.914f, 43.26f, 229.199f);
				func_224(2785.341f, 3837.918f, 43.141f, 224.999f);
				func_224(2730.65f, 3875.186f, 42.437f, 231.999f);
				func_224(2724.14f, 3880.885f, 42.469f, 224.599f);
				func_224(2718.541f, 3887.508f, 42.614f, 217.399f);
				func_224(2783.246f, 3857.409f, 43.175f, 45.199f);
				func_224(2790.716f, 3850.631f, 43.125f, 45.199f);
				func_224(2690.655f, 3959.246f, 43.255f, 40.199f);
				func_224(2797.912f, 3842.523f, 43.166f, 40.199f);
				func_224(2791.836f, 3830.845f, 43.14f, 221.999f);
				func_224(2712.952f, 3894.566f, 42.484f, 14.799f);
			}
			break;
		
		case 92:
			if (Global_1892653[PLAYER::PLAYER_ID() /*615*/].f_10.f_60 == 0)
			{
				func_224(3374.661f, 5559.709f, 12.3726f, 138.7999f);
				func_224(3366.365f, 5569.449f, 13.9704f, 112.8f);
				func_224(3358.493f, 5581.463f, 16.1783f, 112.8f);
				func_224(3356.705f, 5595.363f, 15.4029f, 112.8f);
				func_224(3336.662f, 5552.357f, 19.491f, 249.6f);
				func_224(3336.791f, 5567.825f, 20.432f, 249.6f);
				func_224(3335.259f, 5599.046f, 22.4606f, 249.6f);
				func_224(3336.811f, 5613.029f, 22.2159f, 249.6f);
				func_224(3354.696f, 5609.699f, 15.9453f, 111.3999f);
				func_224(3354.006f, 5624.206f, 16.018f, 111.3999f);
			}
			else
			{
				func_224(3372.053f, 5506.134f, 20.8174f, 99.5999f);
				func_224(3374.923f, 5520.177f, 20.3207f, 86f);
				func_224(3350.643f, 5490.432f, 18.8423f, 139.9997f);
				func_224(3364.189f, 5502.98f, 19.648f, 125.7999f);
				func_224(3354.101f, 5484.773f, 19.619f, 116.399f);
				func_224(3365.919f, 5519.949f, 18.8008f, 102.9988f);
				func_224(3341.889f, 5506.809f, 19.584f, 161.199f);
				func_224(3338.581f, 5497.709f, 19.376f, 161.199f);
				func_224(3335.674f, 5489.348f, 19.542f, 161.199f);
				func_224(3332.019f, 5479.563f, 19.738f, 150.998f);
				func_224(3327.404f, 5470.857f, 19.302f, 159.398f);
				func_224(3323.903f, 5461.49f, 18.492f, 156.398f);
				func_224(3320.016f, 5452.957f, 17.834f, 153.198f);
				func_224(3315.782f, 5444.61f, 17.115f, 150.798f);
				func_224(3335.451f, 5455.723f, 18.2323f, 162.1979f);
				func_224(3338.788f, 5464.803f, 18.8631f, 163.7977f);
				func_224(3362.476f, 5488.211f, 20.4432f, 108.5979f);
				func_224(3371.259f, 5491.274f, 21.5286f, 104.9989f);
				func_224(3342.201f, 5517.014f, 19.642f, 170.199f);
				func_224(3343.267f, 5526.085f, 18.902f, 175.598f);
				func_224(3343.531f, 5536.075f, 18.217f, 178.598f);
				func_224(3357.257f, 5496.71f, 18.9729f, 132.5977f);
				func_224(3342.346f, 5473.345f, 19.1235f, 159.3987f);
				func_224(3347.236f, 5480.447f, 19.4672f, 131.199f);
				func_224(3357.623f, 5516.9f, 16.9016f, 118.7991f);
				func_224(3361.366f, 5545.886f, 15.5532f, 118.7991f);
				func_224(3352.612f, 5541.013f, 16.3238f, 131.999f);
				func_224(3343.349f, 5546.494f, 17.8738f, 173.9988f);
			}
			break;
		
		case 93:
			if (Global_1892653[PLAYER::PLAYER_ID() /*615*/].f_10.f_60 == 0)
			{
				func_224(43.848f, 6845.657f, 13.379f, 247.2f);
				func_224(50.379f, 6861.146f, 15.105f, 247.2f);
				func_224(32.501f, 6871.777f, 13.3283f, 247.2f);
				func_224(38.437f, 6885.796f, 13.3627f, 247.2f);
				func_224(55.806f, 6875.081f, 14.824f, 247.2f);
				func_224(11.616f, 6877.079f, 11.466f, 247.2f);
				func_224(18.954f, 6891.633f, 11.37f, 247.2f);
				func_224(26.68f, 6907.587f, 11.869f, 247.2f);
				func_224(7.479f, 6907.895f, 12.024f, 247.2f);
				func_224(44.9981f, 6901.352f, 11.9426f, 247.2f);
			}
			else
			{
				func_224(35.591f, 6836.608f, 13.288f, 274.4f);
				func_224(36.028f, 6830.135f, 13.801f, 270.8f);
				func_224(35.114f, 6823.884f, 14.527f, 260.8f);
				func_224(48.779f, 6838.693f, 14.337f, 273.6f);
				func_224(56.738f, 6821.8f, 15.244f, 244.8f);
				func_224(48.377f, 6825.895f, 14.656f, 249.8f);
				func_224(49.11f, 6831.439f, 13.991f, 274.8f);
				func_224(53.544f, 6818.275f, 16.342f, 243f);
				func_224(46.162f, 6821.945f, 15.483f, 249.8f);
				func_224(60.129f, 6836.8f, 15.605f, 269.6f);
				func_224(40.88f, 6802.952f, 20.113f, 242.6f);
				func_224(48.203f, 6799.134f, 20.897f, 244.4f);
				func_224(70.449f, 6809.271f, 16.846f, 243f);
				func_224(61.436f, 6814.266f, 16.71f, 244.2f);
				func_224(56.142f, 6793.458f, 19.806f, 242.6f);
				func_224(65.759f, 6791.12f, 18.433f, 276.4f);
				func_224(77.305f, 6805.391f, 18.558f, 245.6f);
				func_224(85.893f, 6800.243f, 18.535f, 249.8f);
				func_224(56.85f, 6780.582f, 18.822f, 297.999f);
				func_224(65.636f, 6784.669f, 18.789f, 293.799f);
				func_224(74.121f, 6788.498f, 18.739f, 293.799f);
				func_224(97.779f, 6796.32f, 19.02f, 276.799f);
				func_224(106.76f, 6796.983f, 18.914f, 272.599f);
				func_224(112.387f, 6802.858f, 18.994f, 210.599f);
				func_224(117.58f, 6802.644f, 18.663f, 209.399f);
				func_224(122.481f, 6802.693f, 18.468f, 209.399f);
				func_224(127.182f, 6802.686f, 18.218f, 209.399f);
				func_224(132.429f, 6801.882f, 17.949f, 209.399f);
			}
			break;
		
		case 94:
			if (Global_1892653[PLAYER::PLAYER_ID() /*615*/].f_10.f_60 == 0)
			{
				func_224(-2213.552f, 2283.726f, 31.7464f, 293.7993f);
				func_224(-2196.71f, 2290.824f, 32.0819f, 293.7993f);
				func_224(-2232.397f, 2274.252f, 31.602f, 296.7993f);
				func_224(-2180.471f, 2296.206f, 32.9612f, 287.5992f);
				func_224(-2180.87f, 2419.649f, 0.2324f, 147.7987f);
				func_224(-2180.166f, 2436.91f, 0.2325f, 144.5987f);
				func_224(-2185.271f, 2457.022f, 0.2062f, 160.1985f);
				func_224(-2329.465f, 2393.603f, 2.5699f, 289.7982f);
				func_224(-2328.978f, 2380.406f, 2.7911f, 289.7982f);
				func_224(-2333.665f, 2366.641f, 3.4939f, 289.7982f);
			}
			else
			{
				func_224(-2239.671f, 2390.292f, 10.756f, 189.2002f);
				func_224(-2217.413f, 2392.471f, 12.2202f, 189.2002f);
				func_224(-2238.863f, 2381.56f, 13.1388f, 185.2003f);
				func_224(-2215.695f, 2383.035f, 14.9809f, 189.4004f);
				func_224(-2238.044f, 2372.67f, 15.07f, 187.4004f);
				func_224(-2215.96f, 2374.251f, 17.0939f, 187.4004f);
				func_224(-2237.494f, 2364.467f, 15.3155f, 186.2004f);
				func_224(-2216.857f, 2365.651f, 18.9029f, 173.0005f);
				func_224(-2218.526f, 2357.065f, 20.7893f, 179.0004f);
				func_224(-2237.625f, 2348.108f, 20.9097f, 179.0004f);
				func_224(-2218.447f, 2348.733f, 22.9621f, 179.0004f);
				func_224(-2238.18f, 2339.141f, 22.5602f, 174.8003f);
				func_224(-2218.771f, 2340.131f, 25.5237f, 177.2002f);
				func_224(-2238.998f, 2330.958f, 25.7263f, 175.8005f);
				func_224(-2219.221f, 2331.934f, 28.5604f, 177.8006f);
				func_224(-2219.077f, 2324.066f, 30.9043f, 198.8006f);
				func_224(-2239.413f, 2322.913f, 28.0647f, 177.8008f);
				func_224(-2240.014f, 2313.951f, 29.5314f, 170.6008f);
				func_224(-2241.543f, 2305.819f, 30.7136f, 163.4006f);
				func_224(-2244.904f, 2298.388f, 31.4166f, 148.2005f);
				func_224(-2249.31f, 2290.892f, 31.5742f, 139.2004f);
				func_224(-2211.896f, 2319.581f, 31.7538f, 259.4002f);
				func_224(-2203.961f, 2320.016f, 31.9895f, 271.4001f);
				func_224(-2255.106f, 2285.415f, 31.617f, 130.3999f);
				func_224(-2196.17f, 2320.341f, 32.2704f, 270.6003f);
				func_224(-2261.335f, 2280.203f, 31.6562f, 130.0002f);
				func_224(-2268.447f, 2275.528f, 31.7095f, 124.4001f);
				func_224(-2188.258f, 2319.985f, 32.5649f, 267.3998f);
			}
			break;
		
		case 95:
			if (Global_1892653[PLAYER::PLAYER_ID() /*615*/].f_10.f_60 == 0)
			{
				func_224(4.0332f, 3378.618f, 41.0822f, 247.1989f);
				func_224(38.819f, 3321.2f, 37.0283f, 203.999f);
				func_224(26.877f, 3309.062f, 37.93f, 191.9991f);
				func_224(15.6727f, 3297.846f, 39.0535f, 191.9991f);
				func_224(-24.2865f, 3367.527f, 41.4783f, 264.399f);
				func_224(-23.1279f, 3352.254f, 40.52f, 280.399f);
				func_224(-25.5802f, 3337.243f, 40.7142f, 320.1988f);
				func_224(97.4844f, 3335.385f, 34.6164f, 7.9981f);
				func_224(20.409f, 3370.839f, 38.8393f, 235.799f);
				func_224(48.457f, 3336.586f, 35.8912f, 270.3979f);
			}
			else
			{
				func_224(25.9869f, 3349.706f, 36.0366f, 273.9994f);
				func_224(25.0176f, 3356.915f, 36.4258f, 276.9998f);
				func_224(36.2443f, 3351.358f, 36.2386f, 272.5997f);
				func_224(35.9352f, 3358.816f, 37.0033f, 276.7998f);
				func_224(25.9651f, 3342.673f, 36.2157f, 270.7997f);
				func_224(30.027f, 3292.351f, 38.604f, 140.199f);
				func_224(49.1614f, 3358.589f, 35.9759f, 263.5988f);
				func_224(48.288f, 3352.494f, 35.5841f, 261.1988f);
				func_224(23.897f, 3283.152f, 39.381f, 145.399f);
				func_224(60.9182f, 3356.21f, 35.8814f, 255.3988f);
				func_224(18.723f, 3274.025f, 40.054f, 155.799f);
				func_224(59.0177f, 3350.004f, 35.3204f, 255.7989f);
				func_224(36.958f, 3298.847f, 38.001f, 127.799f);
				func_224(54.165f, 3311.582f, 36.517f, 303.799f);
				func_224(61.607f, 3317.105f, 35.916f, 306.999f);
				func_224(68.994f, 3323.129f, 35.364f, 308.199f);
				func_224(76.266f, 3329.467f, 34.805f, 311.399f);
				func_224(82.757f, 3335.915f, 34.344f, 316.598f);
				func_224(46.5977f, 3306.196f, 37.1628f, 304.9976f);
				func_224(14.664f, 3263.688f, 40.931f, 160.398f);
				func_224(50.8234f, 3324.118f, 36.2129f, 305.1976f);
				func_224(11.7852f, 3256.101f, 41.7031f, 159.198f);
				func_224(89.575f, 3343.311f, 33.932f, 318.398f);
				func_224(58.4154f, 3329.423f, 35.6197f, 305.5979f);
				func_224(65.3201f, 3334.253f, 35.1903f, 306.5977f);
				func_224(72.1063f, 3339.793f, 34.8449f, 308.5977f);
				func_224(95.6614f, 3349.917f, 33.696f, 316.1977f);
				func_224(85.4387f, 3353.183f, 33.8047f, 317.9978f);
			}
			break;
		
		case 96:
			if (Global_1892653[PLAYER::PLAYER_ID() /*615*/].f_10.f_60 == 0)
			{
				func_224(2135.708f, 1757.503f, 102.073f, 40.999f);
				func_224(2148.674f, 1764.557f, 102.75f, 40.999f);
				func_224(2160.511f, 1771.173f, 104.149f, 40.999f);
				func_224(2172.842f, 1777.391f, 105.369f, 40.999f);
				func_224(2127.938f, 1736.353f, 100.835f, 222.199f);
				func_224(2141.682f, 1739.865f, 99.833f, 222.199f);
				func_224(2152.786f, 1747.776f, 99.785f, 222.199f);
				func_224(2166.356f, 1754.682f, 100.07f, 220.399f);
				func_224(2090.66f, 1701.805f, 101.681f, 243.199f);
				func_224(2066.149f, 1716.735f, 102.112f, 228.2f);
			}
			else
			{
				func_224(2073.044f, 1725.935f, 102.5096f, 225.2f);
				func_224(2077.24f, 1730.299f, 102.5247f, 225.2f);
				func_224(2081.68f, 1734.742f, 102.5588f, 225.2f);
				func_224(2086.052f, 1739.045f, 102.6618f, 225.2f);
				func_224(2090.55f, 1743.53f, 102.6058f, 225.2f);
				func_224(2095.295f, 1748.274f, 102.3022f, 225.2f);
				func_224(2101.779f, 1721.807f, 101.927f, 225.2f);
				func_224(2107.08f, 1727.001f, 101.932f, 225.2f);
				func_224(2095.867f, 1716.475f, 101.925f, 225.2f);
				func_224(2112.387f, 1732.492f, 101.849f, 225.2f);
				func_224(2089.718f, 1710.779f, 101.978f, 225.2f);
				func_224(2111.639f, 1717.132f, 100.855f, 225.2f);
				func_224(2117.297f, 1722.655f, 100.704f, 225.2f);
				func_224(2105.821f, 1711.672f, 101.065f, 225.2f);
				func_224(2098.759f, 1704.866f, 101.209f, 225.2f);
				func_224(2121.208f, 1713.145f, 99.65f, 225.2f);
				func_224(2115.34f, 1707.542f, 99.829f, 225.2f);
				func_224(2109.211f, 1702.247f, 100.079f, 225.2f);
				func_224(2124.167f, 1704.036f, 98.584f, 225.2f);
				func_224(2118.181f, 1698.253f, 98.645f, 225.2f);
				func_224(2127.253f, 1694.878f, 97.078f, 225.2f);
				func_224(2117.786f, 1738.219f, 101.839f, 225.2f);
				func_224(2122.34f, 1728.011f, 100.627f, 225.2f);
				func_224(2126.288f, 1718.542f, 99.501f, 225.2f);
				func_224(2129.762f, 1709.847f, 98.352f, 225.2f);
				func_224(2132.765f, 1700.777f, 96.999f, 225.2f);
				func_224(2120.399f, 1689.165f, 97.388f, 225.2f);
				func_224(2098.994f, 1747.929f, 102.2403f, 225.2f);
			}
			break;
		
		case 97:
			if (Global_1892653[PLAYER::PLAYER_ID() /*615*/].f_10.f_60 == 0)
			{
				func_224(1871.691f, 358.5369f, 162.1067f, 153.1979f);
				func_224(1858.966f, 351.2935f, 161.7614f, 166.598f);
				func_224(1873.611f, 342.6637f, 161.6936f, 142.998f);
				func_224(1887.645f, 343.1557f, 162.1659f, 138.5979f);
				func_224(1888.644f, 328.0839f, 161.7489f, 139.398f);
				func_224(1898.596f, 315.2232f, 161.4418f, 173.7979f);
				func_224(1896.729f, 266.5388f, 161.1619f, 113.5978f);
				func_224(1900.167f, 281.3884f, 161.7807f, 115.197f);
				func_224(1856.286f, 294.624f, 161.442f, 167.9966f);
				func_224(1868.622f, 309.7907f, 162.6084f, 155.1968f);
			}
			else
			{
				func_224(1856.378f, 255.9146f, 162.7158f, 147.6202f);
				func_224(1837.279f, 227.3696f, 165.2592f, 164.3995f);
				func_224(1835.192f, 219.3931f, 167.5468f, 169.9994f);
				func_224(1833.557f, 211.859f, 169.864f, 169.9994f);
				func_224(1839.534f, 194.4053f, 171.3841f, 172.9989f);
				func_224(1838.289f, 185.8157f, 171.2585f, 174.1989f);
				func_224(1837.478f, 177.0607f, 170.7063f, 174.1989f);
				func_224(1840.463f, 202.6959f, 170.8702f, 174.1989f);
				func_224(1836.296f, 168.7307f, 170.5786f, 174.1989f);
				func_224(1835.412f, 159.3162f, 170.4163f, 171.1989f);
				func_224(1826.91f, 214.9648f, 172.2502f, 18.7986f);
				func_224(1823.805f, 223.0288f, 172.0794f, 21.7986f);
				func_224(1820.599f, 231.144f, 172.2987f, 21.7986f);
				func_224(1817.245f, 239.1232f, 172.0878f, 21.7986f);
				func_224(1814.089f, 247.0423f, 171.7386f, 24.9986f);
				func_224(1810.879f, 255.6553f, 171.7517f, 19.3986f);
				func_224(1807.729f, 265.4899f, 172.2307f, 15.1986f);
				func_224(1823.147f, 197.3122f, 172.235f, 192.3984f);
				func_224(1824.641f, 184.4241f, 171.5948f, 183.3985f);
				func_224(1825.019f, 171.2314f, 170.5843f, 183.3985f);
				func_224(1824.748f, 162.8998f, 170.4961f, 173.1985f);
				func_224(1817.345f, 214.6964f, 172.5223f, 203.9982f);
				func_224(1813.466f, 222.3717f, 172.3316f, 200.9982f);
				func_224(1809.114f, 230.8225f, 172.346f, 205.1983f);
				func_224(1805.594f, 239.3896f, 172.0033f, 197.9984f);
				func_224(1802.515f, 247.4269f, 171.8964f, 197.9984f);
				func_224(1833.982f, 150.4025f, 170.411f, 163.7985f);
				func_224(1823.079f, 154.5105f, 170.8194f, 163.7985f);
			}
			break;
		
		case 123:
		case 124:
		case 125:
			func_249(896.357f, -3.23695f, 77.7645f, 147.3987f, iParam1, 0);
			func_249(899.759f, -5.54885f, 77.7645f, 147.3987f, iParam1, 0);
			func_249(903.021f, -7.62495f, 77.7645f, 147.3987f, iParam1, 0);
			func_249(906.474f, -9.70314f, 77.7645f, 147.3987f, iParam1, 0);
			func_249(909.884f, -11.888f, 77.7645f, 147.3987f, iParam1, 0);
			func_249(913.209f, -14.0965f, 77.7645f, 147.3987f, iParam1, 0);
			func_249(879.578f, 7.26725f, 77.7646f, 147.3987f, iParam1, 0);
			func_249(876.642f, 9.05555f, 77.7646f, 147.3987f, iParam1, 0);
			func_249(873.534f, 10.8622f, 77.7646f, 147.3987f, iParam1, 0);
			func_249(869.685f, -7.55887f, 77.7646f, 237.3985f, iParam1, 0);
			func_249(867.866f, -10.464f, 77.7646f, 237.3985f, iParam1, 0);
			func_249(866.077f, -13.4579f, 77.7646f, 237.3985f, iParam1, 0);
			func_249(864.322f, -16.4335f, 77.7646f, 237.3985f, iParam1, 0);
			func_249(862.534f, -19.2652f, 77.7644f, 237.3985f, iParam1, 0);
			func_249(887.524f, -18.7251f, 77.7647f, 237.3985f, iParam1, 0);
			func_249(885.594f, -21.7041f, 77.7647f, 237.3985f, iParam1, 0);
			func_249(883.691f, -24.7685f, 77.7647f, 237.3985f, iParam1, 0);
			func_249(881.827f, -27.7084f, 77.7644f, 237.3985f, iParam1, 0);
			func_249(880.013f, -30.5612f, 77.7644f, 237.3985f, iParam1, 0);
			func_249(884.931f, -17.2169f, 77.7646f, 57.5983f, iParam1, 0);
			func_249(883.043f, -20.1063f, 77.7646f, 57.5983f, iParam1, 0);
			func_249(881.118f, -22.9962f, 77.7644f, 57.5983f, iParam1, 0);
			func_249(879.345f, -25.9389f, 77.7644f, 57.5983f, iParam1, 0);
			func_249(877.631f, -28.8543f, 77.7644f, 57.5983f, iParam1, 0);
			func_249(903.231f, -28.6965f, 77.7647f, 57.5983f, iParam1, 0);
			func_249(901.368f, -31.6316f, 77.7647f, 57.5983f, iParam1, 0);
			func_249(899.552f, -34.4844f, 77.7647f, 57.5983f, iParam1, 0);
			func_249(897.669f, -37.4419f, 77.7647f, 57.5983f, iParam1, 0);
			func_249(895.831f, -40.3309f, 77.7647f, 57.5983f, iParam1, 0);
			func_249(932.842f, -25.6631f, 77.7647f, 147.798f, iParam1, 0);
			func_249(935.693f, -27.516f, 77.7647f, 147.798f, iParam1, 0);
			func_249(938.593f, -29.5809f, 77.7647f, 147.798f, iParam1, 0);
			break;
		
		case 165:
			func_249(-14.562f, -1298.237f, 28.323f, 181.7987f, iParam1, 0);
			func_249(-18.7554f, -1298.321f, 28.3238f, 181.7987f, iParam1, 0);
			func_249(-8.76f, -1306.764f, 28.4274f, 270.5988f, iParam1, 0);
			func_249(-0.9861f, -1306.989f, 29.0661f, 268.5986f, iParam1, 0);
			func_249(7.095f, -1306.788f, 29.081f, 269.7986f, iParam1, 0);
			func_249(15.0002f, -1306.983f, 28.1188f, 269.7986f, iParam1, 0);
			func_249(22.4783f, -1307.613f, 28.2369f, 270.5979f, iParam1, 0);
			func_249(30.1251f, -1307.55f, 28.2089f, 270.5979f, iParam1, 0);
			func_249(-58.9301f, -1319.509f, 28.1072f, 89.1976f, iParam1, 0);
			func_249(-66.4231f, -1319.25f, 28.0882f, 89.1976f, iParam1, 0);
			break;
		
		case 162:
			func_249(-215.8533f, 6310.631f, 30.2933f, 315.3986f, iParam1, 0);
			func_249(-221.6996f, 6304.683f, 30.2887f, 315.3986f, iParam1, 0);
			func_249(-227.5227f, 6298.887f, 30.2886f, 315.3986f, iParam1, 0);
			func_249(-233.4945f, 6293.001f, 30.2907f, 315.3986f, iParam1, 0);
			func_249(-199.5962f, 6321.835f, 30.4171f, 315.3986f, iParam1, 0);
			func_249(-219.9854f, 6323.075f, 30.3012f, 135.3982f, iParam1, 0);
			func_249(-214.4723f, 6328.419f, 30.3033f, 135.3982f, iParam1, 0);
			func_249(-228.3779f, 6314.325f, 30.2951f, 135.3982f, iParam1, 0);
			func_249(-233.6126f, 6309.157f, 30.2805f, 135.3982f, iParam1, 0);
			func_249(-239.0836f, 6303.774f, 30.3162f, 135.3982f, iParam1, 0);
			break;
		
		case 166:
			func_249(1199.392f, -1274.646f, 34.2218f, 264.5996f, iParam1, 0);
			func_249(1199.823f, -1270.842f, 34.2267f, 264.5996f, iParam1, 0);
			func_249(1211.786f, -1273.506f, 34.2265f, 84.7993f, iParam1, 0);
			func_249(1211.396f, -1277.511f, 34.2265f, 84.7993f, iParam1, 0);
			func_249(1198.322f, -1289.711f, 34.2104f, 265.7991f, iParam1, 0);
			func_249(1190.971f, -1289.033f, 33.9762f, 265.7991f, iParam1, 0);
			func_249(1183.631f, -1288.772f, 33.8503f, 265.7991f, iParam1, 0);
			func_249(1212.653f, -1290.968f, 34.2268f, 265.7991f, iParam1, 0);
			func_249(1219.916f, -1291.57f, 34.2231f, 265.7991f, iParam1, 0);
			func_249(1227.248f, -1292.124f, 34.2049f, 214.5982f, iParam1, 0);
			break;
		
		case 164:
			func_249(-513.4792f, -1725.954f, 18.2396f, 233.7993f, iParam1, 0);
			func_249(-502.8869f, -1724.655f, 18.3531f, 191.7995f, iParam1, 0);
			func_249(-500.5194f, -1731.936f, 17.9393f, 202.9996f, iParam1, 0);
			func_249(-519.8862f, -1723.571f, 18.186f, 326.1996f, iParam1, 0);
			func_249(-522.9067f, -1721.466f, 18.2f, 326.1996f, iParam1, 0);
			func_249(-525.8917f, -1719.232f, 18.2055f, 326.1996f, iParam1, 0);
			func_249(-528.915f, -1717.209f, 18.2224f, 326.1996f, iParam1, 0);
			func_249(-532.0991f, -1714.769f, 18.2197f, 326.1996f, iParam1, 0);
			func_249(-541.5544f, -1713.429f, 18.159f, 260.1992f, iParam1, 0);
			func_249(-547.5757f, -1708.499f, 18.0875f, 214.5982f, iParam1, 0);
			break;
		
		case 163:
			func_249(2503.975f, 4105.65f, 37.3197f, 333.9991f, iParam1, 0);
			func_249(2500.563f, 4098.364f, 37.2041f, 333.9991f, iParam1, 0);
			func_249(2496.892f, 4090.868f, 37.0864f, 333.9991f, iParam1, 0);
			func_249(2493.136f, 4083.078f, 36.9669f, 333.9991f, iParam1, 0);
			func_249(2489.554f, 4075.2f, 36.8805f, 333.9991f, iParam1, 0);
			func_249(2491.659f, 4121.725f, 37.1767f, 155.199f, iParam1, 0);
			func_249(2488.214f, 4123.271f, 37.1377f, 155.199f, iParam1, 0);
			func_249(2484.734f, 4124.911f, 37.0531f, 155.199f, iParam1, 0);
			func_249(2484.46f, 4113.972f, 37.0647f, 336.7987f, iParam1, 0);
			func_249(2480.877f, 4115.492f, 37.0647f, 336.7987f, iParam1, 0);
			break;
		
		default:
			break;
	}
}

void func_249(struct<3> Param0, float fParam3, int iParam4, bool bParam5)
{
	struct<2> Var0;
	struct<2> Var3;
	float fVar6;
	struct<3> Var7;
	struct<3> Var10;
	
	if (!iParam4 == 0)
	{
		func_133(iParam4, &Var0, &Var3, 1086324736, 1080033280, 1077936128);
		fVar6 = (Var3.f_1 - Var0.f_1);
		if (bParam5)
		{
			fVar6 = (fVar6 * -1f);
		}
		fVar6 = (fVar6 * 0.5f);
		Var7 = { 0f, fVar6, 0f };
		Var10 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Param0, fParam3, Var7) };
		func_224(Var10, fParam3);
	}
	else
	{
		func_224(Param0, fParam3);
	}
}

void func_250(int iParam0)
{
	switch (iParam0)
	{
		case 83:
			func_224(-1133.454f, -3371.672f, 12.945f, 329.799f);
			func_224(-1119.748f, -3379.991f, 12.945f, 329.799f);
			func_224(-1147.602f, -3363.505f, 12.945f, 329.799f);
			func_224(-1161.988f, -3354.852f, 12.945f, 329.799f);
			func_224(-1116.563f, -3358.99f, 12.945f, 329.799f);
			func_224(-1131.23f, -3350.104f, 12.945f, 329.799f);
			func_224(-1145.252f, -3341.608f, 12.945f, 329.799f);
			func_224(-1115.202f, -3339.265f, 12.945f, 329.799f);
			func_224(-1129.559f, -3330.697f, 12.945f, 329.799f);
			func_224(-1114.664f, -3320.954f, 12.945f, 329.799f);
			func_224(-1199.923f, -3369.502f, 12.945f, 350.399f);
			func_224(-1212.069f, -3363.568f, 12.945f, 350.399f);
			func_224(-1223.637f, -3356.694f, 12.945f, 350.399f);
			func_224(-1102.284f, -3420.613f, 12.945f, 354.599f);
			func_224(-1091.131f, -3427.396f, 12.945f, 354.599f);
			func_224(-1079.372f, -3434.306f, 12.945f, 354.599f);
			func_224(-1067.498f, -3441.878f, 13.114f, 354.599f);
			func_224(-1055.714f, -3448.819f, 12.977f, 354.599f);
			func_224(-1043.37f, -3455.796f, 13.146f, 354.599f);
			func_224(-1017.023f, -3382.777f, 12.8401f, 330.6f);
			func_224(-1010.608f, -3386.103f, 12.8401f, 330.6f);
			func_224(-1004.658f, -3389.823f, 12.8401f, 330.6f);
			func_224(-998.3798f, -3393.644f, 12.8401f, 330.6f);
			func_224(-991.5242f, -3397.297f, 12.8401f, 330.6f);
			func_224(-985.0826f, -3401.247f, 12.8401f, 330.6f);
			func_224(-978.2733f, -3405.031f, 12.8401f, 330.6f);
			func_224(-971.724f, -3409.109f, 12.8401f, 330.6f);
			func_224(-964.4719f, -3413.202f, 13.1463f, 330.6f);
			func_224(-1022.94f, -3392.372f, 12.8401f, 330.6f);
			func_224(-1016.219f, -3395.82f, 12.8401f, 330.6f);
			func_224(-1009.873f, -3399.143f, 12.8401f, 330.6f);
			func_224(-1003.436f, -3402.982f, 12.8401f, 330.6f);
			func_224(-997.0872f, -3406.928f, 12.8401f, 330.6f);
			func_224(-990.2305f, -3410.548f, 12.8401f, 330.6f);
			func_224(-983.4429f, -3414.093f, 12.8401f, 330.6f);
			func_224(-976.8809f, -3417.846f, 12.8401f, 330.6f);
			func_224(-969.4039f, -3421.727f, 13.1463f, 330.6f);
			func_224(-1028.251f, -3401.834f, 12.8401f, 330.6f);
			func_224(-1021.631f, -3405.433f, 12.8401f, 330.6f);
			func_224(-1015.209f, -3408.563f, 12.8401f, 330.6f);
			func_224(-1008.81f, -3412.484f, 12.8401f, 330.6f);
			func_224(-1002.277f, -3415.987f, 12.8401f, 330.6f);
			func_224(-995.7023f, -3419.97f, 12.8401f, 330.6f);
			func_224(-989.1453f, -3423.988f, 12.8401f, 330.6f);
			func_224(-982.6298f, -3427.981f, 12.8401f, 330.6f);
			func_224(-974.9305f, -3431.833f, 13.1463f, 330.6f);
			break;
		
		case 84:
			func_224(-1356.991f, -3242.228f, 12.945f, 330f);
			func_224(-1369.313f, -3234.758f, 12.945f, 330f);
			func_224(-1381.751f, -3227.408f, 12.945f, 330f);
			func_224(-1394.302f, -3220.021f, 12.945f, 330f);
			func_224(-1354.339f, -3223.129f, 12.945f, 330f);
			func_224(-1366.302f, -3215.809f, 12.945f, 330f);
			func_224(-1378.492f, -3208.645f, 12.945f, 330f);
			func_224(-1350.322f, -3203.405f, 12.945f, 330f);
			func_224(-1362.684f, -3196.451f, 12.945f, 330f);
			func_224(-1347.089f, -3182.69f, 12.945f, 330f);
			func_224(-1452.642f, -3222.367f, 12.945f, 347.799f);
			func_224(-1464.229f, -3215.108f, 12.945f, 347.799f);
			func_224(-1476.133f, -3207.652f, 12.945f, 347.799f);
			func_224(-1488.295f, -3200.033f, 12.945f, 347.799f);
			func_224(-1336.877f, -3272.344f, 12.945f, 8.199f);
			func_224(-1323.381f, -3279.614f, 12.945f, 8.199f);
			func_224(-1309.671f, -3287.749f, 12.945f, 8.199f);
			func_224(-1296.963f, -3294.511f, 12.945f, 8.199f);
			func_224(-1501.978f, -3193.849f, 12.945f, 350.599f);
			func_224(-1344.716f, -3288.333f, 12.9445f, 331.2f);
			func_224(-1338.141f, -3290.335f, 12.9445f, 331.2f);
			func_224(-1331.473f, -3294.178f, 12.9445f, 331.2f);
			func_224(-1324.921f, -3297.998f, 12.9445f, 331.2f);
			func_224(-1318.129f, -3301.957f, 12.9445f, 331.2f);
			func_224(-1350.466f, -3294.226f, 12.9445f, 331.2f);
			func_224(-1343.482f, -3297.576f, 12.9445f, 331.2f);
			func_224(-1336.398f, -3302.456f, 12.9445f, 331.2f);
			func_224(-1329.82f, -3306.82f, 12.945f, 331.2f);
			func_224(-1322.761f, -3310.353f, 12.945f, 331.2f);
			func_224(-1316.587f, -3314.556f, 12.945f, 331.2f);
			func_224(-1326.538f, -3318.499f, 12.945f, 331.2f);
			func_224(-1335.74f, -3313.678f, 12.945f, 331.2f);
			func_224(-1350.848f, -3302.619f, 12.9446f, 331.2f);
			func_224(-1357.961f, -3306.886f, 12.945f, 331.2f);
			func_224(-1335.202f, -3322.428f, 12.9452f, 331.2f);
			func_224(-1351.401f, -3311.566f, 12.9452f, 331.2f);
			func_224(-1344.255f, -3305.965f, 12.9451f, 331.2f);
			func_224(-1299.832f, -3305.573f, 12.945f, 331.2f);
			func_224(-1293.414f, -3309.413f, 12.945f, 331.2f);
			func_224(-1286.835f, -3313.157f, 12.945f, 331.2f);
			func_224(-1303.988f, -3313.1f, 12.945f, 331.2f);
			func_224(-1297.402f, -3316.699f, 12.945f, 331.2f);
			func_224(-1290.969f, -3320.519f, 12.945f, 331.2f);
			func_224(-1308.27f, -3320.612f, 12.945f, 331.2f);
			func_224(-1301.968f, -3324.714f, 12.945f, 331.2f);
			func_224(-1295.483f, -3328.422f, 12.945f, 331.2f);
			break;
		
		case 85:
			func_224(-2039.992f, 3132.191f, 31.81f, 149.399f);
			func_224(-2025.075f, 3128.63f, 31.81f, 197.599f);
			func_224(-2049.589f, 3142.464f, 31.81f, 109.199f);
			func_224(-2088.648f, 3081.327f, 31.81f, 150.599f);
			func_224(-2070.669f, 3111.575f, 31.81f, 123.399f);
			func_224(-2053.385f, 3109.703f, 31.81f, 150.599f);
			func_224(-2044.448f, 3094.012f, 31.81f, 181.799f);
			func_224(-2071.825f, 3093.477f, 31.81f, 150.599f);
			func_224(-2060.579f, 3085.924f, 31.81f, 150.599f);
			func_224(-2062.712f, 3066.073f, 31.81f, 150.599f);
			func_224(-2094.385f, 3190.445f, 31.81f, 117.799f);
			func_224(-2083.056f, 3182.885f, 31.81f, 117.799f);
			func_224(-2071.578f, 3175.554f, 31.81f, 117.799f);
			func_224(-2120.249f, 3173.97f, 31.81f, 25.199f);
			func_224(-2067.547f, 3146.325f, 31.81f, 14.998f);
			func_224(-2080.506f, 3154.591f, 31.81f, 15.798f);
			func_224(-2093.278f, 3159.793f, 31.81f, 14.798f);
			func_224(-2106.614f, 3167.605f, 31.81f, 21.198f);
			func_224(-2106.347f, 3196.902f, 31.81f, 117.799f);
			func_224(-2024.425f, 3102.707f, 31.8103f, 150.7997f);
			func_224(-2018.074f, 3099.056f, 31.8103f, 150.7997f);
			func_224(-2009.032f, 3094.171f, 31.8103f, 150.7997f);
			func_224(-2002.923f, 3090.669f, 31.8103f, 150.7997f);
			func_224(-1996.542f, 3087.201f, 31.8103f, 150.7997f);
			func_224(-1990.232f, 3083.534f, 31.8103f, 150.7997f);
			func_224(-1983.518f, 3080.033f, 31.8103f, 150.7997f);
			func_224(-2029.16f, 3094.357f, 31.8103f, 150.7997f);
			func_224(-2022.431f, 3090.703f, 31.8103f, 150.7997f);
			func_224(-2013.702f, 3086.015f, 31.8103f, 150.7997f);
			func_224(-2007.67f, 3082.42f, 31.8103f, 150.7997f);
			func_224(-2001.211f, 3078.569f, 31.8103f, 150.7997f);
			func_224(-1994.644f, 3074.654f, 31.8103f, 150.7997f);
			func_224(-1987.934f, 3070.654f, 31.8103f, 150.7997f);
			func_224(-2033.776f, 3086.031f, 31.8103f, 150.7997f);
			func_224(-2026.929f, 3082.094f, 31.8103f, 150.7997f);
			func_224(-2018.663f, 3077.341f, 31.8103f, 150.7997f);
			func_224(-2012.345f, 3073.707f, 31.8103f, 150.7997f);
			func_224(-2006.052f, 3070.089f, 31.8103f, 150.7997f);
			func_224(-1999.169f, 3066.132f, 31.8103f, 150.7997f);
			func_224(-1992.542f, 3062.257f, 31.8103f, 150.7997f);
			func_224(-2038.545f, 3077.344f, 31.8103f, 150.7997f);
			func_224(-2031.587f, 3073.344f, 31.8103f, 150.7997f);
			func_224(-2021.909f, 3067.715f, 31.8103f, 150.7997f);
			func_224(-2012.886f, 3063.219f, 31.8103f, 150.7997f);
			func_224(-2003.481f, 3057.141f, 31.8103f, 150.7997f);
			func_224(-1996.618f, 3053.195f, 31.8103f, 150.7997f);
			break;
		
		case 86:
			func_224(-1885.187f, 3095.344f, 31.81f, 150.2f);
			func_224(-1898.637f, 3072.816f, 31.811f, 150.2f);
			func_224(-1886.469f, 3065.78f, 31.811f, 150.2f);
			func_224(-1874.621f, 3058.437f, 31.81f, 150.2f);
			func_224(-1862.818f, 3051.244f, 31.81f, 150.2f);
			func_224(-1915.317f, 3041.652f, 31.811f, 150.2f);
			func_224(-1896.724f, 2997.848f, 31.81f, 150.2f);
			func_224(-1932.975f, 3011.781f, 31.81f, 150.2f);
			func_224(-1875.668f, 3034.438f, 31.811f, 150.2f);
			func_224(-1886.144f, 3016.285f, 31.81f, 150.2f);
			func_224(-1913.706f, 3104.196f, 31.81f, 118.599f);
			func_224(-1925.44f, 3112.236f, 31.81f, 118.599f);
			func_224(-1938.08f, 3119.383f, 31.81f, 118.599f);
			func_224(-1927.822f, 3072.679f, 31.81f, 13.399f);
			func_224(-1940.575f, 3079.031f, 31.81f, 13.399f);
			func_224(-1953.344f, 3084.888f, 31.81f, 13.399f);
			func_224(-1965.91f, 3091.929f, 31.81f, 13.399f);
			func_224(-1978.86f, 3100.029f, 31.81f, 13.399f);
			func_224(-1950.928f, 3126.457f, 31.81f, 118.999f);
			func_224(-1975.282f, 3083.046f, 31.8103f, 150.1997f);
			func_224(-1969.362f, 3079.909f, 31.8103f, 150.1997f);
			func_224(-1963.673f, 3076.887f, 31.8103f, 150.1997f);
			func_224(-1958.524f, 3073.899f, 31.8103f, 150.1997f);
			func_224(-1979.828f, 3074.704f, 31.8103f, 150.1997f);
			func_224(-1973.901f, 3071.418f, 31.8103f, 150.1997f);
			func_224(-1967.917f, 3068.089f, 31.8103f, 150.1997f);
			func_224(-1949.916f, 3068.72f, 31.8103f, 150.1997f);
			func_224(-1961.934f, 3064.6f, 31.8103f, 150.1997f);
			func_224(-1984.332f, 3067.03f, 31.8103f, 150.1997f);
			func_224(-1978.182f, 3063.286f, 31.8103f, 150.1997f);
			func_224(-1972.061f, 3060.191f, 31.8103f, 150.1997f);
			func_224(-1952.61f, 3059.551f, 31.8103f, 150.1997f);
			func_224(-1956.958f, 3051.589f, 31.8103f, 150.1997f);
			func_224(-1988.778f, 3059.135f, 31.8103f, 150.1997f);
			func_224(-1982.174f, 3055.591f, 31.8103f, 150.1997f);
			func_224(-1975.579f, 3051.898f, 31.8103f, 150.1997f);
			func_224(-1969.139f, 3048.28f, 31.8103f, 150.1997f);
			func_224(-1962.25f, 3044.256f, 31.8103f, 150.1997f);
			func_224(-1989.48f, 3050.467f, 31.8103f, 150.1997f);
			func_224(-1977.325f, 3043.786f, 31.8103f, 150.1997f);
			func_224(-1971.07f, 3040.306f, 31.8103f, 150.1997f);
			func_224(-1964.409f, 3037.118f, 31.8103f, 150.1997f);
			func_224(-1998.375f, 3042.349f, 31.8103f, 150.1997f);
			func_224(-1991.769f, 3038.47f, 31.8103f, 150.1997f);
			func_224(-1978.718f, 3035.164f, 31.8103f, 150.1997f);
			func_224(-1971.483f, 3031.316f, 31.8103f, 150.1997f);
			break;
		
		case 87:
			func_224(-2484.323f, 3249.294f, 31.828f, 151f);
			func_224(-2495.313f, 3255.746f, 31.828f, 151f);
			func_224(-2472.644f, 3242.684f, 31.828f, 151f);
			func_224(-2506.313f, 3262.27f, 31.823f, 151f);
			func_224(-2461.494f, 3235.93f, 31.828f, 151f);
			func_224(-2505.602f, 3238.049f, 31.828f, 151f);
			func_224(-2481.937f, 3224.8f, 31.828f, 151f);
			func_224(-2516.813f, 3244.266f, 31.823f, 151f);
			func_224(-2470.03f, 3217.899f, 31.828f, 151f);
			func_224(-2493.933f, 3231.308f, 31.828f, 151f);
			func_224(-2443.467f, 3227.753f, 31.828f, 175.8f);
			func_224(-2431.365f, 3220.9f, 31.828f, 175.8f);
			func_224(-2419.883f, 3214.708f, 31.828f, 175.8f);
			func_224(-2501.903f, 3272.865f, 31.822f, 123.999f);
			func_224(-2513.555f, 3280.176f, 31.817f, 123.999f);
			func_224(-2524.776f, 3287.276f, 31.973f, 123.999f);
			func_224(-2407.718f, 3208.055f, 31.827f, 176.199f);
			func_224(-2395.689f, 3201.125f, 31.827f, 176.199f);
			func_224(-2383.498f, 3194.211f, 31.833f, 176.199f);
			func_224(-2426.219f, 3238.211f, 31.8616f, 150.5996f);
			func_224(-2419.052f, 3233.866f, 31.8726f, 150.5996f);
			func_224(-2412.069f, 3229.854f, 31.8859f, 150.5996f);
			func_224(-2405.282f, 3225.809f, 31.8841f, 150.5996f);
			func_224(-2398.624f, 3222.135f, 31.9249f, 150.5996f);
			func_224(-2391.729f, 3218.229f, 31.9354f, 150.5996f);
			func_224(-2384.727f, 3214.524f, 31.9585f, 150.5996f);
			func_224(-2377.55f, 3210.461f, 31.9192f, 150.5996f);
			func_224(-2369.96f, 3205.835f, 31.8267f, 150.5996f);
			func_224(-2404.498f, 3235.728f, 31.8959f, 150.5996f);
			func_224(-2397.481f, 3232.375f, 31.9879f, 150.5996f);
			func_224(-2390.524f, 3228.125f, 31.9758f, 150.5996f);
			func_224(-2383.986f, 3223.995f, 31.986f, 150.5996f);
			func_224(-2377.176f, 3219.695f, 31.9615f, 150.5996f);
			func_224(-2370.524f, 3215.946f, 32.002f, 150.5996f);
			func_224(-2400.23f, 3243.846f, 31.8311f, 150.5996f);
			func_224(-2393.28f, 3240.281f, 32.0164f, 150.5996f);
			func_224(-2386.355f, 3236.819f, 32.0616f, 150.5996f);
			func_224(-2379.382f, 3232.74f, 32.0318f, 150.5996f);
			func_224(-2372.314f, 3229.196f, 32.0177f, 150.5996f);
			func_224(-2365.153f, 3225.732f, 32.0145f, 150.5996f);
			func_224(-2395.04f, 3252.644f, 31.8557f, 150.5996f);
			func_224(-2388.684f, 3249.092f, 32.0198f, 150.5996f);
			func_224(-2382.127f, 3245.045f, 32.0086f, 150.5996f);
			func_224(-2374.905f, 3240.938f, 32.0085f, 150.5996f);
			func_224(-2368.14f, 3237.328f, 32.0177f, 150.5996f);
			func_224(-2361.068f, 3233.396f, 31.9573f, 150.5996f);
			break;
		
		default:
			break;
	}
}

int func_251(int iParam0)
{
	switch (iParam0)
	{
		case joaat("microlight"):
		case joaat("havok"):
		case joaat("seabreeze"):
		case joaat("rogue"):
		case joaat("pyro"):
		case joaat("buzzard"):
		case joaat("frogger"):
		case joaat("maverick"):
		case joaat("supervolito"):
		case joaat("supervolito2"):
		case joaat("volatus"):
		case joaat("cuban800"):
		case joaat("besra"):
		case joaat("duster"):
		case 84351789:
		case joaat("stunt"):
		case joaat("velum"):
		case joaat("velum2"):
		case joaat("vestra"):
		case joaat("lazer"):
		case joaat("alphaz1"):
		case joaat("howard"):
		case joaat("molotok"):
		case joaat("nokota"):
		case joaat("starling"):
		case joaat("conada"):
		case joaat("conada2"):
		case 347619240:
			return 1;
		
		default:
	}
	return 0;
}

void func_252(int iParam0)
{
	switch (iParam0)
	{
		case 83:
		case 84:
			func_224(-947.712f, -3367.704f, 12.944f, 60f);
			func_224(-904.692f, -3293.072f, 12.944f, 60f);
			func_224(-863.71f, -3221.978f, 12.944f, 60f);
			func_224(-966.418f, -3162.773f, 12.944f, 60f);
			func_224(-1007.435f, -3233.93f, 12.944f, 60f);
			func_224(-1050.455f, -3308.559f, 12.944f, 60f);
			func_224(-1145.673f, -3253.456f, 12.944f, 60f);
			func_224(-1098.386f, -3181.428f, 12.944f, 60f);
			func_224(-1060.474f, -3108.903f, 12.944f, 60f);
			func_224(-1155.391f, -3053.632f, 12.944f, 60f);
			func_224(-1196.114f, -3125.146f, 12.948f, 60f);
			func_224(-1235.552f, -3201.86f, 12.944f, 60f);
			func_224(-1344.446f, -3139.177f, 12.944f, 60f);
			func_224(-1301.308f, -3064.341f, 12.944f, 60f);
			func_224(-1260.135f, -2992.912f, 12.944f, 60f);
			func_224(-1364.244f, -2932.9f, 12.98f, 60f);
			func_224(-1405.284f, -3004.108f, 12.96f, 60f);
			func_224(-1448.29f, -3078.72f, 12.95f, 60f);
			func_224(-1535.732f, -3028.318f, 12.945f, 60f);
			func_224(-1492.639f, -2953.558f, 12.945f, 60f);
			func_224(-1451.506f, -2882.2f, 12.944f, 60f);
			func_224(-1553.927f, -2823.12f, 13.002f, 60f);
			func_224(-1595.097f, -2894.571f, 12.944f, 60f);
			func_224(-1637.836f, -2968.714f, 12.945f, 60f);
			func_224(-1740.971f, -2911.484f, 12.944f, 330f);
			func_224(-1696.293f, -2833.978f, 12.944f, 330f);
			func_224(-1651.502f, -2756.273f, 12.945f, 330f);
			func_224(-1588.258f, -2647.575f, 12.944f, 330f);
			func_224(-1536.862f, -2681.378f, 12.945f, 330f);
			func_224(-1529.025f, -2544.485f, 12.944f, 330f);
			break;
		
		case 85:
		case 86:
		case 87:
			func_224(-1970.422f, 2825.696f, 31.81f, 60.4f);
			func_224(-2033.307f, 2855.526f, 31.83f, 60.4f);
			func_224(-2091.018f, 2888.691f, 31.81f, 60.4f);
			func_224(-2206.717f, 2955.363f, 31.81f, 60.4f);
			func_224(-2268.817f, 2990.846f, 31.81f, 60.4f);
			func_224(-2324.039f, 3023.154f, 31.811f, 60.4f);
			func_224(-2435.806f, 3087.705f, 31.824f, 60.4f);
			func_224(-2543.753f, 3149.909f, 31.821f, 60.4f);
			func_224(-1944.848f, 2898.798f, 31.81f, 125.398f);
			func_224(-1978.705f, 2924.367f, 31.846f, 151.999f);
			func_224(-2064.849f, 2955.153f, 31.867f, 151.199f);
			func_224(-2106.165f, 2980.687f, 31.81f, 104.599f);
			func_224(-2302.367f, 3088.676f, 31.814f, 150.598f);
			func_224(-2152.113f, 2924.162f, 31.81f, 60.198f);
			func_224(-2488.232f, 3118.146f, 31.822f, 59.798f);
			func_224(-2277.922f, 3133.756f, 31.811f, 120.598f);
			func_224(-2604.776f, 3185.186f, 31.812f, 59.998f);
			func_224(-2608.107f, 3305.049f, 31.812f, 60.198f);
			func_224(-2718.936f, 3323.203f, 31.81f, 201.198f);
			func_224(-2658.718f, 3216.499f, 31.812f, 59.998f);
			func_224(-2380.372f, 3055.341f, 31.826f, 60.4f);
			func_224(-2790.616f, 3286.24f, 31.812f, 240.397f);
			func_224(-2770.946f, 3322.605f, 31.812f, 240.397f);
			func_224(-2678.805f, 3339.186f, 31.812f, 199.597f);
			func_224(-2743.882f, 3224.094f, 31.81f, 303.397f);
			func_224(-2701.354f, 3203.092f, 31.994f, 328.397f);
			func_224(-2249.816f, 2944.609f, 31.937f, 330.196f);
			func_224(-2586.579f, 3137.286f, 31.935f, 330.196f);
			func_224(-2134.76f, 2878.728f, 31.81f, 330.196f);
			func_224(-1949.075f, 2861.21f, 31.811f, 58.798f);
			break;
		
		default:
			break;
	}
}

int func_253(int iParam0)
{
	switch (iParam0)
	{
		case joaat("hydra"):
		case joaat("dodo"):
		case joaat("mammatus"):
		case joaat("annihilator"):
		case joaat("tula"):
		case joaat("hunter"):
		case joaat("mogul"):
		case joaat("cargobob"):
		case joaat("cargobob2"):
		case -352682313:
		case joaat("shamal"):
		case joaat("savage"):
		case joaat("luxor"):
		case joaat("luxor2"):
		case joaat("nimbus"):
		case joaat("swift"):
		case joaat("swift2"):
		case joaat("valkyrie"):
		case joaat("titan"):
		case joaat("skylift"):
		case joaat("miljet"):
		case joaat("bombushka"):
		case joaat("volatol"):
		case joaat("alkonost"):
		case joaat("streamer216"):
		case joaat("raiju"):
		case 858355070:
			return 1;
		
		default:
	}
	return 0;
}

int func_254(int iParam0)
{
	if (func_255(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_255(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(iParam0, true), -1308.118f, -2934.27f, 13.7545f) < 1000f)
	{
		return 1;
	}
	return 0;
}

int func_256(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(iParam0, true), -2270.245f, 3127.913f, 31.8118f) < 1000f)
	{
		return 1;
	}
	return 0;
}

int func_257(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		switch (iParam0)
		{
			case 91:
			case 92:
			case 93:
			case 94:
			case 95:
			case 96:
			case 97:
			case 98:
			case 99:
			case 100:
			case 101:
			case 102:
				return 1;
				break;
		}
	}
	else if (iParam1 == 91)
	{
		switch (iParam0)
		{
			case 91:
			case 92:
			case 93:
			case 94:
			case 95:
			case 96:
				return 1;
				break;
		}
	}
	else if (iParam1 == 97)
	{
		switch (iParam0)
		{
			case 97:
			case 98:
			case 99:
			case 100:
			case 101:
			case 102:
				return 1;
				break;
			}
	}
	return 0;
}

int func_258(struct<3> Param0, var uParam3, var uParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	int iVar6;
	int iVar7;
	
	iVar2 = 0;
	fVar3 = 50f;
	fVar5 = 300f;
	iVar6 = -1;
	iVar0 = 1;
	while (iVar0 <= 131)
	{
		if (iVar2 < *uParam3)
		{
			iVar1 = 0;
			iVar1 = 0;
			while (iVar1 < 2)
			{
				if (SYSTEM::VDIST(Param0.f_0, Param0.f_1, 0f, Global_1312440[iVar0 /*1951*/].f_3[iVar1 /*3*/], Global_1312440[iVar0 /*1951*/].f_3[iVar1 /*3*/].f_1, 0f) < fVar3)
				{
					(*uParam3)[iVar2] = iVar0;
					(*uParam4)[iVar2] = 0;
					iVar2++;
					iVar1 = 99;
				}
				iVar1++;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 180)
	{
		fVar3 = 50f;
		if (iVar0 >= 83 && iVar0 <= 87)
		{
			if (func_234(iVar0))
			{
				fVar3 = 300f;
			}
			else
			{
				fVar3 = 0f;
			}
		}
		if (iVar0 >= 89 && iVar0 <= 97)
		{
			if (func_260(iVar0))
			{
				fVar3 = 75f;
			}
			else
			{
				fVar3 = 0f;
			}
		}
		if (iVar0 >= 123 && iVar0 <= 125)
		{
			fVar3 = 150f;
		}
		iVar7 = 0;
		if (iVar0 >= 162 && iVar0 <= 166)
		{
			iVar7 = func_259(iVar0, Param0, fVar3, 1);
		}
		if (iVar2 < *uParam3)
		{
			fVar4 = SYSTEM::VDIST(Param0.f_0, Param0.f_1, 0f, Global_1950198.f_781[iVar0 /*3*/], Global_1950198.f_781[iVar0 /*3*/].f_1, 0f);
			if (fVar4 < fVar3 || iVar7)
			{
				if (iVar0 >= 83 && iVar0 <= 87)
				{
					if (fVar4 <= fVar5)
					{
						fVar5 = fVar4;
						if (iVar6 != -1)
						{
							(*uParam3)[iVar6] = iVar0;
						}
						else
						{
							iVar6 = iVar2;
							(*uParam3)[iVar2] = iVar0;
							(*uParam4)[iVar2] = 1;
							iVar2++;
						}
					}
				}
				else
				{
					(*uParam3)[iVar2] = iVar0;
					(*uParam4)[iVar2] = 1;
					iVar2++;
				}
			}
		}
		iVar0++;
	}
	if (iVar2 > 0)
	{
		return 1;
	}
	return 0;
}

int func_259(int iParam0, struct<3> Param1, float fParam4, bool bParam5)
{
	float fVar0;
	
	if (iParam0 == -1 || func_77(iParam0) != 28)
	{
		return 0;
	}
	fVar0 = 0f;
	switch (iParam0)
	{
		case 166:
		case 162:
		case 163:
		case 165:
			fVar0 = SYSTEM::VDIST(Param1.f_0, Param1.f_1, 0f, Global_1950198.f_781[iParam0 /*3*/], Global_1950198.f_781[iParam0 /*3*/].f_1, 0f);
			if (fVar0 < fParam4 && (!bParam5 || (bParam5 && Param1.f_2 >= 0f)))
			{
				return 1;
			}
			break;
		
		case 164:
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param1, -500f, -1664.247f, 18.34956f, -544.0528f, -1720.754f, 28.37445f, 75f, false, true) || OBJECT::IS_POINT_IN_ANGLED_AREA(Param1, -474.9512f, -1681.646f, 17.89098f, -496.4081f, -1762.774f, 27.64551f, 45f, false, true))
			{
				return 1;
			}
			if (!bParam5 && Param1.f_2 <= 0f)
			{
				fVar0 = SYSTEM::VDIST(Param1.f_0, Param1.f_1, 0f, Global_1950198.f_781[iParam0 /*3*/], Global_1950198.f_781[iParam0 /*3*/].f_1, 0f);
			}
			break;
	}
	return 0;
}

int func_260(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_261(iParam0);
	if (Global_1845250[PLAYER::PLAYER_ID() /*880*/].f_260.f_311 == iVar0)
	{
		return 1;
	}
	iVar1 = Global_1892653[PLAYER::PLAYER_ID() /*615*/].f_10;
	if (iVar1 != func_118())
	{
		if (Global_1845250[iVar1 /*880*/].f_260.f_311 == iVar0)
		{
			return 1;
		}
	}
	if (func_244() == iParam0)
	{
		return 1;
	}
	return 0;
}

int func_261(int iParam0)
{
	switch (iParam0)
	{
		case 89:
			return 1;
			break;
		
		case 90:
			return 2;
			break;
		
		case 91:
			return 3;
			break;
		
		case 92:
			return 4;
			break;
		
		case 93:
			return 5;
			break;
		
		case 94:
			return 6;
			break;
		
		case 95:
			return 7;
			break;
		
		case 96:
			return 8;
			break;
		
		case 97:
			return 9;
			break;
	}
	return 0;
}

int func_262(int iParam0)
{
	if ((VEHICLE::IS_THIS_MODEL_A_BIKE(iParam0) || VEHICLE::IS_THIS_MODEL_A_QUADBIKE(iParam0)) || VEHICLE::IS_THIS_MODEL_A_BICYCLE(iParam0))
	{
		return 1;
	}
	return 0;
}

void func_263(int iParam0)
{
	switch (iParam0)
	{
		case 78:
			func_224(-602.6942f, 690.0488f, 148.1567f, 75.0245f);
			func_224(-612.8933f, 692.116f, 148.7577f, 79.1005f);
			func_224(-626.1633f, 694.6517f, 149.6835f, 75.1121f);
			func_224(-639.3558f, 696.9992f, 150.5134f, 77.481f);
			break;
		
		case 79:
			func_224(-763.4828f, 668.4921f, 142.8936f, 236.9954f);
			func_224(-759.3964f, 690.4262f, 143.0253f, 214.9099f);
			func_224(-671.5947f, 646.5754f, 148.3114f, 49.9935f);
			func_224(-668.575f, 668.7567f, 149.4004f, 69.8844f);
			break;
		
		case 82:
			func_224(382.9244f, 443.8122f, 142.9934f, 78.3408f);
			func_224(391.2023f, 442.4812f, 142.5089f, 82.2125f);
			func_224(400.1477f, 441.0816f, 142.0776f, 83.4259f);
			func_224(414.2964f, 439.2628f, 141.5056f, 80.8689f);
			break;
		
		case 81:
			func_224(-1294.64f, 468.1975f, 96.4245f, 141.8551f);
			func_224(-1300.508f, 468.0167f, 96.8298f, 139.6287f);
			func_224(-1283.894f, 467.2136f, 95.4036f, 95.058f);
			func_224(-1273.584f, 454.4406f, 94.2269f, 30.8724f);
			break;
		
		case 73:
			func_224(-209.2598f, 509.0326f, 130.7979f, 97.2043f);
			func_224(-221.7214f, 507.2553f, 128.5651f, 92.2773f);
			func_224(-237.2848f, 506.8763f, 125.8112f, 85.9315f);
			func_224(-255.5678f, 507.9559f, 122.3364f, 85.1752f);
			break;
		
		case 75:
			func_224(-763.4828f, 668.4921f, 142.8936f, 236.9954f);
			func_224(-759.3964f, 690.4262f, 143.0253f, 214.9099f);
			func_224(-671.5947f, 646.5754f, 148.3114f, 49.9935f);
			func_224(-668.575f, 668.7567f, 149.4004f, 69.8844f);
			break;
		
		case 76:
			func_224(-668.575f, 668.7567f, 149.4004f, 69.8844f);
			func_224(-671.5947f, 646.5754f, 148.3114f, 49.9935f);
			func_224(-759.3964f, 690.4262f, 143.0253f, 214.9099f);
			func_224(-763.4828f, 668.4921f, 142.8936f, 236.9954f);
			break;
		
		case 77:
			func_224(128.4334f, 578.7522f, 182.2934f, 106.5458f);
			func_224(97.7791f, 576.8907f, 181.5599f, 91.3539f);
			func_224(83.5896f, 576.4791f, 181.0832f, 89.7262f);
			func_224(69.9599f, 575.9902f, 180.5019f, 91.4926f);
			break;
		
		case 80:
			func_224(-872.1293f, 698.7591f, 148.5084f, 339.673f);
			func_224(-916.5449f, 695.5253f, 150.5625f, 272.7097f);
			func_224(-907.3458f, 695.8158f, 150.396f, 270.6491f);
			func_224(-923.6974f, 691.4489f, 150.9506f, 357.4356f);
			break;
		
		case 87:
			if (func_264())
			{
				func_224(-1608.297f, -556.875f, 33.406f, 310f);
				func_224(-1616.095f, -563.402f, 33.049f, 309.4f);
				func_224(-1560.29f, -531.69f, 34.576f, 35.3994f);
				func_224(-1555.303f, -538.781f, 34.044f, 35.3994f);
			}
			else
			{
				func_224(-1605.148f, -552.5016f, 33.4606f, 309.4211f);
				func_224(-1616.306f, -561.6959f, 32.9867f, 309.4369f);
				func_224(-1582.681f, -534.1682f, 34.4171f, 307.8589f);
				func_224(-1619.657f, -531.5862f, 33.4254f, 128.9132f);
				func_224(-1560.257f, -532.3268f, 34.5436f, 216.0882f);
				func_224(-1553.698f, -541.3412f, 33.8662f, 215.8465f);
				func_224(-1611.769f, -601.588f, 31.2908f, 50.7362f);
				func_224(-1600.63f, -610.1141f, 30.5087f, 51.7297f);
			}
			break;
		
		case 88:
			if (func_264())
			{
				func_224(-1402.362f, -511.396f, 30.888f, 35.4f);
				func_224(-1356.617f, -531.0343f, 29.7588f, 124.9982f);
				func_224(-1407.634f, -503.839f, 31.35f, 35.4f);
				func_224(-1346.007f, -523.3546f, 30.6339f, 125.9976f);
			}
			else
			{
				func_224(-1390.604f, -528.6405f, 29.8387f, 35.4572f);
				func_224(-1357.085f, -531.4611f, 29.7218f, 125.0906f);
				func_224(-1346.236f, -523.9114f, 30.6f, 124.7302f);
				func_224(-1337.852f, -518.1096f, 31.2329f, 124.6998f);
				func_224(-1336.39f, -556.0637f, 29.7514f, 33.8088f);
				func_224(-1340.214f, -508.9828f, 31.4089f, 98.7714f);
				func_224(-1348.607f, -510.3536f, 30.9263f, 99.2425f);
				func_224(-1380.764f, -536.3867f, 29.3128f, 63.6203f);
			}
			break;
		
		case 89:
			if (func_264())
			{
				func_224(-102.737f, -597.379f, 35.053f, 160.999f);
				func_224(-97.793f, -589.568f, 35.082f, 134.799f);
				func_224(-110.357f, -619.402f, 35.055f, 160.599f);
				func_224(-112.561f, -627.723f, 35.046f, 165.399f);
			}
			else
			{
				func_224(-108.2604f, -613.6386f, 35.055f, 160.8063f);
				func_224(-103.0375f, -598.4797f, 35.0538f, 161.1968f);
				func_224(-112.84f, -629.6357f, 35.0662f, 174.9843f);
				func_224(-98.7403f, -590.3209f, 35.075f, 139.7632f);
				func_224(-98.3748f, -612.642f, 35.137f, 161.1124f);
				func_224(-92.595f, -595.4065f, 35.1888f, 161.3083f);
				func_224(-104.4742f, -630.1472f, 35.1396f, 161.184f);
				func_224(-74.1068f, -619.9417f, 35.1488f, 340.9123f);
			}
			break;
		
		case 90:
			if (func_264())
			{
				func_224(-59.349f, -779.238f, 43.134f, 228.398f);
				func_224(-41.6311f, -789.1425f, 43.1323f, 255.5993f);
				func_224(-65.212f, -772.66f, 43.151f, 219.398f);
				func_224(-33.0648f, -789.3544f, 43.1287f, 279.5989f);
			}
			else
			{
				func_224(-59.684f, -779.4568f, 43.114f, 228.7591f);
				func_224(-52.7425f, -784.7151f, 43.1134f, 237.7756f);
				func_224(-45.2736f, -788.4313f, 43.1133f, 250.2438f);
				func_224(-35.9308f, -789.8549f, 43.1167f, 271.1923f);
				func_224(-64.6911f, -762.4548f, 43.1316f, 35.6897f);
				func_224(-24.9853f, -786.8022f, 43.1163f, 297.8276f);
				func_224(-86.2083f, -739.3044f, 43.0546f, 204.9405f);
				func_224(-9.239f, -773.0505f, 43.0788f, 318.0367f);
			}
			break;
		
		case 91:
			func_224(246.5035f, -1798.749f, 26.1131f, 212.5996f);
			func_224(247.8968f, -1797.017f, 26.1131f, 212.5996f);
			func_224(249.3848f, -1795.374f, 26.1131f, 212.5996f);
			func_224(250.8498f, -1793.695f, 26.1131f, 212.5996f);
			func_224(262.9285f, -1784.205f, 26.1131f, 164.5991f);
			func_224(266.8129f, -1787.476f, 26.1131f, 164.5991f);
			func_224(264.814f, -1785.801f, 26.1131f, 164.5991f);
			func_224(269.0069f, -1789.16f, 26.1131f, 164.5991f);
			break;
		
		case 92:
			func_224(-1464.5f, -927.9f, 9f, 296.7991f);
			func_224(-1466f, -926.1f, 9f, 296.7991f);
			func_224(-1467.9f, -924.7f, 9f, 296.7991f);
			func_224(-1469.7f, -923.7f, 9f, 296.7991f);
			func_224(-1462.481f, -931.2933f, 9.1294f, 296.5982f);
			func_224(-1460.639f, -932.9284f, 9.1315f, 296.5982f);
			func_224(-1454.923f, -931.1019f, 9.0872f, 237.1973f);
			func_224(-1450.848f, -934.5874f, 8.4514f, 237.1973f);
			break;
		
		case 93:
			func_224(30.0784f, -1024.16f, 28.4469f, 234.5994f);
			func_224(29.1695f, -1026.719f, 28.4453f, 234.5994f);
			func_224(28.2538f, -1029.296f, 28.4421f, 234.5994f);
			func_224(27.3737f, -1031.767f, 28.3937f, 234.5994f);
			func_224(32.6932f, -1017.063f, 28.4531f, 234.5994f);
			func_224(33.672f, -1014.399f, 28.4552f, 234.5994f);
			func_224(37.488f, -1014.344f, 28.4781f, 175.5986f);
			func_224(39.4909f, -1015.097f, 28.484f, 175.5986f);
			break;
		
		case 94:
			func_224(45.0033f, 2784.392f, 56.8782f, 103.5999f);
			func_224(43.316f, 2785.903f, 56.8782f, 103.5999f);
			func_224(41.6126f, 2787.36f, 56.8782f, 103.5999f);
			func_224(39.9584f, 2788.773f, 56.8782f, 103.5999f);
			func_224(35.2347f, 2792.135f, 56.8781f, 208.7997f);
			func_224(33.7771f, 2790.379f, 56.8781f, 208.7997f);
			func_224(30.7578f, 2786.8f, 56.8781f, 208.7997f);
			func_224(29.3121f, 2785.045f, 56.8745f, 208.7997f);
			break;
		
		case 95:
			func_224(-332.5679f, 6069.145f, 30.2175f, 152.9999f);
			func_224(-334.2811f, 6070.787f, 30.2212f, 152.9999f);
			func_224(-335.9948f, 6072.454f, 30.2455f, 152.9999f);
			func_224(-337.675f, 6074.252f, 30.2727f, 152.9999f);
			func_224(-339.3682f, 6075.904f, 30.3074f, 152.9999f);
			func_224(-341.0913f, 6077.729f, 30.3114f, 152.9999f);
			func_224(-342.9239f, 6079.522f, 30.3122f, 152.9999f);
			func_224(-344.6985f, 6081.302f, 30.3097f, 152.9999f);
			break;
		
		case 96:
			func_224(1738.422f, 3716.779f, 33.0787f, 6.9999f);
			func_224(1736.207f, 3715.989f, 33.094f, 6.9999f);
			func_224(1748.442f, 3714.17f, 33.0889f, 39.399f);
			func_224(1750.475f, 3715.007f, 33.1067f, 39.399f);
			func_224(1747.18f, 3721.102f, 33.007f, 95.199f);
			func_224(1746.413f, 3723.255f, 32.9738f, 95.199f);
			func_224(1740.67f, 3717.613f, 33.0616f, 8.199f);
			func_224(1733.937f, 3715.08f, 33.1236f, 8.199f);
			break;
		
		case 97:
			func_224(947.9371f, -1452.737f, 30.143f, 331.5991f);
			func_224(950.2141f, -1452.826f, 30.1364f, 331.5991f);
			func_224(952.4588f, -1452.882f, 30.129f, 331.5991f);
			func_224(954.6608f, -1452.869f, 30.1303f, 331.5991f);
			func_224(935.1006f, -1452.701f, 30.1907f, 316.999f);
			func_224(932.5459f, -1452.579f, 30.2194f, 316.999f);
			func_224(929.9319f, -1452.567f, 30.2647f, 316.999f);
			func_224(927.4857f, -1452.446f, 30.3167f, 316.999f);
			break;
		
		case 98:
			func_224(186.6051f, 306.8702f, 104.389f, 162.3999f);
			func_224(184.3881f, 306.7666f, 104.3845f, 162.3999f);
			func_224(182.1681f, 306.6823f, 104.375f, 162.3999f);
			func_224(183.3219f, 296.2871f, 104.3707f, 350.7995f);
			func_224(180.9933f, 296.3411f, 104.3704f, 350.7995f);
			func_224(178.6569f, 296.4709f, 104.3701f, 350.7995f);
			func_224(195.1475f, 304.4284f, 104.4644f, 77.3989f);
			func_224(195.0814f, 301.8218f, 104.5287f, 77.3989f);
			break;
		
		case 99:
			func_224(-31.2801f, -200.3394f, 51.3551f, 5.3995f);
			func_224(-33.3895f, -199.7716f, 51.355f, 5.3995f);
			func_224(-35.4307f, -199.1125f, 51.3549f, 5.3995f);
			func_224(-37.5545f, -198.5244f, 51.3549f, 5.3995f);
			func_224(-17.9628f, -206.2525f, 51.3702f, 29.399f);
			func_224(-14.8043f, -207.5648f, 51.4707f, 29.399f);
			func_224(-11.8482f, -208.6405f, 51.5633f, 29.399f);
			func_224(-9.1304f, -209.4894f, 51.6472f, 29.399f);
			break;
		
		case 100:
			func_224(2478.52f, 4082.137f, 36.8208f, 227.5999f);
			func_224(2477.557f, 4079.946f, 36.8014f, 227.5999f);
			func_224(2465.123f, 4081.35f, 37.0655f, 167.4f);
			func_224(2463.017f, 4082.271f, 37.0653f, 167.4f);
			func_224(2467.7f, 4080.332f, 37.0649f, 167.4f);
			func_224(2469.587f, 4079.538f, 37.061f, 167.4f);
			func_224(2481.354f, 4088.553f, 36.9131f, 209.4f);
			func_224(2482.442f, 4091.023f, 36.9472f, 209.4f);
			break;
		
		case 101:
			func_224(-32.1085f, 6407.398f, 30.4903f, 291.1999f);
			func_224(-29.4917f, 6404.578f, 30.4903f, 291.1999f);
			func_224(-26.4319f, 6401.523f, 30.4903f, 291.1999f);
			func_224(-23.3427f, 6398.638f, 30.4903f, 291.1999f);
			func_224(-20.7035f, 6395.76f, 30.4885f, 291.1999f);
			func_224(-23.7283f, 6412.838f, 30.4904f, 176.5999f);
			func_224(-20.5405f, 6409.805f, 30.4905f, 176.5999f);
			func_224(-17.3045f, 6406.66f, 30.4904f, 176.5999f);
			break;
		
		case 102:
			func_224(-1138.057f, -1572.18f, 3.4157f, 125.9996f);
			func_224(-1142.03f, -1574.983f, 3.4133f, 125.9996f);
			func_224(-1145.05f, -1592.81f, 3.3855f, 306.5991f);
			func_224(-1139.933f, -1589.211f, 3.3978f, 306.5991f);
			func_224(-1124.295f, -1578.776f, 3.3854f, 306.5991f);
			func_224(-1119.954f, -1575.551f, 3.3852f, 306.5991f);
			func_224(-1124.942f, -1562.985f, 3.2916f, 168.9988f);
			func_224(-1127.039f, -1564.395f, 3.292f, 168.9988f);
			break;
		
		default:
			break;
	}
}

bool func_264()
{
	return Global_2685150.f_17;
}

int func_265(struct<3> Param0)
{
	int iVar0;
	
	if (SYSTEM::VDIST(Global_2635562.f_3214, Param0) < Global_2635562.f_3222)
	{
		return Global_2635562.f_3217;
	}
	Global_2635562.f_3214 = { Param0 };
	iVar0 = 0;
	while (iVar0 < 33)
	{
		if (Param0.f_2 <= 0f)
		{
			Param0.f_2 = ((Global_2643429[iVar0 /*7*/].f_2 + Global_2643429[iVar0 /*7*/].f_3.f_2) * 0.5f);
		}
		if (func_187(Param0, &(Global_2643429[iVar0 /*7*/])))
		{
			Global_2635562.f_3217 = iVar0;
			return iVar0;
		}
		iVar0++;
	}
	Global_2635562.f_3217 = -1;
	return -1;
}

int func_266()
{
	if (BitTest(Global_4718592.f_14, 0) && !Global_2686090.f_6619)
	{
		return 0;
	}
	return 0;
}

int func_267(struct<2> Param0, var uParam2, bool bParam3, float fParam4)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	iVar3 = 0;
	iVar0 = 83;
	while (iVar0 <= 84 + 1)
	{
		if (bParam3)
		{
			if (func_234(iVar0))
			{
				fVar1 = fParam4;
			}
			else
			{
				fVar1 = 0f;
			}
		}
		else
		{
			fVar1 = fParam4;
		}
		fVar2 = SYSTEM::VDIST(Param0.f_0, Param0.f_1, 0f, Global_1950198.f_781[iVar0 /*3*/], Global_1950198.f_781[iVar0 /*3*/].f_1, 0f);
		if (fVar2 < fVar1)
		{
			iVar3++;
		}
		iVar0++;
	}
	if (iVar3 > 0)
	{
		return 1;
	}
	return 0;
}

void func_268()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 30)
	{
		Global_2635562.f_3038[iVar0 /*3*/] = { 0f, 0f, 0f };
		iVar0++;
	}
}

int func_269(var uParam0, bool bParam1)
{
	int iVar0;
	struct<3> Var1;
	
	Var1 = { *uParam0 };
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (Var1.f_2 <= 0f)
		{
			Var1.f_2 = ((Global_2643385[iVar0 /*7*/].f_2 + Global_2643385[iVar0 /*7*/].f_3.f_2) * 0.5f);
		}
		if (func_187(Var1, &(Global_2643385[iVar0 /*7*/])))
		{
			if (bParam1)
			{
				func_198(&Var1, Global_2643385[iVar0 /*7*/], Global_2643385[iVar0 /*7*/].f_3, Global_2643385[iVar0 /*7*/].f_6, 1036831949, 0);
				*uParam0 = { Var1 };
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_270(struct<3> Param0)
{
	int iVar0;
	struct<3> Var1;
	
	if (!Global_2635562.f_516 && !Global_2635562.f_517)
	{
		if (!Global_2635562.f_45.f_318)
		{
			if (!func_274(PLAYER::PLAYER_ID(), 1))
			{
				return 1;
			}
			if (!func_273(Param0, 1008981770))
			{
				if (!func_204(&Param0, 0, 0, 0, 1))
				{
					return 1;
				}
				else if (func_204(&Param0, 0, 1, 0, 1))
				{
					return 1;
				}
			}
			else
			{
				iVar0 = func_272(Param0, 1008981770);
				if (iVar0 > -1)
				{
					Var1 = { func_271(&(Global_2635562.f_45[iVar0 /*12*/])) };
					if (!func_204(&Var1, 0, 0, 0, 1))
					{
						if (!func_204(&Param0, 0, 0, 0, 1))
						{
							return 1;
						}
					}
				}
			}
		}
	}
	return 0;
}

Vector3 func_271(var uParam0)
{
	switch (uParam0->f_10)
	{
		case 0:
			return *uParam0;
			break;
		
		case 1:
		case 2:
			return *uParam0 + uParam0->f_3 * Vector(0.5f, 0.5f, 0.5f);
			break;
	}
	return *uParam0;
}

int func_272(struct<3> Param0, float fParam3)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2635562.f_45[iVar0 /*12*/].f_9)
		{
			if (func_191(Param0, &(Global_2635562.f_45[iVar0 /*12*/]), fParam3, 0, 0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_273(struct<3> Param0, float fParam3)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2635562.f_45[iVar0 /*12*/].f_9)
		{
			if (func_191(Param0, &(Global_2635562.f_45[iVar0 /*12*/]), fParam3, 0, 0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_274(int iParam0, bool bParam1)
{
	if (func_45() != 0)
	{
		return func_275(iParam0) != 0;
	}
	return func_169(iParam0, bParam1, 0);
}

int func_275(int iParam0)
{
	if (func_357(iParam0, 0, 1))
	{
		return Global_2658291[iParam0 /*468*/].f_1;
	}
	return 0;
}

int func_276(bool bParam0)
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

void func_277()
{
	int iVar0;
	struct<4> Var1;
	
	iVar0 = 0;
	while (iVar0 < 101)
	{
		Global_2635562.f_2056[iVar0 /*4*/] = { Var1 };
		iVar0++;
	}
	Global_2635562.f_2055 = 0;
}

void func_278()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (SCRIPT::IS_THREAD_ACTIVE(Global_2635562.f_692[iVar0]))
		{
			if (SCRIPT::GET_ID_OF_THIS_THREAD() == Global_2635562.f_692[iVar0])
			{
				if (!Global_2635562.f_688[iVar0] == -1)
				{
					if (NETWORK::NETWORK_ENTITY_AREA_DOES_EXIST(Global_2635562.f_688[iVar0]))
					{
						NETWORK::NETWORK_REMOVE_ENTITY_AREA(Global_2635562.f_688[iVar0]);
						Global_2635562.f_688[iVar0] = -1;
					}
					else
					{
						Global_2635562.f_688[iVar0] = -1;
					}
				}
			}
		}
		else if (!Global_2635562.f_688[iVar0] == -1)
		{
			Global_2635562.f_688[iVar0] = -1;
		}
		iVar0++;
	}
}

int func_279()
{
	if (Global_2635562.f_681 == MISC::GET_FRAME_COUNT())
	{
		return 1;
	}
	if (!BitTest(Global_2638816, 0) && Global_2635562.f_681 == (MISC::GET_FRAME_COUNT() - 1))
	{
		return 1;
	}
	return 0;
}

int func_280()
{
	if (!Global_2635562.f_607 == 0 && NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2635562.f_612) < func_276(0))
	{
		return 1;
	}
	return 0;
}

int func_281()
{
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		if (!STREAMING::GET_PLAYER_SWITCH_STATE() > 7 && !STREAMING::GET_PLAYER_SWITCH_STATE() == 5)
		{
			return 0;
		}
	}
	if (Global_2635562.f_518 == MISC::GET_FRAME_COUNT())
	{
		return 0;
	}
	if (!func_282(PLAYER::PLAYER_ID()) && !func_217(0))
	{
		return 0;
	}
	return 1;
}

int func_282(int iParam0)
{
	if (!func_37(iParam0))
	{
		return 0;
	}
	return BitTest(Global_2673271.f_1, iParam0);
}

float func_283()
{
	return 10f;
}

Vector3 func_284(int iParam0)
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), false);
}

void func_285(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return;
	}
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::SET_BIT(&(Local_96.f_2[iVar0]), iVar1);
}

void func_286(int iParam0)
{
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return;
	}
	Local_96.f_5 = iParam0;
}

void func_287()
{
	if (func_21() > 0)
	{
		func_318();
		func_311();
		func_303();
		func_290();
	}
	if (func_289(NETWORK::PARTICIPANT_ID()) != 3 && func_21() == 3)
	{
		func_288(3);
	}
	switch (func_289(NETWORK::PARTICIPANT_ID()))
	{
		case 0:
			if (func_21() > 0)
			{
				func_288(2);
			}
			break;
		
		case 2:
			break;
		
		case 3:
			break;
	}
}

void func_288(int iParam0)
{
	Local_104[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_1 = iParam0;
}

int func_289(int iParam0)
{
	return Local_104[iParam0 /*4*/].f_1;
}

void func_290()
{
	if (!func_300())
	{
		return;
	}
	if (func_296())
	{
		if (!func_295(PLAYER::PLAYER_ID()))
		{
			func_293();
		}
	}
	else if (func_295(PLAYER::PLAYER_ID()))
	{
		func_291();
	}
}

void func_291()
{
	func_292(11);
}

void func_292(int iParam0)
{
	MISC::CLEAR_BIT(&(Global_1892653[PLAYER::PLAYER_ID() /*615*/].f_10.f_6), iParam0);
}

void func_293()
{
	func_294(11);
}

void func_294(bool bParam0)
{
	MISC::SET_BIT(&(Global_1892653[PLAYER::PLAYER_ID() /*615*/].f_10.f_6), iParam0);
}

bool func_295(int iParam0)
{
	return func_6(iParam0, 11);
}

int func_296()
{
	if (func_5(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (!func_7())
	{
		return 0;
	}
	if (func_299() != 0)
	{
		func_298(0);
	}
	if (func_297(NETWORK::PARTICIPANT_ID(), 1))
	{
		if (func_299() == 0)
		{
			func_298(1);
		}
		return 0;
	}
	if (func_11(2))
	{
		return 0;
	}
	return 1;
}

bool func_297(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam1 / 32);
	iVar1 = (iParam1 % 32);
	return BitTest(Local_104[iParam0 /*4*/].f_2[iVar0], iVar1);
}

void func_298(int iParam0)
{
	Global_1892653[PLAYER::PLAYER_ID() /*615*/].f_10.f_307 = iParam0;
}

int func_299()
{
	return Global_1892653[PLAYER::PLAYER_ID() /*615*/].f_10.f_307;
}

int func_300()
{
	if (!func_301())
	{
		return 0;
	}
	return 1;
}

bool func_301()
{
	return func_302(PLAYER::PLAYER_ID());
}

var func_302(int iParam0)
{
	return func_6(iParam0, 9);
}

void func_303()
{
	if (!func_310())
	{
		return;
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && func_309(PLAYER::PLAYER_PED_ID(), func_17(), 120f, 1))
	{
		if (!func_297(NETWORK::PARTICIPANT_ID(), 1))
		{
			func_308(1);
		}
	}
	else if (func_297(NETWORK::PARTICIPANT_ID(), 1))
	{
		func_307(1);
	}
	if (!func_297(NETWORK::PARTICIPANT_ID(), 0) && func_304())
	{
		func_308(0);
	}
}

int func_304()
{
	if (func_301())
	{
		if (!func_309(PLAYER::PLAYER_PED_ID(), func_17(), 1000f, 1))
		{
			return 1;
		}
		if (func_306(PLAYER::PLAYER_ID(), 1, 1))
		{
			return 1;
		}
		if (func_305(PLAYER::PLAYER_ID()))
		{
			return 1;
		}
		if (func_242(PLAYER::PLAYER_ID()))
		{
			return 1;
		}
	}
	else if (!NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(func_18()))
	{
		return 1;
	}
	return 0;
}

int func_305(int iParam0)
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

int func_306(int iParam0, bool bParam1, bool bParam2)
{
	if (iParam0 == func_118())
	{
		return 0;
	}
	if (BitTest(Global_1845250[iParam0 /*880*/].f_260.f_37, 0))
	{
		return 1;
	}
	if (bParam1)
	{
		if (BitTest(Global_1845250[iParam0 /*880*/].f_260.f_37, 1))
		{
			return 1;
		}
	}
	if (bParam2)
	{
		if (Global_2658291[iParam0 /*468*/].f_325.f_8 != -1)
		{
			return 1;
		}
	}
	return 0;
}

void func_307(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::CLEAR_BIT(&(Local_104[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_2[iVar0]), iVar1);
}

void func_308(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::SET_BIT(&(Local_104[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_2[iVar0]), iVar1);
}

bool func_309(int iParam0, int iParam1, float fParam2, bool bParam3)
{
	return SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam0, bParam3), ENTITY::GET_ENTITY_COORDS(iParam1, bParam3)) <= (fParam2 * fParam2);
}

int func_310()
{
	if (func_7())
	{
		return 1;
	}
	return 0;
}

void func_311()
{
	int iVar0;
	
	if (func_316(0))
	{
		if (func_314())
		{
			iVar0 = 1;
		}
		else
		{
			iVar0 = 2;
		}
	}
	else
	{
		iVar0 = 0;
	}
	if (iVar0 != func_313())
	{
		switch (func_313())
		{
			case 2:
				if (!func_338(1) && iVar0 == 0)
				{
					func_126(1);
				}
				break;
			
			case 0:
				if ((func_301() && !func_297(NETWORK::PARTICIPANT_ID(), 0)) && iVar0 == 2)
				{
					func_308(0);
				}
				break;
		}
		func_312(iVar0);
	}
}

void func_312(int iParam0)
{
	uLocal_148 = iParam0;
}

int func_313()
{
	return uLocal_148;
}

bool func_314()
{
	return func_315(PLAYER::PLAYER_ID());
}

int func_315(int iParam0)
{
	if (func_37(iParam0))
	{
		if (func_37(Global_1892653[iParam0 /*615*/].f_10))
		{
			return Global_1892653[iParam0 /*615*/].f_10 == iParam0;
		}
	}
	return 0;
}

bool func_316(bool bParam0)
{
	return func_317(PLAYER::PLAYER_ID(), bParam0);
}

int func_317(int iParam0, bool bParam1)
{
	if (!func_37(iParam0))
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_315(iParam0))
		{
			return 0;
		}
	}
	return func_37(Global_1892653[iParam0 /*615*/].f_10);
}

void func_318()
{
	int iVar0;
	
	if (func_20() > 0)
	{
		func_323();
	}
	switch (func_20())
	{
		case 0:
			break;
		
		case 1:
			break;
		
		case 2:
			if (((((!func_11(3) && !func_297(NETWORK::PARTICIPANT_ID(), 2)) && func_7()) && !NETWORK::NETWORK_IS_ENTITY_FADING(func_17())) && func_321(func_10())) && func_320(func_17()) == 0)
			{
				VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_ALL_PLAYERS(func_17(), true);
				NETWORK::NETWORK_FADE_OUT_ENTITY(func_17(), false, true);
				func_308(2);
			}
			break;
		
		case 3:
			if (((!func_11(4) && !func_297(NETWORK::PARTICIPANT_ID(), 3)) && func_7()) && !ENTITY::IS_ENTITY_VISIBLE(func_17()))
			{
				func_308(3);
			}
			break;
		
		case 4:
			if (((!func_11(5) && !func_297(NETWORK::PARTICIPANT_ID(), 4)) && func_7()) && func_321(func_10()))
			{
				iVar0 = func_10();
				func_319(&iVar0);
				func_308(4);
			}
			break;
		
		case 5:
			break;
	}
}

void func_319(int iParam0)
{
	int iVar0;
	
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*iParam0))
	{
		if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(*iParam0))
		{
		}
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(*iParam0))
	{
		iVar0 = NETWORK::NET_TO_ENT(*iParam0);
		ENTITY::DELETE_ENTITY(&iVar0);
	}
}

int func_320(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		iVar1 = VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(iParam0) + 1;
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			if (!VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, (iVar0 - 1), false))
			{
				iVar2++;
			}
			iVar0++;
		}
	}
	return iVar2;
}

int func_321(int iParam0)
{
	if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(iParam0) || (!NETWORK::IS_NETWORK_ID_OWNED_BY_PARTICIPANT(iParam0) && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()))
	{
		if (func_322(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_322(int iParam0)
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iParam0))
	{
		NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(iParam0);
		return NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(iParam0);
	}
	return 0;
}

void func_323()
{
	if (func_329())
	{
		if (!HUD::DOES_BLIP_EXIST(iLocal_153))
		{
			iLocal_153 = HUD::ADD_BLIP_FOR_ENTITY(func_17());
			HUD::SET_BLIP_SPRITE(iLocal_153, func_328());
			func_325(&iLocal_153, func_327());
			HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_153, func_324());
		}
	}
	else if (HUD::DOES_BLIP_EXIST(iLocal_153))
	{
		HUD::REMOVE_BLIP(&iLocal_153);
	}
}

char* func_324()
{
	return "CASINO_VD";
}

void func_325(int iParam0, int iParam1)
{
	int iVar0;
	
	if (HUD::DOES_BLIP_EXIST(*iParam0))
	{
		iVar0 = func_326(iParam1);
		HUD::SET_BLIP_COLOUR(*iParam0, iVar0);
	}
}

int func_326(int iParam0)
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

int func_327()
{
	return 12;
}

int func_328()
{
	return 225;
}

int func_329()
{
	if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(func_10()))
	{
		return 0;
	}
	if (func_20() != 1)
	{
		return 0;
	}
	if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), func_17(), false))
	{
		return 0;
	}
	if (!func_7())
	{
		return 0;
	}
	return 1;
}

void func_330(int iParam0)
{
	Local_104[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/] = iParam0;
}

int func_331()
{
	func_332();
	return 1;
}

void func_332()
{
	func_294(10);
}

int func_333()
{
	return Local_96.f_0;
}

int func_334(int iParam0)
{
	return Local_104[iParam0 /*4*/];
}

void func_335()
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	iVar0 = 0;
	while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		iLocal_137[iVar0] = func_337();
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar0))
		{
			iLocal_137[iVar0] = iVar0;
			iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX(iLocal_137[iVar0]);
			if (func_357(iVar1, 0, 1))
			{
				if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
				{
					if (!bVar2)
					{
						if (func_297(iLocal_137[iVar0], 1))
						{
							bVar2 = true;
						}
					}
					if (!func_11(1))
					{
						if (func_297(iLocal_137[iVar0], 0))
						{
							func_285(1);
						}
					}
					if (!func_11(3))
					{
						if (func_297(iLocal_137[iVar0], 2))
						{
							func_285(3);
						}
					}
					if (!func_11(4))
					{
						if (func_297(iLocal_137[iVar0], 3))
						{
							func_285(4);
						}
					}
					if (!func_11(5))
					{
						if (func_297(iLocal_137[iVar0], 4))
						{
							func_285(5);
						}
					}
				}
			}
		}
		iVar0++;
	}
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		if (bVar2)
		{
			if (!func_11(2))
			{
				func_285(2);
			}
		}
		else if (func_11(2))
		{
			func_336(2);
		}
	}
}

void func_336(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return;
	}
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::CLEAR_BIT(&(Local_96.f_2[iVar0]), iVar1);
}

int func_337()
{
	return -1;
}

bool func_338(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return BitTest(uLocal_146[iVar0], iVar1);
}

int func_339()
{
	if (Global_1575062 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 1;
		}
	}
	if (func_345())
	{
		return 1;
	}
	if (Global_2699567)
	{
		return 1;
	}
	if (func_344())
	{
		return 1;
	}
	if (func_343(159))
	{
		if (!func_342())
		{
			return 1;
		}
	}
	if (func_343(157))
	{
		return 1;
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return 1;
	}
	if (func_340() != 0)
	{
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(func_340()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_340()
{
	switch (func_45())
	{
		case 0:
			return func_341();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_341()
{
	switch (Global_2699676)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

bool func_342()
{
	return Global_2685150.f_700;
}

int func_343(int iParam0)
{
	if (SCRIPT::GET_EVENT_EXISTS(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_344()
{
	return Global_2696964;
}

bool func_345()
{
	return Global_2685150.f_695;
}

void func_346()
{
	SYSTEM::WAIT(0);
}

void func_347()
{
	if (func_301() && func_2() != 3)
	{
		func_352();
	}
	if (func_13(PLAYER::PLAYER_ID()))
	{
		func_351();
	}
	if (func_295(PLAYER::PLAYER_ID()))
	{
		func_291();
	}
	if (func_5(PLAYER::PLAYER_ID()))
	{
		func_350();
	}
	if (func_299() != 0)
	{
		func_298(0);
	}
	if (func_2() != 0)
	{
		func_348();
	}
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_348()
{
	int iVar0;
	
	iVar0 = func_10();
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(iVar0))
	{
		func_349(&iVar0);
	}
}

void func_349(int iParam0)
{
	int iVar0;
	
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(*iParam0))
	{
		iVar0 = NETWORK::NET_TO_ENT(*iParam0);
		ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&iVar0);
	}
}

void func_350()
{
	func_292(12);
}

void func_351()
{
	func_292(10);
}

void func_352()
{
	func_292(9);
	Global_1892653[PLAYER::PLAYER_ID() /*615*/].f_10.f_308 = 0;
}

int func_353(struct<21> Param0)
{
	func_356(8, Param0);
	NETWORK::RESERVE_NETWORK_MISSION_VEHICLES(1);
	func_354(0, -1, 0);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_96, 8, 0);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_104, 33, 0);
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	return 1;
}

int func_354(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_355();
			}
			else
			{
				return 0;
			}
		}
		if (!func_217(0))
		{
			if (iParam0 == 0)
			{
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (!bParam2)
					{
						func_355();
					}
					else
					{
						return 0;
					}
				}
				if (func_345())
				{
					if (!bParam2)
					{
						func_355();
					}
					else
					{
						return 0;
					}
				}
				if (func_343(157))
				{
					if (!bParam2)
					{
						func_355();
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
					func_355();
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
				func_355();
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
			func_355();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_355()
{
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_356(int iParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20, var uParam21)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_355();
	}
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(iParam0, false, Param1.f_16);
}

int func_357(int iParam0, bool bParam1, bool bParam2)
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

