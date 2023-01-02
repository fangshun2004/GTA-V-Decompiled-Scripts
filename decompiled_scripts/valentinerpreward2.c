#region Local Var
	char* sLocal_0 = 0;
	BOOL bLocal_1 = 0;
	int iLocal_2 = 0;
	BOOL bLocal_3 = 0;
	BOOL bLocal_4 = 0;
	Object obLocal_5 = 0;
	BOOL bLocal_6 = 0;
	BOOL bLocal_7 = 0;
	var uLocal_8 = 0;
	var uLocal_9 = 0;
	var uLocal_10 = 0;
	var uLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	int iLocal_19 = 0;
	int iLocal_20 = 0;
	int iLocal_21 = 0;
	BOOL bLocal_22 = 0;
	BOOL bLocal_23 = 0;
	int iLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	int iLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	int iLocal_30 = 0;
	BOOL bLocal_31 = 0;
	int iLocal_32 = 0;
	int iLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 3;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	int iLocal_41 = 0;
	var uLocal_42 = 32;
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
	BOOL bLocal_75 = 0;
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
	BOOL bLocal_90 = 0;
	BOOL bLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 0;
#endregion

void main() // Hash - 0xA1DFABF2 ^0xC7F76C26
{
	int num;

	sLocal_0 = "1.64.02";
	iLocal_20 = -1;
	iLocal_21 = -1;
	iLocal_27 = 10000;
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	uScriptParam_0 == uScriptParam_0;
	Global_1577991 = MISC::GET_HASH_KEY(sLocal_0);
	num = MISC::GET_GAME_TIMER() + 10000;

	while (MISC::GET_GAME_TIMER() < num)
	{
		SYSTEM::WAIT(0);
	}

	while (true)
	{
		if (func_119())
			func_117();
	
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && Global_2692733.f_3)
		{
			func_116();
			func_115();
			func_112();
			func_110();
			func_109();
			func_103();
			func_95();
			func_92();
			func_89();
			func_86();
			func_77();
			func_76();
			func_68();
			func_67();
			func_62();
			func_58();
			func_53();
			func_43();
			func_24();
			func_3();
		}
	
		if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
		{
			func_2();
			func_1();
		}
	
		SYSTEM::WAIT(0);
	}

	SCRIPT::TERMINATE_THIS_THREAD();
	return;
}

void func_1() // Hash - 0xAE7030AD ^0xF916C61A
{
	if (*Global_4718592.f_113724 == 380938673 || *Global_4718592.f_113724 == 1597839856)
		if (!IS_BIT_SET(Global_4718592.f_35, 2))
			MISC::SET_BIT(&(Global_4718592.f_35), 2);

	return;
}

void func_2() // Hash - 0xA340D16D ^0xA0E1E96E
{
	if (!Global_2683862.f_24)
		return;

	if (!PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()))
		return;

	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_SCRIPT_RIGHT_AXIS_X, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_SCRIPT_RIGHT_AXIS_Y, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_SCALED_LOOK_RIGHT_ONLY, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_SCALED_LOOK_LEFT_ONLY, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_LOOK_LEFT, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_LOOK_RIGHT, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_SCALED_LOOK_LR, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_LOOK_LR, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_LOOK_LEFT_ONLY, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_LOOK_RIGHT_ONLY, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_CURSOR_X, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_CURSOR_Y, true);
	return;
}

void func_3() // Hash - 0xDDF07D69 ^0x24CFC1A0
{
	Hash model;
	int num;
	int data;
	float num2;
	float num3;
	Vector3 vector;

	if (func_23(&uLocal_14))
	{
		MISC::SET_BIT(&Global_8254, 2);
	
		if (func_22(&uLocal_14, 60000, false))
		{
			func_21(&uLocal_14, false, false);
			func_20(&uLocal_14);
		}
	}

	if (func_23(&uLocal_12) && func_22(&uLocal_12, 1000, false))
	{
		if (iLocal_21 == -1)
		{
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				iLocal_21 = AUDIO::GET_SOUND_ID();
				AUDIO::PLAY_SOUND_FROM_ENTITY(iLocal_21, "05", PLAYER::PLAYER_PED_ID(), "DLC_GR_CS2_Sounds", false, 0);
			}
		}
		else if (func_22(&uLocal_12, 4000, false))
		{
			if (!AUDIO::HAS_SOUND_FINISHED(iLocal_21))
				AUDIO::STOP_SOUND(iLocal_21);
		
			AUDIO::RELEASE_SOUND_ID(iLocal_21);
			iLocal_21 = -1;
			AUDIO::STOP_AUDIO_SCENE("DLC_GR_CS2_General_Scene");
			func_21(&uLocal_12, false, false);
			func_20(&uLocal_12);
		}
	}

	if (!bLocal_6 && !func_15())
		return;

	bLocal_6 = true;
	MISC::SET_BIT(&Global_8254, 2);

	if (!ENTITY::DOES_ENTITY_EXIST(obLocal_5))
	{
		model = joaat("IMP_PROP_SHIP_01A");
		STREAMING::REQUEST_MODEL(model);
	
		if (STREAMING::HAS_MODEL_LOADED(model))
		{
			obLocal_5 = OBJECT::CREATE_OBJECT_NO_OFFSET(model, 360.8759f, 5623.4272f, 780.1747f, false, false, true);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(model);
			ENTITY::FREEZE_ENTITY_POSITION(obLocal_5, true);
			ENTITY::SET_ENTITY_LOD_DIST(obLocal_5, 8000);
			num = func_14(7869, -1, 0);
			func_11(7869, num + 1, -1, true, false);
			data.f_1 = 1;
			data = 24;
			STATS::PLAYSTATS_GUNRUNNING_MISSION_ENDED(&data);
			uLocal_16 = { ENTITY::GET_ENTITY_COORDS(obLocal_5, false) };
			iLocal_19 = 0;
		}
	}
	else
	{
		func_10();
	
		if (CAM::IS_SCREEN_FADED_IN() || CAM::IS_SCREEN_FADING_IN())
		{
			if (iLocal_20 == -1)
			{
				AUDIO::START_AUDIO_SCENE("DLC_GR_CS2_General_Scene");
				iLocal_20 = AUDIO::GET_SOUND_ID();
				AUDIO::PLAY_SOUND_FROM_ENTITY(iLocal_20, "07", obLocal_5, "DLC_GR_CS2_Sounds", false, 0);
			}
		
			if (!bLocal_7)
			{
				if (func_22(&uLocal_8, 4500, false))
				{
					ENTITY::FREEZE_ENTITY_POSITION(obLocal_5, false);
					func_21(&uLocal_8, false, false);
					func_20(&uLocal_8);
					func_9(&uLocal_10, false, false);
					bLocal_7 = true;
				}
			}
			else
			{
				num2 = SYSTEM::TO_FLOAT(func_8(&uLocal_10, false, false)) / SYSTEM::TO_FLOAT(func_7());
				num3 = SYSTEM::TO_FLOAT(func_8(&uLocal_8, false, false)) / SYSTEM::TO_FLOAT(func_6());
				num3 = num3 * num2;
				vector = { func_4(uLocal_16, func_5(), num3) };
				ENTITY::SET_ENTITY_COORDS(obLocal_5, vector, true, false, false, true);
			
				if (num3 >= 1f)
				{
					iLocal_19 = iLocal_19 + 1;
					uLocal_16 = { ENTITY::GET_ENTITY_COORDS(obLocal_5, false) };
					func_21(&uLocal_8, false, false);
					func_20(&uLocal_8);
				
					if (func_6() == -1)
					{
						OBJECT::DELETE_OBJECT(&obLocal_5);
						MISC::FORCE_LIGHTNING_FLASH();
					
						if (!AUDIO::HAS_SOUND_FINISHED(iLocal_20))
							AUDIO::STOP_SOUND(iLocal_20);
					
						AUDIO::RELEASE_SOUND_ID(iLocal_20);
						iLocal_20 = -1;
						func_9(&uLocal_12, false, false);
						func_9(&uLocal_14, false, false);
						func_21(&uLocal_10, false, false);
						func_20(&uLocal_10);
						uLocal_16 = { 0f, 0f, 0f };
						iLocal_19 = 0;
						bLocal_6 = false;
						bLocal_7 = false;
					}
				}
			}
		}
	}

	return;
}

Vector3 func_4(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, float fParam6) // Hash - 0x4C194BC9 ^0x4C194BC9
{
	return ({ 1f - fParam6, 1f - fParam6, 1f - fParam6 } * uParam0) + ({ fParam6, fParam6, fParam6 } * uParam3);
}

