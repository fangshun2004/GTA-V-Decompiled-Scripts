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
	int iLocal_20 = 0;
	int iLocal_21 = 0;
	BOOL bLocal_22 = 0;
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

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(83))
		func_6();

	if (!Global_1 && !MISC::IS_PC_VERSION() && MISC::HAS_GAME_INSTALLED_THIS_SESSION())
	{
		SCRIPT::SET_NO_LOADING_SCREEN(true);
	
		if (!CAM::IS_SCREEN_FADED_OUT())
			if (!CAM::IS_SCREEN_FADING_OUT())
				CAM::DO_SCREEN_FADE_OUT(800);
	
		iLocal_20 = unk_0x67D02A194A2FC2BD("MP_BIG_MESSAGE_FREEMODE");
		iLocal_21 = unk_0x67D02A194A2FC2BD("INSTRUCTIONAL_BUTTONS");
	
		while (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_20) || !GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_21))
		{
			SYSTEM::WAIT(0);
		}
	
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_20, "SHOW_CENTERED_MP_MESSAGE");
		func_5(_("Install Complete"));
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_21, "SET_DATA_SLOT_EMPTY");
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_21, "SET_DATA_SLOT");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
		func_4(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(FRONTEND_CONTROL, INPUT_FRONTEND_ACCEPT, true));
		func_5(_("Continue"));
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_21, "DRAW_INSTRUCTIONAL_BUTTONS");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	
		while (!CAM::IS_SCREEN_FADED_OUT())
		{
			SYSTEM::WAIT(0);
		}
	
		SCRIPT::SHUTDOWN_LOADING_SCREEN();
	
		while (!bLocal_22)
		{
			HUD::HIDE_LOADING_ON_FADE_THIS_FRAME();
			GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(7);
			GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(iLocal_20, 255, 255, 255, 0, 0);
			GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(iLocal_21, 255, 255, 255, 0, 0);
		
			if (PAD::IS_CONTROL_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_ACCEPT))
				bLocal_22 = true;
		
			SYSTEM::WAIT(0);
		}
	
		SCRIPT::SET_NO_LOADING_SCREEN(false);
		func_3(1, 1);
		func_1();
	}

	Global_78828.f_1 = 0;
	MISC::SET_BIT(&(Global_113648.f_10018.f_25), 0);
	func_6();
	return;
}

int func_1() // Hash - 0x9482CBBF ^0x8B17A994
{
	if (func_2(false))
		return 0;

	if (Global_100720.f_8)
		if (Global_100720.f_10 > 0)
			return 0;
	else if (Global_100720.f_10 > 1)
		return 0;

	Global_100720.f_10 = Global_100720.f_10 + 1;
	return 1;
}

BOOL func_2(BOOL bParam0) // Hash - 0x15889021 ^0xE7262364
{
	if (!bParam0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("BENCHMARK")) > 0)
		return true;

	return IS_BIT_SET(Global_78807, 0);
}

void func_3(int iParam0, int iParam1) // Hash - 0x277DE552 ^0x65283938
{
	Global_100720.f_7 = iParam0;
	Global_100720.f_8 = iParam1;
	return;
}

void func_4(const char* sParam0) // Hash - 0x690E6520 ^0x509C71F3
{
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_PLAYER_NAME_STRING(sParam0);
	return;
}

void func_5(char* sParam0) // Hash - 0x8E2F5FE2 ^0x29D9D432
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	return;
}

void func_6() // Hash - 0xDDB78FCB ^0xD0305689
{
	if (iLocal_20 != 0)
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&iLocal_20);

	if (iLocal_21 != 0)
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&iLocal_21);

	GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(4);
	SCRIPT::SET_NO_LOADING_SCREEN(false);
	SCRIPT::TERMINATE_THIS_THREAD();
	return;
}

