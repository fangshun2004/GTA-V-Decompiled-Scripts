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
	struct<7> Local_45[8];
	int iLocal_102 = 0;
	struct<5> Local_103[160];
	int iLocal_904 = 0;
	int iLocal_905 = 0;
	int iLocal_906[64] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_971 = 0;
	int iLocal_972 = 0;
	int iLocal_973 = 0;
	bool bLocal_974 = 0;
	struct<3> Local_975 = { 0, 0, 0 } ;
	struct<3> Local_978 = { 0, 0, 0 } ;
	int iLocal_981 = 0;
	float fLocal_982 = 0f;
	int iLocal_983 = 0;
	float fLocal_984 = 0f;
	int iLocal_985 = 0;
	float fLocal_986 = 0f;
	int iLocal_987 = 0;
	float fLocal_988 = 0f;
	int iLocal_989 = 0;
	int iLocal_990 = 0;
	int iLocal_991[32] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_1024[32] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_1057 = 0;
	int iLocal_1058 = 0;
	bool bLocal_1059 = 0;
	int iLocal_1060 = 0;
	bool bLocal_1061 = 0;
	int iLocal_1062[3] = { 0, 0, 0 };
	struct<2> Local_1066[3];
	struct<2> Local_1073[10];
	struct<3> Local_1094[32];
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
	iLocal_971 = -1;
	iLocal_972 = -1;
	fLocal_984 = 1f;
	fLocal_986 = 1.75f;
	fLocal_988 = 0f;
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	func_79();
	while (true)
	{
		SYSTEM::WAIT(0);
		func_1();
	}
}

void func_1()
{
	bool bVar0;
	
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		func_78();
	}
	iLocal_973 = PLAYER::PLAYER_PED_ID();
	bLocal_974 = false;
	Local_978 = { CAM::GET_FINAL_RENDERED_CAM_COORD() };
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_973) && !PED::IS_PED_INJURED(iLocal_973))
	{
		bLocal_974 = true;
		Local_975 = { ENTITY::GET_ENTITY_COORDS(iLocal_973, true) };
	}
	bLocal_1061 = !GRAPHICS::GET_TOGGLE_PAUSED_RENDERPHASES_STATUS();
	bVar0 = OBJECT::IS_POINT_IN_ANGLED_AREA(Local_978, 2631.138f, 5890.875f, -62f, 2631.152f, 5858.575f, -58.179f, 14.17f, false, true);
	if (BitTest(Global_1935234, 6))
	{
		fLocal_986 = 1.75f;
	}
	else if (bVar0 || OBJECT::IS_POINT_IN_ANGLED_AREA(Local_978, 2631.157f, 5890.823f, -62f, 2631.146f, 5902.196f, -58f, 12.102f, false, true))
	{
		fLocal_986 = func_77(fLocal_986, 1.75f, 3f);
	}
	else
	{
		fLocal_986 = 0.5f;
	}
	func_76(bVar0);
	iLocal_983 = 0;
	if (BitTest(Global_1935234, 0))
	{
		MISC::CLEAR_BIT(&Global_1935234, 0);
		if (BitTest(Global_1935234, 4))
		{
			func_75(2);
		}
		else
		{
			func_75(3);
		}
	}
	MISC::CLEAR_BIT(&Global_1935234, 1);
	MISC::CLEAR_BIT(&Global_1935234, 3);
	MISC::CLEAR_BIT(&Global_1935234, 5);
	switch (iLocal_987)
	{
		case 0:
			func_67();
			break;
		
		case 1:
			func_8();
			break;
		
		case 2:
			func_7();
			break;
		
		case 3:
			func_2();
			break;
	}
	if (!BitTest(Global_1935234, 1))
	{
		MISC::CLEAR_BIT(&Global_1935234, 2);
	}
}

void func_2()
{
	int iVar0;
	
	MISC::CLEAR_BIT(&Global_1935234, 0);
	MISC::CLEAR_BIT(&Global_1935234, 4);
	MISC::CLEAR_BIT(&Global_1935234, 2);
	MISC::CLEAR_BIT(&Global_1935234, 1);
	MISC::CLEAR_BIT(&Global_1935234, 3);
	MISC::CLEAR_BIT(&Global_1935234, 5);
	MISC::CLEAR_BIT(&Global_1935234, 7);
	Global_1935234.f_3 = 250f;
	Global_1935234.f_1 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		func_6(&(Local_1094[iVar0 /*3*/].f_2));
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 63)
	{
		func_6(&(iLocal_906[iVar0]));
		iVar0++;
	}
	func_6(&iLocal_972);
	func_6(&iLocal_971);
	iVar0 = 0;
	while (iVar0 <= 7)
	{
		if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(Local_45[iVar0 /*7*/]))
		{
			GRAPHICS::REMOVE_PARTICLE_FX(Local_45[iVar0 /*7*/], false);
		}
		func_3(&(Local_45[iVar0 /*7*/]));
		iVar0++;
	}
	GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("mpinvperscommon");
	STREAMING::REMOVE_NAMED_PTFX_ASSET("scr_sum26");
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_981) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iLocal_981, true))
	{
		OBJECT::DELETE_OBJECT(&iLocal_981);
	}
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_1062[iVar0]))
		{
			OBJECT::DELETE_OBJECT(&(iLocal_1062[iVar0]));
		}
		iVar0++;
	}
	unk_0xDC60226A3F4D9F42(0);
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_3(var uParam0)
{
	if (func_5(uParam0->f_2))
	{
		return;
	}
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(*uParam0))
	{
		GRAPHICS::SET_PARTICLE_FX_LOOPED_OFFSETS(*uParam0, uParam0->f_2, func_4());
	}
	else if (*uParam0 == 0)
	{
		GRAPHICS::USE_PARTICLE_FX_ASSET("scr_sum26");
		*uParam0 = GRAPHICS::START_PARTICLE_FX_LOOPED_AT_COORD("scr_sum26_laser_sparks", uParam0->f_2, 0f, 0f, 0f, 2f, false, false, false, false);
	}
	if (uParam0->f_5)
	{
		uParam0->f_1 = MISC::GET_GAME_TIMER() + 100;
		uParam0->f_5 = 0;
	}
	if (uParam0->f_1 > MISC::GET_GAME_TIMER())
	{
		return;
	}
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(*uParam0))
	{
		GRAPHICS::STOP_PARTICLE_FX_LOOPED(*uParam0, false);
		*uParam0 = 0;
	}
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = { func_4() };
}

Vector3 func_4()
{
	return 0f, 0f, 0f;
}

int func_5(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

void func_6(int iParam0)
{
	if (*iParam0 != -1)
	{
		AUDIO::STOP_SOUND(*iParam0);
		AUDIO::RELEASE_SOUND_ID(*iParam0);
		*iParam0 = -1;
	}
}

void func_7()
{
	if (iLocal_1057 == 0)
	{
		iLocal_1057 = MISC::GET_GAME_TIMER() + 1500;
		iLocal_1060 = 1;
	}
	else if (iLocal_1057 < MISC::GET_GAME_TIMER())
	{
		func_75(3);
		return;
	}
	func_8();
}

void func_8()
{
	iLocal_989 = 0;
	iLocal_102 = 0;
	fLocal_988 = (IntToFloat((NETWORK::GET_NETWORK_TIME_ACCURATE() - Global_1058150.f_1191)) / 1000f);
	func_27();
	Global_1935234.f_1 = 0;
	func_13();
	func_9();
}

void func_9()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (iLocal_102 <= 0)
	{
		iVar0 = 0;
		while (iVar0 <= 63)
		{
			AUDIO::STOP_SOUND(iLocal_906[iVar0]);
			iVar0++;
		}
		return;
	}
	if (iLocal_102 > 1)
	{
		func_11(0, (iLocal_102 - 1));
	}
	iVar5 = func_10(iLocal_102, 64);
	iVar1 = 0;
	while (iVar1 <= (iVar5 - 1))
	{
		if (Local_103[iVar1 /*5*/].f_4)
		{
			iVar3++;
		}
		else
		{
			iVar2++;
		}
		iVar1++;
	}
	iVar0 = iVar2;
	while (iVar0 <= (iLocal_904 - 1))
	{
		AUDIO::STOP_SOUND(iLocal_906[iVar0]);
		iVar0++;
	}
	iVar0 = (63 - iVar3);
	while (iVar0 >= (64 - iLocal_905))
	{
		AUDIO::STOP_SOUND(iLocal_906[iVar0]);
		iVar0 = (iVar0 + -1);
	}
	iVar2 = 0;
	iVar3 = 0;
	iVar1 = 0;
	while (iVar1 <= (iVar5 - 1))
	{
		if (Local_103[iVar1 /*5*/].f_4)
		{
			iVar4 = (63 - iVar3);
			if (iVar3 >= iLocal_905)
			{
				AUDIO::STOP_SOUND(iLocal_906[iVar4]);
				AUDIO::PLAY_SOUND_FROM_COORD(iLocal_906[iVar4], "Laser_Beam_Loop_Fixed", Local_103[iVar1 /*5*/].f_1, "DLC_26-1_Heist_Laser_Grid_Minigame_Sounds", false, 0, false);
			}
			else
			{
				AUDIO::UPDATE_SOUND_COORD(iLocal_906[iVar4], Local_103[iVar1 /*5*/].f_1);
			}
			iVar3++;
		}
		else
		{
			if (iVar2 >= iLocal_904)
			{
				AUDIO::STOP_SOUND(iLocal_906[iVar2]);
				AUDIO::PLAY_SOUND_FROM_COORD(iLocal_906[iVar2], "Laser_Beam_Loop_Active", Local_103[iVar1 /*5*/].f_1, "DLC_26-1_Heist_Laser_Grid_Minigame_Sounds", false, 0, false);
			}
			else
			{
				AUDIO::UPDATE_SOUND_COORD(iLocal_906[iVar2], Local_103[iVar1 /*5*/].f_1);
			}
			iVar2++;
		}
		iVar1++;
	}
	iLocal_904 = iVar2;
	iLocal_905 = iVar3;
}

int func_10(int iParam0, int iParam1)
{
	if (iParam0 < iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

void func_11(int iParam0, int iParam1)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (iParam0 < iParam1)
	{
		fVar0 = Local_103[iParam1 /*5*/];
		iVar1 = (iParam0 - 1);
		iVar2 = iParam0;
		while (iVar2 <= (iParam1 - 1))
		{
			if (Local_103[iVar2 /*5*/] < fVar0)
			{
				iVar1++;
				func_12(&(Local_103[iVar1 /*5*/]), &(Local_103[iVar2 /*5*/]));
			}
			iVar2++;
		}
		func_12(&(Local_103[iVar1 + 1 /*5*/]), &(Local_103[iParam1 /*5*/]));
		iVar3 = iVar1 + 1;
		func_11(iParam0, (iVar3 - 1));
		func_11(iVar3 + 1, iParam1);
	}
}

void func_12(var* uParam0, var* uParam1)
{
	var uVar0;
	
	MISC::COPY_SCRIPT_STRUCT(&uVar0, uParam0, 5);
	MISC::COPY_SCRIPT_STRUCT(uParam0, uParam1, 5);
	MISC::COPY_SCRIPT_STRUCT(uParam1, &uVar0, 5);
}

void func_13()
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	float fVar4;
	int iVar5;
	bool bVar6;
	
	MISC::CLEAR_BIT(&Global_1935234, 7);
	iVar0 = 0;
	while (iVar0 <= 7)
	{
		if (Local_45[iVar0 /*7*/].f_5)
		{
			if (Local_45[iVar0 /*7*/].f_6)
			{
				bVar3 = true;
			}
			else
			{
				iVar1++;
				iVar2 = iVar0;
			}
		}
		func_3(&(Local_45[iVar0 /*7*/]));
		iVar0++;
	}
	if (iVar1 > 0 || bVar3)
	{
		AUDIO::PLAY_SOUND_FROM_ENTITY(iLocal_972, "Burning_Player_Loop", iLocal_973, "DLC_26-1_Heist_Laser_Grid_Minigame_Sounds", false, 0);
	}
	else
	{
		AUDIO::STOP_SOUND(iLocal_972);
	}
	if (iVar1 > 0)
	{
		func_15(&(Local_45[iVar2 /*7*/]), iLocal_973);
		fVar4 = ((Global_1935234.f_3 * IntToFloat(iVar1)) * MISC::GET_FRAME_TIME());
		fLocal_982 = (fLocal_982 + fVar4);
		iVar5 = SYSTEM::FLOOR(fLocal_982);
		bVar6 = (fVar4 * 3f) > IntToFloat((ENTITY::GET_ENTITY_HEALTH(iLocal_973) - 100));
		if ((!PED::IS_PED_RAGDOLL(iLocal_973) && !func_14(iLocal_973, joaat("script_task_play_anim"))) && !bVar6)
		{
			unk_0x6D1FCD0950EFA3DD(iLocal_973, Local_45[iVar2 /*7*/].f_2, joaat("weapon_pistol"));
		}
		if (iVar5 > 0)
		{
			fLocal_982 = (fLocal_982 - IntToFloat(iVar5));
			PED::APPLY_DAMAGE_TO_PED(iLocal_973, iVar5, true, 0, 0);
			if (PED::IS_PED_INJURED(iLocal_973))
			{
				MISC::SET_BIT(&Global_1935234, 7);
				FIRE::START_ENTITY_FIRE(iLocal_973);
			}
		}
		MISC::SET_BIT(&Global_1935234, 1);
		if (!BitTest(Global_1935234, 2))
		{
			MISC::SET_BIT(&Global_1935234, 2);
			MISC::SET_BIT(&Global_1935234, 3);
		}
	}
	else
	{
		fLocal_982 = 0f;
	}
	if (bVar3)
	{
		MISC::SET_BIT(&Global_1935234, 5);
	}
}

int func_14(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1);
	if (iVar0 == 1 || iVar0 == 0)
	{
		return 1;
	}
	return 0;
}

void func_15(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var3;
	struct<3> Var6;
	var uVar9;
	struct<3> Var12;
	struct<3> Var15;
	float fVar18;
	float fVar19;
	float fVar20;
	float fVar21;
	float fVar22;
	
	if (uParam0->f_6)
	{
		return;
	}
	iVar0 = func_25(iParam1, uParam0->f_2);
	iVar1 = func_24(iVar0);
	iVar2 = func_23(iVar1);
	func_20(iParam1, iVar1, &Var3, &Var6, &uVar9, &Var12);
	Var15 = { func_18(Var12, uParam0->f_2) };
	fVar20 = func_17(Var3, Var15);
	fVar21 = func_17(Var6, Var15);
	fVar22 = ((fVar20 + 1f) * 0.5f);
	if (iVar2 == 1)
	{
		fVar22 = ((fVar20 + 1f) * 0.25f);
	}
	fVar18 = fVar22;
	fVar19 = func_16(iParam1, uParam0->f_2.f_2, iVar2);
	if ((fVar21 < 0f && fVar22 != 1f) && fVar22 != 0f)
	{
		if (iVar2 == 1 && fVar21 < 0f)
		{
			fVar18 = (1f - fVar22);
		}
		else if (fVar21 > 0f)
		{
			fVar18 = (1f - fVar22);
		}
	}
	if ((MISC::GET_FRAME_COUNT() % 2) == 0)
	{
		PED::APPLY_PED_BLOOD_SPECIFIC(iParam1, iVar2, fVar18, fVar19, 0f, 0.5f, 0, 0f, "BackSplash");
	}
	else
	{
		PED::APPLY_PED_BLOOD_SPECIFIC(iParam1, iVar2, fVar18, fVar19, 0f, 1f, 4, 0f, "stab");
	}
}

float func_16(int iParam0, float fParam1, int iParam2)
{
	struct<3> Var0;
	
	switch (iParam2)
	{
		case 0:
			Var0 = { PED::GET_PED_BONE_COORDS(iParam0, 24817, 0f, 0f, 0f) };
			return ((1.31558f * (fParam1 - Var0.f_2)) + 0.53268f);
		
		case 1:
			Var0 = { PED::GET_PED_BONE_COORDS(iParam0, 31086, 0f, 0f, 0f) };
			return ((2.7906f * (fParam1 - Var0.f_2)) + 0.618f);
		
		case 2:
			Var0 = { PED::GET_PED_BONE_COORDS(iParam0, 61163, 0f, 0f, 0f) };
			return ((1.46193f * (fParam1 - Var0.f_2)) + 0.65285f);
		
		case 3:
			Var0 = { PED::GET_PED_BONE_COORDS(iParam0, 28252, 0f, 0f, 0f) };
			return ((1.46193f * (fParam1 - Var0.f_2)) + 0.65285f);
		
		case 4:
			Var0 = { PED::GET_PED_BONE_COORDS(iParam0, 63931, 0f, 0f, 0f) };
			return ((0.95324f * (fParam1 - Var0.f_2)) + 0.52667f);
		
		case 5:
			Var0 = { PED::GET_PED_BONE_COORDS(iParam0, 36864, 0f, 0f, 0f) };
			return ((0.95324f * (fParam1 - Var0.f_2)) + 0.52667f);
		
		default:
	}
	return 0f;
}

float func_17(struct<2> Param0, var uParam2, struct<2> Param3, var uParam5)
{
	return ((Param0.f_0 * Param3.f_0) + (Param0.f_1 * Param3.f_1));
}

Vector3 func_18(struct<3> Param0, struct<3> Param3)
{
	return func_19(Param3 - Param0);
}

Vector3 func_19(struct<3> Param0)
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

void func_20(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	struct<9> Var0;
	
	Var0 = { func_21(ENTITY::GET_ENTITY_BONE_ROTATION(iParam0, PED::GET_PED_BONE_INDEX(iParam0, iParam1))) };
	*uParam2 = { func_19(Var0.f_1, Var0.f_4, Var0.f_7) };
	*uParam3 = { func_19(Var0.f_0, Var0.f_3, Var0.f_6) };
	*uParam4 = { func_19(Var0.f_2, Var0.f_5, Var0.f_8) };
	*uParam5 = { PED::GET_PED_BONE_COORDS(iParam0, iParam1, 0f, 0f, 0f) };
}

struct<9> func_21(struct<3> Param0)
{
	struct<9> Var0;
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	float fVar14;
	
	fVar9 = SYSTEM::COS(Param0.f_0);
	fVar10 = SYSTEM::SIN(Param0.f_0);
	fVar11 = SYSTEM::COS(Param0.f_1);
	fVar12 = SYSTEM::SIN(Param0.f_1);
	fVar13 = SYSTEM::COS(Param0.f_2);
	fVar14 = SYSTEM::SIN(Param0.f_2);
	func_22(&Var0, (fVar11 * fVar13), (((fVar10 * fVar12) * fVar13) - (fVar9 * fVar14)), ((fVar10 * fVar14) + ((fVar9 * fVar12) * fVar13)), (fVar11 * fVar14), ((fVar9 * fVar13) + ((fVar10 * fVar12) * fVar14)), (((fVar9 * fVar12) * fVar14) - (fVar10 * fVar13)), -fVar12, (fVar10 * fVar11), (fVar9 * fVar11));
	return Var0;
}

void func_22(var uParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, float fParam7, float fParam8, float fParam9)
{
	*uParam0 = fParam1;
	uParam0->f_1 = fParam2;
	uParam0->f_2 = fParam3;
	uParam0->f_3 = fParam4;
	uParam0->f_4 = fParam5;
	uParam0->f_5 = fParam6;
	uParam0->f_6 = fParam7;
	uParam0->f_7 = fParam8;
	uParam0->f_8 = fParam9;
}

int func_23(int iParam0)
{
	switch (iParam0)
	{
		case 11816:
			return 0;
		
		case 58271:
			return 4;
		
		case 63931:
			return 4;
		
		case 14201:
			return 4;
		
		case 51826:
			return 5;
		
		case 36864:
			return 5;
		
		case 52301:
			return 5;
		
		case 23553:
			return 0;
		
		case 24816:
			return 0;
		
		case 24817:
			return 0;
		
		case 24818:
			return 0;
		
		case 64729:
			return 0;
		
		case 45509:
			return 2;
		
		case 61163:
			return 2;
		
		case 18905:
			return 2;
		
		case 10706:
			return 0;
		
		case 40269:
			return 3;
		
		case 28252:
			return 3;
		
		case 57005:
			return 3;
		
		case 39317:
			return 1;
		
		case 31086:
			return 1;
		
		default:
	}
	return 7;
}

int func_24(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 11816;
		
		case 1:
			return 58271;
		
		case 2:
			return 63931;
		
		case 3:
			return 14201;
		
		case 4:
			return 51826;
		
		case 5:
			return 36864;
		
		case 6:
			return 52301;
		
		case 7:
			return 23553;
		
		case 8:
			return 24816;
		
		case 9:
			return 24817;
		
		case 10:
			return 24818;
		
		case 11:
			return 64729;
		
		case 12:
			return 45509;
		
		case 13:
			return 61163;
		
		case 14:
			return 18905;
		
		case 15:
			return 10706;
		
		case 16:
			return 40269;
		
		case 17:
			return 28252;
		
		case 18:
			return 57005;
		
		case 19:
			return 39317;
		
		case 20:
			return 31086;
		
		default:
	}
	return -1;
}

int func_25(int iParam0, struct<3> Param1)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (!PED::WAS_PED_SKELETON_UPDATED(iParam0))
	{
		return 21;
	}
	iVar3 = -1;
	iVar4 = 0;
	while (iVar4 < 21)
	{
		iVar2 = func_24(iVar4);
		fVar1 = SYSTEM::VDIST2(PED::GET_PED_BONE_COORDS(iParam0, iVar2, 0f, 0f, 0f), Param1);
		if (fVar0 == 0f || fVar1 < fVar0)
		{
			iVar3 = iVar2;
			fVar0 = fVar1;
		}
		iVar4++;
	}
	return func_26(iVar3);
}

int func_26(int iParam0)
{
	switch (iParam0)
	{
		case 11816:
			return 0;
		
		case 58271:
			return 1;
		
		case 63931:
			return 2;
		
		case 14201:
			return 3;
		
		case 51826:
			return 4;
		
		case 36864:
			return 5;
		
		case 52301:
			return 6;
		
		case 23553:
			return 7;
		
		case 24816:
			return 8;
		
		case 24817:
			return 9;
		
		case 24818:
			return 10;
		
		case 64729:
			return 11;
		
		case 45509:
			return 12;
		
		case 61163:
			return 13;
		
		case 18905:
			return 14;
		
		case 10706:
			return 15;
		
		case 40269:
			return 16;
		
		case 28252:
			return 17;
		
		case 57005:
			return 18;
		
		case 39317:
			return 19;
		
		case 31086:
			return 20;
		
		default:
	}
	return 21;
}

