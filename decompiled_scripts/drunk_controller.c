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
	BOOL bLocal_12 = 0;
	int iLocal_13 = 0;
	int iLocal_14 = 0;
	int iLocal_15 = 0;
	float fLocal_16 = 0f;
	int iLocal_17 = 8;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	float fLocal_26 = 0f;
#endregion

void main() // Hash - 0x2F144F5 ^0x2F144F5
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
	fLocal_16 = -99f;
	fLocal_26 = -1f;
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(32))
		func_32();

	while (true)
	{
		SYSTEM::WAIT(0);
		func_31(0);
		func_30();
		func_23();
		func_20();
		func_15();
		func_2();
		iLocal_13 = iLocal_13 + 1;
	
		if (iLocal_13 >= 16)
			iLocal_13 = 0;
	
		iLocal_14 = iLocal_14 + 1;
	
		if (iLocal_14 >= 16)
			iLocal_14 = 0;
	
		iLocal_15 = iLocal_15 + 1;
	
		if (iLocal_15 >= 5)
			iLocal_15 = 0;
	
		if (!func_1())
			func_32();
	}

	return;
}

BOOL func_1() // Hash - 0x8466F6B0 ^0xCEEA103F
{
	if (Global_44411)
		return true;

	if (CAM::DOES_CAM_EXIST(Global_44412))
		return true;

	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("DRUNK")) > 0)
		return true;

	if (Global_44204 > 0)
		return true;

	return false;
}

