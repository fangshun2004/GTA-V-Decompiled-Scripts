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
	char* sLocal_35 = NULL;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	float fLocal_40 = 0f;
	float fLocal_41 = 0f;
	float fLocal_42 = 0f;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	int iLocal_45 = 0;
	float fLocal_46 = 0f;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	float fLocal_50 = 0f;
	float fLocal_51 = 0f;
	var uLocal_52[20] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_73 = 0;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	bool bLocal_76 = 0;
	int iLocal_77 = 0;
	bool bLocal_78 = 0;
	var uLocal_79 = 0;
	float fLocal_80 = 0f;
	int iLocal_81 = 0;
	struct<3> Local_82 = { 0, 0, 0 } ;
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
	sLocal_35 = "NULL";
	fLocal_40 = 80f;
	fLocal_41 = 140f;
	fLocal_42 = 180f;
	iLocal_45 = 3;
	fLocal_46 = 0f;
	fLocal_50 = -0.0375f;
	fLocal_51 = 0.17f;
	fLocal_80 = 277.7314f;
	Local_82 = { -196.045f, -580.13f, 135.0004f };
	CAM::DO_SCREEN_FADE_OUT(800);
	func_16();
	while (true)
	{
		GRAPHICS::DISABLE_OCCLUSION_THIS_FRAME();
		func_15();
		if (func_7() || uLocal_79)
		{
			func_3();
		}
		if (!iLocal_75)
		{
			if (!iLocal_74 && CAM::IS_SCREEN_FADED_OUT())
			{
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Local_82, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), fLocal_80);
				STREAMING::NEW_LOAD_SCENE_START_SPHERE(Local_82, 2500f, 0);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				iLocal_74 = 1;
			}
			else if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
			{
				if (!bLocal_78)
				{
					bLocal_78 = func_2();
				}
				else if (!bLocal_76)
				{
					bLocal_76 = func_1();
				}
				else
				{
					CAM::DO_SCREEN_FADE_IN(800);
					iLocal_75 = 1;
				}
			}
		}
	}
}

int func_1()
{
	if (!INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iLocal_81, "garage_decor_01"))
	{
		INTERIOR::ACTIVATE_INTERIOR_ENTITY_SET(iLocal_81, "garage_decor_01");
	}
	else
	{
		INTERIOR::REFRESH_INTERIOR(iLocal_81);
		return 1;
	}
	return 0;
}

int func_2()
{
	iLocal_81 = INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID());
	if (INTERIOR::IS_VALID_INTERIOR(iLocal_81))
	{
		if (!iLocal_77)
		{
			INTERIOR::PIN_INTERIOR_IN_MEMORY(iLocal_81);
			iLocal_77 = 1;
		}
		else if (INTERIOR::IS_INTERIOR_READY(iLocal_81))
		{
			INTERIOR::UNPIN_INTERIOR(iLocal_81);
			return 1;
		}
	}
	return 0;
}

void func_3()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iLocal_73)
	{
		func_5(iVar0);
		iVar0++;
	}
	func_4();
}

void func_4()
{
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_5(int iParam0)
{
	func_6(&(uLocal_52[iParam0]));
	NETWORK::RESERVE_NETWORK_MISSION_VEHICLES((NETWORK::GET_NUM_RESERVED_MISSION_VEHICLES(false, 0) - 1));
}

void func_6(var uParam0)
{
	int iVar0;
	
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
	{
		if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(*uParam0))
		{
		}
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(*uParam0))
	{
		iVar0 = NETWORK::NET_TO_ENT(*uParam0);
		ENTITY::DELETE_ENTITY(&iVar0);
	}
}

int func_7()
{
	if (Global_1575066 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 1;
		}
	}
	if (func_14())
	{
		return 1;
	}
	if (Global_2699678)
	{
		return 1;
	}
	if (func_13())
	{
		return 1;
	}
	if (func_12(159))
	{
		if (!func_11())
		{
			return 1;
		}
	}
	if (func_12(157))
	{
		return 1;
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return 1;
	}
	if (func_8() != 0)
	{
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(func_8()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_8()
{
	switch (func_10())
	{
		case 0:
			return func_9();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_9()
{
	switch (Global_2699787)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_10()
{
	return Global_33815;
}

bool func_11()
{
	return Global_2685152.f_726;
}

int func_12(int iParam0)
{
	if (SCRIPT::GET_EVENT_EXISTS(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_13()
{
	return Global_2697072;
}

bool func_14()
{
	return Global_2685152.f_721;
}

void func_15()
{
	SYSTEM::WAIT(0);
}

void func_16()
{
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(32, false, -1);
	func_18(0, -1, 0);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&uLocal_52, 21, 0);
	if (!func_17())
	{
		func_3();
	}
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	if (!STREAMING::IS_IPL_ACTIVE("imp_dt1_02_cargarage_a"))
	{
		STREAMING::REQUEST_IPL("imp_dt1_02_cargarage_a");
	}
}

int func_17()
{
	int iVar0;
	
	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 0;
		}
		if (NETWORK::NETWORK_HAS_RECEIVED_HOST_BROADCAST_DATA())
		{
			return 1;
		}
		if (func_14())
		{
			return 0;
		}
		if (func_12(157))
		{
			return 0;
		}
		if (iVar0 >= 3600)
		{
			return 0;
		}
		SYSTEM::WAIT(0);
	}
	return 0;
}

int func_18(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_4();
			}
			else
			{
				return 0;
			}
		}
		if (!func_19(0))
		{
			if (iParam0 == 0)
			{
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (!bParam2)
					{
						func_4();
					}
					else
					{
						return 0;
					}
				}
				if (func_14())
				{
					if (!bParam2)
					{
						func_4();
					}
					else
					{
						return 0;
					}
				}
				if (func_12(157))
				{
					if (!bParam2)
					{
						func_4();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!NETWORK::NETWORK_IS_IN_SESSION())
			{
				if (!bParam2)
				{
					func_4();
				}
				else
				{
					return 0;
				}
			}
		}
		SYSTEM::WAIT(0);
		iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	}
	if (iParam1 > -1)
	{
		Global_1574669 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (!bParam2)
			{
				func_4();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!NETWORK::NETWORK_IS_IN_SESSION())
	{
		if (!bParam2)
		{
			func_4();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

int func_19(int iParam0)
{
	if (iParam0 && Global_1575066)
	{
		if (func_20())
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	return Global_1575066;
}

int func_20()
{
	if (func_21())
	{
		return 1;
	}
	return Global_1575069;
	return 0;
}

int func_21()
{
	if (Global_1575066 || Global_1575073)
	{
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("fm_deathmatch_controler")) != 0)
		{
			return 1;
		}
	}
	return 0;
}