void func_27()
{
	if (!bLocal_1059)
	{
		switch (iLocal_1058)
		{
			case 0:
				func_66();
				break;
			
			case 1:
				func_65();
				break;
			
			case 2:
				func_64();
				break;
		}
	}
	else
	{
		switch (iLocal_1058)
		{
			case 0:
				func_63();
				break;
			
			case 1:
				func_62();
				break;
			
			case 2:
				func_28();
				break;
			}
	}
	if (!BitTest(Global_1935234.f_2, 0) && ENTITY::DOES_ENTITY_EXIST(iLocal_1062[0]))
	{
		OBJECT::DELETE_OBJECT(&(iLocal_1062[0]));
	}
	if (!BitTest(Global_1935234.f_2, 11) && ENTITY::DOES_ENTITY_EXIST(iLocal_1062[1]))
	{
		OBJECT::DELETE_OBJECT(&(iLocal_1062[1]));
	}
	if (!BitTest(Global_1935234.f_2, 21) && ENTITY::DOES_ENTITY_EXIST(iLocal_1062[2]))
	{
		OBJECT::DELETE_OBJECT(&(iLocal_1062[2]));
	}
}

void func_28()
{
	struct<13> Var0;
	struct<13> Var13;
	struct<9> Var26;
	struct<25> Var35;
	struct<8> Var111;
	
	Var0.f_6 = 1092616192;
	Var13.f_6 = 1092616192;
	Var26.f_6 = 1092616192;
	Var35 = 3;
	Var35.f_1.f_1 = 10;
	Var35.f_1.f_1.f_1.f_1 = 1092616192;
	Var35.f_1.f_1.f_1.f_2.f_1 = 1092616192;
	Var35.f_1.f_1.f_1.f_2.f_2.f_1 = 1092616192;
	Var35.f_1.f_1.f_1.f_2.f_2.f_2.f_1 = 1092616192;
	Var35.f_1.f_1.f_1.f_2.f_2.f_2.f_2.f_1 = 1092616192;
	Var35.f_1.f_1.f_1.f_2.f_2.f_2.f_2.f_2.f_1 = 1092616192;
	Var35.f_1.f_1.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1092616192;
	Var35.f_1.f_1.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1092616192;
	Var35.f_1.f_1.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1092616192;
	Var35.f_1.f_1.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1092616192;
	Var35.f_1.f_22 = 1073741824;
	Var35.f_1.f_23 = 1073741824;
	Var35.f_1.f_25.f_1 = 10;
	Var35.f_1.f_25.f_1.f_1.f_1 = 1092616192;
	Var35.f_1.f_25.f_1.f_1.f_2.f_1 = 1092616192;
	Var35.f_1.f_25.f_1.f_1.f_2.f_2.f_1 = 1092616192;
	Var35.f_1.f_25.f_1.f_1.f_2.f_2.f_2.f_1 = 1092616192;
	Var35.f_1.f_25.f_1.f_1.f_2.f_2.f_2.f_2.f_1 = 1092616192;
	Var35.f_1.f_25.f_1.f_1.f_2.f_2.f_2.f_2.f_2.f_1 = 1092616192;
	Var35.f_1.f_25.f_1.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1092616192;
	Var35.f_1.f_25.f_1.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1092616192;
	Var35.f_1.f_25.f_1.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1092616192;
	Var35.f_1.f_25.f_1.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1092616192;
	Var35.f_1.f_25.f_22 = 1073741824;
	Var35.f_1.f_25.f_23 = 1073741824;
	Var35.f_1.f_25.f_25.f_1 = 10;
	Var35.f_1.f_25.f_25.f_1.f_1.f_1 = 1092616192;
	Var35.f_1.f_25.f_25.f_1.f_1.f_2.f_1 = 1092616192;
	Var35.f_1.f_25.f_25.f_1.f_1.f_2.f_2.f_1 = 1092616192;
	Var35.f_1.f_25.f_25.f_1.f_1.f_2.f_2.f_2.f_1 = 1092616192;
	Var35.f_1.f_25.f_25.f_1.f_1.f_2.f_2.f_2.f_2.f_1 = 1092616192;
	Var35.f_1.f_25.f_25.f_1.f_1.f_2.f_2.f_2.f_2.f_2.f_1 = 1092616192;
	Var35.f_1.f_25.f_25.f_1.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1092616192;
	Var35.f_1.f_25.f_25.f_1.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1092616192;
	Var35.f_1.f_25.f_25.f_1.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1092616192;
	Var35.f_1.f_25.f_25.f_1.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1092616192;
	Var35.f_1.f_25.f_25.f_22 = 1073741824;
	Var35.f_1.f_25.f_25.f_23 = 1073741824;
	Var111 = 10;
	Var111.f_1.f_3 = 1092616192;
	Var111.f_1.f_4 = 1073741824;
	Var111.f_1.f_5 = 1073741824;
	Var111.f_1.f_8.f_3 = 1092616192;
	Var111.f_1.f_8.f_4 = 1073741824;
	Var111.f_1.f_8.f_5 = 1073741824;
	Var111.f_1.f_8.f_8.f_3 = 1092616192;
	Var111.f_1.f_8.f_8.f_4 = 1073741824;
	Var111.f_1.f_8.f_8.f_5 = 1073741824;
	Var111.f_1.f_8.f_8.f_8.f_3 = 1092616192;
	Var111.f_1.f_8.f_8.f_8.f_4 = 1073741824;
	Var111.f_1.f_8.f_8.f_8.f_5 = 1073741824;
	Var111.f_1.f_8.f_8.f_8.f_8.f_3 = 1092616192;
	Var111.f_1.f_8.f_8.f_8.f_8.f_4 = 1073741824;
	Var111.f_1.f_8.f_8.f_8.f_8.f_5 = 1073741824;
	Var111.f_1.f_8.f_8.f_8.f_8.f_8.f_3 = 1092616192;
	Var111.f_1.f_8.f_8.f_8.f_8.f_8.f_4 = 1073741824;
	Var111.f_1.f_8.f_8.f_8.f_8.f_8.f_5 = 1073741824;
	Var111.f_1.f_8.f_8.f_8.f_8.f_8.f_8.f_3 = 1092616192;
	Var111.f_1.f_8.f_8.f_8.f_8.f_8.f_8.f_4 = 1073741824;
	Var111.f_1.f_8.f_8.f_8.f_8.f_8.f_8.f_5 = 1073741824;
	Var111.f_1.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_3 = 1092616192;
	Var111.f_1.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_4 = 1073741824;
	Var111.f_1.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_5 = 1073741824;
	Var111.f_1.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_3 = 1092616192;
	Var111.f_1.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_4 = 1073741824;
	Var111.f_1.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_5 = 1073741824;
	Var111.f_1.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_3 = 1092616192;
	Var111.f_1.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_4 = 1073741824;
	Var111.f_1.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_5 = 1073741824;
	Var35[0 /*25*/] = 2;
	Var35[0 /*25*/].f_1[0 /*2*/] = 33554432;
	Var35[0 /*25*/].f_1[0 /*2*/].f_1 = 6f;
	Var35[0 /*25*/].f_1[1 /*2*/] = 805306368;
	Var35[0 /*25*/].f_1[1 /*2*/].f_1 = 6f;
	Var35[0 /*25*/].f_22 = 3f;
	Var35[0 /*25*/].f_23 = 0f;
	Var35[0 /*25*/].f_24 = 1f;
	iLocal_991[0] = -1;
	iLocal_991[1] = -1;
	iLocal_991[2] = -1;
	iLocal_991[3] = -1;
	iLocal_991[4] = -1;
	iLocal_991[5] = -1;
	iLocal_991[6] = -1;
	iLocal_991[7] = -1;
	iLocal_991[8] = -1;
	iLocal_991[9] = -1;
	iLocal_991[10] = -1;
	iLocal_991[11] = -1;
	iLocal_991[12] = -1;
	iLocal_991[13] = -1;
	iLocal_991[14] = -1;
	iLocal_991[15] = -1;
	iLocal_991[16] = -1;
	iLocal_991[17] = -1;
	iLocal_991[18] = -1;
	iLocal_991[19] = -1;
	iLocal_991[20] = -1;
	iLocal_991[21] = -1;
	iLocal_991[22] = -1;
	iLocal_991[23] = -1;
	iLocal_991[24] = -1;
	iLocal_991[25] = 0;
	iLocal_991[26] = -1;
	iLocal_991[27] = -1;
	iLocal_991[28] = 0;
	iLocal_991[29] = 0;
	iLocal_991[30] = -1;
	iLocal_991[31] = -1;
	Var111[0 /*8*/].f_1 = 0;
	Var111[0 /*8*/].f_2 = 0;
	Var111[0 /*8*/] = 64;
	Var111[0 /*8*/].f_3 = 8f;
	Var111[0 /*8*/].f_4 = 2f;
	Var111[0 /*8*/].f_5 = 8f;
	Var111[0 /*8*/].f_6 = 2f;
	Var111[0 /*8*/].f_7 = 10f;
	Var111[1 /*8*/].f_1 = 0;
	Var111[1 /*8*/].f_2 = 0;
	Var111[1 /*8*/] = 8192;
	Var111[1 /*8*/].f_3 = 8f;
	Var111[1 /*8*/].f_4 = 2f;
	Var111[1 /*8*/].f_5 = 8f;
	Var111[1 /*8*/].f_6 = 2f;
	Var111[1 /*8*/].f_7 = 0f;
	Var111[2 /*8*/].f_1 = 1;
	Var111[2 /*8*/].f_2 = 0;
	Var111[2 /*8*/] = 245760;
	Var111[2 /*8*/].f_3 = 36f;
	Var111[2 /*8*/].f_4 = 0f;
	Var111[2 /*8*/].f_5 = 0f;
	Var111[2 /*8*/].f_6 = 0f;
	Var111[2 /*8*/].f_7 = 0f;
	Var111[3 /*8*/].f_1 = 1;
	Var111[3 /*8*/].f_2 = 0;
	Var111[3 /*8*/] = 2176;
	Var111[3 /*8*/].f_3 = 9f;
	Var111[3 /*8*/].f_4 = 0f;
	Var111[3 /*8*/].f_5 = 0f;
	Var111[3 /*8*/].f_6 = 0f;
	Var111[3 /*8*/].f_7 = 0f;
	Var111[4 /*8*/].f_1 = 1;
	Var111[4 /*8*/].f_2 = 3;
	Var111[4 /*8*/] = 6291456;
	Var111[4 /*8*/].f_3 = 9f;
	Var111[4 /*8*/].f_4 = 0f;
	Var111[4 /*8*/].f_5 = 0f;
	Var111[4 /*8*/].f_6 = 0f;
	Var111[4 /*8*/].f_7 = 10.3971f;
	Var111[5 /*8*/].f_1 = 0;
	Var111[5 /*8*/].f_2 = 0;
	Var111[5 /*8*/] = 1572864;
	Var111[5 /*8*/].f_3 = 9f;
	Var111[5 /*8*/].f_4 = 2f;
	Var111[5 /*8*/].f_5 = 7f;
	Var111[5 /*8*/].f_6 = 2f;
	Var111[5 /*8*/].f_7 = 14.5f;
	Var111[6 /*8*/].f_1 = 0;
	Var111[6 /*8*/].f_2 = 0;
	Var111[6 /*8*/] = 4096;
	Var111[6 /*8*/].f_3 = 13.7f;
	Var111[6 /*8*/].f_4 = 2f;
	Var111[6 /*8*/].f_5 = 2.3f;
	Var111[6 /*8*/].f_6 = 2f;
	Var111[6 /*8*/].f_7 = 10.3f;
	iLocal_1024[0] = -1;
	iLocal_1024[1] = -1;
	iLocal_1024[2] = -1;
	iLocal_1024[3] = -1;
	iLocal_1024[4] = -1;
	iLocal_1024[5] = -1;
	iLocal_1024[6] = 0;
	iLocal_1024[7] = 3;
	iLocal_1024[8] = -1;
	iLocal_1024[9] = -1;
	iLocal_1024[10] = -1;
	iLocal_1024[11] = 3;
	iLocal_1024[12] = 6;
	iLocal_1024[13] = 1;
	iLocal_1024[14] = 2;
	iLocal_1024[15] = 2;
	iLocal_1024[16] = 2;
	iLocal_1024[17] = 2;
	iLocal_1024[18] = -1;
	iLocal_1024[19] = 5;
	iLocal_1024[20] = 5;
	iLocal_1024[21] = 4;
	iLocal_1024[22] = 4;
	iLocal_1024[23] = -1;
	iLocal_1024[24] = -1;
	iLocal_1024[25] = -1;
	iLocal_1024[26] = -1;
	iLocal_1024[27] = -1;
	iLocal_1024[28] = -1;
	iLocal_1024[29] = -1;
	iLocal_1024[30] = -1;
	iLocal_1024[31] = -1;
	func_48(&Var35, &Var111);
	unk_0x01677A72A8BDCD1A();
	Var13 = { 2631.126f, 5880.352f, -59f };
	Var13.f_3 = 3f;
	Var13.f_4 = 1;
	Var13.f_5 = 0;
	Var13.f_6 = 10f;
	Var13.f_7 = 0f;
	Var13.f_8 = -10f;
	Var13.f_9 = 6.5f;
	Var13.f_10 = 252.9831f;
	Var13.f_11 = 0.019f;
	Var13.f_12 = 0f;
	func_47(0, &Var13);
	Var13 = { 2631.126f, 5880.352f, -59f };
	Var13.f_3 = 3f;
	Var13.f_4 = 1;
	Var13.f_5 = 0;
	Var13.f_6 = 10f;
	Var13.f_7 = 0f;
	Var13.f_8 = 10f;
	Var13.f_9 = -6.5f;
	Var13.f_10 = 252.9831f;
	Var13.f_11 = 0.019f;
	Var13.f_12 = 0f;
	func_47(1, &Var13);
	Var13 = { 2631.126f, 5881.852f, -59f };
	Var13.f_3 = 3f;
	Var13.f_4 = 9;
	Var13.f_5 = 0;
	Var13.f_6 = 10f;
	Var13.f_7 = 0f;
	Var13.f_8 = -10f;
	Var13.f_9 = 6.5f;
	Var13.f_10 = 252.9831f;
	Var13.f_11 = 0.019f;
	Var13.f_12 = 4f;
	func_47(2, &Var13);
	Var13 = { 2631.126f, 5881.852f, -59f };
	Var13.f_3 = 3f;
	Var13.f_4 = 9;
	Var13.f_5 = 0;
	Var13.f_6 = 10f;
	Var13.f_7 = 0f;
	Var13.f_8 = 10f;
	Var13.f_9 = -6.5f;
	Var13.f_10 = 252.9831f;
	Var13.f_11 = 0.019f;
	Var13.f_12 = 4f;
	func_47(3, &Var13);
	Var13 = { 2631.126f, 5880.852f, -59f };
	Var13.f_3 = 3f;
	Var13.f_4 = 2;
	Var13.f_5 = 0;
	Var13.f_6 = 10f;
	Var13.f_7 = 0f;
	Var13.f_8 = -10f;
	Var13.f_9 = 5f;
	Var13.f_10 = 252.9831f;
	Var13.f_11 = 0.019f;
	Var13.f_12 = 0.5f;
	func_47(4, &Var13);
	Var13 = { 2631.126f, 5880.852f, -59f };
	Var13.f_3 = 3f;
	Var13.f_4 = 2;
	Var13.f_5 = 0;
	Var13.f_6 = 10f;
	Var13.f_7 = 0f;
	Var13.f_8 = -10f;
	Var13.f_9 = 5f;
	Var13.f_10 = 221.3841f;
	Var13.f_11 = 0.019f;
	Var13.f_12 = 0.5f;
	func_47(5, &Var13);
	Var26 = { 2631.15f, 5880.355f, -60.7105f };
	Var26.f_3 = 0f;
	Var26.f_4 = 0;
	Var26.f_5 = 2000;
	Var26.f_6 = 0f;
	Var26.f_7 = 0f;
	Var26.f_8 = 15;
	func_46(6, &Var26);
	Var0 = { 2630.626f, 5874.852f, -59f };
	Var0.f_3 = 3f;
	Var0.f_4 = 3;
	Var0.f_5 = 2000;
	Var0.f_6 = 11f;
	Var0.f_7 = 0f;
	Var0.f_8 = { -90f, 0f, 0f };
	Var0.f_11 = 1f;
	Var0.f_12 = 0f;
	func_29(7, &Var0);
	Var0 = { 2630.626f, 5874.852f, -59f };
	Var0.f_3 = 3f;
	Var0.f_4 = 3;
	Var0.f_5 = 2000;
	Var0.f_6 = 4.5f;
	Var0.f_7 = 0f;
	Var0.f_8 = { -90f, 0f, 0f };
	Var0.f_11 = 1f;
	Var0.f_12 = 0f;
	func_29(11, &Var0);
	Var26 = { 2631.15f, 5863.85f, -60.7105f };
	Var26.f_3 = 0f;
	Var26.f_4 = 0;
	Var26.f_5 = 2000;
	Var26.f_6 = 23.7323f;
	Var26.f_7 = 0f;
	Var26.f_8 = 9;
	func_46(12, &Var26);
	Var26 = { 2631.15f, 5874.85f, -60.7105f };
	Var26.f_3 = 0f;
	Var26.f_4 = 0;
	Var26.f_5 = 2000;
	Var26.f_6 = 5f;
	Var26.f_7 = 0f;
	Var26.f_8 = 7;
	func_46(13, &Var26);
	Var0 = { 2625.126f, 5878.852f, -59f };
	Var0.f_3 = 3f;
	Var0.f_4 = 3;
	Var0.f_5 = 2000;
	Var0.f_6 = 5.5f;
	Var0.f_7 = 90f;
	Var0.f_8 = { -90f, 0f, -90f };
	Var0.f_11 = 4f;
	Var0.f_12 = 0f;
	func_29(14, &Var0);
	Var0 = { 2631.626f, 5878.352f, -59f };
	Var0.f_3 = 3f;
	Var0.f_4 = 2;
	Var0.f_5 = 2000;
	Var0.f_6 = 5.5f;
	Var0.f_7 = 90f;
	Var0.f_8 = { -90f, 0f, -90f };
	Var0.f_11 = 3f;
	Var0.f_12 = 0f;
	func_29(15, &Var0);
	Var0 = { 2637.126f, 5878.852f, -59f };
	Var0.f_3 = 3f;
	Var0.f_4 = 3;
	Var0.f_5 = 2000;
	Var0.f_6 = 5.5f;
	Var0.f_7 = -90f;
	Var0.f_8 = { -90f, 0f, -90f };
	Var0.f_11 = 4f;
	Var0.f_12 = 0f;
	func_29(16, &Var0);
	Var0 = { 2630.626f, 5878.352f, -59f };
	Var0.f_3 = 3f;
	Var0.f_4 = 2;
	Var0.f_5 = 2000;
	Var0.f_6 = 5.5f;
	Var0.f_7 = -90f;
	Var0.f_8 = { -90f, 0f, -90f };
	Var0.f_11 = 3f;
	Var0.f_12 = 0f;
	func_29(17, &Var0);
	Var0 = { 2632.126f, 5873.352f, -59f };
	Var0.f_3 = 3f;
	Var0.f_4 = 5;
	Var0.f_5 = 2000;
	Var0.f_6 = 0f;
	Var0.f_7 = 90f;
	Var0.f_8 = { -90f, 0f, 0f };
	Var0.f_11 = 2f;
	Var0.f_12 = -1f;
	func_29(19, &Var0);
	Var0 = { 2630.126f, 5873.352f, -59f };
	Var0.f_3 = 3f;
	Var0.f_4 = 5;
	Var0.f_5 = 2000;
	Var0.f_6 = 0f;
	Var0.f_7 = 90f;
	Var0.f_8 = { -90f, 0f, -180f };
	Var0.f_11 = 2f;
	Var0.f_12 = -1f;
	func_29(20, &Var0);
	Var0 = { 2631.126f, 5873.352f, -59f };
	Var0.f_3 = 3f;
	Var0.f_4 = 13;
	Var0.f_5 = 2000;
	Var0.f_6 = 4.5f;
	Var0.f_7 = 90f;
	Var0.f_8 = { -90f, 0f, 0f };
	Var0.f_11 = 6f;
	Var0.f_12 = 1f;
	func_29(21, &Var0);
	Var0 = { 2631.126f, 5873.352f, -59f };
	Var0.f_3 = 3f;
	Var0.f_4 = 13;
	Var0.f_5 = 2000;
	Var0.f_6 = 4.5f;
	Var0.f_7 = -90f;
	Var0.f_8 = { -90f, 0f, -180f };
	Var0.f_11 = 6f;
	Var0.f_12 = 1f;
	func_29(22, &Var0);
	Var0 = { 2629.626f, 5863.852f, -59f };
	Var0.f_3 = 3f;
	Var0.f_4 = 4;
	Var0.f_5 = 2000;
	Var0.f_6 = 6f;
	Var0.f_7 = 90f;
	Var0.f_8 = { -90f, 0f, 0f };
	Var0.f_11 = 2f;
	Var0.f_12 = 1f;
	func_29(23, &Var0);
	Var0 = { 2632.626f, 5863.852f, -59f };
	Var0.f_3 = 3f;
	Var0.f_4 = 4;
	Var0.f_5 = 2000;
	Var0.f_6 = 6f;
	Var0.f_7 = 90f;
	Var0.f_8 = { -90f, 0f, -180f };
	Var0.f_11 = 2f;
	Var0.f_12 = 1f;
	func_29(24, &Var0);
	Var26 = { 2631.15f, 5863.85f, -60.7105f };
	Var26.f_3 = 3f;
	Var26.f_4 = 14;
	Var26.f_5 = 2000;
	Var26.f_6 = 10.3636f;
	Var26.f_7 = 0f;
	Var26.f_8 = 8;
	func_46(25, &Var26);
	Var13 = { 2628.376f, 5864.852f, -59f };
	Var13.f_3 = 3f;
	Var13.f_4 = 18;
	Var13.f_5 = 0;
	Var13.f_6 = 10f;
	Var13.f_7 = 0f;
	Var13.f_8 = 0f;
	Var13.f_9 = 2.25f;
	Var13.f_10 = 35f;
	Var13.f_11 = 0.5714f;
	Var13.f_12 = 8.5f;
	func_47(26, &Var13);
	Var13 = { 2633.876f, 5864.852f, -59f };
	Var13.f_3 = 3f;
	Var13.f_4 = 18;
	Var13.f_5 = 0;
	Var13.f_6 = 10f;
	Var13.f_7 = 0f;
	Var13.f_8 = 0f;
	Var13.f_9 = -2.25f;
	Var13.f_10 = 35f;
	Var13.f_11 = 0.5714f;
	Var13.f_12 = 8.5f;
	func_47(27, &Var13);
	Var0 = { 2630.126f, 5863.852f, -59f };
	Var0.f_3 = 3f;
	Var0.f_4 = 2;
	Var0.f_5 = 2000;
	Var0.f_6 = 10.3636f;
	Var0.f_7 = 0f;
	Var0.f_8 = { -90f, 0f, 0f };
	Var0.f_11 = 0.5f;
	Var0.f_12 = 1f;
	func_29(28, &Var0);
	Var0 = { 2632.126f, 5863.852f, -59f };
	Var0.f_3 = 3f;
	Var0.f_4 = 2;
	Var0.f_5 = 2000;
	Var0.f_6 = 10.3636f;
	Var0.f_7 = 0f;
	Var0.f_8 = { -90f, 0f, -180f };
	Var0.f_11 = 0.5f;
	Var0.f_12 = 1f;
	func_29(29, &Var0);
	Var0 = { 2626.626f, 5863.852f, -59f };
	Var0.f_3 = 3f;
	Var0.f_4 = 6;
	Var0.f_5 = 2000;
	Var0.f_6 = 9.2203f;
	Var0.f_7 = 0f;
	Var0.f_8 = { -90f, 0f, -180f };
	Var0.f_11 = 2.5f;
	Var0.f_12 = -1f;
	func_29(30, &Var0);
	Var0 = { 2635.626f, 5863.852f, -59f };
	Var0.f_3 = 3f;
	Var0.f_4 = 6;
	Var0.f_5 = 2000;
	Var0.f_6 = 9.2203f;
	Var0.f_7 = 0f;
	Var0.f_8 = { -90f, 0f, 0f };
	Var0.f_11 = 2.5f;
	Var0.f_12 = -1f;
	func_29(31, &Var0);
	unk_0x976D155439608592();
}

