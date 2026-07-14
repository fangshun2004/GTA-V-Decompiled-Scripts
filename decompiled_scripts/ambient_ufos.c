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
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
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
	struct<3> Local_82 = { 0, 0, 0 } ;
	float fLocal_85 = 0f;
	struct<3> Local_86 = { 0, 0, 0 } ;
	struct<3> Local_89 = { 0, 0, 0 } ;
	int iLocal_92 = 0;
	int iLocal_93 = 0;
	int iLocal_94 = 0;
	int iLocal_95 = 0;
	struct<3> Local_96[2];
	bool bLocal_103 = 0;
	float fLocal_104 = 0f;
	float fLocal_105 = 0f;
	float fLocal_106 = 0f;
	float fLocal_107 = 0f;
	float fLocal_108 = 0f;
	int iLocal_109 = 0;
	int iLocal_110 = 0;
	int iLocal_111 = 0;
	int iLocal_112 = 0;
	int iLocal_113 = 0;
	int iLocal_114 = 0;
	int iLocal_115 = 0;
	int iLocal_116 = 0;
	int iLocal_117 = 0;
	int iLocal_118 = 0;
	int iLocal_119 = 0;
	int iLocal_120 = 0;
	bool bLocal_121 = 0;
	bool bLocal_122 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;
	
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
	iLocal_60 = 1;
	iLocal_61 = 65;
	iLocal_62 = 49;
	iLocal_63 = 64;
	Local_82 = { -1124.392f, -514.7001f, 33.21493f };
	fLocal_85 = 200f;
	Local_86 = { 2490f, 3777f, 2402.879f };
	Local_89 = { -2052f, 3237f, 1450.078f };
	iLocal_92 = -1;
	iLocal_94 = -1;
	bLocal_103 = true;
	fLocal_104 = 10f;
	fLocal_105 = 90f;
	fLocal_106 = 35f;
	fLocal_107 = 60f;
	fLocal_108 = 275f;
	iLocal_109 = 1500;
	iLocal_110 = -1;
	iLocal_112 = 3000;
	iLocal_113 = 708;
	iLocal_114 = 377;
	iLocal_115 = 1000;
	iLocal_116 = 2093;
	iLocal_119 = -1;
	iLocal_120 = -1;
	bLocal_121 = true;
	bLocal_122 = true;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		func_12();
	}
	while (CAM::IS_SCREEN_FADED_OUT())
	{
		SYSTEM::WAIT(0);
	}
	if (!STREAMING::IS_IPL_ACTIVE("ufo"))
	{
		STREAMING::REQUEST_IPL("ufo");
	}
	Local_96[0 /*3*/] = { Local_86 };
	Local_96[1 /*3*/] = { Local_89 };
	while (true)
	{
		func_11(PLAYER::PLAYER_PED_ID());
		if (Global_33820 == 1)
		{
			func_12();
		}
		if (bLocal_103)
		{
			if (!func_10(PLAYER::PLAYER_PED_ID(), Local_96[0 /*3*/], (290f + 50f), 1))
			{
				if (!func_10(PLAYER::PLAYER_PED_ID(), Local_96[1 /*3*/], (290f + 50f), 1))
				{
					func_12();
				}
			}
			if (iLocal_95 != 0)
			{
				if (!func_10(PLAYER::PLAYER_PED_ID(), Local_96[0 /*3*/], (fLocal_108 + 50f), 1))
				{
					if (!func_10(PLAYER::PLAYER_PED_ID(), Local_96[1 /*3*/], (fLocal_108 + 50f), 1))
					{
						AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT("AZ_SPECIAL_UFO_01", false, true);
						AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT("AZ_SPECIAL_UFO_02", false, true);
						iLocal_95 = 0;
						iLocal_94 = -1;
					}
				}
			}
		}
		func_8();
		switch (iLocal_95)
		{
			case 0:
				iVar0 = 0;
				iVar0 = 0;
				while (iVar0 < Local_96.f_0)
				{
					if (func_10(PLAYER::PLAYER_PED_ID(), Local_96[iVar0 /*3*/], fLocal_108, 1))
					{
						iLocal_94 = iVar0;
						iLocal_95 = 1;
						AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT("AZ_SPECIAL_UFO_01", true, true);
						AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT("AZ_SPECIAL_UFO_02", true, true);
					}
					iVar0++;
				}
				break;
			
			case 1:
				iVar0 = 0;
				iVar0 = 0;
				while (iVar0 < Local_96.f_0)
				{
					if (func_10(PLAYER::PLAYER_PED_ID(), Local_96[iVar0 /*3*/], fLocal_105, 1))
					{
						iLocal_94 = iVar0;
						iLocal_95 = 2;
					}
					iVar0++;
				}
				break;
			
			case 2:
				if (iLocal_94 == -1)
				{
					iLocal_95 = 1;
				}
				else
				{
					iLocal_92 = MISC::GET_GAME_TIMER();
					iLocal_93 = 0;
					iLocal_95 = 3;
				}
				break;
			
			case 3:
				if (func_10(PLAYER::PLAYER_PED_ID(), Local_96[iLocal_94 /*3*/], fLocal_105, 1))
				{
					iLocal_93 = (MISC::GET_GAME_TIMER() - iLocal_92);
					if (iLocal_93 >= iLocal_109)
					{
						iLocal_95 = 4;
						iLocal_110 = AUDIO::GET_SOUND_ID();
						iLocal_111 = MISC::GET_GAME_TIMER();
						if (iLocal_94 == 0)
						{
							AUDIO::PLAY_SOUND_FROM_COORD(iLocal_110, "SPECIAL_EVIL_UFO_DEATH_RAY", Local_96[iLocal_94 /*3*/], 0, false, 0, false);
						}
						else
						{
							AUDIO::PLAY_SOUND_FROM_COORD(iLocal_110, "SPECIAL_EVIL_UFO_DEATH_RAY_3", Local_96[iLocal_94 /*3*/], 0, false, 0, false);
						}
						func_7();
						func_6();
					}
				}
				else
				{
					iLocal_95 = 1;
				}
				break;
			
			case 4:
				func_5();
				func_7();
				func_6();
				if (MISC::GET_GAME_TIMER() > (iLocal_111 + iLocal_112))
				{
					func_4(&iLocal_110);
				}
				if (!func_10(PLAYER::PLAYER_PED_ID(), Local_96[iLocal_94 /*3*/], fLocal_108, 1))
				{
					func_1();
					iLocal_94 = -1;
					iLocal_95 = 0;
					func_4(&iLocal_120);
					func_4(&iLocal_119);
					AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT("AZ_SPECIAL_UFO_01", false, true);
					AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT("AZ_SPECIAL_UFO_02", false, true);
				}
				break;
		}
		SYSTEM::WAIT(0);
	}
}

