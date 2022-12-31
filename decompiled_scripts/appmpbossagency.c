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
	float fLocal_47 = 0f;
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
	int iLocal_85 = 0;
	var uLocal_86 = 0;
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
	Player plLocal_111 = 0;
	BOOL bLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
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
	fLocal_47 = (0.05f + 0.275f) - 0.01f;
	TEXT_LABEL_ASSIGN_STRING(&uLocal_86, _("BACK"), 16);
	TEXT_LABEL_ASSIGN_STRING(&uLocal_90, _("OPTIONS"), 16);
	TEXT_LABEL_ASSIGN_STRING(&uLocal_94, _("ACCEPT JOB"), 16);
	TEXT_LABEL_ASSIGN_STRING(&uLocal_98, _("CANCEL JOB"), 16);
	TEXT_LABEL_ASSIGN_STRING(&uLocal_102, _("INVITATION"), 16);
	TEXT_LABEL_ASSIGN_STRING(&uLocal_106, _("CHAR_DEFAULT"), 16);
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	func_98(&uLocal_113);
	iLocal_110 = 0;
	func_96();
	func_95(Global_20364, "SET_THEME", SYSTEM::TO_FLOAT(5), -1082130432, -1082130432, -1082130432, -1082130432);
	func_85(false);

	while (true)
	{
		SYSTEM::WAIT(0);
		func_84();
		func_83();
	
		if (!Global_20383.f_1 == 9 && Global_20383.f_1 > 3)
		{
			switch (iLocal_85)
			{
				case 0:
					func_47();
					break;
			
				case 1:
					func_31();
					break;
			
				case 3:
					func_5();
					break;
			
				case 2:
					func_4();
					break;
			
				default:
					break;
			}
		
			if (Global_20383.f_1 != 8)
				if (func_3())
					func_2();
		}
	
		if (func_1())
			func_2();
	}

	return;
}

BOOL func_1() // Hash - 0x57EB5377 ^0xDC0824ED
{
	if (Global_20383.f_1 == 1 || Global_20383.f_1 == 3 || Global_20383.f_1 == 0 || Global_20327 == 1)
	{
		Global_20370 = 1;
		return true;
	}

	return false;
}

void func_2() // Hash - 0xB8F8F3A1 ^0x5B30D2C1
{
	Global_1890001.f_6 = 0;
	SCRIPT::TERMINATE_THIS_THREAD();
	return;
}

BOOL func_3() // Hash - 0x1F39C732 ^0x92A1ED04
{
	if (Global_8859 == 1 || Global_20383.f_1 < 7)
	{
		Global_20370 = 1;
		return true;
	}

	return false;
}

void func_4() // Hash - 0xF3B2B67E ^0xF3B2B67E
{
	return;
}

void func_5() // Hash - 0x65C21C8F ^0x5AC44238
{
	int num;

	Global_1890001.f_6 = 1;

	if (bLocal_112)
	{
		if (PAD::IS_CONTROL_JUST_RELEASED(FRONTEND_CONTROL, Global_20352))
			bLocal_112 = false;
	
		return;
	}

	if (PAD::IS_CONTROL_JUST_RELEASED(FRONTEND_CONTROL, INPUT_FRONTEND_ACCEPT))
	{
		iLocal_85 = 1;
		num = func_29(iLocal_110, 0);
		func_6(num);
		return;
	}

	if (PAD::IS_CONTROL_JUST_RELEASED(FRONTEND_CONTROL, INPUT_FRONTEND_CANCEL))
	{
		iLocal_85 = 1;
		return;
	}

	HUD::SET_WARNING_MESSAGE_WITH_HEADER(_("Confirm"), _("Are you sure you want to become a Bodyguard? Passive Mode is disabled when playing as a Bodyguard."), 36, 0, false, -1, 0, 0, true, 0);
	return;
}

void func_6(int iParam0) // Hash - 0x761981D4 ^0x1F957E8
{
	Player player;

	player = Global_1890001.f_7[iParam0 /*8*/].f_2;

	if (Global_1890001.f_7[iParam0 /*8*/].f_1 == 1 && plLocal_111 == player)
	{
		func_26(player, Global_1890001.f_7[iParam0 /*8*/].f_6);
		func_13(iParam0);
	}

	Global_1890001.f_6 = 0;
	func_7(0);
	return;
}

void func_7(int iParam0) // Hash - 0x4066FEF5 ^0x9787FBDA
{
	if (func_12())
		return;

	if (Global_20584)
		if (func_11())
			func_9(true, true);
		else
			func_9(false, false);

	if (Global_20383.f_1 == 10 || Global_20383.f_1 == 9)
		MISC::SET_BIT(&Global_8254, 16);

	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);

	Global_21725 = 5;

	if (iParam0 == 1)
		MISC::SET_BIT(&Global_8253, 30);
	else
		MISC::CLEAR_BIT(&Global_8253, 30);

	if (!func_8())
		Global_20383.f_1 = 3;

	return;
}

BOOL func_8() // Hash - 0xD140D54A ^0xE638D98F
{
	if (Global_20383.f_1 == 1 || Global_20383.f_1 == 0)
		return true;

	return false;
}

