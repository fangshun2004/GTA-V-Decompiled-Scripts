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
	int iLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	BOOL bLocal_50 = 0;
	BOOL bLocal_51 = 0;
	float fLocal_52 = 0f;
	float fLocal_53 = 0f;
	char* sLocal_54 = 0;
	int iLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	int iLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	BOOL bLocal_65 = 0;
	var uScriptParam_66 = 0;
	var uScriptParam_67 = 0;
	var uScriptParam_68 = 0;
	var uScriptParam_69 = 0;
	var uScriptParam_70 = 0;
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
	sLocal_18 = "NULL";
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	iLocal_28 = 3;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	iLocal_48 = -1;
	iLocal_49 = -1;
	fLocal_52 = 1.7f;
	fLocal_53 = 0f;
	sLocal_54 = "";
	iLocal_63 = -1;

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(2))
		func_178();

	uLocal_43 = { uScriptParam_66 };
	func_177();
	func_176();
	func_171(iLocal_48, 0, 0);
	SYSTEM::SETTIMERA(0);
	func_170();
	func_166();

	while (true)
	{
		SYSTEM::WAIT(0);
		func_165(iLocal_48);
		func_164();
		func_162();
		func_155();
		func_171(iLocal_48, 0, 0);
		func_177();
		func_9();
	
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !NETWORK::NETWORK_IS_ACTIVITY_SESSION() && !func_8())
			func_1();
	}

	return;
}

void func_1() // Position - 0x106 Hash - 0x35BBF2A0 ^0x35BBF2A0
{
	if (func_7() || func_6())
	{
		func_5();
		func_2();
	}

	return;
}

void func_2() // Position - 0x127 Hash - 0x4E2E9530 ^0xA3F9BC90
{
	if (!func_4() && !func_3() && Global_2684798)
		Global_4718592.f_113724 = 0;

	return;
}

BOOL func_3() // Position - 0x155 Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_2683862.f_691;
}

BOOL func_4() // Position - 0x164 Hash - 0x9A79549B ^0x5E09568E
{
	return Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_192 != 0;
}

void func_5() // Position - 0x17B Hash - 0x92C2AC43 ^0x92C2AC43
{
	Global_2683862.f_756 = 1;
	return;
}

BOOL func_6() // Position - 0x18B Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_2683862.f_735;
}

BOOL func_7() // Position - 0x19A Hash - 0xEDAE0057 ^0x5A1A7786
{
	return IS_BIT_SET(Global_2683862.f_2, 11);
}

BOOL func_8() // Position - 0x1AB Hash - 0x7C65AEB ^0x3C1440C9
{
	return IS_BIT_SET(Global_2684799.f_1.f_2810, 3);
}

void func_9() // Position - 0x1BE Hash - 0xC834390D ^0x81AC2275
{
	BOOL flag;

	if (ENTITY::IS_ENTITY_DEAD(uLocal_43.f_1, false))
		func_178();

	if (bLocal_50)
		if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			func_178();

	func_154();
	flag = true;

	switch (iLocal_60)
	{
		case 4:
			func_153();
			return;
	
		case 5:
			func_150();
			return;
	
		case 6:
			func_148();
			return;
	
		case 7:
			func_147();
			return;
	
		case 8:
			func_146();
			return;
	
		case 9:
			func_144();
			return;
	
		case 10:
			func_143();
			func_140();
			func_139();
			return;
	
		case 11:
			func_138();
			return;
	
		case 12:
			break;
	
		default:
			flag = false;
			break;
	}

	if (!flag)
		return;

	if (!iLocal_60 == 12)
		return;

	switch (iLocal_60.f_1)
	{
		case 1:
			if (!func_137())
			{
				func_121();
				func_140();
			}
			break;
	
		case 2:
			func_119();
			break;
	
		case 12:
			func_106();
			break;
	
		case 3:
			func_10();
			break;
	
		default:
			break;
	}

	return;
}

void func_10() // Position - 0x2D9 Hash - 0x2CBFB08C ^0x34D533B1
{
	var unk;
	char* unk2;
	char* str;
	int str2;

	if (!IS_BIT_SET(Global_1950108.f_3, 27))
		PED::SET_PED_TO_RAGDOLL(uLocal_43.f_1, 3000, 3500, 0, true, true, false);

	Global_1944403 = 1;

	if (!CAM::IS_SCREEN_FADED_OUT())
	{
		CAM::DO_SCREEN_FADE_OUT(2500);
	
		while (CAM::IS_SCREEN_FADING_OUT())
		{
			SYSTEM::WAIT(0);
		}
	}

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_105(&unk, false, false);
	
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			NETWORK::NETWORK_FADE_OUT_ENTITY(PLAYER::PLAYER_PED_ID(), false, true);
	
		while (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false) && NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(PLAYER::PLAYER_PED_ID()) && NETWORK::NETWORK_IS_ENTITY_FADING(PLAYER::PLAYER_PED_ID()))
		{
			SYSTEM::WAIT(0);
		}
	
		if (!NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(PLAYER::PLAYER_PED_ID()))
			func_178();
	
		MISC::CLEAR_BIT(&(Global_1950108.f_3), 27);
		func_91(PLAYER::PLAYER_ID(), false, 57344, false);
		Global_2635559.f_2681 = 1;
	
		if (IS_BIT_SET(Global_1950108, 15))
			MISC::CLEAR_BIT(&Global_1950108, 15);
	
		if (IS_BIT_SET(Global_1950108.f_2, 6))
			MISC::CLEAR_BIT(&(Global_1950108.f_2), 6);
	
		if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
			Global_2635559.f_2682 = 1;
		else
			Global_2635559.f_2682 = 0;
	
		if (CAM::IS_SCRIPT_GLOBAL_SHAKING())
			CAM::STOP_SCRIPT_GLOBAL_SHAKING(false);
	
		if (func_87(true))
			func_75(0);
	
		func_73(true);
		func_178();
	}

	if (bLocal_65)
		func_178();

	str = "";
	str2.f_3 = 1064514355;
	str2.f_30 = 1148829696;
	str2.f_31 = 1148829696;
	str2.f_52 = 1148829696;
	num = 7;

	switch (func_67())
	{
		case 0:
			if (func_65() != 2)
				num = 0;
			else
				num = 1;
			break;
	
		case 1:
			if (!func_64(126))
				num = 2;
			else
				num = 3;
			break;
	
		case 2:
			if (!func_63(4))
			{
				if (func_64(58))
					num = 4;
			
				if (func_64(59))
					num = 5;
			
				if (num == 7)
					if (!func_62())
						num = 4;
					else
						num = 5;
			}
			else
			{
				num = 6;
			}
			break;
	}

	switch (num)
	{
		case 0:
			str = "DWC_MICHAEL_mansion";
			str2 = "SAVEM_Default@";
			str2.f_1 = "M_GetOut_R";
			str2.f_2 = "M_GetOut_R_CAM";
			str2.f_5 = { -814.181f, 181.1f, 75.74f };
			str2.f_8 = { 0f, 0f, 21.1994f };
			str2.f_4 = -1871534317;
			break;
	
		case 1:
			str = "DWC_MICHAEL_trailer";
			str2 = "SAVECountryside@";
			str2.f_1 = "M_GetOut_countryside";
			str2.f_2 = "M_GetOut_countryside_CAM";
			str2.f_5 = { 1968.14f, 3816.79f, 32.4287f };
			str2.f_8 = { 0f, 0f, 29.7938f };
			str2.f_4 = -1871534317;
			break;
	
		case 2:
			str = "DWC_FRANKLIN_city";
			str2 = "SWITCH@FRANKLIN@BED";
			str2.f_1 = "Sleep_GetUp_RubEyes";
			str2.f_2 = "Sleep_GetUp_RubEyes_CAM";
			str2.f_5 = { -17.2168f, -1441.224f, 30.1015f };
			str2.f_8 = { 0f, 0f, -179.653f };
			str2.f_4 = -1871534317;
			break;
	
		case 3:
			str = "DWC_FRANKLIN_hills";
			str2 = "SAVEBighouse@";
			str2.f_1 = "F_GetOut_r_bighouse";
			str2.f_2 = "F_GetOut_r_bighouse_CAM";
			str2.f_5 = { -1.049f, 524.283f, 170.064f };
			str2.f_8 = { 0f, 0f, 24f };
			str2.f_4 = -1871534317;
			break;
	
		case 4:
			str = "DWC_TREVOR_trailer";
			str2 = "SAVECountryside@";
			str2.f_1 = "T_GetOut_countryside";
			str2.f_2 = "T_GetOut_countryside_CAM";
			str2.f_5 = { 1968.14f, 3816.79f, 32.4287f };
			str2.f_8 = { 0f, 0f, 29.7938f };
			str2.f_4 = -1871534317;
			break;
	
		case 5:
			str = "DWC_TREVOR_beach";
			str2 = "SAVEVeniceB@";
			str2.f_1 = "T_GetOut_r_veniceB";
			str2.f_2 = "T_GetOut_r_veniceB_CAM";
			str2.f_5 = { -1148.438f, -1512.246f, 9.689f };
			str2.f_8 = { 0f, 0f, 36.25f };
			str2.f_4 = -1871534317;
			break;
	
		case 6:
			str = "DWC_TREVOR_stripclub";
			str2 = "SAVECouch@";
			str2.f_1 = "T_GetOut_couch";
			str2.f_2 = "T_GetOut_couch_CAM";
			str2.f_5 = { 94.53f, -1289.86f, 28.27f };
			str2.f_8 = { 0f, 0f, 29.7938f };
			str2.f_4 = -1871534317;
			break;
	}

	if (!ENTITY::IS_ENTITY_DEAD(uLocal_43.f_1, false))
		ENTITY::SET_ENTITY_COORDS(uLocal_43.f_1, str2.f_5, true, false, false, true);

	SYSTEM::WAIT(500);
	TEXT_LABEL_ASSIGN_STRING(&(str2.f_11), "", 16);
	str2.f_15 = -1f;
	func_12(str, &str2, "");
	func_11(126, 1);
	func_178();
	return;
}

void func_11(int iParam0, int iParam1) // Position - 0x760 Hash - 0xE9A65642 ^0xF9847A54
{
	int outValue;

	if (iParam1 < 1)
		return;

	if (Global_59104[iParam0 /*7*/].f_2)
		return;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return;

	if (Global_59104[iParam0 /*7*/])
	{
		STATS::STAT_GET_INT(Global_59104[iParam0 /*7*/].f_1, &outValue, -1);
		outValue = outValue + iParam1;
		STATS::STAT_SET_INT(Global_59104[iParam0 /*7*/].f_1, outValue, true);
	}

	return;
}

