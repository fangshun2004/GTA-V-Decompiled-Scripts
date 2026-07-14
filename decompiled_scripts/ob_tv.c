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
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int* iLocal_43 = NULL;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	int iLocal_46 = 0;
	float fLocal_47 = 0f;
	struct<3> Local_48 = { 0, 0, 0 } ;
	float fLocal_51 = 0f;
	int iLocal_52 = 0;
	bool bLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	char cLocal_63[64] = "";
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	char cLocal_79[64] = "";
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	int iLocal_95 = 0;
	struct<3> Local_96 = { 0, 0, 0 } ;
	struct<3> Local_99 = { 0, 0, 0 } ;
	int iLocal_102 = 0;
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	struct<3> Local_105 = { 0, 0, 0 } ;
	int iScriptParam_0 = 0;
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
	iLocal_38 = 3;
	iLocal_42 = 1;
	iLocal_52 = -1;
	iLocal_59 = -1;
	iLocal_60 = -1;
	iLocal_61 = -1;
	StringCopy(&cLocal_63, "NULL", 64);
	StringCopy(&cLocal_79, "NULL", 64);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(2))
	{
		func_69();
	}
	if (ENTITY::DOES_ENTITY_EXIST(iScriptParam_0))
	{
		iLocal_54 = iScriptParam_0;
		iLocal_57 = iScriptParam_0;
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		func_68();
		if (ENTITY::DOES_ENTITY_EXIST(iScriptParam_0))
		{
			if ((iLocal_60 != -1 && (func_67() && !func_66())) && !func_65(iLocal_60))
			{
				func_69();
			}
			if ((STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && STREAMING::GET_PLAYER_SWITCH_TYPE() != 3) && STREAMING::GET_PLAYER_SWITCH_STATE() == 3)
			{
				func_69();
			}
			if (func_64(13) || func_64(14))
			{
				func_69();
			}
			if (OBJECT::HAS_OBJECT_BEEN_BROKEN(iScriptParam_0, 0))
			{
				func_69();
			}
			if (BRAIN::IS_OBJECT_WITHIN_BRAIN_ACTIVATION_RANGE(iScriptParam_0))
			{
				if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
				{
					func_63();
					if (ENTITY::GET_ENTITY_HEALTH(iScriptParam_0) < 950)
					{
						func_69();
					}
					switch (iLocal_46)
					{
						case 0:
							func_60();
							if (iLocal_60 == 5)
							{
								if (func_59(18) == 1 && func_59(20) == 0)
								{
									iLocal_58 = OBJECT::GET_RAYFIRE_MAP_OBJECT(-809.962f, 170.919f, 75.7407f, 3f, "des_tvsmash");
									if (OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(iLocal_58))
									{
										OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(iLocal_58, 9);
									}
									SCRIPT::TERMINATE_THIS_THREAD();
								}
							}
							if (iLocal_60 == -1)
							{
								func_69();
							}
							else
							{
								func_58();
								AUDIO::HINT_AMBIENT_AUDIO_BANK("SAFEHOUSE_MICHAEL_SIT_SOFA", false, -1);
								AUDIO::REGISTER_SCRIPT_WITH_AUDIO(0);
								Global_33876[iLocal_60 /*11*/].f_2 = 0;
								Global_33876[iLocal_60 /*11*/].f_6 = 1;
								Global_33876[iLocal_60 /*11*/] = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
								Global_33876[iLocal_60 /*11*/].f_1 = 0;
								Global_33876[iLocal_60 /*11*/].f_4 = 0;
								Global_33876[iLocal_60 /*11*/].f_7 = 0;
								Global_33876[iLocal_60 /*11*/].f_8 = 0;
								Global_33876[iLocal_60 /*11*/].f_10 = 0;
								fLocal_47 = -4f;
								func_56(&iLocal_43);
								func_54();
								func_53();
								SYSTEM::WAIT(0);
								iLocal_46 = 1;
							}
							break;
						
						case 1:
							if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
							{
								SYSTEM::WAIT(0);
							}
							else if (ENTITY::IS_ENTITY_STATIC(iLocal_54) && ENTITY::IS_ENTITY_UPRIGHT(iLocal_54, 90f))
							{
								if (func_45() || Global_33876[iLocal_60 /*11*/].f_5)
								{
									iLocal_46 = 2;
								}
							}
							else
							{
								func_44(&iLocal_59);
							}
							break;
						
						case 2:
							func_54();
							if (!func_65(iLocal_60))
							{
								func_44(&iLocal_59);
								if (func_43("TV_HLP1"))
								{
									HUD::CLEAR_HELP(true);
								}
							}
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_54))
							{
								if (!ENTITY::IS_ENTITY_VISIBLE(iLocal_54))
								{
									ENTITY::SET_ENTITY_VISIBLE(iLocal_54, true, false);
								}
							}
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_56))
							{
								if (!ENTITY::IS_ENTITY_VISIBLE(iLocal_56))
								{
									ENTITY::SET_ENTITY_VISIBLE(iLocal_56, true, false);
								}
							}
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_55))
							{
								if (ENTITY::IS_ENTITY_VISIBLE(iLocal_55))
								{
									ENTITY::SET_ENTITY_VISIBLE(iLocal_55, false, false);
								}
							}
							if (!MISC::ARE_STRINGS_EQUAL(&cLocal_63, "NULL"))
							{
								AUDIO::SET_STATIC_EMITTER_ENABLED(&cLocal_63, false);
							}
							GRAPHICS::SET_TV_AUDIO_FRONTEND(false);
							SYSTEM::WAIT(0);
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_57))
							{
								GRAPHICS::ATTACH_TV_AUDIO_TO_ENTITY(iLocal_57);
							}
							if (!func_65(iLocal_60))
							{
								if ((Global_33876[iLocal_60 /*11*/] == 3 || Global_33876[iLocal_60 /*11*/] == 2) || Global_33876[iLocal_60 /*11*/] == -1)
								{
									Global_33876[iLocal_60 /*11*/] = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
								}
								GRAPHICS::SET_TV_CHANNEL(Global_33876[iLocal_60 /*11*/]);
								GRAPHICS::SET_TV_VOLUME(fLocal_47);
							}
							else
							{
								iLocal_61 = Global_33876[iLocal_60 /*11*/];
								iLocal_62 = Global_33876[iLocal_60 /*11*/].f_1;
								GRAPHICS::SET_TV_CHANNEL_PLAYLIST(iLocal_61, func_42(iLocal_62), Global_33876[iLocal_60 /*11*/].f_9);
								GRAPHICS::SET_TV_CHANNEL(iLocal_61);
								if (Global_33876[iLocal_60 /*11*/].f_7)
								{
									Global_33876[iLocal_60 /*11*/].f_5 = 0;
									Global_33876[iLocal_60 /*11*/].f_7 = 0;
								}
							}
							Global_33876[iLocal_60 /*11*/].f_2 = 1;
							func_41(133, 1);
							func_41(131, 1);
							func_41(132, 1);
							iLocal_46 = 3;
							break;
						
						case 3:
							if (Global_33876[iLocal_60 /*11*/].f_4)
							{
								iLocal_46 = 6;
							}
							if (Global_33876[iLocal_60 /*11*/].f_7 && func_65(iLocal_60))
							{
								Global_33876[iLocal_60 /*11*/].f_7 = 0;
								iLocal_46 = 6;
							}
							if (!func_39(iLocal_60))
							{
								func_38();
								iLocal_46 = 5;
							}
							else
							{
								func_36();
								if (GRAPHICS::GET_TV_CHANNEL() == -1)
								{
									GRAPHICS::SET_TV_CHANNEL(Global_33876[iLocal_60 /*11*/]);
								}
								if (func_16())
								{
									iLocal_46 = 6;
								}
							}
							break;
						
						case 5:
							if (func_39(iLocal_60))
							{
								iLocal_46 = 2;
							}
							if (Global_33876[iLocal_60 /*11*/].f_4)
							{
								iLocal_46 = 6;
							}
							break;
						
						case 6:
							func_1();
							if (iLocal_59 != -1)
							{
								func_44(&iLocal_59);
							}
							Global_33876[iLocal_60 /*11*/].f_5 = 0;
							Global_33876[iLocal_60 /*11*/].f_4 = 0;
							Global_33876[iLocal_60 /*11*/].f_1 = 0;
							Global_33876[iLocal_60 /*11*/].f_2 = 0;
							Global_33876[iLocal_60 /*11*/].f_7 = 0;
							Global_33876[iLocal_60 /*11*/].f_8 = 0;
							Global_33876[iLocal_60 /*11*/].f_10 = 0;
							iLocal_46 = 1;
							break;
						}
					}
			}
		}
		else
		{
			func_69();
			SCRIPT::TERMINATE_THIS_THREAD();
		}
	}
	func_69();
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_1()
{
	if (iLocal_60 != -1)
	{
		Global_33876[iLocal_60 /*11*/] = GRAPHICS::GET_TV_CHANNEL();
	}
	fLocal_47 = GRAPHICS::GET_TV_VOLUME();
	GRAPHICS::SET_TV_CHANNEL(-1);
	func_4();
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("family5")) == 0)
	{
		if (!MISC::ARE_STRINGS_EQUAL(&cLocal_63, "NULL"))
		{
			AUDIO::SET_STATIC_EMITTER_ENABLED(&cLocal_63, true);
		}
	}
	if (((func_43("TV_HLP1") || func_43("TV_HLP2")) || func_43("TV_HLP5")) || func_43("TV_HLP6"))
	{
		HUD::CLEAR_HELP(true);
	}
	func_3();
	func_53();
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_55))
	{
		if (!ENTITY::IS_ENTITY_VISIBLE(iLocal_55))
		{
			ENTITY::SET_ENTITY_VISIBLE(iLocal_55, true, false);
		}
	}
	GRAPHICS::ENABLE_MOVIE_SUBTITLES(false);
	func_2();
}