void func_9(BOOL bParam0, BOOL bParam1) // Hash - 0xF40FC178 ^0xA6F60F17
{
	if (bParam0)
	{
		if (func_10(0))
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

BOOL func_10(int iParam0) // Hash - 0xE8921B44 ^0x4F063755
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

BOOL func_11() // Hash - 0x8DF3D75D ^0x8DF3D75D
{
	return IS_BIT_SET(Global_1962996, 5);
}

BOOL func_12() // Hash - 0xC41437CB ^0xC41437CB
{
	return IS_BIT_SET(Global_1962996, 19);
}

void func_13(int iParam0) // Hash - 0x9E6ED81A ^0x2FA78070
{
	int i;

	if (iParam0 != -1)
	{
		if (Global_1890001.f_7[iParam0 /*8*/].f_1 == 1)
		{
			if (IS_BIT_SET(Global_1890001.f_7[iParam0 /*8*/].f_5, 0))
			{
				func_25();
			
				if (Global_1890001.f_7[iParam0 /*8*/].f_7 == 0)
				{
					func_25();
				}
				else
				{
					Global_1890001.f_4 = Global_1890001.f_4 - 1;
				
					if (Global_1890001.f_4 < 0)
						Global_1890001.f_4 = 0;
				
					func_18();
				}
			}
		
			MISC::CLEAR_BIT(&(Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_10.f_22), Global_1890001.f_7[iParam0 /*8*/].f_2);
			HUD::THEFEED_REMOVE_ITEM(Global_1890001.f_7[iParam0 /*8*/].f_4);
			func_17();
			func_15(0);
		}
	
		for (i = iParam0; i <= 8; i = i + 1)
		{
			Global_1890001.f_7[i /*8*/] = { Global_1890001.f_7[i + 1 /*8*/] };
		}
	
		Global_1890001.f_7[9 /*8*/].f_1 = 0;
		Global_1890001.f_7[9 /*8*/].f_2 = func_14();
	}

	return;
}

Player func_14() // Hash - 0x478900E4 ^0x478900E4
{
	return -1;
}

void func_15(int iParam0) // Hash - 0x6AAF7475 ^0xD82E682C
{
	if (!func_16(iParam0))
		MISC::SET_BIT(&(Global_1890001.f_3), iParam0);

	return;
}

BOOL func_16(int iParam0) // Hash - 0x94A85B4E ^0xBDAD4456
{
	return IS_BIT_SET(Global_1890001.f_3, iParam0);
}

void func_17() // Hash - 0xAB6622BD ^0xAB6622BD
{
	Global_1890001 = Global_1890001 - 1;
	return;
}

void func_18() // Hash - 0xA3FBC2CE ^0xA3FBC2CE
{
	Global_22788 = Global_22788 - 1;

	if (Global_22788 < 0)
		func_24("[MMM][NewJobInv][JobList] Calling Reset_New_Invites_Indicator from Decrement_New_Invites_Indicator");

	func_19();
	return;
}

void func_19() // Hash - 0xDA6C85C1 ^0x50EC7834
{
	if (!Global_20585)
	{
		if (Global_20383.f_1 == 6)
		{
			func_95(Global_20364, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_20(1);
			func_95(Global_20364, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_20363), -1082130432, -1082130432, -1082130432);
		}
	}

	return;
}

void func_20(int iParam0) // Hash - 0xEDE59C89 ^0xEDE59C89
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
	
		if (func_23(14))
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
								func_22(&Global_8260[num /*15*/]);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(value);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
						
							if (Global_2694519)
								if (num == 14)
									func_21(Global_20364, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(i), SYSTEM::TO_FLOAT(Global_8260[num /*15*/].f_10), SYSTEM::TO_FLOAT(Global_22788), -1f, &Global_8260[num /*15*/], 0, 0, 0, 0);
						
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
							
								func_21(Global_20364, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(i), SYSTEM::TO_FLOAT(Global_8260[num /*15*/].f_10), SYSTEM::TO_FLOAT(Global_22793), -1f, &Global_8260[num /*15*/], 0, 0, 0, 0);
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
								
									func_21(Global_20364, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(i), SYSTEM::TO_FLOAT(Global_8260[num /*15*/].f_10), SYSTEM::TO_FLOAT(value2), -1f, &Global_8260[num /*15*/], 0, 0, 0, 0);
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
								
									func_21(Global_20364, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(i), SYSTEM::TO_FLOAT(Global_8260[num /*15*/].f_10), SYSTEM::TO_FLOAT(value3), -1f, &Global_8260[num /*15*/], 0, 0, 0, 0);
								}
							}
							else if (num == 14)
							{
								func_21(Global_20364, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(i), SYSTEM::TO_FLOAT(Global_8260[num /*15*/].f_10), SYSTEM::TO_FLOAT(Global_22788), -1f, &Global_8260[num /*15*/], 0, 0, 0, 0);
							}
							else if (num == 20)
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20364, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(i);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8260[num /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_22(&Global_8260[num /*15*/]);
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
								func_22(&Global_8260[num /*15*/]);
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
								func_22(&Global_8260[num /*15*/]);
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
								func_22(&Global_8260[num /*15*/]);
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
								func_22(&Global_8260[num /*15*/]);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(42);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (Global_8260[num /*15*/].f_10 == 57 && num == 23)
							{
								value6 = 0;
								value6 = Global_1890001.f_1;
								func_21(Global_20364, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(i), SYSTEM::TO_FLOAT(Global_8260[num /*15*/].f_10), SYSTEM::TO_FLOAT(value6), -1f, &Global_8260[num /*15*/], 0, 0, 0, 0);
							}
							else
							{
								func_21(Global_20364, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(i), SYSTEM::TO_FLOAT(Global_8260[num /*15*/].f_10), SYSTEM::TO_FLOAT(0), -1f, &Global_8260[num /*15*/], 0, 0, 0, 0);
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

void func_21(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, const char* sParam7, const char* sParam8, const char* sParam9, const char* sParam10, const char* sParam11) // Hash - 0x39E054FF ^0x41D02682
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
		func_22(sParam7);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
		func_22(sParam8);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam9))
		func_22(sParam9);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam10))
		func_22(sParam10);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam11))
		func_22(sParam11);

	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	return;
}

void func_22(const char* sParam0) // Hash - 0x8E2F5FE2 ^0x29D9D432
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	return;
}

BOOL func_23(int iParam0) // Hash - 0x937D8816 ^0x937D8816
{
	return Global_43257 == iParam0;
}

void func_24(char* sParam0) // Hash - 0x36BB4FE8 ^0xD65F6197
{
	if (Global_22788 != 0)
	{
		!MISC::IS_STRING_NULL_OR_EMPTY(sParam0);
		Global_22788 = 0;
	}

	return;
}

void func_25() // Hash - 0xB9470FD4 ^0x765E85B9
{
	Global_1890001.f_1 = Global_1890001.f_1 - 1;

	if (Global_1890001.f_1 < 0)
		Global_1890001.f_1 = 0;

	return;
}

void func_26(Player plParam0, var uParam1) // Hash - 0x7F95D5F4 ^0x92C7C67A
{
	if (Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_10.f_26 == func_14())
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(plParam0))
		{
			Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_10.f_26 = plParam0;
			Global_2793044.f_5225.f_225 = uParam1;
			func_27(func_28(plParam0));
		}
	}

	return;
}

