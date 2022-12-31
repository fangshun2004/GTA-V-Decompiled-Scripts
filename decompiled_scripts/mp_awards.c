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
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	float fLocal_28 = 0f;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	int iLocal_36 = 0;
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
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 17;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
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
	var uLocal_86 = 17;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	int iLocal_110 = 0;
	int iLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	int iScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
#endregion

void main() // Hash - 0x5D84F89F ^0x5D84F89F
{
	int num;
	int num2;
	int num3;
	var scaleformHandle;
	var scaleformHandle2;

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
	fLocal_23 = 80f;
	fLocal_24 = 140f;
	fLocal_25 = 180f;
	fLocal_28 = 0f;
	fLocal_32 = -0.0375f;
	fLocal_33 = 0.17f;
	iLocal_36 = 3;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_62 = (0.05f + 0.275f) - 0.01f;

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(4))
	{
		HUD::PAUSE_MENU_DEACTIVATE_CONTEXT(joaat("EDITPLAYLISTPICK"));
		HUD::PAUSE_MENU_DEACTIVATE_CONTEXT(joaat("EDITPLAYLISTDROP"));
		HUD::PAUSE_MENU_DEACTIVATE_CONTEXT(joaat("DELETEPLAYLIST"));
		HUD::PAUSE_MENU_DEACTIVATE_CONTEXT(joaat("EDITPLAYLIST"));
		HUD::PAUSE_MENU_DEACTIVATE_CONTEXT(joaat("SETCREWCHALLENGE"));
		HUD::PAUSE_MENU_DEACTIVATE_CONTEXT(joaat("RSCROLLUPDOWN"));
		HUD::PAUSE_MENU_DEACTIVATE_CONTEXT(874957556);
		HUD::PAUSE_MENU_DEACTIVATE_CONTEXT(817402210);
		HUD::PAUSE_MENU_DEACTIVATE_CONTEXT(joaat("HIDE_ACCEPTBUTTON"));
		HUD::PAUSE_MENU_DEACTIVATE_CONTEXT(joaat("PAGELEFT"));
		HUD::PAUSE_MENU_DEACTIVATE_CONTEXT(joaat("PAGERIGHT"));
		HUD::PAUSE_MENU_DEACTIVATE_CONTEXT(joaat("SUPRESSSELECTPM"));
		HUD::PAUSE_MENU_SET_BUSY_SPINNER(false, -1, 0);
		Global_1574599 = 0;
		STATS::PLAYSTATS_AWARD_NAV(Global_1652549.f_471, Global_1652549.f_472, Global_1652549.f_499, Global_1652549.f_500);
		Global_1652549.f_471 = 0;
		Global_1652549.f_472 = 0;
		Global_1652549.f_499 = 0;
		Global_1652549.f_500 = 0;
		SCRIPT::TERMINATE_THIS_THREAD();
	}

	HUD::FORCE_SCRIPTED_GFX_WHEN_FRONTEND_ACTIVE(1);
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	Global_1574599 = 1;
	num = 0;
	num2 = 1;
	Global_1651965.f_1 = 0;
	Global_1651965.f_3 = 0;
	Global_1651965.f_5 = 0;
	Global_1651965.f_7 = 0;
	Global_1651965.f_6 = 0;
	func_153(&Global_1653480);
	func_152(0, &Global_1653480);
	func_151(&Global_1653480);
	func_149(&Global_1652549);
	func_148(-1, &Global_1652549);
	func_147(&Global_1652549);
	func_146(&Global_1652549);
	func_142();
	HUD::PAUSE_MENU_ACTIVATE_CONTEXT(874957556);
	GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(1);

	switch (iScriptParam_0)
	{
		case 3:
			while (num == 0)
			{
				SYSTEM::WAIT(0);
			
				if (num2 == 1)
				{
					if (num3 == 0)
					{
						if (HUD::IS_FRONTEND_READY_FOR_CONTROL())
						{
							HUD::TAKE_CONTROL_OF_FRONTEND();
							Global_1651965.f_7 = 0;
							GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("MENU_SHIFT_DEPTH");
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
							GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("SET_COLUMN_FOCUS");
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
							GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							num3 = 1;
						}
					}
				}
			
				if (Global_1652549.f_469 == 0 && Global_1652549.f_470 == 0)
				{
					if (PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_ACCEPT))
					{
						if (num2 == 0)
						{
							num2 = 1;
							HUD::PAUSE_MENU_ACTIVATE_CONTEXT(874957556);
							HUD::PAUSE_MENU_ACTIVATE_CONTEXT(joaat("NAVIGATING_CONTENT"));
							HUD::PAUSE_MENU_DEACTIVATE_CONTEXT(817402210);
							HUD::PAUSE_MENU_REDRAW_INSTRUCTIONAL_BUTTONS(0);
							func_152(Global_1651965.f_6, &Global_1653480);
							func_151(&Global_1653480);
							GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("MENU_SHIFT_DEPTH");
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
							GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							func_141();
						}
						else
						{
							switch (Global_1651965.f_7)
							{
								case 0:
									GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("MENU_SHIFT_DEPTH");
									GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
									GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
									HUD::PAUSE_MENU_ACTIVATE_CONTEXT(joaat("HIDE_ACCEPTBUTTON"));
									HUD::PAUSE_MENU_ACTIVATE_CONTEXT(817402210);
									HUD::PAUSE_MENU_DEACTIVATE_CONTEXT(874957556);
									HUD::PAUSE_MENU_REDRAW_INSTRUCTIONAL_BUTTONS(0);
									Global_1651965.f_7 = 1;
									func_140(&Global_1652549, &Global_1651965);
									func_148(func_139(&(Global_1651965.f_1), &(Global_1651965.f_3), Global_1651965.f_5, 188), &Global_1652549);
									func_147(&Global_1652549);
									func_146(&Global_1652549);
									func_124(&Global_1652549, &Global_1651965);
									break;
							}
						}
					}
				}
			
				if (PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_CANCEL))
				{
					if (num2 == 0)
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "CANCEL", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
						HUD::RELEASE_CONTROL_OF_FRONTEND();
						num = 1;
					}
					else
					{
						switch (Global_1651965.f_7)
						{
							case 0:
								AUDIO::PLAY_SOUND_FRONTEND(-1, "BACK", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("MENU_SHIFT_DEPTH");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(-1);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
								HUD::PAUSE_MENU_DEACTIVATE_CONTEXT(817402210);
								HUD::PAUSE_MENU_DEACTIVATE_CONTEXT(874957556);
								HUD::PAUSE_MENU_REDRAW_INSTRUCTIONAL_BUTTONS(0);
								Global_1651965.f_1 = 0;
								Global_1651965.f_3 = 0;
								func_152(-1, &Global_1653480);
								func_151(&Global_1653480);
								func_141();
								num2 = 0;
								break;
						
							case 1:
								AUDIO::PLAY_SOUND_FRONTEND(-1, "CANCEL", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("MENU_SHIFT_DEPTH");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(-1);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
								HUD::PAUSE_MENU_DEACTIVATE_CONTEXT(joaat("HIDE_ACCEPTBUTTON"));
								HUD::PAUSE_MENU_DEACTIVATE_CONTEXT(817402210);
								HUD::PAUSE_MENU_ACTIVATE_CONTEXT(874957556);
								HUD::PAUSE_MENU_REDRAW_INSTRUCTIONAL_BUTTONS(0);
								func_148(-1, &Global_1652549);
								func_147(&Global_1652549);
								func_146(&Global_1652549);
								func_141();
								Global_1651965.f_7 = 0;
								break;
						}
					}
				}
			
				GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPAwards1", false);
				GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPAwards2", false);
				GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPAwards3", false);
				GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPAwards4", false);
				GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPAwards5", false);
				GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPAwards6", false);
				GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPTShirtAwards2", false);
				GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPTshirtAwardLTS", false);
			
				if (!HUD::HAS_ADDITIONAL_TEXT_LOADED(8))
					HUD::REQUEST_ADDITIONAL_TEXT("MPAWD", 8);
			
				func_15(&Global_1651965);
			
				if (num2 == 1)
					func_2(&Global_1652549, &Global_1651965, &uLocal_112);
			}
			break;
	
		case 0:
			break;
	
		case 1:
			break;
	
		case 2:
			break;
	}

	GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(4);
	func_1();
	GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&scaleformHandle);
	GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&scaleformHandle2);
	HUD::RELEASE_CONTROL_OF_FRONTEND();
	Global_1574599 = 0;
	HUD::PAUSE_MENU_SET_BUSY_SPINNER(false, -1, 0);
	STATS::PLAYSTATS_AWARD_NAV(Global_1652549.f_471, Global_1652549.f_472, Global_1652549.f_499, Global_1652549.f_500);
	Global_1652549.f_471 = 0;
	Global_1652549.f_472 = 0;
	Global_1652549.f_499 = 0;
	Global_1652549.f_500 = 0;

	while (true)
	{
		SYSTEM::WAIT(0);
	}

	return;
}

void func_1() // Hash - 0xC95075F2 ^0x4BBDF52A
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("SET_DATA_SLOT_EMPTY");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	return;
}

void func_2(var uParam0, var uParam1, var uParam2) // Hash - 0xD16A2E1D ^0x397A8E4E
{
	BOOL flag;
	int num;
	int num2;
	var lastItemMenuId;
	int selectedItemUniqueId;
	int num3;
	var unk;
	var unk2;
	var lastItemMenuId2;
	int selectedItemMenuId;
	int selectedItemUniqueId2;
	int num4;

	if (!func_14(uParam2) || func_14(uParam2) && func_13(uParam2, 250, false))
		flag = true;

	if (PAD::IS_CONTROL_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_DOWN) || func_12(187, &(Global_1653913.f_1060), 1) && flag)
	{
		func_11(uParam2);
		func_10(uParam2, false, false);
		MISC::SET_BIT(&(uParam0->f_464), 0);
	}

	if (PAD::IS_CONTROL_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_UP) || func_12(188, &(Global_1653913.f_1060), 1) && flag)
	{
		func_11(uParam2);
		func_10(uParam2, false, false);
		MISC::SET_BIT(&(uParam0->f_464), 1);
	}

	if (PAD::IS_CONTROL_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_LEFT) || PAD::IS_CONTROL_PRESSED(FRONTEND_CONTROL, INPUT_CURSOR_SCROLL_UP) || func_12(189, &(Global_1653913.f_1060), 1) && flag)
	{
		func_11(uParam2);
		func_10(uParam2, false, false);
		MISC::SET_BIT(&(uParam0->f_464), 2);
	}

	if (PAD::IS_CONTROL_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_RIGHT) || PAD::IS_CONTROL_PRESSED(FRONTEND_CONTROL, INPUT_CURSOR_SCROLL_DOWN) || func_12(190, &(Global_1653913.f_1060), 1) && flag)
	{
		func_11(uParam2);
		func_10(uParam2, false, false);
		MISC::SET_BIT(&(uParam0->f_464), 3);
	}

	if (IS_BIT_SET(uParam0->f_464, 1))
	{
		MISC::CLEAR_BIT(&(uParam0->f_464), 1);
	
		switch (uParam1->f_7)
		{
			case 0:
				AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
				uParam1->f_6 = uParam1->f_6 - 1;
				uParam1->f_5 = 0;
				uParam1->f_1 = 0;
				uParam1->f_3 = 0;
			
				if (func_9() == 0 || func_8() == 0)
				{
				}
				else if (uParam1->f_6 > 17)
				{
					uParam1->f_6 = 0;
				}
			
				switch (func_6(*uParam1, false))
				{
					case 9:
						if (uParam1->f_6 < 0)
							uParam1->f_6 = 17;
						break;
				}
			
				func_152(uParam1->f_6, &Global_1653480);
				func_151(&Global_1653480);
				uParam0->f_469 = 1;
				func_5(&(uParam0->f_465), false, false);
				break;
		
			case 1:
				AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_LEFT_RIGHT", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
				uParam1->f_3 = uParam1->f_3 - 1;
			
				switch (func_6(*uParam1, false))
				{
					case 9:
						if (uParam1->f_3 < 0)
							uParam1->f_3 = 2;
						break;
				}
			
				func_148(func_139(&(uParam1->f_1), &(uParam1->f_3), uParam1->f_5, 188), uParam0);
				func_147(uParam0);
				func_146(uParam0);
				func_124(uParam0, uParam1);
				break;
		}
	}

	if (IS_BIT_SET(uParam0->f_464, 0))
	{
		MISC::CLEAR_BIT(&(uParam0->f_464), 0);
	
		switch (uParam1->f_7)
		{
			case 0:
				AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
				uParam1->f_6 = uParam1->f_6 + 1;
				uParam1->f_5 = 0;
				uParam1->f_1 = 0;
				uParam1->f_3 = 0;
			
				switch (func_6(*uParam1, false))
				{
					case 9:
						if (uParam1->f_6 > 17)
							uParam1->f_6 = 0;
						break;
				}
			
				func_152(uParam1->f_6, &Global_1653480);
				func_151(&Global_1653480);
				uParam0->f_469 = 1;
				func_5(&(uParam0->f_465), false, false);
				break;
		
			case 1:
				AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_LEFT_RIGHT", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
				uParam1->f_3 = uParam1->f_3 + 1;
			
				if (uParam1->f_3 > 2)
					uParam1->f_3 = 0;
			
				func_148(func_139(&(uParam1->f_1), &(uParam1->f_3), uParam1->f_5, 187), uParam0);
				func_147(uParam0);
				func_146(uParam0);
				func_124(uParam0, uParam1);
				break;
		}
	}

	if (IS_BIT_SET(uParam0->f_464, 2))
	{
		MISC::CLEAR_BIT(&(uParam0->f_464), 2);
	
		switch (uParam1->f_7)
		{
			case 1:
				uParam1->f_1 = uParam1->f_1 - 1;
			
				if (uParam1->f_1 < 0)
				{
					if (iLocal_110 >= 1)
					{
						func_149(uParam0);
						func_1();
					}
				
					if (uParam1->f_5 > 0)
					{
						uParam1->f_5 = uParam1->f_5 - 1;
						uParam1->f_1 = 3;
					}
					else
					{
						uParam1->f_5 = iLocal_110;
						uParam1->f_1 = 3;
						num = uParam1->f_1 + (uParam1->f_3 * 4);
					
						if (num >= iLocal_111)
						{
							uParam1->f_1 = (iLocal_111 - 1) % 4;
							uParam1->f_3 = (iLocal_111 - 1) / 4;
						}
					}
				}
			
				AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_LEFT_RIGHT", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
				func_148(func_139(&(uParam1->f_1), &(uParam1->f_3), uParam1->f_5, 189), uParam0);
				func_147(uParam0);
				func_146(uParam0);
				func_124(uParam0, uParam1);
				break;
		}
	}

	if (IS_BIT_SET(uParam0->f_464, 3))
	{
		MISC::CLEAR_BIT(&(uParam0->f_464), 3);
	
		switch (uParam1->f_7)
		{
			case 1:
				uParam1->f_1 = uParam1->f_1 + 1;
				num2 = uParam1->f_1 + (uParam1->f_3 * 4);
			
				if (uParam1->f_1 >= 4 || uParam1->f_5 == iLocal_110 && num2 >= iLocal_111)
				{
					if (iLocal_110 >= 1)
					{
						func_149(uParam0);
						func_1();
					}
				
					uParam1->f_1 = 0;
					uParam1->f_5 = uParam1->f_5 + 1;
				
					if (uParam1->f_5 > iLocal_110)
						uParam1->f_5 = 0;
				}
			
				AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_LEFT_RIGHT", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
				func_148(func_139(&(uParam1->f_1), &(uParam1->f_3), uParam1->f_5, 190), uParam0);
				func_147(uParam0);
				func_146(uParam0);
				func_124(uParam0, uParam1);
				break;
		}
	}

	if (HUD::HAS_MENU_TRIGGER_EVENT_OCCURRED())
	{
		HUD::GET_MENU_TRIGGER_EVENT_DETAILS(&lastItemMenuId, &selectedItemUniqueId);
	
		switch (uParam1->f_7)
		{
			case 0:
				if (selectedItemUniqueId == 0 || selectedItemUniqueId == 1)
				{
					uParam1->f_7 = 1;
				
					if (HUD::PAUSE_MENU_GET_MOUSE_CLICK_EVENT(&num3, &unk, &unk2))
					{
						Global_1651965.f_1 = num3 % 4;
						Global_1651965.f_3 = num3 / 4;
					}
				}
				break;
		}
	}

	if (HUD::HAS_MENU_LAYOUT_CHANGED_EVENT_OCCURRED())
	{
		HUD::GET_MENU_LAYOUT_CHANGED_EVENT_DETAILS(&lastItemMenuId2, &selectedItemMenuId, &selectedItemUniqueId2);
		num4 = selectedItemMenuId + 1000;
	
		if (num4 >= 0)
		{
			if (selectedItemUniqueId2 == 0)
			{
				uParam1->f_7 = 0;
			
				if (uParam1->f_6 != num4)
				{
					uParam1->f_6 = num4;
					uParam1->f_5 = 0;
					uParam1->f_1 = 0;
					uParam1->f_3 = 0;
					uParam0->f_469 = 1;
				}
			}
			else if (selectedItemUniqueId2 == 1)
			{
				uParam1->f_7 = 1;
				uParam1->f_1 = num4 % 4;
				uParam1->f_3 = num4 / 4;
			}
			else if (selectedItemUniqueId2 == -1 && uParam1->f_7 == 1)
			{
				uParam1->f_7 = 0;
			}
		}
	}

	if (uParam0->f_469 == 1)
	{
		if (func_4(&(uParam0->f_465), 500, false))
		{
			switch (uParam1->f_7)
			{
				case 0:
					uParam0->f_469 = 0;
					func_149(uParam0);
					func_140(uParam0, uParam1);
					func_148(-1, uParam0);
					func_147(uParam0);
					func_146(uParam0);
					func_3(false);
					uParam0->f_470 = 0;
					break;
			}
		}
		else
		{
			switch (uParam1->f_7)
			{
				case 0:
					if (uParam0->f_470 == 0)
					{
						func_1();
						func_3(true);
						func_141();
						uParam0->f_470 = 1;
					}
					break;
			}
		}
	}

	return;
}

void func_3(BOOL bParam0) // Hash - 0xE0A64B89 ^0xA7F8BA7
{
	HUD::PAUSE_MENU_SET_BUSY_SPINNER(bParam0, 6, 0);
	return;
}

BOOL func_4(var uParam0, int iParam1, BOOL bParam2) // Hash - 0xE7AE0A5 ^0x8D771ED3
{
	if (iParam1 == -1)
		return true;

	func_10(uParam0, bParam2, false);

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam2)
	{
		if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0)) >= iParam1)
		{
			func_11(uParam0);
			return true;
		}
	}
	else if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), *uParam0)) >= iParam1)
	{
		func_11(uParam0);
		return true;
	}

	return false;
}

void func_5(var uParam0, BOOL bParam1, BOOL bParam2) // Hash - 0x6A4AB354 ^0xD9372BF4
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

int func_6(int iParam0, BOOL bParam1) // Hash - 0x1DCD393E ^0x1DCD393E
{
	int num;
	int num2;

	num2 = iParam0;

	if (num2 == -1)
		num2 = func_7();

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

int func_7() // Hash - 0x47FF56D2 ^0x47FF56D2
{
	return Global_1574918;
}

int func_8() // Hash - 0x21D64237 ^0x21D64237
{
	return Global_32164;
}

int func_9() // Hash - 0x21D64237 ^0x21D64237
{
	return Global_32163;
}

void func_10(var uParam0, BOOL bParam1, BOOL bParam2) // Hash - 0x6F79B86B ^0x7B76DD66
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

void func_11(var uParam0) // Hash - 0xBA5A1D5A ^0x33644ECA
{
	uParam0->f_1 = 0;
	return;
}

BOOL func_12(int iParam0, var uParam1, int iParam2) // Hash - 0x588FA52C ^0x8FF06169
{
	int num;
	int num2;
	int num3;

	num = PAD::GET_CONTROL_VALUE(FRONTEND_CONTROL, INPUT_FRONTEND_AXIS_X) - 127;
	num2 = PAD::GET_CONTROL_VALUE(FRONTEND_CONTROL, INPUT_FRONTEND_AXIS_Y) - 127;
	num3 = PAD::GET_CONTROL_VALUE(FRONTEND_CONTROL, INPUT_FRONTEND_RIGHT_AXIS_X) - 127;

	switch (iParam0)
	{
		case 189:
			if (num < -30)
			{
				if (*uParam1 < MISC::GET_GAME_TIMER() || iParam2 == 0)
				{
					*uParam1 = MISC::GET_GAME_TIMER() + 250;
					return true;
				}
			}
			break;
	
		case 190:
			if (num > 30)
			{
				if (*uParam1 < MISC::GET_GAME_TIMER() || iParam2 == 0)
				{
					*uParam1 = MISC::GET_GAME_TIMER() + 250;
					return true;
				}
			}
			break;
	
		case 188:
			if (num2 < -30)
			{
				if (*uParam1 < MISC::GET_GAME_TIMER() || iParam2 == 0)
				{
					*uParam1 = MISC::GET_GAME_TIMER() + 250;
					return true;
				}
			}
			break;
	
		case 187:
			if (num2 > 30)
			{
				if (*uParam1 < MISC::GET_GAME_TIMER() || iParam2 == 0)
				{
					*uParam1 = MISC::GET_GAME_TIMER() + 250;
					return true;
				}
			}
			break;
	
		case 194:
			if (num3 > 30)
			{
				if (*uParam1 < MISC::GET_GAME_TIMER() || iParam2 == 0)
				{
					*uParam1 = MISC::GET_GAME_TIMER() + 250;
					return true;
				}
			}
			break;
	
		case 193:
			if (num3 < -30)
			{
				if (*uParam1 < MISC::GET_GAME_TIMER() || iParam2 == 0)
				{
					*uParam1 = MISC::GET_GAME_TIMER() + 250;
					return true;
				}
			}
			break;
	}

	return false;
}

BOOL func_13(var uParam0, int iParam1, BOOL bParam2) // Hash - 0x154EA353 ^0xBFA672B0
{
	if (iParam1 == -1)
		return 1;

	func_10(uParam0, bParam2, false);

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam2)
		if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0)) >= iParam1)
			return 1;
	else if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), *uParam0)) >= iParam1)
		return 1;

	return 0;
}

BOOL func_14(var uParam0) // Hash - 0xD73B9827 ^0x2D8CE86B
{
	return uParam0->f_1;
}

