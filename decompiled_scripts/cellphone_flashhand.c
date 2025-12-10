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
	int iLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	char* sLocal_19 = NULL;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	float fLocal_22 = 0f;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	float fLocal_27 = 0f;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	int iLocal_35 = 0;
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
	float fLocal_62 = 0f;
	var uLocal_63 = 0;
	float fLocal_64 = 0f;
	float fLocal_65 = 0f;
	float fLocal_66 = 0f;
	float fLocal_67 = 0f;
	float fLocal_68 = 0f;
	float fLocal_69 = 0f;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	int iLocal_74 = 0;
	struct<2> Local_75 = { 0, 0 } ;
	var uLocal_77 = 0;
	int iLocal_78 = 0;
	int iLocal_79 = 0;
	int iLocal_80 = 0;
	struct<3> Local_81 = { 0, 0, 0 } ;
	int iLocal_84 = 0;
	int iLocal_85 = 0;
	int iLocal_86 = 0;
	int iLocal_87 = 0;
	int iLocal_88 = 0;
	int iLocal_89 = 0;
	int iLocal_90 = 0;
	int iLocal_91 = 0;
	struct<2> Local_92 = { 0, 0 } ;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	int iLocal_96 = 0;
	int iLocal_97 = 0;
	int iLocal_98 = 0;
	int iLocal_99 = 0;
	int iLocal_100 = 0;
	int iLocal_101 = 0;
	int iLocal_102 = 0;
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	int iLocal_105 = 0;
	int iLocal_106 = 0;
	int iLocal_107 = 0;
	int iLocal_108 = 0;
	var uLocal_109 = 0;
	bool bLocal_110 = 0;
	int iLocal_111 = 0;
	int iLocal_112 = 0;
	int iLocal_113 = 0;
	int iLocal_114 = 0;
	int iLocal_115 = 0;
	int iLocal_116 = 0;
	struct<3> Local_117 = { 0, 0, 0 } ;
	int iLocal_120 = 0;
	int iLocal_121 = 0;
	int iLocal_122 = 0;
#endregion

