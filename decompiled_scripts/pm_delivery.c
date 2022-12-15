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
	int iLocal_20 = 0;
	char* sLocal_21 = 0;
	float fLocal_22 = 0f;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	float fLocal_26 = 0f;
	float fLocal_27 = 0f;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	int iLocal_36 = 0;
	int iLocal_37 = 0;
	int iLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 3;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 1092616192;
	var uLocal_47 = 1101004800;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 3;
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
	float fLocal_73 = 0f;
	float fLocal_74 = 0f;
	BOOL bLocal_75 = 0;
	BOOL bLocal_76 = 0;
	BOOL bLocal_77 = 0;
	BOOL bLocal_78 = 0;
	BOOL bLocal_79 = 0;
	int iLocal_80 = 0;
	int iLocal_81 = 0;
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	int iLocal_84 = 0;
	int iLocal_85 = 0;
	Hash hLocal_86 = 0;
	Hash hLocal_87 = 0;
	Hash hLocal_88 = 0;
	Hash hLocal_89 = 0;
	int iLocal_90 = 2;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	int iLocal_93 = 2;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	Vehicle veLocal_96 = 0;
	Vehicle veLocal_97 = 0;
	Vehicle veLocal_98 = 0;
	var uLocal_99 = 2;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	Blip blLocal_102 = 0;
	char* sLocal_103 = 0;
	char* sLocal_104 = 0;
	char* sLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = -1;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 1000;
	var uLocal_116 = 1000;
	var uLocal_117 = 0;
	Hash hLocal_118 = 0;
	Hash hLocal_119 = 0;
	int iLocal_120 = 0;
#endregion

void main() // Position - 0x0 Hash - 0x5D84F89F ^0x5D84F89F
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
	fLocal_14 = 0.001f;
	iLocal_17 = -1;
	iLocal_20 = 3;
	sLocal_21 = "NULL";
	fLocal_22 = 0f;
	fLocal_26 = -0.0375f;
	fLocal_27 = 0.17f;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_85 = -1;
	sLocal_103 = "PMDL_OBJ";
	sLocal_104 = "PMDL_LOC";
	sLocal_105 = "PMDL_BCK";
	MISC::SET_MISSION_FLAG(true);

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		func_142(2);
		func_114();
	}

	iLocal_36 = func_112();

	while (true)
	{
		switch (iLocal_37)
		{
			case 0:
				if (!bLocal_76)
					func_107();
				else
					func_106();
			
				if (bLocal_75)
				{
					bLocal_77 = true;
					iLocal_37 = 1;
				}
				break;
		
			case 1:
				if (!func_105())
				{
					switch (iLocal_38)
					{
						case 0:
							func_102();
							break;
					
						case 1:
							if (iLocal_36 == 5 || iLocal_36 == 6)
								func_66();
							else
								func_65();
							break;
					
						case 2:
							func_9();
						
							if (iLocal_36 < 3)
							{
								func_7();
							}
							else if (iLocal_36 > 6)
							{
								func_7();
								func_2();
							}
							break;
					
						case 3:
						case 4:
							func_1();
							break;
					}
				}
				else
				{
					func_1();
				}
				break;
		}
	
		SYSTEM::WAIT(0);
	}

	return;
}

void func_1() // Position - 0x153 Hash - 0x2CEE6999 ^0x2CEE6999
{
	func_142(2);
	func_114();
	return;
}

void func_2() // Position - 0x164 Hash - 0x1C5A8B06 ^0x75C85FA2
{
	int num;
	int num2;

	if (ENTITY::DOES_ENTITY_EXIST(veLocal_96))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_96, false))
		{
			num = 200;
			num2 = ENTITY::GET_ENTITY_HEALTH(veLocal_96) - 800;
		
			if (ENTITY::IS_ENTITY_UPSIDEDOWN(veLocal_96))
				ENTITY::SET_ENTITY_HEALTH(veLocal_96, ENTITY::GET_ENTITY_HEALTH(veLocal_96) - 5, 0);
		
			if (num2 <= 0)
				iLocal_38 = 4;
			else if (num2 < 75)
				func_3(num2, num, "PMDL_DMG", 6, 0, 1, 2);
			else
				func_3(num2, num, "PMDL_DMG", 1, 0, 1, 2);
		}
		else
		{
			iLocal_38 = 4;
		}
	}
	else
	{
		iLocal_38 = 4;
	}

	return;
}

void func_3(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x1E7 Hash - 0x2294E191 ^0x2294E191
{
	func_4(iParam0, iParam1, sParam2, iParam3, iParam4, iParam6, -1f, -1f, 0, iParam5, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 1, -1, 0, -1, -1082130432, -1082130432, 0, 1, 0, 0, 1, -1, 0, -1, 1);
	return;
}

void func_4(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, float fParam6, float fParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24, int iParam25, int iParam26, int iParam27, int iParam28, int iParam29, int iParam30, int iParam31, int iParam32, int iParam33, int iParam34, int iParam35, int iParam36) // Position - 0x227 Hash - 0x221F2972 ^0x221F2972
{
	int num;
	int i;

	num = -1;

	for (i = 0; i <= 9; i = i + 1)
	{
		if (num == -1)
			if (func_6(0, i) == false)
				num = i;
	}

	if (num > -1)
	{
		Global_1655472.f_1 = 1;
		func_5(0, num);
		Global_1655472.f_1177[num] = iParam0;
		Global_1655472.f_1177.f_11[num] = iParam1;
		TEXT_LABEL_ASSIGN_STRING(&Global_1655472.f_1177.f_22[num /*16*/], sParam2, 64);
		Global_1655472.f_1177.f_194[num] = iParam3;
		Global_1655472.f_1177.f_183[num] = iParam4;
		Global_1655472.f_1177.f_216[num] = iParam5;
		Global_1655472.f_1177.f_227[num /*3*/] = fParam6;
		Global_1655472.f_1177.f_227[num /*3*/].f_1 = fParam7;
		Global_1655472.f_1177.f_258[num] = iParam8;
		Global_1655472.f_1177.f_269[num] = iParam9;
		Global_1655472.f_1177.f_312[num] = iParam10;
		Global_1655472.f_1177.f_323[num] = iParam11;
		Global_1655472.f_1177.f_334[num] = iParam12;
		Global_1655472.f_1177.f_345[num] = iParam13;
		Global_1655472.f_1172 = 1;
		Global_1655472.f_1177.f_356[num] = iParam14;
		Global_1655472.f_1177.f_367[num] = iParam15;
		Global_1655472.f_1177.f_378[num] = iParam16;
		Global_1655472.f_1177.f_389[num] = iParam17;
		Global_1655472.f_1177.f_400[num] = iParam18;
		Global_1655472.f_1177.f_411[num] = iParam19;
		Global_1655472.f_1177.f_422[num] = iParam20;
		Global_1655472.f_1177.f_433[num] = iParam21;
		Global_1655472.f_1177.f_444[num] = iParam22;
		Global_1655472.f_1177.f_455[num] = iParam23;
		Global_1655472.f_1177.f_466[num] = iParam24;
		Global_1655472.f_1177.f_205[num] = iParam25;
		Global_1655472.f_1177.f_477[num] = iParam26;
		Global_1655472.f_1177.f_488[num] = iParam27;
		Global_1655472.f_1177.f_499[num] = iParam28;
		Global_1655472.f_1177.f_510[num] = iParam29;
		Global_1655472.f_1177.f_521[num] = iParam30;
		Global_1655472.f_1177.f_532[num] = iParam31;
		Global_1655472.f_1177.f_543[num] = iParam32;
		Global_1655472.f_1177.f_554[num] = iParam33;
		Global_1655472.f_1177.f_565[num] = iParam34;
		Global_1655472.f_1177.f_576[num] = iParam35;
		Global_1655472.f_1177.f_587[num] = iParam36;
	}

	return;
}

void func_5(int iParam0, int iParam1) // Position - 0x4BF Hash - 0xB94ADBE4 ^0x5A6F4E87
{
	MISC::SET_BIT(&Global_1655472.f_7009[iParam0], iParam1);
	return;
}

BOOL func_6(int iParam0, int iParam1) // Position - 0x4D8 Hash - 0x3E555E75 ^0x3E555E75
{
	return IS_BIT_SET(Global_1655472.f_7009[iParam0], iParam1);
}

void func_7() // Position - 0x4EE Hash - 0x2CE5E875 ^0x57941946
{
	int num;

	num = iLocal_80 - MISC::GET_GAME_TIMER();

	if (num < 0)
		num = 0;

	if (MISC::GET_GAME_TIMER() >= iLocal_84)
		func_8(num, _("TIME"), 0, 0, -1, 0, 2, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, -1);
	else
		func_8(num, _("TIME"), 0, 0, -1, 0, 2, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1);

	switch (iLocal_81)
	{
		case 0:
			if (MISC::GET_GAME_TIMER() >= iLocal_80 - 10000)
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", true);
				iLocal_81 = iLocal_81 + 1;
			}
			break;
	
		case 1:
			if (MISC::GET_GAME_TIMER() >= iLocal_80 - 9000)
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", true);
				iLocal_81 = iLocal_81 + 1;
			}
			break;
	
		case 2:
			if (MISC::GET_GAME_TIMER() >= iLocal_80 - 8000)
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", true);
				iLocal_81 = iLocal_81 + 1;
			}
			break;
	
		case 3:
			if (MISC::GET_GAME_TIMER() >= iLocal_80 - 7000)
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", true);
				iLocal_81 = iLocal_81 + 1;
			}
			break;
	
		case 4:
			if (MISC::GET_GAME_TIMER() >= iLocal_80 - 6000)
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", true);
				iLocal_81 = iLocal_81 + 1;
			}
			break;
	
		case 5:
			if (MISC::GET_GAME_TIMER() >= iLocal_80 - 5000)
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", true);
				iLocal_81 = iLocal_81 + 1;
			}
			break;
	
		case 6:
			if (MISC::GET_GAME_TIMER() >= iLocal_80 - 4500)
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", true);
				iLocal_81 = iLocal_81 + 1;
			}
			break;
	
		case 7:
			if (MISC::GET_GAME_TIMER() >= iLocal_80 - 4000)
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", true);
				iLocal_81 = iLocal_81 + 1;
			}
			break;
	
		case 8:
			if (MISC::GET_GAME_TIMER() >= iLocal_80 - 3500)
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", true);
				iLocal_81 = iLocal_81 + 1;
			}
			break;
	
		case 9:
			if (MISC::GET_GAME_TIMER() >= iLocal_80 - 3000)
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", true);
				iLocal_81 = iLocal_81 + 1;
			}
			break;
	
		case 10:
			if (MISC::GET_GAME_TIMER() >= iLocal_80 - 2500)
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", true);
				iLocal_81 = iLocal_81 + 1;
			}
			break;
	
		case 11:
			if (MISC::GET_GAME_TIMER() >= iLocal_80 - 2000)
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", true);
				iLocal_81 = iLocal_81 + 1;
			}
			break;
	
		case 12:
			if (MISC::GET_GAME_TIMER() >= iLocal_80 - 1500)
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", true);
				iLocal_81 = iLocal_81 + 1;
			}
			break;
	
		case 13:
			if (MISC::GET_GAME_TIMER() >= iLocal_80 - 1000)
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", true);
				iLocal_81 = iLocal_81 + 1;
			}
			break;
	
		case 14:
			if (MISC::GET_GAME_TIMER() >= iLocal_80 - 500)
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", true);
				iLocal_81 = iLocal_81 + 1;
			}
			break;
	
		case 15:
			if (MISC::GET_GAME_TIMER() >= iLocal_80)
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "TIMER_STOP", "HUD_MINI_GAME_SOUNDSET", true);
				iLocal_81 = iLocal_81 + 1;
			}
			break;
	
		case 16:
			break;
	}

	if (MISC::GET_GAME_TIMER() >= iLocal_80)
		iLocal_38 = 3;

	return;
}

void func_8(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17) // Position - 0x7DE Hash - 0xE816D297 ^0xE816D297
{
	int num;
	int i;

	num = -1;

	for (i = 0; i <= 9; i = i + 1)
	{
		if (num == -1)
			if (func_6(7, i) == false)
				num = i;
	}

	if (num > -1)
	{
		Global_1655472.f_1 = 1;
		func_5(7, num);
		Global_1655472.f_4659[num] = iParam0;
		TEXT_LABEL_ASSIGN_STRING(&Global_1655472.f_4659.f_11[num /*16*/], sParam1, 64);
		Global_1655472.f_4659.f_172[num] = iParam2;
		Global_1655472.f_4659.f_216[num] = iParam3;
		Global_1655472.f_4659.f_183[num] = iParam4;
		Global_1655472.f_4659.f_194[num] = iParam5;
		Global_1655472.f_4659.f_249[num] = iParam6;
		Global_1655472.f_4659.f_260[num] = iParam7;
		Global_1655472.f_4659.f_205[num] = iParam8;
		Global_1655472.f_4659.f_314[num] = iParam9;
		Global_1655472.f_4659.f_325[num] = iParam10;
		Global_1655472.f_4659.f_357[num] = iParam11;
		Global_1655472.f_4659.f_238[num] = iParam12;
		Global_1655472.f_4659.f_271[num] = iParam13;
		Global_1655472.f_4659.f_368[num] = iParam14;
		Global_1655472.f_4659.f_379[num] = iParam15;
		Global_1655472.f_4659.f_390[num] = iParam16;
		Global_1655472.f_4659.f_227[num] = iParam17;
	}

	return;
}

void func_9() // Position - 0x93B Hash - 0x855D30C1 ^0x3B079C31
{
	int i;
	int j;

	if (iLocal_36 >= 3 && iLocal_36 <= 4)
	{
		for (i = 0; i < iLocal_93; i = i + 1)
		{
			if (!bLocal_78)
			{
				if (!PED::IS_PED_INJURED(iLocal_93[i]))
				{
					if (!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), uLocal_64, 50f, 50f, 50f, false, true, 0))
					{
						PLAYER::SET_PLAYER_WANTED_LEVEL_NO_DROP(PLAYER::PLAYER_ID(), 2, false);
						PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
						PLAYER::SET_WANTED_LEVEL_DIFFICULTY(PLAYER::PLAYER_ID(), 0f);
						bLocal_78 = true;
					}
				}
			}
			else if (!PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
			{
				if (!PED::IS_PED_INJURED(iLocal_93[i]))
				{
					TASK::TASK_SMART_FLEE_PED(iLocal_93[i], PLAYER::PLAYER_PED_ID(), 1000f, -1, false, false);
					PED::SET_PED_KEEP_TASK(iLocal_93[i], true);
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_93[i]);
				}
			
				if (ENTITY::DOES_ENTITY_EXIST(veLocal_97))
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&veLocal_97);
			}
		}
	}

	if (func_21(&uLocal_39, uLocal_67, Global_22, true, veLocal_96, sLocal_104, "", sLocal_105, true, 0, true, INVALID))
	{
		func_19(veLocal_96, 10.5f, 2, 1056964608, false, true, false);
		TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 2000, 0);
		VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(veLocal_96, false);
		func_14(&uLocal_39, true, false);
		func_13();
	}

	for (j = 0; j < iLocal_90; j = j + 1)
	{
		if (!PED::IS_PED_INJURED(iLocal_90[j]))
		{
			if (!HUD::DOES_BLIP_EXIST(uLocal_99[j]))
			{
				uLocal_99[j] = func_10(iLocal_90[j], true, 145);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_120);
				TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
				TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_120);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_90[j], iLocal_120);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_120);
				PED::SET_PED_KEEP_TASK(iLocal_90[j], true);
			}
		
			if (!ENTITY::IS_ENTITY_AT_ENTITY(iLocal_90[j], PLAYER::PLAYER_PED_ID(), 100f, 100f, 100f, false, true, 0))
			{
				if (HUD::DOES_BLIP_EXIST(uLocal_99[j]))
					HUD::REMOVE_BLIP(&uLocal_99[j]);
			
				TASK::TASK_SMART_FLEE_PED(iLocal_90[j], PLAYER::PLAYER_PED_ID(), 1000f, -1, false, false);
				PED::SET_PED_KEEP_TASK(iLocal_90[j], true);
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_90[j]);
			}
		}
		else if (HUD::DOES_BLIP_EXIST(uLocal_99[j]))
		{
			HUD::REMOVE_BLIP(&uLocal_99[j]);
		}
	}

	return;
}

Blip func_10(Vehicle veParam0, BOOL bParam1, int iParam2) // Position - 0xB65 Hash - 0xA714218A ^0xAD0F82BD
{
	Blip blip;

	blip = func_11(veParam0, !bParam1, false);

	if (iParam2 != 145 && HUD::DOES_BLIP_EXIST(blip) && HUD::DOES_TEXT_LABEL_EXIST(&(Global_2028[iParam2 /*29*/].f_3)))
		HUD::SET_BLIP_NAME_FROM_TEXT_FILE(blip, &(Global_2028[iParam2 /*29*/].f_3));

	return blip;
}

Blip func_11(Vehicle veParam0, BOOL bParam1, BOOL bParam2) // Position - 0xBAF Hash - 0x2E5A72B ^0x64F26CC0
{
	Blip blip;

	if (!ENTITY::DOES_ENTITY_EXIST(veParam0))
		return 0;

	blip = HUD::ADD_BLIP_FOR_ENTITY(veParam0);

	if (ENTITY::IS_ENTITY_A_VEHICLE(veParam0))
	{
		HUD::SET_BLIP_SCALE(blip, NETWORK::NETWORK_IS_GAME_IN_PROGRESS() ? 1f : 1f);
	
		if (!bParam2)
			HUD::SET_BLIP_AS_FRIENDLY(blip, bParam1);
		else
			HUD::SET_BLIP_COLOUR(blip, 2);
	}
	else if (ENTITY::IS_ENTITY_A_PED(veParam0))
	{
		HUD::SET_BLIP_SCALE(blip, NETWORK::NETWORK_IS_GAME_IN_PROGRESS() ? 0.7f : 0.7f);
		HUD::SET_BLIP_AS_FRIENDLY(blip, bParam1);
	}
	else if (ENTITY::IS_ENTITY_AN_OBJECT(veParam0))
	{
		HUD::SET_BLIP_SCALE(blip, NETWORK::NETWORK_IS_GAME_IN_PROGRESS() ? 0.7f : 0.7f);
	}

	return blip;
}

var func_12(BOOL bParam0, var uParam1, var uParam2) // Position - 0xC53 Hash - 0x3EE55A88 ^0x3EE55A88
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

void func_13() // Position - 0xC6A Hash - 0x7B712FE2 ^0x7B712FE2
{
	func_142(1);
	func_114();
	return;
}

void func_14(Blip* pblParam0, BOOL bParam1, BOOL bParam2) // Position - 0xC7B Hash - 0x634140C0 ^0xD1086239
{
	int i;

	if (IS_BIT_SET(pblParam0->f_13, 30))
		bParam1 = true;

	func_18(pblParam0);

	for (i = 0; i < 3; i = i + 1)
	{
		if (HUD::DOES_BLIP_EXIST(pblParam0->f_1[i]))
			HUD::REMOVE_BLIP(&pblParam0->f_1[i]);
	
		func_17(i, pblParam0);
		func_16(i, pblParam0);
	}

	for (i = 0; i < 31; i = i + 1)
	{
		if (i != 8)
		{
			MISC::CLEAR_BIT(&(pblParam0->f_13), i);
			MISC::CLEAR_BIT(&(pblParam0->f_14), i);
		}
	}

	if (HUD::DOES_BLIP_EXIST(*pblParam0))
		HUD::REMOVE_BLIP(pblParam0);

	pblParam0->f_6 = 0;
	pblParam0->f_12 = 0;
	pblParam0->f_15 = 0;

	for (i = 0; i < 3; i = i + 1)
	{
		if (!PED::IS_PED_INJURED(pblParam0->f_17[i]))
		{
			PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(pblParam0->f_17[i], true);
			PED::SET_PED_CAN_PLAY_AMBIENT_BASE_ANIMS(pblParam0->f_17[i], true);
		
			if (bParam2)
			{
				PED::SET_PED_CONFIG_FLAG(pblParam0->f_17[i], 32, true);
				PED::SET_PED_CONFIG_FLAG(pblParam0->f_17[i], 305, false);
			}
		
			PED::SET_PED_CONFIG_FLAG(pblParam0->f_17[i], 268, false);
		
			if (bParam1)
				if (PED::IS_PED_GROUP_MEMBER(pblParam0->f_17[i], func_15()) && pblParam0->f_17[i] != PLAYER::PLAYER_PED_ID())
					PED::REMOVE_PED_FROM_GROUP(pblParam0->f_17[i]);
		
			if (!IS_BIT_SET(pblParam0->f_13, 29))
				PED::SET_PED_USING_ACTION_MODE(pblParam0->f_17[i], false, -1, 0);
		
			pblParam0->f_17[i] = 0;
		}
	}

	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(PLAYER::PLAYER_PED_ID(), true);
		PED::SET_PED_CAN_PLAY_AMBIENT_BASE_ANIMS(PLAYER::PLAYER_PED_ID(), true);
	}

	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		if (bParam2)
			PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 32, true);

	pblParam0->f_21 = 0;
	return;
}

int func_15() // Position - 0xE26 Hash - 0xDED80B4D ^0xD3C18941
{
	return PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX());
}

void func_16(int iParam0, Blip* pblParam1) // Position - 0xE36 Hash - 0x15448333 ^0xBC910CAF
{
	switch (iParam0)
	{
		case 0:
			MISC::CLEAR_BIT(&(pblParam1->f_13), 17);
			break;
	
		case 1:
			MISC::CLEAR_BIT(&(pblParam1->f_13), 18);
			break;
	
		case 2:
			MISC::CLEAR_BIT(&(pblParam1->f_13), 19);
			break;
	}

	return;
}

void func_17(int iParam0, Blip* pblParam1) // Position - 0xE7E Hash - 0x1E3FA253 ^0xEDD411CE
{
	switch (iParam0)
	{
		case 0:
			MISC::CLEAR_BIT(&(pblParam1->f_13), 14);
			break;
	
		case 1:
			MISC::CLEAR_BIT(&(pblParam1->f_13), 15);
			break;
	
		case 2:
			MISC::CLEAR_BIT(&(pblParam1->f_13), 16);
			break;
	}

	return;
}

void func_18(Blip* pblParam0) // Position - 0xEC6 Hash - 0x2F9D6A60 ^0x6561436A
{
	if (HUD::DOES_BLIP_EXIST(pblParam0->f_5))
		HUD::REMOVE_BLIP(&(pblParam0->f_5));

	return;
}

int func_19(Vehicle veParam0, float fParam1, int iParam2, int iParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6) // Position - 0xEE1 Hash - 0x60473011 ^0x5B80F12B
{
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_ACCELERATE, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_BRAKE, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_HANDBRAKE, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_DUCK, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_MOVE_LR, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_MOVE_UD, true);

	if (bParam5)
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_EXIT, true);

	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_CIN_CAM, true);

	if (!bParam6)
	{
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_ATTACK, true);
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_ATTACKRIGHT, true);
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_AIM, true);
	}

	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_HEADLIGHT, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_HORN, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_NEXT_RADIO, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_PREV_RADIO, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_PUSHBIKE_FRONT_BRAKE, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_PUSHBIKE_PEDAL, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_FLY_ATTACK, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_FLY_ROLL_LR, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_FLY_PITCH_UD, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_FLY_YAW_LEFT, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_FLY_YAW_LEFT, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_FLY_THROTTLE_UP, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_FLY_THROTTLE_DOWN, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_FLY_UNDERCARRIAGE, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_FLY_SELECT_NEXT_WEAPON, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_FLY_SELECT_PREV_WEAPON, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_FLY_SELECT_TARGET_LEFT, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_FLY_SELECT_TARGET_RIGHT, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_FLY_VERTICAL_FLIGHT_MODE, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_FLY_BOOST, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_SUB_ASCEND, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_SUB_DESCEND, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_SUB_TURN_LR, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_SUB_PITCH_UD, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_SUB_THROTTLE_UP, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_SUB_THROTTLE_DOWN, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_SUB_TURN_HARD_LEFT, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_SUB_TURN_HARD_RIGHT, true);
	CAM::DISABLE_CINEMATIC_SLOW_MO_THIS_UPDATE();
	func_20(veParam0);

	if (MISC::GET_GAME_TIMER() - Global_29 > 500)
		VEHICLE::BRING_VEHICLE_TO_HALT(veParam0, fParam1, iParam2, bParam4);

	Global_29 = MISC::GET_GAME_TIMER();

	if (!ENTITY::IS_ENTITY_DEAD(veParam0, false))
		if (MISC::ABSF(ENTITY::GET_ENTITY_SPEED(veParam0)) <= iParam3)
			return 1;

	return 0;
}

void func_20(Vehicle veParam0) // Position - 0x1079 Hash - 0x94E8CB0B ^0x47923A23
{
	if (!ENTITY::IS_ENTITY_DEAD(veParam0, false))
		if (VEHICLE::GET_HAS_ROCKET_BOOST(veParam0))
			if (VEHICLE::IS_ROCKET_BOOST_ACTIVE(veParam0))
				VEHICLE::SET_ROCKET_BOOST_ACTIVE(veParam0, false);

	return;
}

BOOL func_21(Blip* pblParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, BOOL bParam7, Vehicle veParam8, char* sParam9, char* sParam10, char* sParam11, BOOL bParam12, int iParam13, BOOL bParam14, eBlipSprite ebsParam15) // Position - 0x10A5 Hash - 0xEB9D47F8 ^0xEB9D47F8
{
	return func_22(pblParam0, uParam1, uParam4, func_64(), func_64(), bParam7, 5, 0, 0, 0, veParam8, sParam9, func_63(), func_63(), func_63(), func_63(), sParam10, false, bParam12, sParam11, false, iParam13, bParam14, ebsParam15, 0, 0, 0, true, 1065353216);
}

