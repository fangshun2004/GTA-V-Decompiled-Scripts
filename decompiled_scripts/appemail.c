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
	char* sLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	float fLocal_22 = 0f;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	float fLocal_26 = 0f;
	float fLocal_27 = 0f;
	var uLocal_28 = 0;
	int iLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	float fLocal_34 = 0f;
	var uLocal_35 = 0;
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
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	float fLocal_50 = 0f;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	BOOL bLocal_56 = 0;
	BOOL bLocal_57 = 0;
	BOOL bLocal_58 = 0;
	BOOL bLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	BOOL bLocal_63 = 0;
	BOOL bLocal_64 = 0;
	BOOL bLocal_65 = 0;
	BOOL bLocal_66 = 0;
	BOOL bLocal_67 = 0;
	BOOL bLocal_68 = 0;
	char* sLocal_69 = 0;
	float fLocal_70 = 0f;
	BOOL bLocal_71 = 0;
#endregion

void main() // Hash - 0x5D84F89F ^0x5D84F89F
{
	int num;

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
	sLocal_19 = "NULL";
	fLocal_22 = 0f;
	fLocal_26 = -0.0375f;
	fLocal_27 = 0.17f;
	iLocal_29 = 3;
	fLocal_32 = 80f;
	fLocal_33 = 140f;
	fLocal_34 = 180f;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	iLocal_60 = -1;
	iLocal_61 = -1;
	fLocal_70 = 0f;
	bLocal_71 = true;

	if (Global_78558)
		SCRIPT::TERMINATE_THIS_THREAD();

	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	iLocal_55 = func_79();
	HUD::REQUEST_ADDITIONAL_TEXT("email", 1);

	while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(1))
	{
		SYSTEM::WAIT(0);
	}

	Global_22758 = false;
	Global_22759 = false;
	Global_20383.f_1 = 8;
	Global_22759 = true;
	Global_44455 = 1;

	if (Global_20365)
	{
		func_78(false);
		func_77(true);
		func_75(false);
	}

	SYSTEM::SETTIMERB(0);
	uLocal_47 = { Global_20336[Global_20328 /*3*/] };
	fLocal_50 = { uLocal_47 };
	fLocal_50 = fLocal_50 - 10f;
	fLocal_50.f_1 = fLocal_50.f_1 + 20f;

	while (true)
	{
		SYSTEM::WAIT(0);
	
		if (Global_20383.f_1 != 9)
		{
			if (Global_22759 && !Global_22758)
				func_73();
			else if (Global_22758)
				func_68();
		
			if (!bLocal_56)
			{
				bLocal_56 = true;
			}
			else if (Global_20365)
			{
				if (!bLocal_57)
				{
					bLocal_57 = true;
					func_66(Global_20364, iLocal_55);
					func_65(Global_20364, "SET_HEADER", "EM_INBOX", 0, 0, 0, 0);
					func_64(Global_20364, "DISPLAY_VIEW", 8f, -1082130432, -1082130432, -1082130432, -1082130432);
				}
				else
				{
					if (Global_44456)
					{
						Global_44456 = false;
						bLocal_58 = true;
					}
				
					if (bLocal_58)
					{
						SYSTEM::SETTIMERA(0);
						SYSTEM::SETTIMERB(0);
					
						if (iLocal_60 == -1)
						{
							if (bLocal_71)
							{
								bLocal_71 = false;
								fLocal_70 = 0f;
							}
						
							func_64(Global_20364, "SET_DATA_SLOT_EMPTY", 8f, -1082130432, -1082130432, -1082130432, -1082130432);
							num = func_66(Global_20364, iLocal_55);
							func_65(Global_20364, "SET_HEADER", "EM_INBOX", 0, 0, 0, 0);
							bLocal_59 = false;
						
							if (num > 0)
								func_78(true);
							else
								func_78(false);
						
							func_77(true);
							func_75(false);
							func_64(Global_20364, "DISPLAY_VIEW", 8f, fLocal_70, -1082130432, -1082130432, -1082130432);
						}
						else
						{
							func_64(Global_20364, "SET_DATA_SLOT_EMPTY", 21f, -1082130432, -1082130432, -1082130432, -1082130432);
							SYSTEM::WAIT(0);
							func_64(Global_20364, "DISPLAY_VIEW", 21f, -1082130432, -1082130432, -1082130432, -1082130432);
							SYSTEM::WAIT(0);
							func_77(true);
							func_63();
						
							if (iLocal_61 == -1)
							{
								func_61(iLocal_55, iLocal_60);
								func_56(Global_20364, iLocal_55, iLocal_60);
								Global_22785 = false;
								bLocal_68 = func_54(iLocal_55, iLocal_60);
							
								if (bLocal_68)
								{
									sLocal_69 = func_51(iLocal_55, iLocal_60);
								
									if (!func_50(37))
									{
										switch (func_48(_("Some emails contain hyperlinks to web pages. Press ~INPUT_CELLPHONE_EXTRA_OPTION~ to jump to the linked page.")))
										{
											case 2:
												func_45(_("Some emails contain hyperlinks to web pages. Press ~INPUT_CELLPHONE_EXTRA_OPTION~ to jump to the linked page."), 2, 0, 1000, 10000, 7, 0, 0, 0);
												break;
										
											case 1:
												func_44(37);
												break;
										}
									}
									else if (MISC::IS_PC_VERSION())
									{
										if (!IS_BIT_SET(Global_4542297, 17))
										{
											MISC::SET_BIT(&Global_4542297, 17);
											func_43(_("Some emails contain hyperlinks to web pages. Press ~INPUT_CELLPHONE_EXTRA_OPTION~ to jump to the linked page."), -1);
										}
									}
								
									func_75(true);
								}
								else
								{
									if (!func_50(38))
									{
										switch (func_48(_("Use ~INPUTGROUP_CELLPHONE_NAVIGATE_UD~ to scroll through an email.")))
										{
											case 2:
												func_45(_("Use ~INPUTGROUP_CELLPHONE_NAVIGATE_UD~ to scroll through an email."), 2, 0, 1000, 10000, 7, 0, 0, 0);
												break;
										
											case 1:
												func_44(38);
												break;
										}
									}
								
									func_75(false);
								}
							
								func_64(Global_20364, "DISPLAY_VIEW", 9f, -1082130432, -1082130432, -1082130432, -1082130432);
							}
							else
							{
								func_64(Global_20364, "SET_DATA_SLOT_EMPTY", 21f, -1082130432, -1082130432, -1082130432, -1082130432);
								SYSTEM::WAIT(0);
								func_64(Global_20364, "DISPLAY_VIEW", 21f, -1082130432, -1082130432, -1082130432, -1082130432);
								SYSTEM::WAIT(0);
								func_64(Global_20364, "SET_DATA_SLOT_EMPTY", 9f, -1082130432, -1082130432, -1082130432, -1082130432);
								func_40(Global_20364, iLocal_55, iLocal_60);
								func_64(Global_20364, "DISPLAY_VIEW", 9f, -1082130432, -1082130432, -1082130432, -1082130432);
							}
						}
					
						bLocal_58 = false;
					}
					else
					{
						func_17();
					}
				}
			}
		
			if (!iLocal_55 == func_79())
			{
				Global_44455 = 0;
				func_4();
			}
		}
	
		if (func_3())
		{
			Global_22758 = false;
			Global_22759 = false;
			Global_44455 = 0;
			func_1(0);
			SCRIPT::TERMINATE_THIS_THREAD();
		}
	}

	return;
}

void func_1(int iParam0) // Hash - 0xCA826375 ^0xB50BECB2
{
	if (func_2())
		if (iParam0 == 1)
			MOBILE::CELL_HORIZONTAL_MODE_TOGGLE(true);
		else if (Global_20383.f_1 > 3)
			MOBILE::CELL_HORIZONTAL_MODE_TOGGLE(false);

	return;
}

BOOL func_2() // Hash - 0xE8350107 ^0x112591EA
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

BOOL func_3() // Hash - 0x57EB5377 ^0xDC0824ED
{
	if (Global_20383.f_1 == 1 || Global_20383.f_1 == 3 || Global_20383.f_1 == 0 || Global_20327 == 1)
	{
		Global_20370 = 1;
		return true;
	}

	return false;
}

void func_4() // Hash - 0x616E3FF9 ^0x573A7CFE
{
	if (Global_53764 != -1)
	{
		GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(func_16(Global_53764));
		Global_53764 = -1;
	}

	Global_44455 = 0;

	if (Global_20383.f_1 > 4)
	{
		Global_20383.f_1 = 6;
		func_5();
	}

	SCRIPT::TERMINATE_THIS_THREAD();
	return;
}

