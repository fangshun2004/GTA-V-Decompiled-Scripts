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
	char* sLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	float fLocal_21 = 0f;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	int iLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	Ped pedLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	float fLocal_54 = 0f;
	int iLocal_55 = 0;
	BOOL bLocal_56 = 0;
	Blip blLocal_57 = 0;
	float fLocal_58 = 0f;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 4;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	int iLocal_72 = 0;
	char* sLocal_73 = 0;
	char* sLocal_74 = 0;
	char* sLocal_75 = 0;
	char* sLocal_76 = 0;
	char* sLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	int iLocal_81 = 0;
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 5;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = 0;
	var uScriptParam_7 = 0;
	var uScriptParam_8 = 0;
	var uScriptParam_9 = 0;
	var uScriptParam_10 = 0;
	var uScriptParam_11 = 0;
	var uScriptParam_12 = 0;
	var uScriptParam_13 = 0;
	var uScriptParam_14 = 0;
	var uScriptParam_15 = 0;
	var uScriptParam_16 = 0;
	var uScriptParam_17 = 5;
	var uScriptParam_18 = 0;
	var uScriptParam_19 = 0;
	var uScriptParam_20 = 0;
	var uScriptParam_21 = 0;
	var uScriptParam_22 = 0;
#endregion

void main() // Hash - 0x5D84F89F ^0x5D84F89F
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
	sLocal_18 = "NULL";
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_35 = 3;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	uLocal_51 = { -336.61462f, -93.668076f, 46.0005f };
	fLocal_54 = 256.1257f;
	fLocal_58 = 0f;
	uLocal_69 = { -334.8087f, -85.713f, 47.4504f };
	sLocal_73 = "scr_lamgraff_paint_spray";
	sLocal_74 = "switch@franklin@lamar_tagging_wall";
	sLocal_75 = "lamar_tagging_wall_loop_lamar";
	sLocal_76 = "lamar_tagging_wall_exit_lamar";
	sLocal_77 = "lamar_tagging_exit_loop_lamar";
	uLocal_78 = { 0f, 0f, 0f };

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(11))
		func_150();

	func_85(uScriptParam_0.f_1[0 /*3*/]);

	while (true)
	{
		func_71();
	
		switch (iLocal_47)
		{
			case 0:
				if (func_55())
					func_52();
				break;
		
			case 1:
				if (func_1())
					func_52();
				break;
		}
	
		SYSTEM::WAIT(0);
	}

	return;
}

BOOL func_1() // Hash - 0x660474C0 ^0xFB30F8A8
{
	if (iLocal_48 == 0)
	{
		return true;
	}
	else if (iLocal_48 == 1)
	{
		func_51();
	
		if (func_50(PLAYER::PLAYER_PED_ID()))
			func_49(PLAYER::PLAYER_PED_ID(), -347.4067f, -93.5801f, 44.6639f, 306.0178f);
	
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0, 1065353216);
		CAM::DO_SCREEN_FADE_IN(250);
		return true;
	}
	else if (iLocal_48 == 2)
	{
		switch (iLocal_49)
		{
			case 0:
				func_36(-899711929);
				func_31();
				func_5(-1, 0);
				func_2();
				func_150();
				break;
		}
	}

	return false;
}

void func_2() // Hash - 0xD765C186 ^0xD765C186
{
	func_3();
	return;
}

int func_3() // Hash - 0x9482CBBF ^0x8B17A994
{
	if (func_4(false))
		return 0;

	if (Global_100720.f_8)
		if (Global_100720.f_10 > 0)
			return 0;
	else if (Global_100720.f_10 > 1)
		return 0;

	Global_100720.f_10 = Global_100720.f_10 + 1;
	return 1;
}

BOOL func_4(BOOL bParam0) // Hash - 0x15889021 ^0xE7262364
{
	if (!bParam0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("BENCHMARK")) > 0)
		return true;

	return IS_BIT_SET(Global_78807, 0);
}

void func_5(int iParam0, int iParam1) // Hash - 0x7B6FC08C ^0x7B6FC08C
{
	if (iParam0 == -1)
		iParam0 = func_29();

	if (iParam0 == -1)
		return;

	if (iParam1 <= func_28(iParam0))
	{
		func_27(iParam0, iParam1);
	
		if (!func_26(51))
		{
			func_16(_("Some Random Events will reward the player with stat boosts or money."), 1, 0, 4000, 10000, func_19(), 0, 138, 0);
			func_15(51);
		}
	
		if (func_14(iParam0))
			Global_113648.f_24997.f_2 = 3;
	
		if (func_13(iParam0, iParam1) != 322)
			func_7(func_13(iParam0, iParam1), uLocal_44, uLocal_44.f_1);
	
		Global_113636 = iParam1;
	
		if (Global_113634 == 0)
			if (Global_113637 == 1 || Global_113637 == 5 || Global_113637 == 11 || Global_113637 == 25)
				func_6(2);
			else if (Global_113637 == 26 || Global_113637 == 8 || Global_113637 == 17)
				func_6(7);
			else
				func_6(1);
	}

	return;
}

void func_6(int iParam0) // Hash - 0xE49C42EC ^0xE49C42EC
{
	Global_113634 = iParam0;
	return;
}

void func_7(int iParam0, var uParam1, var uParam2) // Hash - 0xEC2439E7 ^0x1B67A713
{
	BOOL flag;

	iParam0 < 0;

	if (iParam0 == 321 || iParam0 > 321)
	{
	}
	else
	{
		func_11(891 + iParam0, true, -1);
	}

	flag = true;

	if (Global_113648.f_10196[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_113648.f_10196[iParam0 /*12*/].f_6 == 11 || Global_113648.f_10196[iParam0 /*12*/].f_6 == 12)
			flag = false;
	}
	else
	{
		Global_113648.f_10196[iParam0 /*12*/].f_5 = 1;
		Global_113648.f_10196[iParam0 /*12*/].f_10 = uParam1;
		Global_113648.f_10196[iParam0 /*12*/].f_11 = uParam2;
	
		if (iParam0 == 287)
			STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("NUM_HIDDEN_PACKAGES_0"), 50, 0);
	
		if (iParam0 == 286)
			STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("NUM_HIDDEN_PACKAGES_1"), 50, 0);
	
		if (iParam0 == 299)
			STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("NUM_HIDDEN_PACKAGES_3"), 50, 0);
	}

	if (flag)
		func_8();

	return;
}

void func_8() // Hash - 0x9F269E94 ^0x9F269E94
{
	int num;
	float num2;
	float num3;
	float num4;
	float num5;
	float num6;
	float num7;
	float num8;
	float value;
	int value2;

	num = 0;
	Global_113384 = 0;
	Global_113385 = 0;
	Global_113386 = 0;
	Global_113387 = 0;
	Global_113388 = 0;
	Global_113389 = 0;
	Global_113390 = 0;
	num2 = 0f;
	num3 = 0f;
	num4 = 0f;
	num5 = 0f;
	num6 = 0f;
	num7 = 0f;
	num8 = 0f;
	value = Global_113648.f_10196.f_3853;
	Global_113648.f_10196.f_3853 = 0f;

	while (num < 321)
	{
		if (Global_113648.f_10196[num /*12*/].f_5 == 1)
		{
			switch (Global_113648.f_10196[num /*12*/].f_6)
			{
				case 1:
					Global_113384 = Global_113384 + 1;
					num2 = num2 + Global_113648.f_10196[num /*12*/].f_4;
					break;
			
				case 3:
					Global_113385 = Global_113385 + 1;
					num3 = num3 + Global_113648.f_10196[num /*12*/].f_4;
					break;
			
				case 5:
					Global_113386 = Global_113386 + 1;
					num4 = num4 + Global_113648.f_10196[num /*12*/].f_4;
					break;
			
				case 7:
					Global_113387 = Global_113387 + 1;
					num5 = num5 + Global_113648.f_10196[num /*12*/].f_4;
					break;
			
				case 9:
					Global_113388 = Global_113388 + 1;
					num6 = num6 + (Global_113648.f_10196[num /*12*/].f_4 * 4f);
					break;
			
				case 11:
					Global_113389 = Global_113389 + 1;
					num7 = num7 + Global_113648.f_10196[num /*12*/].f_4;
					break;
			
				case 13:
					Global_113390 = Global_113390 + 1;
					num8 = num8 + Global_113648.f_10196[num /*12*/].f_4;
					break;
			
				default:
					break;
			}
		}
	
		num = num + 1;
	}

	if (Global_113367 > 0)
		if (Global_113384 == Global_113367)
			num2 = 55f;

	if (Global_113368 > 0)
		if (Global_113385 == Global_113368)
			num3 = 10f;

	if (Global_113369 > 0)
		if (Global_113386 == Global_113369)
			num4 = 0f;

	if (Global_113370 > 0)
		if (Global_113387 == Global_113370)
			num5 = 10f;

	if (Global_113371 > 0)
	{
		if (Global_113388 == Global_113371 || (Global_113371 * 10) / Global_113388 < 41 || Global_113388 > Global_113374 || Global_113388 == Global_113374)
		{
			if (!IS_BIT_SET(Global_113648.f_10196.f_3856, 14))
			{
				if (Global_113388 == Global_113371)
				{
					STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("NUM_RNDEVENTS_COMPLETED"), Global_113371, 0);
					MISC::SET_BIT(&(Global_113648.f_10196.f_3856), 14);
				}
			}
		
			num6 = 5f;
		}
	}

	if (Global_113372 > 0)
		if (Global_113389 == Global_113372)
			num7 = 15f;

	if (Global_113373 > 0)
		if (Global_113390 == Global_113373)
			num8 = 5f;

	Global_113648.f_10196.f_3853 = num2 + num3 + num4 + num5 + num6 + num7 + num8;

	if (Global_113388 > Global_113374 || Global_113388 == Global_113374)
		value2 = Global_113374;
	else
		value2 = Global_113388;

	STATS::STAT_SET_INT(joaat("NUM_MISSIONS_COMPLETED"), Global_113384, true);
	STATS::STAT_SET_INT(joaat("NUM_MISSIONS_AVAILABLE"), Global_113367, true);
	STATS::STAT_SET_INT(joaat("NUM_MINIGAMES_COMPLETED"), Global_113385, true);
	STATS::STAT_SET_INT(joaat("NUM_MINIGAMES_AVAILABLE"), Global_113368, true);
	STATS::STAT_SET_INT(joaat("NUM_ODDJOBS_COMPLETED"), Global_113386, true);
	STATS::STAT_SET_INT(joaat("NUM_ODDJOBS_AVAILABLE"), Global_113369, true);
	STATS::STAT_SET_INT(joaat("NUM_RNDPEOPLE_COMPLETED"), Global_113387, true);
	STATS::STAT_SET_INT(joaat("NUM_RNDPEOPLE_AVAILABLE"), Global_113370, true);
	STATS::STAT_SET_INT(joaat("NUM_RNDEVENTS_COMPLETED"), value2, true);
	STATS::STAT_SET_INT(joaat("NUM_RNDEVENTS_AVAILABLE"), Global_113374, true);
	STATS::STAT_SET_INT(joaat("NUM_MISC_COMPLETED"), Global_113390 + Global_113389, true);
	STATS::STAT_SET_INT(joaat("NUM_MISC_AVAILABLE"), Global_113373 + Global_113372, true);
	Global_113391 = (Global_113384 * 100) / Global_113367;
	Global_113393 = ((Global_113386 + Global_113385) * 100) / (Global_113369 + Global_113368);
	Global_113392 = ((Global_113387 + value2) * 100) / (Global_113370 + Global_113374);
	Global_113394 = ((Global_113389 + Global_113390) * 100) / (Global_113372 + Global_113373);
	STATS::STAT_SET_FLOAT(joaat("TOTAL_PROGRESS_MADE"), Global_113648.f_10196.f_3853, true);
	STATS::STAT_SET_INT(joaat("PERCENT_STORY_MISSIONS"), Global_113391, true);
	STATS::STAT_SET_INT(joaat("PERCENT_AMBIENT_MISSIONS"), Global_113392, true);
	STATS::STAT_SET_INT(joaat("PERCENT_ODDJOBS"), Global_113393, true);

	if (value > 0f && SYSTEM::FLOOR(value) < SYSTEM::FLOOR(Global_113648.f_10196.f_3853))
		func_10(13, SYSTEM::FLOOR(Global_113648.f_10196.f_3853));

	if (!DATAFILE::DATAFILE_IS_SAVE_PENDING())
	{
		if (!Global_78558)
		{
			if (func_9() == 2 == false && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (NETWORK::NETWORK_IS_CLOUD_AVAILABLE())
					Global_113382 = 0;
			
				if (!Global_63362)
					func_3();
			}
		}
	}

	return;
}

int func_9() // Hash - 0x21D64237 ^0x21D64237
{
	return Global_32163;
}

BOOL func_10(int iParam0, int iParam1) // Hash - 0x77E0C72A ^0x80DA2A54
{
	int achievementProgress;

	if (iParam0 < 0)
		return false;

	if (iParam0 > 78)
		return false;

	if (iParam1 <= 0 || iParam1 > 100)
		return false;

	achievementProgress = PLAYER::GET_ACHIEVEMENT_PROGRESS(iParam0);

	if (iParam1 > achievementProgress)
		return PLAYER::SET_ACHIEVEMENT_PROGRESS(iParam0, iParam1);

	return false;
}

void func_11(int iParam0, BOOL bParam1, int iParam2) // Hash - 0xCF91FBA1 ^0xAE1D9C41
{
	if (iParam2 == -1)
		iParam2 = func_12();

	STATS::SET_PACKED_STAT_BOOL_CODE(iParam0, bParam1, iParam2);
	return;
}

int func_12() // Hash - 0x47FF56D2 ^0x47FF56D2
{
	return Global_1574918;
}

