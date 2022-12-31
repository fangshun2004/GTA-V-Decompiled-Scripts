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
	int iLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	char* sLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	float fLocal_29 = 0f;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	float fLocal_33 = 0f;
	float fLocal_34 = 0f;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	int iLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
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
	float fLocal_63 = 0f;
	var uLocal_64 = 0;
	float fLocal_65 = 0f;
	float fLocal_66 = 0f;
	float fLocal_67 = 0f;
	float fLocal_68 = 0f;
	float fLocal_69 = 0f;
	float fLocal_70 = 0f;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	BOOL bLocal_74 = 0;
	int iLocal_75 = 0;
	BOOL bLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	int iLocal_80 = 0;
	int iLocal_81 = 0;
	int iLocal_82 = 0;
	float fLocal_83 = 0f;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	int iLocal_86 = 0;
	BOOL bLocal_87 = 0;
	int iLocal_88 = 0;
	int iLocal_89 = 0;
	int iLocal_90 = 0;
	int iLocal_91 = 0;
	int iLocal_92 = 0;
	int iLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	BOOL bLocal_98 = 0;
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
	int iLocal_109 = 0;
	int iLocal_110 = 0;
	var uLocal_111 = 0;
	BOOL bLocal_112 = 0;
	int iLocal_113 = 0;
	Vehicle veLocal_114 = 0;
	int iLocal_115 = 0;
	int iLocal_116 = 0;
	BOOL bLocal_117 = 0;
	int iLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	int iLocal_122 = 0;
	BOOL bLocal_123 = 0;
	int iLocal_124 = 0;
#endregion