void func_27(int iParam0) // Hash - 0x7B6D3117 ^0xEE6B2673
{
	int eventData;

	eventData = 1848110702;
	eventData.f_1 = PLAYER::PLAYER_ID();

	if (!iParam0 == 0)
		SCRIPT::TRIGGER_SCRIPT_EVENT(SCRIPT_EVENT_QUEUE_NETWORK, &eventData, 2, iParam0);

	return;
}

int func_28(Player plParam0) // Hash - 0x8DB9A6C ^0x19CECEE
{
	int address;

	if (plParam0 != -1)
		MISC::SET_BIT(&address, plParam0);

	return address;
}

int func_29(int iParam0, int iParam1) // Hash - 0x1B6CD9EF ^0x812BCF3
{
	int i;

	for (i = 0; i < func_30(); i = i + 1)
	{
		if (Global_1890001.f_7[i /*8*/].f_7 == iParam1)
		{
			iParam0 = iParam0 - 1;
		
			if (iParam0 < 0)
				return i;
		}
	}

	return 0;
}

int func_30() // Hash - 0x47FF56D2 ^0x47FF56D2
{
	return Global_1890001;
}

void func_31() // Hash - 0x642C0A0 ^0x57826538
{
	int num;
	Player player;

	num = func_29(iLocal_110, 0);

	if (iLocal_110 == -1)
	{
		func_85(true);
		return;
	}

	player = Global_1890001.f_7[num /*8*/].f_2;

	if (!func_46(player, false, true) || plLocal_111 != player)
	{
		func_85(true);
		return;
	}

	func_41(&uLocal_113);

	if (func_39(&uLocal_113))
	{
		func_85(true);
		return;
	}

	if (func_38(&uLocal_113))
	{
		func_13(num);
		func_85(true);
		return;
	}

	if (func_34(&uLocal_113))
	{
		if (func_33())
		{
			bLocal_112 = true;
			iLocal_85 = 3;
		}
		else if (Global_1890001.f_7[num /*8*/] == 0)
		{
			func_6(num);
		}
		else if (Global_1890001.f_7[num /*8*/] == 1)
		{
			func_32(num);
		}
		else
		{
			func_7(0);
		}
	}

	return;
}

void func_32(int iParam0) // Hash - 0x2BE7D39F ^0xB1DD76F5
{
	MISC::SET_BIT(&Global_1836078, 15);
	func_13(iParam0);
	Global_1890001.f_6 = 0;
	func_7(0);
	return;
}

BOOL func_33() // Hash - 0x47FF56D2 ^0x47FF56D2
{
	return Global_1574582;
}

BOOL func_34(var uParam0) // Hash - 0xD23D6E28 ^0xAA9B9510
{
	if (!IS_BIT_SET(*uParam0, 0))
		return false;

	if (Global_20361)
		return false;

	if (!CAM::IS_SCREEN_FADED_IN())
		return false;

	if (!PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, Global_20352))
		return false;

	func_35();
	Global_20361 = true;
	return true;
}

void func_35() // Hash - 0x3AEFAA9D ^0x27002AEC
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Accept", &Global_20372, true);
		func_36();
	}

	return;
}

void func_36() // Hash - 0xD56EB04 ^0x9DB5936E
{
	if (func_37())
		MOBILE::CELL_SET_INPUT(5);

	return;
}

BOOL func_37() // Hash - 0xE8350107 ^0x112591EA
{
	eViewModeContext camActiveViewModeContext;
	eViewMode camViewModeForContext;
	int num;

	if (Global_78558)
		return false;

	num = 0;
	camActiveViewModeContext = CAM::GET_CAM_ACTIVE_VIEW_MODE_CONTEXT();
	camViewModeForContext = CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(camActiveViewModeContext);

	if (camViewModeForContext == FIRST_PERSON)
		num = 1;

	if (Global_4542575 || num)
		return true;

	return true;
}

BOOL func_38(var uParam0) // Hash - 0x129E79FE ^0x7059FE4C
{
	if (!IS_BIT_SET(*uParam0, 1))
		return false;

	if (Global_20361)
		return false;

	if (!CAM::IS_SCREEN_FADED_IN())
		return false;

	if (!PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, Global_20355))
		return false;

	func_35();
	Global_20361 = true;
	return true;
}

BOOL func_39(var uParam0) // Hash - 0xA0B7B4CD ^0x4A9CFD34
{
	if (!IS_BIT_SET(*uParam0, 2))
		return false;

	if (Global_20361)
		return false;

	if (!CAM::IS_SCREEN_FADED_IN())
		return false;

	if (!PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, Global_20353))
		return false;

	func_40();
	Global_20361 = true;
	return true;
}

void func_40() // Hash - 0xD1E0EACF ^0x4AE9EC0C
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Back", &Global_20372, true);

	return;
}

void func_41(var uParam0) // Hash - 0x8EA07C1C ^0xD5317B97
{
	if (MISC::GET_GAME_TIMER() < uParam0->f_1)
		return;

	if (!CAM::IS_SCREEN_FADED_IN())
		return;

	if (PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, Global_20359) || PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_CELLPHONE_SCROLL_BACKWARD))
	{
		func_44();
		uParam0->f_1 = MISC::GET_GAME_TIMER() + 50;
	}

	if (PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, Global_20360) || PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_CELLPHONE_SCROLL_FORWARD))
	{
		func_42();
		uParam0->f_1 = MISC::GET_GAME_TIMER() + 50;
	}

	return;
}

void func_42() // Hash - 0x27F2007C ^0xD16E4BA4
{
	func_95(Global_20364, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(3), -1082130432, -1082130432, -1082130432, -1082130432);
	AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_20372, true);
	func_43();
	return;
}

void func_43() // Hash - 0x47667904 ^0x5056AC19
{
	if (func_37())
		if (Global_20589 == 0)
			MOBILE::CELL_SET_INPUT(2);
		else
			MOBILE::CELL_SET_INPUT(1);

	return;
}

void func_44() // Hash - 0xE70DEC1F ^0x1DA26D84
{
	func_95(Global_20364, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(1), -1082130432, -1082130432, -1082130432, -1082130432);
	AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_20372, true);
	func_45();
	return;
}

void func_45() // Hash - 0xA6C955E7 ^0xAF2E403B
{
	if (func_37())
		if (Global_20589 == 0)
			MOBILE::CELL_SET_INPUT(1);
		else
			MOBILE::CELL_SET_INPUT(2);

	return;
}