int func_13(int iParam0, int iParam1) // Hash - 0xE97012CD ^0x68FBF85A
{
	switch (iParam0)
	{
		case 0:
			return 250;
	
		case 1:
			return 226;
	
		case 2:
			return 243;
	
		case 3:
			return 256;
	
		case 4:
			return 259;
	
		case 5:
			if (iParam1 == 1)
				return 281;
		
			if (iParam1 == 2)
				return 282;
			break;
	
		case 6:
			return 265;
	
		case 7:
			return 218;
	
		case 9:
			if (iParam1 == 1)
				return 271;
		
			if (iParam1 == 2)
				return 272;
		
			if (iParam1 == 3)
				return 273;
		
			if (iParam1 == 4)
				return 274;
		
			if (iParam1 == 5)
				return 275;
		
			if (iParam1 == 6)
				return 276;
		
			if (iParam1 == 7)
				return 277;
		
			if (iParam1 == 8)
				return 278;
		
			if (iParam1 == 9)
				return 279;
		
			if (iParam1 == 10)
				return 280;
			break;
	
		case 10:
			return 219;
	
		case 11:
			if (iParam1 == 1)
				return 246;
		
			if (iParam1 == 2)
				return 247;
		
			if (iParam1 == 3)
				return 248;
		
			if (iParam1 == 4)
				return 249;
			break;
	
		case 12:
			return 254;
	
		case 13:
			if (iParam1 == 1)
				return 260;
		
			if (iParam1 == 2)
				return 261;
		
			if (iParam1 == 3)
				return 262;
		
			if (iParam1 == 4)
				return 264;
			break;
	
		case 14:
			return 283;
	
		case 15:
			if (iParam1 == 1)
				return 224;
		
			if (iParam1 == 2)
				return 225;
			break;
	
		case 16:
			return 252;
	
		case 17:
			if (iParam1 == 1)
				return 244;
		
			if (iParam1 == 2)
				return 245;
			break;
	
		case 18:
			return 253;
	
		case 19:
			return 215;
	
		case 20:
			return 216;
	
		case 21:
			return 251;
	
		case 22:
			if (iParam1 == 1)
				return 221;
		
			if (iParam1 == 2)
				return 222;
			break;
	
		case 23:
			if (iParam1 == 1)
				return 213;
		
			if (iParam1 == 2)
				return 214;
			break;
	
		case 24:
			return 242;
	
		case 25:
			if (iParam1 == 1)
				return 267;
		
			if (iParam1 == 2)
				return 268;
		
			if (iParam1 == 3)
				return 269;
			break;
	
		case 8:
			return 255;
	
		case 26:
			if (iParam1 == 1)
				return 227;
		
			if (iParam1 == 2)
				return 228;
			break;
	
		case 27:
			if (iParam1 == 1)
				return 257;
		
			if (iParam1 == 2)
				return 258;
			break;
	
		case 28:
			return 217;
	
		case 29:
			if (iParam1 == 1)
				return 229;
		
			if (iParam1 == 2)
				return 230;
		
			if (iParam1 == 3)
				return 231;
			break;
	
		case 30:
			return 285;
	
		case 31:
			return 318;
	
		case 32:
			return 319;
	
		case 33:
			return 320;
	}

	return 322;
}

BOOL func_14(int iParam0) // Hash - 0xBF3EFB31 ^0xBF3EFB31
{
	switch (iParam0)
	{
		case 29:
		case 30:
		case 2:
		case 18:
			return false;
	}

	return true;
}

void func_15(int iParam0) // Hash - 0x12249850 ^0x46987D7A
{
	int offset;
	int i;

	offset = iParam0;

	for (i = 0; offset > 31; i = i + 1)
	{
		offset = offset - 32;
	}

	if (i < 3)
		MISC::SET_BIT(&Global_113648.f_20412.f_150[i], offset);

	return;
}

void func_16(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8) // Hash - 0x33833570 ^0x33833570
{
	func_17(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
	return;
}

void func_17(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9) // Hash - 0x90F6D8D3 ^0xA13BE78A
{
	int i;

	if (MISC::ARE_STRINGS_EQUAL(sParam0, ""))
		return;

	if (iParam3 < 0)
		return;

	if (iParam5 < 500 && iParam5 != -1)
		return;

	if (iParam4 < 0 && iParam4 != -1)
		return;

	if (iParam6 < 1 || iParam6 > 7)
		return;

	if (iParam7 == 235)
		return;

	if (iParam8 == 235)
		return;

	for (i = 0; i < Global_113648.f_20412.f_145; i = i + 1)
	{
		if (MISC::ARE_STRINGS_EQUAL(&Global_113648.f_20412[i /*16*/], sParam0))
			return;
	}

	if (Global_113648.f_20412.f_145 < 9)
	{
		TEXT_LABEL_ASSIGN_STRING(&Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/], sParam0, 16);
		TEXT_LABEL_ASSIGN_STRING(&(Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/].f_4), sParam1, 16);
		Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/].f_8 = MISC::GET_GAME_TIMER() + iParam3;
		Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/].f_9 = iParam5;
		Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/].f_11 = iParam6;
		Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/].f_12 = iParam2;
		Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/].f_13 = iParam7;
		Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/].f_14 = iParam8;
		Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/].f_15 = iParam9;
	
		if (iParam4 != -1)
			Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/].f_10 = MISC::GET_GAME_TIMER() + iParam3 + iParam4;
		else
			Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/].f_10 = -1;
	
		Global_113648.f_20412.f_145 = Global_113648.f_20412.f_145 + 1;
		func_18();
	}

	return;
}

void func_18() // Hash - 0xCF8881D1 ^0x40507183
{
	int i;

	for (i = 0; i < 3; i = i + 1)
	{
		Global_113648.f_20412.f_146[i] = 0;
	}

	for (i = 0; i < Global_113648.f_20412.f_145; i = i + 1)
	{
		if (IS_BIT_SET(Global_113648.f_20412[i /*16*/].f_11, 0))
			if (Global_113648.f_20412[i /*16*/].f_12 > Global_113648.f_20412.f_146[0])
				Global_113648.f_20412.f_146[0] = Global_113648.f_20412[i /*16*/].f_12;
	
		if (IS_BIT_SET(Global_113648.f_20412[i /*16*/].f_11, 1))
			if (Global_113648.f_20412[i /*16*/].f_12 > Global_113648.f_20412.f_146[1])
				Global_113648.f_20412.f_146[1] = Global_113648.f_20412[i /*16*/].f_12;
	
		if (IS_BIT_SET(Global_113648.f_20412[i /*16*/].f_11, 2))
			if (Global_113648.f_20412[i /*16*/].f_12 > Global_113648.f_20412.f_146[2])
				Global_113648.f_20412.f_146[2] = Global_113648.f_20412[i /*16*/].f_12;
	}

	return;
}

int func_19() // Hash - 0x35BC7314 ^0x35BC7314
{
	func_20();

	switch (Global_113648.f_2365.f_539.f_4321)
	{
		case 0:
			return 1;
	
		case 1:
			return 2;
	
		case 2:
			return 4;
	}

	return 0;
}

void func_20() // Hash - 0xD1F2D853 ^0xF9F5FD4D
{
	int num;

	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_24(Global_113648.f_2365.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			num = func_23(PLAYER::PLAYER_PED_ID());
		
			if (func_22(num) && !func_21(14) || Global_112599)
			{
				if (Global_113648.f_2365.f_539.f_4321 != num && func_22(Global_113648.f_2365.f_539.f_4321))
					Global_113648.f_2365.f_539.f_4322 = Global_113648.f_2365.f_539.f_4321;
			
				Global_113648.f_2365.f_539.f_4323 = num;
				Global_113648.f_2365.f_539.f_4321 = num;
				return;
			}
		}
		else
		{
			if (Global_113648.f_2365.f_539.f_4321 != 145)
				Global_113648.f_2365.f_539.f_4323 = Global_113648.f_2365.f_539.f_4321;
		
			return;
		}
	}

	Global_113648.f_2365.f_539.f_4321 = 145;
	return;
}

BOOL func_21(int iParam0) // Hash - 0x937D8816 ^0x937D8816
{
	return Global_43257 == iParam0;
}

BOOL func_22(int iParam0) // Hash - 0x8907F004 ^0x8907F004
{
	return iParam0 < 3;
}

int func_23(Ped pedParam0) // Hash - 0xAC4E9801 ^0xB379A75F
{
	int i;
	Hash entityModel;

	if (ENTITY::DOES_ENTITY_EXIST(pedParam0))
	{
		entityModel = ENTITY::GET_ENTITY_MODEL(pedParam0);
	
		for (i = 0; i <= 2; i = i + 1)
		{
			if (func_24(i) == entityModel)
				return i;
		}
	}

	return 145;
}

Hash func_24(int iParam0) // Hash - 0xADCB9755 ^0xADCB9755
{
	if (func_22(iParam0))
		return func_25(iParam0);
	else
		iParam0 != 145;

	return 0;
}

Hash func_25(int iParam0) // Hash - 0xE4CEEC2C ^0xE4CEEC2C
{
	return Global_2028[iParam0 /*29*/];
}

BOOL func_26(int iParam0) // Hash - 0x3F44A899 ^0x7041C53
{
	int num;
	int i;

	num = iParam0;

	for (i = 0; num > 31; i = i + 1)
	{
		num = num - 32;
	}

	if (i < 3)
		return IS_BIT_SET(Global_113648.f_20412.f_150[i], num);

	return false;
}

void func_27(int iParam0, int iParam1) // Hash - 0xE2246457 ^0xD5018049
{
	MISC::SET_BIT(&Global_113648.f_24997.f_8[iParam0], iParam1);
	return;
}

int func_28(int iParam0) // Hash - 0xAA02DAD0 ^0xAA02DAD0
{
	int num;

	num = 1;

	switch (iParam0)
	{
		case 1:
			num = 5;
			break;
	
		case 5:
			num = 2;
			break;
	
		case 9:
			num = 10;
			break;
	
		case 11:
			num = 4;
			break;
	
		case 13:
			num = 4;
			break;
	
		case 15:
			num = 2;
			break;
	
		case 17:
			num = 2;
			break;
	
		case 22:
			num = 2;
			break;
	
		case 23:
			num = 2;
			break;
	
		case 25:
			num = 3;
			break;
	
		case 26:
			num = 2;
			break;
	
		case 27:
			num = 2;
			break;
	
		case 29:
			num = 3;
			break;
	}

	return num;
}

int func_29() // Hash - 0x7AC1007E ^0x4E7D4F54
{
	var unk;
	int num;

	TEXT_LABEL_ASSIGN_STRING(&unk, SCRIPT::GET_THIS_SCRIPT_NAME(), 64);
	num = func_30(unk);
	return num;
}

int func_30(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15) // Hash - 0x6DA57317 ^0x57A32A43
{
	switch (MISC::GET_HASH_KEY(&uParam0))
	{
		case joaat("RE_ABANDONEDCAR"):
			return 23;
	
		case joaat("RE_ACCIDENT"):
			return 0;
	
		case joaat("RE_ARRESTS"):
			return 15;
	
		case joaat("RE_ATMROBBERY"):
			return 1;
	
		case joaat("RE_BIKETHIEF"):
			return 26;
	
		case joaat("RE_BORDER"):
			return 29;
	
		case joaat("RE_BURIALS"):
			return 24;
	
		case joaat("RE_BUS_TOURS"):
			return 2;
	
		case joaat("RE_CARTHEFT"):
			return 17;
	
		case joaat("RE_CHASETHIEVES"):
			return 11;
	
		case joaat("RE_CRASHRESCUE"):
			return 16;
	
		case joaat("RE_CULTSHOOTOUT"):
			return 18;
	
		case joaat("RE_DEALGONEWRONG"):
			return 12;
	
		case joaat("RE_DOMESTIC"):
			return 3;
	
		case joaat("RE_DRUNKDRIVER"):
			return 27;
	
		case joaat("RE_GANG_INTIMIDATION"):
			return 20;
	
		case joaat("RE_GANGFIGHT"):
			return 19;
	
		case joaat("RE_GETAWAY_DRIVER"):
			return 4;
	
		case joaat("RE_HITCH_LIFT"):
			return 13;
	
		case joaat("RE_HOMELAND_SECURITY"):
			return 28;
	
		case joaat("RE_LURED"):
			return 7;
	
		case joaat("RE_MUGGINGS"):
			return 25;
	
		case joaat("RE_PAPARAZZI"):
			return 10;
	
		case joaat("RE_PRISONERLIFT"):
			return 22;
	
		case joaat("RE_PRISONVANBREAK"):
			return 21;
	
		case joaat("RE_SECURITYVAN"):
			return 9;
	
		case joaat("RE_SHOPROBBERY"):
			return 5;
	
		case joaat("RE_SNATCHED"):
			return 6;
	
		case joaat("RE_STAG_DO"):
			return 14;
	
		case joaat("RE_YETARIAN"):
			return 30;
	
		case joaat("RE_DUEL"):
			return 31;
	
		case joaat("RE_SEAPLANE"):
			return 32;
	
		case joaat("RE_MONKEY"):
			return 33;
	}

	return -1;
}

void func_31() // Hash - 0x16FFC49A ^0xE0EBDF5
{
	func_32(1751306471, 6, func_35(), 133, 30000, 10000, -1, 0, -1, 0, 0);
	return;
}

int func_32(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10) // Hash - 0x7F671285 ^0x7F671285
{
	int num;

	if (func_4(false))
		return 0;

	if (iParam4 < 0)
		return 0;

	if (iParam5 < 0)
		return 0;

	if (iParam6 == 76)
		return 0;

	if (iParam7 == 235)
		return 0;

	if (iParam3 < 3)
		if (IS_BIT_SET(iParam2, iParam3))
			return 0;

	if (iParam2 < 1 || iParam2 > 7)
		return 0;

	if (Global_113648.f_7690.f_764 < 8)
	{
		num = iParam0;
		num.f_3 = func_34(iParam1);
		num.f_4 = MISC::GET_GAME_TIMER() + iParam4;
		num.f_5 = iParam5;
		num.f_1 = iParam9;
		num.f_2 = iParam2;
		num.f_6 = iParam3;
		num.f_7 = iParam6;
		num.f_8 = iParam7;
		num.f_9 = iParam8;
		num.f_10 = -1;
		num.f_11 = -1;
		num.f_13 = iParam10;
		MISC::CLEAR_BIT(&(num.f_1), 0);
		Global_113648.f_7690.f_651[Global_113648.f_7690.f_764 /*14*/] = { num };
		Global_113648.f_7690.f_764 = Global_113648.f_7690.f_764 + 1;
		func_33(0);
		func_33(1);
		func_33(2);
		return 1;
	}

	return 0;
}

void func_33(int iParam0) // Hash - 0xDBA91FA2 ^0x62041168
{
	int i;
	int num;
	int j;

	num = 0;

	if (!func_22(iParam0))
		return;

	for (i = 0; i < Global_113648.f_7690.f_136; i = i + 1)
	{
		if (IS_BIT_SET(Global_113648.f_7690[i /*15*/].f_2, iParam0))
			if (Global_113648.f_7690[i /*15*/].f_3 > num)
				num = Global_113648.f_7690[i /*15*/].f_3;
	}

	for (j = 0; j < Global_113648.f_7690.f_764; j = j + 1)
	{
		if (IS_BIT_SET(Global_113648.f_7690.f_651[j /*14*/].f_2, iParam0))
			if (Global_113648.f_7690.f_651[j /*14*/].f_3 == 5)
				num = 5;
	}

	Global_113648.f_7690.f_919[iParam0] = num;
	return;
}

int func_34(int iParam0) // Hash - 0x17C68833 ^0x17C68833
{
	switch (iParam0)
	{
		case 0:
		case 4:
			return 5;
	
		case 7:
			return 4;
	
		case 2:
			return 3;
	
		case 1:
			return 2;
	
		case 3:
			return 1;
	
		case 5:
		case 6:
			return 0;
	}

	return 7;
}

int func_35() // Hash - 0xC27B8E60 ^0x4171D12
{
	Hash entityModel;

	entityModel = ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID());

	switch (entityModel)
	{
		case joaat("PLAYER_ZERO"):
			return 1;
	
		case joaat("PLAYER_ONE"):
			return 2;
	
		case joaat("PLAYER_TWO"):
			return 4;
	
		default:
		
	}

	return -1;
}