void main() // Hash - 0x5D84F89F ^0x5D84F89F
{
	var txdName;
	var gamerHandle;
	int num;
	float num2;
	float num3;
	int num4;
	int seatIndex;
	BOOL flag;
	int num5;

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
	fLocal_24 = 80f;
	fLocal_25 = 140f;
	fLocal_26 = 180f;
	fLocal_29 = 0f;
	fLocal_33 = -0.0375f;
	fLocal_34 = 0.17f;
	iLocal_37 = 3;
	iLocal_41 = 1;
	iLocal_42 = 65;
	iLocal_43 = 49;
	iLocal_44 = 64;
	fLocal_63 = (0.05f + 0.275f) - 0.01f;
	fLocal_65 = 0.73f;
	fLocal_66 = 0.55f;
	fLocal_67 = 0.73f;
	fLocal_68 = 0.45f;
	fLocal_69 = 0f;
	fLocal_70 = 0f;
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	Global_20581 = 145;
	MISC::CLEAR_BIT(&Global_8254, 8);
	MISC::CLEAR_BIT(&Global_8253, 14);
	MISC::CLEAR_BIT(&Global_4542297, 3);
	MISC::CLEAR_BIT(&Global_8254, 10);
	MISC::CLEAR_BIT(&Global_8253, 17);
	MISC::CLEAR_BIT(&Global_8253, 9);
	MISC::CLEAR_BIT(&Global_8253, 26);
	MISC::CLEAR_BIT(&Global_8253, 23);
	MISC::CLEAR_BIT(&Global_8254, 24);
	MISC::CLEAR_BIT(&Global_8254, 25);
	MISC::CLEAR_BIT(&Global_8254, 27);
	MISC::CLEAR_BIT(&Global_8254, 26);
	MISC::CLEAR_BIT(&Global_8253, 30);
	Global_2803652 = 0;
	iLocal_122 = 0;
	GRAPHICS::DRAW_LOW_QUALITY_PHOTO_TO_PHONE(false, false);
	MOBILE::SCRIPT_IS_MOVING_MOBILE_PHONE_OFFSCREEN(false);
	Global_20349 = 0;
	bLocal_74 = false;
	Global_20327 = 0;
	Global_20367 = 0;
	Global_20368 = 0;
	func_122();
	Global_20314 = { Global_20346 };
	Global_20387 = 4;
	Global_20388 = 0;
	Global_8858 = 1;
	Global_20363 = Global_20387;

	if (Global_20365 == false)
	{
		Global_20366 = 0;
	
		if (Global_78558)
		{
			if (func_121())
				Global_20364 = unk_0x67D02A194A2FC2BD("cellphone_badger");
			else
				Global_20364 = unk_0x67D02A194A2FC2BD("cellphone_ifruit");
		
			iLocal_88 = 1;
			iLocal_88 == 1;
		}
		else if (Global_20326)
		{
			Global_20371 = true;
			Global_20364 = unk_0x67D02A194A2FC2BD("cellphone_prologue");
		}
		else
		{
			Global_20364 = unk_0x67D02A194A2FC2BD(&Global_113648.f_14053[Global_20383 /*20*/]);
		}
	
		SYSTEM::SETTIMERA(0);
	
		while (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_20364) && Global_20366 == 0)
		{
			SYSTEM::WAIT(0);
		
			if (SYSTEM::TIMERA() > 20000)
				Global_20366 = 1;
		
			if (MISC::IS_PC_VERSION())
				if (DECORATOR::DECOR_EXIST_ON(PLAYER::PLAYER_PED_ID(), "Synched"))
					if (SYSTEM::TIMERA() > 2000)
						Global_20366 = 1;
		
			if (Global_20382 == 1)
				func_120();
		}
	
		if (Global_20366 == 1)
		{
			if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_20364))
				func_119(Global_20364, "SHUTDOWN_MOVIE");
		
			SYSTEM::WAIT(0);
			GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&Global_20364);
			Global_20324 = 0;
			Global_20365 = false;
			Global_20582 = 0;
		
			if (Global_113648.f_14053.f_84 == 1)
			{
				Global_113648.f_14053.f_84 = 0;
				HUD::CLEAR_FLOATING_HELP(0, true);
			}
		
			Global_20327 = 1;
			Global_20383.f_1 = 3;
			func_118();
			Global_20371 = false;
			MOBILE::DESTROY_MOBILE_PHONE();
			MISC::CLEAR_BIT(&Global_8253, 9);
			MISC::CLEAR_BIT(&Global_8253, 27);
			MISC::CLEAR_BIT(&Global_8253, 30);
			MISC::CLEAR_BIT(&Global_8254, 5);
			MISC::CLEAR_BIT(&Global_8254, 21);
			MISC::CLEAR_BIT(&Global_8255, 2);
		
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
				AUDIO::STOP_PED_RINGTONE(PLAYER::PLAYER_PED_ID());
		
			if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
				AUDIO::STOP_PED_RINGTONE(PLAYER::PLAYER_PED_ID());
		
			Global_20584 = false;
			Global_22785 = 0;
			Global_22784 = 0;
			Global_21738 = false;
			func_116();
			func_114();
			Global_4542576 = 0;
			SCRIPT::TERMINATE_THIS_THREAD();
		}
	
		Global_20307 = 0.1f;
		Global_20308 = 0.38f;
		Global_20309 = 0.195f;
		Global_20310 = 0.05f;
	
		if (MISC::IS_XBOX360_VERSION() || func_113() || MISC::IS_PC_VERSION())
		{
			HUD::GET_HUD_COLOUR(HUD_COLOUR_GREEN, &iLocal_108, &iLocal_109, &iLocal_110, &uLocal_111);
			func_112(Global_20364, "SET_SOFT_KEYS_COLOUR", 2f, SYSTEM::TO_FLOAT(iLocal_108), SYSTEM::TO_FLOAT(iLocal_109), SYSTEM::TO_FLOAT(iLocal_110), -1082130432);
			HUD::GET_HUD_COLOUR(HUD_COLOUR_BLUE, &iLocal_108, &iLocal_109, &iLocal_110, &uLocal_111);
			func_112(Global_20364, "SET_SOFT_KEYS_COLOUR", 1f, SYSTEM::TO_FLOAT(iLocal_108), SYSTEM::TO_FLOAT(iLocal_109), SYSTEM::TO_FLOAT(iLocal_110), -1082130432);
			HUD::GET_HUD_COLOUR(HUD_COLOUR_RED, &iLocal_108, &iLocal_109, &iLocal_110, &uLocal_111);
			func_112(Global_20364, "SET_SOFT_KEYS_COLOUR", 3f, SYSTEM::TO_FLOAT(iLocal_108), SYSTEM::TO_FLOAT(iLocal_109), SYSTEM::TO_FLOAT(iLocal_110), -1082130432);
		}
		else
		{
			if (!MISC::IS_JAPANESE_VERSION())
			{
				HUD::GET_HUD_COLOUR(HUD_COLOUR_BLUE, &iLocal_108, &iLocal_109, &iLocal_110, &uLocal_111);
				func_112(Global_20364, "SET_SOFT_KEYS_COLOUR", 2f, SYSTEM::TO_FLOAT(iLocal_108), SYSTEM::TO_FLOAT(iLocal_109), SYSTEM::TO_FLOAT(iLocal_110), -1082130432);
				HUD::GET_HUD_COLOUR(HUD_COLOUR_PINKLIGHT, &iLocal_108, &iLocal_109, &iLocal_110, &uLocal_111);
				func_112(Global_20364, "SET_SOFT_KEYS_COLOUR", 1f, SYSTEM::TO_FLOAT(iLocal_108), SYSTEM::TO_FLOAT(iLocal_109), SYSTEM::TO_FLOAT(iLocal_110), -1082130432);
				HUD::GET_HUD_COLOUR(HUD_COLOUR_RED, &iLocal_108, &iLocal_109, &iLocal_110, &uLocal_111);
				func_112(Global_20364, "SET_SOFT_KEYS_COLOUR", 3f, SYSTEM::TO_FLOAT(iLocal_108), SYSTEM::TO_FLOAT(iLocal_109), SYSTEM::TO_FLOAT(iLocal_110), -1082130432);
			}
		
			if (MISC::IS_JAPANESE_VERSION())
			{
				HUD::GET_HUD_COLOUR(HUD_COLOUR_RED, &iLocal_108, &iLocal_109, &iLocal_110, &uLocal_111);
				func_112(Global_20364, "SET_SOFT_KEYS_COLOUR", 2f, SYSTEM::TO_FLOAT(iLocal_108), SYSTEM::TO_FLOAT(iLocal_109), SYSTEM::TO_FLOAT(iLocal_110), -1082130432);
				HUD::GET_HUD_COLOUR(HUD_COLOUR_PINKLIGHT, &iLocal_108, &iLocal_109, &iLocal_110, &uLocal_111);
				func_112(Global_20364, "SET_SOFT_KEYS_COLOUR", 1f, SYSTEM::TO_FLOAT(iLocal_108), SYSTEM::TO_FLOAT(iLocal_109), SYSTEM::TO_FLOAT(iLocal_110), -1082130432);
				HUD::GET_HUD_COLOUR(HUD_COLOUR_BLUE, &iLocal_108, &iLocal_109, &iLocal_110, &uLocal_111);
				func_112(Global_20364, "SET_SOFT_KEYS_COLOUR", 3f, SYSTEM::TO_FLOAT(iLocal_108), SYSTEM::TO_FLOAT(iLocal_109), SYSTEM::TO_FLOAT(iLocal_110), -1082130432);
			}
		}
	
		Global_20366 == 0;
		func_111();
	
		if (Global_78558)
			TEXT_LABEL_ASSIGN_STRING(&Global_20372, "Phone_SoundSet_Michael", 24);
	
		Global_20365 = true;
	}

	Global_8256 = 99;
	func_110();

	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		iLocal_100 = ENTITY::GET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID());

	if (HUD::IS_RADAR_HIDDEN())
		Global_22739 = 1;
	else
		Global_22739 = 0;

	func_112(Global_20364, "SET_SLEEP_MODE", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
	Global_20325 = 1;

	if (Global_78558)
	{
		Global_20586 = false;
	
		if (func_121())
			if (Global_1836500 == 1)
				Global_4542573 = 4;
			else
				Global_4542573 = 2;
		else
			Global_4542573 = func_107(2030, -1, 0);
	
		if (Global_4542573 < 1 || Global_4542573 > 7)
			Global_4542573 = 1;
	
		func_112(Global_20364, "SET_THEME", SYSTEM::TO_FLOAT(Global_4542573), -1082130432, -1082130432, -1082130432, -1082130432);
		func_106();
	
		if (func_121())
			if (Global_1836500 == 1)
				Global_4542574 = 16;
			else
				Global_4542574 = 9;
		else
			Global_4542574 = func_107(2029, -1, 0);
	
		if (Global_4542574 == 0)
		{
			gamerHandle = { func_105(PLAYER::PLAYER_ID()) };
			num = 0;
			NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(0) == false;
			Global_4542577 == 1;
		
			if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&gamerHandle) && NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(0) && Global_4542577 == 0)
			{
				if (NETWORK::NETWORK_CLAN_GET_EMBLEM_TXD_NAME(&gamerHandle, &txdName))
				{
				}
				else
				{
					num = 1;
				}
			
				if (num == 0)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20364, "SET_BACKGROUND_CREW_IMAGE");
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(_("~a~"));
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&txdName);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				else
				{
					func_112(Global_20364, "SET_BACKGROUND_IMAGE", SYSTEM::TO_FLOAT(0), -1082130432, -1082130432, -1082130432, -1082130432);
				}
			}
			else
			{
				func_112(Global_20364, "SET_BACKGROUND_IMAGE", SYSTEM::TO_FLOAT(0), -1082130432, -1082130432, -1082130432, -1082130432);
			}
		}
		else
		{
			func_112(Global_20364, "SET_BACKGROUND_IMAGE", SYSTEM::TO_FLOAT(Global_4542574), -1082130432, -1082130432, -1082130432, -1082130432);
		}
	}
	else
	{
		if (Global_20326)
			Global_20586 = false;
		else if (Global_113648.f_14053.f_88 == 1 || Global_113648.f_14053.f_89 == true)
			Global_20586 = false;
		else
			Global_20586 = false;
	
		func_112(Global_20364, "SET_THEME", SYSTEM::TO_FLOAT(Global_113648.f_14053[Global_20383 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
	
		if (Global_9057 == 0)
			func_112(Global_20364, "SET_BACKGROUND_IMAGE", SYSTEM::TO_FLOAT(Global_113648.f_14053[Global_20383 /*20*/].f_9), -1082130432, -1082130432, -1082130432, -1082130432);
		else
			MOBILE::SET_MOBILE_PHONE_SCALE(575f);
	
		func_106();
	}

	iLocal_89 = func_104();

	if (Global_20326 == false)
		func_92();

	Global_20361 = 0;
	Global_20585 = false;
	MISC::CLEAR_BIT(&Global_8253, 9);
	Global_2694519 = false;

	if (func_87(0) && NETWORK::NETWORK_IS_SIGNED_ONLINE())
		Global_2694519 = true;

	func_112(Global_20364, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_85();
	func_84();
	func_83(1);
	AUDIO::PLAY_SOUND_FRONTEND(-1, "Pull_Out", &Global_20372, true);
	SYSTEM::SETTIMERB(0);

	while (Global_20383.f_1 < 6 && Global_20366 == 0)
	{
		SYSTEM::WAIT(0);
	
		if (SYSTEM::TIMERB() > 10000)
			Global_20366 = 1;
	
		if (Global_20383.f_1 < 4)
			Global_20366 = 1;
	}

	if (Global_20383.f_1 == 5 || Global_20383.f_1 == 6)
	{
		if (func_82(14))
			func_112(Global_20364, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(6), -1082130432, -1082130432, -1082130432);
		else
			func_112(Global_20364, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_20387), -1082130432, -1082130432, -1082130432);
	
		if (Global_9058[Global_20383 /*2811*/][0 /*281*/].f_259 == 2)
			func_112(Global_20364, "SET_SLEEP_MODE", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
		else
			func_112(Global_20364, "SET_SLEEP_MODE", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
	
		if (Global_20371)
			func_81(Global_20364, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, _("SELECT"), 0, 0, 0, 0);
		else
			func_81(Global_20364, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
	
		if (Global_20371)
			func_81(Global_20364, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, _("BACK"), 0, 0, 0, 0);
		else
			func_81(Global_20364, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
	
		if (Global_20586 == false)
		{
			func_81(Global_20364, "SET_SOFT_KEYS", 1f, 0f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
			MISC::CLEAR_BIT(&Global_8253, 17);
		}
		else if (Global_78558)
		{
			func_81(Global_20364, "SET_SOFT_KEYS", 1f, 0f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
			MISC::CLEAR_BIT(&Global_8253, 17);
		}
		else
		{
			if (Global_20585 == true)
				if (Global_20371)
					func_81(Global_20364, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, _("NEXT"), 0, 0, 0, 0);
				else
					func_81(Global_20364, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, 0, 0, 0, 0, 0);
			else if (Global_20371)
				func_81(Global_20364, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, _("NEXT"), 0, 0, 0, 0);
			else
				func_81(Global_20364, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
		
			MISC::SET_BIT(&Global_8253, 17);
		}
	
		func_80();
	}

	Global_20369 = 1;
	func_79();

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		iLocal_106 = NETWORK::GET_NETWORK_TIME();
	else
		iLocal_101 = MISC::GET_GAME_TIMER();

	if (Global_20582 == 1)
	{
		if (Global_9058[Global_20383 /*2811*/][0 /*281*/].f_259 == 2)
		{
			if (Global_113648.f_14053.f_84 == 0)
			{
				Global_113648.f_14053.f_84 = 1;
			
				if (Global_20328 == 0)
				{
					num2 = 0.75f;
					num3 = 0.8f;
				}
				else
				{
					num2 = 0.65f;
					num3 = 0.77f;
				}
			
				num2 == num3;
				func_78(_("Sleep Mode is active.~n~The game story is paused. To continue it, enter the SETTINGS menu, select PROFILE then NORMAL MODE or trigger an existing mission."), 10000);
			}
		}
	}

	if (Global_78558 == false)
		iLocal_18 = MISC::GET_GAME_TIMER() + 375;

	if (func_77())
		iLocal_80 = 1;
	else
		iLocal_80 = 0;

	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		if (PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), false))
		{
			iLocal_81 = 1;
		
			if (func_77())
				func_76();
		}
		else
		{
			iLocal_81 = 0;
		}
	}

	if (MISC::IS_PC_VERSION())
	{
		if (Global_78558 == false)
		{
			iLocal_103 = MISC::GET_GAME_TIMER();
			iLocal_105 = 0;
		}
	}

	MISC::CLEAR_BIT(&Global_8255, 9);

	while (true)
	{
		SYSTEM::WAIT(0);
	
		if (IS_BIT_SET(Global_4542297, 24))
		{
			if (!Global_20585)
			{
				if (Global_20383.f_1 == 6 || Global_20383.f_1 > 6)
				{
					MISC::CLEAR_BIT(&Global_4542297, 24);
					func_85();
					func_112(Global_20364, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
					func_83(1);
				
					if (Global_20383.f_1 == 6)
						func_112(Global_20364, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_20363), -1082130432, -1082130432, -1082130432);
				}
			}
		}
	
		if (func_75())
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_FLY_ATTACK, true);
	
		if (Global_78558 == false)
		{
			if (bLocal_76)
				if (Global_20383.f_1 == 6 || Global_20383.f_1 == 7)
					bLocal_76 = false;
		
			if (Global_20383.f_1 > 4)
			{
				if (IS_BIT_SET(Global_8253, 14) && Global_4542576 == 0 && Global_20323 == 0)
				{
					if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
					{
						if (func_74())
						{
							MOBILE::GET_MOBILE_PHONE_POSITION(&uLocal_77);
						
							if (Global_20329[Global_20328 /*3*/].f_1 != uLocal_77.f_1)
								func_72();
						}
						else
						{
							MOBILE::GET_MOBILE_PHONE_POSITION(&uLocal_77);
						
							if (Global_20336[Global_20328 /*3*/].f_1 != uLocal_77.f_1)
							{
								!func_75();
							
								if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("APPEMAIL")) < 1)
									func_70();
							}
						}
					
						if (iLocal_81 == 0)
						{
							if (PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), false))
							{
								iLocal_81 = 1;
								func_70();
								func_76();
							}
						}
						else if (!PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), false))
						{
							iLocal_81 = 0;
							func_72();
						
							if (Global_20383.f_1 == 10 || Global_20383.f_1 == 9)
								if (Global_21725 != 2)
									func_69();
						}
					
						if (iLocal_80 == 0)
						{
							if (func_77())
							{
								iLocal_80 = 1;
							
								if (PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), false))
									func_76();
							
								func_72();
							}
						}
						else
						{
							if (PED::GET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID()))
								if (Global_20383.f_1 == 10 || Global_20383.f_1 == 9)
									PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_LOOK_BEHIND, true);
						
							if (func_77() == false)
							{
								iLocal_80 = 0;
								func_70();
							}
						}
					}
				}
			}
		}
	
		if (Global_2694519 == true)
		{
			if (!func_87(0) || !NETWORK::NETWORK_IS_SIGNED_ONLINE())
			{
				if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("APPCAMERA")) == 0)
				{
					if (Global_20383.f_1 > 3)
					{
						Global_20368 = 1;
						func_68();
						func_65(0);
						Global_2694519 = false;
					}
				}
			}
		}
	
		if (Global_20587 == 0)
		{
			if (Global_43257 != 15 || Global_8258 == 1 || func_64(false))
			{
				if (!Global_20585)
				{
					if (Global_20383.f_1 == 6)
					{
						Global_8259 = 42;
						func_112(Global_20364, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_85();
						func_84();
						func_83(1);
						func_112(Global_20364, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_20363), -1082130432, -1082130432, -1082130432);
					}
				}
			
				Global_20587 = 1;
			}
		}
		else if (Global_43257 == 15 && func_64(false) == false && Global_8258 == 0)
		{
			if (!Global_20585)
			{
				if (Global_20383.f_1 == 6)
				{
					Global_8259 = 255;
					func_112(Global_20364, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
					func_85();
					func_84();
					func_83(1);
					func_112(Global_20364, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_20363), -1082130432, -1082130432, -1082130432);
				}
			}
		
			Global_20587 = 0;
		}
	
		if (Global_20588 == 0)
		{
			if (IS_BIT_SET(Global_8254, 3))
			{
				if (!Global_20585)
				{
					if (Global_20383.f_1 == 6)
					{
						func_112(Global_20364, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_85();
						func_84();
						func_83(1);
						func_112(Global_20364, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_20363), -1082130432, -1082130432, -1082130432);
					}
				}
			
				Global_20588 = 1;
			}
		}
		else if (!IS_BIT_SET(Global_8254, 3))
		{
			if (!Global_20585)
			{
				if (Global_20383.f_1 == 6)
				{
					func_112(Global_20364, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
					func_85();
					func_84();
					func_83(1);
					func_112(Global_20364, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_20363), -1082130432, -1082130432, -1082130432);
				}
			}
		
			Global_20588 = 0;
		}
	
		if (!HUD::IS_PAUSE_MENU_ACTIVE())
		{
			if (Global_20311.f_1 != Global_20329[Global_20328 /*3*/].f_1 || func_77())
			{
				if (Global_20383.f_1 > 3)
				{
					if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("APPTRACKIFY")) == 0)
						if (Global_78558)
							if (Global_20383.f_1 == 9)
								if (Global_21778 == 1 || IS_BIT_SET(Global_8254, 23))
									PAD::SET_INPUT_EXCLUSIVE(PLAYER_CONTROL, Global_20352);
							else
								PAD::SET_INPUT_EXCLUSIVE(PLAYER_CONTROL, Global_20352);
						else
							PAD::SET_INPUT_EXCLUSIVE(PLAYER_CONTROL, Global_20352);
				
					if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("APPSECUROHACK")) == 0)
					{
						PAD::SET_INPUT_EXCLUSIVE(PLAYER_CONTROL, Global_20353);
					
						if (IS_BIT_SET(Global_8253, 17))
							PAD::SET_INPUT_EXCLUSIVE(PLAYER_CONTROL, Global_20354);
					}
				
					if (!func_63() && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("APPSECUROHACK")) == 0)
						PAD::SET_INPUT_EXCLUSIVE(PLAYER_CONTROL, Global_20355);
				}
			}
		
			Global_20311.f_1 == Global_20329[Global_20328 /*3*/].f_1;
		}
	
		if (!PAD::IS_USING_KEYBOARD_AND_MOUSE(FRONTEND_CONTROL))
		{
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_MELEE_ATTACK_LIGHT, true);
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_MELEE_ATTACK_HEAVY, true);
		}
	
		if (!HUD::IS_PAUSE_MENU_ACTIVE())
		{
			if (!Global_75693)
			{
				if (!func_75())
				{
					PAD::SET_INPUT_EXCLUSIVE(PLAYER_CONTROL, INPUT_CELLPHONE_SCROLL_FORWARD);
					PAD::SET_INPUT_EXCLUSIVE(PLAYER_CONTROL, INPUT_CELLPHONE_SCROLL_BACKWARD);
					PAD::ENABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_CELLPHONE_SCROLL_FORWARD, true);
					PAD::ENABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_CELLPHONE_SCROLL_BACKWARD, true);
				}
			
				PAD::SET_INPUT_EXCLUSIVE(PLAYER_CONTROL, Global_20357);
			
				if (!func_63())
					PAD::SET_INPUT_EXCLUSIVE(PLAYER_CONTROL, Global_20358);
			
				if (Global_20383.f_1 > 4)
					PAD::SET_INPUT_EXCLUSIVE(PLAYER_CONTROL, Global_20360);
			}
		}
	
		if (func_62(FRONTEND_CONTROL, Global_20351, 0))
		{
			bLocal_98 = true;
			SYSTEM::SETTIMERA(0);
		}
	
		if (iLocal_75 == 1)
		{
			if (!PAD::IS_CONTROL_PRESSED(FRONTEND_CONTROL, Global_20352))
			{
				Global_8257 = 1;
				iLocal_75 = 0;
			}
		
			if (!Global_20383.f_1 > 3)
				iLocal_75 = 0;
		}
	
		if (bLocal_98)
		{
			if (PAD::IS_CONTROL_PRESSED(FRONTEND_CONTROL, Global_20351))
			{
				if (SYSTEM::TIMERA() > 5000)
				{
					Global_20383.f_1 = 3;
					func_60();
				}
			}
			else
			{
				bLocal_98 = false;
			}
		}
	
		Global_8861 = MISC::GET_GAME_TIMER();
	
		if (Global_20370)
		{
			func_79();
			Global_20369 = 1;
			Global_20370 = false;
		}
	
		if (Global_20584 == false)
		{
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(HUD_VEHICLE_NAME);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(HUD_AREA_NAME);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(HUD_VEHICLE_CLASS);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(HUD_STREET_NAME);
			func_53();
			func_52();
			HUD::SET_TEXT_RENDER_ID(iLocal_86);
		
			if (Global_20369 == 1)
			{
				GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(4);
			
				if (Global_20326)
					GRAPHICS::DRAW_SCALEFORM_MOVIE(Global_20364, Global_20303, Global_20304, Global_20305, Global_20306, 255, 255, 255, 255, 0);
				else
					GRAPHICS::DRAW_SCALEFORM_MOVIE(Global_20364, Global_20303, Global_20304, Global_20305, Global_20306, 255, 255, 255, 255, 0);
			
				func_110();
			}
		
			if (Global_20323 == 1)
			{
				if (Global_20383.f_1 > 3)
					func_51();
			}
			else if (Global_20383.f_1 > 3)
			{
				if (Global_4542576 == 1)
					func_50();
			
				if (IS_BIT_SET(Global_8254, 25))
				{
					if (Global_78558 == true)
						func_49();
				}
				else if (!IS_BIT_SET(Global_8254, 24))
				{
					if (IS_BIT_SET(Global_8254, 26))
					{
						if (func_62(FRONTEND_CONTROL, Global_20350, 0))
						{
							MISC::SET_BIT(&Global_8254, 25);
							MISC::CLEAR_BIT(&Global_8254, 26);
							MISC::CLEAR_BIT(&Global_8255, 2);
						}
					}
				}
				else if (Global_78558 == true)
				{
					func_48();
				}
			}
		}
	
		if (bLocal_74)
		{
			if (Global_20383.f_1 == 6)
				func_44();
		}
		else if (!IS_BIT_SET(Global_8253, 23))
		{
			if (Global_20383.f_1 == 5 || Global_20383.f_1 == 6)
			{
				if (Global_20584 == false)
				{
					if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("APPCAMERA")) < 1 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("APPEMAIL")) < 1)
					{
						if (Global_20326 == false)
							if (IS_BIT_SET(Global_8253, 14))
								if (!Global_78558)
									if (iLocal_75 == 0)
										if (!func_82(14))
											func_43();
										else if (Global_2694519)
											func_42();
								else if (IS_BIT_SET(Global_8255, 9))
									func_41();
								else
									func_24();
					
						if (IS_BIT_SET(Global_8253, 9))
						{
							func_22(0, 0, 1, true);
						}
						else if (Global_22784 == 0)
						{
							if (!IS_BIT_SET(Global_4542297, 3))
							{
								if (Global_78558)
									func_21();
							
								func_20();
								func_18();
							}
						}
						else
						{
							if (Global_78558)
								func_21();
						
							if (!IS_BIT_SET(Global_4542297, 3))
							{
								if (Global_22784 == 1)
								{
									if (IS_BIT_SET(Global_4542297, 1))
									{
										if (IS_BIT_SET(Global_8253, 14))
										{
											if (Global_78558)
												func_22(7, 0, 1, false);
											else
												Global_22785 = 0;
										
											Global_22784 = 0;
											MISC::CLEAR_BIT(&Global_4542297, 1);
										}
									}
									else if (IS_BIT_SET(Global_8253, 14))
									{
										func_22(7, 0, 1, false);
										Global_22784 = 0;
									}
								}
								else
								{
									if (Global_22784 == 3)
									{
										func_22(1, 0, 1, false);
										Global_22784 = 0;
									}
								
									if (Global_22784 == 2)
									{
										func_22(14, 0, 1, false);
										Global_22784 = 0;
									}
								
									if (Global_22784 == 4)
									{
										func_22(23, 0, 1, false);
										Global_22784 = 0;
									}
								}
							}
						}
					}
				}
			}
		}
		else if (SCRIPT::HAS_SCRIPT_LOADED(&(Global_8260[Global_20386 /*15*/].f_5)))
		{
			if (Global_20386 == 0)
			{
				if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_8260[Global_20386 /*15*/].f_9) == 0)
					Global_20381 = SYSTEM::START_NEW_SCRIPT(&(Global_8260[Global_20386 /*15*/].f_5), CONTACTS_APP);
			}
			else
			{
				num4 = 0;
			
				if (Global_20386 == 23)
					IS_BIT_SET(Global_4542297, 4) == false && Global_1836102 == false;
			
				if (Global_20386 == 2 || num4 == 1)
					if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_8260[Global_20386 /*15*/].f_9) == 0)
						Global_20381 = SYSTEM::START_NEW_SCRIPT(&(Global_8260[Global_20386 /*15*/].f_5), APP_INTERNET);
				else if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_8260[Global_20386 /*15*/].f_9) == 0)
					Global_20381 = SYSTEM::START_NEW_SCRIPT(&(Global_8260[Global_20386 /*15*/].f_5), CELLPHONE);
			}
		
			SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED(&(Global_8260[Global_20386 /*15*/].f_5));
			Global_8256 = 99;
			MISC::CLEAR_BIT(&Global_8253, 23);
		}
	
		if (PAD::IS_USING_KEYBOARD_AND_MOUSE(FRONTEND_CONTROL))
			if (HUD::IS_PAUSE_MENU_ACTIVE())
				PAD::DISABLE_CONTROL_ACTION(FRONTEND_CONTROL, INPUT_FRONTEND_PAUSE_ALTERNATE, true);
	
		if (Global_20383.f_1 == 1)
			func_9();
	
		if (Global_20383.f_1 == 0)
			func_9();
	
		if (Global_20383.f_1 == 3)
		{
			func_9();
		}
		else
		{
			if (Global_21738)
			{
				if (Global_20383.f_1 == 9)
				{
					if (Global_78558)
					{
						if (!IS_BIT_SET(Global_8254, 31))
						{
							if (!IS_BIT_SET(Global_8254, 27))
							{
								if (func_8())
								{
									if (!IS_BIT_SET(Global_8253, 9))
									{
										if (func_62(FRONTEND_CONTROL, Global_20355, 0))
										{
											if (!MISC::IS_PC_VERSION())
											{
												if (!Global_20382 == 1)
												{
													if (Global_20383.f_1 > 6)
													{
														MISC::SET_BIT(&Global_8254, 24);
														MISC::SET_BIT(&Global_8254, 27);
														MISC::CLEAR_BIT(&Global_8254, 26);
														MISC::CLEAR_BIT(&Global_8254, 25);
														MISC::SET_BIT(&(Global_2793044.f_1825), 17);
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
		
			if (Global_20366 == 1)
			{
				Global_20368 = 1;
				func_65(0);
			}
		
			if (Global_20367 == 1)
			{
				Global_20368 = 1;
				func_65(0);
			}
		
			if (Global_78558)
			{
				if (!IS_BIT_SET(Global_8255, 0))
				{
					if (HUD::IS_PAUSE_MENU_ACTIVE() && !func_7())
					{
						if (Global_2800023.f_1 == true)
						{
						}
						else
						{
							func_68();
							func_65(0);
						}
					}
				}
			}
		
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID()))
				{
					if (ENTITY::GET_ENTITY_SUBMERGED_LEVEL(PLAYER::PLAYER_PED_ID()) > 0.3f)
						MISC::SET_BIT(&Global_8254, 4);
				
					if (ENTITY::GET_ENTITY_SUBMERGED_LEVEL(PLAYER::PLAYER_PED_ID()) == 1f)
					{
						if (IS_BIT_SET(Global_4718592.f_37, 17) && NETWORK::NETWORK_IS_ACTIVITY_SESSION() || Global_1926632)
						{
							func_5(true, true);
							MISC::SET_BIT(&Global_8253, 14);
						}
						else
						{
							Global_20368 = 1;
							func_68();
							func_65(0);
						}
					}
				}
			
				if (func_82(14))
					if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_113648.f_28052[0 /*29*/] || ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_113648.f_28052[1 /*29*/] || ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_113648.f_28052[2 /*29*/])
						bLocal_123 = false;
					else if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
						bLocal_123 = true;
			
				if (PED::IS_PED_IN_ANY_TRAIN(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_RIDING_TRAIN(PLAYER::PLAYER_ID()) || PED::IS_PED_ON_MOUNT(PLAYER::PLAYER_PED_ID()) || MISC::IS_STUNT_JUMP_IN_PROGRESS() || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()) || PED::IS_PED_JACKING(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), false) || PED::IS_PED_HANGING_ON_TO_VEHICLE(PLAYER::PLAYER_PED_ID()) || SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("MICHAEL1")) > 0 || Global_78820 == 1 || func_3(PLAYER::PLAYER_PED_ID()) || VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID()), false) || PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()) || GRAPHICS::GET_USINGNIGHTVISION() || bLocal_123)
					if (!Global_20326)
						MISC::SET_BIT(&Global_8254, 4);
			
				if (MISC::IS_PC_VERSION())
				{
					if (Global_78558 == false)
					{
						if (iLocal_105 == 0)
						{
							if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
							{
								if (!PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
								{
									iLocal_103 = MISC::GET_GAME_TIMER();
									iLocal_105 = 1;
								}
							}
						}
						else
						{
							iLocal_104 = MISC::GET_GAME_TIMER();
							iLocal_107 = iLocal_104 - iLocal_103;
						
							if (iLocal_107 < 4000)
								MISC::SET_BIT(&Global_8254, 4);
							else
								iLocal_105 = 0;
						}
					}
				}
			
				if (PAD::IS_CONTROL_PRESSED(PLAYER_CONTROL, INPUT_AIM) || PAD::IS_CONTROL_PRESSED(PLAYER_CONTROL, INPUT_VEH_AIM))
				{
					if (Global_78558)
					{
						WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iLocal_113, true);
					
						if (iLocal_113 != joaat("WEAPON_UNARMED") && Global_20383.f_1 < 7)
							MISC::SET_BIT(&Global_8254, 4);
					}
				}
			
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					veLocal_114 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
				
					if (ENTITY::GET_ENTITY_MODEL(veLocal_114) == joaat("SUBMERSIBLE") || ENTITY::GET_ENTITY_MODEL(veLocal_114) == joaat("SUBMERSIBLE2"))
						bLocal_117 = true;
					else
						bLocal_117 = false;
				
					if (ENTITY::GET_ENTITY_MODEL(veLocal_114) == joaat("RHINO") || ENTITY::GET_ENTITY_MODEL(veLocal_114) == joaat("CUTTER") || ENTITY::GET_ENTITY_MODEL(veLocal_114) == joaat("CHERNOBOG") || ENTITY::GET_ENTITY_MODEL(veLocal_114) == joaat("KHANJALI") || bLocal_117 || VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_114, false) == false)
						MISC::SET_BIT(&Global_8254, 4);
				
					if (ENTITY::GET_ENTITY_MODEL(veLocal_114) == joaat("VALKYRIE") || ENTITY::GET_ENTITY_MODEL(veLocal_114) == joaat("INSURGENT") || ENTITY::GET_ENTITY_MODEL(veLocal_114) == joaat("TECHNICAL") || ENTITY::GET_ENTITY_MODEL(veLocal_114) == joaat("TRASH") || ENTITY::GET_ENTITY_MODEL(veLocal_114) == joaat("TRASH2") || ENTITY::GET_ENTITY_MODEL(veLocal_114) == joaat("LIMO2") || ENTITY::GET_ENTITY_MODEL(veLocal_114) == joaat("INSURGENT3") || ENTITY::GET_ENTITY_MODEL(veLocal_114) == joaat("HALFTRACK") || ENTITY::GET_ENTITY_MODEL(veLocal_114) == joaat("DUNE3") || ENTITY::GET_ENTITY_MODEL(veLocal_114) == joaat("TRAILERSMALL2") || ENTITY::GET_ENTITY_MODEL(veLocal_114) == joaat("TECHNICAL2") || ENTITY::GET_ENTITY_MODEL(veLocal_114) == joaat("BOXVILLE5") || ENTITY::GET_ENTITY_MODEL(veLocal_114) == joaat("MOGUL") || ENTITY::GET_ENTITY_MODEL(veLocal_114) == joaat("BOMBUSHKA") || ENTITY::GET_ENTITY_MODEL(veLocal_114) == joaat("TULA") || ENTITY::GET_ENTITY_MODEL(veLocal_114) == joaat("CHERNOBOG"))
					{
						if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), veLocal_114))
						{
							seatIndex = func_2(PLAYER::PLAYER_PED_ID(), veLocal_114);
						
							if (seatIndex != -2)
							{
								if (ENTITY::GET_ENTITY_MODEL(veLocal_114) == joaat("INSURGENT") || ENTITY::GET_ENTITY_MODEL(veLocal_114) == joaat("LIMO2"))
									if (seatIndex == 3)
										MISC::SET_BIT(&Global_8254, 4);
							
								if (ENTITY::GET_ENTITY_MODEL(veLocal_114) == joaat("TRASH") || ENTITY::GET_ENTITY_MODEL(veLocal_114) == joaat("TRASH2"))
									if (seatIndex == 2 || seatIndex == 1)
										MISC::SET_BIT(&Global_8254, 4);
							
								if (ENTITY::GET_ENTITY_MODEL(veLocal_114) == joaat("TECHNICAL2"))
									if (seatIndex == 1)
										MISC::SET_BIT(&Global_8254, 4);
							
								if (ENTITY::GET_ENTITY_MODEL(veLocal_114) == joaat("BOXVILLE5"))
									if (seatIndex == 3)
										MISC::SET_BIT(&Global_8254, 4);
							
								if (ENTITY::GET_ENTITY_MODEL(veLocal_114) == joaat("INSURGENT3"))
									if (seatIndex == 3)
										MISC::SET_BIT(&Global_8254, 4);
							
								if (ENTITY::GET_ENTITY_MODEL(veLocal_114) == joaat("HALFTRACK"))
									if (seatIndex == 1)
										MISC::SET_BIT(&Global_8254, 4);
							
								if (ENTITY::GET_ENTITY_MODEL(veLocal_114) == joaat("DUNE3"))
									if (seatIndex == 0)
										MISC::SET_BIT(&Global_8254, 4);
							
								if (ENTITY::GET_ENTITY_MODEL(veLocal_114) == joaat("TRAILERSMALL2"))
									if (seatIndex == -1)
										MISC::SET_BIT(&Global_8254, 4);
							
								if (VEHICLE::IS_TURRET_SEAT(veLocal_114, seatIndex))
									MISC::SET_BIT(&Global_8254, 4);
							}
						}
					}
				
					if (PAD::IS_CONTROL_JUST_PRESSED(PLAYER_CONTROL, INPUT_VEH_ATTACK))
					{
						if (Global_78558 == false)
						{
							if (Global_20383.f_1 == 6 || Global_20383.f_1 == 7)
							{
								flag = true;
							
								if (ENTITY::GET_ENTITY_MODEL(veLocal_114) == joaat("STROMBERG") && ENTITY::IS_ENTITY_IN_WATER(veLocal_114))
									flag = false;
							
								if (VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(veLocal_114)) || VEHICLE::IS_THIS_MODEL_A_PLANE(ENTITY::GET_ENTITY_MODEL(veLocal_114)) || ENTITY::GET_ENTITY_MODEL(veLocal_114) == joaat("SUBMERSIBLE") || ENTITY::GET_ENTITY_MODEL(veLocal_114) == joaat("SUBMERSIBLE2"))
									flag = false;
							
								if (flag)
									func_65(0);
							}
						}
					}
				}
				else
				{
					if (PAD::IS_CONTROL_JUST_PRESSED(PLAYER_CONTROL, INPUT_ATTACK))
						if (Global_78558 == false)
							if (Global_20383.f_1 == 6 || Global_20383.f_1 == 7)
								func_65(0);
				
					bLocal_117 = false;
				}
			
				if (PED::IS_PED_SWIMMING_UNDER_WATER(PLAYER::PLAYER_PED_ID()))
				{
					if (IS_BIT_SET(Global_4718592.f_37, 17) && NETWORK::NETWORK_IS_ACTIVITY_SESSION() || Global_1926632)
					{
						func_5(true, true);
					}
					else
					{
						Global_20368 = 1;
						func_68();
						func_65(0);
					}
				}
			
				if (Global_78558 == false)
				{
					if (ENTITY::GET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID()) < iLocal_100)
					{
						if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
						{
							Global_20368 = 1;
							func_68();
							func_65(0);
						}
					}
				
					if (Global_20383.f_1 == 9 || Global_20383.f_1 == 10)
					{
						if (PED::IS_PED_SWIMMING_UNDER_WATER(PLAYER::PLAYER_PED_ID()))
						{
							Global_20368 = 1;
							func_68();
							func_65(0);
						}
					}
				}
				else if (func_75())
				{
					if (ENTITY::GET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID()) < iLocal_100)
					{
						if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
						{
							Global_20368 = 1;
							func_68();
							func_65(0);
						}
					}
				}
			
				if (CAM::IS_AIM_CAM_ACTIVE())
				{
					if (!PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), true))
					{
						if (!func_75())
						{
							WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iLocal_113, true);
						
							if (iLocal_113 == joaat("WEAPON_SNIPERRIFLE") || iLocal_113 == joaat("WEAPON_HEAVYSNIPER") || iLocal_113 == joaat("WEAPON_REMOTESNIPER"))
								bLocal_112 = true;
							else
								bLocal_112 = false;
						
							if (CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE())
							{
								if (bLocal_112)
								{
									Global_20368 = 1;
									func_68();
									func_65(0);
								}
							}
						}
					}
				}
			
				if (PED::IS_PED_BEING_JACKED(PLAYER::PLAYER_PED_ID()))
				{
					Global_20368 = 1;
					func_68();
					func_65(0);
				}
			
				if (PED::IS_PED_BEING_STUNNED(PLAYER::PLAYER_PED_ID(), 0))
				{
					Global_20368 = 1;
					func_68();
					func_65(0);
				}
			
				if (PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true))
				{
					Global_20368 = 1;
					func_68();
					func_65(0);
				}
			
				if (PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_IN_PARACHUTE_FREE_FALL(PLAYER::PLAYER_PED_ID()))
				{
					if (Global_78558 == false)
					{
						Global_20368 = 1;
						func_68();
						func_65(0);
					}
				}
			}
			else
			{
				num5 = 0;
			
				if (Global_78558 && Global_2800023.f_1 && Global_2800023.f_37 && Global_20383.f_1 == 9)
				{
					num5 = 1;
				
					if (!IS_BIT_SET(Global_8254, 24))
					{
						if (IS_BIT_SET(Global_8254, 26))
						{
							MISC::SET_BIT(&Global_8254, 25);
							MISC::CLEAR_BIT(&Global_8254, 26);
							MISC::CLEAR_BIT(&Global_8255, 2);
						}
					}
				}
			
				if (num5 == 0)
				{
					Global_20368 = 1;
					func_68();
					func_65(0);
				}
			}
		}
	
		if (Global_20361 == 1)
			func_1();
	
		if (Global_20382 == 2)
		{
			if (PAD::IS_USING_KEYBOARD_AND_MOUSE(FRONTEND_CONTROL))
			{
				PAD::SET_INPUT_EXCLUSIVE(PLAYER_CONTROL, Global_20352);
				PAD::SET_INPUT_EXCLUSIVE(PLAYER_CONTROL, Global_20353);
				PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_ATTACK, true);
				PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_ATTACKLEFT, true);
			}
		
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
				AUDIO::STOP_PED_RINGTONE(PLAYER::PLAYER_PED_ID());
		}
	}

	return;
}

