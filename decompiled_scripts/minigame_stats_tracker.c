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
	char* sLocal_20 = 0;
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
	int iLocal_45 = 0;
	Player plLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	const char* sScriptParam_50 = 0;
	var uScriptParam_51 = 0;
	var uScriptParam_52 = 1132396544;
	var uScriptParam_53 = 1132396544;
	var uScriptParam_54 = 1132396544;
	var uScriptParam_55 = 0;
	var uScriptParam_56 = -1082130432;
	var uScriptParam_57 = 0;
	var uScriptParam_58 = 0;
	var uScriptParam_59 = 8;
	var uScriptParam_60 = 0;
	var uScriptParam_61 = 0;
	var uScriptParam_62 = 0;
	var uScriptParam_63 = 0;
	var uScriptParam_64 = 0;
	var uScriptParam_65 = 0;
	var uScriptParam_66 = 0;
	var uScriptParam_67 = 0;
	var uScriptParam_68 = 0;
	var uScriptParam_69 = 0;
	var uScriptParam_70 = 0;
	var uScriptParam_71 = 0;
	var uScriptParam_72 = 0;
	var uScriptParam_73 = 0;
	var uScriptParam_74 = 0;
	var uScriptParam_75 = 0;
	var uScriptParam_76 = 0;
	var uScriptParam_77 = 0;
	var uScriptParam_78 = 0;
	var uScriptParam_79 = 0;
	var uScriptParam_80 = 0;
	var uScriptParam_81 = 0;
	var uScriptParam_82 = 0;
	var uScriptParam_83 = 0;
	var uScriptParam_84 = 0;
	var uScriptParam_85 = 0;
	var uScriptParam_86 = 0;
	var uScriptParam_87 = 0;
	var uScriptParam_88 = 0;
	var uScriptParam_89 = 0;
	var uScriptParam_90 = 0;
	var uScriptParam_91 = 0;
	var uScriptParam_92 = 0;
	var uScriptParam_93 = 0;
	var uScriptParam_94 = 0;
	var uScriptParam_95 = 0;
	var uScriptParam_96 = 0;
	var uScriptParam_97 = 0;
	var uScriptParam_98 = 0;
	var uScriptParam_99 = 0;
	var uScriptParam_100 = 0;
	var uScriptParam_101 = 0;
	var uScriptParam_102 = 0;
	var uScriptParam_103 = 0;
	var uScriptParam_104 = 0;
	var uScriptParam_105 = 0;
	var uScriptParam_106 = 0;
	var uScriptParam_107 = 0;
	var uScriptParam_108 = 0;
	var uScriptParam_109 = 0;
	var uScriptParam_110 = 0;
	var uScriptParam_111 = 0;
	var uScriptParam_112 = 0;
	var uScriptParam_113 = 0;
	var uScriptParam_114 = 0;
	var uScriptParam_115 = 0;
	var uScriptParam_116 = -1;
	var uScriptParam_117 = 1092616192;
#endregion