void __EntryFunction__()
{
	var uVar0;
	struct<13> Var16;
	int iVar29;
	float fVar30;
	float fVar31;
	int iVar32;
	int iVar33;
	bool bVar34;
	int iVar35;
	
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
	sLocal_19 = "NULL";
	fLocal_22 = 80f;
	fLocal_23 = 140f;
	fLocal_24 = 180f;
	fLocal_27 = 0f;
	fLocal_31 = -0.0375f;
	fLocal_32 = 0.17f;
	iLocal_35 = 3;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	fLocal_62 = ((0.05f + 0.275f) - 0.01f);
	fLocal_64 = 0.73f;
	fLocal_65 = 0.55f;
	fLocal_66 = 0.73f;
	fLocal_67 = 0.45f;
	fLocal_68 = 0f;
	fLocal_69 = 0f;
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	Global_21839 = 145;
	MISC::CLEAR_BIT(&Global_9464, 8);
	MISC::CLEAR_BIT(&Global_9463, 14);
	MISC::CLEAR_BIT(&Global_4524844, 3);
	MISC::CLEAR_BIT(&Global_9464, 10);
	MISC::CLEAR_BIT(&Global_9463, 17);
	MISC::CLEAR_BIT(&Global_9463, 9);
	MISC::CLEAR_BIT(&Global_9463, 26);
	MISC::CLEAR_BIT(&Global_9463, 23);
	MISC::CLEAR_BIT(&Global_9464, 24);
	MISC::CLEAR_BIT(&Global_9464, 25);
	MISC::CLEAR_BIT(&Global_9464, 27);
	MISC::CLEAR_BIT(&Global_9464, 26);
	MISC::CLEAR_BIT(&Global_9463, 30);
	Global_2740211 = 0;
	iLocal_120 = 0;
	GRAPHICS::DRAW_LOW_QUALITY_PHOTO_TO_PHONE(false, false);
	MOBILE::SCRIPT_IS_MOVING_MOBILE_PHONE_OFFSCREEN(false);
	Global_21576 = 0;
	iLocal_72 = 0;
	Global_21554 = 0;
	Global_21594 = 0;
	Global_21595 = 0;
	func_161();
	Global_21541 = { Global_21573 };
	Global_21614 = 4;
	Global_21615 = 0;
	Global_10085 = 1;
	Global_21590 = Global_21614;
	if (Global_21592 == 0)
	{
		Global_21593 = 0;
		if (Global_80280)
		{
			if (func_160())
			{
				Global_21591 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("cellphone_badger");
			}
			else
			{
				Global_21591 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("cellphone_ifruit");
			}
			iLocal_86 = 1;
			if (iLocal_86 == 1)
			{
			}
		}
		else if (Global_21553)
		{
			Global_21598 = 1;
			Global_21591 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("cellphone_prologue");
		}
		else
		{
			Global_21591 = GRAPHICS::REQUEST_SCALEFORM_MOVIE(&(Global_114904.f_14058[Global_21610 /*20*/]));
		}
		SYSTEM::SETTIMERA(0);
		while (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_21591) && Global_21593 == 0)
		{
			SYSTEM::WAIT(0);
			if (SYSTEM::TIMERA() > 20000)
			{
				Global_21593 = 1;
			}
			if (MISC::IS_PC_VERSION())
			{
				if (DECORATOR::DECOR_EXIST_ON(PLAYER::PLAYER_PED_ID(), "Synched"))
				{
					if (SYSTEM::TIMERA() > 2000)
					{
						Global_21593 = 1;
					}
				}
			}
			if (Global_21609 == 1)
			{
				func_159();
			}
		}
		if (Global_21593 == 1)
		{
			if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_21591))
			{
				func_158(Global_21591, "SHUTDOWN_MOVIE");
			}
			SYSTEM::WAIT(0);
			GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&Global_21591);
			Global_21551 = 0;
			Global_21592 = 0;
			Global_21840 = 0;
			if (Global_114904.f_14058.f_84 == 1)
			{
				Global_114904.f_14058.f_84 = 0;
				HUD::CLEAR_FLOATING_HELP(0, true);
			}
			Global_21554 = 1;
			Global_21610.f_1 = 3;
			func_157();
			Global_21598 = 0;
			MOBILE::DESTROY_MOBILE_PHONE();
			MISC::CLEAR_BIT(&Global_9463, 9);
			MISC::CLEAR_BIT(&Global_9463, 27);
			MISC::CLEAR_BIT(&Global_9463, 30);
			MISC::CLEAR_BIT(&Global_9464, 5);
			MISC::CLEAR_BIT(&Global_9464, 21);
			MISC::CLEAR_BIT(&Global_9465, 2);
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				AUDIO::STOP_PED_RINGTONE(PLAYER::PLAYER_PED_ID());
			}
			if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				AUDIO::STOP_PED_RINGTONE(PLAYER::PLAYER_PED_ID());
			}
			Global_21842 = 0;
			Global_24043 = 0;
			Global_24042 = 0;
			Global_22996 = 0;
			func_155();
			func_153();
			Global_4525123 = 0;
			SCRIPT::TERMINATE_THIS_THREAD();
		}
		Global_21534 = 0.1f;
		Global_21535 = 0.38f;
		Global_21536 = 0.195f;
		Global_21537 = 0.05f;
		if ((MISC::IS_XBOX360_VERSION() || func_152()) || MISC::IS_PC_VERSION())
		{
			HUD::GET_HUD_COLOUR(18, &iLocal_106, &iLocal_107, &iLocal_108, &uLocal_109);
			func_151(Global_21591, "SET_SOFT_KEYS_COLOUR", 2f, SYSTEM::TO_FLOAT(iLocal_106), SYSTEM::TO_FLOAT(iLocal_107), SYSTEM::TO_FLOAT(iLocal_108), -1082130432);
			HUD::GET_HUD_COLOUR(9, &iLocal_106, &iLocal_107, &iLocal_108, &uLocal_109);
			func_151(Global_21591, "SET_SOFT_KEYS_COLOUR", 1f, SYSTEM::TO_FLOAT(iLocal_106), SYSTEM::TO_FLOAT(iLocal_107), SYSTEM::TO_FLOAT(iLocal_108), -1082130432);
			HUD::GET_HUD_COLOUR(6, &iLocal_106, &iLocal_107, &iLocal_108, &uLocal_109);
			func_151(Global_21591, "SET_SOFT_KEYS_COLOUR", 3f, SYSTEM::TO_FLOAT(iLocal_106), SYSTEM::TO_FLOAT(iLocal_107), SYSTEM::TO_FLOAT(iLocal_108), -1082130432);
		}
		else
		{
			if (!MISC::IS_JAPANESE_VERSION())
			{
				HUD::GET_HUD_COLOUR(9, &iLocal_106, &iLocal_107, &iLocal_108, &uLocal_109);
				func_151(Global_21591, "SET_SOFT_KEYS_COLOUR", 2f, SYSTEM::TO_FLOAT(iLocal_106), SYSTEM::TO_FLOAT(iLocal_107), SYSTEM::TO_FLOAT(iLocal_108), -1082130432);
				HUD::GET_HUD_COLOUR(126, &iLocal_106, &iLocal_107, &iLocal_108, &uLocal_109);
				func_151(Global_21591, "SET_SOFT_KEYS_COLOUR", 1f, SYSTEM::TO_FLOAT(iLocal_106), SYSTEM::TO_FLOAT(iLocal_107), SYSTEM::TO_FLOAT(iLocal_108), -1082130432);
				HUD::GET_HUD_COLOUR(6, &iLocal_106, &iLocal_107, &iLocal_108, &uLocal_109);
				func_151(Global_21591, "SET_SOFT_KEYS_COLOUR", 3f, SYSTEM::TO_FLOAT(iLocal_106), SYSTEM::TO_FLOAT(iLocal_107), SYSTEM::TO_FLOAT(iLocal_108), -1082130432);
			}
			if (MISC::IS_JAPANESE_VERSION())
			{
				HUD::GET_HUD_COLOUR(6, &iLocal_106, &iLocal_107, &iLocal_108, &uLocal_109);
				func_151(Global_21591, "SET_SOFT_KEYS_COLOUR", 2f, SYSTEM::TO_FLOAT(iLocal_106), SYSTEM::TO_FLOAT(iLocal_107), SYSTEM::TO_FLOAT(iLocal_108), -1082130432);
				HUD::GET_HUD_COLOUR(126, &iLocal_106, &iLocal_107, &iLocal_108, &uLocal_109);
				func_151(Global_21591, "SET_SOFT_KEYS_COLOUR", 1f, SYSTEM::TO_FLOAT(iLocal_106), SYSTEM::TO_FLOAT(iLocal_107), SYSTEM::TO_FLOAT(iLocal_108), -1082130432);
				HUD::GET_HUD_COLOUR(9, &iLocal_106, &iLocal_107, &iLocal_108, &uLocal_109);
				func_151(Global_21591, "SET_SOFT_KEYS_COLOUR", 3f, SYSTEM::TO_FLOAT(iLocal_106), SYSTEM::TO_FLOAT(iLocal_107), SYSTEM::TO_FLOAT(iLocal_108), -1082130432);
			}
		}
		if (Global_21593 == 0)
		{
		}
		func_150();
		if (Global_80280)
		{
			StringCopy(&Global_21599, "Phone_SoundSet_Michael", 24);
		}
		Global_21592 = 1;
	}
	Global_9466 = 99;
	func_149();
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		iLocal_98 = ENTITY::GET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID());
	}
	if (HUD::IS_RADAR_HIDDEN())
	{
		Global_23997 = 1;
	}
	else
	{
		Global_23997 = 0;
	}
	func_151(Global_21591, "SET_SLEEP_MODE", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
	Global_21552 = 1;
	if (Global_80280)
	{
		Global_21844 = 0;
		if (func_160())
		{
			if (Global_1836596 == 1)
			{
				Global_4525120 = 4;
			}
			else
			{
				Global_4525120 = 2;
			}
		}
		else
		{
			Global_4525120 = func_146(2030, -1);
		}
		if (Global_4525120 < 1 || Global_4525120 > 7)
		{
			Global_4525120 = 1;
		}
		func_151(Global_21591, "SET_THEME", SYSTEM::TO_FLOAT(Global_4525120), -1082130432, -1082130432, -1082130432, -1082130432);
		func_145();
		if (func_160())
		{
			if (Global_1836596 == 1)
			{
				Global_4525121 = 16;
			}
			else
			{
				Global_4525121 = 9;
			}
		}
		else
		{
			Global_4525121 = func_146(2029, -1);
		}
		if (Global_4525121 == 0)
		{
			Var16 = { func_144(PLAYER::PLAYER_ID()) };
			iVar29 = 0;
			if (NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(0) == 0)
			{
			}
			if (Global_4525124 == 1)
			{
			}
			if ((NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Var16) && NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(0)) && Global_4525124 == 0)
			{
				if (NETWORK::NETWORK_CLAN_GET_EMBLEM_TXD_NAME(&Var16, &uVar0))
				{
				}
				else
				{
					iVar29 = 1;
				}
				if (iVar29 == 0)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21591, "SET_BACKGROUND_CREW_IMAGE");
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_2000");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&uVar0);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				else
				{
					func_151(Global_21591, "SET_BACKGROUND_IMAGE", SYSTEM::TO_FLOAT(0), -1082130432, -1082130432, -1082130432, -1082130432);
				}
			}
			else
			{
				func_151(Global_21591, "SET_BACKGROUND_IMAGE", SYSTEM::TO_FLOAT(0), -1082130432, -1082130432, -1082130432, -1082130432);
			}
		}
		else
		{
			func_151(Global_21591, "SET_BACKGROUND_IMAGE", SYSTEM::TO_FLOAT(Global_4525121), -1082130432, -1082130432, -1082130432, -1082130432);
		}
	}
	else
	{
		if (Global_21553)
		{
			Global_21844 = 0;
		}
		else if (Global_114904.f_14058.f_88 == 1 || Global_114904.f_14058.f_89 == 1)
		{
			Global_21844 = 0;
		}
		else
		{
			Global_21844 = 0;
		}
		func_151(Global_21591, "SET_THEME", SYSTEM::TO_FLOAT(Global_114904.f_14058[Global_21610 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
		if (Global_10284 == 0)
		{
			func_151(Global_21591, "SET_BACKGROUND_IMAGE", SYSTEM::TO_FLOAT(Global_114904.f_14058[Global_21610 /*20*/].f_9), -1082130432, -1082130432, -1082130432, -1082130432);
		}
		else
		{
			MOBILE::SET_MOBILE_PHONE_SCALE(575f);
		}
		func_145();
	}
	iLocal_87 = func_143();
	if (Global_21553 == 0)
	{
		func_131();
	}
	Global_21588 = 0;
	Global_21843 = 0;
	MISC::CLEAR_BIT(&Global_9463, 9);
	Global_2696959 = 0;
	if (func_125(0) && NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		Global_2696959 = 1;
	}
	func_151(Global_21591, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_123();
	func_122();
	func_121(1);
	AUDIO::PLAY_SOUND_FRONTEND(-1, "Pull_Out", &Global_21599, true);
	SYSTEM::SETTIMERB(0);
	while (Global_21610.f_1 < 6 && Global_21593 == 0)
	{
		SYSTEM::WAIT(0);
		if (SYSTEM::TIMERB() > 10000)
		{
			Global_21593 = 1;
		}
		if (Global_21610.f_1 < 4)
		{
			Global_21593 = 1;
		}
	}
	if (Global_21610.f_1 == 5 || Global_21610.f_1 == 6)
	{
		if (func_120(14))
		{
			func_151(Global_21591, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(6), -1082130432, -1082130432, -1082130432);
		}
		else
		{
			func_151(Global_21591, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_21614), -1082130432, -1082130432, -1082130432);
		}
		if (Global_10285[Global_21610 /*2811*/][0 /*281*/].f_259 == 2)
		{
			func_151(Global_21591, "SET_SLEEP_MODE", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
		}
		else
		{
			func_151(Global_21591, "SET_SLEEP_MODE", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
		}
		if (Global_21598)
		{
			func_119(Global_21591, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
		}
		else
		{
			func_119(Global_21591, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
		}
		if (Global_21598)
		{
			func_119(Global_21591, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
		}
		else
		{
			func_119(Global_21591, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
		}
		if (Global_21844 == 0)
		{
			func_119(Global_21591, "SET_SOFT_KEYS", 1f, 0f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
			MISC::CLEAR_BIT(&Global_9463, 17);
		}
		else if (Global_80280)
		{
			func_119(Global_21591, "SET_SOFT_KEYS", 1f, 0f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
			MISC::CLEAR_BIT(&Global_9463, 17);
		}
		else
		{
			if (Global_21843 == 1)
			{
				if (Global_21598)
				{
					func_119(Global_21591, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
				}
				else
				{
					func_119(Global_21591, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else if (Global_21598)
			{
				func_119(Global_21591, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
			}
			else
			{
				func_119(Global_21591, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			MISC::SET_BIT(&Global_9463, 17);
		}
	}
	Global_21596 = 1;
	func_118();
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iLocal_104 = NETWORK::GET_NETWORK_TIME();
	}
	else
	{
		iLocal_99 = MISC::GET_GAME_TIMER();
	}
	if (Global_21840 == 1)
	{
		if (Global_10285[Global_21610 /*2811*/][0 /*281*/].f_259 == 2)
		{
			if (Global_114904.f_14058.f_84 == 0)
			{
				Global_114904.f_14058.f_84 = 1;
				if (Global_21555 == 0)
				{
					fVar30 = 0.75f;
					fVar31 = 0.8f;
				}
				else
				{
					fVar30 = 0.65f;
					fVar31 = 0.77f;
				}
				if (fVar30 == fVar31)
				{
				}
				func_117("CELL_7052", 10000);
			}
		}
	}
	if (Global_80280 == 0)
	{
		iLocal_16 = MISC::GET_GAME_TIMER() + 375;
	}
	if (func_116())
	{
		iLocal_78 = 1;
	}
	else
	{
		iLocal_78 = 0;
	}
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		if (PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), false))
		{
			iLocal_79 = 1;
			if (func_116())
			{
				func_115();
			}
		}
		else
		{
			iLocal_79 = 0;
		}
	}
	if (MISC::IS_PC_VERSION())
	{
		if (Global_80280 == 0)
		{
			iLocal_101 = MISC::GET_GAME_TIMER();
			iLocal_103 = 0;
		}
	}
	MISC::CLEAR_BIT(&Global_9465, 9);
	while (true)
	{
		SYSTEM::WAIT(0);
		if (BitTest(Global_4524844, 24))
		{
			if (!Global_21843)
			{
				if (Global_21610.f_1 >= 6)
				{
					MISC::CLEAR_BIT(&Global_4524844, 24);
					func_123();
					func_151(Global_21591, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
					func_121(1);
					if (Global_21610.f_1 == 6)
					{
						if (BitTest(Global_9465, 9))
						{
							MISC::CLEAR_BIT(&Global_9465, 9);
							Global_21590 = 4;
							Global_21614 = Global_21590;
						}
						func_151(Global_21591, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_21590), -1082130432, -1082130432, -1082130432);
					}
				}
			}
		}
		if (Global_80280)
		{
			if (Global_21610.f_1 == 6)
			{
				if (func_114())
				{
					func_113();
				}
			}
			else if (Global_21610.f_1 == 7)
			{
				func_108(10, 23, 5, 0, 26419);
			}
		}
		if (func_107())
		{
			PAD::DISABLE_CONTROL_ACTION(0, 114, true);
		}
		if (Global_80280 == 0)
		{
			if (iLocal_74)
			{
				if (Global_21610.f_1 == 6 || Global_21610.f_1 == 7)
				{
					iLocal_74 = 0;
				}
			}
			if (Global_21610.f_1 > 4)
			{
				if ((BitTest(Global_9463, 14) && Global_4525123 == 0) && Global_21550 == 0)
				{
					if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
					{
						if (func_106())
						{
							MOBILE::GET_MOBILE_PHONE_POSITION(&Local_75);
							if (Global_21556[Global_21555 /*3*/].f_1 != Local_75.f_1)
							{
								func_104();
							}
						}
						else
						{
							MOBILE::GET_MOBILE_PHONE_POSITION(&Local_75);
							if (Global_21563[Global_21555 /*3*/].f_1 != Local_75.f_1)
							{
								if (!func_107())
								{
								}
								if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("appemail")) < 1)
								{
									func_102();
								}
							}
						}
						if (iLocal_79 == 0)
						{
							if (PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), false))
							{
								iLocal_79 = 1;
								func_102();
								func_115();
							}
						}
						else if (!PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), false))
						{
							iLocal_79 = 0;
							func_104();
							if (Global_21610.f_1 == 10 || Global_21610.f_1 == 9)
							{
								if (Global_22983 != 2)
								{
									func_101();
								}
							}
						}
						if (iLocal_78 == 0)
						{
							if (func_116())
							{
								iLocal_78 = 1;
								if (PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), false))
								{
									func_115();
								}
								func_104();
							}
						}
						else
						{
							if (PED::GET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID()))
							{
								if (Global_21610.f_1 == 10 || Global_21610.f_1 == 9)
								{
									PAD::DISABLE_CONTROL_ACTION(0, 26, true);
								}
							}
							if (func_116() == 0)
							{
								iLocal_78 = 0;
								func_102();
							}
						}
					}
				}
			}
		}
		if (Global_2696959 == 1)
		{
			if (!func_125(0) || !NETWORK::NETWORK_IS_SIGNED_ONLINE())
			{
				if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("appcamera")) == 0)
				{
					if (Global_21610.f_1 > 3)
					{
						Global_21595 = 1;
						func_100();
						func_97(0);
						Global_2696959 = 0;
					}
				}
			}
		}
		if (Global_21845 == 0)
		{
			if ((Global_44869 != 15 || Global_9468 == 1) || func_96(0))
			{
				if (!Global_21843)
				{
					if (Global_21610.f_1 == 6)
					{
						Global_9469 = 42;
						func_151(Global_21591, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_123();
						func_122();
						func_121(1);
						func_151(Global_21591, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_21590), -1082130432, -1082130432, -1082130432);
					}
				}
				Global_21845 = 1;
			}
		}
		else if ((Global_44869 == 15 && func_96(0) == 0) && Global_9468 == 0)
		{
			if (!Global_21843)
			{
				if (Global_21610.f_1 == 6)
				{
					Global_9469 = 255;
					func_151(Global_21591, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
					func_123();
					func_122();
					func_121(1);
					func_151(Global_21591, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_21590), -1082130432, -1082130432, -1082130432);
				}
			}
			Global_21845 = 0;
		}
		if (Global_21846 == 0)
		{
			if (BitTest(Global_9464, 3))
			{
				if (!Global_21843 && !BitTest(Global_9465, 9))
				{
					if (Global_21610.f_1 == 6)
					{
						func_151(Global_21591, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_123();
						func_122();
						func_121(1);
						func_151(Global_21591, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_21590), -1082130432, -1082130432, -1082130432);
					}
				}
				Global_21846 = 1;
			}
		}
		else if (!BitTest(Global_9464, 3))
		{
			if (!Global_21843 && !BitTest(Global_9465, 9))
			{
				if (Global_21610.f_1 == 6)
				{
					func_151(Global_21591, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
					func_123();
					func_122();
					func_121(1);
					func_151(Global_21591, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_21590), -1082130432, -1082130432, -1082130432);
				}
			}
			Global_21846 = 0;
		}
		if (!HUD::IS_PAUSE_MENU_ACTIVE())
		{
			if (Global_21538.f_1 != Global_21556[Global_21555 /*3*/].f_1 || func_116())
			{
				if (Global_21610.f_1 > 3)
				{
					if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("apptrackify")) == 0)
					{
						if (Global_80280)
						{
							if (Global_21610.f_1 == 9)
							{
								if (Global_23036 == 1 || BitTest(Global_9464, 23))
								{
									PAD::SET_INPUT_EXCLUSIVE(0, Global_21579);
								}
							}
							else
							{
								PAD::SET_INPUT_EXCLUSIVE(0, Global_21579);
							}
						}
						else
						{
							PAD::SET_INPUT_EXCLUSIVE(0, Global_21579);
						}
					}
					if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("appsecurohack")) == 0)
					{
						PAD::SET_INPUT_EXCLUSIVE(0, Global_21580);
						if (BitTest(Global_9463, 17))
						{
							PAD::SET_INPUT_EXCLUSIVE(0, Global_21581);
						}
					}
					if (!func_95() && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("appsecurohack")) == 0)
					{
						PAD::SET_INPUT_EXCLUSIVE(0, Global_21582);
					}
				}
			}
			if (Global_21538.f_1 == Global_21556[Global_21555 /*3*/].f_1)
			{
			}
		}
		if (!PAD::IS_USING_KEYBOARD_AND_MOUSE(2))
		{
			PAD::DISABLE_CONTROL_ACTION(0, 140, true);
			PAD::DISABLE_CONTROL_ACTION(0, 141, true);
		}
		if (!HUD::IS_PAUSE_MENU_ACTIVE())
		{
			if (!Global_77342)
			{
				if (!func_107())
				{
					PAD::SET_INPUT_EXCLUSIVE(0, 180);
					PAD::SET_INPUT_EXCLUSIVE(0, 181);
					PAD::ENABLE_CONTROL_ACTION(0, 180, true);
					PAD::ENABLE_CONTROL_ACTION(0, 181, true);
				}
				PAD::SET_INPUT_EXCLUSIVE(0, Global_21584);
				if (!func_95())
				{
					PAD::SET_INPUT_EXCLUSIVE(0, Global_21585);
				}
				if (Global_21610.f_1 > 4)
				{
					PAD::SET_INPUT_EXCLUSIVE(0, Global_21587);
				}
			}
		}
		if (func_94(2, Global_21578, 0))
		{
			iLocal_96 = 1;
			SYSTEM::SETTIMERA(0);
		}
		if (iLocal_73 == 1)
		{
			if (!PAD::IS_CONTROL_PRESSED(2, Global_21579))
			{
				Global_9467 = 1;
				iLocal_73 = 0;
			}
			if (!Global_21610.f_1 > 3)
			{
				iLocal_73 = 0;
			}
		}
		if (iLocal_96)
		{
			if (PAD::IS_CONTROL_PRESSED(2, Global_21578))
			{
				if (SYSTEM::TIMERA() > 5000)
				{
					Global_21610.f_1 = 3;
					func_92();
				}
			}
			else
			{
				iLocal_96 = 0;
			}
		}
		Global_10088 = MISC::GET_GAME_TIMER();
		if (Global_21597)
		{
			func_118();
			Global_21596 = 1;
			Global_21597 = 0;
		}
		if (Global_21842 == 0)
		{
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(6);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
			func_85();
			func_84();
			HUD::SET_TEXT_RENDER_ID(iLocal_84);
			if (Global_21596 == 1)
			{
				GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(4);
				if (Global_21553)
				{
					GRAPHICS::DRAW_SCALEFORM_MOVIE(Global_21591, Global_21530, Global_21531, Global_21532, Global_21533, 255, 255, 255, 255, 0);
				}
				else
				{
					GRAPHICS::DRAW_SCALEFORM_MOVIE(Global_21591, Global_21530, Global_21531, Global_21532, Global_21533, 255, 255, 255, 255, 0);
				}
				func_149();
			}
			if (Global_21550 == 1)
			{
				if (Global_21610.f_1 > 3)
				{
					func_83();
				}
			}
			else if (Global_21610.f_1 > 3)
			{
				if (Global_4525123 == 1)
				{
					func_82();
				}
				if (BitTest(Global_9464, 25))
				{
					if (Global_80280 == 1)
					{
						func_81();
					}
				}
				else if (!BitTest(Global_9464, 24))
				{
					if (BitTest(Global_9464, 26))
					{
						if (func_94(2, Global_21577, 0))
						{
							MISC::SET_BIT(&Global_9464, 25);
							MISC::CLEAR_BIT(&Global_9464, 26);
							MISC::CLEAR_BIT(&Global_9465, 2);
						}
					}
				}
				else if (Global_80280 == 1)
				{
					func_80();
				}
			}
		}
		if (iLocal_72)
		{
			if (Global_21610.f_1 == 6)
			{
				func_51();
			}
		}
		else if (!BitTest(Global_9463, 23) && !Global_79048)
		{
			if (Global_21610.f_1 == 5 || Global_21610.f_1 == 6)
			{
				if (Global_21842 == 0)
				{
					if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("appcamera")) < 1 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("appemail")) < 1)
					{
						if (Global_21553 == 0)
						{
							if (BitTest(Global_9463, 14))
							{
								if (!Global_80280)
								{
									if (iLocal_73 == 0)
									{
										if (!func_120(14))
										{
											func_50();
										}
										else if (Global_2696959)
										{
											func_49();
										}
									}
								}
								else if (BitTest(Global_9465, 9))
								{
									func_47();
								}
								else
								{
									func_24();
								}
							}
						}
						if (BitTest(Global_9463, 9))
						{
							func_22(0, 0, 1, 1);
						}
						else if (Global_24042 == 0)
						{
							if (!BitTest(Global_4524844, 3))
							{
								if (Global_80280)
								{
									func_21();
								}
								func_20();
								func_18();
							}
						}
						else
						{
							if (Global_80280)
							{
								func_21();
							}
							if (!BitTest(Global_4524844, 3))
							{
								if (Global_24042 == 1)
								{
									if (BitTest(Global_4524844, 1))
									{
										if (BitTest(Global_9463, 14))
										{
											if (Global_80280)
											{
												func_22(7, 0, 1, 0);
											}
											else
											{
												Global_24043 = 0;
											}
											Global_24042 = 0;
											MISC::CLEAR_BIT(&Global_4524844, 1);
										}
									}
									else if (BitTest(Global_9463, 14))
									{
										func_22(7, 0, 1, 0);
										Global_24042 = 0;
									}
								}
								else
								{
									if (Global_24042 == 3)
									{
										func_22(1, 0, 1, 0);
										Global_24042 = 0;
									}
									if (Global_24042 == 2)
									{
										func_22(14, 0, 1, 0);
										Global_24042 = 0;
									}
									if (Global_24042 == 4)
									{
										func_22(24, 0, 1, 0);
										Global_24042 = 0;
									}
								}
							}
						}
					}
				}
			}
		}
		else if (SCRIPT::HAS_SCRIPT_LOADED(&(Global_9470[Global_21613 /*15*/].f_5)))
		{
			if (Global_21613 == 0)
			{
				if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_9470[Global_21613 /*15*/].f_9) == 0)
				{
					Global_21608 = SYSTEM::START_NEW_SCRIPT(&(Global_9470[Global_21613 /*15*/].f_5), 4000);
				}
			}
			else
			{
				iVar32 = 0;
				if (Global_21613 == 24)
				{
					if (BitTest(Global_4524844, 4) == 0 && Global_1836187 == 0)
					{
					}
				}
				if (Global_21613 == 2 || iVar32 == 1)
				{
					if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_9470[Global_21613 /*15*/].f_9) == 0)
					{
						Global_21608 = SYSTEM::START_NEW_SCRIPT(&(Global_9470[Global_21613 /*15*/].f_5), 4592);
					}
				}
				else if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_9470[Global_21613 /*15*/].f_9) == 0)
				{
					Global_21608 = SYSTEM::START_NEW_SCRIPT(&(Global_9470[Global_21613 /*15*/].f_5), 2600);
				}
			}
			SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED(&(Global_9470[Global_21613 /*15*/].f_5));
			Global_9466 = 99;
			MISC::CLEAR_BIT(&Global_9463, 23);
		}
		if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2))
		{
			if (HUD::IS_PAUSE_MENU_ACTIVE())
			{
				PAD::DISABLE_CONTROL_ACTION(2, 200, true);
			}
		}
		if (Global_21610.f_1 == 1)
		{
			func_9();
		}
		if (Global_21610.f_1 == 0)
		{
			func_9();
		}
		if (Global_21610.f_1 == 3)
		{
			func_9();
		}
		else
		{
			if (Global_22996)
			{
				if (Global_21610.f_1 == 9)
				{
					if (Global_80280)
					{
						if (!BitTest(Global_9464, 31))
						{
							if (!BitTest(Global_9464, 27))
							{
								if (func_8())
								{
									if (!BitTest(Global_9463, 9))
									{
										if (func_94(2, Global_21582, 0))
										{
											if (!MISC::IS_PC_VERSION())
											{
												if (!Global_21609 == 1)
												{
													if (Global_21610.f_1 > 6)
													{
														MISC::SET_BIT(&Global_9464, 24);
														MISC::SET_BIT(&Global_9464, 27);
														MISC::CLEAR_BIT(&Global_9464, 26);
														MISC::CLEAR_BIT(&Global_9464, 25);
														MISC::SET_BIT(&(Global_2733002.f_918), 17);
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
			if (Global_21593 == 1)
			{
				Global_21595 = 1;
				func_97(0);
			}
			if (Global_21594 == 1)
			{
				Global_21595 = 1;
				func_97(0);
			}
			if (Global_80280)
			{
				if (!BitTest(Global_9465, 0))
				{
					if (HUD::IS_PAUSE_MENU_ACTIVE() && !func_7())
					{
						if (Global_2738986.f_1 == 1)
						{
						}
						else
						{
							func_100();
							func_97(0);
						}
					}
				}
			}
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID()))
				{
					if (ENTITY::GET_ENTITY_SUBMERGED_LEVEL(PLAYER::PLAYER_PED_ID()) > 0.3f)
					{
						MISC::SET_BIT(&Global_9464, 4);
					}
					if (ENTITY::GET_ENTITY_SUBMERGED_LEVEL(PLAYER::PLAYER_PED_ID()) == 1f)
					{
						if (BitTest(Global_4718592.f_38, 17) && (NETWORK::NETWORK_IS_ACTIVITY_SESSION() || Global_1926461))
						{
							func_5(1, 1);
							MISC::SET_BIT(&Global_9463, 14);
						}
						else
						{
							Global_21595 = 1;
							func_100();
							func_97(0);
						}
					}
				}
				if (func_120(14))
				{
					if ((ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_114904.f_28058[0 /*29*/] || ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_114904.f_28058[1 /*29*/]) || ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_114904.f_28058[2 /*29*/])
					{
						iLocal_121 = 0;
					}
					else if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						iLocal_121 = 1;
					}
				}
				if ((((((((((((((PED::IS_PED_IN_ANY_TRAIN(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_RIDING_TRAIN(PLAYER::PLAYER_ID())) || PED::IS_PED_ON_MOUNT(PLAYER::PLAYER_PED_ID())) || MISC::IS_STUNT_JUMP_IN_PROGRESS()) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || PED::IS_PED_JACKING(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), false)) || PED::IS_PED_HANGING_ON_TO_VEHICLE(PLAYER::PLAYER_PED_ID())) || SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("michael1")) > 0) || Global_80542 == 1) || func_3(PLAYER::PLAYER_PED_ID())) || VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID()), false)) || PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID())) || GRAPHICS::GET_USINGNIGHTVISION()) || iLocal_121)
				{
					if (!Global_21553)
					{
						MISC::SET_BIT(&Global_9464, 4);
					}
				}
				if (MISC::IS_PC_VERSION())
				{
					if (Global_80280 == 0)
					{
						if (iLocal_103 == 0)
						{
							if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
							{
								if (!PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
								{
									iLocal_101 = MISC::GET_GAME_TIMER();
									iLocal_103 = 1;
								}
							}
						}
						else
						{
							iLocal_102 = MISC::GET_GAME_TIMER();
							iLocal_105 = (iLocal_102 - iLocal_101);
							if (iLocal_105 < 4000)
							{
								MISC::SET_BIT(&Global_9464, 4);
							}
							else
							{
								iLocal_103 = 0;
							}
						}
					}
				}
				if (PAD::IS_CONTROL_PRESSED(0, 25) || PAD::IS_CONTROL_PRESSED(0, 68))
				{
					if (Global_80280)
					{
						WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iLocal_111, true);
						if (iLocal_111 != joaat("weapon_unarmed") && Global_21610.f_1 < 7)
						{
							MISC::SET_BIT(&Global_9464, 4);
						}
					}
				}
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					iLocal_112 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
					if (ENTITY::GET_ENTITY_MODEL(iLocal_112) == joaat("submersible") || ENTITY::GET_ENTITY_MODEL(iLocal_112) == joaat("submersible2"))
					{
						iLocal_115 = 1;
					}
					else
					{
						iLocal_115 = 0;
					}
					if (((((ENTITY::GET_ENTITY_MODEL(iLocal_112) == joaat("rhino") || ENTITY::GET_ENTITY_MODEL(iLocal_112) == joaat("cutter")) || ENTITY::GET_ENTITY_MODEL(iLocal_112) == joaat("chernobog")) || ENTITY::GET_ENTITY_MODEL(iLocal_112) == joaat("khanjali")) || iLocal_115) || VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_112, false) == 0)
					{
						MISC::SET_BIT(&Global_9464, 4);
					}
					if (((((((((((((((ENTITY::GET_ENTITY_MODEL(iLocal_112) == joaat("valkyrie") || ENTITY::GET_ENTITY_MODEL(iLocal_112) == joaat("insurgent")) || ENTITY::GET_ENTITY_MODEL(iLocal_112) == joaat("technical")) || ENTITY::GET_ENTITY_MODEL(iLocal_112) == joaat("trash")) || ENTITY::GET_ENTITY_MODEL(iLocal_112) == joaat("trash2")) || ENTITY::GET_ENTITY_MODEL(iLocal_112) == joaat("limo2")) || ENTITY::GET_ENTITY_MODEL(iLocal_112) == joaat("insurgent3")) || ENTITY::GET_ENTITY_MODEL(iLocal_112) == joaat("halftrack")) || ENTITY::GET_ENTITY_MODEL(iLocal_112) == joaat("dune3")) || ENTITY::GET_ENTITY_MODEL(iLocal_112) == joaat("trailersmall2")) || ENTITY::GET_ENTITY_MODEL(iLocal_112) == joaat("technical2")) || ENTITY::GET_ENTITY_MODEL(iLocal_112) == joaat("boxville5")) || ENTITY::GET_ENTITY_MODEL(iLocal_112) == joaat("mogul")) || ENTITY::GET_ENTITY_MODEL(iLocal_112) == joaat("bombushka")) || ENTITY::GET_ENTITY_MODEL(iLocal_112) == joaat("tula")) || ENTITY::GET_ENTITY_MODEL(iLocal_112) == joaat("chernobog"))
					{
						if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_112))
						{
							iVar33 = func_2(PLAYER::PLAYER_PED_ID(), iLocal_112);
							if (iVar33 != -2)
							{
								if (ENTITY::GET_ENTITY_MODEL(iLocal_112) == joaat("insurgent") || ENTITY::GET_ENTITY_MODEL(iLocal_112) == joaat("limo2"))
								{
									if (iVar33 == 3)
									{
										MISC::SET_BIT(&Global_9464, 4);
									}
								}
								if (ENTITY::GET_ENTITY_MODEL(iLocal_112) == joaat("trash") || ENTITY::GET_ENTITY_MODEL(iLocal_112) == joaat("trash2"))
								{
									if (iVar33 == 2 || iVar33 == 1)
									{
										MISC::SET_BIT(&Global_9464, 4);
									}
								}
								if (ENTITY::GET_ENTITY_MODEL(iLocal_112) == joaat("technical2"))
								{
									if (iVar33 == 1)
									{
										MISC::SET_BIT(&Global_9464, 4);
									}
								}
								if (ENTITY::GET_ENTITY_MODEL(iLocal_112) == joaat("boxville5"))
								{
									if (iVar33 == 3)
									{
										MISC::SET_BIT(&Global_9464, 4);
									}
								}
								if (ENTITY::GET_ENTITY_MODEL(iLocal_112) == joaat("insurgent3"))
								{
									if (iVar33 == 3)
									{
										MISC::SET_BIT(&Global_9464, 4);
									}
								}
								if (ENTITY::GET_ENTITY_MODEL(iLocal_112) == joaat("halftrack"))
								{
									if (iVar33 == 1)
									{
										MISC::SET_BIT(&Global_9464, 4);
									}
								}
								if (ENTITY::GET_ENTITY_MODEL(iLocal_112) == joaat("dune3"))
								{
									if (iVar33 == 0)
									{
										MISC::SET_BIT(&Global_9464, 4);
									}
								}
								if (ENTITY::GET_ENTITY_MODEL(iLocal_112) == joaat("trailersmall2"))
								{
									if (iVar33 == -1)
									{
										MISC::SET_BIT(&Global_9464, 4);
									}
								}
								if (VEHICLE::IS_TURRET_SEAT(iLocal_112, iVar33))
								{
									MISC::SET_BIT(&Global_9464, 4);
								}
							}
						}
					}
					if (PAD::IS_CONTROL_JUST_PRESSED(0, 69))
					{
						if (Global_80280 == 0)
						{
							if (Global_21610.f_1 == 6 || Global_21610.f_1 == 7)
							{
								bVar34 = true;
								if (ENTITY::GET_ENTITY_MODEL(iLocal_112) == joaat("stromberg") && ENTITY::IS_ENTITY_IN_WATER(iLocal_112))
								{
									bVar34 = false;
								}
								if (((VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(iLocal_112)) || VEHICLE::IS_THIS_MODEL_A_PLANE(ENTITY::GET_ENTITY_MODEL(iLocal_112))) || ENTITY::GET_ENTITY_MODEL(iLocal_112) == joaat("submersible")) || ENTITY::GET_ENTITY_MODEL(iLocal_112) == joaat("submersible2"))
								{
									bVar34 = false;
								}
								if (bVar34)
								{
									func_97(0);
								}
							}
						}
					}
				}
				else
				{
					if (PAD::IS_CONTROL_JUST_PRESSED(0, 24))
					{
						if (Global_80280 == 0)
						{
							if (Global_21610.f_1 == 6 || Global_21610.f_1 == 7)
							{
								func_97(0);
							}
						}
					}
					iLocal_115 = 0;
				}
				if (PED::IS_PED_SWIMMING_UNDER_WATER(PLAYER::PLAYER_PED_ID()))
				{
					if (BitTest(Global_4718592.f_38, 17) && (NETWORK::NETWORK_IS_ACTIVITY_SESSION() || Global_1926461))
					{
						func_5(1, 1);
					}
					else
					{
						Global_21595 = 1;
						func_100();
						func_97(0);
					}
				}
				if (Global_80280 == 0)
				{
					if (ENTITY::GET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID()) < iLocal_98)
					{
						if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
						{
							Global_21595 = 1;
							func_100();
							func_97(0);
						}
					}
					if (Global_21610.f_1 == 9 || Global_21610.f_1 == 10)
					{
						if (PED::IS_PED_SWIMMING_UNDER_WATER(PLAYER::PLAYER_PED_ID()))
						{
							Global_21595 = 1;
							func_100();
							func_97(0);
						}
					}
				}
				else if (func_107())
				{
					if (ENTITY::GET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID()) < iLocal_98)
					{
						if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
						{
							Global_21595 = 1;
							func_100();
							func_97(0);
						}
					}
				}
				if (CAM::IS_AIM_CAM_ACTIVE())
				{
					if (!PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), true))
					{
						if (!func_107())
						{
							WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iLocal_111, true);
							if ((iLocal_111 == joaat("weapon_sniperrifle") || iLocal_111 == joaat("weapon_heavysniper")) || iLocal_111 == joaat("weapon_remotesniper"))
							{
								bLocal_110 = true;
							}
							else
							{
								bLocal_110 = false;
							}
							if (CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE())
							{
								if (bLocal_110)
								{
									Global_21595 = 1;
									func_100();
									func_97(0);
								}
							}
						}
					}
				}
				if (PED::IS_PED_BEING_JACKED(PLAYER::PLAYER_PED_ID()))
				{
					Global_21595 = 1;
					func_100();
					func_97(0);
				}
				if (PED::IS_PED_BEING_STUNNED(PLAYER::PLAYER_PED_ID(), 0))
				{
					Global_21595 = 1;
					func_100();
					func_97(0);
				}
				if (PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true))
				{
					Global_21595 = 1;
					func_100();
					func_97(0);
				}
				if (PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_IN_PARACHUTE_FREE_FALL(PLAYER::PLAYER_PED_ID()))
				{
					if (Global_80280 == 0)
					{
						Global_21595 = 1;
						func_100();
						func_97(0);
					}
				}
			}
			else
			{
				iVar35 = 0;
				if (((Global_80280 && Global_2738986.f_1) && Global_2738986.f_37) && Global_21610.f_1 == 9)
				{
					iVar35 = 1;
					if (!BitTest(Global_9464, 24))
					{
						if (BitTest(Global_9464, 26))
						{
							MISC::SET_BIT(&Global_9464, 25);
							MISC::CLEAR_BIT(&Global_9464, 26);
							MISC::CLEAR_BIT(&Global_9465, 2);
						}
					}
				}
				if (iVar35 == 0)
				{
					Global_21595 = 1;
					func_100();
					func_97(0);
				}
			}
		}
		if (Global_21588 == 1)
		{
			func_1();
		}
		if (Global_21609 == 2)
		{
			if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2))
			{
				PAD::SET_INPUT_EXCLUSIVE(0, Global_21579);
				PAD::SET_INPUT_EXCLUSIVE(0, Global_21580);
				PAD::DISABLE_CONTROL_ACTION(0, 24, true);
				PAD::DISABLE_CONTROL_ACTION(0, 294, true);
			}
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				AUDIO::STOP_PED_RINGTONE(PLAYER::PLAYER_PED_ID());
			}
		}
	}
}