void func_1() // Hash - 0xA1971F4E ^0xD5FA4604
{
	if (!PAD::IS_CONTROL_PRESSED(FRONTEND_CONTROL, Global_20352) && !PAD::IS_CONTROL_PRESSED(FRONTEND_CONTROL, Global_20351))
		Global_20361 = 0;

	return;
}

int func_2(Ped pedParam0, Vehicle veParam1) // Hash - 0xE817AD6A ^0xE00B3CE3
{
	if (!ENTITY::IS_ENTITY_DEAD(pedParam0, false) && !ENTITY::IS_ENTITY_DEAD(veParam1, false))
	{
		if (PED::IS_PED_SITTING_IN_VEHICLE(pedParam0, veParam1))
		{
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(veParam1, -1, false) == pedParam0)
				return -1;
		
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(veParam1, 0, false) == pedParam0)
				return 0;
		
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(veParam1, 1, false) == pedParam0)
				return 1;
		
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(veParam1, 2, false) == pedParam0)
				return 2;
		
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(veParam1, 3, false) == pedParam0)
				return 3;
		
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(veParam1, 4, false) == pedParam0)
				return 4;
		
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(veParam1, 5, false) == pedParam0)
				return 5;
		
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(veParam1, 6, false) == pedParam0)
				return 6;
		
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(veParam1, 7, false) == pedParam0)
				return 3;
		
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(veParam1, 8, false) == pedParam0)
				return 4;
		}
	}

	return -2;
}

BOOL func_3(Ped pedParam0) // Hash - 0xD8C74549 ^0xD8C74549
{
	if (pedParam0 == 0)
		return false;

	if (func_4(pedParam0) == -1)
		return false;

	return true;
}

int func_4(Ped pedParam0) // Hash - 0xDCBB968F ^0xDCBB968F
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

void func_5(BOOL bParam0, BOOL bParam1) // Hash - 0xF40FC178 ^0xA6F60F17
{
	if (bParam0)
	{
		if (func_6(0))
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

BOOL func_6(int iParam0) // Hash - 0xE8921B44 ^0x4F063755
{
	if (iParam0 == 1)
		if (Global_20383.f_1 > 3)
			if (IS_BIT_SET(Global_8253, 14))
				return true;
			else
				return false;
		else
			return false;

	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("CELLPHONE_FLASHHAND")) > 0)
		return true;

	if (Global_20383.f_1 > 3)
		return true;

	return false;
}

BOOL func_7() // Hash - 0x8DF3D75D ^0x8DF3D75D
{
	return IS_BIT_SET(Global_1962996, 5);
}

BOOL func_8() // Hash - 0x4228A1C2 ^0x952FE30F
{
	return Global_2800023.f_1;
}

void func_9() // Hash - 0x4D174CAC ^0x37BBCB07
{
	float num;
	var unk;
	float num2;

	Global_22784 = 0;
	Global_22785 = 0;
	PAD::SET_INPUT_EXCLUSIVE(PLAYER_CONTROL, Global_20353);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(HUD_VEHICLE_NAME);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(HUD_AREA_NAME);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(HUD_VEHICLE_CLASS);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(HUD_STREET_NAME);

	if (Global_20349 == 0)
	{
		MOBILE::SET_MOBILE_PHONE_SCALE(500f);
	
		if (func_74())
			iLocal_18 = MISC::GET_GAME_TIMER();
		else
			iLocal_18 = 0;
	
		MOBILE::SCRIPT_IS_MOVING_MOBILE_PHONE_OFFSCREEN(true);
		Global_20349 = 1;
	}

	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		if (AUDIO::IS_PED_RINGTONE_PLAYING(PLAYER::PLAYER_PED_ID()))
			AUDIO::STOP_PED_RINGTONE(PLAYER::PLAYER_PED_ID());

	if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		if (AUDIO::IS_PED_RINGTONE_PLAYING(PLAYER::PLAYER_PED_ID()))
			AUDIO::STOP_PED_RINGTONE(PLAYER::PLAYER_PED_ID());

	if (Global_113648.f_14053.f_84 == 1)
	{
		Global_113648.f_14053.f_84 = 0;
		HUD::CLEAR_FLOATING_HELP(0, true);
	}

	num = 350f;

	if (IS_BIT_SET(Global_8253, 30) || IS_BIT_SET(Global_8255, 2))
		num = 25f;

	unk = { Global_20343 };

	if (Global_20368 == 1)
		unk = { -45f, 45f, 25f };

	if (IS_BIT_SET(Global_8254, 26) || IS_BIT_SET(Global_8253, 30) || IS_BIT_SET(Global_8255, 2))
		uLocal_119 = { Global_20329[Global_20328 /*3*/] };
	else
		uLocal_119 = { Global_20336[Global_20328 /*3*/] };

	num2 = func_15(uLocal_119, Global_20329[Global_20328 /*3*/], Global_20343, unk, num, false);

	if (!bLocal_87 && num2 >= 1f)
	{
		MOBILE::DESTROY_MOBILE_PHONE();
		bLocal_87 = true;
	}

	if (bLocal_87 && MISC::GET_GAME_TIMER() - iLocal_18 > 500)
	{
		PAD::SET_INPUT_EXCLUSIVE(PLAYER_CONTROL, Global_20353);
		Global_20383.f_1 == 3;
		Global_20383.f_1 == 1;
		Global_20383.f_1 == 0;
		MOBILE::SCRIPT_IS_MOVING_MOBILE_PHONE_OFFSCREEN(false);
		Global_20324 = 0;
		Global_20365 = false;
		Global_20582 = 0;
	
		if (Global_113648.f_14053.f_84 == 1)
		{
			Global_113648.f_14053.f_84 = 0;
			HUD::CLEAR_FLOATING_HELP(0, true);
		}
	
		Global_20327 = 1;
	
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			AUDIO::STOP_PED_RINGTONE(PLAYER::PLAYER_PED_ID());
	
		Global_22739 == 0;
		Global_20584 = false;
	
		if (func_12(0))
			func_11();
	
		MISC::CLEAR_BIT(&Global_8254, 8);
		MISC::CLEAR_BIT(&Global_8253, 14);
		MISC::CLEAR_BIT(&Global_8253, 9);
		MISC::CLEAR_BIT(&Global_8253, 27);
		MISC::CLEAR_BIT(&Global_8253, 30);
		MISC::CLEAR_BIT(&Global_8254, 5);
		MISC::CLEAR_BIT(&Global_8254, 19);
		MISC::CLEAR_BIT(&Global_8254, 21);
		MISC::CLEAR_BIT(&Global_8254, 24);
		MISC::CLEAR_BIT(&Global_8254, 25);
		MISC::CLEAR_BIT(&Global_8254, 27);
		MISC::CLEAR_BIT(&Global_8254, 26);
		MISC::CLEAR_BIT(&Global_8255, 2);
		Global_2803652 = 0;
		iLocal_122 = 0;
	
		if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			func_10();
	
		SYSTEM::SETTIMERA(0);
	
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_8260[2 /*15*/].f_9) == 0)
		{
			while (SCRIPT::IS_THREAD_ACTIVE(Global_20381))
			{
				SYSTEM::WAIT(0);
				PAD::SET_INPUT_EXCLUSIVE(PLAYER_CONTROL, Global_20353);
			
				if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_20364))
				{
					HUD::SET_TEXT_RENDER_ID(iLocal_86);
					GRAPHICS::DRAW_SCALEFORM_MOVIE(Global_20364, Global_20303, Global_20304, Global_20305, Global_20306, 255, 255, 255, 255, 0);
				}
			
				if (SYSTEM::TIMERA() > 5000)
					SCRIPT::TERMINATE_THREAD(Global_20381);
			}
		}
	
		Global_20371 = false;
	
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_20364))
			func_119(Global_20364, "SHUTDOWN_MOVIE");
	
		SYSTEM::WAIT(0);
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&Global_20364);
		Global_20349 = 0;
		PAD::SET_INPUT_EXCLUSIVE(PLAYER_CONTROL, Global_20353);
	
		if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			if (Global_2800023.f_1)
				if (Global_78558)
					AUDIO::PLAY_SOUND_FRONTEND(-1, "Hang_Up", "Phone_SoundSet_Michael", true);
				else
					AUDIO::PLAY_SOUND_FRONTEND(-1, "Hang_Up", &Global_20372, true);
	
		func_116();
		func_114();
		Global_21738 = false;
		Global_4542576 = 0;
		SCRIPT::TERMINATE_THIS_THREAD();
	}

	return;
}

void func_10() // Hash - 0xE32CF1EF ^0xB9A7BEB2
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

void func_11() // Hash - 0x53295875 ^0x53295875
{
	if (Global_9058[0 /*2811*/][0 /*281*/].f_259 == 2)
		Global_9058[0 /*2811*/][0 /*281*/].f_259 = 0;

	if (Global_9058[1 /*2811*/][0 /*281*/].f_259 == 2)
		Global_9058[1 /*2811*/][0 /*281*/].f_259 = 0;

	if (Global_9058[2 /*2811*/][0 /*281*/].f_259 == 2)
		Global_9058[2 /*2811*/][0 /*281*/].f_259 = 0;

	MISC::CLEAR_BIT(&Global_8253, 25);
	MISC::SET_BIT(&Global_8254, 11);
	return;
}

BOOL func_12(int iParam0) // Hash - 0x3BAB94E9 ^0x3BAB94E9
{
	if (Global_43257 == 15)
		return false;

	if (func_13(iParam0))
		return false;

	return true;
}

BOOL func_13(int iParam0) // Hash - 0xECB6C71B ^0xECB6C71B
{
	return func_14(iParam0, Global_43257);
}

BOOL func_14(int iParam0, int iParam1) // Hash - 0x1FD727E0 ^0x1FD727E0
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

float func_15(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, float fParam6, float fParam7, float fParam8, float fParam9, float fParam10, float fParam11, float fParam12, BOOL bParam13) // Hash - 0x7D12D12A ^0x5CB36A2F
{
	var position;
	float num;
	float num2;
	float num3;

	if (Global_4542576 == 0)
	{
		if (IS_BIT_SET(Global_8253, 14) && Global_20383.f_1 < 4)
		{
			MOBILE::GET_MOBILE_PHONE_POSITION(&position);
		
			if (Global_20336[Global_20328 /*3*/].f_1 == position.f_1)
				Global_4542576 = 1;
		}
	}

	if (func_74() && Global_4542576 == 0)
		return 2f;

	if (iLocal_18 == 0)
		iLocal_18 = MISC::GET_GAME_TIMER();

	num = func_17(SYSTEM::TO_FLOAT(MISC::GET_GAME_TIMER() - iLocal_18) / fParam12, 0f, 1f);

	if (num < 1f)
	{
		num2 = num;
	
		if (bParam13)
		{
			num2 = num2 - 1f;
			num3 = 0.670158f;
			num2 = (num2 * num2 * (((num3 + 1f) * num2) + num3)) + 1f;
		}
		else
		{
			num2 = SYSTEM::SIN(num * 90f);
		}
	
		Global_20311 = { func_16(uParam0, uParam3, num2) };
		Global_20314 = { func_16(fParam6, fParam9, num2) };
	}
	else
	{
		Global_20311 = { uParam3 };
		Global_20314 = { fParam9 };
	}

	MOBILE::SET_MOBILE_PHONE_POSITION(Global_20311);
	MOBILE::SET_MOBILE_PHONE_ROTATION(Global_20314, 0);
	return num;
}

Vector3 func_16(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, float fParam6) // Hash - 0x2CB61ED2 ^0x2CB61ED2
{
	return uParam0 + ((uParam3 - uParam0) * { fParam6, fParam6, fParam6 });
}

float func_17(float fParam0, float fParam1, float fParam2) // Hash - 0xF4DC03E3 ^0xF4DC03E3
{
	if (fParam0 > fParam2)
		return fParam2;
	else if (fParam0 < fParam1)
		return fParam1;

	return fParam0;
}

void func_18() // Hash - 0xED4B829 ^0xC9E2283A
{
	if (Global_20361 == 0)
	{
		if (func_62(FRONTEND_CONTROL, Global_20355, 0))
		{
			if (Global_78558 == false)
			{
				if (Global_20586)
				{
					if (Global_20585 == false)
					{
						Global_20585 = true;
						func_112(Global_20364, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_83(2);
						func_19();
						func_112(Global_20364, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_20388), -1082130432, -1082130432, -1082130432);
						Global_20363 = Global_20388;
					}
					else
					{
						Global_20585 = false;
						func_112(Global_20364, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_83(1);
						func_19();
						func_112(Global_20364, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_20387), -1082130432, -1082130432, -1082130432);
						Global_20363 = Global_20387;
					}
				}
			}
		}
	}

	return;
}