Vector3 func_5() // Hash - 0x18519857 ^0x18519857
{
	switch (iLocal_19)
	{
		case 0:
			return 306.567f, 5652.283f, 785.594f;
	
		case 1:
			return -1082.8652f, 6390.5195f, 924.2493f;
	
		case 2:
			return -2542.874f, 7217.5137f, 1051.3335f;
	
		case 3:
			return -4139.1064f, 8143.3022f, 1412.694f;
	
		default:
		
	}

	return 0f, 0f, 0f;
}

int func_6() // Hash - 0x6629FE61 ^0x1A9C302A
{
	switch (iLocal_19)
	{
		case 0:
			return 2000;
	
		case 1:
			return 1000;
	
		case 2:
			return 100;
	
		case 3:
			return 50;
	
		default:
		
	}

	return -1;
}

int func_7() // Hash - 0x729E933 ^0xB1968CD9
{
	return 3150;
}

int func_8(var uParam0, BOOL bParam1, BOOL bParam2) // Hash - 0xAB71C5AE ^0x10186D95
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam1)
		if (!bParam2)
			return NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0);
		else
			return NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME_ACCURATE(), *uParam0);

	return NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), *uParam0);
}

void func_9(var uParam0, BOOL bParam1, BOOL bParam2) // Hash - 0x6F79B86B ^0x7B76DD66
{
	if (uParam0->f_1 == 0)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam1)
			if (!bParam2)
				*uParam0 = NETWORK::GET_NETWORK_TIME();
			else
				*uParam0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		else
			*uParam0 = MISC::GET_GAME_TIMER();
	
		uParam0->f_1 = 1;
	}

	return;
}

void func_10() // Hash - 0x51837861 ^0xD443485E
{
	float entityRotation;

	entityRotation = { ENTITY::GET_ENTITY_ROTATION(obLocal_5, 2) };
	entityRotation = 0f;
	entityRotation.f_1 = 0f;
	entityRotation.f_2 = entityRotation.f_2 + 1f;
	ENTITY::SET_ENTITY_ROTATION(obLocal_5, entityRotation, 2, true);
	return;
}

void func_11(int iParam0, int iParam1, int iParam2, BOOL bParam3, BOOL bParam4) // Hash - 0x7D768555 ^0x693A841
{
	Hash statName;

	bParam4;
	statName = Global_2805027[iParam0 /*3*/][func_12(iParam2)];

	if (statName != 0)
		STATS::STAT_SET_INT(statName, iParam1, bParam3);

	return;
}

int func_12(int iParam0) // Hash - 0x1A3F3220 ^0x1A3F3220
{
	int num;
	int num2;

	num = iParam0;

	if (num == -1)
	{
		num2 = func_13();
	
		if (num2 > -1)
		{
			Global_2804739 = 0;
			num = num2;
		}
		else
		{
			num = 0;
			Global_2804739 = 1;
		}
	}

	return num;
}

int func_13() // Hash - 0x47FF56D2 ^0x47FF56D2
{
	return Global_1574918;
}

int func_14(int iParam0, int iParam1, int iParam2) // Hash - 0xAA1CFEC0 ^0x19FC2C28
{
	Hash statHash;
	int outValue;

	if (iParam0 != 14192)
	{
		iParam2 == 0;
		statHash = Global_2805027[iParam0 /*3*/][func_12(iParam1)];
	
		if (STATS::STAT_GET_INT(statHash, &outValue, -1))
			return outValue;
	}

	return 0;
}

BOOL func_15() // Hash - 0x48656DF7 ^0x9B01211A
{
	if (func_19(22107, -1) && Global_2639783 == 7 && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false) && func_18(PLAYER::PLAYER_PED_ID(), 426.433f, 5614.172f, 766.414f, 1f) && Global_2684799.f_3076.f_178 >= 1 && Global_2684799.f_3076.f_178 < 4 && func_17() && func_16())
		return true;

	return false;
}

BOOL func_16() // Hash - 0x89D2542F ^0x49754F4A
{
	if (func_19(15476, -1) && func_14(5453, func_13(), 0) > 577)
		return true;

	return false;
}

BOOL func_17() // Hash - 0xC61AA4B9 ^0x5D673268
{
	int weatherType1;
	int weatherType2;
	float percentWeather2;

	MISC::GET_CURR_WEATHER_STATE(&weatherType1, &weatherType2, &percentWeather2);

	if (percentWeather2 < 0.5f)
		if (weatherType1 == joaat("RAIN") || weatherType1 == joaat("THUNDER") || weatherType2 == joaat("XMAS"))
			return true;
	else if (weatherType2 == joaat("RAIN") || weatherType2 == joaat("THUNDER") || weatherType2 == joaat("XMAS"))
		return true;

	return false;
}

BOOL func_18(Ped pedParam0, float fParam1, float fParam2, float fParam3, float fParam4) // Hash - 0x52131E1C ^0x27D7D87A
{
	return SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(pedParam0, true), fParam1) <= fParam4 * fParam4;
}

BOOL func_19(int iParam0, int iParam1) // Hash - 0x6099A833 ^0x46750A9D
{
	if (iParam1 == -1)
		iParam1 = func_13();

	return STATS::GET_PACKED_STAT_BOOL_CODE(iParam0, iParam1);
}

void func_20(var uParam0) // Hash - 0xBA5A1D5A ^0x33644ECA
{
	uParam0->f_1 = 0;
	return;
}

void func_21(var uParam0, BOOL bParam1, BOOL bParam2) // Hash - 0x6A4AB354 ^0xD9372BF4
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam1)
		if (!bParam2)
			*uParam0 = NETWORK::GET_NETWORK_TIME();
		else
			*uParam0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	else
		*uParam0 = MISC::GET_GAME_TIMER();

	uParam0->f_1 = 1;
	return;
}

BOOL func_22(var uParam0, int iParam1, BOOL bParam2) // Hash - 0x154EA353 ^0xBFA672B0
{
	if (iParam1 == -1)
		return true;

	func_9(uParam0, bParam2, false);

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam2)
		if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0)) >= iParam1)
			return true;
	else if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), *uParam0)) >= iParam1)
		return true;

	return false;
}

BOOL func_23(var uParam0) // Hash - 0xD73B9827 ^0x2D8CE86B
{
	return uParam0->f_1;
}

void func_24() // Hash - 0x226E98B6 ^0x819F9104
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION() || !func_41() || !func_40(PLAYER::PLAYER_ID(), false, true))
		return;

	if (!func_39(PLAYER::PLAYER_ID(), false) || !func_37(PLAYER::PLAYER_ID()))
		return;

	if (func_36())
		func_25();

	return;
}

void func_25() // Hash - 0xCDE59561 ^0xCDE59561
{
	int i;
	var unk;

	unk = 20;

	for (i = 0; i < 20; i = i + 1)
	{
		unk[i] = i;
	}

	for (i = 0; i < 3; i = i + 1)
	{
		if (i == 0)
		{
			if (MISC::GET_RANDOM_INT_IN_RANGE(0, 100) <= 4)
			{
				Global_1968823[i /*10*/] = func_35(i, true, &unk);
				Global_1968823[i /*10*/].f_9 = 2;
			}
			else
			{
				Global_1968823[i /*10*/] = func_35(i, false, &unk);
				Global_1968823[i /*10*/].f_9 = 0;
			}
		}
		else
		{
			Global_1968823[i /*10*/] = func_35(i, false, &unk);
			Global_1968823[i /*10*/].f_9 = 1;
		}
	
		func_31(i);
		func_26(i);
	}

	return;
}

void func_26(int iParam0) // Hash - 0xEA61EED7 ^0xC1572234
{
	int i;
	int startRange;
	int endRange;
	BOOL flag;

	flag = false;

	for (i = 0; i < 3; i = i + 1)
	{
		func_30(iParam0, Global_1968823[iParam0 /*10*/].f_1[i], &startRange, &endRange);
		endRange = endRange + 1;
		Global_1968823[iParam0 /*10*/].f_5[i] = MISC::GET_RANDOM_INT_IN_RANGE(startRange, endRange);
	
		if (iParam0 > 0 && func_29(Global_1968823[iParam0 /*10*/].f_1[i], Global_1968823[iParam0 /*10*/].f_5[i]))
		{
			if (flag)
				Global_1968823[iParam0 /*10*/].f_5[i] = Global_1968823[iParam0 /*10*/].f_5[i] - func_27(Global_1968823[iParam0 /*10*/].f_1[i]);
		
			flag = true;
		}
	}

	return;
}

int func_27(int iParam0) // Hash - 0xB637F506 ^0xB637F506
{
	return func_28(iParam0) / 5;
}