void func_1()
{
	int iVar0;
	
	if (func_11(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			if (func_2(iVar0))
			{
				VEHICLE::SET_VEHICLE_ENGINE_ON(iVar0, true, false, false);
			}
		}
	}
}

int func_2(int iParam0)
{
	if (func_3(iParam0))
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

int func_3(int iParam0)
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

void func_4(int iParam0)
{
	if (*iParam0 != -1)
	{
		AUDIO::STOP_SOUND(*iParam0);
		AUDIO::RELEASE_SOUND_ID(*iParam0);
		*iParam0 = -1;
	}
}

void func_5()
{
	int iVar0;
	
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (func_2(iVar0))
		{
			VEHICLE::SET_VEHICLE_ENGINE_ON(iVar0, false, false, false);
			ENTITY::APPLY_FORCE_TO_ENTITY(iVar0, 2, 0f, 0f, -fLocal_104, 0f, 1f, 0f, 0, false, true, true, false, true);
		}
	}
}

void func_6()
{
	if (bLocal_122)
	{
		if (MISC::GET_GAME_TIMER() > iLocal_117)
		{
			if (iLocal_119 != -1)
			{
				func_4(&iLocal_119);
				iLocal_117 = (MISC::GET_GAME_TIMER() + iLocal_116);
			}
			else
			{
				iLocal_119 = AUDIO::GET_SOUND_ID();
				AUDIO::PLAY_SOUND(iLocal_119, "ent_amb_elec_crackle", 0, false, 0, true);
				iLocal_117 = (MISC::GET_GAME_TIMER() + iLocal_114);
			}
		}
	}
}

void func_7()
{
	if (bLocal_121)
	{
		if (MISC::GET_GAME_TIMER() > iLocal_118)
		{
			if (iLocal_120 != -1)
			{
				func_4(&iLocal_120);
				iLocal_118 = (MISC::GET_GAME_TIMER() + iLocal_115);
			}
			else
			{
				iLocal_120 = AUDIO::GET_SOUND_ID();
				AUDIO::PLAY_SOUND(iLocal_120, "spl_stun_npc_master", 0, false, 0, true);
				iLocal_118 = (MISC::GET_GAME_TIMER() + iLocal_113);
			}
		}
	}
}

void func_8()
{
	struct<3> Var0;
	
	if (iLocal_94 == -1)
	{
		return;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		return;
	}
	if (!func_10(PLAYER::PLAYER_PED_ID(), Local_96[iLocal_94 /*3*/], fLocal_106, 1))
	{
		return;
	}
	Var0 = { func_9(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) - Local_96[iLocal_94 /*3*/]) * Vector(fLocal_107, fLocal_107, fLocal_107) };
	ENTITY::APPLY_FORCE_TO_ENTITY(PLAYER::PLAYER_PED_ID(), 2, Var0, 0f, 0f, 0f, 0, false, true, true, false, true);
}

Vector3 func_9(struct<3> Param0)
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

bool func_10(int iParam0, struct<3> Param1, float fParam4, bool bParam5)
{
	return SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam0, bParam5), Param1) <= (fParam4 * fParam4);
}

bool func_11(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	return !ENTITY::IS_ENTITY_DEAD(iParam0, false);
}

void func_12()
{
	if (STREAMING::IS_IPL_ACTIVE("ufo"))
	{
		STREAMING::REMOVE_IPL("ufo");
	}
	func_4(&iLocal_120);
	func_4(&iLocal_119);
	func_4(&iLocal_110);
	AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT("AZ_SPECIAL_UFO_01", false, true);
	AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT("AZ_SPECIAL_UFO_02", false, true);
	func_1();
	SCRIPT::TERMINATE_THIS_THREAD();
}