int func_36(int iParam0) // Hash - 0xA75852D8 ^0xD16C52E
{
	int i;
	int num;

	num = 0;

	for (i = 0; i < Global_113648.f_7690.f_136; i = i + 1)
	{
		if (Global_113648.f_7690[i /*15*/] == iParam0)
		{
			if (Global_43804 != i)
			{
				func_48(i);
				func_40(iParam0);
				num = 1;
			}
		}
	}

	for (i = 0; i < Global_113648.f_7690.f_198; i = i + 1)
	{
		if (Global_113648.f_7690.f_137[i /*15*/] == iParam0)
		{
			func_40(iParam0);
			num = 1;
		}
	}

	for (i = 0; i < Global_113648.f_7690.f_650; i = i + 1)
	{
		if (Global_113648.f_7690.f_199[i /*15*/] == iParam0)
		{
			func_39(iParam0);
			num = 1;
		}
	}

	for (i = 0; i < Global_113648.f_7690.f_764; i = i + 1)
	{
		if (Global_113648.f_7690.f_651[i /*14*/] == iParam0)
		{
			func_38(i);
			num = 1;
		}
	}

	for (i = 0; i < Global_113648.f_7690.f_866; i = i + 1)
	{
		if (Global_113648.f_7690.f_765[i /*10*/] == iParam0)
		{
			func_37(i);
			num = 1;
		}
	}

	return num;
}

void func_37(int iParam0) // Hash - 0xEC7DB104 ^0xEC7DB104
{
	int i;
	var unk;

	if (iParam0 < 0 || iParam0 >= Global_113648.f_7690.f_866)
		return;

	if (Global_113648.f_7690.f_866 > 1)
	{
		for (i = iParam0; i <= Global_113648.f_7690.f_866 - 2; i = i + 1)
		{
			Global_113648.f_7690.f_765[i /*10*/] = { Global_113648.f_7690.f_765[i + 1 /*10*/] };
		}
	}

	if (Global_113648.f_7690.f_866 > 0)
	{
		Global_113648.f_7690.f_765[Global_113648.f_7690.f_866 - 1 /*10*/] = { unk };
		Global_113648.f_7690.f_866 = Global_113648.f_7690.f_866 - 1;
	}

	return;
}

void func_38(int iParam0) // Hash - 0xEC7DB104 ^0xEC7DB104
{
	int i;
	var unk;

	if (iParam0 < 0 || iParam0 >= Global_113648.f_7690.f_764)
		return;

	if (Global_113648.f_7690.f_764 > 1)
	{
		for (i = iParam0; i <= Global_113648.f_7690.f_764 - 2; i = i + 1)
		{
			Global_113648.f_7690.f_651[i /*14*/] = { Global_113648.f_7690.f_651[i + 1 /*14*/] };
		}
	}

	if (Global_113648.f_7690.f_764 > 0)
	{
		Global_113648.f_7690.f_651[Global_113648.f_7690.f_764 - 1 /*14*/] = { unk };
		Global_113648.f_7690.f_764 = Global_113648.f_7690.f_764 - 1;
	}

	func_33(0);
	func_33(1);
	func_33(2);
	return;
}

void func_39(int iParam0) // Hash - 0x137FFF25 ^0x82C17B
{
	var unk;
	int i;
	int j;

	for (i = 0; i < Global_113648.f_7690.f_650; i = i + 1)
	{
		if (Global_113648.f_7690.f_199[i /*15*/] == iParam0)
		{
			for (j = i; j <= Global_113648.f_7690.f_650 - 2; j = j + 1)
			{
				Global_113648.f_7690.f_199[j /*15*/] = { Global_113648.f_7690.f_199[j + 1 /*15*/] };
			}
		
			Global_113648.f_7690.f_199[Global_113648.f_7690.f_650 - 1 /*15*/] = { unk };
			Global_113648.f_7690.f_650 = Global_113648.f_7690.f_650 - 1;
			return;
		}
	}

	return;
}

void func_40(int iParam0) // Hash - 0xCCFAC6AA ^0xEC431D32
{
	var unk;
	int i;
	int j;

	for (i = 0; i < Global_113648.f_7690.f_198; i = i + 1)
	{
		if (Global_113648.f_7690.f_137[i /*15*/] == iParam0)
		{
			func_41(Global_113648.f_7690.f_137[i /*15*/].f_6);
		
			for (j = i; j <= Global_113648.f_7690.f_198 - 2; j = j + 1)
			{
				Global_113648.f_7690.f_137[j /*15*/] = { Global_113648.f_7690.f_137[j + 1 /*15*/] };
			}
		
			Global_113648.f_7690.f_137[Global_113648.f_7690.f_198 - 1 /*15*/] = { unk };
			Global_113648.f_7690.f_198 = Global_113648.f_7690.f_198 - 1;
			return;
		}
	}

	return;
}

int func_41(int iParam0) // Hash - 0xE624B23E ^0x73975030
{
	int num;

	if (Global_117[iParam0 /*10*/].f_8 != 169)
	{
		if (func_47(iParam0, Global_20383) == 1)
		{
			func_46(iParam0, Global_20383, 0);
		
			if (func_45(iParam0, Global_20383) == 0)
			{
				num = Global_20383;
				func_42(iParam0, num);
			}
		
			return 1;
		}
		else
		{
			return 0;
		}
	}

	return 0;
}

void func_42(int iParam0, int iParam1) // Hash - 0x5207FAC0 ^0x6E316FC
{
	int num;

	if (Global_117[iParam0 /*10*/].f_8 != 169)
	{
		if (iParam1 > 3)
		{
		}
		else
		{
			num = iParam1;
			func_44(iParam0, num, 0);
			func_43(iParam0, num, 0);
		}
	}

	return;
}

void func_43(int iParam0, int iParam1, int iParam2) // Hash - 0xAB9B6CC ^0x1B5EEB55
{
	if (iParam1 < 0 || iParam1 > 4)
		return;

	Global_2028[iParam0 /*29*/].f_24[iParam1] = iParam2;

	if (iParam0 < 162)
		Global_113648.f_28052[iParam0 /*29*/].f_24[iParam1] = iParam2;

	return;
}

void func_44(int iParam0, int iParam1, int iParam2) // Hash - 0xAB9B6CC ^0x80AE0F15
{
	if (iParam1 < 0 || iParam1 > 4)
		return;

	Global_2028[iParam0 /*29*/].f_12[iParam1] = iParam2;

	if (iParam0 < 162)
		Global_113648.f_28052[iParam0 /*29*/].f_12[iParam1] = iParam2;

	return;
}

int func_45(int iParam0, int iParam1) // Hash - 0x97DCD8A1 ^0xF8178EDD
{
	if (iParam1 < 0 || iParam1 > 4)
		return 0;

	return Global_2028[iParam0 /*29*/].f_24[iParam1];
}

void func_46(int iParam0, int iParam1, int iParam2) // Hash - 0xB4ABC33 ^0x67322EDD
{
	Global_2028[iParam0 /*29*/].f_19[iParam1] = iParam2;

	if (iParam0 < 162)
		Global_113648.f_28052[iParam0 /*29*/].f_19[iParam1] = iParam2;

	return;
}

int func_47(int iParam0, int iParam1) // Hash - 0x97DCD8A1 ^0xFBF2A354
{
	if (iParam1 < 0 || iParam1 > 4)
		return 0;

	return Global_2028[iParam0 /*29*/].f_19[iParam1];
}

void func_48(int iParam0) // Hash - 0x4FA51D98 ^0x238D4E50
{
	int i;
	int num;
	var unk;

	if (iParam0 < 0 || iParam0 >= Global_113648.f_7690.f_136)
		return;

	num = Global_113648.f_7690[iParam0 /*15*/].f_2;

	if (Global_113648.f_7690.f_136 > 1)
	{
		for (i = iParam0; i <= Global_113648.f_7690.f_136 - 2; i = i + 1)
		{
			Global_113648.f_7690[i /*15*/] = { Global_113648.f_7690[i + 1 /*15*/] };
		}
	}

	if (Global_113648.f_7690.f_136 > 0)
	{
		Global_113648.f_7690[Global_113648.f_7690.f_136 - 1 /*15*/] = { unk };
		Global_113648.f_7690.f_136 = Global_113648.f_7690.f_136 - 1;
	}

	for (i = 0; i < 3; i = i + 1)
	{
		if (IS_BIT_SET(num, i))
			func_33(i);
	}

	return;
}

void func_49(Ped pedParam0, float fParam1, float fParam2, float fParam3, float fParam4) // Hash - 0xEC431ADE ^0x9E83751
{
	ENTITY::SET_ENTITY_COORDS(pedParam0, fParam1, true, false, false, true);
	ENTITY::SET_ENTITY_HEADING(pedParam0, fParam4);
	return;
}

BOOL func_50(Ped pedParam0) // Hash - 0x3D210083 ^0xF7E7C389
{
	if (ENTITY::DOES_ENTITY_EXIST(pedParam0))
		if (!ENTITY::IS_ENTITY_DEAD(pedParam0, false))
			return true;

	return false;
}

void func_51() // Hash - 0x73644D44 ^0xE0CB3966
{
	int i;
	int num;

	for (i = 0; i < 4; i = i + 1)
	{
		num = i;
	
		switch (num)
		{
			case 0:
				break;
		
			case 1:
				uLocal_64[num] = OBJECT::CREATE_OBJECT(joaat("PROP_PAINTS_CAN02"), -335.66f, -95.24f, 46.16f, true, true, false);
				ENTITY::SET_ENTITY_COORDS_NO_OFFSET(uLocal_64[num], -335.66f, -95.24f, 46.16f, false, false, true);
				ENTITY::SET_ENTITY_ROTATION(uLocal_64[num], -2.32f, 0.66f, -0.8f, 2, true);
				break;
		
			case 2:
				uLocal_64[num] = OBJECT::CREATE_OBJECT(joaat("PROP_PAINT_BRUSH05"), -336.04f, -94.9f, 46.02f, true, true, false);
				ENTITY::SET_ENTITY_COORDS_NO_OFFSET(uLocal_64[num], -336.04f, -94.9f, 46.02f, false, false, true);
				ENTITY::SET_ENTITY_ROTATION(uLocal_64[num], 0.01f, 3.85f, 2.72f, 2, true);
				break;
		
			case 3:
				uLocal_64[num] = OBJECT::CREATE_OBJECT(joaat("PROP_PAINT_SPRAY01B"), -336.34f, -95.66f, 46.02f, true, true, false);
				ENTITY::SET_ENTITY_COORDS_NO_OFFSET(uLocal_64[num], -336.34f, -95.66f, 46.02f, false, false, true);
				ENTITY::SET_ENTITY_ROTATION(uLocal_64[num], -2.86f, 0.76f, 28.89f, 2, true);
				break;
		}
	}

	return;
}

void func_52() // Hash - 0x7261CCE0 ^0x7261CCE0
{
	if (iLocal_48 == 2)
	{
		func_54();
		iLocal_49 = 0;
	}

	func_53();
	return;
}

void func_53() // Hash - 0x73493569 ^0x73493569
{
	switch (iLocal_48)
	{
		case 0:
			iLocal_48 = 2;
			break;
	
		case 1:
			iLocal_48 = 2;
			break;
	
		case 2:
			iLocal_48 = 0;
			break;
	}

	return;
}

void func_54() // Hash - 0x94CAAECE ^0x94CAAECE
{
	int num;

	num = iLocal_47 + 1;

	if (num >= 0 && num < 2)
		iLocal_47 = num;

	return;
}

BOOL func_55() // Hash - 0x61F663D6 ^0x44698811
{
	if (iLocal_48 == 0)
	{
		return true;
	}
	else if (iLocal_48 == 1)
	{
		if (func_50(PLAYER::PLAYER_PED_ID()))
			func_49(PLAYER::PLAYER_PED_ID(), -366.6139f, -79.7531f, 44.6616f, 230.7299f);
	
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0, 1065353216);
		CAM::DO_SCREEN_FADE_IN(250);
		return true;
	}
	else if (iLocal_48 == 2)
	{
		if (ENTITY::DOES_ENTITY_EXIST(pedLocal_50))
			if (PED::IS_PED_DEAD_OR_DYING(pedLocal_50, true))
				func_150();
		else if (iLocal_49 > 0)
			if (bLocal_56)
				return true;
			else
				func_150();
	
		switch (iLocal_49)
		{
			case 0:
				if (func_57())
				{
					func_51();
					iLocal_49 = iLocal_49 + 1;
				}
				break;
		
			case 1:
				if (func_56())
				{
					if (func_50(pedLocal_50))
					{
						if (CAM::GET_FOCUS_PED_ON_SCREEN(1106247680, 31086, 1061997773, 1060320051, 1048576000, 1090519040, 1051361018, 31086, 24818) == pedLocal_50)
						{
							iLocal_83 = MISC::GET_GAME_TIMER() + 2000;
							iLocal_49 = iLocal_49 + 1;
						}
					}
				}
				break;
		
			case 2:
				if (iLocal_83 < MISC::GET_GAME_TIMER())
				{
					bLocal_56 = true;
					iLocal_49 = iLocal_49 + 1;
				}
				break;
		}
	}

	return false;
}

BOOL func_56() // Hash - 0x2BF82AC3 ^0x2BF82AC3
{
	if (Global_22761)
		return true;

	return false;
}

BOOL func_57() // Hash - 0x1F5F7ECA ^0xD8269CA6
{
	if (ENTITY::DOES_ENTITY_EXIST(pedLocal_50))
	{
		return true;
	}
	else
	{
		STREAMING::REQUEST_MODEL(joaat("U_M_M_STREETART_01"));
	
		if (STREAMING::HAS_MODEL_LOADED(joaat("U_M_M_STREETART_01")))
		{
			pedLocal_50 = PED::CREATE_PED(PED_TYPE_MISSION, joaat("U_M_M_STREETART_01"), uLocal_51, fLocal_54, true, true);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("U_M_M_STREETART_01"));
			uLocal_64[0] = OBJECT::CREATE_OBJECT(joaat("PROP_CS_SPRAY_CAN"), uLocal_69, true, true, false);
			ENTITY::ATTACH_ENTITY_TO_ENTITY(uLocal_64[0], pedLocal_50, PED::GET_PED_BONE_INDEX(pedLocal_50, 28422), 0f, -0.01f, -0.02f, uLocal_78, true, true, false, false, 2, true, 0);
			PED::SET_PED_KEEP_TASK(pedLocal_50, true);
			PED::SET_PED_CONFIG_FLAG(pedLocal_50, 42, true);
			blLocal_57 = func_68(pedLocal_50, false, 145);
			func_58(true);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(pedLocal_50, joaat("PLAYER"));
			PED::SET_PED_LOD_MULTIPLIER(pedLocal_50, 2.5f);
		}
	}

	return false;
}

int func_58(BOOL bParam0) // Hash - 0xEED06B6E ^0x11655628
{
	if (func_62())
	{
		Global_113638 = true;
		Global_113635 = MISC::GET_GAME_TIMER();
	
		if (func_14(Global_113637))
			func_59(0);
	
		HUD::SET_MISSION_NAME(true, _("Random Event"));
	
		if (bParam0 && func_14(Global_113637))
			HUD::FLASH_MINIMAP_DISPLAY();
	
		return 1;
	}

	return 0;
}