void func_1()
{
	if (!PAD::IS_CONTROL_PRESSED(2, Global_21579) && !PAD::IS_CONTROL_PRESSED(2, Global_21578))
	{
		Global_21588 = 0;
	}
}

int func_2(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false) && !ENTITY::IS_ENTITY_DEAD(iParam1, false))
	{
		if (PED::IS_PED_SITTING_IN_VEHICLE(iParam0, iParam1))
		{
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam1, -1, false) == iParam0)
			{
				return -1;
			}
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam1, 0, false) == iParam0)
			{
				return 0;
			}
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam1, 1, false) == iParam0)
			{
				return 1;
			}
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam1, 2, false) == iParam0)
			{
				return 2;
			}
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam1, 3, false) == iParam0)
			{
				return 3;
			}
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam1, 4, false) == iParam0)
			{
				return 4;
			}
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam1, 5, false) == iParam0)
			{
				return 5;
			}
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam1, 6, false) == iParam0)
			{
				return 6;
			}
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam1, 7, false) == iParam0)
			{
				return 3;
			}
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam1, 8, false) == iParam0)
			{
				return 4;
			}
		}
	}
	return -2;
}

int func_3(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (func_4(iParam0) == -1)
	{
		return 0;
	}
	return 1;
}

int func_4(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (!Global_45880[iVar0 /*5*/] == -1)
		{
			if (iParam0 == Global_45880[iVar0 /*5*/].f_1)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

void func_5(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_6(0))
		{
			Global_21842 = 1;
			if (bParam1)
			{
				MOBILE::GET_MOBILE_PHONE_POSITION(&Global_21547);
			}
			Global_21538 = { Global_21556[Global_21555 /*3*/] };
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_21538);
		}
	}
	else if (Global_21842 == 1)
	{
		Global_21842 = 0;
		Global_21538 = { Global_21563[Global_21555 /*3*/] };
		if (bParam1)
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_21547);
		}
		else
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_21538);
		}
	}
}

int func_6(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_21610.f_1 > 3)
		{
			if (BitTest(Global_9463, 14))
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
	if (Global_21610.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

bool func_7()
{
	return BitTest(Global_1964145, 5);
}

bool func_8()
{
	return Global_2738986.f_1;
}

void func_9()
{
	float fVar0;
	struct<3> Var1;
	float fVar4;
	
	Global_24042 = 0;
	Global_24043 = 0;
	PAD::SET_INPUT_EXCLUSIVE(0, Global_21580);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(6);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
	if (Global_21576 == 0)
	{
		MOBILE::SET_MOBILE_PHONE_SCALE(500f);
		if (func_106())
		{
			iLocal_16 = MISC::GET_GAME_TIMER();
		}
		else
		{
			iLocal_16 = 0;
		}
		MOBILE::SCRIPT_IS_MOVING_MOBILE_PHONE_OFFSCREEN(true);
		Global_21576 = 1;
	}
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		if (AUDIO::IS_PED_RINGTONE_PLAYING(PLAYER::PLAYER_PED_ID()))
		{
			AUDIO::STOP_PED_RINGTONE(PLAYER::PLAYER_PED_ID());
		}
	}
	if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		if (AUDIO::IS_PED_RINGTONE_PLAYING(PLAYER::PLAYER_PED_ID()))
		{
			AUDIO::STOP_PED_RINGTONE(PLAYER::PLAYER_PED_ID());
		}
	}
	if (Global_114904.f_14058.f_84 == 1)
	{
		Global_114904.f_14058.f_84 = 0;
		HUD::CLEAR_FLOATING_HELP(0, true);
	}
	fVar0 = 350f;
	if (BitTest(Global_9463, 30) || BitTest(Global_9465, 2))
	{
		fVar0 = 25f;
	}
	Var1 = { Global_21570 };
	if (Global_21595 == 1)
	{
		Var1 = { -45f, 45f, 25f };
	}
	if ((BitTest(Global_9464, 26) || BitTest(Global_9463, 30)) || BitTest(Global_9465, 2))
	{
		Local_117 = { Global_21556[Global_21555 /*3*/] };
	}
	else
	{
		Local_117 = { Global_21563[Global_21555 /*3*/] };
	}
	fVar4 = func_15(Local_117, Global_21556[Global_21555 /*3*/], Global_21570, Var1, fVar0, 0);
	if (!iLocal_85 && fVar4 >= 1f)
	{
		MOBILE::DESTROY_MOBILE_PHONE();
		iLocal_85 = 1;
	}
	if (iLocal_85 && (MISC::GET_GAME_TIMER() - iLocal_16) > 500)
	{
		PAD::SET_INPUT_EXCLUSIVE(0, Global_21580);
		if (Global_21610.f_1 == 3)
		{
		}
		if (Global_21610.f_1 == 1)
		{
		}
		if (Global_21610.f_1 == 0)
		{
		}
		MOBILE::SCRIPT_IS_MOVING_MOBILE_PHONE_OFFSCREEN(false);
		Global_21551 = 0;
		Global_21592 = 0;
		Global_21840 = 0;
		if (Global_114904.f_14058.f_84 == 1)
		{
			Global_114904.f_14058.f_84 = 0;
			HUD::CLEAR_FLOATING_HELP(0, true);
		}
		Global_21554 = 1;
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			AUDIO::STOP_PED_RINGTONE(PLAYER::PLAYER_PED_ID());
		}
		if (Global_23997 == 0)
		{
		}
		Global_21842 = 0;
		if (func_12(0))
		{
			func_11();
		}
		MISC::CLEAR_BIT(&Global_9464, 8);
		MISC::CLEAR_BIT(&Global_9463, 14);
		MISC::CLEAR_BIT(&Global_9463, 9);
		MISC::CLEAR_BIT(&Global_9463, 27);
		MISC::CLEAR_BIT(&Global_9463, 30);
		MISC::CLEAR_BIT(&Global_9464, 5);
		MISC::CLEAR_BIT(&Global_9464, 19);
		MISC::CLEAR_BIT(&Global_9464, 21);
		MISC::CLEAR_BIT(&Global_9464, 24);
		MISC::CLEAR_BIT(&Global_9464, 25);
		MISC::CLEAR_BIT(&Global_9464, 27);
		MISC::CLEAR_BIT(&Global_9464, 26);
		MISC::CLEAR_BIT(&Global_9465, 2);
		Global_2740211 = 0;
		iLocal_120 = 0;
		if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			func_10();
		}
		SYSTEM::SETTIMERA(0);
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_9470[2 /*15*/].f_9) == 0 && !Global_79048)
		{
			while (SCRIPT::IS_THREAD_ACTIVE(Global_21608))
			{
				SYSTEM::WAIT(0);
				PAD::SET_INPUT_EXCLUSIVE(0, Global_21580);
				if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_21591))
				{
					HUD::SET_TEXT_RENDER_ID(iLocal_84);
					GRAPHICS::DRAW_SCALEFORM_MOVIE(Global_21591, Global_21530, Global_21531, Global_21532, Global_21533, 255, 255, 255, 255, 0);
				}
				if (SYSTEM::TIMERA() > 5000)
				{
					SCRIPT::TERMINATE_THREAD(Global_21608);
				}
			}
		}
		Global_21598 = 0;
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_21591))
		{
			func_158(Global_21591, "SHUTDOWN_MOVIE");
		}
		SYSTEM::WAIT(0);
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&Global_21591);
		Global_21576 = 0;
		PAD::SET_INPUT_EXCLUSIVE(0, Global_21580);
		if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			if (Global_2738986.f_1)
			{
				if (Global_80280)
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "Hang_Up", "Phone_SoundSet_Michael", true);
				}
				else
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "Hang_Up", &Global_21599, true);
				}
			}
		}
		func_155();
		func_153();
		Global_22996 = 0;
		Global_4525123 = 0;
		SCRIPT::TERMINATE_THIS_THREAD();
	}
}

void func_10()
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_23994 = 0;
	if ((AUDIO::IS_MOBILE_PHONE_CALL_ONGOING() || Global_21610.f_1 == 9) || Global_21609 == 1)
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		Global_22983 = 6;
		Global_21610.f_1 = 3;
		return;
	}
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(true);
		Global_22983 = 6;
		return;
	}
}