BOOL func_46(Player plParam0, BOOL bParam1, BOOL bParam2) // Hash - 0x3FF6E4CA ^0xE6B59972
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

void func_47() // Hash - 0x164DDFC9 ^0xADA0368A
{
	int methodReturn;
	int num;
	int methodReturn2;
	int num2;

	if (func_30() > 1)
		func_41(&uLocal_113);

	if (func_34(&uLocal_113))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20364, "GET_CURRENT_SELECTION");
		methodReturn = GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
	
		while (!GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(methodReturn))
		{
			SYSTEM::WAIT(0);
		}
	
		iLocal_110 = GRAPHICS::GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_INT(methodReturn);
		num = func_29(iLocal_110, 0);
	
		switch (Global_1890001.f_7[num /*8*/].f_1)
		{
			case 0:
				return;
		
			case 1:
				func_49();
				break;
		
			default:
				return;
		}
	
		Global_20383.f_1 = 8;
		return;
	}

	if (func_38(&uLocal_113))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20364, "GET_CURRENT_SELECTION");
		methodReturn2 = GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
	
		while (!GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(methodReturn2))
		{
			SYSTEM::WAIT(0);
		}
	
		iLocal_110 = GRAPHICS::GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_INT(methodReturn2);
		num2 = func_29(iLocal_110, 0);
	
		switch (Global_1890001.f_7[num2 /*8*/].f_1)
		{
			case 0:
				return;
		
			case 1:
				func_13(num2);
				func_85(false);
				return;
		
			default:
				return;
		}
	
		return;
		return;
	}

	if (func_16(0))
	{
		func_48(0);
		func_85(false);
	}

	return;
}

void func_48(int iParam0) // Hash - 0xE95F6E3 ^0x74E02309
{
	if (func_16(iParam0))
		MISC::CLEAR_BIT(&(Global_1890001.f_3), iParam0);

	return;
}

void func_49() // Hash - 0xC382C01B ^0xBE49666E
{
	BOOL flag;
	const char* pedheadshotTxdString;
	int num;
	int num2;
	Player player;
	var text;
	var unk16;
	BOOL flag2;
	int i;
	int num3;
	var componentType;
	var text2;
	var componentType2;

	if (Global_20383.f_1 != 8)
		Global_20383.f_1 = 8;

	func_95(Global_20364, "SET_DATA_SLOT_EMPTY", SYSTEM::TO_FLOAT(26), -1082130432, -1082130432, -1082130432, -1082130432);
	flag = false;
	num2 = func_29(iLocal_110, 0);
	plLocal_111 = Global_1890001.f_7[num2 /*8*/].f_2;
	player = Global_1890001.f_7[num2 /*8*/].f_2;
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20364, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(26);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);

	if (func_46(player, false, true))
	{
		text = { func_82(player) };
		GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
		HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(func_76(player));
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&text);
		GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
		flag = true;
	}
	else
	{
		func_22("");
	}

	if (Global_1890001.f_7[num2 /*8*/] == 0)
	{
		if (Global_262145.f_15419)
		{
			unk16 = 3;
			flag2 = func_75(player);
		
			for (i = 0; i < 3; i = i + 1)
			{
				if (num3 < 3)
				{
					if (Global_1894573[player /*608*/].f_10.f_11[i] != func_14())
					{
						if (func_46(Global_1894573[player /*608*/].f_10.f_11[i], false, true))
						{
							unk16[num3] = Global_1894573[player /*608*/].f_10.f_11[i];
							num3 = num3 + 1;
						}
					}
				}
			}
		
			if (num3 == 0)
			{
				if (flag2)
					func_22(_("~HUD_COLOUR_WHITE~Wants you to become an Associate.~s~"));
				else
					func_22(_("~HUD_COLOUR_WHITE~Wants you to become a Bodyguard.~s~"));
			}
			else
			{
				TEXT_LABEL_ASSIGN_STRING(&componentType, _("~HUD_COLOUR_WHITE~Wants you to become a Bodyguard.~n~~n~Other Bodyguards:~n~~a~~s~"), 16);
			
				if (flag2)
					TEXT_LABEL_ASSIGN_STRING(&componentType, _("~HUD_COLOUR_WHITE~Wants you to become an Associate.~n~~n~Other Associates:~n~~a~~s~"), 16);
			
				if (num3 == 2)
					if (flag2)
						TEXT_LABEL_ASSIGN_STRING(&componentType, _("~HUD_COLOUR_WHITE~Wants you to become an Associate.~n~~n~Other Associates:~n~~a~~n~~a~~s~"), 16);
					else
						TEXT_LABEL_ASSIGN_STRING(&componentType, _("~HUD_COLOUR_WHITE~Wants you to become a Bodyguard.~n~~n~Other Bodyguards:~n~~a~~n~~a~~s~"), 16);
				else if (num3 > 2)
					if (flag2)
						TEXT_LABEL_ASSIGN_STRING(&componentType, _("~HUD_COLOUR_WHITE~Wants you to become an Associate.~n~~n~Other Associates:~n~~a~~n~~a~~n~~a~~s~"), 16);
					else
						TEXT_LABEL_ASSIGN_STRING(&componentType, _("~HUD_COLOUR_WHITE~Wants you to become a Bodyguard.~n~~n~Other Bodyguards:~n~~a~~n~~a~~n~~a~~s~"), 16);
			
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&componentType);
			
				for (i = 0; i < num3; i = i + 1)
				{
					text2 = { func_82(unk16[i]) };
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&text2);
				}
			
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			}
		}
		else
		{
			if (Global_1890001.f_88[num2 /*5*/].f_1)
				if (Global_1890001.f_88[num2 /*5*/].f_2)
					TEXT_LABEL_ASSIGN_STRING(&componentType2, _("~HUD_COLOUR_WHITE~Wants you to become an Associate.~n~~n~- Wage: $~1~ ~n~- Associate(s): ~1~ ~n~- Yacht: Yes~n~- Office: Yes ~n~- Warehouse(s): ~1~ ~n~- Vehicle(s): ~1~"), 16);
				else
					TEXT_LABEL_ASSIGN_STRING(&componentType2, _("~HUD_COLOUR_WHITE~Wants you to become a Bodyguard.~n~~n~- Wage: $~1~ ~n~- Bodyguard(s): ~1~ ~n~- Yacht: Yes~n~- Office: No ~n~- Warehouse(s): ~1~ ~n~- Vehicle(s): ~1~"), 16);
			else if (Global_1890001.f_88[num2 /*5*/].f_2)
				TEXT_LABEL_ASSIGN_STRING(&componentType2, _("~HUD_COLOUR_WHITE~Wants you to become an Associate.~n~~n~- Wage: $~1~ ~n~- Associate(s): ~1~ ~n~- Yacht: No~n~- Office: Yes ~n~- Warehouse(s): ~1~ ~n~- Vehicle(s): ~1~"), 16);
			else
				TEXT_LABEL_ASSIGN_STRING(&componentType2, _("~HUD_COLOUR_WHITE~Wants you to become a Bodyguard.~n~~n~- Wage: $~1~ ~n~- Bodyguard(s): ~1~ ~n~- Yacht: No~n~- Office: No~n~- Warehouse(s): ~1~ ~n~- Vehicle(s): ~1~"), 16);
		
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&componentType2);
			HUD::ADD_TEXT_COMPONENT_INTEGER(Global_1890001.f_88[num2 /*5*/]);
			HUD::ADD_TEXT_COMPONENT_INTEGER(func_74(player));
			HUD::ADD_TEXT_COMPONENT_INTEGER(Global_1890001.f_88[num2 /*5*/].f_3);
			HUD::ADD_TEXT_COMPONENT_INTEGER(Global_1890001.f_88[num2 /*5*/].f_4);
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
		}
	}
	else if (Global_1890001.f_7[num2 /*8*/] == 1)
	{
		GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(_("~HUD_COLOUR_WHITE~The VIP of ~a~~HUD_COLOUR_WHITE~ has challenged you to an Executive Deathmatch.~s~"));
		HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(func_76(Global_1890001.f_7[num2 /*8*/].f_2));
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(func_61(Global_1890001.f_7[num2 /*8*/].f_2));
		GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	}

	if (flag)
	{
		num = func_55(Global_1890001.f_7[num2 /*8*/].f_2);
	
		if (num == 0)
			flag = false;
		else
			pedheadshotTxdString = PED::GET_PEDHEADSHOT_TXD_STRING(num);
	}

	if (flag)
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING(pedheadshotTxdString);
	else
		func_22(&uLocal_106);

	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	func_95(Global_20364, "DISPLAY_VIEW", SYSTEM::TO_FLOAT(26), -1082130432, -1082130432, -1082130432, -1082130432);
	func_53(&uLocal_102);
	func_50(13, &uLocal_94, 12, &uLocal_98, 4, &uLocal_86, &uLocal_113);
	iLocal_85 = 1;
	return;
}