void func_59(int iParam0) // Hash - 0x3B4E6AAB ^0x52844A7B
{
	switch (iParam0)
	{
		case 0:
			if (Global_113648.f_24997.f_2 < 3)
			{
				if (!HUD::IS_HELP_MESSAGE_ON_SCREEN())
				{
					func_60(func_61(iParam0), -1);
					Global_113648.f_24997.f_2 = Global_113648.f_24997.f_2 + 1;
					MISC::SET_BIT(&Global_113644, 0);
				}
			}
			break;
	
		case 1:
			if (!IS_BIT_SET(Global_113644, 1))
			{
				if (!HUD::IS_HELP_MESSAGE_ON_SCREEN())
				{
					func_60(func_61(iParam0), -1);
					Global_113648.f_24997.f_3 = Global_113648.f_24997.f_3 + 1;
					MISC::SET_BIT(&Global_113644, 1);
				}
			}
			break;
	
		case 2:
			if (!IS_BIT_SET(Global_113644, 2))
			{
				if (!HUD::IS_HELP_MESSAGE_ON_SCREEN())
				{
					func_60(func_61(iParam0), -1);
					Global_113648.f_24997.f_4 = Global_113648.f_24997.f_4 + 1;
					MISC::SET_BIT(&Global_113644, 2);
				}
			}
			break;
	}

	return;
}

void func_60(char* sParam0, int iParam1) // Hash - 0xCBB0D91 ^0x21070E5C
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam1);
	return;
}

char* func_61(int iParam0) // Hash - 0x376506BE ^0x376506BE
{
	char* str;

	str = "";

	switch (iParam0)
	{
		case 0:
			str = _("Various events unfold across San Andreas daily. These events will become blipped on the Radar when nearby.");
			break;
	
		case 1:
			str = _("Flashing blue and red blips indicate situations around San Andreas that you can choose to help with.");
			break;
	
		case 2:
			str = _("If you retrieve a stolen item, you can choose to keep it or return it for a reward.");
			break;
	}

	return str;
}

BOOL func_62() // Hash - 0x8129EEA4 ^0x48B13301
{
	switch (func_63(&Global_32223, 0, 5, false, SCRIPT::GET_ID_OF_THIS_THREAD()))
	{
		case 1:
			return true;
	
		case 0:
			return true;
	}

	return false;
}

int func_63(var uParam0, int iParam1, int iParam2, BOOL bParam3, int iParam4) // Hash - 0x8F9349A ^0xC5C097C1
{
	int i;

	if (iParam1 == 7)
		return 0;

	if (!bParam3)
		if (Global_98159.f_44 == 1)
			return 2;

	if (iParam1 == 0)
	{
		if (func_67(0))
			return 0;
	
		Global_43221 = Global_43221 + 1;
		*uParam0 = Global_43221;
		PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::GET_PLAYER_INDEX(), false);
		Global_23131.f_5 = 0;
	
		if (iParam2 != 5)
			PLAYER::FORCE_CLEANUP(8);
	
		Global_43257 = iParam2;
		Global_43219 = *uParam0;
		Global_43220 = iParam4;
		Global_43218 = 0;
		return 1;
	}

	if (*uParam0 != -1)
	{
		if (Global_43218 > 0)
		{
			i = 0;
		
			for (i = 0; i < Global_43218; i = i + 1)
			{
				if (Global_43224[i /*4*/] == *uParam0)
					return 2;
			}
		}
		else if (Global_43219 == *uParam0)
		{
			return 1;
		}
	
		*uParam0 = -1;
	}

	if (*uParam0 == -1)
	{
		if (!func_65(iParam2))
			return 0;
	
		if (Global_43218 == 8)
			return 0;
	
		Global_43221 = Global_43221 + 1;
		*uParam0 = Global_43221;
		Global_43224[Global_43218 /*4*/] = Global_43221;
		Global_43224[Global_43218 /*4*/].f_1 = iParam1;
		Global_43224[Global_43218 /*4*/].f_2 = iParam2;
		Global_43224[Global_43218 /*4*/].f_3 = 0;
		Global_43218 = Global_43218 + 1;
	
		if (iParam4 != 0)
			func_64(uParam0, iParam4);
	}

	return 2;
}

void func_64(var uParam0, int iParam1) // Hash - 0x6AC97785 ^0x6AC97785
{
	int i;

	if (Global_43218 == 0)
		return;

	if (*uParam0 == -1)
		return;

	i = 0;

	for (i = 0; i < Global_43218; i = i + 1)
	{
		if (Global_43224[i /*4*/] == *uParam0)
			Global_43224[i /*4*/].f_3 = iParam1;
	}

	*uParam0 = -1;
	return;
}

BOOL func_65(int iParam0) // Hash - 0xECB6C71B ^0xECB6C71B
{
	return func_66(iParam0, Global_43257);
}

BOOL func_66(int iParam0, int iParam1) // Hash - 0x1FD727E0 ^0x1FD727E0
{
	if (iParam1 == 15)
		return 1;

	if (iParam0 == 15)
		return 0;

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
			}
		
			return 1;
	
		case 0:
			switch (iParam1)
			{
				case 5:
				case 17:
					return 1;
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
			}
			break;
	
		case 4:
			if (iParam1 == 17)
				return 1;
			break;
	
		case 5:
			break;
	
		case 6:
		case 8:
			if (iParam1 == 5)
				return 1;
			break;
	
		case 7:
			if (iParam1 == 6)
				return 1;
			break;
	
		case 9:
			if (iParam1 == 5)
				return 1;
			break;
	
		case 10:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 17:
					return 1;
			}
			break;
	
		case 11:
			if (iParam1 == 5)
				return 1;
			break;
	
		case 17:
			switch (iParam1)
			{
				case 17:
				case 12:
				case 5:
					return 1;
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
			}
			break;
	
		case 13:
			switch (iParam1)
			{
				case 5:
					return 1;
			}
			break;
	
		case 14:
			switch (iParam1)
			{
				case 5:
					return 1;
			}
			break;
	}

	return 0;
}

BOOL func_67(int iParam0) // Hash - 0x3BAB94E9 ^0x3BAB94E9
{
	if (Global_43257 == 15)
		return false;

	if (func_65(iParam0))
		return false;

	return true;
}

Blip func_68(Ped pedParam0, BOOL bParam1, int iParam2) // Hash - 0xA714218A ^0xAD0F82BD
{
	Blip blip;

	blip = func_69(pedParam0, !bParam1, false);

	if (iParam2 != 145 && HUD::DOES_BLIP_EXIST(blip) && HUD::DOES_TEXT_LABEL_EXIST(&(Global_2028[iParam2 /*29*/].f_3)))
		HUD::SET_BLIP_NAME_FROM_TEXT_FILE(blip, &(Global_2028[iParam2 /*29*/].f_3));

	return blip;
}

Blip func_69(Ped pedParam0, BOOL bParam1, BOOL bParam2) // Hash - 0x2E5A72B ^0x64F26CC0
{
	Blip blip;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return 0;

	blip = HUD::ADD_BLIP_FOR_ENTITY(pedParam0);

	if (ENTITY::IS_ENTITY_A_VEHICLE(pedParam0))
	{
		HUD::SET_BLIP_SCALE(blip, NETWORK::NETWORK_IS_GAME_IN_PROGRESS() ? 1f : 1f);
	
		if (!bParam2)
			HUD::SET_BLIP_AS_FRIENDLY(blip, bParam1);
		else
			HUD::SET_BLIP_COLOUR(blip, 2);
	}
	else if (ENTITY::IS_ENTITY_A_PED(pedParam0))
	{
		HUD::SET_BLIP_SCALE(blip, NETWORK::NETWORK_IS_GAME_IN_PROGRESS() ? 0.7f : 0.7f);
		HUD::SET_BLIP_AS_FRIENDLY(blip, bParam1);
	}
	else if (ENTITY::IS_ENTITY_AN_OBJECT(pedParam0))
	{
		HUD::SET_BLIP_SCALE(blip, NETWORK::NETWORK_IS_GAME_IN_PROGRESS() ? 0.7f : 0.7f);
	}

	return blip;
}

var func_70(BOOL bParam0, var uParam1, var uParam2) // Hash - 0x3EE55A88 ^0x3EE55A88
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

void func_71() // Hash - 0x30845155 ^0xF33591F4
{
	func_72();

	if (!BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE() && iLocal_55 < 3)
		func_150();

	return;
}

void func_72() // Hash - 0x140BEF68 ^0xB297BAF
{
	BOOL flag;
	BOOL flag2;
	Vector3 entityCoords;
	Vector3 entityCoords2;
	float radius;
	var unk5;
	BOOL isPedInAnyVehicle;
	BOOL isPedInAnyHeli;
	float num;
	int hit;
	var endCoords;
	var surfaceNormal;
	var entityHit;
	int shapeTestResult;

	if (func_50(pedLocal_50))
	{
		flag = func_50(pedLocal_50);
		flag2 = func_50(PLAYER::PLAYER_PED_ID());
		entityCoords = { ENTITY::GET_ENTITY_COORDS(pedLocal_50, false) };
		radius = 7.5f;
		unk5 = { radius, radius, radius };
	
		if (flag2)
		{
			entityCoords2 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false) };
			isPedInAnyVehicle = PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false);
			isPedInAnyHeli = PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID());
		}
	
		if (iLocal_55 < 3)
			if (MISC::IS_BULLET_IN_AREA(entityCoords, radius, false) || MISC::IS_PROJECTILE_IN_AREA(entityCoords - unk5, entityCoords + unk5, false))
				iLocal_55 = 3;
	
		switch (iLocal_55)
		{
			case 0:
				STREAMING::REQUEST_ANIM_DICT(sLocal_74);
			
				if (STREAMING::HAS_ANIM_DICT_LOADED(sLocal_74))
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(pedLocal_50, true);
					TASK::TASK_PLAY_ANIM(pedLocal_50, sLocal_74, sLocal_75, 1000f, -8f, -1, 8193, 0, false, false, false);
					iLocal_55 = iLocal_55 + 1;
				}
				break;
		
			case 1:
				if (func_83(SCRIPT_TASK_PLAY_ANIM))
					iLocal_55 = 5;
			
				if (func_82(PLAYER::PLAYER_PED_ID(), pedLocal_50, 35f))
				{
					TASK::OPEN_SEQUENCE_TASK(&iLocal_82);
					TASK::TASK_PLAY_ANIM(0, sLocal_74, sLocal_76, 8f, -8f, -1, 8192, 0, false, false, false);
					TASK::TASK_PLAY_ANIM(0, sLocal_74, sLocal_77, 8f, -2f, -1, 8193, 0, false, false, false);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_82);
					TASK::TASK_PERFORM_SEQUENCE(pedLocal_50, iLocal_82);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_82);
					STREAMING::REMOVE_ANIM_DICT(sLocal_74);
					iLocal_55 = iLocal_55 + 1;
				}
				break;
		
			case 2:
				if (func_83(SCRIPT_TASK_PERFORM_SEQUENCE))
					iLocal_55 = 5;
			
				if (isPedInAnyHeli)
					num = 30f;
				else if (isPedInAnyVehicle)
					num = 17.5f;
				else
					num = 5f;
			
				if (flag && flag2 && func_82(PLAYER::PLAYER_PED_ID(), pedLocal_50, num))
					iLocal_55 = 3;
			
				if (bLocal_56)
					iLocal_55 = 3;
			
				if (func_81())
					iLocal_55 = 3;
			
				if (flag2 && func_80(entityCoords2, entityCoords))
					iLocal_55 = 3;
			
				func_78();
				break;
		
			case 3:
				if (func_73())
					iLocal_55 = iLocal_55 + 1;
				break;
		
			case 4:
				PED::SET_PED_FLEE_ATTRIBUTES(pedLocal_50, 8, true);
				PED::SET_PED_FLEE_ATTRIBUTES(pedLocal_50, 32, true);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_82);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 800);
				TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 9999f, -1, true, false);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_82);
				TASK::TASK_PERFORM_SEQUENCE(pedLocal_50, iLocal_82);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_82);
				iLocal_55 = iLocal_55 + 1;
				break;
		
			case 5:
				if (func_83(SCRIPT_TASK_PERFORM_SEQUENCE))
					iLocal_55 = 5;
			
				if (!ENTITY::IS_ENTITY_ON_SCREEN(pedLocal_50) && SYSTEM::VDIST2(entityCoords, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false)) > 2500f)
				{
					iLocal_81 = SHAPETEST::START_SHAPE_TEST_LOS_PROBE(entityCoords2, entityCoords, 1, 0, 7);
					iLocal_55 = iLocal_55 + 1;
				}
				break;
		
			case 6:
				if (func_83(SCRIPT_TASK_PERFORM_SEQUENCE))
					iLocal_55 = 5;
			
				shapeTestResult = SHAPETEST::GET_SHAPE_TEST_RESULT(iLocal_81, &hit, &endCoords, &surfaceNormal, &entityHit);
			
				if (shapeTestResult == 2)
					if (hit == 1)
						iLocal_55 = iLocal_55 + 1;
					else
						iLocal_55 = iLocal_55 - 1;
				else if (shapeTestResult == 0)
					iLocal_55 = iLocal_55 + 1;
				break;
		
			case 7:
				PED::DELETE_PED(&pedLocal_50);
				break;
		}
	}
	else if (ENTITY::DOES_ENTITY_EXIST(pedLocal_50))
	{
		ENTITY::FREEZE_ENTITY_POSITION(pedLocal_50, false);
	}

	return;
}

BOOL func_73() // Hash - 0x8106290F ^0x6D7C4449
{
	var unk;
	var unk4;
	float num;
	int value;
	float num2;
	float time;
	float num3;
	Vector3 vector;

	unk = { -335.71f, -93.39f, 46f };
	unk4 = { -336.7188f, -93.5128f, 46f };

	switch (iLocal_60)
	{
		case 0:
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(pedLocal_50, sLocal_74, sLocal_77, 3))
			{
				fLocal_58 = 0.349f;
				iLocal_59 = 900;
				uLocal_61 = { unk };
				iLocal_60 = 1;
			}
			else if (ENTITY::IS_ENTITY_PLAYING_ANIM(pedLocal_50, sLocal_74, sLocal_76, 3))
			{
				fLocal_58 = ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(pedLocal_50, sLocal_74, sLocal_76);
				fLocal_58 = func_77(fLocal_58, 0.2f, 0.349f);
			
				if (fLocal_58 != 0.2f)
				{
					num = (1f / (0.349f - 0.161f)) * SYSTEM::TO_FLOAT(900);
					iLocal_59 = SYSTEM::ROUND((fLocal_58 - 0.161f) * num);
					uLocal_61 = { ENTITY::GET_ENTITY_COORDS(pedLocal_50, false) - { 1f, 0f, 0f } };
					iLocal_60 = 1;
				}
				else
				{
					iLocal_60 = 3;
				}
			}
			else
			{
				iLocal_60 = 3;
			}
			break;
	
		case 1:
			ENTITY::FREEZE_ENTITY_POSITION(pedLocal_50, true);
			TASK::TASK_PLAY_ANIM(pedLocal_50, sLocal_74, sLocal_76, 4f, -8f, -1, 0, fLocal_58, true, false, false);
			iLocal_83 = MISC::GET_GAME_TIMER();
			func_76(&blLocal_57);
			func_75();
		
			if (ENTITY::DOES_ENTITY_EXIST(uLocal_64[0]))
				ENTITY::DETACH_ENTITY(uLocal_64[0], true, true);
		
			iLocal_60 = iLocal_60 + 1;
			break;
	
		case 2:
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(pedLocal_50, sLocal_74, sLocal_76, 3))
			{
				value = MISC::GET_GAME_TIMER() - iLocal_83;
				num2 = SYSTEM::TO_FLOAT(value) / SYSTEM::TO_FLOAT(iLocal_59);
				time = fLocal_58 - ((fLocal_58 - 0.161f) * num2);
				time = func_77(time, 0.161f, fLocal_58);
				ENTITY::SET_ENTITY_ANIM_CURRENT_TIME(pedLocal_50, sLocal_74, sLocal_76, time);
				num3 = num2 - 0.12f;
				num3 = func_77(num3, 0f, 0.8f);
				vector = { func_74(uLocal_61, unk4, num3) };
				ENTITY::SET_ENTITY_COORDS(pedLocal_50, vector, false, true, false, true);
			
				if (time == 0.161f)
				{
					ENTITY::FREEZE_ENTITY_POSITION(pedLocal_50, false);
					return true;
				}
			}
			break;
	
		case 3:
			func_76(&blLocal_57);
			func_75();
		
			if (ENTITY::DOES_ENTITY_EXIST(uLocal_64[0]))
				ENTITY::DETACH_ENTITY(uLocal_64[0], true, true);
		
			return true;
	}

	return false;
}