void func_19() // Hash - 0xAD86E876 ^0x19F58518
{
	if (Global_20586 == false)
	{
		func_81(Global_20364, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
		MISC::CLEAR_BIT(&Global_8253, 17);
	}
	else if (Global_78558)
	{
		func_81(Global_20364, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
		MISC::CLEAR_BIT(&Global_8253, 17);
	}
	else
	{
		if (Global_20585 == true)
			if (Global_20371)
				func_81(Global_20364, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, _("NEXT"), 0, 0, 0, 0);
			else
				func_81(Global_20364, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, 0, 0, 0, 0, 0);
		else if (Global_20371)
			func_81(Global_20364, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, _("NEXT"), 0, 0, 0, 0);
		else
			func_81(Global_20364, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
	
		MISC::SET_BIT(&Global_8253, 17);
	}

	return;
}

void func_20() // Hash - 0xFA51763C ^0xED97EB49
{
	if (IS_BIT_SET(Global_8254, 10) || iLocal_122 == 1)
	{
		Global_8860 = MISC::GET_GAME_TIMER();
		Global_8859 = 0;
		Global_20361 = 1;
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20364, "GET_CURRENT_SELECTION");
		iLocal_73 = GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
		bLocal_74 = true;
	}
	else if (Global_20361 == 0)
	{
		if (func_62(FRONTEND_CONTROL, Global_20352, 0))
		{
			if (iLocal_75 == 0)
			{
				Global_8860 = MISC::GET_GAME_TIMER();
				Global_8859 = 0;
				Global_20361 = 1;
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20364, "GET_CURRENT_SELECTION");
				iLocal_73 = GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
				bLocal_74 = true;
			}
		}
	}

	return;
}

void func_21() // Hash - 0x894914A6 ^0x72312842
{
	if (Global_20361 == 0)
	{
		if (func_62(FRONTEND_CONTROL, Global_20350, 1))
		{
			if (func_107(2092, -1, 0) == 1)
			{
				if (Global_113648.f_14053[Global_20383 /*20*/].f_17 == 0)
				{
					if (!IS_BIT_SET(Global_8254, 3))
					{
						if (!Global_20326)
						{
							if (!IS_BIT_SET(Global_4542297, 3))
							{
								if (!IS_BIT_SET(Global_8253, 14))
								{
									Global_20361 = 1;
									MISC::SET_BIT(&Global_4542297, 3);
									func_22(3, 0, 1, false);
									Global_22784 = 0;
								}
							}
						}
					}
				}
			}
		}
	}

	return;
}

int func_22(int iParam0, int iParam1, int iParam2, BOOL bParam3) // Hash - 0x687B7981 ^0x511E81EC
{
	func_122();

	if (Global_78558 == false)
	{
		if (func_82(14))
		{
			if (Global_22784 == 2 || Global_22784 == 4)
			{
			}
			else
			{
				return 0;
			}
		}
	}

	if (Global_20383.f_1 == 9)
		return 0;

	if (iParam2 == 0)
		if (func_6(0) == true)
			return 0;

	if (Global_20349 == 1)
		return 0;

	if (Global_20383.f_1 == 7)
		return 0;

	iParam1 == 1;

	if (!SCRIPT::IS_THREAD_ACTIVE(Global_20380))
	{
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("CELLPHONE_FLASHHAND")) == 0)
		{
			if (Global_20383.f_1 < 4)
			{
				func_23("cellphone_flashhand");
			
				if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("CELLPHONE_FLASHHAND")) == 0)
					Global_20380 = SYSTEM::START_NEW_SCRIPT("cellphone_flashhand", DEFAULT);
			
				SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("cellphone_flashhand");
			}
		}
	}

	while (!Global_20365)
	{
		SYSTEM::WAIT(0);
	}

	func_85();
	func_84();

	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_8260[iParam0 /*15*/].f_9) == 0)
	{
		Global_8859 = 0;
		Global_20383.f_1 = 7;
		func_23(&(Global_8260[iParam0 /*15*/].f_5));
	
		if (bParam3)
			if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_8260[iParam0 /*15*/].f_9) == 0)
				Global_20381 = SYSTEM::START_NEW_SCRIPT(&(Global_8260[iParam0 /*15*/].f_5), CONTACTS_APP);
		else if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_8260[iParam0 /*15*/].f_9) == 0)
			Global_20381 = SYSTEM::START_NEW_SCRIPT(&(Global_8260[iParam0 /*15*/].f_5), CELLPHONE);
	
		SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED(&(Global_8260[iParam0 /*15*/].f_5));
		return 1;
	}

	return 1;
}

void func_23(char* sParam0) // Hash - 0x68B96D20 ^0xE2CC02C7
{
	SCRIPT::REQUEST_SCRIPT(sParam0);

	while (!SCRIPT::HAS_SCRIPT_LOADED(sParam0))
	{
		SYSTEM::WAIT(0);
	}

	return;
}

void func_24() // Hash - 0x31EA63CA ^0x44CE5358
{
	if (func_40())
	{
		if (func_62(FRONTEND_CONTROL, Global_20355, 0))
		{
			func_38();
			Global_20387 = Global_20363;
			func_35();
			return;
		}
	}

	if (Global_20362)
		if (SYSTEM::TIMERA() > 50)
			Global_20362 = false;

	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(FRONTEND_CONTROL))
	{
		if (PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_CELLPHONE_SCROLL_FORWARD))
		{
			switch (Global_20363)
			{
				case 0:
					if (Global_8822[1])
					{
						func_33();
						Global_20363 = 1;
					}
					break;
			
				case 1:
					if (Global_8822[2])
					{
						func_33();
						Global_20363 = 2;
					}
					break;
			
				case 2:
					if (Global_8822[3])
					{
						func_33();
						func_31();
						Global_20363 = 3;
					}
					else
					{
						func_29();
						func_31();
						Global_20363 = 4;
					}
					break;
			
				case 3:
					if (Global_8822[4])
					{
						func_33();
						Global_20363 = 4;
					}
					break;
			
				case 4:
					if (Global_8822[5])
					{
						func_33();
						Global_20363 = 5;
					}
					break;
			
				case 5:
					if (Global_8822[6])
					{
						func_33();
						func_31();
						Global_20363 = 6;
					}
					break;
			
				case 6:
					if (Global_8822[7])
					{
						func_33();
						Global_20363 = 7;
					}
					break;
			
				case 7:
					if (Global_8822[8])
					{
						func_33();
						Global_20363 = 8;
					}
					else
					{
						func_29();
						func_31();
						Global_20363 = 0;
					}
					break;
			
				case 8:
					if (Global_8822[0])
					{
						func_33();
						func_31();
						Global_20363 = 0;
					}
					else
					{
						func_29();
						func_31();
					}
					break;
			}
		}
	
		if (PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_CELLPHONE_SCROLL_BACKWARD))
		{
			switch (Global_20363)
			{
				case 0:
					if (Global_8822[8])
					{
						func_29();
						func_26();
						Global_20363 = 8;
					}
					else
					{
						func_33();
						func_26();
						Global_20363 = 7;
					}
					break;
			
				case 1:
					if (Global_8822[0])
					{
						func_29();
						Global_20363 = 0;
					}
					else if (Global_8822[8])
					{
						func_26();
						func_33();
					}
					else
					{
						func_26();
					}
					break;
			
				case 2:
					if (Global_8822[1])
					{
						func_29();
						Global_20363 = 1;
					}
					break;
			
				case 3:
					if (Global_8822[2])
					{
						func_29();
						func_26();
						Global_20363 = 2;
					}
					break;
			
				case 4:
					if (Global_8822[3])
					{
						func_29();
						Global_20363 = 3;
					}
					else
					{
						func_26();
						func_33();
						Global_20589 = 1;
						Global_20363 = 2;
					}
					break;
			
				case 5:
					if (Global_8822[4])
					{
						func_29();
						Global_20363 = 4;
					}
					break;
			
				case 6:
					if (Global_8822[5])
					{
						func_26();
						func_29();
						Global_20363 = 5;
					}
					break;
			
				case 7:
					if (Global_8822[6])
					{
						func_29();
						Global_20363 = 6;
					}
					break;
			
				case 8:
					if (Global_8822[7])
					{
						func_29();
						Global_20363 = 7;
					}
					break;
			}
		}
	}

	if (Global_20362 == false)
	{
		if (func_62(FRONTEND_CONTROL, Global_20358, 0))
		{
			Global_20589 = 0;
		
			switch (Global_20363)
			{
				case 2:
					if (Global_8822[0] == true)
					{
						Global_20363 = 0;
					}
					else
					{
						Global_20363 = 1;
						Global_20589 = 1;
					}
					break;
			
				case 5:
					Global_20363 = 3;
					break;
			
				case 6:
					Global_20363 = 7;
					break;
			
				case 7:
					if (Global_8822[Global_20363 + 1] == true)
					{
						Global_20363 = 8;
					}
					else
					{
						Global_20363 = 6;
						Global_20589 = 1;
					}
					break;
			
				case 8:
					Global_20363 = 6;
					break;
			
				default:
					Global_20363 = Global_20363 + 1;
					break;
			}
		
			if (Global_20589 == 1)
				func_29();
			else
				func_33();
		
			Global_20362 = true;
			SYSTEM::SETTIMERA(0);
		}
	
		if (func_62(FRONTEND_CONTROL, Global_20357, 0))
		{
			Global_20589 = 0;
		
			switch (Global_20363)
			{
				case 0:
					Global_20363 = 2;
					break;
			
				case 1:
					if (Global_8822[0] == true)
					{
						Global_20363 = 0;
					}
					else
					{
						Global_20363 = 2;
						Global_20589 = 1;
					}
					break;
			
				case 3:
					Global_20363 = 5;
					break;
			
				case 6:
					if (Global_8822[8] == true)
					{
						Global_20363 = 8;
					}
					else
					{
						Global_20363 = 7;
						Global_20589 = 1;
					}
					break;
			
				default:
					Global_20363 = Global_20363 - 1;
					break;
			}
		
			if (Global_20589 == 1)
				func_33();
			else
				func_29();
		
			Global_20362 = true;
			SYSTEM::SETTIMERA(0);
		}
	
		if (func_62(FRONTEND_CONTROL, Global_20359, 0))
		{
			Global_20589 = 0;
		
			switch (Global_20363)
			{
				case 0:
					if (Global_8822[6])
						Global_20363 = 6;
					break;
			
				case 1:
					if (Global_8822[7])
					{
						Global_20363 = 7;
					}
					else
					{
						Global_20589 = 1;
						Global_20363 = 4;
					}
					break;
			
				case 2:
					if (Global_8822[8])
					{
						Global_20363 = 8;
					}
					else
					{
						Global_20589 = 1;
						Global_20363 = 5;
					}
					break;
			
				case 3:
					if (Global_8822[0])
					{
						Global_20363 = 0;
					}
					else
					{
						Global_20589 = 1;
						Global_20363 = 6;
					}
					break;
			
				case 4:
					if (Global_8822[1])
						Global_20363 = 1;
					break;
			
				case 5:
					if (Global_8822[2])
						Global_20363 = 2;
					break;
			
				case 6:
					if (Global_8822[3])
						Global_20363 = 3;
					break;
			
				case 7:
					if (Global_8822[4])
						Global_20363 = 4;
					break;
			
				case 8:
					if (Global_8822[5])
						Global_20363 = 5;
					break;
			}
		
			if (Global_20589 == 1)
				func_31();
			else
				func_26();
		
			Global_20362 = true;
			SYSTEM::SETTIMERA(0);
		}
	
		if (func_62(FRONTEND_CONTROL, Global_20360, 0))
		{
			Global_20589 = 0;
		
			switch (Global_20363)
			{
				case 0:
					if (Global_8822[3])
						Global_20363 = 3;
					break;
			
				case 1:
					if (Global_8822[4])
						Global_20363 = 4;
					break;
			
				case 2:
					if (Global_8822[5])
						Global_20363 = 5;
					break;
			
				case 3:
					if (Global_8822[6])
						Global_20363 = 6;
					break;
			
				case 4:
					if (Global_8822[7])
					{
						Global_20363 = 7;
					}
					else
					{
						Global_20589 = 1;
						Global_20363 = 1;
					}
					break;
			
				case 5:
					if (Global_8822[8])
					{
						Global_20363 = 8;
					}
					else
					{
						Global_20589 = 1;
						Global_20363 = 2;
					}
					break;
			
				case 6:
					if (Global_8822[0])
					{
						Global_20363 = 0;
					}
					else
					{
						Global_20589 = 1;
						Global_20363 = 3;
					}
					break;
			
				case 7:
					if (Global_8822[1])
						Global_20363 = 1;
					break;
			
				case 8:
					if (Global_8822[2])
						Global_20363 = 2;
					break;
			}
		
			if (Global_20589 == 1)
				func_26();
			else
				func_31();
		
			Global_20362 = true;
			SYSTEM::SETTIMERA(0);
		}
	}

	if (Global_8260[23 /*15*/].f_10 == 57)
	{
		if (Global_20362 == true && Global_20363 == 8)
		{
			if (iLocal_124 == 0)
			{
				iLocal_124 = 1;
				func_25(12);
			}
		}
	}

	return;
}

void func_25(int iParam0) // Hash - 0xF11EB1F3 ^0x618C6F9E
{
	int num;
	int offset;

	num = iParam0 / 32;
	offset = iParam0 % 32;
	MISC::SET_BIT(&Global_2793044.f_5225.f_7[num], offset);
	return;
}

void func_26() // Hash - 0xE70DEC1F ^0xF47E1ADE
{
	func_112(Global_20364, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(1), -1082130432, -1082130432, -1082130432, -1082130432);
	AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_20372, true);
	func_27();
	return;
}

void func_27() // Hash - 0xA6C955E7 ^0xAF2E403B
{
	if (func_28())
		if (Global_20589 == 0)
			MOBILE::CELL_SET_INPUT(1);
		else
			MOBILE::CELL_SET_INPUT(2);

	return;
}

BOOL func_28() // Hash - 0xE8350107 ^0x112591EA
{
	eViewModeContext camActiveViewModeContext;
	eViewMode camViewModeForContext;
	BOOL flag;

	if (Global_78558)
		return false;

	flag = 0;
	camActiveViewModeContext = CAM::GET_CAM_ACTIVE_VIEW_MODE_CONTEXT();
	camViewModeForContext = CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(camActiveViewModeContext);

	if (camViewModeForContext == FIRST_PERSON)
		flag = 1;

	if (Global_4542575 || flag)
		return true;

	return true;
}

void func_29() // Hash - 0x92BBCEAE ^0x5612118E
{
	func_112(Global_20364, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(4), -1082130432, -1082130432, -1082130432, -1082130432);
	AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_20372, true);
	func_30();
	return;
}

void func_30() // Hash - 0x4CBD8394 ^0xE7121211
{
	if (func_28())
		if (Global_20589 == 0)
			MOBILE::CELL_SET_INPUT(3);
		else
			MOBILE::CELL_SET_INPUT(4);

	return;
}

void func_31() // Hash - 0x27F2007C ^0xD3D47445
{
	func_112(Global_20364, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(3), -1082130432, -1082130432, -1082130432, -1082130432);
	AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_20372, true);
	func_32();
	return;
}

void func_32() // Hash - 0x47667904 ^0x5056AC19
{
	if (func_28())
		if (Global_20589 == 0)
			MOBILE::CELL_SET_INPUT(2);
		else
			MOBILE::CELL_SET_INPUT(1);

	return;
}

void func_33() // Hash - 0xB44339D9 ^0xA34FAB0A
{
	func_112(Global_20364, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(2), -1082130432, -1082130432, -1082130432, -1082130432);
	AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_20372, true);
	func_34();
	return;
}

void func_34() // Hash - 0x17AED8F8 ^0x7197C9FD
{
	if (func_28())
		if (Global_20589 == 0)
			MOBILE::CELL_SET_INPUT(4);
		else
			MOBILE::CELL_SET_INPUT(3);

	return;
}

void func_35() // Hash - 0x91356320 ^0x78A05D11
{
	MISC::SET_BIT(&Global_8255, 9);
	func_37(10, _("Settings"), 0, "appSettings", 24, 1, 1, 0, 0);
	func_112(Global_20364, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);

	for (iLocal_71 = 0; iLocal_71 < 9; iLocal_71 = iLocal_71 + 1)
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20364, "SET_DATA_SLOT");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iLocal_71);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(25);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
		func_36(&Global_8260[10 /*15*/]);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(225);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}

	Global_8786[0] = 10;
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20364, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8260[10 /*15*/].f_10);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
	func_36(&Global_8260[10 /*15*/]);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(255);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	func_19();
	func_112(Global_20364, "DISPLAY_VIEW", 4f, SYSTEM::TO_FLOAT(0), -1082130432, -1082130432, -1082130432);
	func_112(Global_20364, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(0), -1082130432, -1082130432, -1082130432);
	func_80();
	return;
}

void func_36(char* sParam0) // Hash - 0x8E2F5FE2 ^0x29D9D432
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	return;
}

void func_37(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8) // Hash - 0xC22558F4 ^0xA170BFDC
{
	TEXT_LABEL_ASSIGN_STRING(&Global_8260[iParam0 /*15*/], sParam1, 16);
	Global_8260[iParam0 /*15*/].f_4 = iParam2;
	TEXT_LABEL_ASSIGN_STRING(&(Global_8260[iParam0 /*15*/].f_5), sParam3, 16);
	Global_8260[iParam0 /*15*/].f_9 = MISC::GET_HASH_KEY(sParam3);
	Global_8260[iParam0 /*15*/].f_10 = iParam4;
	Global_8260[iParam0 /*15*/].f_11 = iParam5;
	Global_8260[iParam0 /*15*/].f_12 = iParam6;
	Global_8260[iParam0 /*15*/].f_13 = iParam7;
	Global_8260[iParam0 /*15*/].f_14 = iParam8;

	if (Global_8260[iParam0 /*15*/].f_12 == 0)
		Global_8260[iParam0 /*15*/].f_12 = 0;

	if (Global_8260[iParam0 /*15*/].f_13 == 0)
		Global_8260[iParam0 /*15*/].f_13 = 0;

	if (Global_8260[iParam0 /*15*/].f_14 == 0)
		Global_8260[iParam0 /*15*/].f_14 = 0;

	return;
}

void func_38() // Hash - 0x457672CB ^0x3EB905B4
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Accept", &Global_20372, true);
		func_39();
	}

	return;
}

void func_39() // Hash - 0xD56EB04 ^0x9DB5936E
{
	if (func_28())
		MOBILE::CELL_SET_INPUT(5);

	return;
}

BOOL func_40() // Hash - 0x98B7EFDD ^0x98B7EFDD
{
	return false;
}

void func_41() // Hash - 0x8D23DA7E ^0x36653680
{
	if (func_62(FRONTEND_CONTROL, Global_20355, 0))
	{
		func_38();
		MISC::CLEAR_BIT(&Global_8255, 9);
		func_112(Global_20364, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
		func_83(1);
		func_112(Global_20364, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_20387), -1082130432, -1082130432, -1082130432);
		func_80();
	}

	return;
}