void func_2() // Hash - 0x9BB48797 ^0x68ED2BBB
{
	int i;
	int gameTimer;
	float num;
	float num2;
	int num3;
	float num4;
	float num5;
	int num6;
	BOOL flag;

	if (!Global_44411)
		return;

	gameTimer = MISC::GET_GAME_TIMER();

	if (Global_44413 > gameTimer || Global_44413 == -1)
	{
		if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
			return;
	
		num = func_14();
	
		for (i = iLocal_17 - 1; i >= 1; i = i + -1)
		{
			iLocal_17[i] = iLocal_17[i - 1];
		}
	
		iLocal_17[0] = num;
		num3 = 0;
	
		for (i = 0; i < iLocal_17; i = i + 1)
		{
			num2 = num2 + iLocal_17[i];
			num3 = num3 + 1;
		}
	
		num2 = num2 / (float)num3;
		num4 = func_9();
	
		if (Global_44416 != Global_44417)
		{
			num5 = Global_44417 - Global_44416;
			Global_44416 = Global_44416 + (num5 * 0.1f);
		
			if (MISC::ABSF(Global_44416 - Global_44417) < 0.01f)
				Global_44416 = Global_44417;
		}
	
		if (!CAM::IS_GAMEPLAY_CAM_SHAKING() && !func_8(PLAYER::PLAYER_ID()))
			CAM::SHAKE_GAMEPLAY_CAM("DRUNK_SHAKE", Global_44416 * num2 * num4);
	
		if (MISC::GET_GAME_TIMER() % 100 == 0)
		{
			if (Global_44413 == -1)
			{
			}
			else
			{
				if (fLocal_26 == -1f)
					fLocal_26 = num2;
			
				CAM::SET_GAMEPLAY_CAM_SHAKE_AMPLITUDE(Global_44416 * num2 * num4);
				CAM::SET_GAMEPLAY_CAM_MOTION_BLUR_SCALING_THIS_UPDATE(Global_44415 * num2 * num4);
				fLocal_26 = num2;
			}
		}
	
		if (Global_44415 * num2 * num4 < 1f)
			CAM::SET_GAMEPLAY_CAM_MAX_MOTION_BLUR_STRENGTH_THIS_UPDATE(Global_44415 * num2 * num4);
		else
			CAM::SET_GAMEPLAY_CAM_MAX_MOTION_BLUR_STRENGTH_THIS_UPDATE(1f);
	
		if (!CAM::IS_CINEMATIC_CAM_SHAKING())
			CAM::SHAKE_CINEMATIC_CAM("DRUNK_SHAKE", Global_44416 * Global_44410 * num2 * num4);
	
		CAM::SET_CINEMATIC_CAM_SHAKE_AMPLITUDE(Global_44416 * Global_44410 * num2 * num4);
	
		if (CAM::DOES_CAM_EXIST(Global_44412))
			if (CAM::IS_CAM_SHAKING(Global_44412))
				CAM::SET_CAM_SHAKE_AMPLITUDE(Global_44412, Global_44416 * num2 * num4);
	
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&Global_44440) && !MISC::IS_STRING_NULL_OR_EMPTY(&Global_44424))
		{
			AUDIO::START_AUDIO_SCENE(&Global_44424);
			TEXT_LABEL_ASSIGN_STRING(&Global_44440, "", 16);
		}
	
		CAM::INVALIDATE_IDLE_CAM();
	
		if (Global_44419 > 0f)
		{
			if (fLocal_16 != Global_44419)
			{
				if (GRAPHICS::GET_TIMECYCLE_TRANSITION_MODIFIER_INDEX() != -1)
				{
				}
				else if (!GRAPHICS::GET_IS_TIMECYCLE_TRANSITIONING_OUT())
				{
					GRAPHICS::SET_TRANSITION_TIMECYCLE_MODIFIER(&Global_44420, 15f);
					fLocal_16 = Global_44419;
				
					if (Global_44418 != 1f)
						GRAPHICS::SET_TIMECYCLE_MODIFIER_STRENGTH(Global_44418);
				}
			}
			else
			{
				if (GRAPHICS::GET_TIMECYCLE_TRANSITION_MODIFIER_INDEX() != -1 && GRAPHICS::GET_TIMECYCLE_MODIFIER_INDEX() != -1)
					fLocal_16 = -99f;
			
				AUDIO::SET_AUDIO_SPECIAL_EFFECT_MODE(2);
				num6 = Global_44413 - gameTimer;
			
				if (num6 <= Global_44414 / 2 && Global_44413 != -1)
				{
					flag = false;
				
					if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
						if (AUDIO::IS_ANY_SPEECH_PLAYING(PLAYER::PLAYER_PED_ID()))
							flag = true;
				
					if (func_6(PLAYER::PLAYER_PED_ID()))
					{
						Global_44413 = Global_44413 + 1000;
					}
					else if (flag)
					{
						Global_44413 = Global_44413 + 1000;
					}
					else if (GRAPHICS::GET_TIMECYCLE_TRANSITION_MODIFIER_INDEX() != -1)
					{
						Global_44413 = Global_44413 + 1000;
					}
					else if (func_5())
					{
						Global_44413 = Global_44413 + 1000;
					}
					else
					{
						if (GRAPHICS::GET_TIMECYCLE_MODIFIER_INDEX() != -1)
							GRAPHICS::SET_TRANSITION_OUT_OF_TIMECYCLE_MODIFIER(SYSTEM::TO_FLOAT(Global_44414 / 2) / 1000f);
					
						fLocal_16 = -99f;
						Global_44419 = 0f;
						TEXT_LABEL_ASSIGN_STRING(&Global_44420, "", 16);
					}
				}
			}
		}
	
		return;
	}

	for (i = 0; i < iLocal_17; i = i + 1)
	{
		iLocal_17[i] = 0f;
	}

	fLocal_26 = -1f;
	fLocal_16 = -99f;
	func_3(true);
	bLocal_12 = true;
	return;
}

void func_3(BOOL bParam0) // Hash - 0x36E5CE95 ^0x7F9F60EE
{
	CAM::SET_GAMEPLAY_CAM_MOTION_BLUR_SCALING_THIS_UPDATE(0f);
	CAM::SET_GAMEPLAY_CAM_MAX_MOTION_BLUR_STRENGTH_THIS_UPDATE(0f);
	CAM::SET_GAMEPLAY_CAM_SHAKE_AMPLITUDE(0f);
	CAM::STOP_GAMEPLAY_CAM_SHAKING(true);
	CAM::SET_CINEMATIC_CAM_SHAKE_AMPLITUDE(0f);
	CAM::STOP_CINEMATIC_CAM_SHAKING(true);
	AUDIO::SET_AUDIO_SPECIAL_EFFECT_MODE(0);

	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("SAFEHOUSE_STONED_MICHAEL"))
		AUDIO::STOP_AUDIO_SCENE("SAFEHOUSE_STONED_MICHAEL");

	if (!MISC::IS_STRING_NULL_OR_EMPTY(&Global_44424))
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE(&Global_44424))
			AUDIO::STOP_AUDIO_SCENE(&Global_44424);

	if (CAM::DOES_CAM_EXIST(Global_44412))
	{
		if (CAM::IS_CAM_SHAKING(Global_44412))
		{
			CAM::SET_CAM_SHAKE_AMPLITUDE(Global_44412, 0f);
			CAM::STOP_CAM_SHAKING(Global_44412, true);
		}
	}

	if (CAM::IS_SCRIPT_GLOBAL_SHAKING())
		CAM::STOP_SCRIPT_GLOBAL_SHAKING(false);

	if (bParam0)
		if (GRAPHICS::GET_TIMECYCLE_MODIFIER_INDEX() != -1 || GRAPHICS::GET_TIMECYCLE_TRANSITION_MODIFIER_INDEX() != -1)
			GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
		else if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
			GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();

	Global_44419 = 0f;
	TEXT_LABEL_ASSIGN_STRING(&Global_44420, "", 16);
	TEXT_LABEL_ASSIGN_STRING(&Global_44424, "", 64);
	TEXT_LABEL_ASSIGN_STRING(&Global_44440, "", 16);
	func_4();
	return;
}