void func_12(char* sParam0, var uParam1, char* sParam2) // Position - 0x7BD Hash - 0x3B29DC84 ^0x99D84060
{
	float synchronizedScenePhase;
	int num;
	BOOL flag;
	BOOL pedResetFlag;
	int sceneID;
	Cam cam;
	int flags;
	BOOL flag2;
	BOOL flag3;
	var unk;
	int unk2;
	int unk3;
	char* unk4;
	char* unk5;
	char* unk6;
	int unk7;
	float unk8;
	float unk9;
	BOOL unk10;
	int unk11;
	int unk12;
	float unk13;
	Vector3 unk14;
	Vector3 unk15;
	float unk16;
	float unk17;
	float unk18;
	var unk19;
	float unk20;
	float unk21;
	float unk22;
	Vector3 unk23;
	Vector3 unk24;
	float unk25;
	int unk26;
	float unk27;
	float unk28;
	var unk29;
	float unk30;
	float unk31;
	float unk32;
	Vector3 unk33;
	Vector3 unk34;
	float unk35;
	int unk36;
	BOOL unk37;
	BOOL unk38;
	int unk39;

	synchronizedScenePhase = 0f;
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);

	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), true);

	GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(uParam1->f_5, 4500f);
	GRAPHICS::REMOVE_DECALS_IN_RANGE(uParam1->f_5, 4500f);
	MISC::CLEAR_AREA(uParam1->f_5, 5f, true, false, false, false);
	ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), uParam1->f_5, true, false, false, true);
	ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), true);
	SYSTEM::WAIT(0);
	MISC::SET_GAME_PAUSED(true);
	STREAMING::REQUEST_ANIM_DICT(*uParam1);

	if (MISC::IS_STRING_NULL_OR_EMPTY(uParam1->f_16))
	{
	}
	else
	{
		STREAMING::REQUEST_ANIM_DICT(uParam1->f_16);
	}

	if (!CAM::IS_SCREEN_FADED_OUT())
		CAM::DO_SCREEN_FADE_OUT(0);

	func_57(uParam1->f_5, uParam1->f_8.f_2, 0, 1);

	if (!CAM::IS_SCREEN_FADED_OUT())
		CAM::DO_SCREEN_FADE_OUT(0);

	num = MISC::GET_GAME_TIMER() + 20000;
	flag = false;
	uParam1->f_33 = 0;

	while (!flag && num > MISC::GET_GAME_TIMER())
	{
		flag = true;
		STREAMING::REQUEST_ANIM_DICT(*uParam1);
	
		if (!STREAMING::HAS_ANIM_DICT_LOADED(*uParam1))
			flag = false;
	
		if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam1->f_16))
		{
			STREAMING::REQUEST_ANIM_DICT(uParam1->f_16);
		
			if (!STREAMING::HAS_ANIM_DICT_LOADED(uParam1->f_16))
				flag = false;
		}
	
		if (!CAM::IS_SCREEN_FADED_OUT())
			CAM::DO_SCREEN_FADE_OUT(0);
	
		SYSTEM::WAIT(0);
	}

	func_54();

	if (!func_53(uParam1->f_22, 0f, 0f, 0f, false))
	{
		PATHFIND::SET_ROADS_IN_AREA((uParam1->f_5 + uParam1->f_19) - uParam1->f_22, uParam1->f_5 + uParam1->f_19 + uParam1->f_22, false, true);
		MISC::CLEAR_AREA_OF_VEHICLES(uParam1->f_5 + uParam1->f_19, SYSTEM::VMAG(uParam1->f_22) + 25f, false, false, false, false, false, false, 0);
		MISC::CLEAR_AREA(uParam1->f_5 + uParam1->f_19, SYSTEM::VMAG(uParam1->f_22) + 25f, true, false, false, false);
	}

	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
		WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), -1569615261, true);
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
	}

	ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
	MISC::SET_GAME_PAUSED(false);
	MISC::CLEAR_AREA(uParam1->f_5, 15f, true, false, false, false);
	PED::INSTANTLY_FILL_PED_POPULATION();
	VEHICLE::INSTANTLY_FILL_VEHICLE_POPULATION();
	func_51();

	while (func_50())
	{
		SYSTEM::WAIT(0);
	}

	if (!CAM::IS_SCREEN_FADED_IN() && !CAM::IS_SCREEN_FADING_IN())
		CAM::DO_SCREEN_FADE_IN(250);

	MISC::SET_FADE_IN_AFTER_DEATH_ARREST(true);

	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		sceneID = PED::CREATE_SYNCHRONIZED_SCENE(uParam1->f_5, uParam1->f_8, 2);
		PED::SET_SYNCHRONIZED_SCENE_LOOPED(sceneID, false);
		PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(sceneID, false);
		cam = unk_0xDEE46CEB08617ECA("DEFAULT_ANIMATED_CAMERA", 1);
		flags = 4;
	
		if (uParam1->f_4 != -1871534317)
			flags = flags | 2;
	
		func_48(PLAYER::PLAYER_PED_ID(), uParam1->f_18);
		TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), sceneID, *uParam1, uParam1->f_1, 1000f, -1.5f, flags, 0, 1148846080, 0);
		PED::SET_FORCE_FOOTSTEP_UPDATE(PLAYER::PLAYER_PED_ID(), true);
		PLAYER::SET_PLAYER_CLOTH_PIN_FRAMES(PLAYER::PLAYER_ID(), 1);
		pedResetFlag = PED::GET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 77);
		PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 77, true);
		CAM::PLAY_SYNCHRONIZED_CAM_ANIM(cam, sceneID, uParam1->f_2, *uParam1);
		CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
	
		if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam1->f_16) && !MISC::IS_STRING_NULL_OR_EMPTY(uParam1->f_17))
			TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), uParam1->f_16, uParam1->f_17, 1000f, -1.5f, 10000, 33, 0, false, false, false);
	}
	else
	{
		sceneID = -1;
	}

	if (!uParam1->f_25)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
		{
			func_47(sParam2, -1);
			uParam1->f_25 = 1;
		}
	}

	flag2 = false;
	flag3 = false;
	unk = 16;

	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam1->f_11)))
	{
		num2 = func_67();
		num3 = -1;
		str = "";
	
		switch (num2)
		{
			case 0:
				num3 = 0;
				str = "MICHAEL";
				break;
		
			case 1:
				num3 = 1;
				str = "FRANKLIN";
				break;
		
			case 2:
				num3 = 2;
				str = "TREVOR";
				break;
		
			default:
				break;
		}
	
		func_46(&unk, num3, PLAYER::PLAYER_PED_ID(), str, 0, 1);
	}

	if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(sceneID))
	{
		str2 = "WalkInterruptible";
		str3 = "ForceBlendout";
	
		while (PED::IS_SYNCHRONIZED_SCENE_RUNNING(sceneID) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			if (!flag3)
			{
				if (!CAM::IS_SCREEN_FADED_OUT())
				{
					if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam1->f_26))
					{
						GRAPHICS::ANIMPOSTFX_PLAY(uParam1->f_26, 0, false);
						flag3 = true;
					}
				
					if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam1->f_27))
					{
						if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam1->f_28))
						{
							AUDIO::PLAY_SOUND_FRONTEND(-1, uParam1->f_28, uParam1->f_27, false);
							flag3 = true;
						}
					
						if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam1->f_29))
						{
							AUDIO::PLAY_SOUND_FRONTEND(-1, uParam1->f_29, uParam1->f_27, false);
							flag3 = true;
						}
					}
				}
			}
		
			HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(HUD_GAME_STREAM);
			HUD::CLEAR_REMINDER_MESSAGE();
			func_40(0);
			gameTimer = MISC::GET_GAME_TIMER();
		
			if (gameTimer >= Global_43808 - 500)
				func_39(4000);
		
			num4 = -1f;
			num5 = -1f;
			synchronizedScenePhase = PED::GET_SYNCHRONIZED_SCENE_PHASE(sceneID);
		
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam1->f_11)))
				if (!flag2)
					if (synchronizedScenePhase >= uParam1->f_15)
						if (func_22(&unk, "PRSAUD", &(uParam1->f_11), 3, 0, 0, 0))
							flag2 = true;
		
			flag4 = false;
		
			if (ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), MISC::GET_HASH_KEY(str2)))
			{
				num6 = PAD::GET_CONTROL_VALUE(FRONTEND_CONTROL, INPUT_FRONTEND_AXIS_X) - 128;
				num7 = PAD::GET_CONTROL_VALUE(FRONTEND_CONTROL, INPUT_FRONTEND_AXIS_Y) - 128;
			
				if (num6 < 64 && num6 > -64 && num7 < 64 && num7 > -64)
				{
				}
				else
				{
					flag4 = true;
				}
			}
			else
			{
				num4 = -1f;
				num5 = -1f;
				flag4 = false;
				uParam1->f_3 = uParam1->f_3;
				num4 = num4;
				num5 = num5;
			}
		
			if (CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() == FIRST_PERSON && uParam1->f_52 > 0f)
			{
				if (synchronizedScenePhase >= uParam1->f_52)
				{
					if (!uParam1->f_32)
					{
						num8 = 1.5f;
						finalRenderedCamCoord = { CAM::GET_FINAL_RENDERED_CAM_COORD() };
						pedBoneCoords = { PED::GET_PED_BONE_COORDS(PLAYER::PLAYER_PED_ID(), 31086, 0f, 0f, 0f) };
						distanceBetweenCoords = MISC::GET_DISTANCE_BETWEEN_COORDS(finalRenderedCamCoord, pedBoneCoords, true);
						num8 = func_21(num8, 0.001f, distanceBetweenCoords - 0.75f);
					
						if (num8 < 0f)
							num8 = 0.001f;
					
						func_20(&(uParam1->f_34), PLAYER::PLAYER_PED_ID(), func_67(), 1E-06f, 300, 300, 0, 0, 1045220557);
						func_19(&(uParam1->f_34), uParam1->f_53);
					
						if (!uParam1->f_33)
						{
							uParam1->f_34 = 1;
							uParam1->f_34.f_7 = MISC::GET_GAME_TIMER();
							uParam1->f_34.f_8 = 0;
							uParam1->f_33 = 1;
						}
					
						if (uParam1->f_57 == 999f)
							uParam1->f_56 = 0f;
					
						if (uParam1->f_57 == 999f)
						{
							finalRenderedCamRot = { CAM::GET_FINAL_RENDERED_CAM_ROT(2) };
							entityHeading = ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID());
							num9 = finalRenderedCamRot.f_2;
							num10 = entityHeading;
							uParam1->f_57 = num9 - num10;
						
							if (uParam1->f_57 < 360f)
								uParam1->f_57 = uParam1->f_57 + 360f;
						
							if (uParam1->f_57 > 360f)
								uParam1->f_57 = uParam1->f_57 - 360f;
						}
					
						angle = uParam1->f_56;
						heading = uParam1->f_57;
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(angle, 1065353216);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(heading);
						CAM::SET_FIRST_PERSON_SHOOTER_CAMERA_PITCH(angle);
						CAM::SET_FIRST_PERSON_SHOOTER_CAMERA_HEADING(heading);
						finalRenderedCamCoord2 = { CAM::GET_FINAL_RENDERED_CAM_COORD() };
						gameplayCamCoord = { CAM::GET_GAMEPLAY_CAM_COORD() };
						distanceBetweenCoords2 = MISC::GET_DISTANCE_BETWEEN_COORDS(finalRenderedCamCoord2, gameplayCamCoord, true);
						num11 = SYSTEM::ROUND(distanceBetweenCoords2 * 1000f);
						uParam1->f_32 = 1;
					}
				
					if (uParam1->f_32)
					{
						CAM::DISABLE_FIRST_PERSON_FLASH_EFFECT_THIS_UPDATE();
						func_16(&(uParam1->f_34), true, true, true, false, false, 0);
					}
				}
			}
		
			if (ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), MISC::GET_HASH_KEY(str3)) || flag4)
			{
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
				{
					TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
				
					switch (uParam1->f_4)
					{
						case -1871534317:
							PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), -1871534317, true, 0, false);
							CAM::STOP_RENDERING_SCRIPT_CAMS_USING_CATCH_UP(false, 0, 3, 0);
							break;
					
						case -668482597:
							PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), -668482597, true, 0, false);
							PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 500, 0, true, false);
						
							if (CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() != FIRST_PERSON)
							{
								if (uParam1->f_31 == 999f)
									uParam1->f_30 = 0f;
							
								if (uParam1->f_31 == 999f)
								{
									finalRenderedCamRot2 = { CAM::GET_FINAL_RENDERED_CAM_ROT(2) };
									entityHeading2 = ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID());
									num12 = finalRenderedCamRot2.f_2;
									num13 = entityHeading2;
									uParam1->f_31 = num12 - num13;
								
									if (uParam1->f_31 < 360f)
										uParam1->f_31 = uParam1->f_31 + 360f;
								
									if (uParam1->f_31 > 360f)
										uParam1->f_31 = uParam1->f_31 - 360f;
								}
							
								angle2 = uParam1->f_30;
								heading2 = uParam1->f_31;
								CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(angle2, 1065353216);
								CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(heading2);
								finalRenderedCamCoord3 = { CAM::GET_FINAL_RENDERED_CAM_COORD() };
								gameplayCamCoord2 = { CAM::GET_GAMEPLAY_CAM_COORD() };
								distanceBetweenCoords3 = MISC::GET_DISTANCE_BETWEEN_COORDS(finalRenderedCamCoord3, gameplayCamCoord2, true);
								easeTime = SYSTEM::ROUND(distanceBetweenCoords3 * 1000f);
								CAM::RENDER_SCRIPT_CAMS(false, true, easeTime, false, false, 0);
							}
							break;
					
						default:
							break;
					}
				
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(sceneID))
					{
						PED::DETACH_SYNCHRONIZED_SCENE(sceneID);
						sceneID = -1;
					}
				}
			}
		
			SYSTEM::WAIT(0);
		}
	}

	if (!func_53(uParam1->f_22, 0f, 0f, 0f, false))
		PATHFIND::SET_ROADS_BACK_TO_ORIGINAL((uParam1->f_5 + uParam1->f_19) - uParam1->f_22, uParam1->f_5 + uParam1->f_19 + uParam1->f_22, 1);

	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);

	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());

	isInterpolatingFromScriptCams = CAM::IS_INTERPOLATING_FROM_SCRIPT_CAMS();
	flag5 = 0;

	if (uParam1->f_32)
	{
		CAM::DISABLE_FIRST_PERSON_FLASH_EFFECT_THIS_UPDATE();
	
		if (!func_16(&(uParam1->f_34), true, true, true, false, true, 0))
			flag5 = 1;
	}

	if (isInterpolatingFromScriptCams || flag5)
	{
		while (isInterpolatingFromScriptCams || flag5 && !STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
		{
			isInterpolatingFromScriptCams;
			flag5;
			num14 = 2;
			func_15(CAMERA_CONTROL, INPUT_LOOK_BEHIND, &num14);
			func_15(CAMERA_CONTROL, INPUT_VEH_LOOK_BEHIND, &num14);
			func_15(CAMERA_CONTROL, INPUT_LOOK_LR, &num14);
			func_15(CAMERA_CONTROL, INPUT_LOOK_UD, &num14);
			func_15(PLAYER_CONTROL, INPUT_JUMP, &num14);
			func_15(PLAYER_CONTROL, INPUT_DUCK, &num14);
			func_15(PLAYER_CONTROL, INPUT_MELEE_ATTACK_ALTERNATE, &num14);
			func_15(PLAYER_CONTROL, INPUT_MELEE_ATTACK_HEAVY, &num14);
			func_15(PLAYER_CONTROL, INPUT_MELEE_ATTACK_LIGHT, &num14);
			func_15(PLAYER_CONTROL, INPUT_MELEE_ATTACKR, &num14);
			func_15(PLAYER_CONTROL, INPUT_MELEE_ATTACKQ, &num14);
			SYSTEM::WAIT(0);
			isInterpolatingFromScriptCams = CAM::IS_INTERPOLATING_FROM_SCRIPT_CAMS();
			flag5 = false;
		
			if (uParam1->f_32)
			{
				CAM::DISABLE_FIRST_PERSON_FLASH_EFFECT_THIS_UPDATE();
			
				if (!func_16(&(uParam1->f_34), true, true, true, false, true, 0))
					flag5 = true;
			}
		}
	}

	if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam1->f_16))
		STREAMING::REMOVE_ANIM_DICT(uParam1->f_16);

	STREAMING::REMOVE_ANIM_DICT(*uParam1);
	CAM::DESTROY_CAM(cam, false);
	func_13(&(uParam1->f_34));

	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 77, pedResetFlag);
		ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false);
	}

	sParam0 = sParam0;
	return;
}

void func_13(var uParam0) // Position - 0x11F9 Hash - 0x1E8D3CCB ^0x84A9B761
{
	func_14(uParam0);
	*uParam0 = 0;
	uParam0->f_9 = { 0f, 0f, 0f };
	return;
}

void func_14(var uParam0) // Position - 0x1214 Hash - 0x821EA126 ^0x4A5A8DD9
{
	if (CAM::DOES_CAM_EXIST(uParam0->f_1))
		CAM::DESTROY_CAM(uParam0->f_1, false);

	if (CAM::DOES_CAM_EXIST(uParam0->f_2))
		CAM::DESTROY_CAM(uParam0->f_2, false);

	if (CAM::DOES_CAM_EXIST(uParam0->f_3))
		CAM::DESTROY_CAM(uParam0->f_3, false);

	if (CAM::DOES_CAM_EXIST(uParam0->f_4))
		CAM::DESTROY_CAM(uParam0->f_4, false);

	return;
}

void func_15(eControlType ectParam0, eControlAction ecaParam1, var uParam2) // Position - 0x126C Hash - 0xED816FC2 ^0xA547EA63
{
	PAD::DISABLE_CONTROL_ACTION(ectParam0, ecaParam1, true);
	*uParam2 = *uParam2 + 1;
	return;
}

BOOL func_16(var uParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4, BOOL bParam5, int iParam6) // Position - 0x1285 Hash - 0xC99A9ABF ^0xC5508BF3
{
	Vector3 finalRenderedCamCoord;
	Vector3 unk;
	Vector3 unk2;
	float offsetFromEntityGivenWorldCoords;
	float unk3;
	var unk4;
	var finalRenderedCamRot;
	float unk5;

	switch (*uParam0)
	{
		case 0:
			func_17();
		
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_5, false))
			{
				func_14(uParam0);
				finalRenderedCamCoord = { CAM::GET_FINAL_RENDERED_CAM_COORD() };
			
				if (bParam1)
					finalRenderedCamCoord = { finalRenderedCamCoord + (ENTITY::GET_ENTITY_VELOCITY(uParam0->f_5) * F2V(MISC::GET_FRAME_TIME())) };
			
				offsetFromEntityGivenWorldCoords = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(uParam0->f_5, finalRenderedCamCoord) };
				finalRenderedCamRot = { CAM::GET_FINAL_RENDERED_CAM_ROT(2) };
				value = { finalRenderedCamRot + uParam0->f_9 };
				value2 = { value - ENTITY::GET_ENTITY_ROTATION(uParam0->f_5, 2) };
				unk11 = { -SYSTEM::SIN(value.f_2) * SYSTEM::COS(value), SYSTEM::COS(value.f_2) * SYSTEM::COS(value), SYSTEM::SIN(value) };
				unk14 = { -SYSTEM::SIN(value2.f_2) * SYSTEM::COS(value2), SYSTEM::COS(value2.f_2) * SYSTEM::COS(value2), SYSTEM::SIN(value2) };
				finalRenderedCamFov = CAM::GET_FINAL_RENDERED_CAM_FOV();
			
				if (uParam0->f_17 > 0 || iParam6 != 0)
					uParam0->f_3 = CAM::CREATE_CAMERA(1775630800, false);
			
				uParam0->f_1 = CAM::CREATE_CAMERA(26379945, true);
			
				if (bParam1)
					CAM::ATTACH_CAM_TO_ENTITY(uParam0->f_1, uParam0->f_5, offsetFromEntityGivenWorldCoords, true);
				else
					CAM::SET_CAM_COORD(uParam0->f_1, finalRenderedCamCoord);
			
				CAM::SET_CAM_ROT(uParam0->f_1, finalRenderedCamRot, 2);
				CAM::SET_CAM_FOV(uParam0->f_1, finalRenderedCamFov);
				uParam0->f_2 = CAM::CREATE_CAMERA(26379945, true);
			
				if (bParam1 && !bParam4)
					CAM::ATTACH_CAM_TO_ENTITY(uParam0->f_2, uParam0->f_5, offsetFromEntityGivenWorldCoords + (unk14 * { uParam0->f_12, uParam0->f_12, uParam0->f_12 }), true);
				else
					CAM::SET_CAM_COORD(uParam0->f_2, finalRenderedCamCoord + (unk11 * { uParam0->f_12, uParam0->f_12, uParam0->f_12 }));
			
				CAM::SET_CAM_ROT(uParam0->f_2, finalRenderedCamRot, 2);
				CAM::SET_CAM_FOV(uParam0->f_2, finalRenderedCamFov);
			
				if (uParam0->f_17 > 0 && iParam6 == 0)
				{
					uParam0->f_4 = CAM::CREATE_CAMERA(26379945, true);
				
					if (bParam1 && !bParam4)
						CAM::ATTACH_CAM_TO_ENTITY(uParam0->f_4, uParam0->f_5, offsetFromEntityGivenWorldCoords + (unk14 * { uParam0->f_12, uParam0->f_12, uParam0->f_12 } * { uParam0->f_13, uParam0->f_13, uParam0->f_13 }), true);
					else
						CAM::SET_CAM_COORD(uParam0->f_4, finalRenderedCamCoord + (unk11 * { uParam0->f_12, uParam0->f_12, uParam0->f_12 } * { uParam0->f_13, uParam0->f_13, uParam0->f_13 }));
				
					CAM::SET_CAM_ROT(uParam0->f_4, finalRenderedCamRot, 2);
					CAM::SET_CAM_FOV(uParam0->f_4, finalRenderedCamFov);
				}
			
				if (uParam0->f_17 > 0 || iParam6 != 0)
				{
					CAM::ADD_CAM_SPLINE_NODE_USING_CAMERA(uParam0->f_3, uParam0->f_1, 0, 2);
				
					if (iParam6 == 0)
						CAM::ADD_CAM_SPLINE_NODE_USING_CAMERA(uParam0->f_3, uParam0->f_4, uParam0->f_17, 2);
				
					CAM::ADD_CAM_SPLINE_NODE_USING_CAMERA(uParam0->f_3, uParam0->f_2, uParam0->f_14 - uParam0->f_17, 2);
					CAM::SET_CAM_SPLINE_SMOOTHING_STYLE(uParam0->f_3, iParam6);
					CAM::SET_CAM_ACTIVE(uParam0->f_3, true);
				}
				else
				{
					CAM::SET_CAM_ACTIVE_WITH_INTERP(uParam0->f_2, uParam0->f_1, uParam0->f_14, 2, 2);
				}
			
				CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
				uParam0->f_7 = MISC::GET_GAME_TIMER();
				uParam0->f_8 = 0;
				*uParam0 = 1;
			}
			else
			{
				return true;
			}
			break;
	
		case 1:
			func_17();
		
			if (bParam3)
			{
				if (!uParam0->f_8)
				{
					if (MISC::GET_GAME_TIMER() >= uParam0->f_7 + uParam0->f_16)
					{
						if (bParam5)
						{
							switch (uParam0->f_6)
							{
								case 1:
									GRAPHICS::ANIMPOSTFX_PLAY("CamPushInFranklin", 0, false);
									break;
							
								case 0:
									GRAPHICS::ANIMPOSTFX_PLAY("CamPushInMichael", 0, false);
									break;
							
								case 2:
									GRAPHICS::ANIMPOSTFX_PLAY("CamPushInTrevor", 0, false);
									break;
							}
						}
						else
						{
							GRAPHICS::ANIMPOSTFX_PLAY("CamPushInNeutral", 0, false);
						}
					
						AUDIO::PLAY_SOUND_FRONTEND(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", true);
						uParam0->f_8 = 1;
					}
				}
			}
		
			if (MISC::GET_GAME_TIMER() >= uParam0->f_7 + uParam0->f_15)
			{
				if (bParam2)
				{
					func_14(uParam0);
					CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
				}
			
				return true;
			}
			break;
	
		case 2:
			return true;
	}

	return false;
}