void func_42() // Hash - 0x1D1C2FB2 ^0x75EDABA0
{
	if (Global_20362)
		if (SYSTEM::TIMERA() > 50)
			Global_20362 = false;

	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(FRONTEND_CONTROL))
	{
		if (PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_CELLPHONE_SCROLL_FORWARD))
		{
			switch (Global_20363)
			{
				case 6:
					if (Global_8822[7])
					{
						func_33();
						Global_20363 = 7;
					}
					break;
			
				case 7:
					if (Global_8822[6])
					{
						func_29();
						Global_20363 = 6;
					}
					break;
			}
		}
	
		if (PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_CELLPHONE_SCROLL_BACKWARD))
		{
			switch (Global_20363)
			{
				case 6:
					if (Global_8822[7])
					{
						func_33();
						Global_20363 = 7;
					}
					break;
			
				case 7:
					if (Global_8822[6])
					{
						func_29();
						Global_20363 = 6;
					}
					break;
			}
		}
	}

	if (Global_20362 == false)
	{
		if (func_62(FRONTEND_CONTROL, Global_20358, 0))
		{
			Global_20589 = 0;
		
			switch (Global_20363)
			{
				case 2:
					Global_20363 = 0;
					break;
			
				case 5:
					Global_20363 = 3;
					break;
			
				case 7:
					if (Global_8822[Global_20363 + 1] == true)
					{
						Global_20363 = 8;
					}
					else
					{
						Global_20363 = 6;
						Global_20589 = 1;
					}
					break;
			
				case 8:
					Global_20363 = 6;
					break;
			
				default:
					Global_20363 = Global_20363 + 1;
					break;
			}
		
			if (Global_20589 == 1)
				func_29();
			else
				func_33();
		
			Global_20362 = true;
			SYSTEM::SETTIMERA(0);
		}
	
		if (func_62(FRONTEND_CONTROL, Global_20357, 0))
		{
			Global_20589 = 0;
		
			switch (Global_20363)
			{
				case 0:
					Global_20363 = 2;
					break;
			
				case 3:
					Global_20363 = 5;
					break;
			
				case 6:
					if (Global_8822[8] == true)
					{
						Global_20363 = 8;
					}
					else
					{
						Global_20363 = 7;
						Global_20589 = 1;
					}
					break;
			
				default:
					Global_20363 = Global_20363 - 1;
					break;
			}
		
			if (Global_20589 == 1)
				func_33();
			else
				func_29();
		
			Global_20362 = true;
			SYSTEM::SETTIMERA(0);
		}
	}

	return;
}

void func_43() // Hash - 0x6E12A3FE ^0x492BB3F2
{
	if (Global_20362)
		if (SYSTEM::TIMERA() > 50)
			Global_20362 = false;

	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(FRONTEND_CONTROL))
	{
		if (PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_CELLPHONE_SCROLL_FORWARD))
		{
			switch (Global_20363)
			{
				case 0:
					if (Global_8822[1])
					{
						func_33();
						Global_20363 = 1;
					}
					break;
			
				case 1:
					if (Global_8822[2])
					{
						func_33();
						Global_20363 = 2;
					}
					break;
			
				case 2:
					if (Global_8822[3])
					{
						func_33();
						func_31();
						Global_20363 = 3;
					}
					else
					{
						func_29();
						func_31();
						Global_20363 = 4;
					}
					break;
			
				case 3:
					if (Global_8822[4])
					{
						func_33();
						Global_20363 = 4;
					}
					break;
			
				case 4:
					if (Global_8822[5])
					{
						func_33();
						Global_20363 = 5;
					}
					break;
			
				case 5:
					if (Global_8822[6])
					{
						func_33();
						func_31();
						Global_20363 = 6;
					}
					break;
			
				case 6:
					if (Global_8822[7])
					{
						func_33();
						Global_20363 = 7;
					}
					break;
			
				case 7:
					if (Global_8822[8])
					{
						func_33();
						Global_20363 = 8;
					}
					else
					{
						func_29();
						func_31();
						Global_20363 = 0;
					}
					break;
			
				case 8:
					if (Global_8822[0])
					{
						func_33();
						func_31();
						Global_20363 = 0;
					}
					break;
			}
		}
	
		if (PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_CELLPHONE_SCROLL_BACKWARD))
		{
			switch (Global_20363)
			{
				case 0:
					if (Global_8822[8])
					{
						func_29();
						func_26();
						Global_20363 = 8;
					}
					else
					{
						func_33();
						func_26();
						Global_20363 = 7;
					}
					break;
			
				case 1:
					if (Global_8822[0])
					{
						func_29();
						Global_20363 = 0;
					}
					break;
			
				case 2:
					if (Global_8822[1])
					{
						func_29();
						Global_20363 = 1;
					}
					break;
			
				case 3:
					if (Global_8822[2])
					{
						func_29();
						func_26();
						Global_20363 = 2;
					}
					break;
			
				case 4:
					if (Global_8822[3])
					{
						func_29();
						Global_20363 = 3;
					}
					else
					{
						func_26();
						func_33();
						Global_20589 = 1;
						Global_20363 = 2;
					}
					break;
			
				case 5:
					if (Global_8822[4])
					{
						func_29();
						Global_20363 = 4;
					}
					break;
			
				case 6:
					if (Global_8822[5])
					{
						func_26();
						func_29();
						Global_20363 = 5;
					}
					break;
			
				case 7:
					if (Global_8822[6])
					{
						func_29();
						Global_20363 = 6;
					}
					break;
			
				case 8:
					if (Global_8822[7])
					{
						func_29();
						Global_20363 = 7;
					}
					break;
			}
		}
	}

	if (Global_20362 == false)
	{
		if (func_62(FRONTEND_CONTROL, Global_20358, 0))
		{
			Global_20589 = 0;
		
			switch (Global_20363)
			{
				case 2:
					Global_20363 = 0;
					break;
			
				case 5:
					Global_20363 = 3;
					break;
			
				case 7:
					if (Global_8822[Global_20363 + 1] == true)
					{
						Global_20363 = 8;
					}
					else
					{
						Global_20363 = 6;
						Global_20589 = 1;
					}
					break;
			
				case 8:
					Global_20363 = 6;
					break;
			
				default:
					Global_20363 = Global_20363 + 1;
					break;
			}
		
			if (Global_20589 == 1)
				func_29();
			else
				func_33();
		
			Global_20362 = true;
			SYSTEM::SETTIMERA(0);
		}
	
		if (func_62(FRONTEND_CONTROL, Global_20357, 0))
		{
			Global_20589 = 0;
		
			switch (Global_20363)
			{
				case 0:
					Global_20363 = 2;
					break;
			
				case 3:
					Global_20363 = 5;
					break;
			
				case 6:
					if (Global_8822[8] == true)
					{
						Global_20363 = 8;
					}
					else
					{
						Global_20363 = 7;
						Global_20589 = 1;
					}
					break;
			
				default:
					Global_20363 = Global_20363 - 1;
					break;
			}
		
			if (Global_20589 == 1)
				func_33();
			else
				func_29();
		
			Global_20362 = true;
			SYSTEM::SETTIMERA(0);
		}
	
		if (func_62(FRONTEND_CONTROL, Global_20359, 0))
		{
			Global_20589 = 0;
		
			switch (Global_20363)
			{
				case 0:
					if (Global_8822[6])
						Global_20363 = 6;
					break;
			
				case 1:
					if (Global_8822[7])
						Global_20363 = 7;
					break;
			
				case 2:
					if (Global_8822[8])
					{
						Global_20363 = 8;
					}
					else
					{
						Global_20589 = 1;
						Global_20363 = 5;
					}
					break;
			
				case 3:
					if (Global_8822[0])
						Global_20363 = 0;
					break;
			
				case 4:
					if (Global_8822[1])
						Global_20363 = 1;
					break;
			
				case 5:
					if (Global_8822[2])
						Global_20363 = 2;
					break;
			
				case 6:
					if (Global_8822[3])
						Global_20363 = 3;
					break;
			
				case 7:
					if (Global_8822[4])
						Global_20363 = 4;
					break;
			
				case 8:
					if (Global_8822[5])
						Global_20363 = 5;
					break;
			}
		
			if (Global_20589 == 1)
				func_31();
			else
				func_26();
		
			Global_20362 = true;
			SYSTEM::SETTIMERA(0);
		}
	
		if (func_62(FRONTEND_CONTROL, Global_20360, 0))
		{
			Global_20589 = 0;
		
			switch (Global_20363)
			{
				case 0:
					if (Global_8822[3])
						Global_20363 = 3;
					break;
			
				case 1:
					if (Global_8822[4])
						Global_20363 = 4;
					break;
			
				case 2:
					if (Global_8822[5])
						Global_20363 = 5;
					break;
			
				case 3:
					if (Global_8822[6])
						Global_20363 = 6;
					break;
			
				case 4:
					if (Global_8822[7])
						Global_20363 = 7;
					break;
			
				case 5:
					if (Global_8822[8])
					{
						Global_20363 = 8;
					}
					else
					{
						Global_20589 = 1;
						Global_20363 = 2;
					}
					break;
			
				case 6:
					if (Global_8822[0])
						Global_20363 = 0;
					break;
			
				case 7:
					if (Global_8822[1])
						Global_20363 = 1;
					break;
			
				case 8:
					if (Global_8822[2])
						Global_20363 = 2;
					break;
			}
		
			if (Global_20589 == 1)
				func_26();
			else
				func_31();
		
			Global_20362 = true;
			SYSTEM::SETTIMERA(0);
		}
	}

	return;
}

void func_44() // Hash - 0x52B4545C ^0x227ACE69
{
	int num;
	Vehicle vehiclePedIsIn;
	char* str;

	if (GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(iLocal_73))
	{
		bLocal_74 = false;
		iLocal_72 = GRAPHICS::GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_INT(iLocal_73);
	
		if (Global_20585 == false)
			Global_20387 = iLocal_72;
		else
			Global_20388 = iLocal_72;
	
		if (iLocal_72 < 0)
			iLocal_72 = 0;
	
		Global_20386 = Global_8786[iLocal_72];
	
		if (IS_BIT_SET(Global_8254, 10))
		{
			Global_20386 = 2;
			MISC::CLEAR_BIT(&Global_8254, 10);
		}
	
		if (iLocal_122 == 1)
		{
			Global_20387 = 1;
			Global_20386 = 0;
			Global_2803652 = 0;
			iLocal_122 = 0;
		}
	
		num = 0;
	
		if (Global_78558)
			Global_20386 == 24 && func_40();
	
		if (SCRIPT::IS_THREAD_ACTIVE(Global_20381))
			num = 1;
	
		if (Global_20386 == 3)
		{
			if (IS_BIT_SET(Global_8254, 3))
			{
				num = 1;
			}
			else if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				if (PED::IS_PED_ON_MOUNT(PLAYER::PLAYER_PED_ID()) || MISC::IS_STUNT_JUMP_IN_PROGRESS() || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()) || PED::IS_PED_JACKING(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_HANGING_ON_TO_VEHICLE(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()) || VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID()), false) || GRAPHICS::GET_USINGNIGHTVISION())
					num = 1;
			
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()) == false)
						num = 1;
				
					vehiclePedIsIn = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
				
					if (ENTITY::GET_ENTITY_UPRIGHT_VALUE(vehiclePedIsIn) < 0f)
						num = 1;
				}
			
				if (PLAYER::IS_PLAYER_TARGETTING_ANYTHING(PLAYER::PLAYER_ID()))
					num = 1;
			
				if (Global_78558)
				{
					if (PAD::IS_CONTROL_PRESSED(PLAYER_CONTROL, INPUT_AIM) || PAD::IS_CONTROL_PRESSED(PLAYER_CONTROL, INPUT_VEH_AIM))
					{
						WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iLocal_113, true);
					
						if (iLocal_113 != joaat("WEAPON_UNARMED"))
							num = 1;
					}
				}
			}
		}
	
		if (Global_20386 == 2)
			if (IS_BIT_SET(Global_8254, 6))
				num = 1;
	
		if (Global_20386 == 23 && MISC::ARE_STRINGS_EQUAL(&Global_8260[Global_20386 /*15*/], _("Benny's")))
			if (IS_BIT_SET(Global_8254, 6))
				num = 1;
	
		if (Global_78558)
		{
			if (Global_20386 == 15 || Global_20386 == 5)
			{
			}
			else
			{
				if (Global_20386 == 23)
				{
					IS_BIT_SET(Global_4542297, 4) == false && Global_1836102 == false && IS_BIT_SET(Global_4542297, 20) == false && IS_BIT_SET(Global_4542297, 22) == false;
				
					if (IS_BIT_SET(Global_4542297, 20) == true && IS_BIT_SET(Global_4542297, 4) == false && Global_1836102 == false && IS_BIT_SET(Global_4542297, 22) == false && IS_BIT_SET(Global_4542297, 26) == false)
					{
						num = 1;
						MISC::SET_BIT(&Global_4542297, 21);
					}
				}
			
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
					if (PED::GET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 78, true) || PLAYER::IS_PLAYER_FREE_AIMING(PLAYER::PLAYER_ID()))
						if (Global_20386 == 3)
							num = 1;
			
				if (Global_75692 && Global_20386 == 2)
				{
					num = 1;
					str = func_47();
				
					if (!func_46(str))
						func_78(str, -1);
				}
			
				if (func_121())
				{
					if (Global_20386 == 10)
					{
						if (!func_46(_("This app is currently unavailable. Please try again later.")))
							func_78(_("This app is currently unavailable. Please try again later."), -1);
					
						num = 1;
					}
				}
			
				if (num == 0)
				{
					func_81(Global_20364, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
					MISC::CLEAR_BIT(&Global_8253, 17);
					Global_20383.f_1 = 7;
				
					if (IS_BIT_SET(Global_8253, 23))
					{
					}
					else
					{
						func_38();
						SCRIPT::REQUEST_SCRIPT(&(Global_8260[Global_20386 /*15*/].f_5));
						MISC::SET_BIT(&Global_8253, 23);
					}
				}
				else
				{
					Global_20386 == 2 || Global_20386 == 3;
					func_45();
				}
			}
		}
		else
		{
			switch (Global_20386)
			{
				case 3:
					if (Global_112701 == 1)
						num = 1;
					break;
			
				case 8:
					num = 1;
					break;
			
				case 15:
					num = 1;
					break;
			
				case 16:
					num = 1;
					MISC::SET_BIT(&Global_8253, 26);
					break;
			
				case 5:
					num = 1;
					break;
			
				case 20:
					num = 1;
				
					if (Global_20587 == 0)
					{
						if (Global_8257 == 0 && iLocal_75 == 0 && Global_43257 == 15)
						{
							iLocal_75 = 1;
							func_38();
							!Global_113648.f_14053.f_85;
						}
					}
					else
					{
						func_45();
					}
					break;
			
				default:
					break;
			}
		
			if (CUTSCENE::CAN_USE_MOBILE_PHONE_DURING_CUTSCENE())
				if (Global_20386 != 0)
					num = 1;
		
			if (func_82(14))
				if (Global_20386 != 3 && Global_20386 != 14)
					num = 1;
		
			if (num == 0)
			{
				func_38();
				func_81(Global_20364, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				MISC::CLEAR_BIT(&Global_8253, 17);
				Global_20383.f_1 = 7;
			
				if (IS_BIT_SET(Global_8253, 23))
				{
				}
				else
				{
					SCRIPT::REQUEST_SCRIPT(&(Global_8260[Global_20386 /*15*/].f_5));
					MISC::SET_BIT(&Global_8253, 23);
				}
			}
			else if (Global_20386 != 20)
			{
				if (Global_113648.f_14053.f_86 == 0)
				{
					if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("PAPARAZZO3B")) > 0)
					{
						if (Global_20386 == 3)
						{
							if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
							{
								if (PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), false))
								{
									func_78(_("You cannot use the Snapmatic application while in cover."), -1);
									Global_113648.f_14053.f_86 = 1;
								}
							}
						}
					}
				}
			
				func_45();
			}
		}
	}

	return;
}

void func_45() // Hash - 0xD1E0EACF ^0x6F174F5D
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Back", &Global_20372, true);

	return;
}

BOOL func_46(char* sParam0) // Hash - 0xCD6A3595 ^0xB0E86AA0
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

char* func_47() // Hash - 0x306ACA3A ^0x7BE81829
{
	return _("The Internet app is currently unavailable. Please try again later.");
}

void func_48() // Hash - 0x54943C34 ^0x54943C34
{
	if (Global_20349 == 0)
	{
		if (func_15(Global_20336[Global_20328 /*3*/], Global_20329[Global_20328 /*3*/], Global_20343, Global_20343, 350f, false) >= 1f)
		{
			iLocal_18 = 0;
			MISC::CLEAR_BIT(&Global_8254, 24);
			MISC::SET_BIT(&Global_8254, 26);
		}
	}

	return;
}

void func_49() // Hash - 0xAE56A861 ^0xAE56A861
{
	if (Global_20349 == 0)
	{
		if (func_15(Global_20329[Global_20328 /*3*/], Global_20336[Global_20328 /*3*/], Global_20343, Global_20343, 350f, true) >= 1f)
		{
			iLocal_18 = 0;
			MISC::CLEAR_BIT(&Global_8254, 25);
		
			if (Global_21738)
				MISC::CLEAR_BIT(&Global_8254, 27);
		}
	}

	return;
}

void func_50() // Hash - 0x7FD51E78 ^0x7FD51E78
{
	if (Global_20349 == 0 && Global_20323 == 0)
	{
		if (func_15(Global_20336[Global_20328 /*3*/], Global_20329[Global_20328 /*3*/], Global_20343, Global_20343, 350f, false) >= 1f)
		{
			iLocal_18 = 0;
			Global_4542576 = 0;
		}
	}

	return;
}

void func_51() // Hash - 0x7E00FF0B ^0x32944E5A
{
	float num;
	float num2;

	if (IS_BIT_SET(Global_8255, 2))
	{
		MISC::SET_BIT(&Global_8254, 8);
		MISC::SET_BIT(&Global_8253, 14);
		Global_20323 = 0;
		iLocal_18 = 0;
		MOBILE::SET_MOBILE_PHONE_ROTATION(Global_20343, 0);
	}
	else if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("APPEMAIL")) < 1)
	{
		num = func_15(Global_20329[Global_20328 /*3*/], Global_20336[Global_20328 /*3*/], Global_20346, Global_20343, 450f, true);
	
		if (num >= 1f)
		{
			MISC::SET_BIT(&Global_8254, 8);
			MISC::SET_BIT(&Global_8253, 14);
			Global_20323 = 0;
			iLocal_18 = 0;
			MISC::CLEAR_BIT(&Global_8255, 2);
			iLocal_82 = 0;
		}
		else if (num >= 0.75f)
		{
			MISC::SET_BIT(&Global_8254, 8);
		}
	}
	else
	{
		if (iLocal_82 == 0)
		{
			fLocal_83 = { Global_20336[Global_20328 /*3*/] };
			fLocal_83 = fLocal_83 - 10f;
			fLocal_83.f_1 = fLocal_83.f_1 + 20f;
			iLocal_82 = 1;
		}
	
		num2 = func_15(Global_20329[Global_20328 /*3*/], fLocal_83, -90f, 0f, 90f, -90f, 0f, 90f, 450f, true);
	
		if (num2 >= 1f)
		{
			MISC::SET_BIT(&Global_8254, 8);
			MISC::SET_BIT(&Global_8253, 14);
			Global_20323 = 0;
			iLocal_18 = 0;
			MISC::CLEAR_BIT(&Global_8255, 2);
			iLocal_82 = 0;
		}
		else if (num2 >= 0.75f)
		{
			MISC::SET_BIT(&Global_8254, 8);
		}
	}

	return;
}

void func_52() // Hash - 0x75DBCED5 ^0x5D365EDF
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iLocal_107 = NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), iLocal_106);
	}
	else
	{
		iLocal_102 = MISC::GET_GAME_TIMER();
		iLocal_107 = iLocal_102 - iLocal_101;
	}

	if (iLocal_107 > 4000)
	{
		iLocal_89 = func_104();
		AUDIO::IS_MOBILE_PHONE_CALL_ONGOING();
	
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			iLocal_106 = NETWORK::GET_NETWORK_TIME();
		else
			iLocal_101 = MISC::GET_GAME_TIMER();
	}

	return;
}