void func_2()
{
	if (MISC::IS_PC_VERSION())
	{
		if (iLocal_104 == 1)
		{
			PAD::SHUTDOWN_PC_SCRIPTED_CONTROLS();
			iLocal_104 = 0;
		}
	}
}

void func_3()
{
	if (!iLocal_52 == -1)
	{
		HUD::SET_TEXT_RENDER_ID(iLocal_52);
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_54))
		{
			if (ENTITY::GET_ENTITY_MODEL(iLocal_54) == joaat("v_ilev_mm_screen2") || ENTITY::GET_ENTITY_MODEL(iLocal_54) == joaat("v_ilev_mm_scre_off"))
			{
				ENTITY::SET_ENTITY_VISIBLE(iLocal_54, false, false);
				if (ENTITY::GET_ENTITY_MODEL(iLocal_54) == joaat("v_ilev_mm_scre_off"))
				{
					GRAPHICS::DRAW_RECT(0.5f, 0.5f, 1f, 1f, 255, 255, 255, 255, false);
				}
			}
			else
			{
				GRAPHICS::DRAW_RECT(0.5f, 0.5f, 1f, 1f, 0, 0, 0, 255, false);
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_56))
	{
		ENTITY::SET_ENTITY_VISIBLE(iLocal_56, false, false);
	}
}

void func_4()
{
	if (iLocal_102)
	{
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
		if (CAM::IS_CAM_ACTIVE(iLocal_95))
		{
			CAM::SET_CAM_ACTIVE(iLocal_95, false);
		}
		CAM::DESTROY_CAM(iLocal_95, false);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
			TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
			TASK::TASK_LOOK_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_48, 1, 0, 2);
			if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
			{
				if (bLocal_53 == 1)
				{
					bLocal_53 = false;
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
				}
			}
			ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), true, false);
		}
		if (!MISC::ARE_STRINGS_EQUAL(&cLocal_79, "NULL"))
		{
			if (AUDIO::IS_AUDIO_SCENE_ACTIVE(&cLocal_79))
			{
				AUDIO::STOP_AUDIO_SCENE(&cLocal_79);
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_56))
		{
			ENTITY::SET_ENTITY_VISIBLE(iLocal_56, true, false);
		}
		func_5(0, 1, 0, 0, 0, 0, 0);
		GRAPHICS::ENABLE_MOVIE_SUBTITLES(false);
		iLocal_102 = 0;
	}
}

void func_5(bool bParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	if (bParam0)
	{
		PLAYER::SPECIAL_ABILITY_DEACTIVATE_FAST(PLAYER::PLAYER_ID(), 0);
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), true);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), true);
		func_15(1);
		HUD::THEFEED_FLUSH_QUEUE();
		HUD::THEFEED_PAUSE();
		if (Global_21649.f_1 > 3 && !bParam6)
		{
			if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
			{
				AUDIO::STOP_SCRIPTED_CONVERSATION(false);
			}
			if (!func_14())
			{
				Global_21649.f_1 = 3;
			}
			Global_23023 = 5;
		}
		func_13(1, bParam3, iParam2, 0);
		Global_65069 = 1;
		Global_77400 = 1;
		Global_80335 = 1;
	}
	else
	{
		func_15(0);
		HUD::THEFEED_RESUME();
		Global_65069 = 0;
		if (bParam1)
		{
			GRAPHICS::CASCADE_SHADOWS_INIT_SESSION();
		}
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), false);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), false);
		func_13(0, bParam3, iParam2, 0);
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if ((((((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_11(PLAYER::PLAYER_ID())) && !func_7(PLAYER::PLAYER_ID(), 0)) && !func_6()) && !bParam4) && !bParam5) && !NETWORK::NETWORK_IS_IN_SPECTATOR_MODE())
			{
				ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false, 0);
			}
		}
		else if (((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_11(PLAYER::PLAYER_ID())) && !bParam4) && !bParam5)
		{
			ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false, 0);
		}
		Global_80335 = 0;
	}
}

