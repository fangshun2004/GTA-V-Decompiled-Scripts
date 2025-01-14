#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	BOOL bLocal_2 = 0;
#endregion

void main() // Hash - 0xBC22026E ^0xEE75B136
{
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(83))
		func_10();

	STREAMING::SET_GAME_PAUSES_FOR_STREAMING(false);
	MISC::CLEAR_BIT(&(Global_113648.f_10018.f_25), 1);
	func_7();
	SCRIPT::SET_NO_LOADING_SCREEN(true);

	if (!CAM::IS_SCREEN_FADED_OUT())
		CAM::DO_SCREEN_FADE_OUT(0);

	iLocal_0 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("OPENING_CREDITS");

	while (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_0))
	{
		func_7();
		SYSTEM::WAIT(0);
	}

	while (!CAM::IS_SCREEN_FADED_OUT())
	{
		func_7();
		SYSTEM::WAIT(0);
	}

	func_6("TITLE", 0f, 1f, 1.5f, 1f, 0f, 1.5f, 15f);
	iLocal_1 = MISC::GET_GAME_TIMER() + 8000 + SYSTEM::ROUND(2f * 1000f);

	while (!CUTSCENE::IS_CUTSCENE_PLAYING())
	{
		func_7();
	
		if (!IS_BIT_SET(Global_113648.f_10018.f_25, 1))
		{
			GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(iLocal_0, 255, 255, 255, 255, 0);
		
			if (!bLocal_2)
			{
				if (MISC::GET_GAME_TIMER() > iLocal_1)
				{
					func_5("TITLE");
					bLocal_2 = true;
					iLocal_1 = MISC::GET_GAME_TIMER() + SYSTEM::ROUND(2f * 1000f);
				}
			}
			else if (MISC::GET_GAME_TIMER() > iLocal_1)
			{
				MISC::SET_BIT(&(Global_113648.f_10018.f_25), 1);
			
				if (MISC::HAS_GAME_INSTALLED_THIS_SESSION() || MISC::IS_PC_VERSION())
				{
					func_4(1, 1);
					func_2();
				}
				else
				{
					func_1();
				}
			}
		}
	
		SYSTEM::WAIT(0);
	}

	func_10();
	return;
}

void func_1() // Hash - 0xEB0D43DD ^0xEB0D43DD
{
	Global_100720 = 1;
	return;
}

int func_2() // Hash - 0x9482CBBF ^0x8B17A994
{
	if (func_3(false))
		return 0;

	if (Global_100720.f_8)
		if (Global_100720.f_10 > 0)
			return 0;
	else if (Global_100720.f_10 > 1)
		return 0;

	Global_100720.f_10 = Global_100720.f_10 + 1;
	return 1;
}

BOOL func_3(BOOL bParam0) // Hash - 0x15889021 ^0xE7262364
{
	if (!bParam0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("BENCHMARK")) > 0)
		return true;

	return IS_BIT_SET(Global_78807, 0);
}

void func_4(int iParam0, int iParam1) // Hash - 0x277DE552 ^0x65283938
{
	Global_100720.f_7 = iParam0;
	Global_100720.f_8 = iParam1;
	return;
}

void func_5(char* sParam0) // Hash - 0xF5882334 ^0xF615DB95
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_0, "HIDE_LOGO");
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	return;
}

void func_6(char* sParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, float fParam7) // Hash - 0xEC007871 ^0x26CD3900
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_0, "SHOW_LOGO");
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fParam2);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fParam3);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fParam4);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fParam5);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fParam6);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fParam7);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	return;
}

void func_7() // Hash - 0xA148D3AE ^0xEC0CBE6C
{
	HUD::HIDE_LOADING_ON_FADE_THIS_FRAME();
	PAD::DISABLE_CONTROL_ACTION(FRONTEND_CONTROL, INPUT_FRONTEND_PAUSE, true);
	GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(7);
	func_8();
	return;
}

void func_8() // Hash - 0xF4F02F08 ^0x941C5F21
{
	RECORDING::REPLAY_PREVENT_RECORDING_THIS_FRAME();
	func_9();
	return;
}

void func_9() // Hash - 0x9A142650 ^0x461C197C
{
	Global_23131.f_134 = 1;
	return;
}

void func_10() // Hash - 0xEAFE49D ^0x24AA153B
{
	MISC::SET_BIT(&(Global_113648.f_10018.f_25), 1);

	if (iLocal_0 != 0)
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&iLocal_0);

	GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(4);
	SCRIPT::SET_NO_LOADING_SCREEN(false);
	STREAMING::SET_GAME_PAUSES_FOR_STREAMING(true);
	SCRIPT::TERMINATE_THIS_THREAD();
	return;
}