int func_28(int iParam0) // Hash - 0x3DDB3BFB ^0x3DDB3BFB
{
	switch (iParam0)
	{
		case 1:
			return Global_262145.f_24388;
	
		case 2:
			return Global_262145.f_24389;
	
		case 3:
			return Global_262145.f_24390;
	
		case 4:
			return Global_262145.f_24391;
	
		case 5:
			return Global_262145.f_24392;
	
		case 6:
			return Global_262145.f_24393;
	
		case 0:
			return Global_262145.f_24394;
	
		default:
		
	}

	return 0;
}

BOOL func_29(int iParam0, int iParam1) // Hash - 0x3C3025CD ^0x3C3025CD
{
	int num;

	num = func_27(iParam0);
	return iParam1 > num * 4;
}

void func_30(int iParam0, int iParam1, var uParam2, var uParam3) // Hash - 0xA4DD2C5 ^0xA4DD2C5
{
	int num;

	num = 0;

	if (iParam0 > 0)
		num = 1;
	else if (Global_1968823[iParam0 /*10*/] > 20)
		num = 2;

	switch (iParam1)
	{
		case 0:
			switch (num)
			{
				case 0:
					*uParam2 = 1;
					*uParam3 = 10;
					break;
			
				case 1:
					*uParam2 = 11;
					*uParam3 = 50;
					break;
			
				case 2:
					*uParam2 = 41;
					*uParam3 = 50;
					break;
			}
			break;
	
		case 1:
			switch (num)
			{
				case 0:
					*uParam2 = 1;
					*uParam3 = 20;
					break;
			
				case 1:
					*uParam2 = 21;
					*uParam3 = 100;
					break;
			
				case 2:
					*uParam2 = 81;
					*uParam3 = 100;
					break;
			}
			break;
	
		case 2:
			switch (num)
			{
				case 0:
					*uParam2 = 1;
					*uParam3 = 2;
					break;
			
				case 1:
					*uParam2 = 3;
					*uParam3 = 10;
					break;
			
				case 2:
					*uParam2 = 9;
					*uParam3 = 10;
					break;
			}
			break;
	
		case 3:
			switch (num)
			{
				case 0:
					*uParam2 = 1;
					*uParam3 = 4;
					break;
			
				case 1:
					*uParam2 = 5;
					*uParam3 = 20;
					break;
			
				case 2:
					*uParam2 = 17;
					*uParam3 = 20;
					break;
			}
			break;
	
		case 4:
			switch (num)
			{
				case 0:
					*uParam2 = 1;
					*uParam3 = 16;
					break;
			
				case 1:
					*uParam2 = 17;
					*uParam3 = 80;
					break;
			
				case 2:
					*uParam2 = 65;
					*uParam3 = 80;
					break;
			}
			break;
	
		case 5:
			switch (num)
			{
				case 0:
					*uParam2 = 1;
					*uParam3 = 12;
					break;
			
				case 1:
					*uParam2 = 13;
					*uParam3 = 60;
					break;
			
				case 2:
					*uParam2 = 49;
					*uParam3 = 60;
					break;
			}
			break;
	
		case 6:
			switch (num)
			{
				case 0:
					*uParam2 = 1;
					*uParam3 = 8;
					break;
			
				case 1:
					*uParam2 = 9;
					*uParam3 = 40;
					break;
			
				case 2:
					*uParam2 = 33;
					*uParam3 = 40;
					break;
			}
			break;
	}

	return;
}

void func_31(int iParam0) // Hash - 0x6B99A47F ^0x1847EFF3
{
	int i;
	int randomIntInRange;
	int endRange;
	var unk;
	int randomIntInRange2;
	int num;

	endRange = 6;
	unk = 6;
	func_34(&unk);
	i = iParam0;

	while (i > 0)
	{
		randomIntInRange2 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
		num = 0;
	
		if (func_33(&unk, Global_1968823[i - 1 /*10*/].f_1[randomIntInRange2], &num))
		{
			func_32(&unk, num);
			i = i - 1;
			endRange = endRange - 1;
		}
	}

	for (i = 0; i < 3; i = i + 1)
	{
		randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(0, endRange);
		Global_1968823[iParam0 /*10*/].f_1[i] = unk[randomIntInRange];
		func_32(&unk, randomIntInRange);
		endRange = endRange - 1;
	}

	return;
}

void func_32(var uParam0, int iParam1) // Hash - 0x8905ED59 ^0x8905ED59
{
	int i;

	uParam0->[iParam1] = -1;

	for (i = iParam1; i <= 6 - 2; i = i + 1)
	{
		if (uParam0->[i] == -1)
		{
			uParam0->[i] = uParam0->[i + 1];
			uParam0->[i + 1] = -1;
		}
	}

	return;
}

BOOL func_33(var uParam0, int iParam1, var uParam2) // Hash - 0xE083ED83 ^0xE083ED83
{
	int i;

	for (i = 0; i < 6; i = i + 1)
	{
		if (uParam0->[i] == iParam1)
		{
			*uParam2 = i;
			return true;
		}
	}

	return false;
}

void func_34(var uParam0) // Hash - 0xC449DFB0 ^0xC449DFB0
{
	int i;

	for (i = 0; i < 6; i = i + 1)
	{
		uParam0->[i] = i;
	}

	return;
}

int func_35(int iParam0, BOOL bParam1, var uParam2) // Hash - 0xA377DECA ^0xA4BB1972
{
	int randomIntInRange;
	int i;
	int startRange;
	int endRange;
	int num;

	i = 0;
	startRange = 1;
	endRange = 20 - iParam0;

	if (bParam1)
	{
		startRange = 21;
		endRange = 27;
		randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(startRange, endRange);
		num = randomIntInRange;
	}
	else
	{
		randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(startRange, endRange);
		num = uParam2->[randomIntInRange];
		uParam2->[randomIntInRange] = 0;
	
		for (i = randomIntInRange; i <= 20 - 2; i = i + 1)
		{
			if (uParam2->[i] == 0)
			{
				uParam2->[i] = uParam2->[i + 1];
				uParam2->[i + 1] = 0;
			}
		}
	}

	return num;
}

BOOL func_36() // Hash - 0xFB3E9C08 ^0xB6D77312
{
	int i;
	int j;

	for (i = 0; i < 3; i = i + 1)
	{
		for (j = 0; j < 3; j = j + 1)
		{
			if (Global_1968823[i /*10*/].f_1[j] == 7)
				return true;
		}
	}

	return false;
}

BOOL func_37(Player plParam0) // Hash - 0xC19ACB14 ^0xC19ACB14
{
	if (plParam0 != func_38())
		if (Global_1853910[plParam0 /*862*/].f_267.f_310 != 0)
			return true;

	return false;
}

Player func_38() // Hash - 0x478900E4 ^0x478900E4
{
	return -1;
}

BOOL func_39(Player plParam0, BOOL bParam1) // Hash - 0x5298D428 ^0x9CED417A
{
	if (plParam0 == func_38())
		return false;

	if (Global_1853910[plParam0 /*862*/].f_267.f_193[0 /*13*/] != 0)
		return true;

	if (Global_1853910[plParam0 /*862*/].f_267.f_193[5 /*13*/] != 0)
		return true;

	if (Global_1853910[plParam0 /*862*/].f_267.f_293 != 0)
		return true;

	if (Global_1853910[plParam0 /*862*/].f_267.f_116[0 /*3*/] != -1)
		return true;

	if (bParam1)
		return IS_BIT_SET(Global_1853910[plParam0 /*862*/].f_267.f_133, 14);

	return false;
}

BOOL func_40(Player plParam0, BOOL bParam1, BOOL bParam2) // Hash - 0x3FF6E4CA ^0xE6B59972
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

BOOL func_41() // Hash - 0xDBD936D3 ^0xDBD936D3
{
	if (func_42() == 0)
		return true;

	return false;
}

int func_42() // Hash - 0x4228A1C2 ^0x58D4D226
{
	return Global_1574632.f_18;
}

void func_43() // Hash - 0xE8CC3A7 ^0xBDD346E8
{
	if (func_50(PLAYER::PLAYER_ID()) && func_49(PLAYER::PLAYER_PED_ID()) && CAM::IS_SCREEN_FADED_IN())
	{
		if (!bLocal_91)
		{
			if (func_48() && MISC::ARE_STRINGS_EQUAL(&(Global_23270.f_1), _("SUPPLIES")) && !func_18(PLAYER::PLAYER_PED_ID(), func_47(), 1.5f))
				bLocal_91 = true;
		}
		else
		{
			if (func_44(PLAYER::PLAYER_PED_ID()))
				Global_44199 = 1;
		
			if (func_48() && MISC::ARE_STRINGS_EQUAL(&(Global_23270.f_1), _("SUPPLIES")) && func_18(PLAYER::PLAYER_PED_ID(), func_47(), 1f))
				bLocal_91 = false;
		}
	}
	else if (bLocal_91)
	{
		bLocal_91 = false;
	}

	return;
}