bool func_6()
{
	return BitTest(Global_1845298[PLAYER::PLAYER_ID() /*881*/].f_36.f_18, 14);
}

bool func_7(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (!func_10(iParam0))
	{
		return 0;
	}
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_8(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1845298[iParam0 /*881*/].f_198 == 8;
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

int func_8(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_9();
	}
	if (Global_1575075[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1574922[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_9()
{
	return Global_1574928;
}

int func_10(var uParam0)
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

int func_11(int iParam0)
{
	if (func_7(iParam0, 0))
	{
		return 1;
	}
	if (func_12())
	{
		if (iParam0 == PLAYER::PLAYER_ID())
		{
			return 1;
		}
	}
	if (BitTest(Global_2658293[iParam0 /*468*/].f_203, 2))
	{
		return 1;
	}
	return 0;
}

bool func_12()
{
	return BitTest(Global_2621446, 3);
}

int func_13(bool bParam0, bool bParam1, var uParam2, bool bParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (MISC::IS_PC_VERSION())
	{
		if (CUTSCENE::IS_MULTIHEAD_FADE_UP() != bParam0 && uParam2)
		{
			CUTSCENE::SET_CUTSCENE_MULTIHEAD_FADE(bParam0, bParam1, true, bParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

int func_14()
{
	if (Global_21649.f_1 == 1 || Global_21649.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_15(int iParam0)
{
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&Global_9502, 13);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_9502, 13);
	}
}

int func_16()
{
	if (!func_65(iLocal_60))
	{
		if (((((((func_32(&iLocal_43) >= 1f && ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_105, 1f, 1f, 1.5f, false, true, 0)) && INTERIOR::GET_INTERIOR_FROM_ENTITY(iLocal_54) == INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID())) && !func_31(8, -1)) && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false)) && PED::IS_PED_HEADING_TOWARDS_POSITION(PLAYER::PLAYER_PED_ID(), Local_48, 90f)) && !PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) && !STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
		{
			if (iLocal_59 == -1)
			{
				func_30();
				func_29(&iLocal_59, 3, "TV_HLP5", 0, 0, 0, 0);
			}
			else if (func_27(iLocal_59, 1))
			{
				func_44(&iLocal_59);
				func_56(&iLocal_43);
				Global_33876[iLocal_60 /*11*/].f_7 = 0;
				if (AUDIO::REQUEST_AMBIENT_AUDIO_BANK("SAFEHOUSE_MICHAEL_SIT_SOFA", false, -1))
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "MICHAEL_SOFA_TV_ON_MASTER", 0, true);
				}
				return 1;
			}
			func_17();
		}
		else
		{
			if (func_43("TV_HLP5"))
			{
				HUD::CLEAR_HELP(true);
			}
			func_2();
			func_44(&iLocal_59);
		}
	}
	return 0;
}

void func_17()
{
	if (iLocal_102 == 0)
	{
		PAD::SET_INPUT_EXCLUSIVE(2, 222);
		if (PAD::IS_CONTROL_JUST_PRESSED(2, 222))
		{
			func_44(&iLocal_59);
			func_29(&iLocal_59, 3, "TV_HLP6", 0, 0, 0, 0);
			func_26();
		}
	}
	else
	{
		PAD::DISABLE_CONTROL_ACTION(2, 200, true);
		if (ENTITY::IS_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID()))
		{
			ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), false, false);
		}
		if (bLocal_53)
		{
			if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
			}
		}
		HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
		GRAPHICS::SET_TV_PLAYER_WATCHING_THIS_FRAME(PLAYER::PLAYER_PED_ID());
		func_24(1, 1);
		PAD::SET_INPUT_EXCLUSIVE(2, 222);
		func_18(0);
		if (PAD::IS_CONTROL_JUST_PRESSED(2, 222) || (PAD::IS_USING_KEYBOARD_AND_MOUSE(2) && PAD::IS_DISABLED_CONTROL_JUST_RELEASED(2, 200)))
		{
			func_44(&iLocal_59);
			func_4();
		}
	}
}

void func_18(int iParam0)
{
	if (func_23())
	{
		return;
	}
	if (!Global_21649.f_1 == 1)
	{
		if (func_22(0))
		{
			func_19(iParam0);
		}
		MISC::SET_BIT(&Global_9503, 2);
	}
}

void func_19(int iParam0)
{
	if (func_23())
	{
		return;
	}
	if (Global_21882)
	{
		if (func_21())
		{
			func_20(1, 1);
		}
		else
		{
			func_20(0, 0);
		}
	}
	if (Global_21649.f_1 == 10 || Global_21649.f_1 == 9)
	{
		MISC::SET_BIT(&Global_9503, 16);
	}
	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
	}
	Global_23023 = 5;
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&Global_9502, 30);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_9502, 30);
	}
	if (!func_14())
	{
		Global_21649.f_1 = 3;
	}
}

void func_20(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_22(0))
		{
			Global_21882 = 1;
			if (bParam1)
			{
				MOBILE::GET_MOBILE_PHONE_POSITION(&Global_21586);
			}
			Global_21577 = { Global_21595[Global_21594 /*3*/] };
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_21577);
		}
	}
	else if (Global_21882 == 1)
	{
		Global_21882 = 0;
		Global_21577 = { Global_21602[Global_21594 /*3*/] };
		if (bParam1)
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_21586);
		}
		else
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_21577);
		}
	}
}

bool func_21()
{
	return BitTest(Global_1964670, 5);
}

int func_22(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_21649.f_1 > 3)
		{
			if (BitTest(Global_9502, 14))
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
			return 0;
		}
	}
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_21649.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

bool func_23()
{
	return BitTest(Global_1964670, 19);
}