Vector3 func_74(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, float fParam6) // Hash - 0x4C194BC9 ^0x4C194BC9
{
	return ({ 1f - fParam6, 1f - fParam6, 1f - fParam6 } * uParam0) + ({ fParam6, fParam6, fParam6 } * uParam3);
}

void func_75() // Hash - 0xCB677DAF ^0x681D0C3B
{
	if (iLocal_72 != 0)
	{
		GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_72, false);
		iLocal_72 = 0;
	}

	return;
}

void func_76(Blip* pblParam0) // Hash - 0x4C359FE5 ^0xBAF5111C
{
	if (HUD::DOES_BLIP_EXIST(*pblParam0))
	{
		HUD::SET_BLIP_ROUTE(*pblParam0, false);
		HUD::REMOVE_BLIP(pblParam0);
	}

	return;
}

float func_77(float fParam0, float fParam1, float fParam2) // Hash - 0xF4DC03E3 ^0xF4DC03E3
{
	if (fParam0 > fParam2)
		return fParam2;
	else if (fParam0 < fParam1)
		return fParam1;

	return fParam0;
}

void func_78() // Hash - 0x29A05782 ^0x4EFCFF02
{
	float entityAnimCurrentTime;

	if (ENTITY::IS_ENTITY_PLAYING_ANIM(pedLocal_50, sLocal_74, sLocal_76, 3))
	{
		entityAnimCurrentTime = ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(pedLocal_50, sLocal_74, sLocal_76);
	
		if (entityAnimCurrentTime < 0.383793f)
			func_75();
		else if (entityAnimCurrentTime < 0.612112f)
			func_79();
		else if (entityAnimCurrentTime < 1f)
			func_75();
	}
	else if (ENTITY::IS_ENTITY_PLAYING_ANIM(pedLocal_50, sLocal_74, sLocal_77, 3))
	{
		entityAnimCurrentTime = ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(pedLocal_50, sLocal_74, sLocal_77);
	
		if (entityAnimCurrentTime < 0.1124f)
			func_75();
		else if (entityAnimCurrentTime < 0.5566f)
			func_79();
		else if (entityAnimCurrentTime < 0.7546f)
			func_75();
		else if (entityAnimCurrentTime < 0.9f)
			func_79();
		else if (entityAnimCurrentTime < 1f)
			func_75();
	}

	return;
}

void func_79() // Hash - 0x55710FE9 ^0xDFAEF2D9
{
	if (iLocal_72 == 0)
	{
		iLocal_72 = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY(sLocal_73, uLocal_64[0], uLocal_78, uLocal_78, 1065353216, false, false, false);
		GRAPHICS::SET_PARTICLE_FX_LOOPED_COLOUR(iLocal_72, 1f, 1f, 1f, false);
		GRAPHICS::SET_PARTICLE_FX_LOOPED_ALPHA(iLocal_72, 0.2f);
	}

	return;
}

BOOL func_80(Vector3 vParam0, var uParam1, var uParam2, Vector3 vParam3, var uParam4, var uParam5) // Hash - 0x908861B7 ^0x4D365FBB
{
	float playerCurrentStealthNoise;
	float num;
	float num2;
	float num3;
	float num4;

	playerCurrentStealthNoise = PLAYER::GET_PLAYER_CURRENT_STEALTH_NOISE(PLAYER::PLAYER_ID());
	num = func_77(playerCurrentStealthNoise / 14f, 0f, 1f);
	num2 = SYSTEM::VDIST(vParam0, vParam3);
	num3 = func_77(30f - num2, 0f, 30f) / 30f;
	num4 = num * num3;
	return num4 > 0.25f;
}

BOOL func_81() // Hash - 0x9D62F91B ^0x48F20D76
{
	return ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -334.46515f, -93.421715f, 48.573284f, -332.2641f, -82.78552f, 45.810303f, 3f, false, true, 0) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -329.1134f, -83.87273f, 45.79989f, -331.09372f, -88.05348f, 48.718784f, 3f, false, true, 0);
}

BOOL func_82(Ped pedParam0, Ped pedParam1, float fParam2) // Hash - 0x6BFBF267 ^0x3847D223
{
	float num;

	if (ENTITY::DOES_ENTITY_EXIST(pedParam0) && ENTITY::DOES_ENTITY_EXIST(pedParam1))
	{
		num = fParam2 * fParam2;
		return SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(pedParam0, false), ENTITY::GET_ENTITY_COORDS(pedParam1, false)) <= num;
	}

	return false;
}

BOOL func_83(eScriptTaskHash esthParam0) // Hash - 0x6A04677B ^0x8DA0EF98
{
	if (!func_84(pedLocal_50, esthParam0) && !func_84(pedLocal_50, SCRIPT_TASK_SMART_FLEE_PED))
	{
		func_76(&blLocal_57);
		TASK::TASK_SMART_FLEE_PED(pedLocal_50, PLAYER::PLAYER_PED_ID(), 9999f, -1, true, false);
		return true;
	}

	return false;
}

BOOL func_84(Ped pedParam0, eScriptTaskHash esthParam1) // Hash - 0x924CA991 ^0x4CE26E57
{
	int scriptTaskStatus;

	scriptTaskStatus = TASK::GET_SCRIPT_TASK_STATUS(pedParam0, esthParam1);
	return scriptTaskStatus == 1 || scriptTaskStatus == 0;
}

void func_85(var uParam0, var uParam1, var uParam2) // Hash - 0x15B7627B ^0xA0CCC4D
{
	if (func_89(uParam0))
		func_86(33);
	else
		func_150();

	STREAMING::REQUEST_PTFX_ASSET();
	return;
}

void func_86(int iParam0) // Hash - 0xA62BD46A ^0x1E050688
{
	if (iParam0 == -1)
		iParam0 = func_29();

	if (iParam0 == -1)
		return;

	func_88(iParam0);
	MISC::SET_SCRIPT_HIGH_PRIO(false);
	MISC::SET_RANDOM_EVENT_FLAG(true);
	Global_113634 = 0;
	func_87();
	return;
}

void func_87() // Hash - 0x178BF2A7 ^0x744062F5
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)), true);
	
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 32, false);
	}

	return;
}

void func_88(int iParam0) // Hash - 0xE49C42EC ^0xE49C42EC
{
	Global_113637 = iParam0;
	return;
}

BOOL func_89(var uParam0, var uParam1, var uParam2) // Hash - 0x779C344F ^0x779C344F
{
	if (func_95(uParam0, 33, 0, false, false))
		if (func_94(58))
			if (func_91())
				if (func_90())
					return true;

	return false;
}

BOOL func_90() // Hash - 0x44DD83CC ^0x7B62A376
{
	int profileSetting;

	if (Global_152523 == 2)
		return true;
	else if (Global_152523 == 3)
		return false;

	if (NETWORK::NETWORK_IS_SIGNED_IN())
	{
		if (NETWORK::NETWORK_HAS_VALID_ROS_CREDENTIALS())
		{
			if (NETWORK::NETWORK_HAS_ROS_PRIVILEGE_PLAYED_LAST_GEN())
			{
				STATS::STAT_GET_INT(joaat("SP_UNLOCK_EXCLUS_CONTENT"), &profileSetting, -1);
				MISC::SET_BIT(&profileSetting, 2);
				MISC::SET_BIT(&profileSetting, 4);
				MISC::SET_BIT(&profileSetting, 6);
				MISC::SET_BIT(&Global_25, 2);
				MISC::SET_BIT(&Global_25, 4);
				MISC::SET_BIT(&Global_25, 6);
				STATS::STAT_SET_INT(joaat("SP_UNLOCK_EXCLUS_CONTENT"), profileSetting, true);
			
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

BOOL func_91() // Hash - 0x9600486C ^0x9600486C
{
	return func_92(func_93(), 5);
}

BOOL func_92(int iParam0, int iParam1) // Hash - 0x9EA0654 ^0x9EA0654
{
	if (iParam0 == -1)
		return false;

	return IS_BIT_SET(Global_113648.f_32751[iParam0], iParam1);
}

int func_93() // Hash - 0xAC9F9DBD ^0x37D34979
{
	Hash entityModel;

	entityModel = ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID());

	switch (entityModel)
	{
		case joaat("PLAYER_ZERO"):
			return 21;
	
		case joaat("PLAYER_ONE"):
			return 22;
	
		case joaat("PLAYER_TWO"):
			return 23;
	
		default:
		
	}

	return -1;
}

BOOL func_94(int iParam0) // Hash - 0x5ADD7F05 ^0x5ADD7F05
{
	if (iParam0 == 63 || iParam0 == -1)
		return false;

	return IS_BIT_SET(Global_113648.f_18576[iParam0 /*6*/], 3);
}

BOOL func_95(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4, BOOL bParam5, BOOL bParam6) // Hash - 0xC601B4EA ^0xC601B4EA
{
	BOOL flag;
	Vector3 entityCoords;
	int i;
	Vector3 vector;
	int num;

	if (!Global_152234)
		return false;

	if (iParam3 == -1)
		iParam3 = func_29();

	if (iParam3 == -1)
		return false;

	if (iParam3 == 31 || iParam3 == 32)
		if (!func_90())
			return false;

	uLocal_44 = { uParam0 };
	flag = false;

	if (!flag)
	{
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			entityCoords = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		
			if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_149())
				return false;
		}
	
		if (!Global_113648.f_9087)
			return false;
	
		if (func_4(false))
			return false;
	
		if (func_145())
			return false;
	
		if (func_144())
			return false;
	
		if (Global_113637 != -1)
			return false;
	
		if (func_22(func_143()))
			if (func_137(100f, true) != -1)
				return false;
	
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !bParam6)
			if (entityCoords.f_2 - uLocal_44.f_2 > 50f)
				return false;
	
		if (!func_136(iParam3))
			return false;
	
		if (func_22(func_143()))
			if (func_135(func_143()) == 4 || func_135(func_143()) == 5)
				return false;
	
		if (func_22(func_143()))
			if (!func_134(iParam3, iParam4, 145))
				return false;
	
		if (!func_133(Global_113648.f_24997.f_43[iParam3]))
			return false;
	
		if (MISC::GET_GAME_TIMER() - Global_113639 < 150000)
			if (iParam3 != 30)
				return false;
	
		if (func_131())
			return false;
	
		if (MISC::GET_MISSION_FLAG())
			return false;
	
		if (MISC::GET_RANDOM_EVENT_FLAG())
			return false;
	
		if (!func_121(4))
			return false;
	
		if (!func_65(5))
			return false;
	
		if (func_120(iParam3, iParam4) && !bParam5)
			return false;
	
		if (Global_3 && iParam3 != 10)
			return false;
	
		if (INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID())))
			if (INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_AT_COORDS(377.153f, -717.567f, 10.0536f) || INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_AT_COORDS(320.9934f, 265.2515f, 82.1221f) || INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_AT_COORDS(-1425.5645f, -244.3f, 15.8053f))
				return false;
	
		if (iParam3 == 9 && iParam4 == 2 || iParam4 == 5 && !func_120(0, 0))
			return false;
	
		if (Global_32310)
			return false;
	
		if (func_136(30) && !func_120(30, 0))
			if (iParam3 != 30)
				if (SYSTEM::VDIST2(entityCoords, -61.2745f, -1100.4675f, 25.3752f) < 176400f)
					return false;
	
		if (func_22(func_143()))
		{
			for (i = 0; i < 3; i = i + 1)
			{
				vector = { Global_113648.f_2365.f_539.f_2300[i /*3*/] };
				num = Global_113648.f_2365.f_539.f_2296[i];
			
				if (func_119(num))
					if (func_97(i))
						if (!func_96(vector, 0f, 0f, 0f, false))
							if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), vector) < 210f * 210f)
								if (func_143() != i)
									return false;
			}
		}
	}

	return true;
}

BOOL func_96(float fParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5, BOOL bParam6) // Hash - 0x2D46096D ^0xEA41378F
{
	if (bParam6)
		return fParam0 == fParam3 && fParam0.f_1 == fParam3.f_1;

	return fParam0 == fParam3 && fParam0.f_1 == fParam3.f_1 && fParam0.f_2 == fParam3.f_2;
}

BOOL func_97(int iParam0) // Hash - 0x687D9246 ^0x687D9246
{
	int num;

	num = Global_113648.f_2365.f_539.f_2296[iParam0];
	return func_98(num);
}

BOOL func_98(int iParam0) // Hash - 0x2D75E13A ^0x2D75E13A
{
	return func_99(iParam0, 1);
}

int func_99(int iParam0, int iParam1) // Hash - 0x1F92FEBC ^0x1F92FEBC
{
	var unk;
	var unk2;
	int num;
	int num2;
	int num3;
	int num4;

	if (!func_119(iParam0))
		return 0;

	func_100(iParam0, &unk, &unk2, &num, &num2, &num3, &num4);

	if (num4 > 0 || num3 > 0 || num2 > 0 || num >= iParam1)
		return 1;

	return 0;
}