BOOL func_44(Ped pedParam0) // Hash - 0x85F8BECA ^0x85F8BECA
{
	if (func_46(pedParam0))
		return true;

	if (func_45(pedParam0))
		return true;

	return false;
}

BOOL func_45(Ped pedParam0) // Hash - 0x6FD43626 ^0xC92F3532
{
	return ENTITY::IS_ENTITY_IN_ANGLED_AREA(pedParam0, -1360.6123f, 161.89719f, -99.9951f, -1368.3901f, 161.89969f, -97.24433f, 7.25f, false, true, 0);
}

BOOL func_46(Ped pedParam0) // Hash - 0xAC17F7E9 ^0x8A26ACEB
{
	return ENTITY::IS_ENTITY_IN_ANGLED_AREA(pedParam0, -1352.5779f, 161.77977f, -100.444336f, -1352.4767f, 168.37584f, -97.944336f, 6f, false, true, 0);
}

Vector3 func_47() // Hash - 0x21158019 ^0x21158019
{
	return -1352.4502f, 146.7562f, -99.6944f;
}

BOOL func_48() // Hash - 0x44A439DC ^0x3D5209CD
{
	return MISC::GET_GAME_TIMER() <= Global_23270.f_6321 + 100;
}

BOOL func_49(Vehicle veParam0) // Hash - 0x3D210083 ^0xF7E7C389
{
	if (ENTITY::DOES_ENTITY_EXIST(veParam0))
		if (!ENTITY::IS_ENTITY_DEAD(veParam0, false))
			return true;

	return false;
}

BOOL func_50(Player plParam0) // Hash - 0x440D1C81 ^0x15AA607B
{
	if (plParam0 != func_38())
		if (func_51(plParam0) && Global_2657589[plParam0 /*466*/].f_321.f_10 == plParam0)
			return true;

	return false;
}

BOOL func_51(Player plParam0) // Hash - 0xA4C8B8D7 ^0xE5015FA1
{
	if (plParam0 != func_38())
		if (func_40(plParam0, true, true))
			if (Global_2657589[plParam0 /*466*/].f_321.f_7 != -1)
				return func_52(Global_2657589[plParam0 /*466*/].f_321.f_7) == 22;

	return false;
}

int func_52(int iParam0) // Hash - 0xEE599357 ^0xEE599357
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
	
		case 81:
			return 5;
	
		case 82:
			return 6;
	
		case 83:
		case 84:
		case 85:
		case 86:
		case 87:
			return 7;
	
		case 88:
			return 8;
	
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
	
		case 101:
			return 10;
	
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
	
		case 117:
			return 12;
	
		case 122:
			return 13;
	
		case 123:
			return 14;
	
		case 124:
			return 15;
	
		case 125:
			return 16;
	
		case 128:
		case 129:
		case 130:
		case 131:
		case 132:
		case 133:
			return 17;
	
		case 145:
			return 18;
	
		case 146:
			return 19;
	
		case 147:
			return 20;
	
		case 148:
			return 21;
	
		case 149:
		case 151:
		case 153:
		case 152:
		case 150:
			return 22;
	
		case 154:
			return 23;
	
		case 155:
		case 156:
		case 157:
		case 158:
			return 24;
	
		case 159:
			return 25;
	
		case 160:
			return 26;
	
		case 161:
			return 27;
	}

	return -1;
}

void func_53() // Hash - 0xE14E1B43 ^0xDDA7BCED
{
	if (bLocal_90)
		if (func_57(PLAYER::PLAYER_ID()) || func_56(PLAYER::PLAYER_ID()))
			return;
		else
			bLocal_90 = false;

	if (Global_1836858.f_5 != -1 && func_56(PLAYER::PLAYER_ID()) && func_55(PLAYER::PLAYER_ID()) == 160)
	{
		func_54();
		bLocal_90 = true;
	}

	return;
}

void func_54() // Hash - 0xD4ABC353 ^0xBC79FC5C
{
	Global_1836858.f_24 = 1;
	return;
}

int func_55(Player plParam0) // Hash - 0xEB945836 ^0xAF6BFDC2
{
	if (plParam0 != func_38() && func_40(plParam0, true, true))
		return Global_2657589[plParam0 /*466*/].f_321.f_17;

	return -1;
}

BOOL func_56(Player plParam0) // Hash - 0x3BED6F11 ^0x3BED6F11
{
	if (plParam0 != func_38() && func_40(plParam0, true, true))
		return IS_BIT_SET(Global_2657589[plParam0 /*466*/].f_321, 3);

	return false;
}

BOOL func_57(Player plParam0) // Hash - 0xB3E29AC5 ^0xCD327632
{
	if (plParam0 != func_38())
		if (func_40(plParam0, true, true))
			if (Global_2657589[plParam0 /*466*/].f_321.f_7 != -1)
				return func_52(Global_2657589[plParam0 /*466*/].f_321.f_7) == 26;

	return false;
}

void func_58() // Hash - 0x51AFD671 ^0xF9CB2708
{
	int i;
	int num;
	int num2;
	Entity entity;
	float objectFragmentDamageHealth;

	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("FM_MISSION_CONTROLLER_2020")) == 0)
	{
		func_60();
		return;
	}

	if (!Global_1574965)
	{
		func_60();
		return;
	}

	if (*Global_4718592.f_113724 != 1871729633 || Global_1058070.f_14[0] != 1)
	{
		func_60();
		return;
	}

	if (!bLocal_75)
	{
		bLocal_75 = true;
	
		for (i = 0; i <= Global_1058070.f_266 - 1; i = i + 1)
		{
			num = Global_4980736.f_5994[i /*492*/].f_15;
		
			switch (num)
			{
				case joaat("XM3_PROP_XM3_LSD_FLASK"):
				case joaat("XM3_PROP_XM3_LSD_BEAKER"):
				case joaat("XM3_PROP_XM3_LSD_BOTTLE_01A"):
				case joaat("XM3_PROP_XM3_LSD_BOTTLE_02A"):
				case joaat("XM3_PROP_XM3_LSD_BOTTLE_03A"):
				case joaat("XM3_PROP_XM3_LSD_BOTTLES1"):
				case joaat("XM3_PROP_XM3_LSD_BOTTLES2"):
				case joaat("XM3_PROP_XM3_LSD_BOTTLES3"):
				case joaat("XM3_PROP_XM3_SET_EQPT_LSD"):
					uLocal_42[iLocal_41] = i;
					iLocal_41 = iLocal_41 + 1;
					break;
			}
		}
	}

	for (i = 0; i <= iLocal_41 - 1; i = i + 1)
	{
		num2 = uLocal_42[i];
	
		if (!func_59(num2))
		{
		}
		else
		{
			entity = Global_1058070.f_119[num2];
		
			if (!ENTITY::DOES_ENTITY_EXIST(entity))
			{
			}
			else if (ENTITY::IS_ENTITY_DEAD(entity, false))
			{
			}
			else
			{
				objectFragmentDamageHealth = OBJECT::GET_OBJECT_FRAGMENT_DAMAGE_HEALTH(entity, false);
			
				if (objectFragmentDamageHealth < 0.1f)
					ENTITY::SET_ENTITY_HEALTH(entity, 0, 0);
			}
		}
	}

	return;
}

BOOL func_59(int iParam0) // Hash - 0x939EA3E ^0x939EA3E
{
	return iParam0 > -1 && iParam0 < 32;
}

void func_60() // Hash - 0x827DB5E3 ^0x827DB5E3
{
	if (iLocal_41 > 0)
	{
		func_61(&uLocal_42, -1);
		iLocal_41 = 0;
		bLocal_75 = false;
	}

	return;
}

void func_61(var uParam0, int iParam1) // Hash - 0xC621CFBE ^0xC621CFBE
{
	int i;

	for (i = 0; i <= *uParam0 - 1; i = i + 1)
	{
		uParam0->[i] = iParam1;
	}

	return;
}

void func_62() // Hash - 0x2EC622F9 ^0x7C40BCEB
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("FM_MISSION_CONTROLLER_2020")) > 0)
		func_65();
	else
		func_63();

	return;
}