void func_24(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	iVar0 = 64;
	if (bParam0)
	{
		if (func_25(0))
		{
			if (!iLocal_39)
			{
				if (AUDIO::REQUEST_AMBIENT_AUDIO_BANK("SAFEHOUSE_MICHAEL_SIT_SOFA", false, -1))
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "MICHAEL_SOFA_TV_CHANGE_CHANNEL_MASTER", 0, true);
				}
				if (GRAPHICS::GET_TV_CHANNEL() == 0)
				{
					GRAPHICS::SET_TV_CHANNEL(1);
				}
				else
				{
					GRAPHICS::SET_TV_CHANNEL(0);
				}
				iLocal_39 = 1;
			}
		}
		else if (iLocal_39)
		{
			iLocal_39 = 0;
		}
	}
	if (bParam1)
	{
		iVar1 = (PAD::GET_CONTROL_VALUE(2, 219) - 127);
		if (!iLocal_40)
		{
			if (iVar1 > (0 + iVar0))
			{
				fVar2 = GRAPHICS::GET_TV_VOLUME();
				fVar2 = (fVar2 - 0.5f);
				if (fVar2 < -36f)
				{
					fVar2 = -36f;
				}
				GRAPHICS::SET_TV_VOLUME(fVar2);
				iLocal_41 = MISC::GET_GAME_TIMER();
				iLocal_40 = 1;
			}
			if (iVar1 < (0 - iVar0))
			{
				fVar2 = GRAPHICS::GET_TV_VOLUME();
				fVar2 = (fVar2 + 0.5f);
				if (fVar2 > 0f)
				{
					fVar2 = 0f;
				}
				GRAPHICS::SET_TV_VOLUME(fVar2);
				iLocal_41 = MISC::GET_GAME_TIMER();
				iLocal_40 = 1;
			}
			if (iVar1 < (0 + iVar0) && iVar1 > (0 - iVar0))
			{
				iLocal_42 = 1;
			}
			else if (iLocal_42)
			{
				if (AUDIO::REQUEST_AMBIENT_AUDIO_BANK("SAFEHOUSE_MICHAEL_SIT_SOFA", false, -1))
				{
					if (fVar2 != -36f && fVar2 != 0f)
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "MICHAEL_SOFA_REMOTE_CLICK_VOLUME_MASTER", 0, true);
					}
					iLocal_42 = 0;
				}
			}
		}
		if (iLocal_40)
		{
			if (iVar1 == 0 || MISC::GET_GAME_TIMER() > iLocal_41 + 24)
			{
				iLocal_40 = 0;
			}
		}
	}
}

int func_25(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 64;
	iVar1 = (PAD::GET_CONTROL_VALUE(2, 218) - 127);
	if (iParam0 || SYSTEM::TIMERA() > 300)
	{
		if (iVar1 > (0 + iVar0) || iVar1 < (0 - iVar0))
		{
			SYSTEM::SETTIMERA(0);
			return 1;
		}
	}
	return 0;
}

void func_26()
{
	float fVar0;
	
	fVar0 = 50f;
	if (iLocal_102 == 0)
	{
		iLocal_95 = CAM::CREATE_CAM_WITH_PARAMS("DEFAULT_SCRIPTED_CAMERA", Local_96, Local_99, fVar0, false, 2);
		CAM::SET_CAM_FAR_CLIP(iLocal_95, 100f);
		CAM::SET_CAM_ACTIVE(iLocal_95, true);
		CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_56))
		{
			ENTITY::SET_ENTITY_VISIBLE(iLocal_56, false, false);
		}
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), true);
			TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
			if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
				bLocal_53 = true;
			}
			TASK::TASK_LOOK_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_48, -1, 0, 2);
			ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), false, false);
		}
		if (!MISC::ARE_STRINGS_EQUAL(&cLocal_79, "NULL"))
		{
			if (!AUDIO::IS_AUDIO_SCENE_ACTIVE(&cLocal_79))
			{
				AUDIO::START_AUDIO_SCENE(&cLocal_79);
			}
		}
		func_5(1, 1, 0, 0, 0, 0, 0);
		GRAPHICS::ENABLE_MOVIE_SUBTITLES(true);
		iLocal_102 = 1;
	}
}

int func_27(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = func_28(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::GET_PLAYER_INDEX()))
	{
		return 0;
	}
	if (func_22(0))
	{
		return 0;
	}
	if (CUTSCENE::IS_CUTSCENE_PLAYING())
	{
		return 0;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_45696[iVar0 /*32*/] == 1 && Global_45696[iVar0 /*32*/].f_4 == 1)
		{
			if (bParam1)
			{
				if (Global_45696[iVar0 /*32*/].f_29)
				{
					return 0;
				}
			}
			Global_45696[iVar0 /*32*/].f_5 = 1;
			Global_45696[iVar0 /*32*/].f_29 = 1;
			return 1;
		}
		else
		{
			if (Global_45696[iVar0 /*32*/] == 0)
			{
			}
			if (Global_45696[iVar0 /*32*/].f_7)
			{
			}
		}
	}
	return 0;
}

int func_28(int iParam0)
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_45696[iVar0 /*32*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_29(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, int iParam6)
{
	int iVar0;
	
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("context_controller")) < 1)
	{
	}
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		if (!*iParam0 == -1)
		{
			func_44(iParam0);
		}
		return;
	}
	if (!*iParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (!Global_45696[iVar0 /*32*/])
		{
			Global_45696[iVar0 /*32*/] = 1;
			Global_45696[iVar0 /*32*/].f_1 = Global_45897;
			Global_45897++;
			Global_45696[iVar0 /*32*/].f_4 = 0;
			Global_45696[iVar0 /*32*/].f_29 = 0;
			Global_45696[iVar0 /*32*/].f_5 = 0;
			Global_45696[iVar0 /*32*/].f_2 = iParam1;
			StringCopy(&(Global_45696[iVar0 /*32*/].f_8), sParam2, 16);
			Global_45696[iVar0 /*32*/].f_6 = iParam3;
			Global_45696[iVar0 /*32*/].f_31 = SCRIPT::GET_ID_OF_THIS_THREAD();
			Global_45696[iVar0 /*32*/].f_7 = 0;
			Global_45696[iVar0 /*32*/].f_3 = iParam5;
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
			{
				Global_45696[iVar0 /*32*/].f_12 = 1;
				StringCopy(&(Global_45696[iVar0 /*32*/].f_13), sParam4, 64);
				Global_45696[iVar0 /*32*/].f_30 = iParam6;
			}
			else
			{
				Global_45696[iVar0 /*32*/].f_12 = 0;
				Global_45696[iVar0 /*32*/].f_30 = 0;
			}
			*iParam0 = Global_45696[iVar0 /*32*/].f_1;
			return;
		}
		iVar0++;
	}
}

void func_30()
{
	if (MISC::IS_PC_VERSION())
	{
		if (iLocal_104 == 0)
		{
			PAD::INIT_PC_SCRIPTED_CONTROLS("TV_Controls");
			iLocal_104 = 1;
		}
	}
}