void func_29(bool bParam0, var uParam1)
{
	float fVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	struct<3> Var4;
	float fVar7;
	struct<3> Var8;
	struct<3> Var11;
	struct<3> Var14;
	struct<3> Var17;
	struct<3> Var20;
	float fVar23;
	int iVar24;
	
	if (!func_41(bParam0, uParam1, &fVar0, &bVar1))
	{
		return;
	}
	bVar2 = func_40(0);
	bVar3 = func_40(1);
	Var4 = { *uParam1 };
	if (fVar0 > 0f)
	{
		Var4.f_0 = (Var4.f_0 + (SYSTEM::SIN(uParam1->f_7) * fVar0));
		Var4.f_1 = (Var4.f_1 + (SYSTEM::COS(uParam1->f_7) * fVar0));
	}
	fVar7 = (uParam1->f_11 / IntToFloat(func_39(1, (uParam1->f_4 - 1))));
	Var8 = { func_38(uParam1->f_8) };
	Var11 = { func_37(uParam1->f_8) * Vector(uParam1->f_3, uParam1->f_3, uParam1->f_3) };
	Var14 = { Var4 + Var11 * Vector(0.5f, 0.5f, 0.5f) };
	if (uParam1->f_4 > 1)
	{
		Var14 = { Var14 + Var8 * Vector(uParam1->f_11, uParam1->f_11, uParam1->f_11) * Vector(0.5f, 0.5f, 0.5f) };
	}
	func_34(bParam0, Var14, bVar1);
	iVar24 = 0;
	while (iVar24 <= (uParam1->f_4 - 1))
	{
		Var17 = { Var4 + Var8 * Vector(fVar23, fVar23, fVar23) };
		Var20 = { Var17 + Var11 + Var8 * Vector(uParam1->f_12, uParam1->f_12, uParam1->f_12) };
		func_30(Var17, Var20, bVar1, bVar2, bVar3);
		fVar23 = (fVar23 + fVar7);
		iVar24++;
	}
}

void func_30(struct<3> Param0, struct<3> Param3, bool bParam6, bool bParam7, bool bParam8)
{
	if (bLocal_1061)
	{
		return;
	}
	if (MISC::ABSF((Param0.f_2 - -59f)) < 0.05f && (Param0.f_0 > (2638.029f + 0.1f) || Param0.f_0 < (2624.229f - 0.1f)))
	{
		return;
	}
	if (iLocal_1060)
	{
		bParam6 = true;
	}
	iLocal_989++;
	if (!bParam8)
	{
		func_33(Param0, &Param3, bParam6);
	}
	if (!bParam7)
	{
		func_31(Param0, Param3, iLocal_989, bParam6);
	}
}

void func_31(struct<3> Param0, struct<3> Param3, int iParam6, bool bParam7)
{
	struct<4> Var0;
	struct<4> Var4;
	float fVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	struct<3> Var13;
	struct<3> Var16;
	float fVar19;
	struct<3> Var20;
	float fVar23;
	float fVar24;
	bool bVar25;
	float fVar26;
	float fVar27;
	float fVar28;
	int iVar29;
	int iVar30;
	struct<3> Var31;
	
	Var0.f_3 = 255;
	Var0.f_0 = 255;
	Var4.f_3 = 255;
	Var4.f_0 = 255;
	Var4.f_1 = 160;
	Var4.f_2 = 160;
	fVar8 = 100f;
	fVar9 = 10f;
	fVar10 = 5f;
	fVar11 = 1f;
	fVar12 = 0.03f;
	Var13 = { func_19(Param3 - Param0) };
	Var16 = { Param0 + Param3 / Vector(2f, 2f, 2f) };
	fVar19 = SYSTEM::VDIST(Param0, Param3);
	Var20 = { MISC::GET_CLOSEST_POINT_ON_LINE(Local_978, Param0, Param3, true) };
	fVar23 = SYSTEM::VDIST(Var20, Local_978);
	fVar24 = (1f - SYSTEM::POW(2.718282f, (-fVar23 * 0.15f)));
	if (iLocal_985)
	{
		if (fVar23 < 3f)
		{
			bVar25 = true;
		}
	}
	else if (fVar23 < 12f)
	{
		bVar25 = true;
	}
	if (bVar25)
	{
		Local_103[iLocal_102 /*5*/].f_1 = { Var20 };
		Local_103[iLocal_102 /*5*/].f_4 = iLocal_985;
		Local_103[iLocal_102 /*5*/] = fVar23;
		if (!iLocal_985)
		{
			Local_103[iLocal_102 /*5*/] = (Local_103[iLocal_102 /*5*/] - 4f);
		}
		iLocal_102++;
	}
	if (bParam7)
	{
		fVar12 = 0.01f;
		fVar8 = 5f;
		fVar9 = 60f;
		fVar10 = 10f;
	}
	iParam6 *= 1000;
	fVar26 = ((SYSTEM::SIN((IntToFloat((MISC::GET_GAME_TIMER() + iParam6 * 1000)) * fVar8)) * 0.5f) + 0.5f);
	if (bParam7)
	{
		Var4.f_3 = (200 - SYSTEM::ROUND(((IntToFloat(SYSTEM::ROUND(fVar26)) * fVar9) * 2f)));
		Var0.f_3 = (255 - SYSTEM::ROUND(((IntToFloat(SYSTEM::ROUND(fVar26)) * fVar10) * 3f)));
		fVar11 = (fVar11 - (fVar26 * 0.2f));
	}
	else
	{
		Var4.f_3 = (255 - SYSTEM::ROUND(((fVar26 * fVar9) * (1f + (10f * (1f - fLocal_984))))));
		Var0.f_3 = (255 - SYSTEM::ROUND(((fVar26 * fVar10) * (1f + (10f * (1f - fLocal_984))))));
		fVar11 = (fVar11 - ((IntToFloat(SYSTEM::ROUND(fVar26)) * 0.2f) * (1f - fLocal_984)));
	}
	unk_0x330F4FA20FB57738(Var16, Var13, Var0.f_0, Var0.f_1, Var0.f_2, fLocal_986, ((10f * fVar11) * fLocal_984), (fVar19 - 0.05f), 250f);
	fVar27 = (fVar12 * 1.7f);
	fVar28 = (fVar27 - ((0.2f * fVar24) * fVar27));
	fVar28 = (fVar28 - ((fVar28 * (1f - fLocal_984)) * 0.8f));
	iVar29 = SYSTEM::ROUND((IntToFloat(Var0.f_3) * ((fLocal_984 * 0.5f) + 0.5f)));
	iVar30 = SYSTEM::ROUND(((IntToFloat(Var4.f_3) - (235f * fVar24)) * fLocal_984));
	Var0.f_0 = (Var0.f_0 - SYSTEM::ROUND((90f * fVar24)));
	Var0.f_2 = (Var0.f_2 + SYSTEM::ROUND((30f * (1f - fVar24))));
	unk_0xE59B0A106CC15FC2(Param3 - Var13 * Vector(0.05f, 0.05f, 0.05f), 0.116f, Var0.f_0, Var0.f_1, Var0.f_2, ((0.965f - (fVar26 * 0.138f)) * fLocal_984));
	unk_0x9F7996F4E32B3026(&Var31, Param0, Param3);
	fVar19 = (fVar19 / 2f);
	func_32(Var16, Var31, (fVar19 + 0.1f), fVar28, "mpinvperscommon", "beam_glow_tapered", Var0.f_0, Var0.f_1, Var0.f_2, iVar29);
	func_32(Var16, Var31, (fVar19 + 0.1f), fVar12, "mpinvperscommon", "beam_middle", Var4.f_0, Var4.f_1, Var4.f_2, iVar30);
}

void func_32(struct<3> Param0, struct<3> Param3, float fParam6, float fParam7, char* sParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13)
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	struct<3> Var9;
	
	Var0 = { -fParam7, 0f, fParam6 };
	Var3 = { fParam7, 0f, fParam6 };
	Var6 = { -fParam7, 0f, -fParam6 };
	Var9 = { fParam7, 0f, -fParam6 };
	unk_0xA7804512D1FDD22A(&Var0, Param3);
	unk_0xA7804512D1FDD22A(&Var3, Param3);
	unk_0xA7804512D1FDD22A(&Var6, Param3);
	unk_0xA7804512D1FDD22A(&Var9, Param3);
	Var0 = { Var0 + Param0 };
	Var3 = { Var3 + Param0 };
	Var6 = { Var6 + Param0 };
	Var9 = { Var9 + Param0 };
	GRAPHICS::DRAW_TEXTURED_POLY(Var3, Var0, Var9, iParam10, iParam11, iParam12, iParam13, sParam8, sParam9, 1f, 0f, 1f, 0f, 0f, 1f, 1f, 1f, 1f);
	GRAPHICS::DRAW_TEXTURED_POLY(Var6, Var9, Var0, iParam10, iParam11, iParam12, iParam13, sParam8, sParam9, -1f, 0f, 1f, 0f, 0f, 1f, -1f, -1f, 1f);
}

void func_33(struct<3> Param0, var uParam3, bool bParam4)
{
	struct<3> Var0;
	int iVar3;
	struct<3> Var4;
	var uVar7;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	
	if (!bLocal_974)
	{
		return;
	}
	Var0 = { MISC::GET_CLOSEST_POINT_ON_LINE(Local_975, Param0, *uParam3, true) };
	if (SYSTEM::VDIST2(Var0, Local_975) > 2.25f)
	{
		return;
	}
	iVar11 = SHAPETEST::START_SHAPE_TEST_SWEPT_SPHERE(Param0, *uParam3, 0.001f, 24, 0, 3);
	if (SHAPETEST::GET_SHAPE_TEST_RESULT(iVar11, &iVar3, &Var4, &uVar7, &iVar10) != 2)
	{
		iVar3 = 0;
	}
	if (iVar3 != 0)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iVar10) || (ENTITY::GET_ENTITY_TYPE(iVar10) != 0 && ENTITY::IS_ENTITY_DEAD(iVar10, false)))
		{
			iVar3 = 0;
		}
	}
	if (iVar3 != 0)
	{
		*uParam3 = { Var4 };
		if (fLocal_984 > 0.9f && !bParam4)
		{
			if (ENTITY::IS_ENTITY_A_PED(iVar10))
			{
				iVar12 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar10);
				if (iVar12 == iLocal_973)
				{
					if (iLocal_983 < 8)
					{
						Local_45[iLocal_983 /*7*/].f_2 = { Var4 };
						Local_45[iLocal_983 /*7*/].f_5 = 1;
						Local_45[iLocal_983 /*7*/].f_6 = 0;
					}
					iLocal_983++;
				}
			}
			else if (ENTITY::IS_ENTITY_AN_OBJECT(iVar10))
			{
				iVar13 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iVar10);
				if (iVar13 == iLocal_981)
				{
					if (iLocal_983 < 8)
					{
						Local_45[iLocal_983 /*7*/].f_2 = { Var4 };
						Local_45[iLocal_983 /*7*/].f_5 = 1;
						Local_45[iLocal_983 /*7*/].f_6 = 1;
					}
					iLocal_983++;
				}
			}
		}
	}
}

void func_34(bool bParam0, struct<3> Param1, var uParam4)
{
	if (Local_1094[bParam0 /*3*/].f_1 != 0)
	{
		func_35(&(Local_1094[bParam0 /*3*/].f_2), Param1, "Deactivate_Some", "DLC_26-1_Heist_Laser_Grid_Minigame_Sounds");
	}
	else
	{
		func_6(&(Local_1094[bParam0 /*3*/].f_2));
	}
}

void func_35(int iParam0, struct<3> Param1, char* sParam4, char* sParam5)
{
	if (*iParam0 > -1)
	{
		AUDIO::UPDATE_SOUND_COORD(*iParam0, Param1);
	}
	else
	{
		func_36(iParam0, sParam4, Param1, sParam5, 0, 0, 0);
	}
}

int func_36(int iParam0, char* sParam1, struct<3> Param2, char* sParam5, bool bParam6, int iParam7, bool bParam8)
{
	if (*iParam0 == -1)
	{
		*iParam0 = AUDIO::GET_SOUND_ID();
		AUDIO::PLAY_SOUND_FROM_COORD(*iParam0, sParam1, Param2, sParam5, bParam6, iParam7, bParam8);
		return 1;
	}
	return 0;
}

Vector3 func_37(struct<3> Param0)
{
	struct<9> Var0;
	
	Var0 = { func_21(Param0) };
	return func_19(Var0.f_1, Var0.f_4, Var0.f_7);
}

Vector3 func_38(struct<3> Param0)
{
	struct<9> Var0;
	
	Var0 = { func_21(Param0) };
	return func_19(Var0.f_0, Var0.f_3, Var0.f_6);
}

int func_39(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

bool func_40(int iParam0)
{
	return (Global_1935234.f_1 != 0 && BitTest(Global_1935234.f_1, iParam0));
}

int func_41(bool bParam0, var uParam1, var uParam2, var uParam3)
{
	if (!func_44(bParam0, uParam1, uParam2) && !func_43(bParam0))
	{
		Local_1094[bParam0 /*3*/] = 0;
		if (Local_1094[bParam0 /*3*/].f_2 != -1 && AUDIO::HAS_SOUND_FINISHED(Local_1094[bParam0 /*3*/].f_2))
		{
			func_6(&(Local_1094[bParam0 /*3*/].f_2));
		}
		return 0;
	}
	if (Local_1094[bParam0 /*3*/] == 0)
	{
		Local_1094[bParam0 /*3*/] = MISC::GET_GAME_TIMER();
	}
	*uParam3 = (func_42(bParam0) || (uParam1->f_5 > 0 && (MISC::GET_GAME_TIMER() - Local_1094[bParam0 /*3*/]) <= uParam1->f_5));
	return 1;
}

bool func_42(bool bParam0)
{
	return Local_1094[bParam0 /*3*/].f_1 > 0;
}

bool func_43(bool bParam0)
{
	if (BitTest(Global_1935234.f_2, bParam0))
	{
		return 0;
	}
	if (Local_1094[bParam0 /*3*/].f_1 == 0)
	{
		Local_1094[bParam0 /*3*/].f_1 = MISC::GET_GAME_TIMER() + 1500;
		return 1;
	}
	return Local_1094[bParam0 /*3*/].f_1 > MISC::GET_GAME_TIMER();
}

int func_44(bool bParam0, var uParam1, var uParam2)
{
	fLocal_984 = 1f;
	if (!BitTest(Global_1935234.f_2, bParam0))
	{
		return 0;
	}
	if (func_45(bParam0))
	{
		iLocal_985 = 0;
		if (BitTest(iLocal_990, bParam0))
		{
			if (iLocal_991[bParam0] > -1 && Local_1066[iLocal_991[bParam0] /*2*/] > -9000f)
			{
				*uParam2 = (uParam1->f_6 * Local_1066[iLocal_991[bParam0] /*2*/]);
				fLocal_984 = Local_1066[iLocal_991[bParam0] /*2*/].f_1;
			}
			else if (iLocal_1024[bParam0] > -1 && Local_1073[iLocal_1024[bParam0] /*2*/] > -9000f)
			{
				*uParam2 = (uParam1->f_6 * Local_1073[iLocal_1024[bParam0] /*2*/]);
				fLocal_984 = Local_1073[iLocal_1024[bParam0] /*2*/].f_1;
			}
		}
		else
		{
			return 0;
		}
	}
	else
	{
		iLocal_985 = 1;
	}
	return 1;
}

int func_45(bool bParam0)
{
	if (iLocal_991[bParam0] > -1 || iLocal_1024[bParam0] > -1)
	{
		return 1;
	}
	return 0;
}

void func_46(bool bParam0, var uParam1)
{
	float fVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	struct<3> Var4;
	struct<3> Var7;
	
	if (!func_41(bParam0, uParam1, &fVar0, &bVar1))
	{
		return;
	}
	bVar2 = func_40(0);
	bVar3 = func_40(1);
	Var4 = { *uParam1 };
	if (fVar0 > 0f)
	{
		Var4.f_1 = (Var4.f_1 + (SYSTEM::COS(uParam1->f_7) * fVar0));
	}
	func_34(bParam0, Var4, bVar1);
	if (BitTest(uParam1->f_8, 0))
	{
		Var7 = { 2624.109f, Var4.f_1, -59.638f };
		func_30(Var7, Var7 + Vector(0f, 0f, 14.083f), bVar1, bVar2, bVar3);
	}
	if (BitTest(uParam1->f_8, 1))
	{
		Var7 = { 2624.109f, Var4.f_1, -60.272f };
		func_30(Var7, Var7 + Vector(0f, 0f, 14.083f), bVar1, bVar2, bVar3);
	}
	if (BitTest(uParam1->f_8, 2))
	{
		Var7 = { 2624.109f, Var4.f_1, -61.103f };
		func_30(Var7, Var7 + Vector(0f, 0f, 14.083f), bVar1, bVar2, bVar3);
	}
	if (BitTest(uParam1->f_8, 3))
	{
		Var7 = { 2624.109f, Var4.f_1, -61.783f };
		func_30(Var7, Var7 + Vector(0f, 0f, 14.083f), bVar1, bVar2, bVar3);
	}
}

void func_47(bool bParam0, var uParam1)
{
	float fVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	struct<3> Var4;
	struct<3> Var7;
	int iVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	
	if (!func_41(bParam0, uParam1, &fVar0, &bVar1))
	{
		return;
	}
	iLocal_985 = 0;
	bVar2 = func_40(0);
	bVar3 = func_40(1);
	Var4 = { *uParam1 };
	if (fVar0 > 0f)
	{
		Var4.f_0 = (Var4.f_0 + (SYSTEM::SIN(uParam1->f_7) * fVar0));
		Var4.f_1 = (Var4.f_1 + (SYSTEM::COS(uParam1->f_7) * fVar0));
	}
	func_34(bParam0, Var4, bVar1);
	Var7 = { Var4 };
	fVar11 = (uParam1->f_12 / IntToFloat(func_39(1, (uParam1->f_4 - 1))));
	fVar12 = 0f;
	iVar10 = 0;
	while (iVar10 <= (uParam1->f_4 - 1))
	{
		Var7.f_1 = (Var4.f_1 + fVar12);
		fVar13 = ((fLocal_988 * uParam1->f_11) + uParam1->f_8);
		Var7.f_0 = (Var4.f_0 + (SYSTEM::SIN(((fVar12 + fVar13) * uParam1->f_10)) * uParam1->f_9));
		func_30(Var7, Var7 - Vector(uParam1->f_3, 0f, 0f), bVar1, bVar2, bVar3);
		fVar12 = (fVar12 + fVar11);
		iVar10++;
	}
}

void func_48(int iParam0, int iParam1)
{
	iLocal_990 = 0;
	func_60(iParam0);
	func_49(iParam1);
}

void func_49(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		func_50(iVar0, uParam0[iVar0 /*8*/]);
		iVar0++;
	}
}

void func_50(int iParam0, var uParam1)
{
	if (*uParam1 == 0)
	{
		Local_1073[iParam0 /*2*/] = 0f;
		Local_1073[iParam0 /*2*/].f_1 = 1f;
		return;
	}
	switch (uParam1->f_1)
	{
		case 0:
			func_57(iParam0, uParam1);
			break;
		
		case 1:
			func_51(iParam0, uParam1);
			break;
	}
}

void func_51(int iParam0, var uParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = ((uParam1->f_5 * 2f) + (uParam1->f_3 * 2f));
	fVar1 = (fLocal_988 + uParam1->f_7);
	fVar2 = (fVar1 - (IntToFloat(SYSTEM::FLOOR((fVar1 / fVar0))) * fVar0));
	fVar2 = (fVar2 - uParam1->f_5);
	if (fVar2 < 0f)
	{
		iLocal_990 = (iLocal_990 || *uParam1);
		Local_1073[iParam0 /*2*/] = 0f;
		Local_1073[iParam0 /*2*/].f_1 = 1f;
		return;
	}
	if (fVar2 < uParam1->f_3)
	{
		iLocal_990 = (iLocal_990 || *uParam1);
		Local_1073[iParam0 /*2*/] = func_52(0f, 1f, (fVar2 / uParam1->f_3), uParam1->f_2);
		Local_1073[iParam0 /*2*/].f_1 = 1f;
		return;
	}
	fVar2 = (fVar2 - uParam1->f_3);
	fVar2 = (fVar2 - uParam1->f_5);
	if (fVar2 < 0f)
	{
		iLocal_990 = (iLocal_990 || *uParam1);
		Local_1073[iParam0 /*2*/] = 1f;
		Local_1073[iParam0 /*2*/].f_1 = 1f;
		return;
	}
	if (fVar2 < uParam1->f_3)
	{
		iLocal_990 = (iLocal_990 || *uParam1);
		Local_1073[iParam0 /*2*/] = (1f - func_52(0f, 1f, (fVar2 / uParam1->f_3), uParam1->f_2));
		Local_1073[iParam0 /*2*/].f_1 = 1f;
		return;
	}
}