BOOL func_22(Blip* pblParam0, Vector3 vParam1, var uParam2, var uParam3, Vector3 vParam4, var uParam5, var uParam6, Vector3 vParam7, var uParam8, var uParam9, Vector3 vParam10, var uParam11, var uParam12, BOOL bParam13, int iParam14, int iParam15, int iParam16, int iParam17, Vehicle veParam18, char* sParam19, char* sParam20, char* sParam21, char* sParam22, char* sParam23, char* sParam24, BOOL bParam25, BOOL bParam26, char* sParam27, BOOL bParam28, int iParam29, BOOL bParam30, eBlipSprite ebsParam31, int iParam32, int iParam33, int iParam34, BOOL bParam35, int iParam36) // Position - 0x10F4 Hash - 0xF32A40D2 ^0xFCCFE72F
{
	Vehicle vehiclePedIsIn;
	BOOL flag;
	int i;
	Vector3 vector;
	BOOL unk;
	int unk2;
	int includeZ;
	int p10;

	vector = { vParam1 + { 1f, 0f, 0f } };
	pblParam0->f_17[0] = iParam15;
	pblParam0->f_17[1] = iParam16;
	pblParam0->f_17[2] = iParam17;
	pblParam0->f_16 = iParam15;
	func_62(pblParam0);
	func_61(pblParam0);
	func_60();

	if (func_44(pblParam0, pblParam0->f_17[0], pblParam0->f_17[1], pblParam0->f_17[2], sParam20, sParam21, sParam22, sParam23, pblParam0->f_8, bParam25, veParam18, false, false, iParam32, iParam33, iParam34, iParam14, bParam26))
	{
		func_43(sParam20);
		func_43(sParam21);
		func_43(sParam22);
		func_43(sParam23);
	
		if (CAM::IS_SCREEN_FADED_IN())
		{
			flag = false;
		
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(veParam18, false))
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), veParam18, false))
				{
					MISC::SET_BIT(&(pblParam0->f_13), 3);
				
					if (!IS_BIT_SET(pblParam0->f_13, 9))
						MISC::CLEAR_BIT(&(pblParam0->f_13), 4);
				
					if (IS_BIT_SET(pblParam0->f_13, 23))
						MISC::CLEAR_BIT(&(pblParam0->f_13), 23);
				
					MISC::SET_BIT(&(pblParam0->f_13), 9);
					flag = true;
				}
			}
			else if (iParam14 == 4 || iParam14 == 5)
			{
				if (func_41(pblParam0, iParam29))
				{
					MISC::SET_BIT(&(pblParam0->f_13), 3);
				
					if (!IS_BIT_SET(pblParam0->f_13, 9))
						MISC::CLEAR_BIT(&(pblParam0->f_13), 4);
				
					MISC::SET_BIT(&(pblParam0->f_13), 9);
					flag = true;
				}
			}
			else
			{
				flag = true;
			}
		
			if (flag)
			{
				func_43(sParam24);
				func_43(sParam27);
				func_43(_("A vehicle with more seats is needed."));
			
				if (bParam26 && PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
				{
					if (HUD::DOES_BLIP_EXIST(pblParam0->f_5))
					{
						HUD::REMOVE_BLIP(&(pblParam0->f_5));
						func_43(sParam19);
					}
				
					if (HUD::DOES_BLIP_EXIST(*pblParam0))
						HUD::REMOVE_BLIP(pblParam0);
				
					if (!func_37(pblParam0, 1) && !func_36(pblParam0) && !IS_BIT_SET(pblParam0->f_13, 0))
					{
						if (bParam30)
						{
							func_34(pblParam0, _("Lose the Cops."), false);
						
							if (!PED::IS_PED_INJURED(pblParam0->f_17[0]))
								func_32(pblParam0->f_17[0], "VEHICLE_POLICE_PURSUIT", 3);
						}
					
						MISC::SET_BIT(&(pblParam0->f_13), 0);
						MISC::CLEAR_BIT(&(pblParam0->f_13), 1);
					}
				}
				else
				{
					if (IS_BIT_SET(pblParam0->f_13, 0))
					{
						func_43(_("Lose the Cops."));
						MISC::CLEAR_BIT(&(pblParam0->f_13), 0);
						MISC::SET_BIT(&(pblParam0->f_13), 1);
					}
				
					if (IS_BIT_SET(pblParam0->f_13, 1))
					{
						if (!func_37(pblParam0, 1))
						{
							if (!PED::IS_PED_INJURED(pblParam0->f_17[0]))
								func_32(pblParam0->f_17[0], "LOSE_WANTED_LEVEL", 3);
						
							MISC::CLEAR_BIT(&(pblParam0->f_13), 1);
						}
					}
				
					if (!HUD::DOES_BLIP_EXIST(pblParam0->f_5))
					{
						if (HUD::DOES_BLIP_EXIST(*pblParam0))
							HUD::REMOVE_BLIP(pblParam0);
					
						pblParam0->f_5 = func_31(vector, false);
					
						if (!ebsParam31 == INVALID)
							HUD::SET_BLIP_SPRITE(pblParam0->f_5, ebsParam31);
					
						if (bParam35)
							func_30(pblParam0->f_5, pblParam0);
					}
					else if (!func_29(vector, HUD::GET_BLIP_COORDS(pblParam0->f_5), 0.1f, false))
					{
						HUD::SET_BLIP_COORDS(pblParam0->f_5, vector);
					
						if (bParam35)
							func_30(pblParam0->f_5, pblParam0);
					}
				
					if (!func_37(pblParam0, 2))
					{
						if (!IS_BIT_SET(pblParam0->f_13, 2))
						{
							func_34(pblParam0, sParam19, false);
							MISC::SET_BIT(&(pblParam0->f_13), 2);
						}
					}
				
					if (iParam14 == 4 || iParam14 == 5)
						if (IS_BIT_SET(pblParam0->f_13, 13))
							bParam13 = false;
				
					flag = false;
					includeZ = false;
					p10 = 0;
				
					if (iParam14 == 1 || iParam14 == 3 || iParam14 == 5)
						includeZ = true;
				
					if (iParam14 == 2 || iParam14 == 3)
						p10 = 1;
					else if (iParam14 == 4 || iParam14 == 5)
						p10 = 2;
				
					if (bParam28)
					{
						ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), vParam1, vParam4, bParam13, includeZ, p10);
					
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), vParam7, vParam10, iParam36, false, includeZ, p10))
							flag = true;
					}
					else if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), vParam1, vParam4, bParam13, includeZ, p10))
					{
						flag = true;
					}
				
					if (flag)
					{
						flag = true;
					
						for (i = 0; i < 3; i = i + 1)
						{
							if (!PED::IS_PED_INJURED(pblParam0->f_17[i]))
							{
								if (iParam14 == 4 || iParam14 == 5)
								{
									vehiclePedIsIn = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
								
									if (!PED::IS_PED_IN_VEHICLE(pblParam0->f_17[i], vehiclePedIsIn, false))
										flag = false;
								}
								else if (veParam18 != 0)
								{
									if (!PED::IS_PED_IN_VEHICLE(pblParam0->f_17[i], veParam18, false))
										flag = false;
								}
								else if (!PED::IS_PED_GROUP_MEMBER(pblParam0->f_17[i], func_15()) || !func_27(pblParam0->f_17[i], true))
								{
									flag = false;
								}
							}
						}
					
						if (flag)
						{
							if (func_24(pblParam0))
							{
								func_43(sParam19);
								func_43(sParam24);
								func_43(sParam20);
								func_43(sParam21);
								func_43(sParam22);
								func_43(sParam23);
								func_43(_("Lose the Cops."));
								func_43(_("A vehicle with more seats is needed."));
								func_43(sParam27);
								func_14(pblParam0, true, false);
								return 1;
							}
						}
					}
				}
			}
			else if (ENTITY::DOES_ENTITY_EXIST(veParam18))
			{
				if (bParam26 && PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0) && !IS_BIT_SET(pblParam0->f_13, 9) && !IS_BIT_SET(pblParam0->f_13, 22))
				{
					func_43(sParam24);
					func_43(sParam27);
				
					if (HUD::DOES_BLIP_EXIST(pblParam0->f_5) || HUD::DOES_BLIP_EXIST(*pblParam0))
					{
						HUD::REMOVE_BLIP(&(pblParam0->f_5));
						HUD::REMOVE_BLIP(pblParam0);
						func_43(sParam19);
					}
				
					if (!func_37(pblParam0, 1) && !func_36(pblParam0) && !IS_BIT_SET(pblParam0->f_13, 0))
					{
						if (bParam30)
						{
							func_34(pblParam0, _("Lose the Cops."), false);
						
							if (!PED::IS_PED_INJURED(pblParam0->f_17[0]))
								func_32(pblParam0->f_17[0], "VEHICLE_POLICE_PURSUIT", 3);
						}
					
						MISC::SET_BIT(&(pblParam0->f_13), 0);
						MISC::CLEAR_BIT(&(pblParam0->f_13), 1);
					}
				}
				else
				{
					if (IS_BIT_SET(pblParam0->f_13, 0))
					{
						func_43(_("Lose the Cops."));
						MISC::CLEAR_BIT(&(pblParam0->f_13), 0);
						MISC::SET_BIT(&(pblParam0->f_13), 1);
					}
				
					if (IS_BIT_SET(pblParam0->f_13, 1))
					{
						if (!func_37(pblParam0, 1))
						{
							if (!PED::IS_PED_INJURED(pblParam0->f_17[0]))
								func_32(pblParam0->f_17[0], "LOSE_WANTED_LEVEL", 3);
						
							MISC::CLEAR_BIT(&(pblParam0->f_13), 1);
						}
					}
				
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(veParam18, false))
					{
						if (!HUD::DOES_BLIP_EXIST(*pblParam0))
						{
							if (HUD::DOES_BLIP_EXIST(pblParam0->f_5))
							{
								HUD::REMOVE_BLIP(&(pblParam0->f_5));
								func_43(sParam19);
							}
						
							*pblParam0 = func_23(veParam18, false, false);
							HUD::SET_BLIP_DISPLAY(*pblParam0, 2);
						
							if (!IS_BIT_SET(pblParam0->f_13, 4))
								func_30(*pblParam0, pblParam0);
						}
					
						if (!func_37(pblParam0, 2))
						{
							if (!IS_BIT_SET(pblParam0->f_13, 3))
							{
								func_34(pblParam0, sParam24, false);
								MISC::SET_BIT(&(pblParam0->f_13), 3);
								MISC::CLEAR_BIT(&(pblParam0->f_13), 4);
							}
							else if (IS_BIT_SET(pblParam0->f_13, 9))
							{
								if (!MISC::IS_STRING_NULL(sParam27))
								{
									if (!IS_BIT_SET(pblParam0->f_13, 4))
									{
										func_34(pblParam0, sParam27, false);
										MISC::SET_BIT(&(pblParam0->f_13), 4);
									}
								}
								else if (!IS_BIT_SET(pblParam0->f_13, 4))
								{
									func_34(pblParam0, sParam24, false);
									MISC::SET_BIT(&(pblParam0->f_13), 4);
								}
							
								if (!IS_BIT_SET(pblParam0->f_13, 23))
								{
									if (!PED::IS_PED_INJURED(pblParam0->f_17[0]))
										func_32(pblParam0->f_17[0], "GET_IN_CAR", 3);
								
									MISC::SET_BIT(&(pblParam0->f_13), 23);
								}
							}
						}
					}
				}
			}
			else
			{
				if (HUD::DOES_BLIP_EXIST(pblParam0->f_5))
				{
					HUD::REMOVE_BLIP(&(pblParam0->f_5));
					func_43(sParam19);
				}
			
				if (iParam14 == 4 || iParam14 == 5)
				{
					if (iParam29 > 0)
					{
						if (!func_37(pblParam0, 2))
						{
							if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
							{
								if (!IS_BIT_SET(pblParam0->f_13, 13))
								{
									endRange = 0;
									randomIntInRange = 0;
								
									for (i = 0; i < 3; i = i + 1)
									{
										if (!PED::IS_PED_INJURED(pblParam0->f_17[i]))
											endRange = endRange + 1;
									}
								
									randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(0, endRange);
								
									if (!PED::IS_PED_INJURED(pblParam0->f_17[randomIntInRange]))
										func_32(pblParam0->f_17[randomIntInRange], "NEED_A_BIGGER_VEHICLE", 3);
								
									func_34(pblParam0, _("A vehicle with more seats is needed."), false);
									MISC::SET_BIT(&(pblParam0->f_13), 13);
								}
							}
							else if (!IS_BIT_SET(pblParam0->f_13, 3))
							{
								func_34(pblParam0, sParam24, false);
								MISC::SET_BIT(&(pblParam0->f_13), 3);
								MISC::CLEAR_BIT(&(pblParam0->f_13), 4);
							}
							else if (!IS_BIT_SET(pblParam0->f_13, 4))
							{
								if (IS_BIT_SET(pblParam0->f_13, 9))
								{
									func_34(pblParam0, sParam27, false);
									MISC::SET_BIT(&(pblParam0->f_13), 4);
								}
							}
						}
					}
					else if (!func_37(pblParam0, 2))
					{
						if (!IS_BIT_SET(pblParam0->f_13, 3))
						{
							func_34(pblParam0, sParam24, false);
							MISC::SET_BIT(&(pblParam0->f_13), 3);
							MISC::CLEAR_BIT(&(pblParam0->f_13), 4);
						}
						else if (IS_BIT_SET(pblParam0->f_13, 9))
						{
							if (!MISC::IS_STRING_NULL(sParam27))
							{
								if (!IS_BIT_SET(pblParam0->f_13, 4))
								{
									func_34(pblParam0, sParam27, false);
									MISC::SET_BIT(&(pblParam0->f_13), 4);
								}
							}
							else if (!IS_BIT_SET(pblParam0->f_13, 4))
							{
								func_34(pblParam0, sParam24, false);
								MISC::SET_BIT(&(pblParam0->f_13), 4);
							}
						}
					}
				}
			}
		}
	}
	else
	{
		if (IS_BIT_SET(pblParam0->f_13, 0))
			MISC::CLEAR_BIT(&(pblParam0->f_13), 0);
	
		func_43(sParam19);
		func_43(sParam24);
		func_43(sParam27);
		func_43(sParam24);
		func_43(_("Lose the Cops."));
	
		if (HUD::DOES_BLIP_EXIST(pblParam0->f_5))
			HUD::REMOVE_BLIP(&(pblParam0->f_5));
	
		if (HUD::DOES_BLIP_EXIST(*pblParam0))
			HUD::REMOVE_BLIP(pblParam0);
	}

	MISC::CLEAR_BIT(&(pblParam0->f_13), 11);
	MISC::CLEAR_BIT(&(pblParam0->f_13), 12);
	return 0;
}

Blip func_23(Vehicle veParam0, BOOL bParam1, BOOL bParam2) // Position - 0x19F9 Hash - 0x177BFEFF ^0x177BFEFF
{
	return func_11(veParam0, !bParam1, bParam2);
}

BOOL func_24(Blip* pblParam0) // Position - 0x1A0C Hash - 0x6909601B ^0x43769063
{
	if (IS_BIT_SET(pblParam0->f_13, 12))
		if (func_26(PLAYER::PLAYER_PED_ID()))
			if (func_25(true, false, true) || IS_BIT_SET(pblParam0->f_13, 7))
				return true;
	else if (func_25(true, false, true) || IS_BIT_SET(pblParam0->f_13, 7))
		return true;

	return false;
}

BOOL func_25(BOOL bParam0, BOOL bParam1, BOOL bParam2) // Position - 0x1A61 Hash - 0xF0D380FF ^0x29DD7336
{
	Vehicle vehiclePedIsIn;

	if (MISC::IS_MINIGAME_IN_PROGRESS())
		return false;

	if (bParam0)
		if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			return false;

	vehiclePedIsIn = 0;

	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
			return false;
	
		vehiclePedIsIn = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
	
		if (bParam0)
			if (ENTITY::IS_ENTITY_DEAD(vehiclePedIsIn, false))
				return false;
	
		if (bParam2)
			if (!ENTITY::IS_ENTITY_DEAD(vehiclePedIsIn, false))
				if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(vehiclePedIsIn, -1, false) != PLAYER::PLAYER_PED_ID())
					return false;
	
		if (!ENTITY::IS_ENTITY_DEAD(vehiclePedIsIn, false))
			if (ENTITY::GET_ENTITY_UPRIGHT_VALUE(vehiclePedIsIn) < 0.95f || ENTITY::GET_ENTITY_UPRIGHT_VALUE(vehiclePedIsIn) > 1.011f)
				return false;
	}
	else if (bParam1)
	{
		return false;
	}

	if (!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()))
		return false;

	if (!PLAYER::CAN_PLAYER_START_MISSION(PLAYER::PLAYER_ID()))
		return false;

	return true;
}

BOOL func_26(Ped pedParam0) // Position - 0x1B46 Hash - 0x71630E54 ^0xA6BB5465
{
	float entitySpeed;

	if (!PED::IS_PED_INJURED(pedParam0))
	{
		entitySpeed = ENTITY::GET_ENTITY_SPEED(pedParam0);
	
		if (entitySpeed > -0.5f && entitySpeed < 0.5f)
			return true;
	}

	return false;
}

BOOL func_27(Ped pedParam0, BOOL bParam1) // Position - 0x1B7D Hash - 0x66565C22 ^0x7D7F41BD
{
	if (!PED::IS_PED_INJURED(pedParam0))
	{
		if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()) && bParam1)
		{
			if (func_28(PLAYER::PLAYER_PED_ID(), pedParam0))
			{
				PED::SET_GROUP_SEPARATION_RANGE(func_15(), 50f);
				return true;
			}
		}
		else if (PED::IS_PED_GROUP_MEMBER(pedParam0, func_15()))
		{
			PED::SET_GROUP_SEPARATION_RANGE(func_15(), 50f);
			return true;
		}
	}
	else
	{
		return true;
	}

	return false;
}

BOOL func_28(Ped pedParam0, Ped pedParam1) // Position - 0x1BE8 Hash - 0xB2684CBC ^0x4356A1AE
{
	Vehicle vehiclePedIsIn;

	if (!PED::IS_PED_INJURED(pedParam0))
	{
		if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(pedParam0))
		{
			vehiclePedIsIn = PED::GET_VEHICLE_PED_IS_IN(pedParam0, false);
		
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(vehiclePedIsIn, false))
				if (!PED::IS_PED_INJURED(pedParam1))
					if (PED::IS_PED_SITTING_IN_VEHICLE(pedParam1, vehiclePedIsIn))
						return true;
		}
	}

	return false;
}

BOOL func_29(float fParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, float fParam6, BOOL bParam7) // Position - 0x1C30 Hash - 0x1FB736D4 ^0x234AEAB7
{
	if (fParam6 < 0f)
		fParam6 = 0f;

	if (!bParam7)
		if (MISC::ABSF(fParam0 - uParam3) <= fParam6)
			if (MISC::ABSF(fParam0.f_1 - uParam3.f_1) <= fParam6)
				if (MISC::ABSF(fParam0.f_2 - uParam3.f_2) <= fParam6)
					return true;
	else if (MISC::ABSF(fParam0 - uParam3) <= fParam6)
		if (MISC::ABSF(fParam0.f_1 - uParam3.f_1) <= fParam6)
			return true;

	return false;
}

void func_30(Blip blParam0, Blip* pblParam1) // Position - 0x1CAB Hash - 0xB76BB510 ^0x44EEA9C5
{
	if (HUD::DOES_BLIP_EXIST(blParam0))
	{
		if (HUD::DOES_BLIP_EXIST(pblParam1->f_6))
			HUD::SET_BLIP_ROUTE(pblParam1->f_6, false);
	
		HUD::SET_GPS_MULTI_ROUTE_RENDER(false);
		HUD::CLEAR_GPS_MULTI_ROUTE();
		pblParam1->f_6 = blParam0;
		HUD::SET_BLIP_ROUTE(blParam0, true);
	}

	return;
}

Blip func_31(var uParam0, var uParam1, var uParam2, BOOL bParam3) // Position - 0x1CE6 Hash - 0xF4E99477 ^0xFAB7E8FB
{
	Blip vehicleWheelType;

	vehicleWheelType = VEHICLE::GET_VEHICLE_WHEEL_TYPE(uParam0);
	HUD::SET_BLIP_SCALE(vehicleWheelType, NETWORK::NETWORK_IS_GAME_IN_PROGRESS() ? 1f : 1f);
	HUD::SET_BLIP_ROUTE(vehicleWheelType, bParam3);
	return vehicleWheelType;
}

void func_32(Ped pedParam0, char* sParam1, int iParam2) // Position - 0x1D12 Hash - 0x48D349EA ^0xA208047E
{
	AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(pedParam0, sParam1, func_33(iParam2), 1);
	return;
}

char* func_33(int iParam0) // Position - 0x1D29 Hash - 0x2268E483 ^0xCE697AD0
{
	char* str;

	switch (iParam0)
	{
		case 0:
			return "SPEECH_PARAMS_STANDARD";
	
		case 1:
			return "SPEECH_PARAMS_ALLOW_REPEAT";
	
		case 2:
			return "SPEECH_PARAMS_BEAT";
	
		case 3:
			return "SPEECH_PARAMS_FORCE";
	
		case 4:
			return "SPEECH_PARAMS_FORCE_FRONTEND";
	
		case 5:
			return "SPEECH_PARAMS_FORCE_NO_REPEAT_FRONTEND";
	
		case 6:
			return "SPEECH_PARAMS_FORCE_NORMAL";
	
		case 7:
			return "SPEECH_PARAMS_FORCE_NORMAL_CLEAR";
	
		case 8:
			return "SPEECH_PARAMS_FORCE_NORMAL_CRITICAL";
	
		case 9:
			return "SPEECH_PARAMS_FORCE_SHOUTED";
	
		case 10:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR";
	
		case 11:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CRITICAL";
	
		case 12:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY";
	
		case 13:
			return "SPEECH_PARAMS_MEGAPHONE";
	
		case 14:
			return "SPEECH_PARAMS_HELI";
	
		case 15:
			return "SPEECH_PARAMS_FORCE_MEGAPHONE";
	
		case 16:
			return "SPEECH_PARAMS_FORCE_HELI";
	
		case 17:
			return "SPEECH_PARAMS_INTERRUPT";
	
		case 18:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED";
	
		case 19:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CLEAR";
	
		case 20:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CRITICAL";
	
		case 21:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE";
	
		case 22:
			return "SPEECH_PARAMS_INTERRUPT_FRONTEND";
	
		case 23:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE_FRONTEND";
	
		case 24:
			return "SPEECH_PARAMS_ADD_BLIP";
	
		case 25:
			return "SPEECH_PARAMS_ADD_BLIP_ALLOW_REPEAT";
	
		case 26:
			return "SPEECH_PARAMS_ADD_BLIP_FORCE";
	
		case 27:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED";
	
		case 28:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED_FORCE";
	
		case 29:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT";
	
		case 30:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT_FORCE";
	
		case 31:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED";
	
		case 32:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CLEAR";
	
		case 33:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CRITICAL";
	
		case 34:
			return "SPEECH_PARAMS_SHOUTED";
	
		case 35:
			return "SPEECH_PARAMS_SHOUTED_CLEAR";
	
		case 36:
			return "SPEECH_PARAMS_SHOUTED_CRITICAL";
	
		default:
		
	}

	str = 0;
	return str;
}

void func_34(Blip* pblParam0, char* sParam1, BOOL bParam2) // Position - 0x1F1B Hash - 0xC015F58F ^0x8E88A871
{
	if (!bParam2)
		if (!MISC::IS_STRING_NULL(sParam1))
			if (!MISC::ARE_STRINGS_EQUAL(sParam1, ""))
				func_35(sParam1, 7500, 1);

	pblParam0->f_10 = MISC::GET_GAME_TIMER();
	return;
}

void func_35(char* sParam0, int iParam1, int iParam2) // Position - 0x1F52 Hash - 0x8A76EF8E ^0x32DD2C0C
{
	iParam2 = iParam2;
	HUD::BEGIN_TEXT_COMMAND_PRINT(sParam0);
	HUD::END_TEXT_COMMAND_PRINT(iParam1, true);
	return;
}

BOOL func_36(Blip* pblParam0) // Position - 0x1F6B Hash - 0x76C26D7D ^0xC80C7EEA
{
	if (!PED::IS_PED_INJURED(pblParam0->f_16))
		if (AUDIO::IS_AMBIENT_SPEECH_PLAYING(pblParam0->f_16))
			return true;

	return false;
}