bool func_31(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1677555.f_203[iParam1];
			}
			break;
	}
	return BitTest(Global_1677555.f_1048, iParam0);
}

float func_32(int* iParam0)
{
	if (func_35(iParam0))
	{
		if (func_34(iParam0))
		{
			return iParam0->f_2;
		}
		else
		{
			return (func_33(BitTest(*iParam0, 4)) - iParam0->f_1);
		}
	}
	return iParam0->f_1;
}

float func_33(bool bParam0)
{
	float fVar0;
	float fVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	
	if (bParam0)
	{
		fVar0 = SYSTEM::TO_FLOAT(MISC::GET_GAME_TIMER());
		fVar1 = (fVar0 / 1000f);
		return fVar1;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar2 = NETWORK::GET_NETWORK_TIME();
		fVar3 = SYSTEM::TO_FLOAT(iVar2);
		fVar4 = (fVar3 / 1000f);
		return fVar4;
	}
	return (SYSTEM::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

bool func_34(var uParam0)
{
	return BitTest(*uParam0, 2);
}

bool func_35(var uParam0)
{
	return BitTest(*uParam0, 1);
}

void func_36()
{
	float fVar0;
	
	fVar0 = 1f;
	func_37(&fVar0);
	HUD::SET_TEXT_RENDER_ID(iLocal_52);
	GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(4);
	GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(true);
	GRAPHICS::DRAW_TV_CHANNEL(0.5f, 0.5f, fVar0, 1f, 0f, 255, 255, 255, 255);
	HUD::SET_TEXT_RENDER_ID(HUD::GET_DEFAULT_SCRIPT_RENDERTARGET_RENDER_ID());
}

void func_37(float fParam0)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = GRAPHICS::GET_ASPECT_RATIO(false);
	if (fVar0 <= (16f / 9f))
	{
		fVar1 = (fVar0 / (16f / 9f));
		fVar2 = *fParam0;
		*fParam0 = (fVar2 * fVar1);
	}
}

void func_38()
{
	Global_33876[iLocal_60 /*11*/].f_7 = 0;
	Global_33876[iLocal_60 /*11*/] = GRAPHICS::GET_TV_CHANNEL();
	fLocal_47 = GRAPHICS::GET_TV_VOLUME();
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE(&cLocal_79))
	{
		AUDIO::STOP_AUDIO_SCENE(&cLocal_79);
	}
	if (((func_43("TV_HLP1") || func_43("TV_HLP2")) || func_43("TV_HLP5")) || func_43("TV_HLP6"))
	{
		HUD::CLEAR_HELP(true);
	}
	func_44(&iLocal_59);
	GRAPHICS::SET_TV_CHANNEL(-1);
	SYSTEM::WAIT(0);
	func_3();
	func_53();
}

int func_39(int iParam0)
{
	struct<3> Var0;
	
	Var0 = { func_40(PLAYER::PLAYER_ID()) };
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 6:
			return 1;
			break;
		
		case 4:
			if (Var0.f_2 < 74f)
			{
				return 1;
			}
			break;
		
		case 5:
			if (Var0.f_2 > 75f)
			{
				return 1;
			}
			break;
	}
	return 0;
}

Vector3 func_40(int iParam0)
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), false);
}

void func_41(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_60805[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	if (Global_60805[iParam0 /*7*/])
	{
		STATS::STAT_GET_INT(Global_60805[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		STATS::STAT_SET_INT(Global_60805[iParam0 /*7*/].f_1, iVar0, true);
	}
}

char* func_42(int iParam0)
{
	char* sVar0;
	
	switch (iParam0)
	{
		case 1:
			sVar0 = "PL_STD_CNT";
			break;
		
		case 2:
			sVar0 = "PL_STD_WZL";
			break;
		
		case 3:
			sVar0 = "PL_LO_CNT";
			break;
		
		case 4:
			sVar0 = "PL_LO_WZL";
			break;
		
		case 7:
			sVar0 = "PL_SP_WORKOUT";
			break;
		
		case 8:
			sVar0 = "PL_SP_INV";
			break;
		
		case 9:
			sVar0 = "PL_SP_INV_EXP";
			break;
		
		case 5:
			sVar0 = "PL_LO_RS";
			break;
		
		case 6:
			sVar0 = "PL_LO_RS_CUTSCENE";
			break;
		
		case 10:
			sVar0 = "PL_SP_PLSH1_INTRO";
			break;
		
		case 11:
			sVar0 = "PL_LES1_FAME_OR_SHAME";
			break;
		
		case 12:
			sVar0 = "PL_STD_WZL_FOS_EP2";
			break;
		
		case 13:
			sVar0 = "PL_MP_WEAZEL";
			break;
		
		case 14:
			sVar0 = "PL_MP_CCTV";
			break;
	}
	return sVar0;
}

bool func_43(char* sParam0)
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_44(int iParam0)
{
	int iVar0;
	
	if (*iParam0 == -1)
	{
		return;
	}
	iVar0 = func_28(*iParam0);
	if (iVar0 == -1)
	{
		*iParam0 = -1;
		return;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_45696[iVar0 /*32*/])
		{
			Global_45696[iVar0 /*32*/].f_7 = 1;
			*iParam0 = -1;
			return;
		}
	}
	*iParam0 = -1;
}

int func_45()
{
	if (func_32(&iLocal_43) < 1f)
	{
		func_44(&iLocal_59);
		return 0;
	}
	if ((!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_105, 1f, 1f, 1.5f, false, true, 0) || !PED::IS_PED_HEADING_TOWARDS_POSITION(PLAYER::PLAYER_PED_ID(), Local_48, 90f)) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
	{
		func_44(&iLocal_59);
		return 0;
	}
	if (INTERIOR::GET_INTERIOR_FROM_ENTITY(iLocal_54) != INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()))
	{
		func_44(&iLocal_59);
		return 0;
	}
	if (func_31(8, -1))
	{
		func_44(&iLocal_59);
		return 0;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		func_44(&iLocal_59);
		return 0;
	}
	if (Global_99389)
	{
		func_44(&iLocal_59);
		return 0;
	}
	if (Global_33876[iLocal_60 /*11*/].f_8)
	{
		func_44(&iLocal_59);
		return 0;
	}
	if (iLocal_59 == -1)
	{
		func_29(&iLocal_59, 3, "TV_HLP1", 0, 0, 0, 0);
		return 0;
	}
	if (func_27(iLocal_59, 1))
	{
		func_44(&iLocal_59);
		func_56(&iLocal_43);
		Global_33876[iLocal_60 /*11*/].f_7 = 1;
		if (AUDIO::REQUEST_AMBIENT_AUDIO_BANK("SAFEHOUSE_MICHAEL_SIT_SOFA", false, -1))
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "MICHAEL_SOFA_TV_ON_MASTER", 0, true);
		}
		func_46(309, 0, 0);
		return 1;
	}
	return 0;
}