float func_52(float fParam0, float fParam1, float fParam2, int iParam3)
{
	var uVar0;
	
	fParam2 = func_55(fParam2, iParam3);
	switch (iParam3)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			uVar0 = func_54(fParam0, fParam1, fParam2);
			break;
		
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			uVar0 = func_53(fParam0, fParam1, fParam2);
			break;
	}
	return uVar0;
}

float func_53(float fParam0, float fParam1, float fParam2)
{
	return ((fParam0 * (1f - fParam2)) + (fParam1 * fParam2));
}

float func_54(float fParam0, float fParam1, float fParam2)
{
	return (fParam0 + ((fParam1 - fParam0) * fParam2));
}

float func_55(float fParam0, int iParam1)
{
	switch (iParam1)
	{
		case 1:
		case 6:
			fParam0 = SYSTEM::POW(fParam0, 2f);
			break;
		
		case 2:
		case 7:
			fParam0 = (1f - SYSTEM::POW((1f - fParam0), 2f));
			break;
		
		case 3:
		case 8:
			fParam0 = ((-SYSTEM::COS(func_56((3.141593f * fParam0))) / 2f) + 0.5f);
			break;
		
		case 4:
		case 9:
			fParam0 = (SYSTEM::POW(fParam0, 2f) * (3f - (2f * fParam0)));
			break;
	}
	return fParam0;
}

float func_56(float fParam0)
{
	return (fParam0 * 57.29578f);
}

void func_57(int iParam0, var uParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	fVar0 = ((uParam1->f_5 + uParam1->f_4) + uParam1->f_3);
	fVar1 = (fLocal_988 + uParam1->f_7);
	fVar2 = (fVar1 - (IntToFloat(SYSTEM::FLOOR((fVar1 / fVar0))) * fVar0));
	fVar2 = (fVar2 - uParam1->f_5);
	if (fVar2 < 0f)
	{
		Local_1073[iParam0 /*2*/] = -9999f;
		Local_1073[iParam0 /*2*/].f_1 = 1f;
		return;
	}
	fVar2 = (fVar2 - uParam1->f_4);
	if (fVar2 < 0f)
	{
		iLocal_990 = (iLocal_990 || *uParam1);
		Local_1073[iParam0 /*2*/] = 0f;
		Local_1073[iParam0 /*2*/].f_1 = 1f;
		return;
	}
	if (fVar2 < uParam1->f_3)
	{
		iLocal_990 = (iLocal_990 || *uParam1);
		fVar3 = func_58(&(Local_1073[iParam0 /*2*/].f_1), uParam1->f_6, fVar2, uParam1->f_3);
		Local_1073[iParam0 /*2*/] = func_52(0f, 1f, (fVar3 / uParam1->f_3), uParam1->f_2);
		return;
	}
}

float func_58(var uParam0, float fParam1, float fParam2, float fParam3)
{
	float fVar0;
	float fVar1;
	
	if (fParam1 <= 0f)
	{
		*uParam0 = 1f;
		return fParam2;
	}
	fVar0 = fParam2;
	fParam2 = (fParam3 - fParam2);
	func_59(&fParam2, 0f, fParam1);
	fVar1 = (fParam2 / fParam1);
	*uParam0 = func_52(0f, 1f, fVar1, 1);
	return (fVar0 - func_52(0f, (fParam1 * 0.5f), (1f - fVar1), 1));
}

void func_59(float fParam0, float fParam1, float fParam2)
{
	if (*fParam0 < fParam1)
	{
		*fParam0 = fParam1;
	}
	else if (*fParam0 > fParam2)
	{
		*fParam0 = fParam2;
	}
}

void func_60(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		func_61(iVar0, uParam0[iVar0 /*25*/]);
		iVar0++;
	}
}

void func_61(int iParam0, var uParam1)
{
	float fVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	
	if (*uParam1 <= 0)
	{
		Local_1066[iParam0 /*2*/] = 0f;
		return;
	}
	fVar0 = 0f;
	iVar1 = 0;
	while (iVar1 <= (*uParam1 - 1))
	{
		fVar0 = (fVar0 + ((uParam1->f_1[iVar1 /*2*/].f_1 + uParam1->f_22) + uParam1->f_23));
		iVar1++;
	}
	fVar2 = (fLocal_988 - (IntToFloat(SYSTEM::FLOOR((fLocal_988 / fVar0))) * fVar0));
	iVar1 = 0;
	while (iVar1 <= (*uParam1 - 1))
	{
		fVar2 = (fVar2 - uParam1->f_23);
		if (fVar2 < 0f)
		{
			Local_1066[iParam0 /*2*/] = -9999f;
			Local_1066[iParam0 /*2*/].f_1 = 1f;
		}
		else
		{
			fVar2 = (fVar2 - uParam1->f_22);
			if (fVar2 < 0f)
			{
				iLocal_990 = (iLocal_990 || uParam1->f_1[iVar1 /*2*/]);
				Local_1066[iParam0 /*2*/] = 0f;
				Local_1066[iParam0 /*2*/].f_1 = 1f;
			}
			else
			{
				if (fVar2 > uParam1->f_1[iVar1 /*2*/].f_1)
				{
					fVar2 = (fVar2 - uParam1->f_1[iVar1 /*2*/].f_1);
				}
				else
				{
					iLocal_990 = (iLocal_990 || uParam1->f_1[iVar1 /*2*/]);
					fVar3 = func_58(&(Local_1066[iParam0 /*2*/].f_1), uParam1->f_24, fVar2, uParam1->f_1[iVar1 /*2*/].f_1);
					Local_1066[iParam0 /*2*/] = (fVar3 / uParam1->f_1[iVar1 /*2*/].f_1);
				}
				else
				{
					iVar1++;
				}
			}
		}
	}
}

void func_62()
{
	struct<13> Var0;
	struct<13> Var13;
	struct<9> Var26;
	struct<25> Var35;
	struct<8> Var111;
	
	Var0.f_6 = 1092616192;
	Var13.f_6 = 1092616192;
	Var26.f_6 = 1092616192;
	Var35 = 3;
	Var35.f_1.f_1 = 10;
	Var35.f_1.f_1.f_1.f_1 = 1092616192;
	Var35.f_1.f_1.f_1.f_2.f_1 = 1092616192;
	Var35.f_1.f_1.f_1.f_2.f_2.f_1 = 1092616192;
	Var35.f_1.f_1.f_1.f_2.f_2.f_2.f_1 = 1092616192;
	Var35.f_1.f_1.f_1.f_2.f_2.f_2.f_2.f_1 = 1092616192;
	Var35.f_1.f_1.f_1.f_2.f_2.f_2.f_2.f_2.f_1 = 1092616192;
	Var35.f_1.f_1.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1092616192;
	Var35.f_1.f_1.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1092616192;
	Var35.f_1.f_1.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1092616192;
	Var35.f_1.f_1.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1092616192;
	Var35.f_1.f_22 = 1073741824;
	Var35.f_1.f_23 = 1073741824;
	Var35.f_1.f_25.f_1 = 10;
	Var35.f_1.f_25.f_1.f_1.f_1 = 1092616192;
	Var35.f_1.f_25.f_1.f_1.f_2.f_1 = 1092616192;
	Var35.f_1.f_25.f_1.f_1.f_2.f_2.f_1 = 1092616192;
	Var35.f_1.f_25.f_1.f_1.f_2.f_2.f_2.f_1 = 1092616192;
	Var35.f_1.f_25.f_1.f_1.f_2.f_2.f_2.f_2.f_1 = 1092616192;
	Var35.f_1.f_25.f_1.f_1.f_2.f_2.f_2.f_2.f_2.f_1 = 1092616192;
	Var35.f_1.f_25.f_1.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1092616192;
	Var35.f_1.f_25.f_1.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1092616192;
	Var35.f_1.f_25.f_1.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1092616192;
	Var35.f_1.f_25.f_1.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1092616192;
	Var35.f_1.f_25.f_22 = 1073741824;
	Var35.f_1.f_25.f_23 = 1073741824;
	Var35.f_1.f_25.f_25.f_1 = 10;
	Var35.f_1.f_25.f_25.f_1.f_1.f_1 = 1092616192;
	Var35.f_1.f_25.f_25.f_1.f_1.f_2.f_1 = 1092616192;
	Var35.f_1.f_25.f_25.f_1.f_1.f_2.f_2.f_1 = 1092616192;
	Var35.f_1.f_25.f_25.f_1.f_1.f_2.f_2.f_2.f_1 = 1092616192;
	Var35.f_1.f_25.f_25.f_1.f_1.f_2.f_2.f_2.f_2.f_1 = 1092616192;
	Var35.f_1.f_25.f_25.f_1.f_1.f_2.f_2.f_2.f_2.f_2.f_1 = 1092616192;
	Var35.f_1.f_25.f_25.f_1.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1092616192;
	Var35.f_1.f_25.f_25.f_1.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1092616192;
	Var35.f_1.f_25.f_25.f_1.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1092616192;
	Var35.f_1.f_25.f_25.f_1.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1092616192;
	Var35.f_1.f_25.f_25.f_22 = 1073741824;
	Var35.f_1.f_25.f_25.f_23 = 1073741824;
	Var111 = 10;
	Var111.f_1.f_3 = 1092616192;
	Var111.f_1.f_4 = 1073741824;
	Var111.f_1.f_5 = 1073741824;
	Var111.f_1.f_8.f_3 = 1092616192;
	Var111.f_1.f_8.f_4 = 1073741824;
	Var111.f_1.f_8.f_5 = 1073741824;
	Var111.f_1.f_8.f_8.f_3 = 1092616192;
	Var111.f_1.f_8.f_8.f_4 = 1073741824;
	Var111.f_1.f_8.f_8.f_5 = 1073741824;
	Var111.f_1.f_8.f_8.f_8.f_3 = 1092616192;
	Var111.f_1.f_8.f_8.f_8.f_4 = 1073741824;
	Var111.f_1.f_8.f_8.f_8.f_5 = 1073741824;
	Var111.f_1.f_8.f_8.f_8.f_8.f_3 = 1092616192;
	Var111.f_1.f_8.f_8.f_8.f_8.f_4 = 1073741824;
	Var111.f_1.f_8.f_8.f_8.f_8.f_5 = 1073741824;
	Var111.f_1.f_8.f_8.f_8.f_8.f_8.f_3 = 1092616192;
	Var111.f_1.f_8.f_8.f_8.f_8.f_8.f_4 = 1073741824;
	Var111.f_1.f_8.f_8.f_8.f_8.f_8.f_5 = 1073741824;
	Var111.f_1.f_8.f_8.f_8.f_8.f_8.f_8.f_3 = 1092616192;
	Var111.f_1.f_8.f_8.f_8.f_8.f_8.f_8.f_4 = 1073741824;
	Var111.f_1.f_8.f_8.f_8.f_8.f_8.f_8.f_5 = 1073741824;
	Var111.f_1.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_3 = 1092616192;
	Var111.f_1.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_4 = 1073741824;
	Var111.f_1.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_5 = 1073741824;
	Var111.f_1.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_3 = 1092616192;
	Var111.f_1.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_4 = 1073741824;
	Var111.f_1.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_5 = 1073741824;
	Var111.f_1.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_3 = 1092616192;
	Var111.f_1.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_4 = 1073741824;
	Var111.f_1.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_5 = 1073741824;
	Var35[0 /*25*/] = 2;
	Var35[0 /*25*/].f_1[0 /*2*/] = 201326592;
	Var35[0 /*25*/].f_1[0 /*2*/].f_1 = 5f;
	Var35[0 /*25*/].f_1[1 /*2*/] = 1073741824;
	Var35[0 /*25*/].f_1[1 /*2*/].f_1 = 5f;
	Var35[0 /*25*/].f_22 = 2.5f;
	Var35[0 /*25*/].f_23 = 1.5f;
	Var35[0 /*25*/].f_24 = 0.5f;
	Var35[1 /*25*/] = 3;
	Var35[1 /*25*/].f_1[0 /*2*/] = 50331648;
	Var35[1 /*25*/].f_1[0 /*2*/].f_1 = 5f;
	Var35[1 /*25*/].f_1[1 /*2*/] = -2147483648;
	Var35[1 /*25*/].f_1[1 /*2*/].f_1 = 5f;
	Var35[1 /*25*/].f_1[2 /*2*/] = 50331648;
	Var35[1 /*25*/].f_1[2 /*2*/].f_1 = 5f;
	Var35[1 /*25*/].f_22 = 2.5f;
	Var35[1 /*25*/].f_23 = 1.5f;
	Var35[1 /*25*/].f_24 = 0.5f;
	iLocal_991[0] = -1;
	iLocal_991[1] = -1;
	iLocal_991[2] = -1;
	iLocal_991[3] = -1;
	iLocal_991[4] = -1;
	iLocal_991[5] = -1;
	iLocal_991[6] = -1;
	iLocal_991[7] = -1;
	iLocal_991[8] = -1;
	iLocal_991[9] = -1;
	iLocal_991[10] = -1;
	iLocal_991[11] = -1;
	iLocal_991[12] = -1;
	iLocal_991[13] = -1;
	iLocal_991[14] = -1;
	iLocal_991[15] = -1;
	iLocal_991[16] = -1;
	iLocal_991[17] = -1;
	iLocal_991[18] = -1;
	iLocal_991[19] = -1;
	iLocal_991[20] = -1;
	iLocal_991[21] = -1;
	iLocal_991[22] = -1;
	iLocal_991[23] = -1;
	iLocal_991[24] = 1;
	iLocal_991[25] = 1;
	iLocal_991[26] = 0;
	iLocal_991[27] = 0;
	iLocal_991[28] = -1;
	iLocal_991[29] = -1;
	iLocal_991[30] = 0;
	iLocal_991[31] = 1;
	Var111[0 /*8*/].f_1 = 0;
	Var111[0 /*8*/].f_2 = 0;
	Var111[0 /*8*/] = 524288;
	Var111[0 /*8*/].f_3 = 5f;
	Var111[0 /*8*/].f_4 = 0f;
	Var111[0 /*8*/].f_5 = 5f;
	Var111[0 /*8*/].f_6 = 1f;
	Var111[0 /*8*/].f_7 = 0f;
	iLocal_1024[0] = -1;
	iLocal_1024[1] = -1;
	iLocal_1024[2] = -1;
	iLocal_1024[3] = -1;
	iLocal_1024[4] = -1;
	iLocal_1024[5] = -1;
	iLocal_1024[6] = -1;
	iLocal_1024[7] = -1;
	iLocal_1024[8] = -1;
	iLocal_1024[9] = -1;
	iLocal_1024[10] = -1;
	iLocal_1024[11] = -1;
	iLocal_1024[12] = -1;
	iLocal_1024[13] = -1;
	iLocal_1024[14] = -1;
	iLocal_1024[15] = -1;
	iLocal_1024[16] = -1;
	iLocal_1024[17] = -1;
	iLocal_1024[18] = -1;
	iLocal_1024[19] = 0;
	iLocal_1024[20] = -1;
	iLocal_1024[21] = -1;
	iLocal_1024[22] = -1;
	iLocal_1024[23] = -1;
	iLocal_1024[24] = -1;
	iLocal_1024[25] = -1;
	iLocal_1024[26] = -1;
	iLocal_1024[27] = -1;
	iLocal_1024[28] = -1;
	iLocal_1024[29] = -1;
	iLocal_1024[30] = -1;
	iLocal_1024[31] = -1;
	func_48(&Var35, &Var111);
	unk_0x01677A72A8BDCD1A();
	Var26 = { 2631.15f, 5885.801f, -60.7105f };
	Var26.f_3 = 0f;
	Var26.f_4 = 0;
	Var26.f_5 = 0;
	Var26.f_6 = 8f;
	Var26.f_7 = 0f;
	Var26.f_8 = 1;
	func_46(0, &Var26);
	Var13 = { 2627.626f, 5882.352f, -59f };
	Var13.f_3 = 3f;
	Var13.f_4 = 8;
	Var13.f_5 = 0;
	Var13.f_6 = 10f;
	Var13.f_7 = 0f;
	Var13.f_8 = 1f;
	Var13.f_9 = 3.5f;
	Var13.f_10 = 25f;
	Var13.f_11 = 1.2f;
	Var13.f_12 = 3.5f;
	func_47(1, &Var13);
	Var13 = { 2634.616f, 5882.339f, -59f };
	Var13.f_3 = 3f;
	Var13.f_4 = 8;
	Var13.f_5 = 0;
	Var13.f_6 = 10f;
	Var13.f_7 = 0f;
	Var13.f_8 = 1f;
	Var13.f_9 = 3.5f;
	Var13.f_10 = 25f;
	Var13.f_11 = 1.2f;
	Var13.f_12 = 3.5f;
	func_47(2, &Var13);
	Var13 = { 2627.626f, 5882.352f, -59f };
	Var13.f_3 = 3f;
	Var13.f_4 = 8;
	Var13.f_5 = 0;
	Var13.f_6 = 10f;
	Var13.f_7 = 0f;
	Var13.f_8 = 8.28f;
	Var13.f_9 = 3.5f;
	Var13.f_10 = 25f;
	Var13.f_11 = 1.2f;
	Var13.f_12 = 3.5f;
	func_47(3, &Var13);
	Var13 = { 2634.626f, 5882.352f, -59f };
	Var13.f_3 = 3f;
	Var13.f_4 = 8;
	Var13.f_5 = 0;
	Var13.f_6 = 10f;
	Var13.f_7 = 0f;
	Var13.f_8 = 8.28f;
	Var13.f_9 = 3.5f;
	Var13.f_10 = 25f;
	Var13.f_11 = 1.2f;
	Var13.f_12 = 3.5f;
	func_47(4, &Var13);
	Var0 = { 2638.126f, 5883.852f, -59f };
	Var0.f_3 = 3f;
	Var0.f_4 = 5;
	Var0.f_5 = 0;
	Var0.f_6 = 7.93f;
	Var0.f_7 = 0f;
	Var0.f_8 = { 90f, -180f, 0f };
	Var0.f_11 = 14f;
	Var0.f_12 = 0f;
	func_29(5, &Var0);
	Var0 = { 2636.626f, 5880.352f, -59f };
	Var0.f_3 = 3f;
	Var0.f_4 = 4;
	Var0.f_5 = 0;
	Var0.f_6 = 7.93f;
	Var0.f_7 = 0f;
	Var0.f_8 = { 90f, -180f, 0f };
	Var0.f_11 = 10.5f;
	Var0.f_12 = 0f;
	func_29(6, &Var0);
	Var13 = { 2631.125f, 5878.348f, -59f };
	Var13.f_3 = 3f;
	Var13.f_4 = 2;
	Var13.f_5 = 0;
	Var13.f_6 = 10f;
	Var13.f_7 = 0f;
	Var13.f_8 = 0f;
	Var13.f_9 = 7f;
	Var13.f_10 = 65f;
	Var13.f_11 = 0.3f;
	Var13.f_12 = 1.5f;
	func_47(11, &Var13);
	Var0 = { 2638.164f, 5880.292f, -61.7724f };
	Var0.f_3 = 14.3f;
	Var0.f_4 = 1;
	Var0.f_5 = 0;
	Var0.f_6 = 10f;
	Var0.f_7 = 0f;
	Var0.f_8 = { -10f, -150f, 95f };
	Var0.f_11 = 0f;
	Var0.f_12 = 0f;
	func_29(12, &Var0);
	Var0 = { 2638.164f, 5877.845f, -59.6363f };
	Var0.f_3 = 14.3f;
	Var0.f_4 = 1;
	Var0.f_5 = 0;
	Var0.f_6 = 10f;
	Var0.f_7 = 0f;
	Var0.f_8 = { -10f, -30f, 95f };
	Var0.f_11 = 0f;
	Var0.f_12 = 0f;
	func_29(13, &Var0);
	Var0 = { 2638.164f, 5875.348f, -61.7724f };
	Var0.f_3 = 14.3f;
	Var0.f_4 = 1;
	Var0.f_5 = 0;
	Var0.f_6 = 10f;
	Var0.f_7 = 0f;
	Var0.f_8 = { -10f, -150f, 95f };
	Var0.f_11 = 0f;
	Var0.f_12 = 0f;
	func_29(14, &Var0);
	Var13 = { 2631.125f, 5875.846f, -59f };
	Var13.f_3 = 3f;
	Var13.f_4 = 2;
	Var13.f_5 = 0;
	Var13.f_6 = 10f;
	Var13.f_7 = 0f;
	Var13.f_8 = -1f;
	Var13.f_9 = 7f;
	Var13.f_10 = 75f;
	Var13.f_11 = 0.25f;
	Var13.f_12 = 1.5f;
	func_47(15, &Var13);
	Var13 = { 2631.125f, 5876.351f, -59f };
	Var13.f_3 = 3f;
	Var13.f_4 = 2;
	Var13.f_5 = 0;
	Var13.f_6 = 10f;
	Var13.f_7 = 0f;
	Var13.f_8 = -0.25f;
	Var13.f_9 = 2f;
	Var13.f_10 = 340f;
	Var13.f_11 = 0f;
	Var13.f_12 = 0.5f;
	func_47(16, &Var13);
	Var0 = { 2631.126f, 5879.352f, -59f };
	Var0.f_3 = 3f;
	Var0.f_4 = 1;
	Var0.f_5 = 0;
	Var0.f_6 = 7.93f;
	Var0.f_7 = 0f;
	Var0.f_8 = { 90f, -180f, 0f };
	Var0.f_11 = 0f;
	Var0.f_12 = 0f;
	func_29(17, &Var0);
	Var26 = { 2631.15f, 5869.861f, -60.7105f };
	Var26.f_3 = 0f;
	Var26.f_4 = 0;
	Var26.f_5 = 1000;
	Var26.f_6 = 0f;
	Var26.f_7 = 0f;
	Var26.f_8 = 6;
	func_46(19, &Var26);
	Var13 = { 2627.625f, 5871.864f, -59f };
	Var13.f_3 = 3f;
	Var13.f_4 = 4;
	Var13.f_5 = 0;
	Var13.f_6 = 10f;
	Var13.f_7 = 0f;
	Var13.f_8 = 8.28f;
	Var13.f_9 = 3.5f;
	Var13.f_10 = 25f;
	Var13.f_11 = 1.5f;
	Var13.f_12 = 1.5f;
	func_47(20, &Var13);
	Var13 = { 2627.625f, 5871.864f, -59f };
	Var13.f_3 = 3f;
	Var13.f_4 = 4;
	Var13.f_5 = 0;
	Var13.f_6 = 10f;
	Var13.f_7 = 0f;
	Var13.f_8 = 1f;
	Var13.f_9 = 3.5f;
	Var13.f_10 = 25f;
	Var13.f_11 = 1.5f;
	Var13.f_12 = 1.5f;
	func_47(21, &Var13);
	Var13 = { 2634.621f, 5871.864f, -59f };
	Var13.f_3 = 3f;
	Var13.f_4 = 4;
	Var13.f_5 = 0;
	Var13.f_6 = 10f;
	Var13.f_7 = 0f;
	Var13.f_8 = 1f;
	Var13.f_9 = 3.5f;
	Var13.f_10 = 25f;
	Var13.f_11 = 1.5f;
	Var13.f_12 = 1.5f;
	func_47(22, &Var13);
	Var13 = { 2634.626f, 5871.852f, -59f };
	Var13.f_3 = 3f;
	Var13.f_4 = 4;
	Var13.f_5 = 0;
	Var13.f_6 = 10f;
	Var13.f_7 = 0f;
	Var13.f_8 = 8.28f;
	Var13.f_9 = 3.5f;
	Var13.f_10 = 25f;
	Var13.f_11 = 1.5f;
	Var13.f_12 = 1.5f;
	func_47(23, &Var13);
	Var0 = { 2633.126f, 5863.852f, -59f };
	Var0.f_3 = 3f;
	Var0.f_4 = 2;
	Var0.f_5 = 0;
	Var0.f_6 = 7.93f;
	Var0.f_7 = 0f;
	Var0.f_8 = { 90f, -180f, -45f };
	Var0.f_11 = 0.707f;
	Var0.f_12 = 0f;
	func_29(24, &Var0);
	Var0 = { 2629.126f, 5863.852f, -59f };
	Var0.f_3 = 3f;
	Var0.f_4 = 2;
	Var0.f_5 = 0;
	Var0.f_6 = 7.9295f;
	Var0.f_7 = 0f;
	Var0.f_8 = { 90f, -180f, -135f };
	Var0.f_11 = 0.707f;
	Var0.f_12 = 0f;
	func_29(25, &Var0);
	Var0 = { 2638.126f, 5863.852f, -59.6531f };
	Var0.f_3 = 14.3f;
	Var0.f_4 = 1;
	Var0.f_5 = 520;
	Var0.f_6 = 8.3478f;
	Var0.f_7 = 0f;
	Var0.f_8 = { -10f, -30f, 95f };
	Var0.f_11 = 0f;
	Var0.f_12 = 0f;
	func_29(26, &Var0);
	Var0 = { 2638.126f, 5863.852f, -61.7726f };
	Var0.f_3 = 14.3f;
	Var0.f_4 = 1;
	Var0.f_5 = 510;
	Var0.f_6 = 8.3478f;
	Var0.f_7 = 0f;
	Var0.f_8 = { -10f, -150f, 95f };
	Var0.f_11 = 0f;
	Var0.f_12 = 0f;
	func_29(27, &Var0);
	Var0 = { 2628.126f, 5863.852f, -59f };
	Var0.f_3 = 3f;
	Var0.f_4 = 9;
	Var0.f_5 = 0;
	Var0.f_6 = 2.85f;
	Var0.f_7 = 45f;
	Var0.f_8 = { 90f, -180f, -45f };
	Var0.f_11 = 5.656f;
	Var0.f_12 = 0f;
	func_29(28, &Var0);
	Var0 = { 2634.126f, 5863.852f, -59f };
	Var0.f_3 = 3f;
	Var0.f_4 = 9;
	Var0.f_5 = 0;
	Var0.f_6 = 2.86f;
	Var0.f_7 = -45f;
	Var0.f_8 = { 90f, -180f, -135f };
	Var0.f_11 = 5.656f;
	Var0.f_12 = 0f;
	func_29(29, &Var0);
	Var26 = { 2631.15f, 5863.85f, -60.7105f };
	Var26.f_3 = 0f;
	Var26.f_4 = 0;
	Var26.f_5 = 0;
	Var26.f_6 = 8.3474f;
	Var26.f_7 = 0f;
	Var26.f_8 = 9;
	func_46(30, &Var26);
	Var0 = { 2632.126f, 5863.852f, -59f };
	Var0.f_3 = 3f;
	Var0.f_4 = 2;
	Var0.f_5 = 0;
	Var0.f_6 = 7.93f;
	Var0.f_7 = 0f;
	Var0.f_8 = { 90f, -180f, 0f };
	Var0.f_11 = 2f;
	Var0.f_12 = 0f;
	func_29(31, &Var0);
	unk_0x976D155439608592();
}