void func_17() // Position - 0x1628 Hash - 0xF4F02F08 ^0x941C5F21
{
	RECORDING::REPLAY_PREVENT_RECORDING_THIS_FRAME();
	func_18();
	return;
}

void func_18() // Position - 0x1638 Hash - 0x9A142650 ^0x461C197C
{
	Global_23131.f_134 = 1;
	return;
}

void func_19(var uParam0, var uParam1, var uParam2, var uParam3) // Position - 0x1646 Hash - 0xA71191EC ^0xCDF2B995
{
	uParam0->f_9 = { uParam1 };
	return;
}

void func_20(var uParam0, Ped pedParam1, int iParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8) // Position - 0x1658 Hash - 0xBE36F4CF ^0x64EDDD32
{
	uParam0->f_5 = pedParam1;
	uParam0->f_6 = iParam2;
	uParam0->f_12 = fParam3;
	uParam0->f_14 = iParam4;
	uParam0->f_15 = iParam5;
	uParam0->f_16 = iParam6;
	uParam0->f_17 = iParam7;
	uParam0->f_13 = iParam8;
	return;
}

float func_21(float fParam0, float fParam1, float fParam2) // Position - 0x1690 Hash - 0xF4DC03E3 ^0xF4DC03E3
{
	if (fParam0 > fParam2)
		return fParam2;
	else if (fParam0 < fParam1)
		return fParam1;

	return fParam0;
}

BOOL func_22(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x16B7 Hash - 0x384540C1 ^0x384540C1
{
	func_38(uParam0, 145, sParam1, iParam4, iParam5, iParam6);

	if (iParam3 > 7)
		if (iParam3 < 12)
			iParam3 = 7;

	Global_21732 = 0;
	Global_21734 = 0;
	Global_21739 = 0;
	Global_22716 = 0;
	Global_22718 = 0;
	Global_22722 = 0;
	Global_2883585 = 0;
	return func_23(sParam2, iParam3, false);
}

BOOL func_23(char* sParam0, int iParam1, BOOL bParam2) // Position - 0x1705 Hash - 0x77297D51 ^0x40DC584A
{
	Global_21726 = 0;

	if (Global_21725 == 0 || Global_21727 == 2)
	{
		if (Global_21725 != 0)
		{
			if (iParam1 > Global_21727)
			{
				if (Global_21732 == 0)
				{
					AUDIO::STOP_SCRIPTED_CONVERSATION(false);
					Global_20383.f_1 = 3;
					Global_21725 = 0;
					Global_21726 = 1;
					Global_21778 = 0;
					Global_21721 = 0;
					Global_21722 = 0;
					Global_21736 = 0;
					Global_21735 = false;
					Global_20382 = 0;
				}
				else
				{
					func_37();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
	
		if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
			return 0;
	
		if (func_36(8, -1))
			return 0;
	
		Global_21801 = { Global_21795 };
		func_35();
		Global_21014 = { Global_21179 };
		Global_21731 = Global_21732;
		Global_21738 = Global_21739;
		Global_2883586 = Global_2883585;
		Global_21740 = { Global_21756 };
		Global_21733 = Global_21734;
		Global_22715 = Global_22716;
		Global_22723 = { Global_22729 };
		Global_22717 = Global_22718;
		Global_22719 = Global_22720;
		Global_22721 = Global_22722;
		Global_21344.f_370 = Global_22714;
		Global_21344.f_368 = Global_22712;
		Global_21344.f_369 = Global_22713;
		Global_21721 = Global_21722;
	
		if (Global_21731)
		{
			MISC::CLEAR_BIT(&Global_8253, 20);
			MISC::CLEAR_BIT(&Global_8254, 17);
			MISC::CLEAR_BIT(&Global_8255, 0);
		
			if (bParam2)
			{
				func_33();
			
				if (Global_9058[Global_20383 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
			
				if (Global_20383.f_1 > 3)
					return 0;
			}
		
			if (Global_20349 == 1)
				return 0;
		
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()))
					return 0;
			
				if (func_32())
					return 0;
			
				if (TASK::IS_PED_SPRINTING(PLAYER::PLAYER_PED_ID()))
					return 0;
			
				if (PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
					return 0;
			
				if (PED::IS_PED_IN_PARACHUTE_FREE_FALL(PLAYER::PLAYER_PED_ID()))
					return 0;
			
				if (WEAPON::GET_IS_PED_GADGET_EQUIPPED(PLAYER::PLAYER_PED_ID(), -72657034))
					return 0;
			
				if (!Global_78558)
				{
					if (ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID()))
						return 0;
				
					if (PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()))
						return 0;
				
					if (PED::IS_PED_PLANTING_BOMB(PLAYER::PLAYER_PED_ID()))
						return 0;
				
					if (PLAYER::IS_SPECIAL_ABILITY_ACTIVE(PLAYER::PLAYER_ID(), 0))
						return 0;
				}
			}
		
			if (func_31())
			{
				return 0;
			}
			else
			{
				switch (Global_20383.f_1)
				{
					case 7:
						return 0;
				
					case 8:
						return 0;
				
					case 9:
						break;
				
					case 10:
						break;
				
					default:
						break;
				}
			
				if (IS_BIT_SET(Global_8253, 9))
					return 0;
			}
		
			func_30();
			Global_21735 = bParam2;
		}
	
		Global_21727 = iParam1;
		TEXT_LABEL_ASSIGN_STRING(&Global_21344, sParam0, 24);
		Global_20591 = 0;
		func_29();
		func_24();
		return 1;
	}

	if (Global_21725 == 5)
		return 0;

	if (iParam1 < Global_21727 || iParam1 == Global_21727)
		return 0;

	if (iParam1 == 2)
	{
	}
	else
	{
		func_37();
	}

	return 0;
}

void func_24() // Position - 0x19D3 Hash - 0xF42BEB19 ^0xA29557DA
{
	if (!func_25())
		return;

	if (Global_21731)
	{
		TEXT_LABEL_COPY(&(Global_1977511.f_1), { Global_21344 }, 4);
		Global_1977511 = Global_7568;
		Global_1977511.f_6 = Global_21735;
	}

	return;
}

BOOL func_25() // Position - 0x1A0A Hash - 0x7B74B45F ^0xCE052A5D
{
	if (!Global_262145.f_28878)
		return false;

	if (!Global_78558)
		return false;

	if (PLAYER::PLAYER_ID() == func_28())
		return false;

	if (func_26(PLAYER::PLAYER_ID()))
		return false;

	if (IS_BIT_SET(Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_1, 7))
		return false;

	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
		return false;

	return true;
}

BOOL func_26(Player plParam0) // Position - 0x1A6D Hash - 0x6E46BC72 ^0x6E46BC72
{
	return func_27(plParam0, 20);
}

BOOL func_27(Player plParam0, int iParam1) // Position - 0x1A7D Hash - 0x7CD5054C ^0x870BEA81
{
	return IS_BIT_SET(Global_1894573[plParam0 /*608*/].f_10.f_4, iParam1);
}

Player func_28() // Position - 0x1A95 Hash - 0x478900E4 ^0x478900E4
{
	return -1;
}

void func_29() // Position - 0x1A9E Hash - 0xE1F0C158 ^0xB5D2F635
{
	int i;

	for (i = 0; i <= 69; i = i + 1)
	{
		TEXT_LABEL_ASSIGN_STRING(&Global_20593[i /*6*/], "", 24);
	}

	AUDIO::STOP_SCRIPTED_CONVERSATION(false);
	Global_21725 = 1;
	return;
}

void func_30() // Position - 0x1ACE Hash - 0xCD8A4D28 ^0xCD8A4D28
{
	Global_21778 = Global_21777;
	Global_21772 = Global_21773;
	Global_21819 = { Global_21807 };
	Global_21825 = { Global_21813 };
	Global_21780 = Global_21779;
	Global_21849 = { Global_21831 };
	Global_21855 = { Global_21837 };
	Global_21861 = { Global_21843 };
	Global_21867 = { Global_21873 };
	Global_7568 = Global_7569;
	Global_7570 = Global_7571;
	Global_21736 = Global_21737;
	Global_21738 = Global_21739;
	Global_21740 = { Global_21756 };
	Global_21729 = Global_21730;
	Global_22741 = 0;
	Global_21774 = 0;
	Global_21775 = 0;
	MISC::CLEAR_BIT(&Global_8254, 16);
	return;
}

BOOL func_31() // Position - 0x1B63 Hash - 0xD140D54A ^0xE638D98F
{
	if (Global_20383.f_1 == 1 || Global_20383.f_1 == 0)
		return true;

	return false;
}

BOOL func_32() // Position - 0x1B8A Hash - 0x9A999369 ^0x4033F7BF
{
	int num;
	int weaponHash;

	if (Global_78558)
	{
		num = 0;
		WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &weaponHash, true);
	
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			if (weaponHash == 100416529 || weaponHash == 205991906 || weaponHash == 856002082)
				num = 1;
	
		if (CAM::IS_AIM_CAM_ACTIVE() && num == 1)
			return true;
		else
			return false;
	}

	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		if (PED::GET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 78, true))
			return true;
		else
			return false;

	return true;
}

void func_33() // Position - 0x1C23 Hash - 0x98476CE1 ^0x250FEB7C
{
	if (func_34(14))
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
		Global_20383 = func_67();
	
		if (Global_20383 == 145)
			Global_20383 = 3;
	
		if (Global_78558)
			Global_20383 = 3;
	
		if (Global_20383 > 3)
			Global_20383 = 3;
	}

	return;
}

BOOL func_34(int iParam0) // Position - 0x1CC5 Hash - 0x937D8816 ^0x937D8816
{
	return Global_43257 == iParam0;
}

void func_35() // Position - 0x1CD3 Hash - 0x719867DD ^0xB196B20A
{
	int i;

	for (i = 0; i <= 15; i = i + 1)
	{
		Global_21014[i /*10*/] = 0;
		TEXT_LABEL_ASSIGN_STRING(&(Global_21014[i /*10*/].f_1), "", 24);
		Global_21014[i /*10*/].f_7 = 0;
		Global_21014[i /*10*/].f_8 = 0;
	}

	Global_21014.f_161 = -99;
	Global_21014.f_162 = { 0f, 0f, 0f };
	return;
}

BOOL func_36(int iParam0, int iParam1) // Position - 0x1D29 Hash - 0xA14C4D3F ^0xA6034F77
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

void func_37() // Position - 0x1D61 Hash - 0xE32CF1EF ^0xB9A7BEB2
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_22736 = 0;

	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING() || Global_20383.f_1 == 9 || Global_20382 == 1)
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		Global_21725 = 6;
		Global_20383.f_1 = 3;
		return;
	}

	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(true);
		Global_21725 = 6;
		return;
	}

	return;
}

void func_38(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5) // Position - 0x1DB8 Hash - 0xC6B752B2 ^0xC6B752B2
{
	Global_21179 = { *uParam0 };
	Global_7569 = iParam1;
	TEXT_LABEL_ASSIGN_STRING(&Global_21795, sParam2, 24);
	Global_22714 = iParam5;

	if (iParam3 == 0)
	{
		Global_22712 = 1;
		Global_22710 = 0;
	}
	else
	{
		Global_22712 = 0;
		Global_22710 = 1;
	}

	if (iParam4 == 0)
	{
		Global_22713 = 1;
		Global_22711 = 0;
	}
	else
	{
		Global_22713 = 0;
		Global_22711 = 1;
	}

	return;
}

void func_39(int iParam0) // Position - 0x1E0E Hash - 0xC0234809 ^0x4FD853DC
{
	Global_43808 = MISC::GET_GAME_TIMER() + iParam0;
	return;
}

void func_40(int iParam0) // Position - 0x1E20 Hash - 0x7E11E9C ^0x544BF257
{
	if (func_45())
		return;

	if (!Global_20383.f_1 == 1)
	{
		if (func_44(0))
			func_41(iParam0);
	
		MISC::SET_BIT(&Global_8254, 2);
	}

	return;
}

void func_41(int iParam0) // Position - 0x1E53 Hash - 0x4066FEF5 ^0x9787FBDA
{
	if (func_45())
		return;

	if (Global_20584)
		if (func_43())
			func_42(true, true);
		else
			func_42(false, false);

	if (Global_20383.f_1 == 10 || Global_20383.f_1 == 9)
		MISC::SET_BIT(&Global_8254, 16);

	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);

	Global_21725 = 5;

	if (iParam0 == 1)
		MISC::SET_BIT(&Global_8253, 30);
	else
		MISC::CLEAR_BIT(&Global_8253, 30);

	if (!func_31())
		Global_20383.f_1 = 3;

	return;
}

void func_42(BOOL bParam0, BOOL bParam1) // Position - 0x1EDD Hash - 0xF40FC178 ^0xA6F60F17
{
	if (bParam0)
	{
		if (func_44(0))
		{
			Global_20584 = true;
		
			if (bParam1)
				MOBILE::GET_MOBILE_PHONE_POSITION(&Global_20320);
		
			Global_20311 = { Global_20329[Global_20328 /*3*/] };
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_20311);
		}
	}
	else if (Global_20584 == true)
	{
		Global_20584 = false;
		Global_20311 = { Global_20336[Global_20328 /*3*/] };
	
		if (bParam1)
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_20320);
		else
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_20311);
	}

	return;
}

BOOL func_43() // Position - 0x1F51 Hash - 0x8DF3D75D ^0x8DF3D75D
{
	return IS_BIT_SET(Global_1962996, 5);
}

BOOL func_44(int iParam0) // Position - 0x1F5F Hash - 0xE8921B44 ^0x4F063755
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

BOOL func_45() // Position - 0x1FB6 Hash - 0xC41437CB ^0xC41437CB
{
	return IS_BIT_SET(Global_1962996, 19);
}

void func_46(var uParam0, int iParam1, Ped pedParam2, char* sParam3, int iParam4, int iParam5) // Position - 0x1FC5 Hash - 0x6C235EE0 ^0x9E57F206
{
	uParam0->[iParam1 /*10*/].f_7 == 1;
	uParam0->[iParam1 /*10*/] = pedParam2;
	TEXT_LABEL_ASSIGN_STRING(&(uParam0->[iParam1 /*10*/].f_1), sParam3, 24);
	uParam0->[iParam1 /*10*/].f_7 = 1;
	uParam0->[iParam1 /*10*/].f_8 = iParam4;
	uParam0->[iParam1 /*10*/].f_9 = iParam5;

	if (!Global_78558)
	{
		if (!PED::IS_PED_INJURED(pedParam2))
			if (uParam0->[iParam1 /*10*/].f_8 == 0)
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(pedParam2, false);
			else
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(pedParam2, true);
	
		if (!PED::IS_PED_INJURED(pedParam2))
			if (uParam0->[iParam1 /*10*/].f_9 == 0)
				TASK::OPEN_PATROL_ROUTE(pedParam2, 0);
			else
				TASK::OPEN_PATROL_ROUTE(pedParam2, 1);
	}

	return;
}

void func_47(char* sParam0, int iParam1) // Position - 0x2060 Hash - 0xCBB0D91 ^0x21070E5C
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam1);
	return;
}

void func_48(Ped pedParam0, int iParam1) // Position - 0x2077 Hash - 0x2E827890 ^0xBD1EF0FE
{
	if (func_49(iParam1, 1))
		unk_0xF7E0E1B75B1BE2B6(pedParam0, "HOSPITAL_0", 0f, 1f);

	if (func_49(iParam1, 2))
		unk_0xF7E0E1B75B1BE2B6(pedParam0, "HOSPITAL_1", 0f, 1f);

	if (func_49(iParam1, 4))
		unk_0xF7E0E1B75B1BE2B6(pedParam0, "HOSPITAL_2", 0f, 1f);

	if (func_49(iParam1, 8))
		unk_0xF7E0E1B75B1BE2B6(pedParam0, "HOSPITAL_3", 0f, 1f);

	if (func_49(iParam1, 16))
		unk_0xF7E0E1B75B1BE2B6(pedParam0, "HOSPITAL_4", 0f, 1f);

	if (func_49(iParam1, 32))
		unk_0xF7E0E1B75B1BE2B6(pedParam0, "HOSPITAL_5", 0f, 1f);

	if (func_49(iParam1, 64))
		unk_0xF7E0E1B75B1BE2B6(pedParam0, "HOSPITAL_6", 0f, 1f);

	if (func_49(iParam1, 128))
		unk_0xF7E0E1B75B1BE2B6(pedParam0, "HOSPITAL_7", 0f, 1f);

	if (func_49(iParam1, 256))
		unk_0xF7E0E1B75B1BE2B6(pedParam0, "HOSPITAL_8", 0f, 1f);

	if (func_49(iParam1, 512))
		unk_0xF7E0E1B75B1BE2B6(pedParam0, "HOSPITAL_9", 0f, 1f);

	func_49(iParam1, 0);
	return;
}