void func_15(var uParam0) // Hash - 0x5CB22580 ^0x8C9A0ABD
{
	BOOL flag;
	BOOL flag2;
	int num;
	int num2;
	int num3;

	num2 = 0;

	if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPTShirtAwards2"))
		flag = true;

	if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPTshirtAwardLTS"))
		flag2 = true;

	num == 1;

	if (HUD::HAS_ADDITIONAL_TEXT_LOADED(8))
	{
		if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPAwards1") && GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPAwards2") && GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPAwards3") && GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPAwards4") && GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPAwards5") && GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPAwards6") && flag && flag2)
		{
			num3 = 9;
		
			switch (uParam0->f_6)
			{
				case 0:
					if (!Global_262145.f_9036)
					{
						iLocal_110 = 27;
						iLocal_111 = 3;
					}
					else
					{
						iLocal_110 = 27;
						iLocal_111 = 7;
					}
				
					num2 = 0;
				
					if (!Global_262145.f_29740)
						num2 = num2 + 1;
				
					if (Global_262145.f_24718)
						num2 = num2 + 1;
				
					if (Global_262145.f_24719)
						num2 = num2 + 1;
				
					if (Global_262145.f_24717)
						num2 = num2 + 1;
				
					if (!*Global_262145.f_33910)
						num2 = num2 + 1;
				
					if (!*Global_262145.f_33911)
						num2 = num2 + 1;
				
					if (!*Global_262145.f_33912)
						num2 = num2 + 1;
				
					if (!*Global_262145.f_33913)
						num2 = num2 + 6;
				
					if (!*Global_262145.f_33914)
						num2 = num2 + 2;
				
					if (!func_123())
						num2 = num2 + 1;
				
					iLocal_111 = iLocal_111 - num2;
				
					if (!Global_262145.f_30988)
						iLocal_111 = iLocal_111 - 5;
				
					if (Global_262145.f_31062[0] == 0f)
						iLocal_111 = iLocal_111 - 1;
				
					if (Global_262145.f_31062[6] == 0f)
						iLocal_111 = iLocal_111 - 1;
				
					if (iLocal_111 < 1)
					{
						iLocal_110 = iLocal_110 - 1;
						iLocal_111 = iLocal_111 + 12;
					}
					break;
			
				case 1:
					iLocal_110 = 2;
					iLocal_111 = 7;
					iLocal_110 = 2;
					iLocal_111 = 9;
					break;
			
				case 2:
					iLocal_110 = 2;
					iLocal_111 = 4;
					break;
			
				case 3:
					iLocal_110 = 0;
					iLocal_111 = 8;
					break;
			
				case 4:
					iLocal_110 = 0;
					iLocal_111 = 12;
					break;
			
				case 5:
					iLocal_110 = 1;
					iLocal_111 = 11;
					iLocal_110 = 2;
					iLocal_111 = 2;
					break;
			
				case 6:
					if (func_122() || func_121() || MISC::IS_PC_VERSION())
					{
						iLocal_110 = 1;
						iLocal_111 = 8;
					}
					else
					{
						iLocal_110 = 1;
						iLocal_111 = 7;
					}
					break;
			
				case 8:
					iLocal_110 = 0;
					iLocal_111 = 8;
				
					if (Global_262145.f_24231 == 0)
						iLocal_111 = iLocal_111 - 1;
				
					if (Global_262145.f_24232 == 0)
						iLocal_111 = iLocal_111 - 1;
				
					if (Global_262145.f_24233 == 0)
						iLocal_111 = iLocal_111 - 1;
				
					if (Global_262145.f_24234 == 0)
						iLocal_111 = iLocal_111 - 1;
				
					if (Global_262145.f_24231 == 0 || Global_262145.f_24233 == 0 || Global_262145.f_24232 == 0 || Global_262145.f_24234 == 0)
						iLocal_111 = iLocal_111 - 1;
					break;
			
				case 7:
					iLocal_110 = 0;
					iLocal_111 = 11;
					break;
			
				case 9:
					iLocal_110 = 3;
					iLocal_111 = 4;
					break;
			
				case 10:
					iLocal_110 = 0;
					iLocal_111 = 11;
					break;
			
				case 11:
					iLocal_110 = 2;
					iLocal_111 = 12;
					break;
			
				case 12:
					iLocal_110 = 0;
					iLocal_111 = 6;
					break;
			
				case 13:
					iLocal_110 = 2;
					iLocal_111 = 2;
					num2 = 0;
				
					if (!Global_262145.f_29740)
						num2 = num2 + 1;
				
					if (Global_262145.f_24718)
					{
						num2 = num2 + 1;
						num2 = num2 + 1;
					}
				
					if (Global_262145.f_24719)
					{
						num2 = num2 + 1;
						num2 = num2 + 1;
					}
				
					if (Global_262145.f_24717)
						num2 = num2 + 1;
				
					iLocal_111 = iLocal_111 - num2;
				
					if (iLocal_111 < 1)
					{
						iLocal_110 = iLocal_110 - 1;
						iLocal_111 = iLocal_111 + 12;
					}
					break;
			
				case 14:
					iLocal_110 = 1;
					iLocal_111 = 12;
				
					if (!Global_262145.f_30988)
						iLocal_111 = iLocal_111 - 5;
				
					if (Global_262145.f_31062[0] == 0f)
						iLocal_111 = iLocal_111 - 1;
				
					if (Global_262145.f_31062[6] == 0f)
						iLocal_111 = iLocal_111 - 1;
					break;
			
				case 15:
					iLocal_110 = 1;
					iLocal_111 = 7;
					break;
			
				case 16:
					iLocal_110 = 1;
					iLocal_111 = 12;
				
					if (!*Global_262145.f_33910)
						iLocal_111 = iLocal_111 - 1;
				
					if (!*Global_262145.f_33911)
						iLocal_111 = iLocal_111 - 1;
				
					if (!*Global_262145.f_33912)
						iLocal_111 = iLocal_111 - 1;
				
					if (!*Global_262145.f_33913)
						iLocal_111 = iLocal_111 - 6;
				
					if (!*Global_262145.f_33914)
						iLocal_111 = iLocal_111 - 2;
				
					if (!func_123())
						iLocal_111 = iLocal_111 - 1;
				
					if (iLocal_111 < 1)
					{
						iLocal_110 = iLocal_110 - 1;
						iLocal_111 = iLocal_111 + 12;
					}
					break;
			
				case 17:
					iLocal_110 = 4;
					iLocal_111 = 1;
					break;
			}
		
			switch (uParam0->f_5)
			{
				case 0:
					switch (uParam0->f_6)
					{
						case 0:
							func_114(9, 8, num3, &Global_1652549);
							func_114(1, 8, num3, &Global_1652549);
							func_114(4, 8, num3, &Global_1652549);
							func_114(5, 8, num3, &Global_1652549);
							func_114(2, 8, num3, &Global_1652549);
							func_114(8, 8, num3, &Global_1652549);
							func_114(7, 8, num3, &Global_1652549);
							func_114(3, 8, num3, &Global_1652549);
							func_114(6, 8, num3, &Global_1652549);
							func_114(10, 8, num3, &Global_1652549);
							func_114(19, 8, num3, &Global_1652549);
							func_114(24, 8, num3, &Global_1652549);
							break;
					
						case 1:
							func_114(40, 8, num3, &Global_1652549);
							func_114(41, 8, num3, &Global_1652549);
							func_114(42, 8, num3, &Global_1652549);
							func_114(21, 8, num3, &Global_1652549);
							func_114(58, 8, num3, &Global_1652549);
							func_114(57, 8, num3, &Global_1652549);
							func_114(37, 8, num3, &Global_1652549);
							func_101(20, 8, num3, &Global_1652549);
							func_114(51, 8, num3, &Global_1652549);
							func_114(52, 8, num3, &Global_1652549);
							func_114(54, 8, num3, &Global_1652549);
							func_101(14, 8, num3, &Global_1652549);
							break;
					
						case 2:
							func_101(15, 8, num3, &Global_1652549);
							func_101(16, 8, num3, &Global_1652549);
							func_114(29, 8, num3, &Global_1652549);
							func_114(28, 8, num3, &Global_1652549);
							func_114(47, 8, num3, &Global_1652549);
							func_101(6, 8, num3, &Global_1652549);
							func_101(7, 8, num3, &Global_1652549);
							func_114(30, 8, num3, &Global_1652549);
							func_101(2, 8, num3, &Global_1652549);
							func_114(36, 8, num3, &Global_1652549);
							func_114(49, 8, num3, &Global_1652549);
							func_114(15, 8, num3, &Global_1652549);
							break;
					
						case 3:
							func_114(60, 8, num3, &Global_1652549);
							func_114(19, 8, num3, &Global_1652549);
							func_114(53, 8, num3, &Global_1652549);
							func_114(12, 8, num3, &Global_1652549);
							func_114(11, 8, num3, &Global_1652549);
							func_114(14, 8, num3, &Global_1652549);
							break;
					
						case 4:
							func_114(10, 8, num3, &Global_1652549);
							func_114(17, 8, num3, &Global_1652549);
							func_114(61, 8, num3, &Global_1652549);
							func_114(0, 8, num3, &Global_1652549);
							func_114(16, 8, num3, &Global_1652549);
							func_101(13, 8, num3, &Global_1652549);
							func_114(20, 8, num3, &Global_1652549);
							func_114(62, 8, num3, &Global_1652549);
							func_114(63, 8, num3, &Global_1652549);
							func_101(23, 8, num3, &Global_1652549);
							break;
					
						case 5:
							func_114(9, 8, num3, &Global_1652549);
							func_114(56, 8, num3, &Global_1652549);
							func_114(55, 8, num3, &Global_1652549);
							func_114(45, 8, num3, &Global_1652549);
							func_114(43, 8, num3, &Global_1652549);
							func_114(46, 8, num3, &Global_1652549);
							func_114(44, 8, num3, &Global_1652549);
							func_101(22, 8, num3, &Global_1652549);
							func_101(17, 8, num3, &Global_1652549);
							func_101(18, 8, num3, &Global_1652549);
							func_114(59, 8, num3, &Global_1652549);
							func_114(1, 8, num3, &Global_1652549);
							break;
					
						case 6:
							func_114(128, 8, num3, &Global_1652549);
							func_85(12, 8, num3, &Global_1652549);
							func_85(13, 8, num3, &Global_1652549);
							func_85(14, 8, num3, &Global_1652549);
							func_85(15, 8, num3, &Global_1652549);
							func_85(16, 8, num3, &Global_1652549);
							func_114(129, 8, num3, &Global_1652549);
							func_85(17, 8, num3, &Global_1652549);
							func_85(18, 8, num3, &Global_1652549);
							func_85(19, 8, num3, &Global_1652549);
							func_114(133, 8, num3, &Global_1652549);
							func_101(160, 8, num3, &Global_1652549);
							break;
					
						case 7:
							if (!Global_1652549.f_1[0])
							{
								func_85(1, 8, num3, &Global_1652549);
								func_85(2, 8, num3, &Global_1652549);
								func_85(6, 8, num3, &Global_1652549);
								func_85(3, 8, num3, &Global_1652549);
								func_85(7, 8, num3, &Global_1652549);
								func_85(8, 8, num3, &Global_1652549);
								func_85(4, 8, num3, &Global_1652549);
								func_85(9, 8, num3, &Global_1652549);
								func_85(10, 8, num3, &Global_1652549);
								func_85(5, 8, num3, &Global_1652549);
								func_85(11, 8, num3, &Global_1652549);
							}
							break;
					
						case 8:
							if (!Global_1652549.f_1[0])
							{
								func_114(151, 8, num3, &Global_1652549);
								func_101(165, 8, num3, &Global_1652549);
								func_101(166, 8, num3, &Global_1652549);
							
								if (Global_262145.f_24231 == 1)
									func_114(147, 8, num3, &Global_1652549);
							
								if (Global_262145.f_24233 == 1)
									func_114(148, 8, num3, &Global_1652549);
							
								if (Global_262145.f_24232 == 1)
									func_114(149, 8, num3, &Global_1652549);
							
								if (Global_262145.f_24234 == 1)
									func_114(150, 8, num3, &Global_1652549);
							
								if (Global_262145.f_24231 == 1 && Global_262145.f_24233 == 1 && Global_262145.f_24232 == 1 && Global_262145.f_24234 == 1)
									func_101(167, 8, num3, &Global_1652549);
							}
							break;
					
						case 9:
							if (!Global_1652549.f_1[0])
							{
								func_114(86, 8, num3, &Global_1652549);
								func_114(85, 8, num3, &Global_1652549);
								func_114(84, 8, num3, &Global_1652549);
								func_114(83, 8, num3, &Global_1652549);
								func_114(82, 8, num3, &Global_1652549);
								func_114(81, 8, num3, &Global_1652549);
								func_114(80, 8, num3, &Global_1652549);
								func_114(79, 8, num3, &Global_1652549);
								func_114(78, 8, num3, &Global_1652549);
								func_114(77, 8, num3, &Global_1652549);
								func_114(76, 8, num3, &Global_1652549);
								func_114(75, 8, num3, &Global_1652549);
							}
							break;
					
						case 10:
							if (!Global_1652549.f_1[0])
							{
								func_101(53, 8, num3, &Global_1652549);
								func_101(54, 8, num3, &Global_1652549);
								func_101(55, 8, num3, &Global_1652549);
								func_101(56, 8, num3, &Global_1652549);
								func_101(57, 8, num3, &Global_1652549);
								func_101(58, 8, num3, &Global_1652549);
								func_101(59, 8, num3, &Global_1652549);
								func_101(62, 8, num3, &Global_1652549);
								func_101(60, 8, num3, &Global_1652549);
								func_101(61, 8, num3, &Global_1652549);
								func_114(87, 8, num3, &Global_1652549);
							}
							break;
					
						case 11:
							if (!Global_1652549.f_1[0])
							{
								func_101(63, 8, num3, &Global_1652549);
								func_114(88, 8, num3, &Global_1652549);
								func_101(64, 8, num3, &Global_1652549);
								func_101(65, 8, num3, &Global_1652549);
								func_101(66, 8, num3, &Global_1652549);
								func_101(67, 8, num3, &Global_1652549);
								func_101(68, 8, num3, &Global_1652549);
								func_101(69, 8, num3, &Global_1652549);
								func_101(70, 8, num3, &Global_1652549);
								func_101(71, 8, num3, &Global_1652549);
								func_101(72, 8, num3, &Global_1652549);
								func_101(73, 8, num3, &Global_1652549);
							}
							break;
					
						case 12:
							if (!Global_1652549.f_1[0])
							{
								if (Global_262145.f_29276)
								{
									func_101(89, 8, num3, &Global_1652549);
									func_101(90, 8, num3, &Global_1652549);
									func_101(92, 8, num3, &Global_1652549);
									func_101(91, 8, num3, &Global_1652549);
									func_101(94, 8, num3, &Global_1652549);
									func_101(93, 8, num3, &Global_1652549);
								}
							}
							break;
					
						case 13:
							if (!Global_1652549.f_1[0])
							{
								func_101(95, 8, num3, &Global_1652549);
								func_101(96, 8, num3, &Global_1652549);
								func_114(106, 8, num3, &Global_1652549);
								func_101(97, 8, num3, &Global_1652549);
								func_101(98, 8, num3, &Global_1652549);
								func_101(99, 8, num3, &Global_1652549);
								func_101(100, 8, num3, &Global_1652549);
								func_101(101, 8, num3, &Global_1652549);
								func_101(102, 8, num3, &Global_1652549);
								func_101(103, 8, num3, &Global_1652549);
								func_101(104, 8, num3, &Global_1652549);
								func_101(105, 8, num3, &Global_1652549);
							}
							break;
					
						case 14:
							if (!Global_1652549.f_1[0])
							{
								func_101(113, 8, num3, &Global_1652549);
								func_114(107, 8, num3, &Global_1652549);
								func_114(108, 8, num3, &Global_1652549);
								func_114(109, 8, num3, &Global_1652549);
								func_114(110, 8, num3, &Global_1652549);
								func_114(111, 8, num3, &Global_1652549);
								func_114(112, 8, num3, &Global_1652549);
								func_114(113, 8, num3, &Global_1652549);
								func_101(114, 8, num3, &Global_1652549);
								func_114(114, 8, num3, &Global_1652549);
								func_101(117, 8, num3, &Global_1652549);
								func_101(116, 8, num3, &Global_1652549);
							}
							break;
					
						case 15:
							if (!Global_1652549.f_1[0])
							{
								func_101(127, 8, num3, &Global_1652549);
								func_101(128, 8, num3, &Global_1652549);
								func_101(129, 8, num3, &Global_1652549);
								func_101(130, 8, num3, &Global_1652549);
								func_101(131, 8, num3, &Global_1652549);
								func_101(132, 8, num3, &Global_1652549);
								func_101(133, 8, num3, &Global_1652549);
								func_101(134, 8, num3, &Global_1652549);
								func_101(140, 8, num3, &Global_1652549);
								func_101(135, 8, num3, &Global_1652549);
								func_101(141, 8, num3, &Global_1652549);
								func_101(136, 8, num3, &Global_1652549);
							}
							break;
					
						case 16:
							if (!Global_1652549.f_1[0])
							{
								func_101(143, 8, num3, &Global_1652549);
								func_101(144, 8, num3, &Global_1652549);
								func_101(145, 8, num3, &Global_1652549);
								func_101(146, 8, num3, &Global_1652549);
								func_114(120, 8, num3, &Global_1652549);
								func_101(147, 8, num3, &Global_1652549);
								func_101(148, 8, num3, &Global_1652549);
								func_114(121, 8, num3, &Global_1652549);
								func_101(149, 8, num3, &Global_1652549);
								func_101(150, 8, num3, &Global_1652549);
								func_114(122, 8, num3, &Global_1652549);
								func_101(151, 8, num3, &Global_1652549);
							}
							break;
					
						case 17:
							func_79(4, 8, num3, &Global_1652549);
							func_79(2, 8, num3, &Global_1652549);
							func_79(7, 8, num3, &Global_1652549);
							func_79(0, 8, num3, &Global_1652549);
							func_79(6, 8, num3, &Global_1652549);
							func_79(8, 8, num3, &Global_1652549);
							func_79(5, 8, num3, &Global_1652549);
							func_79(1, 8, num3, &Global_1652549);
							func_79(54, 8, num3, &Global_1652549);
							func_79(57, 8, num3, &Global_1652549);
							func_79(58, 8, num3, &Global_1652549);
							func_79(59, 8, num3, &Global_1652549);
							break;
					}
					break;
			
				case 1:
					switch (uParam0->f_6)
					{
						case 0:
							func_114(17, 8, num3, &Global_1652549);
							func_114(12, 8, num3, &Global_1652549);
							func_114(40, 8, num3, &Global_1652549);
							func_114(31, 8, num3, &Global_1652549);
							func_114(37, 8, num3, &Global_1652549);
							func_114(34, 8, num3, &Global_1652549);
							func_114(33, 8, num3, &Global_1652549);
							func_114(32, 8, num3, &Global_1652549);
							func_114(41, 8, num3, &Global_1652549);
							func_114(35, 8, num3, &Global_1652549);
							func_114(63, 8, num3, &Global_1652549);
							func_67(1, 8, num3, &Global_1652549);
							break;
					
						case 1:
							func_114(39, 8, num3, &Global_1652549);
							func_101(11, 8, num3, &Global_1652549);
							func_114(38, 8, num3, &Global_1652549);
							func_101(10, 8, num3, &Global_1652549);
							func_114(48, 8, num3, &Global_1652549);
							func_114(22, 8, num3, &Global_1652549);
							func_114(23, 8, num3, &Global_1652549);
							func_114(31, 8, num3, &Global_1652549);
							func_114(35, 8, num3, &Global_1652549);
							func_101(4, 8, num3, &Global_1652549);
							func_101(5, 8, num3, &Global_1652549);
							func_114(32, 8, num3, &Global_1652549);
							break;
					
						case 2:
							if (!Global_1652549.f_1[0])
							{
								func_101(12, 8, num3, &Global_1652549);
								func_114(27, 8, num3, &Global_1652549);
								func_101(0, 8, num3, &Global_1652549);
								func_101(21, 8, num3, &Global_1652549);
								func_67(1, 8, num3, &Global_1652549);
								func_67(0, 8, num3, &Global_1652549);
								func_67(3, 8, num3, &Global_1652549);
								func_67(2, 8, num3, &Global_1652549);
								func_114(135, 8, num3, &Global_1652549);
								func_114(136, 8, num3, &Global_1652549);
								func_114(142, 8, num3, &Global_1652549);
								func_101(164, 8, num3, &Global_1652549);
							}
							break;
					
						case 5:
							if (!Global_1652549.f_1[0])
							{
								func_114(5, 8, num3, &Global_1652549);
								func_114(4, 8, num3, &Global_1652549);
								func_114(25, 8, num3, &Global_1652549);
								func_114(2, 8, num3, &Global_1652549);
								func_114(26, 8, num3, &Global_1652549);
								func_114(7, 8, num3, &Global_1652549);
								func_114(3, 8, num3, &Global_1652549);
								func_114(6, 8, num3, &Global_1652549);
								func_114(8, 8, num3, &Global_1652549);
								func_114(24, 8, num3, &Global_1652549);
								func_114(137, 8, num3, &Global_1652549);
								func_114(139, 8, num3, &Global_1652549);
							}
							break;
					
						case 6:
							if (!Global_1652549.f_1[0])
							{
								func_114(131, 8, num3, &Global_1652549);
								func_114(130, 8, num3, &Global_1652549);
								func_101(162, 8, num3, &Global_1652549);
								func_101(159, 8, num3, &Global_1652549);
								func_101(163, 8, num3, &Global_1652549);
								func_114(140, 8, num3, &Global_1652549);
								func_85(21, 8, num3, &Global_1652549);
							
								if (func_122() || func_121() || MISC::IS_PC_VERSION())
									func_85(20, 8, num3, &Global_1652549);
							}
							break;
					
						case 9:
							if (!Global_1652549.f_1[0])
							{
								func_114(74, 8, num3, &Global_1652549);
								func_114(73, 8, num3, &Global_1652549);
								func_114(72, 8, num3, &Global_1652549);
								func_101(52, 8, num3, &Global_1652549);
								func_101(51, 8, num3, &Global_1652549);
								func_114(71, 8, num3, &Global_1652549);
								func_114(70, 8, num3, &Global_1652549);
								func_101(50, 8, num3, &Global_1652549);
								func_101(30, 8, num3, &Global_1652549);
								func_101(31, 8, num3, &Global_1652549);
								func_101(32, 8, num3, &Global_1652549);
								func_101(33, 8, num3, &Global_1652549);
							}
							break;
					
						case 11:
							if (!Global_1652549.f_1[0])
							{
								func_101(74, 8, num3, &Global_1652549);
								func_101(75, 8, num3, &Global_1652549);
								func_114(89, 8, num3, &Global_1652549);
								func_114(90, 8, num3, &Global_1652549);
								func_114(91, 8, num3, &Global_1652549);
								func_101(76, 8, num3, &Global_1652549);
								func_101(77, 8, num3, &Global_1652549);
								func_101(78, 8, num3, &Global_1652549);
								func_114(92, 8, num3, &Global_1652549);
								func_114(93, 8, num3, &Global_1652549);
								func_101(79, 8, num3, &Global_1652549);
								func_101(80, 8, num3, &Global_1652549);
							}
							break;
					
						case 13:
							if (!Global_1652549.f_1[0])
							{
								func_114(105, 8, num3, &Global_1652549);
								func_101(106, 8, num3, &Global_1652549);
								func_101(107, 8, num3, &Global_1652549);
								func_101(108, 8, num3, &Global_1652549);
								func_114(101, 8, num3, &Global_1652549);
								func_101(111, 8, num3, &Global_1652549);
								func_114(99, 8, num3, &Global_1652549);
								func_101(112, 8, num3, &Global_1652549);
							
								if (!Global_262145.f_24717)
									func_114(104, 8, num3, &Global_1652549);
							
								if (!Global_262145.f_24719)
								{
									func_114(103, 8, num3, &Global_1652549);
									func_101(109, 8, num3, &Global_1652549);
								}
							
								if (!Global_262145.f_24718)
									func_114(102, 8, num3, &Global_1652549);
							}
							break;
					
						case 14:
							if (!Global_1652549.f_1[0])
							{
								if (Global_262145.f_31062[0] != 0f)
									func_101(115, 8, num3, &Global_1652549);
							
								func_101(118, 8, num3, &Global_1652549);
								func_101(119, 8, num3, &Global_1652549);
								func_101(120, 8, num3, &Global_1652549);
							
								if (Global_262145.f_31062[6] != 0f)
									func_101(121, 8, num3, &Global_1652549);
							
								func_101(122, 8, num3, &Global_1652549);
								func_114(115, 8, num3, &Global_1652549);
							
								if (Global_262145.f_30988)
								{
									func_114(116, 8, num3, &Global_1652549);
									func_101(123, 8, num3, &Global_1652549);
									func_101(124, 8, num3, &Global_1652549);
									func_101(125, 8, num3, &Global_1652549);
									func_101(126, 8, num3, &Global_1652549);
								}
							}
							break;
					
						case 15:
							if (!Global_1652549.f_1[0])
							{
								func_101(142, 8, num3, &Global_1652549);
								func_114(117, 8, num3, &Global_1652549);
								func_114(118, 8, num3, &Global_1652549);
								func_101(137, 8, num3, &Global_1652549);
								func_101(138, 8, num3, &Global_1652549);
								func_101(139, 8, num3, &Global_1652549);
								func_114(119, 8, num3, &Global_1652549);
							}
							break;
					
						case 16:
							if (!Global_1652549.f_1[0])
							{
								if (*Global_262145.f_33910)
									func_114(123, 8, num3, &Global_1652549);
							
								if (*Global_262145.f_33911)
									func_114(124, 8, num3, &Global_1652549);
							
								if (*Global_262145.f_33912)
									func_114(125, 8, num3, &Global_1652549);
							
								if (*Global_262145.f_33913)
								{
									func_101(152, 8, num3, &Global_1652549);
									func_101(153, 8, num3, &Global_1652549);
									func_101(154, 8, num3, &Global_1652549);
									func_101(155, 8, num3, &Global_1652549);
								}
							
								if (func_123())
									func_114(126, 8, num3, &Global_1652549);
							
								if (*Global_262145.f_33913)
								{
									func_101(156, 8, num3, &Global_1652549);
									func_101(157, 8, num3, &Global_1652549);
								}
							
								if (*Global_262145.f_33914)
								{
									func_114(127, 8, num3, &Global_1652549);
									func_101(158, 8, num3, &Global_1652549);
								}
							}
							break;
					
						case 17:
							func_79(60, 8, num3, &Global_1652549);
							func_79(12, 8, num3, &Global_1652549);
							func_79(56, 8, num3, &Global_1652549);
							func_79(55, 8, num3, &Global_1652549);
							func_79(25, 8, num3, &Global_1652549);
							func_79(34, 8, num3, &Global_1652549);
							func_79(45, 8, num3, &Global_1652549);
							func_79(48, 8, num3, &Global_1652549);
							func_79(49, 8, num3, &Global_1652549);
							func_79(65, 8, num3, &Global_1652549);
							func_79(46, 8, num3, &Global_1652549);
							func_79(9, 8, num3, &Global_1652549);
							break;
					}
					break;
			
				case 2:
					switch (uParam0->f_6)
					{
						case 0:
							func_114(48, 8, num3, &Global_1652549);
							func_114(14, 8, num3, &Global_1652549);
							func_114(25, 8, num3, &Global_1652549);
							func_114(26, 8, num3, &Global_1652549);
							func_114(15, 8, num3, &Global_1652549);
							func_114(22, 8, num3, &Global_1652549);
							func_114(27, 8, num3, &Global_1652549);
							func_114(21, 8, num3, &Global_1652549);
							func_114(11, 8, num3, &Global_1652549);
							func_114(62, 8, num3, &Global_1652549);
							func_114(23, 8, num3, &Global_1652549);
							func_114(0, 8, num3, &Global_1652549);
							break;
					
						case 1:
							if (!Global_1652549.f_1[0])
							{
								func_114(34, 8, num3, &Global_1652549);
								func_101(3, 8, num3, &Global_1652549);
								func_114(33, 8, num3, &Global_1652549);
								func_101(8, 8, num3, &Global_1652549);
								func_114(143, 8, num3, &Global_1652549);
								func_114(144, 8, num3, &Global_1652549);
								func_114(145, 8, num3, &Global_1652549);
								func_114(134, 8, num3, &Global_1652549);
								func_114(138, 8, num3, &Global_1652549);
							}
							break;
					
						case 2:
							if (!Global_1652549.f_1[0])
							{
								func_114(146, 8, num3, &Global_1652549);
								func_114(67, 8, num3, &Global_1652549);
								func_101(25, 8, num3, &Global_1652549);
								func_101(26, 8, num3, &Global_1652549);
							}
							break;
					
						case 5:
							if (!Global_1652549.f_1[0])
								func_114(141, 8, num3, &Global_1652549);
							break;
					
						case 9:
							if (!Global_1652549.f_1[0])
							{
								func_101(34, 8, num3, &Global_1652549);
								func_101(35, 8, num3, &Global_1652549);
								func_101(36, 8, num3, &Global_1652549);
								func_101(37, 8, num3, &Global_1652549);
								func_101(38, 8, num3, &Global_1652549);
								func_101(39, 8, num3, &Global_1652549);
								func_101(40, 8, num3, &Global_1652549);
								func_101(41, 8, num3, &Global_1652549);
								func_101(42, 8, num3, &Global_1652549);
								func_101(43, 8, num3, &Global_1652549);
								func_101(44, 8, num3, &Global_1652549);
								func_101(45, 8, num3, &Global_1652549);
							}
							break;
					
						case 11:
							if (!Global_1652549.f_1[0])
							{
								func_101(81, 8, num3, &Global_1652549);
								func_114(94, 8, num3, &Global_1652549);
								func_114(95, 8, num3, &Global_1652549);
								func_101(82, 8, num3, &Global_1652549);
								func_101(83, 8, num3, &Global_1652549);
								func_114(96, 8, num3, &Global_1652549);
								func_101(84, 8, num3, &Global_1652549);
								func_101(85, 8, num3, &Global_1652549);
								func_114(97, 8, num3, &Global_1652549);
								func_101(86, 8, num3, &Global_1652549);
								func_101(87, 8, num3, &Global_1652549);
								func_101(88, 8, num3, &Global_1652549);
							}
							break;
					
						case 13:
							if (!Global_1652549.f_1[0])
							{
								if (!Global_262145.f_24718)
									func_101(110, 8, num3, &Global_1652549);
							
								if (Global_262145.f_29740)
									func_114(100, 8, num3, &Global_1652549);
							}
							break;
					
						case 17:
							if (!Global_1652549.f_1[0])
							{
								func_79(10, 8, num3, &Global_1652549);
								func_79(11, 8, num3, &Global_1652549);
								func_79(87, 8, num3, &Global_1652549);
								func_79(89, 8, num3, &Global_1652549);
								num = 0;
							
								if (func_66(3608, -1))
									num = 1;
							
								func_62("CLO_LTS_T_0", "CLO_LTS_TD_0", "Elitas_Tshirt", "MPTshirtAwardLTS", 1, num, -1, 1, &Global_1652549, 168, 152);
								func_59(0);
								func_59(1);
								func_59(2);
								num = 0;
							
								if (func_50(4))
									num = 1;
							
								func_62("CLO_HST_A_4", "CLO_HST_AD_5", "CantTouchThis", "MPTShirtAwards2", 1, num, -1, 1, &Global_1652549, 168, 152);
								func_59(5);
								func_59(7);
								func_59(6);
							}
							break;
					}
					break;
			
				case 3:
					switch (uParam0->f_6)
					{
						case 0:
							func_114(16, 8, num3, &Global_1652549);
							func_114(45, 8, num3, &Global_1652549);
							func_114(43, 8, num3, &Global_1652549);
							func_114(46, 8, num3, &Global_1652549);
							func_114(44, 8, num3, &Global_1652549);
							func_114(30, 8, num3, &Global_1652549);
							func_101(2, 8, num3, &Global_1652549);
							func_114(39, 8, num3, &Global_1652549);
							func_114(38, 8, num3, &Global_1652549);
							func_101(3, 8, num3, &Global_1652549);
							func_114(42, 8, num3, &Global_1652549);
							func_114(36, 8, num3, &Global_1652549);
							break;
					
						case 1:
							!Global_1652549.f_1[0];
							break;
					
						case 9:
							if (!Global_1652549.f_1[0])
							{
								func_101(46, 8, num3, &Global_1652549);
								func_101(47, 8, num3, &Global_1652549);
								func_101(48, 8, num3, &Global_1652549);
								func_101(49, 8, num3, &Global_1652549);
							}
							break;
					
						case 17:
							func_59(8);
							num = 0;
						
							if (func_50(9))
								num = 1;
						
							func_62("CLO_HST_A_9", "CLO_HST_AD_9", "Showroom", "MPTShirtAwards2", 1, num, -1, 1, &Global_1652549, 168, 152);
							func_62("CHR_HST_A_0", "CHR_HST_AD_0", "SportMod", "MPAwardMods", func_49(134, 5, 0), func_48(134, -1), -1, 1, &Global_1652549, 168, 152);
							func_62("CHR_HST_A_1", "CHR_HST_AD_1", "LowriderMod", "MPAwardMods", func_49(135, 5, 0), func_48(135, -1), -1, 1, &Global_1652549, 168, 152);
							func_62("CHR_HST_A_2", "CHR_HST_AD_2", "OffroadMod", "MPAwardMods", func_49(137, 5, 0), func_48(137, -1), -1, 1, &Global_1652549, 168, 152);
							func_62("CHR_HST_A_3", "CHR_HST_AD_3", "HighendMod", "MPAwardMods", func_49(128, 5, 0), func_48(128, -1), -1, 1, &Global_1652549, 168, 152);
							func_62("CHR_HST_A_4", "CHR_HST_AD_4", "TunerMod", "MPAwardMods", func_49(129, 5, 0), func_48(129, -1), -1, 1, &Global_1652549, 168, 152);
							func_62("CHR_HST_A_5", "CHR_HST_AD_5", "BikeMod", "MPAwardMods", func_49(139, 5, 0), func_48(139, -1), -1, 1, &Global_1652549, 168, 152);
							func_62("CHR_HST_A_6", "CHR_HST_AD_6", "SUVMod", "MPAwardMods", func_49(143, 5, 0), func_48(143, -1), -1, 1, &Global_1652549, 168, 152);
							func_62("CHR_HST_A_7", "CHR_HST_AD_7", "MuscleMod", "MPAwardMods", func_49(144, 5, 0), func_48(144, -1), -1, 1, &Global_1652549, 168, 152);
							func_59(34);
							func_62("CLO_S1M_DEC_25", _("Complete all the Lowriders Lamar missions."), "BennyTshirt01", "MPTShirtAwards4", 8, num, -1, 1, &Global_1652549, 168, 152);
							break;
					}
					break;
			
				case 4:
					switch (uParam0->f_6)
					{
						case 0:
							func_101(15, 8, num3, &Global_1652549);
							func_101(4, 8, num3, &Global_1652549);
							func_101(5, 8, num3, &Global_1652549);
							func_101(7, 8, num3, &Global_1652549);
							func_101(6, 8, num3, &Global_1652549);
							func_114(29, 8, num3, &Global_1652549);
							func_114(28, 8, num3, &Global_1652549);
							func_114(20, 8, num3, &Global_1652549);
							func_101(0, 8, num3, &Global_1652549);
							func_101(8, 8, num3, &Global_1652549);
							func_114(61, 8, num3, &Global_1652549);
							func_67(3, 8, num3, &Global_1652549);
							break;
					
						case 17:
							if (!Global_1652549.f_1[0])
							{
								if (func_47(2934, -1, 0) == 1)
								{
									num = 8;
								}
								else
								{
									num = func_42(0);
								
									if (num > 0)
										num = num - 1;
								}
							
								func_62("CLO_S1M_DEC_24", _("Complete all the Lowriders Lamar missions."), "BennyTshirt02", "MPTShirtAwards4", 8, num, -1, 1, &Global_1652549, 168, 152);
							}
							break;
					}
					break;
			
				case 5:
					switch (uParam0->f_6)
					{
						case 0:
							func_101(22, 8, num3, &Global_1652549);
							func_101(17, 8, num3, &Global_1652549);
							func_101(18, 8, num3, &Global_1652549);
							func_67(2, 8, num3, &Global_1652549);
							func_67(0, 8, num3, &Global_1652549);
							func_101(16, 8, num3, &Global_1652549);
							func_101(12, 8, num3, &Global_1652549);
							func_101(13, 8, num3, &Global_1652549);
							func_114(55, 8, num3, &Global_1652549);
							func_114(56, 8, num3, &Global_1652549);
							func_114(53, 8, num3, &Global_1652549);
							func_101(20, 8, num3, &Global_1652549);
							break;
					}
					break;
			
				case 6:
					switch (uParam0->f_6)
					{
						case 0:
							func_101(10, 8, num3, &Global_1652549);
							func_101(21, 8, num3, &Global_1652549);
							func_114(60, 8, num3, &Global_1652549);
							func_101(11, 8, num3, &Global_1652549);
							func_114(51, 8, num3, &Global_1652549);
							func_114(52, 8, num3, &Global_1652549);
							func_114(59, 8, num3, &Global_1652549);
							func_114(58, 8, num3, &Global_1652549);
							func_101(14, 8, num3, &Global_1652549);
							func_114(54, 8, num3, &Global_1652549);
							func_114(57, 8, num3, &Global_1652549);
							func_114(47, 8, num3, &Global_1652549);
							break;
					}
					break;
			
				case 7:
					switch (uParam0->f_6)
					{
						case 0:
							if (!Global_1652549.f_1[0])
							{
								func_101(23, 8, num3, &Global_1652549);
								func_114(49, 8, num3, &Global_1652549);
								func_114(134, 8, num3, &Global_1652549);
								func_114(135, 8, num3, &Global_1652549);
								func_114(136, 8, num3, &Global_1652549);
								func_114(137, 8, num3, &Global_1652549);
								func_114(138, 8, num3, &Global_1652549);
								func_114(128, 8, num3, &Global_1652549);
								func_114(129, 8, num3, &Global_1652549);
								func_114(130, 8, num3, &Global_1652549);
								func_114(131, 8, num3, &Global_1652549);
								func_101(160, 8, num3, &Global_1652549);
							}
							break;
					}
					break;
			
				case 8:
					switch (uParam0->f_6)
					{
						case 0:
							if (!Global_1652549.f_1[0])
							{
								func_114(133, 8, num3, &Global_1652549);
								func_101(159, 8, num3, &Global_1652549);
								func_114(139, 8, num3, &Global_1652549);
								func_101(163, 8, num3, &Global_1652549);
								func_114(140, 8, num3, &Global_1652549);
								func_114(141, 8, num3, &Global_1652549);
								func_114(142, 8, num3, &Global_1652549);
								func_114(143, 8, num3, &Global_1652549);
								func_114(144, 8, num3, &Global_1652549);
								func_114(145, 8, num3, &Global_1652549);
								func_101(164, 8, num3, &Global_1652549);
								func_114(146, 8, num3, &Global_1652549);
							}
							break;
					}
					break;
			
				case 9:
					switch (uParam0->f_6)
					{
						case 0:
							if (!Global_1652549.f_1[0])
							{
								func_101(162, 8, num3, &Global_1652549);
								func_85(12, 8, num3, &Global_1652549);
								func_85(13, 8, num3, &Global_1652549);
								func_85(14, 8, num3, &Global_1652549);
								func_85(15, 8, num3, &Global_1652549);
								func_85(16, 8, num3, &Global_1652549);
								func_85(17, 8, num3, &Global_1652549);
								func_85(18, 8, num3, &Global_1652549);
								func_85(19, 8, num3, &Global_1652549);
							
								if (!Global_262145.f_9036)
								{
									func_114(67, 8, num3, &Global_1652549);
									func_101(25, 8, num3, &Global_1652549);
									func_101(26, 8, num3, &Global_1652549);
								}
							}
							break;
					}
					break;
			
				case 10:
					switch (uParam0->f_6)
					{
						case 0:
							if (!Global_1652549.f_1[0])
							{
								func_85(21, 8, num3, &Global_1652549);
							
								if (func_122() || func_121() || MISC::IS_PC_VERSION())
									func_85(20, 8, num3, &Global_1652549);
							
								func_85(1, 8, num3, &Global_1652549);
								func_85(2, 8, num3, &Global_1652549);
								func_85(6, 8, num3, &Global_1652549);
								func_85(3, 8, num3, &Global_1652549);
								func_85(7, 8, num3, &Global_1652549);
								func_85(8, 8, num3, &Global_1652549);
								func_85(4, 8, num3, &Global_1652549);
								func_85(9, 8, num3, &Global_1652549);
								func_85(10, 8, num3, &Global_1652549);
								func_85(5, 8, num3, &Global_1652549);
							}
							break;
					}
					break;
			
				case 11:
					switch (uParam0->f_6)
					{
						case 0:
							if (!Global_1652549.f_1[0])
							{
								func_85(11, 8, num3, &Global_1652549);
								func_114(151, 8, num3, &Global_1652549);
								func_101(165, 8, num3, &Global_1652549);
								func_101(166, 8, num3, &Global_1652549);
							
								if (Global_262145.f_24231 == 1)
									func_114(147, 8, num3, &Global_1652549);
							
								if (Global_262145.f_24233 == 1)
									func_114(148, 8, num3, &Global_1652549);
							
								if (Global_262145.f_24232 == 1)
									func_114(149, 8, num3, &Global_1652549);
							
								if (Global_262145.f_24234 == 1)
									func_114(150, 8, num3, &Global_1652549);
							
								if (Global_262145.f_24231 == 1 && Global_262145.f_24233 == 1 && Global_262145.f_24232 == 1 && Global_262145.f_24234 == 1)
									func_101(167, 8, num3, &Global_1652549);
							
								func_114(86, 8, num3, &Global_1652549);
								func_114(85, 8, num3, &Global_1652549);
								func_114(84, 8, num3, &Global_1652549);
							}
							break;
					}
					break;
			
				case 12:
					switch (uParam0->f_6)
					{
						case 0:
							if (!Global_1652549.f_1[0])
							{
								func_114(83, 8, num3, &Global_1652549);
								func_114(82, 8, num3, &Global_1652549);
								func_114(81, 8, num3, &Global_1652549);
								func_114(80, 8, num3, &Global_1652549);
								func_114(79, 8, num3, &Global_1652549);
								func_114(78, 8, num3, &Global_1652549);
								func_114(77, 8, num3, &Global_1652549);
								func_114(76, 8, num3, &Global_1652549);
								func_114(75, 8, num3, &Global_1652549);
								func_114(74, 8, num3, &Global_1652549);
								func_114(73, 8, num3, &Global_1652549);
								func_114(72, 8, num3, &Global_1652549);
							}
							break;
					}
					break;
			
				case 13:
					switch (uParam0->f_6)
					{
						case 0:
							if (!Global_1652549.f_1[0])
							{
								func_101(52, 8, num3, &Global_1652549);
								func_101(51, 8, num3, &Global_1652549);
								func_114(71, 8, num3, &Global_1652549);
								func_114(70, 8, num3, &Global_1652549);
								func_101(50, 8, num3, &Global_1652549);
								func_101(30, 8, num3, &Global_1652549);
								func_101(31, 8, num3, &Global_1652549);
								func_101(32, 8, num3, &Global_1652549);
								func_101(33, 8, num3, &Global_1652549);
								func_101(34, 8, num3, &Global_1652549);
								func_101(35, 8, num3, &Global_1652549);
								func_101(36, 8, num3, &Global_1652549);
							}
							break;
					}
					break;
			
				case 14:
					switch (uParam0->f_6)
					{
						case 0:
							if (!Global_1652549.f_1[0])
							{
								func_101(37, 8, num3, &Global_1652549);
								func_101(38, 8, num3, &Global_1652549);
								func_101(39, 8, num3, &Global_1652549);
								func_101(40, 8, num3, &Global_1652549);
								func_101(41, 8, num3, &Global_1652549);
								func_101(42, 8, num3, &Global_1652549);
								func_101(43, 8, num3, &Global_1652549);
								func_101(44, 8, num3, &Global_1652549);
								func_101(45, 8, num3, &Global_1652549);
								func_101(46, 8, num3, &Global_1652549);
								func_101(47, 8, num3, &Global_1652549);
								func_101(48, 8, num3, &Global_1652549);
							}
							break;
					}
					break;
			
				case 15:
					switch (uParam0->f_6)
					{
						case 0:
							if (!Global_1652549.f_1[0])
								func_101(49, 8, num3, &Global_1652549);
						
							func_101(53, 8, num3, &Global_1652549);
							func_101(54, 8, num3, &Global_1652549);
							func_101(55, 8, num3, &Global_1652549);
							func_101(56, 8, num3, &Global_1652549);
							func_101(57, 8, num3, &Global_1652549);
							func_101(58, 8, num3, &Global_1652549);
							func_101(59, 8, num3, &Global_1652549);
							func_101(62, 8, num3, &Global_1652549);
							func_101(60, 8, num3, &Global_1652549);
							func_101(61, 8, num3, &Global_1652549);
							func_114(87, 8, num3, &Global_1652549);
							break;
					}
					break;
			
				case 16:
					switch (uParam0->f_6)
					{
						case 0:
							func_114(88, 8, num3, &Global_1652549);
							func_114(89, 8, num3, &Global_1652549);
							func_114(90, 8, num3, &Global_1652549);
							func_114(91, 8, num3, &Global_1652549);
							func_114(92, 8, num3, &Global_1652549);
							func_114(93, 8, num3, &Global_1652549);
							func_114(94, 8, num3, &Global_1652549);
							func_114(95, 8, num3, &Global_1652549);
							func_114(96, 8, num3, &Global_1652549);
							func_114(97, 8, num3, &Global_1652549);
							func_101(63, 8, num3, &Global_1652549);
							func_101(64, 8, num3, &Global_1652549);
							break;
					}
					break;
			
				case 17:
					switch (uParam0->f_6)
					{
						case 0:
							func_101(65, 8, num3, &Global_1652549);
							func_101(66, 8, num3, &Global_1652549);
							func_101(67, 8, num3, &Global_1652549);
							func_101(68, 8, num3, &Global_1652549);
							func_101(69, 8, num3, &Global_1652549);
							func_101(70, 8, num3, &Global_1652549);
							func_101(71, 8, num3, &Global_1652549);
							func_101(72, 8, num3, &Global_1652549);
							func_101(73, 8, num3, &Global_1652549);
							func_101(74, 8, num3, &Global_1652549);
							func_101(75, 8, num3, &Global_1652549);
							func_101(76, 8, num3, &Global_1652549);
							break;
					}
					break;
			
				case 18:
					switch (uParam0->f_6)
					{
						case 0:
							func_101(77, 8, num3, &Global_1652549);
							func_101(78, 8, num3, &Global_1652549);
							func_101(79, 8, num3, &Global_1652549);
							func_101(80, 8, num3, &Global_1652549);
							func_101(81, 8, num3, &Global_1652549);
							func_101(82, 8, num3, &Global_1652549);
							func_101(83, 8, num3, &Global_1652549);
							func_101(84, 8, num3, &Global_1652549);
							func_101(85, 8, num3, &Global_1652549);
							func_101(86, 8, num3, &Global_1652549);
							func_101(87, 8, num3, &Global_1652549);
							func_101(88, 8, num3, &Global_1652549);
							break;
					}
					break;
			
				case 19:
					switch (uParam0->f_6)
					{
						case 0:
							if (!Global_1652549.f_1[0])
							{
								if (Global_262145.f_29276)
								{
									func_101(89, 8, num3, &Global_1652549);
									func_101(90, 8, num3, &Global_1652549);
									func_101(92, 8, num3, &Global_1652549);
									func_101(91, 8, num3, &Global_1652549);
									func_101(94, 8, num3, &Global_1652549);
									func_101(93, 8, num3, &Global_1652549);
								}
							
								func_101(95, 8, num3, &Global_1652549);
								func_101(96, 8, num3, &Global_1652549);
								func_114(106, 8, num3, &Global_1652549);
								func_101(97, 8, num3, &Global_1652549);
								func_101(98, 8, num3, &Global_1652549);
								func_101(99, 8, num3, &Global_1652549);
							}
							break;
					}
					break;
			
				case 20:
					switch (uParam0->f_6)
					{
						case 0:
							if (!Global_1652549.f_1[0])
							{
								func_101(100, 8, num3, &Global_1652549);
								func_101(101, 8, num3, &Global_1652549);
								func_101(102, 8, num3, &Global_1652549);
								func_101(103, 8, num3, &Global_1652549);
								func_101(104, 8, num3, &Global_1652549);
								func_101(105, 8, num3, &Global_1652549);
								func_114(105, 8, num3, &Global_1652549);
								func_101(106, 8, num3, &Global_1652549);
								func_101(107, 8, num3, &Global_1652549);
								func_101(108, 8, num3, &Global_1652549);
								func_114(101, 8, num3, &Global_1652549);
								func_101(111, 8, num3, &Global_1652549);
							}
							break;
					}
					break;
			
				case 21:
					switch (uParam0->f_6)
					{
						case 0:
							if (!Global_1652549.f_1[0])
							{
								func_114(99, 8, num3, &Global_1652549);
								func_101(112, 8, num3, &Global_1652549);
							
								if (!Global_262145.f_24717)
									func_114(104, 8, num3, &Global_1652549);
							
								if (!Global_262145.f_24719)
								{
									func_101(109, 8, num3, &Global_1652549);
									func_114(103, 8, num3, &Global_1652549);
								}
							
								if (!Global_262145.f_24718)
								{
									func_101(110, 8, num3, &Global_1652549);
									func_114(102, 8, num3, &Global_1652549);
								}
							
								if (Global_262145.f_29740)
									func_114(100, 8, num3, &Global_1652549);
							
								func_101(113, 8, num3, &Global_1652549);
								func_114(107, 8, num3, &Global_1652549);
								func_114(108, 8, num3, &Global_1652549);
								func_114(109, 8, num3, &Global_1652549);
							}
							break;
					}
					break;
			
				case 22:
					switch (uParam0->f_6)
					{
						case 0:
							if (!Global_1652549.f_1[0])
							{
								func_114(110, 8, num3, &Global_1652549);
								func_114(111, 8, num3, &Global_1652549);
								func_114(112, 8, num3, &Global_1652549);
								func_114(113, 8, num3, &Global_1652549);
								func_101(114, 8, num3, &Global_1652549);
								func_114(114, 8, num3, &Global_1652549);
								func_101(116, 8, num3, &Global_1652549);
								func_101(117, 8, num3, &Global_1652549);
								func_101(118, 8, num3, &Global_1652549);
								func_101(119, 8, num3, &Global_1652549);
								func_101(120, 8, num3, &Global_1652549);
								func_101(122, 8, num3, &Global_1652549);
							}
							break;
					}
					break;
			
				case 23:
					switch (uParam0->f_6)
					{
						case 0:
							if (!Global_1652549.f_1[0])
							{
								if (Global_262145.f_31062[0] != 0f)
									func_101(115, 8, num3, &Global_1652549);
							
								if (Global_262145.f_31062[6] != 0f)
									func_101(121, 8, num3, &Global_1652549);
							
								func_114(115, 8, num3, &Global_1652549);
							
								if (Global_262145.f_30988)
								{
									func_114(116, 8, num3, &Global_1652549);
									func_101(123, 8, num3, &Global_1652549);
									func_101(124, 8, num3, &Global_1652549);
									func_101(125, 8, num3, &Global_1652549);
									func_101(126, 8, num3, &Global_1652549);
								}
							
								func_101(127, 8, num3, &Global_1652549);
								func_101(128, 8, num3, &Global_1652549);
								func_101(129, 8, num3, &Global_1652549);
								func_101(130, 8, num3, &Global_1652549);
								func_101(131, 8, num3, &Global_1652549);
							}
							break;
					}
					break;
			
				case 24:
					switch (uParam0->f_6)
					{
						case 0:
							if (!Global_1652549.f_1[0])
							{
								func_101(132, 8, num3, &Global_1652549);
								func_101(133, 8, num3, &Global_1652549);
								func_101(134, 8, num3, &Global_1652549);
								func_101(140, 8, num3, &Global_1652549);
								func_101(135, 8, num3, &Global_1652549);
								func_101(141, 8, num3, &Global_1652549);
								func_101(136, 8, num3, &Global_1652549);
								func_101(142, 8, num3, &Global_1652549);
								func_114(117, 8, num3, &Global_1652549);
								func_114(118, 8, num3, &Global_1652549);
								func_101(137, 8, num3, &Global_1652549);
								func_101(138, 8, num3, &Global_1652549);
							}
							break;
					}
					break;
			
				case 25:
					switch (uParam0->f_6)
					{
						case 0:
							if (!Global_1652549.f_1[0])
							{
								func_101(139, 8, num3, &Global_1652549);
								func_114(119, 8, num3, &Global_1652549);
								func_101(143, 8, num3, &Global_1652549);
								func_101(144, 8, num3, &Global_1652549);
								func_101(145, 8, num3, &Global_1652549);
								func_101(146, 8, num3, &Global_1652549);
								func_114(120, 8, num3, &Global_1652549);
								func_101(147, 8, num3, &Global_1652549);
								func_101(148, 8, num3, &Global_1652549);
								func_114(121, 8, num3, &Global_1652549);
								func_101(149, 8, num3, &Global_1652549);
								func_101(150, 8, num3, &Global_1652549);
							}
							break;
					}
					break;
			
				case 26:
					switch (uParam0->f_6)
					{
						case 0:
							if (!Global_1652549.f_1[0])
							{
								func_114(122, 8, num3, &Global_1652549);
								func_101(151, 8, num3, &Global_1652549);
							
								if (*Global_262145.f_33910)
									func_114(123, 8, num3, &Global_1652549);
							
								if (*Global_262145.f_33911)
									func_114(124, 8, num3, &Global_1652549);
							
								if (*Global_262145.f_33912)
									func_114(125, 8, num3, &Global_1652549);
							
								if (*Global_262145.f_33913)
								{
									func_101(152, 8, num3, &Global_1652549);
									func_101(153, 8, num3, &Global_1652549);
									func_101(154, 8, num3, &Global_1652549);
									func_101(155, 8, num3, &Global_1652549);
								}
							
								if (func_123())
									func_114(126, 8, num3, &Global_1652549);
							
								if (*Global_262145.f_33913)
								{
									func_101(156, 8, num3, &Global_1652549);
									func_101(157, 8, num3, &Global_1652549);
								}
							}
							break;
					}
					break;
			
				case 27:
					switch (uParam0->f_6)
					{
						case 0:
							if (!Global_1652549.f_1[0])
							{
								if (*Global_262145.f_33914)
								{
									func_114(127, 8, num3, &Global_1652549);
									func_101(158, 8, num3, &Global_1652549);
								}
							}
							break;
					}
					break;
			}
		
			func_29(&Global_1652549, func_41(&Global_1652549));
			func_28(1, &Global_1653480);
			func_27(1, &Global_1653480);
			func_26(1, &Global_1653480);
			func_25(0, _("All Awards"), &Global_1653480);
			func_25(1, _("Victory"), &Global_1653480);
			func_25(2, _("General"), &Global_1653480);
			func_25(3, _("Crimes"), &Global_1653480);
			func_25(4, _("Vehicle"), &Global_1653480);
			func_25(5, _("Combat"), &Global_1653480);
			func_25(6, "HUD_AWDLIST13", &Global_1653480);
			func_25(7, _("The Doomsday Heist"), &Global_1653480);
			func_25(8, _("After Hours"), &Global_1653480);
			func_25(9, _("Arena War"), &Global_1653480);
			func_25(10, _("The Diamond Casino & Resort"), &Global_1653480);
			func_25(11, _("The Diamond Casino Heist"), &Global_1653480);
		
			if (Global_262145.f_29276)
				func_25(12, _("Los Santos Summer Special"), &Global_1653480);
		
			func_25(13, _("The Cayo Perico Heist"), &Global_1653480);
			func_25(14, _("Los Santos Tuners"), &Global_1653480);
			func_25(15, _("The Contract"), &Global_1653480);
			func_25(16, "DLC222AWDPAGE", &Global_1653480);
			func_25(17, _("Rewards"), &Global_1653480);
			func_16(&Global_1653480, func_24(&Global_1653480));
		}
	}

	return;
}