void func_63() // Hash - 0x302039C7 ^0xF3C6ABE5
{
	int i;

	if (iLocal_32 == 0)
		return;

	for (i = 0; i < 26; i = i + 1)
	{
		if (IS_BIT_SET(iLocal_32, i))
		{
			AUDIO::SET_RADIO_STATION_AS_FAVOURITE(func_64(i), false);
			MISC::CLEAR_BIT(&iLocal_32, i);
		}
	}

	iLocal_33 = 0;
	Global_2766575 = 0;
	return;
}

char* func_64(int iParam0) // Hash - 0x8DCA636F ^0x8DCA636F
{
	switch (iParam0)
	{
		case 9:
			return _("Los Santos Rock Radio");
	
		case 10:
			return _("Non-Stop-Pop FM");
	
		case 12:
			return _("Radio Los Santos");
	
		case 18:
			return _("Channel X");
	
		case 17:
			return _("Rebel Radio");
	
		case 15:
			return _("Soulwax FM");
	
		case 16:
			return _("East Los FM");
	
		case 11:
			return _("West Coast Classics");
	
		case 23:
			return _("Blaine County Radio");
	
		case 22:
			return _("Blue Ark");
	
		case 5:
			return _("Worldwide FM");
	
		case 6:
			return _("FlyLo FM");
	
		case 21:
			return _("The Lowdown 91.1");
	
		case 13:
			return _("The Lab");
	
		case 14:
			return _("Radio Mirror Park");
	
		case 20:
			return _("Space 103.2");
	
		case 19:
			return _("Vinewood Boulevard Radio");
	
		case 8:
			return _("Blonded Los Santos 97.8 FM");
	
		case 24:
			return _("West Coast Talk Radio");
	
		case 2:
			return _("Still Slipping Los Santos");
	
		case 4:
			return _("iFruit Radio");
	
		case 7:
			return _("Los Santos Underground Radio");
	
		case 0:
			return _("Media Player");
	
		case 1:
			return _("The Music Locker");
	
		case 3:
			return _("Kult FM");
	
		case 25:
			return _("MOTOMAMI Los Santos");
	
		default:
		
	}

	return "OFF";
}

void func_65() // Hash - 0x8F3A1F14 ^0x1DDA8C46
{
	int num;
	int i;

	if (!func_66(*Global_4718592.f_113724))
		return;

	num = func_14(9877, -1, 0);

	if (num == 0)
		return;

	for (i = 0; i < 26; i = i + 1)
	{
		if (!IS_BIT_SET(iLocal_33, i))
		{
			if (IS_BIT_SET(num, i))
			{
			}
		
			MISC::SET_BIT(&iLocal_33, i);
			AUDIO::SET_RADIO_STATION_AS_FAVOURITE(func_64(i), true);
		}
	
		if (IS_BIT_SET(num, i) && !IS_BIT_SET(iLocal_32, i))
		{
			MISC::SET_BIT(&iLocal_32, i);
			Global_2766575 = 1;
		}
	}

	return;
}

BOOL func_66(var uParam0) // Hash - 0xC85C99C0 ^0xC85C99C0
{
	if (uParam0 == Global_262145.f_31722[0] || uParam0 == Global_262145.f_31722[1] || uParam0 == Global_262145.f_31722[2])
		return true;

	return false;
}

void func_67() // Hash - 0x7C2ECB36 ^0xB60245F8
{
	if (IS_BIT_SET(Global_1950108.f_8, 25))
		if (Global_4282954 != -1)
			Global_4282954 = -1;

	return;
}

void func_68() // Hash - 0x81B0594E ^0x3FD55D09
{
	if (PLAYER::PLAYER_ID() == func_38())
	{
		bLocal_31 = false;
		return;
	}

	if (!ENTITY::DOES_ENTITY_EXIST(Global_2793044.f_299))
	{
		bLocal_31 = false;
		return;
	}

	if (ENTITY::IS_ENTITY_DEAD(Global_2793044.f_299, false))
	{
		bLocal_31 = false;
		return;
	}

	if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Global_2793044.f_299, false))
	{
		bLocal_31 = false;
		return;
	}

	if (func_56(PLAYER::PLAYER_ID()))
	{
		bLocal_31 = false;
		return;
	}

	if (func_51(PLAYER::PLAYER_ID()) && Global_2657589[PLAYER::PLAYER_ID() /*466*/].f_321.f_10 == PLAYER::PLAYER_ID())
	{
		bLocal_31 = false;
		return;
	}

	if (!ENTITY::IS_ENTITY_IN_AREA(Global_2793044.f_299, -1372.786f, 135.814f, -100.586f, -1319.589f, 169.764f, -87.918f, false, true, 0))
	{
		bLocal_31 = false;
		return;
	}

	if (bLocal_31)
		return;

	func_69(true, false, false, false, false, false, false);
	bLocal_31 = true;
	return;
}

void func_69(BOOL bParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6) // Hash - 0xCB4945F8 ^0xB189D510
{
	if (func_74() < 0 && Global_1962819)
		return;

	if (func_73(35))
		bParam0 = true;

	if (IS_BIT_SET(Global_2672505.f_61.f_60, 3))
		bParam0 = true;

	if (IS_BIT_SET(Global_2672505.f_61.f_64, 3))
	{
		bParam0 = true;
		bParam1 = false;
	}

	if (IS_BIT_SET(Global_2672505.f_61.f_68, 3))
	{
		bParam0 = true;
		bParam1 = false;
	}

	if (bParam0)
		func_72(2);
	else
		func_72(1);

	if (bParam1)
		func_72(11);

	if (bParam2)
	{
		func_72(32);
	
		if (bParam3)
			if (func_74() >= 0 && IS_BIT_SET(Global_1586468[func_74() /*142*/].f_103, 0))
				func_72(33);
		else
			func_71(33);
	
		if (func_74() >= 0)
			if (func_70(Global_1586468[func_74() /*142*/].f_66))
				func_72(40);
	}
	else if (bParam5)
	{
		func_72(37);
	}

	if (bParam4)
		func_72(36);

	if (func_73(36))
		if (func_73(2))
			func_71(36);

	if (bParam6)
		func_72(38);

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		Global_2793044.f_436 = NETWORK::GET_NETWORK_TIME();

	return;
}

BOOL func_70(int iParam0) // Hash - 0xAD766E45 ^0x659C80D4
{
	if (iParam0 == joaat("TRAILERSMALL2"))
		return true;

	return false;
}

void func_71(int iParam0) // Hash - 0xE0BC02E ^0xB6CB3511
{
	if (iParam0 < 32)
		if (IS_BIT_SET(Global_2672505.f_61.f_1, iParam0))
			MISC::CLEAR_BIT(&(Global_2672505.f_61.f_1), iParam0);
	else if (IS_BIT_SET(Global_2672505.f_61.f_2, iParam0 - 32))
		MISC::CLEAR_BIT(&(Global_2672505.f_61.f_2), iParam0 - 32);

	return;
}

void func_72(int iParam0) // Hash - 0xD038FA6B ^0x884523C6
{
	if (iParam0 < 32)
		if (!IS_BIT_SET(Global_2672505.f_61.f_1, iParam0))
			MISC::SET_BIT(&(Global_2672505.f_61.f_1), iParam0);
	else if (!IS_BIT_SET(Global_2672505.f_61.f_2, iParam0 - 32))
		MISC::SET_BIT(&(Global_2672505.f_61.f_2), iParam0 - 32);

	return;
}

BOOL func_73(int iParam0) // Hash - 0x2B8C56B7 ^0x99FC6E82
{
	if (iParam0 < 32)
		return IS_BIT_SET(Global_2672505.f_61.f_1, iParam0);

	return IS_BIT_SET(Global_2672505.f_61.f_2, iParam0 - 32);
}

int func_74() // Hash - 0xD6C8D081 ^0xA7948087
{
	if (Global_2359296[func_75() /*5568*/].f_681.f_2 >= 415)
	{
		Global_2359296[func_75() /*5568*/].f_681.f_2 = -1;
		return -1;
	}

	return Global_2359296[func_75() /*5568*/].f_681.f_2;
}

int func_75() // Hash - 0xF9396AAC ^0xF9396AAC
{
	int num;

	num = 0;
	return num;
}