void func_50(int iParam0, const char* sParam1, int iParam2, const char* sParam3, int iParam4, const char* sParam5, int* piParam6) // Hash - 0xA713DAFB ^0xA713DAFB
{
	func_51(2, iParam0, sParam1, 0, piParam6, -1);
	func_51(1, iParam2, sParam3, 1, piParam6, 17);
	func_51(3, iParam4, sParam5, 2, piParam6, -1);
	return;
}

void func_51(int iParam0, int iParam1, const char* sParam2, int iParam3, int* piParam4, int iParam5) // Hash - 0x33ECA6D2 ^0x5B173D04
{
	if (iParam1 == 1)
	{
		func_21(Global_20364, "SET_SOFT_KEYS", SYSTEM::TO_FLOAT(iParam0), 0f, SYSTEM::TO_FLOAT(iParam1), -1f, -1f, 0, 0, 0, 0, 0);
		MISC::CLEAR_BIT(piParam4, iParam3);
		func_52(iParam5, false);
		return;
	}

	if (Global_20371)
	{
		func_21(Global_20364, "SET_SOFT_KEYS", SYSTEM::TO_FLOAT(iParam0), 1f, SYSTEM::TO_FLOAT(iParam1), -1f, -1f, sParam2, 0, 0, 0, 0);
		MISC::SET_BIT(piParam4, iParam3);
		func_52(iParam5, true);
		return;
	}

	func_21(Global_20364, "SET_SOFT_KEYS", SYSTEM::TO_FLOAT(iParam0), 1f, SYSTEM::TO_FLOAT(iParam1), -1f, -1f, 0, 0, 0, 0, 0);
	MISC::SET_BIT(piParam4, iParam3);
	func_52(iParam5, true);
	return;
}

void func_52(int iParam0, BOOL bParam1) // Hash - 0x89C9047C ^0xBC5EE3A2
{
	if (iParam0 == -1)
		return;

	if (bParam1)
	{
		MISC::SET_BIT(&Global_8253, iParam0);
		return;
	}

	MISC::CLEAR_BIT(&Global_8253, iParam0);
	return;
}

void func_53(char* sParam0) // Hash - 0x81F12AE0 ^0x268C92A0
{
	func_54(Global_20364, "SET_HEADER", sParam0, 0, 0, 0, 0);
	return;
}

void func_54(int iParam0, char* sParam1, char* sParam2, const char* sParam3, const char* sParam4, const char* sParam5, const char* sParam6) // Hash - 0xD2A7E1F6 ^0x3BA00BEB
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, sParam1);
	func_22(sParam2);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
		func_22(sParam3);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
		func_22(sParam4);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam5))
		func_22(sParam5);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam6))
		func_22(sParam6);

	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	return;
}

int func_55(Player plParam0) // Hash - 0x42191E90 ^0xD8949AAB
{
	int num;

	num = func_58(plParam0);

	if (num == -1)
	{
		func_56(plParam0, true);
		return 0;
	}

	Global_1666668[num /*5*/].f_4 = 1;
	return Global_1666668[num /*5*/].f_2;
}

void func_56(Player plParam0, BOOL bParam1) // Hash - 0x33266C8B ^0x1B02BD98
{
	if (!func_46(plParam0, false, true))
		return;

	if (func_58(plParam0) != -1)
		return;

	if (Global_1666831)
		if (plParam0 == Global_1666831.f_1)
			return;

	if (func_57(plParam0))
		return;

	if (Global_1666869 >= 32)
		return;

	Global_1666836[Global_1666869] = plParam0;
	Global_1666869 = Global_1666869 + 1;
	bParam1;
	return;
}