void func_53() // Hash - 0xF966873F ^0xF966873F
{
	if (Global_20382 == 1)
	{
		func_120();
	
		if (Global_20361 == 0)
		{
			if (func_62(FRONTEND_CONTROL, Global_20353, 0))
			{
				if (IS_BIT_SET(Global_8254, 8))
				{
					if (Global_21772 == false)
					{
						func_45();
						Global_20361 = 1;
						Global_20382 = 3;
						Global_21774 = 1;
					
						if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
							AUDIO::STOP_PED_RINGTONE(PLAYER::PLAYER_PED_ID());
					}
				}
			}
		}
	
		if (Global_20361 == 0)
		{
			if (func_62(FRONTEND_CONTROL, Global_20352, 0))
			{
				if (IS_BIT_SET(Global_8254, 8))
				{
					func_38();
					Global_20361 = 1;
					Global_20382 = 2;
				
					if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
						AUDIO::STOP_PED_RINGTONE(PLAYER::PLAYER_PED_ID());
				
					func_59();
					func_58();
				}
			}
		}
	}
	else
	{
		if (iLocal_99 == 0)
		{
			if (IS_BIT_SET(Global_8253, 27))
			{
				iLocal_99 = 1;
				SYSTEM::SETTIMERB(0);
			}
		}
		else
		{
			if (Global_20383.f_1 > 3)
				if (SYSTEM::TIMERB() > 1500)
					if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
						if (!AUDIO::IS_PED_RINGTONE_PLAYING(PLAYER::PLAYER_PED_ID()))
							if (Global_20326)
								AUDIO::PLAY_PED_RINGTONE("Dial_and_Remote_Ring", PLAYER::PLAYER_PED_ID(), true);
							else if (!IS_BIT_SET(Global_8255, 5))
								AUDIO::PLAY_PED_RINGTONE("Remote_Ring", PLAYER::PLAYER_PED_ID(), true);
		
			if (!IS_BIT_SET(Global_8253, 27))
			{
				iLocal_99 = 0;
			
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
					AUDIO::STOP_PED_RINGTONE(PLAYER::PLAYER_PED_ID());
			}
		}
	
		if (Global_20382 == 0)
		{
			if (Global_20361 == 0)
			{
				if (func_62(FRONTEND_CONTROL, Global_20351, 0) || Global_2803652 == 1)
				{
					if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
					{
						if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
						{
							if (IS_BIT_SET(Global_8254, 8))
							{
								switch (Global_20383.f_1)
								{
									case 3:
										break;
								
									case 4:
										break;
								
									case 6:
										if (Global_20584 == false)
										{
											if (Global_20585 == true)
											{
												func_45();
												Global_20585 = false;
												func_112(Global_20364, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
												func_85();
												func_84();
												func_83(1);
												func_112(Global_20364, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_20387), -1082130432, -1082130432, -1082130432);
											}
											else
											{
												if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
													AUDIO::PLAY_SOUND_FRONTEND(-1, "Put_Away", &Global_20372, true);
											
												iLocal_18 = 0;
												Global_20383.f_1 = 3;
											}
										}
										break;
								
									case 5:
										Global_20383.f_1 = 3;
										break;
								
									case 7:
										IS_BIT_SET(Global_8253, 23) == true;
									
										if (Global_8861 - Global_8860 > Global_8862 && IS_BIT_SET(Global_8253, 23) == false)
										{
											if (IS_BIT_SET(Global_8254, 0))
											{
											}
											else
											{
												func_45();
												Global_8859 = 1;
												Global_20383.f_1 = 6;
											
												if (Global_78558)
													func_112(Global_20364, "SET_THEME", SYSTEM::TO_FLOAT(Global_4542573), -1082130432, -1082130432, -1082130432, -1082130432);
											
												Global_8256 = 99;
											
												if (Global_2803652 == 0)
													func_54();
											}
										}
										break;
								
									case 8:
										break;
								
									case 10:
										if (Global_7568 == 132)
										{
											if (Global_2800023.f_1 || IS_BIT_SET(Global_8254, 20))
											{
												func_45();
												func_76();
											}
										}
										else
										{
											func_45();
											func_76();
											Global_21774 = 1;
										}
										break;
								
									case 9:
										if (Global_21725 == 0)
											Global_20383.f_1 = 3;
										break;
								
									default:
										break;
								}
							
								if (Global_2803652 == 1)
								{
									iLocal_122 = 1;
									Global_2803652 = 0;
								}
							}
						}
					}
				}
			}
		}
	}

	return;
}

void func_54() // Hash - 0xC0EDC8FD ^0xA0778517
{
	var unk;

	if (Global_20366 == 1)
		return;

	if (Global_20383.f_1 < 4)
		return;

	while (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_20364))
	{
		if (Global_78558)
			return;
	
		SYSTEM::WAIT(0);
	}

	switch (Global_20383.f_1)
	{
		case 6:
			func_112(Global_20364, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_83(Global_8858);
		
			if (Global_8858 == 1)
			{
				func_112(Global_20364, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_20387), -1082130432, -1082130432, -1082130432);
				Global_20363 = Global_20387;
			}
			else
			{
				func_112(Global_20364, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_20388), -1082130432, -1082130432, -1082130432);
				Global_20363 = Global_20388;
			}
		
			if (Global_20371)
			{
				func_81(Global_20364, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, _("SELECT"), 0, 0, 0, 0);
				func_81(Global_20364, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, _("BACK"), 0, 0, 0, 0);
			}
			else
			{
				func_81(Global_20364, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
				func_81(Global_20364, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
			}
		
			if (Global_20586 == false)
			{
				func_81(Global_20364, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				MISC::CLEAR_BIT(&Global_8253, 17);
			}
			else if (Global_78558)
			{
				func_81(Global_20364, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				MISC::CLEAR_BIT(&Global_8253, 17);
			}
			else
			{
				if (Global_20585 == true)
					if (Global_20371)
						func_81(Global_20364, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, _("NEXT"), 0, 0, 0, 0);
					else
						func_81(Global_20364, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, 0, 0, 0, 0, 0);
				else if (Global_20371)
					func_81(Global_20364, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, _("NEXT"), 0, 0, 0, 0);
				else
					func_81(Global_20364, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
			
				MISC::SET_BIT(&Global_8253, 17);
			}
		
			if (Global_78558)
			{
				func_80();
				MISC::CLEAR_BIT(&Global_8255, 9);
				func_112(Global_20364, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_20387), -1082130432, -1082130432, -1082130432);
			}
			break;
	
		case 7:
			break;
	
		case 10:
			func_112(Global_20364, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_81(Global_20364, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_81(Global_20364, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			MISC::CLEAR_BIT(&Global_8253, 17);
		
			if (IS_BIT_SET(Global_8253, 20))
			{
				func_81(Global_20364, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_20371)
			{
				func_81(Global_20364, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, _("END CALL"), 0, 0, 0, 0);
			
				if (Global_20326)
					func_81(Global_20364, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else
			{
				func_81(Global_20364, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			break;
	
		case 9:
			if (Global_20382 == 1)
			{
				func_106();
				func_112(Global_20364, "SET_THEME", SYSTEM::TO_FLOAT(Global_113648.f_14053[Global_20383 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
			
				if (Global_21738)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20364, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(4);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(_("~a~"));
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_21740);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					func_36(_("CHAR_DEFAULT"));
					func_36(_("INCOMING CALL"));
					func_36(_("INCOMING CALL"));
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				else if (func_57(Global_7568, Global_20383) == 0)
				{
					func_81(Global_20364, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(2), -1f, -1f, &(Global_117[Global_7568 /*10*/].f_4), _("CHAR_DEFAULT"), _("INCOMING CALL"), _("Unknown"), 0);
				}
				else
				{
					func_81(Global_20364, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(2), -1f, -1f, &(Global_2028[Global_7568 /*29*/].f_3), &(Global_2028[Global_7568 /*29*/].f_7), _("INCOMING CALL"), &(Global_2028[Global_7568 /*29*/].f_3), 0);
				}
			
				func_112(Global_20364, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			else if (Global_21725 == 4 || Global_21725 == 3)
			{
				func_112(Global_20364, "SET_THEME", SYSTEM::TO_FLOAT(Global_113648.f_14053[Global_20383 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				func_106();
			
				if (Global_21738)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20364, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(4);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(_("~a~"));
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_21740);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					func_36(_("CHAR_DEFAULT"));
					func_36(_("CONNECTED"));
					func_36(_("CONNECTED"));
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				else
				{
					if (Global_21983)
						TEXT_LABEL_ASSIGN_STRING(&unk, _("CONNECTED"), 24);
					else
						TEXT_LABEL_ASSIGN_STRING(&unk, _("DIALING..."), 24);
				
					if (func_57(Global_7568, Global_20383) == 0)
					{
						func_112(Global_20364, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_81(Global_20364, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(3), -1f, -1f, &(Global_117[Global_7568 /*10*/].f_4), _("CHAR_DEFAULT"), &unk, _("Unknown"), 0);
					}
					else
					{
						func_112(Global_20364, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_81(Global_20364, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(3), -1f, -1f, &(Global_2028[Global_7568 /*29*/].f_3), &(Global_2028[Global_7568 /*29*/].f_7), &unk, &(Global_2028[Global_7568 /*29*/].f_3), 0);
					}
				}
			
				func_112(Global_20364, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
		
			func_55();
			break;
	
		default:
			break;
	}

	return;
}

void func_55() // Hash - 0x94709EF9 ^0x4FD337F
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_20364))
	{
		func_56();
	
		if (Global_20382 == 1)
		{
			if (Global_20371)
				func_81(Global_20364, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, _("ANSWER"), 0, 0, 0, 0);
			else
				func_81(Global_20364, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
		
			if (Global_21772)
				func_81(Global_20364, "SET_SOFT_KEYS", 3f, 0f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			else if (IS_BIT_SET(Global_8253, 20))
				func_81(Global_20364, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			else if (Global_20371)
				func_81(Global_20364, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, _("REJECT"), 0, 0, 0, 0);
			else
				func_81(Global_20364, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
		
			func_81(Global_20364, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			MISC::CLEAR_BIT(&Global_8253, 17);
		}
		else
		{
			func_81(Global_20364, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_81(Global_20364, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			MISC::CLEAR_BIT(&Global_8253, 17);
		
			if (IS_BIT_SET(Global_8253, 20))
			{
				func_81(Global_20364, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_20371)
			{
				func_81(Global_20364, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, _("END CALL"), 0, 0, 0, 0);
			
				if (Global_20326)
					func_81(Global_20364, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else
			{
				func_81(Global_20364, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
		}
	}

	return;
}

void func_56() // Hash - 0x697A4120 ^0x745FE124
{
	if (Global_78558)
	{
		func_81(Global_20364, "SET_SOFT_KEYS", 1f, 0f, 9f, -1f, -1f, 0, 0, 0, 0, 0);
		MISC::CLEAR_BIT(&Global_8253, 17);
	}

	return;
}

int func_57(int iParam0, int iParam1) // Hash - 0x97DCD8A1 ^0xF8178EDD
{
	if (iParam1 < 0 || iParam1 > 4)
		return 0;

	return Global_2028[iParam0 /*29*/].f_24[iParam1];
}

void func_58() // Hash - 0x3DE2499A ^0x55EE22D9
{
	if (Global_21738)
	{
		if (Global_78558)
		{
			if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_20364))
			{
				if (!MISC::IS_PC_VERSION())
				{
					func_81(Global_20364, "SET_SOFT_KEYS", 1f, 1f, 8f, -1f, -1f, _("CALL"), 0, 0, 0, 0);
					MISC::SET_BIT(&(Global_2793044.f_1825), 15);
				}
			}
		}
	}

	return;
}

void func_59() // Hash - 0x9CA1F021 ^0x5B209066
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_20364))
	{
		if (!Global_21733)
		{
			func_81(Global_20364, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_81(Global_20364, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			MISC::CLEAR_BIT(&Global_8253, 17);
		
			if (IS_BIT_SET(Global_8253, 20))
			{
				func_81(Global_20364, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_20371)
			{
				func_81(Global_20364, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, _("END CALL"), 0, 0, 0, 0);
			
				if (Global_20326)
					func_81(Global_20364, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else
			{
				func_81(Global_20364, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
		
			if (Global_21738)
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20364, "SET_DATA_SLOT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(4);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(_("~a~"));
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_21740);
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				func_36(_("CHAR_DEFAULT"));
				func_36(_("CONNECTED"));
				func_36(_("CONNECTED"));
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
			else if (func_57(Global_7568, Global_20383) == 0)
			{
				func_81(Global_20364, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(3), -1f, -1f, &(Global_117[Global_7568 /*10*/].f_4), _("CHAR_DEFAULT"), _("CONNECTED"), _("Unknown"), 0);
			}
			else
			{
				func_81(Global_20364, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(3), -1f, -1f, &(Global_2028[Global_7568 /*29*/].f_3), &(Global_2028[Global_7568 /*29*/].f_7), _("CONNECTED"), &(Global_2028[Global_7568 /*29*/].f_3), 0);
			}
		}
	
		func_112(Global_20364, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
	}

	return;
}

void func_60() // Hash - 0xC536DD5 ^0xC536DD5
{
	Global_20591 = 0;
	func_61();
	return;
}

void func_61() // Hash - 0xB0D09B77 ^0xCD98BAF0
{
	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING() || Global_20382 == 1)
	{
		AUDIO::RESTART_SCRIPTED_CONVERSATION();
		Global_22736 = 0;
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		Global_21725 = 6;
		Global_20383.f_1 = Global_20385;
		return;
	}

	return;
}

BOOL func_62(eControlType ectParam0, eControlAction ecaParam1, int iParam2) // Hash - 0xBB00BE4E ^0xA27687FD
{
	if (PAD::IS_CONTROL_JUST_PRESSED(ectParam0, ecaParam1) || iParam2 == 1 && PAD::IS_DISABLED_CONTROL_JUST_PRESSED(ectParam0, ecaParam1))
	{
		if (MISC::IS_PC_VERSION())
			if (MISC::UPDATE_ONSCREEN_KEYBOARD() == 0 || NETWORK::NETWORK_TEXT_CHAT_IS_TYPING() && PAD::IS_USING_KEYBOARD_AND_MOUSE(FRONTEND_CONTROL))
				return false;
	
		if (HUD::IS_PAUSE_MENU_ACTIVE() || HUD::IS_WARNING_MESSAGE_ACTIVE())
			return false;
		else
			return true;
	}

	return false;
}

BOOL func_63() // Hash - 0x9E06F5B4 ^0x7950556C
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("APPTRACKIFY")) > 0)
		return true;

	return false;
}

BOOL func_64(BOOL bParam0) // Hash - 0x15889021 ^0xE7262364
{
	if (!bParam0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("BENCHMARK")) > 0)
		return true;

	return IS_BIT_SET(Global_78807, 0);
}

void func_65(int iParam0) // Hash - 0x4066FEF5 ^0x9787FBDA
{
	if (func_67())
		return;

	if (Global_20584)
		if (func_7())
			func_5(true, true);
		else
			func_5(false, false);

	if (Global_20383.f_1 == 10 || Global_20383.f_1 == 9)
		MISC::SET_BIT(&Global_8254, 16);

	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);

	Global_21725 = 5;

	if (iParam0 == 1)
		MISC::SET_BIT(&Global_8253, 30);
	else
		MISC::CLEAR_BIT(&Global_8253, 30);

	if (!func_66())
		Global_20383.f_1 = 3;

	return;
}

BOOL func_66() // Hash - 0xD140D54A ^0xE638D98F
{
	if (Global_20383.f_1 == 1 || Global_20383.f_1 == 0)
		return true;

	return false;
}

BOOL func_67() // Hash - 0xC41437CB ^0xC41437CB
{
	return IS_BIT_SET(Global_1962996, 19);
}

void func_68() // Hash - 0xF8FE2348 ^0xA77911B2
{
	if (Global_20383.f_1 == 9 || Global_20383.f_1 == 10)
	{
		Global_21778 = 0;
		Global_21774 = 1;
	}

	return;
}

void func_69() // Hash - 0xE3E059E8 ^0xA4F17C
{
	int num;
	int num2;
	int pedPropIndex;

	num = 0;
	num2 = 0;

	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		if (func_77() && PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), false))
			num2 = 1;

	if (!Global_78558)
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && num2 == 0)
		{
			pedPropIndex = PED::GET_PED_PROP_INDEX(PLAYER::PLAYER_PED_ID(), PV_COMP_HEAD, 1);
		
			if (Global_78558)
				if (pedPropIndex == 15 || pedPropIndex == 16 || pedPropIndex == 17 || pedPropIndex == 18 || pedPropIndex == 19 || PED::IS_PED_WEARING_HELMET(PLAYER::PLAYER_PED_ID()))
					num = 1;
			else if (PED::IS_PED_WEARING_HELMET(PLAYER::PLAYER_PED_ID()))
				num = 1;
		
			if (!Global_20326)
			{
				if (Global_7568 != 128)
				{
					if (num == 0)
					{
						if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
						{
							if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
							{
							}
							else
							{
								if (Global_78558)
								{
									PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 244, false);
									PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 243, false);
									PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 242, false);
								}
							
								MISC::SET_BIT(&Global_8253, 11);
								TASK::TASK_USE_MOBILE_PHONE(PLAYER::PLAYER_PED_ID(), true, 1);
							}
						}
					}
				}
			}
		}
	}

	return;
}

void func_70() // Hash - 0x3F949401 ^0xDDE062DB
{
	if (IS_BIT_SET(Global_8253, 14) && Global_4542576 == 0 && Global_20323 == 0)
	{
		if (func_75())
		{
		}
		else
		{
			func_71();
		}
	
		if (Global_20383.f_1 == 9)
			if (Global_21738 == false)
				bLocal_76 = true;
	}

	return;
}

void func_71() // Hash - 0x4E1AB757 ^0x5CCDF7AE
{
	var position;

	MOBILE::GET_MOBILE_PHONE_POSITION(&position);

	if (Global_20336[Global_20328 /*3*/].f_1 == position.f_1)
	{
	}
	else
	{
		Global_20323 = 1;
	}

	return;
}

void func_72() // Hash - 0xFC84DADE ^0x408F7A0C
{
	if (IS_BIT_SET(Global_8253, 14) && Global_4542576 == 0 && Global_20323 == 0)
	{
		if (bLocal_76 == false)
		{
			if (IS_BIT_SET(Global_8254, 26))
			{
				MISC::CLEAR_BIT(&Global_8254, 24);
				MISC::CLEAR_BIT(&Global_8254, 25);
				MISC::CLEAR_BIT(&Global_8254, 27);
				MISC::CLEAR_BIT(&Global_8254, 26);
			
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
					if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
						func_71();
					else if (func_74() == false)
						func_71();
			}
		}
	
		if (Global_20383.f_1 == 10 || Global_20383.f_1 == 9)
		{
			if (func_74())
				func_73();
		}
		else if (func_75())
		{
		}
		else if (func_74())
		{
			func_73();
		}
	
		if (Global_20383.f_1 == 9)
			if (Global_21738 == false)
				bLocal_76 = true;
	}

	return;
}

void func_73() // Hash - 0x6CD9D5B7 ^0x3134360C
{
	var position;

	MOBILE::GET_MOBILE_PHONE_POSITION(&position);

	if (Global_20329[Global_20328 /*3*/].f_1 == position.f_1)
	{
	}
	else
	{
		Global_4542576 = 1;
	}

	return;
}

BOOL func_74() // Hash - 0xA4B50453 ^0xAB3B9EF5
{
	eViewModeContext camActiveViewModeContext;
	eViewMode camViewModeForContext;
	int num;
	Vehicle vehiclePedIsIn;

	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		if (Global_20383.f_1 == 10 || Global_20383.f_1 == 9)
			if (Global_20326 == false)
				if (Global_7568 != 128)
					if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
						Global_21725 != 2;
	
		if (func_82(14))
			return false;
	
		if (PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), false))
			return false;
	
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			if (!CAM::IS_CINEMATIC_FIRST_PERSON_VEHICLE_INTERIOR_CAM_RENDERING())
				if (ENTITY::IS_ENTITY_IN_WATER(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
					return false;
	
		if (PED::IS_PED_SWIMMING(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_SWIMMING_UNDER_WATER(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()) || PED::IS_PED_HANGING_ON_TO_VEHICLE(PLAYER::PLAYER_PED_ID()) && !(IS_BIT_SET(Global_4718592.f_37, 17) && NETWORK::NETWORK_IS_ACTIVITY_SESSION() || Global_1926632))
			return false;
	
		if (Global_112696)
			return false;
	}

	if (Global_78558)
		return false;

	num = 0;
	camActiveViewModeContext = CAM::GET_CAM_ACTIVE_VIEW_MODE_CONTEXT();
	camViewModeForContext = CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(camActiveViewModeContext);

	if (camViewModeForContext == FIRST_PERSON && camActiveViewModeContext == ON_FOOT || CAM::IS_CINEMATIC_FIRST_PERSON_VEHICLE_INTERIOR_CAM_RENDERING())
	{
		num = 1;
	
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				vehiclePedIsIn = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			
				if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(vehiclePedIsIn)) || VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(vehiclePedIsIn)) || VEHICLE::IS_THIS_MODEL_A_QUADBIKE(ENTITY::GET_ENTITY_MODEL(vehiclePedIsIn)) || ENTITY::GET_ENTITY_MODEL(vehiclePedIsIn) == joaat("SEASHARK") || ENTITY::GET_ENTITY_MODEL(vehiclePedIsIn) == joaat("SEASHARK2") || ENTITY::GET_ENTITY_MODEL(vehiclePedIsIn) == joaat("RHINO") || ENTITY::GET_ENTITY_MODEL(vehiclePedIsIn) == joaat("SUBMERSIBLE") || ENTITY::GET_ENTITY_MODEL(vehiclePedIsIn) == joaat("SUBMERSIBLE2") || ENTITY::GET_ENTITY_MODEL(vehiclePedIsIn) == joaat("TORO"))
					num = 0;
			}
		}
	}

	if (Global_4542575 || num == 1)
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("APPTRACKIFY")) > 0 || Global_113648.f_14053.f_89)
			if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("MICHAEL2")) > 0)
				return true;
			else
				return false;
		else
			return true;

	return false;
}

BOOL func_75() // Hash - 0x9E06F5B4 ^0xC825B580
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("APPCAMERA")) > 0)
		return true;

	return false;
}

void func_76() // Hash - 0xFFA5CCBC ^0x5FF4415
{
	if (!Global_78558)
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (IS_BIT_SET(Global_8253, 11))
			{
				if (!Global_20326)
					TASK::TASK_USE_MOBILE_PHONE(PLAYER::PLAYER_PED_ID(), false, 1);
			
				if (Global_78558)
				{
					PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 244, true);
					PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 243, true);
					PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 242, true);
				}
			
				MISC::CLEAR_BIT(&Global_8253, 11);
			}
		}
	}

	return;
}

BOOL func_77() // Hash - 0xF99F1C42 ^0xCC7DF7CD
{
	eViewModeContext camActiveViewModeContext;
	eViewMode camViewModeForContext;

	camActiveViewModeContext = CAM::GET_CAM_ACTIVE_VIEW_MODE_CONTEXT();
	camViewModeForContext = CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(camActiveViewModeContext);

	if (camViewModeForContext == FIRST_PERSON)
		return true;

	return false;
}

void func_78(char* sParam0, int iParam1) // Hash - 0xCBB0D91 ^0x21070E5C
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam1);
	return;
}