void func_16(var uParam0, int iParam1) // Hash - 0x629803E0 ^0x629803E0
{
	int i;
	int value;

	if (iParam1 == 1)
	{
		*uParam0 = 0;
		func_23(uParam0);
	}

	if (*uParam0 == 0)
	{
		value = uParam0->f_309[i];
	
		for (i = 0; i <= 17; i = i + 1)
		{
			if (uParam0->f_1[i] == 1)
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("SET_DATA_SLOT");
			
				if (uParam0->f_425 == 1)
					if (uParam0->f_426 == i)
						value = 0;
					else
						value = 4;
			
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(i);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(i);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_347[i]);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
			
				if (uParam0->f_424)
					func_22(&uParam0->f_20[i /*16*/]);
				else
					func_21(&uParam0->f_20[i /*16*/]);
			
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(value);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_328[i]);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_385[i]);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_404[i]);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(-1);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(-1);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(-1);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_366[i]);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
		
			*uParam0 = 1;
		}
	
		func_20(0);
	}

	func_17(uParam0, func_19(uParam0));
	return;
}

void func_17(var uParam0, int iParam1) // Hash - 0x95D8A620 ^0xC864362E
{
	if (iParam1 == 1)
	{
		uParam0->f_427 = 0;
		func_18(uParam0);
	}

	if (uParam0->f_427 == 0)
	{
		if (uParam0->f_426 != -1)
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("SET_COLUMN_HIGHLIGHT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_426);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			uParam0->f_426 = -1;
			uParam0->f_427 = 1;
		}
	}

	return;
}

void func_18(var uParam0) // Hash - 0xB7743C40 ^0xB7743C40
{
	uParam0->f_429 = 0;
	return;
}

int func_19(var uParam0) // Hash - 0x9BB76AD4 ^0x9BB76AD4
{
	return uParam0->f_429;
}

void func_20(int iParam0) // Hash - 0x9A867C6D ^0xFEB625BF
{
	if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("DISPLAY_DATA_SLOT"))
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam0);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}

	return;
}

void func_21(const char* sParam0) // Hash - 0x690E6520 ^0x509C71F3
{
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_PLAYER_NAME_STRING(sParam0);
	return;
}

void func_22(char* sParam0) // Hash - 0x8E2F5FE2 ^0x29D9D432
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	return;
}

void func_23(var uParam0) // Hash - 0xB7743C40 ^0xB7743C40
{
	uParam0->f_428 = 0;
	return;
}

int func_24(var uParam0) // Hash - 0x9BB76AD4 ^0x9BB76AD4
{
	return uParam0->f_428;
}

void func_25(int iParam0, char* sParam1, var uParam2) // Hash - 0x7F209A56 ^0x99AFF620
{
	TEXT_LABEL_ASSIGN_STRING(&uParam2->f_20[iParam0 /*16*/], sParam1, 64);
	uParam2->f_1[iParam0] = 1;
	return;
}

void func_26(int iParam0, var uParam1) // Hash - 0x5AAB1292 ^0x5AAB1292
{
	uParam1->f_425 = iParam0;
	return;
}

void func_27(int iParam0, var uParam1) // Hash - 0x5AAB1292 ^0x5AAB1292
{
	uParam1->f_423 = iParam0;
	return;
}

void func_28(int iParam0, var uParam1) // Hash - 0x5AAB1292 ^0x5AAB1292
{
	uParam1->f_424 = iParam0;
	return;
}

void func_29(var uParam0, int iParam1) // Hash - 0x66848661 ^0x66848661
{
	int i;
	int value;
	int value2;
	var labelName;

	if (iParam1 == 1)
	{
		*uParam0 = 0;
		func_1();
		func_40(uParam0);
	}

	if (*uParam0 == 0)
	{
		if (func_39(uParam0))
		{
			for (i = 0; i <= 11; i = i + 1)
			{
				value = -1;
				value = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(uParam0->f_221[i]) / SYSTEM::TO_FLOAT(uParam0->f_208[i])) * 100f);
				value = uParam0->f_441[i];
				value2 = -1;
			
				switch (uParam0->f_428[i])
				{
					case 107:
						value2 = 100;
						break;
				
					case 108:
						value2 = 200;
						break;
				
					case 109:
						value2 = 400;
						break;
				
					case 110:
						value2 = 800;
						break;
				}
			
				TEXT_LABEL_ASSIGN_STRING(&labelName, func_38(uParam0->f_428[i]), 32);
			
				if (uParam0->f_1[i] == 1)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(i);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(i);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
					func_22(&uParam0->f_14[i /*8*/]);
					func_22(&uParam0->f_111[i /*8*/]);
					func_21(&uParam0->f_331[i /*8*/]);
					func_21(&uParam0->f_234[i /*8*/]);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_428[i]);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(value);
				
					if (func_37(&labelName))
					{
						func_22(_("Progress"));
					}
					else
					{
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(_("~a~ Progress"));
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&labelName);
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					}
				
					if (uParam0->f_221[i] >= uParam0->f_208[i])
					{
						func_22(_("Completed"));
					}
					else
					{
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(_("~1~/~1~"));
						HUD::ADD_TEXT_COMPONENT_INTEGER(uParam0->f_221[i]);
						HUD::ADD_TEXT_COMPONENT_INTEGER(uParam0->f_208[i]);
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					}
				
					if (value2 >= 0)
					{
						func_22(_("Award"));
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(value2);
					}
				
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
			}
		
			func_20(1);
			*uParam0 = 1;
		}
	}

	func_33(uParam0, func_36(uParam0));
	func_30(uParam0, func_32(uParam0));
	return;
}

void func_30(var uParam0, int iParam1) // Hash - 0x525DF8A1 ^0xD0D0B8ED
{
	if (iParam1 == 1)
	{
		uParam0->f_458 = 0;
		func_31(uParam0);
	}

	if (uParam0->f_458 == 0)
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("SET_COLUMN_HIGHLIGHT");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_455);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		uParam0->f_455 = -1;
		uParam0->f_458 = 1;
	}

	return;
}

void func_31(var uParam0) // Hash - 0xB7743C40 ^0xB7743C40
{
	uParam0->f_462 = 0;
	return;
}

int func_32(var uParam0) // Hash - 0x9BB76AD4 ^0x9BB76AD4
{
	return uParam0->f_462;
}

void func_33(var uParam0, int iParam1) // Hash - 0x56C5C12A ^0xD4E51D10
{
	if (iParam1 == 1)
	{
		uParam0->f_459 = 0;
		func_35(uParam0);
	}

	if (uParam0->f_459 == 0)
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("SET_DESCRIPTION");
	
		if (uParam0->f_456 < 0)
		{
			func_22("");
			func_22("");
		}
		else if (uParam0->f_456 < 12)
		{
			func_22(&uParam0->f_14[uParam0->f_456 /*8*/]);
		
			if (uParam0->f_208[uParam0->f_456] > -1)
				func_34(&uParam0->f_111[uParam0->f_456 /*8*/], uParam0->f_208[uParam0->f_456]);
			else
				func_22(&uParam0->f_111[uParam0->f_456 /*8*/]);
		}
	
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		uParam0->f_456 = -1;
		uParam0->f_459 = 1;
	}

	return;
}

void func_34(const char* sParam0, int iParam1) // Hash - 0x6196CDAF ^0x684CCAE
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	return;
}

void func_35(var uParam0) // Hash - 0xB7743C40 ^0xB7743C40
{
	uParam0->f_463 = 0;
	return;
}

int func_36(var uParam0) // Hash - 0x9BB76AD4 ^0x9BB76AD4
{
	return uParam0->f_463;
}

BOOL func_37(const char* sParam0) // Hash - 0x45AA2165 ^0x8174C1DA
{
	if (MISC::IS_STRING_NULL(sParam0))
		return true;
	else if (MISC::ARE_STRINGS_EQUAL(sParam0, "") || MISC::ARE_STRINGS_EQUAL(sParam0, "0"))
		return true;

	return false;
}

char* func_38(int iParam0) // Hash - 0xCCAD7FDD ^0xA3A7622A
{
	switch (iParam0)
	{
		case 107:
			return _("Bronze");
	
		case 108:
			return _("Silver");
	
		case 109:
			return _("Gold");
	
		case 110:
			return _("Platinum");
	}

	return "";
}

BOOL func_39(var uParam0) // Hash - 0x7C63AA24 ^0xEACEB229
{
	int i;

	for (i = 0; i <= 11; i = i + 1)
	{
		if (uParam0->f_1[i] == 1)
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&uParam0->f_331[i /*8*/]))
			{
				GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(&uParam0->f_331[i /*8*/], false);
			
				if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED(&uParam0->f_331[i /*8*/]))
					return false;
			}
		}
	}

	return true;
}

void func_40(var uParam0) // Hash - 0xB7743C40 ^0xB7743C40
{
	uParam0->f_460 = 0;
	return;
}

int func_41(var uParam0) // Hash - 0x9BB76AD4 ^0x9BB76AD4
{
	return uParam0->f_460;
}

int func_42(int iParam0) // Hash - 0x6E84BF53 ^0x6E84BF53
{
	int num;

	if (Global_1945075[iParam0 /*8*/] == -1)
	{
		num = func_47(func_46(iParam0), -1, 0);
	
		if (num == -1)
		{
			func_43(iParam0, 0);
			num = 0;
		}
	
		Global_1945075[iParam0 /*8*/] = num;
	}

	return Global_1945075[iParam0 /*8*/];
}

void func_43(int iParam0, int iParam1) // Hash - 0xDD89DD4B ^0xDD89DD4B
{
	Global_1945075[iParam0 /*8*/] = iParam1;
	func_44(func_46(iParam0), iParam1, -1, true, false);
	return;
}

void func_44(int iParam0, int iParam1, int iParam2, BOOL bParam3, BOOL bParam4) // Hash - 0x7D768555 ^0x693A841
{
	Hash statName;

	bParam4;
	statName = Global_2805027[iParam0 /*3*/][func_45(iParam2)];

	if (statName != 0)
		STATS::STAT_SET_INT(statName, iParam1, bParam3);

	return;
}

int func_45(int iParam0) // Hash - 0x1A3F3220 ^0x1A3F3220
{
	int num;
	int num2;

	num = iParam0;

	if (num == -1)
	{
		num2 = func_7();
	
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

int func_46(int iParam0) // Hash - 0x334ABCD8 ^0x2EF9017C
{
	switch (iParam0)
	{
		case 0:
			return 12386;
	
		default:
		
	}

	return 12386;
}

int func_47(int iParam0, int iParam1, int iParam2) // Hash - 0x4BC84F7B ^0x370D7D6F
{
	Hash statHash;
	int outValue;

	if (iParam0 != 14192)
	{
		iParam2 == 0;
		statHash = Global_2805027[iParam0 /*3*/][func_45(iParam1)];
	
		if (STATS::STAT_GET_INT(statHash, &outValue, -1))
			return outValue;
	}

	return 0;
}

int func_48(int iParam0, int iParam1) // Hash - 0x1FBC7704 ^0x9A311F48
{
	Hash statHash;
	int outValue;

	statHash = Global_2850192[iParam0 /*3*/][func_45(iParam1)];

	if (STATS::STAT_GET_INT(statHash, &outValue, -1))
		return outValue;

	return 0;
}

int func_49(int iParam0, int iParam1, int iParam2) // Hash - 0x80259D9F ^0x80259D9F
{
	iParam2 == 0;

	switch (iParam0)
	{
		case 53:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 10;
			
				case 4:
					return 15;
			
				case 5:
					return 25;
			
				default:
					break;
			}
			break;
	
		case 39:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 10;
			
				case 4:
					return 15;
			
				case 5:
					return 25;
			
				default:
					break;
			}
			break;
	
		case 51:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 10;
			
				case 4:
					return 15;
			
				case 5:
					return 25;
			
				default:
					break;
			}
			break;
	
		case 52:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 10;
			
				case 4:
					return 15;
			
				case 5:
					return 25;
			
				default:
					break;
			}
			break;
	
		case 60:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 10;
			
				case 3:
					return 30;
			
				case 4:
					return 60;
			
				case 5:
					return 120;
			
				default:
					break;
			}
			break;
	
		case 61:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 10;
			
				case 4:
					return 20;
			
				case 5:
					return 30;
			
				default:
					break;
			}
			break;
	
		case 62:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 2;
			
				case 3:
					return 3;
			
				case 4:
					return 4;
			
				case 5:
					return 5;
			
				default:
					break;
			}
			break;
	
		case 63:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 2;
			
				case 3:
					return 3;
			
				case 4:
					return 4;
			
				case 5:
					return 5;
			
				default:
					break;
			}
			break;
	
		case 16:
			switch (iParam1)
			{
				case 0:
					return 0;
			
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
			
				default:
					break;
			}
			break;
	
		case 0:
			switch (iParam1)
			{
				case 0:
					return 0;
			
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
			
				default:
					break;
			}
			break;
	
		case 12:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 10;
			
				case 3:
					return 25;
			
				case 4:
					return 50;
			
				case 5:
					return 100;
			
				default:
					break;
			}
			break;
	
		case 11:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 10;
			
				case 3:
					return 100;
			
				case 4:
					return 200;
			
				case 5:
					return 500;
			
				default:
					break;
			}
			break;
	
		case 19:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 10;
			
				case 4:
					return 25;
			
				case 5:
					return 50;
			
				default:
					break;
			}
			break;
	
		case 15:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 10;
			
				case 4:
					return 15;
			
				case 5:
					return 25;
			
				default:
					break;
			}
			break;
	
		case 17:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 10;
			
				case 4:
					return 15;
			
				case 5:
					return 25;
			
				default:
					break;
			}
			break;
	
		case 21:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 10;
			
				case 4:
					return 25;
			
				case 5:
					return 50;
			
				default:
					break;
			}
			break;
	
		case 14:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 10;
			
				case 4:
					return 15;
			
				case 5:
					return 20;
			
				default:
					break;
			}
			break;
	
		case 1:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 10;
			
				case 3:
					return 100;
			
				case 4:
					return 200;
			
				case 5:
					return 500;
			
				default:
					break;
			}
			break;
	
		case 2:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 10;
			
				case 3:
					return 25;
			
				case 4:
					return 50;
			
				case 5:
					return 100;
			
				default:
					break;
			}
			break;
	
		case 3:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 10;
			
				case 4:
					return 25;
			
				case 5:
					return 50;
			
				default:
					break;
			}
			break;
	
		case 4:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 10;
			
				case 3:
					return 100;
			
				case 4:
					return 200;
			
				case 5:
					return 500;
			
				default:
					break;
			}
			break;
	
		case 5:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 10;
			
				case 3:
					return 100;
			
				case 4:
					return 200;
			
				case 5:
					return 500;
			
				default:
					break;
			}
			break;
	
		case 6:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 10;
			
				case 4:
					return 25;
			
				case 5:
					return 50;
			
				default:
					break;
			}
			break;
	
		case 7:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 10;
			
				case 4:
					return 25;
			
				case 5:
					return 50;
			
				default:
					break;
			}
			break;
	
		case 8:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 10;
			
				case 4:
					return 25;
			
				case 5:
					return 50;
			
				default:
					break;
			}
			break;
	
		case 9:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 10;
			
				case 3:
					return 100;
			
				case 4:
					return 200;
			
				case 5:
					return 500;
			
				default:
					break;
			}
			break;
	
		case 10:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 10;
			
				case 3:
					return 100;
			
				case 4:
					return 200;
			
				case 5:
					return 500;
			
				default:
					break;
			}
			break;
	
		case 20:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 10;
			
				case 4:
					return 15;
			
				case 5:
					return 25;
			
				default:
					break;
			}
			break;
	
		case 22:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 10;
			
				case 4:
					return 15;
			
				case 5:
					return 25;
			
				default:
					break;
			}
			break;
	
		case 23:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 10;
			
				case 4:
					return 15;
			
				case 5:
					return 25;
			
				default:
					break;
			}
			break;
	
		case 24:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 10;
			
				case 4:
					return 15;
			
				case 5:
					return 25;
			
				default:
					break;
			}
			break;
	
		case 25:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 10;
			
				case 3:
					return 100;
			
				case 4:
					return 200;
			
				case 5:
					return 500;
			
				default:
					break;
			}
			break;
	
		case 26:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 10;
			
				case 3:
					return 100;
			
				case 4:
					return 200;
			
				case 5:
					return 500;
			
				default:
					break;
			}
			break;
	
		case 27:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 10;
			
				case 4:
					return 15;
			
				case 5:
					return 25;
			
				default:
					break;
			}
			break;
	
		case 28:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 10;
			
				case 4:
					return 15;
			
				case 5:
					return 25;
			
				default:
					break;
			}
			break;
	
		case 29:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 10;
			
				case 4:
					return 15;
			
				case 5:
					return 25;
			
				default:
					break;
			}
			break;
	
		case 30:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 10;
			
				case 4:
					return 15;
			
				case 5:
					return 25;
			
				default:
					break;
			}
			break;
	
		case 31:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 10;
			
				case 4:
					return 15;
			
				case 5:
					return 25;
			
				default:
					break;
			}
			break;
	
		case 32:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 10;
			
				case 4:
					return 15;
			
				case 5:
					return 25;
			
				default:
					break;
			}
			break;
	
		case 33:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 10;
			
				case 4:
					return 15;
			
				case 5:
					return 25;
			
				default:
					break;
			}
			break;
	
		case 34:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 10;
			
				case 4:
					return 15;
			
				case 5:
					return 25;
			
				default:
					break;
			}
			break;
	
		case 35:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 10;
			
				case 4:
					return 15;
			
				case 5:
					return 25;
			
				default:
					break;
			}
			break;
	
		case 36:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 10;
			
				case 4:
					return 15;
			
				case 5:
					return 25;
			
				default:
					break;
			}
			break;
	
		case 37:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 10;
			
				case 4:
					return 25;
			
				case 5:
					return 50;
			
				default:
					break;
			}
			break;
	
		case 38:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 10;
			
				case 4:
					return 15;
			
				case 5:
					return 25;
			
				default:
					break;
			}
			break;
	
		case 40:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 10;
			
				case 4:
					return 25;
			
				case 5:
					return 50;
			
				default:
					break;
			}
			break;
	
		case 41:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 10;
			
				case 4:
					return 25;
			
				case 5:
					return 50;
			
				default:
					break;
			}
			break;
	
		case 42:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 10;
			
				case 4:
					return 25;
			
				case 5:
					return 50;
			
				default:
					break;
			}
			break;
	
		case 43:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 10;
			
				case 3:
					return 25;
			
				case 4:
					return 50;
			
				case 5:
					return 100;
			
				default:
					break;
			}
			break;
	
		case 44:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 10;
			
				case 3:
					return 100;
			
				case 4:
					return 200;
			
				case 5:
					return 500;
			
				default:
					break;
			}
			break;
	
		case 45:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 10;
			
				case 4:
					return 25;
			
				case 5:
					return 50;
			
				default:
					break;
			}
			break;
	
		case 47:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 10;
			
				case 4:
					return 15;
			
				case 5:
					return 25;
			
				default:
					break;
			}
			break;
	
		case 49:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 1000;
			
				case 3:
					return 10000;
			
				case 4:
					return 25000;
			
				case 5:
					return 50000;
			
				default:
					break;
			}
			break;
	
		case 48:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 3;
			
				case 3:
					return 5;
			
				case 4:
					return 7;
			
				case 5:
					return 10;
			
				default:
					break;
			}
			break;
	
		case 54:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 10;
			
				case 4:
					return 15;
			
				case 5:
					return 25;
			
				default:
					break;
			}
			break;
	
		case 55:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 10;
			
				case 4:
					return 15;
			
				case 5:
					return 25;
			
				default:
					break;
			}
			break;
	
		case 56:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 10;
			
				case 3:
					return 250;
			
				case 4:
					return 500;
			
				case 5:
					return 1000;
			
				default:
					break;
			}
			break;
	
		case 57:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 10;
			
				case 4:
					return 15;
			
				case 5:
					return 25;
			
				default:
					break;
			}
			break;
	
		case 58:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 10;
			
				case 4:
					return 15;
			
				case 5:
					return 25;
			
				default:
					break;
			}
			break;
	
		case 59:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 10;
			
				case 4:
					return 25;
			
				case 5:
					return 50;
			
				default:
					break;
			}
			break;
	
		case 46:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 10;
			
				case 4:
					return 25;
			
				case 5:
					return 50;
			
				default:
					break;
			}
			break;
	
		case 134:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 10;
			
				case 4:
					return 25;
			
				case 5:
					return 50;
			
				default:
					break;
			}
			break;
	
		case 135:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 10;
			
				case 3:
					return 25;
			
				case 4:
					return 50;
			
				case 5:
					return 100;
			
				default:
					break;
			}
			break;
	
		case 136:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 10;
			
				case 3:
					return 25;
			
				case 4:
					return 50;
			
				case 5:
					return 100;
			
				default:
					break;
			}
			break;
	
		case 137:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 10;
			
				case 3:
					return 25;
			
				case 4:
					return 50;
			
				case 5:
					return 100;
			
				default:
					break;
			}
			break;
	
		case 138:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 10;
			
				case 4:
					return 15;
			
				case 5:
					return 25;
			
				default:
					break;
			}
			break;
	
		case 128:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 10;
			
				case 4:
					return 25;
			
				case 5:
					return 50;
			
				default:
					break;
			}
			break;
	
		case 129:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 10;
			
				case 4:
					return 25;
			
				case 5:
					return 50;
			
				default:
					break;
			}
			break;
	
		case 130:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 10;
			
				case 4:
					return 15;
			
				case 5:
					return 25;
			
				default:
					break;
			}
			break;
	
		case 131:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 10;
			
				case 4:
					return 15;
			
				case 5:
					return 25;
			
				default:
					break;
			}
			break;
	
		case 132:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 10;
			
				case 4:
					return 15;
			
				case 5:
					return 25;
			
				default:
					break;
			}
			break;
	
		case 133:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 10;
			
				case 4:
					return 15;
			
				case 5:
					return 25;
			
				default:
					break;
			}
			break;
	
		case 139:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 10;
			
				case 3:
					return 25;
			
				case 4:
					return 50;
			
				case 5:
					return 100;
			
				default:
					break;
			}
			break;
	
		case 140:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 10;
			
				case 4:
					return 15;
			
				case 5:
					return 25;
			
				default:
					break;
			}
			break;
	
		case 141:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 10;
			
				case 3:
					return 25;
			
				case 4:
					return 50;
			
				case 5:
					return 100;
			
				default:
					break;
			}
			break;
	
		case 142:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 10;
			
				case 4:
					return 25;
			
				case 5:
					return 50;
			
				default:
					break;
			}
			break;
	
		case 143:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 10;
			
				case 4:
					return 25;
			
				case 5:
					return 50;
			
				default:
					break;
			}
			break;
	
		case 144:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 10;
			
				case 4:
					return 25;
			
				case 5:
					return 50;
			
				default:
					break;
			}
			break;
	
		case 145:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 10;
			
				case 4:
					return 15;
			
				case 5:
					return 25;
			
				default:
					break;
			}
			break;
	
		case 146:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 10;
			
				case 4:
					return 15;
			
				case 5:
					return 25;
			
				default:
					break;
			}
			break;
	
		case 67:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 10;
			
				case 3:
					return 25;
			
				case 4:
					return 50;
			
				case 5:
					return 100;
			
				default:
					break;
			}
			break;
	
		case 147:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return Global_262145.f_25307;
			
				case 3:
					return Global_262145.f_25308;
			
				case 4:
					return Global_262145.f_25309;
			
				case 5:
					return Global_262145.f_25310;
			
				default:
					break;
			}
			break;
	
		case 148:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return Global_262145.f_25307;
			
				case 3:
					return Global_262145.f_25308;
			
				case 4:
					return Global_262145.f_25309;
			
				case 5:
					return Global_262145.f_25310;
			
				default:
					break;
			}
			break;
	
		case 149:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return Global_262145.f_25307;
			
				case 3:
					return Global_262145.f_25308;
			
				case 4:
					return Global_262145.f_25309;
			
				case 5:
					return Global_262145.f_25310;
			
				default:
					break;
			}
			break;
	
		case 150:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return Global_262145.f_25307;
			
				case 3:
					return Global_262145.f_25308;
			
				case 4:
					return Global_262145.f_25309;
			
				case 5:
					return Global_262145.f_25310;
			
				default:
					break;
			}
			break;
	
		case 151:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 25;
			
				case 4:
					return 50;
			
				case 5:
					return 100;
			
				default:
					break;
			}
			break;
	
		case 70:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 1;
			
				case 3:
					return 3;
			
				case 4:
					return 5;
			
				case 5:
					return 10;
			
				default:
					break;
			}
			break;
	
		case 71:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 1;
			
				case 3:
					return 3;
			
				case 4:
					return 5;
			
				case 5:
					return 10;
			
				default:
					break;
			}
			break;
	
		case 72:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 10;
			
				case 4:
					return 25;
			
				case 5:
					return 50;
			
				default:
					break;
			}
			break;
	
		case 73:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 10;
			
				case 4:
					return 25;
			
				case 5:
					return 50;
			
				default:
					break;
			}
			break;
	
		case 74:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 10;
			
				case 4:
					return 25;
			
				case 5:
					return 50;
			
				default:
					break;
			}
			break;
	
		case 75:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 1;
			
				case 3:
					return 3;
			
				case 4:
					return 5;
			
				case 5:
					return 10;
			
				default:
					break;
			}
			break;
	
		case 76:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 1;
			
				case 3:
					return 3;
			
				case 4:
					return 5;
			
				case 5:
					return 10;
			
				default:
					break;
			}
			break;
	
		case 77:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 1;
			
				case 3:
					return 3;
			
				case 4:
					return 5;
			
				case 5:
					return 10;
			
				default:
					break;
			}
			break;
	
		case 78:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 10;
			
				case 4:
					return 25;
			
				case 5:
					return 50;
			
				default:
					break;
			}
			break;
	
		case 79:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 10;
			
				case 4:
					return 25;
			
				case 5:
					return 50;
			
				default:
					break;
			}
			break;
	
		case 80:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 10;
			
				case 4:
					return 25;
			
				case 5:
					return 50;
			
				default:
					break;
			}
			break;
	
		case 81:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 10;
			
				case 3:
					return 25;
			
				case 4:
					return 50;
			
				case 5:
					return 100;
			
				default:
					break;
			}
			break;
	
		case 82:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 10;
			
				case 3:
					return 20;
			
				case 4:
					return 30;
			
				case 5:
					return 50;
			
				default:
					break;
			}
			break;
	
		case 83:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 100000;
			
				case 3:
					return 250000;
			
				case 4:
					return 500000;
			
				case 5:
					return 1000000;
			
				default:
					break;
			}
			break;
	
		case 84:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 10;
			
				case 3:
					return 25;
			
				case 4:
					return 50;
			
				case 5:
					return 100;
			
				default:
					break;
			}
			break;
	
		case 85:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 1000;
			
				case 3:
					return 3000;
			
				case 4:
					return 15000;
			
				case 5:
					return 55000;
			
				default:
					break;
			}
			break;
	
		case 86:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 10;
			
				case 3:
					return 25;
			
				case 4:
					return 50;
			
				case 5:
					return 100;
			
				default:
					break;
			}
			break;
	
		case 87:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 10;
			
				case 4:
					return 25;
			
				case 5:
					return 50;
			
				default:
					break;
			}
			break;
	
		case 88:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 10;
			
				case 4:
					return 20;
			
				case 5:
					return 40;
			
				default:
					break;
			}
			break;
	
		case 89:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 10;
			
				case 4:
					return 15;
			
				case 5:
					return 20;
			
				default:
					break;
			}
			break;
	
		case 90:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 25000;
			
				case 3:
					return 50000;
			
				case 4:
					return 75000;
			
				case 5:
					return 100000;
			
				default:
					break;
			}
			break;
	
		case 91:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 10;
			
				case 3:
					return 20;
			
				case 4:
					return 30;
			
				case 5:
					return 40;
			
				default:
					break;
			}
			break;
	
		case 92:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return Global_262145.f_28684;
			
				case 3:
					return Global_262145.f_28685;
			
				case 4:
					return Global_262145.f_28686;
			
				case 5:
					return Global_262145.f_28687;
			
				default:
					break;
			}
			break;
	
		case 93:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return Global_262145.f_28851;
			
				case 3:
					return Global_262145.f_28852;
			
				case 4:
					return Global_262145.f_28853;
			
				case 5:
					return Global_262145.f_28854;
			
				default:
					break;
			}
			break;
	
		case 94:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return Global_262145.f_28885;
			
				case 3:
					return Global_262145.f_28886;
			
				case 4:
					return Global_262145.f_28887;
			
				case 5:
					return Global_262145.f_28888;
			
				default:
					break;
			}
			break;
	
		case 95:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return Global_262145.f_28889;
			
				case 3:
					return Global_262145.f_28890;
			
				case 4:
					return Global_262145.f_28891;
			
				case 5:
					return Global_262145.f_28892;
			
				default:
					break;
			}
			break;
	
		case 96:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return Global_262145.f_28580;
			
				case 3:
					return Global_262145.f_28581;
			
				case 4:
					return Global_262145.f_28582;
			
				case 5:
					return Global_262145.f_28583;
			
				default:
					break;
			}
			break;
	
		case 97:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return Global_262145.f_28855;
			
				case 3:
					return Global_262145.f_28856;
			
				case 4:
					return Global_262145.f_28857;
			
				case 5:
					return Global_262145.f_28858;
			
				default:
					break;
			}
			break;
	
		case 99:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 15;
			
				case 4:
					return 30;
			
				case 5:
					return 60;
			
				default:
					break;
			}
			break;
	
		case 100:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 10;
			
				case 4:
					return 20;
			
				case 5:
					return 50;
			
				default:
					break;
			}
			break;
	
		case 101:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 50000;
			
				case 3:
					return 250000;
			
				case 4:
					return 750000;
			
				case 5:
					return 1000000;
			
				default:
					break;
			}
			break;
	
		case 102:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 15;
			
				case 4:
					return 30;
			
				case 5:
					return 60;
			
				default:
					break;
			}
			break;
	
		case 103:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 15;
			
				case 4:
					return 30;
			
				case 5:
					return 60;
			
				default:
					break;
			}
			break;
	
		case 104:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 15;
			
				case 4:
					return 30;
			
				case 5:
					return 60;
			
				default:
					break;
			}
			break;
	
		case 105:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 1000000;
			
				case 3:
					return 5000000;
			
				case 4:
					return 10000000;
			
				case 5:
					return 20000000;
			
				default:
					break;
			}
			break;
	
		case 106:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 10;
			
				case 4:
					return 20;
			
				case 5:
					return 50;
			
				default:
					break;
			}
			break;
	
		case 107:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 25;
			
				case 4:
					return 50;
			
				case 5:
					return 100;
			
				default:
					break;
			}
			break;
	
		case 108:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 10;
			
				case 4:
					return 25;
			
				case 5:
					return 50;
			
				default:
					break;
			}
			break;
	
		case 109:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 10;
			
				case 4:
					return 25;
			
				case 5:
					return 50;
			
				default:
					break;
			}
			break;
	
		case 110:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 10;
			
				case 4:
					return 25;
			
				case 5:
					return 50;
			
				default:
					break;
			}
			break;
	
		case 112:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 10;
			
				case 4:
					return 25;
			
				case 5:
					return 50;
			
				default:
					break;
			}
			break;
	
		case 114:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 10;
			
				case 4:
					return 20;
			
				case 5:
					return 40;
			
				default:
					break;
			}
			break;
	
		case 115:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 25;
			
				case 4:
					return 50;
			
				case 5:
					return 100;
			
				default:
					break;
			}
			break;
	
		case 116:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 10;
			
				case 4:
					return 20;
			
				case 5:
					return 30;
			
				default:
					break;
			}
			break;
	
		case 111:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 30;
			
				case 3:
					return 60;
			
				case 4:
					return 120;
			
				case 5:
					return 240;
			
				default:
					break;
			}
			break;
	
		case 113:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 10;
			
				case 3:
					return 25;
			
				case 4:
					return 50;
			
				case 5:
					return 100;
			
				default:
					break;
			}
			break;
	
		case 117:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 15;
			
				case 4:
					return 25;
			
				case 5:
					return 50;
			
				default:
					break;
			}
			break;
	
		case 118:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 15;
			
				case 4:
					return 25;
			
				case 5:
					return 50;
			
				default:
					break;
			}
			break;
	
		case 119:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 15;
			
				case 4:
					return 30;
			
				case 5:
					return 60;
			
				default:
					break;
			}
			break;
	
		case 120:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 1;
			
				case 3:
					return 2;
			
				case 4:
					return 3;
			
				case 5:
					return 5;
			
				default:
					break;
			}
			break;
	
		case 121:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 10;
			
				case 4:
					return 20;
			
				case 5:
					return 50;
			
				default:
					break;
			}
			break;
	
		case 122:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 10;
			
				case 4:
					return 20;
			
				case 5:
					return 50;
			
				default:
					break;
			}
			break;
	
		case 123:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 10;
			
				case 4:
					return 20;
			
				case 5:
					return 50;
			
				default:
					break;
			}
			break;
	
		case 124:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 10;
			
				case 4:
					return 20;
			
				case 5:
					return 50;
			
				default:
					break;
			}
			break;
	
		case 125:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 1;
			
				case 3:
					return 2;
			
				case 4:
					return 3;
			
				case 5:
					return 5;
			
				default:
					break;
			}
			break;
	
		case 126:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 15;
			
				case 4:
					return 30;
			
				case 5:
					return 60;
			
				default:
					break;
			}
			break;
	
		case 127:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 10;
			
				case 4:
					return 20;
			
				case 5:
					return 50;
			
				default:
					break;
			}
			break;
	}

	return 999;
}