void func_5() // Hash - 0xC0EDC8FD ^0xA0778517
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
			func_64(Global_20364, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_14(Global_8858);
		
			if (Global_8858 == 1)
			{
				func_64(Global_20364, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_20387), -1082130432, -1082130432, -1082130432);
				Global_20363 = Global_20387;
			}
			else
			{
				func_64(Global_20364, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_20388), -1082130432, -1082130432, -1082130432);
				Global_20363 = Global_20388;
			}
		
			if (Global_20371)
			{
				func_13(Global_20364, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, _("SELECT"), 0, 0, 0, 0);
				func_13(Global_20364, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, _("BACK"), 0, 0, 0, 0);
			}
			else
			{
				func_13(Global_20364, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
				func_13(Global_20364, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
			}
		
			if (Global_20586 == 0)
			{
				func_13(Global_20364, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				MISC::CLEAR_BIT(&Global_8253, 17);
			}
			else if (Global_78558)
			{
				func_13(Global_20364, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				MISC::CLEAR_BIT(&Global_8253, 17);
			}
			else
			{
				if (Global_20585 == 1)
					if (Global_20371)
						func_13(Global_20364, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, _("NEXT"), 0, 0, 0, 0);
					else
						func_13(Global_20364, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, 0, 0, 0, 0, 0);
				else if (Global_20371)
					func_13(Global_20364, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, _("NEXT"), 0, 0, 0, 0);
				else
					func_13(Global_20364, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
			
				MISC::SET_BIT(&Global_8253, 17);
			}
		
			if (Global_78558)
			{
				func_11();
				MISC::CLEAR_BIT(&Global_8255, 9);
				func_64(Global_20364, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_20387), -1082130432, -1082130432, -1082130432);
			}
			break;
	
		case 7:
			break;
	
		case 10:
			func_64(Global_20364, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_13(Global_20364, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_13(Global_20364, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			MISC::CLEAR_BIT(&Global_8253, 17);
		
			if (IS_BIT_SET(Global_8253, 20))
			{
				func_13(Global_20364, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_20371)
			{
				func_13(Global_20364, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, _("END CALL"), 0, 0, 0, 0);
			
				if (Global_20326)
					func_13(Global_20364, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else
			{
				func_13(Global_20364, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			break;
	
		case 9:
			if (Global_20382 == 1)
			{
				func_10();
				func_64(Global_20364, "SET_THEME", SYSTEM::TO_FLOAT(Global_113648.f_14053[Global_20383 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
			
				if (Global_21738)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20364, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(4);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(_("~a~"));
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_21740);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					func_9(_("CHAR_DEFAULT"));
					func_9(_("INCOMING CALL"));
					func_9(_("INCOMING CALL"));
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				else if (func_8(Global_7568, Global_20383) == 0)
				{
					func_13(Global_20364, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(2), -1f, -1f, &(Global_117[Global_7568 /*10*/].f_4), _("CHAR_DEFAULT"), _("INCOMING CALL"), _("Unknown"), 0);
				}
				else
				{
					func_13(Global_20364, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(2), -1f, -1f, &(Global_2028[Global_7568 /*29*/].f_3), &(Global_2028[Global_7568 /*29*/].f_7), _("INCOMING CALL"), &(Global_2028[Global_7568 /*29*/].f_3), 0);
				}
			
				func_64(Global_20364, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			else if (Global_21725 == 4 || Global_21725 == 3)
			{
				func_64(Global_20364, "SET_THEME", SYSTEM::TO_FLOAT(Global_113648.f_14053[Global_20383 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				func_10();
			
				if (Global_21738)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20364, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(4);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(_("~a~"));
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_21740);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					func_9(_("CHAR_DEFAULT"));
					func_9(_("CONNECTED"));
					func_9(_("CONNECTED"));
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				else
				{
					if (Global_21983)
						TEXT_LABEL_ASSIGN_STRING(&unk, _("CONNECTED"), 24);
					else
						TEXT_LABEL_ASSIGN_STRING(&unk, _("DIALING..."), 24);
				
					if (func_8(Global_7568, Global_20383) == 0)
					{
						func_64(Global_20364, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_13(Global_20364, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(3), -1f, -1f, &(Global_117[Global_7568 /*10*/].f_4), _("CHAR_DEFAULT"), &unk, _("Unknown"), 0);
					}
					else
					{
						func_64(Global_20364, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_13(Global_20364, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(3), -1f, -1f, &(Global_2028[Global_7568 /*29*/].f_3), &(Global_2028[Global_7568 /*29*/].f_7), &unk, &(Global_2028[Global_7568 /*29*/].f_3), 0);
					}
				}
			
				func_64(Global_20364, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
		
			func_6();
			break;
	
		default:
			break;
	}

	return;
}

void func_6() // Hash - 0x82E91317 ^0xEB10F020
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_20364))
	{
		func_7();
	
		if (Global_20382 == 1)
		{
			if (Global_20371)
				func_13(Global_20364, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, _("ANSWER"), 0, 0, 0, 0);
			else
				func_13(Global_20364, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
		
			if (Global_21772)
				func_13(Global_20364, "SET_SOFT_KEYS", 3f, 0f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			else if (IS_BIT_SET(Global_8253, 20))
				func_13(Global_20364, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			else if (Global_20371)
				func_13(Global_20364, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, _("REJECT"), 0, 0, 0, 0);
			else
				func_13(Global_20364, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
		
			func_13(Global_20364, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			MISC::CLEAR_BIT(&Global_8253, 17);
		}
		else
		{
			func_13(Global_20364, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_13(Global_20364, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			MISC::CLEAR_BIT(&Global_8253, 17);
		
			if (IS_BIT_SET(Global_8253, 20))
			{
				func_13(Global_20364, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_20371)
			{
				func_13(Global_20364, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, _("END CALL"), 0, 0, 0, 0);
			
				if (Global_20326)
					func_13(Global_20364, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else
			{
				func_13(Global_20364, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
		}
	}

	return;
}

void func_7() // Hash - 0xC47B431C ^0xB7004BEA
{
	if (Global_78558)
	{
		func_13(Global_20364, "SET_SOFT_KEYS", 1f, 0f, 9f, -1f, -1f, 0, 0, 0, 0, 0);
		MISC::CLEAR_BIT(&Global_8253, 17);
	}

	return;
}

int func_8(int iParam0, int iParam1) // Hash - 0x97DCD8A1 ^0xF8178EDD
{
	if (iParam1 < 0 || iParam1 > 4)
		return 0;

	return Global_2028[iParam0 /*29*/].f_24[iParam1];
}

void func_9(char* sParam0) // Hash - 0x8E2F5FE2 ^0x29D9D432
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	return;
}

void func_10() // Hash - 0x8961A3BB ^0x93F6EC7D
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

void func_11() // Hash - 0x521AF65D ^0xA9EF9F95
{
	if (Global_78558)
	{
		if (func_12() == 0)
			return;
	
		func_13(Global_20364, "SET_SOFT_KEYS", 1f, 1f, 9f, -1f, -1f, 0, 0, 0, 0, 0);
		MISC::SET_BIT(&Global_8253, 17);
	}

	return;
}

int func_12() // Hash - 0x98B7EFDD ^0x98B7EFDD
{
	return 0;
}

void func_13(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, const char* sParam7, const char* sParam8, const char* sParam9, const char* sParam10, const char* sParam11) // Hash - 0x39E054FF ^0x41D02682
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
		func_9(sParam7);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
		func_9(sParam8);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam9))
		func_9(sParam9);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam10))
		func_9(sParam10);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam11))
		func_9(sParam11);

	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	return;
}

void func_14(int iParam0) // Hash - 0xEDE59C89 ^0xEDE59C89
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
		Global_8822[i] = 0;
	}

	for (i = 0; i < 9; i = i + 1)
	{
		num = 0;
	
		if (func_15(14))
		{
			while (num < 34)
			{
				if (iParam0 == Global_8260[num /*15*/].f_11)
				{
					if (i == Global_8260[num /*15*/].f_4)
					{
						if (Global_8822[i] == 0)
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
								func_9(&Global_8260[num /*15*/]);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(value);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
						
							if (Global_2694519)
								if (num == 14)
									func_13(Global_20364, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(i), SYSTEM::TO_FLOAT(Global_8260[num /*15*/].f_10), SYSTEM::TO_FLOAT(Global_22788), -1f, &Global_8260[num /*15*/], 0, 0, 0, 0);
						
							Global_8822[i] = 1;
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
						if (Global_8822[i] == 0)
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
							
								func_13(Global_20364, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(i), SYSTEM::TO_FLOAT(Global_8260[num /*15*/].f_10), SYSTEM::TO_FLOAT(Global_22793), -1f, &Global_8260[num /*15*/], 0, 0, 0, 0);
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
								
									func_13(Global_20364, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(i), SYSTEM::TO_FLOAT(Global_8260[num /*15*/].f_10), SYSTEM::TO_FLOAT(value2), -1f, &Global_8260[num /*15*/], 0, 0, 0, 0);
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
								
									func_13(Global_20364, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(i), SYSTEM::TO_FLOAT(Global_8260[num /*15*/].f_10), SYSTEM::TO_FLOAT(value3), -1f, &Global_8260[num /*15*/], 0, 0, 0, 0);
								}
							}
							else if (num == 14)
							{
								func_13(Global_20364, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(i), SYSTEM::TO_FLOAT(Global_8260[num /*15*/].f_10), SYSTEM::TO_FLOAT(Global_22788), -1f, &Global_8260[num /*15*/], 0, 0, 0, 0);
							}
							else if (num == 20)
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20364, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(i);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8260[num /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_9(&Global_8260[num /*15*/]);
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
								func_9(&Global_8260[num /*15*/]);
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
								func_9(&Global_8260[num /*15*/]);
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
								func_9(&Global_8260[num /*15*/]);
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
								func_9(&Global_8260[num /*15*/]);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(42);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (Global_8260[num /*15*/].f_10 == 57 && num == 23)
							{
								value6 = 0;
								value6 = Global_1890001.f_1;
								func_13(Global_20364, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(i), SYSTEM::TO_FLOAT(Global_8260[num /*15*/].f_10), SYSTEM::TO_FLOAT(value6), -1f, &Global_8260[num /*15*/], 0, 0, 0, 0);
							}
							else
							{
								func_13(Global_20364, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(i), SYSTEM::TO_FLOAT(Global_8260[num /*15*/].f_10), SYSTEM::TO_FLOAT(0), -1f, &Global_8260[num /*15*/], 0, 0, 0, 0);
							}
						
							Global_8822[i] = 1;
						}
					}
				}
			
				num = num + 1;
			}
		}
	}

	return;
}

BOOL func_15(int iParam0) // Hash - 0x937D8816 ^0x937D8816
{
	return Global_43257 == iParam0;
}

char* func_16(int iParam0) // Hash - 0x1F6971E1 ^0x1F6971E1
{
	switch (iParam0)
	{
		case 0:
			return "Epsilon_Cars";
	
		case 1:
			return "Epsilon_Cars";
	
		case 2:
			return "Epsilon_Cars";
	
		case 3:
			return "Epsilon_Cars";
	
		case 4:
			return "Epsilon_Cars";
	
		case 5:
			return "Epsilon_Cars";
	
		case 6:
			return "Epsilon_Cars";
	
		case 12:
			return "Assassinations";
	
		case 13:
			return "Assassinations";
	
		case 14:
			return "Assassinations";
	
		case 15:
			return "Assassinations";
	
		case 64:
			return "BSPBadHacker";
	
		case 65:
			return "BPDGoodHacker";
	
		case 66:
			return "BPSMedHacker";
	
		case 75:
			return "email_quarry_bail_bond";
	
		case 76:
			return "email_abandonedfarm_bail_bond";
	
		case 77:
			return "email_mountain_bail_bond";
	
		case 78:
			return "email_hobocamp_bail_bond";
	
		case 80:
			return "email_quarry_bail_bond";
	
		case 81:
			return "email_abandonedfarm_bail_bond";
	
		case 82:
			return "email_mountain_bail_bond";
	
		case 83:
			return "email_hobocamp_bail_bond";
	
		case 205:
			return "hush_foxymama21";
	
		case 209:
			return "hush_alterego";
	
		case 212:
			return "hush_michael";
	
		case 238:
			return "hush_trevor";
	
		default:
		
	}

	return "NULL";
}

void func_17() // Hash - 0xAC3B2846 ^0xE3DFDA29
{
	BOOL flag;

	if (Global_22785)
	{
		iLocal_60 = 0;
		fLocal_70 = SYSTEM::TO_FLOAT(iLocal_60);
	
		if (func_39(iLocal_55) == 0)
			iLocal_60 = -1;
	
		if (!iLocal_60 == -1)
		{
			Global_20383.f_1 = 8;
			bLocal_58 = true;
			SYSTEM::SETTIMERB(0);
			func_37();
		}
	
		return;
	}

	if (func_36())
		return;

	if (Global_22758)
		return;

	if (!bLocal_64)
	{
		if (PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_CELLPHONE_UP) || PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_CELLPHONE_SCROLL_BACKWARD))
		{
			bLocal_64 = true;
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20364, "SET_INPUT_EVENT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_20372, true);
			SYSTEM::SETTIMERA(0);
			bLocal_71 = true;
		}
	}
	else if (PAD::IS_CONTROL_PRESSED(FRONTEND_CONTROL, INPUT_CELLPHONE_UP) || PAD::IS_CONTROL_PRESSED(FRONTEND_CONTROL, INPUT_CELLPHONE_SCROLL_BACKWARD))
	{
		if (SYSTEM::TIMERA() > 100 && iLocal_60 != -1)
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20364, "SET_INPUT_EVENT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			SYSTEM::SETTIMERA(0);
			bLocal_71 = true;
		}
	}
	else
	{
		bLocal_64 = false;
	}

	if (!bLocal_65)
	{
		if (PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_CELLPHONE_DOWN) || PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_CELLPHONE_SCROLL_FORWARD))
		{
			bLocal_65 = true;
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20364, "SET_INPUT_EVENT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(3);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_20372, true);
			SYSTEM::SETTIMERB(0);
			bLocal_71 = true;
		}
	}
	else if (PAD::IS_CONTROL_PRESSED(FRONTEND_CONTROL, INPUT_CELLPHONE_DOWN) || PAD::IS_CONTROL_PRESSED(FRONTEND_CONTROL, INPUT_CELLPHONE_SCROLL_FORWARD))
	{
		if (SYSTEM::TIMERB() > 100 && iLocal_60 != -1)
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20364, "SET_INPUT_EVENT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(3);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			SYSTEM::SETTIMERB(0);
			bLocal_71 = true;
		}
	}
	else
	{
		bLocal_65 = false;
	}

	if (!bLocal_66)
	{
		if (PAD::IS_CONTROL_PRESSED(FRONTEND_CONTROL, INPUT_CELLPHONE_LEFT))
		{
			bLocal_66 = true;
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20364, "SET_INPUT_EVENT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(4);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_20372, true);
		}
	}
	else if (!PAD::IS_CONTROL_PRESSED(FRONTEND_CONTROL, INPUT_CELLPHONE_LEFT))
	{
		bLocal_66 = false;
	}

	if (!bLocal_67)
	{
		if (PAD::IS_CONTROL_PRESSED(FRONTEND_CONTROL, INPUT_CELLPHONE_RIGHT))
		{
			bLocal_67 = true;
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20364, "SET_INPUT_EVENT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_20372, true);
		}
	}
	else if (!PAD::IS_CONTROL_PRESSED(FRONTEND_CONTROL, INPUT_CELLPHONE_RIGHT))
	{
		bLocal_67 = false;
	}

	if (!bLocal_63)
	{
		if (PAD::IS_CONTROL_PRESSED(FRONTEND_CONTROL, INPUT_CELLPHONE_SELECT) && SYSTEM::TIMERB() > 100)
		{
			if (iLocal_60 == -1)
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20364, "GET_CURRENT_SELECTION");
				iLocal_53 = GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
			
				while (!GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(iLocal_53))
				{
					SYSTEM::WAIT(0);
				}
			
				iLocal_54 = GRAPHICS::GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_INT(iLocal_53);
				iLocal_60 = iLocal_54;
			
				if (func_39(iLocal_55) == 0)
					iLocal_60 = -1;
			
				if (!iLocal_60 == -1)
				{
					if (bLocal_71 == true)
					{
						fLocal_70 = SYSTEM::TO_FLOAT(iLocal_60);
						bLocal_71 = false;
					}
				
					Global_20383.f_1 = 8;
					bLocal_58 = true;
					SYSTEM::SETTIMERB(0);
					func_37();
				}
			}
			else if (iLocal_61 == -1)
			{
				if (func_34(iLocal_55, iLocal_60) && !bLocal_59)
				{
					iLocal_61 = 0;
					bLocal_58 = true;
					SYSTEM::SETTIMERB(0);
					func_37();
				}
			}
			else
			{
				iLocal_61 = 0;
				func_22(iLocal_55, iLocal_60, iLocal_61);
				bLocal_59 = true;
				iLocal_61 = -1;
				bLocal_58 = true;
				func_37();
				SYSTEM::SETTIMERB(0);
			}
		
			bLocal_63 = true;
		}
	}
	else
	{
		bLocal_63 = false;
	}

	if (SYSTEM::TIMERB() > 100)
	{
		if (PAD::IS_CONTROL_PRESSED(FRONTEND_CONTROL, INPUT_CELLPHONE_CANCEL))
		{
			flag = false;
		
			if (iLocal_62 == 0)
			{
				if (!iLocal_60 == -1)
				{
					if (iLocal_61 == -1)
					{
						iLocal_60 = SYSTEM::ROUND(fLocal_70);
						bLocal_68 = false;
						SYSTEM::SETTIMERB(0);
						flag = true;
						func_21();
					}
					else
					{
						SYSTEM::SETTIMERB(0);
						iLocal_61 = -1;
						func_21();
					}
				
					bLocal_58 = true;
				}
				else
				{
					if (func_48(_("Some emails contain hyperlinks to web pages. Press ~INPUT_CELLPHONE_EXTRA_OPTION~ to jump to the linked page.")) == 0)
						func_44(37);
				
					if (func_48(_("Use ~INPUTGROUP_CELLPHONE_NAVIGATE_UD~ to scroll through an email.")) == 0)
						func_44(38);
				
					if (Global_22759 == false && !Global_22758)
					{
						func_21();
						Global_22758 = true;
						Global_44455 = 0;
					}
				}
			
				iLocal_62 = 1;
			}
		
			if (flag)
				iLocal_60 = -1;
		}
		else
		{
			iLocal_62 = 0;
		}
	}

	if (PAD::IS_CONTROL_PRESSED(FRONTEND_CONTROL, INPUT_CELLPHONE_EXTRA_OPTION))
	{
		if (bLocal_68)
		{
			if (func_48(_("Some emails contain hyperlinks to web pages. Press ~INPUT_CELLPHONE_EXTRA_OPTION~ to jump to the linked page.")) == 0)
				func_44(37);
		
			if (func_48(_("Use ~INPUTGROUP_CELLPHONE_NAVIGATE_UD~ to scroll through an email.")) == 0)
				func_44(38);
		
			TEXT_LABEL_ASSIGN_STRING(&Global_75676, sLocal_69, 64);
			func_18(7, false, 0);
			bLocal_68 = false;
			func_37();
		}
	}

	return;
}

int func_18(int iParam0, BOOL bParam1, int iParam2) // Hash - 0x31C42CF6 ^0x31C42CF6
{
	BOOL flag;
	BOOL flag2;
	BOOL flag3;

	Global_75806 = iParam0;
	flag = iParam2 == 1;
	flag2 = iParam2 == 2;
	flag3 = iParam2 == 3;

	switch (Global_75806)
	{
		case 3:
			Global_75804 = 0;
			break;
	
		case 4:
			Global_75804 = 3;
			break;
	}

	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("APPSECUROSERV")) > 0)
	{
		if (flag)
		{
		}
	
		return 0;
	}

	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("APPBIKERBUSINESS")) > 0)
	{
		if (flag2)
		{
		}
	
		return 0;
	}

	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("APPIMPORTEXPORT")) > 0)
	{
		if (flag3)
		{
		}
	
		return 0;
	}

	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("APPINTERNET")) > 0)
	{
		if (flag || flag2 || flag3)
		{
		}
	
		return 0;
	}

	if (Global_78558 && func_20())
		return 0;

	if (!Global_78558 && func_19())
		return 0;

	if (flag)
	{
		if (!SCRIPT::HAS_SCRIPT_LOADED("appSecuroServ"))
		{
			SCRIPT::REQUEST_SCRIPT("appSecuroServ");
		
			if (bParam1)
				return 0;
		}
	
		while (!SCRIPT::HAS_SCRIPT_LOADED("appSecuroServ"))
		{
			SYSTEM::WAIT(0);
		}
	
		SYSTEM::START_NEW_SCRIPT("appSecuroServ", APP_INTERNET);
		SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("appSecuroServ");
		return 1;
	}

	if (flag2)
	{
		if (!SCRIPT::HAS_SCRIPT_LOADED("appBikerBusiness"))
		{
			SCRIPT::REQUEST_SCRIPT("appBikerBusiness");
		
			if (bParam1)
				return 0;
		}
	
		while (!SCRIPT::HAS_SCRIPT_LOADED("appBikerBusiness"))
		{
			SYSTEM::WAIT(0);
		}
	
		SYSTEM::START_NEW_SCRIPT("appBikerBusiness", APP_INTERNET);
		SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("appBikerBusiness");
		return 1;
	}

	if (flag3)
	{
		if (!SCRIPT::HAS_SCRIPT_LOADED("appImportExport"))
		{
			SCRIPT::REQUEST_SCRIPT("appImportExport");
		
			if (bParam1)
				return 0;
		}
	
		while (!SCRIPT::HAS_SCRIPT_LOADED("appImportExport"))
		{
			SYSTEM::WAIT(0);
		}
	
		SYSTEM::START_NEW_SCRIPT("appImportExport", APP_INTERNET);
		SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("appImportExport");
		return 1;
	}

	if (!SCRIPT::HAS_SCRIPT_LOADED("appInternet"))
	{
		SCRIPT::REQUEST_SCRIPT("appInternet");
	
		if (bParam1)
			return 0;
	}

	while (!SCRIPT::HAS_SCRIPT_LOADED("appInternet"))
	{
		SYSTEM::WAIT(0);
	}

	SYSTEM::START_NEW_SCRIPT("appInternet", APP_INTERNET);
	SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("appInternet");
	return 1;
}

BOOL func_19() // Hash - 0x47FF56D2 ^0x47FF56D2
{
	return Global_75694;
}

BOOL func_20() // Hash - 0x47FF56D2 ^0x47FF56D2
{
	return Global_1935689;
}

void func_21() // Hash - 0xD1E0EACF ^0x91064A06
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Back", &Global_20372, true);

	return;
}