BOOL func_57(Player plParam0) // Hash - 0x37274923 ^0x37274923
{
	int i;

	i = 0;

	for (i = 0; i < Global_1666869; i = i + 1)
	{
		if (Global_1666836[i] == plParam0)
			return true;
	}

	return false;
}

int func_58(Player plParam0) // Hash - 0x83D3907 ^0x83D3907
{
	int i;

	if (!func_46(plParam0, false, true))
		return -1;

	if (Global_1666829 == 0)
		return -1;

	i = 0;

	for (i = 0; i < Global_1666829; i = i + 1)
	{
		if (Global_1666668[i /*5*/].f_1 == plParam0)
		{
			if (PED::IS_PEDHEADSHOT_VALID(Global_1666668[i /*5*/].f_2) && PED::IS_PEDHEADSHOT_READY(Global_1666668[i /*5*/].f_2))
				return i;
		
			func_59(i);
			return -1;
		}
	}

	return -1;
}

void func_59(int iParam0) // Hash - 0x33A262D8 ^0xFAF5F0C1
{
	var txdString2;
	var txdString1;
	int num;
	int i;

	if (iParam0 >= Global_1666829)
		return;

	if (PED::IS_PEDHEADSHOT_VALID(Global_1666668[iParam0 /*5*/].f_2))
	{
		TEXT_LABEL_ASSIGN_STRING(&txdString2, "CHAR_DEFAULT", 64);
	
		if (Global_1666668[iParam0 /*5*/].f_2 != 0)
		{
			TEXT_LABEL_ASSIGN_STRING(&txdString1, PED::GET_PEDHEADSHOT_TXD_STRING(Global_1666668[iParam0 /*5*/].f_2), 64);
			HUD::THEFEED_UPDATE_ITEM_TEXTURE(&txdString1, &txdString1, &txdString2, &txdString2);
		}
	
		PED::UNREGISTER_PEDHEADSHOT(Global_1666668[iParam0 /*5*/].f_2);
	}

	num = iParam0;

	for (i = num + 1; i < Global_1666829; i = i + 1)
	{
		Global_1666668[num /*5*/] = { Global_1666668[i /*5*/] };
		num = num + 1;
	}

	func_60(&Global_1666668[num /*5*/]);
	Global_1666829 = Global_1666829 - 1;
	return;
}

void func_60(var uParam0) // Hash - 0xCB5CC50E ^0x69BEE3EF
{
	*uParam0 = 0;
	uParam0->f_1 = func_14();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		uParam0->f_3 = NETWORK::GET_NETWORK_TIME();

	return;
}

const char* func_61(Player plParam0) // Hash - 0x7C145568 ^0xA8F2C5CA
{
	const char* str;
	Player player;

	if (plParam0 == PLAYER::PLAYER_ID())
	{
		str = func_73(&(Global_1894573[plParam0 /*608*/].f_10.f_105));
		return str;
	}

	if (Global_1894573[plParam0 /*608*/].f_10.f_121 != Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_10.f_121)
	{
		str = func_68(plParam0, false);
		return str;
	}

	if (func_67(plParam0, 28) || func_67(PLAYER::PLAYER_ID(), 28) || func_66(plParam0) && !func_64(plParam0))
		return func_68(plParam0, false);

	player = func_63(plParam0);

	if (player != func_14())
		if (player != PLAYER::PLAYER_ID())
			if (!func_62() && !NETWORK::NETWORK_CHECK_USER_CONTENT_PRIVILEGES(0, -1, true))
				return func_68(player, false);

	if (player != func_14())
	{
		str = func_73(&(Global_1894573[player /*608*/].f_10.f_105));
	
		if (MISC::IS_STRING_NULL_OR_EMPTY(str))
			return func_68(player, false);
		else
			return str;
	}

	return "";
}

BOOL func_62() // Hash - 0x4C81F065 ^0xA2709774
{
	return MISC::IS_DURANGO_VERSION() || unk_0x0C545AB1CF97ABB3();
}

Player func_63(Player plParam0) // Hash - 0xBC29302B ^0x7C0547F0
{
	if (plParam0 != func_14())
		return Global_1894573[plParam0 /*608*/].f_10;

	return func_14();
}

BOOL func_64(Player plParam0) // Hash - 0xE4705E43 ^0x17642B65
{
	var gamerHandle;

	gamerHandle = { func_65(plParam0) };

	if (func_62())
		if (plParam0 == PLAYER::PLAYER_ID())
			return true;
		else if (NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(0))
			if (NETWORK::NETWORK_CAN_VIEW_GAMER_USER_CONTENT(&gamerHandle))
				return true;

	return false;
}

struct<13> func_65(Player plParam0) // Hash - 0x3F3CEB62 ^0x60A9D262
{
	var gamerHandle;

	NETWORK::NETWORK_HANDLE_FROM_PLAYER(plParam0, &gamerHandle, 13);
	return gamerHandle;
}

BOOL func_66(Player plParam0) // Hash - 0xF18C6BAC ^0xA2F5F55A
{
	var gamerHandle;

	if (plParam0 != func_14())
	{
		gamerHandle = { func_65(plParam0) };
	
		if (MISC::IS_ORBIS_VERSION() && !MISC::IS_PROSPERO_VERSION() || MISC::IS_PC_VERSION())
			if (NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(0))
				return false;
		else if (func_62() || MISC::IS_PROSPERO_VERSION())
			if (NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(0))
				if (NETWORK::NETWORK_CAN_VIEW_GAMER_USER_CONTENT(&gamerHandle))
					return false;
	}

	return true;
}

BOOL func_67(Player plParam0, int iParam1) // Hash - 0x7CD5054C ^0x870BEA81
{
	return IS_BIT_SET(Global_1894573[plParam0 /*608*/].f_10.f_4, iParam1);
}

const char* func_68(Player plParam0, BOOL bParam1) // Hash - 0xE02F216E ^0xC01D624E
{
	if (!bParam1)
		if (func_70(plParam0, true))
			return func_69();

	return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(_("An Organization"));
}

const char* func_69() // Hash - 0xB58A1E6 ^0xB4AAA734
{
	return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(_("Motorcycle Club"));
}

BOOL func_70(Player plParam0, BOOL bParam1) // Hash - 0xB4D52F0E ^0xB4D52F0E
{
	return func_71(plParam0, bParam1, 1);
}