BOOL func_49(int iParam0, int iParam1) // Position - 0x216E Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

BOOL func_50() // Position - 0x217D Hash - 0x25806CBF ^0x25806CBF
{
	if (Global_100681 == 13 || Global_100681 == 10 || Global_100681 == 11 || Global_100681 == 12)
		return false;

	return true;
}

void func_51() // Position - 0x21BB Hash - 0x65DD5F8C ^0x1B295010
{
	int i;

	for (i = 0; i < 8; i = i + 1)
	{
		if (Global_97614[i /*17*/] && !Global_97614[i /*17*/].f_1)
			if (Global_97614[i /*17*/].f_3 == 0)
				if (Global_97614[i /*17*/].f_5 != 88 && Global_97614[i /*17*/].f_5 != 89 && Global_97614[i /*17*/].f_5 != 92)
					func_52(Global_97614[i /*17*/].f_5, true);
	}

	return;
}

void func_52(int iParam0, BOOL bParam1) // Position - 0x2242 Hash - 0x2E8A8CC9 ^0x2E8A8CC9
{
	if (bParam1)
		if (iParam0 != 88 && iParam0 != 89 && iParam0 != 92)
			Global_94666[iParam0 /*2*/] = 1;
	else
		Global_94666[iParam0 /*2*/] = 0;

	return;
}

BOOL func_53(float fParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5, BOOL bParam6) // Position - 0x2280 Hash - 0x2D46096D ^0xEA41378F
{
	if (bParam6)
		return fParam0 == fParam3 && fParam0.f_1 == fParam3.f_1;

	return fParam0 == fParam3 && fParam0.f_1 == fParam3.f_1 && fParam0.f_2 == fParam3.f_2;
}

void func_54() // Position - 0x22C7 Hash - 0xCD77FD7E ^0xCD77FD7E
{
	func_55();
	func_73(true);
	return;
}

void func_55() // Position - 0x22D8 Hash - 0x764E78AD ^0x764E78AD
{
	int i;
	int num;
	int j;

	i = 0;
	num = 0;

	for (i = 0; i < 16; i = i + 1)
	{
		num = Global_44232[i /*5*/];
	
		if (!num == -1)
			func_171(1, num, 1);
	}

	j = 0;

	for (j = 0; j < 5; j = j + 1)
	{
		if (Global_44206[j /*5*/] == 0)
			func_56(j);
	}

	return;
}

void func_56(int iParam0) // Position - 0x2338 Hash - 0xBB510F32 ^0xE77AE77B
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

int func_57(Vector3 vParam0, var uParam1, var uParam2, float fParam3, int iParam4, int iParam5) // Position - 0x23BB Hash - 0x279D54F3 ^0x26A644B5
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		func_61(0);
		MISC::CLEAR_AREA(vParam0, 5f, true, false, false, false);
	
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), vParam0, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), fParam3);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			}
		}
	
		STREAMING::NEW_LOAD_SCENE_START_SPHERE(vParam0, 4500f, 0);
		SYSTEM::WAIT(0);
		MISC::CLEAR_AREA(vParam0, 5000f, true, false, false, false);
		MISC::CLEAR_AREA_OF_OBJECTS(vParam0, 5000f, 0);
		GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(vParam0, 5000f);
		GRAPHICS::REMOVE_DECALS_IN_RANGE(vParam0, 5000f);
		func_60();
		func_59();
		SYSTEM::SETTIMERA(0);
		func_61(1);
	
		if (!STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
		{
			while (!STREAMING::NEW_LOAD_SCENE_START_SPHERE(vParam0, 4500f, 0))
			{
				SYSTEM::WAIT(0);
			
				if (SYSTEM::TIMERA() > 2000)
				{
					MISC::SET_GAME_PAUSED(false);
					return 0;
				}
			}
		}
	
		SYSTEM::SETTIMERA(0);
	
		while (!STREAMING::IS_NEW_LOAD_SCENE_LOADED())
		{
			SYSTEM::WAIT(0);
		
			if (SYSTEM::TIMERA() > 20000)
			{
				MISC::SET_GAME_PAUSED(false);
			
				if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
					STREAMING::NEW_LOAD_SCENE_STOP();
			
				return 0;
			}
		}
	
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
					STREAMING::NEW_LOAD_SCENE_STOP();
			
				MISC::SET_GAME_PAUSED(false);
				SYSTEM::SETTIMERA(0);
				PED::INSTANTLY_FILL_PED_POPULATION();
			
				if (iParam5 == 1)
					VEHICLE::INSTANTLY_FILL_VEHICLE_POPULATION();
				else
					SYSTEM::SETTIMERA(5000);
			
				MISC::POPULATE_NOW();
			}
		}
	
		while (!VEHICLE::HAS_INSTANT_FILL_VEHICLE_POPULATION_FINISHED() && !func_58() && SYSTEM::TIMERA() < 1500)
		{
			SYSTEM::WAIT(0);
		}
	
		if (SYSTEM::TIMERA() > 1500)
		{
			if (iParam5 == 1)
			{
			}
		}
	
		if (iParam4 == 1)
		{
			MISC::GET_GROUND_Z_FOR_3D_COORD(vParam0, &(vParam0.f_2), false, false);
			MISC::CLEAR_AREA(vParam0, 5f, true, false, false, false);
		
			if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
			{
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), vParam0, true, false, false, true);
					ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), fParam3);
				}
			}
		}
	
		CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
		func_61(0);
		return 1;
	}

	func_61(0);
	return 0;
}

BOOL func_58() // Position - 0x25DA Hash - 0x56B3BC1C ^0x56B3BC1C
{
	return !Global_77348.f_553;
}

void func_59() // Position - 0x25EA Hash - 0x1D062B05 ^0x1D062B05
{
	Global_77348.f_553 = 1;
	Global_77348.f_554 = 0;
	return;
}

void func_60() // Position - 0x2602 Hash - 0x3EE382EB ^0x3EE382EB
{
	int i;

	for (i = 0; i < 68; i = i + 1)
	{
		Global_77348[i] = 0;
	}

	return;
}

void func_61(int iParam0) // Position - 0x2626 Hash - 0x92BC0B3F ^0x5C77C8CD
{
	int num;

	num = 0;

	if (num == 0)
	{
		if (iParam0 == 1)
		{
			if (!IS_BIT_SET(Global_100681.f_20, 2))
			{
				MISC::SET_GAME_PAUSED(true);
				MISC::SET_BIT(&(Global_100681.f_20), 2);
			}
		}
		else if (IS_BIT_SET(Global_100681.f_20, 2))
		{
			MISC::SET_GAME_PAUSED(false);
			MISC::CLEAR_BIT(&(Global_100681.f_20), 2);
		}
	}

	return;
}

BOOL func_62() // Position - 0x2677 Hash - 0x6E373505 ^0x528400E3
{
	if (IS_BIT_SET(MISC::GET_RANDOM_INT_IN_RANGE(0, 65535), 0))
		return true;

	return false;
}

BOOL func_63(int iParam0) // Position - 0x2695 Hash - 0x757E9BA6 ^0x757E9BA6
{
	return IS_BIT_SET(Global_113648.f_7231[iParam0], 0);
}

BOOL func_64(int iParam0) // Position - 0x26AA Hash - 0xB6246282 ^0x2350A449
{
	if (iParam0 == 146 || iParam0 == -1)
		return false;

	return Global_113648.f_9087.f_99.f_58[iParam0];
}

int func_65() // Position - 0x26D7 Hash - 0x9D8DC2BB ^0x9D8DC2BB
{
	if (Global_40195[11] == 1)
		return 4;

	if (!func_66(21))
		return 0;

	if (!func_64(130))
		return 1;

	if (!func_64(131))
		return 2;

	if (!func_66(22))
		return 1;

	if (!func_66(49))
		return 3;

	if (!func_66(28))
		return 1;

	return 3;
}

BOOL func_66(int iParam0) // Position - 0x2755 Hash - 0x35F9F9C ^0x35F9F9C
{
	if (iParam0 == 94 || iParam0 == -1)
		return false;

	return Global_113648.f_9087.f_330[iParam0 /*6*/];
}

int func_67() // Position - 0x2781 Hash - 0x3C5423D7 ^0x3C5423D7
{
	func_68();
	return Global_113648.f_2365.f_539.f_4321;
}