void func_22(int iParam0, int iParam1, int iParam2) // Hash - 0x6C545277 ^0x6C545277
{
	int num;
	int i;
	int num2;
	int num3;
	int num4;
	int num5;

	num = -1;

	switch (iParam0)
	{
		case 0:
			num = 0;
			break;
	
		case 1:
			num = 1;
			break;
	
		case 2:
			num = 2;
			break;
	}

	if (num < -1 && num > 3)
		return;

	for (i = Global_53403[num /*120*/] - 1 - iParam1; i >= 16; i = i - 16)
	{
	}

	num2 = i;
	num3 = Global_53403[num /*120*/].f_18[num2];
	num4 = Global_53403[num /*120*/].f_1[num2];

	if (num4 < 0 || num3 < 0 || !num4 < 9 || !num3 < 122)
		return;

	num5 = Global_47790[num3 /*46*/].f_32[num4];

	if (Global_44465[num5 /*12*/].f_4 == 0)
		return;

	Global_53403[num /*120*/].f_35[num2] = 1;
	Global_53403[num /*120*/].f_52[num2] = iParam2;
	func_23(num3, iParam2);
	return;
}

void func_23(int iParam0, int iParam1) // Hash - 0x1A02CD87 ^0xA6EA99E3
{
	int num;
	int num2;
	int num3;
	BOOL flag;
	int num4;
	int num5;
	int i;
	int num6;

	if (!Global_47790[iParam0 /*46*/] && !Global_47790[iParam0 /*46*/].f_1)
		return;

	num = Global_47790[iParam0 /*46*/].f_42 - 1;

	if (num < 0)
		return;

	num2 = Global_47790[iParam0 /*46*/].f_32[num];

	if (!iParam1 < Global_44465[num2 /*12*/].f_4)
		return;

	num3 = Global_44465[num2 /*12*/].f_5[iParam1 /*4*/].f_1;
	flag = false;

	if (Global_47790[iParam0 /*46*/].f_31 < Global_47790[iParam0 /*46*/].f_30 - 1)
	{
		num4 = Global_47790[iParam0 /*46*/].f_8[Global_47790[iParam0 /*46*/].f_31];
	
		if (num3 == num4)
			flag = true;
	}

	if (!flag)
	{
		if (num3 > -1)
		{
			func_33(iParam0, num3);
			num5 = Global_47790[iParam0 /*46*/].f_2;
			i = 0;
			num6 = Global_44465[num3 /*12*/].f_2;
		
			for (i = 0; i < num5; i = i + 1)
			{
				if (!i == num6)
					func_27(Global_47790[iParam0 /*46*/].f_3[i], iParam0, false, false, false);
			}
		}
	}

	if (Global_44465[num2 /*12*/].f_5[iParam1 /*4*/].f_3 > -1)
		func_24(Global_44465[num2 /*12*/].f_5[iParam1 /*4*/].f_3, false);

	if (Global_44465[num2 /*12*/].f_5[iParam1 /*4*/].f_2)
	{
		Global_47790[iParam0 /*46*/].f_1 = 1;
	}
	else if (num3 > -1)
	{
		Global_47790[iParam0 /*46*/].f_45 = Global_44465[num3 /*12*/].f_10;
		Global_47790[iParam0 /*46*/].f_43 = Global_44465[num3 /*12*/].f_11;
	}
	else
	{
		Global_47790[iParam0 /*46*/].f_45 = 0;
	}

	if (Global_47790[iParam0 /*46*/].f_43 < 30000)
		Global_47790[iParam0 /*46*/].f_43 = 30000;

	return;
}

void func_24(int iParam0, BOOL bParam1) // Hash - 0x21CF56CD ^0xDEAC9B76
{
	Global_44456 = true;

	if (!Global_47790[iParam0 /*46*/] && !Global_47790[iParam0 /*46*/].f_1)
	{
		Global_47790[iParam0 /*46*/] = true;
		func_26(iParam0, bParam1);
	}
	else
	{
		func_25(iParam0);
		func_24(iParam0, bParam1);
	}

	return;
}

void func_25(int iParam0) // Hash - 0x6D813B1C ^0xE9F8AC5F
{
	Global_47790[iParam0 /*46*/] = false;
	Global_47790[iParam0 /*46*/].f_31 = 0;
	Global_47790[iParam0 /*46*/].f_42 = 0;
	Global_47790[iParam0 /*46*/].f_45 = 0;
	Global_47790[iParam0 /*46*/].f_43 = 0;
	Global_47790[iParam0 /*46*/].f_1 = 0;
	return;
}

void func_26(int iParam0, BOOL bParam1) // Hash - 0xC42284AD ^0xA59C9433
{
	int num;
	int num2;
	int num3;
	int i;

	if (!Global_47790[iParam0 /*46*/] && !Global_47790[iParam0 /*46*/].f_1)
		return;

	if (Global_47790[iParam0 /*46*/].f_31 == Global_47790[iParam0 /*46*/].f_30)
	{
		num = Global_47790[iParam0 /*46*/].f_42 - 1;
	
		if (num < 0)
			return;
	
		if (Global_44465[Global_47790[iParam0 /*46*/].f_32[num] /*12*/].f_4 == 0)
			Global_47790[iParam0 /*46*/].f_1 = 1;
	
		return;
	}

	if (Global_47790[iParam0 /*46*/].f_1)
		return;

	num2 = Global_47790[iParam0 /*46*/].f_8[Global_47790[iParam0 /*46*/].f_31];
	Global_47790[iParam0 /*46*/].f_31 = Global_47790[iParam0 /*46*/].f_31 + 1;
	func_33(iParam0, num2);
	Global_47790[iParam0 /*46*/].f_45 = Global_44465[num2 /*12*/].f_10;
	Global_47790[iParam0 /*46*/].f_43 = Global_44465[num2 /*12*/].f_11;
	num3 = Global_47790[iParam0 /*46*/].f_2;
	func_27(Global_44465[num2 /*12*/].f_3, iParam0, false, false, bParam1);

	for (i = 0; i < num3; i = i + 1)
	{
		if (Global_47790[iParam0 /*46*/].f_3[i] != Global_44465[num2 /*12*/].f_2 && Global_47790[iParam0 /*46*/].f_3[i] != Global_44465[num2 /*12*/].f_3)
			func_27(Global_47790[iParam0 /*46*/].f_3[i], iParam0, false, false, bParam1);
	}

	if (Global_47790[iParam0 /*46*/].f_31 == Global_47790[iParam0 /*46*/].f_30)
	{
		if (Global_44465[Global_47790[iParam0 /*46*/].f_32[Global_47790[iParam0 /*46*/].f_42 - 1] /*12*/].f_4 == 0)
		{
			Global_47790[iParam0 /*46*/].f_1 = 1;
			return;
		}
	}

	return;
}