void func_79() // Hash - 0xE38952B5 ^0xB23F8926
{
	MOBILE::GET_MOBILE_PHONE_RENDER_ID(&iLocal_86);
	iLocal_86 == -1;
	return;
}

void func_80() // Hash - 0x2E4D7C19 ^0x4F7EE11F
{
	if (Global_78558)
	{
		if (func_40() == false)
			return;
	
		func_81(Global_20364, "SET_SOFT_KEYS", 1f, 1f, 9f, -1f, -1f, 0, 0, 0, 0, 0);
		MISC::SET_BIT(&Global_8253, 17);
	}

	return;
}

void func_81(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, const char* sParam8, const char* sParam9, char* sParam10, const char* sParam11) // Hash - 0x39E054FF ^0x41D02682
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, sParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam2));

	if (fParam3 != -1f)
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam3));

	if (fParam4 != -1f)
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam4));

	if (fParam5 != -1f)
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam5));

	if (fParam6 != -1f)
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam6));

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam7))
		func_36(sParam7);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
		func_36(sParam8);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam9))
		func_36(sParam9);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam10))
		func_36(sParam10);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam11))
		func_36(sParam11);

	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	return;
}

BOOL func_82(int iParam0) // Hash - 0x937D8816 ^0x937D8816
{
	return Global_43257 == iParam0;
}