void func_68() // Position - 0x279A Hash - 0xD1F2D853 ^0xF9F5FD4D
{
	int num;

	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_71(Global_113648.f_2365.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			num = func_70(PLAYER::PLAYER_PED_ID());
		
			if (func_69(num) && !func_34(14) || Global_112599)
			{
				if (Global_113648.f_2365.f_539.f_4321 != num && func_69(Global_113648.f_2365.f_539.f_4321))
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

BOOL func_69(int iParam0) // Position - 0x2897 Hash - 0x8907F004 ^0x8907F004
{
	return iParam0 < 3;
}

int func_70(Ped pedParam0) // Position - 0x28A3 Hash - 0xAC4E9801 ^0xB379A75F
{
	int i;
	Hash entityModel;

	if (ENTITY::DOES_ENTITY_EXIST(pedParam0))
	{
		entityModel = ENTITY::GET_ENTITY_MODEL(pedParam0);
	
		for (i = 0; i <= 2; i = i + 1)
		{
			if (func_71(i) == entityModel)
				return i;
		}
	}

	return 145;
}

Hash func_71(int iParam0) // Position - 0x28E0 Hash - 0xADCB9755 ^0xADCB9755
{
	if (func_69(iParam0))
		return func_72(iParam0);
	else
		iParam0 != 145;

	return 0;
}

Hash func_72(int iParam0) // Position - 0x2905 Hash - 0xE4CEEC2C ^0xE4CEEC2C
{
	return Global_2028[iParam0 /*29*/];
}

void func_73(BOOL bParam0) // Position - 0x2914 Hash - 0x37413453 ^0xC559DB13
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
	func_74();
	return;
}

void func_74() // Position - 0x29ED Hash - 0xCA36E4AC ^0x3832E562
{
	Global_44411 = 0;
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

void func_75(int iParam0) // Position - 0x2A22 Hash - 0x89313E69 ^0x89313E69
{
	int num;

	switch (iParam0)
	{
		case 0:
			num = Global_262145.f_18161;
			break;
	
		case 1:
			num = Global_262145.f_18151;
			break;
	
		case 2:
			num = Global_262145.f_18162;
			break;
	
		case 3:
			num = Global_262145.f_18154;
			break;
	
		case 4:
			num = Global_262145.f_18150;
			break;
	
		case 6:
			num = 3;
			break;
	
		case 7:
			num = Global_262145.f_18165;
			break;
	
		case 8:
			num = Global_262145.f_18166;
			break;
	
		case 9:
			num = Global_262145.f_18169;
			break;
	
		case 22:
			num = Global_262145.f_18170;
			break;
	
		case 23:
			num = Global_262145.f_18163;
			break;
	
		case 25:
			num = Global_262145.f_19055;
			break;
	
		case 26:
			num = Global_262145.f_19054;
			break;
	}

	if (num != 0)
		STATS::PLAYSTATS_EARNED_MC_POINTS(func_85(func_86()), func_84(func_86()), func_83(), func_82(), iParam0, num);

	func_81(num);
	func_76(num);
	return;
}

void func_76(int iParam0) // Position - 0x2B47 Hash - 0xE5096896 ^0x32C34500
{
	int num;

	num = func_80(3971, -1, 0);
	num = num + iParam0;

	if (num < 0)
		num = 0;

	if (num > 9999)
		num = 9999;

	Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_10.f_468 = num;
	func_77(3971, num, -1, true, false);
	return;
}

void func_77(int iParam0, int iParam1, int iParam2, BOOL bParam3, BOOL bParam4) // Position - 0x2B95 Hash - 0x7D768555 ^0x693A841
{
	Hash statName;

	bParam4;
	statName = Global_2805027[iParam0 /*3*/][func_78(iParam2)];

	if (statName != 0)
		STATS::STAT_SET_INT(statName, iParam1, bParam3);

	return;
}

int func_78(int iParam0) // Position - 0x2BC5 Hash - 0x1A3F3220 ^0x1A3F3220
{
	int num;
	int num2;

	num = iParam0;

	if (num == -1)
	{
		num2 = func_79();
	
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

int func_79() // Position - 0x2BF9 Hash - 0x47FF56D2 ^0x47FF56D2
{
	return Global_1574918;
}

int func_80(int iParam0, int iParam1, int iParam2) // Position - 0x2C05 Hash - 0x4BC84F7B ^0x370D7D6F
{
	Hash statHash;
	int outValue;

	if (iParam0 != 14192)
	{
		iParam2 == 0;
		statHash = Global_2805027[iParam0 /*3*/][func_78(iParam1)];
	
		if (STATS::STAT_GET_INT(statHash, &outValue, -1))
			return outValue;
	}

	return 0;
}

void func_81(int iParam0) // Position - 0x2C42 Hash - 0x39B058CC ^0xC55700F2
{
	Player player;

	player = PLAYER::PLAYER_ID();
	Global_1894573[player /*608*/].f_10.f_467 = Global_1894573[player /*608*/].f_10.f_467 + iParam0;

	if (Global_1894573[player /*608*/].f_10.f_467 < -9999)
		Global_1894573[player /*608*/].f_10.f_467 = 9999;
	else if (Global_1894573[player /*608*/].f_10.f_467 > 9999)
		Global_1894573[player /*608*/].f_10.f_467 = 9999;

	return;
}

int func_82() // Position - 0x2CBC Hash - 0x38EE7661 ^0xAB55A4B8
{
	if (Global_1947733.f_3 != 0)
		return Global_1947733.f_3;

	return -1;
}

int func_83() // Position - 0x2CD8 Hash - 0x38EE7661 ^0x725966E2
{
	if (Global_1947733.f_2 != 0)
		return Global_1947733.f_2;

	return -1;
}

int func_84(Player plParam0) // Position - 0x2CF4 Hash - 0xAE8A6582 ^0x6E31D9BB
{
	if (plParam0 == func_28())
		return -1;

	return Global_1894573[plParam0 /*608*/].f_10.f_8[1];
}

int func_85(Player plParam0) // Position - 0x2D19 Hash - 0x57997590 ^0xB0714101
{
	if (plParam0 == func_28())
		return -1;

	return Global_1894573[plParam0 /*608*/].f_10.f_8[0];
}

Player func_86() // Position - 0x2D3E Hash - 0xFD2601BF ^0xA8AA969
{
	return Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_10;
}

BOOL func_87(BOOL bParam0) // Position - 0x2D53 Hash - 0xCA2EA26D ^0x45E6CA28
{
	return func_88(PLAYER::PLAYER_ID(), bParam0);
}

BOOL func_88(Player plParam0, BOOL bParam1) // Position - 0x2D65 Hash - 0xB4D52F0E ^0xB4D52F0E
{
	return func_89(plParam0, bParam1, 1);
}

int func_89(Player plParam0, BOOL bParam1, int iParam2) // Position - 0x2D76 Hash - 0xE1283130 ^0x8DFB78AD
{
	Player player;

	if (plParam0 == func_28())
		return 0;

	if (!bParam1)
		if (func_90(plParam0, iParam2))
			return 0;

	player = Global_1894573[plParam0 /*608*/].f_10;

	if (player != func_28() && Global_1894573[player /*608*/].f_10.f_428 == iParam2)
		return 1;

	return 0;
}

BOOL func_90(Player plParam0, int iParam1) // Position - 0x2DD2 Hash - 0xECFEB130 ^0x65196460
{
	if (plParam0 != func_28())
		if (Global_1894573[plParam0 /*608*/].f_10 != func_28())
			if (Global_1894573[plParam0 /*608*/].f_10 == plParam0 && Global_1894573[plParam0 /*608*/].f_10.f_428 == iParam1)
				return true;

	return false;
}

void func_91(Player plParam0, BOOL bParam1, eSetPlayerControlFlags espcfParam2, BOOL bParam3) // Position - 0x2E21 Hash - 0xCD788E2C ^0x50180146
{
	eSetPlayerControlFlags flags;
	BOOL flag;
	BOOL flag2;
	BOOL flag3;
	BOOL flag4;
	BOOL flag5;
	BOOL flag6;
	BOOL flag7;
	BOOL flag8;
	BOOL flag9;
	BOOL flag10;
	BOOL flag11;
	BOOL flag12;
	BOOL flag13;
	BOOL flag14;
	BOOL flag15;
	BOOL toggle;
	BOOL toggle2;
	BOOL flag16;
	BOOL flag17;
	BOOL flag18;
	BOOL flag19;
	BOOL flag20;
	BOOL flag21;
	BOOL flag22;
	BOOL flag23;
	BOOL flag24;
	Ped playerPed;
	eSetPlayerControlFlags flags2;

	if (bParam1)
		if (SCRIPT::GET_NO_LOADING_SCREEN())
			SCRIPT::SET_NO_LOADING_SCREEN(false);

	if (func_104())
		if (bParam1)
			return;
		else
			bParam3 = true;

	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		flags = espcfParam2;
		PLAYER::SET_PLAYER_CONTROL(plParam0, bParam1, flags);
	}
	else
	{
		flag = true;
		flag2 = espcfParam2 & SPC_AMBIENT_SCRIPT != 0;
		flag3 = espcfParam2 & SPC_CLEAR_TASKS != 0;
		flag4 = espcfParam2 & SPC_REMOVE_FIRES != 0;
		flag5 = espcfParam2 & SPC_REMOVE_EXPLOSIONS != 0;
		flag6 = espcfParam2 & SPC_REMOVE_PROJECTILES != 0;
		flag7 = espcfParam2 & SPC_DEACTIVATE_GADGETS != 0;
		flag8 = espcfParam2 & SPC_REENABLE_CONTROL_ON_DEATH != 0;
		flag9 = espcfParam2 & SPC_LEAVE_CAMERA_CONTROL_ON != 0;
		flag10 = espcfParam2 & SPC_ALLOW_PLAYER_DAMAGE != 0;
		flag11 = espcfParam2 & SPC_DONT_STOP_OTHER_CARS_AROUND_PLAYER != 0;
		flag12 = espcfParam2 & SPC_PREVENT_EVERYBODY_BACKOFF != 0;
		flag13 = espcfParam2 & SPC_ALLOW_PAD_SHAKE != 0;
		flag14 = espcfParam2 & 8192 != 0;
		flag15 = espcfParam2 & 16384 != 0;
		toggle = espcfParam2 & 32768 != 0;
		toggle2 = espcfParam2 & 65536 != 0;
		flag16 = espcfParam2 & 131072 != 0;
		flag17 = espcfParam2 & 262144 != 0;
		flag18 = espcfParam2 & 524288 != 0;
		flag19 = espcfParam2 & 1048576 != 0;
		flag20 = espcfParam2 & 2097152 != 0;
		flag21 = espcfParam2 & 4194304 != 0;
		flag22 = espcfParam2 & 8388608 != 0;
		flag23 = espcfParam2 & 16777216 != 0;
	
		if (espcfParam2 & 33554432 != 0 || NETWORK::NETWORK_IS_ACTIVITY_SESSION())
			flag = false;
	
		if (!func_102())
		{
			flag24 = false;
		
			if (bParam1 == true)
				flag24 = true;
		
			if (toggle == false && !flag19)
				flag24 = true;
		
			if (flag10 == true)
				flag24 = true;
		
			if (flag24)
				return;
		}
	
		flag16;
	
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(plParam0) && PLAYER::IS_PLAYER_PLAYING(plParam0) || bParam3 == true)
		{
			if (bParam3 && ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYER_PED(plParam0), false))
				return;
		
			playerPed = PLAYER::GET_PLAYER_PED(plParam0);
		
			if (!flag18)
			{
				if (flag17 && bParam1 == false && NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
					NETWORK::FADE_OUT_LOCAL_PLAYER(true);
				else if (flag14 || !func_100(PLAYER::PLAYER_ID(), 0) && !func_99())
					ENTITY::SET_ENTITY_VISIBLE(playerPed, !flag14, false);
			
				if (!flag14)
				{
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !flag17)
						NETWORK::FADE_OUT_LOCAL_PLAYER(false);
				
					Global_2657589[plParam0 /*466*/].f_254 = 0;
				}
			}
		
			if (bParam1)
			{
				if (flag)
				{
					func_96(false, 0, 0);
				
					if (flag23)
						STREAMING::CLEAR_FOCUS();
				}
			
				if (!func_95(playerPed) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(playerPed))
					if (!flag20)
						ENTITY::SET_ENTITY_COLLISION(playerPed, true, false);
			
				if (!ENTITY::IS_ENTITY_ATTACHED(playerPed))
				{
					if (!flag19)
						ENTITY::FREEZE_ENTITY_POSITION(playerPed, false);
				
					ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(playerPed, true);
				}
				else if (!flag19)
				{
					ENTITY::FREEZE_ENTITY_POSITION(playerPed, false);
				}
			
				PED::SET_PED_CAN_BE_TARGETTED(playerPed, true);
				PLAYER::SET_PLAYER_INVINCIBLE(plParam0, false);
				PLAYER::SET_PLAYER_INVINCIBLE_BUT_HAS_REACTIONS(plParam0, false);
			
				if (PED::HAS_PED_HEAD_BLEND_FINISHED(playerPed) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(playerPed))
					PED::FINALIZE_HEAD_BLEND(playerPed);
			
				PED::SET_PED_DIES_WHEN_INJURED(playerPed, true);
			
				if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) == false)
				{
					func_94();
					func_93();
				}
			
				if (PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
					!flag21;
			
				STREAMING::IS_NEW_LOAD_SCENE_ACTIVE();
				Global_2657589[plParam0 /*466*/].f_255 = 0;
			
				if (!flag22)
					flag3 = true;
			
				if (Global_2635559.f_2681)
					Global_2635559.f_2681 = 0;
			}
			else
			{
				if (!func_95(playerPed) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(playerPed))
				{
					if (!flag20)
						ENTITY::SET_ENTITY_COLLISION(playerPed, !flag15, false);
				
					if (!ENTITY::IS_ENTITY_ATTACHED(playerPed))
					{
						if (!flag19)
							ENTITY::FREEZE_ENTITY_POSITION(playerPed, toggle);
					
						if (!toggle)
							ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(playerPed, true);
					}
				
					if (func_92(*Global_4718592.f_166301))
						ENTITY::FREEZE_ENTITY_POSITION(playerPed, true);
				}
			
				if (Global_1575035)
					flag10 = false;
			
				if (flag10)
					PLAYER::SET_PLAYER_INVINCIBLE(plParam0, false);
				else
					PLAYER::SET_PLAYER_INVINCIBLE(plParam0, true);
			
				PED::SET_PED_CAN_BE_TARGETTED(playerPed, toggle2);
			
				if (flag3)
					if (!PED::IS_PED_FATALLY_INJURED(playerPed) && !PED::IS_PED_IN_ANY_VEHICLE(playerPed, false))
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(playerPed);
			}
		
			flags2 = 0;
		
			if (flag2)
				flags2 = flags2 | SPC_AMBIENT_SCRIPT;
		
			if (flag3)
				flags2 = flags2 | SPC_CLEAR_TASKS;
		
			if (flag4)
				flags2 = flags2 | SPC_REMOVE_FIRES;
		
			if (flag5)
				flags2 = flags2 | SPC_REMOVE_EXPLOSIONS;
		
			if (flag6)
				flags2 = flags2 | SPC_REMOVE_PROJECTILES;
		
			if (flag7)
				flags2 = flags2 | SPC_DEACTIVATE_GADGETS;
		
			if (flag8)
				flags2 = flags2 | SPC_REENABLE_CONTROL_ON_DEATH;
		
			if (flag9)
				flags2 = flags2 | SPC_LEAVE_CAMERA_CONTROL_ON;
		
			if (flag10)
				flags2 = flags2 | SPC_ALLOW_PLAYER_DAMAGE;
		
			if (flag11)
				flags2 = flags2 | SPC_DONT_STOP_OTHER_CARS_AROUND_PLAYER;
		
			if (flag12)
				flags2 = flags2 | SPC_PREVENT_EVERYBODY_BACKOFF;
		
			if (flag13)
				flags2 = flags2 | SPC_ALLOW_PAD_SHAKE;
		
			PLAYER::SET_PLAYER_CONTROL(plParam0, bParam1, flags2);
		}
	}

	return;
}

BOOL func_92(int iParam0) // Position - 0x32AF Hash - 0xFB453256 ^0xFB453256
{
	return iParam0 == 17;
}

void func_93() // Position - 0x32BC Hash - 0xBC63612E ^0xBC63612E
{
	var unk;

	Global_2672505.f_1023 = 0;
	Global_2672505.f_1024 = 0;
	Global_2672505.f_1025 = { 9999.9f, 9999.9f, 9999.9f };
	Global_2672505.f_1030 = -1;
	Global_2672505.f_1031 = 0;
	Global_2635559.f_2692 = { unk };
	return;
}

void func_94() // Position - 0x3309 Hash - 0x5FEB45C4 ^0x33557962
{
	Global_2635559.f_702 = 0;
	Global_2635559.f_2735 = 0;
	Global_2635559.f_515 = 0;
	Global_2635559.f_606 = 0;
	Global_2657589[PLAYER::PLAYER_ID() /*466*/].f_217 = 0;
	Global_2635559.f_2690 = 0;
	return;
}

BOOL func_95(Ped pedParam0) // Position - 0x3347 Hash - 0x93DB01D2 ^0x43DCC591
{
	int scriptTaskStatus;

	if (PED::IS_PED_IN_ANY_VEHICLE(pedParam0, true))
	{
		return true;
	}
	else
	{
		scriptTaskStatus = TASK::GET_SCRIPT_TASK_STATUS(pedParam0, SCRIPT_TASK_ENTER_VEHICLE);
	
		if (scriptTaskStatus == 0)
			return true;
	}

	return false;
}

void func_96(BOOL bParam0, Ped pedParam1, int iParam2) // Position - 0x3378 Hash - 0x19FE7AFC ^0x4538006F
{
	int num;
	eViewModeContext i;

	ENTITY::IS_ENTITY_DEAD(pedParam1, false);

	if (bParam0 == true)
		if (ENTITY::DOES_ENTITY_EXIST(pedParam1))
			if (PED::IS_PED_A_PLAYER(pedParam1))
				if (!NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(pedParam1)))
					num = 1;

	if (num == 0)
	{
		if (iParam2 == 1)
		{
			if (bParam0 == true)
			{
				func_98();
			}
			else if (!IS_BIT_SET(Global_2621446.f_67, 1))
			{
				if (IS_BIT_SET(Global_2621446.f_67, 2))
				{
					for (i = ON_FOOT; i < 8; i = i + 1)
					{
						CAM::SET_CAM_VIEW_MODE_FOR_CONTEXT(i, Global_2621446.f_58[i]);
					}
				}
			
				MISC::SET_BIT(&(Global_2621446.f_67), 1);
			}
		}
	
		if (func_100(PLAYER::PLAYER_ID(), 0))
			NETWORK::NETWORK_SET_IN_SPECTATOR_MODE_EXTENDED(bParam0, pedParam1, true);
		else
			NETWORK::NETWORK_SET_IN_SPECTATOR_MODE(bParam0, pedParam1);
	
		HUD::SET_MINIMAP_IN_SPECTATOR_MODE(bParam0, pedParam1);
		func_97(-2008016205, bParam0);
	}

	return;
}

void func_97(Hash hParam0, BOOL bParam1) // Position - 0x3448 Hash - 0x269D56BD ^0xB104E3E4
{
	Hash statName;

	statName = hParam0;

	if (statName != 0)
		STATS::STAT_SET_BOOL(statName, bParam1, true);

	return;
}

void func_98() // Position - 0x3464 Hash - 0xEFF6029E ^0x224AB476
{
	eViewModeContext i;

	if (!NETWORK::NETWORK_IS_IN_SPECTATOR_MODE())
	{
		if (!IS_BIT_SET(Global_2621446.f_67, 2))
		{
			for (i = ON_FOOT; i < 8; i = i + 1)
			{
				Global_2621446.f_58[i] = CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(i);
			}
		
			MISC::SET_BIT(&(Global_2621446.f_67), 2);
			MISC::SET_BIT(&(Global_2621446.f_67), 0);
		}
	}

	return;
}

BOOL func_99() // Position - 0x34BC Hash - 0xA525B2F4 ^0xA525B2F4
{
	return IS_BIT_SET(Global_2621446, 3);
}

BOOL func_100(Player plParam0, int iParam1) // Position - 0x34CA Hash - 0x5A3B86CC ^0x2CFA58CE
{
	BOOL flag;

	if (plParam0 == PLAYER::PLAYER_ID())
		flag = func_101(-1, false) == 8;
	else
		flag = Global_1853910[plParam0 /*862*/].f_205 == 8;

	if (iParam1 == 1)
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(plParam0))
			flag = PLAYER::GET_PLAYER_TEAM(plParam0) == 8;

	return flag;
}

int func_101(int iParam0, BOOL bParam1) // Position - 0x3515 Hash - 0x1DCD393E ^0x1DCD393E
{
	int num;
	int num2;

	num2 = iParam0;

	if (num2 == -1)
		num2 = func_79();

	if (Global_1575040[num2] == 1)
	{
		bParam1;
		num = 8;
	}
	else
	{
		num = Global_1574912[num2];
		bParam1;
	}

	return num;
}

BOOL func_102() // Position - 0x3556 Hash - 0xDBD936D3 ^0xDBD936D3
{
	if (func_103() == 0)
		return true;

	return false;
}

int func_103() // Position - 0x356B Hash - 0x4228A1C2 ^0x58D4D226
{
	return Global_1574632.f_18;
}

BOOL func_104() // Position - 0x3579 Hash - 0xEBB0E6F7 ^0x19BAFBE9
{
	if (IS_BIT_SET(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_861, 2) && !Global_2684799.f_2846.f_216 == -1)
		return true;

	return false;
}

void func_105(var uParam0, BOOL bParam1, BOOL bParam2) // Position - 0x35AA Hash - 0x6F79B86B ^0x7B76DD66
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

void func_106() // Position - 0x35EF Hash - 0x3B5D487F ^0x2251016B
{
	int randomIntInRange;

	if (bLocal_50)
		return;

	uLocal_43.f_4 = 0;

	if (!func_107(Global_44232[iLocal_64 /*5*/].f_2))
		return;

	randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(500, 3000);
	iLocal_60 = 5;
	iLocal_55.f_2 = SYSTEM::TIMERA() + randomIntInRange;
	return;
}

BOOL func_107(int iParam0) // Position - 0x3632 Hash - 0xDFB0202 ^0x23674D6E
{
	int num;
	char* clipSet;
	char* animDict;
	char* animationName;
	char* animDict2;

	num = func_118();

	if (num == -2)
		return false;

	if (PED::IS_PED_INJURED(uLocal_43.f_1))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(uLocal_43.f_1, false) || PED::IS_PED_GETTING_INTO_A_VEHICLE(uLocal_43.f_1))
			return false;
	
		if (ENTITY::IS_ENTITY_WAITING_FOR_WORLD_COLLISION(uLocal_43.f_1))
			return false;
	
		if (func_114(uLocal_43.f_1))
			return false;
	}

	if (Global_44232[iLocal_64 /*5*/].f_3 < 3 && Global_44232[iLocal_64 /*5*/].f_3 != 0 && Global_44232[iLocal_64 /*5*/].f_3 > Global_44232[iLocal_64 /*5*/].f_4)
		return false;

	if (Global_44232[iLocal_64 /*5*/].f_4 < 9 && Global_44232[iLocal_64 /*5*/].f_4 != 0 && Global_44232[iLocal_64 /*5*/].f_4 > Global_44232[iLocal_64 /*5*/].f_3)
		return false;

	clipSet = func_113(iParam0);

	if (MISC::IS_STRING_NULL_OR_EMPTY(clipSet))
		return false;

	if (func_114(uLocal_43.f_1))
		return false;

	STREAMING::REQUEST_CLIP_SET(clipSet);

	if (func_110(uLocal_43.f_1))
	{
		animDict = "MOVE_M@DRUNK@TRANSITIONS";
		animationName = "";
	
		switch (iParam0)
		{
			case 0:
				animationName = "";
				break;
		
			case 2:
				animationName = "VERY_TO_MODERATE";
				break;
		
			case 1:
				animationName = "MODERATE_TO_SLIGHTLY";
				break;
		
			default:
				break;
		}
	
		if (!MISC::IS_STRING_NULL_OR_EMPTY(animDict) && !MISC::IS_STRING_NULL_OR_EMPTY(animationName))
		{
			STREAMING::REQUEST_ANIM_DICT(animDict);
		
			while (!STREAMING::HAS_ANIM_DICT_LOADED(animDict))
			{
				SYSTEM::WAIT(0);
			}
		
			if (!PED::IS_PED_INJURED(uLocal_43.f_1))
			{
				TASK::TASK_PLAY_ANIM(uLocal_43.f_1, animDict, animationName, 1.5f, -1.5f, -1, 48, 0, false, false, false);
				sLocal_54 = animationName;
			}
		}
	}

	if (!STREAMING::HAS_CLIP_SET_LOADED(clipSet))
		return false;

	if (PED::IS_PED_INJURED(uLocal_43.f_1))
		return false;

	PED::SET_PED_MOVEMENT_CLIPSET(uLocal_43.f_1, clipSet, 0.75f);

	if (CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() == FIRST_PERSON)
		unk_0xAC814BCCEC68B1CE(uLocal_43.f_1, "move_ped_strafing_firstperson@drunk");

	PED::SET_PED_ALTERNATE_MOVEMENT_ANIM(uLocal_43.f_1, 0, clipSet, "idle", 2f, true);
	iLocal_60.f_2 = clipSet;
	bLocal_51 = true;
	animDict2 = 0;

	switch (func_70(uLocal_43.f_1))
	{
		case 0:
			animDict2 = "FACIALS@P_M_ZERO@BASE";
			break;
	
		case 1:
			animDict2 = "FACIALS@P_M_ONE@BASE";
			break;
	
		case 2:
			animDict2 = "FACIALS@P_M_TWO@BASE";
			break;
	
		default:
			if (PED::IS_PED_A_PLAYER(uLocal_43.f_1))
				if (!func_108())
					animDict2 = "FACIALS@GEN_MALE@BASE";
				else
					animDict2 = "FACIALS@GEN_FEMALE@BASE";
			else if (PED::IS_PED_MALE(uLocal_43.f_1))
				animDict2 = "FACIALS@GEN_MALE@BASE";
			else
				animDict2 = "FACIALS@GEN_FEMALE@BASE";
			break;
	}

	PED::SET_FACIAL_IDLE_ANIM_OVERRIDE(uLocal_43.f_1, "mood_drunk_1", animDict2);
	PED::SET_PED_RESET_FLAG(uLocal_43.f_1, 200, true);
	PED::SET_PED_RESET_FLAG(uLocal_43.f_1, 46, true);
	PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(uLocal_43.f_1, false);
	PED::SET_PED_FLEE_ATTRIBUTES(uLocal_43.f_1, 262144, true);
	AUDIO::SET_PED_IS_DRUNK(uLocal_43.f_1, true);
	return true;
}

