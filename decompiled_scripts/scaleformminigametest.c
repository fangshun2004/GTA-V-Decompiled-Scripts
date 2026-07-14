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
	int iLocal_35 = 0;
	int iLocal_36 = 0;
	int iLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	bool bLocal_40 = 0;
	bool bLocal_41 = 0;
	float fLocal_42 = 0f;
	bool bLocal_43 = 0;
	bool bLocal_44 = 0;
	float fLocal_45 = 0f;
	bool bLocal_46 = 0;
	bool bLocal_47 = 0;
	float fLocal_48 = 0f;
	bool bLocal_49 = 0;
	bool bLocal_50 = 0;
	float fLocal_51 = 0f;
	bool bLocal_52 = 0;
	bool bLocal_53 = 0;
	float fLocal_54 = 0f;
	bool bLocal_55 = 0;
	bool bLocal_56 = 0;
	float fLocal_57 = 0f;
	bool bLocal_58 = 0;
	bool bLocal_59 = 0;
	float fLocal_60 = 0f;
	bool bLocal_61 = 0;
	bool bLocal_62 = 0;
	float fLocal_63 = 0f;
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
	iLocal_37 = HUD::ADD_BLIP_FOR_COORD(100f, 100f, 30f);
	iLocal_39 = 1;
	fLocal_42 = 0f;
	fLocal_45 = 0f;
	fLocal_48 = 0f;
	fLocal_51 = 0f;
	fLocal_54 = 0f;
	fLocal_57 = 0f;
	fLocal_60 = 0f;
	fLocal_63 = 0f;
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		CAM::DO_SCREEN_FADE_IN(500);
	}
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		func_2();
	}
	iLocal_35 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("p_bubblegum");
	while (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_35))
	{
		SYSTEM::WAIT(0);
	}
	while (true)
	{
		if (iLocal_38 == 1)
		{
		}
		if (iLocal_39 == 1)
		{
			iLocal_39 = 0;
			iLocal_36 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", true);
			if (CAM::DOES_CAM_EXIST(iLocal_36))
			{
				CAM::SET_CAM_PARAMS(iLocal_36, -160.6632f, -1072.144f, -1615.471f, -89.4999f, -0.2863f, 58.1189f, 45f, 0, 1, 1, 2);
				CAM::SET_CAM_NEAR_CLIP(iLocal_36, 0.01f);
				CAM::SET_CAM_FAR_CLIP(iLocal_36, 0.02f);
				CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
			}
			HUD::SET_BLIP_SPRITE(iLocal_37, 66);
		}
		iLocal_38 = 1;
		GRAPHICS::DRAW_SCALEFORM_MOVIE(iLocal_35, 0.5f, 0.5f, 1f, 1f, 255, 255, 255, 0, 0);
		func_1(iLocal_35);
		SYSTEM::WAIT(0);
	}
}