void func_11()
{
	if (Global_10285[0 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_10285[0 /*2811*/][0 /*281*/].f_259 = 0;
	}
	if (Global_10285[1 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_10285[1 /*2811*/][0 /*281*/].f_259 = 0;
	}
	if (Global_10285[2 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_10285[2 /*2811*/][0 /*281*/].f_259 = 0;
	}
	MISC::CLEAR_BIT(&Global_9463, 25);
	MISC::SET_BIT(&Global_9464, 11);
}

int func_12(int iParam0)
{
	if (Global_44869 == 15)
	{
		return 0;
	}
	if (func_13(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_13(int iParam0)
{
	return func_14(iParam0, Global_44869);
}

int func_14(int iParam0, int iParam1)
{
	if (iParam1 == 15)
	{
		return 1;
	}
	if (iParam0 == 15)
	{
		return 0;
	}
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
					break;
			}
			return 1;
			break;
		
		case 0:
			switch (iParam1)
			{
				case 5:
				case 17:
					return 1;
					break;
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
					break;
			}
			break;
		
		case 4:
			if (iParam1 == 17)
			{
				return 1;
			}
			break;
		
		case 5:
			break;
		
		case 6:
		case 8:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 7:
			if (iParam1 == 6)
			{
				return 1;
			}
			break;
		
		case 9:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 11:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 17:
			switch (iParam1)
			{
				case 17:
				case 12:
				case 5:
					return 1;
					break;
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
					break;
			}
			break;
		
		case 13:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
	}
	return 0;
}

float func_15(struct<3> Param0, struct<3> Param3, struct<3> Param6, struct<3> Param9, float fParam12, bool bParam13)
{
	struct<2> Var0;
	float fVar3;
	float fVar4;
	float fVar5;
	
	if (Global_4525123 == 0)
	{
		if (BitTest(Global_9463, 14) && Global_21610.f_1 < 4)
		{
			MOBILE::GET_MOBILE_PHONE_POSITION(&Var0);
			if (Global_21563[Global_21555 /*3*/].f_1 == Var0.f_1)
			{
				Global_4525123 = 1;
			}
		}
	}
	if (func_106() && Global_4525123 == 0)
	{
		return 2f;
	}
	if (iLocal_16 == 0)
	{
		iLocal_16 = MISC::GET_GAME_TIMER();
	}
	fVar3 = func_17((SYSTEM::TO_FLOAT((MISC::GET_GAME_TIMER() - iLocal_16)) / fParam12), 0f, 1f);
	if (fVar3 < 1f)
	{
		fVar4 = fVar3;
		if (bParam13)
		{
			fVar4 = (fVar4 - 1f);
			fVar5 = 0.670158f;
			fVar4 = (((fVar4 * fVar4) * (((fVar5 + 1f) * fVar4) + fVar5)) + 1f);
		}
		else
		{
			fVar4 = SYSTEM::SIN((fVar3 * 90f));
		}
		Global_21538 = { func_16(Param0, Param3, fVar4) };
		Global_21541 = { func_16(Param6, Param9, fVar4) };
	}
	else
	{
		Global_21538 = { Param3 };
		Global_21541 = { Param9 };
	}
	MOBILE::SET_MOBILE_PHONE_POSITION(Global_21538);
	MOBILE::SET_MOBILE_PHONE_ROTATION(Global_21541, 0);
	return fVar3;
}

Vector3 func_16(struct<3> Param0, struct<3> Param3, float fParam6)
{
	return Param0 + Param3 - Param0 * Vector(fParam6, fParam6, fParam6);
}

float func_17(float fParam0, float fParam1, float fParam2)
{
	if (fParam0 > fParam2)
	{
		return fParam2;
	}
	else if (fParam0 < fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

void func_18()
{
	if (Global_21588 == 0)
	{
		if (func_94(2, Global_21582, 0))
		{
			if (Global_80280 == 0)
			{
				if (Global_21844)
				{
					if (Global_21843 == 0)
					{
						Global_21843 = 1;
						func_151(Global_21591, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_121(2);
						func_19();
						func_151(Global_21591, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_21615), -1082130432, -1082130432, -1082130432);
						Global_21590 = Global_21615;
					}
					else
					{
						Global_21843 = 0;
						func_151(Global_21591, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_121(1);
						func_19();
						func_151(Global_21591, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_21614), -1082130432, -1082130432, -1082130432);
						Global_21590 = Global_21614;
					}
				}
			}
		}
	}
}

void func_19()
{
	if (Global_21844 == 0)
	{
		func_119(Global_21591, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
		MISC::CLEAR_BIT(&Global_9463, 17);
	}
	else if (Global_80280)
	{
		func_119(Global_21591, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
		MISC::CLEAR_BIT(&Global_9463, 17);
	}
	else
	{
		if (Global_21843 == 1)
		{
			if (Global_21598)
			{
				func_119(Global_21591, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
			}
			else
			{
				func_119(Global_21591, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, 0, 0, 0, 0, 0);
			}
		}
		else if (Global_21598)
		{
			func_119(Global_21591, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
		}
		else
		{
			func_119(Global_21591, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
		}
		MISC::SET_BIT(&Global_9463, 17);
	}
}

void func_20()
{
	if (BitTest(Global_9464, 10) || iLocal_120 == 1)
	{
		Global_10087 = MISC::GET_GAME_TIMER();
		Global_10086 = 0;
		Global_21588 = 1;
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21591, "GET_CURRENT_SELECTION");
		iLocal_71 = GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
		iLocal_72 = 1;
	}
	else if (Global_21588 == 0)
	{
		if (func_94(2, Global_21579, 0))
		{
			if (iLocal_73 == 0)
			{
				Global_10087 = MISC::GET_GAME_TIMER();
				Global_10086 = 0;
				Global_21588 = 1;
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21591, "GET_CURRENT_SELECTION");
				iLocal_71 = GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
				iLocal_72 = 1;
			}
		}
	}
}

void func_21()
{
	if (Global_21588 == 0)
	{
		if (func_94(2, Global_21577, 1))
		{
			if (func_146(2092, -1) == 1)
			{
				if (Global_114904.f_14058[Global_21610 /*20*/].f_17 == 0)
				{
					if (!BitTest(Global_9464, 3))
					{
						if (!Global_21553)
						{
							if (!BitTest(Global_4524844, 3))
							{
								if (!BitTest(Global_9463, 14))
								{
									Global_21588 = 1;
									MISC::SET_BIT(&Global_4524844, 3);
									func_22(3, 0, 1, 0);
									Global_24042 = 0;
								}
							}
						}
					}
				}
			}
		}
	}
}

int func_22(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	func_161();
	if (Global_80280 == 0)
	{
		if (func_120(14))
		{
			if (Global_24042 == 2 || Global_24042 == 4)
			{
			}
			else
			{
				return 0;
			}
		}
	}
	if (Global_21610.f_1 == 9)
	{
		return 0;
	}
	if (iParam2 == 0)
	{
		if (func_6(0) == 1)
		{
			return 0;
		}
	}
	if (Global_21576 == 1)
	{
		return 0;
	}
	if (Global_21610.f_1 == 7)
	{
		return 0;
	}
	if (iParam1 == 1)
	{
	}
	if (!SCRIPT::IS_THREAD_ACTIVE(Global_21607))
	{
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand")) == 0)
		{
			if (Global_21610.f_1 < 4)
			{
				func_23("cellphone_flashhand");
				if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand")) == 0)
				{
					Global_21607 = SYSTEM::START_NEW_SCRIPT("cellphone_flashhand", 1424);
				}
				SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("cellphone_flashhand");
			}
		}
	}
	while (!Global_21592)
	{
		SYSTEM::WAIT(0);
	}
	func_123();
	func_122();
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_9470[iParam0 /*15*/].f_9) == 0)
	{
		Global_10086 = 0;
		Global_21610.f_1 = 7;
		func_23(&(Global_9470[iParam0 /*15*/].f_5));
		if (bParam3)
		{
			if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_9470[iParam0 /*15*/].f_9) == 0)
			{
				Global_21608 = SYSTEM::START_NEW_SCRIPT(&(Global_9470[iParam0 /*15*/].f_5), 4000);
			}
		}
		else if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_9470[iParam0 /*15*/].f_9) == 0)
		{
			Global_21608 = SYSTEM::START_NEW_SCRIPT(&(Global_9470[iParam0 /*15*/].f_5), 2600);
		}
		SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED(&(Global_9470[iParam0 /*15*/].f_5));
		return 1;
	}
	return 1;
}

void func_23(char* sParam0)
{
	SCRIPT::REQUEST_SCRIPT(sParam0);
	while (!SCRIPT::HAS_SCRIPT_LOADED(sParam0))
	{
		SYSTEM::WAIT(0);
	}
}

void func_24()
{
	if (func_46())
	{
		if (((Global_21590 == 2 || Global_21590 == 5) || Global_21590 == 8) && func_94(2, Global_21585, 0))
		{
			Global_21590 = 0;
			func_44();
			func_39();
			return;
		}
	}
	if (Global_21589)
	{
		if (SYSTEM::TIMERA() > 50)
		{
			Global_21589 = 0;
		}
	}
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2))
	{
		func_35();
	}
	if (Global_21589 == 0)
	{
		if (func_94(2, Global_21585, 0))
		{
			Global_21847 = 0;
			switch (Global_21590)
			{
				case 2:
					if (Global_10048[0] == 1)
					{
						Global_21590 = 0;
					}
					else
					{
						Global_21590 = 1;
						Global_21847 = 1;
					}
					break;
				
				case 5:
					Global_21590 = 3;
					break;
				
				case 6:
					Global_21590 = 7;
					break;
				
				case 7:
					if (Global_10048[Global_21590 + 1] == 1)
					{
						Global_21590 = 8;
					}
					else
					{
						Global_21590 = 6;
						Global_21847 = 1;
					}
					break;
				
				case 8:
					Global_21590 = 6;
					break;
				
				default:
					Global_21590++;
					break;
			}
			if (Global_21847 == 1)
			{
				func_33();
			}
			else
			{
				func_31();
			}
			Global_21589 = 1;
			SYSTEM::SETTIMERA(0);
		}
		if (func_94(2, Global_21584, 0))
		{
			Global_21847 = 0;
			switch (Global_21590)
			{
				case 0:
					Global_21590 = 2;
					break;
				
				case 1:
					if (Global_10048[0] == 1)
					{
						Global_21590 = 0;
					}
					else
					{
						Global_21590 = 2;
						Global_21847 = 1;
					}
					break;
				
				case 3:
					Global_21590 = 5;
					break;
				
				case 6:
					if (Global_10048[8] == 1)
					{
						Global_21590 = 8;
					}
					else
					{
						Global_21590 = 7;
						Global_21847 = 1;
					}
					break;
				
				default:
					Global_21590 = (Global_21590 - 1);
					break;
			}
			if (Global_21847 == 1)
			{
				func_31();
			}
			else
			{
				func_33();
			}
			Global_21589 = 1;
			SYSTEM::SETTIMERA(0);
		}
		if (func_94(2, Global_21586, 0))
		{
			Global_21847 = 0;
			switch (Global_21590)
			{
				case 0:
					if (Global_10048[6])
					{
						Global_21590 = 6;
					}
					break;
				
				case 1:
					if (Global_10048[7])
					{
						Global_21590 = 7;
					}
					else
					{
						Global_21847 = 1;
						Global_21590 = 4;
					}
					break;
				
				case 2:
					if (Global_10048[8])
					{
						Global_21590 = 8;
					}
					else
					{
						Global_21847 = 1;
						Global_21590 = 5;
					}
					break;
				
				case 3:
					if (Global_10048[0])
					{
						Global_21590 = 0;
					}
					else
					{
						Global_21847 = 1;
						Global_21590 = 6;
					}
					break;
				
				case 4:
					if (Global_10048[1])
					{
						Global_21590 = 1;
					}
					break;
				
				case 5:
					if (Global_10048[2])
					{
						Global_21590 = 2;
					}
					break;
				
				case 6:
					if (Global_10048[3])
					{
						Global_21590 = 3;
					}
					break;
				
				case 7:
					if (Global_10048[4])
					{
						Global_21590 = 4;
					}
					break;
				
				case 8:
					if (Global_10048[5])
					{
						Global_21590 = 5;
					}
					break;
			}
			if (Global_21847 == 1)
			{
				func_29();
			}
			else
			{
				func_26();
			}
			Global_21589 = 1;
			SYSTEM::SETTIMERA(0);
		}
		if (func_94(2, Global_21587, 0))
		{
			Global_21847 = 0;
			switch (Global_21590)
			{
				case 0:
					if (Global_10048[3])
					{
						Global_21590 = 3;
					}
					break;
				
				case 1:
					if (Global_10048[4])
					{
						Global_21590 = 4;
					}
					break;
				
				case 2:
					if (Global_10048[5])
					{
						Global_21590 = 5;
					}
					break;
				
				case 3:
					if (Global_10048[6])
					{
						Global_21590 = 6;
					}
					break;
				
				case 4:
					if (Global_10048[7])
					{
						Global_21590 = 7;
					}
					else
					{
						Global_21847 = 1;
						Global_21590 = 1;
					}
					break;
				
				case 5:
					if (Global_10048[8])
					{
						Global_21590 = 8;
					}
					else
					{
						Global_21847 = 1;
						Global_21590 = 2;
					}
					break;
				
				case 6:
					if (Global_10048[0])
					{
						Global_21590 = 0;
					}
					else
					{
						Global_21847 = 1;
						Global_21590 = 3;
					}
					break;
				
				case 7:
					if (Global_10048[1])
					{
						Global_21590 = 1;
					}
					break;
				
				case 8:
					if (Global_10048[2])
					{
						Global_21590 = 2;
					}
					break;
			}
			if (Global_21847 == 1)
			{
				func_26();
			}
			else
			{
				func_29();
			}
			Global_21589 = 1;
			SYSTEM::SETTIMERA(0);
		}
	}
	if (Global_9470[24 /*15*/].f_10 == 57)
	{
		if (Global_21589 == 1 && Global_21590 == 8)
		{
			if (iLocal_122 == 0)
			{
				iLocal_122 = 1;
				func_25(12);
			}
		}
	}
}

void func_25(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::SET_BIT(&(Global_2733002.f_3988.f_7[iVar0]), iVar1);
}

void func_26()
{
	func_151(Global_21591, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(1), -1082130432, -1082130432, -1082130432, -1082130432);
	AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_21599, true);
	func_27();
}

void func_27()
{
	if (func_28())
	{
		if (Global_21847 == 0)
		{
			MOBILE::CELL_SET_INPUT(1);
		}
		else
		{
			MOBILE::CELL_SET_INPUT(2);
		}
	}
}

int func_28()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_80280)
	{
		return 0;
	}
	iVar2 = 0;
	iVar0 = CAM::GET_CAM_ACTIVE_VIEW_MODE_CONTEXT();
	iVar1 = CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(iVar0);
	if (iVar1 == 4)
	{
		iVar2 = 1;
	}
	if (Global_4525122 || iVar2)
	{
		return 1;
	}
	return 1;
}

void func_29()
{
	func_151(Global_21591, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(3), -1082130432, -1082130432, -1082130432, -1082130432);
	AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_21599, true);
	func_30();
}

void func_30()
{
	if (func_28())
	{
		if (Global_21847 == 0)
		{
			MOBILE::CELL_SET_INPUT(2);
		}
		else
		{
			MOBILE::CELL_SET_INPUT(1);
		}
	}
}

void func_31()
{
	func_151(Global_21591, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(2), -1082130432, -1082130432, -1082130432, -1082130432);
	AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_21599, true);
	func_32();
}

void func_32()
{
	if (func_28())
	{
		if (Global_21847 == 0)
		{
			MOBILE::CELL_SET_INPUT(4);
		}
		else
		{
			MOBILE::CELL_SET_INPUT(3);
		}
	}
}

void func_33()
{
	func_151(Global_21591, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(4), -1082130432, -1082130432, -1082130432, -1082130432);
	AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_21599, true);
	func_34();
}

void func_34()
{
	if (func_28())
	{
		if (Global_21847 == 0)
		{
			MOBILE::CELL_SET_INPUT(3);
		}
		else
		{
			MOBILE::CELL_SET_INPUT(4);
		}
	}
}

void func_35()
{
	if (PAD::IS_CONTROL_JUST_PRESSED(2, 180))
	{
		switch (Global_21590)
		{
			case 0:
				if (Global_10048[1])
				{
					func_31();
					Global_21590 = 1;
				}
				break;
			
			case 1:
				if (Global_10048[2])
				{
					func_31();
					Global_21590 = 2;
				}
				break;
			
			case 2:
				if (Global_10048[3])
				{
					func_31();
					func_29();
					Global_21590 = 3;
				}
				else
				{
					func_33();
					func_29();
					Global_21590 = 4;
				}
				break;
			
			case 3:
				if (Global_10048[4])
				{
					func_31();
					Global_21590 = 4;
				}
				break;
			
			case 4:
				if (Global_10048[5])
				{
					func_31();
					Global_21590 = 5;
				}
				break;
			
			case 5:
				if (Global_10048[6])
				{
					func_31();
					func_29();
					Global_21590 = 6;
				}
				break;
			
			case 6:
				if (Global_10048[7])
				{
					func_31();
					Global_21590 = 7;
				}
				break;
			
			case 7:
				if (Global_10048[8])
				{
					func_31();
					Global_21590 = 8;
				}
				else if (func_46())
				{
					func_39();
					func_33();
					func_29();
					Global_21590 = 0;
				}
				else
				{
					func_33();
					func_29();
					Global_21590 = 0;
				}
				break;
			
			case 8:
				if (func_46())
				{
					func_39();
					func_31();
					func_29();
					Global_21590 = 0;
					return;
				}
				if (Global_10048[0])
				{
					func_31();
					func_29();
					Global_21590 = 0;
				}
				else
				{
					func_33();
					func_29();
				}
				break;
			}
	}
	if (PAD::IS_CONTROL_JUST_PRESSED(2, 181))
	{
		switch (Global_21590)
		{
			case 0:
				if (BitTest(Global_9465, 9))
				{
					func_36();
					func_33();
					func_26();
					Global_21590 = 8;
					return;
				}
				if (Global_10048[8])
				{
					func_33();
					func_26();
					Global_21590 = 8;
				}
				else
				{
					func_31();
					func_26();
					Global_21590 = 7;
				}
				break;
			
			case 1:
				if (Global_10048[0])
				{
					func_33();
					Global_21590 = 0;
				}
				else if (BitTest(Global_9465, 9))
				{
					func_36();
					func_31();
					func_26();
					Global_21590 = 8;
				}
				else if (Global_10048[8])
				{
					func_26();
					func_31();
				}
				else
				{
					func_26();
				}
				break;
			
			case 2:
				if (Global_10048[1])
				{
					func_33();
					Global_21590 = 1;
				}
				break;
			
			case 3:
				if (Global_10048[2])
				{
					func_33();
					func_26();
					Global_21590 = 2;
				}
				break;
			
			case 4:
				if (Global_10048[3])
				{
					func_33();
					Global_21590 = 3;
				}
				else
				{
					func_26();
					func_31();
					Global_21847 = 1;
					Global_21590 = 2;
				}
				break;
			
			case 5:
				if (Global_10048[4])
				{
					func_33();
					Global_21590 = 4;
				}
				break;
			
			case 6:
				if (Global_10048[5])
				{
					func_26();
					func_33();
					Global_21590 = 5;
				}
				break;
			
			case 7:
				if (Global_10048[6])
				{
					func_33();
					Global_21590 = 6;
				}
				break;
			
			case 8:
				if (Global_10048[7])
				{
					func_33();
					Global_21590 = 7;
				}
				break;
			}
	}
}

void func_36()
{
	MISC::CLEAR_BIT(&Global_9465, 9);
	func_151(Global_21591, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_121(1);
	func_151(Global_21591, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_21590), -1082130432, -1082130432, -1082130432);
	func_37();
	func_123();
	func_121(1);
	func_151(Global_21591, "DISPLAY_VIEW", 4f, SYSTEM::TO_FLOAT(Global_21590), -1082130432, -1082130432, -1082130432);
	func_151(Global_21591, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_21590), -1082130432, -1082130432, -1082130432);
}

void func_37()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21591, "SET_DATA_SLOT");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(25);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
		func_38(&(Global_9470[10 /*15*/]));
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(225);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		iVar0++;
	}
	func_151(Global_21591, "DISPLAY_VIEW", 4f, SYSTEM::TO_FLOAT(0), -1082130432, -1082130432, -1082130432);
	func_151(Global_21591, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(0), -1082130432, -1082130432, -1082130432);
}

void func_38(char* sParam0)
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

void func_39()
{
	Global_21614 = Global_21590;
	func_40(1);
}

void func_40(bool bParam0)
{
	int iVar0;
	
	MISC::SET_BIT(&Global_9465, 9);
	if (bParam0)
	{
		func_151(Global_21591, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
	}
	func_37();
	func_43();
	iVar0 = 0;
	while (iVar0 < 9)
	{
		Global_10011[iVar0] = 0;
		Global_10048[iVar0] = 0;
		iVar0++;
	}
	func_41(10, "CELL_16", 0, "appSettings", 24);
	if (bParam0)
	{
		func_151(Global_21591, "DISPLAY_VIEW", 4f, SYSTEM::TO_FLOAT(Global_21590), -1082130432, -1082130432, -1082130432);
		func_151(Global_21591, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_21590), -1082130432, -1082130432, -1082130432);
	}
}

void func_41(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4)
{
	func_42(iParam0, sParam1, iParam2, sParam3, iParam4, 1, 1, 0, 0);
	Global_10048[iParam2] = 1;
	Global_10011[iParam2] = iParam0;
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21591, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_9470[iParam0 /*15*/].f_4);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_9470[iParam0 /*15*/].f_10);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
	func_38(&(Global_9470[iParam0 /*15*/]));
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(255);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_42(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	StringCopy(&(Global_9470[iParam0 /*15*/]), sParam1, 16);
	Global_9470[iParam0 /*15*/].f_4 = iParam2;
	StringCopy(&(Global_9470[iParam0 /*15*/].f_5), sParam3, 16);
	Global_9470[iParam0 /*15*/].f_9 = MISC::GET_HASH_KEY(sParam3);
	Global_9470[iParam0 /*15*/].f_10 = iParam4;
	Global_9470[iParam0 /*15*/].f_11 = iParam5;
	Global_9470[iParam0 /*15*/].f_12 = iParam6;
	Global_9470[iParam0 /*15*/].f_13 = iParam7;
	Global_9470[iParam0 /*15*/].f_14 = iParam8;
	if (Global_9470[iParam0 /*15*/].f_12 == 0)
	{
		Global_9470[iParam0 /*15*/].f_12 = 0;
	}
	if (Global_9470[iParam0 /*15*/].f_13 == 0)
	{
		Global_9470[iParam0 /*15*/].f_13 = 0;
	}
	if (Global_9470[iParam0 /*15*/].f_14 == 0)
	{
		Global_9470[iParam0 /*15*/].f_14 = 0;
	}
}

void func_43()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		Global_10048[iVar0] = 0;
		iVar0++;
	}
}

void func_44()
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Accept", &Global_21599, true);
		func_45();
	}
}

void func_45()
{
	if (func_28())
	{
		MOBILE::CELL_SET_INPUT(5);
	}
}

int func_46()
{
	if (func_109())
	{
		return 1;
	}
	return 0;
}

void func_47()
{
	if (((Global_21590 == 0 || Global_21590 == 3) || Global_21590 == 6) && func_94(2, Global_21584, 0))
	{
		Global_21590 += 2;
		func_44();
		func_36();
		return;
	}
	if (Global_21589)
	{
		if (SYSTEM::TIMERA() > 50)
		{
			Global_21589 = 0;
		}
	}
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2))
	{
		func_35();
	}
	func_48();
}

void func_48()
{
	bool bVar0;
	
	if (!Global_21589)
	{
		bVar0 = false;
		if (func_94(2, Global_21585, 0))
		{
			Global_21847 = 0;
			switch (Global_21590)
			{
				case 0:
				case 3:
				case 6:
					if (Global_10048[Global_21590 + 1])
					{
						Global_21590++;
					}
					else if (Global_10048[Global_21590 + 2])
					{
						Global_21590 += 2;
						Global_21847 = 1;
					}
					else
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_21599, true);
						bVar0 = true;
					}
					break;
				
				case 1:
				case 4:
				case 7:
					if (Global_10048[Global_21590 + 1])
					{
						Global_21590++;
					}
					else if (Global_10048[(Global_21590 - 1)])
					{
						Global_21590 = (Global_21590 - 1);
						Global_21847 = 1;
					}
					else
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_21599, true);
						bVar0 = true;
					}
					break;
				
				case 2:
				case 5:
				case 8:
					if (Global_10048[(Global_21590 - 2)])
					{
						Global_21590 = (Global_21590 - 2);
					}
					else if (Global_10048[(Global_21590 - 1)])
					{
						Global_21590 = (Global_21590 - 1);
						Global_21847 = 1;
					}
					else
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_21599, true);
						bVar0 = true;
					}
					break;
			}
			if (!bVar0)
			{
				if (!Global_21847)
				{
					func_31();
				}
				else
				{
					func_33();
				}
			}
			Global_21589 = 1;
			SYSTEM::SETTIMERA(0);
		}
		if (func_94(2, Global_21584, 0))
		{
			Global_21847 = 0;
			switch (Global_21590)
			{
				case 1:
				case 4:
				case 7:
					if (Global_10048[(Global_21590 - 1)])
					{
						Global_21590 = (Global_21590 - 1);
					}
					else if (Global_10048[Global_21590 + 1])
					{
						Global_21590++;
						Global_21847 = 1;
					}
					else
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_21599, true);
						bVar0 = true;
					}
					break;
				
				case 2:
				case 5:
				case 8:
					if (Global_10048[(Global_21590 - 1)])
					{
						Global_21590 = (Global_21590 - 1);
					}
					else if (Global_10048[(Global_21590 - 2)])
					{
						Global_21590 = (Global_21590 - 2);
						Global_21847 = 1;
					}
					else
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_21599, true);
						bVar0 = true;
					}
					break;
			}
			if (!bVar0)
			{
				if (!Global_21847)
				{
					func_33();
				}
				else
				{
					func_31();
				}
			}
			Global_21589 = 1;
			SYSTEM::SETTIMERA(0);
		}
		if (func_94(2, Global_21586, 0))
		{
			Global_21847 = 0;
			switch (Global_21590)
			{
				case 0:
				case 1:
				case 2:
					if (Global_10048[Global_21590 + 6])
					{
						Global_21590 += 6;
					}
					else if (Global_10048[Global_21590 + 3])
					{
						Global_21590 += 3;
						Global_21847 = 1;
					}
					else
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_21599, true);
						bVar0 = true;
					}
					break;
				
				case 3:
				case 4:
				case 5:
					if (Global_10048[(Global_21590 - 3)])
					{
						Global_21590 = (Global_21590 - 3);
					}
					else if (Global_10048[Global_21590 + 3])
					{
						Global_21590 += 3;
						Global_21847 = 1;
					}
					else
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_21599, true);
						bVar0 = true;
					}
					break;
				
				case 6:
				case 7:
				case 8:
					if (Global_10048[(Global_21590 - 3)])
					{
						Global_21590 = (Global_21590 - 3);
					}
					else if (Global_10048[(Global_21590 - 6)])
					{
						Global_21590 = (Global_21590 - 6);
						Global_21847 = 1;
					}
					else
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_21599, true);
						bVar0 = true;
					}
					break;
			}
			if (!bVar0)
			{
				if (!Global_21847)
				{
					func_26();
				}
				else
				{
					func_29();
				}
			}
			Global_21589 = 1;
			SYSTEM::SETTIMERA(0);
		}
		if (func_94(2, Global_21587, 0))
		{
			Global_21847 = 0;
			switch (Global_21590)
			{
				case 0:
				case 1:
				case 2:
					if (Global_10048[Global_21590 + 3])
					{
						Global_21590 += 3;
					}
					else if (Global_10048[Global_21590 + 6])
					{
						Global_21590 += 6;
						Global_21847 = 1;
					}
					else
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_21599, true);
						bVar0 = true;
					}
					break;
				
				case 3:
				case 4:
				case 5:
					if (Global_10048[Global_21590 + 3])
					{
						Global_21590 += 3;
					}
					else if (Global_10048[(Global_21590 - 3)])
					{
						Global_21590 = (Global_21590 - 3);
						Global_21847 = 1;
					}
					else
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_21599, true);
						bVar0 = true;
					}
					break;
				
				case 6:
				case 7:
				case 8:
					if (Global_10048[(Global_21590 - 6)])
					{
						Global_21590 = (Global_21590 - 6);
					}
					else if (Global_10048[(Global_21590 - 3)])
					{
						Global_21590 = (Global_21590 - 3);
						Global_21847 = 1;
					}
					else
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_21599, true);
						bVar0 = true;
					}
					break;
			}
			if (!bVar0)
			{
				if (!Global_21847)
				{
					func_29();
				}
				else
				{
					func_26();
				}
			}
			Global_21589 = 1;
			SYSTEM::SETTIMERA(0);
		}
	}
}