BOOL func_37(Blip* pblParam0, int iParam1) // Position - 0x1F8F Hash - 0x4C09C8B0 ^0x26FD74C8
{
	if (iParam1 != 1 || HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
	{
		if (HUD::IS_MESSAGE_BEING_DISPLAYED())
			return true;
	
		if (func_40(pblParam0))
			return true;
	}

	if (iParam1 != 2 || HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
		if (func_39() && !func_38())
			return true;

	return false;
}

BOOL func_38() // Position - 0x1FE7 Hash - 0xB8E6BAC9 ^0xB8E6BAC9
{
	if (Global_22736 == 1)
		return true;

	return false;
}

BOOL func_39() // Position - 0x1FFE Hash - 0x152DA0B2 ^0x220E93E9
{
	if (Global_21725 != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
		return true;

	return false;
}

BOOL func_40(Blip* pblParam0) // Position - 0x2020 Hash - 0xAF65C0BD ^0x2A755CFA
{
	int num;
	int gameTimer;

	gameTimer = MISC::GET_GAME_TIMER();
	num = gameTimer - pblParam0->f_10;

	if (num < 35)
		return true;

	return false;
}

BOOL func_41(Blip* pblParam0, int iParam1) // Position - 0x2043 Hash - 0x8E2FACB ^0xA4BF42F5
{
	Vehicle vehiclePedIsIn;

	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		vehiclePedIsIn = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
	
		if (func_42(vehiclePedIsIn, pblParam0, iParam1))
			return true;
	}

	return false;
}

BOOL func_42(Vehicle veParam0, Blip* pblParam1, int iParam2) // Position - 0x2074 Hash - 0xD4375383 ^0x983550B3
{
	int num;
	int vehicleMaxNumberOfPassengers;
	int i;

	if (VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
	{
		num = 0;
	
		for (i = 0; i < 3; i = i + 1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(pblParam1->f_17[i]))
				num = num + 1;
		}
	
		vehicleMaxNumberOfPassengers = VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(veParam0);
	
		if (iParam2 > 0)
			if (vehicleMaxNumberOfPassengers >= iParam2)
				if (iParam2 > 1)
					if (!VEHICLE::IS_SEAT_WARP_ONLY(veParam0, 1))
						return true;
				else
					return true;
		else if (vehicleMaxNumberOfPassengers >= num)
			if (num > 1)
				if (!VEHICLE::IS_SEAT_WARP_ONLY(veParam0, 1))
					return true;
			else
				return true;
	}

	return false;
}

void func_43(char* sParam0) // Position - 0x2108 Hash - 0x78302BA0 ^0xA1CD23FC
{
	if (!MISC::IS_STRING_NULL(sParam0))
		HUD::CLEAR_THIS_PRINT(sParam0);

	return;
}

BOOL func_44(Blip* pblParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, char* sParam7, float fParam8, BOOL bParam9, Vehicle veParam10, BOOL bParam11, BOOL bParam12, int iParam13, int iParam14, int iParam15, int iParam16, BOOL bParam17) // Position - 0x2120 Hash - 0x6DAD9811 ^0xC9215DBA
{
	int i;
	int num;
	int num2;
	int num3;
	int num4;
	int gameTimer;
	BOOL flag;
	var unk;
	BOOL unk2;
	BOOL unk3;
	Vehicle unk4;
	int flag2;
	var flag3;
	var vehiclePedIsIn;
	BOOL scriptTaskStatus;
	Vehicle unk5;
	int unk6;
	int unk7;
	int unk8;
	var unk9;
	Vehicle unk10;
	Vehicle unk11;

	num4 = 0;
	unk = 3;
	pblParam0->f_17[0] = uParam1;
	pblParam0->f_17[1] = uParam2;
	pblParam0->f_17[2] = uParam3;
	pblParam0->f_16 = uParam1;
	unk5 = 3;
	unk5[0] = uParam4;
	unk5[1] = uParam5;
	unk5[2] = uParam6;
	unk9 = 3;
	unk9[0] = iParam13;
	unk9[1] = iParam14;
	unk9[2] = iParam15;
	flag = true;
	num = 0;
	num2 = 0;
	num3 = 0;
	unk[0] = 0;
	unk[1] = 0;
	unk[2] = 0;

	for (i = 0; i < 3; i = i + 1)
	{
		if (!PED::IS_PED_INJURED(pblParam0->f_17[i]))
			num3 = num3 + 1;
	
		if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
		{
			if (!IS_BIT_SET(pblParam0->f_13, 29) && !IS_BIT_SET(pblParam0->f_13, 28))
			{
				if (!PED::IS_PED_INJURED(pblParam0->f_17[i]))
					PED::SET_PED_USING_ACTION_MODE(pblParam0->f_17[i], true, -1, 0);
			
				if (i == 2)
					MISC::SET_BIT(&(pblParam0->f_13), 28);
			}
		}
		else if (!IS_BIT_SET(pblParam0->f_13, 29) && IS_BIT_SET(pblParam0->f_13, 28))
		{
			if (!PED::IS_PED_INJURED(pblParam0->f_17[i]))
				PED::SET_PED_USING_ACTION_MODE(pblParam0->f_17[i], false, -1, 0);
		
			if (i == 2)
				MISC::CLEAR_BIT(&(pblParam0->f_13), 28);
		}
	}

	if (num3 == 0)
		return true;

	if (IS_BIT_SET(pblParam0->f_13, 26))
	{
		flag4 = false;
	
		if (!ENTITY::DOES_ENTITY_EXIST(pblParam0->f_21))
		{
			flags = 64;
			flags = flags | 65536;
			flags = flags | 2048;
			flags = flags | 1;
			flags = flags | 2;
			flags = flags | 4;
			flags = flags | 32;
			flags = flags | 16;
			flags = flags | 8;
			closestVehicle = VEHICLE::GET_CLOSEST_VEHICLE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 50f, 0, flags);
		
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(closestVehicle, false))
				pblParam0->f_21 = closestVehicle;
		}
	
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(pblParam0->f_21, false))
		{
			if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(pblParam0->f_21, true)) < 400f)
			{
				if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
				{
					if (!PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0) || !bParam17)
					{
						if (func_42(pblParam0->f_21, pblParam0, num3))
						{
							for (i = 0; i < 3; i = i + 1)
							{
								if (!PED::IS_PED_INJURED(pblParam0->f_17[i]))
								{
									PED::SET_PED_MAX_MOVE_BLEND_RATIO(pblParam0->f_17[i], 1f);
								
									if (PED::IS_PED_GROUP_MEMBER(pblParam0->f_17[i], func_15()))
										PED::REMOVE_PED_FROM_GROUP(pblParam0->f_17[i]);
								
									if (TASK::GET_SCRIPT_TASK_STATUS(pblParam0->f_17[i], SCRIPT_TASK_ENTER_VEHICLE) == 7 && !func_59(pblParam0->f_17[i], pblParam0->f_21))
									{
										if (!PED::IS_PED_RAGDOLL(pblParam0->f_17[i]) && !TASK::IS_PED_GETTING_UP(pblParam0->f_17[i]))
										{
											PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(pblParam0->f_17[i], true);
											TASK::TASK_ENTER_VEHICLE(pblParam0->f_17[i], pblParam0->f_21, 60000, i, 1f, 1, 0);
											PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(pblParam0->f_17[i], i);
										}
									}
								}
							}
						
							return true;
						}
						else
						{
							flag4 = true;
						}
					}
					else
					{
						flag4 = true;
					}
				}
				else
				{
					flag4 = true;
				}
			}
			else
			{
				flag4 = true;
			}
		}
		else
		{
			flag4 = true;
		}
	
		if (flag4)
		{
			MISC::CLEAR_BIT(&(pblParam0->f_13), 26);
		
			for (i = 0; i < 3; i = i + 1)
			{
				if (!PED::IS_PED_INJURED(pblParam0->f_17[i]))
				{
					if (!PED::IS_PED_GETTING_INTO_A_VEHICLE(pblParam0->f_17[i]) && !pblParam0->f_15)
						TASK::CLEAR_PED_TASKS(pblParam0->f_17[i]);
				
					if (!PED::IS_PED_GROUP_MEMBER(pblParam0->f_17[i], func_15()))
						if (func_57(pblParam0, pblParam0->f_17[i], fParam8, true))
							PED::SET_PED_AS_GROUP_MEMBER(pblParam0->f_17[i], func_15());
				}
			}
		}
	}

	if (!IS_BIT_SET(pblParam0->f_13, 26))
	{
		if (!func_56(pblParam0) && PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()) && !ENTITY::DOES_ENTITY_EXIST(veParam10))
		{
			vehiclePedIsIn = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(vehiclePedIsIn, false))
			{
				if (!IS_BIT_SET(pblParam0->f_13, 13))
				{
					iParam16 == 4 || iParam16 == 5;
				
					if (!func_37(pblParam0, 2))
					{
						endRange = 0;
						randomIntInRange = 0;
					
						for (i = 0; i < 3; i = i + 1)
						{
							if (!PED::IS_PED_INJURED(pblParam0->f_17[i]))
								endRange = endRange + 1;
						}
					
						randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(0, endRange);
					
						if (!PED::IS_PED_INJURED(pblParam0->f_17[randomIntInRange]))
							func_32(pblParam0->f_17[randomIntInRange], "NEED_A_BIGGER_VEHICLE", 3);
					
						func_34(pblParam0, _("A vehicle with more seats is needed."), false);
						MISC::SET_BIT(&(pblParam0->f_13), 13);
					}
				}
			
				flag3 = true;
			}
		}
		else
		{
			flag3 = false;
			MISC::CLEAR_BIT(&(pblParam0->f_13), 13);
			func_43(_("A vehicle with more seats is needed."));
		}
	
		if (!ENTITY::DOES_ENTITY_EXIST(veParam10))
		{
			if (!PED::IS_PED_INJURED(pblParam0->f_17[0]) || !PED::IS_PED_INJURED(pblParam0->f_17[1]) || !PED::IS_PED_INJURED(pblParam0->f_17[2]))
			{
				if (!IS_BIT_SET(pblParam0->f_13, 31))
				{
					if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()) && !func_37(pblParam0, 2))
					{
						vehiclePedIsIn = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
					
						if (func_55(vehiclePedIsIn, pblParam0))
						{
							func_34(pblParam0, _("~s~Vehicle is not suitable."), false);
							MISC::SET_BIT(&(pblParam0->f_13), 31);
						}
					}
				}
				else if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
				{
					MISC::CLEAR_BIT(&(pblParam0->f_13), 31);
					func_43(_("~s~Vehicle is not suitable."));
				}
			}
		}
	
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(veParam10, false))
			if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), veParam10))
				if (PAD::IS_CONTROL_JUST_PRESSED(PLAYER_CONTROL, INPUT_VEH_EXIT))
					MISC::SET_BIT(&(pblParam0->f_13), 21);
			else if (IS_BIT_SET(pblParam0->f_13, 21))
				MISC::CLEAR_BIT(&(pblParam0->f_13), 21);
	
		for (i = 0; i < 3; i = i + 1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(pblParam0->f_17[i]))
			{
				if (!PED::IS_PED_INJURED(pblParam0->f_17[i]))
				{
					if (!PED::IS_PED_GROUP_MEMBER(pblParam0->f_17[i], func_15()))
						PED::SET_PED_DIES_IN_WATER(pblParam0->f_17[i], true);
					else
						PED::SET_PED_DIES_IN_WATER(pblParam0->f_17[i], false);
				
					if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
					{
						vehiclePedIsIn = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
					
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(vehiclePedIsIn, false))
							if (PED::IS_PED_GROUP_MEMBER(pblParam0->f_17[i], func_15()))
								if (!func_56(pblParam0) && PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
									if (!func_54(pblParam0->f_17[i]))
										PED::REMOVE_PED_FROM_GROUP(pblParam0->f_17[i]);
					
						if (vehiclePedIsIn != veParam10 && !ENTITY::IS_ENTITY_DEAD(vehiclePedIsIn, false))
						{
							if (PED::IS_PED_SITTING_IN_VEHICLE(pblParam0->f_17[i], vehiclePedIsIn))
							{
								if (ENTITY::IS_ENTITY_IN_WATER(vehiclePedIsIn) && !VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(vehiclePedIsIn))
								{
									entityCoords = { ENTITY::GET_ENTITY_COORDS(vehiclePedIsIn, true) };
								
									if (entityCoords.f_2 < -1f)
										TASK::TASK_LEAVE_VEHICLE(pblParam0->f_17[i], vehiclePedIsIn, 64);
								}
							}
						}
					}
				
					flag2 = true;
				
					if (!PED::IS_PED_GROUP_MEMBER(pblParam0->f_17[i], func_15()))
					{
						if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(pblParam0->f_17[i]))
						{
							vehiclePedIsIn = PED::GET_VEHICLE_PED_IS_IN(pblParam0->f_17[i], false);
						
							if (!ENTITY::IS_ENTITY_DEAD(vehiclePedIsIn, false))
							{
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(veParam10, false))
								{
									if (vehiclePedIsIn != veParam10)
									{
										if (!PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), vehiclePedIsIn))
										{
											if (ENTITY::GET_ENTITY_SPEED(vehiclePedIsIn) > 5f)
												TASK::TASK_LEAVE_VEHICLE(pblParam0->f_17[i], vehiclePedIsIn, 4160);
											else
												TASK::TASK_LEAVE_VEHICLE(pblParam0->f_17[i], vehiclePedIsIn, 64);
										
											flag2 = false;
										}
									}
								}
								else
								{
									if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
										vehiclePedIsIn2 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
								
									if (VEHICLE::IS_VEHICLE_DRIVEABLE(vehiclePedIsIn2, false))
									{
										if (vehiclePedIsIn != vehiclePedIsIn2)
										{
											if (ENTITY::GET_ENTITY_SPEED(vehiclePedIsIn) > 5f)
												TASK::TASK_LEAVE_VEHICLE(pblParam0->f_17[i], vehiclePedIsIn, 4160);
											else
												TASK::TASK_LEAVE_VEHICLE(pblParam0->f_17[i], vehiclePedIsIn, 64);
										
											flag2 = false;
										}
									}
								}
							}
						}
					}
				
					if (PED::IS_PED_GROUP_MEMBER(pblParam0->f_17[i], func_15()))
					{
						vehiclePedIsUsing = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
					
						if (ENTITY::DOES_ENTITY_EXIST(vehiclePedIsUsing))
						{
							if (func_42(vehiclePedIsUsing, pblParam0, 0))
							{
								if (func_53(i, pblParam0) || !IS_BIT_SET(pblParam0->f_13, 27))
								{
									PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(pblParam0->f_17[i], i);
									func_16(i, pblParam0);
									num4 = num4 + 1;
								
									if (num4 >= num3)
										MISC::SET_BIT(&(pblParam0->f_13), 27);
								}
							}
							else if (!func_53(i, pblParam0))
							{
								if (ENTITY::GET_ENTITY_MODEL(vehiclePedIsUsing) == 873639469)
									PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(pblParam0->f_17[i], 4);
								else
									PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(pblParam0->f_17[i], 2);
							
								func_52(i, pblParam0);
							}
						}
					}
				
					if (!PED::IS_PED_GROUP_MEMBER(pblParam0->f_17[i], func_15()) && !func_51(pblParam0->f_17[i], veParam10) && !func_50(pblParam0->f_17[i], veParam10))
					{
						if (func_57(pblParam0, pblParam0->f_17[i], fParam8, bParam11))
						{
							if (!PED::IS_PED_GROUP_MEMBER(pblParam0->f_17[i], func_15()))
							{
								if (!PED::IS_PED_RAGDOLL(pblParam0->f_17[i]) && !TASK::IS_PED_GETTING_UP(pblParam0->f_17[i]) && !PED::IS_PED_JUMPING_OUT_OF_VEHICLE(pblParam0->f_17[i]) && !PED::IS_PED_GETTING_INTO_A_VEHICLE(pblParam0->f_17[i]))
								{
									scriptTaskStatus = TASK::GET_SCRIPT_TASK_STATUS(pblParam0->f_17[i], SCRIPT_TASK_ENTER_VEHICLE);
								
									if (scriptTaskStatus == 7)
										TASK::CLEAR_PED_TASKS(pblParam0->f_17[i]);
								
									PED::SET_PED_AS_GROUP_MEMBER(pblParam0->f_17[i], func_15());
									flag2 = false;
								}
							}
						}
					
						if (flag2)
						{
							if (!HUD::DOES_BLIP_EXIST(pblParam0->f_1[i]))
							{
								pblParam0->f_11 = MISC::GET_GAME_TIMER();
								pblParam0->f_1[i] = func_23(pblParam0->f_17[i], false, false);
								HUD::SET_BLIP_DISPLAY(pblParam0->f_1[i], 2);
							
								if (bParam9)
									func_30(pblParam0->f_1[i], pblParam0);
							}
						}
					
						flag = false;
					}
					else if (HUD::DOES_BLIP_EXIST(pblParam0->f_1[i]))
					{
						if (func_27(pblParam0->f_17[i], true) || func_51(pblParam0->f_17[i], veParam10) || bParam12 || VEHICLE::IS_VEHICLE_DRIVEABLE(veParam10, false) && !PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), veParam10, false))
						{
							if (HUD::DOES_BLIP_EXIST(pblParam0->f_1[i]))
							{
								HUD::REMOVE_BLIP(&pblParam0->f_1[i]);
								func_43(unk5[i]);
							}
						}
						else
						{
							if (bParam9)
								func_30(pblParam0->f_1[i], pblParam0);
						
							flag = false;
						}
					}
					else if (VEHICLE::IS_VEHICLE_DRIVEABLE(veParam10, false))
					{
						if (!PED::IS_PED_SITTING_IN_VEHICLE(pblParam0->f_17[i], veParam10))
						{
							if (ENTITY::IS_ENTITY_AT_ENTITY(pblParam0->f_17[i], veParam10, 20f, 20f, 5f, false, true, 0) && !IS_BIT_SET(pblParam0->f_13, 11) && !(bParam17 && PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0) && !PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), veParam10, false)))
							{
								if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(pblParam0->f_17[i]))
								{
									if (!PED::IS_PED_IN_VEHICLE(pblParam0->f_17[i], veParam10, false))
									{
										if (!func_27(pblParam0->f_17[i], true))
										{
											if (func_26(pblParam0->f_17[i]))
											{
												scriptTaskStatus = TASK::GET_SCRIPT_TASK_STATUS(pblParam0->f_17[i], SCRIPT_TASK_LEAVE_VEHICLE);
											
												if (scriptTaskStatus == 7)
													TASK::TASK_LEAVE_ANY_VEHICLE(pblParam0->f_17[i], 0, 0);
											}
										}
									}
								}
								else
								{
									if (PED::IS_PED_GROUP_MEMBER(pblParam0->f_17[i], func_15()))
										if (!PED::IS_PED_JUMPING_OUT_OF_VEHICLE(pblParam0->f_17[i]) && !PED::IS_PED_RAGDOLL(pblParam0->f_17[i]) && !TASK::IS_PED_GETTING_UP(pblParam0->f_17[i]) && !PED::IS_PED_GETTING_INTO_A_VEHICLE(pblParam0->f_17[i]) && !FILES::GET_DLC_VEHICLE_FLAGS(veParam10))
											PED::REMOVE_PED_FROM_GROUP(pblParam0->f_17[i]);
								
									scriptTaskStatus = TASK::GET_SCRIPT_TASK_STATUS(pblParam0->f_17[i], SCRIPT_TASK_ENTER_VEHICLE);
								
									if (scriptTaskStatus == 7 && !func_59(pblParam0->f_17[i], veParam10))
									{
										if (!PED::IS_PED_JUMPING_OUT_OF_VEHICLE(pblParam0->f_17[i]) && !PED::IS_PED_JUMPING_OUT_OF_VEHICLE(PLAYER::PLAYER_PED_ID()) && !func_49(pblParam0->f_17[i], 2f) && !PED::IS_PED_RAGDOLL(pblParam0->f_17[i]) && !TASK::IS_PED_GETTING_UP(pblParam0->f_17[i]) && !FILES::GET_DLC_VEHICLE_FLAGS(veParam10))
										{
											PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(pblParam0->f_17[i], true);
										
											if (IS_BIT_SET(pblParam0->f_13, 10))
												PED::SET_PED_MAX_MOVE_BLEND_RATIO(pblParam0->f_17[i], 1f);
										
											TASK::TASK_ENTER_VEHICLE(pblParam0->f_17[i], veParam10, 60000, i, 1073741824, 1, 0);
											PED::SET_PED_GET_OUT_UPSIDE_DOWN_VEHICLE(pblParam0->f_17[i], false);
										}
									}
									else if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), veParam10, false))
									{
										pblParam0->f_1[i] = func_23(pblParam0->f_17[i], false, false);
										HUD::SET_BLIP_DISPLAY(pblParam0->f_1[i], 2);
										flag = false;
									}
								}
							}
							else if (!PED::IS_PED_GROUP_MEMBER(pblParam0->f_17[i], func_15()))
							{
								if (func_57(pblParam0, pblParam0->f_17[i], fParam8, bParam11))
								{
									if (!PED::IS_PED_RAGDOLL(pblParam0->f_17[i]) && !TASK::IS_PED_GETTING_UP(pblParam0->f_17[i]))
									{
										scriptTaskStatus = TASK::GET_SCRIPT_TASK_STATUS(pblParam0->f_17[i], SCRIPT_TASK_ENTER_VEHICLE);
									
										if (scriptTaskStatus == 7)
											TASK::CLEAR_PED_TASKS(pblParam0->f_17[i]);
									
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(pblParam0->f_17[i], false);
										PED::SET_PED_AS_GROUP_MEMBER(pblParam0->f_17[i], func_15());
									}
								}
							}
						}
						else if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), veParam10))
						{
							if (!PED::IS_PED_GROUP_MEMBER(pblParam0->f_17[i], func_15()))
							{
								if (!IS_BIT_SET(pblParam0->f_13, 21))
									PED::SET_PED_AS_GROUP_MEMBER(pblParam0->f_17[i], func_15());
							}
							else if (IS_BIT_SET(pblParam0->f_13, 21))
							{
								PED::REMOVE_PED_FROM_GROUP(pblParam0->f_17[i]);
								MISC::SET_BIT(&(pblParam0->f_13), 21);
							}
						}
						else if (PED::IS_PED_GROUP_MEMBER(pblParam0->f_17[i], func_15()) && !FILES::GET_DLC_VEHICLE_FLAGS(veParam10))
						{
							PED::REMOVE_PED_FROM_GROUP(pblParam0->f_17[i]);
						}
					}
				}
				else if (HUD::DOES_BLIP_EXIST(pblParam0->f_1[i]))
				{
					HUD::REMOVE_BLIP(&pblParam0->f_1[i]);
					func_43(unk5[i]);
				}
			}
		}
	
		for (i = 0; i < 3; i = i + 1)
		{
			if (HUD::DOES_BLIP_EXIST(pblParam0->f_1[i]))
			{
				unk[i] = 1;
				num = num + 1;
			}
		}
	
		if (!func_37(pblParam0, 2))
		{
			if (num > 0)
			{
				for (i = 0; i < 3; i = i + 1)
				{
					if (unk[i])
					{
						if (!PED::IS_PED_INJURED(pblParam0->f_17[i]))
						{
							if (func_54(pblParam0->f_17[i]) || ENTITY::IS_ENTITY_AT_ENTITY(pblParam0->f_17[i], PLAYER::PLAYER_PED_ID(), pblParam0->f_8, pblParam0->f_8, pblParam0->f_8, false, true, 0))
							{
								num = num - 1;
								unk[i] = 0;
							}
						}
					}
					else if (!PED::IS_PED_INJURED(pblParam0->f_17[i]))
					{
						!ENTITY::IS_ENTITY_AT_ENTITY(pblParam0->f_17[i], PLAYER::PLAYER_PED_ID(), pblParam0->f_8 * 0.85f, pblParam0->f_8 * 0.85f, pblParam0->f_8, false, true, 0) && !func_54(pblParam0->f_17[i]);
					}
				}
			}
		
			gameTimer = MISC::GET_GAME_TIMER();
		
			if (gameTimer - pblParam0->f_11 > 1500 || num3 == 1)
			{
				if (num > 0)
				{
					if (pblParam0->f_12 < num)
					{
						if (num == num3 || num2 + num == num3 && num3 > 1)
						{
							if (!IS_BIT_SET(pblParam0->f_13, 5))
							{
								func_34(pblParam0, sParam7, false);
								MISC::SET_BIT(&(pblParam0->f_13), 5);
								pblParam0->f_12 = num;
							}
							else
							{
								pblParam0->f_12 = num;
							}
						}
						else
						{
							for (i = 0; i < 3; i = i + 1)
							{
								if (unk[i])
								{
									if (!func_48(i, pblParam0))
									{
										if (!MISC::IS_STRING_NULL(unk9[i]))
										{
											if (!MISC::ARE_STRINGS_EQUAL(unk9[i], ""))
											{
												func_46(pblParam0, unk5[i], unk9[i], false);
												func_45(i, pblParam0);
												pblParam0->f_12 = num;
											}
										}
									
										if (!func_48(i, pblParam0))
										{
											func_34(pblParam0, unk5[i], false);
											func_45(i, pblParam0);
											pblParam0->f_12 = num;
										}
									}
									else
									{
										pblParam0->f_12 = num;
									}
								}
							}
						}
					}
				}
				else
				{
					pblParam0->f_12 = 0;
				}
			}
		}
	
		MISC::CLEAR_BIT(&(pblParam0->f_13), 10);
	
		if (flag && !flag3)
		{
			for (i = 0; i < 3; i = i + 1)
			{
				if (HUD::DOES_BLIP_EXIST(pblParam0->f_1[i]))
				{
					HUD::REMOVE_BLIP(&pblParam0->f_1[i]);
					func_43(unk5[i]);
				}
			}
		
			func_43(_("A vehicle with more seats is needed."));
			return true;
		}
	}

	return false;
}

void func_45(int iParam0, Blip* pblParam1) // Position - 0x3163 Hash - 0x1E3FA253 ^0x58FA4A13
{
	switch (iParam0)
	{
		case 0:
			MISC::SET_BIT(&(pblParam1->f_13), 14);
			break;
	
		case 1:
			MISC::SET_BIT(&(pblParam1->f_13), 15);
			break;
	
		case 2:
			MISC::SET_BIT(&(pblParam1->f_13), 16);
			break;
	}

	return;
}

void func_46(Blip* pblParam0, const char* sParam1, const char* sParam2, BOOL bParam3) // Position - 0x31AB Hash - 0x7EE7BD64 ^0x3E5024E3
{
	if (!bParam3)
		if (!MISC::IS_STRING_NULL(sParam1))
			if (!MISC::ARE_STRINGS_EQUAL(sParam1, ""))
				func_47(sParam1, sParam2, 7500, 1);

	pblParam0->f_10 = MISC::GET_GAME_TIMER();
	return;
}

void func_47(const char* sParam0, const char* sParam1, int iParam2, int iParam3) // Position - 0x31E4 Hash - 0xA3B0AE7D ^0x4927FD61
{
	iParam3 = iParam3;
	HUD::BEGIN_TEXT_COMMAND_PRINT(sParam0);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
	HUD::END_TEXT_COMMAND_PRINT(iParam2, true);
	return;
}

BOOL func_48(int iParam0, Blip* pblParam1) // Position - 0x3203 Hash - 0x600BF84A ^0x55A07351
{
	switch (iParam0)
	{
		case 0:
			return IS_BIT_SET(pblParam1->f_13, 14);
	
		case 1:
			return IS_BIT_SET(pblParam1->f_13, 15);
	
		case 2:
			return IS_BIT_SET(pblParam1->f_13, 16);
	
		default:
		
	}

	return false;
}

BOOL func_49(Ped pedParam0, float fParam1) // Position - 0x3243 Hash - 0x430D9426 ^0x1E20BEFF
{
	Vehicle vehiclePedIsIn;

	if (PED::IS_PED_IN_ANY_VEHICLE(pedParam0, false))
	{
		vehiclePedIsIn = PED::GET_VEHICLE_PED_IS_IN(pedParam0, false);
	
		if (!ENTITY::IS_ENTITY_DEAD(vehiclePedIsIn, false))
			if (ENTITY::GET_ENTITY_SPEED(vehiclePedIsIn) > fParam1)
				return true;
	}

	return false;
}

BOOL func_50(Ped pedParam0, Vehicle veParam1) // Position - 0x327A Hash - 0x3428DDCA ^0x5AEC4411
{
	Vehicle vehiclePedIsEntering;

	if (!PED::IS_PED_INJURED(pedParam0))
	{
		if (!PED::IS_PED_GROUP_MEMBER(pedParam0, func_15()))
		{
			vehiclePedIsEntering = PED::GET_VEHICLE_PED_IS_ENTERING(pedParam0);
		
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(veParam1, false))
				if (ENTITY::IS_ENTITY_AT_ENTITY(pedParam0, veParam1, 20f + 10f, 20f + 10f, 10f, false, true, 0))
					if (vehiclePedIsEntering == veParam1)
						return true;
		}
	}

	return false;
}

BOOL func_51(Ped pedParam0, Vehicle veParam1) // Position - 0x32E1 Hash - 0x980D507B ^0x3BE5D72A
{
	if (!PED::IS_PED_INJURED(pedParam0))
		if (ENTITY::DOES_ENTITY_EXIST(veParam1))
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(veParam1, false))
				if (PED::IS_PED_SITTING_IN_VEHICLE(pedParam0, veParam1))
					return true;

	return false;
}

void func_52(int iParam0, Blip* pblParam1) // Position - 0x3316 Hash - 0x15448333 ^0xB9FB55EE
{
	switch (iParam0)
	{
		case 0:
			MISC::SET_BIT(&(pblParam1->f_13), 17);
			break;
	
		case 1:
			MISC::SET_BIT(&(pblParam1->f_13), 18);
			break;
	
		case 2:
			MISC::SET_BIT(&(pblParam1->f_13), 19);
			break;
	}

	return;
}

BOOL func_53(int iParam0, Blip* pblParam1) // Position - 0x335E Hash - 0x933A2257 ^0x69FB2D8F
{
	switch (iParam0)
	{
		case 0:
			return IS_BIT_SET(pblParam1->f_13, 17);
	
		case 1:
			return IS_BIT_SET(pblParam1->f_13, 18);
	
		case 2:
			return IS_BIT_SET(pblParam1->f_13, 19);
	
		default:
		
	}

	return false;
}