void func_76() // Hash - 0x28E4E3C9 ^0x7EE09AE9
{
	if (Global_2672505.f_61.f_57)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_2793044.f_299) && !ENTITY::IS_ENTITY_DEAD(Global_2793044.f_299, false))
		{
			if (!Global_2672505.f_61.f_21)
			{
				if (iLocal_30 == -1)
					if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("PV_Slot", INT))
						if (DECORATOR::DECOR_EXIST_ON(Global_2793044.f_299, "PV_Slot"))
							iLocal_30 = DECORATOR::DECOR_GET_INT(Global_2793044.f_299, "PV_Slot");
				else if (Global_2359296[func_75() /*5568*/].f_681.f_2 != iLocal_30)
					if (!func_23(&uLocal_28))
						func_9(&uLocal_28, true, false);
					else if (func_22(&uLocal_28, 10000, true))
						func_69(true, false, true, false, false, false, false);
			}
			else
			{
				func_20(&uLocal_28);
				iLocal_30 = -1;
			}
		}
		else
		{
			func_20(&uLocal_28);
			iLocal_30 = -1;
		}
	}
	else
	{
		func_20(&uLocal_28);
		iLocal_30 = -1;
	}

	return;
}

void func_77() // Hash - 0xFE4963FC ^0x8A29944A
{
	if (func_85(PLAYER::PLAYER_ID()) && func_79() == PLAYER::PLAYER_ID())
	{
		if (PLAYER::IS_SYSTEM_UI_BEING_DISPLAYED() || HUD::IS_WARNING_MESSAGE_ACTIVE() || func_78())
		{
			func_21(&uLocal_25, true, false);
			Global_1949962 = 1;
		
			if (PLAYER::IS_SYSTEM_UI_BEING_DISPLAYED())
				iLocal_27 = 30000;
		}
	}

	if (func_23(&uLocal_25))
	{
		if (func_22(&uLocal_25, iLocal_27, true))
		{
			func_20(&uLocal_25);
			Global_1949962 = 0;
			iLocal_27 = 10000;
		}
	}

	return;
}

BOOL func_78() // Hash - 0xBA519C1 ^0x474027E8
{
	return HUD::GET_PAUSE_MENU_STATE() != 0;
}

Player func_79() // Hash - 0x5976C0FC ^0xC3C6644E
{
	return func_80(PLAYER::PLAYER_ID());
}

Player func_80(Player plParam0) // Hash - 0xF9B95C37 ^0xF9B95C37
{
	int num;

	if (plParam0 == func_38())
		return plParam0;

	if (func_84(plParam0) != -1)
	{
		num = func_52(func_84(plParam0));
	
		if (num == 2 || num == 1 || num == 0 || num == 25)
		{
			if (func_82(plParam0, false))
				return func_81(plParam0);
		
			return plParam0;
		}
		else if (num == 3)
		{
			return func_38();
		}
	
		return Global_2657589[plParam0 /*466*/].f_321.f_10;
	}

	return func_38();
}

Player func_81(Player plParam0) // Hash - 0xBC29302B ^0x7C0547F0
{
	if (plParam0 != func_38())
		return Global_1894573[plParam0 /*608*/].f_10;

	return func_38();
}

BOOL func_82(Player plParam0, BOOL bParam1) // Hash - 0xB01293DB ^0xE5AEA938
{
	if (!bParam1)
		if (func_83(plParam0))
			return false;

	return Global_1894573[plParam0 /*608*/].f_10 != func_38();
}

BOOL func_83(Player plParam0) // Hash - 0x240F2609 ^0x5DFCCAA2
{
	if (plParam0 != func_38())
		if (Global_1894573[plParam0 /*608*/].f_10 != func_38())
			return Global_1894573[plParam0 /*608*/].f_10 == plParam0;

	return false;
}

int func_84(Player plParam0) // Hash - 0x406DDACB ^0xEF3441DE
{
	if (plParam0 != func_38())
		if (func_40(plParam0, true, true))
			return Global_2657589[plParam0 /*466*/].f_321.f_7;
		else if (Global_1575060 || Global_2635559.f_2680 && plParam0 == PLAYER::PLAYER_ID() && func_40(plParam0, true, false))
			return Global_2657589[plParam0 /*466*/].f_321.f_7;

	return -1;
}

BOOL func_85(Player plParam0) // Hash - 0x3B8D0381 ^0x717F7A8F
{
	if (plParam0 != func_38())
		if (func_40(plParam0, true, true))
			if (Global_2657589[plParam0 /*466*/].f_321.f_7 != -1)
				return func_52(Global_2657589[plParam0 /*466*/].f_321.f_7) == 9;

	return false;
}

void func_86() // Hash - 0x9F586522 ^0x495970DF
{
	if (!func_88() && !func_87())
		if (!STATS::STAT_IS_STATS_TRACKING_ENABLED())
			if (func_41() && func_40(PLAYER::PLAYER_ID(), false, true) && CAM::IS_SCREEN_FADED_IN() && PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
				STATS::STAT_ENABLE_STATS_TRACKING();

	return;
}

BOOL func_87() // Hash - 0x35A4808D ^0xBB21C5A3
{
	return SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("ANIMAL_CONTROLLER")) > 0;
}

BOOL func_88() // Hash - 0x35A4808D ^0xC9FF66BA
{
	return SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("DIRECTOR_MODE")) > 0;
}

void func_89() // Hash - 0x2CFF9D9D ^0x43C447AF
{
	Vehicle vehiclePedIsIn;

	iLocal_24 = iLocal_24 + 1;

	if (iLocal_24 == 30)
		iLocal_24 = 0;
	else
		return;

	if (!func_49(PLAYER::PLAYER_PED_ID()) || !func_40(PLAYER::PLAYER_ID(), true, true) || NETWORK::NETWORK_IS_ACTIVITY_SESSION() || NETWORK::NETWORK_IS_IN_MP_CUTSCENE() || !func_41() || func_56(PLAYER::PLAYER_ID()) || func_91(PLAYER::PLAYER_ID()) || func_90(PLAYER::PLAYER_ID()) || Global_2672505.f_3541 || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
		return;

	if (PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()))
	{
		vehiclePedIsIn = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
	
		if (func_49(vehiclePedIsIn))
		{
			if (!NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(vehiclePedIsIn))
			{
				if (ENTITY::GET_ENTITY_CAN_BE_DAMAGED(vehiclePedIsIn))
				{
				}
				else
				{
					VEHICLE::SET_VEHICLE_ENGINE_HEALTH(vehiclePedIsIn, 0f);
					ENTITY::SET_ENTITY_INVINCIBLE(vehiclePedIsIn, false);
					ENTITY::SET_ENTITY_PROOFS(vehiclePedIsIn, false, false, false, false, false, false, true, false);
				}
			}
		}
	}

	return;
}

BOOL func_90(Player plParam0) // Hash - 0xA439E034 ^0x18C6D29E
{
	if (plParam0 != func_38())
		if (func_40(plParam0, true, true))
			return Global_2657589[plParam0 /*466*/].f_321.f_7 != -1;
		else if (Global_1575060 && plParam0 == PLAYER::PLAYER_ID() && func_40(plParam0, true, false))
			return Global_2657589[plParam0 /*466*/].f_321.f_7 != -1;

	return false;
}

BOOL func_91(Player plParam0) // Hash - 0xD7F7F990 ^0xD6AF2B71
{
	if (IS_BIT_SET(Global_1853910[plParam0 /*862*/].f_267.f_31, 14))
		return true;

	if (IS_BIT_SET(Global_1853910[plParam0 /*862*/].f_267.f_31, 11))
		return true;

	return false;
}

void func_92() // Hash - 0x36B0FA2 ^0x9BDEF1FE
{
	if (!func_40(PLAYER::PLAYER_ID(), true, true))
		return;

	if (!bLocal_23)
	{
		if (Global_1950108.f_513 != -1 && MISC::ARE_STRINGS_EQUAL(&(Global_23270.f_1), _("Replace")) && func_94() == 9)
			bLocal_23 = true;
	}
	else if (!func_48())
	{
		if (func_93())
		{
			PAD::DISABLE_CONTROL_ACTION(FRONTEND_CONTROL, INPUT_CONTEXT, true);
			PAD::DISABLE_CONTROL_ACTION(FRONTEND_CONTROL, INPUT_CONTEXT_SECONDARY, true);
		}
		else if (func_49(Global_2793044.f_299))
		{
			if (!func_93())
				func_69(true, false, true, false, false, false, false);
		}
		else
		{
			bLocal_23 = false;
			TEXT_LABEL_ASSIGN_STRING(&(Global_23270.f_1), "", 16);
		}
	}

	return;
}

BOOL func_93() // Hash - 0x60B2061 ^0x60B2061
{
	if (func_73(2) || func_73(1))
		return true;

	return false;
}

int func_94() // Hash - 0xF371A5F0 ^0xF371A5F0
{
	return func_52(Global_1950108.f_513);
}