void func_4() // Hash - 0x12B08A66 ^0x24D40A1B
{
	Global_44411 = false;
	Global_44412 = 0;
	Global_44413 = 0;
	Global_44414 = 30000;
	Global_44415 = 0f;
	Global_44417 = 0f;
	Global_44416 = 0f;
	Global_44418 = 1f;
	Global_44419 = 0f;
	TEXT_LABEL_ASSIGN_STRING(&Global_44420, "", 16);
	return;
}

BOOL func_5() // Hash - 0x47FF56D2 ^0x47FF56D2
{
	return Global_2766478;
}

BOOL func_6(Ped pedParam0) // Hash - 0xD8C74549 ^0xD8C74549
{
	if (pedParam0 == 0)
		return false;

	if (func_7(pedParam0) == -1)
		return false;

	return true;
}

int func_7(Ped pedParam0) // Hash - 0xDCBB968F ^0xDCBB968F
{
	int i;

	if (pedParam0 == 0)
		return -1;

	i = 0;

	for (i = 0; i < 16; i = i + 1)
	{
		if (!Global_44232[i /*5*/] == -1)
			if (pedParam0 == Global_44232[i /*5*/].f_1)
				return i;
	}

	return -1;
}

BOOL func_8(Player plParam0) // Hash - 0xA9D58EBA ^0xF2ED60B1
{
	return IS_BIT_SET(Global_2657589[plParam0 /*466*/].f_321.f_3, 13);
}

float func_9() // Hash - 0x9866E92D ^0x4C32084D
{
	float num;
	int value;
	int value2;

	num = 0.1f;
	value = func_13(PLAYER::PLAYER_PED_ID());
	value2 = func_10(PLAYER::PLAYER_PED_ID());

	if (value2 == 0)
	{
		if (value == 0)
		{
			num = 0.1f;
		}
		else
		{
			num = SYSTEM::TO_FLOAT(value) / SYSTEM::TO_FLOAT(10);
		
			if (num > 1f)
				num = 1f;
		}
	}
	else if (value2 == 0)
	{
		num = 0.1f;
	}
	else
	{
		num = SYSTEM::TO_FLOAT(value2) / SYSTEM::TO_FLOAT(5);
	
		if (num > 1f)
			num = 1f;
	}

	return num;
}

int func_10(Ped pedParam0) // Hash - 0xA8AAC40F ^0x96AA47F
{
	int num;
	int num2;

	if (pedParam0 == 0)
		return 0;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return 0;

	num = func_12(pedParam0);
	num2 = func_11(num);

	if (num2 == -1)
		return -1;

	return Global_44232[num2 /*5*/].f_4;
}

int func_11(int iParam0) // Hash - 0x671ED513 ^0x671ED513
{
	int i;

	i = 0;

	for (i = 0; i < 16; i = i + 1)
	{
		if (Global_44232[i /*5*/] == iParam0)
			return i;
	}

	return -1;
}

int func_12(Ped pedParam0) // Hash - 0x219FA119 ^0x5240A8AF
{
	int i;

	if (pedParam0 == 0)
		return -1;

	i = 0;

	for (i = 0; i < 16; i = i + 1)
	{
		if (pedParam0 == Global_44232[i /*5*/].f_1)
			return Global_44232[i /*5*/];
	}

	return -1;
}