BOOL func_54(Ped pedParam0) // Position - 0x339E Hash - 0x8AAA640C ^0xAE198AD7
{
	Vehicle vehiclePedIsUsing;
	Vehicle vehiclePedIsUsing2;

	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		vehiclePedIsUsing = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
	
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(vehiclePedIsUsing, false))
		{
			if (!PED::IS_PED_INJURED(pedParam0))
			{
				vehiclePedIsUsing2 = PED::GET_VEHICLE_PED_IS_USING(pedParam0);
			
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(vehiclePedIsUsing2, false))
					if (vehiclePedIsUsing == vehiclePedIsUsing2)
						if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), pedParam0, 20f, 20f, 20f, false, true, 0) && ENTITY::IS_ENTITY_AT_ENTITY(pedParam0, vehiclePedIsUsing2, 20f, 20f, 20f, false, true, 0))
							return true;
			}
		}
	}

	return false;
}

BOOL func_55(Vehicle veParam0, Blip* pblParam1) // Position - 0x342B Hash - 0x3E226C88 ^0xEA75D78A
{
	int num;
	int num2;
	int i;
	Ped pedInVehicleSeat;
	Ped pedInVehicleSeat2;
	Ped pedInVehicleSeat3;

	if (VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
	{
		if (ENTITY::GET_ENTITY_MODEL(veParam0) == -713569950 || ENTITY::GET_ENTITY_MODEL(veParam0) == -2072933068)
		{
			num = 0;
			num2 = 0;
			i = 0;
		
			for (i = 0; i < 3; i = i + 1)
			{
				if (!PED::IS_PED_INJURED(pblParam1->f_17[i]))
					num = num + 1;
			}
		
			pedInVehicleSeat = VEHICLE::GET_PED_IN_VEHICLE_SEAT(veParam0, 0, false);
		
			if (!PED::IS_PED_INJURED(pedInVehicleSeat))
				if (pedInVehicleSeat == pblParam1->f_17[0] || pedInVehicleSeat == pblParam1->f_17[1] || pedInVehicleSeat == pblParam1->f_17[2])
					num2 = num2 + 1;
			else
				num2 = num2 + 1;
		
			pedInVehicleSeat2 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(veParam0, 1, false);
		
			if (!PED::IS_PED_INJURED(pedInVehicleSeat2))
				if (pedInVehicleSeat2 == pblParam1->f_17[0] || pedInVehicleSeat2 == pblParam1->f_17[1] || pedInVehicleSeat2 == pblParam1->f_17[2])
					num2 = num2 + 1;
			else
				num2 = num2 + 1;
		
			pedInVehicleSeat3 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(veParam0, 2, false);
		
			if (!PED::IS_PED_INJURED(pedInVehicleSeat3))
				if (pedInVehicleSeat3 == pblParam1->f_17[0] || pedInVehicleSeat3 == pblParam1->f_17[1] || pedInVehicleSeat3 == pblParam1->f_17[2])
					num2 = num2 + 1;
			else
				num2 = num2 + 1;
		
			if (num2 < num)
				return true;
		}
	}

	return false;
}

BOOL func_56(Blip* pblParam0) // Position - 0x358B Hash - 0x3C89153B ^0x56EFDE35
{
	Vehicle vehiclePedIsIn;

	if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
	{
		vehiclePedIsIn = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
	
		if (func_42(vehiclePedIsIn, pblParam0, 0))
			return true;
	}

	return false;
}

BOOL func_57(Blip* pblParam0, Ped pedParam1, float fParam2, BOOL bParam3) // Position - 0x35BA Hash - 0x1C5C3B1A ^0x5D8BFBBA
{
	Vehicle vehiclePedIsIn;

	if (!PED::IS_PED_INJURED(pedParam1))
	{
		if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(pedParam1))
		{
			vehiclePedIsIn = PED::GET_VEHICLE_PED_IS_IN(pedParam1, false);
		
			if (!ENTITY::IS_ENTITY_DEAD(vehiclePedIsIn, false))
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(vehiclePedIsIn, false))
					if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), vehiclePedIsIn))
						if (func_56(pblParam0))
							return true;
					else if (bParam3)
						return true;
				else if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), pedParam1, fParam2, fParam2, 3f, false, true, 0))
					return true;
		}
		else if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), pedParam1, fParam2, fParam2, 3f, false, true, 0))
		{
			if (!bParam3)
			{
				vehiclePedIsIn = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
			
				if (ENTITY::DOES_ENTITY_EXIST(vehiclePedIsIn))
					if (func_42(vehiclePedIsIn, pblParam0, 0))
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(vehiclePedIsIn, false))
							if (func_58(vehiclePedIsIn))
								return true;
				else
					return true;
			}
			else
			{
				return true;
			}
		}
	}

	return false;
}

BOOL func_58(Vehicle veParam0) // Position - 0x3698 Hash - 0x6799283D ^0x73763D18
{
	float entitySpeed;

	if (!ENTITY::IS_ENTITY_DEAD(veParam0, false))
	{
		entitySpeed = ENTITY::GET_ENTITY_SPEED(veParam0);
	
		if (entitySpeed > -0.5f && entitySpeed < 0.5f)
			return true;
	}

	return false;
}

BOOL func_59(Ped pedParam0, Vehicle veParam1) // Position - 0x36D0 Hash - 0xFB12ABF0 ^0x730FD205
{
	Vehicle vehiclePedIsUsing;

	if (!PED::IS_PED_INJURED(pedParam0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(veParam1, false))
		{
			vehiclePedIsUsing = PED::GET_VEHICLE_PED_IS_USING(pedParam0);
		
			if (vehiclePedIsUsing == veParam1)
				return true;
		}
	}

	return false;
}

void func_60() // Position - 0x3700 Hash - 0xD3ADA56D ^0x10639AB8
{
	Vehicle vehiclePedIsEntering;
	Ped pedInVehicleSeat;

	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
	{
		vehiclePedIsEntering = PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID());
	
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(vehiclePedIsEntering, false))
		{
			pedInVehicleSeat = VEHICLE::GET_PED_IN_VEHICLE_SEAT(vehiclePedIsEntering, 0, false);
		
			if (!PED::IS_PED_INJURED(pedInVehicleSeat))
				if (pedInVehicleSeat != PLAYER::PLAYER_PED_ID())
					if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(pedInVehicleSeat))
						if (!PED::IS_PED_HEADTRACKING_ENTITY(pedInVehicleSeat, PLAYER::PLAYER_PED_ID()))
							TASK::TASK_LOOK_AT_ENTITY(pedInVehicleSeat, PLAYER::PLAYER_PED_ID(), 2000, SLF_WHILE_NOT_IN_FOV, 2);
		}
	}

	return;
}

void func_61(Blip* pblParam0) // Position - 0x376D Hash - 0xFF242068 ^0x3467AFB3
{
	int i;

	if (!IS_BIT_SET(pblParam0->f_13, 25))
	{
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 32, false);
	
		for (i = 0; i < 3; i = i + 1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(pblParam0->f_17[i]))
			{
				if (!PED::IS_PED_INJURED(pblParam0->f_17[i]))
				{
					PED::SET_PED_CONFIG_FLAG(pblParam0->f_17[i], 32, false);
					PED::SET_PED_CONFIG_FLAG(pblParam0->f_17[i], 305, true);
					PED::SET_PED_CONFIG_FLAG(pblParam0->f_17[i], 268, true);
					PED::SET_PED_GET_OUT_UPSIDE_DOWN_VEHICLE(pblParam0->f_17[i], false);
				}
			}
		}
	
		MISC::SET_BIT(&(pblParam0->f_13), 25);
	}

	return;
}

void func_62(Blip* pblParam0) // Position - 0x380D Hash - 0xBD02C826 ^0xC8C2D545
{
	int i;

	for (i = 0; i < 3; i = i + 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(pblParam0->f_17[i]))
		{
			if (!PED::IS_PED_INJURED(pblParam0->f_17[i]))
			{
				if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(pblParam0->f_17[i]))
				{
					PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(pblParam0->f_17[i], false);
					PED::SET_PED_CAN_PLAY_AMBIENT_BASE_ANIMS(pblParam0->f_17[i], false);
				}
			}
		}
	}

	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
			{
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(PLAYER::PLAYER_PED_ID(), false);
				PED::SET_PED_CAN_PLAY_AMBIENT_BASE_ANIMS(PLAYER::PLAYER_PED_ID(), false);
			}
		}
	}

	return;
}

char* func_63() // Position - 0x38A3 Hash - 0x2ED91BC3 ^0x2ED91BC3
{
	char* unk;

	return unk;
}

Vector3 func_64() // Position - 0x38AD Hash - 0x7288DDF0 ^0x7288DDF0
{
	var unk;

	return unk;
}

void func_65() // Position - 0x38B9 Hash - 0x4993A791 ^0xD7AC61AB
{
	int i;

	if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), veLocal_96, false))
	{
		if (HUD::DOES_BLIP_EXIST(blLocal_102))
			HUD::REMOVE_BLIP(&blLocal_102);
	
		if (iLocal_36 <= 2)
		{
			iLocal_80 = CLOCK::GET_MILLISECONDS_PER_GAME_MINUTE() * ((60 * iLocal_82) + iLocal_83);
			iLocal_80 = iLocal_80 + MISC::GET_GAME_TIMER();
			iLocal_84 = iLocal_80 - (CLOCK::GET_MILLISECONDS_PER_GAME_MINUTE() * 30);
		}
		else if (iLocal_36 > 6)
		{
			iLocal_80 = CLOCK::GET_MILLISECONDS_PER_GAME_MINUTE() * ((60 * iLocal_82) + iLocal_83);
			iLocal_80 = iLocal_80 + MISC::GET_GAME_TIMER();
			iLocal_84 = iLocal_80 - (CLOCK::GET_MILLISECONDS_PER_GAME_MINUTE() * 30);
		}
		else if (iLocal_36 >= 3 && iLocal_36 <= 4)
		{
			veLocal_97 = VEHICLE::CREATE_VEHICLE(hLocal_89, uLocal_70, fLocal_74, true, true, false);
			iLocal_93[0] = PED::CREATE_PED_INSIDE_VEHICLE(veLocal_97, PED_TYPE_COP, hLocal_87, -1, true, true);
			iLocal_93[1] = PED::CREATE_PED_INSIDE_VEHICLE(veLocal_97, PED_TYPE_COP, hLocal_87, 0, true, true);
			PED::ADD_RELATIONSHIP_GROUP("rghCop", &hLocal_118);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(4, hLocal_118, 1862763509);
			PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_93[0], BF_CanBust, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_93[1], BF_CanBust, true);
		
			for (i = 0; i < iLocal_93; i = i + 1)
			{
				WEAPON::GIVE_WEAPON_TO_PED(iLocal_93[i], 453432689, -1, false, true);
				PED::SET_PED_SEEING_RANGE(iLocal_93[i], 100f);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_93[i], hLocal_118);
			}
		}
	
		iLocal_38 = 2;
	}

	return;
}

void func_66() // Position - 0x39EB Hash - 0xB530A207 ^0x6D14D0C3
{
	int i;

	if (!ENTITY::IS_ENTITY_DEAD(veLocal_96, false))
	{
		if (func_101() || PED::IS_PED_INJURED(iLocal_90[0]))
		{
			for (i = 0; i < iLocal_90; i = i + 1)
			{
				if (!PED::IS_PED_INJURED(iLocal_90[i]))
				{
					if (!HUD::DOES_BLIP_EXIST(uLocal_99[i]))
					{
						uLocal_99[i] = func_10(iLocal_90[i], true, 145);
						PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_90[i], BF_CanUseVehicles, false);
						TASK::OPEN_SEQUENCE_TASK(&iLocal_120);
						TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
						TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_120);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_90[i], iLocal_120);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_120);
					}
				}
				else if (HUD::DOES_BLIP_EXIST(uLocal_99[i]))
				{
					HUD::REMOVE_BLIP(&uLocal_99[i]);
				}
			}
		}
		else if (!bLocal_79)
		{
			if (!PED::IS_PED_INJURED(iLocal_90[0]))
			{
				if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_90[0], 50f, 50f, 50f, false, true, 0))
				{
					TASK::TASK_VEHICLE_MISSION_PED_TARGET(iLocal_90[0], veLocal_96, PLAYER::PLAYER_PED_ID(), 8, 25f, 786469, -1f, -1f, true);
					bLocal_79 = true;
				}
			}
		}
	
		if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), veLocal_96, false))
		{
			if (HUD::DOES_BLIP_EXIST(blLocal_102))
				HUD::REMOVE_BLIP(&blLocal_102);
		
			func_100(&uLocal_106, 0, false);
			iLocal_38 = 2;
		}
		else if (VEHICLE::IS_VEHICLE_SEAT_FREE(veLocal_96, -1, false) || PED::IS_PED_INJURED(iLocal_90[0]))
		{
			func_100(&uLocal_106, 0, false);
		}
		else
		{
			func_67();
		}
	}

	return;
}

void func_67() // Position - 0x3B59 Hash - 0x2F21BAD6 ^0xD4115219
{
	if (!PED::IS_PED_INJURED(iLocal_90[0]) && !ENTITY::IS_ENTITY_DEAD(veLocal_96, false))
		if (PED::IS_PED_IN_VEHICLE(iLocal_90[0], veLocal_96, false))
			func_68(&uLocal_106, veLocal_96, 0, 0, true, true, true);

	return;
}

void func_68(var uParam0, Vehicle veParam1, int iParam2, int iParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6) // Position - 0x3B97 Hash - 0x85234EBF ^0x85234EBF
{
	func_69(uParam0, veParam1, 0f, 0f, 0f, iParam2, iParam3, bParam4, bParam5, bParam6);
	return;
}

void func_69(var uParam0, Vehicle veParam1, float fParam2, float fParam3, float fParam4, int iParam5, int iParam6, BOOL bParam7, BOOL bParam8, BOOL bParam9) // Position - 0x3BB4 Hash - 0x61CE440A ^0x61CE440A
{
	func_70(uParam0, veParam1, fParam2, iParam5, iParam6, bParam7, bParam8, bParam9);
	return;
}

void func_70(var uParam0, Vehicle veParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6, BOOL bParam7, BOOL bParam8, BOOL bParam9) // Position - 0x3BD2 Hash - 0x811E56D5 ^0xAB2F569F
{
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
		func_100(uParam0, 0, false);

	uParam0->f_6 = 2;
	func_71(uParam0, veParam1, uParam2, iParam5, iParam6, bParam7, bParam8, bParam9);
	return;
}

void func_71(var uParam0, Vehicle veParam1, var uParam2, var uParam3, var uParam4, const char* sParam5, int iParam6, BOOL bParam7, BOOL bParam8, BOOL bParam9) // Position - 0x3C0A Hash - 0xDAF9A1E8 ^0x9B7C725B
{
	const char* string2;
	BOOL flag;

	if (uParam0->f_1 && CAM::IS_GAMEPLAY_HINT_ACTIVE())
		if (MISC::GET_GAME_TIMER() >= uParam0->f_8 + uParam0->f_9)
			uParam0->f_1 = 0;

	string2 = sParam5;

	if (MISC::IS_STRING_NULL(string2))
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			string2 = _("~s~Press ~INPUT_VEH_CIN_CAM~ to toggle focus on the target.");
		else
			string2 = _("~s~Press ~INPUT_VEH_CIN_CAM~ to toggle focus.");

	if (func_99(string2))
		func_98();

	if (func_97(veParam1) && ENTITY::IS_ENTITY_VISIBLE(veParam1))
	{
		flag = false;
	
		if (ENTITY::IS_ENTITY_A_PED(veParam1))
		{
			PED::REQUEST_PED_VISIBILITY_TRACKING(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(veParam1));
			PED::REQUEST_PED_VEHICLE_VISIBILITY_TRACKING(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(veParam1), true);
		
			if (PED::IS_TRACKED_PED_VISIBLE(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(veParam1)))
				flag = true;
		}
		else if (ENTITY::IS_ENTITY_A_VEHICLE(veParam1))
		{
			VEHICLE::TRACK_VEHICLE_VISIBILITY(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(veParam1));
		
			if (VEHICLE::IS_VEHICLE_VISIBLE(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(veParam1)))
				flag = true;
		}
		else if (ENTITY::IS_ENTITY_AN_OBJECT(veParam1))
		{
			OBJECT::TRACK_OBJECT_VISIBILITY(ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(veParam1));
		
			if (OBJECT::IS_OBJECT_VISIBLE(ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(veParam1)))
				flag = true;
		}
	
		if (!CAM::IS_GAMEPLAY_HINT_ACTIVE())
		{
			if (func_92(uParam0, bParam7, bParam9, false))
				func_88(uParam0, veParam1, uParam2, iParam6);
		
			if (*uParam0)
			{
				*uParam0 = 0;
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_76(string2))
				{
					if (MISC::IS_STRING_NULL(uParam0->f_3) && !MISC::IS_STRING_NULL(string2) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						if (flag && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() && bParam8)
						{
							if (!func_99(string2))
							{
								func_75(string2, -1);
								uParam0->f_3 = string2;
							
								if (MISC::ARE_STRINGS_EQUAL(_("~s~Press ~INPUT_VEH_CIN_CAM~ to toggle focus on the target."), string2))
									func_74(true);
							}
						}
					}
				}
			}
			else if (func_76(string2))
			{
				if (MISC::IS_STRING_NULL(uParam0->f_3) && !MISC::IS_STRING_NULL(string2))
				{
					if (ENTITY::IS_ENTITY_ON_SCREEN(veParam1) && flag && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() && bParam8)
					{
						if (!func_99(string2))
						{
							func_75(string2, -1);
							uParam0->f_3 = string2;
						
							if (MISC::ARE_STRINGS_EQUAL(_("~s~Press ~INPUT_VEH_CIN_CAM~ to toggle focus on the target."), string2))
								func_74(true);
						}
					}
				}
			}
		}
		else
		{
			if (!MISC::IS_STRING_NULL(sParam5))
				if (func_99(sParam5))
					HUD::SET_SCRIPT_VARIABLE_HUD_COLOUR(1);
		
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
				if (PED::IS_PED_IN_ANY_BOAT(PLAYER::PLAYER_PED_ID()))
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(IN_BOAT) == CINEMATIC || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(IN_BOAT) == FIRST_PERSON)
						func_100(uParam0, string2, true);
				else if (PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()))
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(IN_HELI) == CINEMATIC || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(IN_HELI) == FIRST_PERSON)
						func_100(uParam0, string2, true);
				else if (PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID()))
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(IN_AIRCRAFT) == CINEMATIC || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(IN_AIRCRAFT) == FIRST_PERSON)
						func_100(uParam0, string2, true);
				else if (PED::IS_PED_IN_ANY_SUB(PLAYER::PLAYER_PED_ID()))
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(IN_SUBMARINE) == CINEMATIC || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(IN_SUBMARINE) == FIRST_PERSON)
						func_100(uParam0, string2, true);
				else if (PED::IS_PED_ON_ANY_BIKE(PLAYER::PLAYER_PED_ID()))
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(ON_BIKE) == CINEMATIC || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(ON_BIKE) == FIRST_PERSON)
						func_100(uParam0, string2, true);
				else if (CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == CINEMATIC || CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == FIRST_PERSON)
					func_100(uParam0, string2, true);
		
			if (!func_92(uParam0, bParam7, bParam9, false))
				if (!*uParam0 && !uParam0->f_1 && !func_73(uParam0))
					func_72(uParam0);
		}
	}
	else
	{
		func_100(uParam0, string2, false);
	}

	return;
}

void func_72(var uParam0) // Position - 0x3F77 Hash - 0x4809780E ^0x7FF94CB4
{
	if (func_97(PLAYER::PLAYER_PED_ID()))
		TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());

	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		CAM::SET_CINEMATIC_BUTTON_ACTIVE(true);
		CAM::STOP_GAMEPLAY_HINT(false);
		AUDIO::STOP_AUDIO_SCENE("HINT_CAM_SCENE");
		GRAPHICS::ANIMPOSTFX_STOP("FocusIn");
	
		if (uParam0->f_11)
		{
			GRAPHICS::ANIMPOSTFX_PLAY("FocusOut", 0, false);
			AUDIO::PLAY_SOUND_FRONTEND(-1, "FocusOut", "HintCamSounds", true);
			uParam0->f_11 = 0;
		}
	}

	uParam0->f_2 = -1;
	*uParam0 = 1;
	return;
}

BOOL func_73(var uParam0) // Position - 0x3FE0 Hash - 0xE8B256B4 ^0x85EB3CF0
{
	int num;

	if (uParam0->f_2 > 0)
	{
		num = uParam0->f_10 / 2;
	
		if (uParam0->f_2 + num > MISC::GET_GAME_TIMER())
			return true;
	}

	return false;
}

int func_74(BOOL bParam0) // Position - 0x400F Hash - 0xEA423090 ^0xE108A001
{
	switch (Global_43257)
	{
		case 0:
		case 3:
			if (bParam0)
				Global_113648.f_10051.f_100 = Global_113648.f_10051.f_100 + 1;
		
			return Global_113648.f_10051.f_100;
	
		case 4:
			if (bParam0)
				Global_113648.f_10051.f_101 = Global_113648.f_10051.f_101 + 1;
		
			return Global_113648.f_10051.f_101;
	
		case 5:
		case 15:
			if (bParam0)
				Global_113648.f_10051.f_102 = Global_113648.f_10051.f_102 + 1;
		
			return Global_113648.f_10051.f_102;
	
		default:
			break;
	}

	return 3;
}

void func_75(const char* sParam0, int iParam1) // Position - 0x40B9 Hash - 0xCBB0D91 ^0x21070E5C
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam1);
	return;
}

BOOL func_76(const char* sParam0) // Position - 0x40D0 Hash - 0x4F114C67 ^0xB06D107E
{
	if (!func_77(true, true, false))
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0) && func_99(sParam0) || func_99(_("~s~Press ~INPUT_VEH_CIN_CAM~ to toggle focus on the target.")))
			HUD::SET_SCRIPT_VARIABLE_HUD_COLOUR(1);
	
		return false;
	}

	switch (Global_43257)
	{
		case 0:
		case 3:
			if (func_74(false) < 3)
				return true;
			break;
	
		case 4:
			if (func_74(false) < 1)
				return true;
			break;
	
		case 5:
		case 15:
			if (func_74(false) < 1)
				return true;
			break;
	
		default:
			break;
	}

	return false;
}

BOOL func_77(BOOL bParam0, BOOL bParam1, BOOL bParam2) // Position - 0x4169 Hash - 0x3D231FF2 ^0x1CCF6728
{
	Vehicle vehiclePedIsIn;
	int seatIndex;

	if (bParam0)
		if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
			return false;

	if (bParam2)
		return true;

	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
		return false;

	if (func_87(0))
		return false;

	if (func_86())
		return false;

	if (NETWORK::NETWORK_TEXT_CHAT_IS_TYPING())
		return false;

	if (Global_75693)
		return false;

	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(1779901043) > 0)
		return false;

	if (Global_60543)
		return false;

	if (bParam1)
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
		{
			if (PED::IS_PED_IN_ANY_BOAT(PLAYER::PLAYER_PED_ID()))
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(IN_BOAT) == CINEMATIC || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(IN_BOAT) == FIRST_PERSON)
					return false;
			else if (PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()))
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(IN_HELI) == CINEMATIC || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(IN_HELI) == FIRST_PERSON)
					return false;
			else if (PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID()))
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(IN_AIRCRAFT) == CINEMATIC || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(IN_AIRCRAFT) == FIRST_PERSON)
					return false;
			else if (PED::IS_PED_IN_ANY_SUB(PLAYER::PLAYER_PED_ID()))
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(IN_SUBMARINE) == CINEMATIC || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(IN_SUBMARINE) == FIRST_PERSON)
					return false;
			else if (PED::IS_PED_ON_ANY_BIKE(PLAYER::PLAYER_PED_ID()))
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(ON_BIKE) == CINEMATIC || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(ON_BIKE) == FIRST_PERSON)
					return false;
			else if (CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == CINEMATIC || CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == FIRST_PERSON)
				return false;
		
			if (CAM::IS_GAMEPLAY_CAM_LOOKING_BEHIND())
				return false;
		}
	}

	if (func_85() || func_84(*Global_4718592.f_166301) || func_83())
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			vehiclePedIsIn = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			seatIndex = func_82(PLAYER::PLAYER_PED_ID(), false);
		
			if (VEHICLE::IS_TURRET_SEAT(vehiclePedIsIn, seatIndex) || ENTITY::GET_ENTITY_MODEL(vehiclePedIsIn) == 562680400 && seatIndex != -1 || ENTITY::GET_ENTITY_MODEL(vehiclePedIsIn) == 1181327175 && seatIndex != -1 || ENTITY::GET_ENTITY_MODEL(vehiclePedIsIn) == -1693015116 && seatIndex == 0 && func_81(vehiclePedIsIn, 10) && VEHICLE::GET_VEHICLE_MOD(vehiclePedIsIn, 10) != -1)
				return false;
		}
	}

	if (Global_1962010)
		return false;

	if (func_78(PLAYER::PLAYER_ID()))
		return false;

	return true;
}

BOOL func_78(Player plParam0) // Position - 0x43C2 Hash - 0xA439E034 ^0x18C6D29E
{
	if (plParam0 != func_80())
		if (func_79(plParam0, true, true))
			return Global_2657589[plParam0 /*466*/].f_321.f_7 != -1;
		else if (Global_1575060 && plParam0 == PLAYER::PLAYER_ID() && func_79(plParam0, true, false))
			return Global_2657589[plParam0 /*466*/].f_321.f_7 != -1;

	return false;
}

BOOL func_79(Player plParam0, BOOL bParam1, BOOL bParam2) // Position - 0x4428 Hash - 0x3FF6E4CA ^0xE6B59972
{
	Player player;

	player = plParam0;

	if (player != -1)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(plParam0))
		{
			if (bParam1)
				if (!PLAYER::IS_PLAYER_PLAYING(plParam0))
					return false;
		
			if (bParam2)
				if (player == Global_2672505.f_3)
					return Global_2672505.f_2;
				else if (Global_2657589[player /*466*/] != 4)
					return false;
		
			return true;
		}
	}

	return false;
}

Player func_80() // Position - 0x4488 Hash - 0x478900E4 ^0x478900E4
{
	return -1;
}

BOOL func_81(Vehicle veParam0, int iParam1) // Position - 0x4491 Hash - 0xCE6C32C8 ^0x91687715
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
	{
		if (VEHICLE::GET_NUM_MOD_KITS(veParam0) > 0)
		{
			switch (iParam1)
			{
				case 17:
				case 18:
				case 19:
				case 20:
				case 21:
				case 22:
					return true;
			
				default:
					if (VEHICLE::GET_NUM_VEHICLE_MODS(veParam0, iParam1) > 0)
						return true;
					break;
			}
		}
	}

	return false;
}