void func_95() // Hash - 0xF05C91A5 ^0x2972EB3C
{
	Vehicle vehiclePedIsIn;

	if (!func_40(PLAYER::PLAYER_ID(), true, true))
		return;

	if (func_90(PLAYER::PLAYER_ID()) || func_101(PLAYER::PLAYER_ID()))
		return;

	if (func_98() || func_97(_("Press ~a~ to repair, respray and customize your vehicle."), &Global_44195))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			vehiclePedIsIn = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		
			if (func_96(PLAYER::PLAYER_PED_ID(), false) == -1)
				if (!VEHICLE::IS_VEHICLE_SEAT_FREE(vehiclePedIsIn, -2, false))
					PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_EXIT, true);
		}
	}

	return;
}

int func_96(Ped pedParam0, BOOL bParam1) // Hash - 0x4E1330D6 ^0x886EF094
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

BOOL func_97(char* sParam0, const char* sParam1) // Hash - 0xCB708C57 ^0x57AB1DDC
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

BOOL func_98() // Hash - 0x729B2975 ^0x729B2975
{
	if (func_99(39, 5, false) || func_99(40, 5, false) || func_99(41, 5, false) || func_99(42, 5, false) || func_99(43, 5, false) || func_99(44, 5, false))
		return true;

	return false;
}

BOOL func_99(int iParam0, int iParam1, BOOL bParam2) // Hash - 0xA020B50 ^0x1AD37CE8
{
	if (iParam0 == -1)
		return false;

	if (bParam2)
		return IS_BIT_SET(Global_100733.f_1407[iParam0], iParam1);
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		if (Global_32163 == 0)
			return IS_BIT_SET(func_14(func_100(iParam0), -1, 0), iParam1);
	else
		return IS_BIT_SET(Global_113648.f_668[iParam0], iParam1);

	return false;
}

int func_100(int iParam0) // Hash - 0x28E83966 ^0x9E37924F
{
	switch (iParam0)
	{
		case 0:
			return 828;
	
		case 1:
			return 829;
	
		case 2:
			return 830;
	
		case 3:
			return 831;
	
		case 4:
			return 832;
	
		case 5:
			return 833;
	
		case 6:
			return 834;
	
		case 7:
			return 835;
	
		case 8:
			return 836;
	
		case 9:
			return 837;
	
		case 10:
			return 838;
	
		case 11:
			return 839;
	
		case 12:
			return 840;
	
		case 13:
			return 841;
	
		case 14:
			return 842;
	
		case 15:
			return 844;
	
		case 16:
			return 845;
	
		case 17:
			return 846;
	
		case 18:
			return 847;
	
		case 19:
			return 848;
	
		case 20:
			return 849;
	
		case 21:
			return 850;
	
		case 22:
			return 851;
	
		case 23:
			return 852;
	
		case 24:
			return 853;
	
		case 25:
			return 854;
	
		case 26:
			return 855;
	
		case 27:
			return 856;
	
		case 28:
			return 857;
	
		case 29:
			return 858;
	
		case 30:
			return 859;
	
		case 31:
			return 860;
	
		case 32:
			return 861;
	
		case 33:
			return 862;
	
		case 34:
			return 863;
	
		case 35:
			return 864;
	
		case 36:
			return 865;
	
		case 37:
			return 866;
	
		case 38:
			return 867;
	
		case 39:
			return 868;
	
		case 40:
			return 872;
	
		case 41:
			return 873;
	
		case 42:
			return 874;
	
		case 43:
			return 875;
	
		case 44:
			return 12385;
	
		case 45:
			return 3811;
	
		case 46:
			return 5386;
	
		case 47:
			return 6158;
	
		case 48:
			return 7235;
	
		case 49:
			return 7881;
	
		case 52:
			return 8917;
	
		case 50:
			return 8268;
	
		case 51:
			return 8270;
	
		case 53:
			return 9557;
	
		case 54:
			return 9633;
	
		case 55:
			return 9848;
	
		case 56:
			return 9916;
	
		case 57:
			return 9918;
	
		default:
			break;
	}

	return 14192;
}

BOOL func_101(Player plParam0) // Hash - 0xFA01095A ^0xE89E0C28
{
	if (plParam0 > -1)
	{
		if (Global_2657589[plParam0 /*466*/].f_246 > -1)
			if (func_102(Global_2657589[plParam0 /*466*/].f_246) == 5)
				return 1;
	
		if (IS_BIT_SET(Global_2657589[plParam0 /*466*/].f_199, 4))
			return 1;
	}

	return 0;
}

int func_102(int iParam0) // Hash - 0x1BE0B176 ^0x1BE0B176
{
	switch (iParam0)
	{
		case -1:
			return 6;
	
		case 0:
			return 0;
	
		case 1:
			return 0;
	
		case 2:
			return 0;
	
		case 3:
			return 0;
	
		case 4:
			return 0;
	
		case 5:
			return 0;
	
		case 6:
			return 0;
	
		case 50:
			return 0;
	
		case 7:
			return 1;
	
		case 8:
			return 1;
	
		case 9:
			return 1;
	
		case 10:
			return 1;
	
		case 11:
			return 1;
	
		case 12:
			return 1;
	
		case 13:
			return 1;
	
		case 14:
			return 1;
	
		case 15:
			return 1;
	
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
			return 2;
	
		case 23:
			return 2;
	
		case 24:
			return 2;
	
		case 25:
			return 2;
	
		case 26:
			return 2;
	
		case 27:
			return 2;
	
		case 28:
			return 3;
	
		case 29:
			return 3;
	
		case 30:
			return 3;
	
		case 31:
			return 3;
	
		case 32:
			return 3;
	
		case 33:
			return 3;
	
		case 34:
			return 3;
	
		case 35:
			return 3;
	
		case 36:
			return 3;
	
		case 37:
			return 3;
	
		case 38:
			return 3;
	
		case 39:
			return 4;
	
		case 40:
			return 4;
	
		case 41:
			return 4;
	
		case 42:
			return 4;
	
		case 43:
			return 4;
	
		case 44:
			return 4;
	
		case 45:
			return 5;
	
		case 46:
			return 3;
	
		case 47:
			return 3;
	
		case 48:
			return 3;
	
		case 49:
			return 3;
	
		case 52:
			return 3;
	
		case 51:
			return 1;
	
		case 53:
			return 3;
	
		case 54:
			return 2;
	
		case 55:
			return 1;
	
		case 56:
			return 3;
	
		case 57:
			return 1;
	}

	return 6;
}

void func_103() // Hash - 0x2DED9D69 ^0x69C62EA6
{
	Vehicle vehiclePedIsIn;
	Hash entityModel;

	if (func_40(PLAYER::PLAYER_ID(), true, true) && func_108(PLAYER::PLAYER_ID()) && PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
	{
		vehiclePedIsIn = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
	
		if (func_49(vehiclePedIsIn) && func_96(PLAYER::PLAYER_PED_ID(), false) == -1)
		{
			entityModel = ENTITY::GET_ENTITY_MODEL(vehiclePedIsIn);
		
			if (entityModel == joaat("OPENWHEEL1") || entityModel == joaat("OPENWHEEL2") || entityModel == joaat("FORMULA") || entityModel == joaat("FORMULA2") || entityModel == joaat("OPPRESSOR2"))
			{
				if (!bLocal_22)
				{
					bLocal_22 = true;
					func_107(45, 1, true);
				}
			
				PAD::DISABLE_CONTROL_ACTION(FRONTEND_CONTROL, INPUT_CONTEXT, true);
				PAD::DISABLE_CONTROL_ACTION(FRONTEND_CONTROL, INPUT_CONTEXT_SECONDARY, true);
				Global_44199 = 1;
			
				if (CAM::IS_GAMEPLAY_CAM_RENDERING() && !func_106(_("This vehicle cannot be modified.")))
					func_105(_("This vehicle cannot be modified."));
			}
		}
	}
	else if (bLocal_22)
	{
		bLocal_22 = false;
		func_104(45, 1, true);
	
		if (func_106(_("This vehicle cannot be modified.")))
			HUD::CLEAR_HELP(true);
	}

	return;
}

void func_104(int iParam0, int iParam1, BOOL bParam2) // Hash - 0x8F656186 ^0x8F5BD7E1
{
	int address;

	if (iParam0 == -1)
		return;

	if (bParam2)
	{
		MISC::CLEAR_BIT(&Global_100733.f_1407[iParam0], iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (Global_32163 == 0)
		{
			address = func_14(func_100(iParam0), -1, 0);
			MISC::CLEAR_BIT(&address, iParam1);
			func_11(func_100(iParam0), address, -1, true, false);
		}
	}
	else
	{
		MISC::CLEAR_BIT(&Global_113648.f_668[iParam0], iParam1);
	}

	return;
}

void func_105(char* sParam0) // Hash - 0x99A98712 ^0xE46BE9F0
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, true, true, -1);
	return;
}