BOOL func_50(int iParam0) // Hash - 0x2F462566 ^0xE730EBB9
{
	BOOL flag;

	flag = func_58(386, -1) == 0;

	if (flag)
		if (func_51(func_56(func_57(iParam0, flag), 3), -1))
			return true;
		else
			return false;

	if (func_51(func_56(func_57(iParam0, flag), 4), -1))
		return true;

	return false;
}

BOOL func_51(int iParam0, int iParam1) // Hash - 0x75CF6A28 ^0xC5FFA2E7
{
	int num;
	int num2;

	if (func_54(iParam0) == 14192)
		return false;

	num = func_53(iParam0, iParam1);
	num2 = iParam0;
	return IS_BIT_SET(num, func_52(num2));
}

int func_52(int iParam0) // Hash - 0x9042BAD4 ^0x9042BAD4
{
	return iParam0 % 32;
}

int func_53(int iParam0, int iParam1) // Hash - 0xA7B129CF ^0xA7B129CF
{
	int num;

	num = func_47(func_54(iParam0), iParam1, 0);
	return num;
}

int func_54(int iParam0) // Hash - 0xF08C5B2E ^0xA4BC8B65
{
	int num;
	int num2;

	num = iParam0;
	num2 = func_55(num);

	if (func_9() == 0 || func_8() == 0 || func_9() == 999 && func_8() == 999)
	{
		switch (num2)
		{
			case 0:
				return 1039;
		
			case 1:
				return 1040;
		
			case 2:
				return 1041;
		
			case 3:
				return 1042;
		
			case 4:
				return 1043;
		
			case 5:
				return 1503;
		
			case 6:
				return 1758;
		
			case 7:
				return 1952;
		
			case 8:
				return 1953;
		
			case 9:
				return 1954;
		
			case 10:
				return 1955;
		
			case 11:
				return 1956;
		
			case 12:
				return 1957;
		
			case 13:
				return 2424;
		
			case 14:
				return 2444;
		
			case 15:
				return 2447;
		
			case 16:
				return 2450;
		
			case 17:
				return 2614;
		
			case 18:
				return 2617;
		
			case 19:
				return 2620;
		
			case 20:
				return 3786;
		
			case 21:
				return 3789;
		
			case 22:
				return 3864;
		
			case 23:
				return 3867;
		
			case 24:
				return 3870;
		
			case 25:
				return 3873;
		
			case 26:
				return 5364;
		
			case 27:
				return 5367;
		
			case 28:
				return 5469;
		
			case 29:
				return 5472;
		
			case 30:
				return 6431;
		
			case 31:
				return 6434;
		
			case 32:
				return 7255;
		
			case 33:
				return 7258;
		
			case 34:
				return 7261;
		
			case 35:
				return 7970;
		
			case 36:
				return 7973;
		
			case 37:
				return 7976;
		
			case 38:
				return 7979;
		
			case 39:
				return 8501;
		
			case 40:
				return 8504;
		
			case 41:
				return 8507;
		
			case 42:
				return 8510;
		
			case 43:
				return 8906;
		
			case 44:
				return 8909;
		
			case 45:
				return 8912;
		
			case 46:
				return 10287;
		
			case 47:
				return 10290;
		
			case 48:
				return 10413;
		
			case 49:
				return 10416;
		
			case 50:
				return 11824;
		
			case 51:
				return 11827;
		}
	}

	return 14192;
}

int func_55(int iParam0) // Hash - 0x195EBE32 ^0x195EBE32
{
	return iParam0 / 32;
}

int func_56(int iParam0, Hash hParam1) // Hash - 0xF58FDC97 ^0x803B7A87
{
	int tattooShopDlcItemIndex;

	tattooShopDlcItemIndex = FILES::GET_TATTOO_SHOP_DLC_ITEM_INDEX(hParam1, -1, iParam0);

	if (tattooShopDlcItemIndex != -1)
		return 129 + tattooShopDlcItemIndex;

	return -1;
}

int func_57(int iParam0, BOOL bParam1) // Hash - 0xEB464A98 ^0x46B2B9C2
{
	switch (iParam0)
	{
		case 0:
			if (bParam1)
				return joaat("MP_AWARD_M_TSHIRT_004");
			else
				return joaat("MP_AWARD_F_TSHIRT_004");
			break;
	
		case 1:
			if (bParam1)
				return joaat("MP_AWARD_M_TSHIRT_005");
			else
				return joaat("MP_AWARD_F_TSHIRT_005");
			break;
	
		case 2:
			if (bParam1)
				return joaat("MP_AWARD_M_TSHIRT_006");
			else
				return joaat("MP_AWARD_F_TSHIRT_006");
			break;
	
		case 3:
			if (bParam1)
				return joaat("MP_AWARD_M_TSHIRT_007");
			else
				return joaat("MP_AWARD_F_TSHIRT_007");
			break;
	
		case 4:
			if (bParam1)
				return joaat("MP_AWARD_M_TSHIRT_008");
			else
				return joaat("MP_AWARD_F_TSHIRT_008");
			break;
	
		case 5:
			if (bParam1)
				return joaat("MP_AWARD_M_TSHIRT_009");
			else
				return joaat("MP_AWARD_F_TSHIRT_009");
			break;
	
		case 6:
			if (bParam1)
				return joaat("MP_AWARD_M_TSHIRT_010");
			else
				return joaat("MP_AWARD_F_TSHIRT_010");
			break;
	
		case 7:
			if (bParam1)
				return joaat("MP_AWARD_M_TSHIRT_011");
			else
				return joaat("MP_AWARD_F_TSHIRT_011");
			break;
	
		case 8:
			if (bParam1)
				return joaat("MP_AWARD_M_TSHIRT_012");
			else
				return joaat("MP_AWARD_F_TSHIRT_012");
			break;
	
		case 9:
			if (bParam1)
				return joaat("MP_AWARD_M_TSHIRT_013");
			else
				return joaat("MP_AWARD_F_TSHIRT_013");
			break;
	
		case 10:
			if (bParam1)
				return joaat("FM_HIP_M_RETRO_000");
			else
				return joaat("FM_HIP_F_RETRO_000");
			break;
	
		case 11:
			if (bParam1)
				return joaat("FM_HIP_M_RETRO_001");
			else
				return joaat("FM_HIP_F_RETRO_001");
			break;
	
		case 12:
			if (bParam1)
				return joaat("FM_HIP_M_RETRO_002");
			else
				return joaat("FM_HIP_F_RETRO_002");
			break;
	
		case 13:
			if (bParam1)
				return joaat("FM_HIP_M_RETRO_003");
			else
				return joaat("FM_HIP_F_RETRO_003");
			break;
	
		case 14:
			if (bParam1)
				return joaat("FM_HIP_M_RETRO_004");
			else
				return joaat("FM_HIP_F_RETRO_004");
			break;
	
		case 15:
			if (bParam1)
				return joaat("FM_HIP_M_RETRO_005");
			else
				return joaat("FM_HIP_F_RETRO_005");
			break;
	
		case 16:
			if (bParam1)
				return joaat("FM_HIP_M_RETRO_006");
			else
				return joaat("FM_HIP_F_RETRO_006");
			break;
	
		case 17:
			if (bParam1)
				return joaat("FM_HIP_M_RETRO_007");
			else
				return joaat("FM_HIP_F_RETRO_007");
			break;
	
		case 18:
			if (bParam1)
				return joaat("FM_HIP_M_RETRO_008");
			else
				return joaat("FM_HIP_F_RETRO_008");
			break;
	
		case 19:
			if (bParam1)
				return joaat("FM_HIP_M_RETRO_009");
			else
				return joaat("FM_HIP_F_RETRO_009");
			break;
	
		case 20:
			if (bParam1)
				return joaat("FM_HIP_M_RETRO_010");
			else
				return joaat("FM_HIP_F_RETRO_010");
			break;
	
		case 21:
			if (bParam1)
				return joaat("FM_HIP_M_RETRO_011");
			else
				return joaat("FM_HIP_F_RETRO_011");
			break;
	
		case 22:
			if (bParam1)
				return joaat("FM_HIP_M_RETRO_012");
			else
				return joaat("FM_HIP_F_RETRO_012");
			break;
	
		case 23:
			if (bParam1)
				return joaat("FM_HIP_M_RETRO_013");
			else
				return joaat("FM_HIP_F_RETRO_013");
			break;
	
		case 24:
			if (bParam1)
				return joaat("FM_RSTAR_M_TSHIRT_000");
			else
				return joaat("FM_RSTAR_F_TSHIRT_000");
			break;
	
		case 25:
			if (bParam1)
				return joaat("FM_RSTAR_M_TSHIRT_001");
			else
				return joaat("FM_RSTAR_F_TSHIRT_001");
			break;
	
		case 26:
			if (bParam1)
				return joaat("FM_RSTAR_M_TSHIRT_002");
			else
				return joaat("FM_RSTAR_F_TSHIRT_002");
			break;
	
		case 27:
			if (bParam1)
				return joaat("FM_IND_M_AWARD_000");
			else
				return joaat("FM_IND_F_AWARD_000");
			break;
	
		case 28:
			if (bParam1)
				return joaat("MP_FLI_M_TSHIRT_000");
			else
				return joaat("MP_FLI_F_TSHIRT_000");
			break;
	
		case 29:
			if (bParam1)
				return joaat("FM_LTS_M_TSHIRT_000");
			else
				return joaat("FM_LTS_F_TSHIRT_000");
			break;
	
		case 30:
			if (bParam1)
				return joaat("MP_FM_OGA_000_M");
			else
				return joaat("MP_FM_OGA_000_F");
			break;
	
		case 31:
			if (bParam1)
				return joaat("MP_FM_OGA_001_M");
			else
				return joaat("MP_FM_OGA_001_F");
			break;
	
		case 32:
			if (bParam1)
				return joaat("MP_FM_OGA_002_M");
			else
				return joaat("MP_FM_OGA_002_F");
			break;
	
		case 33:
			if (bParam1)
				return joaat("MP_FM_OGA_003_M");
			else
				return joaat("MP_FM_OGA_003_F");
			break;
	
		case 34:
			if (bParam1)
				return joaat("MP_ELITE_M_TSHIRT");
			else
				return joaat("MP_ELITE_F_TSHIRT");
			break;
	
		case 35:
			if (bParam1)
				return joaat("MP_ELITE_M_TSHIRT_1");
			else
				return joaat("MP_ELITE_F_TSHIRT_1");
			break;
	}

	return 0;
}

int func_58(int iParam0, int iParam1) // Hash - 0x6099A833 ^0x79D555BB
{
	if (iParam1 == -1)
		iParam1 = func_7();

	return STATS::GET_PACKED_STAT_INT_CODE(iParam0, iParam1);
}

void func_59(int iParam0) // Hash - 0x82D00033 ^0xAAFBF321
{
	char* str;
	char* str2;
	char* str3;
	char* str4;
	int num;
	int num2;
	int num3;
	int num4;
	int num5;

	switch (iParam0)
	{
		case 0:
			str = "CLO_HST_A_0";
			str2 = "CLO_HST_AD_0";
			str3 = "DeathDefying";
			str4 = "MPTShirtAwards2";
			num = 138;
			break;
	
		case 1:
			str = "CLO_HST_A_1";
			str2 = "CLO_HST_AD_1";
			str3 = "ForHire";
			str4 = "MPTShirtAwards2";
			num = 130;
			break;
	
		case 2:
			str = "CLO_HST_A_2";
			str2 = "CLO_HST_AD_3";
			str3 = "LiveALittle";
			str4 = "MPTShirtAwards2";
			num = 136;
			break;
	
		case 5:
			str = "CLO_HST_A_5";
			str2 = "CLO_HST_AD_6";
			str3 = "Decorated";
			str4 = "MPTShirtAwards2";
			num = 133;
			break;
	
		case 7:
			str = "CLO_HST_A_7";
			str2 = "CLO_HST_AD_8";
			str3 = "OneManArmy";
			str4 = "MPTShirtAwards2";
			num = 145;
			break;
	
		case 6:
			str = "CLO_HST_A_6";
			str2 = "CLO_HST_AD_7";
			str3 = "PsychoKiller";
			str4 = "MPTShirtAwards2";
			num = 141;
			break;
	
		case 8:
			str = "CLO_HST_A_8";
			str2 = "CLO_HST_AD_2";
			str3 = "ShotCaller";
			str4 = "MPTShirtAwards2";
			num = 131;
			break;
	
		case 34:
			str = "CLO_HSTM_U_3_0";
			str2 = "CLO_HST_AD_10";
			str3 = "EliteTshirt1";
			str4 = "MPTShirtAwards2";
			break;
	}

	num3 = 5;

	if (func_61(num, 9) != 1)
		num2 = 1;

	if (iParam0 != 34)
	{
		num4 = func_49(num, num3, 9);
		num5 = func_48(num, -1);
	}
	else
	{
		num4 = 5;
		num5 = func_60();
	}

	func_62(str, str2, str3, str4, num4, num5, -1, num2, &Global_1652549, 168, 152);
	return;
}

int func_60() // Hash - 0xB5C560A6 ^0xD0BECCC7
{
	int num;

	if (func_66(3765, -1))
		num = num + 1;

	if (func_66(3766, -1))
		num = num + 1;

	if (func_66(3767, -1))
		num = num + 1;

	if (func_66(3768, -1))
		num = num + 1;

	if (func_66(3769, -1))
		num = num + 1;

	return num;
}

int func_61(int iParam0, int iParam1) // Hash - 0xC3AA83C2 ^0xC3AA83C2
{
	iParam1 == 9;

	switch (iParam0)
	{
		case 53:
			return 1;
	
		case 39:
			return 1;
	
		case 51:
			return 1;
	
		case 52:
			return 1;
	
		case 60:
			return 1;
	
		case 61:
			return 1;
	
		case 62:
			return 1;
	
		case 63:
			return 1;
	
		case 16:
			return 1;
	
		case 0:
			return 1;
	
		case 12:
			return 1;
	
		case 11:
			return 1;
	
		case 19:
			return 1;
	
		case 20:
			return 1;
	
		case 15:
			return 1;
	
		case 17:
			return 1;
	
		case 21:
			return 1;
	
		case 14:
			return 1;
	
		case 22:
			return 1;
	
		case 1:
			return 1;
	
		case 2:
			return 1;
	
		case 3:
			return 1;
	
		case 4:
			return 1;
	
		case 5:
			return 1;
	
		case 6:
			return 1;
	
		case 7:
			return 1;
	
		case 8:
			return 1;
	
		case 9:
			return 1;
	
		case 10:
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
			return 1;
	
		case 28:
			return 1;
	
		case 29:
			return 1;
	
		case 30:
			return 1;
	
		case 31:
			return 1;
	
		case 32:
			return 1;
	
		case 33:
			return 1;
	
		case 34:
			return 1;
	
		case 35:
			return 1;
	
		case 36:
			return 1;
	
		case 37:
			return 1;
	
		case 38:
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
			return 1;
	
		case 45:
			return 1;
	
		case 46:
			return 1;
	
		case 47:
			return 1;
	
		case 48:
			return 1;
	
		case 49:
			return 1;
	
		case 54:
			return 1;
	
		case 55:
			return 1;
	
		case 56:
			return 1;
	
		case 57:
			return 1;
	
		case 58:
			return 1;
	
		case 59:
			return 1;
	
		case 134:
			return 1;
	
		case 135:
			return 1;
	
		case 136:
			return 1;
	
		case 137:
			return 1;
	
		case 138:
			return 1;
	
		case 67:
			return 1;
	
		case 128:
			return 1;
	
		case 129:
			return 1;
	
		case 130:
			return 1;
	
		case 131:
			return 1;
	
		case 132:
			return 1;
	
		case 133:
			return 1;
	
		case 139:
			return 1;
	
		case 140:
			return 1;
	
		case 141:
			return 1;
	
		case 142:
			return 1;
	
		case 143:
			return 1;
	
		case 144:
			return 1;
	
		case 145:
			return 1;
	
		case 146:
			return 1;
	
		case 147:
			return 1;
	
		case 148:
			return 1;
	
		case 149:
			return 1;
	
		case 150:
			return 1;
	
		case 151:
			return 1;
	
		case 70:
			return 1;
	
		case 71:
			return 1;
	
		case 72:
			return 1;
	
		case 73:
			return 1;
	
		case 74:
			return 1;
	
		case 75:
			return 1;
	
		case 76:
			return 1;
	
		case 77:
			return 1;
	
		case 78:
			return 1;
	
		case 79:
			return 1;
	
		case 80:
			return 1;
	
		case 81:
			return 1;
	
		case 82:
			return 1;
	
		case 83:
			return 1;
	
		case 84:
			return 1;
	
		case 85:
			return 1;
	
		case 86:
			return 1;
	
		case 87:
			return 1;
	
		case 88:
		case 89:
		case 90:
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
		case 99:
		case 100:
		case 101:
		case 102:
		case 103:
		case 104:
		case 105:
		case 106:
		case 107:
		case 108:
		case 109:
		case 110:
		case 112:
		case 114:
		case 115:
		case 116:
		case 111:
		case 113:
		case 117:
		case 118:
		case 119:
		case 120:
		case 121:
		case 122:
		case 123:
		case 124:
		case 125:
		case 126:
		case 127:
			return 1;
	}

	return 0;
}

void func_62(char* sParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, var uParam8, int iParam9, int iParam10) // Hash - 0x97BC0479 ^0xB60E75C
{
	int i;

	for (i = 0; i <= 11; i = i + 1)
	{
		if (uParam8->f_1[i] == 0)
		{
			func_64(i, sParam2, sParam3, iParam6, iParam7, uParam8);
			func_63(i, sParam0, sParam1, iParam4, iParam5, uParam8);
			uParam8->f_1[i] = 1;
			uParam8->f_473[i] = iParam9;
			uParam8->f_486[i] = iParam10;
			i = 12;
		}
	}

	return;
}

void func_63(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, var uParam5) // Hash - 0x5E7192A9 ^0x5CD8F263
{
	TEXT_LABEL_ASSIGN_STRING(&uParam5->f_14[iParam0 /*8*/], sParam1, 32);
	TEXT_LABEL_ASSIGN_STRING(&uParam5->f_111[iParam0 /*8*/], sParam2, 32);
	uParam5->f_208[iParam0] = iParam3;
	uParam5->f_221[iParam0] = iParam4;
	return;
}

void func_64(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, var uParam5) // Hash - 0x98627D03 ^0x96B39ED2
{
	TEXT_LABEL_ASSIGN_STRING(&uParam5->f_234[iParam0 /*8*/], sParam1, 32);
	TEXT_LABEL_ASSIGN_STRING(&uParam5->f_331[iParam0 /*8*/], sParam2, 32);
	uParam5->f_428[iParam0] = func_65(iParam4);
	uParam5->f_441[iParam0] = iParam3;
	return;
}

int func_65(int iParam0) // Hash - 0x8EB6B77 ^0x8EB6B77
{
	switch (iParam0)
	{
		case 2:
			return 107;
	
		case 3:
			return 108;
	
		case 4:
			return 109;
	
		case 5:
			return 110;
	
		default:
			return 0;
	}

	return 0;
}

BOOL func_66(int iParam0, int iParam1) // Hash - 0x6099A833 ^0x46750A9D
{
	if (iParam1 == -1)
		iParam1 = func_7();

	return STATS::GET_PACKED_STAT_BOOL_CODE(iParam0, iParam1);
}

void func_67(int iParam0, int iParam1, int iParam2, var uParam3) // Hash - 0xF946839F ^0xF946839F
{
	int num;
	char* str;
	char* str2;
	char* str3;
	char* str4;
	int num2;
	int num3;
	int num4;
	int num5;
	int value;
	int value2;
	int num6;

	switch (iParam1)
	{
		case 0:
			iParam1 = 0;
			break;
	
		case 1:
			iParam1 = 1;
			break;
	
		case 2:
			iParam1 = 2;
			break;
	
		case 3:
			iParam1 = 3;
			break;
	
		case 4:
			iParam1 = 4;
			break;
	
		case 5:
			iParam1 = 5;
			break;
	
		case 6:
			iParam1 = func_78(iParam0, iParam2);
			break;
	
		case 7:
		case 8:
			iParam1 = func_76(iParam0, iParam2);
			break;
	}

	num = func_76(iParam0, iParam2);

	if (iParam1 != 0)
		if (iParam1 != 1)
			if (func_75(iParam0, iParam2) != 1)
				iParam1 = 1;

	str = func_74(iParam0, iParam2, false);
	str2 = func_73(iParam0, iParam1, iParam2, false);
	str3 = func_72(iParam0, iParam2);
	str4 = func_71(iParam0, iParam2);
	num2 = func_70(iParam0, num, iParam2);
	num3 = func_69(iParam0);
	num4 = func_68(iParam1);
	num5 = func_70(iParam0, num4, iParam2);
	value = num2 - num5;
	value2 = num3 - num5;
	num6 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(value2) / SYSTEM::TO_FLOAT(value)) * 100f);
	func_62(str, str2, str3, str4, num2, num3, num6, iParam1, uParam3, 168, 152);
	return;
}

int func_68(int iParam0) // Hash - 0xD5290EEB ^0xD5290EEB
{
	int num;

	switch (iParam0)
	{
		case 0:
			num = 0;
			break;
	
		case 1:
			num = 0;
			break;
	
		case 2:
			num = 1;
			break;
	
		case 3:
			num = 2;
			break;
	
		case 4:
			num = 3;
			break;
	
		case 5:
			num = 4;
			break;
	}

	return num;
}

int func_69(int iParam0) // Hash - 0xBA4508AD ^0xCA4E89B0
{
	Hash hash;
	Hash statHash;
	int outValue;

	hash = Global_1665454[iParam0];
	statHash = hash;

	if (STATS::STAT_GET_INT(statHash, &outValue, -1))
		return outValue;

	return 0;
}

int func_70(int iParam0, int iParam1, int iParam2) // Hash - 0x80259D9F ^0x80259D9F
{
	iParam2 == 0;

	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 10;
			
				case 4:
					return 15;
			
				case 5:
					return 25;
			
				default:
					break;
			}
			break;
	
		case 1:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 10;
			
				case 4:
					return 15;
			
				case 5:
					return 25;
			
				default:
					break;
			}
			break;
	
		case 2:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 10;
			
				case 3:
					return 25;
			
				case 4:
					return 50;
			
				case 5:
					return 100;
			
				default:
					break;
			}
			break;
	
		case 3:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 10;
			
				case 3:
					return 25;
			
				case 4:
					return 50;
			
				case 5:
					return 100;
			
				default:
					break;
			}
			break;
	}

	return 999;
}

char* func_71(int iParam0, int iParam1) // Hash - 0xB53505BE ^0xCE9F2CAD
{
	iParam1 == 9;

	switch (iParam0)
	{
		case 0:
			return "MPAWARDS5";
	
		case 1:
			return "MPAWARDS5";
	
		case 2:
			return "MPAWARDS5";
	
		case 3:
			return "MPAWARDS6";
	
		default:
		
	}

	return "";
}

char* func_72(int iParam0, int iParam1) // Hash - 0xB53505BE ^0xFF0332BB
{
	iParam1 == 9;

	switch (iParam0)
	{
		case 0:
			return "RaceCreator";
	
		case 1:
			return "DeathmatchCreator";
	
		case 2:
			return "PlayedCreation";
	
		case 3:
			return "CreatorsScore";
	
		default:
		
	}

	return "";
}

char* func_73(int iParam0, int iParam1, int iParam2, BOOL bParam3) // Hash - 0x9457DC86 ^0xE23FE7AB
{
	iParam2 == 9;
	bParam3;
	func_70(iParam0, iParam1, iParam2) == 1;

	switch (iParam0)
	{
		case 0:
			return "AWS_686";
	
		case 1:
			return "AWS_688";
	
		case 2:
			return "AWS_689";
	
		case 3:
			return "AWS_690";
	
		default:
		
	}

	return "";
}

char* func_74(int iParam0, int iParam1, BOOL bParam2) // Hash - 0x3A600D1B ^0xF8A229DC
{
	bParam2;
	iParam1 == 9;

	switch (iParam0)
	{
		case 0:
			return "AWT_686";
	
		case 1:
			return "AWT_688";
	
		case 2:
			return "AWT_689";
	
		case 3:
			return "AWT_690";
	
		default:
		
	}

	return "";
}

int func_75(int iParam0, int iParam1) // Hash - 0x4ED58738 ^0x4ED58738
{
	iParam1 == 9;

	switch (iParam0)
	{
		case 0:
			return 1;
	
		case 1:
			return 1;
	
		case 2:
			return 1;
	
		case 3:
			return 1;
	
		default:
		
	}

	return 0;
}

int func_76(int iParam0, int iParam1) // Hash - 0x34E0BCB7 ^0x34E0BCB7
{
	if (func_77(func_69(iParam0), func_70(iParam0, 5, iParam1)))
		return 5;

	if (func_77(func_69(iParam0), func_70(iParam0, 4, iParam1)))
		return 5;

	if (func_77(func_69(iParam0), func_70(iParam0, 3, iParam1)))
		return 4;

	if (func_77(func_69(iParam0), func_70(iParam0, 2, iParam1)))
		return 3;

	return 2;
}

BOOL func_77(int iParam0, int iParam1) // Hash - 0x4017309C ^0x4017309C
{
	if (iParam1 <= iParam0)
		return true;

	return false;
}

int func_78(int iParam0, int iParam1) // Hash - 0xE4D6AF96 ^0xE4D6AF96
{
	if (!func_77(func_69(iParam0), func_70(iParam0, 5, iParam1)))
		return 0;

	if (!func_77(func_69(iParam0), func_70(iParam0, 4, iParam1)))
		return 2;

	if (!func_77(func_69(iParam0), func_70(iParam0, 3, iParam1)))
		return 3;

	if (!func_77(func_69(iParam0), func_70(iParam0, 2, iParam1)))
		return 4;

	return 5;
}