int func_82(Ped pedParam0, BOOL bParam1) // Position - 0x44F3 Hash - 0x4E1330D6 ^0x886EF094
{
	Vehicle vehiclePedIsIn;
	int vehicleModelNumberOfSeats;
	int i;
	int seatIndex;

	if (!PED::IS_PED_INJURED(pedParam0))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(pedParam0, bParam1))
		{
			vehiclePedIsIn = PED::GET_VEHICLE_PED_IS_IN(pedParam0, bParam1);
		
			if (ENTITY::DOES_ENTITY_EXIST(vehiclePedIsIn))
			{
				vehicleModelNumberOfSeats = VEHICLE::GET_VEHICLE_MODEL_NUMBER_OF_SEATS(ENTITY::GET_ENTITY_MODEL(vehiclePedIsIn));
			
				if (vehicleModelNumberOfSeats == 1)
				{
					seatIndex = -1;
					return seatIndex;
				}
			
				for (i = 0; i < vehicleModelNumberOfSeats; i = i + 1)
				{
					seatIndex = i - 1;
				
					if (!VEHICLE::IS_VEHICLE_SEAT_FREE(vehiclePedIsIn, seatIndex, false))
						if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(vehiclePedIsIn, seatIndex, false) == pedParam0)
							return seatIndex;
				}
			}
		}
	}

	return seatIndex;
}

BOOL func_83() // Position - 0x4578 Hash - 0x4228A1C2 ^0xF0823820
{
	return Global_2683862.f_19;
}

BOOL func_84(int iParam0) // Position - 0x4586 Hash - 0x6B8F9071 ^0x6B8F9071
{
	return iParam0 == 51;
}

BOOL func_85() // Position - 0x4593 Hash - 0x4228A1C2 ^0x58D4D226
{
	return Global_2683862.f_18;
}

BOOL func_86() // Position - 0x45A1 Hash - 0x44A439DC ^0x3D5209CD
{
	return MISC::GET_GAME_TIMER() <= Global_23270.f_6321 + 100;
}

BOOL func_87(int iParam0) // Position - 0x45B6 Hash - 0xE8921B44 ^0x4F063755
{
	if (iParam0 == 1)
		if (Global_20383.f_1 > 3)
			if (IS_BIT_SET(Global_8253, 14))
				return true;
			else
				return false;
		else
			return false;

	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(-754107665) > 0)
		return true;

	if (Global_20383.f_1 > 3)
		return true;

	return false;
}

void func_88(var uParam0, Vehicle veParam1, Vector3 vParam2, var uParam3, var uParam4, int iParam5) // Position - 0x460D Hash - 0x9F7B2F79 ^0x8B74986F
{
	Ped pedIndexFromEntityIndex;
	int easeInTime;
	int easeOutTime;
	eScriptLookAtFlags flags;
	int num;

	if (Global_1581968 == 1)
		return;

	if (ENTITY::IS_ENTITY_DEAD(veParam1, false))
		func_100(uParam0, 0, false);

	if (func_91(vParam2, 0f, 0f, 0f, false))
	{
		if (ENTITY::IS_ENTITY_A_PED(veParam1))
		{
			pedIndexFromEntityIndex = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(veParam1);
		
			if (!PED::IS_PED_IN_ANY_VEHICLE(pedIndexFromEntityIndex, false))
				if (PED::IS_PED_A_PLAYER(pedIndexFromEntityIndex))
					if (!func_89())
						vParam2 = { 0f, 0f, 1f };
				else if (PED::IS_PED_MALE(pedIndexFromEntityIndex))
					vParam2 = { 0f, 0f, 1f };
		}
	}

	CAM::SET_CINEMATIC_BUTTON_ACTIVE(false);
	easeInTime = uParam0->f_9;
	easeOutTime = uParam0->f_10;

	if (iParam5 == 1726668277)
	{
		if (easeInTime < 1500)
			easeInTime = 1500;
	
		if (easeOutTime < 1500)
			easeOutTime = 1500;
	}

	CAM::SET_GAMEPLAY_ENTITY_HINT(veParam1, vParam2, true, -1, easeInTime, easeOutTime, iParam5);
	flags = SLF_WHILE_NOT_IN_FOV;
	num = 3;
	TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), veParam1, -1, flags, num);
	GRAPHICS::ANIMPOSTFX_PLAY("FocusIn", 0, false);
	AUDIO::START_AUDIO_SCENE("HINT_CAM_SCENE");
	AUDIO::PLAY_SOUND_FRONTEND(-1, "FocusIn", "HintCamSounds", true);
	uParam0->f_11 = 1;
	uParam0->f_8 = MISC::GET_GAME_TIMER();
	uParam0->f_1 = 1;
	*uParam0 = 0;
	return;
}

BOOL func_89() // Position - 0x471D Hash - 0x5976C0FC ^0xC3C6644E
{
	return func_90(PLAYER::PLAYER_ID());
}

BOOL func_90(Player plParam0) // Position - 0x472D Hash - 0x2281DC14 ^0xFBEE7D11
{
	if (ENTITY::GET_ENTITY_MODEL(PLAYER::GET_PLAYER_PED(plParam0)) == -1667301416)
		return 1;

	return 0;
}

BOOL func_91(float fParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5, BOOL bParam6) // Position - 0x474C Hash - 0x2D46096D ^0xEA41378F
{
	if (bParam6)
		return fParam0 == fParam3 && fParam0.f_1 == fParam3.f_1;

	return fParam0 == fParam3 && fParam0.f_1 == fParam3.f_1 && fParam0.f_2 == fParam3.f_2;
}

BOOL func_92(var uParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x4793 Hash - 0xA880205D ^0xE1080820
{
	if (uParam0->f_1)
		if (MISC::GET_GAME_TIMER() >= uParam0->f_8 + uParam0->f_9)
			uParam0->f_1 = 0;

	switch (uParam0->f_5)
	{
		case 0:
			uParam0->f_7 = 0;
		
			if (uParam0->f_6 == 0)
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
				{
					if (func_96(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = MISC::GET_GAME_TIMER();
						uParam0->f_5 = 1;
						uParam0->f_7 = 1;
					}
				}
				else if (func_95(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = MISC::GET_GAME_TIMER();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (func_95(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = MISC::GET_GAME_TIMER();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_96(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = MISC::GET_GAME_TIMER();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
		
			if (func_73(uParam0))
			{
				uParam0->f_7 = 1;
				uParam0->f_5 = 4;
			}
			break;
	
		case 1:
			if (MISC::GET_GAME_TIMER() - uParam0->f_4 <= 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
					{
						if (!func_96(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = MISC::GET_GAME_TIMER();
							uParam0->f_5 = 3;
						}
					}
					else if (!func_95(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = MISC::GET_GAME_TIMER();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (!func_95(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = MISC::GET_GAME_TIMER();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!func_96(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = MISC::GET_GAME_TIMER();
						uParam0->f_5 = 3;
					}
				}
			}
			else
			{
				uParam0->f_5 = 2;
			}
			break;
	
		case 2:
			if (uParam0->f_6 == 0)
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
					if (!func_96(bParam1, bParam2, bParam3))
						uParam0->f_5 = 0;
				else if (!func_95(bParam1, bParam2, bParam3))
					uParam0->f_5 = 0;
			else if (uParam0->f_6 == 1)
				if (!func_95(bParam1, bParam2, bParam3) || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
					uParam0->f_5 = 0;
			else if (uParam0->f_6 == 2)
				if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true) || TASK::GET_IS_TASK_ACTIVE(PLAYER::PLAYER_PED_ID(), 2))
					uParam0->f_5 = 0;
				else if (!func_96(bParam1, bParam2, bParam3))
					uParam0->f_5 = 0;
			break;
	
		case 3:
			if (MISC::GET_GAME_TIMER() - uParam0->f_4 > 500)
				if (uParam0->f_6 == 0)
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
						if (func_94(bParam1, bParam2, bParam3))
							uParam0->f_5 = 0;
					else if (func_93(bParam1, bParam2, bParam3))
						uParam0->f_5 = 0;
				else if (uParam0->f_6 == 1)
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true) || func_93(bParam1, bParam2, bParam3))
						uParam0->f_5 = 0;
				else if (uParam0->f_6 == 2)
					if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true) || TASK::GET_IS_TASK_ACTIVE(PLAYER::PLAYER_PED_ID(), 2))
						uParam0->f_5 = 0;
					else if (func_94(bParam1, bParam2, bParam3))
						uParam0->f_5 = 0;
			break;
	
		case 4:
			if (!func_73(uParam0))
				uParam0->f_5 = 0;
			break;
	}

	if (!func_77(bParam1, bParam2, bParam3))
	{
		uParam0->f_5 = 0;
		uParam0->f_7 = 0;
	}

	if (uParam0->f_7)
	{
		func_98();
		return true;
	}
	else
	{
		return false;
	}

	return false;
}

BOOL func_93(BOOL bParam0, BOOL bParam1, BOOL bParam2) // Position - 0x4AFF Hash - 0xF87F500F ^0xE2038DA5
{
	if (!func_77(bParam0, bParam1, bParam2))
		return false;

	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (!PLAYER::IS_PLAYER_TARGETTING_ANYTHING(PLAYER::PLAYER_ID()))
		{
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_MELEE_ATTACK_LIGHT, true);
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_CIN_CAM, true);
		
			if (PAD::IS_DISABLED_CONTROL_JUST_RELEASED(PLAYER_CONTROL, INPUT_VEH_CIN_CAM))
				return true;
		}
	}

	return false;
}

BOOL func_94(BOOL bParam0, BOOL bParam1, BOOL bParam2) // Position - 0x4B51 Hash - 0x3FCF0638 ^0x1EFD5267
{
	if (!func_77(bParam0, bParam1, bParam2))
		return false;

	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_CIN_CAM, true);
	
		if (CAM::IS_FOLLOW_VEHICLE_CAM_ACTIVE())
		{
			if (PAD::IS_DISABLED_CONTROL_JUST_RELEASED(PLAYER_CONTROL, INPUT_VEH_CIN_CAM))
			{
				CAM::SET_CINEMATIC_BUTTON_ACTIVE(false);
				return true;
			}
		}
	}

	return false;
}

BOOL func_95(BOOL bParam0, BOOL bParam1, BOOL bParam2) // Position - 0x4B9A Hash - 0xF87F500F ^0xE2038DA5
{
	if (!func_77(bParam0, bParam1, bParam2))
		return false;

	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (!PLAYER::IS_PLAYER_TARGETTING_ANYTHING(PLAYER::PLAYER_ID()))
		{
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_MELEE_ATTACK_LIGHT, true);
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_CIN_CAM, true);
		
			if (PAD::IS_DISABLED_CONTROL_PRESSED(PLAYER_CONTROL, INPUT_VEH_CIN_CAM) && MISC::GET_GAME_TIMER() > Global_116)
				return true;
		}
	}

	return false;
}

BOOL func_96(BOOL bParam0, BOOL bParam1, BOOL bParam2) // Position - 0x4BF9 Hash - 0xF22F9C98 ^0xCA2E1CBD
{
	if (!func_77(bParam0, bParam1, bParam2))
		return false;

	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_CIN_CAM, true);
	
		if (CAM::IS_FOLLOW_VEHICLE_CAM_ACTIVE())
		{
			if (PAD::IS_DISABLED_CONTROL_PRESSED(PLAYER_CONTROL, INPUT_VEH_CIN_CAM) && MISC::GET_GAME_TIMER() > Global_116)
			{
				CAM::SET_CINEMATIC_BUTTON_ACTIVE(false);
				return true;
			}
		}
	}

	return false;
}

BOOL func_97(Vehicle veParam0) // Position - 0x4C4F Hash - 0xF847883B ^0xE7694E14
{
	if (ENTITY::DOES_ENTITY_EXIST(veParam0))
		if (ENTITY::IS_ENTITY_A_VEHICLE(veParam0))
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(veParam0), false))
				return true;
		else if (ENTITY::IS_ENTITY_A_PED(veParam0))
			if (!PED::IS_PED_INJURED(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(veParam0)))
				return true;
		else if (ENTITY::IS_ENTITY_AN_OBJECT(veParam0))
			return true;

	return false;
}

void func_98() // Position - 0x4CAA Hash - 0x4941A993 ^0x296D04CD
{
	MISC::SET_BIT(&Global_8254, 4);
	return;
}

BOOL func_99(const char* sParam0) // Position - 0x4CBA Hash - 0xCD6A3595 ^0xB0E86AA0
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_100(var uParam0, const char* sParam1, BOOL bParam2) // Position - 0x4CCD Hash - 0xAF87CC41 ^0xBC193663
{
	const char* str;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		if (IS_BIT_SET(Global_2793044.f_4690, 26))
			return;

	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		CAM::STOP_GAMEPLAY_HINT(bParam2);
		GRAPHICS::ANIMPOSTFX_STOP("FocusIn");
		AUDIO::STOP_AUDIO_SCENE("HINT_CAM_SCENE");
	
		if (uParam0->f_11)
		{
			GRAPHICS::ANIMPOSTFX_PLAY("FocusOut", 0, false);
			AUDIO::PLAY_SOUND_FRONTEND(-1, "FocusOut", "HintCamSounds", true);
			uParam0->f_11 = 0;
		}
	}

	CAM::SET_CINEMATIC_BUTTON_ACTIVE(true);
	uParam0->f_1 = 0;
	*uParam0 = 0;
	uParam0->f_2 = -1;
	uParam0->f_8 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	str = sParam1;

	if (MISC::IS_STRING_NULL(str))
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			str = _("~s~Press ~INPUT_VEH_CIN_CAM~ to toggle focus on the target.");
		else
			str = _("~s~Press ~INPUT_VEH_CIN_CAM~ to toggle focus.");

	if (!MISC::IS_STRING_NULL(uParam0->f_3))
		if (func_99(uParam0->f_3))
			HUD::SET_SCRIPT_VARIABLE_HUD_COLOUR(1);

	if (!MISC::IS_STRING_NULL(str))
		if (func_99(str))
			HUD::SET_SCRIPT_VARIABLE_HUD_COLOUR(1);

	return;
}

BOOL func_101() // Position - 0x4DA7 Hash - 0x66445515 ^0xB10E64EF
{
	if (ENTITY::DOES_ENTITY_EXIST(veLocal_96))
		if (!ENTITY::IS_ENTITY_DEAD(veLocal_96, false))
			if (ENTITY::GET_ENTITY_HEALTH(veLocal_96) < 300 || VEHICLE::GET_VEHICLE_ENGINE_HEALTH(veLocal_96) < 200f || FILES::GET_DLC_VEHICLE_FLAGS(veLocal_96) || VEHICLE::IS_VEHICLE_TYRE_BURST(veLocal_96, 0, false) && VEHICLE::IS_VEHICLE_TYRE_BURST(veLocal_96, 1, false) || VEHICLE::IS_VEHICLE_TYRE_BURST(veLocal_96, 4, false) && VEHICLE::IS_VEHICLE_TYRE_BURST(veLocal_96, 5, false) || VEHICLE::IS_VEHICLE_TYRE_BURST(veLocal_96, 0, false) && VEHICLE::IS_VEHICLE_TYRE_BURST(veLocal_96, 4, false) || VEHICLE::IS_VEHICLE_TYRE_BURST(veLocal_96, 1, false) && VEHICLE::IS_VEHICLE_TYRE_BURST(veLocal_96, 5, false))
				return true;

	return false;
}

void func_102() // Position - 0x4E5F Hash - 0x7669FA37 ^0x36227155
{
	int i;
	int j;

	veLocal_96 = func_104(0);

	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_96, false))
	{
		veLocal_96 = VEHICLE::CREATE_VEHICLE(hLocal_88, uLocal_64, fLocal_73, true, true, false);
	
		for (i = 1; i <= 8; i = i + 1)
		{
			VEHICLE::SET_VEHICLE_EXTRA(veLocal_96, i, true);
		}
	
		if (iLocal_85 != -1)
			VEHICLE::SET_VEHICLE_EXTRA(veLocal_96, iLocal_85, false);
	}

	VEHICLE::SET_VEHICLE_IS_WANTED(veLocal_96, true);
	blLocal_102 = func_103(veLocal_96, false, false);

	if (iLocal_36 != 5 && iLocal_36 != 6)
	{
		if (iLocal_36 > 6)
		{
			ENTITY::SET_ENTITY_PROOFS(veLocal_96, false, false, false, false, true, false, false, false);
			AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "BAR_DELIVER_BOOZE_RATTLE_MASTER", veLocal_96, 0, false, 0);
		}
	
		func_35(sLocal_103, 7500, 1);
	}
	else
	{
		iLocal_90[0] = PED::CREATE_PED_INSIDE_VEHICLE(veLocal_96, PED_TYPE_MISSION, hLocal_86, -1, true, true);
		iLocal_90[1] = PED::CREATE_PED_INSIDE_VEHICLE(veLocal_96, PED_TYPE_MISSION, hLocal_86, 0, true, true);
		PED::ADD_RELATIONSHIP_GROUP("rghCriminal", &hLocal_119);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, hLocal_119, 1862763509);
	
		for (j = 0; j < iLocal_90; j = j + 1)
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_90[j], true);
			WEAPON::GIVE_WEAPON_TO_PED(iLocal_90[j], 2017895192, -1, false, true);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_90[j], hLocal_119);
		}
	
		TASK::TASK_VEHICLE_DRIVE_WANDER(iLocal_90[0], veLocal_96, 25f, 786599);
		func_35("PMDL_REC", 7500, 1);
	}

	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE(), false))
		veLocal_98 = PLAYER::GET_PLAYERS_LAST_VEHICLE();

	iLocal_38 = 1;
	return;
}

Blip func_103(Vehicle veParam0, BOOL bParam1, BOOL bParam2) // Position - 0x4FB2 Hash - 0x177BFEFF ^0x177BFEFF
{
	return func_11(veParam0, !bParam1, bParam2);
}

Vehicle func_104(int iParam0) // Position - 0x4FC5 Hash - 0x9E680C6D ^0xDEC253C
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(Global_112358.f_222[iParam0], false))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_112358.f_222[iParam0], true, true);
		return Global_112358.f_222[iParam0];
	}

	return 0;
}

BOOL func_105() // Position - 0x4FFD Hash - 0xD0DA8C38 ^0x667F4EEF
{
	if (ENTITY::DOES_ENTITY_EXIST(veLocal_96))
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_96, false))
			if (!ENTITY::IS_ENTITY_AT_ENTITY(veLocal_96, PLAYER::PLAYER_PED_ID(), 300f, 300f, 300f, false, true, 0))
				return true;
		else
			return true;

	if (PED::IS_PED_INJURED(iLocal_90[0]))
		if (HUD::DOES_BLIP_EXIST(uLocal_99[0]))
			HUD::REMOVE_BLIP(&uLocal_99[0]);

	return false;
}

void func_106() // Position - 0x5065 Hash - 0x5B44A0EE ^0xD916BAFD
{
	STREAMING::REQUEST_MODEL(hLocal_88);
	HUD::REQUEST_ADDITIONAL_TEXT("PMDL", 0);

	if (iLocal_36 >= 3 && iLocal_36 <= 4)
	{
		STREAMING::REQUEST_MODEL(hLocal_87);
		STREAMING::REQUEST_MODEL(hLocal_89);
	}
	else if (iLocal_36 == 5 || iLocal_36 == 6)
	{
		STREAMING::REQUEST_MODEL(hLocal_86);
	}

	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(2053223216, true);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(943752001, true);

	if (STREAMING::HAS_MODEL_LOADED(hLocal_88) && HUD::HAS_ADDITIONAL_TEXT_LOADED(0))
		if (iLocal_36 >= 3 && iLocal_36 <= 4)
			if (STREAMING::HAS_MODEL_LOADED(hLocal_87) && STREAMING::HAS_MODEL_LOADED(hLocal_89))
				bLocal_75 = true;
		else if (iLocal_36 == 5 || iLocal_36 == 6)
			if (STREAMING::HAS_MODEL_LOADED(hLocal_86))
				bLocal_75 = true;
		else if (iLocal_36 > 6)
			if (AUDIO::REQUEST_SCRIPT_AUDIO_BANK("Deliveries", false, -1))
				bLocal_75 = true;
		else
			bLocal_75 = true;

	return;
}

void func_107() // Position - 0x513F Hash - 0x569FEAC8 ^0x78763ACE
{
	float distanceBetweenCoords;

	uLocal_64 = { func_109(func_111(), iLocal_36) };
	fLocal_73 = func_108(func_111(), iLocal_36);

	if (iLocal_36 > 6)
	{
		sLocal_103 = "PMDL_TRUCK";
		sLocal_104 = "PMDL_BTIM";
		sLocal_105 = "PMDL_BCKT";
		hLocal_88 = 2053223216;
		iLocal_85 = 2;
	}

	if (func_111() == 10)
	{
		uLocal_67 = { -1161.2133f, -1567.0677f, 3.4234f };
		hLocal_88 = 943752001;
	
		if (iLocal_36 == 0)
		{
			iLocal_82 = 2;
			iLocal_83 = 15;
			sLocal_104 = "PMDL_TIM";
		}
		else if (iLocal_36 == 1)
		{
			iLocal_82 = 1;
			iLocal_83 = 30;
			sLocal_104 = "PMDL_TIM";
		}
		else if (iLocal_36 == 2)
		{
			iLocal_82 = 1;
			iLocal_83 = 30;
			sLocal_104 = "PMDL_TIM";
		}
		else if (iLocal_36 == 3)
		{
			uLocal_70 = { -3121.2615f, 1152.92f, 19.4047f };
			fLocal_74 = 176.4887f;
			hLocal_89 = -1973172295;
			hLocal_87 = 1581098148;
		}
		else if (iLocal_36 == 4)
		{
			uLocal_70 = { 1543.1453f, 2184.3706f, 77.8114f };
			fLocal_74 = 45.3499f;
			hLocal_89 = -1973172295;
			hLocal_87 = 1581098148;
		}
		else if (iLocal_36 >= 5)
		{
			hLocal_86 = 846439045;
		}
	}
	else if (func_111() == 14)
	{
		uLocal_67 = { -2169.8284f, 4277.365f, 47.9568f };
		distanceBetweenCoords = MISC::GET_DISTANCE_BETWEEN_COORDS(uLocal_64, uLocal_67, true);
		iLocal_83 = SYSTEM::ROUND(((distanceBetweenCoords / 16.5f) + 40f) / 2f);
	}
	else if (func_111() == 13)
	{
		uLocal_67 = { -323.356f, 6264.4307f, 30.4463f };
		distanceBetweenCoords = MISC::GET_DISTANCE_BETWEEN_COORDS(uLocal_64, uLocal_67, true);
		iLocal_83 = SYSTEM::ROUND(((distanceBetweenCoords / 16.5f) + 40f) / 2f);
	}
	else if (func_111() == 12)
	{
		uLocal_67 = { 198.5282f, 342.2399f, 104.9566f };
		distanceBetweenCoords = MISC::GET_DISTANCE_BETWEEN_COORDS(uLocal_64, uLocal_67, true);
		iLocal_83 = SYSTEM::ROUND(((distanceBetweenCoords / 16.5f) + 15f) / 2f);
	}
	else if (func_111() == 11)
	{
		uLocal_67 = { -560.0195f, 301.1481f, 82.1436f };
		distanceBetweenCoords = MISC::GET_DISTANCE_BETWEEN_COORDS(uLocal_64, uLocal_67, true);
		iLocal_83 = SYSTEM::ROUND(((distanceBetweenCoords / 16.5f) + 15f) / 2f);
	}

	iLocal_81 = 0;
	bLocal_76 = true;
	return;
}

float func_108(int iParam0, int iParam1) // Position - 0x536D Hash - 0x4843E36 ^0x4843E36
{
	switch (iParam0)
	{
		case 10:
			switch (iParam1)
			{
				case 0:
					return 0.5801f;
			
				case 1:
					return 177.9306f;
			
				case 2:
					return 49.6978f;
			
				case 3:
					return 336.9449f;
			
				case 4:
					return 80.1639f;
			
				case 5:
					return 287.983f;
			
				case 6:
					return 46.7895f;
			}
			break;
	
		case 11:
		case 12:
		case 13:
		case 14:
			switch (iParam1)
			{
				case 7:
					return 273.1085f;
			
				case 8:
					return 256.7899f;
			
				case 9:
					return 180.9647f;
			
				case 10:
					return 126.4385f;
			
				case 11:
					return 123.4767f;
			
				case 12:
					return 226.219f;
			
				case 13:
					return 82.6097f;
			}
			break;
	}

	return 0f;
}

Vector3 func_109(int iParam0, int iParam1) // Position - 0x549D Hash - 0x7CA5B2D1 ^0x7CA5B2D1
{
	switch (iParam0)
	{
		case 10:
			switch (iParam1)
			{
				case 0:
					return -128.18756f, 1934.4951f, 194.90749f;
			
				case 1:
					return -179.8744f, 586.4468f, 196.6278f;
			
				case 2:
					return 1390.0889f, -605.923f, 73.3378f;
			
				case 3:
					return -3170.0483f, 1098.809f, 19.7817f;
			
				case 4:
					return 1581.2198f, 2194.629f, 78.1062f;
			
				case 5:
					return 1475.8333f, -113.5801f, 141.794f;
			
				case 6:
					return 1603.0708f, -1793.9147f, 89.0179f;
			}
			break;
	
		case 11:
		case 12:
		case 13:
		case 14:
			switch (iParam1)
			{
				case 7:
					return 642.2169f, 2774.892f, 40.985f;
			
				case 8:
					return -1916.1224f, 2060.3132f, 139.7363f;
			
				case 9:
					return 824.8992f, -1064.1921f, 26.9851f;
			
				case 10:
					return -669.6013f, -1198.6638f, 9.6125f;
			
				case 11:
					return -1465.5795f, -390.7494f, 37.5168f;
			
				case 12:
					return 797.7521f, -1793.0078f, 28.3164f;
			
				case 13:
					return 806.319f, -2017.4514f, 28.2215f;
			}
			break;
	}

	return func_110(iParam0);
}

Vector3 func_110(int iParam0) // Position - 0x565E Hash - 0xCBED323 ^0xCBED323
{
	switch (iParam0)
	{
		case 2:
			return 2147.3167f, 4795.2075f, 40.08961f;
	
		case 9:
			return 1524.3289f, -2108.269f, 75.7248f;
	
		case 10:
			return -1172.195f, -1577.427f, 3.38152f;
	
		case 1:
			return 898.3718f, -177.07635f, 72.68348f;
	
		case 4:
			return 1191.3021f, 2672.064f, 36.73154f;
	
		case 3:
			return -1584.333f, 5193.4873f, 2.95912f;
	
		case 0:
			return 408.34286f, -1623.8357f, 28.29278f;
	
		case 8:
			return -1339.4886f, -21.19435f, 50.34566f;
	
		case 5:
			return 336.20697f, 172.42506f, 102.20552f;
	
		case 6:
			return 394.54953f, -703.37946f, 28.27281f;
	
		case 7:
			return -1413.1844f, -206.05553f, 46.29474f;
	
		case 11:
			return -560.38086f, 274.54758f, 82.02014f;
	
		case 12:
			return 221.08446f, 340.78488f, 104.58835f;
	
		case 13:
			return -296.71542f, 6259.7324f, 30.49339f;
	
		case 14:
			return -2201.4016f, 4291f, 47.32429f;
	}

	return 10f, 10f, 10f;
}