BOOL func_108() // Position - 0x38F4 Hash - 0x5976C0FC ^0xC3C6644E
{
	return func_109(PLAYER::PLAYER_ID());
}

BOOL func_109(Player plParam0) // Position - 0x3904 Hash - 0x2281DC14 ^0xFBEE7D11
{
	if (ENTITY::GET_ENTITY_MODEL(PLAYER::GET_PLAYER_PED(plParam0)) == -1667301416)
		return 1;

	return 0;
}

BOOL func_110(Ped pedParam0) // Position - 0x3923 Hash - 0xF88EA852 ^0xB9B7BD0D
{
	Vector3 entityVelocity;

	if (PED::IS_PED_IN_ANY_VEHICLE(pedParam0, true) || PED::IS_PED_GETTING_INTO_A_VEHICLE(pedParam0))
		return false;

	if (TASK::GET_SCRIPT_TASK_STATUS(pedParam0, SCRIPT_TASK_PLAY_ANIM) != 7)
		return false;

	if (TASK::GET_SCRIPT_TASK_STATUS(pedParam0, SCRIPT_TASK_SYNCHRONIZED_SCENE) != 7)
		return false;

	if (PED::IS_PED_SHOOTING(pedParam0))
		return false;

	if (ENTITY::IS_ENTITY_IN_AIR(pedParam0))
		return false;

	if (PED::IS_PED_RAGDOLL(pedParam0))
		return false;

	if (PED::IS_PED_CLIMBING(pedParam0))
		return false;

	if (Global_75693)
		return false;

	if (func_112())
		return false;

	if (pedParam0 == PLAYER::PLAYER_PED_ID())
	{
		if (!PLAYER::IS_PLAYER_FREE_FOR_AMBIENT_TASK(PLAYER::PLAYER_ID()))
			return false;
	
		if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
			return false;
	
		if (PLAYER::IS_PLAYER_FREE_AIMING(PLAYER::PLAYER_ID()) || PLAYER::IS_PLAYER_TARGETTING_ANYTHING(PLAYER::PLAYER_ID()))
			return false;
	
		if (func_111())
			return false;
	}

	entityVelocity = { ENTITY::GET_ENTITY_VELOCITY(pedParam0) };

	if (SYSTEM::VMAG2(entityVelocity) >= 1f * 1f)
		return false;

	return true;
}

BOOL func_111() // Position - 0x3A24 Hash - 0xD56328D2 ^0xD56328D2
{
	return Global_100733.f_388 > 0;
}

BOOL func_112() // Position - 0x3A35 Hash - 0x44A439DC ^0x3D5209CD
{
	return MISC::GET_GAME_TIMER() <= Global_23270.f_6321 + 100;
}

char* func_113(int iParam0) // Position - 0x3A4A Hash - 0x9AD6010A ^0x187C492B
{
	switch (iParam0)
	{
		case 0:
			return "move_m@drunk@verydrunk";
	
		case 1:
			return "move_m@drunk@slightlydrunk";
	
		case 2:
			return "move_m@drunk@moderatedrunk";
	}

	return "";
}

BOOL func_114(Entity eParam0) // Position - 0x3A8B Hash - 0x748648E9 ^0x343F58CC
{
	int num;
	char* string2;

	num = func_115(eParam0);
	string2 = func_113(num);

	if (MISC::IS_STRING_NULL_OR_EMPTY(iLocal_60.f_2))
		if (MISC::IS_STRING_NULL_OR_EMPTY(string2))
			return true;
		else
			return false;

	return MISC::ARE_STRINGS_EQUAL(iLocal_60.f_2, string2);
}

int func_115(Entity eParam0) // Position - 0x3ACC Hash - 0xF2A18B2F ^0x86CAAF14
{
	int num;
	int num2;

	if (eParam0 == 0)
		return -1;

	if (!ENTITY::DOES_ENTITY_EXIST(eParam0))
		return -1;

	num = func_117(eParam0);
	num2 = func_116(num);

	if (num2 == -1)
		return -1;

	return Global_44232[num2 /*5*/].f_2;
}

int func_116(int iParam0) // Position - 0x3B0F Hash - 0x671ED513 ^0x671ED513
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

int func_117(Entity eParam0) // Position - 0x3B3F Hash - 0x219FA119 ^0x5240A8AF
{
	int i;

	if (eParam0 == 0)
		return -1;

	i = 0;

	for (i = 0; i < 16; i = i + 1)
	{
		if (eParam0 == Global_44232[i /*5*/].f_1)
			return Global_44232[i /*5*/];
	}

	return -1;
}

int func_118() // Position - 0x3B80 Hash - 0x15CB13AD ^0x2B30617D
{
	int num;

	if (iLocal_55 == -2)
		return -2;

	if (iLocal_55 == -1)
		return -1;

	num = iLocal_55 - SYSTEM::TIMERA();

	if (num < 0)
		return -2;

	if (num > 65534)
		num = 65534;

	return num;
}

void func_119() // Position - 0x3BC6 Hash - 0x1A843D5E ^0x8418E552
{
	if (bLocal_50)
		return;

	if (!func_120())
	{
		iLocal_60 = 5;
		iLocal_55.f_2 = SYSTEM::TIMERA() + 5000;
		return;
	}

	iLocal_60 = 6;
	return;
}

BOOL func_120() // Position - 0x3BF2 Hash - 0x934B8806 ^0x38C5B0B9
{
	Vector3 entityCoords;
	Vector3 unk;
	float unk2;

	if (uLocal_43.f_4 == 0)
		return false;

	if (ENTITY::IS_ENTITY_DEAD(uLocal_43.f_4, false))
		return false;

	entityCoords = { ENTITY::GET_ENTITY_COORDS(uLocal_43.f_1, true) };
	entityCoords2 = { ENTITY::GET_ENTITY_COORDS(uLocal_43.f_4, true) };
	distanceBetweenCoords = MISC::GET_DISTANCE_BETWEEN_COORDS(entityCoords, entityCoords2, true);
	return distanceBetweenCoords < 7f;
}

void func_121() // Position - 0x3C43 Hash - 0xC0A765C6 ^0xFCE7C8D1
{
	int num;
	char* animDict;

	if (uLocal_43.f_1 == PLAYER::PLAYER_PED_ID())
	{
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_DUCK, true);
	
		if (PED::GET_PED_STEALTH_MOVEMENT(uLocal_43.f_1))
			if (Global_44232[iLocal_64 /*5*/].f_2 == 0 || Global_44232[iLocal_64 /*5*/].f_2 == 2)
				PED::SET_PED_STEALTH_MOVEMENT(uLocal_43.f_1, false, 0);
	
		if (PED::IS_PED_DUCKING(uLocal_43.f_1))
			PED::SET_PED_DUCKING(uLocal_43.f_1, false);
	}

	if (iLocal_55 != -2)
	{
		if (iLocal_55 == -1)
		{
			if (Global_44232[iLocal_64 /*5*/].f_2 != 0)
				Global_44232[iLocal_64 /*5*/].f_2 = 0;
		}
		else
		{
			num = iLocal_55 - SYSTEM::TIMERA();
		
			if (num <= 0)
				num = 0;
		
			num = (num / 1000) + 1;
		
			if (Global_44232[iLocal_64 /*5*/].f_2 == 0)
			{
				if (num < 30)
				{
					Global_44232[iLocal_64 /*5*/].f_2 = 2;
				
					if (!func_107(2))
					{
						Global_44232[iLocal_64 /*5*/].f_2 = 0;
						return;
					}
				}
			}
		
			if (Global_44232[iLocal_64 /*5*/].f_2 == 2)
			{
				if (num < 10)
				{
					Global_44232[iLocal_64 /*5*/].f_2 = 1;
				
					if (!func_107(2))
					{
						Global_44232[iLocal_64 /*5*/].f_2 = 2;
						return;
					}
				}
			}
		
			Global_44232[iLocal_64 /*5*/].f_2 == 1;
		}
	}
	else
	{
		return;
	}

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_54))
	{
		if (!func_110(uLocal_43.f_1))
		{
			animDict = "MOVE_M@DRUNK@TRANSITIONS";
		
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_43.f_1, animDict, sLocal_54, 3))
				TASK::STOP_ANIM_TASK(uLocal_43.f_1, animDict, sLocal_54, -4f);
		
			sLocal_54 = "";
			return;
		}
	}

	if (Global_44232[iLocal_64 /*5*/].f_3 >= 10 || Global_44232[iLocal_64 /*5*/].f_4 >= 15 || IS_BIT_SET(Global_44449, 9))
	{
		if (TASK::GET_SCRIPT_TASK_STATUS(uLocal_43.f_1, SCRIPT_TASK_SYNCHRONIZED_SCENE) == 1 && !IS_BIT_SET(Global_1950108.f_3, 27))
			return;
	
		if (AUDIO::IS_ANY_SPEECH_PLAYING(uLocal_43.f_1))
			return;
	
		if (PED::IS_PED_IN_ANY_VEHICLE(uLocal_43.f_1, true))
		{
			if (Global_44232[iLocal_64 /*5*/].f_3 >= 10)
				Global_44232[iLocal_64 /*5*/].f_3 = 9;
		
			if (Global_44232[iLocal_64 /*5*/].f_4 >= 15)
				Global_44232[iLocal_64 /*5*/].f_4 = 14;
		
			return;
		}
	
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && uLocal_43.f_1 == PLAYER::PLAYER_PED_ID() && func_136(PLAYER::PLAYER_ID()) && Global_262145.f_24351)
		{
			if (Global_44232[iLocal_64 /*5*/].f_3 >= 10)
				Global_44232[iLocal_64 /*5*/].f_3 = 9;
		
			if (Global_44232[iLocal_64 /*5*/].f_4 >= 15)
				Global_44232[iLocal_64 /*5*/].f_4 = 14;
		
			return;
		}
	
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && uLocal_43.f_1 == PLAYER::PLAYER_PED_ID() && func_135())
		{
			if (Global_44232[iLocal_64 /*5*/].f_3 >= 10)
				Global_44232[iLocal_64 /*5*/].f_3 = 9;
		
			if (Global_44232[iLocal_64 /*5*/].f_4 >= 15)
				Global_44232[iLocal_64 /*5*/].f_4 = 14;
		
			return;
		}
	
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_IS_ACTIVITY_SESSION() && func_134())
		{
			if (Global_44232[iLocal_64 /*5*/].f_3 >= 10)
				Global_44232[iLocal_64 /*5*/].f_3 = 9;
		
			if (Global_44232[iLocal_64 /*5*/].f_4 >= 15)
				Global_44232[iLocal_64 /*5*/].f_4 = 14;
		
			return;
		}
	
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_IS_ACTIVITY_SESSION() && func_133())
		{
			if (Global_44232[iLocal_64 /*5*/].f_3 >= 10)
				Global_44232[iLocal_64 /*5*/].f_3 = 9;
		
			if (Global_44232[iLocal_64 /*5*/].f_4 >= 15)
				Global_44232[iLocal_64 /*5*/].f_4 = 14;
		
			return;
		}
	
		if (func_130(PLAYER::PLAYER_ID()))
		{
			if (Global_44232[iLocal_64 /*5*/].f_3 >= 10)
				Global_44232[iLocal_64 /*5*/].f_3 = 9;
		
			if (Global_44232[iLocal_64 /*5*/].f_4 >= 15)
				Global_44232[iLocal_64 /*5*/].f_4 = 14;
		
			return;
		}
	
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && uLocal_43.f_1 == PLAYER::PLAYER_PED_ID() && func_129(PLAYER::PLAYER_ID()) && Global_262145.f_27034)
		{
			if (Global_44232[iLocal_64 /*5*/].f_3 >= 10)
				Global_44232[iLocal_64 /*5*/].f_3 = 9;
		
			if (Global_44232[iLocal_64 /*5*/].f_4 >= 15)
				Global_44232[iLocal_64 /*5*/].f_4 = 14;
		
			return;
		}
	
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && uLocal_43.f_1 == PLAYER::PLAYER_PED_ID() && func_126(PLAYER::PLAYER_ID()) && Global_262145.f_27067)
		{
			if (Global_44232[iLocal_64 /*5*/].f_3 >= 10)
				Global_44232[iLocal_64 /*5*/].f_3 = 9;
		
			if (Global_44232[iLocal_64 /*5*/].f_4 >= 15)
				Global_44232[iLocal_64 /*5*/].f_4 = 14;
		
			return;
		}
	
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && uLocal_43.f_1 == PLAYER::PLAYER_PED_ID() && func_122(PLAYER::PLAYER_ID()) == 15)
		{
			if (Global_44232[iLocal_64 /*5*/].f_3 >= 10)
				Global_44232[iLocal_64 /*5*/].f_3 = 9;
		
			if (Global_44232[iLocal_64 /*5*/].f_4 >= 15)
				Global_44232[iLocal_64 /*5*/].f_4 = 14;
		
			return;
		}
	
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && uLocal_43.f_1 == PLAYER::PLAYER_PED_ID() && Global_75693 && !Global_44205)
		{
			if (Global_44232[iLocal_64 /*5*/].f_3 >= 10)
				Global_44232[iLocal_64 /*5*/].f_3 = 9;
		
			if (Global_44232[iLocal_64 /*5*/].f_4 >= 15)
				Global_44232[iLocal_64 /*5*/].f_4 = 14;
		
			return;
		}
	
		iLocal_60.f_1 = 3;
		return;
	}

	if (!bLocal_51)
		return;

	if (!func_114(uLocal_43.f_1))
		return;

	return;
}

int func_122(Player plParam0) // Position - 0x417C Hash - 0xF6352B1A ^0xF6352B1A
{
	if (func_125(plParam0) == 243)
		return func_123(plParam0);

	return -1;
}

int func_123(Player plParam0) // Position - 0x4199 Hash - 0x48014DA ^0xC49B9410
{
	if (func_124(plParam0, false))
		return Global_1894573[plParam0 /*608*/].f_10.f_182;

	return -1;
}

BOOL func_124(Player plParam0, BOOL bParam1) // Position - 0x41BC Hash - 0x8B0CDA01 ^0x4664171D
{
	if (Global_1894573[plParam0 /*608*/].f_10.f_33 != -1 || bParam1 && Global_1894573[plParam0 /*608*/].f_10.f_32 != -1)
		return true;

	return false;
}

int func_125(Player plParam0) // Position - 0x41F7 Hash - 0x48014DA ^0x68F6350
{
	if (func_124(plParam0, false))
		return Global_1894573[plParam0 /*608*/].f_10.f_33;

	return -1;
}

BOOL func_126(Player plParam0) // Position - 0x421A Hash - 0xDB07D527 ^0x9815AB86
{
	if (plParam0 != func_28())
		if (func_128(plParam0, true, true))
			if (Global_2657589[plParam0 /*466*/].f_321.f_7 != -1)
				return func_127(Global_2657589[plParam0 /*466*/].f_321.f_7) == 15;

	return false;
}

int func_127(int iParam0) // Position - 0x4261 Hash - 0xEE599357 ^0xEE599357
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

BOOL func_128(Player plParam0, BOOL bParam1, BOOL bParam2) // Position - 0x4715 Hash - 0x3FF6E4CA ^0xE6B59972
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

BOOL func_129(Player plParam0) // Position - 0x4775 Hash - 0xB5AF000F ^0x9424D0A9
{
	if (plParam0 != func_28())
		if (func_128(plParam0, true, true))
			if (Global_2657589[plParam0 /*466*/].f_321.f_7 != -1)
				return func_127(Global_2657589[plParam0 /*466*/].f_321.f_7) == 14;

	return false;
}

BOOL func_130(Player plParam0) // Position - 0x47BC Hash - 0x616E2FF8 ^0x616E2FF8
{
	return func_131(func_132(plParam0));
}

BOOL func_131(int iParam0) // Position - 0x47CE Hash - 0x5000025C ^0x5000025C
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			return 1;
	
		default:
		
	}

	return 0;
}

int func_132(Player plParam0) // Position - 0x4800 Hash - 0xAB4D17EF ^0xAA4132F3
{
	if (func_125(plParam0) == 256)
		return func_123(plParam0);

	return -1;
}

BOOL func_133() // Position - 0x481E Hash - 0x4228A1C2 ^0x936D20CA
{
	return Global_2683862.f_24;
}

BOOL func_134() // Position - 0x482C Hash - 0x4228A1C2 ^0xE93D75E0
{
	return Global_2683862.f_21;
}