void func_63()
{
	struct<13> Var0;
	struct<13> Var13;
	struct<9> Var26;
	struct<25> Var35;
	struct<8> Var111;
	
	Var0.f_6 = 1092616192;
	Var13.f_6 = 1092616192;
	Var26.f_6 = 1092616192;
	Var35 = 3;
	Var35.f_1.f_1 = 10;
	Var35.f_1.f_1.f_1.f_1 = 1092616192;
	Var35.f_1.f_1.f_1.f_2.f_1 = 1092616192;
	Var35.f_1.f_1.f_1.f_2.f_2.f_1 = 1092616192;
	Var35.f_1.f_1.f_1.f_2.f_2.f_2.f_1 = 1092616192;
	Var35.f_1.f_1.f_1.f_2.f_2.f_2.f_2.f_1 = 1092616192;
	Var35.f_1.f_1.f_1.f_2.f_2.f_2.f_2.f_2.f_1 = 1092616192;
	Var35.f_1.f_1.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1092616192;
	Var35.f_1.f_1.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1092616192;
	Var35.f_1.f_1.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1092616192;
	Var35.f_1.f_1.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1092616192;
	Var35.f_1.f_22 = 1073741824;
	Var35.f_1.f_23 = 1073741824;
	Var35.f_1.f_25.f_1 = 10;
	Var35.f_1.f_25.f_1.f_1.f_1 = 1092616192;
	Var35.f_1.f_25.f_1.f_1.f_2.f_1 = 1092616192;
	Var35.f_1.f_25.f_1.f_1.f_2.f_2.f_1 = 1092616192;
	Var35.f_1.f_25.f_1.f_1.f_2.f_2.f_2.f_1 = 1092616192;
	Var35.f_1.f_25.f_1.f_1.f_2.f_2.f_2.f_2.f_1 = 1092616192;
	Var35.f_1.f_25.f_1.f_1.f_2.f_2.f_2.f_2.f_2.f_1 = 1092616192;
	Var35.f_1.f_25.f_1.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1092616192;
	Var35.f_1.f_25.f_1.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1092616192;
	Var35.f_1.f_25.f_1.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1092616192;
	Var35.f_1.f_25.f_1.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1092616192;
	Var35.f_1.f_25.f_22 = 1073741824;
	Var35.f_1.f_25.f_23 = 1073741824;
	Var35.f_1.f_25.f_25.f_1 = 10;
	Var35.f_1.f_25.f_25.f_1.f_1.f_1 = 1092616192;
	Var35.f_1.f_25.f_25.f_1.f_1.f_2.f_1 = 1092616192;
	Var35.f_1.f_25.f_25.f_1.f_1.f_2.f_2.f_1 = 1092616192;
	Var35.f_1.f_25.f_25.f_1.f_1.f_2.f_2.f_2.f_1 = 1092616192;
	Var35.f_1.f_25.f_25.f_1.f_1.f_2.f_2.f_2.f_2.f_1 = 1092616192;
	Var35.f_1.f_25.f_25.f_1.f_1.f_2.f_2.f_2.f_2.f_2.f_1 = 1092616192;
	Var35.f_1.f_25.f_25.f_1.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1092616192;
	Var35.f_1.f_25.f_25.f_1.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1092616192;
	Var35.f_1.f_25.f_25.f_1.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1092616192;
	Var35.f_1.f_25.f_25.f_1.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1092616192;
	Var35.f_1.f_25.f_25.f_22 = 1073741824;
	Var35.f_1.f_25.f_25.f_23 = 1073741824;
	Var111 = 10;
	Var111.f_1.f_3 = 1092616192;
	Var111.f_1.f_4 = 1073741824;
	Var111.f_1.f_5 = 1073741824;
	Var111.f_1.f_8.f_3 = 1092616192;
	Var111.f_1.f_8.f_4 = 1073741824;
	Var111.f_1.f_8.f_5 = 1073741824;
	Var111.f_1.f_8.f_8.f_3 = 1092616192;
	Var111.f_1.f_8.f_8.f_4 = 1073741824;
	Var111.f_1.f_8.f_8.f_5 = 1073741824;
	Var111.f_1.f_8.f_8.f_8.f_3 = 1092616192;
	Var111.f_1.f_8.f_8.f_8.f_4 = 1073741824;
	Var111.f_1.f_8.f_8.f_8.f_5 = 1073741824;
	Var111.f_1.f_8.f_8.f_8.f_8.f_3 = 1092616192;
	Var111.f_1.f_8.f_8.f_8.f_8.f_4 = 1073741824;
	Var111.f_1.f_8.f_8.f_8.f_8.f_5 = 1073741824;
	Var111.f_1.f_8.f_8.f_8.f_8.f_8.f_3 = 1092616192;
	Var111.f_1.f_8.f_8.f_8.f_8.f_8.f_4 = 1073741824;
	Var111.f_1.f_8.f_8.f_8.f_8.f_8.f_5 = 1073741824;
	Var111.f_1.f_8.f_8.f_8.f_8.f_8.f_8.f_3 = 1092616192;
	Var111.f_1.f_8.f_8.f_8.f_8.f_8.f_8.f_4 = 1073741824;
	Var111.f_1.f_8.f_8.f_8.f_8.f_8.f_8.f_5 = 1073741824;
	Var111.f_1.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_3 = 1092616192;
	Var111.f_1.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_4 = 1073741824;
	Var111.f_1.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_5 = 1073741824;
	Var111.f_1.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_3 = 1092616192;
	Var111.f_1.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_4 = 1073741824;
	Var111.f_1.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_5 = 1073741824;
	Var111.f_1.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_3 = 1092616192;
	Var111.f_1.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_4 = 1073741824;
	Var111.f_1.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_5 = 1073741824;
	Var35[0 /*25*/] = 1;
	Var35[0 /*25*/].f_1[0 /*2*/] = 2097152;
	Var35[0 /*25*/].f_1[0 /*2*/].f_1 = 14f;
	Var35[0 /*25*/].f_22 = 4f;
	Var35[0 /*25*/].f_23 = 0.3f;
	Var35[0 /*25*/].f_24 = 1f;
	Var35[1 /*25*/] = 1;
	Var35[1 /*25*/].f_1[0 /*2*/] = 2048;
	Var35[1 /*25*/].f_1[0 /*2*/].f_1 = 4f;
	Var35[1 /*25*/].f_22 = 4f;
	Var35[1 /*25*/].f_23 = 4f;
	Var35[1 /*25*/].f_24 = 1f;
	Var35[2 /*25*/] = 2;
	Var35[2 /*25*/].f_1[0 /*2*/] = 268435456;
	Var35[2 /*25*/].f_1[0 /*2*/].f_1 = 10f;
	Var35[2 /*25*/].f_1[1 /*2*/] = 1610612736;
	Var35[2 /*25*/].f_1[1 /*2*/].f_1 = 10f;
	Var35[2 /*25*/].f_22 = 3f;
	Var35[2 /*25*/].f_23 = 4f;
	Var35[2 /*25*/].f_24 = 1.3f;
	iLocal_991[0] = -1;
	iLocal_991[1] = -1;
	iLocal_991[2] = -1;
	iLocal_991[3] = -1;
	iLocal_991[4] = -1;
	iLocal_991[5] = -1;
	iLocal_991[6] = -1;
	iLocal_991[7] = -1;
	iLocal_991[8] = -1;
	iLocal_991[9] = -1;
	iLocal_991[10] = -1;
	iLocal_991[11] = 1;
	iLocal_991[12] = -1;
	iLocal_991[13] = -1;
	iLocal_991[14] = -1;
	iLocal_991[15] = -1;
	iLocal_991[16] = -1;
	iLocal_991[17] = -1;
	iLocal_991[18] = -1;
	iLocal_991[19] = -1;
	iLocal_991[20] = -1;
	iLocal_991[21] = 0;
	iLocal_991[22] = -1;
	iLocal_991[23] = -1;
	iLocal_991[24] = -1;
	iLocal_991[25] = -1;
	iLocal_991[26] = -1;
	iLocal_991[27] = -1;
	iLocal_991[28] = 2;
	iLocal_991[29] = 2;
	iLocal_991[30] = 2;
	iLocal_991[31] = -1;
	Var111[0 /*8*/].f_1 = 0;
	Var111[0 /*8*/].f_2 = 0;
	Var111[0 /*8*/] = 50331648;
	Var111[0 /*8*/].f_3 = 8f;
	Var111[0 /*8*/].f_4 = 0f;
	Var111[0 /*8*/].f_5 = 0f;
	Var111[0 /*8*/].f_6 = 0f;
	Var111[0 /*8*/].f_7 = 0f;
	Var111[2 /*8*/].f_1 = 0;
	Var111[2 /*8*/].f_2 = 0;
	Var111[2 /*8*/] = 64;
	Var111[2 /*8*/].f_3 = 4f;
	Var111[2 /*8*/].f_4 = 1f;
	Var111[2 /*8*/].f_5 = 3f;
	Var111[2 /*8*/].f_6 = 1f;
	Var111[2 /*8*/].f_7 = 0f;
	Var111[4 /*8*/].f_1 = 1;
	Var111[4 /*8*/].f_2 = 0;
	Var111[4 /*8*/] = 201326592;
	Var111[4 /*8*/].f_3 = 10f;
	Var111[4 /*8*/].f_4 = 0f;
	Var111[4 /*8*/].f_5 = 0f;
	Var111[4 /*8*/].f_6 = 0f;
	Var111[4 /*8*/].f_7 = 0f;
	Var111[5 /*8*/].f_1 = 1;
	Var111[5 /*8*/].f_2 = 0;
	Var111[5 /*8*/] = 8;
	Var111[5 /*8*/].f_3 = 20f;
	Var111[5 /*8*/].f_4 = 2f;
	Var111[5 /*8*/].f_5 = 1f;
	Var111[5 /*8*/].f_6 = 0.5f;
	Var111[5 /*8*/].f_7 = 0f;
	iLocal_1024[0] = -1;
	iLocal_1024[1] = -1;
	iLocal_1024[2] = -1;
	iLocal_1024[3] = 5;
	iLocal_1024[4] = -1;
	iLocal_1024[5] = -1;
	iLocal_1024[6] = 2;
	iLocal_1024[7] = -1;
	iLocal_1024[8] = -1;
	iLocal_1024[9] = -1;
	iLocal_1024[10] = -1;
	iLocal_1024[11] = -1;
	iLocal_1024[12] = -1;
	iLocal_1024[13] = -1;
	iLocal_1024[14] = -1;
	iLocal_1024[15] = -1;
	iLocal_1024[16] = -1;
	iLocal_1024[17] = -1;
	iLocal_1024[18] = -1;
	iLocal_1024[19] = -1;
	iLocal_1024[20] = -1;
	iLocal_1024[21] = -1;
	iLocal_1024[22] = -1;
	iLocal_1024[23] = -1;
	iLocal_1024[24] = 0;
	iLocal_1024[25] = 0;
	iLocal_1024[26] = 4;
	iLocal_1024[27] = 4;
	iLocal_1024[28] = -1;
	iLocal_1024[29] = -1;
	iLocal_1024[30] = -1;
	iLocal_1024[31] = -1;
	func_48(&Var35, &Var111);
	unk_0x01677A72A8BDCD1A();
	Var0 = { 2624.626f, 5885.852f, -59f };
	Var0.f_3 = 3f;
	Var0.f_4 = 5;
	Var0.f_5 = 0;
	Var0.f_6 = 10f;
	Var0.f_7 = 0f;
	Var0.f_8 = { -90f, 0f, 0f };
	Var0.f_11 = 2f;
	Var0.f_12 = 0f;
	func_29(0, &Var0);
	Var0 = { 2635.626f, 5885.852f, -59f };
	Var0.f_3 = 3f;
	Var0.f_4 = 5;
	Var0.f_5 = 0;
	Var0.f_6 = 10f;
	Var0.f_7 = 0f;
	Var0.f_8 = { -90f, 0f, 0f };
	Var0.f_11 = 2f;
	Var0.f_12 = 0f;
	func_29(1, &Var0);
	Var0 = { 2631.126f, 5882.852f, -59f };
	Var0.f_3 = 3f;
	Var0.f_4 = 5;
	Var0.f_5 = 0;
	Var0.f_6 = 6.8421f;
	Var0.f_7 = -90f;
	Var0.f_8 = { -90f, 0f, 0f };
	Var0.f_11 = 6.5f;
	Var0.f_12 = 0f;
	func_29(3, &Var0);
	Var0 = { 2638.126f, 5885.852f, -59f };
	Var0.f_3 = 3f;
	Var0.f_4 = 5;
	Var0.f_5 = 0;
	Var0.f_6 = 5f;
	Var0.f_7 = -90f;
	Var0.f_8 = { 90f, -180f, 0f };
	Var0.f_11 = 7f;
	Var0.f_12 = 1f;
	func_29(4, &Var0);
	Var0 = { 2631.126f, 5885.852f, -59f };
	Var0.f_3 = 3f;
	Var0.f_4 = 5;
	Var0.f_5 = 0;
	Var0.f_6 = 5.5f;
	Var0.f_7 = 90f;
	Var0.f_8 = { 90f, -180f, 0f };
	Var0.f_11 = 7f;
	Var0.f_12 = -1f;
	func_29(5, &Var0);
	Var26 = { 2631.15f, 5882.938f, -60.7105f };
	Var26.f_3 = 0f;
	Var26.f_4 = 0;
	Var26.f_5 = 2000;
	Var26.f_6 = 0f;
	Var26.f_7 = 0f;
	Var26.f_8 = 6;
	func_46(6, &Var26);
	Var26 = { 2631.15f, 5873.352f, -60.7105f };
	Var26.f_3 = 14f;
	Var26.f_4 = 1;
	Var26.f_5 = 0;
	Var26.f_6 = 6.2857f;
	Var26.f_7 = 0f;
	Var26.f_8 = 8;
	func_46(11, &Var26);
	Var0 = { 2636.626f, 5880.352f, -59f };
	Var0.f_3 = 3f;
	Var0.f_4 = 7;
	Var0.f_5 = 0;
	Var0.f_6 = 0f;
	Var0.f_7 = 90f;
	Var0.f_8 = { 90f, -180f, 0f };
	Var0.f_11 = 12f;
	Var0.f_12 = -1f;
	func_29(12, &Var0);
	Var0 = { 2637.626f, 5880.352f, -59f };
	Var0.f_3 = 3f;
	Var0.f_4 = 7;
	Var0.f_5 = 0;
	Var0.f_6 = 0f;
	Var0.f_7 = -90f;
	Var0.f_8 = { 90f, -180f, 0f };
	Var0.f_11 = 12f;
	Var0.f_12 = 1f;
	func_29(13, &Var0);
	Var13 = { 2631.126f, 5876.352f, -59f };
	Var13.f_3 = 3f;
	Var13.f_4 = 1;
	Var13.f_5 = 0;
	Var13.f_6 = 10f;
	Var13.f_7 = 0f;
	Var13.f_8 = 0f;
	Var13.f_9 = 6.5f;
	Var13.f_10 = 50f;
	Var13.f_11 = 0.45f;
	Var13.f_12 = 0f;
	func_47(15, &Var13);
	Var13 = { 2631.126f, 5873.352f, -59f };
	Var13.f_3 = 3f;
	Var13.f_4 = 2;
	Var13.f_5 = 0;
	Var13.f_6 = 10f;
	Var13.f_7 = 0f;
	Var13.f_8 = 0f;
	Var13.f_9 = 7f;
	Var13.f_10 = 37f;
	Var13.f_11 = 0.4f;
	Var13.f_12 = 5.5f;
	func_47(16, &Var13);
	Var0 = { 2625.126f, 5863.852f, -59f };
	Var0.f_3 = 3f;
	Var0.f_4 = 5;
	Var0.f_5 = 0;
	Var0.f_6 = 10f;
	Var0.f_7 = 0f;
	Var0.f_8 = { -90f, 0f, 0f };
	Var0.f_11 = 2f;
	Var0.f_12 = -1f;
	func_29(19, &Var0);
	Var0 = { 2635.126f, 5863.852f, -59f };
	Var0.f_3 = 3f;
	Var0.f_4 = 5;
	Var0.f_5 = 0;
	Var0.f_6 = 10f;
	Var0.f_7 = 0f;
	Var0.f_8 = { -90f, 0f, 0f };
	Var0.f_11 = 2f;
	Var0.f_12 = 1f;
	func_29(20, &Var0);
	Var26 = { 2631.15f, 5863.85f, -60.7105f };
	Var26.f_3 = 14.5f;
	Var26.f_4 = 0;
	Var26.f_5 = 2000;
	Var26.f_6 = 6.7097f;
	Var26.f_7 = 0f;
	Var26.f_8 = 7;
	func_46(21, &Var26);
	Var0 = { 2636.126f, 5871.852f, -59f };
	Var0.f_3 = 3f;
	Var0.f_4 = 7;
	Var0.f_5 = 0;
	Var0.f_6 = 2f;
	Var0.f_7 = 90f;
	Var0.f_8 = { 90f, -180f, 0f };
	Var0.f_11 = 12f;
	Var0.f_12 = 1f;
	func_29(24, &Var0);
	Var0 = { 2638.126f, 5871.852f, -59f };
	Var0.f_3 = 3f;
	Var0.f_4 = 7;
	Var0.f_5 = 0;
	Var0.f_6 = 2f;
	Var0.f_7 = -90f;
	Var0.f_8 = { 90f, -180f, 0f };
	Var0.f_11 = 12f;
	Var0.f_12 = -1f;
	func_29(25, &Var0);
	Var0 = { 2638.126f, 5863.852f, -59f };
	Var0.f_3 = 3f;
	Var0.f_4 = 6;
	Var0.f_5 = 0;
	Var0.f_6 = 3f;
	Var0.f_7 = -90f;
	Var0.f_8 = { 90f, -180f, 0f };
	Var0.f_11 = 10f;
	Var0.f_12 = 1f;
	func_29(26, &Var0);
	Var0 = { 2638.126f, 5863.852f, -59f };
	Var0.f_3 = 3f;
	Var0.f_4 = 6;
	Var0.f_5 = 0;
	Var0.f_6 = 3f;
	Var0.f_7 = 90f;
	Var0.f_8 = { 90f, -180f, 0f };
	Var0.f_11 = 10f;
	Var0.f_12 = -1f;
	func_29(27, &Var0);
	Var0 = { 2632.626f, 5863.852f, -59f };
	Var0.f_3 = 3f;
	Var0.f_4 = 7;
	Var0.f_5 = 0;
	Var0.f_6 = 21.3904f;
	Var0.f_7 = 0f;
	Var0.f_8 = { 90f, -180f, 0f };
	Var0.f_11 = 3f;
	Var0.f_12 = 0f;
	func_29(28, &Var0);
	Var0 = { 2627.626f, 5863.852f, -59f };
	Var0.f_3 = 3f;
	Var0.f_4 = 7;
	Var0.f_5 = 0;
	Var0.f_6 = 21.3904f;
	Var0.f_7 = 0f;
	Var0.f_8 = { 90f, -180f, 0f };
	Var0.f_11 = 3f;
	Var0.f_12 = 0f;
	func_29(29, &Var0);
	Var0 = { 2637.626f, 5863.852f, -59f };
	Var0.f_3 = 3f;
	Var0.f_4 = 7;
	Var0.f_5 = 0;
	Var0.f_6 = 21.3904f;
	Var0.f_7 = 0f;
	Var0.f_8 = { 90f, -180f, 0f };
	Var0.f_11 = 3f;
	Var0.f_12 = 0f;
	func_29(30, &Var0);
	unk_0x976D155439608592();
}