void func_46(int iParam0, int iParam1, int iParam2)
{
	bool bVar0;
	
	if (iParam0 < 0)
	{
	}
	if (iParam0 == 321 || iParam0 > 321)
	{
	}
	else
	{
		func_52((891 + iParam0), 1, -1);
	}
	bVar0 = true;
	if (Global_114963.f_10203[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_114963.f_10203[iParam0 /*12*/].f_6 == 11 || Global_114963.f_10203[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_114963.f_10203[iParam0 /*12*/].f_5 = 1;
		Global_114963.f_10203[iParam0 /*12*/].f_10 = iParam1;
		Global_114963.f_10203[iParam0 /*12*/].f_11 = iParam2;
		if (iParam0 == 287)
		{
			STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("num_hidden_packages_3"), 50, 0);
		}
	}
	if (bVar0)
	{
		func_47();
	}
}

void func_47()
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	int iVar9;
	
	iVar0 = 0;
	Global_114699 = 0;
	Global_114700 = 0;
	Global_114701 = 0;
	Global_114702 = 0;
	Global_114703 = 0;
	Global_114704 = 0;
	Global_114705 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_114963.f_10203.f_3853;
	Global_114963.f_10203.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_114963.f_10203[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_114963.f_10203[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_114699++;
					fVar1 = (fVar1 + Global_114963.f_10203[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_114700++;
					fVar2 = (fVar2 + Global_114963.f_10203[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_114701++;
					fVar3 = (fVar3 + Global_114963.f_10203[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_114702++;
					fVar4 = (fVar4 + Global_114963.f_10203[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_114703++;
					fVar5 = (fVar5 + (Global_114963.f_10203[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_114704++;
					fVar6 = (fVar6 + Global_114963.f_10203[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_114705++;
					fVar7 = (fVar7 + Global_114963.f_10203[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_114682 > 0)
	{
		if (Global_114699 == Global_114682)
		{
			fVar1 = 55f;
		}
	}
	if (Global_114683 > 0)
	{
		if (Global_114700 == Global_114683)
		{
			fVar2 = 10f;
		}
	}
	if (Global_114684 > 0)
	{
		if (Global_114701 == Global_114684)
		{
			fVar3 = 0f;
		}
	}
	if (Global_114685 > 0)
	{
		if (Global_114702 == Global_114685)
		{
			fVar4 = 10f;
		}
	}
	if (Global_114686 > 0)
	{
		if (((Global_114703 == Global_114686 || (Global_114686 * 10 / Global_114703) < 41) || Global_114703 > Global_114689) || Global_114703 == Global_114689)
		{
			if (!BitTest(Global_114963.f_10203.f_3856, 14))
			{
				if (Global_114703 == Global_114686)
				{
					STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("num_rndevents_completed"), Global_114686, 0);
					MISC::SET_BIT(&(Global_114963.f_10203.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_114687 > 0)
	{
		if (Global_114704 == Global_114687)
		{
			fVar6 = 15f;
		}
	}
	if (Global_114688 > 0)
	{
		if (Global_114705 == Global_114688)
		{
			fVar7 = 5f;
		}
	}
	Global_114963.f_10203.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_114703 > Global_114689 || Global_114703 == Global_114689)
	{
		iVar9 = Global_114689;
	}
	else
	{
		iVar9 = Global_114703;
	}
	STATS::STAT_SET_INT(joaat("num_missions_completed"), Global_114699, true);
	STATS::STAT_SET_INT(joaat("num_missions_available"), Global_114682, true);
	STATS::STAT_SET_INT(joaat("num_minigames_completed"), Global_114700, true);
	STATS::STAT_SET_INT(joaat("num_minigames_available"), Global_114683, true);
	STATS::STAT_SET_INT(joaat("num_oddjobs_completed"), Global_114701, true);
	STATS::STAT_SET_INT(joaat("num_oddjobs_available"), Global_114684, true);
	STATS::STAT_SET_INT(joaat("num_rndpeople_completed"), Global_114702, true);
	STATS::STAT_SET_INT(joaat("num_rndpeople_available"), Global_114685, true);
	STATS::STAT_SET_INT(joaat("num_rndevents_completed"), iVar9, true);
	STATS::STAT_SET_INT(joaat("num_rndevents_available"), Global_114689, true);
	STATS::STAT_SET_INT(joaat("num_misc_completed"), (Global_114705 + Global_114704), true);
	STATS::STAT_SET_INT(joaat("num_misc_available"), (Global_114688 + Global_114687), true);
	Global_114706 = (Global_114699 * 100 / Global_114682);
	Global_114708 = ((Global_114701 + Global_114700) * 100 / (Global_114684 + Global_114683));
	Global_114707 = ((Global_114702 + iVar9) * 100 / (Global_114685 + Global_114689));
	Global_114709 = ((Global_114704 + Global_114705) * 100 / (Global_114687 + Global_114688));
	STATS::STAT_SET_FLOAT(joaat("total_progress_made"), Global_114963.f_10203.f_3853, true);
	STATS::STAT_SET_INT(joaat("percent_story_missions"), Global_114706, true);
	STATS::STAT_SET_INT(joaat("percent_ambient_missions"), Global_114707, true);
	STATS::STAT_SET_INT(joaat("percent_oddjobs"), Global_114708, true);
	if (fVar8 > 0f && SYSTEM::FLOOR(fVar8) < SYSTEM::FLOOR(Global_114963.f_10203.f_3853))
	{
		func_51(13, SYSTEM::FLOOR(Global_114963.f_10203.f_3853));
	}
	if (!DATAFILE::DATAFILE_IS_SAVE_PENDING())
	{
		if (!Global_80337)
		{
			if (func_50() == 2 == 0 && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (NETWORK::NETWORK_IS_CLOUD_AVAILABLE())
				{
					Global_114697 = 0;
				}
				if (!Global_65063)
				{
					func_48();
				}
			}
		}
	}
}

int func_48()
{
	if (func_49(0))
	{
		return 0;
	}
	if (Global_102525.f_8)
	{
		if (Global_102525.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_102525.f_10 > 1)
	{
		return 0;
	}
	Global_102525.f_10++;
	return 1;
}

int func_49(bool bParam0)
{
	if (!bParam0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return BitTest(Global_80586, 0);
}

int func_50()
{
	return Global_33815;
}

int func_51(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return 0;
	}
	if (iParam0 > 78)
	{
		return 0;
	}
	if (iParam1 <= 0 || iParam1 > 100)
	{
		return 0;
	}
	iVar0 = PLAYER::GET_ACHIEVEMENT_PROGRESS(iParam0);
	if (iParam1 > iVar0)
	{
		return PLAYER::SET_ACHIEVEMENT_PROGRESS(iParam0, iParam1);
	}
	return 0;
}

void func_52(int iParam0, bool bParam1, int iParam2)
{
	if (iParam2 == -1)
	{
		iParam2 = func_9();
	}
	STATS::SET_PACKED_STAT_BOOL_CODE(iParam0, bParam1, iParam2);
}

void func_53()
{
	SYSTEM::WAIT(0);
	if (HUD::IS_NAMED_RENDERTARGET_REGISTERED("tvscreen"))
	{
		HUD::RELEASE_NAMED_RENDERTARGET("tvscreen");
		iLocal_52 = -1;
		HUD::SET_TEXT_RENDER_ID(HUD::GET_DEFAULT_SCRIPT_RENDERTARGET_RENDER_ID());
	}
}

void func_54()
{
	int iVar0;
	
	if (iLocal_60 == 4)
	{
		func_55();
	}
	if (HUD::IS_NAMED_RENDERTARGET_REGISTERED("tvscreen"))
	{
		HUD::RELEASE_NAMED_RENDERTARGET("tvscreen");
	}
	SYSTEM::WAIT(0);
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_54))
	{
		func_69();
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iLocal_54);
	HUD::REGISTER_NAMED_RENDERTARGET("tvscreen", false);
	HUD::LINK_NAMED_RENDERTARGET(iVar0);
	SYSTEM::WAIT(0);
	if (iLocal_60 != 4)
	{
		while (!HUD::IS_NAMED_RENDERTARGET_LINKED(iVar0))
		{
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_54))
			{
				func_69();
			}
			if (!BRAIN::IS_OBJECT_WITHIN_BRAIN_ACTIVATION_RANGE(iLocal_54))
			{
				func_69();
			}
			if (!HUD::IS_NAMED_RENDERTARGET_REGISTERED("tvscreen"))
			{
				HUD::REGISTER_NAMED_RENDERTARGET("tvscreen", false);
			}
			if (!HUD::IS_NAMED_RENDERTARGET_LINKED(iVar0))
			{
				HUD::LINK_NAMED_RENDERTARGET(iVar0);
			}
			SYSTEM::WAIT(0);
		}
	}
	iLocal_52 = HUD::GET_NAMED_RENDERTARGET_RENDER_ID("tvscreen");
	func_3();
}

void func_55()
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_54))
	{
		if (ENTITY::GET_ENTITY_MODEL(iLocal_54) == joaat("v_ilev_mm_screen2"))
		{
			return;
		}
	}
	iLocal_54 = 0;
	iLocal_54 = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("v_ilev_mm_screen2"), Local_48, true, true, false, 0);
	ENTITY::SET_ENTITY_HEADING(iLocal_54, fLocal_51);
	ENTITY::FREEZE_ENTITY_POSITION(iLocal_54, true);
	ENTITY::SET_ENTITY_VISIBLE(iLocal_54, false, false);
	iLocal_56 = 0;
	iLocal_56 = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("v_ilev_mm_screen2_vl"), Local_48, true, true, false, 0);
	ENTITY::SET_ENTITY_HEADING(iLocal_56, fLocal_51);
	ENTITY::FREEZE_ENTITY_POSITION(iLocal_56, true);
	ENTITY::SET_ENTITY_VISIBLE(iLocal_56, false, false);
}

void func_56(int* iParam0)
{
	func_57(iParam0, 0f);
}

void func_57(int* iParam0, float fParam1)
{
	iParam0->f_1 = (func_33(BitTest(*iParam0, 4)) - fParam1);
	MISC::SET_BIT(iParam0, 1);
	MISC::CLEAR_BIT(iParam0, 2);
	iParam0->f_2 = 0f;
}

void func_58()
{
}

int func_59(int iParam0)
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_114963.f_9094.f_330[iParam0 /*6*/];
}

void func_60()
{
	Local_48 = { ENTITY::GET_ENTITY_COORDS(iLocal_54, true) };
	fLocal_51 = ENTITY::GET_ENTITY_HEADING(iLocal_54);
	func_62();
	if (ENTITY::GET_ENTITY_MODEL(iLocal_54) == joaat("prop_tv_03"))
	{
		if (SYSTEM::VDIST(Local_48, -9.541955f, -1440.917f, 31.34692f) < 3f)
		{
			iLocal_60 = 0;
			Local_96 = { -9.8135f, -1440.913f, 31.3654f };
			Local_99 = { 0f, 0f, -134.3211f };
			Local_105 = { -9.3078f, -1440.931f, 30.1015f };
			StringCopy(&cLocal_63, "SE_FRANKLIN_AUNT_HOUSE_RADIO_01", 64);
			StringCopy(&cLocal_79, "TV_FRANKLINS_HOUSE_SOCEN", 64);
		}
	}
	else if (ENTITY::GET_ENTITY_MODEL(iLocal_54) == joaat("prop_trev_tv_01"))
	{
		if (SYSTEM::VDIST(Local_48, 1978.425f, 3819.657f, 34.26763f) < 3f)
		{
			iLocal_60 = 2;
			Local_96 = { 1978.23f, 3819.65f, 34.2724f };
			Local_99 = { 0f, 0f, -105.15f };
			Local_105 = { 1978.33f, 3819.717f, 32.4501f };
			func_61();
			StringCopy(&cLocal_63, "SE_TREVOR_TRAILER_RADIO_01", 64);
			StringCopy(&cLocal_79, "TV_TREVORS_TRAILER", 64);
		}
	}
	else if (ENTITY::GET_ENTITY_MODEL(iLocal_54) == joaat("prop_tv_flat_01"))
	{
		if (SYSTEM::VDIST(Local_48, 3.6654f, 529.8486f, 173.6281f) < 3f)
		{
			iLocal_60 = 1;
			Local_96 = { 2.5724f, 527.9989f, 176.1619f };
			Local_99 = { 0f, 0f, -29.9488f };
			Local_105 = { 3.6654f, 529.8486f, 173.6281f };
			StringCopy(&cLocal_63, "SE_FRANKLIN_HILLS_HOUSE_RADIO_01", 64);
			StringCopy(&cLocal_79, "TV_FRANKLINS_HOUSE_VINEWOOD", 64);
		}
	}
	else if (ENTITY::GET_ENTITY_MODEL(iLocal_54) == joaat("prop_tv_flat_02"))
	{
		if (SYSTEM::VDIST(Local_48, -1160.695f, -1520.745f, 10.49168f) < 3f)
		{
			iLocal_60 = 3;
			Local_96 = { -1160.502f, -1520.76f, 10.7393f };
			Local_99 = { 0f, 0f, 60.061f };
			Local_105 = { -1160.143f, -1520.495f, 9.6555f };
			StringCopy(&cLocal_63, "TREVOR_APARTMENT_RADIO", 64);
			StringCopy(&cLocal_79, "TV_FLOYDS_APARTMENT", 64);
		}
	}
	else if (ENTITY::GET_ENTITY_MODEL(iLocal_54) == joaat("v_ilev_mm_screen2") || ENTITY::GET_ENTITY_MODEL(iLocal_54) == joaat("v_ilev_mm_scre_off"))
	{
		if (SYSTEM::VDIST(Local_48, -802.2527f, 173.0374f, 74.35708f) < 3f)
		{
			iLocal_60 = 4;
			Local_96 = { -802.8972f, 172.537f, 74.5801f };
			Local_99 = { 0f, 0f, -69.0273f };
			Local_105 = { -800.7292f, 173.2194f, 71.8348f };
			StringCopy(&cLocal_63, "SE_MICHAELS_HOUSE_RADIO", 64);
			StringCopy(&cLocal_79, "TV_MICHAELS_HOUSE", 64);
		}
	}
	else if (ENTITY::GET_ENTITY_MODEL(iLocal_54) == joaat("des_tvsmash_start"))
	{
		if (SYSTEM::VDIST(Local_48, -809.962f, 170.919f, 75.7407f) < 3f)
		{
			iLocal_60 = 5;
			Local_96 = { -808.3051f, 171.2623f, 77.2822f };
			Local_99 = { 1.8886f, 0f, 110.9232f };
			Local_105 = { -809.962f, 170.919f, 75.7407f };
			StringCopy(&cLocal_63, "SE_MICHAELS_HOUSE_RADIO", 64);
			StringCopy(&cLocal_79, "TV_MICHAELS_HOUSE", 64);
		}
	}
}

void func_61()
{
	iLocal_55 = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("prop_tt_screenstatic"), Local_48, true, true, false, 0);
	ENTITY::SET_ENTITY_HEADING(iLocal_55, fLocal_51);
	ENTITY::SET_ENTITY_VISIBLE(iLocal_55, true, false);
	ENTITY::FREEZE_ENTITY_POSITION(iLocal_55, true);
}

void func_62()
{
	GRAPHICS::SET_TV_CHANNEL_PLAYLIST(0, func_42(1), false);
	if (func_59(22))
	{
		GRAPHICS::SET_TV_CHANNEL_PLAYLIST(1, func_42(12), false);
	}
	else
	{
		GRAPHICS::SET_TV_CHANNEL_PLAYLIST(1, func_42(2), false);
	}
}

void func_63()
{
	if (iLocal_60 == -1)
	{
		return;
	}
	if (Global_33876[iLocal_60 /*11*/].f_10 == 0)
	{
		if (iLocal_103 == 1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_57))
			{
				ENTITY::SET_ENTITY_INVINCIBLE(iLocal_57, false, 0);
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_54))
			{
				ENTITY::SET_ENTITY_INVINCIBLE(iLocal_54, false, 0);
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_56))
			{
				ENTITY::SET_ENTITY_INVINCIBLE(iLocal_56, false, 0);
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_55))
			{
				ENTITY::SET_ENTITY_INVINCIBLE(iLocal_55, false, 0);
			}
			iLocal_103 = 0;
		}
	}
	else if (iLocal_103 == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_57))
		{
			ENTITY::SET_ENTITY_INVINCIBLE(iLocal_57, true, 0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_54))
		{
			ENTITY::SET_ENTITY_INVINCIBLE(iLocal_54, true, 0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_56))
		{
			ENTITY::SET_ENTITY_INVINCIBLE(iLocal_56, true, 0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_55))
		{
			ENTITY::SET_ENTITY_INVINCIBLE(iLocal_55, true, 0);
		}
		iLocal_103 = 1;
	}
}

bool func_64(int iParam0)
{
	return Global_44921 == iParam0;
}

int func_65(int iParam0)
{
	if (iParam0 != -1)
	{
		if (Global_33876[iParam0 /*11*/].f_5)
		{
			return 1;
		}
	}
	return 0;
}

int func_66()
{
	if (MISC::IS_PC_VERSION())
	{
		if (MISC::GET_CITY_DENSITY() == 1f)
		{
			return 1;
		}
	}
	return 0;
}

int func_67()
{
	if (Global_99383 != -1)
	{
		return BitTest(Global_93249[Global_99383 /*34*/].f_15, 20);
	}
	return 0;
}

void func_68()
{
}

void func_69()
{
	if (iLocal_60 == -1)
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	func_44(&iLocal_59);
	if (iLocal_60 != -1)
	{
		func_1();
		Global_33876[iLocal_60 /*11*/].f_6 = 0;
		Global_33876[iLocal_60 /*11*/].f_7 = 0;
		Global_33876[iLocal_60 /*11*/].f_8 = 0;
		Global_33876[iLocal_60 /*11*/].f_4 = 0;
		Global_33876[iLocal_60 /*11*/].f_5 = 0;
		Global_33876[iLocal_60 /*11*/].f_2 = 0;
		Global_33876[iLocal_60 /*11*/] = -1;
		Global_33876[iLocal_60 /*11*/].f_1 = 0;
		Global_33876[iLocal_60 /*11*/].f_10 = 0;
	}
	if ((func_43("TV_HLP1") || func_43("TV_HLP5")) || func_43("TV_HLP6"))
	{
		HUD::CLEAR_HELP(true);
	}
	SYSTEM::WAIT(0);
	func_70();
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE(&cLocal_79))
	{
		AUDIO::STOP_AUDIO_SCENE(&cLocal_79);
	}
	AUDIO::UNHINT_AMBIENT_AUDIO_BANK();
	func_2();
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_70()
{
	func_53();
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_54))
	{
		if (ENTITY::GET_ENTITY_MODEL(iLocal_54) == joaat("v_ilev_mm_screen2"))
		{
			OBJECT::DELETE_OBJECT(&iLocal_54);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("v_ilev_mm_screen2"));
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_56))
	{
		OBJECT::DELETE_OBJECT(&iLocal_56);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("v_ilev_mm_screen2_vl"));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_55))
	{
		OBJECT::DELETE_OBJECT(&iLocal_55);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_tt_screenstatic"));
	}
}

