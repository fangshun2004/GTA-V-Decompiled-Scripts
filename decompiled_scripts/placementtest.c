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
	int iLocal_46 = 0;
#endregion

void main() // Hash - 0x5D84F89F ^0x5D84F89F
{
	int scaleformHandle;

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
	scaleformHandle = func_13();

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
		SCRIPT::TERMINATE_THIS_THREAD();

	while (true)
	{
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(scaleformHandle))
		{
			switch (iLocal_45)
			{
				case 0:
					func_11(&scaleformHandle, "OFFR_BLIP_R5", 255, 0, 255, 255, false);
					func_10(&scaleformHandle);
					iLocal_46 = MISC::GET_GAME_TIMER();
					iLocal_45 = 1;
					break;
			
				case 1:
					if (MISC::GET_GAME_TIMER() - iLocal_46 > 3000)
					{
						func_9(&scaleformHandle);
						iLocal_45 = 2;
					}
					break;
			}
		
			func_1(&scaleformHandle, false);
		}
	
		SYSTEM::WAIT(0);
	}

	return;
}

BOOL func_1(var uParam0, BOOL bParam1) // Hash - 0xD5E03AC ^0x85ABBFC6
{
	if (!func_8(&(uParam0->f_2)))
		func_6(&(uParam0->f_2));

	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(HUD_RETICLE);
	GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(1);
	GRAPHICS::DRAW_SCALEFORM_MOVIE(*uParam0, 0.5f, 0.5f, 1f, 1f, 255, 255, 255, 0, 0);

	if (bParam1)
		if (PAD::IS_CONTROL_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_ACCEPT))
			return false;

	if (uParam0->f_1 == -1)
		return true;

	if (func_3(&(uParam0->f_2)) * 1000f > SYSTEM::TO_FLOAT(uParam0->f_1))
	{
		func_2(&(uParam0->f_2));
		return false;
	}

	return true;
}

void func_2(var uParam0) // Hash - 0x4ECF353C ^0xF00161
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
	return;
}

float func_3(var uParam0) // Hash - 0x4CA081DF ^0xE7D9DC6
{
	if (func_8(uParam0))
		if (func_5(uParam0))
			return uParam0->f_2;
		else
			return func_4(IS_BIT_SET(*uParam0, 4)) - uParam0->f_1;

	return uParam0->f_1;
}

float func_4(BOOL bParam0) // Hash - 0xB0FB4432 ^0x9D798691
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

BOOL func_5(var uParam0) // Hash - 0x58F53CD ^0x58F53CD
{
	return IS_BIT_SET(*uParam0, 2);
}

void func_6(int* piParam0) // Hash - 0x879BC8E8 ^0x879BC8E8
{
	func_7(piParam0, 0f);
	return;
}

void func_7(int* piParam0, float fParam1) // Hash - 0xED66BE55 ^0x9F6586C1
{
	piParam0->f_1 = func_4(IS_BIT_SET(*piParam0, 4)) - fParam1;
	MISC::SET_BIT(piParam0, 1);
	MISC::CLEAR_BIT(piParam0, 2);
	piParam0->f_2 = 0f;
	return;
}

BOOL func_8(var uParam0) // Hash - 0xA8A91C80 ^0xA8A91C80
{
	return IS_BIT_SET(*uParam0, 1);
}

void func_9(var uParam0) // Hash - 0x33434D8D ^0x5672A02E
{
	uParam0->f_1 = 300;
	func_6(&(uParam0->f_2));
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SPLASH_TEXT_TRANSITION_OUT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(300);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	return;
}

void func_10(var uParam0) // Hash - 0x339707D0 ^0x67A39BDF
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SPLASH_TEXT_TRANSITION_IN");
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	return;
}

void func_11(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, BOOL bParam6) // Hash - 0x4FCE6CAB ^0xAF6875C9
{
	uParam0->f_1 = -1;
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SPLASH_TEXT_LABEL");
	func_12(sParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam4);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam5);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();

	if (bParam6)
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SPLASH_TEXT_TRANSITION_IN");
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}

	return;
}

void func_12(char* sParam0) // Hash - 0x8E2F5FE2 ^0x29D9D432
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	return;
}

int func_13() // Hash - 0x1B551749 ^0xDC427049
{
	return GRAPHICS::REQUEST_SCALEFORM_MOVIE("SPLASH_TEXT");
}