BOOL func_135() // Position - 0x483A Hash - 0x47FF56D2 ^0x47FF56D2
{
	return Global_2764615;
}

BOOL func_136(Player plParam0) // Position - 0x4846 Hash - 0xB2831D42 ^0x9EF71D87
{
	if (plParam0 != func_28())
		if (func_128(plParam0, true, true))
			if (Global_2657589[plParam0 /*466*/].f_321.f_7 != -1)
				return func_127(Global_2657589[plParam0 /*466*/].f_321.f_7) == 11;

	return false;
}

BOOL func_137() // Position - 0x488D Hash - 0x69369EFE ^0x35DC4E87
{
	Vehicle vehiclePedIsIn;

	if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(uLocal_43.f_1))
		return false;

	vehiclePedIsIn = 0;
	vehiclePedIsIn = PED::GET_VEHICLE_PED_IS_IN(uLocal_43.f_1, false);

	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(vehiclePedIsIn, false))
		return false;

	if (!VEHICLE::GET_PED_IN_VEHICLE_SEAT(vehiclePedIsIn, -1, false) == uLocal_43.f_1)
		return false;

	uLocal_43.f_4 = vehiclePedIsIn;
	iLocal_60 = 7;
	return true;
}

void func_138() // Position - 0x48E1 Hash - 0x389BEFC8 ^0x8C27CBB9
{
	if (!PED::IS_PED_IN_ANY_VEHICLE(uLocal_43.f_1, false))
	{
		iLocal_60 = 4;
		return;
	}

	return;
}

void func_139() // Position - 0x48FC Hash - 0x1DDB1E2B ^0x1D081198
{
	Vehicle vehiclePedIsIn;
	float entitySpeed;
	var entityCoords;
	Vector3 unk;
	Vector3 unk2;

	if (!bLocal_50)
		return;

	if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		return;

	if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
		return;

	if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
		return;

	vehiclePedIsIn = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
	entitySpeed = ENTITY::GET_ENTITY_SPEED(vehiclePedIsIn);

	if (entitySpeed < 5f)
		return;

	entityCoords = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
	vector = { entityCoords - { 3f, 30f, 30f } };
	vector2 = { entityCoords + { 3f, 30f, 30f } };

	if (!VEHICLE::IS_COP_VEHICLE_IN_AREA_3D(vector, vector2) && !PED::IS_COP_PED_IN_AREA_3D(vector, vector2))
		return;

	PLAYER::SET_PLAYER_WANTED_LEVEL_NO_DROP(PLAYER::PLAYER_ID(), 1, false);
	PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
	func_11(73, 1);
	return;
}

void func_140() // Position - 0x49CB Hash - 0xFA0DDD86 ^0xD4DB2BD
{
	Vehicle vehicle;
	Vehicle vehiclePedIsIn;
	Ped pedInVehicleSeat;
	float entitySpeed;
	int num;

	vehicle = uLocal_43.f_1;

	if (PED::IS_PED_IN_ANY_VEHICLE(uLocal_43.f_1, false))
	{
		vehiclePedIsIn = PED::GET_VEHICLE_PED_IS_IN(uLocal_43.f_1, false);
		pedInVehicleSeat = VEHICLE::GET_PED_IN_VEHICLE_SEAT(vehiclePedIsIn, -1, false);
	
		if (!pedInVehicleSeat == uLocal_43.f_1)
			return;
	
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(vehiclePedIsIn))
			return;
	
		vehicle = vehiclePedIsIn;
	}
	else if (!PLAYER::PLAYER_PED_ID() == uLocal_43.f_1)
	{
		return;
	}
	else if (!CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() == FIRST_PERSON)
	{
		fLocal_53 = 0f;
		func_142(vehicle, 0f);
		return;
	}

	if (SYSTEM::TIMERA() < iLocal_55.f_4)
	{
		func_142(vehicle, fLocal_53);
		return;
	}

	if (ENTITY::IS_ENTITY_A_PED(vehicle))
		iLocal_55.f_4 = SYSTEM::TIMERA() + 2000;
	else
		iLocal_55.f_4 = SYSTEM::TIMERA() + 1000;

	entitySpeed = ENTITY::GET_ENTITY_SPEED(vehicle);

	if (entitySpeed < 0.04f)
	{
		fLocal_53 = 0f;
		func_142(vehicle, 0f);
		return;
	}

	if (iLocal_55.f_1 == -1)
	{
		fLocal_53 = func_141(vehicle, 0.13f, 0.06f);
	}
	else
	{
		num = iLocal_55.f_1 - SYSTEM::TIMERA();
	
		if (num < 5000)
			fLocal_53 = 0f;
		else if (num < 15000)
			fLocal_53 = func_141(vehicle, 0.05f, 0.02f);
		else if (num < 30000)
			fLocal_53 = func_141(vehicle, 0.07f, 0.03f);
		else if (num < 45000)
			fLocal_53 = func_141(vehicle, 0.09f, 0.04f);
		else if (num < 600000)
			fLocal_53 = func_141(vehicle, 0.1f, 0.05f);
		else
			fLocal_53 = func_141(vehicle, 0.13f, 0.06f);
	}

	func_142(vehicle, fLocal_53);
	return;
}

float func_141(Vehicle veParam0, float fParam1, float fParam2) // Position - 0x4B6D Hash - 0xFBD10A6F ^0x3E518520
{
	float randomFloatInRange;
	float randomFloatInRange2;
	Hash entityModel;

	randomFloatInRange = MISC::GET_RANDOM_FLOAT_IN_RANGE(-fParam1, fParam1);
	randomFloatInRange2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, fParam2);

	if (randomFloatInRange < 0f)
		randomFloatInRange = randomFloatInRange - randomFloatInRange2;
	else
		randomFloatInRange = randomFloatInRange + randomFloatInRange2;

	if (ENTITY::IS_ENTITY_A_PED(veParam0))
	{
		if (TASK::IS_PED_SPRINTING(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(veParam0)))
			randomFloatInRange = randomFloatInRange * 4.5f;
		else
			randomFloatInRange = randomFloatInRange * 3f;
	}
	else
	{
		entityModel = ENTITY::GET_ENTITY_MODEL(veParam0);
	
		if (VEHICLE::IS_THIS_MODEL_A_BIKE(entityModel))
			randomFloatInRange = randomFloatInRange * 1.5f;
		else
			randomFloatInRange = randomFloatInRange * 0.5f;
	}

	randomFloatInRange = func_21(randomFloatInRange, -1f, 1f);
	return randomFloatInRange;
}

void func_142(Vehicle veParam0, float fParam1) // Position - 0x4C01 Hash - 0xB52D18F0 ^0xCC2F56A7
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(veParam0))
		return;

	if (ENTITY::IS_ENTITY_A_PED(veParam0))
		PED::SET_PED_STEER_BIAS(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(veParam0), fParam1);
	else if (ENTITY::IS_ENTITY_A_VEHICLE(veParam0))
		VEHICLE::SET_VEHICLE_STEER_BIAS(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(veParam0), fParam1);

	return;
}

void func_143() // Position - 0x4C4C Hash - 0x1388AC49 ^0xA913E718
{
	Vehicle vehiclePedIsIn;

	if (!PED::IS_PED_IN_ANY_VEHICLE(uLocal_43.f_1, false))
	{
		iLocal_60 = 4;
		return;
	}

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (Global_44232[iLocal_64 /*5*/].f_3 >= 10 || Global_44232[iLocal_64 /*5*/].f_4 >= 15)
		{
			if (Global_44232[iLocal_64 /*5*/].f_3 >= 10)
				Global_44232[iLocal_64 /*5*/].f_3 = 9;
		
			if (Global_44232[iLocal_64 /*5*/].f_4 >= 15)
				Global_44232[iLocal_64 /*5*/].f_4 = 14;
		}
	}

	if (bLocal_50)
		return;

	vehiclePedIsIn = PED::GET_VEHICLE_PED_IS_IN(uLocal_43.f_1, false);

	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(vehiclePedIsIn, false))
	{
		TASK::TASK_LEAVE_ANY_VEHICLE(uLocal_43.f_1, 0, 0);
		iLocal_60 = 11;
		return;
	}

	return;
}

void func_144() // Position - 0x4CF0 Hash - 0xEFBAAD33 ^0xCB8F607C
{
	int scriptTaskStatus;
	Vehicle vehiclePedIsIn;
	Ped pedInVehicleSeat;

	if (SYSTEM::TIMERA() <= iLocal_55.f_3)
		return;

	scriptTaskStatus = TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), SCRIPT_TASK_SHUFFLE_TO_NEXT_VEHICLE_SEAT);

	if (!scriptTaskStatus == 7)
	{
		iLocal_55.f_3 = SYSTEM::TIMERA() + 1000;
		return;
	}

	if (!PED::IS_PED_IN_ANY_VEHICLE(uLocal_43.f_1, false))
	{
		iLocal_60 = 4;
		iLocal_55.f_3 = -2;
		return;
	}

	vehiclePedIsIn = PED::GET_VEHICLE_PED_IS_IN(uLocal_43.f_1, false);
	pedInVehicleSeat = VEHICLE::GET_PED_IN_VEHICLE_SEAT(vehiclePedIsIn, -1, false);

	if (pedInVehicleSeat == uLocal_43.f_1)
	{
		func_145();
		iLocal_55.f_3 = -2;
		return;
	}

	TASK::TASK_SHUFFLE_TO_NEXT_VEHICLE_SEAT(uLocal_43.f_1, vehiclePedIsIn, false);
	iLocal_60 = 9;
	iLocal_55.f_3 = SYSTEM::TIMERA() + 1000;
	return;
}

void func_145() // Position - 0x4D8B Hash - 0xDC90216E ^0xC8FE257
{
	if (iLocal_60 == 10)
		return;

	iLocal_60 = 10;

	if (iLocal_48 == -1)
		return;

	func_171(iLocal_48, 2, 5);
	iLocal_55.f_4 = SYSTEM::TIMERA();
	fLocal_53 = 0f;
	return;
}

void func_146() // Position - 0x4DBD Hash - 0x2EFC07F5 ^0xB310D5DF
{
	if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(uLocal_43.f_1))
	{
		iLocal_60 = 10;
		return;
	}

	if (SYSTEM::TIMERA() < iLocal_55.f_3)
		return;

	iLocal_60 = 4;
	iLocal_55.f_3 = -2;
	return;
}

void func_147() // Position - 0x4DEF Hash - 0xAB6E7F98 ^0xBCC3B454
{
	Vehicle vehiclePedIsIn;
	BOOL flag;
	Ped pedInVehicleSeat;
	int scriptTaskStatus;

	!bLocal_50;
	vehiclePedIsIn = 0;
	flag = false;

	if (flag || PED::IS_PED_SITTING_IN_ANY_VEHICLE(uLocal_43.f_1))
	{
		!bLocal_50;
		vehiclePedIsIn = PED::GET_VEHICLE_PED_IS_IN(uLocal_43.f_1, false);
	
		if (!vehiclePedIsIn == uLocal_43.f_4)
		{
			!bLocal_50;
		
			if (!bLocal_50)
			{
				!bLocal_50;
				TASK::TASK_LEAVE_ANY_VEHICLE(uLocal_43.f_1, 0, 0);
				iLocal_60 = 11;
				return;
			}
		
			uLocal_43.f_4 = vehiclePedIsIn;
		}
	
		if (flag)
		{
			!bLocal_50;
			func_145();
			return;
		}
	
		if (!bLocal_50)
		{
			!bLocal_50;
			func_145();
			return;
		}
	
		!bLocal_50;
		pedInVehicleSeat = VEHICLE::GET_PED_IN_VEHICLE_SEAT(uLocal_43.f_4, -1, false);
	
		if (pedInVehicleSeat == uLocal_43.f_1)
		{
			func_145();
			return;
		}
	
		TASK::TASK_SHUFFLE_TO_NEXT_VEHICLE_SEAT(uLocal_43.f_1, vehiclePedIsIn, false);
		iLocal_60 = 9;
		iLocal_55.f_3 = SYSTEM::TIMERA() + 1000;
		return;
	}

	if (!func_120())
	{
		TASK::CLEAR_PED_TASKS(uLocal_43.f_1);
		iLocal_60 = 4;
		return;
	}

	if (!bLocal_50)
	{
		scriptTaskStatus = TASK::GET_SCRIPT_TASK_STATUS(uLocal_43.f_1, SCRIPT_TASK_ENTER_VEHICLE);
	
		if (scriptTaskStatus == 7)
		{
			if (!PED::IS_PED_IN_ANY_VEHICLE(uLocal_43.f_1, false))
			{
				TASK::CLEAR_PED_TASKS(uLocal_43.f_1);
				iLocal_60 = 4;
				return;
			}
		}
	}

	return;
}

void func_148() // Position - 0x4F0B Hash - 0x2D99AC76 ^0xF8FDA755
{
	Vector3 entityCoords;
	Vector3 unk;
	float unk2;
	int entityCoords2;
	int unk3;
	BOOL unk4;

	if (bLocal_50)
		return;

	if (uLocal_43.f_4 == 0)
	{
		iLocal_60 = 4;
		return;
	}

	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(uLocal_43.f_4, false))
	{
		uLocal_43.f_4 = 0;
		iLocal_60 = 4;
		return;
	}

	entityCoords = { ENTITY::GET_ENTITY_COORDS(uLocal_43.f_1, true) };
	entityCoords2 = { ENTITY::GET_ENTITY_COORDS(uLocal_43.f_4, true) };
	distanceBetweenCoords = MISC::GET_DISTANCE_BETWEEN_COORDS(entityCoords, entityCoords2, true);

	if (distanceBetweenCoords > 3f)
	{
		if (!func_107(Global_44232[iLocal_64 /*5*/].f_2))
		{
			iLocal_60 = 12;
			return;
		}
	
		iLocal_60 = 5;
		iLocal_55.f_2 = SYSTEM::TIMERA() + 2000;
		return;
	}

	vehicleMaxNumberOfPassengers = VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(uLocal_43.f_4);
	seatIndex = 0;
	flag = true;
	seatIndex = 1;

	while (flag)
	{
		if (seatIndex < vehicleMaxNumberOfPassengers)
		{
			if (VEHICLE::IS_VEHICLE_SEAT_FREE(uLocal_43.f_4, seatIndex, false))
				flag = false;
			else
				seatIndex = seatIndex + 1;
		}
		else
		{
			flag = false;
			seatIndex = -1;
		}
	}

	if (seatIndex == -1)
	{
		if (seatIndex == -1)
		{
			iLocal_60 = 4;
			return;
		}
	}

	func_149();
	TASK::TASK_ENTER_VEHICLE(uLocal_43.f_1, uLocal_43.f_4, -1, seatIndex, 1073741824, 1, 0);
	iLocal_60 = 7;
	return;
}

void func_149() // Position - 0x500E Hash - 0x84E72A7 ^0x8587ED2
{
	if (!ENTITY::DOES_ENTITY_EXIST(uLocal_43.f_1))
		return;

	if (!PED::IS_PED_INJURED(uLocal_43.f_1))
	{
		PED::RESET_PED_MOVEMENT_CLIPSET(uLocal_43.f_1, 1048576000);
		PED::RESET_PED_STRAFE_CLIPSET(uLocal_43.f_1);
		PED::CLEAR_PED_ALTERNATE_MOVEMENT_ANIM(uLocal_43.f_1, 0, -1056964608);
		iLocal_60.f_2 = "";
		PED::CLEAR_FACIAL_IDLE_ANIM_OVERRIDE(uLocal_43.f_1);
		PED::SET_PED_RESET_FLAG(uLocal_43.f_1, 200, false);
		PED::SET_PED_RESET_FLAG(uLocal_43.f_1, 46, false);
		PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(uLocal_43.f_1, true);
		PED::SET_PED_FLEE_ATTRIBUTES(uLocal_43.f_1, 262144, false);
		AUDIO::SET_PED_IS_DRUNK(uLocal_43.f_1, false);
	}

	if (!bLocal_51)
		return;

	bLocal_51 = false;
	return;
}

void func_150() // Position - 0x50A3 Hash - 0x91CF8352 ^0xC7ECB60E
{
	if (SYSTEM::TIMERA() < iLocal_55.f_2)
	{
		func_121();
		return;
	}

	func_151();
	iLocal_55.f_2 = -2;
	iLocal_60 = 12;
	return;
}

int func_151() // Position - 0x50CD Hash - 0x43F4F7F8 ^0x3487861B
{
	if (!func_114(uLocal_43.f_1))
		return 0;

	if (!bLocal_51)
		return 0;

	func_152(uLocal_43.f_1);
	iLocal_60.f_2 = "";
	Global_2793044.f_4637 = 1;
	return 1;
}

void func_152(Ped pedParam0) // Position - 0x5106 Hash - 0x53419EAD ^0xE6B53983
{
	PED::RESET_PED_MOVEMENT_CLIPSET(pedParam0, 1048576000);
	PED::CLEAR_PED_ALTERNATE_MOVEMENT_ANIM(pedParam0, 0, -1056964608);
	PED::SET_PED_RESET_FLAG(pedParam0, 200, false);
	PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(pedParam0, true);
	PED::SET_PED_FLEE_ATTRIBUTES(pedParam0, 262144, false);
	AUDIO::SET_PED_IS_DRUNK(pedParam0, false);
	return;
}