int func_13(Ped pedParam0) // Hash - 0xA8AAC40F ^0x96AA47F
{
	int num;
	int num2;

	if (pedParam0 == 0)
		return 0;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return 0;

	num = func_12(pedParam0);
	num2 = func_11(num);

	if (num2 == -1)
		return -1;

	return Global_44232[num2 /*5*/].f_3;
}

float func_14() // Hash - 0x8870D404 ^0x83D42B58
{
	int gameTimer;
	float num;
	int value;

	gameTimer = MISC::GET_GAME_TIMER();
	num = 1f;
	value = Global_44413 - gameTimer;

	if (value <= Global_44414)
		if (Global_44413 != -1)
			num = SYSTEM::TO_FLOAT(value) / SYSTEM::TO_FLOAT(Global_44414);

	return num;
}

void func_15() // Hash - 0x2479F150 ^0x2479F150
{
	if (Global_44206[iLocal_15 /*5*/] == 0)
		func_16(iLocal_15);

	return;
}

void func_16(int iParam0) // Hash - 0x40E7AFA2 ^0x807EC556
{
	int num;
	struct<5> args;

	if (iParam0 < 0 || iParam0 >= 5)
		return;

	if (ENTITY::IS_ENTITY_DEAD(Global_44206[iParam0 /*5*/].f_1, false))
	{
		func_19(iParam0);
		return;
	}

	if (func_6(Global_44206[iParam0 /*5*/].f_1))
	{
		func_19(iParam0);
		return;
	}

	if (!SCRIPT::HAS_SCRIPT_LOADED("drunk"))
	{
		SCRIPT::REQUEST_SCRIPT("drunk");
		return;
	}

	num = func_18();

	if (num == -1)
	{
		func_19(iParam0);
		return;
	}

	Global_44232[num /*5*/] = func_17();
	Global_44232[num /*5*/].f_1 = Global_44206[iParam0 /*5*/].f_1;
	Global_44232[num /*5*/].f_2 = 0;
	args = { Global_44206[iParam0 /*5*/] };
	SYSTEM::START_NEW_SCRIPT_WITH_ARGS("drunk", &args, 5, DEFAULT);
	SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("drunk");
	func_19(iParam0);
	return;
}

int func_17() // Hash - 0xF59C325D ^0xF59C325D
{
	int num;

	num = Global_44203;
	Global_44203 = Global_44203 + 1;
	return num;
}

int func_18() // Hash - 0x62615AFD ^0x62615AFD
{
	int i;

	i = 0;

	for (i = 0; i < 16; i = i + 1)
	{
		if (Global_44232[i /*5*/] == -1)
			return i;
	}

	return -1;
}

void func_19(int iParam0) // Hash - 0xBB510F32 ^0xE77AE77B
{
	if (iParam0 < 0 || iParam0 >= 5)
		return;

	if (!Global_44206[iParam0 /*5*/].f_1 == 0)
		if (Global_44206[iParam0 /*5*/].f_1 == PLAYER::PLAYER_PED_ID())
			Global_44444 = 0;

	Global_44206[iParam0 /*5*/] = 13;
	Global_44206[iParam0 /*5*/].f_1 = 0;
	Global_44206[iParam0 /*5*/].f_2 = 0;
	Global_44206[iParam0 /*5*/].f_3 = 0;
	Global_44206[iParam0 /*5*/].f_4 = 0;
	Global_44204 = Global_44204 - 1;

	if (Global_44204 < 0)
		Global_44204 = 0;

	return;
}

void func_20() // Hash - 0xFC840A2B ^0x6B34ECA6
{
	if (!Global_44313[iLocal_13 /*6*/].f_2 == 6)
	{
		if (Global_44313[iLocal_13 /*6*/].f_1 == 0)
		{
			func_22(iLocal_13);
			func_21(iLocal_13);
		}
	}

	return;
}

void func_21(int iParam0) // Hash - 0x4CF611D4 ^0xB1D19983
{
	if (iParam0 < 0 || iParam0 >= 16)
		return;

	Global_44313[iParam0 /*6*/] = -1;
	Global_44313[iParam0 /*6*/].f_1 = -1;
	Global_44313[iParam0 /*6*/].f_2 = 6;
	Global_44313[iParam0 /*6*/].f_3 = 0;
	Global_44313[iParam0 /*6*/].f_4 = 0;
	return;
}