void func_27(int iParam0, int iParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Hash - 0xCCE70A8D ^0xE7D3CC92
{
	int num;
	int num2;
	int num3;
	var unk;
	int num4;
	int num5;
	BOOL i;
	BOOL j;
	int num6;
	int k;
	int num7;
	int num8;

	if (!iParam0 < 3)
		return;

	num = -1;
	TEXT_LABEL_ASSIGN_STRING(&unk, "UNSET", 64);

	if (!bParam2)
	{
		num4 = Global_47790[iParam1 /*46*/].f_42 - 1;
	
		if (num4 < 0)
			return;
	
		num5 = Global_47790[iParam1 /*46*/].f_32[num4];
		num3 = num5;
		unk = { func_32(Global_44465[num5 /*12*/].f_1) };
	
		if (Global_44465[num5 /*12*/].f_2 == iParam0 && !Global_44465[num5 /*12*/].f_3 == iParam0)
			return;
	
		num2 = Global_44465[num5 /*12*/].f_2;
		num = Global_53403[iParam0 /*120*/];
	
		for (i = false; num >= 16; i = true)
		{
			num = num - 16;
		}
	
		if (i)
		{
			if (!Global_53403[iParam0 /*120*/].f_69[num])
			{
				switch (iParam0)
				{
					case 0:
						Global_44457 = Global_44457 - 1;
					
						if (Global_44457 < 0)
							Global_44457 = 0;
						break;
				
					case 1:
						Global_44458 = Global_44458 - 1;
					
						if (Global_44458 < 0)
							Global_44458 = 0;
						break;
				
					case 2:
						Global_44459 = Global_44459 - 1;
					
						if (Global_44459 < 0)
							Global_44459 = 0;
						break;
				}
			}
		}
	
		Global_53403[iParam0 /*120*/].f_18[num] = iParam1;
		Global_53403[iParam0 /*120*/].f_1[num] = num4;
		Global_53403[iParam0 /*120*/].f_35[num] = 0;
		Global_53403[iParam0 /*120*/].f_86[num] = false;
		Global_53403[iParam0 /*120*/].f_69[num] = false;
		Global_53403[iParam0 /*120*/] = Global_53403[iParam0 /*120*/] + 1;
	}
	else
	{
		num = Global_53403[iParam0 /*120*/];
	
		for (j = false; num >= 16; j = true)
		{
			num = num - 16;
		}
	
		if (j)
		{
			if (!Global_53403[iParam0 /*120*/].f_69[num])
			{
				switch (iParam0)
				{
					case 0:
						Global_44457 = Global_44457 - 1;
					
						if (Global_44457 < 0)
							Global_44457 = 0;
						break;
				
					case 1:
						Global_44458 = Global_44458 - 1;
					
						if (Global_44458 < 0)
							Global_44458 = 0;
						break;
				
					case 2:
						Global_44459 = Global_44459 - 1;
					
						if (Global_44459 < 0)
							Global_44459 = 0;
						break;
				}
			}
		}
	
		num6 = -1;
		k = 0;
	
		for (k = 0; k < 7; k = k + 1)
		{
			if (Global_53765[k /*203*/].f_1 == iParam1 && Global_53765[k /*203*/].f_9 > 0)
				num6 = k;
		}
	
		if (num6 == -1)
			return;
	
		Global_53403[iParam0 /*120*/].f_18[num] = Global_53765[num6 /*203*/].f_1;
		Global_53403[iParam0 /*120*/].f_1[num] = Global_53765[num6 /*203*/].f_9 - 1;
		Global_53403[iParam0 /*120*/].f_35[num] = 0;
		Global_53403[iParam0 /*120*/].f_86[num] = true;
		Global_53403[iParam0 /*120*/].f_69[num] = false;
		Global_53403[iParam0 /*120*/] = Global_53403[iParam0 /*120*/] + 1;
		num7 = Global_53403[iParam0 /*120*/].f_1[num];
		num8 = Global_53765[num6 /*203*/].f_10[num7 /*48*/];
		num3 = num8;
		num2 = Global_44465[num8 /*12*/].f_2;
	
		if (Global_53765[num6 /*203*/].f_10[Global_53765[num6 /*203*/].f_9 - 1 /*48*/].f_1)
			TEXT_LABEL_COPY(&unk, { Global_53765[num6 /*203*/].f_10[Global_53765[num6 /*203*/].f_9 - 1 /*48*/].f_2 }, 16);
		else
			unk = { func_32(Global_44465[num8 /*12*/].f_1) };
	}

	if (!bParam4)
	{
		if (!Global_53403[iParam0 /*120*/].f_69[num] && !bParam3)
		{
			switch (iParam0)
			{
				case 0:
					func_28(0, num2, num3, &unk, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					break;
			
				case 1:
					if (num3 == 249)
						func_28(1, num2, num3, _("You've been nominated to take part in Southern San Andreas' premier amateur photography competition in the wildlife sector. You'll join hundreds of other young, talented..."), 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					else
						func_28(1, num2, num3, &unk, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					break;
			
				case 2:
					func_28(2, num2, num3, &unk, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					break;
			}
		}
	}

	return;
}

void func_28(int iParam0, int iParam1, int iParam2, const char* sParam3, const char* sParam4, const char* sParam5, const char* sParam6, const char* sParam7, const char* sParam8, const char* sParam9, const char* sParam10, const char* sParam11, const char* sParam12, const char* sParam13) // Hash - 0x959ECE1A ^0x705E15CF
{
	int num;
	BOOL flag;
	var txdName;

	if (CUTSCENE::IS_CUTSCENE_PLAYING())
		return;

	num = func_79();
	flag = false;
	TEXT_LABEL_ASSIGN_STRING(&txdName, func_31(iParam1, &flag), 64);

	if (num == iParam0)
	{
		switch (iParam2)
		{
			case 72:
				HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(_("Dear Mr. De Santa, please find below your weekly income from owned properties:~n~"));
				break;
		
			case 73:
				HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(_("Dear Mr. Clinton, please find below your weekly income from owned properties:~n~"));
				break;
		
			case 74:
				HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(_("Dear Mr. Philips, please find below your weekly income from owned properties:~n~"));
				break;
		
			default:
				HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(sParam3);
			
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam4);
			
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam5))
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam5);
			
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam6))
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam6);
			
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam7))
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam7);
			
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam8);
			
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam9))
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam9);
			
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam10))
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam10);
			
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam11))
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam11);
			
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam12))
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam12);
			
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam13))
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam13);
				break;
		}
	
		if (flag)
			func_29(HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&txdName, &txdName, false, 2, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(func_30(iParam1)), 0));
		else
			func_29(HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT("CHAR_DEFAULT", "CHAR_DEFAULT", false, 2, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(func_30(iParam1)), 0));
	
		switch (Global_20383)
		{
			case 0:
				TEXT_LABEL_ASSIGN_STRING(&Global_20372, "Phone_SoundSet_Michael", 24);
				Global_44457 = Global_44457 + 1;
			
				if (Global_44457 > 16)
					Global_44457 = 16;
				break;
		
			case 2:
				TEXT_LABEL_ASSIGN_STRING(&Global_20372, "Phone_SoundSet_Trevor", 24);
				Global_44459 = Global_44459 + 1;
			
				if (Global_44459 > 16)
					Global_44459 = 16;
				break;
		
			case 1:
				TEXT_LABEL_ASSIGN_STRING(&Global_20372, "Phone_SoundSet_Franklin", 24);
				Global_44458 = Global_44458 + 1;
			
				if (Global_44458 > 16)
					Global_44458 = 16;
				break;
		
			default:
				TEXT_LABEL_ASSIGN_STRING(&Global_20372, "Phone_SoundSet_Default", 24);
				break;
		}
	
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Notification", &Global_20372, true);
	}

	return;
}

void func_29(int iParam0) // Hash - 0x73CDCFA8 ^0x73CDCFA8
{
	Global_44460[Global_44464] = iParam0;
	Global_22783 = 1;
	Global_22782 = iParam0;
	Global_44464 = Global_44464 + 1;

	if (Global_44464 == 3)
		Global_44464 = 0;

	return;
}

char* func_30(int iParam0) // Hash - 0xA17D549C ^0x96DA5261
{
	switch (iParam0)
	{
		case 0:
			return _("Mike");
	
		case 3:
			return _("Jimmy");
	
		case 1:
			return _("Franklin");
	
		case 2:
			return _("Trevor");
	
		case 4:
			return _("Marnie");
	
		case 5:
			return _("Epsilon Store");
	
		case 6:
			return _("Maude");
	
		case 7:
			return _("Lester");
	
		case 8:
			return _("Maze Bank");
	
		case 9:
			return _("Fleeca");
	
		case 10:
			return _("Bank of Liberty");
	
		case 11:
			return _("Legendary Motorsport Sales");
	
		case 12:
			return _("Elitas Sales");
	
		case 13:
			return _("Cache & Carry");
	
		case 14:
			return _("Dock Tease");
	
		case 15:
			return _("LSC");
	
		case 16:
			return _("AMMU-NATION");
	
		case 17:
			return _("Christian Feltz");
	
		case 18:
			return _("Paige Harris");
	
		case 19:
			return _("Los Santos Tourist Info");
	
		case 20:
			return _("Rickie Luckens");
	
		case 21:
			return _("Minotaur Property Management");
	
		case 22:
			return _("Saeeda Kadam");
	
		case 23:
			return _("Vanilla Unicorn");
	
		case 24:
			return _("Dr Isiah Friedlander");
	
		case 25:
			return _("TRACEYHEARTSTEALER");
	
		case 26:
			return _("Dave Norton");
	
		case 27:
			return _("Amanda De Santa");
	
		case 28:
			return _("Donald Percival");
	
		case 29:
			return _("Ron");
	
		case 30:
			return _("Tanisha Marks");
	
		case 31:
			return _("Denise");
	
		case 32:
			return _("Lamar Davis");
	
		case 33:
			return _("Brad");
	
		case 34:
			return _("Patricia Madrazo");
	
		case 35:
			return _("Eileen Haworth");
	
		case 36:
			return _("Saeeda Kadam");
	
		case 37:
			return _("Gray Nicholson");
	
		case 38:
			return _("Nigel");
	
		case 39:
			return _("Hookies");
	
		case 40:
			return _("Towing Impound");
	
		case 41:
			return _("Downtown Cab Co,");
	
		case 42:
			return _("McKenzie Field Hangar");
	
		case 43:
			return _("Sonar Collections Dock");
	
		case 44:
			return _("Los Santos Customs");
	
		case 45:
			return _("Cinema Doppler");
	
		case 46:
			return _("Ten Cent Theater");
	
		case 47:
			return _("Tivoli Cinema");
	
		case 48:
			return _("Los Santos Golf Club");
	
		case 49:
			return _("Car Scrap Yard");
	
		case 50:
			return _("Smoke on the Water");
	
		case 51:
			return _("Tequi-la-la");
	
		case 52:
			return _("Pitchers");
	
		case 53:
			return _("The Hen House");
	
		case 54:
			return _("Pedal & Metal Sales");
	
		case 55:
			return _("SSA Super Autos Sales");
	
		case 56:
			return _("Hush Smush");
	
		case 57:
			return _("foxymama21");
	
		case 58:
			return _("Altarego12");
	
		case 59:
			return _("BadKitty11");
	
		case 60:
			return _("7yearbitch");
	
		case 61:
			return _("Froggy69");
	
		case 62:
			return _("Misscuddles");
	
		case 63:
			return _("Offroad Events");
	
		case 64:
			return _("Dock Tease");
	
		case 65:
			return _("Brother Adrian");
	
		default:
		
	}

	return "NULL";
}