void func_49()
{
	if (Global_21589)
	{
		if (SYSTEM::TIMERA() > 50)
		{
			Global_21589 = 0;
		}
	}
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2))
	{
		if (PAD::IS_CONTROL_JUST_PRESSED(2, 180))
		{
			switch (Global_21590)
			{
				case 6:
					if (Global_10048[7])
					{
						func_31();
						Global_21590 = 7;
					}
					break;
				
				case 7:
					if (Global_10048[6])
					{
						func_33();
						Global_21590 = 6;
					}
					break;
				}
		}
		if (PAD::IS_CONTROL_JUST_PRESSED(2, 181))
		{
			switch (Global_21590)
			{
				case 6:
					if (Global_10048[7])
					{
						func_31();
						Global_21590 = 7;
					}
					break;
				
				case 7:
					if (Global_10048[6])
					{
						func_33();
						Global_21590 = 6;
					}
					break;
				}
			}
	}
	if (Global_21589 == 0)
	{
		if (func_94(2, Global_21585, 0))
		{
			Global_21847 = 0;
			switch (Global_21590)
			{
				case 2:
					Global_21590 = 0;
					break;
				
				case 5:
					Global_21590 = 3;
					break;
				
				case 7:
					if (Global_10048[Global_21590 + 1] == 1)
					{
						Global_21590 = 8;
					}
					else
					{
						Global_21590 = 6;
						Global_21847 = 1;
					}
					break;
				
				case 8:
					Global_21590 = 6;
					break;
				
				default:
					Global_21590++;
					break;
			}
			if (Global_21847 == 1)
			{
				func_33();
			}
			else
			{
				func_31();
			}
			Global_21589 = 1;
			SYSTEM::SETTIMERA(0);
		}
		if (func_94(2, Global_21584, 0))
		{
			Global_21847 = 0;
			switch (Global_21590)
			{
				case 0:
					Global_21590 = 2;
					break;
				
				case 3:
					Global_21590 = 5;
					break;
				
				case 6:
					if (Global_10048[8] == 1)
					{
						Global_21590 = 8;
					}
					else
					{
						Global_21590 = 7;
						Global_21847 = 1;
					}
					break;
				
				default:
					Global_21590 = (Global_21590 - 1);
					break;
			}
			if (Global_21847 == 1)
			{
				func_31();
			}
			else
			{
				func_33();
			}
			Global_21589 = 1;
			SYSTEM::SETTIMERA(0);
		}
	}
}

void func_50()
{
	if (Global_21589)
	{
		if (SYSTEM::TIMERA() > 50)
		{
			Global_21589 = 0;
		}
	}
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2))
	{
		if (PAD::IS_CONTROL_JUST_PRESSED(2, 180))
		{
			switch (Global_21590)
			{
				case 0:
					if (Global_10048[1])
					{
						func_31();
						Global_21590 = 1;
					}
					break;
				
				case 1:
					if (Global_10048[2])
					{
						func_31();
						Global_21590 = 2;
					}
					break;
				
				case 2:
					if (Global_10048[3])
					{
						func_31();
						func_29();
						Global_21590 = 3;
					}
					else
					{
						func_33();
						func_29();
						Global_21590 = 4;
					}
					break;
				
				case 3:
					if (Global_10048[4])
					{
						func_31();
						Global_21590 = 4;
					}
					break;
				
				case 4:
					if (Global_10048[5])
					{
						func_31();
						Global_21590 = 5;
					}
					break;
				
				case 5:
					if (Global_10048[6])
					{
						func_31();
						func_29();
						Global_21590 = 6;
					}
					break;
				
				case 6:
					if (Global_10048[7])
					{
						func_31();
						Global_21590 = 7;
					}
					break;
				
				case 7:
					if (Global_10048[8])
					{
						func_31();
						Global_21590 = 8;
					}
					else
					{
						func_33();
						func_29();
						Global_21590 = 0;
					}
					break;
				
				case 8:
					if (Global_10048[0])
					{
						func_31();
						func_29();
						Global_21590 = 0;
					}
					break;
				}
		}
		if (PAD::IS_CONTROL_JUST_PRESSED(2, 181))
		{
			switch (Global_21590)
			{
				case 0:
					if (Global_10048[8])
					{
						func_33();
						func_26();
						Global_21590 = 8;
					}
					else
					{
						func_31();
						func_26();
						Global_21590 = 7;
					}
					break;
				
				case 1:
					if (Global_10048[0])
					{
						func_33();
						Global_21590 = 0;
					}
					break;
				
				case 2:
					if (Global_10048[1])
					{
						func_33();
						Global_21590 = 1;
					}
					break;
				
				case 3:
					if (Global_10048[2])
					{
						func_33();
						func_26();
						Global_21590 = 2;
					}
					break;
				
				case 4:
					if (Global_10048[3])
					{
						func_33();
						Global_21590 = 3;
					}
					else
					{
						func_26();
						func_31();
						Global_21847 = 1;
						Global_21590 = 2;
					}
					break;
				
				case 5:
					if (Global_10048[4])
					{
						func_33();
						Global_21590 = 4;
					}
					break;
				
				case 6:
					if (Global_10048[5])
					{
						func_26();
						func_33();
						Global_21590 = 5;
					}
					break;
				
				case 7:
					if (Global_10048[6])
					{
						func_33();
						Global_21590 = 6;
					}
					break;
				
				case 8:
					if (Global_10048[7])
					{
						func_33();
						Global_21590 = 7;
					}
					break;
				}
			}
	}
	if (Global_21589 == 0)
	{
		if (func_94(2, Global_21585, 0))
		{
			Global_21847 = 0;
			switch (Global_21590)
			{
				case 2:
					Global_21590 = 0;
					break;
				
				case 5:
					Global_21590 = 3;
					break;
				
				case 7:
					if (Global_10048[Global_21590 + 1] == 1)
					{
						Global_21590 = 8;
					}
					else
					{
						Global_21590 = 6;
						Global_21847 = 1;
					}
					break;
				
				case 8:
					Global_21590 = 6;
					break;
				
				default:
					Global_21590++;
					break;
			}
			if (Global_21847 == 1)
			{
				func_33();
			}
			else
			{
				func_31();
			}
			Global_21589 = 1;
			SYSTEM::SETTIMERA(0);
		}
		if (func_94(2, Global_21584, 0))
		{
			Global_21847 = 0;
			switch (Global_21590)
			{
				case 0:
					Global_21590 = 2;
					break;
				
				case 3:
					Global_21590 = 5;
					break;
				
				case 6:
					if (Global_10048[8] == 1)
					{
						Global_21590 = 8;
					}
					else
					{
						Global_21590 = 7;
						Global_21847 = 1;
					}
					break;
				
				default:
					Global_21590 = (Global_21590 - 1);
					break;
			}
			if (Global_21847 == 1)
			{
				func_31();
			}
			else
			{
				func_33();
			}
			Global_21589 = 1;
			SYSTEM::SETTIMERA(0);
		}
		if (func_94(2, Global_21586, 0))
		{
			Global_21847 = 0;
			switch (Global_21590)
			{
				case 0:
					if (Global_10048[6])
					{
						Global_21590 = 6;
					}
					break;
				
				case 1:
					if (Global_10048[7])
					{
						Global_21590 = 7;
					}
					break;
				
				case 2:
					if (Global_10048[8])
					{
						Global_21590 = 8;
					}
					else
					{
						Global_21847 = 1;
						Global_21590 = 5;
					}
					break;
				
				case 3:
					if (Global_10048[0])
					{
						Global_21590 = 0;
					}
					break;
				
				case 4:
					if (Global_10048[1])
					{
						Global_21590 = 1;
					}
					break;
				
				case 5:
					if (Global_10048[2])
					{
						Global_21590 = 2;
					}
					break;
				
				case 6:
					if (Global_10048[3])
					{
						Global_21590 = 3;
					}
					break;
				
				case 7:
					if (Global_10048[4])
					{
						Global_21590 = 4;
					}
					break;
				
				case 8:
					if (Global_10048[5])
					{
						Global_21590 = 5;
					}
					break;
			}
			if (Global_21847 == 1)
			{
				func_29();
			}
			else
			{
				func_26();
			}
			Global_21589 = 1;
			SYSTEM::SETTIMERA(0);
		}
		if (func_94(2, Global_21587, 0))
		{
			Global_21847 = 0;
			switch (Global_21590)
			{
				case 0:
					if (Global_10048[3])
					{
						Global_21590 = 3;
					}
					break;
				
				case 1:
					if (Global_10048[4])
					{
						Global_21590 = 4;
					}
					break;
				
				case 2:
					if (Global_10048[5])
					{
						Global_21590 = 5;
					}
					break;
				
				case 3:
					if (Global_10048[6])
					{
						Global_21590 = 6;
					}
					break;
				
				case 4:
					if (Global_10048[7])
					{
						Global_21590 = 7;
					}
					break;
				
				case 5:
					if (Global_10048[8])
					{
						Global_21590 = 8;
					}
					else
					{
						Global_21847 = 1;
						Global_21590 = 2;
					}
					break;
				
				case 6:
					if (Global_10048[0])
					{
						Global_21590 = 0;
					}
					break;
				
				case 7:
					if (Global_10048[1])
					{
						Global_21590 = 1;
					}
					break;
				
				case 8:
					if (Global_10048[2])
					{
						Global_21590 = 2;
					}
					break;
			}
			if (Global_21847 == 1)
			{
				func_26();
			}
			else
			{
				func_29();
			}
			Global_21589 = 1;
			SYSTEM::SETTIMERA(0);
		}
	}
}

void func_51()
{
	int iVar0;
	int iVar1;
	char* sVar2;
	
	if (GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(iLocal_71))
	{
		iLocal_72 = 0;
		iLocal_70 = GRAPHICS::GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_INT(iLocal_71);
		if (Global_21843 == 0)
		{
			Global_21614 = iLocal_70;
		}
		else
		{
			Global_21615 = iLocal_70;
		}
		if (iLocal_70 < 0)
		{
			iLocal_70 = 0;
		}
		Global_21613 = Global_10011[iLocal_70];
		if (BitTest(Global_9464, 10))
		{
			Global_21613 = 2;
			MISC::CLEAR_BIT(&Global_9464, 10);
		}
		if (iLocal_120 == 1)
		{
			Global_21614 = 1;
			Global_21613 = 0;
			Global_2740211 = 0;
			iLocal_120 = 0;
		}
		iVar0 = 0;
		if (Global_80280)
		{
			if (Global_21613 == 25 && func_46())
			{
			}
		}
		if (SCRIPT::IS_THREAD_ACTIVE(Global_21608))
		{
			iVar0 = 1;
		}
		if (Global_21613 == 3)
		{
			if (BitTest(Global_9464, 3))
			{
				iVar0 = 1;
			}
			else if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				if (((((((PED::IS_PED_ON_MOUNT(PLAYER::PLAYER_PED_ID()) || MISC::IS_STUNT_JUMP_IN_PROGRESS()) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || PED::IS_PED_JACKING(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_HANGING_ON_TO_VEHICLE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID())) || VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID()), false)) || GRAPHICS::GET_USINGNIGHTVISION())
				{
					iVar0 = 1;
				}
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()) == 0)
					{
						iVar0 = 1;
					}
					iVar1 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
					if (ENTITY::GET_ENTITY_UPRIGHT_VALUE(iVar1) < 0f)
					{
						iVar0 = 1;
					}
				}
				if (PLAYER::IS_PLAYER_TARGETTING_ANYTHING(PLAYER::PLAYER_ID()))
				{
					iVar0 = 1;
				}
				if (Global_80280)
				{
					if (PAD::IS_CONTROL_PRESSED(0, 25) || PAD::IS_CONTROL_PRESSED(0, 68))
					{
						WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iLocal_111, true);
						if (iLocal_111 != joaat("weapon_unarmed"))
						{
							iVar0 = 1;
						}
					}
				}
			}
		}
		if (Global_21613 == 2)
		{
			if (BitTest(Global_9464, 6))
			{
				iVar0 = 1;
			}
		}
		if (Global_21613 == 24 && MISC::ARE_STRINGS_EQUAL(&(Global_9470[Global_21613 /*15*/]), "CELL_BENWEB"))
		{
			if (BitTest(Global_9464, 6))
			{
				iVar0 = 1;
			}
		}
		if (Global_80280)
		{
			if (Global_21613 == 15 || Global_21613 == 5)
			{
			}
			else
			{
				if (Global_21613 == 24)
				{
					if (((BitTest(Global_4524844, 4) == 0 && Global_1836187 == 0) && BitTest(Global_4524844, 20) == 0) && BitTest(Global_4524844, 22) == 0)
					{
					}
					if ((((BitTest(Global_4524844, 20) == 1 && BitTest(Global_4524844, 4) == 0) && Global_1836187 == 0) && BitTest(Global_4524844, 22) == 0) && BitTest(Global_4524844, 26) == 0)
					{
						iVar0 = 1;
						MISC::SET_BIT(&Global_4524844, 21);
					}
				}
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
				{
					if (PED::GET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 78, true) || PLAYER::IS_PLAYER_FREE_AIMING(PLAYER::PLAYER_ID()))
					{
						if (Global_21613 == 3)
						{
							iVar0 = 1;
						}
					}
				}
				if (Global_77341 && Global_21613 == 2)
				{
					iVar0 = 1;
					sVar2 = func_79();
					if (!func_78(sVar2))
					{
						func_117(sVar2, -1);
					}
				}
				if (Global_21613 == 23)
				{
					func_53(&iVar0);
				}
				if (func_160())
				{
					if (Global_21613 == 10)
					{
						if (!func_78("FIX_MPCHAR_BLCK"))
						{
							func_117("FIX_MPCHAR_BLCK", -1);
						}
						iVar0 = 1;
					}
				}
				if (iVar0 == 0)
				{
					func_119(Global_21591, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
					MISC::CLEAR_BIT(&Global_9463, 17);
					Global_21610.f_1 = 7;
					if (BitTest(Global_9463, 23))
					{
					}
					else
					{
						func_44();
						unk_0xCFB0E9C3456319EA(Global_2673271.f_4.f_11, "PhoneApp", 0, Global_9470[Global_21613 /*15*/].f_9);
						Global_1948541.f_35 = 133;
						SCRIPT::REQUEST_SCRIPT(&(Global_9470[Global_21613 /*15*/].f_5));
						MISC::SET_BIT(&Global_9463, 23);
					}
				}
				else
				{
					if (Global_21613 == 2 || Global_21613 == 3)
					{
					}
					func_52();
				}
			}
		}
		else
		{
			switch (Global_21613)
			{
				case 3:
					if (Global_113957 == 1)
					{
						iVar0 = 1;
					}
					break;
				
				case 8:
					iVar0 = 1;
					break;
				
				case 15:
					iVar0 = 1;
					break;
				
				case 16:
					iVar0 = 1;
					MISC::SET_BIT(&Global_9463, 26);
					break;
				
				case 5:
					iVar0 = 1;
					break;
				
				case 20:
					iVar0 = 1;
					if (Global_21845 == 0)
					{
						if ((Global_9467 == 0 && iLocal_73 == 0) && Global_44869 == 15)
						{
							iLocal_73 = 1;
							func_44();
							if (!Global_114904.f_14058.f_85)
							{
							}
						}
					}
					else
					{
						func_52();
					}
					break;
				
				default:
					break;
			}
			if (CUTSCENE::CAN_USE_MOBILE_PHONE_DURING_CUTSCENE())
			{
				if (Global_21613 != 0)
				{
					iVar0 = 1;
				}
			}
			if (func_120(14))
			{
				if (Global_21613 != 3 && Global_21613 != 14)
				{
					iVar0 = 1;
				}
			}
			if (iVar0 == 0)
			{
				func_44();
				func_119(Global_21591, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				MISC::CLEAR_BIT(&Global_9463, 17);
				Global_21610.f_1 = 7;
				if (BitTest(Global_9463, 23))
				{
				}
				else
				{
					SCRIPT::REQUEST_SCRIPT(&(Global_9470[Global_21613 /*15*/].f_5));
					MISC::SET_BIT(&Global_9463, 23);
				}
			}
			else if (Global_21613 != 20)
			{
				if (Global_114904.f_14058.f_86 == 0)
				{
					if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("paparazzo3b")) > 0)
					{
						if (Global_21613 == 3)
						{
							if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
							{
								if (PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), false))
								{
									func_117("CELL_38", -1);
									Global_114904.f_14058.f_86 = 1;
								}
							}
						}
					}
				}
				func_52();
			}
		}
	}
}

void func_52()
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Back", &Global_21599, true);
	}
}

void func_53(int iParam0)
{
	if (func_76(0))
	{
		*iParam0 = 1;
		if (!func_78("HROBA_INGNG_BLK"))
		{
			func_117("HROBA_INGNG_BLK", -1);
		}
	}
	else if ((((((((((func_73(PLAYER::PLAYER_ID()) || func_68(PLAYER::PLAYER_ID())) || func_67()) || func_65(PLAYER::PLAYER_ID())) || func_63()) || func_62(0)) || func_61()) || Global_1057441 != -1) || Global_1845250[PLAYER::PLAYER_ID() /*880*/] == 5) || func_58(PLAYER::PLAYER_ID(), 1, 0)) || Global_1989169)
	{
		*iParam0 = 1;
		if (!func_78("HROBA_GFAIL_BLK"))
		{
			func_117("HROBA_GFAIL_BLK", -1);
		}
	}
	else if (!func_76(1) && func_55() >= func_54())
	{
		*iParam0 = 1;
		if (!func_78("APPR_REG_BOSSF1"))
		{
			func_117("APPR_REG_BOSSF1", -1);
		}
	}
}

int func_54()
{
	return Global_262145.f_12910;
}

int func_55()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar2))
		{
			if (func_56(iVar2))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return iVar1;
}

