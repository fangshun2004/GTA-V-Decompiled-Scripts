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
	var uLocal_13 = 0;
	float fLocal_14 = 0f;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	int iLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	char* sLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	float fLocal_24 = 0f;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	float fLocal_28 = 0f;
	float fLocal_29 = 0f;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	float fLocal_33 = 0f;
	float fLocal_34 = 0f;
	float fLocal_35 = 0f;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	int iLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
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
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	float fLocal_67 = 0f;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	int iLocal_77 = 0;
	int iLocal_78 = 2;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	BOOL bLocal_85 = 0;
	float fLocal_86 = 0f;
	float fLocal_87 = 0f;
	float fLocal_88 = 0f;
	float fLocal_89 = 0f;
	float fLocal_90 = 0f;
	int iLocal_91 = 0;
	int iLocal_92 = 0;
	int iLocal_93 = 0;
	int iLocal_94 = 0;
	int iLocal_95 = 0;
	int iLocal_96 = 0;
	int iLocal_97 = 0;
	int iLocal_98 = 0;
	int iLocal_99 = 0;
	int iLocal_100 = 0;
	int iLocal_101 = 0;
	int iLocal_102 = 0;
	BOOL bLocal_103 = 0;
	BOOL bLocal_104 = 0;
#endregion

void main() // Hash - 0x5D84F89F ^0x5D84F89F
{
	int i;

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
	fLocal_14 = 0.001f;
	iLocal_17 = -1;
	sLocal_21 = "NULL";
	fLocal_24 = 0f;
	fLocal_28 = -0.0375f;
	fLocal_29 = 0.17f;
	fLocal_33 = 80f;
	fLocal_34 = 140f;
	fLocal_35 = 180f;
	iLocal_38 = 3;
	iLocal_44 = 1;
	iLocal_45 = 65;
	iLocal_46 = 49;
	iLocal_47 = 64;
	uLocal_64 = { -1124.3922f, -514.70013f, 33.21493f };
	fLocal_67 = 200f;
	uLocal_68 = { 2490f, 3777f, 2402.879f };
	uLocal_71 = { -2052f, 3237f, 1450.078f };
	iLocal_74 = -1;
	iLocal_76 = -1;
	bLocal_85 = true;
	fLocal_86 = 10f;
	fLocal_87 = 90f;
	fLocal_88 = 35f;
	fLocal_89 = 60f;
	fLocal_90 = 275f;
	iLocal_91 = 1500;
	iLocal_92 = -1;
	iLocal_94 = 3000;
	iLocal_95 = 708;
	iLocal_96 = 377;
	iLocal_97 = 1000;
	iLocal_98 = 2093;
	iLocal_101 = -1;
	iLocal_102 = -1;
	bLocal_103 = true;
	bLocal_104 = true;

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
		func_12();

	while (CAM::IS_SCREEN_FADED_OUT())
	{
		SYSTEM::WAIT(0);
	}

	if (!STREAMING::IS_IPL_ACTIVE("ufo"))
		STREAMING::REQUEST_IPL("ufo");

	iLocal_78[0 /*3*/] = { uLocal_68 };
	iLocal_78[1 /*3*/] = { uLocal_71 };

	while (true)
	{
		func_11(PLAYER::PLAYER_PED_ID());
	
		if (Global_32168 == 1)
			func_12();
	
		if (bLocal_85)
		{
			if (!func_10(PLAYER::PLAYER_PED_ID(), iLocal_78[0 /*3*/], 290f + 50f, true))
				if (!func_10(PLAYER::PLAYER_PED_ID(), iLocal_78[1 /*3*/], 290f + 50f, true))
					func_12();
		
			if (iLocal_77 != 0)
			{
				if (!func_10(PLAYER::PLAYER_PED_ID(), iLocal_78[0 /*3*/], fLocal_90 + 50f, true))
				{
					if (!func_10(PLAYER::PLAYER_PED_ID(), iLocal_78[1 /*3*/], fLocal_90 + 50f, true))
					{
						AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT("AZ_SPECIAL_UFO_01", false, true);
						AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT("AZ_SPECIAL_UFO_02", false, true);
						iLocal_77 = 0;
						iLocal_76 = -1;
					}
				}
			}
		}
	
		func_8();
	
		switch (iLocal_77)
		{
			case 0:
				i = 0;
			
				for (i = 0; i < iLocal_78; i = i + 1)
				{
					if (func_10(PLAYER::PLAYER_PED_ID(), iLocal_78[i /*3*/], fLocal_90, true))
					{
						iLocal_76 = i;
						iLocal_77 = 1;
						AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT("AZ_SPECIAL_UFO_01", true, true);
						AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT("AZ_SPECIAL_UFO_02", true, true);
					}
				}
				break;
		
			case 1:
				i = 0;
			
				for (i = 0; i < iLocal_78; i = i + 1)
				{
					if (func_10(PLAYER::PLAYER_PED_ID(), iLocal_78[i /*3*/], fLocal_87, true))
					{
						iLocal_76 = i;
						iLocal_77 = 2;
					}
				}
				break;
		
			case 2:
				if (iLocal_76 == -1)
				{
					iLocal_77 = 1;
				}
				else
				{
					iLocal_74 = MISC::GET_GAME_TIMER();
					iLocal_75 = 0;
					iLocal_77 = 3;
				}
				break;
		
			case 3:
				if (func_10(PLAYER::PLAYER_PED_ID(), iLocal_78[iLocal_76 /*3*/], fLocal_87, true))
				{
					iLocal_75 = MISC::GET_GAME_TIMER() - iLocal_74;
				
					if (iLocal_75 >= iLocal_91)
					{
						iLocal_77 = 4;
						iLocal_92 = AUDIO::GET_SOUND_ID();
						iLocal_93 = MISC::GET_GAME_TIMER();
					
						if (iLocal_76 == 0)
							AUDIO::PLAY_SOUND_FROM_COORD(iLocal_92, "SPECIAL_EVIL_UFO_DEATH_RAY", iLocal_78[iLocal_76 /*3*/], 0, false, 0, false);
						else
							AUDIO::PLAY_SOUND_FROM_COORD(iLocal_92, "SPECIAL_EVIL_UFO_DEATH_RAY_3", iLocal_78[iLocal_76 /*3*/], 0, false, 0, false);
					
						func_7();
						func_6();
					}
				}
				else
				{
					iLocal_77 = 1;
				}
				break;
		
			case 4:
				func_5();
				func_7();
				func_6();
			
				if (MISC::GET_GAME_TIMER() > iLocal_93 + iLocal_94)
					func_4(&iLocal_92);
			
				if (!func_10(PLAYER::PLAYER_PED_ID(), iLocal_78[iLocal_76 /*3*/], fLocal_90, true))
				{
					func_1();
					iLocal_76 = -1;
					iLocal_77 = 0;
					func_4(&iLocal_102);
					func_4(&iLocal_101);
					AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT("AZ_SPECIAL_UFO_01", false, true);
					AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT("AZ_SPECIAL_UFO_02", false, true);
				}
				break;
		}
	
		SYSTEM::WAIT(0);
	}

	return;
}