void func_79(int iParam0, int iParam1, int iParam2, var uParam3) // Hash - 0x41A48735 ^0x41A48735
{
	int num;
	int num2;
	char* str;
	char* str2;
	char* str3;
	char* str4;
	int num3;
	int num4;
	int num5;

	switch (iParam1)
	{
		case 6:
		case 8:
			if (func_51(iParam0, -1))
				iParam1 = 0;
			break;
	
		case 7:
			if (func_51(iParam0, -1) == false)
				iParam1 = 5;
			break;
	}

	num2 = func_84(iParam0);

	switch (iParam2)
	{
		case 9:
			num = 3;
			break;
	}

	if (iParam0 == 57)
		iParam1 = 2;
	else if (iParam0 == 58 || iParam0 == 9)
		iParam1 = 3;
	else if (iParam0 == 59 || iParam0 == 10)
		iParam1 = 4;
	else
		iParam1 = 5;

	str = func_83(iParam0, num);
	str2 = func_82(iParam0, num);
	str3 = func_81(iParam0, num);
	str4 = func_80(iParam0, num);
	num3 = func_49(num2, iParam1, 0);
	num4 = func_48(num2, -1);

	if (num2 == 64)
	{
		num3 = 1;
		num4 = 0;
	}

	num5 = -1;

	if (func_51(iParam0, -1))
	{
		num4 = func_49(func_84(iParam0), iParam1, 0);
	
		if (num2 == 64)
			num4 = 1;
	}

	iParam1 = 1;
	func_62(str, str2, str3, str4, num3, num4, num5, iParam1, uParam3, 168, 152);
	return;
}

char* func_80(int iParam0, int iParam1) // Hash - 0xEBE3BF0D ^0x315C9255
{
	char* str;

	str = "MPTATTOOS";
	iParam0 == iParam0;
	iParam1 == iParam1;

	switch (iParam0)
	{
		case 56:
			return "MPTattoos3";
	
		case 89:
			return "MPTSHIRTAWARDS";
	
		case 88:
			return "MPTSHIRTAWARDS";
	
		case 87:
			return "MPTSHIRTAWARDS";
	
		case 57:
			return "MPTattoos2";
	
		case 58:
			return "MPTattoos2";
	
		case 59:
			return "MPTattoos2";
	
		case 60:
			return "MPTattoos2";
	
		case 12:
		case 55:
		case 49:
		case 48:
		case 46:
		case 45:
		case 34:
		case 65:
		case 25:
			return "MPTattoos3";
	}

	return str;
}

char* func_81(int iParam0, int iParam1) // Hash - 0xEBE3BF0D ^0x1279B7CE
{
	char* str;

	str = "";
	iParam0 == iParam0;
	iParam1 == iParam1;

	switch (iParam0)
	{
		case 56:
			return "TATTOO_WIN_PARLEY";
	
		case 57:
			return "TATTOO_HOLD_UP_SHOPS_10";
	
		case 58:
			return "TATTOO_HOLD_UP_SHOPS_25";
	
		case 59:
			return "TATTOO_HOLD_UP_SHOPS_50";
	
		case 60:
			return "TATTOO_HOLD_UP_SHOPS_100";
	
		case 0:
			return "HeadBanger";
	
		case 1:
			return "theslayer";
	
		case 2:
			return "clearout";
	
		case 4:
			return "thehustler";
	
		case 3:
			return "armoredvantakedowns";
	
		case 54:
			return "wineverymodeonce";
	
		case 5:
			return "killplayerbountyhead";
	
		case 6:
			return "holdworldrecord";
	
		case 55:
			return "MP_FM_Tat_Award_008";
	
		case 7:
			return "getrevengekills";
	
		case 8:
			return "kill3otherracers";
	
		case 9:
			return "reachrank1";
	
		case 10:
			return "reachrank2";
	
		case 11:
			return "reachrank3";
	
		case 13:
			return "HeadBanger";
	
		case 14:
			return "HeadBanger";
	
		case 15:
			return "HeadBanger";
	
		case 16:
			return "HeadBanger";
	
		case 89:
			return "RockstarVerifiied";
	
		case 87:
			return "ReachHordeModeWave";
	
		case 12:
			return "TATTOO_RACES_WON";
	}

	switch (iParam0)
	{
		case 17:
			return "Headbanger";
	
		case 18:
			return "Headbanger";
	
		case 19:
			return "Headbanger";
	
		case 20:
			return "Headbanger";
	
		case 21:
			return "Headbanger";
	
		case 22:
			return "Headbanger";
	
		case 23:
			return "Headbanger";
	
		case 24:
			return "Headbanger";
	
		case 25:
			return "MP_FM_Tat_002";
	
		case 26:
			return "Headbanger";
	
		case 27:
			return "Headbanger";
	
		case 28:
			return "Headbanger";
	
		case 61:
			return "Headbanger";
	
		case 62:
			return "Headbanger";
	
		case 63:
			return "Headbanger";
	
		case 64:
			return "Headbanger";
	
		case 65:
			return "MP_FM_Tat_019";
	
		case 29:
			return "Headbanger";
	
		case 30:
			return "Headbanger";
	
		case 31:
			return "Headbanger";
	
		case 66:
			return "Headbanger";
	
		case 32:
			return "Headbanger";
	
		case 33:
			return "Headbanger";
	
		case 34:
			return "MP_FM_Tat_023";
	
		case 35:
			return "Headbanger";
	
		case 36:
			return "Headbanger";
	
		case 37:
			return "Headbanger";
	
		case 38:
			return "Headbanger";
	
		case 39:
			return "Headbanger";
	
		case 40:
			return "Headbanger";
	
		case 67:
			return "Headbanger";
	
		case 41:
			return "Headbanger";
	
		case 68:
			return "Headbanger";
	
		case 42:
			return "Headbanger";
	
		case 43:
			return "Headbanger";
	
		case 44:
			return "Headbanger";
	
		case 45:
			return "MP_FM_Tat_036";
	
		case 46:
			return "MP_FM_Tat_037";
	
		case 47:
			return "Headbanger";
	
		case 48:
			return "MP_FM_Tat_039";
	
		case 49:
			return "MP_FM_Tat_040";
	
		case 50:
			return "Headbanger";
	
		case 51:
			return "Headbanger";
	
		case 52:
			return "Headbanger";
	
		case 53:
			return "Headbanger";
	
		case 69:
			return "Headbanger";
	}

	return str;
}

char* func_82(int iParam0, int iParam1) // Hash - 0xEBE3BF0D ^0xA1127E86
{
	char* str;

	str = "";
	iParam0 == iParam0;
	iParam1 == iParam1;

	switch (iParam0)
	{
		case 7:
			return _("Complete The Equalizer platinum Award. ~n~Get 50 Revenge kills in Deathmatch.");
	
		case 6:
			return _("Complete The Record Holder platinum Award. ~n~Hold a World Record in a Rockstar Race.");
	
		case 8:
			return _("Complete the Road Rage platinum Award. ~n~Kill at least 3 other racers in a GTA Race and win.");
	
		case 5:
			return _("Complete The Bounty Hunter platinum Award. ~n~Kill 25 Bounty Targets.");
	
		case 0:
			return _("Complete the Head Banger platinum Award. ~n~Get 500 player headshots.");
	
		case 12:
			return _("Complete The Champion platinum Award. ~n~Win 50 Races.");
	
		case 2:
			return _("Complete the Clear Out platinum Award. ~n~Clear 5 Gang Attacks in one day, in a single session.");
	
		case 9:
			return _("Complete The Widow Maker silver Award. ~n~Get 250 player kills.");
	
		case 10:
			return _("Complete The Widow Maker gold Award. ~n~Get 500 player kills.");
	
		case 11:
			return _("Complete The Widow Maker platinum Award. ~n~Get 1000 player kills.");
	
		case 4:
			return _("Complete The Hustler platinum Award. ~n~Earn $50,000 winnings from betting.");
	
		case 1:
			return _("Complete The Slayer platinum Award. ~n~Win 50 Deathmatches.");
	
		case 54:
			return _("Complete the All Rounder platinum Award. ~n~Win every game mode.");
	
		case 3:
			return _("Complete the Full Metal Jacket platinum Award. ~n~Rob 25 Armored Trucks.");
	
		case 56:
			return _("Complete The Car Bomber platinum Award. ~n~Kill 25 players using vehicle explosives.");
	
		case 13:
			return _("Reached Crew Rank 26.");
	
		case 14:
			return _("Reached Crew Rank 45.");
	
		case 15:
			return _("Reached Crew Rank 18.");
	
		case 16:
			return _("Reached Crew Rank 52.");
	
		case 89:
			return _("Create a Race, Deathmatch, Capture, or Last Team Standing and get it verified by Rockstar Games.");
	
		case 87:
			return _("Complete The Survivor platinum Award. ~n~Complete a Survival.");
	
		case 55:
			return _("Complete the Suped Up platinum Award. ~n~Apply each type of mod to a single vehicle.");
	}

	switch (iParam0)
	{
		case 17:
			return _("Reach Rank 10 To Unlock Tattoo.");
	
		case 18:
			return _("Reach Rank 20 To Unlock Tattoo.");
	
		case 19:
			return _("Reach Rank 20 To Unlock Tattoo.");
	
		case 20:
			return _("Reach Rank 10 To Unlock Tattoo.");
	
		case 21:
			return _("Reach Rank 20 To Unlock Tattoo.");
	
		case 22:
			return _("Reach Rank 10 To Unlock Tattoo.");
	
		case 23:
			return _("Reach Rank 10 To Unlock Tattoo.");
	
		case 24:
			return _("Reach Rank 20 To Unlock Tattoo.");
	
		case 25:
			return _("Complete the Death Toll platinum Award. ~n~Get 500 kills in Deathmatch.");
	
		case 26:
			return _("Reach Rank 20 To Unlock Tattoo.");
	
		case 27:
			return _("Reach Rank 20 To Unlock Tattoo.");
	
		case 28:
			return _("Reach Rank 10 To Unlock Tattoo.");
	
		case 61:
			return _("Reach Rank 10 To Unlock Tattoo.");
	
		case 62:
			return _("Reach Rank 10 To Unlock Tattoo.");
	
		case 63:
			return _("Reach Rank 10 To Unlock Tattoo.");
	
		case 64:
			return _("Reach Rank 10 To Unlock Tattoo.");
	
		case 65:
			return _("Complete the Bloodiest Of The Bunch platinum Award. ~n~Get the most kills in a 4 player Survival.");
	
		case 29:
			return _("Reach Rank 10 To Unlock Tattoo.");
	
		case 30:
			return _("Reach Rank 10 To Unlock Tattoo.");
	
		case 31:
			return _("Reach Rank 10 To Unlock Tattoo.");
	
		case 66:
			return _("Reach Rank 20 To Unlock Tattoo.");
	
		case 32:
			return _("Reach Rank 20 To Unlock Tattoo.");
	
		case 33:
			return _("Reach Rank 20 To Unlock Tattoo.");
	
		case 34:
			return _("Complete the Lapping It Up platinum Award. ~n~Get 25 Private Dances.");
	
		case 35:
			return _("Reach Rank 20 To Unlock Tattoo.");
	
		case 36:
			return _("Reach Rank 20 To Unlock Tattoo.");
	
		case 37:
			return _("Reach Rank 20 To Unlock Tattoo.");
	
		case 38:
			return _("Reach Rank 20 To Unlock Tattoo.");
	
		case 39:
			return _("Reach Rank 20 To Unlock Tattoo.");
	
		case 40:
			return _("Reach Rank 20 To Unlock Tattoo.");
	
		case 67:
			return _("Reach Rank 20 To Unlock Tattoo.");
	
		case 41:
			return _("Reach Rank 20 To Unlock Tattoo.");
	
		case 68:
			return _("Reach Rank 20 To Unlock Tattoo.");
	
		case 42:
			return _("Reach Rank 20 To Unlock Tattoo.");
	
		case 43:
			return _("Reach Rank 20 To Unlock Tattoo.");
	
		case 44:
			return _("Reach Rank 20 To Unlock Tattoo.");
	
		case 45:
			return _("Complete the Pistol Whipped platinum Award. ~n~Get 500 Pistol kills.");
	
		case 46:
			return _("Complete the Team Carrier platinum Award. ~n~Earn 50 MVPs in Team Deathmatch.");
	
		case 47:
			return _("Reach Rank 20 To Unlock Tattoo.");
	
		case 48:
			return _("Complete the Scoping Out platinum Award. ~n~Get 100 Sniper kills.");
	
		case 49:
			return _("Complete the Killstreaker platinum Award. ~n~Earn a 10 plus killstreak in Deathmatch.");
	
		case 50:
			return _("Reach Rank 20 To Unlock Tattoo.");
	
		case 51:
			return _("Reach Rank 20 To Unlock Tattoo.");
	
		case 52:
			return _("Reach Rank 20 To Unlock Tattoo.");
	
		case 53:
			return _("Reach Rank 20 To Unlock Tattoo.");
	
		case 69:
			return _("Reach Rank 20 To Unlock Tattoo.");
	
		case 57:
			return _("Complete the Armed Robber bronze Award. ~n~Hold up 5 stores.");
	
		case 58:
			return _("Complete the Armed Robber silver Award. ~n~Hold up 10 stores.");
	
		case 59:
			return _("Complete the Armed Robber gold Award. ~n~Hold up 15 stores.");
	
		case 60:
			return _("Complete the Armed Robber platinum Award. ~n~Hold up 20 stores.");
	}

	return str;
}

char* func_83(int iParam0, int iParam1) // Hash - 0xEBE3BF0D ^0xD6A6CC10
{
	char* str;

	str = "";
	iParam0 == iParam0;
	iParam1 == iParam1;

	switch (iParam0)
	{
		case 0:
			return _("Skull");
	
		case 2:
			return _("Grim Reaper Smoking Gun");
	
		case 9:
			return _("Blank Scroll");
	
		case 10:
			return _("Embellished Scroll");
	
		case 11:
			return _("Seven Deadly Sins");
	
		case 4:
			return _("Hustler");
	
		case 1:
			return _("Burning Heart");
	
		case 54:
			return _("Angel");
	
		case 3:
			return _("Blackjack");
	
		case 7:
			return _("Dragon and Dagger");
	
		case 5:
			return _("Skull and Sword");
	
		case 8:
			return _("Ride or Die");
	
		case 6:
			return _("Racing Blonde");
	
		case 12:
			return _("Racing Brunette");
	
		case 13:
			return _("Crew Rank 1");
	
		case 14:
			return _("Crew Rank 2");
	
		case 15:
			return _("Crew Rank 3");
	
		case 16:
			return _("Crew Rank 4");
	
		case 87:
			return _("Red Skull T-Shirt");
	
		case 88:
			return _("Los Santos Belle T-Shirt");
	
		case 89:
			return _("Rockstar T-Shirt");
	
		case 55:
			return _("Los Santos Customs");
	
		case 17:
			return _("Tattoo 1");
	
		case 18:
			return _("Tattoo 2");
	
		case 19:
			return _("Tattoo 3");
	
		case 20:
			return _("Tattoo 4");
	
		case 21:
			return _("Tattoo 5");
	
		case 22:
			return _("Tattoo 6");
	
		case 56:
			return _("Trust No One");
	}

	switch (iParam0)
	{
		case 23:
			return _("Tattoo 7");
	
		case 24:
			return _("Tattoo 8");
	
		case 25:
			return _("Melting Skull");
	
		case 26:
			return _("Tattoo 10");
	
		case 27:
			return _("Tattoo 11");
	
		case 28:
			return _("Tattoo 12");
	
		case 61:
			return _("Tattoo 13");
	
		case 62:
			return _("Tattoo 14");
	
		case 63:
			return _("Tattoo 1");
	
		case 64:
			return _("Tattoo 16");
	
		case 65:
			return _("The Wages of Sin");
	
		case 29:
			return _("Tattoo 19");
	
		case 30:
			return "TAT_FM_TAT19";
	
		case 31:
			return _("Tattoo 20");
	
		case 66:
			return _("Tattoo 21");
	
		case 32:
			return _("Tattoo 22");
	
		case 33:
			return _("Tattoo 23");
	
		case 34:
			return _("Hottie");
	
		case 35:
			return _("Tattoo 25");
	
		case 36:
			return _("Tattoo 26");
	
		case 37:
			return _("Tattoo 27");
	
		case 38:
			return _("Tattoo 28");
	
		case 39:
			return _("Tattoo 29");
	
		case 40:
			return _("Tattoo 30");
	
		case 67:
			return _("Tattoo 31");
	
		case 41:
			return _("Tattoo 32");
	
		case 68:
			return _("Tattoo 33");
	
		case 42:
			return _("Tattoo 34");
	
		case 43:
			return _("Tattoo 35");
	
		case 44:
			return _("Tattoo 36");
	
		case 45:
			return _("Way Of The Gun");
	
		case 46:
			return _("Grim Reaper");
	
		case 47:
			return _("Tattoo 39");
	
		case 48:
			return _("Broken Skull");
	
		case 49:
			return _("Flaming Skull");
	
		case 50:
			return _("Tattoo 42");
	
		case 51:
			return _("Tattoo 43");
	
		case 52:
			return _("Tattoo 44");
	
		case 53:
			return _("Tattoo 45");
	
		case 69:
			return _("Tattoo 46");
	
		case 57:
			return _("Clown");
	
		case 58:
			return _("Clown and Gun");
	
		case 59:
			return _("Clown Dual Wield");
	
		case 60:
			return _("Clown Dual Wield Dollars");
	}

	return str;
}

int func_84(int iParam0) // Hash - 0xB2994853 ^0xB2994853
{
	switch (iParam0)
	{
		case 4:
			return 49;
	
		case 7:
			return 59;
	
		case 0:
			return 9;
	
		case 5:
			return 55;
	
		case 1:
			return 40;
	
		case 57:
			return 14;
	
		case 58:
			return 14;
	
		case 59:
			return 14;
	
		case 60:
			return 14;
	
		case 12:
			return 21;
	
		case 56:
			return 24;
	
		case 25:
			return 44;
	
		case 34:
			return 15;
	
		case 45:
			return 1;
	
		case 48:
			return 2;
	
		case 46:
			return 42;
	
		case 9:
			return 56;
	
		case 10:
			return 56;
	
		case 11:
			return 56;
	
		case 87:
			return 48;
	
		default:
		
	}

	return 64;
}

void func_85(int iParam0, int iParam1, int iParam2, var uParam3) // Hash - 0x9C09F769 ^0x9C09F769
{
	int i;
	int num;
	char* str;
	char* str2;
	char* str3;
	char* str4;
	int num2;
	int num3;
	int num4;
	int num5;
	int value;
	int value2;
	int num6;
	int num7;

	switch (iParam1)
	{
		case 0:
			iParam1 = 0;
			break;
	
		case 1:
			iParam1 = 1;
			break;
	
		case 2:
			iParam1 = 2;
			break;
	
		case 3:
			iParam1 = 3;
			break;
	
		case 4:
			iParam1 = 4;
			break;
	
		case 5:
			iParam1 = 5;
			break;
	
		case 6:
			iParam1 = func_100(iParam0);
			break;
	
		case 7:
		case 8:
			iParam1 = func_99();
			break;
	}

	if (iParam1 != 0)
		if (iParam1 != 1)
			if (func_98(iParam0, iParam2) != 1)
				iParam1 = 1;

	num = func_99();
	str = func_96(iParam0, iParam2, false);
	str2 = func_95(iParam0, iParam1, iParam2, false);
	str3 = func_94(iParam0, iParam2);
	str4 = func_93(iParam0, iParam2);
	num2 = func_91(iParam0, num, iParam2);
	num3 = func_88(iParam0, num, iParam2);
	num4 = func_68(iParam1);
	num5 = func_91(iParam0, num4, iParam2);
	value = num2 - num5;
	value2 = num3 - num5;

	if (func_87(iParam0))
	{
		num6 = 100;
	
		switch (iParam0)
		{
			case 17:
				num3 = 26;
				num2 = 26;
				break;
		
			case 18:
				num3 = 26;
				num2 = 26;
				break;
		
			case 19:
				num3 = 26;
				num2 = 26;
				break;
		
			case 20:
				num3 = 26;
				num2 = 26;
				break;
		
			case 21:
				num3 = 26;
				num2 = 26;
				break;
		
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
				num3 = 26;
				num2 = 26;
				break;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 17:
				value2 = 0;
				num7 = func_86(joaat("MPPLY_HEISTFLOWORDERPROGRESS"));
			
				for (i = 0; i < 28; i = i + 1)
				{
					if (IS_BIT_SET(num7, i))
						value2 = value2 + 1;
				}
			
				if (IS_BIT_SET(num7, 9))
					value2 = value2 - 1;
			
				if (IS_BIT_SET(num7, 26))
					value2 = value2 - 1;
			
				if (value2 < 0)
					value2 = 0;
			
				num3 = value2;
				num2 = 26;
				value = 26;
				break;
		
			case 18:
				value2 = 0;
				num7 = func_86(joaat("MPPLY_HEISTTEAMPROGRESSBITSET"));
			
				for (i = 0; i < 28; i = i + 1)
				{
					if (IS_BIT_SET(num7, i))
						value2 = value2 + 1;
				}
			
				if (IS_BIT_SET(num7, 9))
					value2 = value2 - 1;
			
				if (IS_BIT_SET(num7, 26))
					value2 = value2 - 1;
			
				if (value2 < 0)
					value2 = 0;
			
				num3 = value2;
				num2 = 26;
				value = 26;
				break;
		
			case 19:
				value2 = 0;
				num7 = func_86(joaat("MPPLY_HEISTNODEATHPROGREITSET"));
			
				for (i = 0; i < 28; i = i + 1)
				{
					if (IS_BIT_SET(num7, i))
						value2 = value2 + 1;
				}
			
				if (IS_BIT_SET(num7, 9))
					value2 = value2 - 1;
			
				if (IS_BIT_SET(num7, 26))
					value2 = value2 - 1;
			
				if (value2 < 0)
					value2 = 0;
			
				num3 = value2;
				num2 = 26;
				value = 26;
				break;
		
			case 20:
				value2 = 0;
				num7 = func_86(joaat("MPPLY_HEIST_1STPERSON_PROG"));
			
				for (i = 0; i < 28; i = i + 1)
				{
					if (IS_BIT_SET(num7, i))
						value2 = value2 + 1;
				}
			
				if (IS_BIT_SET(num7, 9))
					value2 = value2 - 1;
			
				if (IS_BIT_SET(num7, 26))
					value2 = value2 - 1;
			
				if (value2 < 0)
					value2 = 0;
			
				num3 = value2;
				num2 = 26;
				value = 26;
				break;
		
			case 21:
				value2 = 0;
				num7 = func_86(joaat("MPPLY_HEISTMEMBERPROGRESSBITSET"));
			
				for (i = 0; i < 28; i = i + 1)
				{
					if (IS_BIT_SET(num7, i))
						value2 = value2 + 1;
				}
			
				if (IS_BIT_SET(num7, 9))
					value2 = value2 - 1;
			
				if (IS_BIT_SET(num7, 26))
					value2 = value2 - 1;
			
				if (value2 < 0)
					value2 = 0;
			
				num3 = value2;
				num2 = 26;
				value = 26;
				break;
		
			case 3:
			case 4:
			case 5:
			case 7:
			case 8:
			case 9:
			case 10:
			case 11:
				value = func_91(iParam0, num4, iParam2);
				value2 = func_88(iParam0, num, iParam2);
				break;
		}
	
		num6 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(value2) / SYSTEM::TO_FLOAT(value)) * 100f);
	}

	func_62(str, str2, str3, str4, num2, num3, num6, iParam1, uParam3, 168, 152);
	return;
}

int func_86(Hash hParam0) // Hash - 0x4F1C0EC ^0xC7D84231
{
	Hash statHash;
	int outValue;

	statHash = hParam0;

	if (STATS::STAT_GET_INT(statHash, &outValue, -1))
		return outValue;

	return 0;
}

BOOL func_87(int iParam0) // Hash - 0xBA4508AD ^0x15EAB79A
{
	Hash hash;
	Hash statHash;
	BOOL outValue;

	hash = Global_1665462[iParam0];
	statHash = hash;

	if (STATS::STAT_GET_BOOL(statHash, &outValue, -1))
		return outValue;

	return false;
}

int func_88(int iParam0, int iParam1, int iParam2) // Hash - 0x448ADEA9 ^0x448ADEA9
{
	iParam1 == 5;
	iParam2 == 0;
	func_87(iParam0);

	switch (iParam0)
	{
		case 3:
			return func_89(iParam0);
	
		case 4:
			return func_89(iParam0);
	
		case 5:
			return func_89(iParam0);
	
		case 7:
			return func_89(iParam0);
	
		case 8:
			return func_89(iParam0);
	
		case 9:
			return func_89(iParam0);
	
		case 10:
			return func_89(iParam0);
	
		case 11:
			return func_89(iParam0);
	
		default:
		
	}

	if (func_87(iParam0) == true)
		return 1;

	return 0;
}

int func_89(int iParam0) // Hash - 0x2F4FB14B ^0x2F4FB14B
{
	int num;
	int num2;
	int i;

	num2 = func_86(func_90(iParam0));

	for (i = 0; i < 29; i = i + 1)
	{
		if (IS_BIT_SET(num2, i))
			num = num + 1;
	}

	return num;
}

int func_90(int iParam0) // Hash - 0x344C68C0 ^0x6A43D808
{
	switch (iParam0)
	{
		case 3:
			return joaat("MPPLY_GANGOPS_ALLINORDER");
	
		case 4:
			return joaat("MPPLY_GANGOPS_LOYALTY");
	
		case 7:
			return joaat("MPPLY_GANGOPS_LOYALTY2");
	
		case 8:
			return joaat("MPPLY_GANGOPS_LOYALTY3");
	
		case 5:
			return joaat("MPPLY_GANGOPS_CRIMMASMD");
	
		case 9:
			return joaat("MPPLY_GANGOPS_CRIMMASMD2");
	
		case 10:
			return joaat("MPPLY_GANGOPS_CRIMMASMD3");
	
		case 11:
			return joaat("MPPLY_GANGOPS_SUPPORT");
	
		default:
		
	}

	return joaat("MPPLY_GANGOPS_ALLINORDER");
}

int func_91(int iParam0, int iParam1, int iParam2) // Hash - 0x4E4451D9 ^0x4E4451D9
{
	iParam1 == 5;
	iParam2 == 0;
	func_87(iParam0);

	switch (iParam0)
	{
		case 3:
			return func_92();
	
		case 4:
			return func_92();
	
		case 5:
			return func_92();
	
		case 7:
			return func_92();
	
		case 8:
			return func_92();
	
		case 9:
			return func_92();
	
		case 10:
			return func_92();
	
		case 11:
			return func_92();
	
		default:
		
	}

	return 1;
}

int func_92() // Hash - 0xBD2AF76F ^0xBD2AF76F
{
	return 29;
}

char* func_93(int iParam0, int iParam1) // Hash - 0x4FC5F938 ^0xAD71105A
{
	iParam1 == 9;

	switch (iParam0)
	{
		case 12:
			return "MpAwardHeists";
	
		case 13:
			return "MpAwardHeists";
	
		case 14:
			return "MpAwardHeists";
	
		case 15:
			return "MpAwardHeists";
	
		case 16:
			return "MpAwardHeists";
	
		case 17:
			return "MpAwardHeists";
	
		case 18:
			return "MpAwardHeists";
	
		case 19:
			return "MpAwardHeists";
	
		case 20:
			return "MPAwardHeists";
	
		case 21:
			return "MPAwardHeists";
	
		case 1:
			return "MPAwardHeists2";
	
		case 2:
			return "MPAwardHeists2";
	
		case 6:
			return "MPAwardHeists2";
	
		case 3:
			return "MPAwardHeists2";
	
		case 4:
			return "MPAwardHeists2";
	
		case 5:
			return "MPAwardHeists2";
	
		case 7:
			return "MPAwardHeists2";
	
		case 8:
			return "MPAwardHeists2";
	
		case 9:
			return "MPAwardHeists2";
	
		case 10:
			return "MPAwardHeists2";
	
		case 11:
			return "MPAwardHeists2";
	
		default:
		
	}

	return "MPAwardHeists";
}

char* func_94(int iParam0, int iParam1) // Hash - 0x4FC5F938 ^0xDC6A04D5
{
	iParam1 == 9;

	switch (iParam0)
	{
		case 12:
			return "HeadForHeists";
	
		case 13:
			return "GoToJail";
	
		case 14:
			return "LabReport";
	
		case 15:
			return "ProductPlacement";
	
		case 16:
			return "SmoothSailing";
	
		case 17:
			return "AllInOrder";
	
		case 18:
			return "Loyalty";
	
		case 19:
			return "CriminalMastermind";
	
		case 20:
			return "AnotherPerspective";
	
		case 21:
			return "SupportingRole";
	
		case 1:
			return "IAAFinale";
	
		case 2:
			return "SubmarineFinale";
	
		case 6:
			return "MissleSiloFinale";
	
		case 3:
			return "AllInOrderII";
	
		case 4:
			return "LoyaltyIV";
	
		case 5:
			return "CriminalMastermindIV";
	
		case 7:
			return "LoyaltyII";
	
		case 8:
			return "LoyaltyIII";
	
		case 9:
			return "CriminalMastermindII";
	
		case 10:
			return "CriminalMastermindIII";
	
		case 11:
			return "SupportingRoleII";
	
		default:
		
	}

	return "";
}

char* func_95(int iParam0, int iParam1, int iParam2, BOOL bParam3) // Hash - 0x9457DC86 ^0x67B93349
{
	iParam2 == 9;
	bParam3;
	func_91(iParam0, iParam1, iParam2) == 1;

	switch (iParam0)
	{
		case 12:
			return "AWS_775";
	
		case 13:
			return "AWS_767";
	
		case 14:
			return "AWS_768";
	
		case 15:
			return "AWS_776";
	
		case 16:
			return "AWS_780";
	
		case 17:
			return "AWS_777";
	
		case 18:
			return "AWS_778";
	
		case 19:
			return "AWS_779";
	
		case 20:
			return "AWS_785";
	
		case 21:
			return "AWS_786";
	
		case 1:
			return _("Complete Act I of The Doomsday Heist for the first time.");
	
		case 2:
			return _("Complete Act II of The Doomsday Heist for the first time.");
	
		case 6:
			return _("Complete Act III of The Doomsday Heist for the first time.");
	
		case 3:
			return _("Complete The Doomsday Heist in order.");
	
		case 4:
			return _("Complete The Doomsday Heist in order with the same team of 4 players.");
	
		case 5:
			return _("Complete The Doomsday Heist in order, with the same team of 4 players, on hard difficulty, without losing any lives on Setups and Finales.");
	
		case 7:
			return _("Complete The Doomsday Heist in order with the same team of 2 players.");
	
		case 8:
			return _("Complete The Doomsday Heist in order with the same team of 3 players.");
	
		case 9:
			return _("Complete The Doomsday Heist in order, with the same team of 2 players, on hard difficulty, without losing any lives on Setups and Finales.");
	
		case 10:
			return _("Complete The Doomsday Heist in order, with the same team of 3 players, on hard difficulty, without losing any lives on Setups and Finales.");
	
		case 11:
			return _("Complete all acts of The Doomsday Heist as a crew member, ending with completion of the Act III finale.");
	
		default:
		
	}

	return "";
}

char* func_96(int iParam0, int iParam1, BOOL bParam2) // Hash - 0x3A600D1B ^0x8038A81E
{
	bParam2;
	iParam1 == 9;

	switch (iParam0)
	{
		case 12:
			return "AWT_775";
	
		case 13:
			return "AWT_767";
	
		case 14:
			return "AWT_768";
	
		case 15:
			return "AWT_776";
	
		case 16:
			return "AWT_780";
	
		case 17:
			return "AWT_777";
	
		case 18:
			return "AWT_778";
	
		case 19:
			return "AWT_779";
	
		case 20:
			return "AWT_785";
	
		case 21:
			return "AWT_786";
	
		case 1:
		case 2:
		case 6:
		case 3:
		case 4:
		case 5:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
			return func_97(iParam0);
	
		default:
		
	}

	return "";
}

char* func_97(int iParam0) // Hash - 0xA17D549C ^0x97D3B14C
{
	switch (iParam0)
	{
		case 1:
			return _("Act I");
	
		case 2:
			return _("Act II");
	
		case 6:
			return _("Act III");
	
		case 3:
			return _("All In Order II");
	
		case 4:
			return _("Loyalty IV");
	
		case 7:
			return _("Loyalty II");
	
		case 8:
			return _("Loyalty III");
	
		case 5:
			return _("Criminal Mastermind IV");
	
		case 9:
			return _("Criminal Mastermind II");
	
		case 10:
			return _("Criminal Mastermind III");
	
		case 11:
			return _("Supporting Role II");
	
		default:
		
	}

	return "";
}

int func_98(int iParam0, int iParam1) // Hash - 0x5DED1051 ^0x5DED1051
{
	iParam1 == 0;

	switch (iParam0)
	{
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
	
		case 1:
			return 1;
	
		case 2:
			return 1;
	
		case 6:
			return 1;
	
		case 3:
			return 1;
	
		case 4:
			return 1;
	
		case 5:
			return 1;
	
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
	
		default:
		
	}

	return 0;
}

int func_99() // Hash - 0xAD5CD544 ^0xAD5CD544
{
	return 5;
}

int func_100(int iParam0) // Hash - 0xCC5E629C ^0xCC5E629C
{
	if (func_87(iParam0))
		return 5;

	return 0;
}