const char* func_31(int iParam0, var uParam1) // Hash - 0x71D98912 ^0x53CBB5B1
{
	*uParam1 = 1;

	switch (iParam0)
	{
		case 0:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2028[0 /*29*/].f_7));
	
		case 1:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2028[1 /*29*/].f_7));
	
		case 2:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2028[2 /*29*/].f_7));
	
		case 7:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2028[12 /*29*/].f_7));
	
		case 4:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2028[60 /*29*/].f_7));
	
		case 6:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2028[62 /*29*/].f_7));
	
		case 3:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2028[14 /*29*/].f_7));
	
		case 16:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2028[97 /*29*/].f_7));
	
		case 19:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2028[99 /*29*/].f_7));
	
		case 15:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2028[96 /*29*/].f_7));
	
		case 63:
			return "CHAR_CARSITE2";
	
		case 64:
			return "CHAR_BOATSITE";
	
		case 8:
			return "CHAR_BANK_MAZE";
	
		case 9:
			return "CHAR_BANK_FLEECA";
	
		case 10:
			return "CHAR_BANK_BOL";
	
		case 21:
			return "CHAR_MINOTAUR";
	
		case 25:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2028[15 /*29*/].f_7));
	
		case 26:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2028[30 /*29*/].f_7));
	
		case 27:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2028[17 /*29*/].f_7));
	
		case 29:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2028[20 /*29*/].f_7));
	
		case 30:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2028[43 /*29*/].f_7));
	
		case 31:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2028[44 /*29*/].f_7));
	
		case 32:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2028[19 /*29*/].f_7));
	
		case 34:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2028[40 /*29*/].f_7));
	
		case 36:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(_("CHAR_SAEEDA"));
	
		case 38:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2028[64 /*29*/].f_7));
	
		case 5:
			return "CHAR_EPSILON";
	
		case 13:
			return "CHAR_MILSITE";
	
		case 11:
			return "CHAR_CARSITE";
	
		case 14:
			return "CHAR_BOATSITE";
	
		case 12:
			return "CHAR_PLANESITE";
	
		case 24:
			return "CHAR_DR_FRIEDLANDER";
	
		case 55:
			return "CHAR_CARSITE2";
	
		case 54:
			return "CHAR_BIKESITE";
	
		case 39:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2028[122 /*29*/].f_7));
	
		case 40:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2028[125 /*29*/].f_7));
	
		case 41:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2028[113 /*29*/].f_7));
	
		case 42:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2028[126 /*29*/].f_7));
	
		case 43:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2028[127 /*29*/].f_7));
	
		case 44:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2028[124 /*29*/].f_7));
	
		case 45:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2028[114 /*29*/].f_7));
	
		case 46:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2028[115 /*29*/].f_7));
	
		case 47:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2028[116 /*29*/].f_7));
	
		case 48:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2028[123 /*29*/].f_7));
	
		case 49:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2028[117 /*29*/].f_7));
	
		case 50:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2028[118 /*29*/].f_7));
	
		case 51:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2028[119 /*29*/].f_7));
	
		case 52:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2028[120 /*29*/].f_7));
	
		case 53:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2028[121 /*29*/].f_7));
	
		default:
		
	}

	*uParam1 = 0;
	return "ERROR!";
}

struct<16> func_32(int iParam0) // Hash - 0x3B9894F8 ^0xF235BA7A
{
	var unk;
	var unk17;

	if (iParam0 > -1)
	{
		TEXT_LABEL_ASSIGN_STRING(&unk, "EMSTR_", 64);
		TEXT_LABEL_APPEND_INT(&unk, iParam0, 64);
		return unk;
	}

	TEXT_LABEL_ASSIGN_STRING(&unk17, "FAIL", 64);
	return unk17;
}

int func_33(int iParam0, int iParam1) // Hash - 0x8A18F84 ^0x9A8738DD
{
	if (Global_47790[iParam0 /*46*/].f_42 >= 9)
		return 0;

	Global_47790[iParam0 /*46*/].f_32[Global_47790[iParam0 /*46*/].f_42] = iParam1;
	Global_47790[iParam0 /*46*/].f_42 = Global_47790[iParam0 /*46*/].f_42 + 1;
	return 1;
}

BOOL func_34(int iParam0, int iParam1) // Hash - 0xCD2BB3A4 ^0xCD2BB3A4
{
	int num;
	int i;
	int num2;
	int num3;
	int num4;
	int num5;

	num = -1;

	switch (iParam0)
	{
		case 0:
			num = 0;
			break;
	
		case 1:
			num = 1;
			break;
	
		case 2:
			num = 2;
			break;
	}

	if (num == -1)
		return false;

	for (i = Global_53403[num /*120*/] - 1 - iParam1; i >= 16; i = i - 16)
	{
	}

	num2 = i;

	if (!Global_53403[num /*120*/].f_86[num2])
	{
		num3 = Global_53403[num /*120*/].f_18[num2];
		num4 = Global_53403[num /*120*/].f_1[num2];
		num5 = Global_47790[num3 /*46*/].f_32[num4];
	
		if (Global_44465[num5 /*12*/].f_4 == 0)
			return false;
	
		if (Global_53403[num /*120*/].f_35[num2] == 1)
			return false;
	
		if (!func_35(num, num2))
			return false;
	
		return true;
	}

	return false;
}

BOOL func_35(int iParam0, int iParam1) // Hash - 0x4B976745 ^0x5B654A2
{
	int num;
	int num2;
	int num3;

	if (!iParam0 < 3)
		return false;

	num = Global_53403[iParam0 /*120*/].f_1[iParam1];
	num2 = Global_53403[iParam0 /*120*/].f_18[iParam1];

	if (!(Global_47790[num2 /*46*/] && !Global_47790[num2 /*46*/].f_1))
		return false;

	if (!num == Global_47790[num2 /*46*/].f_42 - 1)
		return false;

	num3 = Global_47790[num2 /*46*/].f_32[Global_47790[num2 /*46*/].f_42 - 1];

	if (Global_44465[num3 /*12*/].f_4 > 0)
		return true;

	return false;
}

BOOL func_36() // Hash - 0x47FF56D2 ^0x47FF56D2
{
	return Global_75693;
}

void func_37() // Hash - 0x457672CB ^0x189BF72
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Accept", &Global_20372, true);
		func_38();
	}

	return;
}

void func_38() // Hash - 0xD56EB04 ^0x9DB5936E
{
	if (func_2())
		MOBILE::CELL_SET_INPUT(5);

	return;
}

int func_39(int iParam0) // Hash - 0xC2FD9F2B ^0xC2FD9F2B
{
	int num;

	num = -1;

	switch (iParam0)
	{
		case 0:
			num = 0;
			break;
	
		case 1:
			num = 1;
			break;
	
		case 2:
			num = 2;
			break;
	}

	return Global_53403[num /*120*/];
}

void func_40(int iParam0, int iParam1, int iParam2) // Hash - 0xE4208D6F ^0xE4208D6F
{
	int num;
	int i;
	int num2;
	int num3;
	int num4;
	int num5;
	int j;
	int num6;
	int num7;
	var unk;
	var unk17;

	num = -1;

	switch (iParam1)
	{
		case 0:
			num = 0;
			break;
	
		case 1:
			num = 1;
			break;
	
		case 2:
			num = 2;
			break;
	}

	if (num == -1)
		return;

	for (i = Global_53403[num /*120*/] - 1 - iParam2; i >= 16; i = i - 16)
	{
	}

	num2 = i;

	if (!Global_53403[num /*120*/].f_86[num2])
	{
		num3 = Global_53403[num /*120*/].f_18[num2];
		num4 = Global_53403[num /*120*/].f_1[num2];
		num5 = Global_47790[num3 /*46*/].f_32[num4];
	
		if (Global_44465[num5 /*12*/].f_4 == 0)
			return;
	
		j = 0;
		num6 = Global_44465[num5 /*12*/].f_4;
	
		if (num6 > 1)
			num6 = 1;
	
		for (j = 0; j < num6; j = j + 1)
		{
			num7 = Global_44465[num5 /*12*/].f_5[j /*4*/].f_1;
			unk = { func_32(Global_44465[num7 /*12*/].f_1) };
			unk17 = { func_32(Global_44465[num7 /*12*/].f_1) };
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(9);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			func_9("");
			func_9("");
			func_9(_("Response:"));
			func_9(&unk17);
			func_9(func_42(Global_44465[num7 /*12*/].f_2));
			func_41(num7, Global_44465[num7 /*12*/].f_2);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
	}

	return;
}

void func_41(int iParam0, int iParam1) // Hash - 0xDD895BEB ^0x11CC80DB
{
	int num;

	num = iParam0;

	switch (num)
	{
		case 55:
		case 57:
		case 58:
		case 59:
		case 62:
		case 63:
		case 40:
		case 41:
		case 42:
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING("EmailAds_Elitas_Travel");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
			return;
	
		case 37:
		case 38:
		case 39:
		case 60:
		case 61:
		case 56:
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING("EmailAds_Dock_Tease");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
			return;
	
		case 34:
		case 35:
		case 36:
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING("EmailAds_Warstock");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
			return;
	
		case 31:
		case 32:
		case 33:
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING("EmailAds_Legendary_Motorsport");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
			return;
	
		default:
		
	}

	switch (iParam1)
	{
		case 13:
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING("EmailAds_Warstock");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
			return;
	
		case 15:
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING("EmailAds_LS_Customs");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
			return;
	
		case 19:
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING("EmailAds_LS_Tourist_Info");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
			return;
	
		default:
			return;
	}

	return;
}

char* func_42(int iParam0) // Hash - 0xA17D549C ^0xE37FFC7
{
	switch (iParam0)
	{
		case 0:
			return _("-Michael");
	
		case 3:
			return _("J");
	
		case 1:
			return _("F");
	
		case 2:
			return _("T");
	
		case 4:
			return _("M");
	
		case 5:
			return _("Praise Kraff");
	
		case 6:
			return _("-Maude");
	
		case 7:
			return _("-Lester");
	
		case 8:
			return _("Maze Online Support");
	
		case 9:
			return _("Fleeca Customer Services");
	
		case 10:
			return _("BoL Transaction Services");
	
		case 11:
			return _("Legendary Motorsport");
	
		case 12:
			return _("Elitas Travel");
	
		case 13:
			return _("C&C");
	
		case 14:
			return _("DT Sales");
	
		case 15:
			return _("LSC");
	
		case 16:
			return _("~b~<u>www.ammunation.net</u>~s~");
	
		case 17:
			return _("C");
	
		case 18:
			return _("P");
	
		case 19:
			return _("LS Tourist Info");
	
		case 20:
			return _("R");
	
		case 21:
			return _("Minotaur Finance - navigating the maze that is property ownership");
	
		case 22:
			return _("-Saeeda Kadam");
	
		case 23:
			return _("-Vanilla Unicorn");
	
		case 24:
			return _("Isiah Friedlander");
	
		case 25:
			return _("- Tracey");
	
		case 26:
			return _("- Davey");
	
		case 27:
			return _("- Amanda");
	
		case 28:
			return _("- Donald Percival");
	
		case 29:
			return _("- Ron");
	
		case 30:
			return _("- Tanisha");
	
		case 31:
			return _("- Denise");
	
		case 32:
			return _("- Lamar");
	
		case 33:
			return _("- Brad");
	
		case 34:
			return _("- Patricia M");
	
		case 35:
			return _("- Eileen Haworth");
	
		case 36:
			return _("- Saeeda Kadam");
	
		case 37:
			return _("- Gray N");
	
		case 38:
			return _("- Nigel");
	
		case 39:
			return _("- Hookies");
	
		case 40:
			return _("- Towing Impound");
	
		case 41:
			return _("- Downtown Cab Co.");
	
		case 42:
			return _("McKenzie Field Hangar");
	
		case 43:
			return _("- Sonar Collections Dock");
	
		case 44:
			return _("- Los Santos Customs");
	
		case 45:
			return _("- Cinema Doppler");
	
		case 46:
			return _("- Ten Cent Theater");
	
		case 47:
			return _("- Tivoli Cinema");
	
		case 48:
			return _("- Los Santos Golf Club");
	
		case 49:
			return _("- Car Scrap Yard");
	
		case 50:
			return _("- Smoke on the Water");
	
		case 51:
			return _("- Tequi-la-la");
	
		case 52:
			return _("- Pitchers");
	
		case 53:
			return _("- The Hen House");
	
		case 54:
			return _("Pedal & Metal Cycles");
	
		case 55:
			return _("SSA Super Autos");
	
		case 56:
			return _("Hush Smush");
	
		case 57:
			return _("foxymama21");
	
		case 58:
			return _("Altarego12");
	
		case 59:
			return _("BadKitty11");
	
		case 60:
			return _("7yearbitch");
	
		case 61:
			return _("Froggy69");
	
		case 62:
			return _("Misscuddles");
	
		case 63:
			return _("- Southern San Andreas Super Autos");
	
		case 64:
			return _("- Dock Tease Events");
	
		case 65:
			return _("Brother Adrian");
	
		default:
		
	}

	return "NULL";
}

void func_43(char* sParam0, int iParam1) // Hash - 0xCBB0D91 ^0x21070E5C
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam1);
	return;
}