BOOL func_71(Player plParam0, BOOL bParam1, int iParam2) // Hash - 0xE1283130 ^0x8DFB78AD
{
	Player player;

	if (plParam0 == func_14())
		return 0;

	if (!bParam1)
		if (func_72(plParam0, iParam2))
			return 0;

	player = Global_1894573[plParam0 /*608*/].f_10;

	if (player != func_14() && Global_1894573[player /*608*/].f_10.f_428 == iParam2)
		return 1;

	return 0;
}

BOOL func_72(Player plParam0, int iParam1) // Hash - 0xECFEB130 ^0x65196460
{
	if (plParam0 != func_14())
		if (Global_1894573[plParam0 /*608*/].f_10 != func_14())
			if (Global_1894573[plParam0 /*608*/].f_10 == plParam0 && Global_1894573[plParam0 /*608*/].f_10.f_428 == iParam1)
				return true;

	return false;
}

const char* func_73(var uParam0) // Hash - 0xC9D82232 ^0xC9D82232
{
	return uParam0;
}

int func_74(Player plParam0) // Hash - 0x3CCE1D23 ^0x76851856
{
	if (func_63(plParam0) == func_14())
		return 0;

	return Global_1894573[plParam0 /*608*/].f_10.f_19;
}

BOOL func_75(Player plParam0) // Hash - 0x6141C3D4 ^0x6331F890
{
	if (plParam0 == -1)
		return false;

	return IS_BIT_SET(Global_1853910[plParam0 /*862*/].f_267.f_31, 26);
}

eHudColour func_76(Player plParam0) // Hash - 0xE0FEDB91 ^0xE0FEDB91
{
	int num;

	num = func_79(plParam0);

	if (num != -1)
		return func_77(num);

	return HUD_COLOUR_WHITE;
}

eHudColour func_77(int iParam0) // Hash - 0xAD13E58 ^0xAD13E58
{
	int num;

	if (iParam0 > -1)
	{
		num = func_78(iParam0);
	
		switch (num)
		{
			case 0:
				return 192;
		
			case 1:
				return 193;
		
			case 2:
				return 194;
		
			case 3:
				return 195;
		
			case 4:
				return 196;
		
			case 5:
				return 197;
		
			case 6:
				return 198;
		
			case 7:
				return 199;
		
			case 8:
				return 200;
		
			case 9:
				return 201;
		
			case 10:
				return 202;
		
			case 11:
				return 203;
		
			case 12:
				return 204;
		
			case 13:
				return 205;
		
			case 14:
				return 206;
		
			default:
			
		}
	}

	return 1;
}

var func_78(int iParam0) // Hash - 0x249A63AE ^0x62068EF0
{
	return Global_2648605.f_818.f_44[iParam0 /*2*/].f_1;
}

int func_79(Player plParam0) // Hash - 0xF5A9D107 ^0xE6A23DE7
{
	if (!plParam0 == func_14())
		if (func_80(plParam0, true))
			return Global_2648605.f_818.f_11[func_63(plParam0)];

	return -1;
}

BOOL func_80(Player plParam0, BOOL bParam1) // Hash - 0xB01293DB ^0xE5AEA938
{
	if (!bParam1)
		if (func_81(plParam0))
			return false;

	return Global_1894573[plParam0 /*608*/].f_10 != func_14();
}

BOOL func_81(Player plParam0) // Hash - 0x240F2609 ^0x5DFCCAA2
{
	if (plParam0 != func_14())
		if (Global_1894573[plParam0 /*608*/].f_10 != func_14())
			return Global_1894573[plParam0 /*608*/].f_10 == plParam0;

	return false;
}

struct<16> func_82(Player plParam0) // Hash - 0x317CE23F ^0xBC9ED53B
{
	var unk;

	TEXT_LABEL_ASSIGN_STRING(&unk, "<C>", 64);
	TEXT_LABEL_APPEND_STRING(&unk, PLAYER::GET_PLAYER_NAME(plParam0), 64);
	TEXT_LABEL_APPEND_STRING(&unk, "</C>", 64);
	return unk;
}

void func_83() // Hash - 0x7B0AD0E6 ^0x8D21B626
{
	if (Global_1890001.f_6)
		if (iLocal_85 != 3)
			if (!HUD::IS_WARNING_MESSAGE_ACTIVE())
				Global_1890001.f_6 = 0;

	return;
}

void func_84() // Hash - 0xA5E87C38 ^0x28F9EA4B
{
	PAD::SET_INPUT_EXCLUSIVE(PLAYER_CONTROL, INPUT_CELLPHONE_SELECT);
	PAD::SET_INPUT_EXCLUSIVE(PLAYER_CONTROL, INPUT_CELLPHONE_CANCEL);
	return;
}

void func_85(BOOL bParam0) // Hash - 0xB827A7E2 ^0x1EEDBD0B
{
	int value;
	int num;
	BOOL flag;

	plLocal_111 = func_14();

	if (!Global_20383.f_1 == 7)
		Global_20383.f_1 = 7;

	value = 0;

	if (bParam0)
		value = iLocal_110;

	if (value >= Global_1665288)
		value = 0;

	if (Global_22785)
	{
		func_49();
		Global_22785 = false;
		return;
	}

	num = func_30();
	num = num - func_94();

	if (func_80(PLAYER::PLAYER_ID(), false) && !func_93(true) && num <= 0)
	{
		func_91();
		return;
	}

	func_86();
	func_95(Global_20364, "DISPLAY_VIEW", SYSTEM::TO_FLOAT(25), SYSTEM::TO_FLOAT(value), -1082130432, -1082130432, -1082130432);
	func_53(_("SecuroServ"));
	flag = false;

	if (num > 0)
		flag = true;

	if (flag)
		func_50(13, &uLocal_90, 12, &uLocal_98, 4, &uLocal_86, &uLocal_113);
	else
		func_50(1, "", 1, "", 4, &uLocal_86, &uLocal_113);

	iLocal_85 = 0;
	return;
}