BOOL func_106(char* sParam0) // Hash - 0xCD6A3595 ^0xB0E86AA0
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_107(int iParam0, int iParam1, BOOL bParam2) // Hash - 0x8F656186 ^0x832061BF
{
	int address;

	if (iParam0 == -1)
		return;

	if (bParam2)
	{
		MISC::SET_BIT(&Global_100733.f_1407[iParam0], iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (Global_32163 == 0)
		{
			address = func_14(func_100(iParam0), -1, 0);
			MISC::SET_BIT(&address, iParam1);
			func_11(func_100(iParam0), address, -1, true, false);
		}
	}
	else
	{
		MISC::SET_BIT(&Global_113648.f_668[iParam0], iParam1);
	}

	return;
}

BOOL func_108(Player plParam0) // Hash - 0x6AB0796B ^0xE2E7422C
{
	if (plParam0 == func_38())
		return 0;

	if (func_85(plParam0) && Global_2657589[plParam0 /*466*/].f_321.f_10 == plParam0)
		return 1;

	return 0;
}

void func_109() // Hash - 0x32C9A6B ^0x9E9693DC
{
	if (Global_112594 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("DIRECTOR_MODE")) <= 0 && func_41())
		NETWORK::SHUTDOWN_AND_LAUNCH_SINGLE_PLAYER_GAME();

	return;
}

void func_110() // Hash - 0x4C585181 ^0x444F16DE
{
	int num;

	if (!bLocal_4)
	{
		if (Global_1836395)
		{
			num = func_111(joaat("MPPLY_CHAR_EXPLOIT_LEVEL"));
		
			if (num >= 4)
				Global_262145.f_10593 = 1;
		
			bLocal_4 = true;
		}
	}
	else if (!Global_1836395)
	{
		bLocal_4 = false;
	}

	return;
}

int func_111(Hash hParam0) // Hash - 0x4F1C0EC ^0xC7D84231
{
	Hash statHash;
	int outValue;

	statHash = hParam0;

	if (STATS::STAT_GET_INT(statHash, &outValue, -1))
		return outValue;

	return 0;
}

void func_112() // Hash - 0xCA052B25 ^0xCA052B25
{
	if (!bLocal_3)
	{
		if (Global_1836395)
		{
			if (func_114() || func_113())
				Global_262145.f_20169 = 1;
			else
				Global_262145.f_20169 = 0;
		
			bLocal_3 = true;
		}
	}
	else if (!Global_1836395)
	{
		bLocal_3 = false;
	}

	return;
}

int func_113() // Hash - 0xDC27281 ^0x48319680
{
	int num;
	var unk;
	int i;

	num = func_111(joaat("MPPLY_CHAR_PEAK_EXPLOIT_LEVEL"));

	if (num < Global_262145.f_10702)
		return 0;

	unk = 4;
	unk[0] = func_111(joaat("MPPLY_PREVSEASONEXPLOITLEVEL"));
	unk[1] = func_111(joaat("MPPLY_PREVSEASON2EXPLOITLEVEL"));
	unk[2] = func_111(joaat("MPPLY_PREVSEASON3EXPLOITLEVEL"));
	unk[3] = func_111(joaat("MPPLY_PREVSEASON4EXPLOITLEVEL"));

	for (i = 0; i < Global_262145.f_10698 - 1; i = i + 1)
	{
		if (unk[i] < Global_262145.f_10702)
			return 0;
	}

	return 1;
}

int func_114() // Hash - 0xDC27281 ^0x48319680
{
	int num;
	var unk;
	int i;

	num = func_111(joaat("MPPLY_CHAR_PEAK_EXPLOIT_LEVEL"));

	if (num < Global_262145.f_10701)
		return 0;

	unk = 4;
	unk[0] = func_111(joaat("MPPLY_PREVSEASONEXPLOITLEVEL"));
	unk[1] = func_111(joaat("MPPLY_PREVSEASON2EXPLOITLEVEL"));
	unk[2] = func_111(joaat("MPPLY_PREVSEASON3EXPLOITLEVEL"));
	unk[3] = func_111(joaat("MPPLY_PREVSEASON4EXPLOITLEVEL"));

	for (i = 0; i < Global_262145.f_10697 - 1; i = i + 1)
	{
		if (unk[i] < Global_262145.f_10701)
			return 0;
	}

	return 1;
}

void func_115() // Hash - 0x63EE8DA5 ^0xC318C46D
{
	int i;

	if (MISC::IS_PC_VERSION())
	{
		for (i = 0; i < Global_1853910; i = i + 1)
		{
			MISC::SET_BIT(&(Global_1853910[i /*862*/].f_799), 1);
		}
	}

	return;
}

void func_116() // Hash - 0x27CEE1F6 ^0x27CEE1F6
{
	if (Global_262145.f_10677 != 120)
		Global_262145.f_10677 = 120;

	return;
}

void func_117() // Hash - 0xB401A131 ^0x6F91F731
{
	if (bLocal_1)
	{
		HUD::SET_TEXT_SCALE(0f, 0.23f);
		HUD::SET_TEXT_COLOUR(255, 255, 255, 255);
		func_118(0.69f, 0.06f, "STRING", sLocal_0);
	}

	if (!bLocal_1)
	{
		if (HUD::IS_PAUSE_MENU_ACTIVE())
		{
			switch (iLocal_2)
			{
				case 0:
					if (PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_LEFT))
					{
						iLocal_2 = iLocal_2 + 1;
						SYSTEM::SETTIMERA(0);
					}
					break;
			
				case 1:
					if (PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_RIGHT))
					{
						iLocal_2 = iLocal_2 + 1;
						SYSTEM::SETTIMERA(0);
					}
					else if (SYSTEM::TIMERA() > 2000)
					{
						iLocal_2 = 0;
					}
					break;
			
				case 2:
					if (PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_LEFT))
					{
						iLocal_2 = iLocal_2 + 1;
						SYSTEM::SETTIMERA(0);
					}
					else if (SYSTEM::TIMERA() > 2000)
					{
						iLocal_2 = 0;
					}
					break;
			
				case 3:
					if (PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_RIGHT))
					{
						iLocal_2 = iLocal_2 + 1;
						SYSTEM::SETTIMERA(0);
					}
					else if (SYSTEM::TIMERA() > 2000)
					{
						iLocal_2 = 0;
					}
					break;
			
				case 4:
					if (PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_UP))
					{
						bLocal_1 = true;
						SYSTEM::SETTIMERA(0);
					}
					else if (SYSTEM::TIMERA() > 2000)
					{
						iLocal_2 = 0;
					}
					break;
			}
		}
	}
	else if (HUD::IS_PAUSE_MENU_ACTIVE())
	{
		switch (iLocal_2)
		{
			case 0:
				if (PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_UP))
				{
					iLocal_2 = iLocal_2 + 1;
					SYSTEM::SETTIMERA(0);
				}
				break;
		
			case 1:
				if (PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_RIGHT))
				{
					iLocal_2 = iLocal_2 + 1;
					SYSTEM::SETTIMERA(0);
				}
				else if (SYSTEM::TIMERA() > 2000)
				{
					iLocal_2 = 0;
				}
				break;
		
			case 2:
				if (PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_LEFT))
				{
					iLocal_2 = iLocal_2 + 1;
					SYSTEM::SETTIMERA(0);
				}
				else if (SYSTEM::TIMERA() > 2000)
				{
					iLocal_2 = 0;
				}
				break;
		
			case 3:
				if (PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_RIGHT))
				{
					iLocal_2 = iLocal_2 + 1;
					SYSTEM::SETTIMERA(0);
				}
				else if (SYSTEM::TIMERA() > 2000)
				{
					iLocal_2 = 0;
				}
				break;
		
			case 4:
				if (PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_LEFT))
				{
					bLocal_1 = false;
					SYSTEM::SETTIMERA(0);
				}
				else if (SYSTEM::TIMERA() > 2000)
				{
					iLocal_2 = 0;
				}
				break;
		}
	}

	return;
}

void func_118(float fParam0, float fParam1, char* sParam2, char* sParam3) // Hash - 0x7486FC59 ^0x9B504711
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_KEYBOARD_DISPLAY(sParam3);
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, 0);
	return;
}

BOOL func_119() // Hash - 0x11DC3931 ^0x820FC5
{
	return DLC::IS_DLC_PRESENT(-1762644250);
}