void func_44(int iParam0) // Hash - 0x12249850 ^0x46987D7A
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

void func_45(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8) // Hash - 0x2B872DAE ^0x2C0F9799
{
	func_46(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
	return;
}

void func_46(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9) // Hash - 0x7C3327C8 ^0xF6DBE4CE
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
		func_47();
	}

	return;
}

void func_47() // Hash - 0xCF8881D1 ^0x40507183
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

int func_48(char* sParam0) // Hash - 0x3411B367 ^0xD0D08AE8
{
	if (MISC::ARE_STRINGS_EQUAL(sParam0, &Global_112291))
		return 1;

	if (func_49(sParam0))
		return 0;

	return 2;
}

BOOL func_49(char* sParam0) // Hash - 0x486E76BF ^0xD39F7AD6
{
	int i;

	for (i = 0; i < Global_113648.f_20412.f_145; i = i + 1)
	{
		if (MISC::ARE_STRINGS_EQUAL(sParam0, &Global_113648.f_20412[i /*16*/]))
			return true;
	}

	return false;
}

BOOL func_50(int iParam0) // Hash - 0x3F44A899 ^0x7041C53
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

char* func_51(int iParam0, int iParam1) // Hash - 0xC583566 ^0xCAEEC27B
{
	int num;
	var unk;
	int num2;
	int num3;
	int num4;
	int num5;
	BOOL flag;
	int num6;
	int i;

	num = -1;

	switch (iParam0)
	{
		case 0:
			num = 0;
			break;
	
		case 1:
			num = 1;
			break;
	
		case 2:
			num = 2;
			break;
	}

	if (num == -1)
		return "";

	num4 = func_53(num, iParam1, &num2, &num3, &unk);
	unk = unk;
	num5 = -1;
	flag = Global_53403[num /*120*/].f_86[num4];

	if (!flag)
	{
		num5 = Global_47790[num2 /*46*/].f_32[num3];
	}
	else
	{
		num6 = -1;
		i = 0;
	
		for (i = 0; i < 7; i = i + 1)
		{
			if (Global_53765[i /*203*/].f_1 == num2)
				num6 = i;
		}
	
		num5 = Global_53765[num6 /*203*/].f_10[num3 /*48*/];
	}

	return func_52(num5);
}

char* func_52(int iParam0) // Hash - 0xA17D549C ^0xAFFC88A8
{
	switch (iParam0)
	{
		case 7:
			return "WWW_EPSILONPROGRAM_COM_S_MAKEDONATION";
	
		case 8:
			return "WWW_EPSILONPROGRAM_COM_S_MAKEDONATION";
	
		case 9:
			return "WWW_EPSILONPROGRAM_COM_S_STORE";
	
		case 10:
			return "WWW_EPSILONPROGRAM_COM";
	
		case 11:
			return "WWW_EPSILONPROGRAM_COM";
	
		case 16:
			return "WWW_EPSILONPROGRAM_COM";
	
		case 17:
			return "WWW_MAZE_D_BANK_COM";
	
		case 18:
			return "WWW_FLEECA_COM";
	
		case 19:
			return "WWW_MAZE_D_BANK_COM";
	
		case 20:
			return "WWW_MAZE_D_BANK_COM";
	
		case 21:
			return "WWW_MAZE_D_BANK_COM";
	
		case 22:
			return "WWW_MAZE_D_BANK_COM";
	
		case 23:
			return "WWW_THEBANKOFLIBERTY_COM";
	
		case 24:
			return "WWW_FLEECA_COM";
	
		case 25:
			return "WWW_FLEECA_COM";
	
		case 26:
			return "WWW_FLEECA_COM";
	
		case 27:
			return "WWW_FLEECA_COM";
	
		case 28:
			return "WWW_THEBANKOFLIBERTY_COM";
	
		case 29:
			return "WWW_THEBANKOFLIBERTY_COM";
	
		case 30:
			return "WWW_THEBANKOFLIBERTY_COM";
	
		case 43:
			return "WWW_LCN_D_EXCHANGE_COM";
	
		case 47:
			return "WWW_AMMUNATION_NET";
	
		case 48:
			return "WWW_AMMUNATION_NET";
	
		case 49:
			return "WWW_AMMUNATION_NET";
	
		case 50:
			return "WWW_AMMUNATION_NET";
	
		case 51:
			return "WWW_AMMUNATION_NET";
	
		case 52:
			return "WWW_AMMUNATION_NET";
	
		case 53:
			return "WWW_AMMUNATION_NET";
	
		case 54:
			return "WWW_AMMUNATION_NET";
	
		case 55:
			return "WWW_ELITASTRAVEL_COM";
	
		case 56:
			return "WWW_DOCKTEASE_COM";
	
		case 57:
			return "WWW_ELITASTRAVEL_COM";
	
		case 58:
			return "WWW_ELITASTRAVEL_COM";
	
		case 59:
			return "WWW_ELITASTRAVEL_COM";
	
		case 60:
			return "WWW_DOCKTEASE_COM";
	
		case 61:
			return "WWW_DOCKTEASE_COM";
	
		case 62:
			return "WWW_ELITASTRAVEL_COM";
	
		case 63:
			return "WWW_ELITASTRAVEL_COM";
	
		case 68:
			return "WWW_AMMUNATION_NET";
	
		case 84:
			return "WWW_EPSILONPROGRAM_COM_S_TRACT";
	
		case 155:
			return "WWW_LEGENDARYMOTORSPORT_NET";
	
		case 156:
			return "WWW_LEGENDARYMOTORSPORT_NET";
	
		case 157:
			return "WWW_LEGENDARYMOTORSPORT_NET";
	
		case 181:
			return "WWW_EPSILONPROGRAM_COM_S_MAKEDONATION";
	
		case 194:
			return "WWW_HUSHSMUSH_COM";
	
		case 195:
			return "WWW_HUSHSMUSH_COM";
	
		case 196:
			return "WWW_HUSHSMUSH_COM";
	
		case 197:
			return "WWW_HUSHSMUSH_COM";
	
		case 198:
			return "WWW_HUSHSMUSH_COM";
	
		case 244:
			return "WWW_MYDIVINEWITHIN_COM";
	
		case 245:
			return "WWW_THECHILDRENOFTHEMOUNTAIN_COM";
	
		case 246:
			return "WWW_THECHILDRENOFTHEMOUNTAIN_COM";
	
		case 270:
			return "WWW_AMMUNATION_NET";
	
		case 271:
			return "WWW_AMMUNATION_NET";
	
		case 272:
			return "WWW_AMMUNATION_NET";
	
		case 273:
			return "WWW_AMMUNATION_NET";
	
		case 274:
			return "WWW_AMMUNATION_NET";
	
		case 275:
			return "WWW_AMMUNATION_NET";
	
		case 276:
			return "WWW_AMMUNATION_NET";
	
		default:
		
	}

	return "NULL";
}

int func_53(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4) // Hash - 0xB59343EC ^0xB59343EC
{
	int i;
	int num;

	for (i = Global_53403[iParam0 /*120*/] - 1 - iParam1; i >= 16; i = i - 16)
	{
	}

	num = i;
	*uParam2 = Global_53403[iParam0 /*120*/].f_18[num];
	*uParam3 = Global_53403[iParam0 /*120*/].f_1[num];
	*uParam4 = Global_53403[iParam0 /*120*/].f_35[num];
	return num;
}

BOOL func_54(int iParam0, int iParam1) // Hash - 0xFD287B17 ^0xFD287B17
{
	int num;
	int num2;
	int num3;
	var unk;
	int num4;
	int num5;
	BOOL flag;
	int num6;
	int i;

	num = -1;

	switch (iParam0)
	{
		case 0:
			num = 0;
			break;
	
		case 1:
			num = 1;
			break;
	
		case 2:
			num = 2;
			break;
	}

	if (num == -1)
		return 0;

	num4 = func_53(num, iParam1, &num2, &num3, &unk);
	unk = unk;
	num5 = -1;
	flag = Global_53403[num /*120*/].f_86[num4];

	if (!flag)
	{
		num5 = Global_47790[num2 /*46*/].f_32[num3];
	}
	else
	{
		num6 = -1;
		i = 0;
	
		for (i = 0; i < 7; i = i + 1)
		{
			if (Global_53765[i /*203*/].f_1 == num2)
				num6 = i;
		}
	
		num5 = Global_53765[num6 /*203*/].f_10[num3 /*48*/];
	}

	return func_55(num5);
}

int func_55(int iParam0) // Hash - 0x5000025C ^0x5000025C
{
	switch (iParam0)
	{
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 43:
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
		case 60:
		case 61:
		case 62:
		case 63:
		case 68:
		case 84:
		case 155:
		case 156:
		case 157:
		case 181:
		case 194:
		case 195:
		case 196:
		case 197:
		case 198:
		case 244:
		case 245:
		case 246:
		case 270:
		case 271:
		case 272:
		case 273:
		case 274:
		case 275:
		case 276:
			return 1;
	
		default:
		
	}

	return 0;
}

void func_56(int iParam0, int iParam1, int iParam2) // Hash - 0x10D94AE7 ^0xEF2531BA
{
	int num;
	BOOL flag;
	int num2;
	int num3;
	int num4;
	BOOL flag2;
	int num5;
	var unk;
	var unk17;
	int num6;
	int num7;
	int i;
	int num8;
	int num9;
	int j;
	int num10;
	int num11;
	var unk33;
	var componentType;
	BOOL flag3;
	int k;

	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT_EMPTY");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(9);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	num = -1;

	switch (iParam1)
	{
		case 0:
			num = 0;
			break;
	
		case 1:
			num = 1;
			break;
	
		case 2:
			num = 2;
			break;
	}

	if (num == -1)
		return;

	num4 = func_53(num, iParam2, &num2, &num3, &flag);
	flag2 = Global_53403[num /*120*/].f_86[num4];

	if (!Global_53403[num /*120*/].f_69[num4])
		func_60(-1);

	Global_53403[num /*120*/].f_69[num4] = true;

	if (!flag2)
	{
		num5 = Global_47790[num2 /*46*/].f_32[num3];
		unk = { func_32(Global_44465[num5 /*12*/]) };
		unk17 = { func_32(Global_44465[num5 /*12*/].f_1) };
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(9);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
		func_9(func_59(Global_44465[num5 /*12*/].f_3));
		func_9(func_59(Global_44465[num5 /*12*/].f_2));
		func_9(&unk);
		func_9(&unk17);
		func_9(func_42(Global_44465[num5 /*12*/].f_2));
		func_41(num5, Global_44465[num5 /*12*/].f_2);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	
		if (Global_44465[num5 /*12*/].f_4 == 0)
			func_78(false);
		else if (flag || !func_35(num, num4))
			func_78(false);
		else
			func_78(true);
	
		if (Global_47790[num2 /*46*/].f_42 > 1)
		{
			num6 = num3;
			num7 = num3 - 1;
			i = 0;
		
			for (i = 0; i < num6; i = i + 1)
			{
				num5 = Global_47790[num2 /*46*/].f_32[num7];
				unk = { func_32(Global_44465[num5 /*12*/]) };
				unk17 = { func_32(Global_44465[num5 /*12*/].f_1) };
				num8 = func_58(iParam1, Global_44465[num5 /*12*/].f_3);
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(9);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(i + 1);
				func_9(func_59(num8));
				func_9(func_59(Global_44465[num5 /*12*/].f_2));
				func_9(&unk);
				func_9(&unk17);
				func_9(func_42(Global_44465[num5 /*12*/].f_2));
				func_41(num5, Global_44465[num5 /*12*/].f_2);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				num7 = num7 - 1;
			}
		}
	}
	else
	{
		num9 = -1;
		j = 0;
	
		for (j = 0; j < 7; j = j + 1)
		{
			if (Global_53765[j /*203*/].f_1 == num2)
				num9 = j;
		}
	
		if (num9 == -1)
		{
			return;
		}
		else
		{
			num10 = Global_53765[num9 /*203*/].f_10[num3 /*48*/];
			num11 = Global_53765[num9 /*203*/].f_10[num3 /*48*/];
			unk33 = { func_32(Global_44465[num10 /*12*/]) };
			componentType = { func_32(Global_44465[num10 /*12*/].f_1) };
		
			if (Global_53765[num9 /*203*/].f_10[num3 /*48*/].f_1)
				TEXT_LABEL_COPY(&componentType, { Global_53765[num9 /*203*/].f_10[num3 /*48*/].f_2 }, 16);
		
			if (Global_44465[num10 /*12*/].f_4 == 0)
				func_78(false);
			else if (flag)
				func_78(false);
			else
				func_78(true);
		
			flag3 = false;
			flag3 = func_57(iParam0, Global_53765[num9 /*203*/].f_1, num3, num11);
		
			if (!flag3)
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(9);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
				func_9(func_59(Global_44465[num10 /*12*/].f_3));
				func_9(func_59(Global_44465[num10 /*12*/].f_2));
				func_9(&unk33);
			
				if (Global_53765[num9 /*203*/].f_10[num3 /*48*/].f_6 > 0)
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&componentType);
					k = 0;
				
					for (k = 0; k < Global_53765[num9 /*203*/].f_10[num3 /*48*/].f_6; k = k + 1)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_53765[num9 /*203*/].f_10[num3 /*48*/].f_7[k /*4*/]);
					}
				
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else
				{
					func_9(&componentType);
				}
			
				func_9(func_42(Global_44465[num10 /*12*/].f_2));
				func_41(num10, Global_44465[num10 /*12*/].f_2);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
		}
	}

	return;
}