int func_111() // Position - 0x5811 Hash - 0x4228A1C2 ^0x350FFF83
{
	return Global_112358.f_20;
}

int func_112() // Position - 0x581F Hash - 0xF149A458 ^0x8E4F2428
{
	return func_113(Global_112358.f_20, Global_112358.f_29);
}

int func_113(int iParam0, int iParam1) // Position - 0x5837 Hash - 0x3B4B3C43 ^0x3B4B3C43
{
	switch (iParam0)
	{
		case 10:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 1;
			
				case 2:
					return 2;
			
				case 3:
					return 3;
			
				case 4:
					return 4;
			
				case 5:
					return 5;
			
				case 6:
					return 6;
			}
			break;
	
		case 11:
		case 12:
			switch (iParam1)
			{
				case 0:
					return 9;
			
				case 1:
					return 10;
			
				case 2:
					return 11;
			
				case 3:
					return 12;
			
				case 4:
					return 13;
			}
			break;
	
		case 13:
		case 14:
			switch (iParam1)
			{
				case 0:
					return 8;
			
				case 1:
					return 7;
			}
			break;
	}

	return 0;
}

void func_114() // Position - 0x593F Hash - 0x9DA3FA68 ^0x778DFB7C
{
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(2053223216, false);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(943752001, false);
	AUDIO::RELEASE_SCRIPT_AUDIO_BANK();

	if (bLocal_77)
	{
		if (!ENTITY::IS_ENTITY_DEAD(veLocal_98, false))
			func_115(veLocal_98, 0, 145);
	
		PLAYER::RESET_WANTED_LEVEL_DIFFICULTY(PLAYER::PLAYER_ID());
		func_100(&uLocal_106, 0, false);
	}

	SCRIPT::TERMINATE_THIS_THREAD();
	return;
}

int func_115(Vehicle veParam0, int iParam1, int iParam2) // Position - 0x598D Hash - 0xBB1BDF97 ^0x1A874F3A
{
	var script;
	const char* entityScript;

	if (iParam1 == 0)
	{
		entityScript = ENTITY::GET_ENTITY_SCRIPT(veParam0, &script);
	
		if (!MISC::IS_STRING_NULL_OR_EMPTY(entityScript))
			if (MISC::GET_HASH_KEY(entityScript) == MISC::GET_HASH_KEY("vehicle_gen_controller"))
				return 0;
	}

	func_116(veParam0, iParam2);
	return 1;
}

void func_116(Vehicle veParam0, int iParam1) // Position - 0x59CD Hash - 0x403E4E98 ^0x34F9BF63
{
	Ped pedInVehicleSeat;
	int i;
	int j;

	if (!func_122(veParam0))
		return;

	if (iParam1 != 0 && iParam1 != 1 && iParam1 != 2)
	{
		pedInVehicleSeat = VEHICLE::GET_PED_IN_VEHICLE_SEAT(veParam0, -1, false);
	
		if (!ENTITY::DOES_ENTITY_EXIST(pedInVehicleSeat))
			pedInVehicleSeat = VEHICLE::GET_LAST_PED_IN_VEHICLE_SEAT(veParam0, -1);
	
		if (ENTITY::DOES_ENTITY_EXIST(pedInVehicleSeat) && !PED::IS_PED_INJURED(pedInVehicleSeat))
			if (ENTITY::GET_ENTITY_MODEL(pedInVehicleSeat) == 225514697)
				iParam1 = 0;
			else if (ENTITY::GET_ENTITY_MODEL(pedInVehicleSeat) == -1692214353)
				iParam1 = 1;
			else if (ENTITY::GET_ENTITY_MODEL(pedInVehicleSeat) == -1686040670)
				iParam1 = 2;
	
		if (iParam1 != 0 && iParam1 != 1 && iParam1 != 2)
			iParam1 = Global_113648.f_2365.f_539.f_4321;
	}

	for (i = 0; i < 3; i = i + 1)
	{
		for (j = 0; j < 2; j = j + 1)
		{
			if (ENTITY::GET_ENTITY_MODEL(veParam0) == Global_113648.f_32751.f_5038[i /*157*/][j /*78*/].f_66)
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_113648.f_32751.f_5038[i /*157*/][j /*78*/].f_1)))
				{
					if (MISC::ARE_STRINGS_EQUAL(VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(veParam0), &(Global_113648.f_32751.f_5038[i /*157*/][j /*78*/].f_1)))
					{
						Global_113648.f_32751.f_5038[i /*157*/][j /*78*/].f_66 = 0;
						Global_113648.f_32751.f_5592[i] = j;
					}
				}
			}
		}
	}

	for (i = 0; i < 3; i = i + 1)
	{
		if (ENTITY::GET_ENTITY_MODEL(veParam0) == Global_113648.f_32751.f_5600[i /*78*/].f_66)
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_113648.f_32751.f_5600[i /*78*/].f_1)))
				if (MISC::ARE_STRINGS_EQUAL(VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(veParam0), &(Global_113648.f_32751.f_5600[i /*78*/].f_1)))
					Global_113648.f_32751.f_5600[i /*78*/].f_66 = 0;
	}

	Global_113648.f_32751.f_5590 = iParam1;
	Global_78253 = veParam0;
	Global_113648.f_32751.f_5588 = 1;
	func_117(veParam0, &(Global_113648.f_32751.f_5510));
	return;
}

void func_117(Vehicle veParam0, var uParam1) // Position - 0x5BCF Hash - 0x5E84B52A ^0xEF20F807
{
	int i;

	if (VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
	{
		func_121(uParam1);
		uParam1->f_66 = ENTITY::GET_ENTITY_MODEL(veParam0);
		TEXT_LABEL_ASSIGN_STRING(&(uParam1->f_1), VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(veParam0), 16);
		*uParam1 = VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(veParam0);
		VEHICLE::GET_VEHICLE_COLOURS(veParam0, &(uParam1->f_5), &(uParam1->f_6));
		VEHICLE::GET_VEHICLE_EXTRA_COLOURS(veParam0, &(uParam1->f_7), &(uParam1->f_8));
		VEHICLE::GET_VEHICLE_TYRE_SMOKE_COLOR(veParam0, &(uParam1->f_62), &(uParam1->f_63), &(uParam1->f_64));
		uParam1->f_65 = VEHICLE::GET_VEHICLE_WINDOW_TINT(veParam0);
		uParam1->f_67 = VEHICLE::GET_VEHICLE_LIVERY(veParam0);
		uParam1->f_69 = unk_0xA79BA8CFAAB28820(veParam0);
		uParam1->f_70 = VEHICLE::GET_VEHICLE_DOOR_LOCK_STATUS(veParam0);
		VEHICLE::GET_VEHICLE_CUSTOM_SECONDARY_COLOUR(veParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		VEHICLE::GET_VEHICLE_NEON_COLOUR(veParam0, &(uParam1->f_74), &(uParam1->f_75), &(uParam1->f_76));
	
		if (VEHICLE::GET_VEHICLE_NEON_ENABLED(veParam0, 2))
			MISC::SET_BIT(&(uParam1->f_77), 28);
	
		if (VEHICLE::GET_VEHICLE_NEON_ENABLED(veParam0, 3))
			MISC::SET_BIT(&(uParam1->f_77), 29);
	
		if (VEHICLE::GET_VEHICLE_NEON_ENABLED(veParam0, 0))
			MISC::SET_BIT(&(uParam1->f_77), 30);
	
		if (VEHICLE::GET_VEHICLE_NEON_ENABLED(veParam0, 1))
			MISC::SET_BIT(&(uParam1->f_77), 31);
	
		if (uParam1->f_65 == -1 && !func_120(uParam1->f_66))
			uParam1->f_65 = 0;
	
		if (VEHICLE::IS_VEHICLE_A_CONVERTIBLE(veParam0, false))
			uParam1->f_68 = VEHICLE::GET_CONVERTIBLE_ROOF_STATE(veParam0);
	
		if (VEHICLE::IS_THIS_MODEL_A_PLANE(uParam1->f_66))
		{
			if (VEHICLE::IS_PLANE_LANDING_GEAR_INTACT(veParam0))
			{
				switch (VEHICLE::GET_LANDING_GEAR_STATE(veParam0))
				{
					case 3:
					case 0:
						MISC::CLEAR_BIT(&(uParam1->f_77), 23);
						MISC::SET_BIT(&(uParam1->f_77), 22);
						break;
				
					case 4:
					case 1:
						MISC::CLEAR_BIT(&(uParam1->f_77), 23);
						MISC::CLEAR_BIT(&(uParam1->f_77), 22);
						break;
				
					case 5:
						MISC::SET_BIT(&(uParam1->f_77), 23);
						break;
				}
			}
			else
			{
				MISC::SET_BIT(&(uParam1->f_77), 23);
			}
		}
	
		if (!VEHICLE::GET_VEHICLE_TYRES_CAN_BURST(veParam0))
			MISC::SET_BIT(&(uParam1->f_77), 9);
	
		if (VEHICLE::IS_VEHICLE_STOLEN(veParam0))
			MISC::SET_BIT(&(uParam1->f_77), 10);
	
		if (VEHICLE::GET_IS_VEHICLE_PRIMARY_COLOUR_CUSTOM(veParam0))
		{
			MISC::SET_BIT(&(uParam1->f_77), 13);
			VEHICLE::GET_VEHICLE_CUSTOM_PRIMARY_COLOUR(veParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		}
	
		if (VEHICLE::GET_IS_VEHICLE_SECONDARY_COLOUR_CUSTOM(veParam0))
			MISC::SET_BIT(&(uParam1->f_77), 12);
	
		func_119(&veParam0, &(uParam1->f_9), &(uParam1->f_59));
	
		for (i = 0; i <= 11; i = i + 1)
		{
			if (VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(veParam0, i + 1))
				MISC::SET_BIT(&(uParam1->f_77), func_118(i + 1));
		}
	
		if (GRAPHICS::DOES_VEHICLE_HAVE_CREW_EMBLEM(veParam0, 0))
			MISC::SET_BIT(&(uParam1->f_77), 11);
		else
			MISC::CLEAR_BIT(&(uParam1->f_77), 11);
	
		if (DECORATOR::DECOR_EXIST_ON(veParam0, "IgnoredByQuickSave") && unk_0x8FA309E9ECEE409A(veParam0, "IgnoredByQuickSave"))
			MISC::SET_BIT(&(uParam1->f_77), 27);
		else
			MISC::CLEAR_BIT(&(uParam1->f_77), 27);
	}

	return;
}

int func_118(int iParam0) // Position - 0x5E7A Hash - 0xEE599357 ^0xEE599357
{
	switch (iParam0)
	{
		case 1:
			return 0;
	
		case 2:
			return 1;
	
		case 3:
			return 2;
	
		case 4:
			return 3;
	
		case 5:
			return 4;
	
		case 6:
			return 5;
	
		case 7:
			return 6;
	
		case 8:
			return 7;
	
		case 9:
			return 8;
	
		case 10:
			return 24;
	
		case 11:
			return 25;
	
		case 12:
			return 26;
	}

	return 0;
}

int func_119(var uParam0, var uParam1, var uParam2) // Position - 0x5F2A Hash - 0x4455160E ^0x8E5B3F28
{
	int i;
	int modType;

	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam0, false))
		return 0;

	if (VEHICLE::GET_NUM_MOD_KITS(*uParam0) == 0)
		return 0;

	for (i = 0; i < *uParam1; i = i + 1)
	{
		modType = i;
	
		if (modType == 17 || modType == 18 || modType == 19 || modType == 20 || modType == 21)
		{
			uParam1->[i] = 0;
		
			if (VEHICLE::IS_TOGGLE_MOD_ON(*uParam0, modType))
				uParam1->[i] = 1;
		}
		else if (modType == 22)
		{
			if (VEHICLE::IS_TOGGLE_MOD_ON(*uParam0, modType))
			{
				switch (VEHICLE::GET_VEHICLE_XENON_LIGHT_COLOR_INDEX(*uParam0))
				{
					case 255:
						uParam1->[i] = 1;
						break;
				
					case 0:
						uParam1->[i] = 2;
						break;
				
					case 1:
						uParam1->[i] = 3;
						break;
				
					case 2:
						uParam1->[i] = 4;
						break;
				
					case 3:
						uParam1->[i] = 5;
						break;
				
					case 4:
						uParam1->[i] = 6;
						break;
				
					case 5:
						uParam1->[i] = 7;
						break;
				
					case 6:
						uParam1->[i] = 8;
						break;
				
					case 7:
						uParam1->[i] = 9;
						break;
				
					case 8:
						uParam1->[i] = 10;
						break;
				
					case 9:
						uParam1->[i] = 11;
						break;
				
					case 10:
						uParam1->[i] = 12;
						break;
				
					case 11:
						uParam1->[i] = 13;
						break;
				
					case 12:
						uParam1->[i] = 14;
						break;
				
					case 13:
						uParam1->[i] = 15;
						break;
				}
			}
			else
			{
				uParam1->[i] = 0;
			}
		}
		else
		{
			uParam1->[i] = VEHICLE::GET_VEHICLE_MOD(*uParam0, i) + 1;
		
			if (i == 23)
				uParam2->[0] = VEHICLE::GET_VEHICLE_MOD_VARIATION(*uParam0, i);
			else if (i == 24)
				uParam2->[1] = VEHICLE::GET_VEHICLE_MOD_VARIATION(*uParam0, i);
		}
	}

	return 1;
}

BOOL func_120(int iParam0) // Position - 0x611D Hash - 0x5000025C ^0x5000025C
{
	switch (iParam0)
	{
		case -1775728740:
		case -998177792:
			return true;
	
		default:
		
	}

	return false;
}

void func_121(var uParam0) // Position - 0x613D Hash - 0xB95AF921 ^0x4DC7C61C
{
	int i;

	uParam0->f_66 = 0;
	uParam0->f_77 = 0;
	uParam0->f_65 = 0;
	uParam0->f_62 = 0;
	uParam0->f_63 = 0;
	uParam0->f_64 = 0;
	uParam0->f_74 = 0;
	uParam0->f_75 = 0;
	uParam0->f_76 = 0;
	*uParam0 = 0;
	TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_1), "", 16);
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;

	for (i = 0; i < 49; i = i + 1)
	{
		uParam0->f_9[i] = 0;
	}

	for (i = 0; i < 2; i = i + 1)
	{
		uParam0->f_59[i] = 0;
	}

	uParam0->f_67 = 0;
	uParam0->f_68 = 0;
	uParam0->f_69 = 0;
	uParam0->f_70 = 1;
	uParam0->f_71 = 0;
	uParam0->f_72 = 0;
	uParam0->f_73 = 0;
	return;
}

BOOL func_122(Vehicle veParam0) // Position - 0x61ED Hash - 0x835CB3EF ^0xB88368F0
{
	if (!ENTITY::DOES_ENTITY_EXIST(veParam0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false) || func_140(veParam0, 0, false) || func_140(veParam0, 1, false) || func_140(veParam0, 2, false) || func_139(veParam0) != 145 || func_138(veParam0) || func_137(veParam0) || func_136(veParam0) || func_135(veParam0) || !func_123(ENTITY::GET_ENTITY_MODEL(veParam0)))
	{
		func_137(veParam0);
		func_137(veParam0);
		func_140(veParam0, 0, false);
		func_140(veParam0, 1, false);
		func_140(veParam0, 2, false);
		func_139(veParam0) != 145;
		return false;
	}

	return true;
}

BOOL func_123(Hash hParam0) // Position - 0x62CA Hash - 0x66FE4A4A ^0x10D5195D
{
	if (hParam0 == 0)
		return false;

	if (!func_124(hParam0, false, -1))
		return false;

	if (VEHICLE::IS_THIS_MODEL_A_BOAT(hParam0) || VEHICLE::IS_THIS_MODEL_A_PLANE(hParam0) || VEHICLE::IS_THIS_MODEL_A_HELI(hParam0) || VEHICLE::IS_THIS_MODEL_A_TRAIN(hParam0))
		return false;

	switch (hParam0)
	{
		case -713569950:
		case -1961627517:
		case -823509173:
		case -1207431159:
		case 782665360:
		case -1476447243:
		case 1074326203:
		case 1353720154:
		case -845979911:
		case -1323100960:
		case -442313018:
		case 1283517198:
		case -2072933068:
		case -1098802077:
		case 1941029835:
		case 1938952078:
		case -2007026063:
		case 1917016601:
		case 2053223216:
		case 524108981:
		case 850991848:
		case 1518533038:
		case -2140210194:
		case -2137348917:
		case 2112052861:
		case -2076478498:
		case 1886712733:
		case 444583674:
		case 48339065:
		case -1006919392:
		case -2130482718:
		case -784816453:
		case 475220373:
		case -1705304628:
		case -1700801569:
		case -947761570:
		case 1876516712:
		case 1951180813:
		case -1987130134:
		case -233098306:
		case 121658888:
		case -120287622:
		case 904750859:
		case -1050465301:
		case 2046537925:
		case -1627000575:
		case 1912215274:
		case -1973172295:
		case -34623805:
		case -1536924937:
		case -1779120616:
		case 456714581:
		case -956048545:
		case 771711535:
		case -1066334226:
		case -845961253:
			return false;
	}

	return true;
}

BOOL func_124(Hash hParam0, BOOL bParam1, int iParam2) // Position - 0x647C Hash - 0x9BD8A1CC ^0xA5081522
{
	int i;
	Hash outData;

	if (hParam0 == 0)
		return false;

	if (!STREAMING::IS_MODEL_A_VEHICLE(hParam0))
		return false;

	if (hParam0 == -915704871 && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS() || hParam0 == 237764926 && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS() || hParam0 == 349315417 && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS() || hParam0 == -613725916 || hParam0 == -401643538 && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!func_134())
			return false;
	}
	else
	{
		for (i = 0; i < FILES::GET_NUM_DLC_VEHICLES(); i = i + 1)
		{
			if (FILES::GET_DLC_VEHICLE_DATA(i, &outData))
				if (hParam0 == outData.f_1)
					if (FILES::IS_CONTENT_ITEM_LOCKED(outData))
						return false;
		}
	}

	if (hParam0 == -150975354)
		if (!func_133() && !func_132() && !func_131() && !func_130() && !func_134())
			return false;

	if (hParam0 == 37348240 || hParam0 == 11251904 || hParam0 == 544021352)
	{
		if (func_129() || MISC::IS_PC_VERSION() || func_128())
		{
		}
		else if (!func_131())
		{
			return false;
		}
	}

	if (bParam1)
		if (!func_127(hParam0, iParam2))
			return false;

	if (!func_125(hParam0))
		return false;

	return true;
}

BOOL func_125(Hash hParam0) // Position - 0x65FE Hash - 0xC7E3100C ^0xA55CC701
{
	int num;
	var unk;
	var unk2;

	if (!func_126())
		return true;

	NETSHOPPING::NET_GAMESERVER_GET_SESSION_STATE_AND_STATUS(&num, &unk);

	if (num == 4)
		return true;

	switch (hParam0)
	{
		case -827162039:
			TEXT_LABEL_ASSIGN_STRING(&unk2, "VE_DUNE4_t0_v3", 64);
			break;
	
		case 989294410:
			TEXT_LABEL_ASSIGN_STRING(&unk2, "VE_VOLTIC2_t0_v3", 64);
			break;
	
		case 941494461:
			TEXT_LABEL_ASSIGN_STRING(&unk2, "VE_RUINER2_t0_v3", 64);
			break;
	
		case -1649536104:
			TEXT_LABEL_ASSIGN_STRING(&unk2, "VE_PHANTOM2_t0_v3", 64);
			break;
	
		case 1180875963:
			TEXT_LABEL_ASSIGN_STRING(&unk2, "VE_TECHNICAL2_t0_v3", 64);
			break;
	
		case 682434785:
			TEXT_LABEL_ASSIGN_STRING(&unk2, "VE_BOXVILLE5_t0_v3", 64);
			break;
	
		case -1912017790:
			TEXT_LABEL_ASSIGN_STRING(&unk2, "VE_WASTELANDER_t0_v3", 64);
			break;
	
		case -1590337689:
			TEXT_LABEL_ASSIGN_STRING(&unk2, "VE_BLAZER5_t0_v3", 64);
			break;
	
		default:
			return true;
	}

	if (!unk_0x0E4605546F88E7A3(&unk2))
		return false;

	return true;
}

BOOL func_126() // Position - 0x66CA Hash - 0x2E0B1DC1 ^0xD2D0A3D9
{
	if (MISC::IS_PC_VERSION())
		return NETSHOPPING::NET_GAMESERVER_USE_SERVER_TRANSACTIONS();

	return false;
}