void func_83(int iParam0) // Hash - 0xEDE59C89 ^0xEDE59C89
{
	int i;
	int num;
	int value;
	int j;
	int value2;
	int k;
	int value3;
	int value4;
	int value5;
	int value6;

	Global_22793 = 0;
	Global_8858 = iParam0;

	for (i = 0; i < 9; i = i + 1)
	{
		Global_8822[i] = false;
	}

	for (i = 0; i < 9; i = i + 1)
	{
		num = 0;
	
		if (func_82(14))
		{
			while (num < 34)
			{
				if (iParam0 == Global_8260[num /*15*/].f_11)
				{
					if (i == Global_8260[num /*15*/].f_4)
					{
						if (Global_8822[i] == false)
						{
							Global_8786[i] = num;
						
							if (num == 3)
							{
								if (IS_BIT_SET(Global_8254, 3))
								{
									value = 42;
									Global_20588 = 1;
								}
								else
								{
									value = 255;
									Global_20588 = 0;
								}
							
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20364, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(i);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8260[num /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_36(&Global_8260[num /*15*/]);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(value);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
						
							if (Global_2694519)
								if (num == 14)
									func_81(Global_20364, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(i), SYSTEM::TO_FLOAT(Global_8260[num /*15*/].f_10), SYSTEM::TO_FLOAT(Global_22788), -1f, &Global_8260[num /*15*/], 0, 0, 0, 0);
						
							Global_8822[i] = true;
						}
					}
				}
			
				num = num + 1;
			}
		}
		else
		{
			while (num < 34)
			{
				if (iParam0 == Global_8260[num /*15*/].f_11)
				{
					if (i == Global_8260[num /*15*/].f_4)
					{
						if (Global_8822[i] == false)
						{
							Global_8786[i] = num;
						
							if (num == 1)
							{
								for (j = 0; j < 35; j = j + 1)
								{
									if (Global_113648.f_14143[j /*104*/].f_24 != 0)
										if (Global_113648.f_14143[j /*104*/].f_28 == 0)
											if (Global_113648.f_14143[j /*104*/].f_99[Global_20383] == 1)
												Global_22793 = Global_22793 + 1;
								}
							
								func_81(Global_20364, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(i), SYSTEM::TO_FLOAT(Global_8260[num /*15*/].f_10), SYSTEM::TO_FLOAT(Global_22793), -1f, &Global_8260[num /*15*/], 0, 0, 0, 0);
							}
							else if (num == 7)
							{
								if (Global_78558)
								{
									value2 = 0;
									value2 = Global_4541031;
								
									for (k = 0; k < 12; k = k + 1)
									{
										if (Global_4541032[k /*104*/].f_24 != 0)
											if (Global_4541032[k /*104*/].f_28 == 0)
												if (Global_4541032[k /*104*/].f_99[Global_20383] == 1)
													value2 = value2 + 1;
									}
								
									func_81(Global_20364, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(i), SYSTEM::TO_FLOAT(Global_8260[num /*15*/].f_10), SYSTEM::TO_FLOAT(value2), -1f, &Global_8260[num /*15*/], 0, 0, 0, 0);
								}
								else
								{
									switch (Global_20383)
									{
										case 0:
											value3 = Global_44457;
											break;
									
										case 1:
											value3 = Global_44458;
											break;
									
										case 2:
											value3 = Global_44459;
											break;
									
										default:
											break;
									}
								
									func_81(Global_20364, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(i), SYSTEM::TO_FLOAT(Global_8260[num /*15*/].f_10), SYSTEM::TO_FLOAT(value3), -1f, &Global_8260[num /*15*/], 0, 0, 0, 0);
								}
							}
							else if (num == 14)
							{
								func_81(Global_20364, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(i), SYSTEM::TO_FLOAT(Global_8260[num /*15*/].f_10), SYSTEM::TO_FLOAT(Global_22788), -1f, &Global_8260[num /*15*/], 0, 0, 0, 0);
							}
							else if (num == 20)
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20364, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(i);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8260[num /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_36(&Global_8260[num /*15*/]);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8259);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (num == 2)
							{
								if (IS_BIT_SET(Global_8254, 6))
									value4 = 42;
								else
									value4 = 255;
							
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20364, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(i);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8260[num /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_36(&Global_8260[num /*15*/]);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(value4);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (num == 3)
							{
								if (IS_BIT_SET(Global_8254, 3))
								{
									value5 = 42;
									Global_20588 = 1;
								}
								else
								{
									value5 = 255;
									Global_20588 = 0;
								}
							
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20364, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(i);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8260[num /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_36(&Global_8260[num /*15*/]);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(value5);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (num == 8)
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20364, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(i);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8260[num /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_36(&Global_8260[num /*15*/]);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(42);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (num == 23 && MISC::ARE_STRINGS_EQUAL(&Global_8260[num /*15*/], _("Benny's")) && IS_BIT_SET(Global_8254, 6))
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20364, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(i);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8260[num /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_36(&Global_8260[num /*15*/]);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(42);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (Global_8260[num /*15*/].f_10 == 57 && num == 23)
							{
								value6 = 0;
								value6 = Global_1890001.f_1;
								func_81(Global_20364, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(i), SYSTEM::TO_FLOAT(Global_8260[num /*15*/].f_10), SYSTEM::TO_FLOAT(value6), -1f, &Global_8260[num /*15*/], 0, 0, 0, 0);
							}
							else
							{
								func_81(Global_20364, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(i), SYSTEM::TO_FLOAT(Global_8260[num /*15*/].f_10), SYSTEM::TO_FLOAT(0), -1f, &Global_8260[num /*15*/], 0, 0, 0, 0);
							}
						
							Global_8822[i] = true;
						}
					}
				}
			
				num = num + 1;
			}
		}
	}

	return;
}

void func_84() // Hash - 0x27D4231F ^0xAF2142F1
{
	if (Global_78558 == false)
	{
		Global_8260[14 /*15*/].f_4 = -99;
		Global_8260[4 /*15*/].f_4 = -99;
	
		if (Global_2694519)
		{
			if (func_82(14))
			{
				func_37(2, _("Internet"), 2, "appInternet", 6, 1, 1, 0, 0);
				func_37(14, _("Job List"), 7, "appMPJobListNEW", 12, 1, 1, 0, 0);
			}
			else
			{
				func_37(14, _("Job List"), 2, "appMPJobListNEW", 12, 1, 1, 0, 0);
			}
		}
		else
		{
			func_37(4, _("Check List"), 2, "appChecklist", 39, 1, 1, 0, 0);
		}
	}

	return;
}

void func_85() // Hash - 0x5BBDBFC7 ^0x21A4F70B
{
	int i;
	int num;
	int num2;

	for (i = 0; i < 34; i = i + 1)
	{
		Global_8260[i /*15*/].f_4 = -99;
	}

	if (Global_78558 == false)
	{
		num = 0;
	
		while (num2 < 161)
		{
			if (func_86(num2, Global_20383) == 1)
				num = 1;
		
			num2 = num2 + 1;
		}
	
		func_37(7, _("Email"), 0, "appEmail", 4, 1, 1, 0, 0);
		func_37(1, _("Texts"), 1, "appTextMessage", 2, 1, 1, 0, 0);
		func_37(4, _("Check List"), 2, "appChecklist", 39, 1, 1, 0, 0);
	
		if (Global_43257 == 15 && func_64(false) == false && Global_8258 == 0)
		{
			func_37(20, _("Quick Save"), 3, "appSettings", 43, 1, 1, 0, 0);
			Global_20587 = 0;
			Global_8259 = 255;
		}
		else
		{
			func_37(20, _("Quick Save"), 3, "appSettings", 43, 1, 1, 0, 0);
			Global_20587 = 1;
			Global_8259 = 42;
		}
	
		if (num == 1)
			func_37(0, _("Contacts"), 4, "appContacts", 27, 1, 1, 0, 0);
		else
			func_37(0, _("Contacts"), 4, "appContacts", 5, 1, 1, 0, 0);
	
		func_37(10, _("Settings"), 5, "appSettings", 24, 1, 1, 0, 0);
		func_37(3, _("Snapmatic"), 6, "appCamera", 1, 1, 1, 0, 0);
		func_37(2, _("Internet"), 7, "appInternet", 6, 1, 1, 0, 0);
	
		if (Global_113648.f_14053.f_89 == true)
			func_37(17, _("Trackify"), 8, "appTrackify", 42, 1, 1, 0, 0);
	
		if (Global_113648.f_14053.f_88 == 1)
			func_37(16, _("Sniper"), 0, "appContacts", 40, 2, 1, 0, 0);
	
		func_37(25, _("More Apps"), -99, "appContacts", 17, 2, 1, 0, 0);
		func_37(9, _("BAWSAQ"), -99, "appContacts", 13, 2, 1, 0, 0);
		func_37(11, _("More Apps"), -99, "appContacts", 8, 2, 1, 0, 0);
		func_37(27, _("Spare"), -99, "appContacts", 17, 2, 1, 0, 0);
		func_37(28, _("Spare"), -99, "appContacts", 17, 2, 1, 0, 0);
		func_37(29, _("Spare"), -99, "appSettings", 17, 2, 1, 0, 0);
		func_37(30, _("Spare"), -99, "appContacts", 17, 2, 1, 0, 0);
		func_37(31, _("Spare"), -99, "appContacts", 17, 2, 1, 0, 0);
		func_37(32, _("Spare"), -99, "appSettings", 17, 2, 1, 0, 0);
	}
	else
	{
		func_37(7, _("Email"), 0, "appMPEmail", 4, 1, 1, 0, 0);
		func_37(10, _("Settings"), 5, "appSettings", 24, 1, 1, 0, 0);
		func_37(1, _("Texts"), 1, "appTextMessage", 2, 1, 1, 0, 0);
		func_37(3, _("Snapmatic"), 6, "appCamera", 1, 1, 1, 0, 0);
		func_37(2, _("Internet"), 7, "appInternet", 6, 1, 1, 0, 0);
		func_37(14, _("Job List"), 4, "appMPJobListNEW", 12, 1, 1, 0, 0);
		func_37(0, _("Contacts"), 2, "appContacts", 5, 1, 1, 0, 0);
		func_37(21, _("Quick Join"), 3, "AppJIPMP", 14, 1, 1, 0, 0);
	
		if (IS_BIT_SET(Global_4542297, 4) == true)
			func_37(17, _("Trackify"), 8, "appTrackify", 42, 1, 1, 0, 0);
	
		func_37(13, _("Player List"), -99, "appMPCopBackup", 39, 1, 1, 0, 0);
		func_37(13, "CELL_20", -99, "appMPCopBackup", 16, 1, 1, 0, 0);
		func_37(15, _("Map"), -99, "appContacts", 8, 1, 1, 0, 0);
		func_37(9, _("BAWSAQ"), -99, "appContacts", 13, 2, 1, 0, 0);
		func_37(5, _("Sidetasks"), -99, "appContacts", 12, 2, 1, 0, 0);
		func_37(23, _("Spare"), 0, "appContacts", 17, 2, 1, 0, 0);
		func_37(24, _("Spare"), 1, "appContacts", 17, 2, 1, 0, 0);
		func_37(25, _("Spare"), 2, "appContacts", 17, 2, 1, 0, 0);
		func_37(26, _("Spare"), 3, "appContacts", 17, 2, 1, 0, 0);
		func_37(27, _("Spare"), 4, "appContacts", 17, 2, 1, 0, 0);
		func_37(28, _("Spare"), 5, "appContacts", 17, 2, 1, 0, 0);
		func_37(29, _("Spare"), 6, "appContacts", 17, 2, 1, 0, 0);
		func_37(30, _("Spare"), 7, "appContacts", 17, 2, 1, 0, 0);
		func_37(31, _("Spare"), 8, "appContacts", 17, 2, 1, 0, 0);
		func_37(32, _("Spare"), 9, "appContacts", 17, 2, 1, 0, 0);
		func_37(33, _("Spare"), 10, "appContacts", 17, 2, 1, 0, 0);
	
		if (!IS_BIT_SET(Global_4542297, 4) == true)
			if (Global_1836102)
				func_37(23, _("VLSI Unlock"), 8, "AppVLSI", 54, 1, 1, 0, 0);
			else if (IS_BIT_SET(Global_4542297, 20) == true)
				func_37(23, _("Sightseer"), 8, "AppSettings", 59, 1, 1, 0, 0);
			else if (IS_BIT_SET(Global_4542297, 22) == true)
				func_37(23, _("Extraction"), 8, "AppExtraction", 58, 1, 1, 0, 0);
			else if (IS_BIT_SET(Global_4542297, 26) == true)
				if (func_121())
					func_37(23, _("Contacts"), -99, "appContacts", 5, 1, 1, 0, 0);
				else
					func_37(23, _("SecuroServ Hack"), 8, "AppSecuroHack", 57, 1, 1, 0, 0);
	
		if (IS_BIT_SET(Global_4542297, 4) == false && Global_1836102 == false && IS_BIT_SET(Global_4542297, 20) == false && IS_BIT_SET(Global_4542297, 22) == false && IS_BIT_SET(Global_4542297, 26) == false)
			if (func_121())
				func_37(23, _("Contacts"), -99, "appContacts", 5, 1, 1, 0, 0);
			else
				func_37(23, _("SecuroServ"), 8, "appMPBossAgency", 57, 1, 1, 0, 0);
	}

	return;
}

int func_86(int iParam0, int iParam1) // Hash - 0x97DCD8A1 ^0xFBF2A354
{
	if (iParam1 < 0 || iParam1 > 4)
		return 0;

	return Global_2028[iParam0 /*29*/].f_19[iParam1];
}

BOOL func_87(int iParam0) // Hash - 0x6FA42958 ^0xA1653597
{
	int num;

	iParam0 == 1;

	if (iParam0 == 0)
		if (func_90() == 0)
			return false;

	if (func_88(&num) && MISC::GET_PROFILE_SETTING(903) == 1)
		return true;

	if (!func_88(&num))
		if (num == 6)
			return true;
		else if (num == 7)
			return true;
		else if (num == 8)
			return true;
		else if (num == 10)
			return true;
		else if (num == 12)
			return true;
		else if (num == 13)
			return true;
		else if (num == 11)
			return true;

	return false;
}

BOOL func_88(int* piParam0) // Hash - 0xC34CCBA6 ^0x27444525
{
	if (func_89())
	{
		*piParam0 = 11;
		return true;
	}

	return NETWORK::NETWORK_CAN_ACCESS_MULTIPLAYER(piParam0);
}

BOOL func_89() // Hash - 0x21D64237 ^0x21D64237
{
	return Global_32441;
}

int func_90() // Hash - 0xC9821971 ^0xCAB6B80C
{
	if (func_91())
	{
		if (!NETWORK::NETWORK_IS_NP_AVAILABLE())
		{
			if (NETWORK::NETWORK_GET_NP_UNAVAILABLE_REASON() == 4)
				return 0;
		
			if (NETWORK::NETWORK_GET_NP_UNAVAILABLE_REASON() == 2)
				return 0;
		
			if (NETWORK::NETWORK_GET_NP_UNAVAILABLE_REASON() == 1)
				return 0;
		
			if (NETWORK::NETWORK_GET_NP_UNAVAILABLE_REASON() == 5)
				return 0;
		}
	}

	return 1;
}

BOOL func_91() // Hash - 0x4C81F065 ^0x79C65D03
{
	return MISC::IS_ORBIS_VERSION() || MISC::IS_PROSPERO_VERSION();
}

void func_92() // Hash - 0xC9639F4 ^0x2D4859DA
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		iLocal_115 = ZONE::GET_ZONE_SCUMMINESS(ZONE::GET_ZONE_AT_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)));

	switch (iLocal_115)
	{
		case 0:
			iLocal_90 = 5;
			break;
	
		case 1:
			iLocal_90 = 5;
			break;
	
		case 2:
			iLocal_90 = 4;
			break;
	
		case 3:
			iLocal_90 = 4;
			break;
	
		case 4:
			iLocal_90 = 3;
			break;
	
		case 5:
			iLocal_90 = 2;
			break;
	
		default:
			iLocal_90 = 3;
			break;
	}

	iLocal_116 = MISC::GET_RANDOM_INT_IN_RANGE(0, 8);

	if (iLocal_116 < 2)
		if (iLocal_90 > 2)
			iLocal_90 = iLocal_90 - 1;

	if (bLocal_117 == true || func_93())
		iLocal_90 = 0;

	func_112(Global_20364, "SET_PROVIDER_ICON", SYSTEM::TO_FLOAT(iLocal_89), SYSTEM::TO_FLOAT(iLocal_90), -1082130432, -1082130432, -1082130432);
	return;
}

BOOL func_93() // Hash - 0x650CF115 ^0x4665B089
{
	int num;
	var entityCoords;
	int i;

	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		num = func_99();
	
		if (func_98(num))
		{
			entityCoords = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		
			for (i = 0; i < Global_113648.f_7690.f_136; i = i + 1)
			{
				if (IS_BIT_SET(Global_113648.f_7690[i /*15*/].f_2, num))
					if (func_96(entityCoords, func_97(i)))
						return true;
			}
		
			for (i = 0; i < Global_113648.f_7690.f_764; i = i + 1)
			{
				if (IS_BIT_SET(Global_113648.f_7690.f_651[i /*14*/].f_2, num))
					if (func_96(entityCoords, func_95(i)))
						return true;
			}
		
			for (i = 0; i < Global_113648.f_7690.f_866; i = i + 1)
			{
				if (IS_BIT_SET(Global_113648.f_7690.f_765[i /*10*/].f_2, num))
					if (func_96(entityCoords, func_94(i)))
						return true;
			}
		}
	}

	return false;
}

int func_94(int iParam0) // Hash - 0xC69036C ^0x85EF2DFF
{
	return Global_113648.f_7690.f_765[iParam0 /*10*/].f_7;
}

int func_95(int iParam0) // Hash - 0xC69036C ^0x85EF2DFF
{
	return Global_113648.f_7690.f_651[iParam0 /*14*/].f_7;
}

BOOL func_96(Vector3 vParam0, var uParam1, var uParam2, int iParam3) // Hash - 0x8FDDEC66 ^0x335C0812
{
	if (iParam3 != -1)
	{
		if (iParam3 >= Global_43258)
			return false;
	
		if (SYSTEM::VDIST2(vParam0, Global_43258[iParam3 /*5*/]) <= Global_43258[iParam3 /*5*/].f_3 * Global_43258[iParam3 /*5*/].f_3)
			return true;
		else if (Global_43258[iParam3 /*5*/].f_4 != -1)
			return func_96(vParam0, Global_43258[iParam3 /*5*/].f_4);
	}

	return false;
}

int func_97(int iParam0) // Hash - 0xEA791A51 ^0x566D0A18
{
	return Global_113648.f_7690[iParam0 /*15*/].f_7;
}

BOOL func_98(int iParam0) // Hash - 0x8907F004 ^0x8907F004
{
	return iParam0 < 3;
}

int func_99() // Hash - 0x3C5423D7 ^0x3C5423D7
{
	func_100();
	return Global_113648.f_2365.f_539.f_4321;
}

void func_100() // Hash - 0xD1F2D853 ^0xF9F5FD4D
{
	int num;

	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_102(Global_113648.f_2365.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			num = func_101(PLAYER::PLAYER_PED_ID());
		
			if (func_98(num) && !func_82(14) || Global_112599)
			{
				if (Global_113648.f_2365.f_539.f_4321 != num && func_98(Global_113648.f_2365.f_539.f_4321))
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

int func_101(Ped pedParam0) // Hash - 0xAC4E9801 ^0xB379A75F
{
	int i;
	Hash entityModel;

	if (ENTITY::DOES_ENTITY_EXIST(pedParam0))
	{
		entityModel = ENTITY::GET_ENTITY_MODEL(pedParam0);
	
		for (i = 0; i <= 2; i = i + 1)
		{
			if (func_102(i) == entityModel)
				return i;
		}
	}

	return 145;
}

Hash func_102(int iParam0) // Hash - 0xADCB9755 ^0xADCB9755
{
	if (func_98(iParam0))
		return func_103(iParam0);
	else
		iParam0 != 145;

	return 0;
}

Hash func_103(int iParam0) // Hash - 0xE4CEEC2C ^0xE4CEEC2C
{
	return Global_2028[iParam0 /*29*/];
}

int func_104() // Hash - 0x9ADB3117 ^0x14EFBA7F
{
	func_122();
	return Global_113648.f_14053[Global_20383 /*20*/].f_8;
}

struct<13> func_105(Player plParam0) // Hash - 0x3F3CEB62 ^0x60A9D262
{
	var gamerHandle;

	NETWORK::NETWORK_HANDLE_FROM_PLAYER(plParam0, &gamerHandle, 13);
	return gamerHandle;
}

void func_106() // Hash - 0x8961A3BB ^0x93F6EC7D
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		if (Global_20383 == 0)
		{
			switch (Global_113648.f_14053[Global_20383 /*20*/].f_6)
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
	
		if (Global_20383 == 1)
		{
			switch (Global_113648.f_14053[Global_20383 /*20*/].f_6)
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
	
		if (Global_20383 == 2)
		{
			switch (Global_113648.f_14053[Global_20383 /*20*/].f_6)
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
	
		if (Global_20383 == 3)
		{
			switch (Global_4542573)
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

	return;
}

int func_107(int iParam0, int iParam1, int iParam2) // Hash - 0x4BC84F7B ^0x370D7D6F
{
	Hash statHash;
	int outValue;

	if (iParam0 != 14192)
	{
		iParam2 == 0;
		statHash = Global_2805027[iParam0 /*3*/][func_108(iParam1)];
	
		if (STATS::STAT_GET_INT(statHash, &outValue, -1))
			return outValue;
	}

	return 0;
}

int func_108(int iParam0) // Hash - 0x1A3F3220 ^0x1A3F3220
{
	int num;
	int num2;

	num = iParam0;

	if (num == -1)
	{
		num2 = func_109();
	
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

int func_109() // Hash - 0x47FF56D2 ^0x47FF56D2
{
	return Global_1574918;
}

void func_110() // Hash - 0x2D2267F2 ^0x7E6EC045
{
	if (func_82(14))
	{
		if (Global_2694519)
		{
			if (Global_20383.f_1 == 6)
			{
				if (Global_20363 == 7)
				{
					func_112(Global_20364, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(7), -1082130432, -1082130432, -1082130432);
				}
				else
				{
					Global_20363 = 6;
					func_112(Global_20364, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(6), -1082130432, -1082130432, -1082130432);
				}
			}
		}
		else if (Global_20383.f_1 == 6)
		{
			func_112(Global_20364, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(6), -1082130432, -1082130432, -1082130432);
		}
	}

	iLocal_92 = CLOCK::GET_CLOCK_MINUTES();

	if (iLocal_92 != Global_8256)
	{
		Global_8256 = iLocal_92;
		iLocal_91 = CLOCK::GET_CLOCK_HOURS();
		iLocal_93 = CLOCK::GET_CLOCK_DAY_OF_WEEK();
	
		switch (iLocal_93)
		{
			case 0:
				TEXT_LABEL_ASSIGN_STRING(&uLocal_94, _("Sun"), 16);
				break;
		
			case 1:
				TEXT_LABEL_ASSIGN_STRING(&uLocal_94, _("Mon"), 16);
				break;
		
			case 2:
				TEXT_LABEL_ASSIGN_STRING(&uLocal_94, _("Tue"), 16);
				break;
		
			case 3:
				TEXT_LABEL_ASSIGN_STRING(&uLocal_94, _("Wed"), 16);
				break;
		
			case 4:
				TEXT_LABEL_ASSIGN_STRING(&uLocal_94, _("Thu"), 16);
				break;
		
			case 5:
				TEXT_LABEL_ASSIGN_STRING(&uLocal_94, _("Fri"), 16);
				break;
		
			case 6:
				TEXT_LABEL_ASSIGN_STRING(&uLocal_94, _("Sat"), 16);
				break;
		
			default:
				TEXT_LABEL_ASSIGN_STRING(&uLocal_94, _("BACK"), 16);
				break;
		}
	
		func_81(Global_20364, "SET_TITLEBAR_TIME", SYSTEM::TO_FLOAT(iLocal_91), SYSTEM::TO_FLOAT(iLocal_92), -1f, -1f, -1f, &uLocal_94, 0, 0, 0, 0);
	
		if (Global_20326 == false)
			func_92();
	
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			iLocal_100 = ENTITY::GET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID());
	}

	return;
}

void func_111() // Hash - 0x5781E9C3 ^0xDD1830DE
{
	if (Global_78558)
	{
		TEXT_LABEL_ASSIGN_STRING(&Global_20372, "Phone_SoundSet_Default", 24);
		MOBILE::CREATE_MOBILE_PHONE(0);
	}
	else if (Global_20326)
	{
		MOBILE::CREATE_MOBILE_PHONE(4);
		TEXT_LABEL_ASSIGN_STRING(&Global_20372, "Phone_SoundSet_Prologue", 24);
	}
	else
	{
		switch (Global_20383)
		{
			case 0:
				TEXT_LABEL_ASSIGN_STRING(&Global_20372, "Phone_SoundSet_Michael", 24);
				MOBILE::CREATE_MOBILE_PHONE(0);
				break;
		
			case 2:
				TEXT_LABEL_ASSIGN_STRING(&Global_20372, "Phone_SoundSet_Trevor", 24);
				MOBILE::CREATE_MOBILE_PHONE(1);
				break;
		
			case 1:
				TEXT_LABEL_ASSIGN_STRING(&Global_20372, "Phone_SoundSet_Franklin", 24);
				MOBILE::CREATE_MOBILE_PHONE(2);
				break;
		
			default:
				TEXT_LABEL_ASSIGN_STRING(&Global_20372, "Phone_SoundSet_Default", 24);
				MOBILE::CREATE_MOBILE_PHONE(0);
				break;
		}
	}

	Global_20346 = { -90f, -130f, 0f };

	if (GRAPHICS::GET_IS_HIDEF())
	{
		Global_20328 = 0;
		Global_20329[0 /*3*/] = { GRAPHICS::GET_SAFE_ZONE_SIZE() * 117.2f, GRAPHICS::GET_SAFE_ZONE_SIZE() * -158.8f, -113f };
		Global_20336[0 /*3*/] = { GRAPHICS::GET_SAFE_ZONE_SIZE() * 117.2f, GRAPHICS::GET_SAFE_ZONE_SIZE() * -53.3f, -113f };
	}
	else
	{
		Global_20328 = 0;
		Global_20329[0 /*3*/] = { GRAPHICS::GET_SAFE_ZONE_SIZE() * 85.7f, GRAPHICS::GET_SAFE_ZONE_SIZE() * -121.8f, -91.5f };
		Global_20336[0 /*3*/] = { GRAPHICS::GET_SAFE_ZONE_SIZE() * 85.7f, GRAPHICS::GET_SAFE_ZONE_SIZE() * -35.3f, -91.5f };
	}

	Global_20311 = { Global_20329[Global_20328 /*3*/] };
	MOBILE::SET_MOBILE_PHONE_POSITION(Global_20329[Global_20328 /*3*/]);
	MOBILE::SET_MOBILE_PHONE_ROTATION(Global_20346, 0);
	Global_20323 = 1;
	return;
}

void func_112(int iParam0, char* sParam1, float fParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Hash - 0x5F496D0E ^0x86F8205
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, sParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam2));

	if (iParam3 != -1f)
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(iParam3));

	if (iParam4 != -1f)
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(iParam4));

	if (iParam5 != -1f)
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(iParam5));

	if (iParam6 != -1f)
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(iParam6));

	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	return;
}

BOOL func_113() // Hash - 0x4C81F065 ^0xA2709774
{
	return MISC::IS_DURANGO_VERSION() || unk_0x0C545AB1CF97ABB3();
}

void func_114() // Hash - 0x7654F905 ^0x603F3E5C
{
	Global_2800023.f_1 = 0;
	Global_2800023 = 0;
	Global_2800023.f_2 = 0;
	Global_2800023.f_33 = -1;
	Global_2800023.f_34 = -1;
	TEXT_LABEL_ASSIGN_STRING(&(Global_2800023.f_4), "", 64);
	TEXT_LABEL_ASSIGN_STRING(&Global_2800023.f_39[0 /*16*/], "", 64);
	Global_2800023.f_38 = 0;
	Global_2800023.f_56 = 0;
	Global_2800023.f_57 = 0;
	Global_2800023.f_58 = -2;
	Global_2800023.f_3 = 0;
	func_115(&(Global_2800023.f_20));
	return;
}

void func_115(Any* panParam0) // Hash - 0x9819A0D5 ^0x98F58DC2
{
	*panParam0 = 0;
	panParam0->f_1 = 0;
	panParam0->f_2 = 0;
	panParam0->f_3 = 0;
	panParam0->f_4 = 0;
	panParam0->f_5 = 0;
	panParam0->f_6 = 0;
	panParam0->f_7 = 0;
	panParam0->f_8 = 0;
	panParam0->f_9 = 0;
	panParam0->f_10 = 0;
	panParam0->f_11 = 0;
	panParam0->f_12 = 0;
	return;
}

void func_116() // Hash - 0xC6837976 ^0x9471743
{
	Global_2800023.f_2 = 1;
	Global_2800023.f_38 = 1;

	if (NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		if (NETWORK::NETWORK_SESSION_IS_IN_VOICE_SESSION())
		{
			while (NETWORK::NETWORK_SESSION_IS_VOICE_SESSION_BUSY())
			{
				SYSTEM::WAIT(0);
			}
		
			NETWORK::NETWORK_SESSION_VOICE_LEAVE();
			Global_2800023 = 0;
			Global_2800023.f_2 = 0;
		}
		else if (func_117(Global_2800023.f_20))
		{
			if (NETWORK::NETWORK_IS_FRIEND(&(Global_2800023.f_20)))
				if (!NETWORK::NETWORK_IS_FRIEND_HANDLE_ONLINE(&(Global_2800023.f_20)))
					func_114();
		}
		else
		{
			func_114();
		}
	}
	else
	{
		func_114();
	}

	if (Global_2800023.f_37)
		func_65(0);

	Global_2800023.f_37 = 0;
	Global_2800023.f_3 = 0;
	return;
}

BOOL func_117(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12) // Hash - 0x4709BB10 ^0xDD69BC9A
{
	return NETWORK::NETWORK_IS_HANDLE_VALID(&uParam0, 13);
}

void func_118() // Hash - 0xC536DD5 ^0xC536DD5
{
	Global_20591 = 0;
	func_10();
	return;
}

void func_119(int iParam0, char* sParam1) // Hash - 0x224F1443 ^0x78F3B6C9
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, sParam1);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	return;
}

void func_120() // Hash - 0x2E089AFE ^0x9A6FC466
{
	PAD::SET_INPUT_EXCLUSIVE(PLAYER_CONTROL, Global_20352);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_ATTACKRIGHT, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_ATTACK, true);

	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(FRONTEND_CONTROL))
	{
		PAD::SET_INPUT_EXCLUSIVE(PLAYER_CONTROL, Global_20352);
		PAD::SET_INPUT_EXCLUSIVE(PLAYER_CONTROL, Global_20353);
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_ATTACK, true);
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_ATTACKLEFT, true);
	}

	if (Global_78558)
		Global_113648.f_14053[3 /*20*/].f_10 = func_107(1198, -1, 0);

	if (MISC::IS_PC_VERSION())
	{
		if (DECORATOR::DECOR_EXIST_ON(PLAYER::PLAYER_PED_ID(), "Synched"))
		{
		}
		else if (MISC::GET_GAME_TIMER() - iLocal_118 >= 300 || iLocal_118 == 0 || iLocal_118 > MISC::GET_GAME_TIMER())
		{
			PAD::SET_CONTROL_SHAKE(PLAYER_CONTROL, 100, 100);
			iLocal_118 = MISC::GET_GAME_TIMER();
		}
	}
	else if (Global_113648.f_14053[Global_20383 /*20*/].f_10 == 1)
	{
		if (MISC::GET_GAME_TIMER() - iLocal_118 >= 300 || iLocal_118 == 0 || iLocal_118 > MISC::GET_GAME_TIMER())
		{
			PAD::SET_CONTROL_SHAKE(PLAYER_CONTROL, 100, 100);
			iLocal_118 = MISC::GET_GAME_TIMER();
		}
	}

	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		if (!AUDIO::IS_PED_RINGTONE_PLAYING(PLAYER::PLAYER_PED_ID()))
		{
			if (Global_78558)
			{
				if (!MISC::ARE_STRINGS_EQUAL(&Global_9058[3 /*2811*/][1 /*281*/].f_144[func_107(1199, -1, 0) /*6*/], "Silent Ringtone Dummy"))
					AUDIO::PLAY_PED_RINGTONE(&Global_9058[3 /*2811*/][1 /*281*/].f_144[func_107(1199, -1, 0) /*6*/], PLAYER::PLAYER_PED_ID(), true);
			}
			else if (!MISC::ARE_STRINGS_EQUAL(&(Global_113648.f_14053[Global_20383 /*20*/].f_11), "Silent Ringtone Dummy"))
			{
				if (!Global_9058[Global_20383 /*2811*/][0 /*281*/].f_259 == 1)
				{
					if (MISC::IS_PC_VERSION())
					{
						if (DECORATOR::DECOR_EXIST_ON(PLAYER::PLAYER_PED_ID(), "Synched"))
						{
						}
						else
						{
							AUDIO::PLAY_PED_RINGTONE(&(Global_113648.f_14053[Global_20383 /*20*/].f_11), PLAYER::PLAYER_PED_ID(), true);
						}
					}
					else
					{
						AUDIO::PLAY_PED_RINGTONE(&(Global_113648.f_14053[Global_20383 /*20*/].f_11), PLAYER::PLAYER_PED_ID(), true);
					}
				}
			}
		}
	}

	return;
}

BOOL func_121() // Hash - 0x4F6FCCAE ^0x4F6FCCAE
{
	if (Global_78558)
		if (Global_1836499 || Global_1836500 == 1)
			return true;

	return false;
}

void func_122() // Hash - 0x98476CE1 ^0x250FEB7C
{
	if (func_82(14))
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
		Global_20383 = func_99();
	
		if (Global_20383 == 145)
			Global_20383 = 3;
	
		if (Global_78558)
			Global_20383 = 3;
	
		if (Global_20383 > 3)
			Global_20383 = 3;
	}

	return;
}