void func_101(int iParam0, int iParam1, int iParam2, var uParam3) // Hash - 0x9C09F769 ^0x9C09F769
{
	int num;
	char* str;
	char* str2;
	char* str3;
	char* str4;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;
	int value;
	int value2;
	int num7;

	switch (iParam1)
	{
		case 0:
			iParam1 = 0;
			break;
	
		case 1:
			iParam1 = 1;
			break;
	
		case 2:
			iParam1 = 2;
			break;
	
		case 3:
			iParam1 = 3;
			break;
	
		case 4:
			iParam1 = 4;
			break;
	
		case 5:
			iParam1 = 5;
			break;
	
		case 6:
			iParam1 = func_113(iParam0);
			break;
	
		case 7:
		case 8:
			iParam1 = func_112();
			break;
	}

	if (iParam1 != 0)
		if (iParam1 != 1)
			if (func_111(iParam0, iParam2) != 1)
				iParam1 = 1;

	num = func_112();
	str = func_110(iParam0, iParam2, false);
	str2 = func_109(iParam0, iParam1, iParam2, false);
	str3 = func_108(iParam0, iParam2);
	str4 = func_107(iParam0, iParam2);
	num2 = func_106(iParam0, num, iParam2);

	if (func_105(iParam0, -1) == true)
		num3 = 1;
	else
		num3 = 0;

	num5 = func_68(iParam1);
	num6 = func_106(iParam0, num5, iParam2);
	value = num2 - num6;
	value2 = num3 - num6;

	switch (iParam0)
	{
		case 15:
			num3 = func_47(1153, -1, 0);
		
			if (num3 > 25)
				num3 = 25;
		
			value = 25;
			value2 = num3;
			break;
	
		case 16:
			num3 = func_47(1152, -1, 0);
		
			if (num3 > 25)
				num3 = 25;
		
			value = 25;
			value2 = num3;
			break;
	
		case 12:
			num3 = func_47(1088, -1, 0);
		
			if (num3 > 25)
				num3 = 25;
		
			value = 25;
			value2 = num3;
			break;
	
		case 25:
			if (func_105(iParam0, -1))
			{
				num3 = func_47(2117, -1, 0) * 7;
				num4 = func_47(2116, -1, 0);
				num3 = 7;
				value = 7;
				value2 = num3;
			}
			else
			{
				num3 = func_47(2117, -1, 0) * 7;
				num4 = func_47(2116, -1, 0);
				num3 = num3 + num4;
			
				if (num3 > 7)
					num3 = 7;
			
				value = 7;
				value2 = num3;
			}
			break;
	
		case 26:
			if (func_105(iParam0, -1))
			{
				num3 = func_47(2117, -1, 0) * 7;
				num4 = func_47(2116, -1, 0);
				num3 = 28;
				value = 28;
				value2 = num3;
			}
			else
			{
				num3 = func_47(2117, -1, 0) * 7;
				num4 = func_47(2116, -1, 0);
				num3 = num3 + num4;
			
				if (num3 > 28)
					num3 = 28;
			
				value = 28;
				value2 = num3;
			}
			break;
	
		case 162:
			if (func_105(iParam0, -1))
			{
				num3 = 43;
				value = 43;
				value2 = num3;
			}
			else
			{
				num3 = func_103();
				value = 43;
				value2 = num3;
			}
			break;
	
		case 167:
			if (func_105(iParam0, -1))
			{
				num3 = 4;
				value = 4;
				value2 = num3;
			}
			else
			{
				num3 = func_47(7254, -1, 0);
				value = 4;
				value2 = num3;
			}
			break;
	
		case 166:
			if (func_105(iParam0, -1))
			{
				num3 = 100;
				value = 100;
				value2 = num3;
			}
			else
			{
				num3 = func_47(7238, -1, 0);
				value = 100;
				value2 = num3;
			}
			break;
	
		case 59:
			if (func_105(iParam0, -1))
			{
				num3 = 6;
				value = 6;
				value2 = num3;
			}
			else
			{
				num3 = func_102();
				value = 6;
				value2 = num3;
			}
			break;
	}

	if (func_105(iParam0, -1))
		num7 = 100;
	else
		num7 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(value2) / SYSTEM::TO_FLOAT(value)) * 100f);

	func_62(str, str2, str3, str4, num2, num3, num7, iParam1, uParam3, iParam0, 152);
	return;
}

int func_102() // Hash - 0x179C94F7 ^0x3B01F8E9
{
	int num;

	num = func_47(8283, -1, 0);

	if (IS_BIT_SET(num, 19))
		return 6;
	else if (IS_BIT_SET(num, 4))
		return 5;
	else if (IS_BIT_SET(num, 3))
		return 4;
	else if (IS_BIT_SET(num, 2))
		return 3;
	else if (IS_BIT_SET(num, 1))
		return 2;
	else if (IS_BIT_SET(num, 0))
		return 1;

	return 0;
}

int func_103() // Hash - 0xE6722AD4 ^0xE6722AD4
{
	int i;
	int num;

	for (i = 0; i <= 49; i = i + 1)
	{
		if (func_104(i) != 0)
			num = num + 1;
	}

	return num;
}

int func_104(int iParam0) // Hash - 0x146954FD ^0x446CADB3
{
	switch (iParam0)
	{
		case 0:
			return func_47(12047, -1, 0);
	
		case 1:
			return func_47(12048, -1, 0);
	
		case 2:
			return func_47(12049, -1, 0);
	
		case 3:
			return func_47(12050, -1, 0);
	
		case 4:
			return func_47(12051, -1, 0);
	
		case 5:
			return func_47(12052, -1, 0);
	
		case 6:
			return func_47(12053, -1, 0);
	
		case 7:
			return func_47(12054, -1, 0);
	
		case 8:
			return func_47(12055, -1, 0);
	
		case 9:
			return func_47(12056, -1, 0);
	
		case 10:
			return func_47(12057, -1, 0);
	
		case 11:
			return func_47(12058, -1, 0);
	
		case 12:
			return func_47(12059, -1, 0);
	
		case 13:
			return func_47(12060, -1, 0);
	
		case 14:
			return func_47(12061, -1, 0);
	
		case 15:
			return func_47(12062, -1, 0);
	
		case 16:
			return func_47(12063, -1, 0);
	
		case 17:
			return func_47(12064, -1, 0);
	
		case 18:
			return func_47(12065, -1, 0);
	
		case 19:
			return func_47(12066, -1, 0);
	
		case 20:
			return func_47(12067, -1, 0);
	
		case 21:
			return func_47(12068, -1, 0);
	
		case 22:
			return func_47(12069, -1, 0);
	
		case 23:
			return func_47(12070, -1, 0);
	
		case 24:
			return func_47(12071, -1, 0);
	
		case 25:
			return func_47(12072, -1, 0);
	
		case 26:
			return func_47(12073, -1, 0);
	
		case 27:
			return func_47(12074, -1, 0);
	
		case 28:
			return func_47(12075, -1, 0);
	
		case 29:
			return func_47(12076, -1, 0);
	
		case 30:
			return func_47(12077, -1, 0);
	
		case 31:
			return func_47(12078, -1, 0);
	
		case 32:
			return func_47(12079, -1, 0);
	
		case 33:
			return func_47(12080, -1, 0);
	
		case 34:
			return func_47(12081, -1, 0);
	
		case 35:
			return func_47(12082, -1, 0);
	
		case 36:
			return func_47(12083, -1, 0);
	
		case 37:
			return func_47(12084, -1, 0);
	
		case 38:
			return func_47(12085, -1, 0);
	
		case 39:
			return func_47(12086, -1, 0);
	
		case 40:
			return func_47(12087, -1, 0);
	
		case 41:
			return func_47(12088, -1, 0);
	
		case 42:
			return func_47(12089, -1, 0);
	
		case 43:
			return func_47(12090, -1, 0);
	
		case 44:
			return func_47(12091, -1, 0);
	
		case 45:
			return func_47(12092, -1, 0);
	
		case 46:
			return func_47(12093, -1, 0);
	
		case 47:
			return func_47(12094, -1, 0);
	
		case 48:
			return func_47(12095, -1, 0);
	
		case 49:
			return func_47(12096, -1, 0);
	
		default:
			break;
	}

	return 0;
}

BOOL func_105(int iParam0, int iParam1) // Hash - 0x1FBC7704 ^0x2B72B37D
{
	Hash statHash;
	int outValue;

	statHash = Global_2850649[iParam0 /*3*/][func_45(iParam1)];

	if (STATS::STAT_GET_BOOL(statHash, &outValue, -1))
		return outValue;

	return 0;
}

int func_106(int iParam0, int iParam1, int iParam2) // Hash - 0xE8154449 ^0xE8154449
{
	iParam1 == 5;
	iParam2 == 0;

	switch (iParam0)
	{
		case 15:
			return 25;
	
		case 16:
			return 25;
	
		case 12:
			return 25;
	
		case 25:
			return 7;
	
		case 26:
			return 28;
	
		case 162:
			return 43;
	
		case 167:
			return 4;
	
		case 166:
			return 100;
	
		case 59:
			return 6;
	}

	return 1;
}

char* func_107(int iParam0, int iParam1) // Hash - 0xA6133955 ^0xA6133955
{
	iParam1 == 9;

	switch (iParam0)
	{
		case 0:
			return "MPAwards2";
	
		case 2:
			return "MPAwards5";
	
		case 3:
			return "MPAwards5";
	
		case 4:
			return "MPAwards5";
	
		case 5:
			return "MPAwards5";
	
		case 6:
			return "MPAwards5";
	
		case 7:
			return "MPAwards5";
	
		case 8:
			return "MPAwards5";
	
		case 10:
			return "MPAwards5";
	
		case 11:
			return "MPAwards5";
	
		case 12:
			return "MPAwards5";
	
		case 13:
			return "MPAwards5";
	
		case 14:
			return "MPAwards5";
	
		case 15:
			return "MPAwards5";
	
		case 16:
			return "MPAwards5";
	
		case 17:
			return "MPAwards5";
	
		case 18:
			return "MPAwards5";
	
		case 20:
			return "MPAwards5";
	
		case 21:
			return "MPAwards5";
	
		case 22:
			return "MPAWARDS5";
	
		case 23:
			return "MPAwards4";
	
		case 25:
			return "MPAwardHeists";
	
		case 26:
			return "MPAwardHeists";
	
		case 27:
			return "MPAWARDS6";
	
		case 160:
			return "MPAwardHeists";
	
		case 159:
			return "MPAwardHeists";
	
		case 162:
			return "MPAwardHeists";
	
		case 163:
			return "MPAwardHeists";
	
		case 164:
			return "MPAwardHeists";
	
		case 165:
			return "MPAwardNightclub";
	
		case 166:
			return "MPAwardNightclub";
	
		case 167:
			return "MPAwardNightclub";
	
		case 30:
			return "MPAwardsArena";
	
		case 31:
			return "MPAwardsArena";
	
		case 32:
			return "MPAwardsArena";
	
		case 33:
			return "MPAwardsArena";
	
		case 34:
			return "MPAwardsArena";
	
		case 35:
			return "MPAwardsArena";
	
		case 36:
			return "MPAwardsArena";
	
		case 37:
			return "MPAwardsArena";
	
		case 38:
			return "MPAwardsArena";
	
		case 39:
			return "MPAwardsArena";
	
		case 40:
			return "MPAwardsArena";
	
		case 41:
			return "MPAwardsArena";
	
		case 42:
			return "MPAwardsArena";
	
		case 43:
			return "MPAwardsArena";
	
		case 44:
			return "MPAwardsArena";
	
		case 45:
			return "MPAwardsArena";
	
		case 46:
			return "MPAwardsArena";
	
		case 47:
			return "MPAwardsArena";
	
		case 48:
			return "MPAwardsArena";
	
		case 49:
			return "MPAwardsArena";
	
		case 50:
			return "MPAwardsArena";
	
		case 51:
			return "MPAwardsArena";
	
		case 52:
			return "MPAwardsArena";
	
		case 53:
			return "MPAwardCasino";
	
		case 54:
			return "MPAwardCasino";
	
		case 55:
			return "MPAwardCasino";
	
		case 56:
			return "MPAwardCasino";
	
		case 57:
			return "MPAwardCasino";
	
		case 58:
			return "MPAwardCasino";
	
		case 59:
			return "MPAwardCasino";
	
		case 62:
			return "MPAwardCasino";
	
		case 60:
			return "MPAwardCasino";
	
		case 61:
			return "MPAwardCasino";
	
		case 63:
			return "MPAwardCasinoHeist";
	
		case 64:
			return "MPAwardCasinoHeist";
	
		case 65:
			return "MPAwardCasinoHeist";
	
		case 66:
			return "MPAwardCasinoHeist";
	
		case 67:
			return "MPAwardCasinoHeist";
	
		case 68:
			return "MPAwardCasinoHeist";
	
		case 69:
			return "MPAwardCasinoHeist";
	
		case 70:
			return "MPAwardCasinoHeist";
	
		case 71:
			return "MPAwardCasinoHeist";
	
		case 72:
			return "MPAwardCasinoHeist";
	
		case 73:
			return "MPAwardCasinoHeist";
	
		case 74:
			return "MPAwardCasinoHeist";
	
		case 75:
			return "MPAwardCasinoHeist";
	
		case 76:
			return "MPAwardCasinoHeist";
	
		case 77:
			return "MPAwardCasinoHeist";
	
		case 78:
			return "MPAwardCasinoHeist";
	
		case 79:
			return "MPAwardCasinoHeist";
	
		case 80:
			return "MPAwardCasinoHeist";
	
		case 81:
			return "MPAwardCasinoHeist";
	
		case 82:
			return "MPAwardCasinoHeist";
	
		case 83:
			return "MPAwardCasinoHeist";
	
		case 84:
			return "MPAwardCasinoHeist";
	
		case 85:
			return "MPAwardCasinoHeist";
	
		case 86:
			return "MPAwardCasinoHeist";
	
		case 87:
			return "MPAwardCasinoHeist";
	
		case 88:
			return "MPAwardCasinoHeist";
	
		case 89:
			return "MPAwardSummer2020";
	
		case 90:
			return "MPAwardSummer2020";
	
		case 93:
			return "MPAwardSummer2020";
	
		case 92:
			return "MPAwardSummer2020";
	
		case 91:
			return "MPAwardSummer2020";
	
		case 94:
			return "MPAwardSummer2020";
	
		case 95:
			return "MPAwardIslandHeist";
	
		case 96:
			return "MPAwardIslandHeist";
	
		case 97:
			return "MPAwardIslandHeist";
	
		case 98:
			return "MPAwardIslandHeist";
	
		case 99:
			return "MPAwardIslandHeist";
	
		case 100:
			return "MPAwardIslandHeist";
	
		case 101:
			return "MPAwardIslandHeist";
	
		case 102:
			return "MPAwardIslandHeist";
	
		case 103:
			return "MPAwardIslandHeist";
	
		case 104:
			return "MPAwardIslandHeist";
	
		case 105:
			return "MPAwardIslandHeist";
	
		case 106:
			return "MPAwardIslandHeist";
	
		case 107:
			return "MPAwardIslandHeist";
	
		case 108:
			return "MPAwardIslandHeist";
	
		case 109:
			return "MPAwardIslandHeist";
	
		case 110:
			return "MPAwardIslandHeist";
	
		case 111:
			return "MPAwardIslandHeist";
	
		case 112:
			return "MPAwardIslandHeist";
	
		case 113:
		case 114:
		case 115:
		case 116:
		case 117:
		case 118:
		case 119:
		case 120:
		case 121:
		case 122:
		case 123:
		case 124:
		case 125:
		case 126:
			return "MPAwardTunerPack";
	
		case 127:
		case 128:
		case 129:
		case 130:
		case 131:
		case 132:
		case 133:
		case 134:
		case 135:
		case 136:
		case 137:
		case 138:
		case 139:
		case 140:
		case 141:
		case 142:
			return "MPAwardsFixer";
	
		case 143:
		case 144:
		case 145:
		case 146:
		case 147:
		case 148:
		case 149:
		case 150:
		case 151:
		case 152:
		case 153:
		case 154:
		case 155:
		case 156:
		case 157:
		case 158:
			return "MPAwardXmas2022";
	}

	return "";
}

char* func_108(int iParam0, int iParam1) // Hash - 0x4E684256 ^0x78D56217
{
	if (iParam1 == 9)
		iParam1 = 9;

	switch (iParam0)
	{
		case 0:
			return "Buyeverygun";
	
		case 2:
			return "HoleInOne";
	
		case 3:
			return "TargetGridGranny";
	
		case 4:
			return "TennisFiveSets";
	
		case 5:
			return "TennisStraightSets";
	
		case 6:
			return "ClearAllGangHideouts";
	
		case 7:
			return "SixDartCheckout";
	
		case 8:
			return "WinEveryGameModeOnce";
	
		case 10:
			return "WinEveryTypeOfRace";
	
		case 11:
			return "HoldaRaceWorldRecord";
	
		case 12:
			return "Wear25DifferentItemsOfClothing";
	
		case 13:
			return "FullyModACar";
	
		case 14:
			return "WinACustomClassRace";
	
		case 15:
			return "Play25DifferentDeathmatches";
	
		case 16:
			return "Play25DifferentRaces";
	
		case 17:
			return "MostKillsInGangAttack";
	
		case 18:
			return "MostKillsInSurvival";
	
		case 20:
			return "Kill3InARaceAndWin";
	
		case 21:
			return "GetATattooOnEachBodyPart";
	
		case 22:
			return "10KillStreakDeathmatch";
	
		case 23:
			return "Unirider";
	
		case 25:
			return "goaloriented";
	
		case 26:
			return "overachiever";
	
		case 27:
			return "joyrider";
	
		case 160:
			return "CantTouchThis";
	
		case 159:
			return "FairPlay";
	
		case 162:
			return "JackOfAllTrades";
	
		case 163:
			return "ItTakesTwo";
	
		case 164:
			return "Showroom";
	
		case 165:
			return "Coordinated";
	
		case 166:
			return "HotSpot";
	
		case 167:
			return "Clubber";
	
		case 30:
			return "BEGINNER";
	
		case 31:
			return "FIELDFILLER";
	
		case 32:
			return "ArmchairRracer";
	
		case 33:
			return "LEARNER";
	
		case 34:
			return "SUNDAYDRIVER";
	
		case 35:
			return "THEROOKIE";
	
		case 36:
			return "BUMPANDRUN";
	
		case 37:
			return "GEARHEAD";
	
		case 38:
			return "DOORSLAMMER";
	
		case 39:
			return "HOTLAP";
	
		case 40:
			return "ARENAAMATEUR";
	
		case 41:
			return "PAINTTRADER";
	
		case 42:
			return "SHUNTER";
	
		case 43:
			return "JOCK";
	
		case 44:
			return "WARRIOR";
	
		case 45:
			return "TBONE";
	
		case 46:
			return "MAYHEM";
	
		case 47:
			return "WRECKER";
	
		case 48:
			return "CRASHCOURSE";
	
		case 49:
			return "ARENALEGEND";
	
		case 50:
			return "PEGASUS";
	
		case 51:
			return "contactsport";
	
		case 52:
			return "UNSTOPPABLE";
	
		case 53:
			return "LooseCheng";
	
		case 54:
			return "HouseKeeping";
	
		case 55:
			return "StrongArmTactics";
	
		case 56:
			return "PlayToWin";
	
		case 57:
			return "BadBeat";
	
		case 58:
			return "CashingOut";
	
		case 59:
			return "StraightFlush";
	
		case 62:
			return "LuckyLucky";
	
		case 60:
			return "TopPair";
	
		case 61:
			return "FullHouse";
	
		case 63:
			return "SCOPEOUT";
	
		case 64:
			return "ALLCREWEDUP";
	
		case 65:
			return "MOVINGON";
	
		case 66:
			return "AfterParty";
	
		case 67:
			return "GUNMAN";
	
		case 68:
			return "SmashAndGrab";
	
		case 69:
			return "HiddenInPlainSight";
	
		case 70:
			return "Undetected";
	
		case 71:
			return "AllRounder";
	
		case 72:
			return "EliteThief";
	
		case 73:
			return "Professional";
	
		case 74:
			return "SupportAct";
	
		case 75:
			return "Shafted";
	
		case 76:
			return "Collector";
	
		case 77:
			return "Deadeye";
	
		case 78:
			return "PistolAtDawn";
	
		case 79:
			return "BeatTheTraffic";
	
		case 80:
			return "AllWheels";
	
		case 81:
			return "FEELINGROGGY";
	
		case 82:
			return "ApeEscape";
	
		case 83:
			return "MonkeyMind";
	
		case 84:
			return "AquaticApe";
	
		case 85:
			return "KeepingTheFaith";
	
		case 86:
			return "TrueLove";
	
		case 87:
			return _("Nemesis");
	
		case 88:
			return "Friendzoned";
	
		case 89:
			return "KingOfQub3d";
	
		case 90:
			return "Qubism";
	
		case 93:
			return "CrankItTo11";
	
		case 92:
			return "GodofQub3d";
	
		case 91:
			return "Qubits";
	
		case 94:
			return "1111";
	
		case 95:
			return "Inandout";
	
		case 96:
			return "EasyAccess";
	
		case 97:
			return "ItsaSteal";
	
		case 98:
			return "MaximumDistruption";
	
		case 99:
			return "TheIslandHeist";
	
		case 100:
			return "GoingAlone";
	
		case 101:
			return "Teamwork";
	
		case 102:
			return "TravelPlans";
	
		case 103:
			return "ProfessionalThief";
	
		case 104:
			return "CatBurglar";
	
		case 105:
			return "OneOfThem";
	
		case 106:
			return "GoforGold";
	
		case 107:
			return "Elitist";
	
		case 108:
			return "Blowhard";
	
		case 109:
			return "HelpingOut";
	
		case 110:
			return "Courier";
	
		case 111:
			return "PartyVibes";
	
		case 112:
			return "HelpingHand";
	
		case 113:
			return "LSCarMeet";
	
		case 114:
			return "ProCarExporter";
	
		case 115:
			return "TheUnionDepositoryContract";
	
		case 116:
			return "TheSuperdollarDeal";
	
		case 117:
			return "TheBankContract";
	
		case 118:
			return "TheECUJob";
	
		case 119:
			return "ThePrisionContract";
	
		case 120:
			return "TheAgencyDeal";
	
		case 121:
			return "TheLostContract";
	
		case 122:
			return "TheDataContract";
	
		case 123:
			return "StraighttoVideo";
	
		case 124:
			return "MonkeyseeMonkeydo";
	
		case 125:
			return "Trainedtokill";
	
		case 126:
			return "TheDirector";
	
		case 127:
			return "OnCourse";
	
		case 128:
			return "TheNighClubLeak";
	
		case 129:
			return "TheCountryClubLeak";
	
		case 130:
			return "TheSouthCentralLeak";
	
		case 131:
			return "StudioTime";
	
		case 132:
			return "DontFuckWithDre";
	
		case 133:
			return "Backup";
	
		case 134:
			return "SeedCapitalFranklin";
	
		case 135:
			return "FireitUpFranklin";
	
		case 136:
			return "OGKushFranklin";
	
		case 137:
			return "ContractKiller";
	
		case 138:
			return "ADogsBestFriend";
	
		case 139:
			return "SoundCheck";
	
		case 140:
			return "SeedCapitaLamar";
	
		case 141:
			return "FireItUpLamar";
	
		case 142:
			return "OGKushLamar";
	
		case 143:
			return "WelcomeToTheTroupe";
	
		case 144:
			return "DesignatedDriver";
	
		case 145:
			return "FatalIncursion";
	
		case 146:
			return "UncontrolledSubstance";
	
		case 147:
			return "MakeWarNotLove";
	
		case 148:
			return "OffTheRails";
	
		case 149:
			return "BackItUp";
	
		case 150:
			return "LickMyAcid";
	
		case 151:
			return "ChemicalReaction";
	
		case 152:
			return "ThisIsAnIntervention";
	
		case 153:
			return "UnusualSuspects";
	
		case 154:
			return "Friedmind";
	
		case 155:
			return "CheckingIn";
	
		case 156:
			return "BDKD";
	
		case 157:
			return "BackItUp2";
	
		case 158:
			return "5StarRide";
	}

	return "";
}

char* func_109(int iParam0, int iParam1, int iParam2, BOOL bParam3) // Hash - 0xFF6398F4 ^0x4E0EF248
{
	iParam2 == 9;
	bParam3;
	iParam1 == 5;

	switch (iParam0)
	{
		case 0:
			return "AWS_521";
	
		case 2:
			return "AWS_660";
	
		case 3:
			return "AWS_667";
	
		case 4:
			return "AWS_670";
	
		case 5:
			return "AWS_671";
	
		case 6:
			return "AWS_691";
	
		case 7:
			return "AWS_697";
	
		case 8:
			return "AWS_701";
	
		case 10:
			return "AWS_705";
	
		case 11:
			return "AWS_706";
	
		case 12:
			return "AWS_709";
	
		case 13:
			return "AWS_711";
	
		case 14:
			return "AWS_712";
	
		case 15:
			return "AWS_714";
	
		case 16:
			return "AWS_715";
	
		case 17:
			return "AWS_718";
	
		case 18:
			return "AWS_719";
	
		case 20:
			return "AWS_725";
	
		case 21:
			return "AWS_727";
	
		case 22:
			return "AWS_717";
	
		case 23:
			if (MISC::SHOULD_USE_METRIC_MEASUREMENTS())
				return "AWS_729_M";
			else
				return "AWS_729";
			break;
	
		case 25:
			return "AWS_783";
	
		case 26:
			return "AWS_784";
	
		case 27:
			return "AWS_771";
	
		case 160:
			return "AWS_751";
	
		case 164:
			return "AWS_763";
	
		case 159:
			return "AWS_754";
	
		case 162:
			return "AWS_765";
	
		case 163:
			return "AWS_756";
	
		case 165:
			return "AWS_793";
	
		case 166:
			return "AWS_794";
	
		case 167:
			return "AWS_795";
	
		case 30:
			return "AWS_796";
	
		case 31:
			return "AWS_797";
	
		case 32:
			return "AWS_798";
	
		case 33:
			return "AWS_799";
	
		case 34:
			return "AWS_800";
	
		case 35:
			return "AWS_801";
	
		case 36:
			return "AWS_802";
	
		case 37:
			return "AWS_803";
	
		case 38:
			return "AWS_804";
	
		case 39:
			return "AWS_805";
	
		case 40:
			return "AWS_806";
	
		case 41:
			return "AWS_807";
	
		case 42:
			return "AWS_808";
	
		case 43:
			return "AWS_809";
	
		case 44:
			return "AWS_810";
	
		case 45:
			return "AWS_811";
	
		case 46:
			return "AWS_812";
	
		case 47:
			return "AWS_813";
	
		case 48:
			return "AWS_814";
	
		case 49:
			return "AWS_815";
	
		case 50:
			return "AWS_816";
	
		case 51:
			return "AWS_819";
	
		case 52:
			return "AWS_820";
	
		case 53:
			return _("Complete Loose Cheng for the first time and earn $50,000.");
	
		case 54:
			return _("Complete House Keeping for the first time and earn $50,000.");
	
		case 55:
			return _("Complete Strong Arm Tactics for the first time and earn $50,000.");
	
		case 56:
			return _("Complete Play to Win for the first time and earn $50,000.");
	
		case 57:
			return _("Complete Bad Beat for the first time and earn $50,000.");
	
		case 58:
			return _("Complete Cashing Out for the first time and earn $100,000.");
	
		case 59:
			return _("Complete all Casino Story Missions in order and earn $500,000.");
	
		case 62:
			return _("Complete a Casino Story Mission without losing a life and earn $50,000.");
	
		case 60:
			return _("Complete all Casino Story Missions as a Crew member and earn $100,000.");
	
		case 61:
			return _("Complete all Casino Story Missions as Leader to earn $100,000 and a bonus item.");
	
		case 63:
			return _("Scope all entrances and exits for The Diamond Casino Heist.");
	
		case 64:
			return _("Unlock all possible crew members for The Diamond Casino Heist.");
	
		case 65:
			return _("Stop a mall cop being fired again during The Diamond Casino Heist.");
	
		case 66:
			return _("Use someone famous to get into the Casino back area.");
	
		case 67:
			return _("Find and help break out an old accomplice for The Diamond Casino Heist.");
	
		case 68:
			return _("Complete the Aggressive approach to The Diamond Casino Heist and earn $100000.");
	
		case 69:
			return _("Complete The Big Con approach to The Diamond Casino Heist without breaking your disguise inside the Casino and earn $150000.");
	
		case 70:
			return _("Complete the Silent & Sneaky approach to The Diamond Casino Heist without ever being detected and earn $200000.");
	
		case 71:
			return _("Complete the Aggressive, The Big Con and Silent & Sneaky approaches to The Diamond Casino Heist and earn $300000.");
	
		case 72:
			return _("Complete the elite challenges for the Aggressive, The Big Con and Silent & Sneaky approaches to The Diamond Casino Heist and earn $350000.");
	
		case 73:
			return _("Complete The Diamond Casino Heist on Hard and without losing a life and earn $250,000.");
	
		case 74:
			return _("Complete The Diamond Casino Heist as a crew member.");
	
		case 75:
			return _("Use the elevator shaft to reach the staff lobby during The Diamond Casino Heist.");
	
		case 76:
			return _("Steal all variations of loot from the vault during The Diamond Casino Heist.");
	
		case 77:
			return _("Get over 90% accuracy for an entire playthrough of Badlands Revenge II.");
	
		case 78:
			return _("Complete Badlands Revenge II using only pistols.");
	
		case 79:
			return _("Complete the full race without crashing in Race And Chase.");
	
		case 80:
			return _("Complete Race And Chase with all vehicle types.");
	
		case 81:
			return _("Complete The Wizard's Ruin adventure as Grog.");
	
		case 82:
			return _("Survive any stage without taking any damage in Space Monkey 3: Bananas Gone Bad.");
	
		case 83:
			return _("Complete Space Monkey 3: Bananas Gone Bad without the use of any powerups or pickups.");
	
		case 84:
			return _("Complete the underwater level in Monkey Paradise.");
	
		case 85:
			return _("Complete a level of Defender of the Faith by only pressing right.");
	
		case 86:
			return _("Get a true love rating on The Love Professor.");
	
		case 87:
			return _("Find your nemesis using The Love Professor Cabinet.");
	
		case 88:
			return _("The friendzone doesn't exist but perhaps you can find yourself in it using The Love Professor.");
	
		case 89:
			return _("Get first place on the QUB3D leaderboard.");
	
		case 90:
			return _("Reach level 20 in QUB3D without using special abilities.");
	
		case 93:
			return _("Get the highest score in Axe of Fury.");
	
		case 92:
			return _("Get a score of 19000 in a single play of QUB3D.");
	
		case 91:
			return _("Reach level 20 without removing any blocks from play.");
	
		case 94:
			return _("Get the highest score in Axe of Fury 11 times.");
	
		case 95:
			return _("Scope out all infiltration and escape points on Cayo Perico.");
	
		case 96:
			return _("Scope out all entry points into El Rubio's compound on Cayo Perico.");
	
		case 97:
			return _("Scope out all the secondary target locations in a single playthrough of The Cayo Perico Heist.");
	
		case 98:
			return _("Complete all three disruption prep missions in a single playthrough of The Cayo Perico Heist.");
	
		case 99:
			return _("Complete The Cayo Perico Heist for the first time to earn $200,000.");
	
		case 100:
			return _("Complete The Cayo Perico Heist with one player to earn $100,000.");
	
		case 101:
			return _("Complete The Cayo Perico Heist with four players to earn $100,000.");
	
		case 102:
			return _("Approach The Cayo Perico Heist using all of the different vehicles to earn $250,000.");
	
		case 103:
			return _("Steal all variations of the primary target during The Cayo Perico Heist to earn $150,000.");
	
		case 104:
			return _("Complete The Cayo Perico Heist without ever alerting the guards to earn $200,000.");
	
		case 105:
			return _("Enter the compound using a stolen disguise during The Cayo Perico Heist.");
	
		case 106:
			return _("Steal El Rubio's prized weapon during The Cayo Perico Heist.");
	
		case 107:
			return _("Complete the elite challenge for The Cayo Perico Heist to earn $200,000.");
	
		case 108:
			return _("Complete The Cayo Perico Heist on Hard and without losing a life to earn $200,000.");
	
		case 109:
			return _("Complete all Palms Trax requests sent by Tom Connors.");
	
		case 110:
			return _("Complete all Keinemusik's requests sent by English Dave.");
	
		case 111:
			return _("Revisit the Cayo Perico beach party after completing The Cayo Perico Heist.");
	
		case 112:
			return _("Complete all Moodymann's requests sent by Tom Connors.");
	
		case 113:
			return _("Visit The LS Car Meet for the first time.");
	
		case 114:
			return _("Deliver all 10 Exotic Exports Vehicles to the Docks in a single day.");
	
		case 115:
			return _("Complete The Union Depository Contract as leader to earn $75,000.");
	
		case 116:
			return _("Complete The Superdollar Deal as leader to earn $75,000.");
	
		case 117:
			return _("Complete The Bank Contract as leader to earn $75,000.");
	
		case 118:
			return _("Complete The E.C.U. Job as leader to earn $75,000.");
	
		case 119:
			return _("Complete The Prison Contract as leader to earn $75,000.");
	
		case 120:
			return _("Complete The Agency Deal as leader to earn $75,000.");
	
		case 121:
			return _("Complete The Lost Contract as leader to earn $75,000.");
	
		case 122:
			return _("Complete The Data Contract as leader to earn $75,000.");
	
		case 123:
			return _("Complete all levels using only the pistol in Camhedz.");
	
		case 124:
			return _("Kill all costumed weirdos across all scenes in Camhedz.");
	
		case 125:
			return _("Get an average of 60% accuracy across all scenes in Camhedz.");
	
		case 126:
			return _("Get a 5-star rating on each of the scenes in Camhedz.");
	
		case 127:
			return _("Meet Dr. Dre at the Los Santos Golf Club as leader to earn $50,000.");
	
		case 128:
			return _("Locate this copy of Dr. Dre's stolen music as leader to earn $100,000.");
	
		case 129:
			return _("Locate this copy of Dr. Dre's stolen music as leader to earn $100,000.");
	
		case 130:
			return _("Locate this copy of Dr. Dre's stolen music as leader to earn $100,000.");
	
		case 131:
			return _("Help Dr. Dre at Record A Studios as leader to earn $100,000.");
	
		case 132:
			return _("Track down the thief who stole Dr. Dre's music as leader to earn $250,000.");
	
		case 133:
			return _("Complete all of Dr. Dre's Story missions as a member of an Organization or Motorcycle Club to earn $100,000.");
	
		case 134:
			return _("Complete Seed Capital as Franklin to earn $100,000.");
	
		case 135:
			return _("Complete Fire It Up as Franklin to earn $100,000.");
	
		case 136:
			return _("Complete OG Kush as Franklin to earn $100,000.");
	
		case 137:
			return _("Complete every Payphone Hit with the Assassination Bonus.");
	
		case 138:
			return _("Pet Chop.");
	
		case 139:
			return _("Visit Record A Studios.");
	
		case 140:
			return _("Complete Seed Capital as Lamar to earn $100,000.");
	
		case 141:
			return _("Complete Fire It Up as Lamar to earn $100,000.");
	
		case 142:
			return _("Complete OG Kush as Lamar to earn $100,000.");
	
		case 143:
			return "AWS_1010";
	
		case 144:
			return "AWS_987";
	
		case 145:
			return "AWS_988";
	
		case 146:
			return "AWS_989";
	
		case 147:
			return "AWS_990";
	
		case 148:
			return "AWS_991";
	
		case 149:
			return "AWS_992";
	
		case 150:
			return "AWS_993";
	
		case 151:
			return "AWS_994";
	
		case 152:
			return "AWS_995";
	
		case 153:
			return "AWS_996";
	
		case 154:
			return "AWS_997";
	
		case 155:
			return "AWS_998";
	
		case 156:
			return "AWS_999";
	
		case 157:
			return "AWS_1000";
	
		case 158:
			return "AWS_1001";
	}

	return "";
}