BOOL func_57(int iParam0, int iParam1, int iParam2, int iParam3) // Hash - 0x8FDB59D7 ^0x5854E584
{
	int num;
	int num2;
	int value;
	var unk;
	var unk17;
	int i;
	int num3;
	BOOL flag;
	char* labelName;

	num = 0;
	num2 = iParam1;
	num2 = iParam2;
	num2 = num2;
	value = 0;
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT_EMPTY");
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	unk = { func_32(Global_44465[iParam3 /*12*/]) };

	switch (iParam3)
	{
		case 72:
			TEXT_LABEL_ASSIGN_STRING(&unk17, _("Dear Mr. De Santa, please find below your weekly income from owned properties:~n~"), 64);
			break;
	
		case 73:
			TEXT_LABEL_ASSIGN_STRING(&unk17, _("Dear Mr. Clinton, please find below your weekly income from owned properties:~n~"), 64);
			break;
	
		case 74:
			TEXT_LABEL_ASSIGN_STRING(&unk17, _("Dear Mr. Philips, please find below your weekly income from owned properties:~n~"), 64);
			break;
	}

	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(9);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(value);
	func_9(func_59(Global_44465[iParam3 /*12*/].f_3));
	func_9(func_59(Global_44465[iParam3 /*12*/].f_2));
	func_9(&unk);
	func_9(&unk17);
	func_9(func_42(Global_44465[iParam3 /*12*/].f_2));
	func_9("");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	value = value + 1;

	for (i = 0; i < 16; i = i + 1)
	{
		num3 = i;
		flag = false;
	
		switch (iParam3)
		{
			case 72:
				if (Global_113648.f_24906[num3 /*4*/] == 0)
					flag = true;
				break;
		
			case 73:
				if (Global_113648.f_24906[num3 /*4*/] == 1)
					flag = true;
				break;
		
			case 74:
				if (Global_113648.f_24906[num3 /*4*/] == 2)
					flag = true;
				break;
		}
	
		if (flag)
		{
			switch (num3)
			{
				case 0:
					labelName = _("Towing Impound");
					break;
			
				case 1:
					labelName = _("Downtown Cab Co.");
					break;
			
				case 2:
					labelName = _("McKenzie Field Hangar");
					break;
			
				case 3:
					labelName = _("Sonar Collections Dock");
					break;
			
				case 4:
					labelName = _("Los Santos Customs");
					break;
			
				case 5:
					labelName = _("Cinema Doppler");
					break;
			
				case 6:
					labelName = _("Ten Cent Theater");
					break;
			
				case 7:
					labelName = _("Tivoli Cinema");
					break;
			
				case 8:
					labelName = _("Los Santos Golf Club");
					break;
			
				case 9:
					labelName = _("Car Scrapyard");
					break;
			
				case 10:
					labelName = _("Smoke on the Water");
					break;
			
				case 11:
					labelName = _("Tequi-la-la");
					break;
			
				case 12:
					labelName = _("Pitchers");
					break;
			
				case 13:
					labelName = _("The Hen House");
					break;
			
				case 14:
					labelName = _("Hookies");
					break;
			
				case 15:
					labelName = _("Vanilla Unicorn");
					break;
			}
		
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(9);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(value);
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(_("~a~: $~1~"));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(labelName);
			HUD::ADD_TEXT_COMPONENT_INTEGER(Global_113648.f_24906[num3 /*4*/].f_3);
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			value = value + 1;
			num = 1;
		}
	}

	return num;
}

int func_58(int iParam0, int iParam1) // Hash - 0x4DF4AA8D ^0x4DF4AA8D
{
	if (iParam1 == 0)
		if (iParam0 == 1)
			return 1;
		else if (iParam0 == 2)
			return 2;

	return iParam1;
}

char* func_59(int iParam0) // Hash - 0xA17D549C ^0x2857191A
{
	switch (iParam0)
	{
		case 0:
			return _("Mike@eyefind.info");
	
		case 3:
			return _("jimmy@eyefind.info");
	
		case 1:
			return _("Frankie@eyefind.info");
	
		case 2:
			return _("trev@eyefind.info");
	
		case 4:
			return _("Marnie@epsilonprogram.com");
	
		case 5:
			return _("noreply@epsilonprogram.com");
	
		case 6:
			return _("Maude@eyefind.info");
	
		case 7:
			return _("t34b4g99@eyefind.info");
	
		case 8:
			return _("services@maze-bank.com");
	
		case 9:
			return _("services@fleeca.com");
	
		case 10:
			return _("transactions@thebankofliberty.com");
	
		case 11:
			return _("sales@legendarymotorsport.net");
	
		case 12:
			return _("sales@elitastravel.com");
	
		case 13:
			return _("CnCsales@warstock-cache-and-carry.com");
	
		case 14:
			return _("sales@docktease.com");
	
		case 15:
			return _("MODS@lossantoscustoms.com");
	
		case 16:
			return _("GUNS@ammunation.net");
	
		case 17:
			return _("Feltz@eyefind.info");
	
		case 18:
			return _("Paige@eyefind.info");
	
		case 19:
			return _("info@LSTouristInfo.com");
	
		case 20:
			return _("Rickie@lifeinvader.com");
	
		case 21:
			return _("property@minotaurfinance.com");
	
		case 22:
			return _("SKadam@eyefind.info");
	
		case 23:
			return _("promotions@vanillaunicorn.xxx");
	
		case 24:
			return _("DrFriedlander@eyefind.info");
	
		case 25:
			return _("tracey@eyefind.info");
	
		case 26:
			return _("DaveNorton@eyefind.info");
	
		case 27:
			return _("AmandaDS@eyefind.info");
	
		case 28:
			return _("Don.Percival@merryweather.com");
	
		case 29:
			return _("BigBadRon@eyefind.info");
	
		case 30:
			return _("TanishaMarks@eyefind.info");
	
		case 31:
			return _("denise@eyefind.info");
	
		case 32:
			return _("LamDav@eyefind.info");
	
		case 33:
			return _("Bradley@eyefind.info");
	
		case 34:
			return _("PatriciaMadrazo@eyefind.info");
	
		case 35:
			return _("EileenHaworth@eyefind.info");
	
		case 36:
			return _("SaeedaKadam@eyefind.info");
	
		case 37:
			return _("GrayNicholson@eyefind.info");
	
		case 38:
			return _("Nigel@eyefind.info");
	
		case 39:
			return _("Hookies@eyefind.info");
	
		case 40:
			return _("TowingImpound@eyefind.info");
	
		case 41:
			return _("DowntownCabCo@eyefind.info");
	
		case 42:
			return _("McKenzieField@eyefind.info");
	
		case 43:
			return _("SonarCollections@eyefind.info");
	
		case 44:
			return _("LosSantosCustoms@eyefind.info");
	
		case 45:
			return _("CinemaDoppler@eyefind.info");
	
		case 46:
			return _("TenCentTheater@eyefind.info");
	
		case 47:
			return _("TivoliCinema@eyefind.info");
	
		case 48:
			return _("LosSantosGolfClub@eyefind.info");
	
		case 49:
			return _("CarScrapYard@eyefind.info");
	
		case 50:
			return _("SmokeOnTheWater@eyefind.info");
	
		case 51:
			return _("Tequi-la-la@eyefind.info");
	
		case 52:
			return _("Pitchers@eyefind.info");
	
		case 53:
			return _("TheHenHouse@eyefind.info");
	
		case 54:
			return _("sales@pandmcycles.com");
	
		case 55:
			return _("sales@southernsanandreassuperautos.com");
	
		case 56:
			return _("promotions@hushmush.com");
	
		case 57:
			return _("foxymama21@hushmush.com");
	
		case 58:
			return _("Altarego12@hushmush.com");
	
		case 59:
			return _("BadKitty11@hushmush.com");
	
		case 60:
			return _("7yearbitch@hushmush.com");
	
		case 61:
			return _("Froggy69@hushmush.com");
	
		case 62:
			return _("Misscuddles@hushmush.com");
	
		case 63:
			return _("events@SouthernSanAndreasSuperAutos.com");
	
		case 64:
			return _("RaceOrganiser@docktease.com");
	
		case 65:
			return _("adrian@mydivinewithin.com");
	
		default:
		
	}

	return "NULL";
}

void func_60(int iParam0) // Hash - 0xA142F571 ^0xA142F571
{
	switch (func_79())
	{
		case 0:
			Global_44457 = Global_44457 + iParam0;
		
			if (Global_44457 < 0)
				Global_44457 = 0;
			break;
	
		case 2:
			Global_44459 = Global_44459 + iParam0;
		
			if (Global_44459 < 0)
				Global_44459 = 0;
			break;
	
		case 1:
			Global_44458 = Global_44458 + iParam0;
		
			if (Global_44458 < 0)
				Global_44458 = 0;
			break;
	
		default:
			break;
	}

	return;
}

void func_61(int iParam0, int iParam1) // Hash - 0xAC4E1969 ^0xAC4E1969
{
	int num;
	int i;
	int num2;
	int num3;
	int num4;
	int num5;
	BOOL flag;
	int num6;
	int j;

	num = -1;

	switch (iParam0)
	{
		case 0:
			num = 0;
			break;
	
		case 1:
			num = 1;
			break;
	
		case 2:
			num = 2;
			break;
	}

	if (num == -1)
		return;

	for (i = Global_53403[num /*120*/] - 1 - iParam1; i >= 16; i = i - 16)
	{
	}

	num2 = i;
	num3 = Global_53403[num /*120*/].f_18[num2];
	num4 = Global_53403[num /*120*/].f_1[num2];
	num5 = -1;
	flag = Global_53403[num /*120*/].f_86[num2];

	if (!flag)
	{
		num5 = Global_47790[num3 /*46*/].f_32[num4];
	}
	else
	{
		num6 = -1;
		j = 0;
	
		for (j = 0; j < 7; j = j + 1)
		{
			if (Global_53765[j /*203*/].f_1 == num3)
				num6 = j;
		}
	
		if (num6 == -1)
			return;
	
		num5 = Global_53765[num6 /*203*/].f_10[num4 /*48*/];
	}

	if (!func_62(num5))
		return;

	if (Global_53764 != -1)
		GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(func_16(Global_53764));

	Global_53764 = num5;
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(func_16(num5), false);

	while (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED(func_16(num5)))
	{
		SYSTEM::WAIT(100);
	}

	return;
}

BOOL func_62(int iParam0) // Hash - 0x5000025C ^0x5000025C
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
		case 12:
		case 13:
		case 14:
		case 15:
		case 64:
		case 65:
		case 66:
		case 75:
		case 76:
		case 77:
		case 78:
		case 80:
		case 81:
		case 82:
		case 83:
		case 205:
		case 209:
		case 212:
		case 238:
			return true;
	
		default:
		
	}

	return false;
}

void func_63() // Hash - 0xB49BF5 ^0xE42C54FA
{
	int i;

	i = 0;

	for (i = 0; i < 3; i = i + 1)
	{
		if (Global_44460[i] != -1)
		{
			HUD::THEFEED_REMOVE_ITEM(Global_44460[i]);
			Global_44460[i] = -1;
		}
	}

	Global_44464 = 0;
	return;
}