void func_100(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) // Hash - 0x2BEE335D ^0x2BEE335D
{
	func_101(func_112(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
	return;
}

void func_101(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7) // Hash - 0xB807819C ^0xB807819C
{
	int num;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;
	int num7;
	int num8;

	if (func_111(iParam0, iParam1))
	{
		num = func_110(iParam1);
		num2 = func_108(iParam0);
		num3 = func_108(iParam0) - func_108(iParam1);
		num4 = func_110(iParam0) - func_110(iParam1);
		num5 = func_107(iParam0) - func_107(iParam1);
		num6 = func_106(iParam0) - func_106(iParam1);
		num7 = func_105(iParam0) - func_105(iParam1);
		num8 = func_104(iParam0) - func_104(iParam1);
	}
	else
	{
		num = func_110(iParam0);
		num2 = func_108(iParam1);
		num3 = func_108(iParam1) - func_108(iParam0);
		num4 = func_110(iParam1) - func_110(iParam0);
		num5 = func_107(iParam1) - func_107(iParam0);
		num6 = func_106(iParam1) - func_106(iParam0);
		num7 = func_105(iParam1) - func_105(iParam0);
		num8 = func_104(iParam1) - func_104(iParam0);
	}

	while (num8 < 0)
	{
		num8 = num8 + 60;
		num7 = num7 - 1;
	}

	while (num8 > 59)
	{
		num8 = num8 - 60;
		num7 = num7 + 1;
	}

	while (num7 < 0)
	{
		num7 = num7 + 60;
		num6 = num6 - 1;
	}

	while (num7 > 59)
	{
		num7 = num7 - 60;
		num6 = num6 + 1;
	}

	while (num6 < 0)
	{
		num6 = num6 + 24;
		num5 = num5 - 1;
	}

	while (num6 > 23)
	{
		num6 = num6 - 24;
		num5 = num5 + 1;
	}

	while (num5 < 0)
	{
		while (num4 < 0)
		{
			num4 = num4 + 12;
			num3 = num3 - 1;
		}
	
		num5 = num5 + func_103(num, num2);
		num4 = num4 - 1;
		num = SYSTEM::ROUND(func_102(SYSTEM::TO_FLOAT(num + 1), 0f, 12f));
	}

	while (num4 < 0)
	{
		num4 = num4 + 12;
		num3 = num3 - 1;
	}

	while (num4 > 12)
	{
		num4 = num4 - 12;
		num3 = num3 + 1;
	}

	*uParam2 = num8;
	*uParam3 = num7;
	*uParam4 = num6;
	*uParam5 = num5;
	*uParam6 = num4;
	*uParam7 = num3;
	return;
}

float func_102(float fParam0, float fParam1, float fParam2) // Hash - 0xDB08F514 ^0x78C0BF6F
{
	float num;

	if (fParam1 == fParam2)
		return fParam1;

	num = fParam2 - fParam1;
	fParam0 = fParam0 - ((float)SYSTEM::ROUND((fParam0 - fParam1) / num) * num);

	if (fParam0 < fParam1)
		fParam0 = fParam0 + num;

	return fParam0;
}

int func_103(int iParam0, int iParam1) // Hash - 0xD3EBACB3 ^0xD3EBACB3
{
	if (iParam1 < 0)
		iParam1 = 0;

	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
		case 6:
		case 7:
		case 9:
		case 11:
			return 31;
	
		case 3:
		case 5:
		case 8:
		case 10:
			return 30;
	
		case 1:
			if (iParam1 % 4 == 0)
				if (iParam1 % 100 != 0)
					return 29;
				else if (iParam1 % 400 == 0)
					return 29;
		
			return 28;
	}

	return 30;
}

int func_104(int iParam0) // Hash - 0x90B520AB ^0x257AC1C4
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 20) & 63;
}

int func_105(int iParam0) // Hash - 0xC188C91C ^0x48884C7
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 14) & 63;
}

int func_106(int iParam0) // Hash - 0x626AEC54 ^0xDB28E416
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 9) & 31;
}

int func_107(int iParam0) // Hash - 0x826C592F ^0xDEC5AA46
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 4) & 31;
}

int func_108(int iParam0) // Hash - 0xE1B0542C ^0x127A471E
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 26) & 31 * IS_BIT_SET(iParam0, 31) ? -1 : 1) + 2011;
}

var func_109(BOOL bParam0, var uParam1, var uParam2) // Hash - 0x3EE55A88 ^0x3EE55A88
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

int func_110(int iParam0) // Hash - 0x2D4DB85F ^0x2D4DB85F
{
	return iParam0 & 15;
}

BOOL func_111(int iParam0, int iParam1) // Hash - 0xEA08B1 ^0xEA08B1
{
	int num;
	int num2;

	if (!func_119(iParam1) || !func_119(iParam0))
		return 1;

	num = func_108(iParam0);
	num2 = func_108(iParam1);

	if (num > num2)
		return 1;
	else if (num < num2)
		return 0;

	num = func_110(iParam0);
	num2 = func_110(iParam1);

	if (num > num2)
		return 1;
	else if (num < num2)
		return 0;

	num = func_107(iParam0);
	num2 = func_107(iParam1);

	if (num > num2)
		return 1;
	else if (num < num2)
		return 0;

	num = func_106(iParam0);
	num2 = func_106(iParam1);

	if (num > num2)
		return 1;
	else if (num < num2)
		return 0;

	num = func_105(iParam0);
	num2 = func_105(iParam1);

	if (num > num2)
		return 1;
	else if (num < num2)
		return 0;

	num = func_104(iParam0);
	num2 = func_104(iParam1);

	if (num > num2)
		return 1;

	return 0;
}

int func_112() // Hash - 0x9E44C35 ^0xB9993D58
{
	var unk;

	func_118(&unk, CLOCK::GET_CLOCK_SECONDS());
	func_117(&unk, CLOCK::GET_CLOCK_MINUTES());
	func_116(&unk, CLOCK::GET_CLOCK_HOURS());
	func_115(&unk, CLOCK::GET_CLOCK_DAY_OF_MONTH());
	func_114(&unk, CLOCK::GET_CLOCK_MONTH());
	func_113(&unk, CLOCK::GET_CLOCK_YEAR());
	return unk;
}

void func_113(var uParam0, int iParam1) // Hash - 0x15B9927E ^0x4A4674
{
	if (iParam1 <= 0)
		return;

	if (iParam1 > 2043 || iParam1 < 1979)
		return;

	*uParam0 = *uParam0 - *uParam0 & 2080374784;

	if (iParam1 < 2011)
	{
		*uParam0 = *uParam0 || SYSTEM::SHIFT_LEFT(2011 - iParam1, 26);
		*uParam0 = *uParam0 | -2147483648;
	}
	else
	{
		*uParam0 = *uParam0 || SYSTEM::SHIFT_LEFT(iParam1 - 2011, 26);
		*uParam0 = *uParam0 - *uParam0 & -2147483648;
	}

	return;
}

void func_114(var uParam0, int iParam1) // Hash - 0x4C70B2C3 ^0x4C70B2C3
{
	if (iParam1 < 0 || iParam1 > 11)
		return;

	*uParam0 = *uParam0 - *uParam0 & 15;
	*uParam0 = *uParam0 || iParam1;
	return;
}

void func_115(var uParam0, int iParam1) // Hash - 0x2220FC6 ^0x2220FC6
{
	int num;
	int num2;

	num = func_110(*uParam0);
	num2 = func_108(*uParam0);

	if (iParam1 < 1 || iParam1 > func_103(num, num2))
		return;

	*uParam0 = *uParam0 - *uParam0 & 496;
	*uParam0 = *uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4);
	return;
}

void func_116(var uParam0, int iParam1) // Hash - 0x864304A8 ^0x1F5003E2
{
	if (iParam1 < 0 || iParam1 > 24)
		return;

	*uParam0 = *uParam0 - *uParam0 & 15872;
	*uParam0 = *uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9);
	return;
}

void func_117(var uParam0, int iParam1) // Hash - 0x76860AE7 ^0x32308FFF
{
	if (iParam1 < 0 || iParam1 >= 60)
		return;

	*uParam0 = *uParam0 - *uParam0 & 1032192;
	*uParam0 = *uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14);
	return;
}

void func_118(var uParam0, int iParam1) // Hash - 0xDB8A72C0 ^0x4F6D426D
{
	if (iParam1 < 0 || iParam1 >= 60)
		return;

	*uParam0 = *uParam0 - *uParam0 & 66060288;
	*uParam0 = *uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20);
	return;
}

BOOL func_119(int iParam0) // Hash - 0x57D8E518 ^0xD297DD35
{
	int num;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	if (iParam0 == -15)
		return false;

	num = func_104(iParam0);

	if (num < 0 || num >= 60)
		return false;

	num2 = func_105(iParam0);

	if (num2 < 0 || num2 >= 60)
		return false;

	num3 = func_106(iParam0);

	if (num3 < 0 || num3 > 23)
		return false;

	num4 = func_108(iParam0);

	if (num4 <= 0 || num4 > 2043 || num4 < 1979)
		return false;

	num5 = func_110(iParam0);

	if (num5 < 0 || num5 > 11)
		return false;

	num6 = func_107(iParam0);

	if (num6 < 1 || num6 > func_103(num5, num4))
		return false;

	return true;
}

BOOL func_120(int iParam0, int iParam1) // Hash - 0x577FB514 ^0xAAF8B538
{
	if (IS_BIT_SET(Global_113648.f_24997.f_8[iParam0], iParam1))
		return true;

	return false;
}

BOOL func_121(int iParam0) // Hash - 0x97844555 ^0xADCD6DAA
{
	int num;

	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				num = func_143();
			
				if (!func_22(num))
					return false;
			
				switch (iParam0)
				{
					case 9:
					case 0:
						if (!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || func_130() || Global_112695 || Global_32166 || func_129() || func_128(8, -1) || func_127() || func_126() || func_125() || func_124() || Global_113648.f_7690.f_919[num] == 5)
							return false;
						break;
				
					case 1:
						if (PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || func_130() || Global_32166 || func_129() || func_128(8, -1) || func_125() || func_127() || func_126() || func_124() || Global_113648.f_7690.f_919[num] == 5)
							return false;
						break;
				
					case 2:
						if (!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || func_130() || Global_112695 || Global_32166 || func_129() || func_128(8, -1) || func_125() || func_127() || func_126() || func_124() || Global_113648.f_7690.f_919[num] == 5 || Global_43804 != -1)
							return false;
						break;
				
					case 3:
						if (PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || func_130() || Global_112695 || Global_32166 || func_129() || func_128(8, -1) || func_127() || func_126() || func_124() || Global_113648.f_7690.f_919[num] == 5)
							return false;
						break;
				
					case 4:
						if (func_130() || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0 || func_128(8, -1) || func_124() || func_123() || Global_113648.f_7690.f_919[num] == 5)
							return false;
						break;
				
					case 5:
						if (func_128(8, -1) || func_127() || func_126() || func_123() || func_122())
							return false;
					
						if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && STREAMING::GET_PLAYER_SWITCH_TYPE() != 3 && STREAMING::GET_PLAYER_SWITCH_STATE() < 8)
							return false;
						break;
				
					case 6:
						if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
							if (PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0 || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()) || func_130() || Global_32166 || func_129() || func_128(8, -1) || func_126() || func_125() || func_124() || Global_113648.f_7690.f_919[num] == 5)
								return false;
						break;
				
					case 7:
						if (PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || !CAM::IS_SCREEN_FADED_IN() || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || func_130() || func_126() || Global_112695 || Global_32166 || func_129() || Global_44446 || func_128(8, -1) || func_125() || func_123() || func_124() || Global_113648.f_7690.f_919[num] == 5)
							return false;
						break;
				
					case 8:
						if (PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || !CAM::IS_SCREEN_FADED_IN() || PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_SWIMMING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()) || func_130() || Global_112695 || Global_32166 || func_129() || func_128(8, -1) || func_125() || func_123() || func_127() || func_126() || func_124())
							return false;
						break;
				}
			}
			else
			{
				return false;
			}
		}
		else
		{
			return false;
		}
	}
	else
	{
		return false;
	}

	return true;
}

BOOL func_122() // Hash - 0x4228A1C2 ^0x952FE30F
{
	return Global_100720.f_1;
}

BOOL func_123() // Hash - 0xC20DBA70 ^0xAC4006FB
{
	if (Global_97603 != -1)
		return IS_BIT_SET(Global_91469[Global_97603 /*34*/].f_15, 13);

	return false;
}

BOOL func_124() // Hash - 0x3CA1BB47 ^0xB78A1ACB
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("PLAYER_TIMETABLE_SCENE")) > 0)
		return true;

	return false;
}

BOOL func_125() // Hash - 0xE663B8F6 ^0xE663B8F6
{
	if (Global_78819)
		return true;
	else if (Global_63356 && !Global_63362)
		return true;

	return false;
}

BOOL func_126() // Hash - 0xD56328D2 ^0xD56328D2
{
	return Global_100733.f_388 > 0;
}

BOOL func_127() // Hash - 0xD56328D2 ^0xD56328D2
{
	return Global_100733.f_387 > 0;
}

BOOL func_128(int iParam0, int iParam1) // Hash - 0xA14C4D3F ^0xA6034F77
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
				return Global_1653913.f_203[iParam1];
			break;
	}

	return IS_BIT_SET(Global_1653913.f_1048, iParam0);
}

BOOL func_129() // Hash - 0x47FF56D2 ^0x47FF56D2
{
	return Global_1575060;
}

BOOL func_130() // Hash - 0x7FE517FE ^0x128A3BC8
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return Global_98159.f_44 == 1;

	return false;
}

BOOL func_131() // Hash - 0xB12DEAA2 ^0xB12DEAA2
{
	func_132();

	if (Global_9058[Global_20383 /*2811*/][0 /*281*/].f_259 == 2)
		return true;

	return false;
}

void func_132() // Hash - 0x98476CE1 ^0x250FEB7C
{
	if (func_21(14))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_113648.f_28052[0 /*29*/])
				Global_20383 = 0;
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_113648.f_28052[1 /*29*/])
				Global_20383 = 1;
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_113648.f_28052[2 /*29*/])
				Global_20383 = 2;
			else
				Global_20383 = 0;
	}
	else
	{
		Global_20383 = func_143();
	
		if (Global_20383 == 145)
			Global_20383 = 3;
	
		if (Global_78558)
			Global_20383 = 3;
	
		if (Global_20383 > 3)
			Global_20383 = 3;
	}

	return;
}

BOOL func_133(int iParam0) // Hash - 0xCDB90269 ^0xCDB90269
{
	return func_111(func_112(), iParam0);
}

BOOL func_134(int iParam0, int iParam1, int iParam2) // Hash - 0xBEEFD79C ^0xBEEFD79C
{
	BOOL num;
	int num2;

	num = 0;
	num2 = func_143();

	if (iParam2 != 145 && iParam2 == 0 || iParam2 == 1 || iParam2 == 2)
		num2 = iParam2;

	switch (iParam0)
	{
		case 18:
			if (num2 == 2)
				num = 1;
			break;
	
		case 19:
			if (num2 != 2)
				num = 1;
			break;
	
		case 20:
			if (num2 != 1)
				num = 1;
			break;
	
		case 28:
			if (num2 != 2)
				num = 1;
			break;
	
		case 13:
			if (num2 == 0)
				if (iParam1 == 2)
					num = 0;
				else
					num = 1;
			else
				num = 1;
			break;
	
		case 22:
			if (iParam1 == 2 || num2 != 2)
				num = 1;
			break;
	
		case 30:
			if (num2 != 2)
				num = 1;
			break;
	
		default:
			num = 1;
			break;
	}

	return num;
}

int func_135(int iParam0) // Hash - 0x45FC9D61 ^0x45FC9D61
{
	if (!func_22(iParam0))
		return 7;

	return Global_113648.f_7690.f_919[iParam0];
}

BOOL func_136(int iParam0) // Hash - 0xF2A54181 ^0xF2A54181
{
	int num;
	BOOL flag;

	if (iParam0 == 31 || iParam0 == 32)
		if (!func_90())
			return false;

	num = iParam0;

	if (num < 31)
	{
		flag = IS_BIT_SET(Global_113648.f_24997, num);
	}
	else
	{
		num = num - 31;
		flag = IS_BIT_SET(Global_113648.f_24997.f_1, num);
	}

	return flag;
}