void func_153() // Position - 0x5147 Hash - 0x7C9E1CD2 ^0xBCABE687
{
	int num;

	if (iLocal_55 == -1)
	{
		Global_44232[iLocal_64 /*5*/].f_2 = 0;
	}
	else if (Global_44232[iLocal_64 /*5*/].f_3 < 3 && Global_44232[iLocal_64 /*5*/].f_3 != 0)
	{
		Global_44232[iLocal_64 /*5*/].f_2 = -1;
	}
	else
	{
		num = iLocal_55 - SYSTEM::TIMERA();
	
		if (num <= 0)
			num = 0;
	
		num = (num / 1000) + 1;
		Global_44232[iLocal_64 /*5*/].f_2 = 0;
	
		if (num < 30)
			Global_44232[iLocal_64 /*5*/].f_2 = 2;
	
		if (num < 10)
			Global_44232[iLocal_64 /*5*/].f_2 = 1;
	}

	if (PED::IS_PED_IN_ANY_VEHICLE(uLocal_43.f_1, false))
	{
		iLocal_60 = 10;
		return;
	}

	if (func_114(uLocal_43.f_1))
	{
		iLocal_60 = 12;
		return;
	}

	if (iLocal_55 == -2)
		return;

	if (!func_107(Global_44232[iLocal_64 /*5*/].f_2))
		return;

	iLocal_60 = 12;
	return;
}

void func_154() // Position - 0x521D Hash - 0xF3B2B67E ^0xF3B2B67E
{
	return;
}

void func_155() // Position - 0x5225 Hash - 0x399097D3 ^0x9FB35D6F
{
	int num;
	int i;

	num = 6;
	i = 0;

	for (i = 0; i < 16; i = i + 1)
	{
		num = Global_44313[i /*6*/].f_2;
	
		if (!num == 6)
		{
			if (Global_44313[i /*6*/].f_1 == iLocal_48)
			{
				func_157(i);
				func_156(i);
			}
			else if (Global_44313[i /*6*/].f_1 == 2)
			{
				if (!iLocal_49 == -1)
					if (iLocal_49 == Global_44313[i /*6*/])
						func_157(i);
			}
		}
	}

	return;
}

void func_156(int iParam0) // Position - 0x529D Hash - 0x4CF611D4 ^0xB1D19983
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

void func_157(int iParam0) // Position - 0x52EA Hash - 0x94D00AC9 ^0x49DB19F7
{
	int num;

	num = Global_44313[iParam0 /*6*/].f_2;

	switch (num)
	{
		case 1:
			func_178();
			break;
	
		case 2:
			func_161(Global_44313[iParam0 /*6*/].f_4);
			break;
	
		case 3:
			func_160(Global_44313[iParam0 /*6*/].f_5);
			break;
	
		case 4:
			func_159();
			break;
	
		case 5:
			func_158();
			break;
	
		case 0:
			break;
	
		case 6:
			break;
	
		default:
			break;
	}

	return;
}

void func_158() // Position - 0x536C Hash - 0xC738D7FF ^0xB0B0699
{
	iLocal_60.f_1 = 2;
	return;
}

void func_159() // Position - 0x5379 Hash - 0xE3B2B84F ^0x2C892B3B
{
	int num;

	Global_44232[iLocal_64 /*5*/].f_4 = Global_44232[iLocal_64 /*5*/].f_4 + 1;

	if (iLocal_55 == -1)
	{
		Global_44232[iLocal_64 /*5*/].f_2 = 0;
	}
	else if (Global_44232[iLocal_64 /*5*/].f_4 < 9 && Global_44232[iLocal_64 /*5*/].f_4 != 0)
	{
		Global_44232[iLocal_64 /*5*/].f_2 = -1;
	}
	else
	{
		num = iLocal_55 - SYSTEM::TIMERA();
	
		if (num <= 0)
			num = 0;
	
		num = (num / 1000) + 1;
		Global_44232[iLocal_64 /*5*/].f_2 = 0;
	
		if (num < 30)
			Global_44232[iLocal_64 /*5*/].f_2 = 2;
	
		if (num < 10)
			Global_44232[iLocal_64 /*5*/].f_2 = 1;
	
		if (!func_114(uLocal_43.f_1))
			func_107(Global_44232[iLocal_64 /*5*/].f_2);
	}

	return;
}

void func_160(var uParam0) // Position - 0x5439 Hash - 0x3ABEC9D7 ^0xA42A73DC
{
	int num;

	Global_44232[iLocal_64 /*5*/].f_3 = Global_44232[iLocal_64 /*5*/].f_3 + uParam0;

	if (iLocal_55 == -1)
	{
		Global_44232[iLocal_64 /*5*/].f_2 = 0;
	}
	else if (Global_44232[iLocal_64 /*5*/].f_3 < 3 && Global_44232[iLocal_64 /*5*/].f_3 != 0)
	{
		Global_44232[iLocal_64 /*5*/].f_2 = -1;
	}
	else
	{
		num = iLocal_55 - SYSTEM::TIMERA();
	
		if (num <= 0)
			num = 0;
	
		num = (num / 1000) + 1;
		Global_44232[iLocal_64 /*5*/].f_2 = 0;
	
		if (num < 30)
			Global_44232[iLocal_64 /*5*/].f_2 = 2;
	
		if (num < 10)
			Global_44232[iLocal_64 /*5*/].f_2 = 1;
	
		if (!func_114(uLocal_43.f_1))
			func_107(Global_44232[iLocal_64 /*5*/].f_2);
	}

	return;
}

void func_161(var uParam0) // Position - 0x54F9 Hash - 0xCEFC5BDF ^0xDF2E8153
{
	uLocal_43.f_3 = uLocal_43.f_3 + uParam0;
	uLocal_43.f_2 = uLocal_43.f_2 + uParam0;
	iLocal_55.f_1 = iLocal_55.f_1 + uParam0;
	iLocal_55 = iLocal_55 + uParam0;
	return;
}

void func_162() // Position - 0x5529 Hash - 0x982EF4A3 ^0x771F59D
{
	int playerWantedLevel;

	if (!bLocal_50)
	{
		iLocal_63 = -1;
		return;
	}

	if (iLocal_63 < 0)
	{
		iLocal_63 = PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
		return;
	}

	playerWantedLevel = PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());

	if (playerWantedLevel != iLocal_63)
	{
		if (playerWantedLevel > iLocal_63)
			func_163();
	
		iLocal_63 = playerWantedLevel;
		return;
	}

	return;
}

void func_163() // Position - 0x5573 Hash - 0xF3B2B67E ^0xF3B2B67E
{
	return;
}

void func_164() // Position - 0x557B Hash - 0x3A2A8F2E ^0x7F3854EB
{
	if (!iLocal_55 == -1)
	{
		if (!iLocal_55 == -2)
		{
			if (SYSTEM::TIMERA() >= iLocal_55)
			{
				func_149();
				iLocal_55 = -2;
				iLocal_60 = 12;
			}
		}
	
		if (SYSTEM::TIMERA() > iLocal_55.f_1)
			func_178();
	}

	return;
}

void func_165(int iParam0) // Position - 0x55BA Hash - 0x88C53499 ^0x88C53499
{
	int i;

	i = 0;

	for (i = 0; i < 16; i = i + 1)
	{
		if (iParam0 == Global_44313[i /*6*/])
			func_156(i);
	}

	return;
}

void func_166() // Position - 0x55EA Hash - 0xDE3506E9 ^0xBB79E419
{
	int num;
	int num2;
	int outValue;
	int outValue2;
	int outValue3;
	int num3;
	int num4;
	int num5;

	iLocal_60 = 4;

	if (!ENTITY::IS_ENTITY_DEAD(uLocal_43.f_1, false))
		if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(uLocal_43.f_1))
			iLocal_60 = 10;

	if (bLocal_50)
	{
		func_169();
		func_11(71, 1);
	
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			num = func_80(2059, -1, 0);
			num2 = ((num / 10) + 1) * 10;
		
			if (num + 1 >= num2)
				func_167(num2);
		
			func_77(2059, num + 1, -1, true, false);
			bLocal_65 = true;
		}
		else
		{
			outValue = 0;
			outValue2 = 0;
			outValue3 = 0;
			STATS::STAT_GET_INT(668785249, &outValue, -1);
			STATS::STAT_GET_INT(-964246833, &outValue2, -1);
			STATS::STAT_GET_INT(-486839853, &outValue3, -1);
			num3 = outValue + outValue2 + outValue3;
			num4 = ((num3 / 10) + 1) * 10;
		
			if (num3 + 1 >= num4)
				func_167(num4);
		
			switch (func_67())
			{
				case 0:
					STATS::STAT_SET_INT(668785249, outValue + 1, true);
					break;
			
				case 1:
					STATS::STAT_SET_INT(-964246833, outValue2 + 1, true);
					break;
			
				case 2:
					STATS::STAT_SET_INT(-486839853, outValue3 + 1, true);
					break;
			}
		}
	
		iLocal_60.f_1 = 1;
		return;
	}

	iLocal_60.f_1 = 12;

	if (iLocal_55 == -1)
	{
		Global_44232[iLocal_64 /*5*/].f_2 = 0;
	}
	else if (Global_44232[iLocal_64 /*5*/].f_3 < 3 && Global_44232[iLocal_64 /*5*/].f_3 != 0)
	{
		Global_44232[iLocal_64 /*5*/].f_2 = -1;
	}
	else
	{
		num5 = iLocal_55 - SYSTEM::TIMERA();
	
		if (num5 <= 0)
			num5 = 0;
	
		num5 = (num5 / 1000) + 1;
		Global_44232[iLocal_64 /*5*/].f_2 = 0;
	
		if (num5 < 30)
			Global_44232[iLocal_64 /*5*/].f_2 = 2;
	
		if (num5 < 10)
			Global_44232[iLocal_64 /*5*/].f_2 = 1;
	}

	return;
}

void func_167(int iParam0) // Position - 0x579A Hash - 0x7FE30F93 ^0xC3FFC057
{
	int num;

	num = func_168(81);
	Global_2645068[num /*83*/] = 81;
	Global_2645068[num /*83*/].f_17 = iParam0;
	TEXT_LABEL_ASSIGN_STRING(&Global_2645068[num /*83*/].f_18[0 /*16*/], "", 64);
	return;
}

int func_168(int iParam0) // Position - 0x57D1 Hash - 0x871E8B4C ^0x871E8B4C
{
	int num;
	int i;

	num = 19;

	for (i = 0; i <= 19; i = i + 1)
	{
		if (Global_2645068[i /*83*/] == iParam0)
		{
			num = i;
			i = 20;
		}
		else if (Global_2645068[i /*83*/] == 0)
		{
			num = i;
			i = 20;
		}
	}

	return num;
}

void func_169() // Position - 0x581E Hash - 0xF3B2B67E ^0xF3B2B67E
{
	return;
}

void func_170() // Position - 0x5826 Hash - 0xB40E625C ^0x88424611
{
	iLocal_55 = uLocal_43.f_2;
	iLocal_55.f_1 = uLocal_43.f_3;
	iLocal_55.f_2 = -2;
	iLocal_55.f_3 = -2;
	return;
}

void func_171(int iParam0, int iParam1, int iParam2) // Position - 0x584A Hash - 0xF54D70EF ^0xF54D70EF
{
	func_172(iParam0, iParam1, iParam2, 0, 0, 1);
	return;
}

void func_172(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5) // Position - 0x585F Hash - 0x9F3D8BA2 ^0x9F3D8BA2
{
	int num;

	if (iParam0 == -1)
		return;

	if (iParam1 == -1)
		return;

	if (iParam2 == 6)
		return;

	if (func_174(iParam0, iParam1, iParam2))
		return;

	num = func_173();

	if (num == -1)
		return;

	Global_44313[num /*6*/] = iParam0;
	Global_44313[num /*6*/].f_1 = iParam1;
	Global_44313[num /*6*/].f_2 = iParam2;
	Global_44313[num /*6*/].f_3 = iParam3;
	Global_44313[num /*6*/].f_4 = iParam4;
	Global_44313[num /*6*/].f_5 = iParam5;
	return;
}

int func_173() // Position - 0x58E1 Hash - 0x11506CC4 ^0x2E9F5641
{
	int i;

	i = 0;

	for (i = 0; i < 16; i = i + 1)
	{
		if (Global_44313[i /*6*/].f_2 == 6)
			return i;
	}

	return -1;
}

BOOL func_174(int iParam0, int iParam1, int iParam2) // Position - 0x5912 Hash - 0x3A30B8C2 ^0x3A30B8C2
{
	if (func_175(iParam0, iParam1, iParam2) == -1)
		return false;

	return true;
}

int func_175(int iParam0, int iParam1, int iParam2) // Position - 0x592D Hash - 0x61F8C119 ^0x1C9B84EC
{
	int i;

	i = 0;

	for (i = 0; i < 16; i = i + 1)
	{
		if (iParam2 == Global_44313[i /*6*/].f_2)
			if (iParam0 == Global_44313[i /*6*/])
				if (iParam1 == Global_44313[i /*6*/].f_1)
					return i;
	}

	return -1;
}

void func_176() // Position - 0x5979 Hash - 0x6A27F759 ^0xE8656036
{
	int num;

	bLocal_50 = false;

	if (uLocal_43.f_1 == PLAYER::PLAYER_PED_ID())
	{
		bLocal_50 = true;
		Global_44445 = 1;
		Global_44447 = Global_44447 + 1;
	}

	if (!ENTITY::IS_ENTITY_DEAD(uLocal_43.f_1, false))
	{
		num = func_70(uLocal_43.f_1);
	
		switch (num)
		{
			case 17:
				AUDIO::SET_AMBIENT_VOICE_NAME(uLocal_43.f_1, "AMANDA_DRUNK");
				break;
		
			case 19:
				AUDIO::SET_AMBIENT_VOICE_NAME(uLocal_43.f_1, "LAMAR_DRUNK");
				break;
		}
	}

	return;
}

void func_177() // Position - 0x59E6 Hash - 0x8FBC6F45 ^0x980E7E5A
{
	if (!iLocal_48 == -1)
		return;

	iLocal_48 = func_117(uLocal_43.f_1);

	if (iLocal_48 == -1)
		return;

	iLocal_64 = func_116(iLocal_48);
	return;
}

void func_178() // Position - 0x5A14 Hash - 0xCFD57BC7 ^0xB8C61C44
{
	int num;

	if (!func_34(0) && !func_34(3))
	{
		if (!ENTITY::IS_ENTITY_DEAD(uLocal_43.f_1, false))
		{
			num = func_70(uLocal_43.f_1);
		
			if (Global_44232[iLocal_64 /*5*/].f_4 > 0)
			{
				switch (num)
				{
					case 0:
						func_180(uLocal_43.f_1, "POST_STONED", 24);
						break;
				
					case 1:
						func_180(uLocal_43.f_1, "POST_STONED", 24);
						break;
				
					case 2:
						func_180(uLocal_43.f_1, "POST_STONED", 24);
						break;
				}
			}
		
			switch (num)
			{
				case 17:
					AUDIO::SET_AMBIENT_VOICE_NAME(uLocal_43.f_1, "AMANDA_NORMAL");
					break;
			
				case 19:
					AUDIO::SET_AMBIENT_VOICE_NAME(uLocal_43.f_1, "LAMAR_NORMAL");
					break;
			}
		}
	}

	func_149();

	if (bLocal_50)
		Global_44445 = 0;

	func_179();
	STREAMING::REMOVE_ANIM_DICT(func_113(0));
	STREAMING::REMOVE_ANIM_DICT(func_113(2));
	STREAMING::REMOVE_ANIM_DICT(func_113(1));
	Global_1944403 = 0;

	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(-1870099198) > 0)
		func_41(0);

	SCRIPT::TERMINATE_THIS_THREAD();
	return;
}

void func_179() // Position - 0x5B18 Hash - 0x32816913 ^0xB35FA29D
{
	Vehicle vehicle;
	Vehicle vehiclePedIsIn;
	Ped pedInVehicleSeat;

	if (ENTITY::IS_ENTITY_DEAD(uLocal_43.f_1, false))
		return;

	vehicle = uLocal_43.f_1;

	if (PED::IS_PED_IN_ANY_VEHICLE(uLocal_43.f_1, false))
	{
		vehiclePedIsIn = PED::GET_VEHICLE_PED_IS_IN(uLocal_43.f_1, false);
		pedInVehicleSeat = VEHICLE::GET_PED_IN_VEHICLE_SEAT(vehiclePedIsIn, -1, false);
	
		if (!uLocal_43.f_1 == pedInVehicleSeat)
			return;
	
		vehicle = vehiclePedIsIn;
	}
	else if (!CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() == FIRST_PERSON || !PLAYER::PLAYER_PED_ID() == uLocal_43.f_1)
	{
		return;
	}

	fLocal_53 = 0f;
	func_142(vehicle, 0f);
	return;
}

void func_180(Ped pedParam0, char* sParam1, int iParam2) // Position - 0x5B92 Hash - 0x48D349EA ^0xA208047E
{
	AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(pedParam0, sParam1, func_181(iParam2), 1);
	return;
}

char* func_181(int iParam0) // Position - 0x5BA9 Hash - 0xA17D549C ^0xAA2D5E0B
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