int func_56(int iParam0)
{
	if (func_57(iParam0))
	{
		if (func_57(Global_1892653[iParam0 /*615*/].f_10))
		{
			return Global_1892653[iParam0 /*615*/].f_10 == iParam0;
		}
	}
	return 0;
}

int func_57(var uParam0)
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

int func_58(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (func_59(iParam0))
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

bool func_59(int iParam0)
{
	return func_60(iParam0);
}

var func_60(int iParam0)
{
	return BitTest(Global_1845250[iParam0 /*880*/].f_11.f_1, 0);
}

var func_61()
{
	if (Global_2733002.f_298)
	{
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_2733002.f_297) == 0)
		{
			Global_2733002.f_298 = 0;
			Global_2733002.f_297 = -1;
		}
	}
	return Global_2733002.f_298;
}

int func_62(int iParam0)
{
	return 0;
}

int func_63()
{
	return func_64(Global_4718592.f_132500);
}

int func_64(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_262145.f_31147[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

var func_65(int iParam0)
{
	return func_66(&(Global_2658291[iParam0 /*468*/].f_447), 0);
}

var func_66(var uParam0, int iParam1)
{
	return BitTest(*uParam0, iParam1);
}

var func_67()
{
	return Global_1835500;
}

int func_68(int iParam0)
{
	if (func_72(iParam0))
	{
		return 1;
	}
	if (func_69(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_69(int iParam0)
{
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		if (func_71(8))
		{
			return 1;
		}
		if (Global_2733002.f_5971.f_1 > 0)
		{
			return 1;
		}
	}
	return func_70(iParam0, 20);
}

var func_70(int iParam0, int iParam1)
{
	return BitTest(Global_1892653[iParam0 /*615*/].f_10.f_4, iParam1);
}

bool func_71(int iParam0)
{
	return BitTest(Global_2733002.f_5960, iParam0);
}

int func_72(var uParam0)
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 != -1)
	{
		return BitTest(Global_1892653[iVar0 /*615*/].f_1, 7);
	}
	return 0;
}

int func_73(int iParam0)
{
	if (func_75(iParam0))
	{
		return 1;
	}
	if (func_74(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_74(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_70(iParam0, 9);
	}
	return 0;
}

int func_75(var uParam0)
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 != -1)
	{
		return BitTest(Global_1892653[iVar0 /*615*/].f_1, 0);
	}
	return 0;
}

bool func_76(bool bParam0)
{
	return func_77(PLAYER::PLAYER_ID(), bParam0);
}

int func_77(int iParam0, bool bParam1)
{
	if (!func_57(iParam0))
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_56(iParam0))
		{
			return 0;
		}
	}
	return func_57(Global_1892653[iParam0 /*615*/].f_10);
}

bool func_78(char* sParam0)
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

char* func_79()
{
	return "BLOCK_APP_WEB";
}

void func_80()
{
	if (Global_21576 == 0)
	{
		if (func_15(Global_21563[Global_21555 /*3*/], Global_21556[Global_21555 /*3*/], Global_21570, Global_21570, 350f, 0) >= 1f)
		{
			iLocal_16 = 0;
			MISC::CLEAR_BIT(&Global_9464, 24);
			MISC::SET_BIT(&Global_9464, 26);
		}
	}
}

void func_81()
{
	if (Global_21576 == 0)
	{
		if (func_15(Global_21556[Global_21555 /*3*/], Global_21563[Global_21555 /*3*/], Global_21570, Global_21570, 350f, 1) >= 1f)
		{
			iLocal_16 = 0;
			MISC::CLEAR_BIT(&Global_9464, 25);
			if (Global_22996)
			{
				MISC::CLEAR_BIT(&Global_9464, 27);
			}
		}
	}
}

void func_82()
{
	if (Global_21576 == 0 && Global_21550 == 0)
	{
		if (func_15(Global_21563[Global_21555 /*3*/], Global_21556[Global_21555 /*3*/], Global_21570, Global_21570, 350f, 0) >= 1f)
		{
			iLocal_16 = 0;
			Global_4525123 = 0;
		}
	}
}

void func_83()
{
	float fVar0;
	float fVar1;
	
	if (BitTest(Global_9465, 2))
	{
		MISC::SET_BIT(&Global_9464, 8);
		MISC::SET_BIT(&Global_9463, 14);
		Global_21550 = 0;
		iLocal_16 = 0;
		MOBILE::SET_MOBILE_PHONE_ROTATION(Global_21570, 0);
	}
	else if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("appemail")) < 1)
	{
		fVar0 = func_15(Global_21556[Global_21555 /*3*/], Global_21563[Global_21555 /*3*/], Global_21573, Global_21570, 450f, 1);
		if (fVar0 >= 1f)
		{
			MISC::SET_BIT(&Global_9464, 8);
			MISC::SET_BIT(&Global_9463, 14);
			Global_21550 = 0;
			iLocal_16 = 0;
			MISC::CLEAR_BIT(&Global_9465, 2);
			iLocal_80 = 0;
		}
		else if (fVar0 >= 0.75f)
		{
			MISC::SET_BIT(&Global_9464, 8);
		}
	}
	else
	{
		if (iLocal_80 == 0)
		{
			Local_81 = { Global_21563[Global_21555 /*3*/] };
			Local_81.f_0 = (Local_81.f_0 - 10f);
			Local_81.f_1 = (Local_81.f_1 + 20f);
			iLocal_80 = 1;
		}
		fVar1 = func_15(Global_21556[Global_21555 /*3*/], Local_81, -90f, 0f, 90f, -90f, 0f, 90f, 450f, 1);
		if (fVar1 >= 1f)
		{
			MISC::SET_BIT(&Global_9464, 8);
			MISC::SET_BIT(&Global_9463, 14);
			Global_21550 = 0;
			iLocal_16 = 0;
			MISC::CLEAR_BIT(&Global_9465, 2);
			iLocal_80 = 0;
		}
		else if (fVar1 >= 0.75f)
		{
			MISC::SET_BIT(&Global_9464, 8);
		}
	}
}

void func_84()
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iLocal_105 = NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), iLocal_104);
	}
	else
	{
		iLocal_100 = MISC::GET_GAME_TIMER();
		iLocal_105 = (iLocal_100 - iLocal_99);
	}
	if (iLocal_105 > 4000)
	{
		iLocal_87 = func_143();
		if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
		{
		}
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			iLocal_104 = NETWORK::GET_NETWORK_TIME();
		}
		else
		{
			iLocal_99 = MISC::GET_GAME_TIMER();
		}
	}
}

void func_85()
{
	if (Global_21609 == 1)
	{
		func_159();
		if (Global_21588 == 0)
		{
			if (func_94(2, Global_21580, 0))
			{
				if (BitTest(Global_9464, 8))
				{
					if (Global_23030 == 0)
					{
						func_52();
						Global_21588 = 1;
						Global_21609 = 3;
						Global_23032 = 1;
						if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
						{
							AUDIO::STOP_PED_RINGTONE(PLAYER::PLAYER_PED_ID());
						}
					}
				}
			}
		}
		if (Global_21588 == 0)
		{
			if (func_94(2, Global_21579, 0))
			{
				if (BitTest(Global_9464, 8))
				{
					func_44();
					Global_21588 = 1;
					Global_21609 = 2;
					if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
					{
						AUDIO::STOP_PED_RINGTONE(PLAYER::PLAYER_PED_ID());
					}
					func_91();
					func_90();
				}
			}
		}
	}
	else
	{
		if (iLocal_97 == 0)
		{
			if (BitTest(Global_9463, 27))
			{
				iLocal_97 = 1;
				SYSTEM::SETTIMERB(0);
			}
		}
		else
		{
			if (Global_21610.f_1 > 3)
			{
				if (SYSTEM::TIMERB() > 1500)
				{
					if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
					{
						if (!AUDIO::IS_PED_RINGTONE_PLAYING(PLAYER::PLAYER_PED_ID()))
						{
							if (Global_21553)
							{
								AUDIO::PLAY_PED_RINGTONE("Dial_and_Remote_Ring", PLAYER::PLAYER_PED_ID(), true);
							}
							else if (!BitTest(Global_9465, 5))
							{
								AUDIO::PLAY_PED_RINGTONE("Remote_Ring", PLAYER::PLAYER_PED_ID(), true);
							}
						}
					}
				}
			}
			if (!BitTest(Global_9463, 27))
			{
				iLocal_97 = 0;
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
				{
					AUDIO::STOP_PED_RINGTONE(PLAYER::PLAYER_PED_ID());
				}
			}
		}
		if (Global_21609 == 0)
		{
			if (Global_21588 == 0)
			{
				if ((func_94(2, Global_21578, 0) || Global_2740211 == 1) && !Global_79048)
				{
					if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
					{
						if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
						{
							if (BitTest(Global_9464, 8))
							{
								switch (Global_21610.f_1)
								{
									case 3:
										break;
									
									case 4:
										break;
									
									case 6:
										if (Global_21842 == 0)
										{
											if (Global_21843 == 1)
											{
												func_52();
												Global_21843 = 0;
												func_151(Global_21591, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
												func_123();
												func_122();
												func_121(1);
												func_151(Global_21591, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_21614), -1082130432, -1082130432, -1082130432);
											}
											else
											{
												if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
												{
													AUDIO::PLAY_SOUND_FRONTEND(-1, "Put_Away", &Global_21599, true);
												}
												iLocal_16 = 0;
												Global_21610.f_1 = 3;
											}
										}
										break;
									
									case 5:
										Global_21610.f_1 = 3;
										break;
									
									case 7:
										if (BitTest(Global_9463, 23) == 1)
										{
										}
										if ((Global_10088 - Global_10087) > Global_10089 && BitTest(Global_9463, 23) == 0)
										{
											if (BitTest(Global_9464, 0))
											{
											}
											else
											{
												func_52();
												Global_10086 = 1;
												Global_21610.f_1 = 6;
												if (Global_80280)
												{
													func_151(Global_21591, "SET_THEME", SYSTEM::TO_FLOAT(Global_4525120), -1082130432, -1082130432, -1082130432, -1082130432);
												}
												Global_9466 = 99;
												if (Global_2740211 == 0)
												{
													func_86();
												}
											}
										}
										break;
									
									case 8:
										break;
									
									case 10:
										if (Global_8778 == 132)
										{
											if (Global_2738986.f_1 || BitTest(Global_9464, 20))
											{
												func_52();
												func_115();
											}
										}
										else
										{
											func_52();
											func_115();
											Global_23032 = 1;
										}
										break;
									
									case 9:
										if (Global_22983 == 0)
										{
											Global_21610.f_1 = 3;
										}
										break;
									
									default:
										break;
								}
								if (Global_2740211 == 1)
								{
									iLocal_120 = 1;
									Global_2740211 = 0;
								}
							}
						}
					}
				}
			}
		}
	}
}