int func_137(float fParam0, BOOL bParam1) // Hash - 0xA169FFDC ^0x284941E0
{
	var unk;
	int num;
	int num2;
	float num3;
	float distanceBetweenCoords;
	int num4;
	int i;
	BOOL flag;

	num2 = -1;
	num3 = fParam0;

	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (func_22(func_143()))
		{
			num4 = func_19();
			i = 0;
		
			for (i = 0; i < 63; i = i + 1)
			{
				num = i;
			
				if (IS_BIT_SET(Global_113648.f_18576[num /*6*/], 2) && !IS_BIT_SET(Global_113648.f_18576[num /*6*/], 3))
				{
					func_138(num, &unk);
					distanceBetweenCoords = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), unk.f_6, true);
				
					if (distanceBetweenCoords < num3)
					{
						flag = true;
					
						if (bParam1)
							if (num4 != unk.f_26)
								flag = false;
					
						if (flag)
						{
							num2 = num;
							num3 = distanceBetweenCoords;
						}
					}
				}
			}
		}
	}

	return num2;
}

void func_138(int iParam0, var uParam1) // Hash - 0x2A1FF85D ^0x2A1FF85D
{
	switch (iParam0)
	{
		case 0:
			func_139(uParam1, "Abigail1", func_141(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_140(iParam0), 1, 0);
			break;
	
		case 1:
			func_139(uParam1, "Abigail2", func_141(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_140(iParam0), 1, 0);
			break;
	
		case 2:
			func_139(uParam1, "Barry1", func_141(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_140(iParam0), 1, 0);
			break;
	
		case 3:
			func_139(uParam1, "Barry2", func_141(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_140(iParam0), 1, 1);
			break;
	
		case 4:
			func_139(uParam1, "Barry3", func_141(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_140(iParam0), 0, 0);
			break;
	
		case 5:
			func_139(uParam1, "Barry3A", func_141(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, _("Areas where you can find vehicles with a hidden stash have been marked on the map. Collect these vehicles for Barry."), 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_140(iParam0), 0, 1);
			break;
	
		case 6:
			func_139(uParam1, "Barry3C", func_141(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_140(iParam0), 0, 1);
			break;
	
		case 7:
			func_139(uParam1, "Barry4", func_141(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_140(iParam0), 0, 0);
			break;
	
		case 8:
			func_139(uParam1, "Dreyfuss1", func_141(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, _("The killer's identity and location have been revealed."), 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_140(iParam0), 0, 0);
			break;
	
		case 9:
			func_139(uParam1, "Epsilon1", func_141(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_140(iParam0), 0, 0);
			break;
	
		case 10:
			func_139(uParam1, "Epsilon2", func_141(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_140(iParam0), 1, 0);
			break;
	
		case 11:
			func_139(uParam1, "Epsilon3", func_141(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_140(iParam0), 0, 0);
			break;
	
		case 12:
			func_139(uParam1, "Epsilon4", func_141(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_140(iParam0), 0, 0);
			break;
	
		case 13:
			func_139(uParam1, "Epsilon5", func_141(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_140(iParam0), 1, 0);
			break;
	
		case 14:
			func_139(uParam1, "Epsilon6", func_141(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_140(iParam0), 0, 1);
			break;
	
		case 15:
			func_139(uParam1, "Epsilon7", func_141(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_140(iParam0), 0, 0);
			break;
	
		case 16:
			func_139(uParam1, "Epsilon8", func_141(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_140(iParam0), 1, 0);
			break;
	
		case 17:
			func_139(uParam1, "Extreme1", func_141(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_140(iParam0), 0, 1);
			break;
	
		case 18:
			func_139(uParam1, "Extreme2", func_141(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_140(iParam0), 0, 1);
			break;
	
		case 19:
			func_139(uParam1, "Extreme3", func_141(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_140(iParam0), 0, 1);
			break;
	
		case 20:
			func_139(uParam1, "Extreme4", func_141(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_140(iParam0), 0, 0);
			break;
	
		case 21:
			func_139(uParam1, "Fanatic1", func_141(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_140(iParam0), 1, 0);
			break;
	
		case 22:
			func_139(uParam1, "Fanatic2", func_141(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_140(iParam0), 1, 0);
			break;
	
		case 23:
			func_139(uParam1, "Fanatic3", func_141(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_140(iParam0), 0, 1);
			break;
	
		case 24:
			func_139(uParam1, "Hao1", func_141(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_140(iParam0), 0, 1);
			break;
	
		case 25:
			func_139(uParam1, "Hunting1", func_141(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_140(iParam0), 0, 1);
			break;
	
		case 26:
			func_139(uParam1, "Hunting2", func_141(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_140(iParam0), 0, 1);
			break;
	
		case 27:
			func_139(uParam1, "Josh1", func_141(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_140(iParam0), 1, 0);
			break;
	
		case 28:
			func_139(uParam1, "Josh2", func_141(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_140(iParam0), 1, 1);
			break;
	
		case 29:
			func_139(uParam1, "Josh3", func_141(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_140(iParam0), 1, 1);
			break;
	
		case 30:
			func_139(uParam1, "Josh4", func_141(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_140(iParam0), 1, 0);
			break;
	
		case 31:
			func_139(uParam1, "Maude1", func_141(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_140(iParam0), 0, 1);
			break;
	
		case 32:
			func_139(uParam1, "Minute1", func_141(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_140(iParam0), 0, 1);
			break;
	
		case 33:
			func_139(uParam1, "Minute2", func_141(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_140(iParam0), 0, 1);
			break;
	
		case 34:
			func_139(uParam1, "Minute3", func_141(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_140(iParam0), 0, 1);
			break;
	
		case 35:
			func_139(uParam1, "MrsPhilips1", func_141(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_140(iParam0), 0, 0);
			break;
	
		case 36:
			func_139(uParam1, "MrsPhilips2", func_141(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_140(iParam0), 0, 0);
			break;
	
		case 37:
			func_139(uParam1, "Nigel1", func_141(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_140(iParam0), 1, 0);
			break;
	
		case 38:
			func_139(uParam1, "Nigel1A", func_141(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, _("Areas where you can find celebrity items have been marked on the map. Steal these items for Nigel and Mrs. Thornhill."), 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_140(iParam0), 1, 1);
			break;
	
		case 39:
			func_139(uParam1, "Nigel1B", func_141(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_140(iParam0), 1, 1);
			break;
	
		case 40:
			func_139(uParam1, "Nigel1C", func_141(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_140(iParam0), 1, 1);
			break;
	
		case 41:
			func_139(uParam1, "Nigel1D", func_141(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_140(iParam0), 1, 1);
			break;
	
		case 42:
			func_139(uParam1, "Nigel2", func_141(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_140(iParam0), 1, 1);
			break;
	
		case 43:
			func_139(uParam1, "Nigel3", func_141(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_140(iParam0), 1, 1);
			break;
	
		case 44:
			func_139(uParam1, "Omega1", func_141(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_140(iParam0), 0, 0);
			break;
	
		case 45:
			func_139(uParam1, "Omega2", func_141(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_140(iParam0), 0, 0);
			break;
	
		case 46:
			func_139(uParam1, "Paparazzo1", func_141(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_140(iParam0), 0, 1);
			break;
	
		case 47:
			func_139(uParam1, "Paparazzo2", func_141(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_140(iParam0), 0, 1);
			break;
	
		case 48:
			func_139(uParam1, "Paparazzo3", func_141(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_140(iParam0), 0, 0);
			break;
	
		case 49:
			func_139(uParam1, "Paparazzo3A", func_141(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, _("Areas where you can find celebrity photo opportunities have been marked on the map. Track down and photograph these celebrities for Beverly."), 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_140(iParam0), 0, 1);
			break;
	
		case 50:
			func_139(uParam1, "Paparazzo3B", func_141(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_140(iParam0), 0, 1);
			break;
	
		case 51:
			func_139(uParam1, "Paparazzo4", func_141(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_140(iParam0), 0, 0);
			break;
	
		case 52:
			func_139(uParam1, "Rampage1", func_141(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_140(iParam0), 0, 0);
			break;
	
		case 54:
			func_139(uParam1, "Rampage3", func_141(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_140(iParam0), 1, 0);
			break;
	
		case 55:
			func_139(uParam1, "Rampage4", func_141(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_140(iParam0), 1, 0);
			break;
	
		case 56:
			func_139(uParam1, "Rampage5", func_141(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_140(iParam0), 0, 0);
			break;
	
		case 53:
			func_139(uParam1, "Rampage2", func_141(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_140(iParam0), 1, 0);
			break;
	
		case 57:
			func_139(uParam1, "TheLastOne", func_141(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_140(iParam0), 0, 1);
			break;
	
		case 58:
			func_139(uParam1, "Tonya1", func_141(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, _("Strangers and Freaks can be found throughout San Andreas at ~HUD_COLOUR_FRANKLIN~~BLIP_RANDOM_CHARACTER~~s~"), -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_140(iParam0), 0, 1);
			break;
	
		case 59:
			func_139(uParam1, "Tonya2", func_141(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_140(iParam0), 0, 1);
			break;
	
		case 60:
			func_139(uParam1, "Tonya3", func_141(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_140(iParam0), 0, 1);
			break;
	
		case 61:
			func_139(uParam1, "Tonya4", func_141(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_140(iParam0), 0, 1);
			break;
	
		case 62:
			func_139(uParam1, "Tonya5", func_141(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_140(iParam0), 0, 1);
			break;
	
		default:
			break;
	}

	return;
}

void func_139(var uParam0, char* sParam1, var uParam2, var uParam3, int iParam4, int iParam5, int iParam6, float fParam7, float fParam8, float fParam9, int iParam10, char* sParam11, int iParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24) // Hash - 0x340E6E87 ^0xA591C803
{
	uParam0->f_4 = iParam5;
	*uParam0 = sParam1;
	uParam0->f_1 = { uParam2 };
	uParam0->f_3 = iParam4;
	uParam0->f_5 = iParam6;
	uParam0->f_6 = { fParam7 };
	uParam0->f_9 = iParam10;
	TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_10), sParam11, 16);
	uParam0->f_14 = iParam12;
	uParam0->f_15 = iParam13;
	TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_16), sParam14, 24);
	uParam0->f_22 = iParam15;
	uParam0->f_23 = iParam16;
	uParam0->f_24 = iParam17;
	uParam0->f_25 = iParam18;
	uParam0->f_26 = iParam19;
	uParam0->f_27 = iParam20;
	uParam0->f_28 = iParam21;
	uParam0->f_29 = iParam22;
	uParam0->f_30 = iParam23;
	uParam0->f_31 = iParam24;
	return;
}

int func_140(int iParam0) // Hash - 0xC999F6B2 ^0xC999F6B2
{
	switch (iParam0)
	{
		case 0:
			return 0;
	
		case 1:
			return 0;
	
		case 2:
			return 1;
	
		case 3:
			return 1;
	
		case 4:
			return 0;
	
		case 5:
			return 1;
	
		case 6:
			return 1;
	
		case 7:
			return 0;
	
		case 8:
			return 1;
	
		case 9:
			return 0;
	
		case 10:
			return 0;
	
		case 11:
			return 0;
	
		case 12:
			return 1;
	
		case 13:
			return 0;
	
		case 14:
			return 1;
	
		case 15:
			return 0;
	
		case 16:
			return 1;
	
		case 17:
			return 1;
	
		case 18:
			return 1;
	
		case 19:
			return 1;
	
		case 20:
			return 1;
	
		case 21:
			return 1;
	
		case 22:
			return 1;
	
		case 23:
			return 1;
	
		case 24:
			return 1;
	
		case 25:
			return 1;
	
		case 26:
			return 1;
	
		case 27:
			return 0;
	
		case 28:
			return 1;
	
		case 29:
			return 1;
	
		case 30:
			return 1;
	
		case 31:
			return 0;
	
		case 32:
			return 1;
	
		case 33:
			return 1;
	
		case 34:
			return 1;
	
		case 35:
			return 0;
	
		case 36:
			return 0;
	
		case 37:
			return 0;
	
		case 38:
			return 1;
	
		case 39:
			return 1;
	
		case 40:
			return 1;
	
		case 41:
			return 1;
	
		case 42:
			return 1;
	
		case 43:
			return 1;
	
		case 44:
			return 0;
	
		case 45:
			return 0;
	
		case 46:
			return 1;
	
		case 47:
			return 1;
	
		case 48:
			return 0;
	
		case 49:
			return 1;
	
		case 50:
			return 1;
	
		case 51:
			return 1;
	
		case 52:
			return 1;
	
		case 54:
			return 1;
	
		case 55:
			return 1;
	
		case 56:
			return 1;
	
		case 53:
			return 1;
	
		case 57:
			return 1;
	
		case 58:
			return 1;
	
		case 59:
			return 1;
	
		case 60:
			return 1;
	
		case 61:
			return 1;
	
		case 62:
			return 1;
	
		default:
			break;
	}

	return 0;
}

struct<2> func_141(int iParam0) // Hash - 0xED1235E5 ^0x5E038C1C
{
	var unk;
	var unk3;

	TEXT_LABEL_ASSIGN_STRING(&unk, "", 8);
	unk3 = { func_142(iParam0) };

	if (MISC::IS_STRING_NULL_OR_EMPTY(&unk3))
	{
	}
	else
	{
		TEXT_LABEL_ASSIGN_STRING(&unk, "RC_", 8);
		TEXT_LABEL_APPEND_STRING(&unk, &unk3, 8);
	}

	return unk;
}

struct<2> func_142(int iParam0) // Hash - 0xCF1018CD ^0x607BC6B1
{
	var unk;

	TEXT_LABEL_ASSIGN_STRING(&unk, "", 8);

	switch (iParam0)
	{
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&unk, "ABI1", 8);
			break;
	
		case 1:
			TEXT_LABEL_ASSIGN_STRING(&unk, "ABI2", 8);
			break;
	
		case 2:
			TEXT_LABEL_ASSIGN_STRING(&unk, "BA1", 8);
			break;
	
		case 3:
			TEXT_LABEL_ASSIGN_STRING(&unk, "BA2", 8);
			break;
	
		case 4:
			TEXT_LABEL_ASSIGN_STRING(&unk, "BA3", 8);
			break;
	
		case 5:
			TEXT_LABEL_ASSIGN_STRING(&unk, "BA3A", 8);
			break;
	
		case 6:
			TEXT_LABEL_ASSIGN_STRING(&unk, "BA3C", 8);
			break;
	
		case 7:
			TEXT_LABEL_ASSIGN_STRING(&unk, "BA4", 8);
			break;
	
		case 8:
			TEXT_LABEL_ASSIGN_STRING(&unk, "DRE1", 8);
			break;
	
		case 9:
			TEXT_LABEL_ASSIGN_STRING(&unk, "EPS1", 8);
			break;
	
		case 10:
			TEXT_LABEL_ASSIGN_STRING(&unk, "EPS2", 8);
			break;
	
		case 11:
			TEXT_LABEL_ASSIGN_STRING(&unk, "EPS3", 8);
			break;
	
		case 12:
			TEXT_LABEL_ASSIGN_STRING(&unk, "EPS4", 8);
			break;
	
		case 13:
			TEXT_LABEL_ASSIGN_STRING(&unk, "EPS5", 8);
			break;
	
		case 14:
			TEXT_LABEL_ASSIGN_STRING(&unk, "EPS6", 8);
			break;
	
		case 15:
			TEXT_LABEL_ASSIGN_STRING(&unk, "EPS7", 8);
			break;
	
		case 16:
			TEXT_LABEL_ASSIGN_STRING(&unk, "EPS8", 8);
			break;
	
		case 17:
			TEXT_LABEL_ASSIGN_STRING(&unk, "EXT1", 8);
			break;
	
		case 18:
			TEXT_LABEL_ASSIGN_STRING(&unk, "EXT2", 8);
			break;
	
		case 19:
			TEXT_LABEL_ASSIGN_STRING(&unk, "EXT3", 8);
			break;
	
		case 20:
			TEXT_LABEL_ASSIGN_STRING(&unk, "EXT4", 8);
			break;
	
		case 21:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FAN1", 8);
			break;
	
		case 22:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FAN2", 8);
			break;
	
		case 23:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FAN3", 8);
			break;
	
		case 24:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HAO1", 8);
			break;
	
		case 25:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HUN1", 8);
			break;
	
		case 26:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HUN2", 8);
			break;
	
		case 27:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JOS1", 8);
			break;
	
		case 28:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JOS2", 8);
			break;
	
		case 29:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JOS3", 8);
			break;
	
		case 30:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JOS4", 8);
			break;
	
		case 31:
			TEXT_LABEL_ASSIGN_STRING(&unk, "MAU1", 8);
			break;
	
		case 32:
			TEXT_LABEL_ASSIGN_STRING(&unk, "MIN1", 8);
			break;
	
		case 33:
			TEXT_LABEL_ASSIGN_STRING(&unk, "MIN2", 8);
			break;
	
		case 34:
			TEXT_LABEL_ASSIGN_STRING(&unk, "MIN3", 8);
			break;
	
		case 35:
			TEXT_LABEL_ASSIGN_STRING(&unk, "MRS1", 8);
			break;
	
		case 36:
			TEXT_LABEL_ASSIGN_STRING(&unk, "MRS2", 8);
			break;
	
		case 37:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NI1", 8);
			break;
	
		case 38:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NI1A", 8);
			break;
	
		case 39:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NI1B", 8);
			break;
	
		case 40:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NI1C", 8);
			break;
	
		case 41:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NI1D", 8);
			break;
	
		case 42:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NI2", 8);
			break;
	
		case 43:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NI3", 8);
			break;
	
		case 44:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OME1", 8);
			break;
	
		case 45:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OME2", 8);
			break;
	
		case 46:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PA1", 8);
			break;
	
		case 47:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PA2", 8);
			break;
	
		case 48:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PA3", 8);
			break;
	
		case 49:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PA3A", 8);
			break;
	
		case 50:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PA3B", 8);
			break;
	
		case 51:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PA4", 8);
			break;
	
		case 52:
			TEXT_LABEL_ASSIGN_STRING(&unk, "RAM1", 8);
			break;
	
		case 53:
			TEXT_LABEL_ASSIGN_STRING(&unk, "RAM2", 8);
			break;
	
		case 54:
			TEXT_LABEL_ASSIGN_STRING(&unk, "RAM3", 8);
			break;
	
		case 55:
			TEXT_LABEL_ASSIGN_STRING(&unk, "RAM4", 8);
			break;
	
		case 56:
			TEXT_LABEL_ASSIGN_STRING(&unk, "RAM5", 8);
			break;
	
		case 57:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SAS1", 8);
			break;
	
		case 58:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TON1", 8);
			break;
	
		case 59:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TON2", 8);
			break;
	
		case 60:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TON3", 8);
			break;
	
		case 61:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TON4", 8);
			break;
	
		case 62:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TON5", 8);
			break;
	
		default:
			break;
	}

	return unk;
}

int func_143() // Hash - 0x3C5423D7 ^0x3C5423D7
{
	func_20();
	return Global_113648.f_2365.f_539.f_4321;
}

BOOL func_144() // Hash - 0xB72C022E ^0x452A7B6D
{
	Vehicle vehiclePedIsIn;

	if (Global_32315)
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			vehiclePedIsIn = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(vehiclePedIsIn, false))
				if (!PED::IS_PED_INJURED(VEHICLE::GET_PED_IN_VEHICLE_SEAT(vehiclePedIsIn, 0, false)))
					return true;
		}
	}

	return false;
}

BOOL func_145() // Hash - 0x7055FFB1 ^0x7055FFB1
{
	if (func_148() && !func_149())
		return true;

	if (func_147() && func_146())
		return true;

	return false;
}

BOOL func_146() // Hash - 0x79CF7679 ^0x79CF7679
{
	return Global_113366 > 0;
}

BOOL func_147() // Hash - 0xCF2296C0 ^0xCF2296C0
{
	if (Global_97603 != -1)
		return true;

	return false;
}

BOOL func_148() // Hash - 0x98CCC132 ^0x97B0D6ED
{
	if (Global_97603 != -1)
		return IS_BIT_SET(Global_91469[Global_97603 /*34*/].f_15, 20);

	return false;
}

BOOL func_149() // Hash - 0x29CB2928 ^0xE369A18D
{
	if (MISC::IS_PC_VERSION())
		if (MISC::GET_CITY_DENSITY() == 1f)
			return true;

	return false;
}

void func_150() // Hash - 0xB6A82EB ^0xF1C5728
{
	STREAMING::REMOVE_PTFX_ASSET();
	func_76(&blLocal_57);
	func_151(-1);
	SCRIPT::TERMINATE_THIS_THREAD();
	return;
}

void func_151(int iParam0) // Hash - 0xE6B11918 ^0x37AF2AD2
{
	var name;

	if (iParam0 == -1)
		iParam0 = func_29();

	if (iParam0 == -1)
		return;

	if (func_162())
	{
		func_155(iParam0);
		HUD::SET_MISSION_NAME(false, 0);
		Global_113639 = MISC::GET_GAME_TIMER();
		func_154(30000);
		TEXT_LABEL_ASSIGN_STRING(&name, func_153(Global_113637, true), 64);
	
		if (func_28(Global_113637) > 0)
		{
			TEXT_LABEL_APPEND_STRING(&name, " Variation ", 64);
			TEXT_LABEL_APPEND_INT(&name, Global_113636, 64);
		}
	
		STATS::PLAYSTATS_RANDOM_MISSION_DONE(&name, Global_113634, MISC::GET_GAME_TIMER() - Global_113635, 0);
	}
	else if (IS_BIT_SET(Global_113644, 0) && Global_113648.f_24997.f_2 < 3)
	{
		MISC::CLEAR_BIT(&Global_113644, 0);
	}

	func_152(&Global_32223);
	Global_113638 = false;
	func_88(-1);
	return;
}

void func_152(var uParam0) // Hash - 0x995C9E2 ^0x995C9E2
{
	if (*uParam0 == -1)
		return;

	if (!*uParam0 == Global_43219)
	{
		*uParam0 = -1;
		return;
	}

	*uParam0 = -1;
	Global_43218 = 0;
	Global_43220 = 0;
	Global_43257 = 15;
	Global_63359 = 0;
	Global_63360 = 0;
	return;
}

char* func_153(int iParam0, BOOL bParam1) // Hash - 0x959319CB ^0x94B43822
{
	switch (iParam0)
	{
		case 0:
			return "RE_ACCIDENT";
	
		case 1:
			return "RE_ATMROBBERY";
	
		case 2:
			return "RE_BUSTOUR";
	
		case 3:
			return "RE_DOMESTIC";
	
		case 4:
			return "RE_GETAWAYDRIVER";
	
		case 5:
			return "RE_SHOPROBBERY";
	
		case 6:
			return "RE_SNATCHED";
	
		case 7:
			return "RE_LURED";
	
		case 8:
			return "RE_BIKETHIEFSTAMP";
	
		case 9:
			return "RE_SECURITYVAN";
	
		case 10:
			return "RE_PAPARAZZI";
	
		case 11:
			return "RE_CHASETHIEVES";
	
		case 12:
			return "RE_DEALGONEWRONG";
	
		case 13:
			return "RE_HITCHLIFT";
	
		case 14:
			return "RE_STAG";
	
		case 15:
			return "RE_ARREST";
	
		case 16:
			return "RE_CRASHRESCUE";
	
		case 17:
			return "RE_CARTHEFT";
	
		case 18:
			return "RE_CULTSHOOTOUT";
	
		case 19:
			return "RE_GANGFIGHT";
	
		case 20:
			return "RE_GANGINTIMIDATION";
	
		case 21:
			return "RE_PRISONVANBREAK";
	
		case 22:
			return "RE_PRISONERLIFT";
	
		case 23:
			return "RE_ABANDONEDCAR";
	
		case 24:
			return "RE_BURIAL";
	
		case 25:
			return "RE_MUGGING";
	
		case 26:
			return "RE_BIKETHIEF";
	
		case 27:
			return "RE_DRUNKDRIVER";
	
		case 28:
			return "RE_HOMELANDSECURITY";
	
		case 29:
			return "RE_BORDERPATROL";
	
		case 30:
			return "RE_SIMEONYETARIAN";
	
		case 31:
			return "RE_DUEL";
	
		case 32:
			return "RE_SEAPLANE";
	
		case 33:
			return "RE_MONKEYPHOTO";
	
		case -1:
			return "RE_NONE";
	}

	!bParam1;
	return "UNKNOWN";
}

void func_154(int iParam0) // Hash - 0xC0234809 ^0x4FD853DC
{
	Global_43808 = MISC::GET_GAME_TIMER() + iParam0;
	return;
}

void func_155(int iParam0) // Hash - 0x881273A8 ^0x881273A8
{
	func_156(iParam0, 0, func_161(iParam0));
	return;
}

void func_156(int iParam0, int iParam1, int iParam2) // Hash - 0xA7DBC311 ^0xA7DBC311
{
	int unk;
	var unk2;

	unk = func_112();
	func_159(&unk, 0, 0, iParam2, iParam1, 0, 0);
	func_158(iParam0, &unk);
	unk2 = { func_157(&unk) };
	return;
}

struct<16> func_157(var uParam0) // Hash - 0xBC5EBA95 ^0xA7ACDBBE
{
	var unk;
	int num;

	TEXT_LABEL_ASSIGN_STRING(&unk, "", 64);
	num = func_106(*uParam0);

	if (num < 10)
		TEXT_LABEL_APPEND_INT(&unk, 0, 64);

	TEXT_LABEL_APPEND_INT(&unk, num, 64);
	TEXT_LABEL_APPEND_STRING(&unk, ":", 64);
	num = func_105(*uParam0);

	if (num < 10)
		TEXT_LABEL_APPEND_INT(&unk, 0, 64);

	TEXT_LABEL_APPEND_INT(&unk, num, 64);
	TEXT_LABEL_APPEND_STRING(&unk, ":", 64);
	num = func_104(*uParam0);

	if (num < 10)
		TEXT_LABEL_APPEND_INT(&unk, 0, 64);

	TEXT_LABEL_APPEND_INT(&unk, num, 64);
	TEXT_LABEL_APPEND_STRING(&unk, "  ", 64);
	num = func_107(*uParam0);

	if (num < 10)
		TEXT_LABEL_APPEND_INT(&unk, 0, 64);

	TEXT_LABEL_APPEND_INT(&unk, num, 64);
	TEXT_LABEL_APPEND_STRING(&unk, "/", 64);
	num = func_110(*uParam0);

	if (num < 9)
		TEXT_LABEL_APPEND_INT(&unk, 0, 64);

	TEXT_LABEL_APPEND_INT(&unk, num + 1, 64);
	TEXT_LABEL_APPEND_STRING(&unk, "/", 64);
	TEXT_LABEL_APPEND_INT(&unk, func_108(*uParam0), 64);
	return unk;
}

void func_158(int iParam0, var uParam1) // Hash - 0x63EF72B0 ^0xC612AA53
{
	Global_113648.f_24997.f_43[iParam0] = *uParam1;
	return;
}

void func_159(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Hash - 0xB28A4507 ^0xB28A4507
{
	int num;
	int i;
	int num2;
	int j;
	int k;
	int l;
	int m;

	num = func_108(*uParam0);
	i = func_110(*uParam0);
	num2 = func_107(*uParam0);
	j = func_106(*uParam0);
	k = func_105(*uParam0);
	l = func_104(*uParam0);

	if (iParam6 == 0 && iParam5 == 0 && iParam4 == 0 && iParam3 == 0 && iParam2 == 0 && iParam1 == 0)
		return;

	if (iParam1 < 0)
		return;

	if (iParam2 < 0)
		return;

	if (iParam3 < 0)
		return;

	if (iParam4 < 0)
		return;

	if (iParam5 < 0)
		return;

	if (iParam6 < 0)
		return;

	for (l = l + iParam1; l >= 60; l = l - 60)
	{
		iParam2 = iParam2 + 1;
	}

	for (k = k + iParam2; k >= 60; k = k - 60)
	{
		iParam3 = iParam3 + 1;
	}

	for (j = j + iParam3; j >= 24; j = j - 24)
	{
		iParam4 = iParam4 + 1;
	}

	num2 = num2 + iParam4;

	for (m = func_103(i, num); num2 > m; m = func_103(i, num))
	{
		i = i + 1;
		num2 = num2 - m;
	
		if (i > 11)
		{
			num = num + 1;
			i = i - 12;
		}
	}

	for (i = i + iParam5; i > 11; i = i - 12)
	{
		iParam6 = iParam6 + 1;
	}

	num = num + iParam6;
	func_160(uParam0, l, k, j, num2, i, num);
	return;
}

void func_160(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Hash - 0x733BFBA2 ^0x733BFBA2
{
	func_118(uParam0, iParam1);
	func_117(uParam0, iParam2);
	func_116(uParam0, iParam3);
	func_114(uParam0, iParam5);
	func_115(uParam0, iParam4);
	func_113(uParam0, iParam6);
	return;
}

int func_161(int iParam0) // Hash - 0x4219564C ^0x4219564C
{
	int num;

	switch (iParam0)
	{
		case 23:
			num = 30;
			break;
	
		case 0:
			num = 30;
			break;
	
		case 15:
			num = 30;
			break;
	
		case 1:
			num = 200;
			break;
	
		case 26:
			num = 30;
			break;
	
		case 8:
			num = 30;
			break;
	
		case 29:
			num = 30;
			break;
	
		case 24:
			num = 30;
			break;
	
		case 2:
			num = 0;
			break;
	
		case 17:
			num = 30;
			break;
	
		case 11:
			num = 30;
			break;
	
		case 16:
			num = 30;
			break;
	
		case 18:
			num = 30;
			break;
	
		case 12:
			num = 120;
			break;
	
		case 3:
			num = 60;
			break;
	
		case 27:
			num = 60;
			break;
	
		case 19:
			num = 30;
			break;
	
		case 20:
			num = 30;
			break;
	
		case 4:
			num = 60;
			break;
	
		case 28:
			num = 30;
			break;
	
		case 13:
			num = 35;
			break;
	
		case 7:
			num = 30;
			break;
	
		case 25:
			num = 40;
			break;
	
		case 10:
			num = 30;
			break;
	
		case 22:
			num = 30;
			break;
	
		case 21:
			num = 30;
			break;
	
		case 5:
			num = 30;
			break;
	
		case 30:
			num = 60;
			break;
	
		case 9:
			num = 60;
			break;
	
		case 6:
			num = 40;
			break;
	
		case 14:
			num = 40;
			break;
	}

	return num;
}

BOOL func_162() // Hash - 0x1121F6F2 ^0x90CE37A6
{
	if (Global_113637 == func_29() && MISC::GET_RANDOM_EVENT_FLAG() && Global_113638)
		return true;

	return false;
}