char* func_110(int iParam0, int iParam1, BOOL bParam2) // Hash - 0x3A600D1B ^0x836A5696
{
	bParam2;
	iParam1 == 9;

	switch (iParam0)
	{
		case 0:
			return "AWT_521";
	
		case 2:
			return "AWT_660";
	
		case 3:
			return "AWT_667";
	
		case 4:
			return "AWT_670";
	
		case 5:
			return "AWT_671";
	
		case 6:
			return "AWT_691";
	
		case 7:
			return "AWT_697";
	
		case 8:
			return "AWT_701";
	
		case 10:
			return "AWT_705";
	
		case 11:
			return "AWT_706";
	
		case 12:
			return "AWT_709";
	
		case 13:
			return "AWT_711";
	
		case 14:
			return "AWT_712";
	
		case 15:
			return "AWT_714";
	
		case 16:
			return "AWT_715";
	
		case 17:
			return "AWT_718";
	
		case 18:
			return "AWT_719";
	
		case 20:
			return "AWT_725";
	
		case 21:
			return "AWT_727";
	
		case 22:
			return "AWT_717";
	
		case 23:
			return "AWT_729";
	
		case 25:
			return "AWT_783";
	
		case 26:
			return "AWT_784";
	
		case 160:
			return "AWT_751";
	
		case 159:
			return "AWT_754";
	
		case 162:
			return "AWT_765";
	
		case 164:
			return "AWT_763";
	
		case 163:
			return "AWT_756";
	
		case 165:
			return "AWT_793";
	
		case 166:
			return "AWT_794";
	
		case 167:
			return "AWT_795";
	
		case 30:
			return "AWT_796";
	
		case 31:
			return "AWT_797";
	
		case 32:
			return "AWT_798";
	
		case 33:
			return "AWT_799";
	
		case 34:
			return "AWT_800";
	
		case 35:
			return "AWT_801";
	
		case 36:
			return "AWT_802";
	
		case 37:
			return "AWT_803";
	
		case 38:
			return "AWT_804";
	
		case 39:
			return "AWT_805";
	
		case 40:
			return "AWT_806";
	
		case 41:
			return "AWT_807";
	
		case 42:
			return "AWT_808";
	
		case 43:
			return "AWT_809";
	
		case 44:
			return "AWT_810";
	
		case 45:
			return "AWT_811";
	
		case 46:
			return "AWT_812";
	
		case 47:
			return "AWT_813";
	
		case 48:
			return "AWT_814";
	
		case 49:
			return "AWT_815";
	
		case 50:
			return "AWT_816";
	
		case 51:
			return "AWT_819";
	
		case 52:
			return "AWT_820";
	
		case 53:
			return _("Loose Cheng");
	
		case 54:
			return _("House Keeping");
	
		case 55:
			return _("Strong Arm Tactics");
	
		case 56:
			return _("Play to Win");
	
		case 57:
			return _("Bad Beat");
	
		case 58:
			return _("Cashing Out");
	
		case 59:
			return _("Straight");
	
		case 62:
			return _("Lucky Lucky");
	
		case 60:
			return _("Top Pair");
	
		case 61:
			return _("Full House");
	
		case 63:
			return _("Scope Out");
	
		case 64:
			return _("All Crewed Up");
	
		case 65:
			return _("Moving On");
	
		case 66:
			return _("After Party");
	
		case 67:
			return _("Gunman");
	
		case 68:
			return _("Smash & Grab");
	
		case 69:
			return _("Hidden In Plain Sight");
	
		case 70:
			return _("Undetected");
	
		case 71:
			return _("All Rounder");
	
		case 72:
			return _("Elite Thief");
	
		case 73:
			return _("Professional");
	
		case 74:
			return _("Support Act");
	
		case 75:
			return _("Shafted");
	
		case 76:
			return _("Collector");
	
		case 77:
			return _("Dead Eye");
	
		case 78:
			return _("Pistols At Dawn");
	
		case 79:
			return _("Beat The Traffic");
	
		case 80:
			return _("All Wheels");
	
		case 81:
			return _("Feelin' Groggy");
	
		case 82:
			return _("Ape Escape");
	
		case 83:
			return _("Monkey Mind");
	
		case 84:
			return _("Aquatic Ape");
	
		case 85:
			return _("Keeping The Faith");
	
		case 86:
			return _("True Love");
	
		case 87:
			return _("Nemesis");
	
		case 88:
			return _("Friendzoned");
	
		case 89:
			return _("King Of QUB3D");
	
		case 90:
			return _("Qubism");
	
		case 93:
			return _("Crank It To 11");
	
		case 92:
			return _("God of QUB3D");
	
		case 91:
			return _("Qubits");
	
		case 94:
			return _("11 11");
	
		case 95:
			return _("In And Out");
	
		case 96:
			return _("Easy Access");
	
		case 97:
			return _("Its A Steal");
	
		case 98:
			return _("Maximum Disruption");
	
		case 99:
			return _("The Cayo Perico Heist");
	
		case 100:
			return _("Going Alone");
	
		case 101:
			return _("Teamwork");
	
		case 102:
			return _("Travel Plans");
	
		case 103:
			return _("Professional Thief");
	
		case 104:
			return _("Cat Burglar");
	
		case 105:
			return _("One Of Them");
	
		case 106:
			return _("Go For Gold");
	
		case 107:
			return _("Elitist");
	
		case 108:
			return _("Blow Hard");
	
		case 109:
			return _("Helping Out");
	
		case 110:
			return _("Courier");
	
		case 111:
			return _("Party Vibes");
	
		case 112:
			return _("Helping Hand");
	
		case 113:
			return _("LS Car Meet");
	
		case 114:
			return _("Pro Car Exporter");
	
		case 115:
			return _("The Union Depository Contract");
	
		case 116:
			return _("The Superdollar Deal");
	
		case 117:
			return _("The Bank Contract");
	
		case 118:
			return _("The E.C.U. Job");
	
		case 119:
			return _("The Prison Contract");
	
		case 120:
			return _("The Agency Deal");
	
		case 121:
			return _("The Lost Contract");
	
		case 122:
			return _("The Data Contract");
	
		case 123:
			return _("Straight To Video");
	
		case 124:
			return _("Monkey See Monkey Do");
	
		case 125:
			return _("Trained To Kill");
	
		case 126:
			return _("The Director");
	
		case 127:
			return _("On Course");
	
		case 128:
			return _("Nightlife Leak");
	
		case 129:
			return _("High Society Leak");
	
		case 130:
			return _("South Central Leak");
	
		case 131:
			return _("Studio Time");
	
		case 132:
			return _("Don't Fuck With Dre");
	
		case 133:
			return _("Backup");
	
		case 134:
			return _("Seed Capital - Franklin");
	
		case 135:
			return _("Fire It Up - Franklin");
	
		case 136:
			return _("OG Kush  - Franklin");
	
		case 137:
			return _("Contract Killer");
	
		case 138:
			return _("A Dog's Best Friend");
	
		case 139:
			return _("Sound Check");
	
		case 140:
			return _("Seed Capital - Lamar");
	
		case 141:
			return _("Fire It Up - Lamar");
	
		case 142:
			return _("OG Kush  - Lamar");
	
		case 143:
			return "AWT_1010";
	
		case 144:
			return "AWT_987";
	
		case 145:
			return "AWT_988";
	
		case 146:
			return "AWT_989";
	
		case 147:
			return "AWT_990";
	
		case 148:
			return "AWT_991";
	
		case 149:
			return "AWT_992";
	
		case 150:
			return "AWT_993";
	
		case 151:
			return "AWT_994";
	
		case 152:
			return "AWT_995";
	
		case 153:
			return "AWT_996";
	
		case 154:
			return "AWT_997";
	
		case 155:
			return "AWT_998";
	
		case 156:
			return "AWT_999";
	
		case 157:
			return "AWT_1000";
	
		case 158:
			return "AWT_1001";
	}

	return "";
}

int func_111(int iParam0, int iParam1) // Hash - 0xC3AA83C2 ^0xC3AA83C2
{
	iParam1 == 9;

	switch (iParam0)
	{
		case 0:
			return 1;
	
		case 2:
			return 1;
	
		case 3:
			return 1;
	
		case 4:
			return 1;
	
		case 5:
			return 1;
	
		case 6:
			return 1;
	
		case 7:
			return 1;
	
		case 8:
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
	
		case 20:
			return 1;
	
		case 21:
			return 1;
	
		case 22:
			return 1;
	
		case 23:
			return 1;
	
		case 25:
			return 1;
	
		case 26:
			return 1;
	
		case 27:
			return 1;
	
		case 160:
			return 1;
	
		case 159:
			return 1;
	
		case 162:
			return 1;
	
		case 164:
			return 1;
	
		case 163:
			return 1;
	
		case 165:
			return 1;
	
		case 166:
			return 1;
	
		case 167:
			return 1;
	
		case 30:
			return 1;
	
		case 31:
			return 1;
	
		case 32:
			return 1;
	
		case 33:
			return 1;
	
		case 34:
			return 1;
	
		case 35:
			return 1;
	
		case 36:
			return 1;
	
		case 37:
			return 1;
	
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
			return 1;
	
		case 45:
			return 1;
	
		case 46:
			return 1;
	
		case 47:
			return 1;
	
		case 48:
			return 1;
	
		case 49:
			return 1;
	
		case 50:
			return 1;
	
		case 51:
			return 1;
	
		case 52:
			return 1;
	
		case 53:
			return 1;
	
		case 54:
			return 1;
	
		case 55:
			return 1;
	
		case 56:
			return 1;
	
		case 57:
			return 1;
	
		case 58:
			return 1;
	
		case 59:
			return 1;
	
		case 62:
			return 1;
	
		case 60:
			return 1;
	
		case 61:
			return 1;
	
		case 63:
			return 1;
	
		case 64:
			return 1;
	
		case 65:
			return 1;
	
		case 66:
			return 1;
	
		case 67:
			return 1;
	
		case 68:
			return 1;
	
		case 69:
			return 1;
	
		case 70:
			return 1;
	
		case 71:
			return 1;
	
		case 72:
			return 1;
	
		case 73:
			return 1;
	
		case 74:
			return 1;
	
		case 75:
			return 1;
	
		case 76:
			return 1;
	
		case 77:
			return 1;
	
		case 78:
			return 1;
	
		case 79:
			return 1;
	
		case 80:
			return 1;
	
		case 81:
			return 1;
	
		case 82:
			return 1;
	
		case 83:
			return 1;
	
		case 84:
			return 1;
	
		case 85:
			return 1;
	
		case 86:
			return 1;
	
		case 87:
			return 1;
	
		case 88:
			return 1;
	
		case 89:
			return 1;
	
		case 90:
			return 1;
	
		case 93:
			return 1;
	
		case 92:
			return 1;
	
		case 91:
			return 1;
	
		case 94:
			return 1;
	
		case 95:
			return 1;
	
		case 96:
			return 1;
	
		case 97:
			return 1;
	
		case 98:
			return 1;
	
		case 99:
			return 1;
	
		case 100:
			return 1;
	
		case 101:
			return 1;
	
		case 102:
			return 1;
	
		case 103:
			return 1;
	
		case 104:
			return 1;
	
		case 105:
			return 1;
	
		case 106:
			return 1;
	
		case 107:
			return 1;
	
		case 108:
			return 1;
	
		case 109:
			return 1;
	
		case 110:
			return 1;
	
		case 111:
			return 1;
	
		case 112:
			return 1;
	
		case 113:
		case 114:
		case 115:
		case 116:
		case 117:
		case 118:
		case 119:
		case 120:
		case 121:
		case 122:
		case 123:
		case 124:
		case 125:
		case 126:
		case 127:
		case 128:
		case 129:
		case 130:
		case 131:
		case 132:
		case 133:
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
		case 145:
		case 146:
		case 147:
		case 148:
		case 149:
		case 150:
		case 151:
		case 152:
		case 153:
		case 154:
		case 155:
		case 156:
		case 157:
		case 158:
			return 1;
	}

	return 0;
}

int func_112() // Hash - 0xAD5CD544 ^0xAD5CD544
{
	return 5;
}

int func_113(int iParam0) // Hash - 0xA754738A ^0xA754738A
{
	if (func_105(iParam0, -1))
		return 5;

	return 0;
}

void func_114(int iParam0, int iParam1, int iParam2, var uParam3) // Hash - 0xF946839F ^0xF946839F
{
	int num;
	char* str;
	char* str2;
	char* str3;
	char* str4;
	int num2;
	int num3;
	int num4;
	int num5;
	int value;
	int value2;
	int num6;

	switch (iParam1)
	{
		case 0:
			iParam1 = 0;
			break;
	
		case 1:
			iParam1 = 1;
			break;
	
		case 2:
			iParam1 = 2;
			break;
	
		case 3:
			iParam1 = 3;
			break;
	
		case 4:
			iParam1 = 4;
			break;
	
		case 5:
			iParam1 = 5;
			break;
	
		case 6:
			iParam1 = func_120(iParam0, iParam2);
			break;
	
		case 7:
		case 8:
			iParam1 = func_119(iParam0, iParam2);
			break;
	}

	num = func_119(iParam0, iParam2);

	if (iParam1 != 0)
		if (iParam1 != 1)
			if (func_61(iParam0, iParam2) != 1)
				iParam1 = 1;

	str = func_118(iParam0, iParam2);
	str2 = func_117(iParam0, iParam1, iParam2);
	str3 = func_116(iParam0, iParam1, iParam2);
	str4 = func_115(iParam0, iParam1, iParam2);
	num2 = func_49(iParam0, num, iParam2);
	num3 = func_48(iParam0, -1);
	num4 = func_68(iParam1);
	num5 = func_49(iParam0, num4, iParam2);
	value = num2 - num5;
	value2 = num3 - num5;
	num6 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(value2) / SYSTEM::TO_FLOAT(value)) * 100f);
	func_62(str, str2, str3, str4, num2, num3, num6, iParam1, uParam3, 168, iParam0);
	return;
}

char* func_115(int iParam0, int iParam1, int iParam2) // Hash - 0x955FB005 ^0x955FB005
{
	switch (iParam0)
	{
		case 53:
			return "MPAwards5";
	
		case 39:
			return "MPAwards5";
	
		case 51:
			return "MPAwards5";
	
		case 52:
			return "MPAwards5";
	
		case 16:
			return "MPAwards2";
	
		case 60:
			return "MPAwards4";
	
		case 61:
			return "MPAwards4";
	
		case 62:
			return "MPAwards4";
	
		case 63:
			return "MPAwards4";
	
		case 0:
			switch (iParam2)
			{
				case 9:
					switch (iParam1)
					{
						case 0:
							return "MPAwards1";
					
						case 1:
							return "MPAwards1";
					
						case 2:
							return "MPAwards1";
					
						case 3:
							return "MPAwards1";
					
						case 4:
							return "MPAwards1";
					
						case 5:
							return "MPAwards1";
					
						default:
							break;
					}
					break;
			}
			break;
	
		case 12:
			return "MPAwards3";
	
		case 11:
			return "MPAwards4";
	
		case 20:
			return "MPAwards5";
	
		case 19:
			return "MPAwards2";
	
		case 15:
			return "MPAwards4";
	
		case 17:
			return "MPAwards2";
	
		case 21:
			return "MPAwards2";
	
		case 14:
			return "MPAwards4";
	
		case 22:
			return "MPAwards1";
	
		case 1:
			return "MPAwards5";
	
		case 2:
			return "MPAwards5";
	
		case 3:
			return "MPAwards5";
	
		case 4:
			return "MPAwards5";
	
		case 5:
			return "MPAwards4";
	
		case 6:
			return "MPAwards5";
	
		case 7:
			return "MPAwards4";
	
		case 8:
			return "MPAwards5";
	
		case 9:
			return "MPAwards4";
	
		case 10:
			return "MPAwards2";
	
		case 23:
			return "MPAwards1";
	
		case 24:
			return "MPAwards1";
	
		case 25:
			return "MPAwards1";
	
		case 26:
			return "MPAwards1";
	
		case 27:
			return "MPAwards1";
	
		case 28:
			return "MPAwards1";
	
		case 29:
			return "MPAwards5";
	
		case 30:
			return "MPAWARDS5";
	
		case 31:
			return "MPAWARDS5";
	
		case 32:
			return "MPAWARDS5";
	
		case 33:
			return "MPAWARDS5";
	
		case 34:
			return "MPAWARDS5";
	
		case 35:
			return "MPAWARDS5";
	
		case 36:
			return "MPAWARDS5";
	
		case 37:
			return "MPAWARDS5";
	
		case 38:
			return "MPAWARDS5";
	
		case 40:
			return "MPAWARDS5";
	
		case 41:
			return "MPAWARDS5";
	
		case 42:
			return "MPAWARDS5";
	
		case 43:
			return "MPAWARDS5";
	
		case 44:
			return "MPAWARDS5";
	
		case 45:
			return "MPAWARDS5";
	
		case 46:
			return "MPAWARDS5";
	
		case 47:
			return "MPAWARDS5";
	
		case 48:
			return "MPAWARDS5";
	
		case 49:
			return "MPAWARDS5";
	
		case 54:
			return "MPAWARDS5";
	
		case 55:
			return "MPAWARDS5";
	
		case 56:
			return "MPAWARDS5";
	
		case 57:
			return "MPAWARDS5";
	
		case 58:
			return "MPAWARDS5";
	
		case 59:
			return "MPAWARDS5";
	
		case 134:
			return "MPAwardHeists";
	
		case 135:
			return "MPAwardHeists";
	
		case 136:
			return "MPAwardHeists";
	
		case 137:
			return "MPAwardHeists";
	
		case 138:
			return "MPAwardHeists";
	
		case 67:
			return "MPAwardHeists";
	
		case 128:
			return "MPAwardHeists";
	
		case 129:
			return "MPAwardHeists";
	
		case 130:
			return "MPAwardHeists";
	
		case 131:
			return "MPAwardHeists";
	
		case 132:
			return "MPAwardHeists";
	
		case 133:
			return "MPAwardHeists";
	
		case 139:
			return "MPAwardHeists";
	
		case 140:
			return "MPAwardHeists";
	
		case 141:
			return "MPAwardHeists";
	
		case 142:
			return "MPAwardHeists";
	
		case 143:
			return "MPAwardHeists";
	
		case 144:
			return "MPAwardHeists";
	
		case 145:
			return "MPAwardHeists";
	
		case 146:
			return "MPAwardHeists";
	
		case 147:
			return "MPAwardNightclub";
	
		case 148:
			return "MPAwardNightclub";
	
		case 149:
			return "MPAwardNightclub";
	
		case 150:
			return "MPAwardNightclub";
	
		case 151:
			return "MPAwardNightclub";
	
		case 70:
			return "MPAwardsArena";
	
		case 71:
			return "MPAwardsArena";
	
		case 72:
			return "MPAwardsArena";
	
		case 73:
			return "MPAwardsArena";
	
		case 74:
			return "MPAwardsArena";
	
		case 75:
			return "MPAwardsArena";
	
		case 76:
			return "MPAwardsArena";
	
		case 77:
			return "MPAwardsArena";
	
		case 78:
			return "MPAwardsArena";
	
		case 79:
			return "MPAwardsArena";
	
		case 80:
			return "MPAwardsArena";
	
		case 81:
			return "MPAwardsArena";
	
		case 82:
			return "MPAwardsArena";
	
		case 83:
			return "MPAwardsArena";
	
		case 84:
			return "MPAwardsArena";
	
		case 85:
			return "MPAwardsArena";
	
		case 86:
			return "MPAwardsArena";
	
		case 87:
			return "MPAwardCasino";
	
		case 88:
		case 89:
		case 90:
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
			return "MPAwardCasinoHeist";
	
		case 99:
		case 100:
		case 101:
		case 102:
		case 103:
		case 104:
		case 105:
		case 106:
			return "MPAwardIslandHeist";
	
		case 107:
		case 108:
		case 109:
		case 110:
		case 112:
		case 114:
		case 115:
		case 116:
		case 111:
		case 113:
			return "MPAwardTunerPack";
	
		case 117:
		case 118:
		case 119:
			return "MPAwardsFixer";
	
		case 120:
		case 121:
		case 122:
		case 123:
		case 124:
		case 125:
		case 126:
		case 127:
			return "MPAwardXmas2022";
	}

	return "";
}

char* func_116(int iParam0, int iParam1, int iParam2) // Hash - 0x6F80A5CB ^0xFAE20742
{
	iParam2 == 9;
	iParam1 == 5;

	switch (iParam0)
	{
		case 53:
			return "ShootDownPoliceHeli";
	
		case 39:
			return "ComeFromBehind";
	
		case 60:
			return "TheFugitive";
	
		case 61:
			return "NoClaimsBonus";
	
		case 62:
			return "swallow";
	
		case 63:
			return "Spinderella";
	
		case 16:
			return "Timeinheli";
	
		case 0:
			return "HangingOutInCars";
	
		case 51:
			return "WinRallyAsDriver";
	
		case 52:
			return "WinRallyAsNavigator";
	
		case 12:
			return "Killenemiesindriveby";
	
		case 11:
			return "JackVehicles";
	
		case 20:
			return "Jump40m";
	
		case 19:
			return "Timesavoiding5stars";
	
		case 15:
			return "GetLapDances";
	
		case 17:
			return "Delivercars";
	
		case 21:
			return "racesWon_generic";
	
		case 14:
			return "HoldUpShops";
	
		case 22:
			return "ArmWrestlingVictories";
	
		case 1:
			return "KillPistol";
	
		case 2:
			return "KillSniperrifle";
	
		case 3:
			return "KillGrenades";
	
		case 4:
			return "KillShotgun";
	
		case 5:
			return "KillSMG";
	
		case 6:
			return "KillRocketLauncher";
	
		case 7:
			return "KillStickyBombs";
	
		case 8:
			return "KillMeleeWeapons";
	
		case 9:
			return _("Headshot kills");
	
		case 10:
			return "BlowupVehicles";
	
		case 23:
			return "Winatdarts";
	
		case 24:
			return "Blowupenemiesusingcarbombs";
	
		case 25:
			return "KilledpeoplewithanAssaultRifle";
	
		case 26:
			return "KilledpeoplewithaMachineGun";
	
		case 27:
			return "Gethaircuts";
	
		case 28:
			return "Parachute1min";
	
		case 29:
			return "ParachuteJumps20m";
	
		case 30:
			return "Birdie";
	
		case 31:
			return "GolfWin";
	
		case 32:
			return "TargetGridWin";
	
		case 33:
			return "RandomTargetsWin";
	
		case 34:
			return "CoveredTargetsWin";
	
		case 35:
			return "TennisMatchesWon";
	
		case 36:
			return "TennisServiceAce";
	
		case 37:
			return "GTARacesWon";
	
		case 38:
			return "FastestLap";
	
		case 40:
			return "DeathmatchWin";
	
		case 41:
			return "TeamDeathmatchWin";
	
		case 42:
			return "TeamDeathmatchMVP";
	
		case 43:
			return "KillStreak";
	
		case 44:
			return "TotalKills";
	
		case 45:
			return "HatTrickKiller";
	
		case 46:
			return "StolenKill";
	
		case 47:
			return "Land2mFromTarget";
	
		case 48:
			return "ReachHordeModeWave";
	
		case 49:
			return "EarnCashFromBetting";
	
		case 54:
			return "RaceToPointWinner";
	
		case 55:
			return "BountyHunter";
	
		case 56:
			return "OverallKills";
	
		case 57:
			return "WinASeaRace";
	
		case 58:
			return "WinAPlaneRace";
	
		case 59:
			return "GetRevengeKillDeathmatch";
	
		case 134:
			return "Captured";
	
		case 135:
			return "ThePostman";
	
		case 136:
			return "GimmeThat";
	
		case 137:
			return "NoYouDont";
	
		case 138:
			return "DeathDefying";
	
		case 67:
			return "dailyduty";
	
		case 128:
			return "TheBigTime";
	
		case 129:
			return "BePrepared";
	
		case 130:
			return "ForHire";
	
		case 131:
			return "ShotCaller";
	
		case 132:
			return "LiveALittle";
	
		case 133:
			return "Decorated";
	
		case 139:
			return "LightsOut";
	
		case 140:
			return "InControl";
	
		case 141:
			return "PsychoKiller";
	
		case 142:
			return "CalmDown";
	
		case 143:
			return "StillStanding";
	
		case 144:
			return "OneAndOnly";
	
		case 145:
			return "OneManArmy";
	
		case 146:
			return "MovingDay";
	
		case 147:
			return "Solomun";
	
		case 148:
			return "TaleOfUs";
	
		case 149:
			return "Dixon";
	
		case 150:
			return "TheBlackMadonna";
	
		case 151:
			return "ClubDrunk";
	
		case 70:
			return "watchyourstep";
	
		case 71:
			return "TOWEROFFENSE";
	
		case 72:
			return "READYFORWAR";
	
		case 73:
			return "THROUGHTHELENS";
	
		case 74:
			return "SPINNER";
	
		case 75:
			return "YOUMEANBOOBYTRAP";
	
		case 76:
			return "MASTERBANDITO";
	
		case 77:
			return "SITTINGDUCK";
	
		case 78:
			return "CROWDPARTICIPATION";
	
		case 79:
			return "KILLORBEKILLED";
	
		case 80:
			return "MASSIVESHUNT";
	
		case 81:
			return "YOUREOUTTAHERE";
	
		case 82:
			return "WEVEGOTONE";
	
		case 83:
			return "ARENAWAGEWORKER";
	
		case 84:
			return "TIMESERVED";
	
		case 85:
			return "TOPSCORE";
	
		case 86:
			return "CAREERWINNER";
	
		case 87:
			return "HighRoller";
	
		case 88:
			return "Preparation";
	
		case 89:
			return "AsleepOnTheJob";
	
		case 90:
			return "DailyCashGrab";
	
		case 91:
			return "Bigbrother";
	
		case 92:
			return "Sharpshooter";
	
		case 93:
			return "RaceChampion";
	
		case 94:
			return "PlatinumSword";
	
		case 95:
			return "CoinPurse";
	
		case 96:
			return "Astrochimp";
	
		case 97:
			return "Masterful";
	
		case 99:
			return "sunset";
	
		case 100:
			return "TreasureHunter";
	
		case 101:
			return "WreckDiving";
	
		case 102:
			return "Keinmusik";
	
		case 103:
			return "PalmsTrax";
	
		case 104:
			return "Moodymann";
	
		case 105:
			return "FillYourBags";
	
		case 106:
			return "Prepped";
	
		case 107:
			return "LSCarMeetMember";
	
		case 108:
			return "SprintRacer";
	
		case 109:
			return "StreetRacer";
	
		case 110:
			return "PursuitRacer";
	
		case 112:
			return "SpecialDelivery";
	
		case 114:
			return "Groundwork";
	
		case 115:
			return "ContractualCriminal";
	
		case 116:
			return "FacesofDeath";
	
		case 111:
			return "TriedandTested";
	
		case 113:
			return "CarExporter";
	
		case 117:
			return "ContracualObligations";
	
		case 118:
			return "ColdCaller";
	
		case 119:
			return "Producer";
	
		case 120:
			return "RunRabbitRun";
	
		case 121:
			return "CallMe";
	
		case 122:
			return "ChemicalAttraction";
	
		case 123:
			return "StashesToStashes";
	
		case 124:
			return "HereComesTheDrop";
	
		case 125:
			return "GoodSamaritan";
	
		case 126:
			return "YourOwnWorstEnemy";
	
		case 127:
			return "TaxiDriver";
	}

	return "";
}