void main() // Position - 0x0 Hash - 0x5D84F89F ^0x5D84F89F
{
	int i;

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
	sLocal_20 = "NULL";
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

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
		func_19();

	while (true)
	{
		switch (iLocal_45)
		{
			case 0:
				plLocal_46 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("mission_complete");
				iLocal_45 = 1;
				break;
		
			case 1:
				if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(plLocal_46))
					iLocal_45 = 2;
				break;
		
			case 2:
				GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_STRING(plLocal_46, "SET_MISSION_TITLE", sScriptParam_50, sScriptParam_50.f_1, 0, 0, 0);
				GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(plLocal_46, "SET_MISSION_TITLE_COLOUR", sScriptParam_50.f_2, sScriptParam_50.f_2, sScriptParam_50.f_2, -1082130432, -1082130432);
			
				if (sScriptParam_50.f_5.f_1 != -1f && !MISC::IS_STRING_NULL(sScriptParam_50.f_5.f_2))
					GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER_AND_STRING(plLocal_46, "SET_TOTAL", SYSTEM::TO_FLOAT(sScriptParam_50.f_5), sScriptParam_50.f_5.f_1, -1f, -1f, -1f, sScriptParam_50.f_5.f_2, 0, 0, 0, 0);
			
				GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(plLocal_46, "SET_MEDAL", SYSTEM::TO_FLOAT(sScriptParam_50.f_5), -1082130432, -1082130432, -1082130432, -1082130432);
				GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(plLocal_46, "SET_SOCIAL_CLUB_INFO", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
			
				for (i = 0; i < sScriptParam_50.f_66 + 1; i = i + 1)
				{
					NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(plLocal_46, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(sScriptParam_50.f_9[i /*7*/]);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(sScriptParam_50.f_9[i /*7*/].f_1);
				
					if (sScriptParam_50.f_9[i /*7*/].f_2 == 4)
					{
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(SYSTEM::FLOOR(sScriptParam_50.f_9[i /*7*/].f_3 * 1000f), 6);
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					
						if (!MISC::IS_STRING_NULL(sScriptParam_50.f_9[i /*7*/].f_5))
							func_18(sScriptParam_50.f_9[i /*7*/].f_5);
					}
					else if (sScriptParam_50.f_9[i /*7*/].f_2 == 8)
					{
						if (!MISC::IS_STRING_NULL(sScriptParam_50.f_9[i /*7*/].f_5) && !MISC::IS_STRING_NULL(sScriptParam_50.f_9[i /*7*/].f_6))
						{
							GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sScriptParam_50.f_9[i /*7*/].f_6);
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sScriptParam_50.f_9[i /*7*/].f_5);
							GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
						}
					}
					else
					{
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(sScriptParam_50.f_9[i /*7*/].f_2);
					
						if (sScriptParam_50.f_9[i /*7*/].f_3 % 1f == 0f)
						{
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(sScriptParam_50.f_9[i /*7*/].f_3);
						}
						else
						{
							GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(_("~1~"));
							HUD::ADD_TEXT_COMPONENT_FLOAT(sScriptParam_50.f_9[i /*7*/].f_3, 2);
							GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
						}
					
						if (sScriptParam_50.f_9[i /*7*/].f_4 % 1f == 0f)
						{
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(sScriptParam_50.f_9[i /*7*/].f_4);
						}
						else
						{
							GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(_("~1~"));
							HUD::ADD_TEXT_COMPONENT_FLOAT(sScriptParam_50.f_9[i /*7*/].f_4, 2);
							GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
						}
					
						if (!MISC::IS_STRING_NULL(sScriptParam_50.f_9[i /*7*/].f_5))
							func_18(sScriptParam_50.f_9[i /*7*/].f_5);
					
						if (!MISC::IS_STRING_NULL(sScriptParam_50.f_9[i /*7*/].f_6))
							func_18(sScriptParam_50.f_9[i /*7*/].f_6);
					}
				
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
			
				if (sScriptParam_50.f_5 != 0 && !MISC::IS_STRING_NULL(sScriptParam_50.f_5.f_2))
				{
					NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(plLocal_46, "SET_TOTAL");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(sScriptParam_50.f_5);
				
					if (!MISC::IS_STRING_NULL(sScriptParam_50.f_5.f_3))
						func_18(sScriptParam_50.f_5.f_3);
					else
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(sScriptParam_50.f_5.f_1);
				
					func_18(sScriptParam_50.f_5.f_2);
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
			
				NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(plLocal_46, "DRAW_MENU_LIST");
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				func_12(1);
				func_9(&uLocal_47);
			
				if (!func_8(Global_113648.f_19099, 4096))
					func_6(&(Global_113648.f_19099), 4096);
			
				iLocal_45 = 3;
				break;
		
			case 3:
				if (func_2(&uLocal_47) > sScriptParam_50.f_67 && sScriptParam_50.f_67 != -1f || CAM::IS_SCREEN_FADED_OUT() || Global_32308)
				{
					func_19();
				}
				else
				{
					func_1(1);
					GRAPHICS::DRAW_SCALEFORM_MOVIE(plLocal_46, 0.1495f, 0.3159f, 0.2021f, 0.5111f, 255, 255, 255, 0, 0);
				
					if (HUD::IS_HUD_COMPONENT_ACTIVE(HUD_HELP_TEXT))
						HUD::HIDE_HUD_COMPONENT_THIS_FRAME(HUD_HELP_TEXT);
				}
				break;
		}
	
		SYSTEM::WAIT(0);
	}

	func_19();
	return;
}

void func_1(int iParam0) // Position - 0x447 Hash - 0xFFF39126 ^0xFFF39126
{
	Global_78819 = iParam0;
	Global_78820 = iParam0;
	return;
}

float func_2(int* piParam0) // Position - 0x45B Hash - 0x4CA081DF ^0xE7D9DC6
{
	if (func_5(piParam0))
		if (func_4(piParam0))
			return piParam0->f_2;
		else
			return func_3(IS_BIT_SET(*piParam0, 4)) - piParam0->f_1;

	return piParam0->f_1;
}

float func_3(BOOL bParam0) // Position - 0x497 Hash - 0xB0FB4432 ^0x9D798691
{
	float num;
	float num2;
	int networkTime;
	float num3;
	float num4;

	if (bParam0)
	{
		num = SYSTEM::TO_FLOAT(MISC::GET_GAME_TIMER());
		num2 = num / 1000f;
		return num2;
	}

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		networkTime = NETWORK::GET_NETWORK_TIME();
		num3 = SYSTEM::TO_FLOAT(networkTime);
		num4 = num3 / 1000f;
		return num4;
	}

	return SYSTEM::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f;
}