void func_1() // Hash - 0x17BF001D ^0x7F8F1759
{
	Vehicle vehiclePedIsIn;

	if (func_11(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			vehiclePedIsIn = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		
			if (func_2(vehiclePedIsIn))
				VEHICLE::SET_VEHICLE_ENGINE_ON(vehiclePedIsIn, true, false, false);
		}
	}

	return;
}

BOOL func_2(Vehicle veParam0) // Hash - 0x7E47BB06 ^0x692E6B64
{
	if (func_3(veParam0))
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
			if (!FIRE::IS_ENTITY_ON_FIRE(veParam0))
				return true;

	return false;
}

BOOL func_3(Vehicle veParam0) // Hash - 0x3D210083 ^0xF7E7C389
{
	if (ENTITY::DOES_ENTITY_EXIST(veParam0))
		if (!ENTITY::IS_ENTITY_DEAD(veParam0, false))
			return true;

	return false;
}

void func_4(var uParam0) // Hash - 0x4D96479A ^0x9A0BB87
{
	if (*uParam0 != -1)
	{
		AUDIO::STOP_SOUND(*uParam0);
		AUDIO::RELEASE_SOUND_ID(*uParam0);
		*uParam0 = -1;
	}

	return;
}

void func_5() // Hash - 0xF01075AA ^0xF6490E37
{
	Vehicle vehiclePedIsIn;

	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		vehiclePedIsIn = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
	
		if (func_2(vehiclePedIsIn))
		{
			VEHICLE::SET_VEHICLE_ENGINE_ON(vehiclePedIsIn, false, false, false);
			ENTITY::APPLY_FORCE_TO_ENTITY(vehiclePedIsIn, 2, 0f, 0f, -fLocal_86, 0f, 1f, 0f, 0, false, true, true, false, true);
		}
	}

	return;
}