void func_64()
{
	struct<13> Var0;
	struct<13> Var13;
	struct<9> Var26;
	struct<25> Var35;
	struct<8> Var111;
	
	Var0.f_6 = 1092616192;
	Var13.f_6 = 1092616192;
	Var26.f_6 = 1092616192;
	Var35 = 3;
	Var35.f_1.f_1 = 10;
	Var35.f_1.f_1.f_1.f_1 = 1092616192;
	Var35.f_1.f_1.f_1.f_2.f_1 = 1092616192;
	Var35.f_1.f_1.f_1.f_2.f_2.f_1 = 1092616192;
	Var35.f_1.f_1.f_1.f_2.f_2.f_2.f_1 = 1092616192;
	Var35.f_1.f_1.f_1.f_2.f_2.f_2.f_2.f_1 = 1092616192;
	Var35.f_1.f_1.f_1.f_2.f_2.f_2.f_2.f_2.f_1 = 1092616192;
	Var35.f_1.f_1.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1092616192;
	Var35.f_1.f_1.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1092616192;
	Var35.f_1.f_1.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1092616192;
	Var35.f_1.f_1.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1092616192;
	Var35.f_1.f_22 = 1073741824;
	Var35.f_1.f_23 = 1073741824;
	Var35.f_1.f_25.f_1 = 10;
	Var35.f_1.f_25.f_1.f_1.f_1 = 1092616192;
	Var35.f_1.f_25.f_1.f_1.f_2.f_1 = 1092616192;
	Var35.f_1.f_25.f_1.f_1.f_2.f_2.f_1 = 1092616192;
	Var35.f_1.f_25.f_1.f_1.f_2.f_2.f_2.f_1 = 1092616192;
	Var35.f_1.f_25.f_1.f_1.f_2.f_2.f_2.f_2.f_1 = 1092616192;
	Var35.f_1.f_25.f_1.f_1.f_2.f_2.f_2.f_2.f_2.f_1 = 1092616192;
	Var35.f_1.f_25.f_1.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1092616192;
	Var35.f_1.f_25.f_1.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1092616192;
	Var35.f_1.f_25.f_1.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1092616192;
	Var35.f_1.f_25.f_1.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1092616192;
	Var35.f_1.f_25.f_22 = 1073741824;
	Var35.f_1.f_25.f_23 = 1073741824;
	Var35.f_1.f_25.f_25.f_1 = 10;
	Var35.f_1.f_25.f_25.f_1.f_1.f_1 = 1092616192;
	Var35.f_1.f_25.f_25.f_1.f_1.f_2.f_1 = 1092616192;
	Var35.f_1.f_25.f_25.f_1.f_1.f_2.f_2.f_1 = 1092616192;
	Var35.f_1.f_25.f_25.f_1.f_1.f_2.f_2.f_2.f_1 = 1092616192;
	Var35.f_1.f_25.f_25.f_1.f_1.f_2.f_2.f_2.f_2.f_1 = 1092616192;
	Var35.f_1.f_25.f_25.f_1.f_1.f_2.f_2.f_2.f_2.f_2.f_1 = 1092616192;
	Var35.f_1.f_25.f_25.f_1.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1092616192;
	Var35.f_1.f_25.f_25.f_1.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1092616192;
	Var35.f_1.f_25.f_25.f_1.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1092616192;
	Var35.f_1.f_25.f_25.f_1.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1092616192;
	Var35.f_1.f_25.f_25.f_22 = 1073741824;
	Var35.f_1.f_25.f_25.f_23 = 1073741824;
	Var111 = 10;
	Var111.f_1.f_3 = 1092616192;
	Var111.f_1.f_4 = 1073741824;
	Var111.f_1.f_5 = 1073741824;
	Var111.f_1.f_8.f_3 = 1092616192;
	Var111.f_1.f_8.f_4 = 1073741824;
	Var111.f_1.f_8.f_5 = 1073741824;
	Var111.f_1.f_8.f_8.f_3 = 1092616192;
	Var111.f_1.f_8.f_8.f_4 = 1073741824;
	Var111.f_1.f_8.f_8.f_5 = 1073741824;
	Var111.f_1.f_8.f_8.f_8.f_3 = 1092616192;
	Var111.f_1.f_8.f_8.f_8.f_4 = 1073741824;
	Var111.f_1.f_8.f_8.f_8.f_5 = 1073741824;
	Var111.f_1.f_8.f_8.f_8.f_8.f_3 = 1092616192;
	Var111.f_1.f_8.f_8.f_8.f_8.f_4 = 1073741824;
	Var111.f_1.f_8.f_8.f_8.f_8.f_5 = 1073741824;
	Var111.f_1.f_8.f_8.f_8.f_8.f_8.f_3 = 1092616192;
	Var111.f_1.f_8.f_8.f_8.f_8.f_8.f_4 = 1073741824;
	Var111.f_1.f_8.f_8.f_8.f_8.f_8.f_5 = 1073741824;
	Var111.f_1.f_8.f_8.f_8.f_8.f_8.f_8.f_3 = 1092616192;
	Var111.f_1.f_8.f_8.f_8.f_8.f_8.f_8.f_4 = 1073741824;
	Var111.f_1.f_8.f_8.f_8.f_8.f_8.f_8.f_5 = 1073741824;
	Var111.f_1.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_3 = 1092616192;
	Var111.f_1.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_4 = 1073741824;
	Var111.f_1.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_5 = 1073741824;
	Var111.f_1.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_3 = 1092616192;
	Var111.f_1.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_4 = 1073741824;
	Var111.f_1.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_5 = 1073741824;
	Var111.f_1.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_3 = 1092616192;
	Var111.f_1.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_4 = 1073741824;
	Var111.f_1.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_5 = 1073741824;
	Var35[0 /*25*/] = 2;
	Var35[0 /*25*/].f_1[0 /*2*/] = 33554432;
	Var35[0 /*25*/].f_1[0 /*2*/].f_1 = 6f;
	Var35[0 /*25*/].f_1[1 /*2*/] = 805306368;
	Var35[0 /*25*/].f_1[1 /*2*/].f_1 = 6f;
	Var35[0 /*25*/].f_22 = 3f;
	Var35[0 /*25*/].f_23 = 0f;
	Var35[0 /*25*/].f_24 = 1f;
	iLocal_991[0] = -1;
	iLocal_991[1] = -1;
	iLocal_991[2] = -1;
	iLocal_991[3] = -1;
	iLocal_991[4] = -1;
	iLocal_991[5] = -1;
	iLocal_991[6] = -1;
	iLocal_991[7] = -1;
	iLocal_991[8] = -1;
	iLocal_991[9] = -1;
	iLocal_991[10] = -1;
	iLocal_991[11] = -1;
	iLocal_991[12] = -1;
	iLocal_991[13] = -1;
	iLocal_991[14] = -1;
	iLocal_991[15] = -1;
	iLocal_991[16] = -1;
	iLocal_991[17] = -1;
	iLocal_991[18] = -1;
	iLocal_991[19] = -1;
	iLocal_991[20] = -1;
	iLocal_991[21] = -1;
	iLocal_991[22] = -1;
	iLocal_991[23] = -1;
	iLocal_991[24] = -1;
	iLocal_991[25] = 0;
	iLocal_991[26] = -1;
	iLocal_991[27] = -1;
	iLocal_991[28] = 0;
	iLocal_991[29] = 0;
	iLocal_991[30] = -1;
	iLocal_991[31] = -1;
	Var111[0 /*8*/].f_1 = 0;
	Var111[0 /*8*/].f_2 = 0;
	Var111[0 /*8*/] = 64;
	Var111[0 /*8*/].f_3 = 8f;
	Var111[0 /*8*/].f_4 = 2f;
	Var111[0 /*8*/].f_5 = 8f;
	Var111[0 /*8*/].f_6 = 2f;
	Var111[0 /*8*/].f_7 = 10f;
	Var111[1 /*8*/].f_1 = 0;
	Var111[1 /*8*/].f_2 = 0;
	Var111[1 /*8*/] = 8192;
	Var111[1 /*8*/].f_3 = 8f;
	Var111[1 /*8*/].f_4 = 2f;
	Var111[1 /*8*/].f_5 = 8f;
	Var111[1 /*8*/].f_6 = 2f;
	Var111[1 /*8*/].f_7 = 0f;
	Var111[2 /*8*/].f_1 = 1;
	Var111[2 /*8*/].f_2 = 0;
	Var111[2 /*8*/] = 245760;
	Var111[2 /*8*/].f_3 = 36f;
	Var111[2 /*8*/].f_4 = 0f;
	Var111[2 /*8*/].f_5 = 0f;
	Var111[2 /*8*/].f_6 = 0f;
	Var111[2 /*8*/].f_7 = 0f;
	Var111[3 /*8*/].f_1 = 1;
	Var111[3 /*8*/].f_2 = 0;
	Var111[3 /*8*/] = 2176;
	Var111[3 /*8*/].f_3 = 9f;
	Var111[3 /*8*/].f_4 = 0f;
	Var111[3 /*8*/].f_5 = 0f;
	Var111[3 /*8*/].f_6 = 0f;
	Var111[3 /*8*/].f_7 = 0f;
	Var111[4 /*8*/].f_1 = 1;
	Var111[4 /*8*/].f_2 = 3;
	Var111[4 /*8*/] = 6291456;
	Var111[4 /*8*/].f_3 = 9f;
	Var111[4 /*8*/].f_4 = 0f;
	Var111[4 /*8*/].f_5 = 0f;
	Var111[4 /*8*/].f_6 = 0f;
	Var111[4 /*8*/].f_7 = 10.3971f;
	iLocal_1024[0] = -1;
	iLocal_1024[1] = -1;
	iLocal_1024[2] = -1;
	iLocal_1024[3] = -1;
	iLocal_1024[4] = -1;
	iLocal_1024[5] = -1;
	iLocal_1024[6] = 0;
	iLocal_1024[7] = 3;
	iLocal_1024[8] = -1;
	iLocal_1024[9] = -1;
	iLocal_1024[10] = -1;
	iLocal_1024[11] = 3;
	iLocal_1024[12] = -1;
	iLocal_1024[13] = 1;
	iLocal_1024[14] = 2;
	iLocal_1024[15] = 2;
	iLocal_1024[16] = 2;
	iLocal_1024[17] = 2;
	iLocal_1024[18] = -1;
	iLocal_1024[19] = -1;
	iLocal_1024[20] = -1;
	iLocal_1024[21] = 4;
	iLocal_1024[22] = 4;
	iLocal_1024[23] = -1;
	iLocal_1024[24] = -1;
	iLocal_1024[25] = -1;
	iLocal_1024[26] = -1;
	iLocal_1024[27] = -1;
	iLocal_1024[28] = -1;
	iLocal_1024[29] = -1;
	iLocal_1024[30] = -1;
	iLocal_1024[31] = -1;
	func_48(&Var35, &Var111);
	unk_0x01677A72A8BDCD1A();
	Var13 = { 2631.126f, 5880.352f, -59f };
	Var13.f_3 = 3f;
	Var13.f_4 = 1;
	Var13.f_5 = 0;
	Var13.f_6 = 10f;
	Var13.f_7 = 0f;
	Var13.f_8 = -10f;
	Var13.f_9 = 6.5f;
	Var13.f_10 = 252.9831f;
	Var13.f_11 = 0.019f;
	Var13.f_12 = 0f;
	func_47(0, &Var13);
	Var13 = { 2631.126f, 5880.352f, -59f };
	Var13.f_3 = 3f;
	Var13.f_4 = 1;
	Var13.f_5 = 0;
	Var13.f_6 = 10f;
	Var13.f_7 = 0f;
	Var13.f_8 = 10f;
	Var13.f_9 = -6.5f;
	Var13.f_10 = 252.9831f;
	Var13.f_11 = 0.019f;
	Var13.f_12 = 0f;
	func_47(1, &Var13);
	Var13 = { 2631.126f, 5881.852f, -59f };
	Var13.f_3 = 3f;
	Var13.f_4 = 9;
	Var13.f_5 = 0;
	Var13.f_6 = 10f;
	Var13.f_7 = 0f;
	Var13.f_8 = -10f;
	Var13.f_9 = 6.5f;
	Var13.f_10 = 252.9831f;
	Var13.f_11 = 0.019f;
	Var13.f_12 = 4f;
	func_47(2, &Var13);
	Var13 = { 2631.126f, 5881.852f, -59f };
	Var13.f_3 = 3f;
	Var13.f_4 = 9;
	Var13.f_5 = 0;
	Var13.f_6 = 10f;
	Var13.f_7 = 0f;
	Var13.f_8 = 10f;
	Var13.f_9 = -6.5f;
	Var13.f_10 = 252.9831f;
	Var13.f_11 = 0.019f;
	Var13.f_12 = 4f;
	func_47(3, &Var13);
	Var13 = { 2631.126f, 5880.852f, -59f };
	Var13.f_3 = 3f;
	Var13.f_4 = 2;
	Var13.f_5 = 0;
	Var13.f_6 = 10f;
	Var13.f_7 = 0f;
	Var13.f_8 = -10f;
	Var13.f_9 = 5f;
	Var13.f_10 = 252.9831f;
	Var13.f_11 = 0.019f;
	Var13.f_12 = 0.5f;
	func_47(4, &Var13);
	Var13 = { 2631.126f, 5880.852f, -59f };
	Var13.f_3 = 3f;
	Var13.f_4 = 2;
	Var13.f_5 = 0;
	Var13.f_6 = 10f;
	Var13.f_7 = 0f;
	Var13.f_8 = -10f;
	Var13.f_9 = 5f;
	Var13.f_10 = 221.3841f;
	Var13.f_11 = 0.019f;
	Var13.f_12 = 0.5f;
	func_47(5, &Var13);
	Var26 = { 2631.15f, 5880.355f, -60.7105f };
	Var26.f_3 = 0f;
	Var26.f_4 = 0;
	Var26.f_5 = 2000;
	Var26.f_6 = 0f;
	Var26.f_7 = 0f;
	Var26.f_8 = 15;
	func_46(6, &Var26);
	Var0 = { 2630.626f, 5874.852f, -59f };
	Var0.f_3 = 3f;
	Var0.f_4 = 3;
	Var0.f_5 = 2000;
	Var0.f_6 = 11f;
	Var0.f_7 = 0f;
	Var0.f_8 = { -90f, 0f, 0f };
	Var0.f_11 = 1f;
	Var0.f_12 = 0f;
	func_29(7, &Var0);
	Var0 = { 2630.626f, 5874.852f, -59f };
	Var0.f_3 = 3f;
	Var0.f_4 = 3;
	Var0.f_5 = 2000;
	Var0.f_6 = 4.5f;
	Var0.f_7 = 0f;
	Var0.f_8 = { -90f, 0f, 0f };
	Var0.f_11 = 1f;
	Var0.f_12 = 0f;
	func_29(11, &Var0);
	Var26 = { 2631.15f, 5874.85f, -60.7105f };
	Var26.f_3 = 0f;
	Var26.f_4 = 0;
	Var26.f_5 = 2000;
	Var26.f_6 = 5f;
	Var26.f_7 = 0f;
	Var26.f_8 = 7;
	func_46(13, &Var26);
	Var0 = { 2625.126f, 5878.852f, -59f };
	Var0.f_3 = 3f;
	Var0.f_4 = 3;
	Var0.f_5 = 2000;
	Var0.f_6 = 5.5f;
	Var0.f_7 = 90f;
	Var0.f_8 = { -90f, 0f, -90f };
	Var0.f_11 = 4f;
	Var0.f_12 = 0f;
	func_29(14, &Var0);
	Var0 = { 2631.626f, 5878.352f, -59f };
	Var0.f_3 = 3f;
	Var0.f_4 = 2;
	Var0.f_5 = 2000;
	Var0.f_6 = 5.5f;
	Var0.f_7 = 90f;
	Var0.f_8 = { -90f, 0f, -90f };
	Var0.f_11 = 3f;
	Var0.f_12 = 0f;
	func_29(15, &Var0);
	Var0 = { 2637.126f, 5878.852f, -59f };
	Var0.f_3 = 3f;
	Var0.f_4 = 3;
	Var0.f_5 = 2000;
	Var0.f_6 = 5.5f;
	Var0.f_7 = -90f;
	Var0.f_8 = { -90f, 0f, -90f };
	Var0.f_11 = 4f;
	Var0.f_12 = 0f;
	func_29(16, &Var0);
	Var0 = { 2630.626f, 5878.352f, -59f };
	Var0.f_3 = 3f;
	Var0.f_4 = 2;
	Var0.f_5 = 2000;
	Var0.f_6 = 5.5f;
	Var0.f_7 = -90f;
	Var0.f_8 = { -90f, 0f, -90f };
	Var0.f_11 = 3f;
	Var0.f_12 = 0f;
	func_29(17, &Var0);
	Var0 = { 2631.126f, 5873.352f, -59f };
	Var0.f_3 = 3f;
	Var0.f_4 = 13;
	Var0.f_5 = 2000;
	Var0.f_6 = 4.5f;
	Var0.f_7 = 90f;
	Var0.f_8 = { -90f, 0f, 0f };
	Var0.f_11 = 6f;
	Var0.f_12 = 1f;
	func_29(21, &Var0);
	Var0 = { 2631.126f, 5873.352f, -59f };
	Var0.f_3 = 3f;
	Var0.f_4 = 13;
	Var0.f_5 = 2000;
	Var0.f_6 = 4.5f;
	Var0.f_7 = -90f;
	Var0.f_8 = { -90f, 0f, -180f };
	Var0.f_11 = 6f;
	Var0.f_12 = 1f;
	func_29(22, &Var0);
	Var0 = { 2629.626f, 5863.852f, -59f };
	Var0.f_3 = 3f;
	Var0.f_4 = 4;
	Var0.f_5 = 2000;
	Var0.f_6 = 6f;
	Var0.f_7 = 90f;
	Var0.f_8 = { -90f, 0f, 0f };
	Var0.f_11 = 2f;
	Var0.f_12 = 1f;
	func_29(23, &Var0);
	Var0 = { 2632.626f, 5863.852f, -59f };
	Var0.f_3 = 3f;
	Var0.f_4 = 4;
	Var0.f_5 = 2000;
	Var0.f_6 = 6f;
	Var0.f_7 = 90f;
	Var0.f_8 = { -90f, 0f, -180f };
	Var0.f_11 = 2f;
	Var0.f_12 = 1f;
	func_29(24, &Var0);
	Var26 = { 2631.15f, 5863.85f, -60.7105f };
	Var26.f_3 = 3f;
	Var26.f_4 = 14;
	Var26.f_5 = 2000;
	Var26.f_6 = 10.3636f;
	Var26.f_7 = 0f;
	Var26.f_8 = 8;
	func_46(25, &Var26);
	Var13 = { 2628.376f, 5864.852f, -59f };
	Var13.f_3 = 3f;
	Var13.f_4 = 18;
	Var13.f_5 = 0;
	Var13.f_6 = 10f;
	Var13.f_7 = 0f;
	Var13.f_8 = 0f;
	Var13.f_9 = 2.25f;
	Var13.f_10 = 35f;
	Var13.f_11 = 0.5714f;
	Var13.f_12 = 8.5f;
	func_47(26, &Var13);
	Var13 = { 2633.876f, 5864.852f, -59f };
	Var13.f_3 = 3f;
	Var13.f_4 = 18;
	Var13.f_5 = 0;
	Var13.f_6 = 10f;
	Var13.f_7 = 0f;
	Var13.f_8 = 0f;
	Var13.f_9 = -2.25f;
	Var13.f_10 = 35f;
	Var13.f_11 = 0.5714f;
	Var13.f_12 = 8.5f;
	func_47(27, &Var13);
	Var0 = { 2630.126f, 5863.852f, -59f };
	Var0.f_3 = 3f;
	Var0.f_4 = 2;
	Var0.f_5 = 2000;
	Var0.f_6 = 10.3636f;
	Var0.f_7 = 0f;
	Var0.f_8 = { -90f, 0f, 0f };
	Var0.f_11 = 0.5f;
	Var0.f_12 = 1f;
	func_29(28, &Var0);
	Var0 = { 2632.126f, 5863.852f, -59f };
	Var0.f_3 = 3f;
	Var0.f_4 = 2;
	Var0.f_5 = 2000;
	Var0.f_6 = 10.3636f;
	Var0.f_7 = 0f;
	Var0.f_8 = { -90f, 0f, -180f };
	Var0.f_11 = 0.5f;
	Var0.f_12 = 1f;
	func_29(29, &Var0);
	Var0 = { 2626.626f, 5863.852f, -59f };
	Var0.f_3 = 3f;
	Var0.f_4 = 6;
	Var0.f_5 = 2000;
	Var0.f_6 = 9.2203f;
	Var0.f_7 = 0f;
	Var0.f_8 = { -90f, 0f, -180f };
	Var0.f_11 = 2.5f;
	Var0.f_12 = -1f;
	func_29(30, &Var0);
	Var0 = { 2635.626f, 5863.852f, -59f };
	Var0.f_3 = 3f;
	Var0.f_4 = 6;
	Var0.f_5 = 2000;
	Var0.f_6 = 9.2203f;
	Var0.f_7 = 0f;
	Var0.f_8 = { -90f, 0f, 0f };
	Var0.f_11 = 2.5f;
	Var0.f_12 = -1f;
	func_29(31, &Var0);
	unk_0x976D155439608592();
}