BOOL func_4(int* piParam0) // Position - 0x4EF Hash - 0x58F53CD ^0x58F53CD
{
	return IS_BIT_SET(*piParam0, 2);
}

BOOL func_5(int* piParam0) // Position - 0x4FC Hash - 0xA8A91C80 ^0xA8A91C80
{
	return IS_BIT_SET(*piParam0, 1);
}

void func_6(int iParam0, int iParam1) // Position - 0x509 Hash - 0xF55E891F ^0xF55E891F
{
	func_7(iParam0, iParam1);
	return;
}

void func_7(int iParam0, int iParam1) // Position - 0x519 Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*iParam0 = *iParam0 || iParam1;
	return;
}

BOOL func_8(int iParam0, int iParam1) // Position - 0x52A Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

void func_9(int* piParam0) // Position - 0x539 Hash - 0x227D76A6 ^0x227D76A6
{
	if (!func_5(piParam0))
		func_10(piParam0);

	return;
}

void func_10(int* piParam0) // Position - 0x551 Hash - 0x879BC8E8 ^0x879BC8E8
{
	func_11(piParam0, 0f);
	return;
}

void func_11(int* piParam0, float fParam1) // Position - 0x560 Hash - 0xED66BE55 ^0x9F6586C1
{
	piParam0->f_1 = func_3(IS_BIT_SET(*piParam0, 4)) - fParam1;
	MISC::SET_BIT(piParam0, 1);
	MISC::CLEAR_BIT(piParam0, 2);
	piParam0->f_2 = 0f;
	return;
}

void func_12(int iParam0) // Position - 0x58B Hash - 0x4066FEF5 ^0x9787FBDA
{
	if (func_17())
		return;

	if (Global_20584)
		if (func_16())
			func_14(true, true);
		else
			func_14(false, false);

	if (Global_20383.f_1 == 10 || Global_20383.f_1 == 9)
		MISC::SET_BIT(&Global_8254, 16);

	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);

	Global_21725 = 5;

	if (iParam0 == 1)
		MISC::SET_BIT(&Global_8253, 30);
	else
		MISC::CLEAR_BIT(&Global_8253, 30);

	if (!func_13())
		Global_20383.f_1 = 3;

	return;
}

BOOL func_13() // Position - 0x615 Hash - 0xD140D54A ^0xE638D98F
{
	if (Global_20383.f_1 == 1 || Global_20383.f_1 == 0)
		return true;

	return false;
}

void func_14(BOOL bParam0, BOOL bParam1) // Position - 0x63C Hash - 0xF40FC178 ^0xA6F60F17
{
	if (bParam0)
	{
		if (func_15(0))
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

BOOL func_15(int iParam0) // Position - 0x6B0 Hash - 0xE8921B44 ^0x4F063755
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

BOOL func_16() // Position - 0x707 Hash - 0x8DF3D75D ^0x8DF3D75D
{
	return IS_BIT_SET(Global_1962996, 5);
}

BOOL func_17() // Position - 0x715 Hash - 0xC41437CB ^0xC41437CB
{
	return IS_BIT_SET(Global_1962996, 19);
}

void func_18(const char* sParam0) // Position - 0x724 Hash - 0x8E2F5FE2 ^0x29D9D432
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	return;
}

void func_19() // Position - 0x736 Hash - 0xB1B90BA4 ^0x5CCB8FEC
{
	GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&plLocal_46);
	Global_32308 = false;
	func_1(0);
	SCRIPT::TERMINATE_THIS_THREAD();
	return;
}