void func_86()
{
	char cVar0[24];
	
	if (Global_21593 == 1)
	{
		return;
	}
	if (Global_21610.f_1 < 4)
	{
		return;
	}
	while (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_21591))
	{
		if (Global_80280)
		{
			return;
		}
		SYSTEM::WAIT(0);
	}
	switch (Global_21610.f_1)
	{
		case 6:
			func_151(Global_21591, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_121(Global_10085);
			if (Global_10085 == 1)
			{
				func_151(Global_21591, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_21614), -1082130432, -1082130432, -1082130432);
				Global_21590 = Global_21614;
			}
			else
			{
				func_151(Global_21591, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_21615), -1082130432, -1082130432, -1082130432);
				Global_21590 = Global_21615;
			}
			if (Global_21598)
			{
				func_119(Global_21591, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
				func_119(Global_21591, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
			}
			else
			{
				func_119(Global_21591, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
				func_119(Global_21591, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_21844 == 0)
			{
				func_119(Global_21591, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				MISC::CLEAR_BIT(&Global_9463, 17);
			}
			else if (Global_80280)
			{
				func_119(Global_21591, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				MISC::CLEAR_BIT(&Global_9463, 17);
			}
			else
			{
				if (Global_21843 == 1)
				{
					if (Global_21598)
					{
						func_119(Global_21591, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
					}
					else
					{
						func_119(Global_21591, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else if (Global_21598)
				{
					func_119(Global_21591, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
				}
				else
				{
					func_119(Global_21591, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				MISC::SET_BIT(&Global_9463, 17);
			}
			if (Global_80280)
			{
				Global_21590 = Global_21614;
				if (func_46() && BitTest(Global_9465, 9))
				{
					func_40(0);
				}
				func_151(Global_21591, "DISPLAY_VIEW", 4f, SYSTEM::TO_FLOAT(Global_21590), -1082130432, -1082130432, -1082130432);
				func_151(Global_21591, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_21590), -1082130432, -1082130432, -1082130432);
			}
			break;
		
		case 7:
			break;
		
		case 10:
			func_151(Global_21591, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_119(Global_21591, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_119(Global_21591, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			MISC::CLEAR_BIT(&Global_9463, 17);
			if (BitTest(Global_9463, 20))
			{
				func_119(Global_21591, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_21598)
			{
				func_119(Global_21591, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_21553)
				{
					func_119(Global_21591, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_119(Global_21591, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			break;
		
		case 9:
			if (Global_21609 == 1)
			{
				func_145();
				func_151(Global_21591, "SET_THEME", SYSTEM::TO_FLOAT(Global_114904.f_14058[Global_21610 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				if (Global_22996)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21591, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(4);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_CONDFON");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_22998);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					func_38("CELL_300");
					func_38("CELL_217");
					func_38("CELL_217");
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				else if (func_89(Global_8778, Global_21610) == 0)
				{
					func_119(Global_21591, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(2), -1f, -1f, &(Global_118[Global_8778 /*10*/].f_4), "CELL_300", "CELL_217", "CELL_195", 0);
				}
				else
				{
					func_119(Global_21591, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(2), -1f, -1f, &(Global_2339[Global_8778 /*29*/].f_3), &(Global_2339[Global_8778 /*29*/].f_7), "CELL_217", &(Global_2339[Global_8778 /*29*/].f_3), 0);
				}
				func_151(Global_21591, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			else if (Global_22983 == 4 || Global_22983 == 3)
			{
				func_151(Global_21591, "SET_THEME", SYSTEM::TO_FLOAT(Global_114904.f_14058[Global_21610 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				func_145();
				if (Global_22996)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21591, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(4);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_CONDFON");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_22998);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					func_38("CELL_300");
					func_38("CELL_219");
					func_38("CELL_219");
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				else
				{
					if (Global_23241)
					{
						StringCopy(&cVar0, "CELL_219", 24);
					}
					else
					{
						StringCopy(&cVar0, "CELL_211", 24);
					}
					if (func_89(Global_8778, Global_21610) == 0)
					{
						func_151(Global_21591, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_119(Global_21591, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(3), -1f, -1f, &(Global_118[Global_8778 /*10*/].f_4), "CELL_300", &cVar0, "CELL_195", 0);
					}
					else
					{
						func_151(Global_21591, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_119(Global_21591, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(3), -1f, -1f, &(Global_2339[Global_8778 /*29*/].f_3), &(Global_2339[Global_8778 /*29*/].f_7), &cVar0, &(Global_2339[Global_8778 /*29*/].f_3), 0);
					}
				}
				func_151(Global_21591, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			func_87();
			break;
		
		default:
			break;
	}
}

void func_87()
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_21591))
	{
		func_88();
		if (Global_21609 == 1)
		{
			if (Global_21598)
			{
				func_119(Global_21591, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, "CELL_203", 0, 0, 0, 0);
			}
			else
			{
				func_119(Global_21591, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_23030)
			{
				func_119(Global_21591, "SET_SOFT_KEYS", 3f, 0f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (BitTest(Global_9463, 20))
			{
				func_119(Global_21591, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_21598)
			{
				func_119(Global_21591, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_204", 0, 0, 0, 0);
			}
			else
			{
				func_119(Global_21591, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			func_119(Global_21591, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			MISC::CLEAR_BIT(&Global_9463, 17);
		}
		else
		{
			func_119(Global_21591, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_119(Global_21591, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			MISC::CLEAR_BIT(&Global_9463, 17);
			if (BitTest(Global_9463, 20))
			{
				func_119(Global_21591, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_21598)
			{
				func_119(Global_21591, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_21553)
				{
					func_119(Global_21591, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_119(Global_21591, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
		}
	}
}

void func_88()
{
	if (Global_80280)
	{
		func_119(Global_21591, "SET_SOFT_KEYS", 1f, 0f, 9f, -1f, -1f, 0, 0, 0, 0, 0);
		MISC::CLEAR_BIT(&Global_9463, 17);
	}
}

int func_89(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_2339[iParam0 /*29*/].f_24[iParam1];
}

void func_90()
{
	if (Global_22996)
	{
		if (Global_80280)
		{
			if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_21591))
			{
				if (!MISC::IS_PC_VERSION())
				{
					func_119(Global_21591, "SET_SOFT_KEYS", 1f, 1f, 8f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
					MISC::SET_BIT(&(Global_2733002.f_918), 15);
				}
			}
		}
	}
}

void func_91()
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_21591))
	{
		if (!Global_22991)
		{
			func_119(Global_21591, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_119(Global_21591, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			MISC::CLEAR_BIT(&Global_9463, 17);
			if (BitTest(Global_9463, 20))
			{
				func_119(Global_21591, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_21598)
			{
				func_119(Global_21591, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_21553)
				{
					func_119(Global_21591, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_119(Global_21591, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_22996)
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21591, "SET_DATA_SLOT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(4);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_CONDFON");
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_22998);
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				func_38("CELL_300");
				func_38("CELL_219");
				func_38("CELL_219");
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
			else if (func_89(Global_8778, Global_21610) == 0)
			{
				func_119(Global_21591, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(3), -1f, -1f, &(Global_118[Global_8778 /*10*/].f_4), "CELL_300", "CELL_219", "CELL_195", 0);
			}
			else
			{
				func_119(Global_21591, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(3), -1f, -1f, &(Global_2339[Global_8778 /*29*/].f_3), &(Global_2339[Global_8778 /*29*/].f_7), "CELL_219", &(Global_2339[Global_8778 /*29*/].f_3), 0);
			}
		}
		func_151(Global_21591, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
	}
}

void func_92()
{
	Global_21849 = 0;
	func_93();
}

void func_93()
{
	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING() || Global_21609 == 1)
	{
		AUDIO::RESTART_SCRIPTED_CONVERSATION();
		Global_23994 = 0;
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		Global_22983 = 6;
		Global_21610.f_1 = Global_21612;
		return;
	}
}

int func_94(int iParam0, int iParam1, int iParam2)
{
	if (PAD::IS_CONTROL_JUST_PRESSED(iParam0, iParam1) || (iParam2 == 1 && PAD::IS_DISABLED_CONTROL_JUST_PRESSED(iParam0, iParam1)))
	{
		if (MISC::IS_PC_VERSION())
		{
			if (MISC::UPDATE_ONSCREEN_KEYBOARD() == 0 || (NETWORK::NETWORK_TEXT_CHAT_IS_TYPING() && PAD::IS_USING_KEYBOARD_AND_MOUSE(2)))
			{
				return 0;
			}
		}
		if (HUD::IS_PAUSE_MENU_ACTIVE() || HUD::IS_WARNING_MESSAGE_ACTIVE())
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

int func_95()
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("apptrackify")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_96(bool bParam0)
{
	if (!bParam0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return BitTest(Global_80529, 0);
}

void func_97(int iParam0)
{
	if (func_99())
	{
		return;
	}
	if (Global_21842)
	{
		if (func_7())
		{
			func_5(1, 1);
		}
		else
		{
			func_5(0, 0);
		}
	}
	if (Global_21610.f_1 == 10 || Global_21610.f_1 == 9)
	{
		MISC::SET_BIT(&Global_9464, 16);
	}
	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
	}
	Global_22983 = 5;
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&Global_9463, 30);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_9463, 30);
	}
	if (!func_98())
	{
		Global_21610.f_1 = 3;
	}
}

int func_98()
{
	if (Global_21610.f_1 == 1 || Global_21610.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

bool func_99()
{
	return BitTest(Global_1964145, 19);
}

void func_100()
{
	if (Global_21610.f_1 == 9 || Global_21610.f_1 == 10)
	{
		Global_23036 = 0;
		Global_23032 = 1;
	}
}

void func_101()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 0;
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (func_116() && PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar1 = 1;
		}
	}
	if (!Global_80280)
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && iVar1 == 0)
		{
			iVar2 = PED::GET_PED_PROP_INDEX(PLAYER::PLAYER_PED_ID(), 0, 1);
			if (Global_80280)
			{
				if (((((iVar2 == 15 || iVar2 == 16) || iVar2 == 17) || iVar2 == 18) || iVar2 == 19) || PED::IS_PED_WEARING_HELMET(PLAYER::PLAYER_PED_ID()))
				{
					iVar0 = 1;
				}
			}
			else if (PED::IS_PED_WEARING_HELMET(PLAYER::PLAYER_PED_ID()))
			{
				iVar0 = 1;
			}
			if (!Global_21553)
			{
				if (Global_8778 != 128)
				{
					if (iVar0 == 0)
					{
						if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
						{
							if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
							{
							}
							else
							{
								if (Global_80280)
								{
									PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 244, false);
									PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 243, false);
									PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 242, false);
								}
								MISC::SET_BIT(&Global_9463, 11);
								TASK::TASK_USE_MOBILE_PHONE(PLAYER::PLAYER_PED_ID(), true, 1);
							}
						}
					}
				}
			}
		}
	}
}

void func_102()
{
	if ((BitTest(Global_9463, 14) && Global_4525123 == 0) && Global_21550 == 0)
	{
		if (func_107())
		{
		}
		else
		{
			func_103();
		}
		if (Global_21610.f_1 == 9)
		{
			if (Global_22996 == 0)
			{
				iLocal_74 = 1;
			}
		}
	}
}

void func_103()
{
	struct<2> Var0;
	
	MOBILE::GET_MOBILE_PHONE_POSITION(&Var0);
	if (Global_21563[Global_21555 /*3*/].f_1 == Var0.f_1)
	{
	}
	else
	{
		Global_21550 = 1;
	}
}

void func_104()
{
	if ((BitTest(Global_9463, 14) && Global_4525123 == 0) && Global_21550 == 0)
	{
		if (iLocal_74 == 0)
		{
			if (BitTest(Global_9464, 26))
			{
				MISC::CLEAR_BIT(&Global_9464, 24);
				MISC::CLEAR_BIT(&Global_9464, 25);
				MISC::CLEAR_BIT(&Global_9464, 27);
				MISC::CLEAR_BIT(&Global_9464, 26);
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
				{
					if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						func_103();
					}
					else if (func_106() == 0)
					{
						func_103();
					}
				}
			}
		}
		if (Global_21610.f_1 == 10 || Global_21610.f_1 == 9)
		{
			if (func_106())
			{
				func_105();
			}
		}
		else if (func_107())
		{
		}
		else if (func_106())
		{
			func_105();
		}
		if (Global_21610.f_1 == 9)
		{
			if (Global_22996 == 0)
			{
				iLocal_74 = 1;
			}
		}
	}
}

void func_105()
{
	struct<2> Var0;
	
	MOBILE::GET_MOBILE_PHONE_POSITION(&Var0);
	if (Global_21556[Global_21555 /*3*/].f_1 == Var0.f_1)
	{
	}
	else
	{
		Global_4525123 = 1;
	}
}

int func_106()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		if (Global_21610.f_1 == 10 || Global_21610.f_1 == 9)
		{
			if (Global_21553 == 0)
			{
				if (Global_8778 != 128)
				{
					if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						if (Global_22983 != 2)
						{
						}
					}
				}
			}
		}
		if (func_120(14))
		{
			return 0;
		}
		if (PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), false))
		{
			return 0;
		}
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			if (!CAM::IS_CINEMATIC_FIRST_PERSON_VEHICLE_INTERIOR_CAM_RENDERING())
			{
				if (ENTITY::IS_ENTITY_IN_WATER(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
				{
					return 0;
				}
			}
		}
		if (((PED::IS_PED_SWIMMING(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_SWIMMING_UNDER_WATER(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || (PED::IS_PED_HANGING_ON_TO_VEHICLE(PLAYER::PLAYER_PED_ID()) && !(BitTest(Global_4718592.f_38, 17) && (NETWORK::NETWORK_IS_ACTIVITY_SESSION() || Global_1926461))))
		{
			return 0;
		}
		if (Global_113952)
		{
			return 0;
		}
	}
	if (Global_80280)
	{
		return 0;
	}
	iVar2 = 0;
	iVar0 = CAM::GET_CAM_ACTIVE_VIEW_MODE_CONTEXT();
	iVar1 = CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(iVar0);
	if (iVar1 == 4 && (iVar0 == 0 || CAM::IS_CINEMATIC_FIRST_PERSON_VEHICLE_INTERIOR_CAM_RENDERING()))
	{
		iVar2 = 1;
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				iVar3 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
				if ((((((((VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(iVar3)) || VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(iVar3))) || VEHICLE::IS_THIS_MODEL_A_QUADBIKE(ENTITY::GET_ENTITY_MODEL(iVar3))) || ENTITY::GET_ENTITY_MODEL(iVar3) == joaat("seashark")) || ENTITY::GET_ENTITY_MODEL(iVar3) == joaat("seashark2")) || ENTITY::GET_ENTITY_MODEL(iVar3) == joaat("rhino")) || ENTITY::GET_ENTITY_MODEL(iVar3) == joaat("submersible")) || ENTITY::GET_ENTITY_MODEL(iVar3) == joaat("submersible2")) || ENTITY::GET_ENTITY_MODEL(iVar3) == joaat("toro"))
				{
					iVar2 = 0;
				}
			}
		}
	}
	if (Global_4525122 || iVar2 == 1)
	{
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("apptrackify")) > 0 || Global_114904.f_14058.f_89)
		{
			if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("michael2")) > 0)
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
			return 1;
		}
	}
	return 0;
}

int func_107()
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("appcamera")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_108(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (SCRIPT::DOES_SCRIPT_WITH_NAME_HASH_EXIST(Global_9470[iParam0 /*15*/].f_9) && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_9470[iParam0 /*15*/].f_9) > 0)
	{
		Stack.Push(Global_9470[iParam0 /*15*/].f_4 != iParam3);
		Call_Loc(iParam4);
		if ((StackVal && StackVal) && !BitTest(Global_9465, 9))
		{
			MISC::SET_BIT(&Global_9465, 9);
			Global_21590 = iParam3;
			Global_21614 = Global_21590;
		}
		else
		{
			Stack.Push(Global_9470[iParam1 /*15*/].f_4 == iParam2);
			Call_Loc(iParam4);
			if ((StackVal && !StackVal) && BitTest(Global_9465, 9))
			{
				MISC::CLEAR_BIT(&Global_9465, 9);
				Global_21590 = iParam2;
				Global_21614 = Global_21590;
			}
		}
	}
}

bool func_109()
{
	return (func_110() && !NETWORK::NETWORK_IS_ACTIVITY_SESSION());
}

bool func_110()
{
	return func_111(9539, -1);
}

bool func_111(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = func_112();
	}
	return STATS::GET_PACKED_STAT_BOOL_CODE(iParam0, iParam1);
}

int func_112()
{
	return Global_1574927;
}

void func_113()
{
	if (!BitTest(Global_4524844, 24))
	{
		if (Global_21610.f_1 > 4)
		{
			MISC::SET_BIT(&Global_4524844, 24);
		}
	}
}

int func_114()
{
	if (((Global_9470[23 /*15*/].f_4 != 5 && func_109()) && !BitTest(Global_9465, 9)) || (Global_9470[23 /*15*/].f_4 == 5 && !func_109()))
	{
		return 1;
	}
	return 0;
}

void func_115()
{
	if (!Global_80280)
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (BitTest(Global_9463, 11))
			{
				if (!Global_21553)
				{
					TASK::TASK_USE_MOBILE_PHONE(PLAYER::PLAYER_PED_ID(), false, 1);
				}
				if (Global_80280)
				{
					PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 244, true);
					PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 243, true);
					PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 242, true);
				}
				MISC::CLEAR_BIT(&Global_9463, 11);
			}
		}
	}
}

int func_116()
{
	int iVar0;
	int iVar1;
	
	iVar0 = CAM::GET_CAM_ACTIVE_VIEW_MODE_CONTEXT();
	iVar1 = CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(iVar0);
	if (iVar1 == 4)
	{
		return 1;
	}
	return 0;
}

void func_117(char* sParam0, int iParam1)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam1);
}

void func_118()
{
	MOBILE::GET_MOBILE_PHONE_RENDER_ID(&iLocal_84);
	if (iLocal_84 == -1)
	{
	}
}

void func_119(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, sParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam2));
	if (fParam3 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam3));
	}
	if (fParam4 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam4));
	}
	if (fParam5 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam5));
	}
	if (fParam6 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam6));
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam7))
	{
		func_38(sParam7);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
	{
		func_38(sParam8);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam9))
	{
		func_38(sParam9);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam10))
	{
		func_38(sParam10);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam11))
	{
		func_38(sParam11);
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

bool func_120(int iParam0)
{
	return Global_44869 == iParam0;
}

void func_121(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	Global_24052 = 0;
	Global_10085 = iParam0;
	func_43();
	iVar0 = 0;
	while (iVar0 < 9)
	{
		iVar1 = 0;
		if (func_120(14))
		{
			while (iVar1 < 35)
			{
				if (iParam0 == Global_9470[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_9470[iVar1 /*15*/].f_4)
					{
						if (Global_10048[iVar0] == 0)
						{
							Global_10011[iVar0] = iVar1;
							if (iVar1 == 3)
							{
								if (BitTest(Global_9464, 3))
								{
									iVar2 = 42;
									Global_21846 = 1;
								}
								else
								{
									iVar2 = 255;
									Global_21846 = 0;
								}
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21591, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_9470[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_38(&(Global_9470[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar2);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							if (Global_2696959)
							{
								if (iVar1 == 14)
								{
									func_119(Global_21591, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_9470[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_24046), -1f, &(Global_9470[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							Global_10048[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		else
		{
			while (iVar1 < 35)
			{
				if (iParam0 == Global_9470[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_9470[iVar1 /*15*/].f_4)
					{
						if (Global_10048[iVar0] == 0)
						{
							Global_10011[iVar0] = iVar1;
							if (iVar1 == 1)
							{
								iVar3 = 0;
								while (iVar3 < 35)
								{
									if (Global_114904.f_14148[iVar3 /*104*/].f_24 != 0)
									{
										if (Global_114904.f_14148[iVar3 /*104*/].f_28 == 0)
										{
											if (Global_114904.f_14148[iVar3 /*104*/].f_99[Global_21610] == 1)
											{
												Global_24052++;
											}
										}
									}
									iVar3++;
								}
								func_119(Global_21591, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_9470[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_24052), -1f, &(Global_9470[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 7)
							{
								if (Global_80280)
								{
									iVar4 = 0;
									iVar4 = Global_4521273;
									iVar5 = 0;
									while (iVar5 < 12)
									{
										if (Global_4521275[iVar5 /*296*/].f_24 != 0)
										{
											if (Global_4521275[iVar5 /*296*/].f_28 == 0)
											{
												if (Global_4521275[iVar5 /*296*/].f_291[Global_21610] == 1)
												{
													iVar4++;
												}
											}
										}
										iVar5++;
									}
									func_119(Global_21591, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_9470[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar4), -1f, &(Global_9470[iVar1 /*15*/]), 0, 0, 0, 0);
								}
								else
								{
									switch (Global_21610)
									{
										case 0:
											iVar6 = Global_46105;
											break;
										
										case 1:
											iVar6 = Global_46106;
											break;
										
										case 2:
											iVar6 = Global_46107;
											break;
										
										default:
											break;
									}
									func_119(Global_21591, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_9470[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar6), -1f, &(Global_9470[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_119(Global_21591, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_9470[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_24046), -1f, &(Global_9470[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21591, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_9470[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_38(&(Global_9470[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_9469);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (iVar1 == 2)
							{
								if (BitTest(Global_9464, 6))
								{
									iVar7 = 42;
								}
								else
								{
									iVar7 = 255;
								}
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21591, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_9470[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_38(&(Global_9470[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar7);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (iVar1 == 3)
							{
								if (BitTest(Global_9464, 3))
								{
									iVar8 = 42;
									Global_21846 = 1;
								}
								else
								{
									iVar8 = 255;
									Global_21846 = 0;
								}
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21591, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_9470[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_38(&(Global_9470[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar8);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (iVar1 == 8)
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21591, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_9470[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_38(&(Global_9470[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(42);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if ((iVar1 == 24 && MISC::ARE_STRINGS_EQUAL(&(Global_9470[iVar1 /*15*/]), "CELL_BENWEB")) && BitTest(Global_9464, 6))
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21591, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_9470[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_38(&(Global_9470[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(42);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (Global_9470[iVar1 /*15*/].f_10 == 57 && iVar1 == 24)
							{
								iVar9 = 0;
								iVar9 = Global_1881981.f_1;
								func_119(Global_21591, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_9470[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar9), -1f, &(Global_9470[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_119(Global_21591, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_9470[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(0), -1f, &(Global_9470[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							Global_10048[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

void func_122()
{
	if (Global_80280 == 0)
	{
		Global_9470[14 /*15*/].f_4 = -99;
		Global_9470[4 /*15*/].f_4 = -99;
		if (Global_2696959)
		{
			if (func_120(14))
			{
				func_42(2, "CELL_2", 2, "appInternet", 6, 1, 1, 0, 0);
				func_42(14, "CELL_29", 7, "appMPJobListNEW", 12, 1, 1, 0, 0);
			}
			else
			{
				func_42(14, "CELL_29", 2, "appMPJobListNEW", 12, 1, 1, 0, 0);
			}
		}
		else
		{
			func_42(4, "CELL_23", 2, "appChecklist", 39, 1, 1, 0, 0);
		}
	}
}

void func_123()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 35)
	{
		Global_9470[iVar0 /*15*/].f_4 = -99;
		iVar0++;
	}
	if (Global_80280 == 0)
	{
		iVar1 = 0;
		while (iVar2 < 161)
		{
			if (func_124(iVar2, Global_21610) == 1)
			{
				iVar1 = 1;
			}
			iVar2++;
		}
		func_42(7, "CELL_5", 0, "appEmail", 4, 1, 1, 0, 0);
		func_42(1, "CELL_1", 1, "appTextMessage", 2, 1, 1, 0, 0);
		func_42(4, "CELL_23", 2, "appChecklist", 39, 1, 1, 0, 0);
		if ((Global_44869 == 15 && func_96(0) == 0) && Global_9468 == 0)
		{
			func_42(20, "CELL_32", 3, "appSettings", 43, 1, 1, 0, 0);
			Global_21845 = 0;
			Global_9469 = 255;
		}
		else
		{
			func_42(20, "CELL_32", 3, "appSettings", 43, 1, 1, 0, 0);
			Global_21845 = 1;
			Global_9469 = 42;
		}
		if (iVar1 == 1)
		{
			func_42(0, "CELL_0", 4, "appContacts", 27, 1, 1, 0, 0);
		}
		else
		{
			func_42(0, "CELL_0", 4, "appContacts", 5, 1, 1, 0, 0);
		}
		func_42(10, "CELL_16", 5, "appSettings", 24, 1, 1, 0, 0);
		func_42(3, "CELL_7", 6, "appCamera", 1, 1, 1, 0, 0);
		func_42(2, "CELL_2", 7, "appInternet", 6, 1, 1, 0, 0);
		if (Global_114904.f_14058.f_89 == 1)
		{
			func_42(17, "CELL_28", 8, "appTrackify", 42, 1, 1, 0, 0);
		}
		if (Global_114904.f_14058.f_88 == 1)
		{
			func_42(16, "CELL_25", 0, "appContacts", 40, 2, 1, 0, 0);
		}
		func_42(26, "CELL_14", -99, "appContacts", 17, 2, 1, 0, 0);
		func_42(9, "CELL_13", -99, "appContacts", 13, 2, 1, 0, 0);
		func_42(11, "CELL_14", -99, "appContacts", 8, 2, 1, 0, 0);
		func_42(28, "CELL_15", -99, "appContacts", 17, 2, 1, 0, 0);
		func_42(29, "CELL_15", -99, "appContacts", 17, 2, 1, 0, 0);
		func_42(30, "CELL_15", -99, "appSettings", 17, 2, 1, 0, 0);
		func_42(31, "CELL_15", -99, "appContacts", 17, 2, 1, 0, 0);
		func_42(32, "CELL_15", -99, "appContacts", 17, 2, 1, 0, 0);
		func_42(33, "CELL_15", -99, "appSettings", 17, 2, 1, 0, 0);
	}
	else
	{
		func_42(7, "CELL_5", 0, "appMPEmail", 4, 1, 1, 0, 0);
		func_42(21, "CELL_37", 3, "AppJIPMP", 14, 1, 1, 0, 0);
		if (func_109())
		{
			func_42(23, "CELL_HACKER_ROB", 5, "appHackerDen", 62, 1, 1, 0, 0);
		}
		else
		{
			func_42(10, "CELL_16", 5, "appSettings", 24, 1, 1, 0, 0);
		}
		func_42(1, "CELL_1", 1, "appTextMessage", 2, 1, 1, 0, 0);
		func_42(3, "CELL_7", 6, "appCamera", 1, 1, 1, 0, 0);
		func_42(2, "CELL_2", 7, "appInternet", 6, 1, 1, 0, 0);
		func_42(14, "CELL_29", 4, "appMPJobListNEW", 12, 1, 1, 0, 0);
		func_42(0, "CELL_0", 2, "appContacts", 5, 1, 1, 0, 0);
		if (BitTest(Global_4524844, 4))
		{
			func_42(17, "CELL_28", 8, "appTrackify", 42, 1, 1, 0, 0);
		}
		func_42(13, "CELL_35", -99, "appMPCopBackup", 39, 1, 1, 0, 0);
		func_42(13, "CELL_20", -99, "appMPCopBackup", 16, 1, 1, 0, 0);
		func_42(15, "CELL_18", -99, "appContacts", 8, 1, 1, 0, 0);
		func_42(9, "CELL_13", -99, "appContacts", 13, 2, 1, 0, 0);
		func_42(5, "CELL_4", -99, "appContacts", 12, 2, 1, 0, 0);
		func_42(24, "CELL_15", 0, "appContacts", 17, 2, 1, 0, 0);
		func_42(25, "CELL_15", 1, "appContacts", 17, 2, 1, 0, 0);
		func_42(26, "CELL_15", 2, "appContacts", 17, 2, 1, 0, 0);
		func_42(27, "CELL_15", 3, "appContacts", 17, 2, 1, 0, 0);
		func_42(28, "CELL_15", 4, "appContacts", 17, 2, 1, 0, 0);
		func_42(29, "CELL_15", 5, "appContacts", 17, 2, 1, 0, 0);
		func_42(30, "CELL_15", 6, "appContacts", 17, 2, 1, 0, 0);
		func_42(31, "CELL_15", 7, "appContacts", 17, 2, 1, 0, 0);
		func_42(32, "CELL_15", 8, "appContacts", 17, 2, 1, 0, 0);
		func_42(33, "CELL_15", 9, "appContacts", 17, 2, 1, 0, 0);
		func_42(34, "CELL_15", 10, "appContacts", 17, 2, 1, 0, 0);
		if (!BitTest(Global_4524844, 4))
		{
			if (Global_1836187)
			{
				func_42(24, "CELL_CIRCBREAK", 8, "AppVLSI", 54, 1, 1, 0, 0);
			}
			else if (BitTest(Global_4524844, 20))
			{
				func_42(24, "CELL_SIGHTS", 8, "AppSettings", 59, 1, 1, 0, 0);
			}
			else if (BitTest(Global_4524844, 22))
			{
				func_42(24, "CELL_EXTRACT", 8, "AppExtraction", 58, 1, 1, 0, 0);
			}
			else if (BitTest(Global_4524844, 26))
			{
				if (func_160())
				{
					func_42(24, "CELL_0", -99, "appContacts", 5, 1, 1, 0, 0);
				}
				else
				{
					func_42(24, "CELL_SECHACK", 8, "AppSecuroHack", 57, 1, 1, 0, 0);
				}
			}
		}
		if ((((BitTest(Global_4524844, 4) == 0 && Global_1836187 == 0) && BitTest(Global_4524844, 20) == 0) && BitTest(Global_4524844, 22) == 0) && BitTest(Global_4524844, 26) == 0)
		{
			if (func_160())
			{
				func_42(24, "CELL_0", -99, "appContacts", 5, 1, 1, 0, 0);
			}
			else
			{
				func_42(24, "CELL_BOSSAGE", 8, "appMPBossAgency", 57, 1, 1, 0, 0);
			}
		}
	}
}

int func_124(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_2339[iParam0 /*29*/].f_19[iParam1];
}

int func_125(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 1)
	{
	}
	if (iParam0 == 0)
	{
		if (func_129() == 0)
		{
			return 0;
		}
	}
	if (func_127(&iVar0) && MISC::GET_PROFILE_SETTING(903) == 1)
	{
		return 1;
	}
	if (!func_127(&iVar0))
	{
		if (iVar0 == 6)
		{
			return 1;
		}
		else if (iVar0 == 7)
		{
			return 1;
		}
		else if (iVar0 == 8)
		{
			return 1;
		}
		else if (iVar0 == 10)
		{
			return 1;
		}
		else if (iVar0 == 12)
		{
			return 1;
		}
		else if (iVar0 == 13)
		{
			return 1;
		}
		else if (iVar0 == 11)
		{
			return 1;
		}
		else if (func_126(iVar0))
		{
			return 1;
		}
	}
	return 0;
}

int func_126(int iParam0)
{
	switch (iParam0)
	{
		case 21:
		case 22:
		case 23:
		case 24:
			return 1;
			break;
	}
	return 0;
}

bool func_127(int* iParam0)
{
	if (func_128())
	{
		*iParam0 = 11;
		return 1;
	}
	return NETWORK::NETWORK_CAN_ACCESS_MULTIPLAYER(iParam0);
}

bool func_128()
{
	return Global_34053;
}

int func_129()
{
	if (func_130())
	{
		if (!NETWORK::NETWORK_IS_NP_AVAILABLE())
		{
			if (NETWORK::NETWORK_GET_NP_UNAVAILABLE_REASON() == 4)
			{
				return 0;
			}
			if (NETWORK::NETWORK_GET_NP_UNAVAILABLE_REASON() == 2)
			{
				return 0;
			}
			if (NETWORK::NETWORK_GET_NP_UNAVAILABLE_REASON() == 1)
			{
				return 0;
			}
			if (NETWORK::NETWORK_GET_NP_UNAVAILABLE_REASON() == 5)
			{
				return 0;
			}
		}
	}
	return 1;
}

bool func_130()
{
	return (MISC::IS_ORBIS_VERSION() || MISC::IS_PROSPERO_VERSION());
}

void func_131()
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		iLocal_113 = ZONE::GET_ZONE_SCUMMINESS(ZONE::GET_ZONE_AT_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)));
	}
	switch (iLocal_113)
	{
		case 0:
			iLocal_88 = 5;
			break;
		
		case 1:
			iLocal_88 = 5;
			break;
		
		case 2:
			iLocal_88 = 4;
			break;
		
		case 3:
			iLocal_88 = 4;
			break;
		
		case 4:
			iLocal_88 = 3;
			break;
		
		case 5:
			iLocal_88 = 2;
			break;
		
		default:
			iLocal_88 = 3;
			break;
	}
	iLocal_114 = MISC::GET_RANDOM_INT_IN_RANGE(0, 8);
	if (iLocal_114 < 2)
	{
		if (iLocal_88 > 2)
		{
			iLocal_88 = (iLocal_88 - 1);
		}
	}
	if (iLocal_115 == 1 || func_132())
	{
		iLocal_88 = 0;
	}
	func_151(Global_21591, "SET_PROVIDER_ICON", SYSTEM::TO_FLOAT(iLocal_87), SYSTEM::TO_FLOAT(iLocal_88), -1082130432, -1082130432, -1082130432);
}

int func_132()
{
	bool bVar0;
	struct<3> Var1;
	int iVar4;
	
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		bVar0 = func_138();
		if (func_137(bVar0))
		{
			Var1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
			iVar4 = 0;
			while (iVar4 < Global_114904.f_7695.f_136)
			{
				if (BitTest(Global_114904.f_7695[iVar4 /*15*/].f_2, bVar0))
				{
					if (func_135(Var1, func_136(iVar4)))
					{
						return 1;
					}
				}
				iVar4++;
			}
			iVar4 = 0;
			while (iVar4 < Global_114904.f_7695.f_764)
			{
				if (BitTest(Global_114904.f_7695.f_651[iVar4 /*14*/].f_2, bVar0))
				{
					if (func_135(Var1, func_134(iVar4)))
					{
						return 1;
					}
				}
				iVar4++;
			}
			iVar4 = 0;
			while (iVar4 < Global_114904.f_7695.f_866)
			{
				if (BitTest(Global_114904.f_7695.f_765[iVar4 /*10*/].f_2, bVar0))
				{
					if (func_135(Var1, func_133(iVar4)))
					{
						return 1;
					}
				}
				iVar4++;
			}
		}
	}
	return 0;
}

int func_133(int iParam0)
{
	return Global_114904.f_7695.f_765[iParam0 /*10*/].f_7;
}

int func_134(int iParam0)
{
	return Global_114904.f_7695.f_651[iParam0 /*14*/].f_7;
}

int func_135(struct<3> Param0, int iParam3)
{
	if (iParam3 != -1)
	{
		if (iParam3 >= Global_44870)
		{
			return 0;
		}
		if (SYSTEM::VDIST2(Param0, Global_44870[iParam3 /*5*/]) <= (Global_44870[iParam3 /*5*/].f_3 * Global_44870[iParam3 /*5*/].f_3))
		{
			return 1;
		}
		else if (Global_44870[iParam3 /*5*/].f_4 != -1)
		{
			return func_135(Param0, Global_44870[iParam3 /*5*/].f_4);
		}
	}
	return 0;
}

int func_136(int iParam0)
{
	return Global_114904.f_7695[iParam0 /*15*/].f_7;
}

bool func_137(int iParam0)
{
	return iParam0 < 3;
}

var func_138()
{
	func_139();
	return Global_114904.f_2370.f_539.f_4321;
}

void func_139()
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_141(Global_114904.f_2370.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_140(PLAYER::PLAYER_PED_ID());
			if (func_137(iVar0) && (!func_120(14) || Global_113852))
			{
				if (Global_114904.f_2370.f_539.f_4321 != iVar0 && func_137(Global_114904.f_2370.f_539.f_4321))
				{
					Global_114904.f_2370.f_539.f_4322 = Global_114904.f_2370.f_539.f_4321;
				}
				Global_114904.f_2370.f_539.f_4323 = iVar0;
				Global_114904.f_2370.f_539.f_4321 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_114904.f_2370.f_539.f_4321 != 145)
			{
				Global_114904.f_2370.f_539.f_4323 = Global_114904.f_2370.f_539.f_4321;
			}
			return;
		}
	}
	Global_114904.f_2370.f_539.f_4321 = 145;
}

int func_140(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_141(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_141(int iParam0)
{
	if (func_137(iParam0))
	{
		return func_142(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_142(int iParam0)
{
	return Global_2339[iParam0 /*29*/];
}

int func_143()
{
	func_161();
	return Global_114904.f_14058[Global_21610 /*20*/].f_8;
}

struct<13> func_144(int iParam0)
{
	struct<13> Var0;
	
	NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0, 13);
	return Var0;
}

void func_145()
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		if (Global_21610 == 0)
		{
			switch (Global_114904.f_14058[Global_21610 /*20*/].f_6)
			{
				case 1:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 0);
					break;
				
				case 2:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 1);
					break;
				
				case 3:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 2);
					break;
				
				case 4:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 3);
					break;
				
				case 5:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 4);
					break;
				
				case 6:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 5);
					break;
				
				case 7:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 6);
					break;
				
				default:
					break;
				}
		}
		if (Global_21610 == 1)
		{
			switch (Global_114904.f_14058[Global_21610 /*20*/].f_6)
			{
				case 1:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 6);
					break;
				
				case 2:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 0);
					break;
				
				case 3:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 1);
					break;
				
				case 4:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 2);
					break;
				
				case 5:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 3);
					break;
				
				case 6:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 4);
					break;
				
				case 7:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 5);
					break;
				
				default:
					break;
				}
		}
		if (Global_21610 == 2)
		{
			switch (Global_114904.f_14058[Global_21610 /*20*/].f_6)
			{
				case 1:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 5);
					break;
				
				case 2:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 6);
					break;
				
				case 3:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 1);
					break;
				
				case 4:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 0);
					break;
				
				case 5:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 2);
					break;
				
				case 6:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 3);
					break;
				
				case 7:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 4);
					break;
				
				default:
					break;
				}
		}
		if (Global_21610 == 3)
		{
			switch (Global_4525120)
			{
				case 1:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 0);
					break;
				
				case 2:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 1);
					break;
				
				case 3:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 2);
					break;
				
				case 4:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 3);
					break;
				
				case 5:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 4);
					break;
				
				case 6:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 5);
					break;
				
				case 7:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 6);
					break;
				
				default:
					break;
				}
			}
	}
}

int func_146(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 16715)
	{
		iVar0 = func_147(iParam0, iParam1);
		if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_147(int iParam0, var uParam1)
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(0, iParam0, func_148(uParam1));
}

int func_148(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_112();
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

void func_149()
{
	if (func_120(14))
	{
		if (Global_2696959)
		{
			if (Global_21610.f_1 == 6)
			{
				if (Global_21590 == 7)
				{
					func_151(Global_21591, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(7), -1082130432, -1082130432, -1082130432);
				}
				else
				{
					Global_21590 = 6;
					func_151(Global_21591, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(6), -1082130432, -1082130432, -1082130432);
				}
			}
		}
		else if (Global_21610.f_1 == 6)
		{
			func_151(Global_21591, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(6), -1082130432, -1082130432, -1082130432);
		}
	}
	iLocal_90 = CLOCK::GET_CLOCK_MINUTES();
	if (iLocal_90 != Global_9466)
	{
		Global_9466 = iLocal_90;
		iLocal_89 = CLOCK::GET_CLOCK_HOURS();
		iLocal_91 = CLOCK::GET_CLOCK_DAY_OF_WEEK();
		switch (iLocal_91)
		{
			case 0:
				StringCopy(&Local_92, "CELL_920", 16);
				break;
			
			case 1:
				StringCopy(&Local_92, "CELL_921", 16);
				break;
			
			case 2:
				StringCopy(&Local_92, "CELL_922", 16);
				break;
			
			case 3:
				StringCopy(&Local_92, "CELL_923", 16);
				break;
			
			case 4:
				StringCopy(&Local_92, "CELL_924", 16);
				break;
			
			case 5:
				StringCopy(&Local_92, "CELL_925", 16);
				break;
			
			case 6:
				StringCopy(&Local_92, "CELL_926", 16);
				break;
			
			default:
				StringCopy(&Local_92, "CELL_206", 16);
				break;
		}
		func_119(Global_21591, "SET_TITLEBAR_TIME", SYSTEM::TO_FLOAT(iLocal_89), SYSTEM::TO_FLOAT(iLocal_90), -1f, -1f, -1f, &Local_92, 0, 0, 0, 0);
		if (Global_21553 == 0)
		{
			func_131();
		}
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			iLocal_98 = ENTITY::GET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID());
		}
	}
}

void func_150()
{
	if (Global_80280)
	{
		StringCopy(&Global_21599, "Phone_SoundSet_Default", 24);
		MOBILE::CREATE_MOBILE_PHONE(0);
	}
	else if (Global_21553)
	{
		MOBILE::CREATE_MOBILE_PHONE(4);
		StringCopy(&Global_21599, "Phone_SoundSet_Prologue", 24);
	}
	else
	{
		switch (Global_21610)
		{
			case 0:
				StringCopy(&Global_21599, "Phone_SoundSet_Michael", 24);
				MOBILE::CREATE_MOBILE_PHONE(0);
				break;
			
			case 2:
				StringCopy(&Global_21599, "Phone_SoundSet_Trevor", 24);
				MOBILE::CREATE_MOBILE_PHONE(1);
				break;
			
			case 1:
				StringCopy(&Global_21599, "Phone_SoundSet_Franklin", 24);
				MOBILE::CREATE_MOBILE_PHONE(2);
				break;
			
			default:
				StringCopy(&Global_21599, "Phone_SoundSet_Default", 24);
				MOBILE::CREATE_MOBILE_PHONE(0);
				break;
			}
	}
	Global_21573 = { -90f, -130f, 0f };
	if (GRAPHICS::GET_IS_HIDEF())
	{
		Global_21555 = 0;
		Global_21556[0 /*3*/] = { (GRAPHICS::GET_SAFE_ZONE_SIZE() * 117.2f), (GRAPHICS::GET_SAFE_ZONE_SIZE() * -158.8f), -113f };
		Global_21563[0 /*3*/] = { (GRAPHICS::GET_SAFE_ZONE_SIZE() * 117.2f), (GRAPHICS::GET_SAFE_ZONE_SIZE() * -53.3f), -113f };
	}
	else
	{
		Global_21555 = 0;
		Global_21556[0 /*3*/] = { (GRAPHICS::GET_SAFE_ZONE_SIZE() * 85.7f), (GRAPHICS::GET_SAFE_ZONE_SIZE() * -121.8f), -91.5f };
		Global_21563[0 /*3*/] = { (GRAPHICS::GET_SAFE_ZONE_SIZE() * 85.7f), (GRAPHICS::GET_SAFE_ZONE_SIZE() * -35.3f), -91.5f };
	}
	Global_21538 = { Global_21556[Global_21555 /*3*/] };
	MOBILE::SET_MOBILE_PHONE_POSITION(Global_21556[Global_21555 /*3*/]);
	MOBILE::SET_MOBILE_PHONE_ROTATION(Global_21573, 0);
	Global_21550 = 1;
}

void func_151(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, sParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam2));
	if (fParam3 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam3));
	}
	if (fParam4 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam4));
	}
	if (fParam5 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam5));
	}
	if (fParam6 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam6));
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

bool func_152()
{
	return (MISC::IS_DURANGO_VERSION() || MISC::IS_SCARLETT_VERSION());
}

void func_153()
{
	Global_2738986.f_1 = 0;
	Global_2738986 = 0;
	Global_2738986.f_2 = 0;
	Global_2738986.f_33 = -1;
	Global_2738986.f_34 = -1;
	StringCopy(&(Global_2738986.f_4), "", 64);
	StringCopy(&(Global_2738986.f_39[0 /*16*/]), "", 64);
	Global_2738986.f_38 = 0;
	Global_2738986.f_56 = 0;
	Global_2738986.f_57 = 0;
	Global_2738986.f_58 = -2;
	Global_2738986.f_3 = 0;
	func_154(&(Global_2738986.f_20));
}

void func_154(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 0;
}

void func_155()
{
	Global_2738986.f_2 = 1;
	Global_2738986.f_38 = 1;
	if (NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		if (NETWORK::NETWORK_SESSION_IS_IN_VOICE_SESSION())
		{
			while (NETWORK::NETWORK_SESSION_IS_VOICE_SESSION_BUSY())
			{
				SYSTEM::WAIT(0);
			}
			NETWORK::NETWORK_SESSION_VOICE_LEAVE();
			Global_2738986 = 0;
			Global_2738986.f_2 = 0;
		}
		else if (func_156(Global_2738986.f_20))
		{
			if (NETWORK::NETWORK_IS_FRIEND(&(Global_2738986.f_20)))
			{
				if (!NETWORK::NETWORK_IS_FRIEND_HANDLE_ONLINE(&(Global_2738986.f_20)))
				{
					func_153();
				}
			}
		}
		else
		{
			func_153();
		}
	}
	else
	{
		func_153();
	}
	if (Global_2738986.f_37)
	{
		func_97(0);
	}
	Global_2738986.f_37 = 0;
	Global_2738986.f_3 = 0;
}

bool func_156(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	return NETWORK::NETWORK_IS_HANDLE_VALID(&uParam0, 13);
}

void func_157()
{
	Global_21849 = 0;
	func_10();
}

void func_158(int iParam0, char* sParam1)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, sParam1);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_159()
{
	PAD::SET_INPUT_EXCLUSIVE(0, Global_21579);
	PAD::DISABLE_CONTROL_ACTION(0, 70, true);
	PAD::DISABLE_CONTROL_ACTION(0, 69, true);
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2))
	{
		PAD::SET_INPUT_EXCLUSIVE(0, Global_21579);
		PAD::SET_INPUT_EXCLUSIVE(0, Global_21580);
		PAD::DISABLE_CONTROL_ACTION(0, 24, true);
		PAD::DISABLE_CONTROL_ACTION(0, 294, true);
	}
	if (Global_80280)
	{
		Global_114904.f_14058[3 /*20*/].f_10 = func_146(1198, -1);
	}
	if (MISC::IS_PC_VERSION())
	{
		if (DECORATOR::DECOR_EXIST_ON(PLAYER::PLAYER_PED_ID(), "Synched"))
		{
		}
		else if (((MISC::GET_GAME_TIMER() - iLocal_116) >= 300 || iLocal_116 == 0) || iLocal_116 > MISC::GET_GAME_TIMER())
		{
			PAD::SET_CONTROL_SHAKE(0, 100, 100);
			iLocal_116 = MISC::GET_GAME_TIMER();
		}
	}
	else if (Global_114904.f_14058[Global_21610 /*20*/].f_10 == 1)
	{
		if (((MISC::GET_GAME_TIMER() - iLocal_116) >= 300 || iLocal_116 == 0) || iLocal_116 > MISC::GET_GAME_TIMER())
		{
			PAD::SET_CONTROL_SHAKE(0, 100, 100);
			iLocal_116 = MISC::GET_GAME_TIMER();
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		if (!AUDIO::IS_PED_RINGTONE_PLAYING(PLAYER::PLAYER_PED_ID()))
		{
			if (Global_80280)
			{
				if (!MISC::ARE_STRINGS_EQUAL(&(Global_10285[3 /*2811*/][1 /*281*/].f_144[func_146(1199, -1) /*6*/]), "Silent Ringtone Dummy"))
				{
					AUDIO::PLAY_PED_RINGTONE(&(Global_10285[3 /*2811*/][1 /*281*/].f_144[func_146(1199, -1) /*6*/]), PLAYER::PLAYER_PED_ID(), true);
				}
			}
			else if (!MISC::ARE_STRINGS_EQUAL(&(Global_114904.f_14058[Global_21610 /*20*/].f_11), "Silent Ringtone Dummy"))
			{
				if (!Global_10285[Global_21610 /*2811*/][0 /*281*/].f_259 == 1)
				{
					if (MISC::IS_PC_VERSION())
					{
						if (DECORATOR::DECOR_EXIST_ON(PLAYER::PLAYER_PED_ID(), "Synched"))
						{
						}
						else
						{
							AUDIO::PLAY_PED_RINGTONE(&(Global_114904.f_14058[Global_21610 /*20*/].f_11), PLAYER::PLAYER_PED_ID(), true);
						}
					}
					else
					{
						AUDIO::PLAY_PED_RINGTONE(&(Global_114904.f_14058[Global_21610 /*20*/].f_11), PLAYER::PLAYER_PED_ID(), true);
					}
				}
			}
		}
	}
}

int func_160()
{
	if (Global_80280)
	{
		if (Global_1836595 || Global_1836596 == 1)
		{
			return 1;
		}
	}
	return 0;
}

void func_161()
{
	if (func_120(14))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_114904.f_28058[0 /*29*/])
			{
				Global_21610 = 0;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_114904.f_28058[1 /*29*/])
			{
				Global_21610 = 1;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_114904.f_28058[2 /*29*/])
			{
				Global_21610 = 2;
			}
			else
			{
				Global_21610 = 0;
			}
		}
	}
	else
	{
		Global_21610 = func_138();
		if (Global_21610 == 145)
		{
			Global_21610 = 3;
		}
		if (Global_80280)
		{
			Global_21610 = 3;
		}
		if (Global_21610 > 3)
		{
			Global_21610 = 3;
		}
	}
}