void func_86() // Hash - 0x6BE9482B ^0xD21116C3
{
	int i;
	int num;

	func_95(Global_20364, "SET_DATA_SLOT_EMPTY", SYSTEM::TO_FLOAT(25), -1082130432, -1082130432, -1082130432, -1082130432);

	for (i = 0; i < func_30(); i = i + 1)
	{
		if (Global_1890001.f_7[i /*8*/].f_1 == 1 && Global_1890001.f_7[i /*8*/].f_7 == 0)
		{
			switch (Global_1890001.f_7[i /*8*/])
			{
				case 0:
					if (func_90(i, num))
						num = num + 1;
					break;
			
				case 1:
					if (func_88(i, num))
						num = num + 1;
					break;
			}
		}
	}

	if (num > 0)
		return;

	func_87();
	return;
}

void func_87() // Hash - 0xAC5C27BD ^0x7AC10613
{
	BOOL value;

	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20364, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(25);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);

	if (func_81(PLAYER::PLAYER_ID()))
		func_22(_("No Invites"));
	else
		func_22(_("No VIP Invites"));

	func_22("");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(-1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
	value = NETWORK::NETWORK_IS_GAME_IN_PROGRESS();
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(value);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	return;
}

BOOL func_88(int iParam0, int iParam1) // Hash - 0x5C762BA6 ^0x637C9EC4
{
	var unk;
	eHudColour value;
	int num;

	if (Global_1890001.f_7[iParam0 /*8*/].f_2 == func_14() || !func_46(Global_1890001.f_7[iParam0 /*8*/].f_2, false, true))
		return false;

	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20364, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(25);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
	unk = { func_82(Global_1890001.f_7[iParam0 /*8*/].f_2) };
	func_89(&unk);
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(_("Has challenged you to an Executive Deathmatch."));
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(-1);
	value = HUD_COLOUR_WHITE;
	num = func_79(Global_1890001.f_7[iParam0 /*8*/].f_2);

	if (num != -1)
		value = func_77(num);

	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(value);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	return true;
}

void func_89(const char* sParam0) // Hash - 0x690E6520 ^0x509C71F3
{
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_PLAYER_NAME_STRING(sParam0);
	return;
}

BOOL func_90(int iParam0, int iParam1) // Hash - 0x5C762BA6 ^0x637C9EC4
{
	var unk;
	BOOL flag;
	int value;
	eHudColour value2;
	int num;

	if (Global_1890001.f_7[iParam0 /*8*/].f_2 == func_14() || !func_46(Global_1890001.f_7[iParam0 /*8*/].f_2, false, true))
		return false;

	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20364, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(25);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
	unk = { func_82(Global_1890001.f_7[iParam0 /*8*/].f_2) };
	func_89(&unk);
	flag = func_75(Global_1890001.f_7[iParam0 /*8*/].f_2);
	value = func_74(Global_1890001.f_7[iParam0 /*8*/].f_2);

	if (value == 0)
	{
		if (flag)
			func_22(_("Wants you to become an Associate."));
		else
			func_22(_("Wants you to become a Bodyguard."));
	}
	else if (value == 1)
	{
		if (flag)
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(_("Wants you to become an Associate.~n~~1~ other in this Organization."));
		else
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(_("Wants you to become a Bodyguard.~n~~1~ other in this Organization."));
	
		HUD::ADD_TEXT_COMPONENT_INTEGER(value);
		GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	}
	else
	{
		if (flag)
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(_("Wants you to become an Associate.~n~~1~ others in this Organization."));
		else
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(_("Wants you to become a Bodyguard.~n~~1~ others in this Organization."));
	
		HUD::ADD_TEXT_COMPONENT_INTEGER(value);
		GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	}

	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(-1);
	value2 = HUD_COLOUR_WHITE;
	num = func_79(Global_1890001.f_7[iParam0 /*8*/].f_2);

	if (num != -1)
		value2 = func_77(num);

	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(value2);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	return true;
}

void func_91() // Hash - 0xE559669D ^0xB2807D08
{
	func_95(Global_20364, "SET_DATA_SLOT_EMPTY", SYSTEM::TO_FLOAT(26), -1082130432, -1082130432, -1082130432, -1082130432);
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20364, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(26);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(func_76(PLAYER::PLAYER_ID()));
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(func_92());
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	func_22(_("You are already a member of this Organization."));
	func_22(_("CHAR_GANGAPP"));
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	func_95(Global_20364, "DISPLAY_VIEW", SYSTEM::TO_FLOAT(26), -1082130432, -1082130432, -1082130432, -1082130432);
	func_53(_("SecuroServ"));
	func_50(1, "", 1, "", 4, &uLocal_86, &uLocal_113);
	iLocal_85 = 2;
	return;
}

const char* func_92() // Hash - 0x254E06F6 ^0xC9BEDB6C
{
	Player player;
	const char* str;

	player = func_63(PLAYER::PLAYER_ID());

	if (player != func_14())
	{
		if (player != PLAYER::PLAYER_ID())
		{
			if (func_67(player, 28) || func_67(PLAYER::PLAYER_ID(), 28) || func_66(player) && !func_64(player))
				return func_68(player, false);
		
			if (!func_62() && !NETWORK::NETWORK_CHECK_USER_CONTENT_PRIVILEGES(0, -1, true))
				return func_68(player, false);
		}
	
		str = func_73(&(Global_1894573[player /*608*/].f_10.f_105));
	
		if (MISC::IS_STRING_NULL_OR_EMPTY(str))
			return func_68(player, false);
		else
			return str;
	}

	return "";
}

BOOL func_93(BOOL bParam0) // Hash - 0xCA2EA26D ^0x45E6CA28
{
	return func_70(PLAYER::PLAYER_ID(), bParam0);
}

int func_94() // Hash - 0x997465FE ^0xFA83D249
{
	int i;
	int num;

	for (i = 0; i < func_30(); i = i + 1)
	{
		if (Global_1890001.f_7[i /*8*/].f_7 == 1)
			num = num + 1;
	}

	return num;
}

void func_95(int iParam0, char* sParam1, float fParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Hash - 0x5F496D0E ^0x86F8205
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

void func_96() // Hash - 0xBAC16685 ^0x1CFB988C
{
	Global_1890001.f_1 = 0;
	func_97();
	return;
}

void func_97() // Hash - 0x54676713 ^0xB539148
{
	Global_1890001.f_5 = 0;
	return;
}

void func_98(var uParam0) // Hash - 0x4918B04C ^0x4918B04C
{
	*uParam0 = 0;
	return;
}