void func_65()
{
	struct<13> Var0;
	struct<13> Var13;
	struct<9> Var26;
	struct<25> Var35;
	struct<2> Var111;
	
	Var0.f_6 = 1092616192;
	Var13.f_6 = 1092616192;
	Var26.f_6 = 1092616192;
	Var35 = 3;
	Var35.f_1.f_1 = 10;
	Var35.f_1.f_1.f_1.f_1 = 1092616192;
	Var35.f_1.f_1.f_1.f_2.f_1 = 1092616192;
	Var35.f_1.f_1.f_1.f_2.f_2.f_1 = 1092616192;
	Var35.f_1.f_1.f_1.f_2.f_2.f_2.f_1 = 1092616192;
	Var35.f_1.f_1.f_1.f_2.f_2.f_2.f_2.f_1 = 1092616192;
	Var35.f_1.f_1.f_1.f_2.f_2.f_2.f_2.f_2.f_1 = 1092616192;
	Var35.f_1.f_1.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1092616192;
	Var35.f_1.f_1.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1092616192;
	Var35.f_1.f_1.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1092616192;
	Var35.f_1.f_1.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1092616192;
	Var35.f_1.f_22 = 1073741824;
	Var35.f_1.f_23 = 1073741824;
	Var35.f_1.f_25.f_1 = 10;
	Var35.f_1.f_25.f_1.f_1.f_1 = 1092616192;
	Var35.f_1.f_25.f_1.f_1.f_2.f_1 = 1092616192;
	Var35.f_1.f_25.f_1.f_1.f_2.f_2.f_1 = 1092616192;
	Var35.f_1.f_25.f_1.f_1.f_2.f_2.f_2.f_1 = 1092616192;
	Var35.f_1.f_25.f_1.f_1.f_2.f_2.f_2.f_2.f_1 = 1092616192;
	Var35.f_1.f_25.f_1.f_1.f_2.f_2.f_2.f_2.f_2.f_1 = 1092616192;
	Var35.f_1.f_25.f_1.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1092616192;
	Var35.f_1.f_25.f_1.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1092616192;
	Var35.f_1.f_25.f_1.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1092616192;
	Var35.f_1.f_25.f_1.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1092616192;
	Var35.f_1.f_25.f_22 = 1073741824;
	Var35.f_1.f_25.f_23 = 1073741824;
	Var35.f_1.f_25.f_25.f_1 = 10;
	Var35.f_1.f_25.f_25.f_1.f_1.f_1 = 1092616192;
	Var35.f_1.f_25.f_25.f_1.f_1.f_2.f_1 = 1092616192;
	Var35.f_1.f_25.f_25.f_1.f_1.f_2.f_2.f_1 = 1092616192;
	Var35.f_1.f_25.f_25.f_1.f_1.f_2.f_2.f_2.f_1 = 1092616192;
	Var35.f_1.f_25.f_25.f_1.f_1.f_2.f_2.f_2.f_2.f_1 = 1092616192;
	Var35.f_1.f_25.f_25.f_1.f_1.f_2.f_2.f_2.f_2.f_2.f_1 = 1092616192;
	Var35.f_1.f_25.f_25.f_1.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1092616192;
	Var35.f_1.f_25.f_25.f_1.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1092616192;
	Var35.f_1.f_25.f_25.f_1.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1092616192;
	Var35.f_1.f_25.f_25.f_1.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1092616192;
	Var35.f_1.f_25.f_25.f_22 = 1073741824;
	Var35.f_1.f_25.f_25.f_23 = 1073741824;
	Var111 = 10;
	Var111.f_1.f_3 = 1092616192;
	Var111.f_1.f_4 = 1073741824;
	Var111.f_1.f_5 = 1073741824;
	Var111.f_1.f_8.f_3 = 1092616192;
	Var111.f_1.f_8.f_4 = 1073741824;
	Var111.f_1.f_8.f_5 = 1073741824;
	Var111.f_1.f_8.f_8.f_3 = 1092616192;
	Var111.f_1.f_8.f_8.f_4 = 1073741824;
	Var111.f_1.f_8.f_8.f_5 = 1073741824;
	Var111.f_1.f_8.f_8.f_8.f_3 = 1092616192;
	Var111.f_1.f_8.f_8.f_8.f_4 = 1073741824;
	Var111.f_1.f_8.f_8.f_8.f_5 = 1073741824;
	Var111.f_1.f_8.f_8.f_8.f_8.f_3 = 1092616192;
	Var111.f_1.f_8.f_8.f_8.f_8.f_4 = 1073741824;
	Var111.f_1.f_8.f_8.f_8.f_8.f_5 = 1073741824;
	Var111.f_1.f_8.f_8.f_8.f_8.f_8.f_3 = 1092616192;
	Var111.f_1.f_8.f_8.f_8.f_8.f_8.f_4 = 1073741824;
	Var111.f_1.f_8.f_8.f_8.f_8.f_8.f_5 = 1073741824;
	Var111.f_1.f_8.f_8.f_8.f_8.f_8.f_8.f_3 = 1092616192;
	Var111.f_1.f_8.f_8.f_8.f_8.f_8.f_8.f_4 = 1073741824;
	Var111.f_1.f_8.f_8.f_8.f_8.f_8.f_8.f_5 = 1073741824;
	Var111.f_1.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_3 = 1092616192;
	Var111.f_1.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_4 = 1073741824;
	Var111.f_1.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_5 = 1073741824;
	Var111.f_1.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_3 = 1092616192;
	Var111.f_1.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_4 = 1073741824;
	Var111.f_1.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_5 = 1073741824;
	Var111.f_1.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_3 = 1092616192;
	Var111.f_1.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_4 = 1073741824;
	Var111.f_1.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_5 = 1073741824;
	Var35[0 /*25*/] = 2;
	Var35[0 /*25*/].f_1[0 /*2*/] = 201326592;
	Var35[0 /*25*/].f_1[0 /*2*/].f_1 = 5f;
	Var35[0 /*25*/].f_1[1 /*2*/] = 1073741824;
	Var35[0 /*25*/].f_1[1 /*2*/].f_1 = 5f;
	Var35[0 /*25*/].f_22 = 2.5f;
	Var35[0 /*25*/].f_23 = 1.5f;
	Var35[0 /*25*/].f_24 = 0.5f;
	Var35[1 /*25*/] = 3;
	Var35[1 /*25*/].f_1[0 /*2*/] = 50331648;
	Var35[1 /*25*/].f_1[0 /*2*/].f_1 = 5f;
	Var35[1 /*25*/].f_1[1 /*2*/] = -2147483648;
	Var35[1 /*25*/].f_1[1 /*2*/].f_1 = 5f;
	Var35[1 /*25*/].f_1[2 /*2*/] = 50331648;
	Var35[1 /*25*/].f_1[2 /*2*/].f_1 = 5f;
	Var35[1 /*25*/].f_22 = 2.5f;
	Var35[1 /*25*/].f_23 = 1.5f;
	Var35[1 /*25*/].f_24 = 0.5f;
	iLocal_991[0] = -1;
	iLocal_991[1] = -1;
	iLocal_991[2] = -1;
	iLocal_991[3] = -1;
	iLocal_991[4] = -1;
	iLocal_991[5] = -1;
	iLocal_991[6] = -1;
	iLocal_991[7] = -1;
	iLocal_991[8] = -1;
	iLocal_991[9] = -1;
	iLocal_991[10] = -1;
	iLocal_991[11] = -1;
	iLocal_991[12] = -1;
	iLocal_991[13] = -1;
	iLocal_991[14] = -1;
	iLocal_991[15] = -1;
	iLocal_991[16] = -1;
	iLocal_991[17] = -1;
	iLocal_991[18] = -1;
	iLocal_991[19] = -1;
	iLocal_991[20] = -1;
	iLocal_991[21] = -1;
	iLocal_991[22] = -1;
	iLocal_991[23] = -1;
	iLocal_991[24] = 1;
	iLocal_991[25] = 1;
	iLocal_991[26] = 0;
	iLocal_991[27] = 0;
	iLocal_991[28] = -1;
	iLocal_991[29] = -1;
	iLocal_991[30] = 0;
	iLocal_991[31] = 1;
	iLocal_1024[0] = -1;
	iLocal_1024[1] = -1;
	iLocal_1024[2] = -1;
	iLocal_1024[3] = -1;
	iLocal_1024[4] = -1;
	iLocal_1024[5] = -1;
	iLocal_1024[6] = -1;
	iLocal_1024[7] = -1;
	iLocal_1024[8] = -1;
	iLocal_1024[9] = -1;
	iLocal_1024[10] = -1;
	iLocal_1024[11] = -1;
	iLocal_1024[12] = -1;
	iLocal_1024[13] = -1;
	iLocal_1024[14] = -1;
	iLocal_1024[15] = -1;
	iLocal_1024[16] = -1;
	iLocal_1024[17] = -1;
	iLocal_1024[18] = -1;
	iLocal_1024[19] = -1;
	iLocal_1024[20] = -1;
	iLocal_1024[21] = -1;
	iLocal_1024[22] = -1;
	iLocal_1024[23] = -1;
	iLocal_1024[24] = -1;
	iLocal_1024[25] = -1;
	iLocal_1024[26] = -1;
	iLocal_1024[27] = -1;
	iLocal_1024[28] = -1;
	iLocal_1024[29] = -1;
	iLocal_1024[30] = -1;
	iLocal_1024[31] = -1;
	func_48(&Var35, &Var111);
	unk_0x01677A72A8BDCD1A();
	Var26 = { 2631.15f, 5885.801f, -60.7105f };
	Var26.f_3 = 0f;
	Var26.f_4 = 0;
	Var26.f_5 = 0;
	Var26.f_6 = 8f;
	Var26.f_7 = 0f;
	Var26.f_8 = 1;
	func_46(0, &Var26);
	Var13 = { 2627.626f, 5882.352f, -59f };
	Var13.f_3 = 3f;
	Var13.f_4 = 8;
	Var13.f_5 = 0;
	Var13.f_6 = 10f;
	Var13.f_7 = 0f;
	Var13.f_8 = 1f;
	Var13.f_9 = 3.5f;
	Var13.f_10 = 25f;
	Var13.f_11 = 1.2f;
	Var13.f_12 = 3.5f;
	func_47(1, &Var13);
	Var13 = { 2634.616f, 5882.339f, -59f };
	Var13.f_3 = 3f;
	Var13.f_4 = 8;
	Var13.f_5 = 0;
	Var13.f_6 = 10f;
	Var13.f_7 = 0f;
	Var13.f_8 = 1f;
	Var13.f_9 = 3.5f;
	Var13.f_10 = 25f;
	Var13.f_11 = 1.2f;
	Var13.f_12 = 3.5f;
	func_47(2, &Var13);
	Var13 = { 2627.626f, 5882.352f, -59f };
	Var13.f_3 = 3f;
	Var13.f_4 = 8;
	Var13.f_5 = 0;
	Var13.f_6 = 10f;
	Var13.f_7 = 0f;
	Var13.f_8 = 8.28f;
	Var13.f_9 = 3.5f;
	Var13.f_10 = 25f;
	Var13.f_11 = 1.2f;
	Var13.f_12 = 3.5f;
	func_47(3, &Var13);
	Var13 = { 2634.626f, 5882.352f, -59f };
	Var13.f_3 = 3f;
	Var13.f_4 = 8;
	Var13.f_5 = 0;
	Var13.f_6 = 10f;
	Var13.f_7 = 0f;
	Var13.f_8 = 8.28f;
	Var13.f_9 = 3.5f;
	Var13.f_10 = 25f;
	Var13.f_11 = 1.2f;
	Var13.f_12 = 3.5f;
	func_47(4, &Var13);
	Var13 = { 2631.125f, 5878.348f, -59f };
	Var13.f_3 = 3f;
	Var13.f_4 = 2;
	Var13.f_5 = 0;
	Var13.f_6 = 10f;
	Var13.f_7 = 0f;
	Var13.f_8 = 0f;
	Var13.f_9 = 7f;
	Var13.f_10 = 65f;
	Var13.f_11 = 0.3f;
	Var13.f_12 = 1.5f;
	func_47(11, &Var13);
	Var0 = { 2638.164f, 5880.292f, -61.7724f };
	Var0.f_3 = 14.3f;
	Var0.f_4 = 1;
	Var0.f_5 = 0;
	Var0.f_6 = 10f;
	Var0.f_7 = 0f;
	Var0.f_8 = { -10f, -150f, 95f };
	Var0.f_11 = 0f;
	Var0.f_12 = 0f;
	func_29(12, &Var0);
	Var0 = { 2638.164f, 5877.845f, -59.6363f };
	Var0.f_3 = 14.3f;
	Var0.f_4 = 1;
	Var0.f_5 = 0;
	Var0.f_6 = 10f;
	Var0.f_7 = 0f;
	Var0.f_8 = { -10f, -30f, 95f };
	Var0.f_11 = 0f;
	Var0.f_12 = 0f;
	func_29(13, &Var0);
	Var0 = { 2638.164f, 5875.348f, -61.7724f };
	Var0.f_3 = 14.3f;
	Var0.f_4 = 1;
	Var0.f_5 = 0;
	Var0.f_6 = 10f;
	Var0.f_7 = 0f;
	Var0.f_8 = { -10f, -150f, 95f };
	Var0.f_11 = 0f;
	Var0.f_12 = 0f;
	func_29(14, &Var0);
	Var13 = { 2631.125f, 5875.846f, -59f };
	Var13.f_3 = 3f;
	Var13.f_4 = 2;
	Var13.f_5 = 0;
	Var13.f_6 = 10f;
	Var13.f_7 = 0f;
	Var13.f_8 = -1f;
	Var13.f_9 = 7f;
	Var13.f_10 = 75f;
	Var13.f_11 = 0.25f;
	Var13.f_12 = 1.5f;
	func_47(15, &Var13);
	Var13 = { 2631.125f, 5876.351f, -59f };
	Var13.f_3 = 3f;
	Var13.f_4 = 2;
	Var13.f_5 = 0;
	Var13.f_6 = 10f;
	Var13.f_7 = 0f;
	Var13.f_8 = -0.25f;
	Var13.f_9 = 2f;
	Var13.f_10 = 340f;
	Var13.f_11 = 0f;
	Var13.f_12 = 0.5f;
	func_47(16, &Var13);
	Var13 = { 2627.625f, 5871.864f, -59f };
	Var13.f_3 = 3f;
	Var13.f_4 = 4;
	Var13.f_5 = 0;
	Var13.f_6 = 10f;
	Var13.f_7 = 0f;
	Var13.f_8 = 8.28f;
	Var13.f_9 = 3.5f;
	Var13.f_10 = 25f;
	Var13.f_11 = 1.5f;
	Var13.f_12 = 1.5f;
	func_47(20, &Var13);
	Var13 = { 2627.625f, 5871.864f, -59f };
	Var13.f_3 = 3f;
	Var13.f_4 = 4;
	Var13.f_5 = 0;
	Var13.f_6 = 10f;
	Var13.f_7 = 0f;
	Var13.f_8 = 1f;
	Var13.f_9 = 3.5f;
	Var13.f_10 = 25f;
	Var13.f_11 = 1.5f;
	Var13.f_12 = 1.5f;
	func_47(21, &Var13);
	Var13 = { 2634.621f, 5871.864f, -59f };
	Var13.f_3 = 3f;
	Var13.f_4 = 4;
	Var13.f_5 = 0;
	Var13.f_6 = 10f;
	Var13.f_7 = 0f;
	Var13.f_8 = 1f;
	Var13.f_9 = 3.5f;
	Var13.f_10 = 25f;
	Var13.f_11 = 1.5f;
	Var13.f_12 = 1.5f;
	func_47(22, &Var13);
	Var13 = { 2634.626f, 5871.852f, -59f };
	Var13.f_3 = 3f;
	Var13.f_4 = 4;
	Var13.f_5 = 0;
	Var13.f_6 = 10f;
	Var13.f_7 = 0f;
	Var13.f_8 = 8.28f;
	Var13.f_9 = 3.5f;
	Var13.f_10 = 25f;
	Var13.f_11 = 1.5f;
	Var13.f_12 = 1.5f;
	func_47(23, &Var13);
	Var0 = { 2633.126f, 5863.852f, -59f };
	Var0.f_3 = 3f;
	Var0.f_4 = 2;
	Var0.f_5 = 0;
	Var0.f_6 = 7.93f;
	Var0.f_7 = 0f;
	Var0.f_8 = { 90f, -180f, -45f };
	Var0.f_11 = 0.707f;
	Var0.f_12 = 0f;
	func_29(24, &Var0);
	Var0 = { 2629.126f, 5863.852f, -59f };
	Var0.f_3 = 3f;
	Var0.f_4 = 2;
	Var0.f_5 = 0;
	Var0.f_6 = 7.9295f;
	Var0.f_7 = 0f;
	Var0.f_8 = { 90f, -180f, -135f };
	Var0.f_11 = 0.707f;
	Var0.f_12 = 0f;
	func_29(25, &Var0);
	Var0 = { 2638.126f, 5863.852f, -59.6531f };
	Var0.f_3 = 14.3f;
	Var0.f_4 = 1;
	Var0.f_5 = 520;
	Var0.f_6 = 8.3478f;
	Var0.f_7 = 0f;
	Var0.f_8 = { -10f, -30f, 95f };
	Var0.f_11 = 0f;
	Var0.f_12 = 0f;
	func_29(26, &Var0);
	Var0 = { 2638.126f, 5863.852f, -61.7726f };
	Var0.f_3 = 14.3f;
	Var0.f_4 = 1;
	Var0.f_5 = 510;
	Var0.f_6 = 8.3478f;
	Var0.f_7 = 0f;
	Var0.f_8 = { -10f, -150f, 95f };
	Var0.f_11 = 0f;
	Var0.f_12 = 0f;
	func_29(27, &Var0);
	Var0 = { 2628.126f, 5863.852f, -59f };
	Var0.f_3 = 3f;
	Var0.f_4 = 9;
	Var0.f_5 = 0;
	Var0.f_6 = 2.85f;
	Var0.f_7 = 45f;
	Var0.f_8 = { 90f, -180f, -45f };
	Var0.f_11 = 5.656f;
	Var0.f_12 = 0f;
	func_29(28, &Var0);
	Var0 = { 2634.126f, 5863.852f, -59f };
	Var0.f_3 = 3f;
	Var0.f_4 = 9;
	Var0.f_5 = 0;
	Var0.f_6 = 2.86f;
	Var0.f_7 = -45f;
	Var0.f_8 = { 90f, -180f, -135f };
	Var0.f_11 = 5.656f;
	Var0.f_12 = 0f;
	func_29(29, &Var0);
	Var26 = { 2631.15f, 5863.85f, -60.7105f };
	Var26.f_3 = 0f;
	Var26.f_4 = 0;
	Var26.f_5 = 0;
	Var26.f_6 = 8.3474f;
	Var26.f_7 = 0f;
	Var26.f_8 = 9;
	func_46(30, &Var26);
	Var0 = { 2632.126f, 5863.852f, -59f };
	Var0.f_3 = 3f;
	Var0.f_4 = 2;
	Var0.f_5 = 0;
	Var0.f_6 = 7.93f;
	Var0.f_7 = 0f;
	Var0.f_8 = { 90f, -180f, 0f };
	Var0.f_11 = 2f;
	Var0.f_12 = 0f;
	func_29(31, &Var0);
	unk_0x976D155439608592();
}