BOOL func_127(Hash hParam0, int iParam1) // Position - 0x66E1 Hash - 0x2FF24ACC ^0x92A5C100
{
	BOOL num;
	int cloudTimeAsInt;

	if (!Global_2764242 && iParam1 >= 0 && iParam1 <= 415)
		if (IS_BIT_SET(Global_1586468[iParam1 /*142*/].f_103, 2))
			return true;

	if (Global_2764241)
		return true;

	num = 1;
	cloudTimeAsInt = NETWORK::GET_CLOUD_TIME_AS_INT();

	if (hParam0 == -602287871)
		if (!Global_262145.f_7059 && !Global_262145.f_13397 && cloudTimeAsInt < Global_262145.f_13398)
			num = 0;

	if (hParam0 == -2039755226)
		if (!Global_262145.f_14737 && cloudTimeAsInt < Global_262145.f_14749)
			num = 0;
	else if (hParam0 == 16646064 || hParam0 == -899509638)
		if (!Global_262145.f_14733 && cloudTimeAsInt < Global_262145.f_14745)
			num = 0;
	else if (hParam0 == 223258115)
		if (!Global_262145.f_14734 && cloudTimeAsInt < Global_262145.f_14746)
			num = 0;
	else if (hParam0 == -1797613329)
		if (!Global_262145.f_14735 && cloudTimeAsInt < Global_262145.f_14747)
			num = 0;
	else if (hParam0 == -1126264336)
		if (!Global_262145.f_14736 && cloudTimeAsInt < Global_262145.f_14748)
			num = 0;
	else if (hParam0 == 1119641113)
		if (!Global_262145.f_14738 && cloudTimeAsInt < Global_262145.f_14750)
			num = 0;

	if (hParam0 == 2123327359)
		if (!Global_262145.f_14739 && cloudTimeAsInt < Global_262145.f_14742)
			num = 0;
	else if (hParam0 == -1757836725)
		if (!Global_262145.f_14740 && cloudTimeAsInt < Global_262145.f_14743)
			num = 0;
	else if (hParam0 == -1829802492)
		if (!Global_262145.f_14741 && cloudTimeAsInt < Global_262145.f_14744)
			num = 0;

	if (hParam0 == 86520421)
		if (!Global_262145.f_17313 && cloudTimeAsInt < Global_262145.f_17278)
			num = 0;
	else if (hParam0 == 1549126457)
		if (!Global_262145.f_17308 && cloudTimeAsInt < Global_262145.f_17273)
			num = 0;
	else if (hParam0 == 390201602)
		if (!Global_262145.f_17312 && cloudTimeAsInt < Global_262145.f_17277)
			num = 0;
	else if (hParam0 == 683047626)
		if (!Global_262145.f_17311 && cloudTimeAsInt < Global_262145.f_17276)
			num = 0;
	else if (hParam0 == -1232836011)
		if (!Global_262145.f_17305 && cloudTimeAsInt < Global_262145.f_17270)
			num = 0;
	else if (hParam0 == -777172681)
		if (!Global_262145.f_17306 && cloudTimeAsInt < Global_262145.f_17271)
			num = 0;
	else if (hParam0 == 101905590)
		if (!Global_262145.f_17309 && cloudTimeAsInt < Global_262145.f_17274)
			num = 0;
	else if (hParam0 == -663299102)
		if (!Global_262145.f_17310 && cloudTimeAsInt < Global_262145.f_17275)
			num = 0;
	else if (hParam0 == 1887331236)
		if (!Global_262145.f_17307 && cloudTimeAsInt < Global_262145.f_17272)
			num = 0;
	else if (hParam0 == 741090084)
		if (!Global_262145.f_17315 && cloudTimeAsInt < Global_262145.f_17280)
			num = 0;
	else if (hParam0 == -2103821244)
		if (!Global_262145.f_17316 && cloudTimeAsInt < Global_262145.f_17281)
			num = 0;
	else if (hParam0 == -1071380347)
		if (!Global_262145.f_17304 && cloudTimeAsInt < Global_262145.f_17269)
			num = 0;
	else if (hParam0 == 2067820283)
		if (!Global_262145.f_17303 && cloudTimeAsInt < Global_262145.f_17268)
			num = 0;
	else if (hParam0 == 819197656)
		if (!Global_262145.f_17302 && cloudTimeAsInt < Global_262145.f_17267)
			num = 0;
	else if (hParam0 == 482197771)
		if (!Global_262145.f_17314 && cloudTimeAsInt < Global_262145.f_17279)
			num = 0;
	else if (hParam0 == -401643538)
		if (!Global_262145.f_17317 && cloudTimeAsInt < Global_262145.f_17282)
			num = 0;
	else if (hParam0 == 349315417)
		if (!Global_262145.f_17318 && cloudTimeAsInt < Global_262145.f_17283)
			num = 0;
	else if (hParam0 == -915704871)
		if (!Global_262145.f_17319 && cloudTimeAsInt < Global_262145.f_17284)
			num = 0;
	else if (hParam0 == 237764926)
		if (!Global_262145.f_17320 && cloudTimeAsInt < Global_262145.f_17285)
			num = 0;

	if (hParam0 == 822018448)
		if (!Global_262145.f_17474 && cloudTimeAsInt < Global_262145.f_17496)
			num = 0;
	else if (hParam0 == -1606187161)
		if (!Global_262145.f_17475 && cloudTimeAsInt < Global_262145.f_17497)
			num = 0;
	else if (hParam0 == -1009268949)
		if (!Global_262145.f_17476 && cloudTimeAsInt < Global_262145.f_17498)
			num = 0;
	else if (hParam0 == 2035069708)
		if (!Global_262145.f_17477 && cloudTimeAsInt < Global_262145.f_17499)
			num = 0;
	else if (hParam0 == -2115793025)
		if (!Global_262145.f_17478 && cloudTimeAsInt < Global_262145.f_17500)
			num = 0;
	else if (hParam0 == -570033273)
		if (!Global_262145.f_17479 && cloudTimeAsInt < Global_262145.f_17501)
			num = 0;
	else if (hParam0 == -255678177)
		if (!Global_262145.f_17481 && cloudTimeAsInt < Global_262145.f_17502)
			num = 0;
	else if (hParam0 == -609625092)
		if (!Global_262145.f_17482 && cloudTimeAsInt < Global_262145.f_17503)
			num = 0;
	else if (hParam0 == -405626514)
		if (!Global_262145.f_17483 && cloudTimeAsInt < Global_262145.f_17504)
			num = 0;
	else if (hParam0 == 6774487)
		if (!Global_262145.f_17484 && cloudTimeAsInt < Global_262145.f_17505)
			num = 0;
	else if (hParam0 == -674927303)
		if (!Global_262145.f_17485 && cloudTimeAsInt < Global_262145.f_17506)
			num = 0;
	else if (hParam0 == -1404136503)
		if (!Global_262145.f_17486 && cloudTimeAsInt < Global_262145.f_17507)
			num = 0;
	else if (hParam0 == -440768424)
		if (!Global_262145.f_17487 && cloudTimeAsInt < Global_262145.f_17508)
			num = 0;
	else if (hParam0 == -1558399629)
		if (!Global_262145.f_17493 && cloudTimeAsInt < Global_262145.f_17515)
			num = 0;
	else if (hParam0 == 1026149675)
		if (!Global_262145.f_17490 && cloudTimeAsInt < Global_262145.f_17511)
			num = 0;
	else if (hParam0 == -618617997)
		if (!Global_262145.f_17491 && cloudTimeAsInt < Global_262145.f_17512)
			num = 0;
	else if (hParam0 == -1289178744)
		if (!Global_262145.f_17492 && cloudTimeAsInt < Global_262145.f_17513)
			num = 0;
	else if (hParam0 == -1842748181)
		if (!Global_262145.f_17480 && cloudTimeAsInt < Global_262145.f_17514)
			num = 0;
	else if (hParam0 == -2140431165)
		if (!Global_262145.f_17494 && cloudTimeAsInt < Global_262145.f_17516)
			num = 0;
	else if (hParam0 == 1491277511)
		if (!Global_262145.f_17488 && cloudTimeAsInt < Global_262145.f_17509)
			num = 0;
	else if (hParam0 == -1523428744)
		if (!Global_262145.f_17489 && cloudTimeAsInt < Global_262145.f_17510)
			num = 0;
	else if (hParam0 == 1873600305)
		if (!Global_262145.f_17495 && cloudTimeAsInt < Global_262145.f_17517)
			num = 0;

	if (hParam0 == 989294410)
		if (!Global_262145.f_19131 && cloudTimeAsInt < Global_262145.f_19228)
			num = 0;
	else if (hParam0 == 941494461)
		if (!Global_262145.f_19132 && cloudTimeAsInt < Global_262145.f_19229)
			num = 0;
	else if (hParam0 == -827162039)
		if (!Global_262145.f_19133 && cloudTimeAsInt < Global_262145.f_19230)
			num = 0;
	else if (hParam0 == -312295511)
		if (!Global_262145.f_19134 && cloudTimeAsInt < Global_262145.f_19231)
			num = 0;
	else if (hParam0 == -1649536104)
		if (!Global_262145.f_19135 && cloudTimeAsInt < Global_262145.f_19232)
			num = 0;
	else if (hParam0 == 1180875963)
		if (!Global_262145.f_19136 && cloudTimeAsInt < Global_262145.f_19233)
			num = 0;
	else if (hParam0 == 682434785)
		if (!Global_262145.f_19137 && cloudTimeAsInt < Global_262145.f_19234)
			num = 0;
	else if (hParam0 == -1912017790)
		if (!Global_262145.f_19138 && cloudTimeAsInt < Global_262145.f_19235)
			num = 0;
	else if (hParam0 == -1590337689)
		if (!Global_262145.f_19139 && cloudTimeAsInt < Global_262145.f_19236)
			num = 0;
	else if (hParam0 == -1045541610)
		if (!Global_262145.f_19140 && cloudTimeAsInt < Global_262145.f_19237)
			num = 0;
	else if (hParam0 == -2022483795)
		if (!Global_262145.f_19141 && cloudTimeAsInt < Global_262145.f_19238)
			num = 0;
	else if (hParam0 == -239841468)
		if (!Global_262145.f_19142 && cloudTimeAsInt < Global_262145.f_19239)
			num = 0;
	else if (hParam0 == 1790834270)
		if (!Global_262145.f_19143 && cloudTimeAsInt < Global_262145.f_19240)
			num = 0;
	else if (hParam0 == 196747873)
		if (!Global_262145.f_19144 && cloudTimeAsInt < Global_262145.f_19241)
			num = 0;
	else if (hParam0 == -566387422)
		if (!Global_262145.f_19145 && cloudTimeAsInt < Global_262145.f_19242)
			num = 0;
	else if (hParam0 == 627535535)
		if (!Global_262145.f_19146 && cloudTimeAsInt < Global_262145.f_19243)
			num = 0;
	else if (hParam0 == -757735410)
		if (!Global_262145.f_19147 && cloudTimeAsInt < Global_262145.f_19244)
			num = 0;
	else if (hParam0 == -2048333973)
		if (!Global_262145.f_19148 && cloudTimeAsInt < Global_262145.f_19245)
			num = 0;
	else if (hParam0 == -482719877)
		if (!Global_262145.f_19149 && cloudTimeAsInt < Global_262145.f_19246)
			num = 0;
	else if (hParam0 == 1034187331)
		if (!Global_262145.f_19150 && cloudTimeAsInt < Global_262145.f_19247)
			num = 0;
	else if (hParam0 == 1093792632)
		if (!Global_262145.f_19151 && cloudTimeAsInt < Global_262145.f_19248)
			num = 0;
	else if (hParam0 == -1758137366)
		if (!Global_262145.f_19152 && cloudTimeAsInt < Global_262145.f_19249)
			num = 0;
	else if (hParam0 == 1886268224)
		if (!Global_262145.f_19153 && cloudTimeAsInt < Global_262145.f_19250)
			num = 0;
	else if (hParam0 == 1074745671)
		if (!Global_262145.f_19154 && cloudTimeAsInt < Global_262145.f_19251)
			num = 0;
	else if (hParam0 == 272929391)
		if (!Global_262145.f_19155 && cloudTimeAsInt < Global_262145.f_19252)
			num = 0;

	if (hParam0 == 1234311532)
		if (!Global_262145.f_20212 && cloudTimeAsInt < Global_262145.f_20208)
			num = 0;
	else if (hParam0 == -1405937764)
		if (!Global_262145.f_20213 && cloudTimeAsInt < Global_262145.f_20209)
			num = 0;
	else if (hParam0 == 719660200)
		if (!Global_262145.f_20214 && cloudTimeAsInt < Global_262145.f_20210)
			num = 0;
	else if (hParam0 == -982130927)
		if (!Global_262145.f_20215 && cloudTimeAsInt < Global_262145.f_20211)
			num = 0;

	if (hParam0 == 917809321)
		if (!Global_262145.f_21094 && cloudTimeAsInt < Global_262145.f_21102)
			num = 0;
	else if (hParam0 == 223240013)
		if (!Global_262145.f_21095 && cloudTimeAsInt < Global_262145.f_21103)
			num = 0;
	else if (hParam0 == 1504306544)
		if (!Global_262145.f_21096 && cloudTimeAsInt < Global_262145.f_21104)
			num = 0;
	else if (hParam0 == 1939284556)
		if (!Global_262145.f_21097 && cloudTimeAsInt < Global_262145.f_21105)
			num = 0;
	else if (hParam0 == 159274291)
		if (!Global_262145.f_21098 && cloudTimeAsInt < Global_262145.f_21106)
			num = 0;
	else if (hParam0 == 433954513)
		if (!Global_262145.f_21099 && cloudTimeAsInt < Global_262145.f_21107)
			num = 0;

	if (hParam0 == -1763555241)
		if (!Global_262145.f_21893 && cloudTimeAsInt < Global_262145.f_21913)
			num = 0;
	else if (hParam0 == -749299473)
		if (!Global_262145.f_21905 && cloudTimeAsInt < Global_262145.f_21925)
			num = 0;
	else if (hParam0 == -975345305)
		if (!Global_262145.f_21896 && cloudTimeAsInt < Global_262145.f_21916)
			num = 0;
	else if (hParam0 == -1700874274)
		if (!Global_262145.f_21906 && cloudTimeAsInt < Global_262145.f_21926)
			num = 0;
	else if (hParam0 == -392675425)
		if (!Global_262145.f_21894 && cloudTimeAsInt < Global_262145.f_21914)
			num = 0;
	else if (hParam0 == 1043222410)
		if (!Global_262145.f_21910 && cloudTimeAsInt < Global_262145.f_21930)
			num = 0;
	else if (hParam0 == -1386191424)
		if (!Global_262145.f_21908 && cloudTimeAsInt < Global_262145.f_21928)
			num = 0;
	else if (hParam0 == 1565978651)
		if (!Global_262145.f_21909 && cloudTimeAsInt < Global_262145.f_21929)
			num = 0;
	else if (hParam0 == 1036591958)
		if (!Global_262145.f_21904 && cloudTimeAsInt < Global_262145.f_21924)
			num = 0;
	else if (hParam0 == -32878452)
		if (!Global_262145.f_21911 && cloudTimeAsInt < Global_262145.f_21931)
			num = 0;
	else if (hParam0 == -42959138)
		if (!Global_262145.f_21907 && cloudTimeAsInt < Global_262145.f_21927)
			num = 0;
	else if (hParam0 == -1984275979)
		if (!Global_262145.f_21903 && cloudTimeAsInt < Global_262145.f_21923)
			num = 0;
	else if (hParam0 == -1007528109)
		if (!Global_262145.f_21895 && cloudTimeAsInt < Global_262145.f_21915)
			num = 0;
	else if (hParam0 == -1523619738)
		if (!Global_262145.f_21897 && cloudTimeAsInt < Global_262145.f_21917)
			num = 0;
	else if (hParam0 == 1392481335)
		if (!Global_262145.f_21898 && cloudTimeAsInt < Global_262145.f_21918)
			num = 0;
	else if (hParam0 == -998177792)
		if (!Global_262145.f_21899 && cloudTimeAsInt < Global_262145.f_21919)
			num = 0;
	else if (hParam0 == -1242608589)
		if (!Global_262145.f_21900 && cloudTimeAsInt < Global_262145.f_21920)
			num = 0;
	else if (hParam0 == 1841130506)
		if (!Global_262145.f_21901 && cloudTimeAsInt < Global_262145.f_21921)
			num = 0;
	else if (hParam0 == 2049897956)
		if (!Global_262145.f_21902 && cloudTimeAsInt < Global_262145.f_21922)
			num = 0;

	if (hParam0 == 1483171323)
		if (!Global_262145.f_22861 && cloudTimeAsInt < Global_262145.f_22889)
			num = 0;
	else if (hParam0 == 886810209)
		if (!Global_262145.f_22862 && cloudTimeAsInt < Global_262145.f_22890)
			num = 0;
	else if (hParam0 == -1693015116)
		if (!Global_262145.f_22863 && cloudTimeAsInt < Global_262145.f_22891)
			num = 0;
	else if (hParam0 == -692292317)
		if (!Global_262145.f_22864 && cloudTimeAsInt < Global_262145.f_22892)
			num = 0;
	else if (hParam0 == -1435527158)
		if (!Global_262145.f_22865 && cloudTimeAsInt < Global_262145.f_22893)
			num = 0;
	else if (hParam0 == 1181327175)
		if (!Global_262145.f_22866 && cloudTimeAsInt < Global_262145.f_22894)
			num = 0;
	else if (hParam0 == 1489874736)
		if (!Global_262145.f_22867 && cloudTimeAsInt < Global_262145.f_22895)
			num = 0;
	else if (hParam0 == -212993243)
		if (!Global_262145.f_22868 && cloudTimeAsInt < Global_262145.f_22896)
			num = 0;
	else if (hParam0 == 447548909)
		if (!Global_262145.f_22869 && cloudTimeAsInt < Global_262145.f_22897)
			num = 0;
	else if (hParam0 == 1561920505)
		if (!Global_262145.f_22870 && cloudTimeAsInt < Global_262145.f_22898)
			num = 0;
	else if (hParam0 == -1848994066)
		if (!Global_262145.f_22871 && cloudTimeAsInt < Global_262145.f_22899)
			num = 0;
	else if (hParam0 == 1741861769)
		if (!Global_262145.f_22872 && cloudTimeAsInt < Global_262145.f_22900)
			num = 0;
	else if (hParam0 == 1104234922)
		if (!Global_262145.f_22873 && cloudTimeAsInt < Global_262145.f_22901)
			num = 0;
	else if (hParam0 == 1871995513)
		if (!Global_262145.f_22874 && cloudTimeAsInt < Global_262145.f_22902)
			num = 0;
	else if (hParam0 == 1352136073)
		if (!Global_262145.f_22875 && cloudTimeAsInt < Global_262145.f_22903)
			num = 0;
	else if (hParam0 == -313185164)
		if (!Global_262145.f_22876 && cloudTimeAsInt < Global_262145.f_22904)
			num = 0;
	else if (hParam0 == -2079788230)
		if (!Global_262145.f_22877 && cloudTimeAsInt < Global_262145.f_22905)
			num = 0;
	else if (hParam0 == 600450546)
		if (!Global_262145.f_22878 && cloudTimeAsInt < Global_262145.f_22906)
			num = 0;
	else if (hParam0 == -410205223)
		if (!Global_262145.f_22879 && cloudTimeAsInt < Global_262145.f_22907)
			num = 0;
	else if (hParam0 == 867799010)
		if (!Global_262145.f_22880 && cloudTimeAsInt < Global_262145.f_22908)
			num = 0;
	else if (hParam0 == -1529242755)
		if (!Global_262145.f_22881 && cloudTimeAsInt < Global_262145.f_22909)
			num = 0;
	else if (hParam0 == 903794909)
		if (!Global_262145.f_22882 && cloudTimeAsInt < Global_262145.f_22910)
			num = 0;
	else if (hParam0 == -1532697517)
		if (!Global_262145.f_22883 && cloudTimeAsInt < Global_262145.f_22911)
			num = 0;
	else if (hParam0 == 15219735)
		if (!Global_262145.f_22884 && cloudTimeAsInt < Global_262145.f_22912)
			num = 0;
	else if (hParam0 == 661493923)
		if (!Global_262145.f_22885 && cloudTimeAsInt < Global_262145.f_22913)
			num = 0;
	else if (hParam0 == 838982985)
		if (!Global_262145.f_22886 && cloudTimeAsInt < Global_262145.f_22914)
			num = 0;
	else if (hParam0 == -391595372)
		if (!Global_262145.f_22887 && cloudTimeAsInt < Global_262145.f_22915)
			num = 0;
	else if (hParam0 == -121446169)
		if (!Global_262145.f_22888 && cloudTimeAsInt < Global_262145.f_22916)
			num = 0;

	if (hParam0 == 1909189272)
		if (!Global_262145.f_24081 && cloudTimeAsInt < Global_262145.f_24097)
			num = 0;
	else if (hParam0 == 1617472902)
		if (!Global_262145.f_24082 && cloudTimeAsInt < Global_262145.f_24098)
			num = 0;
	else if (hParam0 == -1267543371)
		if (!Global_262145.f_24086 && cloudTimeAsInt < Global_262145.f_24102)
			num = 0;
	else if (hParam0 == 931280609)
		if (!Global_262145.f_24089 && cloudTimeAsInt < Global_262145.f_24105)
			num = 0;
	else if (hParam0 == 1046206681)
		if (!Global_262145.f_24094 && cloudTimeAsInt < Global_262145.f_24110)
			num = 0;
	else if (hParam0 == -1259134696)
		if (!Global_262145.f_24088 && cloudTimeAsInt < Global_262145.f_24104)
			num = 0;
	else if (hParam0 == 1115909093)
		if (!Global_262145.f_24080 && cloudTimeAsInt < Global_262145.f_24096)
			num = 0;
	else if (hParam0 == 1031562256)
		if (!Global_262145.f_24087 && cloudTimeAsInt < Global_262145.f_24103)
			num = 0;
	else if (hParam0 == -376434238)
		if (!Global_262145.f_24093 && cloudTimeAsInt < Global_262145.f_24109)
			num = 0;
	else if (hParam0 == -986944621)
		if (!Global_262145.f_24092 && cloudTimeAsInt < Global_262145.f_24108)
			num = 0;
	else if (hParam0 == -1134706562)
		if (!Global_262145.f_24083 && cloudTimeAsInt < Global_262145.f_24099)
			num = 0;
	else if (hParam0 == -2120700196)
		if (!Global_262145.f_24085 && cloudTimeAsInt < Global_262145.f_24101)
			num = 0;
	else if (hParam0 == -214906006)
		if (!Global_262145.f_24095 && cloudTimeAsInt < Global_262145.f_24111)
			num = 0;
	else if (hParam0 == -988501280)
		if (!Global_262145.f_24091 && cloudTimeAsInt < Global_262145.f_24107)
			num = 0;
	else if (hParam0 == 1254014755)
		if (!Global_262145.f_24084 && cloudTimeAsInt < Global_262145.f_24100)
			num = 0;
	else if (hParam0 == -726768679)
		if (!Global_262145.f_24090 && cloudTimeAsInt < Global_262145.f_24106)
			num = 0;

	if (hParam0 == -1988428699)
		if (!Global_262145.f_24171 && cloudTimeAsInt < Global_262145.f_24158)
			num = 0;
	else if (hParam0 == 345756458)
		if (!Global_262145.f_24172 && cloudTimeAsInt < Global_262145.f_24159)
			num = 0;
	else if (hParam0 == 1945374990)
		if (!Global_262145.f_24177 && cloudTimeAsInt < Global_262145.f_24164)
			num = 0;
	else if (hParam0 == 1653666139)
		if (!Global_262145.f_24176 && cloudTimeAsInt < Global_262145.f_24163)
			num = 0;
	else if (hParam0 == 500482303)
		if (!Global_262145.f_24174 && cloudTimeAsInt < Global_262145.f_24161)
			num = 0;
	else if (hParam0 == 2044532910)
		if (!Global_262145.f_24180 && cloudTimeAsInt < Global_262145.f_24167)
			num = 0;
	else if (hParam0 == -638562243)
		if (!Global_262145.f_24182 && cloudTimeAsInt < Global_262145.f_24169)
			num = 0;
	else if (hParam0 == 1692272545)
		if (!Global_262145.f_24183 && cloudTimeAsInt < Global_262145.f_24170)
			num = 0;
	else if (hParam0 == 2069146067)
		if (!Global_262145.f_24181 && cloudTimeAsInt < Global_262145.f_24168)
			num = 0;
	else if (hParam0 == -420911112)
		if (!Global_262145.f_24173 && cloudTimeAsInt < Global_262145.f_24160)
			num = 0;
	else if (hParam0 == 321186144)
		if (!Global_262145.f_24175 && cloudTimeAsInt < Global_262145.f_24162)
			num = 0;
	else if (hParam0 == -54332285)
		if (!Global_262145.f_24179 && cloudTimeAsInt < Global_262145.f_24166)
			num = 0;
	else if (hParam0 == -307958377)
		if (!Global_262145.f_24178 && cloudTimeAsInt < Global_262145.f_24165)
			num = 0;

	if (hParam0 == 1721676810)
	{
	}
	else if (hParam0 == -801550069)
	{
	}
	else if (hParam0 == 679453769)
	{
	}
	else if (hParam0 == 1909700336)
	{
	}
	else if (hParam0 == 2139203625)
	{
	}
	else if (hParam0 == -1890996696)
	{
	}
	else if (hParam0 == 2038858402)
	{
	}
	else if (hParam0 == -1146969353)
	{
	}
	else if (hParam0 == 1542143200)
	{
	}
	else if (hParam0 == -579747861)
	{
	}
	else if (hParam0 == 444994115)
	{
	}
	else if (hParam0 == 1637620610)
	{
	}
	else if (hParam0 == -755532233)
	{
	}
	else if (hParam0 == 540101442)
	{
	}
	else if (hParam0 == -1106120762)
	{
	}
	else if (hParam0 == -1478704292)
	{
	}
	else if (hParam0 == -2096690334)
	{
	}
	else if (hParam0 == 1591739866)
	{
		if (!Global_262145.f_26768 && cloudTimeAsInt < Global_262145.f_26770)
			num = 0;
	}
	else if (hParam0 == -1168952148)
	{
		if (!Global_262145.f_25781 && cloudTimeAsInt < Global_262145.f_25774)
			num = 0;
	}
	else if (hParam0 == -1566607184)
	{
		if (!Global_262145.f_25782 && cloudTimeAsInt < Global_262145.f_25775)
			num = 0;
	}
	else if (hParam0 == -331467772)
	{
		if (!Global_262145.f_25783 && cloudTimeAsInt < Global_262145.f_25776)
			num = 0;
	}
	else if (hParam0 == 1279262537)
	{
		if (!Global_262145.f_25784 && cloudTimeAsInt < Global_262145.f_25777)
			num = 0;
	}
	else if (hParam0 == -49115651)
	{
		if (!Global_262145.f_26769 && cloudTimeAsInt < Global_262145.f_26771)
			num = 0;
	}
	else if (hParam0 == 1456744817)
	{
		if (!Global_262145.f_25785 && cloudTimeAsInt < Global_262145.f_25778)
			num = 0;
	}
	else if (hParam0 == -507495760)
	{
		if (!Global_262145.f_25786 && cloudTimeAsInt < Global_262145.f_25779)
			num = 0;
	}
	else if (hParam0 == -286046740)
	{
		if (!Global_262145.f_25787 && cloudTimeAsInt < Global_262145.f_25780)
			num = 0;
	}
	else if (hParam0 == 1044193113)
	{
		if (!Global_262145.f_25792 && cloudTimeAsInt < Global_262145.f_25813)
			num = 0;
	}
	else if (hParam0 == 686471183)
	{
		if (!Global_262145.f_25793 && cloudTimeAsInt < Global_262145.f_25814)
			num = 0;
	}
	else if (hParam0 == -941272559)
	{
		if (!Global_262145.f_25794 && cloudTimeAsInt < Global_262145.f_25815)
			num = 0;
	}
	else if (hParam0 == -1829436850)
	{
		if (!Global_262145.f_25795 && cloudTimeAsInt < Global_262145.f_25816)
			num = 0;
	}
	else if (hParam0 == -682108547)
	{
		if (!Global_262145.f_25796 && cloudTimeAsInt < Global_262145.f_25817)
			num = 0;
	}
	else if (hParam0 == 722226637)
	{
		if (!Global_262145.f_25797 && cloudTimeAsInt < Global_262145.f_25818)
			num = 0;
	}
	else if (hParam0 == 1854776567)
	{
		if (!Global_262145.f_25798 && cloudTimeAsInt < Global_262145.f_25819)
			num = 0;
	}
	else if (hParam0 == 1862507111)
	{
		if (!Global_262145.f_25799 && cloudTimeAsInt < Global_262145.f_25820)
			num = 0;
	}
	else if (hParam0 == -882629065)
	{
		if (!Global_262145.f_25800 && cloudTimeAsInt < Global_262145.f_25821)
			num = 0;
	}
	else if (hParam0 == -362150785)
	{
		if (!Global_262145.f_25801 && cloudTimeAsInt < Global_262145.f_25822)
			num = 0;
	}
	else if (hParam0 == 310284501)
	{
		if (!Global_262145.f_25802 && cloudTimeAsInt < Global_262145.f_25823)
			num = 0;
	}
	else if (hParam0 == 916547552)
	{
		if (!Global_262145.f_25803 && cloudTimeAsInt < Global_262145.f_25824)
			num = 0;
	}
	else if (hParam0 == -1804415708)
	{
		if (!Global_262145.f_25804 && cloudTimeAsInt < Global_262145.f_25825)
			num = 0;
	}
	else if (hParam0 == 1934384720)
	{
		if (!Global_262145.f_25805 && cloudTimeAsInt < Global_262145.f_25826)
			num = 0;
	}
	else if (hParam0 == -1349095620)
	{
		if (!Global_262145.f_25806 && cloudTimeAsInt < Global_262145.f_25827)
			num = 0;
	}
	else if (hParam0 == -208911803)
	{
		if (!Global_262145.f_25807 && cloudTimeAsInt < Global_262145.f_25828)
			num = 0;
	}
	else if (hParam0 == -324618589)
	{
		if (!Global_262145.f_25808 && cloudTimeAsInt < Global_262145.f_25829)
			num = 0;
	}
	else if (hParam0 == -664141241)
	{
		if (!Global_262145.f_25809 && cloudTimeAsInt < Global_262145.f_25830)
			num = 0;
	}
	else if (hParam0 == 1323778901)
	{
		if (!Global_262145.f_25810 && cloudTimeAsInt < Global_262145.f_25831)
			num = 0;
	}
	else if (hParam0 == -1620126302)
	{
		if (!Global_262145.f_25811 && cloudTimeAsInt < Global_262145.f_25832)
			num = 0;
	}
	else if (hParam0 == -447711397)
	{
		if (!Global_262145.f_25812 && cloudTimeAsInt < Global_262145.f_25833)
			num = 0;
	}
	else if (hParam0 == 1118611807)
	{
		if (!Global_262145.f_28613 && cloudTimeAsInt < Global_262145.f_28634)
			num = 0;
	}
	else if (hParam0 == 409049982)
	{
		if (!Global_262145.f_28614 && cloudTimeAsInt < Global_262145.f_28635)
			num = 0;
	}
	else if (hParam0 == -1756021720)
	{
		if (!Global_262145.f_28615 && cloudTimeAsInt < Global_262145.f_28636)
			num = 0;
	}
	else if (hParam0 == 2031587082)
	{
		if (!Global_262145.f_28616 && cloudTimeAsInt < Global_262145.f_28637)
			num = 0;
	}
	else if (hParam0 == 1693751655)
	{
		if (!Global_262145.f_28617 && cloudTimeAsInt < Global_262145.f_28638)
			num = 0;
	}
	else if (hParam0 == 987469656)
	{
		if (!Global_262145.f_28618 && cloudTimeAsInt < Global_262145.f_28639)
			num = 0;
	}
	else if (hParam0 == 872704284)
	{
		if (!Global_262145.f_28619 && cloudTimeAsInt < Global_262145.f_28640)
			num = 0;
	}
	else if (hParam0 == 408825843)
	{
		if (!Global_262145.f_28620 && cloudTimeAsInt < Global_262145.f_28641)
			num = 0;
	}
	else if (hParam0 == 740289177)
	{
		if (!Global_262145.f_28621 && cloudTimeAsInt < Global_262145.f_28642)
			num = 0;
	}
	else if (hParam0 == -834353991)
	{
		if (!Global_262145.f_28622 && cloudTimeAsInt < Global_262145.f_28643)
			num = 0;
	}
	else if (hParam0 == 301304410)
	{
		if (!Global_262145.f_28623 && cloudTimeAsInt < Global_262145.f_28644)
			num = 0;
	}
	else if (hParam0 == 960812448)
	{
		if (!Global_262145.f_28624 && cloudTimeAsInt < Global_262145.f_28645)
			num = 0;
	}
	else if (hParam0 == 1284356689)
	{
		if (!Global_262145.f_28625 && cloudTimeAsInt < Global_262145.f_28646)
			num = 0;
	}
	else if (hParam0 == 394110044)
	{
		if (!Global_262145.f_28626 && cloudTimeAsInt < Global_262145.f_28647)
			num = 0;
	}
	else if (hParam0 == 1938952078)
	{
		if (!Global_262145.f_28627 && cloudTimeAsInt < Global_262145.f_28648)
			num = 0;
	}
	else if (hParam0 == -907477130)
	{
		if (!Global_262145.f_28628 && cloudTimeAsInt < Global_262145.f_28649)
			num = 0;
	}
	else if (hParam0 == -1987130134)
	{
		if (!Global_262145.f_28629 && cloudTimeAsInt < Global_262145.f_28650)
			num = 0;
	}
	else if (hParam0 == 1747439474)
	{
		if (!Global_262145.f_28630 && cloudTimeAsInt < Global_262145.f_28651)
			num = 0;
	}
	else if (hParam0 == -1254331310)
	{
		if (!Global_262145.f_28631 && cloudTimeAsInt < Global_262145.f_28652)
			num = 0;
	}
	else if (hParam0 == 469291905)
	{
		if (!Global_262145.f_28632 && cloudTimeAsInt < Global_262145.f_28653)
			num = 0;
	}
	else if (hParam0 == -48031959)
	{
		if (!Global_262145.f_28633 && cloudTimeAsInt < Global_262145.f_28654)
			num = 0;
	}
	else if (hParam0 == 340154634)
	{
		if (!Global_262145.f_28656 && cloudTimeAsInt < Global_262145.f_28657 && !Global_262145.f_28611)
			num = 0;
	}
	else if (hParam0 == -1960756985)
	{
		if (!Global_262145.f_28659 && cloudTimeAsInt < Global_262145.f_28660 && !Global_262145.f_28612)
			num = 0;
	}
	else if (hParam0 == -1132721664)
	{
		if (!Global_262145.f_28664 && cloudTimeAsInt < Global_262145.f_28667)
			num = 0;
	}
	else if (hParam0 == 83136452)
	{
		if (!Global_262145.f_28665 && cloudTimeAsInt < Global_262145.f_28668)
			num = 0;
	}
	else if (hParam0 == 1456336509)
	{
		if (!Global_262145.f_28666 && cloudTimeAsInt < Global_262145.f_28669)
			num = 0;
	}
	else if (hParam0 == -2122646867)
	{
		if (!Global_262145.f_29682 && cloudTimeAsInt < Global_262145.f_29347)
			num = 0;
	}
	else if (hParam0 == -2098954619)
	{
		if (!Global_262145.f_29333 && cloudTimeAsInt < Global_262145.f_29354)
			num = 0;
	}
	else if (hParam0 == 2134119907)
	{
		if (!Global_262145.f_29334 && cloudTimeAsInt < Global_262145.f_29340)
			num = 0;
	}
	else if (hParam0 == 67753863)
	{
		if (!Global_262145.f_29680 && cloudTimeAsInt < Global_262145.f_29348)
			num = 0;
	}
	else if (hParam0 == 1107404867)
	{
		if (!Global_262145.f_29681 && cloudTimeAsInt < Global_262145.f_29349)
			num = 0;
	}
	else if (hParam0 == -913589546)
	{
		if (!Global_262145.f_29327 && cloudTimeAsInt < Global_262145.f_29346)
			num = 0;
	}
	else if (hParam0 == -631322662)
	{
		if (!Global_262145.f_29328 && cloudTimeAsInt < Global_262145.f_29355)
			num = 0;
	}
	else if (hParam0 == -838099166)
	{
		if (!Global_262145.f_29329 && cloudTimeAsInt < Global_262145.f_29345)
			num = 0;
	}
	else if (hParam0 == -1810806490)
	{
		if (!Global_262145.f_29330 && cloudTimeAsInt < Global_262145.f_29343)
			num = 0;
	}
	else if (hParam0 == -1358197432)
	{
		if (!Global_262145.f_29676 && cloudTimeAsInt < Global_262145.f_29350)
			num = 0;
	}
	else if (hParam0 == 1492612435)
	{
		if (!Global_262145.f_29677 && cloudTimeAsInt < Global_262145.f_29351)
			num = 0;
	}
	else if (hParam0 == 1181339704)
	{
		if (!Global_262145.f_29678 && cloudTimeAsInt < Global_262145.f_29352)
			num = 0;
	}
	else if (hParam0 == -1728685474)
	{
		if (!Global_262145.f_29679 && cloudTimeAsInt < Global_262145.f_29353)
			num = 0;
	}
	else if (hParam0 == 1717532765)
	{
		if (!Global_262145.f_29331 && cloudTimeAsInt < Global_262145.f_29342)
			num = 0;
	}
	else if (hParam0 == 1802742206)
	{
		if (!Global_262145.f_29332 && cloudTimeAsInt < Global_262145.f_29344)
			num = 0;
	}
	else if (hParam0 == 1455990255)
	{
		if (!Global_262145.f_30141 && cloudTimeAsInt < Global_262145.f_30124)
			num = 0;
	}
	else if (hParam0 == 295054921)
	{
		if (!Global_262145.f_30142 && cloudTimeAsInt < Global_262145.f_30125)
			num = 0;
	}
	else if (hParam0 == -365873403)
	{
		if (!Global_262145.f_30143 && cloudTimeAsInt < Global_262145.f_30126)
			num = 0;
	}
	else if (hParam0 == -276744698)
	{
		if (!Global_262145.f_30144 && cloudTimeAsInt < Global_262145.f_30127)
			num = 0;
	}
	else if (hParam0 == 1861786828)
	{
		if (!Global_262145.f_30145 && cloudTimeAsInt < Global_262145.f_30128)
			num = 0;
	}
	else if (hParam0 == -210308634)
	{
		if (!Global_262145.f_30146 && cloudTimeAsInt < Global_262145.f_30129)
			num = 0;
	}
	else if (hParam0 == -857356038)
	{
		if (!Global_262145.f_30147 && cloudTimeAsInt < Global_262145.f_30130)
			num = 0;
	}
	else if (hParam0 == -1492917079)
	{
		if (!Global_262145.f_30148 && cloudTimeAsInt < Global_262145.f_30131)
			num = 0;
	}
	else if (hParam0 == -1149725334)
	{
		if (!Global_262145.f_30149 && cloudTimeAsInt < Global_262145.f_30132)
			num = 0;
	}
	else if (hParam0 == 1644055914)
	{
		if (Global_262145.f_30158)
		{
		}
		else if (!Global_262145.f_30150 && cloudTimeAsInt < Global_262145.f_30133)
		{
			num = 0;
		}
	}
	else if (hParam0 == 1086534307)
	{
		if (!Global_262145.f_30151 && cloudTimeAsInt < Global_262145.f_30134)
			num = 0;
	}
	else if (hParam0 == -1045911276)
	{
		if (!Global_262145.f_30152 && cloudTimeAsInt < Global_262145.f_30135)
			num = 0;
	}
	else if (hParam0 == 2014313426)
	{
		if (!Global_262145.f_30153 && cloudTimeAsInt < Global_262145.f_30136)
			num = 0;
	}
	else if (hParam0 == -102335483)
	{
		if (!Global_262145.f_30154 && cloudTimeAsInt < Global_262145.f_30137)
			num = 0;
	}
	else if (hParam0 == 1429622905)
	{
		if (Global_262145.f_30159)
		{
		}
		else if (!Global_262145.f_30155 && cloudTimeAsInt < Global_262145.f_30138)
		{
			num = 0;
		}
	}
	else if (hParam0 == -980573366)
	{
		if (!Global_262145.f_30156 && cloudTimeAsInt < Global_262145.f_30139)
			num = 0;
	}
	else if (hParam0 == 298565713)
	{
		if (!Global_262145.f_30157 && cloudTimeAsInt < Global_262145.f_30140)
			num = 0;
	}
	else if (hParam0 == -1244461404)
	{
		if (!Global_262145.f_31009 && cloudTimeAsInt < Global_262145.f_30992)
			num = 0;
	}
	else if (hParam0 == 2038480341)
	{
		if (!Global_262145.f_31010 && cloudTimeAsInt < Global_262145.f_30993)
			num = 0;
	}
	else if (hParam0 == -291021213)
	{
		if (!Global_262145.f_31011 && cloudTimeAsInt < Global_262145.f_30994)
			num = 0;
	}
	else if (hParam0 == -452604007)
	{
		if (!Global_262145.f_31012 && cloudTimeAsInt < Global_262145.f_30995)
			num = 0;
	}
	else if (hParam0 == -1540373595)
	{
		if (!Global_262145.f_31013 && cloudTimeAsInt < Global_262145.f_30996)
			num = 0;
	}
	else if (hParam0 == -1858654120)
	{
		if (!Global_262145.f_31014 && cloudTimeAsInt < Global_262145.f_30997)
			num = 0;
	}
	else if (hParam0 == 579912970)
	{
		if (!Global_262145.f_31015 && cloudTimeAsInt < Global_262145.f_30998)
			num = 0;
	}
	else if (hParam0 == -1193912403)
	{
		if (!Global_262145.f_31016 && cloudTimeAsInt < Global_262145.f_30999)
			num = 0;
	}
	else if (hParam0 == 1377217886)
	{
		if (!Global_262145.f_31017 && cloudTimeAsInt < Global_262145.f_31000)
			num = 0;
	}
	else if (hParam0 == 1755697647)
	{
		if (!Global_262145.f_31018 && cloudTimeAsInt < Global_262145.f_31001)
			num = 0;
	}
	else if (hParam0 == 426742808)
	{
		if (!Global_262145.f_31019 && cloudTimeAsInt < Global_262145.f_31002)
			num = 0;
	}
	else if (hParam0 == -1582061455)
	{
		if (!Global_262145.f_31020 && cloudTimeAsInt < Global_262145.f_31003)
			num = 0;
	}
	else if (hParam0 == -1507230520)
	{
		if (!Global_262145.f_31021 && cloudTimeAsInt < Global_262145.f_31004)
			num = 0;
	}
	else if (hParam0 == 736672010)
	{
		if (!Global_262145.f_31022 && cloudTimeAsInt < Global_262145.f_31005)
			num = 0;
	}
	else if (hParam0 == 1416471345)
	{
		if (!Global_262145.f_31023 && cloudTimeAsInt < Global_262145.f_31006)
			num = 0;
	}
	else if (hParam0 == 1304459735)
	{
		if (!Global_262145.f_31024 && cloudTimeAsInt < Global_262145.f_31007)
			num = 0;
	}
	else if (hParam0 == -1726022652)
	{
		if (!Global_262145.f_31025 && cloudTimeAsInt < Global_262145.f_31008)
			num = 0;
	}
	else if (hParam0 == -915234475)
	{
		if (!Global_262145.f_31889 && cloudTimeAsInt < Global_262145.f_31874)
			num = 0;
	}
	else if (hParam0 == -619930876)
	{
		if (!Global_262145.f_31890 && cloudTimeAsInt < Global_262145.f_31875)
			num = 0;
	}
	else if (hParam0 == 1532171089)
	{
		if (!Global_262145.f_31891 && cloudTimeAsInt < Global_262145.f_31876)
			num = 0;
	}
	else if (hParam0 == 461465043)
	{
		if (!Global_262145.f_31892 && cloudTimeAsInt < Global_262145.f_31877)
			num = 0;
	}
	else if (hParam0 == -1444114309)
	{
		if (!Global_262145.f_31893 && cloudTimeAsInt < Global_262145.f_31878)
			num = 0;
	}
	else if (hParam0 == -1527436269)
	{
		if (!Global_262145.f_31894 && cloudTimeAsInt < Global_262145.f_31879)
			num = 0;
	}
	else if (hParam0 == 629969764)
	{
		if (!Global_262145.f_31895 && cloudTimeAsInt < Global_262145.f_31880)
			num = 0;
	}
	else if (hParam0 == 1141395928)
	{
		if (!Global_262145.f_31896 && cloudTimeAsInt < Global_262145.f_31881)
			num = 0;
	}
	else if (hParam0 == 655665811)
	{
		if (!Global_262145.f_31897 && cloudTimeAsInt < Global_262145.f_31882)
			num = 0;
	}
	else if (hParam0 == 1993851908)
	{
		if (!Global_262145.f_31898 && cloudTimeAsInt < Global_262145.f_31883)
			num = 0;
	}
	else if (hParam0 == 662793086)
	{
		if (!Global_262145.f_31899 && cloudTimeAsInt < Global_262145.f_31884)
			num = 0;
	}
	else if (hParam0 == -261346873)
	{
		if (!Global_262145.f_31900 && cloudTimeAsInt < Global_262145.f_31885)
			num = 0;
	}
	else if (hParam0 == -670086588)
	{
		if (!Global_262145.f_31901 && cloudTimeAsInt < Global_262145.f_31886)
			num = 0;
	}
	else if (hParam0 == 1353120668)
	{
		if (!Global_262145.f_31902 && cloudTimeAsInt < Global_262145.f_31887)
			num = 0;
	}
	else if (hParam0 == 359875117)
	{
		if (Global_262145.f_31967)
		{
		}
		else if (!Global_262145.f_31903 && cloudTimeAsInt < Global_262145.f_31888)
		{
			num = 0;
		}
	}
	else if (hParam0 == 15214558)
	{
		if (!*Global_262145.f_33131 && cloudTimeAsInt < *Global_262145.f_33112)
			num = 0;
	}
	else if (hParam0 == -754687673)
	{
		if (!*Global_262145.f_33125 && cloudTimeAsInt < *Global_262145.f_33106)
			num = 0;
	}
	else if (hParam0 == -768236378)
	{
		if (!*Global_262145.f_33129 && cloudTimeAsInt < *Global_262145.f_33110)
			num = 0;
	}
	else if (hParam0 == 40817712)
	{
		if (!*Global_262145.f_33123 && cloudTimeAsInt < *Global_262145.f_33104)
			num = 0;
	}
	else if (hParam0 == -64075878)
	{
		if (!*Global_262145.f_33134 && cloudTimeAsInt < *Global_262145.f_33115)
			num = 0;
	}
	else if (hParam0 == -10917683)
	{
		if (!*Global_262145.f_33126 && cloudTimeAsInt < *Global_262145.f_33107)
			num = 0;
	}
	else if (hParam0 == -294678663)
	{
		if (!*Global_262145.f_33135 && cloudTimeAsInt < *Global_262145.f_33116)
			num = 0;
	}
	else if (hParam0 == -1855505138)
	{
		if (!*Global_262145.f_33137 && cloudTimeAsInt < *Global_262145.f_33118)
			num = 0;
	}
	else if (hParam0 == 775514032)
	{
		if (!*Global_262145.f_33128 && cloudTimeAsInt < *Global_262145.f_33109)
			num = 0;
	}
	else if (hParam0 == -893984159)
	{
		if (!*Global_262145.f_33136 && cloudTimeAsInt < *Global_262145.f_33117)
			num = 0;
	}
	else if (hParam0 == 274946574)
	{
		if (!*Global_262145.f_33139 && cloudTimeAsInt < *Global_262145.f_33120)
			num = 0;
	}
	else if (hParam0 == -165394758)
	{
		if (!*Global_262145.f_33124 && cloudTimeAsInt < *Global_262145.f_33105)
			num = 0;
	}
	else if (hParam0 == -1758379524)
	{
		if (!*Global_262145.f_33132 && cloudTimeAsInt < *Global_262145.f_33113)
			num = 0;
	}
	else if (hParam0 == -994371320)
	{
		if (!*Global_262145.f_33138 && cloudTimeAsInt < *Global_262145.f_33119)
			num = 0;
	}
	else if (hParam0 == 1706945532)
	{
		if (!*Global_262145.f_33130 && cloudTimeAsInt < *Global_262145.f_33111)
			num = 0;
	}
	else if (hParam0 == -1356880839)
	{
		if (!*Global_262145.f_33140 && cloudTimeAsInt < *Global_262145.f_33121)
			num = 0;
	}
	else if (hParam0 == -477831899)
	{
		if (!*Global_262145.f_33127 && cloudTimeAsInt < *Global_262145.f_33108)
			num = 0;
	}
	else if (hParam0 == -505223465)
	{
		if (!*Global_262145.f_33122 && cloudTimeAsInt < *Global_262145.f_33103)
			num = 0;
	}
	else if (hParam0 == 1384502824)
	{
		if (!*Global_262145.f_33962 && cloudTimeAsInt < *Global_262145.f_33946)
			num = 0;
	}
	else if (hParam0 == -1576586413)
	{
		if (!*Global_262145.f_33962 && cloudTimeAsInt < *Global_262145.f_33946)
			num = 0;
	}
	else if (hParam0 == -1249788006)
	{
		if (!*Global_262145.f_33971 && cloudTimeAsInt < *Global_262145.f_33954)
			num = 0;
	}
	else if (hParam0 == -1386336041)
	{
		if (!*Global_262145.f_33965 && cloudTimeAsInt < *Global_262145.f_33949)
			num = 0;
	}
	else if (hParam0 == -1627077503)
	{
		if (!*Global_262145.f_33959 && cloudTimeAsInt < *Global_262145.f_33943)
			num = 0;
	}
	else if (hParam0 == -1035489563)
	{
		if (!*Global_262145.f_33960 && cloudTimeAsInt < *Global_262145.f_33944)
			num = 0;
	}
	else if (hParam0 == 1748565021)
	{
		if (!*Global_262145.f_33957 && cloudTimeAsInt < *Global_262145.f_33941)
			num = 0;
	}
	else if (hParam0 == 2100457220)
	{
		if (!*Global_262145.f_33968 && cloudTimeAsInt < *Global_262145.f_33952)
			num = 0;
	}
	else if (hParam0 == 996383885)
	{
		if (!*Global_262145.f_33972 && cloudTimeAsInt < *Global_262145.f_33956)
			num = 0;
	}
	else if (hParam0 == -131348178)
	{
		if (!*Global_262145.f_33969 && cloudTimeAsInt < *Global_262145.f_33953)
			num = 0;
	}
	else if (hParam0 == 268758436)
	{
		if (!*Global_262145.f_33958 && cloudTimeAsInt < *Global_262145.f_33942)
			num = 0;
	}
	else if (hParam0 == 1076201208)
	{
		if (!*Global_262145.f_33961 && cloudTimeAsInt < *Global_262145.f_33945)
			num = 0;
	}
	else if (hParam0 == 669204833)
	{
		if (!*Global_262145.f_33970 && cloudTimeAsInt < *Global_262145.f_33955)
			num = 0;
	}
	else if (hParam0 == 1550581940)
	{
		if (!*Global_262145.f_33966 && cloudTimeAsInt < *Global_262145.f_33950)
			num = 0;
	}
	else if (hParam0 == -1933242328)
	{
		if (!*Global_262145.f_33967 && cloudTimeAsInt < *Global_262145.f_33951)
			num = 0;
	}
	else if (hParam0 == -461850249)
	{
		if (!*Global_262145.f_33964 && cloudTimeAsInt < *Global_262145.f_33948)
			num = 0;
	}
	else if (hParam0 == -956048545)
	{
		if (!*Global_262145.f_33963 && cloudTimeAsInt < *Global_262145.f_33947)
			num = 0;
	}

	return num;
}