char* func_117(int iParam0, int iParam1, int iParam2) // Hash - 0xF720674F ^0x57569CC4
{
	iParam1 == 5;
	iParam2 == 9;

	switch (iParam0)
	{
		case 53:
			return "AWS_721";
	
		case 60:
			return "AWS_728";
	
		case 61:
			return "AWS_730";
	
		case 62:
			return "AWS_731";
	
		case 63:
			return "AWS_732";
	
		case 16:
			return "AWS_550";
	
		case 0:
			return "AWS_282";
	
		case 51:
			return "AWS_707";
	
		case 52:
			return "AWS_708";
	
		case 12:
			return "AWS_581";
	
		case 11:
			return "AWS_582";
	
		case 19:
			return "AWS_534";
	
		case 20:
			if (MISC::SHOULD_USE_METRIC_MEASUREMENTS())
				return "AWS_509_M";
			else
				return "AWS_509";
			break;
	
		case 39:
			return "AWS_678";
	
		case 15:
			return "AWS_559";
	
		case 17:
			return "AWS_535";
	
		case 21:
			return "AWS_586";
	
		case 14:
			return "AWS_566";
	
		case 22:
			return "AWS_589";
	
		case 1:
			return "AWS_506";
	
		case 2:
			return "AWS_585";
	
		case 3:
			return "AWS_541";
	
		case 4:
			return "AWS_584";
	
		case 5:
			return "AWS_540";
	
		case 6:
			return "AWS_539";
	
		case 7:
			return "AWS_538";
	
		case 8:
			return "AWS_537";
	
		case 9:
			return "AWS_536";
	
		case 10:
			return "AWS_583";
	
		case 23:
			return "AWS_610";
	
		case 24:
			return "AWS_611";
	
		case 25:
			return "AWS_631";
	
		case 26:
			return "AWS_632";
	
		case 27:
			return "AWS_639";
	
		case 28:
			return "AWS_640";
	
		case 29:
			if (MISC::SHOULD_USE_METRIC_MEASUREMENTS())
				return "AWS_699_m";
			else
				return "AWS_699";
			break;
	
		case 30:
			return "AWS_661";
	
		case 31:
			return "AWS_662";
	
		case 32:
			return "AWS_663";
	
		case 33:
			return "AWS_665";
	
		case 34:
			return "AWS_666";
	
		case 35:
			return "AWS_668";
	
		case 36:
			return "AWS_669";
	
		case 37:
			return "AWS_675";
	
		case 38:
			return "AWS_676";
	
		case 40:
			return "AWS_679";
	
		case 41:
			return "AWS_681";
	
		case 42:
			return "AWS_682";
	
		case 43:
			return "AWS_677";
	
		case 44:
			return "AWS_683";
	
		case 45:
			return "AWS_684";
	
		case 46:
			return "AWS_685";
	
		case 47:
			return "AWS_692";
	
		case 48:
			return "AWS_696";
	
		case 49:
			return "AWS_693";
	
		case 54:
			return "AWS_710";
	
		case 55:
			return "AWS_703";
	
		case 56:
			return "AWS_704";
	
		case 57:
			return "AWS_722";
	
		case 58:
			return "AWS_723";
	
		case 59:
			return "AWS_716";
	
		case 134:
			return "AWS_740";
	
		case 135:
			return "AWS_741";
	
		case 136:
			return "AWS_742";
	
		case 137:
			return "AWS_743";
	
		case 138:
			return "AWS_744";
	
		case 67:
			return "AWS_782";
	
		case 128:
			return "AWS_745";
	
		case 129:
			return "AWS_746";
	
		case 130:
			return "AWS_747";
	
		case 131:
			return "AWS_748";
	
		case 132:
			return "AWS_749";
	
		case 133:
			return "AWS_752";
	
		case 139:
			return "AWS_755";
	
		case 140:
			return "AWS_757";
	
		case 141:
			return "AWS_758";
	
		case 142:
			return "AWS_759";
	
		case 143:
			return "AWS_760";
	
		case 144:
			return "AWS_761";
	
		case 145:
			return "AWS_762";
	
		case 146:
			return "AWS_764";
	
		case 147:
			if (iParam1 == 5)
				return "AWS_788_4";
			else if (iParam1 == 4)
				return "AWS_788_3";
			else if (iParam1 == 3)
				return "AWS_788_2";
			else
				return "AWS_788_1";
			break;
	
		case 148:
			if (iParam1 == 5)
				return "AWS_789_4";
			else if (iParam1 == 4)
				return "AWS_789_3";
			else if (iParam1 == 3)
				return "AWS_789_2";
			else
				return "AWS_789_1";
			break;
	
		case 149:
			if (iParam1 == 5)
				return "AWS_790_4";
			else if (iParam1 == 4)
				return "AWS_790_3";
			else if (iParam1 == 3)
				return "AWS_790_2";
			else
				return "AWS_790_1";
			break;
	
		case 150:
			if (iParam1 == 5)
				return "AWS_791_4";
			else if (iParam1 == 4)
				return "AWS_791_3";
			else if (iParam1 == 3)
				return "AWS_791_2";
			else
				return "AWS_791_1";
			break;
	
		case 151:
			return "AWS_792";
	
		case 70:
			return "AWS_817";
	
		case 71:
			return "AWS_818";
	
		case 72:
			return "AWS_821";
	
		case 73:
			return "AWS_822";
	
		case 74:
			return "AWS_823";
	
		case 75:
			return "AWS_824";
	
		case 76:
			return "AWS_825";
	
		case 77:
			return "AWS_826";
	
		case 78:
			return "AWS_827";
	
		case 79:
			return "AWS_828";
	
		case 80:
			return "AWS_829";
	
		case 81:
			return "AWS_830";
	
		case 82:
			return "AWS_831";
	
		case 83:
			return "AWS_832";
	
		case 84:
			return "AWS_833";
	
		case 85:
			return "AWS_834";
	
		case 86:
			return "AWS_835";
	
		case 87:
			if (iParam1 == 5)
				return _("Complete 50 Casino Work missions for Agatha and earn $100,000.");
			else if (iParam1 == 4)
				return _("Complete 25 Casino Work missions for Agatha and earn $50,000.");
			else if (iParam1 == 3)
				return _("Complete 10 Casino Work missions for Agatha and earn $20,000.");
			else
				return _("Complete 5 Casino Work missions for Agatha and earn $10,000.");
			break;
	
		case 88:
			if (iParam1 == 5)
				return _("Complete 40 prep missions as part of The Diamond Casino Heist.");
			else if (iParam1 == 4)
				return _("Complete 20 prep missions as part of The Diamond Casino Heist.");
			else if (iParam1 == 3)
				return _("Complete 10 prep missions as part of The Diamond Casino Heist.");
			else
				return _("Complete 5 prep missions as part of The Diamond Casino Heist.");
			break;
	
		case 89:
			if (iParam1 == 5)
				return _("Use the Drone to tranquilize 20 guards during The Diamond Casino Heist.");
			else if (iParam1 == 4)
				return _("Use the Drone to tranquilize 15 guards during The Diamond Casino Heist.");
			else if (iParam1 == 3)
				return _("Use the Drone to tranquilize 10 guards during The Diamond Casino Heist.");
			else
				return _("Use the Drone to tranquilize 5 guards during The Diamond Casino Heist.");
			break;
	
		case 90:
			if (iParam1 == 5)
				return _("Steal a total of $100000 from the Daily Vault during The Diamond Casino Heist.");
			else if (iParam1 == 4)
				return _("Steal a total of $75000 from the Daily Vault during The Diamond Casino Heist.");
			else if (iParam1 == 3)
				return _("Steal a total of $50000 from the Daily Vault during The Diamond Casino Heist.");
			else
				return _("Steal a total of $25000 from the Daily Vault during The Diamond Casino Heist.");
			break;
	
		case 91:
			if (iParam1 == 5)
				return _("Destroy 40 security cameras during The Diamond Casino Heist.");
			else if (iParam1 == 4)
				return _("Destroy 30 security cameras during The Diamond Casino Heist.");
			else if (iParam1 == 3)
				return _("Destroy 20 security cameras during The Diamond Casino Heist.");
			else
				return _("Destroy 10 security cameras during The Diamond Casino Heist.");
			break;
	
		case 92:
			if (iParam1 == 5)
				return _("Kill 40 flying critters across all levels of Badlands Revenge II.");
			else if (iParam1 == 4)
				return _("Kill 20 flying critters across all levels of Badlands Revenge II.");
			else if (iParam1 == 3)
				return _("Kill 10 flying critters across all levels of Badlands Revenge II.");
			else
				return _("Kill 5 flying critters across all levels of Badlands Revenge II.");
			break;
	
		case 93:
			if (iParam1 == 5)
				return _("Win 40 races against an opponent in Race And Chase.");
			else if (iParam1 == 4)
				return _("Win 20 races against an opponent in Race And Chase.");
			else if (iParam1 == 3)
				return _("Win 10 races against an opponent in Race And Chase.");
			else
				return _("Win 5 races against an opponent in Race And Chase.");
			break;
	
		case 94:
			if (iParam1 == 5)
				return _("Score at least 1000000 during a single play of The Wizard's Ruin.");
			else if (iParam1 == 4)
				return _("Score at least 750000 during a single play of The Wizard's Ruin.");
			else if (iParam1 == 3)
				return _("Score at least 500000 during a single play of The Wizard's Ruin.");
			else
				return _("Score at least 250000 during a single play of The Wizard's Ruin.");
			break;
	
		case 95:
			if (iParam1 == 5)
				return _("Collect 950000 treasures during a single play of The Wizard's Ruin.");
			else if (iParam1 == 4)
				return _("Collect 700000 treasures during a single play of The Wizard's Ruin.");
			else if (iParam1 == 3)
				return _("Collect 450000 treasures during a single play of The Wizard's Ruin.");
			else
				return _("Collect 200000 treasures during a single play of The Wizard's Ruin.");
			break;
	
		case 96:
			if (iParam1 == 5)
				return _("Score over 3000000 points in a single game of Space Monkey 3: Bananas Gone Bad.");
			else if (iParam1 == 4)
				return _("Score over 2500000 points in a single game of Space Monkey 3: Bananas Gone Bad.");
			else if (iParam1 == 3)
				return _("Score over 2000000 points in a single game of Space Monkey 3: Bananas Gone Bad.");
			else
				return _("Score over 1500000 points in a single game of Space Monkey 3: Bananas Gone Bad.");
			break;
	
		case 97:
			if (iParam1 == 5)
				return _("Score over 40000 points in a single play of Penetrator.");
			else if (iParam1 == 4)
				return _("Score over 20000 points in a single play of Penetrator.");
			else if (iParam1 == 3)
				return _("Score over 10000 points in a single play of Penetrator.");
			else
				return _("Score over 5000 points in a single play of Penetrator.");
			break;
	
		case 99:
			if (iParam1 == 5)
				return _("Dance to Keinemusik's set at the Cayo Perico beach party for 60 minutes.");
			else if (iParam1 == 4)
				return _("Dance to Keinemusik's set at the Cayo Perico beach party for 30 minutes.");
			else if (iParam1 == 3)
				return _("Dance to Keinemusik's set at the Cayo Perico beach party for 15 minutes.");
			else
				return _("Dance to Keinemusik's set at the Cayo Perico beach party for 5 minutes.");
			break;
	
		case 100:
			if (iParam1 == 5)
				return _("Steal the loot from 50 treasure chests found on Cayo Perico.");
			else if (iParam1 == 4)
				return _("Steal the loot from 20 treasure chests found on Cayo Perico.");
			else if (iParam1 == 3)
				return _("Steal the loot from 10 treasure chests found on Cayo Perico.");
			else
				return _("Steal the loot from 5 treasure chests found on Cayo Perico.");
			break;
	
		case 101:
			if (iParam1 == 5)
				return _("Steal a total of $1,000,000 from hidden caches found around the San Andreas coast.");
			else if (iParam1 == 4)
				return _("Steal a total of $750,000 from hidden caches found around the San Andreas coast.");
			else if (iParam1 == 3)
				return _("Steal a total of $250,000 from hidden caches found around the San Andreas coast.");
			else
				return _("Steal a total of $50,000 from hidden caches found around the San Andreas coast.");
			break;
	
		case 102:
			if (iParam1 == 5)
				return _("Dance to Keinemusik's set in The Music Locker for 60 minutes.");
			else if (iParam1 == 4)
				return _("Dance to Keinemusik's set in The Music Locker for 30 minutes.");
			else if (iParam1 == 3)
				return _("Dance to Keinemusik's set in The Music Locker for 15 minutes.");
			else
				return _("Dance to Keinemusik's set in The Music Locker for 5 minutes.");
			break;
	
		case 103:
			if (iParam1 == 5)
				return _("Dance to Palms Trax set in The Music Locker for 60 minutes.");
			else if (iParam1 == 4)
				return _("Dance to Palms Trax set in The Music Locker for 30 minutes.");
			else if (iParam1 == 3)
				return _("Dance to Palms Trax set in The Music Locker for 15 minutes.");
			else
				return _("Dance to Palms Trax set in The Music Locker for 5 minutes.");
			break;
	
		case 104:
			if (iParam1 == 5)
				return _("Dance to Moodymann's set in The Music Locker for 60 minutes.");
			else if (iParam1 == 4)
				return _("Dance to Moodymann's set in The Music Locker for 30 minutes.");
			else if (iParam1 == 3)
				return _("Dance to Moodymann's set in The Music Locker for 15 minutes.");
			else
				return _("Dance to Moodymann's set in The Music Locker for 5 minutes.");
			break;
	
		case 105:
			if (iParam1 == 5)
				return _("Steal a total of $20,000,000 in secondary targets during The Cayo Perico Heist.");
			else if (iParam1 == 4)
				return _("Steal a total of $10,000,000 in secondary targets during The Cayo Perico Heist.");
			else if (iParam1 == 3)
				return _("Steal a total of $5,000,000 in secondary targets during The Cayo Perico Heist.");
			else
				return _("Steal a total of $1,000,000 in secondary targets during The Cayo Perico Heist.");
			break;
	
		case 106:
			if (iParam1 == 5)
				return _("Complete 50 prep missions as part of The Cayo Perico Heist.");
			else if (iParam1 == 4)
				return _("Complete 20 prep missions as part of The Cayo Perico Heist.");
			else if (iParam1 == 3)
				return _("Complete 10 prep missions as part of The Cayo Perico Heist.");
			else
				return _("Complete 5 prep missions as part of The Cayo Perico Heist.");
			break;
	
		case 107:
			if (iParam1 == 5)
				return _("Reach LS Car Meet Reputation Level 100.");
			else if (iParam1 == 4)
				return _("Reach LS Car Meet Reputation Level 50.");
			else if (iParam1 == 3)
				return _("Reach LS Car Meet Reputation Level 25.");
			else
				return _("Reach LS Car Meet Reputation Level 5.");
			break;
	
		case 108:
			if (iParam1 == 5)
				return _("Win 50 Sprints.");
			else if (iParam1 == 4)
				return _("Win 25 Sprints.");
			else if (iParam1 == 3)
				return _("Win 10 Sprints.");
			else
				return _("Win 5 Sprints.");
			break;
	
		case 109:
			if (iParam1 == 5)
				return _("Win 50 races in the Street Race Series.");
			else if (iParam1 == 4)
				return _("Win 25 races in the Street Race Series.");
			else if (iParam1 == 3)
				return _("Win 10 races in the Street Race Series.");
			else
				return _("Win 5 races in the Street Race Series.");
			break;
	
		case 110:
			if (iParam1 == 5)
				return _("Win 50 races in the Pursuit Series.");
			else if (iParam1 == 4)
				return _("Win 25 races in the Pursuit Series.");
			else if (iParam1 == 3)
				return _("Win 10 races in the Pursuit Series.");
			else
				return _("Win 5 races in the Pursuit Series.");
			break;
	
		case 112:
			if (iParam1 == 5)
				return _("Successfully mod and deliver 50 customer vehicles from your Auto Shop.");
			else if (iParam1 == 4)
				return _("Successfully mod and deliver 25 customer vehicles from your Auto Shop.");
			else if (iParam1 == 3)
				return _("Successfully mod and deliver 10 customer vehicles from your Auto Shop.");
			else
				return _("Successfully mod and deliver 5 customer vehicles from your Auto Shop.");
			break;
	
		case 114:
			if (iParam1 == 5)
				return _("Complete 40 Planning Work missions as leader as part of the Contracts for KDJ and Sessanta.");
			else if (iParam1 == 4)
				return _("Complete 20 Planning Work missions as leader as part of the Contracts for KDJ and Sessanta.");
			else if (iParam1 == 3)
				return _("Complete 10 Planning Work missions as leader as part of the Contracts for KDJ and Sessanta.");
			else
				return _("Complete 5 Planning Work missions as leader as part of the Contracts for KDJ and Sessanta.");
			break;
	
		case 115:
			if (iParam1 == 5)
				return _("Complete 100 Contracts for KDJ and Sessanta.");
			else if (iParam1 == 4)
				return _("Complete 50 Contracts for KDJ and Sessanta.");
			else if (iParam1 == 3)
				return _("Complete 25 Contracts for KDJ and Sessanta.");
			else
				return _("Complete 5 Contracts for KDJ and Sessanta.");
			break;
	
		case 116:
			if (iParam1 == 5)
				return _("Carry out over 30 headshots across all scenes in Camhedz.");
			else if (iParam1 == 4)
				return _("Carry out over 20 headshots across all scenes in Camhedz.");
			else if (iParam1 == 3)
				return _("Carry out over 10 headshots across all scenes in Camhedz.");
			else
				return _("Carry out over 5 headshots across all scenes in Camhedz.");
			break;
	
		case 111:
			if (iParam1 == 5)
				return _("Drive one of the test rides for 240 minutes inside the Test Track.");
			else if (iParam1 == 4)
				return _("Drive one of the test rides for 120 minutes inside the Test Track.");
			else if (iParam1 == 3)
				return _("Drive one of the test rides for 60 minutes inside the Test Track.");
			else
				return _("Drive one of the test rides for 30 minutes inside the Test Track.");
			break;
	
		case 113:
			if (iParam1 == 5)
				return _("Deliver 100 Exotic Exports Vehicles to the Docks for Sessanta's partner.");
			else if (iParam1 == 4)
				return _("Deliver 50 Exotic Exports Vehicles to the Docks for Sessanta's partner.");
			else if (iParam1 == 3)
				return _("Deliver 25 Exotic Exports Vehicles to the Docks for Sessanta's partner.");
			else
				return _("Deliver 10 Exotic Exports Vehicles to the Docks for Sessanta's partner.");
			break;
	
		case 117:
			if (iParam1 == 5)
				return _("Complete 50 Security Contracts.");
			else if (iParam1 == 4)
				return _("Complete 25 Security Contracts.");
			else if (iParam1 == 3)
				return _("Complete 15 Security Contracts.");
			else
				return _("Complete 5 Security Contracts.");
			break;
	
		case 118:
			if (iParam1 == 5)
				return _("Complete 50 Payphone Hits.");
			else if (iParam1 == 4)
				return _("Complete 25 Payphone Hits.");
			else if (iParam1 == 3)
				return _("Complete 15 Payphone Hits.");
			else
				return _("Complete 5 Payphone Hits.");
			break;
	
		case 119:
			return _("Watch Dr. Dre working in Record A Studios.");
	
		case 120:
			return "AWS_1002";
	
		case 121:
			if (iParam1 == 5)
				return "AWS_1003d";
			else if (iParam1 == 4)
				return "AWS_1003c";
			else if (iParam1 == 3)
				return "AWS_1003b";
			else
				return "AWS_1003a";
			break;
	
		case 122:
			if (iParam1 == 5)
				return "AWS_1004d";
			else if (iParam1 == 4)
				return "AWS_1004c";
			else if (iParam1 == 3)
				return "AWS_1004b";
			else
				return "AWS_1004a";
			break;
	
		case 123:
			if (iParam1 == 5)
				return "AWS_1005d";
			else if (iParam1 == 4)
				return "AWS_1005c";
			else if (iParam1 == 3)
				return "AWS_1005b";
			else
				return "AWS_1005a";
			break;
	
		case 124:
			if (iParam1 == 5)
				return "AWS_1006d";
			else if (iParam1 == 4)
				return "AWS_1006c";
			else if (iParam1 == 3)
				return "AWS_1006b";
			else
				return "AWS_1006a";
			break;
	
		case 125:
			if (iParam1 == 5)
				return "AWS_1007d";
			else if (iParam1 == 4)
				return "AWS_1007c";
			else if (iParam1 == 3)
				return "AWS_1007b";
			else
				return "AWS_1007a";
			break;
	
		case 126:
			return "AWS_1008";
	
		case 127:
			if (iParam1 == 5)
				return "AWS_1009d";
			else if (iParam1 == 4)
				return "AWS_1009c";
			else if (iParam1 == 3)
				return "AWS_1009b";
			else
				return "AWS_1009a";
			break;
	}

	return "";
}

char* func_118(int iParam0, int iParam1) // Hash - 0x4FC5F938 ^0x1AAA4245
{
	iParam1 == 9;

	switch (iParam0)
	{
		case 53:
			return "AWT_721";
	
		case 39:
			return "AWT_678";
	
		case 51:
			return "AWT_707";
	
		case 52:
			return "AWT_708";
	
		case 60:
			return "AWT_728";
	
		case 61:
			return "AWT_730";
	
		case 62:
			return "AWT_731";
	
		case 63:
			return "AWT_732";
	
		case 16:
			return "AWT_550";
	
		case 0:
			return "AWT_282";
	
		case 12:
			return "AWT_581";
	
		case 11:
			return "AWT_582";
	
		case 19:
			return "AWT_534";
	
		case 20:
			if (MISC::SHOULD_USE_METRIC_MEASUREMENTS())
				return "AWT_509";
			else
				return "AWT_509";
			break;
	
		case 15:
			return "AWT_559";
	
		case 17:
			return "AWT_535";
	
		case 21:
			return "AWT_586";
	
		case 14:
			return "AWT_566";
	
		case 22:
			return "AWT_589";
	
		case 1:
			return "AWT_506";
	
		case 2:
			return "AWT_585";
	
		case 3:
			return "AWT_541";
	
		case 4:
			return "AWT_584";
	
		case 5:
			return "AWT_540";
	
		case 6:
			return "AWT_539";
	
		case 7:
			return "AWT_538";
	
		case 8:
			return "AWT_537";
	
		case 9:
			return "AWT_536";
	
		case 10:
			return "AWT_583";
	
		case 23:
			return "AWT_610";
	
		case 24:
			return "AWT_611";
	
		case 25:
			return "AWT_631";
	
		case 26:
			return "AWT_632";
	
		case 27:
			return "AWT_639";
	
		case 28:
			return "AWT_640";
	
		case 29:
			return "AWT_699";
	
		case 30:
			return "AWT_661";
	
		case 31:
			return "AWT_662";
	
		case 32:
			return "AWT_663";
	
		case 33:
			return "AWT_665";
	
		case 34:
			return "AWT_666";
	
		case 35:
			return "AWT_668";
	
		case 36:
			return "AWT_669";
	
		case 37:
			return "AWT_675";
	
		case 38:
			return "AWT_676";
	
		case 40:
			return "AWT_679";
	
		case 41:
			return "AWT_681";
	
		case 42:
			return "AWT_682";
	
		case 43:
			return "AWT_677";
	
		case 44:
			return "AWT_683";
	
		case 45:
			return "AWT_684";
	
		case 46:
			return "AWT_685";
	
		case 47:
			return "AWT_692";
	
		case 48:
			return "AWT_696";
	
		case 49:
			return "AWT_693";
	
		case 54:
			return "AWT_710";
	
		case 55:
			return "AWT_703";
	
		case 56:
			return "AWT_704";
	
		case 57:
			return "AWT_722";
	
		case 58:
			return "AWT_723";
	
		case 59:
			return "AWT_716";
	
		case 134:
			return "AWT_740";
	
		case 135:
			return "AWT_741";
	
		case 136:
			return "AWT_742";
	
		case 137:
			return "AWT_743";
	
		case 138:
			return "AWT_744";
	
		case 67:
			return "AWT_782";
	
		case 128:
			return "AWT_745";
	
		case 129:
			return "AWT_746";
	
		case 130:
			return "AWT_747";
	
		case 131:
			return "AWT_748";
	
		case 132:
			return "AWT_749";
	
		case 133:
			return "AWT_752";
	
		case 139:
			return "AWT_755";
	
		case 140:
			return "AWT_757";
	
		case 141:
			return "AWT_758";
	
		case 142:
			return "AWT_759";
	
		case 143:
			return "AWT_760";
	
		case 144:
			return "AWT_761";
	
		case 145:
			return "AWT_762";
	
		case 146:
			return "AWT_764";
	
		case 147:
			return "AWT_788";
	
		case 148:
			return "AWT_789";
	
		case 149:
			return "AWT_790";
	
		case 150:
			return "AWT_791";
	
		case 151:
			return "AWT_792";
	
		case 70:
			return "AWT_817";
	
		case 71:
			return "AWT_818";
	
		case 72:
			return "AWT_821";
	
		case 73:
			return "AWT_822";
	
		case 74:
			return "AWT_823";
	
		case 75:
			return "AWT_824";
	
		case 76:
			return "AWT_825";
	
		case 77:
			return "AWT_826";
	
		case 78:
			return "AWT_827";
	
		case 79:
			return "AWT_828";
	
		case 80:
			return "AWT_829";
	
		case 81:
			return "AWT_830";
	
		case 82:
			return "AWT_831";
	
		case 83:
			return "AWT_832";
	
		case 84:
			return "AWT_833";
	
		case 85:
			return "AWT_834";
	
		case 86:
			return "AWT_835";
	
		case 87:
			return _("High Roller");
	
		case 88:
			return _("Preparation");
	
		case 89:
			return _("Asleep On The Job");
	
		case 90:
			return _("Daily Cash Grab");
	
		case 91:
			return _("Big Brother");
	
		case 92:
			return _("Sharpshooter");
	
		case 93:
			return _("Race Champion");
	
		case 94:
			return _("Platinum Sword");
	
		case 95:
			return _("Coin Purse");
	
		case 96:
			return _("Astrochimp");
	
		case 97:
			return _("Masterful");
	
		case 99:
			return _("Sun Set");
	
		case 100:
			return _("Treasure Hunter");
	
		case 101:
			return _("Wreck Diving");
	
		case 102:
			return _("Keinemusik");
	
		case 103:
			return _("Palms Trax");
	
		case 104:
			return _("Moodymann");
	
		case 105:
			return _("Fill Your Bags");
	
		case 106:
			return _("Prepped");
	
		case 107:
			return _("LS Car Meet Member");
	
		case 108:
			return _("Sprint Racer");
	
		case 109:
			return _("Street Racer");
	
		case 110:
			return _("Pursuit Racer");
	
		case 112:
			return _("Special Delivery");
	
		case 114:
			return _("Groundwork");
	
		case 115:
			return _("Contractual Criminal");
	
		case 116:
			return _("Faces Of Death");
	
		case 111:
			return _("Tried and Tested");
	
		case 113:
			return _("Car Exporter");
	
		case 117:
			return _("Contractual Obligations");
	
		case 118:
			return _("Cold Caller");
	
		case 119:
			return _("Producer");
	
		case 120:
			return "AWT_1002";
	
		case 121:
			return "AWT_1003";
	
		case 122:
			return "AWT_1004";
	
		case 123:
			return "AWT_1005";
	
		case 124:
			return "AWT_1006";
	
		case 125:
			return "AWT_1007";
	
		case 126:
			return "AWT_1008";
	
		case 127:
			return "AWT_1009";
	}

	return "";
}

int func_119(int iParam0, int iParam1) // Hash - 0x1ED4FB3C ^0x1ED4FB3C
{
	if (func_77(func_48(iParam0, -1), func_49(iParam0, 5, iParam1)))
		return 5;

	if (func_77(func_48(iParam0, -1), func_49(iParam0, 4, iParam1)))
		return 5;

	if (func_77(func_48(iParam0, -1), func_49(iParam0, 3, iParam1)))
		return 4;

	if (func_77(func_48(iParam0, -1), func_49(iParam0, 2, iParam1)))
		return 3;

	return 2;
}

int func_120(int iParam0, int iParam1) // Hash - 0x98A9DA24 ^0x98A9DA24
{
	if (!func_77(func_48(iParam0, -1), func_49(iParam0, 2, iParam1)))
		return 0;

	if (!func_77(func_48(iParam0, -1), func_49(iParam0, 3, iParam1)))
		return 2;

	if (!func_77(func_48(iParam0, -1), func_49(iParam0, 4, iParam1)))
		return 3;

	if (!func_77(func_48(iParam0, -1), func_49(iParam0, 5, iParam1)))
		return 4;

	return 5;
}

BOOL func_121() // Hash - 0x4C81F065 ^0x79C65D03
{
	return MISC::IS_ORBIS_VERSION() || MISC::IS_PROSPERO_VERSION();
}

BOOL func_122() // Hash - 0x4C81F065 ^0xA2709774
{
	return MISC::IS_DURANGO_VERSION() || unk_0x0C545AB1CF97ABB3();
}

BOOL func_123() // Hash - 0xCD0EE523 ^0xBE7198C2
{
	return *Global_262145.f_33716;
}

void func_124(var uParam0, var uParam1) // Hash - 0x2783E18B ^0xC0A986B8
{
	int num;
	int num2;
	int num3;
	int num4;

	num = 12;
	num2 = uParam0->f_455;

	switch (uParam1->f_5)
	{
		case 0:
			num2 = num2;
			break;
	
		default:
			if (uParam1->f_5 < iLocal_110)
				num2 = num2 + (num * uParam1->f_5);
			else
				num2 = num2 + (num * uParam1->f_5);
			break;
	}

	func_134(Global_1652549.f_473[uParam0->f_455]);
	func_126(Global_1652549.f_486[uParam0->f_455]);
	num3 = uParam1->f_5 + 1;
	num4 = iLocal_110 + 1;
	func_125(0, num3, num4, _("Page ~1~ of ~1~"), false);
	return;
}

void func_125(int iParam0, int iParam1, int iParam2, const char* sParam3, BOOL bParam4) // Hash - 0xC5739C91 ^0x1677C6B8
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("SET_COLUMN_SCROLL");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam0);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(-1);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
	{
		GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam3);
		HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
		HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
		GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	}
	else
	{
		func_22("");
	}

	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bParam4);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	return;
}

void func_126(int iParam0) // Hash - 0x61A9348F ^0x61A9348F
{
	int offset;
	BOOL flag;
	int offset2;
	BOOL flag2;

	if (func_133(iParam0))
	{
		offset = 0;
		flag = false;
	
		if (func_133(iParam0))
		{
			offset = func_132(iParam0);
		
			if (func_129(iParam0))
				flag = true;
		}
	
		if (!IS_BIT_SET(Global_1652549.f_471, offset))
			MISC::SET_BIT(&(Global_1652549.f_471), offset);
	
		if (flag)
			if (!IS_BIT_SET(Global_1652549.f_472, offset))
				MISC::SET_BIT(&(Global_1652549.f_472), offset);
	}

	if (func_128(iParam0))
	{
		offset2 = 0;
		flag2 = false;
	
		if (func_128(iParam0))
		{
			offset2 = func_127(iParam0);
		
			if (func_129(iParam0))
				flag2 = true;
		}
	
		if (!IS_BIT_SET(Global_1652549.f_499, offset2))
			MISC::SET_BIT(&(Global_1652549.f_499), offset2);
	
		if (flag2)
			if (!IS_BIT_SET(Global_1652549.f_500, offset2))
				MISC::SET_BIT(&(Global_1652549.f_500), offset2);
	}

	return;
}

int func_127(int iParam0) // Hash - 0xDB0AC7E7 ^0xDB0AC7E7
{
	switch (iParam0)
	{
		case 120:
			return 13;
	
		case 121:
			return 14;
	
		case 122:
			return 18;
	
		case 123:
			return 19;
	
		case 124:
			return 20;
	
		case 125:
			return 21;
	
		case 126:
			return 22;
	
		case 127:
			return 23;
	}

	return 0;
}

BOOL func_128(int iParam0) // Hash - 0xE48228D0 ^0xE48228D0
{
	switch (iParam0)
	{
		case 120:
		case 121:
		case 122:
		case 123:
		case 124:
		case 125:
		case 126:
		case 127:
			return true;
	}

	return false;
}

BOOL func_129(int iParam0) // Hash - 0x4D49281D ^0x4D49281D
{
	int num;
	int num2;

	num = func_130(iParam0);
	num2 = iParam0;
	return IS_BIT_SET(num, func_52(num2));
}

int func_130(int iParam0) // Hash - 0x96AE6D44 ^0x96AE6D44
{
	switch (func_131(iParam0))
	{
		case 758:
			return Global_1665596[func_45(-1)];
	
		case 759:
			return Global_1665602[func_45(-1)];
	
		case 760:
			return Global_1665608[func_45(-1)];
	
		case 761:
			return Global_1665614[func_45(-1)];
	
		case 8735:
			return Global_1665620[func_45(-1)];
	
		default:
		
	}

	return 0;
}

int func_131(int iParam0) // Hash - 0xE07AE818 ^0x87BF4E0F
{
	int num;
	int num2;

	num = iParam0;
	num2 = func_55(num);

	switch (num2)
	{
		case 0:
			return 758;
	
		case 1:
			return 759;
	
		case 2:
			return 760;
	
		case 3:
			return 761;
	
		case 4:
			return 8735;
	}

	return 14192;
}

int func_132(int iParam0) // Hash - 0x95C02DBF ^0x95C02DBF
{
	switch (iParam0)
	{
		case 117:
			return 13;
	
		case 118:
			return 14;
	
		case 119:
			return 18;
	}

	return 0;
}

BOOL func_133(int iParam0) // Hash - 0xE48228D0 ^0xE48228D0
{
	switch (iParam0)
	{
		case 117:
		case 118:
		case 119:
			return true;
	}

	return false;
}

void func_134(int iParam0) // Hash - 0xF52016AA ^0xF52016AA
{
	int offset;
	BOOL flag;
	int offset2;
	BOOL flag2;

	if (func_138(iParam0))
	{
		offset = 0;
		flag = false;
	
		if (func_138(iParam0))
		{
			offset = func_137(iParam0);
			flag = func_105(iParam0, -1);
		}
	
		if (!IS_BIT_SET(Global_1652549.f_471, offset))
			MISC::SET_BIT(&(Global_1652549.f_471), offset);
	
		if (flag)
			if (!IS_BIT_SET(Global_1652549.f_472, offset))
				MISC::SET_BIT(&(Global_1652549.f_472), offset);
	}

	if (func_136(iParam0))
	{
		offset2 = 0;
		flag2 = false;
	
		if (func_136(iParam0))
		{
			offset2 = func_135(iParam0);
			flag2 = func_105(iParam0, -1);
		}
	
		if (!IS_BIT_SET(Global_1652549.f_499, offset2))
			MISC::SET_BIT(&(Global_1652549.f_499), offset2);
	
		if (flag2)
			if (!IS_BIT_SET(Global_1652549.f_500, offset2))
				MISC::SET_BIT(&(Global_1652549.f_500), offset2);
	}

	return;
}

int func_135(int iParam0) // Hash - 0xEE599357 ^0xEE599357
{
	switch (iParam0)
	{
		case 143:
			return 0;
	
		case 144:
			return 1;
	
		case 145:
			return 2;
	
		case 146:
			return 3;
	
		case 147:
			return 4;
	
		case 148:
			return 5;
	
		case 149:
			return 6;
	
		case 150:
			return 7;
	
		case 151:
			return 8;
	
		case 152:
			return 9;
	
		case 153:
			return 10;
	
		case 154:
			return 11;
	
		case 155:
			return 12;
	
		case 156:
			return 15;
	
		case 157:
			return 16;
	
		case 158:
			return 17;
	}

	return 0;
}

BOOL func_136(int iParam0) // Hash - 0xE48228D0 ^0xE48228D0
{
	switch (iParam0)
	{
		case 143:
		case 144:
		case 145:
		case 146:
		case 147:
		case 148:
		case 149:
		case 150:
		case 151:
		case 152:
		case 153:
		case 154:
		case 155:
		case 156:
		case 157:
		case 158:
			return true;
	}

	return false;
}

int func_137(int iParam0) // Hash - 0xEE599357 ^0xEE599357
{
	switch (iParam0)
	{
		case 127:
			return 0;
	
		case 128:
			return 1;
	
		case 129:
			return 2;
	
		case 130:
			return 3;
	
		case 131:
			return 4;
	
		case 132:
			return 5;
	
		case 133:
			return 6;
	
		case 134:
			return 7;
	
		case 135:
			return 8;
	
		case 136:
			return 9;
	
		case 140:
			return 10;
	
		case 141:
			return 11;
	
		case 142:
			return 12;
	
		case 137:
			return 15;
	
		case 138:
			return 16;
	
		case 139:
			return 17;
	}

	return 0;
}

BOOL func_138(int iParam0) // Hash - 0xE48228D0 ^0xE48228D0
{
	switch (iParam0)
	{
		case 127:
		case 128:
		case 129:
		case 130:
		case 131:
		case 132:
		case 133:
		case 134:
		case 135:
		case 136:
		case 137:
		case 138:
		case 139:
		case 140:
		case 142:
		case 141:
			return true;
	}

	return false;
}

int func_139(var uParam0, var uParam1, var uParam2, int iParam3) // Hash - 0xF0765A5B ^0xF0765A5B
{
	int num;
	int i;

	num = *uParam0 + (*uParam1 * 4);

	switch (iParam3)
	{
		case 188:
			if (uParam2 == iLocal_110)
			{
				if (num < 0 || num > iLocal_111 - 1)
				{
					for (i = 0; i <= 3; i = i + 1)
					{
						if (num < 0 || num > iLocal_111 - 1)
						{
							*uParam1 = 3 - i;
							num = *uParam0 + (*uParam1 * 4);
						}
						else
						{
							i = 3;
						}
					}
				}
			}
			break;
	
		case 187:
			if (uParam2 == iLocal_110)
			{
				if (num < 0 || num > iLocal_111 - 1)
				{
					for (i = 0; i <= 3; i = i + 1)
					{
						if (num < 0 || num > iLocal_111 - 1)
						{
							*uParam1 = i;
							num = *uParam0 + (*uParam1 * 4);
						}
						else
						{
							i = 3;
						}
					}
				}
			}
			break;
	
		case 189:
			break;
	
		case 190:
			if (uParam2 == iLocal_110)
			{
				if (*uParam0 == 0)
				{
					num = *uParam0 + (*uParam1 * 4);
				
					for (i = 0; i <= 3; i = i + 1)
					{
						if (num > iLocal_111 - 1)
						{
							*uParam1 = *uParam1 - 1;
							num = *uParam0 + (*uParam1 * 4);
						}
						else
						{
							i = 3;
						}
					}
				}
				else if (num > iLocal_111 - 1)
				{
					if (*uParam0 > 0)
						*uParam0 = *uParam0 - 1;
					else
						*uParam0 = 0;
				
					num = *uParam0 + (*uParam1 * 4);
				}
			}
			break;
	}

	return num;
}

void func_140(var uParam0, var uParam1) // Hash - 0x62526A8A ^0x793FEB11
{
	if (uParam1->f_5 > iLocal_110)
	{
		func_149(uParam0);
		uParam1->f_5 = 0;
		uParam1->f_1 = 0;
	}

	return;
}

void func_141() // Hash - 0x79374ACB ^0x79374ACB
{
	func_125(0, -1, -1, 0, false);
	return;
}

void func_142() // Hash - 0xEB25D9F ^0xEB25D9F
{
	func_143();
	func_125(0, -1, -1, 0, false);
	return;
}

void func_143() // Hash - 0x850DE8C4 ^0x850DE8C4
{
	func_144(false);
	return;
}

void func_144(BOOL bParam0) // Hash - 0xD32FE308 ^0xD32FE308
{
	if (bParam0)
		func_145(0, 3, 0, 2, 0, false);
	else
		func_145(0, 2, 0, 2, 1, false);

	return;
}

void func_145(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, BOOL bParam5) // Hash - 0x5A814391 ^0xBBCD4C46
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("INIT_COLUMN_SCROLL");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam0);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam4);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bParam5);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	return;
}

void func_146(var uParam0) // Hash - 0xAC97E5E4 ^0xAC97E5E4
{
	uParam0->f_463 = 1;
	return;
}

void func_147(var uParam0) // Hash - 0xAC97E5E4 ^0xAC97E5E4
{
	uParam0->f_462 = 1;
	return;
}

void func_148(int iParam0, var uParam1) // Hash - 0x6A26DC5D ^0x6A26DC5D
{
	uParam1->f_455 = iParam0;
	uParam1->f_456 = iParam0;
	return;
}

void func_149(var uParam0) // Hash - 0xACEB12D7 ^0xACEB12D7
{
	func_150(uParam0);
	uParam0->f_460 = 1;
	return;
}

void func_150(var uParam0) // Hash - 0x84178B07 ^0x5FC3ABCF
{
	var unk;

	unk.f_1 = 12;
	unk.f_14 = 12;
	unk.f_111 = 12;
	unk.f_208 = 12;
	unk.f_221 = 12;
	unk.f_234 = 12;
	unk.f_331 = 12;
	unk.f_428 = 12;
	unk.f_441 = 12;
	unk.f_473 = 12;
	unk.f_486 = 12;
	*uParam0 = { unk };
	return;
}

void func_151(var uParam0) // Hash - 0xAC97E5E4 ^0xAC97E5E4
{
	uParam0->f_429 = 1;
	return;
}

void func_152(int iParam0, var uParam1) // Hash - 0x5AAB1292 ^0x5AAB1292
{
	uParam1->f_426 = iParam0;
	return;
}

void func_153(var uParam0) // Hash - 0xACEB12D7 ^0xACEB12D7
{
	func_154(uParam0);
	uParam0->f_428 = 1;
	return;
}

void func_154(var uParam0) // Hash - 0xBC9B069D ^0x4C83F09E
{
	var unk;

	unk.f_1 = 18;
	unk.f_20 = 18;
	unk.f_309 = 18;
	unk.f_328 = 18;
	unk.f_347 = 18;
	unk.f_366 = 18;
	unk.f_385 = 18;
	unk.f_404 = 18;
	*uParam0 = { unk };
	return;
}