void func_64(int iParam0, char* sParam1, float fParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Hash - 0x5F496D0E ^0x86F8205
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

void func_65(int iParam0, char* sParam1, char* sParam2, const char* sParam3, const char* sParam4, const char* sParam5, const char* sParam6) // Hash - 0xD2A7E1F6 ^0x3BA00BEB
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, sParam1);
	func_9(sParam2);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
		func_9(sParam3);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
		func_9(sParam4);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam5))
		func_9(sParam5);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam6))
		func_9(sParam6);

	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	return;
}

int func_66(int iParam0, int iParam1) // Hash - 0x52558828 ^0x52558828
{
	int num;
	int i;
	int num2;
	int j;
	int num3;
	int num4;
	int num5;
	int value;
	var unk;
	int num6;
	int num7;
	int k;
	int num8;
	int value2;
	int num9;
	var unk5;

	func_67(iParam1);
	num = -1;

	switch (iParam1)
	{
		case 0:
			num = 0;
			break;
	
		case 1:
			num = 1;
			break;
	
		case 2:
			num = 2;
			break;
	}

	if (num == -1)
		return 0;

	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT_EMPTY");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(8);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();

	if (Global_53403[num /*120*/] < 1)
		return 0;

	for (i = Global_53403[num /*120*/] - 1; i >= 16; i = i - 16)
	{
	}

	num2 = Global_53403[num /*120*/];

	if (num2 > 16)
		num2 = 16;

	if (i < 0 || i > 15)
		return 0;

	j = 0;

	for (j = 0; j < num2; j = j + 1)
	{
		if (!Global_53403[num /*120*/].f_86[i])
		{
			num3 = Global_53403[num /*120*/].f_18[i];
			num4 = Global_53403[num /*120*/].f_1[i];
			num5 = Global_47790[num3 /*46*/].f_32[num4];
			value = 0;
		
			if (Global_53403[num /*120*/].f_69[i])
				value = 1;
		
			if (value == 1)
				if (Global_44465[num5 /*12*/].f_4 > 0)
					if (Global_53403[num /*120*/].f_35[i] == 0)
						value = 2;
		
			TEXT_LABEL_COPY(&unk, { func_32(Global_44465[num5 /*12*/]) }, 4);
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(8);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(j);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(value);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			func_9(func_59(Global_44465[num5 /*12*/].f_2));
			func_9(&unk);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
		else
		{
			num6 = Global_53403[num /*120*/].f_18[i];
			num7 = -1;
			k = 0;
		
			for (k = 0; k < 7; k = k + 1)
			{
				if (Global_53765[k /*203*/].f_1 == num6)
					num7 = k;
			}
		
			if (num7 == -1)
			{
				return 1;
			}
			else
			{
				num8 = Global_53403[num /*120*/].f_1[i];
				value2 = 0;
			
				if (Global_53403[num /*120*/].f_69[i])
					value2 = 1;
			
				num9 = Global_53765[num7 /*203*/].f_10[num8 /*48*/];
			
				if (value2 == 1)
					if (Global_44465[num9 /*12*/].f_4 > 0)
						if (Global_53403[num /*120*/].f_35[i] == 0)
							value2 = 2;
			
				unk5 = { func_32(Global_44465[num9 /*12*/]) };
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(8);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(j);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(value2);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
				func_9(func_59(Global_44465[num9 /*12*/].f_2));
				func_9(&unk5);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
		}
	
		i = i - 1;
	
		if (i < 0)
			i = 15;
	}

	return num2;
}

void func_67(int iParam0) // Hash - 0x23B29944 ^0x23B29944
{
	int num;
	int i;
	int num2;
	int num3;
	int num4;
	int j;
	BOOL flag;
	int unk120;
	int num5;
	int k;
	int num6;

	num = -1;

	switch (iParam0)
	{
		case 0:
			num = 0;
			break;
	
		case 1:
			num = 1;
			break;
	
		case 2:
			num = 2;
			break;
	}

	if (num == -1)
		return;

	if (Global_53403[num /*120*/] < 1)
		return;

	for (i = Global_53403[num /*120*/] - 1; i >= 16; i = i - 16)
	{
	}

	num2 = Global_53403[num /*120*/];

	if (num2 > 16)
		num2 = 16;

	if (i < 0 || i > 15)
		return;

	num3 = i - num2 - 1;

	if (num3 < 0)
		num3 = 16 + num3;

	num4.f_1 = 16;
	num4.f_18 = 16;
	num4.f_35 = 16;
	num4.f_52 = 16;
	num4.f_69 = 16;
	num4.f_86 = 16;
	num4.f_103 = 16;

	for (j = 0; j < num2; j = j + 1)
	{
		flag = true;
	
		if (Global_53403[num /*120*/].f_103[num3])
			flag = false;
	
		if (Global_53403[num /*120*/].f_86[num3])
		{
			unk120 = Global_53403[num /*120*/].f_18[num3];
			num5 = -1;
			k = 0;
		
			for (k = 0; k < 7; k = k + 1)
			{
				if (Global_53765[k /*203*/].f_1 == unk120)
					num5 = k;
			}
		
			if (num5 == -1)
				flag = false;
		}
	
		if (flag)
		{
			num6 = num4;
			num4.f_1[num6] = Global_53403[num /*120*/].f_1[num3];
			num4.f_18[num6] = Global_53403[num /*120*/].f_18[num3];
			num4.f_35[num6] = Global_53403[num /*120*/].f_35[num3];
			num4.f_52[num6] = Global_53403[num /*120*/].f_52[num3];
			num4.f_69[num6] = Global_53403[num /*120*/].f_69[num3];
			num4.f_86[num6] = Global_53403[num /*120*/].f_86[num3];
			num4 = num4 + 1;
		}
	
		num3 = num3 + 1;
	
		if (num3 == 16)
			num3 = 0;
	}

	Global_53403[num /*120*/] = num4;

	for (j = 0; j < 16; j = j + 1)
	{
		Global_53403[num /*120*/].f_103[j] = false;
		Global_53403[num /*120*/].f_1[j] = num4.f_1[j];
		Global_53403[num /*120*/].f_18[j] = num4.f_18[j];
		Global_53403[num /*120*/].f_35[j] = num4.f_35[j];
		Global_53403[num /*120*/].f_52[j] = num4.f_52[j];
		Global_53403[num /*120*/].f_69[j] = num4.f_69[j];
		Global_53403[num /*120*/].f_86[j] = num4.f_86[j];
	}

	return;
}

void func_68() // Hash - 0x83863E97 ^0x83863E97
{
	float num;

	num = func_69(fLocal_50, uLocal_47, -90f, 0f, 90f, Global_20343, 350f, false);

	if (Global_9057 == 0)
		MOBILE::SET_MOBILE_PHONE_SCALE(500f + (75f * (1f - num)));

	if (num >= 1f)
	{
		Global_22758 = false;
		func_1(0);
		func_4();
		iLocal_18 = 0;
	}

	return;
}

float func_69(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, float fParam6, float fParam7, float fParam8, float fParam9, float fParam10, float fParam11, float fParam12, BOOL bParam13) // Hash - 0x7D12D12A ^0x5CB36A2F
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

	if (func_72() && Global_4542576 == 0)
		return 2f;

	if (iLocal_18 == 0)
		iLocal_18 = MISC::GET_GAME_TIMER();

	num = func_71(SYSTEM::TO_FLOAT(MISC::GET_GAME_TIMER() - iLocal_18) / fParam12, 0f, 1f);

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
	
		Global_20311 = { func_70(uParam0, uParam3, num2) };
		Global_20314 = { func_70(fParam6, fParam9, num2) };
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

Vector3 func_70(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, float fParam6) // Hash - 0x2CB61ED2 ^0x2CB61ED2
{
	return uParam0 + ((uParam3 - uParam0) * { fParam6, fParam6, fParam6 });
}

float func_71(float fParam0, float fParam1, float fParam2) // Hash - 0xF4DC03E3 ^0xF4DC03E3
{
	if (fParam0 > fParam2)
		return fParam2;
	else if (fParam0 < fParam1)
		return fParam1;

	return fParam0;
}

BOOL func_72() // Hash - 0xA4B50453 ^0xAB3B9EF5
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
	
		if (func_15(14))
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

void func_73() // Hash - 0x276A8A41 ^0x63912B37
{
	float num;

	num = func_69(uLocal_47, fLocal_50, Global_20343, -90f, 0f, 90f, 350f, false);

	if (Global_9057 == 0)
		if (MISC::IS_PC_VERSION())
			if (!func_74())
				MOBILE::SET_MOBILE_PHONE_SCALE(500f + (75f * num));
		else
			MOBILE::SET_MOBILE_PHONE_SCALE(500f + (75f * num));

	if (num >= 1f)
	{
		func_1(1);
		Global_22759 = false;
		iLocal_18 = 0;
	}

	return;
}

BOOL func_74() // Hash - 0xF99F1C42 ^0xCC7DF7CD
{
	eViewModeContext camActiveViewModeContext;
	eViewMode camViewModeForContext;

	camActiveViewModeContext = CAM::GET_CAM_ACTIVE_VIEW_MODE_CONTEXT();
	camViewModeForContext = CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(camActiveViewModeContext);

	if (camViewModeForContext == FIRST_PERSON)
		return true;

	return false;
}

void func_75(BOOL bParam0) // Hash - 0xF7D247CF ^0xA1C28CED
{
	var r;
	var g;
	var b;
	var a;

	if (MISC::IS_XBOX360_VERSION() || func_76())
		HUD::GET_HUD_COLOUR(HUD_COLOUR_BLUE, &r, &g, &b, &a);
	else
		HUD::GET_HUD_COLOUR(HUD_COLOUR_PINKLIGHT, &r, &g, &b, &a);

	if (bParam0)
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20364, "SET_SOFT_KEYS");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(16);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
	else
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20364, "SET_SOFT_KEYS");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(16);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}

	return;
}

BOOL func_76() // Hash - 0x4C81F065 ^0xA2709774
{
	return MISC::IS_DURANGO_VERSION() || unk_0x0C545AB1CF97ABB3();
}

void func_77(BOOL bParam0) // Hash - 0x23FF68C6 ^0xF78D4350
{
	var r;
	var g;
	var b;
	var a;

	if (MISC::IS_XBOX360_VERSION() || func_76())
		HUD::GET_HUD_COLOUR(HUD_COLOUR_RED, &r, &g, &b, &a);
	else
		HUD::GET_HUD_COLOUR(HUD_COLOUR_RED, &r, &g, &b, &a);

	if (bParam0)
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20364, "SET_SOFT_KEYS");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(3);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(4);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
	else
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20364, "SET_SOFT_KEYS");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(3);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(4);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}

	return;
}

void func_78(BOOL bParam0) // Hash - 0xA0383989 ^0x202A6A28
{
	var r;
	var g;
	var b;
	var a;

	if (MISC::IS_XBOX360_VERSION() || func_76())
		HUD::GET_HUD_COLOUR(HUD_COLOUR_GREEN, &r, &g, &b, &a);
	else
		HUD::GET_HUD_COLOUR(HUD_COLOUR_BLUE, &r, &g, &b, &a);

	if (bParam0)
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20364, "SET_SOFT_KEYS");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
	else
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20364, "SET_SOFT_KEYS");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}

	return;
}

int func_79() // Hash - 0x3C5423D7 ^0x3C5423D7
{
	func_80();
	return Global_113648.f_2365.f_539.f_4321;
}

void func_80() // Hash - 0xD1F2D853 ^0xF9F5FD4D
{
	int num;

	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_83(Global_113648.f_2365.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			num = func_82(PLAYER::PLAYER_PED_ID());
		
			if (func_81(num) && !func_15(14) || Global_112599)
			{
				if (Global_113648.f_2365.f_539.f_4321 != num && func_81(Global_113648.f_2365.f_539.f_4321))
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

BOOL func_81(int iParam0) // Hash - 0x8907F004 ^0x8907F004
{
	return iParam0 < 3;
}

int func_82(Ped pedParam0) // Hash - 0xAC4E9801 ^0xB379A75F
{
	int i;
	Hash entityModel;

	if (ENTITY::DOES_ENTITY_EXIST(pedParam0))
	{
		entityModel = ENTITY::GET_ENTITY_MODEL(pedParam0);
	
		for (i = 0; i <= 2; i = i + 1)
		{
			if (func_83(i) == entityModel)
				return i;
		}
	}

	return 145;
}

Hash func_83(int iParam0) // Hash - 0xADCB9755 ^0xADCB9755
{
	if (func_81(iParam0))
		return func_84(iParam0);
	else
		iParam0 != 145;

	return 0;
}

Hash func_84(int iParam0) // Hash - 0xE4CEEC2C ^0xE4CEEC2C
{
	return Global_2028[iParam0 /*29*/];
}