BOOL func_128() // Position - 0x9D12 Hash - 0x4C81F065 ^0x26D68D51
{
	return MISC::IS_ORBIS_VERSION() || unk_0xEE17703CF2C2875A();
}

BOOL func_129() // Position - 0x9D28 Hash - 0x4C81F065 ^0x60494CEC
{
	return MISC::IS_DURANGO_VERSION() || unk_0x14F62099DEBAEA33();
}

BOOL func_130() // Position - 0x9D3E Hash - 0x98B7EFDD ^0x98B7EFDD
{
	return false;
}

BOOL func_131() // Position - 0x9D47 Hash - 0xFD255207 ^0xFD255207
{
	return true;
}

BOOL func_132() // Position - 0x9D50 Hash - 0xFD255207 ^0xFD255207
{
	return true;
}

BOOL func_133() // Position - 0x9D59 Hash - 0x64659D79 ^0xC3C726F6
{
	if (DLC::IS_DLC_PRESENT(-1226939934))
		return true;

	return false;
}

BOOL func_134() // Position - 0x9D72 Hash - 0x44DD83CC ^0x6D2C8335
{
	int profileSetting;

	if (Global_152523 == 2)
		return true;
	else if (Global_152523 == 3)
		return false;

	if (NETWORK::NETWORK_HAS_VALID_ROS_CREDENTIALS())
	{
		if (unk_0x8BD41D5945F5762B())
		{
			if (NETWORK::NETWORK_HAS_ROS_PRIVILEGE_PLAYED_LAST_GEN())
			{
				STATS::STAT_GET_INT(1571103992, &profileSetting, -1);
				MISC::SET_BIT(&profileSetting, 2);
				MISC::SET_BIT(&profileSetting, 4);
				MISC::SET_BIT(&profileSetting, 6);
				MISC::SET_BIT(&Global_25, 2);
				MISC::SET_BIT(&Global_25, 4);
				MISC::SET_BIT(&Global_25, 6);
				STATS::STAT_SET_INT(1571103992, profileSetting, true);
			
				if (MISC::ARE_PROFILE_SETTINGS_VALID())
				{
					profileSetting = MISC::GET_PROFILE_SETTING(866);
					MISC::SET_BIT(&profileSetting, 0);
					STATS::SET_HAS_SPECIALEDITION_CONTENT(profileSetting);
				}
			
				return true;
			}
		}
	}

	if (MISC::ARE_PROFILE_SETTINGS_VALID())
		if (IS_BIT_SET(MISC::GET_PROFILE_SETTING(866), 0))
			return true;

	return false;
}

BOOL func_135(Vehicle veParam0) // Position - 0x9E2A Hash - 0xC71C0264 ^0x4A37C8B
{
	Hash entityModel;
	const char* vehicleNumberPlateText;

	entityModel = ENTITY::GET_ENTITY_MODEL(veParam0);
	vehicleNumberPlateText = VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(veParam0);

	if (entityModel == -810318068 && MISC::ARE_STRINGS_EQUAL(vehicleNumberPlateText, "LAMAR G "))
		return true;

	if (!func_124(entityModel, false, -1))
		return true;

	return false;
}

BOOL func_136(Vehicle veParam0) // Position - 0x9E71 Hash - 0xA5B9FC6B ^0x23EADD90
{
	int i;

	for (i = 0; i < 3; i = i + 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_98042[i]))
			if (Global_98042[i] == veParam0)
				return true;
	}

	return false;
}

BOOL func_137(Vehicle veParam0) // Position - 0x9EAC Hash - 0xB4CAAE6F ^0x153EF8BE
{
	int i;

	if (ENTITY::DOES_ENTITY_EXIST(veParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
	{
		for (i = 0; i < 9; i = i + 1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_98012[i]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_98012[i], false))
				if (Global_98012[i] == veParam0 && ENTITY::GET_ENTITY_MODEL(Global_98012[i]) == ENTITY::GET_ENTITY_MODEL(veParam0))
					return true;
		}
	}

	return false;
}

BOOL func_138(Vehicle veParam0) // Position - 0x9F28 Hash - 0x7BB181DF ^0x17C4552A
{
	int i;

	if (ENTITY::DOES_ENTITY_EXIST(Global_77348.f_484[24]))
		if (veParam0 == Global_77348.f_484[24])
			return false;

	for (i = 0; i < 68; i = i + 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_77348.f_484[i]))
			if (i != 24 && i != 21 && i != 22 && i != 23 && i != 27 && i != 30 && i != 33 && i != 28 && i != 31 && i != 34 && i != 26 && i != 29 && i != 32)
				if (veParam0 == Global_77348.f_484[i])
					return true;
	}

	return false;
}

int func_139(Vehicle veParam0) // Position - 0xA010 Hash - 0x593067C2 ^0x2918B7DD
{
	int i;

	if (!ENTITY::DOES_ENTITY_EXIST(veParam0))
		return 145;

	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
		return 145;

	for (i = 0; i < 9; i = i + 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_98012[i]))
			if (Global_98012[i] == veParam0)
				return Global_98022[i];
	}

	return 145;
}

BOOL func_140(Vehicle veParam0, int iParam1, BOOL bParam2) // Position - 0xA073 Hash - 0xBCC62924 ^0x77695844
{
	int i;
	var garageName;
	int unk;

	if (!ENTITY::DOES_ENTITY_EXIST(veParam0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
		return false;

	for (i = 0; func_141(iParam1, i, &garageName, &num); i = i + 1)
	{
		if (!bParam2 || IS_BIT_SET(Global_113648.f_7231[num], 0))
			if (VEHICLE::IS_VEHICLE_IN_GARAGE_AREA(&garageName, veParam0))
				return true;
	}

	return false;
}

BOOL func_141(int iParam0, int iParam1, char* sParam2, var uParam3) // Position - 0xA0E1 Hash - 0xF6C81E2A ^0x9BABBD63
{
	TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);

	switch (iParam0)
	{
		case 0:
			if (iParam1 == 0)
			{
				TEXT_LABEL_ASSIGN_STRING(sParam2, "Michael - Beverly Hills", 32);
				*uParam3 = 0;
				return true;
			}
			else if (iParam1 == 1)
			{
				TEXT_LABEL_ASSIGN_STRING(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 1;
				return true;
			}
			break;
	
		case 1:
			if (iParam1 == 0)
			{
				TEXT_LABEL_ASSIGN_STRING(sParam2, "Franklin - Aunt", 32);
				*uParam3 = 5;
				return true;
			}
			else if (iParam1 == 1)
			{
				TEXT_LABEL_ASSIGN_STRING(sParam2, "Franklin - Hills", 32);
				*uParam3 = 6;
				return true;
			}
			break;
	
		case 2:
			if (iParam1 == 0)
			{
				TEXT_LABEL_ASSIGN_STRING(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 2;
				return true;
			}
			else if (iParam1 == 1)
			{
				TEXT_LABEL_ASSIGN_STRING(sParam2, "Trevor - City", 32);
				*uParam3 = 3;
				return true;
			}
			else if (iParam1 == 2)
			{
				TEXT_LABEL_ASSIGN_STRING(sParam2, "Trevor - Stripclub", 32);
				*uParam3 = 4;
				return true;
			}
			break;
	}

	return false;
}

void func_142(int iParam0) // Position - 0xA1B9 Hash - 0x29A8F290 ^0x87716063
{
	Global_112358.f_22 = iParam0;
	return;
}