void func_66()
{
	struct<13> Var0;
	struct<13> Var13;
	struct<9> Var26;
	struct<25> Var35;
	struct<8> Var111;
	
	Var0.f_6 = 1092616192;
	Var13.f_6 = 1092616192;
	Var26.f_6 = 1092616192;
	Var35 = 3;
	Var35.f_1.f_1 = 10;
	Var35.f_1.f_1.f_1.f_1 = 1092616192;
	Var35.f_1.f_1.f_1.f_2.f_1 = 1092616192;
	Var35.f_1.f_1.f_1.f_2.f_2.f_1 = 1092616192;
	Var35.f_1.f_1.f_1.f_2.f_2.f_2.f_1 = 1092616192;
	Var35.f_1.f_1.f_1.f_2.f_2.f_2.f_2.f_1 = 1092616192;
	Var35.f_1.f_1.f_1.f_2.f_2.f_2.f_2.f_2.f_1 = 1092616192;
	Var35.f_1.f_1.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1092616192;
	Var35.f_1.f_1.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1092616192;
	Var35.f_1.f_1.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1092616192;
	Var35.f_1.f_1.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1092616192;
	Var35.f_1.f_22 = 1073741824;
	Var35.f_1.f_23 = 1073741824;
	Var35.f_1.f_25.f_1 = 10;
	Var35.f_1.f_25.f_1.f_1.f_1 = 1092616192;
	Var35.f_1.f_25.f_1.f_1.f_2.f_1 = 1092616192;
	Var35.f_1.f_25.f_1.f_1.f_2.f_2.f_1 = 1092616192;
	Var35.f_1.f_25.f_1.f_1.f_2.f_2.f_2.f_1 = 1092616192;
	Var35.f_1.f_25.f_1.f_1.f_2.f_2.f_2.f_2.f_1 = 1092616192;
	Var35.f_1.f_25.f_1.f_1.f_2.f_2.f_2.f_2.f_2.f_1 = 1092616192;
	Var35.f_1.f_25.f_1.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1092616192;
	Var35.f_1.f_25.f_1.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1092616192;
	Var35.f_1.f_25.f_1.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1092616192;
	Var35.f_1.f_25.f_1.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1092616192;
	Var35.f_1.f_25.f_22 = 1073741824;
	Var35.f_1.f_25.f_23 = 1073741824;
	Var35.f_1.f_25.f_25.f_1 = 10;
	Var35.f_1.f_25.f_25.f_1.f_1.f_1 = 1092616192;
	Var35.f_1.f_25.f_25.f_1.f_1.f_2.f_1 = 1092616192;
	Var35.f_1.f_25.f_25.f_1.f_1.f_2.f_2.f_1 = 1092616192;
	Var35.f_1.f_25.f_25.f_1.f_1.f_2.f_2.f_2.f_1 = 1092616192;
	Var35.f_1.f_25.f_25.f_1.f_1.f_2.f_2.f_2.f_2.f_1 = 1092616192;
	Var35.f_1.f_25.f_25.f_1.f_1.f_2.f_2.f_2.f_2.f_2.f_1 = 1092616192;
	Var35.f_1.f_25.f_25.f_1.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1092616192;
	Var35.f_1.f_25.f_25.f_1.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1092616192;
	Var35.f_1.f_25.f_25.f_1.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1092616192;
	Var35.f_1.f_25.f_25.f_1.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1092616192;
	Var35.f_1.f_25.f_25.f_22 = 1073741824;
	Var35.f_1.f_25.f_25.f_23 = 1073741824;
	Var111 = 10;
	Var111.f_1.f_3 = 1092616192;
	Var111.f_1.f_4 = 1073741824;
	Var111.f_1.f_5 = 1073741824;
	Var111.f_1.f_8.f_3 = 1092616192;
	Var111.f_1.f_8.f_4 = 1073741824;
	Var111.f_1.f_8.f_5 = 1073741824;
	Var111.f_1.f_8.f_8.f_3 = 1092616192;
	Var111.f_1.f_8.f_8.f_4 = 1073741824;
	Var111.f_1.f_8.f_8.f_5 = 1073741824;
	Var111.f_1.f_8.f_8.f_8.f_3 = 1092616192;
	Var111.f_1.f_8.f_8.f_8.f_4 = 1073741824;
	Var111.f_1.f_8.f_8.f_8.f_5 = 1073741824;
	Var111.f_1.f_8.f_8.f_8.f_8.f_3 = 1092616192;
	Var111.f_1.f_8.f_8.f_8.f_8.f_4 = 1073741824;
	Var111.f_1.f_8.f_8.f_8.f_8.f_5 = 1073741824;
	Var111.f_1.f_8.f_8.f_8.f_8.f_8.f_3 = 1092616192;
	Var111.f_1.f_8.f_8.f_8.f_8.f_8.f_4 = 1073741824;
	Var111.f_1.f_8.f_8.f_8.f_8.f_8.f_5 = 1073741824;
	Var111.f_1.f_8.f_8.f_8.f_8.f_8.f_8.f_3 = 1092616192;
	Var111.f_1.f_8.f_8.f_8.f_8.f_8.f_8.f_4 = 1073741824;
	Var111.f_1.f_8.f_8.f_8.f_8.f_8.f_8.f_5 = 1073741824;
	Var111.f_1.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_3 = 1092616192;
	Var111.f_1.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_4 = 1073741824;
	Var111.f_1.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_5 = 1073741824;
	Var111.f_1.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_3 = 1092616192;
	Var111.f_1.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_4 = 1073741824;
	Var111.f_1.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_5 = 1073741824;
	Var111.f_1.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_3 = 1092616192;
	Var111.f_1.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_4 = 1073741824;
	Var111.f_1.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_5 = 1073741824;
	Var35[0 /*25*/] = 1;
	Var35[0 /*25*/].f_1[0 /*2*/] = 268435456;
	Var35[0 /*25*/].f_1[0 /*2*/].f_1 = 16f;
	Var35[0 /*25*/].f_22 = 4f;
	Var35[0 /*25*/].f_23 = 0.3f;
	Var35[0 /*25*/].f_24 = 1f;
	Var35[1 /*25*/] = 1;
	Var35[1 /*25*/].f_1[0 /*2*/] = 2048;
	Var35[1 /*25*/].f_1[0 /*2*/].f_1 = 4f;
	Var35[1 /*25*/].f_22 = 4f;
	Var35[1 /*25*/].f_23 = 4f;
	Var35[1 /*25*/].f_24 = 2f;
	iLocal_991[0] = -1;
	iLocal_991[1] = -1;
	iLocal_991[2] = -1;
	iLocal_991[3] = -1;
	iLocal_991[4] = -1;
	iLocal_991[5] = -1;
	iLocal_991[6] = -1;
	iLocal_991[7] = -1;
	iLocal_991[8] = -1;
	iLocal_991[9] = -1;
	iLocal_991[10] = -1;
	iLocal_991[11] = 1;
	iLocal_991[12] = -1;
	iLocal_991[13] = -1;
	iLocal_991[14] = -1;
	iLocal_991[15] = -1;
	iLocal_991[16] = -1;
	iLocal_991[17] = -1;
	iLocal_991[18] = -1;
	iLocal_991[19] = -1;
	iLocal_991[20] = -1;
	iLocal_991[21] = -1;
	iLocal_991[22] = -1;
	iLocal_991[23] = -1;
	iLocal_991[24] = -1;
	iLocal_991[25] = -1;
	iLocal_991[26] = -1;
	iLocal_991[27] = -1;
	iLocal_991[28] = 0;
	iLocal_991[29] = -1;
	iLocal_991[30] = -1;
	iLocal_991[31] = -1;
	Var111[0 /*8*/].f_1 = 0;
	Var111[0 /*8*/].f_2 = 0;
	Var111[0 /*8*/] = 50331648;
	Var111[0 /*8*/].f_3 = 8f;
	Var111[0 /*8*/].f_4 = 0f;
	Var111[0 /*8*/].f_5 = 0f;
	Var111[0 /*8*/].f_6 = 0f;
	Var111[0 /*8*/].f_7 = 0f;
	Var111[1 /*8*/].f_1 = 1;
	Var111[1 /*8*/].f_2 = 0;
	Var111[1 /*8*/] = 12582912;
	Var111[1 /*8*/].f_3 = 3.5f;
	Var111[1 /*8*/].f_4 = 0f;
	Var111[1 /*8*/].f_5 = 0f;
	Var111[1 /*8*/].f_6 = 0f;
	Var111[1 /*8*/].f_7 = 0f;
	Var111[2 /*8*/].f_1 = 0;
	Var111[2 /*8*/].f_2 = 0;
	Var111[2 /*8*/] = 64;
	Var111[2 /*8*/].f_3 = 4f;
	Var111[2 /*8*/].f_4 = 1f;
	Var111[2 /*8*/].f_5 = 3f;
	Var111[2 /*8*/].f_6 = 1f;
	Var111[2 /*8*/].f_7 = 0f;
	Var111[4 /*8*/].f_1 = 1;
	Var111[4 /*8*/].f_2 = 0;
	Var111[4 /*8*/] = 201326592;
	Var111[4 /*8*/].f_3 = 10f;
	Var111[4 /*8*/].f_4 = 0f;
	Var111[4 /*8*/].f_5 = 0f;
	Var111[4 /*8*/].f_6 = 0f;
	Var111[4 /*8*/].f_7 = 0f;
	Var111[5 /*8*/].f_1 = 1;
	Var111[5 /*8*/].f_2 = 0;
	Var111[5 /*8*/] = 8;
	Var111[5 /*8*/].f_3 = 20f;
	Var111[5 /*8*/].f_4 = 2f;
	Var111[5 /*8*/].f_5 = 1f;
	Var111[5 /*8*/].f_6 = 0f;
	Var111[5 /*8*/].f_7 = 0f;
	iLocal_1024[0] = -1;
	iLocal_1024[1] = -1;
	iLocal_1024[2] = -1;
	iLocal_1024[3] = 5;
	iLocal_1024[4] = -1;
	iLocal_1024[5] = -1;
	iLocal_1024[6] = 2;
	iLocal_1024[7] = -1;
	iLocal_1024[8] = -1;
	iLocal_1024[9] = -1;
	iLocal_1024[10] = -1;
	iLocal_1024[11] = -1;
	iLocal_1024[12] = -1;
	iLocal_1024[13] = -1;
	iLocal_1024[14] = -1;
	iLocal_1024[15] = -1;
	iLocal_1024[16] = -1;
	iLocal_1024[17] = -1;
	iLocal_1024[18] = -1;
	iLocal_1024[19] = -1;
	iLocal_1024[20] = -1;
	iLocal_1024[21] = -1;
	iLocal_1024[22] = 1;
	iLocal_1024[23] = 1;
	iLocal_1024[24] = 0;
	iLocal_1024[25] = 0;
	iLocal_1024[26] = 4;
	iLocal_1024[27] = 4;
	iLocal_1024[28] = -1;
	iLocal_1024[29] = -1;
	iLocal_1024[30] = -1;
	iLocal_1024[31] = -1;
	func_48(&Var35, &Var111);
	unk_0x01677A72A8BDCD1A();
	Var0 = { 2624.626f, 5885.852f, -59f };
	Var0.f_3 = 3f;
	Var0.f_4 = 5;
	Var0.f_5 = 0;
	Var0.f_6 = 10f;
	Var0.f_7 = 0f;
	Var0.f_8 = { -90f, 0f, 0f };
	Var0.f_11 = 2f;
	Var0.f_12 = 0f;
	func_29(0, &Var0);
	Var0 = { 2635.626f, 5885.852f, -59f };
	Var0.f_3 = 3f;
	Var0.f_4 = 5;
	Var0.f_5 = 0;
	Var0.f_6 = 10f;
	Var0.f_7 = 0f;
	Var0.f_8 = { -90f, 0f, 0f };
	Var0.f_11 = 2f;
	Var0.f_12 = 0f;
	func_29(1, &Var0);
	Var0 = { 2631.126f, 5882.852f, -59f };
	Var0.f_3 = 3f;
	Var0.f_4 = 5;
	Var0.f_5 = 0;
	Var0.f_6 = 6.7f;
	Var0.f_7 = -90f;
	Var0.f_8 = { -90f, 0f, 0f };
	Var0.f_11 = 6.5f;
	Var0.f_12 = 0f;
	func_29(3, &Var0);
	Var0 = { 2638.126f, 5885.852f, -59f };
	Var0.f_3 = 3f;
	Var0.f_4 = 5;
	Var0.f_5 = 0;
	Var0.f_6 = 5f;
	Var0.f_7 = -90f;
	Var0.f_8 = { 90f, -180f, 0f };
	Var0.f_11 = 7f;
	Var0.f_12 = 1f;
	func_29(4, &Var0);
	Var0 = { 2631.126f, 5885.852f, -59f };
	Var0.f_3 = 3f;
	Var0.f_4 = 5;
	Var0.f_5 = 0;
	Var0.f_6 = 5.5f;
	Var0.f_7 = 90f;
	Var0.f_8 = { 90f, -180f, 0f };
	Var0.f_11 = 7f;
	Var0.f_12 = -1f;
	func_29(5, &Var0);
	Var26 = { 2631.15f, 5882.938f, -60.7105f };
	Var26.f_3 = 0f;
	Var26.f_4 = 0;
	Var26.f_5 = 2000;
	Var26.f_6 = 0f;
	Var26.f_7 = 0f;
	Var26.f_8 = 6;
	func_46(6, &Var26);
	Var26 = { 2631.15f, 5873.352f, -60.7105f };
	Var26.f_3 = 14f;
	Var26.f_4 = 1;
	Var26.f_5 = 0;
	Var26.f_6 = 7.3333f;
	Var26.f_7 = 0f;
	Var26.f_8 = 8;
	func_46(11, &Var26);
	Var0 = { 2636.626f, 5880.352f, -59f };
	Var0.f_3 = 3f;
	Var0.f_4 = 7;
	Var0.f_5 = 0;
	Var0.f_6 = 0f;
	Var0.f_7 = 90f;
	Var0.f_8 = { 90f, -180f, 0f };
	Var0.f_11 = 12f;
	Var0.f_12 = -1f;
	func_29(12, &Var0);
	Var0 = { 2637.626f, 5880.352f, -59f };
	Var0.f_3 = 3f;
	Var0.f_4 = 7;
	Var0.f_5 = 0;
	Var0.f_6 = 0f;
	Var0.f_7 = -90f;
	Var0.f_8 = { 90f, -180f, 0f };
	Var0.f_11 = 12f;
	Var0.f_12 = 1f;
	func_29(13, &Var0);
	Var13 = { 2631.226f, 5876.352f, -59f };
	Var13.f_3 = 3f;
	Var13.f_4 = 1;
	Var13.f_5 = 0;
	Var13.f_6 = 10f;
	Var13.f_7 = 0f;
	Var13.f_8 = 0f;
	Var13.f_9 = 6.6f;
	Var13.f_10 = 50f;
	Var13.f_11 = 0.45f;
	Var13.f_12 = 0f;
	func_47(15, &Var13);
	Var13 = { 2631.119f, 5873.361f, -59f };
	Var13.f_3 = 3f;
	Var13.f_4 = 2;
	Var13.f_5 = 0;
	Var13.f_6 = 10f;
	Var13.f_7 = 0f;
	Var13.f_8 = 0f;
	Var13.f_9 = 7f;
	Var13.f_10 = 37f;
	Var13.f_11 = 0.4f;
	Var13.f_12 = 5.5f;
	func_47(16, &Var13);
	Var0 = { 2626.626f, 5870.352f, -59f };
	Var0.f_3 = 3f;
	Var0.f_4 = 5;
	Var0.f_5 = 0;
	Var0.f_6 = 6.5f;
	Var0.f_7 = -180f;
	Var0.f_8 = { 90f, -180f, 0f };
	Var0.f_11 = 2f;
	Var0.f_12 = 0f;
	func_29(22, &Var0);
	Var0 = { 2637.626f, 5870.352f, -59f };
	Var0.f_3 = 3f;
	Var0.f_4 = 5;
	Var0.f_5 = 0;
	Var0.f_6 = 6.5f;
	Var0.f_7 = -180f;
	Var0.f_8 = { 90f, -180f, 0f };
	Var0.f_11 = 2f;
	Var0.f_12 = 0f;
	func_29(23, &Var0);
	Var0 = { 2636.126f, 5871.852f, -59f };
	Var0.f_3 = 3f;
	Var0.f_4 = 7;
	Var0.f_5 = 0;
	Var0.f_6 = 2f;
	Var0.f_7 = 90f;
	Var0.f_8 = { 90f, -180f, 0f };
	Var0.f_11 = 12f;
	Var0.f_12 = 1f;
	func_29(24, &Var0);
	Var0 = { 2638.126f, 5871.852f, -59f };
	Var0.f_3 = 3f;
	Var0.f_4 = 7;
	Var0.f_5 = 0;
	Var0.f_6 = 2f;
	Var0.f_7 = -90f;
	Var0.f_8 = { 90f, -180f, 0f };
	Var0.f_11 = 12f;
	Var0.f_12 = -1f;
	func_29(25, &Var0);
	Var0 = { 2638.126f, 5863.852f, -59f };
	Var0.f_3 = 3f;
	Var0.f_4 = 6;
	Var0.f_5 = 0;
	Var0.f_6 = 3f;
	Var0.f_7 = -90f;
	Var0.f_8 = { 90f, -180f, 0f };
	Var0.f_11 = 10f;
	Var0.f_12 = 1f;
	func_29(26, &Var0);
	Var0 = { 2634.126f, 5863.852f, -59f };
	Var0.f_3 = 3f;
	Var0.f_4 = 6;
	Var0.f_5 = 0;
	Var0.f_6 = 3f;
	Var0.f_7 = 90f;
	Var0.f_8 = { 90f, -180f, 0f };
	Var0.f_11 = 10f;
	Var0.f_12 = -1f;
	func_29(27, &Var0);
	Var26 = { 2631.15f, 5863.85f, -60.7105f };
	Var26.f_3 = 14.5f;
	Var26.f_4 = 0;
	Var26.f_5 = 2000;
	Var26.f_6 = 6.7097f;
	Var26.f_7 = 0f;
	Var26.f_8 = 7;
	func_46(28, &Var26);
	unk_0x976D155439608592();
}

void func_67()
{
	int iVar0;
	int iVar1;
	
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("mpinvperscommon", false);
	STREAMING::REQUEST_NAMED_PTFX_ASSET("scr_sum26");
	STREAMING::REQUEST_MODEL(260891341);
	STREAMING::REQUEST_MODEL(30295888);
	STREAMING::REQUEST_MODEL(751082812);
	if ((((!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("mpinvperscommon") || !STREAMING::HAS_NAMED_PTFX_ASSET_LOADED("scr_sum26")) || !STREAMING::HAS_MODEL_LOADED(260891341)) || !STREAMING::HAS_MODEL_LOADED(30295888)) || !STREAMING::HAS_MODEL_LOADED(751082812))
	{
		return;
	}
	Global_1935234.f_2 = -1;
	if (Global_4718592.f_3771 == 2)
	{
		Global_1935234.f_3 = Global_4718592.f_198730;
	}
	else
	{
		Global_1935234.f_3 = Global_4718592.f_198729;
	}
	func_36(&iLocal_971, "Laser_Grid_Active_Background_Hum_Loop", func_74(), "DLC_26-1_Heist_Laser_Grid_Minigame_Sounds", 0, 0, 0);
	iLocal_1062[0] = OBJECT::CREATE_OBJECT_NO_OFFSET(260891341, 2631.1f, 5874.9f, -60.5f, false, true, false, 0);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(260891341);
	iLocal_1062[1] = OBJECT::CREATE_OBJECT_NO_OFFSET(30295888, 2631.1f, 5874.9f, -60.5f, false, true, false, 0);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(30295888);
	iLocal_1062[2] = OBJECT::CREATE_OBJECT_NO_OFFSET(751082812, 2631.1f, 5874.9f, -60.5f, false, true, false, 0);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(751082812);
	iVar0 = func_73();
	iLocal_1058 = func_70();
	bLocal_1059 = func_68(iVar0);
	unk_0xDC60226A3F4D9F42(1);
	iVar1 = 0;
	while (iVar1 <= 63)
	{
		iLocal_906[iVar1] = AUDIO::GET_SOUND_ID();
		iVar1++;
	}
	iLocal_972 = AUDIO::GET_SOUND_ID();
	func_75(1);
}

int func_68(int iParam0)
{
	if (func_69(iParam0))
	{
		return BitTest(Global_1983730[iParam0 /*149*/].f_137, 28);
	}
	return 0;
}

int func_69(var uParam0)
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

int func_70()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_73();
	if (!func_72(iVar0))
	{
		iVar1 = 0;
	}
	else
	{
		iVar2 = func_71(iVar0);
		MISC::SET_RANDOM_SEED(iVar2);
		iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
	}
	return iVar1;
}

int func_71(int iParam0)
{
	if (func_69(iParam0))
	{
		return Global_1983730[iParam0 /*149*/].f_137.f_10;
	}
	return 0;
}

int func_72(int iParam0)
{
	if (func_69(iParam0))
	{
		return BitTest(Global_1983730[iParam0 /*149*/].f_137, 2);
	}
	return 0;
}

var func_73()
{
	return Global_1892925[PLAYER::PLAYER_ID() /*615*/].f_10;
}

Vector3 func_74()
{
	struct<3> Var0;
	
	Var0.f_0 = (2624.229f + (13.8f / 2f));
	Var0.f_1 = (5863.85f + (22f / 2f));
	Var0.f_2 = (-62f + (3f / 2f));
	return Var0;
}

void func_75(int iParam0)
{
	iLocal_987 = iParam0;
}

int func_76(bool bParam0)
{
	int iVar0;
	
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(MISC::GET_HASH_KEY("fm_mission_controller_v3")) <= 0)
	{
		return 1;
	}
	if (!bParam0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_981) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iLocal_981, true))
		{
			OBJECT::DELETE_OBJECT(&iLocal_981);
		}
		return 1;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_981) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iLocal_981, true))
	{
		ENTITY::SET_ENTITY_VISIBLE(iLocal_981, false, false);
		if (!bLocal_974)
		{
			OBJECT::DELETE_OBJECT(&iLocal_981);
		}
		else if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_973, true) || TASK::GET_SCRIPT_TASK_STATUS(iLocal_973, joaat("script_task_enter_vehicle")) == 1)
		{
			ENTITY::SET_ENTITY_COLLISION(iLocal_981, false, false);
		}
		else
		{
			ENTITY::SET_ENTITY_COLLISION(iLocal_981, true, false);
		}
		return 1;
	}
	iVar0 = joaat("hei_p_m_bag_var22_arm_s");
	STREAMING::REQUEST_MODEL(iVar0);
	if (!STREAMING::HAS_MODEL_LOADED(iVar0))
	{
		return 0;
	}
	if (!bLocal_974)
	{
		return 0;
	}
	iLocal_981 = OBJECT::CREATE_OBJECT(iVar0, ENTITY::GET_ENTITY_COORDS(iLocal_973, true), false, true, true);
	ENTITY::SET_ENTITY_INVINCIBLE(iLocal_981, true, 0);
	ENTITY::SET_ENTITY_VISIBLE(iLocal_981, false, false);
	ENTITY::SET_ENTITY_COLLISION(iLocal_981, false, false);
	ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_981, iLocal_973, PED::GET_PED_BONE_INDEX(iLocal_973, 11816), -0.025f, -0.017f, 0.012f, 180f, -86.767f, -7.617f, true, false, true, false, 2, true, 0);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
	return 1;
}

float func_77(float fParam0, float fParam1, float fParam2)
{
	return (fParam1 + ((fParam0 - fParam1) * SYSTEM::POW(2.718282f, (-fParam2 * MISC::GET_FRAME_TIME()))));
}

void func_78()
{
	MISC::SET_BIT(&Global_9503, 4);
}

void func_79()
{
	func_80(&iLocal_906, -1);
}

void func_80(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		(*uParam0)[iVar0] = iParam1;
		iVar0++;
	}
}