void func_6() // Hash - 0xF29362C3 ^0x822DB9BD
{
	if (bLocal_104)
	{
		if (MISC::GET_GAME_TIMER() > iLocal_99)
		{
			if (iLocal_101 != -1)
			{
				func_4(&iLocal_101);
				iLocal_99 = MISC::GET_GAME_TIMER() + iLocal_98;
			}
			else
			{
				iLocal_101 = AUDIO::GET_SOUND_ID();
				AUDIO::PLAY_SOUND(iLocal_101, "ent_amb_elec_crackle", 0, false, 0, true);
				iLocal_99 = MISC::GET_GAME_TIMER() + iLocal_96;
			}
		}
	}

	return;
}

void func_7() // Hash - 0xC77AB36C ^0x6D733F4E
{
	if (bLocal_103)
	{
		if (MISC::GET_GAME_TIMER() > iLocal_100)
		{
			if (iLocal_102 != -1)
			{
				func_4(&iLocal_102);
				iLocal_100 = MISC::GET_GAME_TIMER() + iLocal_97;
			}
			else
			{
				iLocal_102 = AUDIO::GET_SOUND_ID();
				AUDIO::PLAY_SOUND(iLocal_102, "spl_stun_npc_master", 0, false, 0, true);
				iLocal_100 = MISC::GET_GAME_TIMER() + iLocal_95;
			}
		}
	}

	return;
}

void func_8() // Hash - 0x1367464F ^0xC8C0D800
{
	Vector3 vector;

	if (iLocal_76 == -1)
		return;

	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		return;

	if (!func_10(PLAYER::PLAYER_PED_ID(), iLocal_78[iLocal_76 /*3*/], fLocal_88, true))
		return;

	vector = { func_9(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) - iLocal_78[iLocal_76 /*3*/]) * { fLocal_89, fLocal_89, fLocal_89 } };
	ENTITY::APPLY_FORCE_TO_ENTITY(PLAYER::PLAYER_PED_ID(), 2, vector, 0f, 0f, 0f, 0, false, true, true, false, true);
	return;
}

Vector3 func_9(float fParam0, var uParam1, var uParam2) // Hash - 0xFB6A39D2 ^0x80C9C759
{
	float num;
	float num2;

	num = SYSTEM::VMAG(fParam0);

	if (num != 0f)
	{
		num2 = 1f / num;
		fParam0 = { fParam0 * { num2, num2, num2 } };
	}
	else
	{
		fParam0 = 0f;
		fParam0.f_1 = 0f;
		fParam0.f_2 = 0f;
	}

	return fParam0;
}

BOOL func_10(Ped pedParam0, Vector3 vParam1, var uParam2, var uParam3, float fParam4, BOOL bParam5) // Hash - 0x9A4C1B16 ^0x6EACDAB9
{
	return SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(pedParam0, bParam5), vParam1) <= fParam4 * fParam4;
}

BOOL func_11(Ped pedParam0) // Hash - 0x251F0A94 ^0x6A446318
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	return !ENTITY::IS_ENTITY_DEAD(pedParam0, false);
}

void func_12() // Hash - 0xD4EF48F0 ^0x3559F037
{
	if (STREAMING::IS_IPL_ACTIVE("ufo"))
		STREAMING::REMOVE_IPL("ufo");

	func_4(&iLocal_102);
	func_4(&iLocal_101);
	func_4(&iLocal_92);
	AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT("AZ_SPECIAL_UFO_01", false, true);
	AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT("AZ_SPECIAL_UFO_02", false, true);
	func_1();
	SCRIPT::TERMINATE_THIS_THREAD();
	return;
}