void func_22(int iParam0) // Hash - 0xC32B735E ^0x6F785E90
{
	int num;

	num = Global_44313[iParam0 /*6*/].f_2;

	switch (num)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
			break;
	
		default:
			break;
	}

	return;
}

void func_23() // Hash - 0x97CEF359 ^0x97CEF359
{
	int num;

	num = -1;

	if (!Global_44232[iLocal_14 /*5*/] == -1)
	{
		num = func_29(Global_44232[iLocal_14 /*5*/], 0);
	
		if (num == -1)
			func_24(Global_44232[iLocal_14 /*5*/]);
		else
			func_21(num);
	}

	return;
}

void func_24(int iParam0) // Hash - 0x890713F4 ^0x890713F4
{
	int num;

	func_27(iParam0);
	num = func_26(iParam0);

	if (num == -1)
		return;

	func_25(num);
	return;
}

void func_25(int iParam0) // Hash - 0xC27AFC9C ^0xA203CE29
{
	if (iParam0 < 0 || iParam0 >= 16)
		return;

	Global_44232[iParam0 /*5*/] = -1;
	Global_44232[iParam0 /*5*/].f_1 = 0;
	Global_44232[iParam0 /*5*/].f_2 = -1;
	Global_44232[iParam0 /*5*/].f_3 = 0;
	Global_44232[iParam0 /*5*/].f_4 = 0;
	return;
}

int func_26(int iParam0) // Hash - 0x671ED513 ^0x671ED513
{
	int i;

	i = 0;

	for (i = 0; i < 16; i = i + 1)
	{
		if (Global_44232[i /*5*/] == iParam0)
			return i;
	}

	return -1;
}

void func_27(int iParam0) // Hash - 0x49584173 ^0x49584173
{
	func_31(iParam0);
	func_28(iParam0);
	return;
}

void func_28(int iParam0) // Hash - 0x28A631A4 ^0x625D02F2
{
	int i;

	i = 0;

	for (i = 0; i < 16; i = i + 1)
	{
		if (iParam0 == Global_44313[i /*6*/].f_1)
			func_21(i);
	}

	return;
}

int func_29(int iParam0, int iParam1) // Hash - 0x74EAA704 ^0xE8F76242
{
	int i;

	i = 0;

	for (i = 0; i < 16; i = i + 1)
	{
		if (iParam1 == Global_44313[i /*6*/].f_2)
			if (iParam0 == Global_44313[i /*6*/])
				return i;
	}

	return -1;
}

void func_30() // Hash - 0x3340D42A ^0x3340D42A
{
	if (Global_44313[iLocal_13 /*6*/] == 1)
		Global_44313[iLocal_13 /*6*/] = 0;

	return;
}

void func_31(int iParam0) // Hash - 0x88C53499 ^0x88C53499
{
	int i;

	i = 0;

	for (i = 0; i < 16; i = i + 1)
	{
		if (iParam0 == Global_44313[i /*6*/])
			func_21(i);
	}

	return;
}

void func_32() // Hash - 0x7CFDA414 ^0x53DE71C6
{
	func_33();

	if (!bLocal_12)
		func_3(true);

	SCRIPT::TERMINATE_THIS_THREAD();
	return;
}

void func_33() // Hash - 0x6B720190 ^0x1D04CD0C
{
	func_36();
	func_35();
	func_34();
	func_4();
	Global_44445 = 0;
	Global_44444 = 0;
	Global_44204 = 0;
	MISC::TERMINATE_ALL_SCRIPTS_WITH_THIS_NAME("drunk");
	return;
}

void func_34() // Hash - 0xD3301E0E ^0xD3301E0E
{
	int i;

	i = 0;

	for (i = 0; i < 16; i = i + 1)
	{
		func_21(i);
	}

	return;
}

void func_35() // Hash - 0xD3301E0E ^0xD3301E0E
{
	int i;

	i = 0;

	for (i = 0; i < 16; i = i + 1)
	{
		func_25(i);
	}

	return;
}

void func_36() // Hash - 0xFD4B1547 ^0xFD4B1547
{
	int i;

	i = 0;

	for (i = 0; i < 5; i = i + 1)
	{
		func_19(i);
	}

	return;
}