void func_1(int iParam0)
{
	if (Global_21628 == 0)
	{
		if (PAD::IS_CONTROL_PRESSED(2, 189) || PAD::IS_CONTROL_PRESSED(2, 190))
		{
			Global_21628 = 1;
			SYSTEM::SETTIMERA(0);
		}
	}
	else if (SYSTEM::TIMERA() > 50)
	{
		Global_21628 = 0;
	}
	if (Global_21628 == 0)
	{
		if (PAD::IS_CONTROL_JUST_PRESSED(2, 189))
		{
			bLocal_40 = true;
			fLocal_42 = 1f;
		}
		if (PAD::IS_CONTROL_PRESSED(2, 189))
		{
			bLocal_40 = true;
			fLocal_42 = 1f;
		}
		if (!PAD::IS_CONTROL_PRESSED(2, 189))
		{
			bLocal_40 = false;
			fLocal_42 = 0f;
		}
		if (!bLocal_40 == bLocal_41)
		{
			bLocal_41 = bLocal_40;
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_INPUT_EVENT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(10);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fLocal_42);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
		if (PAD::IS_CONTROL_JUST_PRESSED(2, 190))
		{
			bLocal_43 = true;
			fLocal_45 = 1f;
		}
		if (PAD::IS_CONTROL_PRESSED(2, 190))
		{
			bLocal_43 = true;
			fLocal_45 = 1f;
		}
		if (!PAD::IS_CONTROL_PRESSED(2, 190))
		{
			bLocal_43 = false;
			fLocal_45 = 0f;
		}
		if (!bLocal_43 == bLocal_44)
		{
			bLocal_44 = bLocal_43;
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_INPUT_EVENT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(11);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fLocal_45);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
		if (PAD::IS_CONTROL_JUST_PRESSED(2, 188))
		{
			bLocal_46 = true;
			fLocal_48 = 1f;
		}
		if (PAD::IS_CONTROL_PRESSED(2, 188))
		{
			bLocal_46 = true;
			fLocal_48 = 1f;
		}
		if (!PAD::IS_CONTROL_PRESSED(2, 188))
		{
			bLocal_46 = false;
			fLocal_48 = 0f;
		}
		if (!bLocal_46 == bLocal_47)
		{
			bLocal_47 = bLocal_46;
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_INPUT_EVENT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(8);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fLocal_48);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
		if (PAD::IS_CONTROL_JUST_PRESSED(2, 187))
		{
			bLocal_49 = true;
			fLocal_51 = 1f;
		}
		if (PAD::IS_CONTROL_PRESSED(2, 187))
		{
			bLocal_49 = true;
			fLocal_51 = 1f;
		}
		if (!PAD::IS_CONTROL_PRESSED(2, 187))
		{
			bLocal_49 = false;
			fLocal_51 = 0f;
		}
		if (!bLocal_49 == bLocal_50)
		{
			bLocal_50 = bLocal_49;
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_INPUT_EVENT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(9);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fLocal_51);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
		if (PAD::IS_CONTROL_JUST_PRESSED(2, 202))
		{
			bLocal_52 = true;
			fLocal_54 = 1f;
		}
		if (PAD::IS_CONTROL_PRESSED(2, 202))
		{
			bLocal_52 = true;
			fLocal_54 = 1f;
		}
		if (!PAD::IS_CONTROL_PRESSED(2, 202))
		{
			bLocal_52 = false;
			fLocal_54 = 0f;
		}
		if (!bLocal_52 == bLocal_53)
		{
			bLocal_53 = bLocal_52;
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_INPUT_EVENT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(17);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fLocal_54);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
		if (PAD::IS_CONTROL_JUST_PRESSED(2, 204))
		{
			bLocal_55 = true;
			fLocal_57 = 1f;
		}
		if (PAD::IS_CONTROL_PRESSED(2, 204))
		{
			bLocal_55 = true;
			fLocal_57 = 1f;
		}
		if (!PAD::IS_CONTROL_PRESSED(2, 204))
		{
			bLocal_55 = false;
			fLocal_57 = 0f;
		}
		if (!bLocal_55 == bLocal_56)
		{
			bLocal_56 = bLocal_55;
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_INPUT_EVENT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(15);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fLocal_57);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
		if (PAD::IS_CONTROL_JUST_PRESSED(2, 201))
		{
			bLocal_58 = true;
			fLocal_60 = 1f;
		}
		if (PAD::IS_CONTROL_PRESSED(2, 201))
		{
			bLocal_58 = true;
			fLocal_60 = 1f;
		}
		if (!PAD::IS_CONTROL_PRESSED(2, 201))
		{
			bLocal_58 = false;
			fLocal_60 = 0f;
		}
		if (!bLocal_58 == bLocal_59)
		{
			bLocal_59 = bLocal_58;
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_INPUT_EVENT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(16);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fLocal_60);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
		if (PAD::IS_CONTROL_JUST_PRESSED(2, 203))
		{
			bLocal_61 = true;
			fLocal_63 = 1f;
		}
		if (PAD::IS_CONTROL_PRESSED(2, 203))
		{
			bLocal_61 = true;
			fLocal_63 = 1f;
		}
		if (!PAD::IS_CONTROL_PRESSED(2, 203))
		{
			bLocal_61 = false;
			fLocal_63 = 0f;
		}
		if (!bLocal_61 == bLocal_62)
		{
			bLocal_62 = bLocal_61;
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_INPUT_EVENT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(14);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fLocal_63);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
	}
}

void func_2()
{
	if (CAM::DOES_CAM_EXIST(iLocal_36))
	{
		CAM::DESTROY_CAM(iLocal_36, false);
	}
	CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
	func_3(0);
	MISC::SET_GAME_PAUSED(false);
	HUD::CLEAR_HELP(true);
	GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&iLocal_35);
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_3(bool bParam0)
{
	if (bParam0)
	{
		func_10();
		if (Global_21649.f_1 == 10 || Global_21649.f_1 == 9)
		{
			MISC::SET_BIT(&Global_9503, 16);
		}
		Global_21649.f_1 = 1;
		if (func_9(0))
		{
			func_4(0);
		}
	}
	else if (Global_21649.f_1 == 1)
	{
		if (!Global_21649.f_1 == 0)
		{
			Global_21649.f_1 = 3;
		}
	}
}

void func_4(int iParam0)
{
	if (func_8())
	{
		return;
	}
	if (Global_21882)
	{
		if (func_7())
		{
			func_6(1, 1);
		}
		else
		{
			func_6(0, 0);
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
	if (!func_5())
	{
		Global_21649.f_1 = 3;
	}
}

int func_5()
{
	if (Global_21649.f_1 == 1 || Global_21649.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_6(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_9(0))
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

bool func_7()
{
	return BitTest(Global_1964670, 5);
}

bool func_8()
{
	return BitTest(Global_1964670, 19);
}

int func_9(int iParam0)
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

void func_10()
{
	if (Global_21649.f_1 == 9 || Global_21649.f_1 == 10)
	{
		Global_23076 = 0;
		Global_23072 = 1;
	}
}

